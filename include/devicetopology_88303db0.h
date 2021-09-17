#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IKsControl IKsControl;
typedef interface IPerChannelDbLevel IPerChannelDbLevel;
typedef interface IAudioVolumeLevel IAudioVolumeLevel;
typedef interface IAudioChannelConfig IAudioChannelConfig;
typedef interface IAudioLoudness IAudioLoudness;
typedef interface IAudioInputSelector IAudioInputSelector;
typedef interface IAudioOutputSelector IAudioOutputSelector;
typedef interface IAudioMute IAudioMute;
typedef interface IAudioBass IAudioBass;
typedef interface IAudioMidrange IAudioMidrange;
typedef interface IAudioTreble IAudioTreble;
typedef interface IAudioAutoGainControl IAudioAutoGainControl;
typedef interface IAudioPeakMeter IAudioPeakMeter;
typedef interface IDeviceSpecificProperty IDeviceSpecificProperty;
typedef interface IKsFormatSupport IKsFormatSupport;
typedef interface IKsJackDescription IKsJackDescription;
typedef interface IKsJackDescription2 IKsJackDescription2;
typedef interface IKsJackSinkInformation IKsJackSinkInformation;
typedef interface IKsJackContainerId IKsJackContainerId;
typedef interface IPartsList IPartsList;
typedef interface IPart IPart;
typedef interface IConnector IConnector;
typedef interface ISubunit ISubunit;
typedef interface IControlInterface IControlInterface;
typedef interface IControlChangeNotify IControlChangeNotify;
typedef interface IDeviceTopology IDeviceTopology;
typedef class DeviceTopology DeviceTopology;
#include "oaidl.h"
#include "ocidl.h"
#include "propidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(EVENTCONTEXT_VOLUMESLIDER, 0xE2C2E9DE,0x09B1,0x4B04,0x84, 0xE5, 0x07, 0x93, 0x12, 0x25, 0xEE, 0x04);
#include "ks.h"
#include "ksmedia.h"
typedef struct __MIDL___MIDL_itf_devicetopology_0000_0000_0001
    {
    ULONG FormatSize;
    ULONG Flags;
    ULONG SampleSize;
    ULONG Reserved;
    GUID MajorFormat;
    GUID SubFormat;
    GUID Specifier;
    } KSDATAFORMAT;
typedef struct __MIDL___MIDL_itf_devicetopology_0000_0000_0001 *PKSDATAFORMAT;
typedef struct __MIDL___MIDL_itf_devicetopology_0000_0000_0002
    {
    union
        {
        struct
            {
            GUID Set;
            ULONG Id;
            ULONG Flags;
            } ;
        LONGLONG Alignment;
        } ;
    } KSIDENTIFIER;
typedef struct __MIDL___MIDL_itf_devicetopology_0000_0000_0002 *PKSIDENTIFIER;
typedef KSIDENTIFIER KSPROPERTY;
typedef KSIDENTIFIER *PKSPROPERTY;
typedef KSIDENTIFIER KSMETHOD;
typedef KSIDENTIFIER *PKSMETHOD;
typedef KSIDENTIFIER KSEVENT;
typedef KSIDENTIFIER *PKSEVENT;
typedef
enum __MIDL___MIDL_itf_devicetopology_0000_0000_0005
    {
        eConnTypeUnknown = 0,
        eConnType3Point5mm = ( eConnTypeUnknown + 1 ) ,
        eConnTypeQuarter = ( eConnType3Point5mm + 1 ) ,
        eConnTypeAtapiInternal = ( eConnTypeQuarter + 1 ) ,
        eConnTypeRCA = ( eConnTypeAtapiInternal + 1 ) ,
        eConnTypeOptical = ( eConnTypeRCA + 1 ) ,
        eConnTypeOtherDigital = ( eConnTypeOptical + 1 ) ,
        eConnTypeOtherAnalog = ( eConnTypeOtherDigital + 1 ) ,
        eConnTypeMultichannelAnalogDIN = ( eConnTypeOtherAnalog + 1 ) ,
        eConnTypeXlrProfessional = ( eConnTypeMultichannelAnalogDIN + 1 ) ,
        eConnTypeRJ11Modem = ( eConnTypeXlrProfessional + 1 ) ,
        eConnTypeCombination = ( eConnTypeRJ11Modem + 1 )
    } EPcxConnectionType;
typedef
enum __MIDL___MIDL_itf_devicetopology_0000_0000_0006
    {
        eGeoLocRear = 0x1,
        eGeoLocFront = ( eGeoLocRear + 1 ) ,
        eGeoLocLeft = ( eGeoLocFront + 1 ) ,
        eGeoLocRight = ( eGeoLocLeft + 1 ) ,
        eGeoLocTop = ( eGeoLocRight + 1 ) ,
        eGeoLocBottom = ( eGeoLocTop + 1 ) ,
        eGeoLocRearPanel = ( eGeoLocBottom + 1 ) ,
        eGeoLocRiser = ( eGeoLocRearPanel + 1 ) ,
        eGeoLocInsideMobileLid = ( eGeoLocRiser + 1 ) ,
        eGeoLocDrivebay = ( eGeoLocInsideMobileLid + 1 ) ,
        eGeoLocHDMI = ( eGeoLocDrivebay + 1 ) ,
        eGeoLocOutsideMobileLid = ( eGeoLocHDMI + 1 ) ,
        eGeoLocATAPI = ( eGeoLocOutsideMobileLid + 1 ) ,
        eGeoLocNotApplicable = ( eGeoLocATAPI + 1 ) ,
        eGeoLocReserved6 = ( eGeoLocNotApplicable + 1 )
    } EPcxGeoLocation;
typedef
enum __MIDL___MIDL_itf_devicetopology_0000_0000_0007
    {
        eGenLocPrimaryBox = 0,
        eGenLocInternal = ( eGenLocPrimaryBox + 1 ) ,
        eGenLocSeparate = ( eGenLocInternal + 1 ) ,
        eGenLocOther = ( eGenLocSeparate + 1 )
    } EPcxGenLocation;
typedef
enum __MIDL___MIDL_itf_devicetopology_0000_0000_0008
    {
        ePortConnJack = 0,
        ePortConnIntegratedDevice = ( ePortConnJack + 1 ) ,
        ePortConnBothIntegratedAndJack = ( ePortConnIntegratedDevice + 1 ) ,
        ePortConnUnknown = ( ePortConnBothIntegratedAndJack + 1 )
    } EPxcPortConnection;
typedef struct __MIDL___MIDL_itf_devicetopology_0000_0000_0009
    {
    DWORD ChannelMapping;
    COLORREF Color;
    EPcxConnectionType ConnectionType;
    EPcxGeoLocation GeoLocation;
    EPcxGenLocation GenLocation;
    EPxcPortConnection PortConnection;
    BOOL IsConnected;
    } KSJACK_DESCRIPTION;
typedef struct __MIDL___MIDL_itf_devicetopology_0000_0000_0009 *PKSJACK_DESCRIPTION;
typedef struct _LUID
    {
    DWORD LowPart;
    LONG HighPart;
    } LUID;
typedef struct _LUID *PLUID;
typedef
enum __MIDL___MIDL_itf_devicetopology_0000_0000_0010
    {
        KSJACK_SINK_CONNECTIONTYPE_HDMI = 0,
        KSJACK_SINK_CONNECTIONTYPE_DISPLAYPORT = ( KSJACK_SINK_CONNECTIONTYPE_HDMI + 1 )
    } KSJACK_SINK_CONNECTIONTYPE;
typedef struct _tagKSJACK_SINK_INFORMATION
    {
    KSJACK_SINK_CONNECTIONTYPE ConnType;
    WORD ManufacturerId;
    WORD ProductId;
    WORD AudioLatency;
    BOOL HDCPCapable;
    BOOL AICapable;
    UCHAR SinkDescriptionLength;
    WCHAR SinkDescription[ 32 ];
    LUID PortId;
    } KSJACK_SINK_INFORMATION;
typedef struct _tagKSJACK_DESCRIPTION2
    {
    DWORD DeviceStateInfo;
    DWORD JackCapabilities;
    } KSJACK_DESCRIPTION2;
typedef struct _tagKSJACK_DESCRIPTION2 *PKSJACK_DESCRIPTION2;
typedef
enum __MIDL___MIDL_itf_devicetopology_0000_0000_0011
    {
        In = 0,
        Out = ( In + 1 )
    } DataFlow;
typedef
enum __MIDL___MIDL_itf_devicetopology_0000_0000_0012
    {
        Connector = 0,
        Subunit = ( Connector + 1 )
    } PartType;
typedef
enum __MIDL___MIDL_itf_devicetopology_0000_0000_0013
    {
        Unknown_Connector = 0,
        Physical_Internal = ( Unknown_Connector + 1 ) ,
        Physical_External = ( Physical_Internal + 1 ) ,
        Software_IO = ( Physical_External + 1 ) ,
        Software_Fixed = ( Software_IO + 1 ) ,
        Network = ( Software_Fixed + 1 )
    } ConnectorType;
extern RPC_IF_HANDLE __MIDL_itf_devicetopology_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_devicetopology_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IKsControl;
    typedef struct IKsControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IKsControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IKsControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IKsControl * This);
        HRESULT ( STDMETHODCALLTYPE *KsProperty )(
            IKsControl * This,
                       PKSPROPERTY Property,
                       ULONG PropertyLength,
                            void *PropertyData,
                       ULONG DataLength,
                        ULONG *BytesReturned);
        HRESULT ( STDMETHODCALLTYPE *KsMethod )(
            IKsControl * This,
                       PKSMETHOD Method,
                       ULONG MethodLength,
                            void *MethodData,
                       ULONG DataLength,
                        ULONG *BytesReturned);
        HRESULT ( STDMETHODCALLTYPE *KsEvent )(
            IKsControl * This,
                       PKSEVENT Event,
                       ULONG EventLength,
                            void *EventData,
                       ULONG DataLength,
                        ULONG *BytesReturned);
        END_INTERFACE
    } IKsControlVtbl;
    interface IKsControl
    {
        CONST_VTBL struct IKsControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> KsProperty(This,Property,PropertyLength,PropertyData,DataLength,BytesReturned) )
    ( (This)->lpVtbl -> KsMethod(This,Method,MethodLength,MethodData,DataLength,BytesReturned) )
    ( (This)->lpVtbl -> KsEvent(This,Event,EventLength,EventData,DataLength,BytesReturned) )
EXTERN_C const IID IID_IPerChannelDbLevel;
    typedef struct IPerChannelDbLevelVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPerChannelDbLevel * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPerChannelDbLevel * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPerChannelDbLevel * This);
                               HRESULT ( STDMETHODCALLTYPE *GetChannelCount )(
            IPerChannelDbLevel * This,
            _Out_ UINT *pcChannels);
                               HRESULT ( STDMETHODCALLTYPE *GetLevelRange )(
            IPerChannelDbLevel * This,
            _In_ UINT nChannel,
            _Out_ float *pfMinLevelDB,
            _Out_ float *pfMaxLevelDB,
            _Out_ float *pfStepping);
                               HRESULT ( STDMETHODCALLTYPE *GetLevel )(
            IPerChannelDbLevel * This,
            _In_ UINT nChannel,
            _Out_ float *pfLevelDB);
                               HRESULT ( STDMETHODCALLTYPE *SetLevel )(
            IPerChannelDbLevel * This,
            _In_ UINT nChannel,
            _In_ float fLevelDB,
            _In_opt_ LPCGUID pguidEventContext);
                               HRESULT ( STDMETHODCALLTYPE *SetLevelUniform )(
            IPerChannelDbLevel * This,
            _In_ float fLevelDB,
            _In_opt_ LPCGUID pguidEventContext);
                               HRESULT ( STDMETHODCALLTYPE *SetLevelAllChannels )(
            IPerChannelDbLevel * This,
            _In_reads_(cChannels) float aLevelsDB[ ],
            _In_ ULONG cChannels,
            _In_opt_ LPCGUID pguidEventContext);
        END_INTERFACE
    } IPerChannelDbLevelVtbl;
    interface IPerChannelDbLevel
    {
        CONST_VTBL struct IPerChannelDbLevelVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetChannelCount(This,pcChannels) )
    ( (This)->lpVtbl -> GetLevelRange(This,nChannel,pfMinLevelDB,pfMaxLevelDB,pfStepping) )
    ( (This)->lpVtbl -> GetLevel(This,nChannel,pfLevelDB) )
    ( (This)->lpVtbl -> SetLevel(This,nChannel,fLevelDB,pguidEventContext) )
    ( (This)->lpVtbl -> SetLevelUniform(This,fLevelDB,pguidEventContext) )
    ( (This)->lpVtbl -> SetLevelAllChannels(This,aLevelsDB,cChannels,pguidEventContext) )
EXTERN_C const IID IID_IAudioVolumeLevel;
    typedef struct IAudioVolumeLevelVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioVolumeLevel * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioVolumeLevel * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioVolumeLevel * This);
                               HRESULT ( STDMETHODCALLTYPE *GetChannelCount )(
            IAudioVolumeLevel * This,
            _Out_ UINT *pcChannels);
                               HRESULT ( STDMETHODCALLTYPE *GetLevelRange )(
            IAudioVolumeLevel * This,
            _In_ UINT nChannel,
            _Out_ float *pfMinLevelDB,
            _Out_ float *pfMaxLevelDB,
            _Out_ float *pfStepping);
                               HRESULT ( STDMETHODCALLTYPE *GetLevel )(
            IAudioVolumeLevel * This,
            _In_ UINT nChannel,
            _Out_ float *pfLevelDB);
                               HRESULT ( STDMETHODCALLTYPE *SetLevel )(
            IAudioVolumeLevel * This,
            _In_ UINT nChannel,
            _In_ float fLevelDB,
            _In_opt_ LPCGUID pguidEventContext);
                               HRESULT ( STDMETHODCALLTYPE *SetLevelUniform )(
            IAudioVolumeLevel * This,
            _In_ float fLevelDB,
            _In_opt_ LPCGUID pguidEventContext);
                               HRESULT ( STDMETHODCALLTYPE *SetLevelAllChannels )(
            IAudioVolumeLevel * This,
            _In_reads_(cChannels) float aLevelsDB[ ],
            _In_ ULONG cChannels,
            _In_opt_ LPCGUID pguidEventContext);
        END_INTERFACE
    } IAudioVolumeLevelVtbl;
    interface IAudioVolumeLevel
    {
        CONST_VTBL struct IAudioVolumeLevelVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetChannelCount(This,pcChannels) )
    ( (This)->lpVtbl -> GetLevelRange(This,nChannel,pfMinLevelDB,pfMaxLevelDB,pfStepping) )
    ( (This)->lpVtbl -> GetLevel(This,nChannel,pfLevelDB) )
    ( (This)->lpVtbl -> SetLevel(This,nChannel,fLevelDB,pguidEventContext) )
    ( (This)->lpVtbl -> SetLevelUniform(This,fLevelDB,pguidEventContext) )
    ( (This)->lpVtbl -> SetLevelAllChannels(This,aLevelsDB,cChannels,pguidEventContext) )
EXTERN_C const IID IID_IAudioChannelConfig;
    typedef struct IAudioChannelConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioChannelConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioChannelConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioChannelConfig * This);
                               HRESULT ( STDMETHODCALLTYPE *SetChannelConfig )(
            IAudioChannelConfig * This,
                       DWORD dwConfig,
            _In_opt_ LPCGUID pguidEventContext);
                               HRESULT ( STDMETHODCALLTYPE *GetChannelConfig )(
            IAudioChannelConfig * This,
                                DWORD *pdwConfig);
        END_INTERFACE
    } IAudioChannelConfigVtbl;
    interface IAudioChannelConfig
    {
        CONST_VTBL struct IAudioChannelConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetChannelConfig(This,dwConfig,pguidEventContext) )
    ( (This)->lpVtbl -> GetChannelConfig(This,pdwConfig) )
EXTERN_C const IID IID_IAudioLoudness;
    typedef struct IAudioLoudnessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioLoudness * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioLoudness * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioLoudness * This);
                               HRESULT ( STDMETHODCALLTYPE *GetEnabled )(
            IAudioLoudness * This,
            _Out_ BOOL *pbEnabled);
                               HRESULT ( STDMETHODCALLTYPE *SetEnabled )(
            IAudioLoudness * This,
            _In_ BOOL bEnable,
            _In_opt_ LPCGUID pguidEventContext);
        END_INTERFACE
    } IAudioLoudnessVtbl;
    interface IAudioLoudness
    {
        CONST_VTBL struct IAudioLoudnessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEnabled(This,pbEnabled) )
    ( (This)->lpVtbl -> SetEnabled(This,bEnable,pguidEventContext) )
EXTERN_C const IID IID_IAudioInputSelector;
    typedef struct IAudioInputSelectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioInputSelector * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioInputSelector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioInputSelector * This);
                               HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            IAudioInputSelector * This,
            _Out_ UINT *pnIdSelected);
                               HRESULT ( STDMETHODCALLTYPE *SetSelection )(
            IAudioInputSelector * This,
            _In_ UINT nIdSelect,
            _In_opt_ LPCGUID pguidEventContext);
        END_INTERFACE
    } IAudioInputSelectorVtbl;
    interface IAudioInputSelector
    {
        CONST_VTBL struct IAudioInputSelectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSelection(This,pnIdSelected) )
    ( (This)->lpVtbl -> SetSelection(This,nIdSelect,pguidEventContext) )
EXTERN_C const IID IID_IAudioOutputSelector;
    typedef struct IAudioOutputSelectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioOutputSelector * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioOutputSelector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioOutputSelector * This);
                               HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            IAudioOutputSelector * This,
            _Out_ UINT *pnIdSelected);
                               HRESULT ( STDMETHODCALLTYPE *SetSelection )(
            IAudioOutputSelector * This,
            _In_ UINT nIdSelect,
            _In_opt_ LPCGUID pguidEventContext);
        END_INTERFACE
    } IAudioOutputSelectorVtbl;
    interface IAudioOutputSelector
    {
        CONST_VTBL struct IAudioOutputSelectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSelection(This,pnIdSelected) )
    ( (This)->lpVtbl -> SetSelection(This,nIdSelect,pguidEventContext) )
EXTERN_C const IID IID_IAudioMute;
    typedef struct IAudioMuteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioMute * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioMute * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioMute * This);
                               HRESULT ( STDMETHODCALLTYPE *SetMute )(
            IAudioMute * This,
            _In_ BOOL bMuted,
            _In_opt_ LPCGUID pguidEventContext);
                               HRESULT ( STDMETHODCALLTYPE *GetMute )(
            IAudioMute * This,
            _Out_ BOOL *pbMuted);
        END_INTERFACE
    } IAudioMuteVtbl;
    interface IAudioMute
    {
        CONST_VTBL struct IAudioMuteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetMute(This,bMuted,pguidEventContext) )
    ( (This)->lpVtbl -> GetMute(This,pbMuted) )
EXTERN_C const IID IID_IAudioBass;
    typedef struct IAudioBassVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioBass * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioBass * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioBass * This);
                               HRESULT ( STDMETHODCALLTYPE *GetChannelCount )(
            IAudioBass * This,
            _Out_ UINT *pcChannels);
                               HRESULT ( STDMETHODCALLTYPE *GetLevelRange )(
            IAudioBass * This,
            _In_ UINT nChannel,
            _Out_ float *pfMinLevelDB,
            _Out_ float *pfMaxLevelDB,
            _Out_ float *pfStepping);
                               HRESULT ( STDMETHODCALLTYPE *GetLevel )(
            IAudioBass * This,
            _In_ UINT nChannel,
            _Out_ float *pfLevelDB);
                               HRESULT ( STDMETHODCALLTYPE *SetLevel )(
            IAudioBass * This,
            _In_ UINT nChannel,
            _In_ float fLevelDB,
            _In_opt_ LPCGUID pguidEventContext);
                               HRESULT ( STDMETHODCALLTYPE *SetLevelUniform )(
            IAudioBass * This,
            _In_ float fLevelDB,
            _In_opt_ LPCGUID pguidEventContext);
                               HRESULT ( STDMETHODCALLTYPE *SetLevelAllChannels )(
            IAudioBass * This,
            _In_reads_(cChannels) float aLevelsDB[ ],
            _In_ ULONG cChannels,
            _In_opt_ LPCGUID pguidEventContext);
        END_INTERFACE
    } IAudioBassVtbl;
    interface IAudioBass
    {
        CONST_VTBL struct IAudioBassVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetChannelCount(This,pcChannels) )
    ( (This)->lpVtbl -> GetLevelRange(This,nChannel,pfMinLevelDB,pfMaxLevelDB,pfStepping) )
    ( (This)->lpVtbl -> GetLevel(This,nChannel,pfLevelDB) )
    ( (This)->lpVtbl -> SetLevel(This,nChannel,fLevelDB,pguidEventContext) )
    ( (This)->lpVtbl -> SetLevelUniform(This,fLevelDB,pguidEventContext) )
    ( (This)->lpVtbl -> SetLevelAllChannels(This,aLevelsDB,cChannels,pguidEventContext) )
EXTERN_C const IID IID_IAudioMidrange;
    typedef struct IAudioMidrangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioMidrange * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioMidrange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioMidrange * This);
                               HRESULT ( STDMETHODCALLTYPE *GetChannelCount )(
            IAudioMidrange * This,
            _Out_ UINT *pcChannels);
                               HRESULT ( STDMETHODCALLTYPE *GetLevelRange )(
            IAudioMidrange * This,
            _In_ UINT nChannel,
            _Out_ float *pfMinLevelDB,
            _Out_ float *pfMaxLevelDB,
            _Out_ float *pfStepping);
                               HRESULT ( STDMETHODCALLTYPE *GetLevel )(
            IAudioMidrange * This,
            _In_ UINT nChannel,
            _Out_ float *pfLevelDB);
                               HRESULT ( STDMETHODCALLTYPE *SetLevel )(
            IAudioMidrange * This,
            _In_ UINT nChannel,
            _In_ float fLevelDB,
            _In_opt_ LPCGUID pguidEventContext);
                               HRESULT ( STDMETHODCALLTYPE *SetLevelUniform )(
            IAudioMidrange * This,
            _In_ float fLevelDB,
            _In_opt_ LPCGUID pguidEventContext);
                               HRESULT ( STDMETHODCALLTYPE *SetLevelAllChannels )(
            IAudioMidrange * This,
            _In_reads_(cChannels) float aLevelsDB[ ],
            _In_ ULONG cChannels,
            _In_opt_ LPCGUID pguidEventContext);
        END_INTERFACE
    } IAudioMidrangeVtbl;
    interface IAudioMidrange
    {
        CONST_VTBL struct IAudioMidrangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetChannelCount(This,pcChannels) )
    ( (This)->lpVtbl -> GetLevelRange(This,nChannel,pfMinLevelDB,pfMaxLevelDB,pfStepping) )
    ( (This)->lpVtbl -> GetLevel(This,nChannel,pfLevelDB) )
    ( (This)->lpVtbl -> SetLevel(This,nChannel,fLevelDB,pguidEventContext) )
    ( (This)->lpVtbl -> SetLevelUniform(This,fLevelDB,pguidEventContext) )
    ( (This)->lpVtbl -> SetLevelAllChannels(This,aLevelsDB,cChannels,pguidEventContext) )
EXTERN_C const IID IID_IAudioTreble;
    typedef struct IAudioTrebleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioTreble * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioTreble * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioTreble * This);
                               HRESULT ( STDMETHODCALLTYPE *GetChannelCount )(
            IAudioTreble * This,
            _Out_ UINT *pcChannels);
                               HRESULT ( STDMETHODCALLTYPE *GetLevelRange )(
            IAudioTreble * This,
            _In_ UINT nChannel,
            _Out_ float *pfMinLevelDB,
            _Out_ float *pfMaxLevelDB,
            _Out_ float *pfStepping);
                               HRESULT ( STDMETHODCALLTYPE *GetLevel )(
            IAudioTreble * This,
            _In_ UINT nChannel,
            _Out_ float *pfLevelDB);
                               HRESULT ( STDMETHODCALLTYPE *SetLevel )(
            IAudioTreble * This,
            _In_ UINT nChannel,
            _In_ float fLevelDB,
            _In_opt_ LPCGUID pguidEventContext);
                               HRESULT ( STDMETHODCALLTYPE *SetLevelUniform )(
            IAudioTreble * This,
            _In_ float fLevelDB,
            _In_opt_ LPCGUID pguidEventContext);
                               HRESULT ( STDMETHODCALLTYPE *SetLevelAllChannels )(
            IAudioTreble * This,
            _In_reads_(cChannels) float aLevelsDB[ ],
            _In_ ULONG cChannels,
            _In_opt_ LPCGUID pguidEventContext);
        END_INTERFACE
    } IAudioTrebleVtbl;
    interface IAudioTreble
    {
        CONST_VTBL struct IAudioTrebleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetChannelCount(This,pcChannels) )
    ( (This)->lpVtbl -> GetLevelRange(This,nChannel,pfMinLevelDB,pfMaxLevelDB,pfStepping) )
    ( (This)->lpVtbl -> GetLevel(This,nChannel,pfLevelDB) )
    ( (This)->lpVtbl -> SetLevel(This,nChannel,fLevelDB,pguidEventContext) )
    ( (This)->lpVtbl -> SetLevelUniform(This,fLevelDB,pguidEventContext) )
    ( (This)->lpVtbl -> SetLevelAllChannels(This,aLevelsDB,cChannels,pguidEventContext) )
EXTERN_C const IID IID_IAudioAutoGainControl;
    typedef struct IAudioAutoGainControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioAutoGainControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioAutoGainControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioAutoGainControl * This);
                               HRESULT ( STDMETHODCALLTYPE *GetEnabled )(
            IAudioAutoGainControl * This,
            _Out_ BOOL *pbEnabled);
                               HRESULT ( STDMETHODCALLTYPE *SetEnabled )(
            IAudioAutoGainControl * This,
            _In_ BOOL bEnable,
            _In_opt_ LPCGUID pguidEventContext);
        END_INTERFACE
    } IAudioAutoGainControlVtbl;
    interface IAudioAutoGainControl
    {
        CONST_VTBL struct IAudioAutoGainControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEnabled(This,pbEnabled) )
    ( (This)->lpVtbl -> SetEnabled(This,bEnable,pguidEventContext) )
EXTERN_C const IID IID_IAudioPeakMeter;
    typedef struct IAudioPeakMeterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioPeakMeter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioPeakMeter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioPeakMeter * This);
                               HRESULT ( STDMETHODCALLTYPE *GetChannelCount )(
            IAudioPeakMeter * This,
            _Out_ UINT *pcChannels);
                               HRESULT ( STDMETHODCALLTYPE *GetLevel )(
            IAudioPeakMeter * This,
            _In_ UINT nChannel,
            _Out_ float *pfLevel);
        END_INTERFACE
    } IAudioPeakMeterVtbl;
    interface IAudioPeakMeter
    {
        CONST_VTBL struct IAudioPeakMeterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetChannelCount(This,pcChannels) )
    ( (This)->lpVtbl -> GetLevel(This,nChannel,pfLevel) )
EXTERN_C const IID IID_IDeviceSpecificProperty;
    typedef struct IDeviceSpecificPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDeviceSpecificProperty * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDeviceSpecificProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDeviceSpecificProperty * This);
                               HRESULT ( STDMETHODCALLTYPE *GetType )(
            IDeviceSpecificProperty * This,
            _Out_ VARTYPE *pVType);
                               HRESULT ( STDMETHODCALLTYPE *GetValue )(
            IDeviceSpecificProperty * This,
            _Out_ void *pvValue,
            _Inout_ DWORD *pcbValue);
                               HRESULT ( STDMETHODCALLTYPE *SetValue )(
            IDeviceSpecificProperty * This,
            _In_ void *pvValue,
                       DWORD cbValue,
            _In_opt_ LPCGUID pguidEventContext);
                               HRESULT ( STDMETHODCALLTYPE *Get4BRange )(
            IDeviceSpecificProperty * This,
            _Out_ LONG *plMin,
            _Out_ LONG *plMax,
            _Out_ LONG *plStepping);
        END_INTERFACE
    } IDeviceSpecificPropertyVtbl;
    interface IDeviceSpecificProperty
    {
        CONST_VTBL struct IDeviceSpecificPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetType(This,pVType) )
    ( (This)->lpVtbl -> GetValue(This,pvValue,pcbValue) )
    ( (This)->lpVtbl -> SetValue(This,pvValue,cbValue,pguidEventContext) )
    ( (This)->lpVtbl -> Get4BRange(This,plMin,plMax,plStepping) )
EXTERN_C const IID IID_IKsFormatSupport;
    typedef struct IKsFormatSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IKsFormatSupport * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IKsFormatSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IKsFormatSupport * This);
                               HRESULT ( STDMETHODCALLTYPE *IsFormatSupported )(
            IKsFormatSupport * This,
                                PKSDATAFORMAT pKsFormat,
            _In_ DWORD cbFormat,
            _Out_ BOOL *pbSupported);
                               HRESULT ( STDMETHODCALLTYPE *GetDevicePreferredFormat )(
            IKsFormatSupport * This,
                        PKSDATAFORMAT *ppKsFormat);
        END_INTERFACE
    } IKsFormatSupportVtbl;
    interface IKsFormatSupport
    {
        CONST_VTBL struct IKsFormatSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsFormatSupported(This,pKsFormat,cbFormat,pbSupported) )
    ( (This)->lpVtbl -> GetDevicePreferredFormat(This,ppKsFormat) )
EXTERN_C const IID IID_IKsJackDescription;
    typedef struct IKsJackDescriptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IKsJackDescription * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IKsJackDescription * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IKsJackDescription * This);
                               HRESULT ( STDMETHODCALLTYPE *GetJackCount )(
            IKsJackDescription * This,
            _Out_ UINT *pcJacks);
                               HRESULT ( STDMETHODCALLTYPE *GetJackDescription )(
            IKsJackDescription * This,
                       UINT nJack,
            _Out_ KSJACK_DESCRIPTION *pDescription);
        END_INTERFACE
    } IKsJackDescriptionVtbl;
    interface IKsJackDescription
    {
        CONST_VTBL struct IKsJackDescriptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetJackCount(This,pcJacks) )
    ( (This)->lpVtbl -> GetJackDescription(This,nJack,pDescription) )
EXTERN_C const IID IID_IKsJackDescription2;
    typedef struct IKsJackDescription2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IKsJackDescription2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IKsJackDescription2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IKsJackDescription2 * This);
                               HRESULT ( STDMETHODCALLTYPE *GetJackCount )(
            IKsJackDescription2 * This,
            _Out_ UINT *pcJacks);
                               HRESULT ( STDMETHODCALLTYPE *GetJackDescription2 )(
            IKsJackDescription2 * This,
                       UINT nJack,
            _Out_ KSJACK_DESCRIPTION2 *pDescription2);
        END_INTERFACE
    } IKsJackDescription2Vtbl;
    interface IKsJackDescription2
    {
        CONST_VTBL struct IKsJackDescription2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetJackCount(This,pcJacks) )
    ( (This)->lpVtbl -> GetJackDescription2(This,nJack,pDescription2) )
EXTERN_C const IID IID_IKsJackSinkInformation;
    typedef struct IKsJackSinkInformationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IKsJackSinkInformation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IKsJackSinkInformation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IKsJackSinkInformation * This);
                               HRESULT ( STDMETHODCALLTYPE *GetJackSinkInformation )(
            IKsJackSinkInformation * This,
            _Out_ KSJACK_SINK_INFORMATION *pJackSinkInformation);
        END_INTERFACE
    } IKsJackSinkInformationVtbl;
    interface IKsJackSinkInformation
    {
        CONST_VTBL struct IKsJackSinkInformationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetJackSinkInformation(This,pJackSinkInformation) )
EXTERN_C const IID IID_IKsJackContainerId;
    typedef struct IKsJackContainerIdVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IKsJackContainerId * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IKsJackContainerId * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IKsJackContainerId * This);
                               HRESULT ( STDMETHODCALLTYPE *GetJackContainerId )(
            IKsJackContainerId * This,
            _Out_ GUID *pJackContainerId);
        END_INTERFACE
    } IKsJackContainerIdVtbl;
    interface IKsJackContainerId
    {
        CONST_VTBL struct IKsJackContainerIdVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetJackContainerId(This,pJackContainerId) )
EXTERN_C const IID IID_IPartsList;
    typedef struct IPartsListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPartsList * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPartsList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPartsList * This);
                               HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IPartsList * This,
            _Out_ UINT *pCount);
                               HRESULT ( STDMETHODCALLTYPE *GetPart )(
            IPartsList * This,
            _In_ UINT nIndex,
            _Out_ IPart **ppPart);
        END_INTERFACE
    } IPartsListVtbl;
    interface IPartsList
    {
        CONST_VTBL struct IPartsListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
    ( (This)->lpVtbl -> GetPart(This,nIndex,ppPart) )
EXTERN_C const IID IID_IPart;
    typedef struct IPartVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPart * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPart * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPart * This);
                               HRESULT ( STDMETHODCALLTYPE *GetName )(
            IPart * This,
            _Outptr_ LPWSTR *ppwstrName);
                               HRESULT ( STDMETHODCALLTYPE *GetLocalId )(
            IPart * This,
            _Out_ UINT *pnId);
                               HRESULT ( STDMETHODCALLTYPE *GetGlobalId )(
            IPart * This,
            _Outptr_ LPWSTR *ppwstrGlobalId);
                               HRESULT ( STDMETHODCALLTYPE *GetPartType )(
            IPart * This,
            _Out_ PartType *pPartType);
                               HRESULT ( STDMETHODCALLTYPE *GetSubType )(
            IPart * This,
                        GUID *pSubType);
                               HRESULT ( STDMETHODCALLTYPE *GetControlInterfaceCount )(
            IPart * This,
            _Out_ UINT *pCount);
                               HRESULT ( STDMETHODCALLTYPE *GetControlInterface )(
            IPart * This,
            _In_ UINT nIndex,
            _Out_ IControlInterface **ppInterfaceDesc);
                               HRESULT ( STDMETHODCALLTYPE *EnumPartsIncoming )(
            IPart * This,
            _Out_ IPartsList **ppParts);
                               HRESULT ( STDMETHODCALLTYPE *EnumPartsOutgoing )(
            IPart * This,
            _Out_ IPartsList **ppParts);
                               HRESULT ( STDMETHODCALLTYPE *GetTopologyObject )(
            IPart * This,
            _Out_ IDeviceTopology **ppTopology);
                               HRESULT ( STDMETHODCALLTYPE *Activate )(
            IPart * This,
            _In_ DWORD dwClsContext,
            _In_ REFIID refiid,
            _Out_opt_ void **ppvObject);
                               HRESULT ( STDMETHODCALLTYPE *RegisterControlChangeCallback )(
            IPart * This,
            _In_ REFGUID riid,
            _In_ IControlChangeNotify *pNotify);
                               HRESULT ( STDMETHODCALLTYPE *UnregisterControlChangeCallback )(
            IPart * This,
            _In_ IControlChangeNotify *pNotify);
        END_INTERFACE
    } IPartVtbl;
    interface IPart
    {
        CONST_VTBL struct IPartVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,ppwstrName) )
    ( (This)->lpVtbl -> GetLocalId(This,pnId) )
    ( (This)->lpVtbl -> GetGlobalId(This,ppwstrGlobalId) )
    ( (This)->lpVtbl -> GetPartType(This,pPartType) )
    ( (This)->lpVtbl -> GetSubType(This,pSubType) )
    ( (This)->lpVtbl -> GetControlInterfaceCount(This,pCount) )
    ( (This)->lpVtbl -> GetControlInterface(This,nIndex,ppInterfaceDesc) )
    ( (This)->lpVtbl -> EnumPartsIncoming(This,ppParts) )
    ( (This)->lpVtbl -> EnumPartsOutgoing(This,ppParts) )
    ( (This)->lpVtbl -> GetTopologyObject(This,ppTopology) )
    ( (This)->lpVtbl -> Activate(This,dwClsContext,refiid,ppvObject) )
    ( (This)->lpVtbl -> RegisterControlChangeCallback(This,riid,pNotify) )
    ( (This)->lpVtbl -> UnregisterControlChangeCallback(This,pNotify) )
EXTERN_C const IID IID_IConnector;
    typedef struct IConnectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IConnector * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IConnector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IConnector * This);
                               HRESULT ( STDMETHODCALLTYPE *GetType )(
            IConnector * This,
            _Out_ ConnectorType *pType);
                               HRESULT ( STDMETHODCALLTYPE *GetDataFlow )(
            IConnector * This,
            _Out_ DataFlow *pFlow);
                               HRESULT ( STDMETHODCALLTYPE *ConnectTo )(
            IConnector * This,
            _In_ IConnector *pConnectTo);
                               HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            IConnector * This);
                               HRESULT ( STDMETHODCALLTYPE *IsConnected )(
            IConnector * This,
            _Out_ BOOL *pbConnected);
                               HRESULT ( STDMETHODCALLTYPE *GetConnectedTo )(
            IConnector * This,
            _Out_ IConnector **ppConTo);
                               HRESULT ( STDMETHODCALLTYPE *GetConnectorIdConnectedTo )(
            IConnector * This,
            _Outptr_ LPWSTR *ppwstrConnectorId);
                               HRESULT ( STDMETHODCALLTYPE *GetDeviceIdConnectedTo )(
            IConnector * This,
            _Outptr_ LPWSTR *ppwstrDeviceId);
        END_INTERFACE
    } IConnectorVtbl;
    interface IConnector
    {
        CONST_VTBL struct IConnectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetType(This,pType) )
    ( (This)->lpVtbl -> GetDataFlow(This,pFlow) )
    ( (This)->lpVtbl -> ConnectTo(This,pConnectTo) )
    ( (This)->lpVtbl -> Disconnect(This) )
    ( (This)->lpVtbl -> IsConnected(This,pbConnected) )
    ( (This)->lpVtbl -> GetConnectedTo(This,ppConTo) )
    ( (This)->lpVtbl -> GetConnectorIdConnectedTo(This,ppwstrConnectorId) )
    ( (This)->lpVtbl -> GetDeviceIdConnectedTo(This,ppwstrDeviceId) )
EXTERN_C const IID IID_ISubunit;
    typedef struct ISubunitVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISubunit * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISubunit * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISubunit * This);
        END_INTERFACE
    } ISubunitVtbl;
    interface ISubunit
    {
        CONST_VTBL struct ISubunitVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
EXTERN_C const IID IID_IControlInterface;
    typedef struct IControlInterfaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IControlInterface * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IControlInterface * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IControlInterface * This);
                               HRESULT ( STDMETHODCALLTYPE *GetName )(
            IControlInterface * This,
            _Outptr_ LPWSTR *ppwstrName);
                               HRESULT ( STDMETHODCALLTYPE *GetIID )(
            IControlInterface * This,
            _Out_ GUID *pIID);
        END_INTERFACE
    } IControlInterfaceVtbl;
    interface IControlInterface
    {
        CONST_VTBL struct IControlInterfaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,ppwstrName) )
    ( (This)->lpVtbl -> GetIID(This,pIID) )
EXTERN_C const IID IID_IControlChangeNotify;
    typedef struct IControlChangeNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IControlChangeNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IControlChangeNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IControlChangeNotify * This);
                               HRESULT ( STDMETHODCALLTYPE *OnNotify )(
            IControlChangeNotify * This,
            _In_ DWORD dwSenderProcessId,
            _In_opt_ LPCGUID pguidEventContext);
        END_INTERFACE
    } IControlChangeNotifyVtbl;
    interface IControlChangeNotify
    {
        CONST_VTBL struct IControlChangeNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnNotify(This,dwSenderProcessId,pguidEventContext) )
EXTERN_C const IID IID_IDeviceTopology;
    typedef struct IDeviceTopologyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDeviceTopology * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDeviceTopology * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDeviceTopology * This);
                               HRESULT ( STDMETHODCALLTYPE *GetConnectorCount )(
            IDeviceTopology * This,
            _Out_ UINT *pCount);
                               HRESULT ( STDMETHODCALLTYPE *GetConnector )(
            IDeviceTopology * This,
            _In_ UINT nIndex,
            _Out_ IConnector **ppConnector);
                               HRESULT ( STDMETHODCALLTYPE *GetSubunitCount )(
            IDeviceTopology * This,
            _Out_ UINT *pCount);
                               HRESULT ( STDMETHODCALLTYPE *GetSubunit )(
            IDeviceTopology * This,
            _In_ UINT nIndex,
            _Outptr_ ISubunit **ppSubunit);
                               HRESULT ( STDMETHODCALLTYPE *GetPartById )(
            IDeviceTopology * This,
            _In_ UINT nId,
            _Outptr_ IPart **ppPart);
                               HRESULT ( STDMETHODCALLTYPE *GetDeviceId )(
            IDeviceTopology * This,
            _Outptr_ LPWSTR *ppwstrDeviceId);
                               HRESULT ( STDMETHODCALLTYPE *GetSignalPath )(
            IDeviceTopology * This,
            _In_ IPart *pIPartFrom,
            _In_ IPart *pIPartTo,
            _In_ BOOL bRejectMixedPaths,
            _Outptr_ IPartsList **ppParts);
        END_INTERFACE
    } IDeviceTopologyVtbl;
    interface IDeviceTopology
    {
        CONST_VTBL struct IDeviceTopologyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetConnectorCount(This,pCount) )
    ( (This)->lpVtbl -> GetConnector(This,nIndex,ppConnector) )
    ( (This)->lpVtbl -> GetSubunitCount(This,pCount) )
    ( (This)->lpVtbl -> GetSubunit(This,nIndex,ppSubunit) )
    ( (This)->lpVtbl -> GetPartById(This,nId,ppPart) )
    ( (This)->lpVtbl -> GetDeviceId(This,ppwstrDeviceId) )
    ( (This)->lpVtbl -> GetSignalPath(This,pIPartFrom,pIPartTo,bRejectMixedPaths,ppParts) )
EXTERN_C const IID LIBID_DevTopologyLib;
EXTERN_C const CLSID CLSID_DeviceTopology;
class DECLSPEC_UUID("1DF639D0-5EC1-47AA-9379-828DC1AA8C59")
DeviceTopology;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_devicetopology_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_devicetopology_0000_0027_v0_0_s_ifspec;
}
