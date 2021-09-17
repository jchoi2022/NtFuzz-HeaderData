#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAudioProcessingObjectRT IAudioProcessingObjectRT;
typedef interface IAudioProcessingObjectVBR IAudioProcessingObjectVBR;
typedef interface IAudioProcessingObjectConfiguration IAudioProcessingObjectConfiguration;
typedef interface IAudioProcessingObject IAudioProcessingObject;
typedef interface IAudioDeviceModulesClient IAudioDeviceModulesClient;
typedef interface IAudioSystemEffects IAudioSystemEffects;
typedef interface IAudioSystemEffects2 IAudioSystemEffects2;
typedef interface IAudioSystemEffectsCustomFormats IAudioSystemEffectsCustomFormats;
#include "oaidl.h"
#include "ocidl.h"
#include "mmdeviceapi.h"
#include "audiomediatype.h"
#include "AudioAPOTypes.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum APO_CONNECTION_BUFFER_TYPE
    {
        APO_CONNECTION_BUFFER_TYPE_ALLOCATED = 0,
        APO_CONNECTION_BUFFER_TYPE_EXTERNAL = 1,
        APO_CONNECTION_BUFFER_TYPE_DEPENDANT = 2
    } APO_CONNECTION_BUFFER_TYPE;
typedef struct APO_CONNECTION_DESCRIPTOR
    {
    APO_CONNECTION_BUFFER_TYPE Type;
    UINT_PTR pBuffer;
    UINT32 u32MaxFrameCount;
    IAudioMediaType *pFormat;
    UINT32 u32Signature;
    } APO_CONNECTION_DESCRIPTOR;
typedef
enum APO_FLAG
    {
        APO_FLAG_NONE = 0,
        APO_FLAG_INPLACE = 0x1,
        APO_FLAG_SAMPLESPERFRAME_MUST_MATCH = 0x2,
        APO_FLAG_FRAMESPERSECOND_MUST_MATCH = 0x4,
        APO_FLAG_BITSPERSAMPLE_MUST_MATCH = 0x8,
        APO_FLAG_MIXER = 0x10,
        APO_FLAG_DEFAULT = ( ( APO_FLAG_SAMPLESPERFRAME_MUST_MATCH | APO_FLAG_FRAMESPERSECOND_MUST_MATCH ) | APO_FLAG_BITSPERSAMPLE_MUST_MATCH )
    } APO_FLAG;
typedef struct APO_REG_PROPERTIES
    {
    CLSID clsid;
    APO_FLAG Flags;
    WCHAR szFriendlyName[ 256 ];
    WCHAR szCopyrightInfo[ 256 ];
    UINT32 u32MajorVersion;
    UINT32 u32MinorVersion;
    UINT32 u32MinInputConnections;
    UINT32 u32MaxInputConnections;
    UINT32 u32MinOutputConnections;
    UINT32 u32MaxOutputConnections;
    UINT32 u32MaxInstances;
    UINT32 u32NumAPOInterfaces;
                    IID iidAPOInterfaceList[ 1 ];
    } APO_REG_PROPERTIES;
typedef struct APO_REG_PROPERTIES *PAPO_REG_PROPERTIES;
typedef struct APOInitBaseStruct
    {
    UINT32 cbSize;
    CLSID clsid;
    } APOInitBaseStruct;
typedef
enum AUDIO_FLOW_TYPE
    {
        AUDIO_FLOW_PULL = 0,
        AUDIO_FLOW_PUSH = ( AUDIO_FLOW_PULL + 1 )
    } AUDIO_FLOW_TYPE;
typedef
enum EAudioConstriction
    {
        eAudioConstrictionOff = 0,
        eAudioConstriction48_16 = ( eAudioConstrictionOff + 1 ) ,
        eAudioConstriction44_16 = ( eAudioConstriction48_16 + 1 ) ,
        eAudioConstriction14_14 = ( eAudioConstriction44_16 + 1 ) ,
        eAudioConstrictionMute = ( eAudioConstriction14_14 + 1 )
    } EAudioConstriction;
extern RPC_IF_HANDLE __MIDL_itf_audioenginebaseapo_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioenginebaseapo_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioProcessingObjectRT;
    typedef struct IAudioProcessingObjectRTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioProcessingObjectRT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioProcessingObjectRT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioProcessingObjectRT * This);
        void ( STDMETHODCALLTYPE *APOProcess )(
            IAudioProcessingObjectRT * This,
            _In_ UINT32 u32NumInputConnections,
            _In_ APO_CONNECTION_PROPERTY **ppInputConnections,
            _In_ UINT32 u32NumOutputConnections,
            _Inout_ APO_CONNECTION_PROPERTY **ppOutputConnections);
        UINT32 ( STDMETHODCALLTYPE *CalcInputFrames )(
            IAudioProcessingObjectRT * This,
                       UINT32 u32OutputFrameCount);
        UINT32 ( STDMETHODCALLTYPE *CalcOutputFrames )(
            IAudioProcessingObjectRT * This,
            _In_ UINT32 u32InputFrameCount);
        END_INTERFACE
    } IAudioProcessingObjectRTVtbl;
    interface IAudioProcessingObjectRT
    {
        CONST_VTBL struct IAudioProcessingObjectRTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> APOProcess(This,u32NumInputConnections,ppInputConnections,u32NumOutputConnections,ppOutputConnections) )
    ( (This)->lpVtbl -> CalcInputFrames(This,u32OutputFrameCount) )
    ( (This)->lpVtbl -> CalcOutputFrames(This,u32InputFrameCount) )
EXTERN_C const IID IID_IAudioProcessingObjectVBR;
    typedef struct IAudioProcessingObjectVBRVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAudioProcessingObjectVBR * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAudioProcessingObjectVBR * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAudioProcessingObjectVBR * This);
        HRESULT ( STDMETHODCALLTYPE *CalcMaxInputFrames )(
            __RPC__in IAudioProcessingObjectVBR * This,
                       UINT32 u32MaxOutputFrameCount,
                        __RPC__out UINT32 *pu32InputFrameCount);
        HRESULT ( STDMETHODCALLTYPE *CalcMaxOutputFrames )(
            __RPC__in IAudioProcessingObjectVBR * This,
                       UINT32 u32MaxInputFrameCount,
                        __RPC__out UINT32 *pu32OutputFrameCount);
        END_INTERFACE
    } IAudioProcessingObjectVBRVtbl;
    interface IAudioProcessingObjectVBR
    {
        CONST_VTBL struct IAudioProcessingObjectVBRVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CalcMaxInputFrames(This,u32MaxOutputFrameCount,pu32InputFrameCount) )
    ( (This)->lpVtbl -> CalcMaxOutputFrames(This,u32MaxInputFrameCount,pu32OutputFrameCount) )
EXTERN_C const IID IID_IAudioProcessingObjectConfiguration;
    typedef struct IAudioProcessingObjectConfigurationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioProcessingObjectConfiguration * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioProcessingObjectConfiguration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioProcessingObjectConfiguration * This);
        HRESULT ( STDMETHODCALLTYPE *LockForProcess )(
            IAudioProcessingObjectConfiguration * This,
            _In_ UINT32 u32NumInputConnections,
            _In_ APO_CONNECTION_DESCRIPTOR **ppInputConnections,
            _In_ UINT32 u32NumOutputConnections,
            _In_ APO_CONNECTION_DESCRIPTOR **ppOutputConnections);
        HRESULT ( STDMETHODCALLTYPE *UnlockForProcess )(
            IAudioProcessingObjectConfiguration * This);
        END_INTERFACE
    } IAudioProcessingObjectConfigurationVtbl;
    interface IAudioProcessingObjectConfiguration
    {
        CONST_VTBL struct IAudioProcessingObjectConfigurationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LockForProcess(This,u32NumInputConnections,ppInputConnections,u32NumOutputConnections,ppOutputConnections) )
    ( (This)->lpVtbl -> UnlockForProcess(This) )
EXTERN_C const IID IID_IAudioProcessingObject;
    typedef struct IAudioProcessingObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAudioProcessingObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAudioProcessingObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAudioProcessingObject * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IAudioProcessingObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetLatency )(
            __RPC__in IAudioProcessingObject * This,
                        __RPC__out HNSTIME *pTime);
        HRESULT ( STDMETHODCALLTYPE *GetRegistrationProperties )(
            __RPC__in IAudioProcessingObject * This,
                        __RPC__deref_out_opt APO_REG_PROPERTIES **ppRegProps);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IAudioProcessingObject * This,
                       UINT32 cbDataSize,
                                __RPC__in_ecount_full(cbDataSize) BYTE *pbyData);
        HRESULT ( STDMETHODCALLTYPE *IsInputFormatSupported )(
            __RPC__in IAudioProcessingObject * This,
                               __RPC__in_opt IAudioMediaType *pOppositeFormat,
                       __RPC__in_opt IAudioMediaType *pRequestedInputFormat,
                        __RPC__deref_out_opt IAudioMediaType **ppSupportedInputFormat);
        HRESULT ( STDMETHODCALLTYPE *IsOutputFormatSupported )(
            __RPC__in IAudioProcessingObject * This,
                               __RPC__in_opt IAudioMediaType *pOppositeFormat,
                       __RPC__in_opt IAudioMediaType *pRequestedOutputFormat,
                        __RPC__deref_out_opt IAudioMediaType **ppSupportedOutputFormat);
        HRESULT ( STDMETHODCALLTYPE *GetInputChannelCount )(
            __RPC__in IAudioProcessingObject * This,
                        __RPC__out UINT32 *pu32ChannelCount);
        END_INTERFACE
    } IAudioProcessingObjectVtbl;
    interface IAudioProcessingObject
    {
        CONST_VTBL struct IAudioProcessingObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> GetLatency(This,pTime) )
    ( (This)->lpVtbl -> GetRegistrationProperties(This,ppRegProps) )
    ( (This)->lpVtbl -> Initialize(This,cbDataSize,pbyData) )
    ( (This)->lpVtbl -> IsInputFormatSupported(This,pOppositeFormat,pRequestedInputFormat,ppSupportedInputFormat) )
    ( (This)->lpVtbl -> IsOutputFormatSupported(This,pOppositeFormat,pRequestedOutputFormat,ppSupportedOutputFormat) )
    ( (This)->lpVtbl -> GetInputChannelCount(This,pu32ChannelCount) )
EXTERN_C const IID IID_IAudioDeviceModulesClient;
    typedef struct IAudioDeviceModulesClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioDeviceModulesClient * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioDeviceModulesClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioDeviceModulesClient * This);
        HRESULT ( STDMETHODCALLTYPE *SetAudioDeviceModulesManager )(
            IAudioDeviceModulesClient * This,
            _In_ IUnknown *pAudioDeviceModulesManager);
        END_INTERFACE
    } IAudioDeviceModulesClientVtbl;
    interface IAudioDeviceModulesClient
    {
        CONST_VTBL struct IAudioDeviceModulesClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAudioDeviceModulesManager(This,pAudioDeviceModulesManager) )
typedef HRESULT (WINAPI FNAPONOTIFICATIONCALLBACK)(APO_REG_PROPERTIES* pProperties, VOID* pvRefData);
extern HRESULT WINAPI RegisterAPO(APO_REG_PROPERTIES const* pProperties);
extern HRESULT WINAPI UnregisterAPO(REFCLSID clsid);
extern HRESULT WINAPI RegisterAPONotification(HANDLE hEvent);
extern HRESULT WINAPI UnregisterAPONotification(HANDLE hEvent);
extern HRESULT WINAPI EnumerateAPOs(FNAPONOTIFICATIONCALLBACK pfnCallback, PVOID pvRefData);
extern HRESULT WINAPI GetAPOProperties(REFCLSID clsid, APO_REG_PROPERTIES* pProperties);
extern RPC_IF_HANDLE __MIDL_itf_audioenginebaseapo_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioenginebaseapo_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioSystemEffects;
    typedef struct IAudioSystemEffectsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAudioSystemEffects * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAudioSystemEffects * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAudioSystemEffects * This);
        END_INTERFACE
    } IAudioSystemEffectsVtbl;
    interface IAudioSystemEffects
    {
        CONST_VTBL struct IAudioSystemEffectsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
EXTERN_C const IID IID_IAudioSystemEffects2;
    typedef struct IAudioSystemEffects2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioSystemEffects2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioSystemEffects2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioSystemEffects2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetEffectsList )(
            IAudioSystemEffects2 * This,
            _Outptr_result_buffer_maybenull_(*pcEffects) LPGUID *ppEffectsIds,
            _Out_ UINT *pcEffects,
            _In_ HANDLE Event);
        END_INTERFACE
    } IAudioSystemEffects2Vtbl;
    interface IAudioSystemEffects2
    {
        CONST_VTBL struct IAudioSystemEffects2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEffectsList(This,ppEffectsIds,pcEffects,Event) )
EXTERN_C const IID IID_IAudioSystemEffectsCustomFormats;
    typedef struct IAudioSystemEffectsCustomFormatsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAudioSystemEffectsCustomFormats * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAudioSystemEffectsCustomFormats * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAudioSystemEffectsCustomFormats * This);
        HRESULT ( STDMETHODCALLTYPE *GetFormatCount )(
            __RPC__in IAudioSystemEffectsCustomFormats * This,
                        __RPC__out UINT *pcFormats);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            __RPC__in IAudioSystemEffectsCustomFormats * This,
                       UINT nFormat,
                        __RPC__deref_out_opt IAudioMediaType **ppFormat);
        HRESULT ( STDMETHODCALLTYPE *GetFormatRepresentation )(
            __RPC__in IAudioSystemEffectsCustomFormats * This,
                       UINT nFormat,
                        __RPC__deref_out_opt LPWSTR *ppwstrFormatRep);
        END_INTERFACE
    } IAudioSystemEffectsCustomFormatsVtbl;
    interface IAudioSystemEffectsCustomFormats
    {
        CONST_VTBL struct IAudioSystemEffectsCustomFormatsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFormatCount(This,pcFormats) )
    ( (This)->lpVtbl -> GetFormat(This,nFormat,ppFormat) )
    ( (This)->lpVtbl -> GetFormatRepresentation(This,nFormat,ppwstrFormatRep) )
typedef struct APOInitSystemEffects
    {
    APOInitBaseStruct APOInit;
    IPropertyStore *pAPOEndpointProperties;
    IPropertyStore *pAPOSystemEffectsProperties;
    void *pReserved;
    IMMDeviceCollection *pDeviceCollection;
    } APOInitSystemEffects;
typedef struct APOInitSystemEffects2
    {
    APOInitBaseStruct APOInit;
    IPropertyStore *pAPOEndpointProperties;
    IPropertyStore *pAPOSystemEffectsProperties;
    void *pReserved;
    IMMDeviceCollection *pDeviceCollection;
    UINT nSoftwareIoDeviceInCollection;
    UINT nSoftwareIoConnectorIndex;
    GUID AudioProcessingMode;
    BOOL InitializeForDiscoveryOnly;
    } APOInitSystemEffects2;
typedef struct __MIDL___MIDL_itf_audioenginebaseapo_0000_0008_0001
    {
    LPARAM AddPageParam;
    LPWSTR pwstrEndpointID;
    IPropertyStore *pFxProperties;
    } AudioFXExtensionParams;
DEFINE_PROPERTYKEY(PKEY_FX_Association, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 0);
DEFINE_PROPERTYKEY(PKEY_FX_PreMixEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 1);
DEFINE_PROPERTYKEY(PKEY_FX_PostMixEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 2);
DEFINE_PROPERTYKEY(PKEY_FX_UserInterfaceClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 3);
DEFINE_PROPERTYKEY(PKEY_FX_FriendlyName, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 4);
DEFINE_PROPERTYKEY(PKEY_FX_StreamEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 5);
DEFINE_PROPERTYKEY(PKEY_FX_ModeEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 6);
DEFINE_PROPERTYKEY(PKEY_FX_EndpointEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 7);
DEFINE_PROPERTYKEY(PKEY_FX_KeywordDetector_StreamEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 8);
DEFINE_PROPERTYKEY(PKEY_FX_KeywordDetector_ModeEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 9);
DEFINE_PROPERTYKEY(PKEY_FX_KeywordDetector_EndpointEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 10);
DEFINE_PROPERTYKEY(PKEY_FX_Offload_StreamEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 11);
DEFINE_PROPERTYKEY(PKEY_FX_Offload_ModeEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 12);
DEFINE_PROPERTYKEY(PKEY_CompositeFX_StreamEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 13);
DEFINE_PROPERTYKEY(PKEY_CompositeFX_ModeEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 14);
DEFINE_PROPERTYKEY(PKEY_CompositeFX_EndpointEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 15);
DEFINE_PROPERTYKEY(PKEY_CompositeFX_KeywordDetector_StreamEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 16);
DEFINE_PROPERTYKEY(PKEY_CompositeFX_KeywordDetector_ModeEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 17);
DEFINE_PROPERTYKEY(PKEY_CompositeFX_KeywordDetector_EndpointEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 18);
DEFINE_PROPERTYKEY(PKEY_CompositeFX_Offload_StreamEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 19);
DEFINE_PROPERTYKEY(PKEY_CompositeFX_Offload_ModeEffectClsid, 0xD04E05A6, 0x594B, 0x4fb6, 0xA8, 0x0D, 0x01, 0xAF, 0x5E, 0xED, 0x7D, 0x1D, 20);
DEFINE_PROPERTYKEY(PKEY_SFX_ProcessingModes_Supported_For_Streaming, 0xd3993a3f, 0x99c2, 0x4402, 0xb5, 0xec, 0xa9, 0x2a, 0x3, 0x67, 0x66, 0x4b, 5);
DEFINE_PROPERTYKEY(PKEY_MFX_ProcessingModes_Supported_For_Streaming, 0xd3993a3f, 0x99c2, 0x4402, 0xb5, 0xec, 0xa9, 0x2a, 0x3, 0x67, 0x66, 0x4b, 6);
DEFINE_PROPERTYKEY(PKEY_EFX_ProcessingModes_Supported_For_Streaming, 0xd3993a3f, 0x99c2, 0x4402, 0xb5, 0xec, 0xa9, 0x2a, 0x3, 0x67, 0x66, 0x4b, 7);
DEFINE_PROPERTYKEY(PKEY_SFX_KeywordDetector_ProcessingModes_Supported_For_Streaming, 0xd3993a3f, 0x99c2, 0x4402, 0xb5, 0xec, 0xa9, 0x2a, 0x3, 0x67, 0x66, 0x4b, 8);
DEFINE_PROPERTYKEY(PKEY_MFX_KeywordDetector_ProcessingModes_Supported_For_Streaming, 0xd3993a3f, 0x99c2, 0x4402, 0xb5, 0xec, 0xa9, 0x2a, 0x3, 0x67, 0x66, 0x4b, 9);
DEFINE_PROPERTYKEY(PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming, 0xd3993a3f, 0x99c2, 0x4402, 0xb5, 0xec, 0xa9, 0x2a, 0x3, 0x67, 0x66, 0x4b, 10);
DEFINE_PROPERTYKEY(PKEY_SFX_Offload_ProcessingModes_Supported_For_Streaming, 0xd3993a3f, 0x99c2, 0x4402, 0xb5, 0xec, 0xa9, 0x2a, 0x3, 0x67, 0x66, 0x4b, 11);
DEFINE_PROPERTYKEY(PKEY_MFX_Offload_ProcessingModes_Supported_For_Streaming, 0xd3993a3f, 0x99c2, 0x4402, 0xb5, 0xec, 0xa9, 0x2a, 0x3, 0x67, 0x66, 0x4b, 12);
DEFINE_PROPERTYKEY(PKEY_APO_SWFallback_ProcessingModes, 0xd3993a3f, 0x99c2, 0x4402, 0xb5, 0xec, 0xa9, 0x2a, 0x3, 0x67, 0x66, 0x4b, 13);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_audioenginebaseapo_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioenginebaseapo_0000_0008_v0_0_s_ifspec;
}
