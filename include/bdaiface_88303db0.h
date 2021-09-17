#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IBDA_NetworkProvider IBDA_NetworkProvider;
typedef interface IBDA_EthernetFilter IBDA_EthernetFilter;
typedef interface IBDA_IPV4Filter IBDA_IPV4Filter;
typedef interface IBDA_IPV6Filter IBDA_IPV6Filter;
typedef interface IBDA_DeviceControl IBDA_DeviceControl;
typedef interface IBDA_PinControl IBDA_PinControl;
typedef interface IBDA_SignalProperties IBDA_SignalProperties;
typedef interface IBDA_SignalStatistics IBDA_SignalStatistics;
typedef interface IBDA_Topology IBDA_Topology;
typedef interface IBDA_VoidTransform IBDA_VoidTransform;
typedef interface IBDA_NullTransform IBDA_NullTransform;
typedef interface IBDA_FrequencyFilter IBDA_FrequencyFilter;
typedef interface IBDA_LNBInfo IBDA_LNBInfo;
typedef interface IBDA_DiseqCommand IBDA_DiseqCommand;
typedef interface IBDA_AutoDemodulate IBDA_AutoDemodulate;
typedef interface IBDA_AutoDemodulateEx IBDA_AutoDemodulateEx;
typedef interface IBDA_DigitalDemodulator IBDA_DigitalDemodulator;
typedef interface IBDA_DigitalDemodulator2 IBDA_DigitalDemodulator2;
typedef interface IBDA_DigitalDemodulator3 IBDA_DigitalDemodulator3;
typedef interface ICCSubStreamFiltering ICCSubStreamFiltering;
typedef interface IBDA_IPSinkControl IBDA_IPSinkControl;
typedef interface IBDA_IPSinkInfo IBDA_IPSinkInfo;
typedef interface IEnumPIDMap IEnumPIDMap;
typedef interface IMPEG2PIDMap IMPEG2PIDMap;
typedef interface IFrequencyMap IFrequencyMap;
typedef interface IBDA_EasMessage IBDA_EasMessage;
typedef interface IBDA_TransportStreamInfo IBDA_TransportStreamInfo;
typedef interface IBDA_ConditionalAccess IBDA_ConditionalAccess;
typedef interface IBDA_DiagnosticProperties IBDA_DiagnosticProperties;
typedef interface IBDA_DRM IBDA_DRM;
typedef interface IBDA_NameValueService IBDA_NameValueService;
typedef interface IBDA_ConditionalAccessEx IBDA_ConditionalAccessEx;
typedef interface IBDA_ISDBConditionalAccess IBDA_ISDBConditionalAccess;
typedef interface IBDA_EventingService IBDA_EventingService;
typedef interface IBDA_AUX IBDA_AUX;
typedef interface IBDA_Encoder IBDA_Encoder;
typedef interface IBDA_FDC IBDA_FDC;
typedef interface IBDA_GuideDataDeliveryService IBDA_GuideDataDeliveryService;
typedef interface IBDA_DRMService IBDA_DRMService;
typedef interface IBDA_WMDRMSession IBDA_WMDRMSession;
typedef interface IBDA_WMDRMTuner IBDA_WMDRMTuner;
typedef interface IBDA_DRIDRMService IBDA_DRIDRMService;
typedef interface IBDA_DRIWMDRMSession IBDA_DRIWMDRMSession;
typedef interface IBDA_MUX IBDA_MUX;
typedef interface IBDA_TransportStreamSelector IBDA_TransportStreamSelector;
typedef interface IBDA_UserActivityService IBDA_UserActivityService;
typedef interface IESEvent IESEvent;
typedef interface IESEvents IESEvents;
typedef interface IBroadcastEvent IBroadcastEvent;
typedef interface IBroadcastEventEx IBroadcastEventEx;
#include "unknwn.h"
#include "strmif.h"
#include "BdaTypes.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma region Desktop Family
#pragma endregion
typedef
enum SmartCardStatusType
    {
        CardInserted = 0,
        CardRemoved = ( CardInserted + 1 ) ,
        CardError = ( CardRemoved + 1 ) ,
        CardDataChanged = ( CardError + 1 ) ,
        CardFirmwareUpgrade = ( CardDataChanged + 1 )
    } SmartCardStatusType;
typedef
enum SmartCardAssociationType
    {
        NotAssociated = 0,
        Associated = ( NotAssociated + 1 ) ,
        AssociationUnknown = ( Associated + 1 )
    } SmartCardAssociationType;
typedef
enum LocationCodeSchemeType
    {
        SCTE_18 = 0
    } LocationCodeSchemeType;
typedef struct EALocationCodeType
    {
    LocationCodeSchemeType LocationCodeScheme;
    BYTE state_code;
    BYTE county_subdivision;
    WORD county_code;
    } EALocationCodeType;
typedef
enum EntitlementType
    {
        Entitled = 0,
        NotEntitled = ( Entitled + 1 ) ,
        TechnicalFailure = ( NotEntitled + 1 )
    } EntitlementType;
typedef
enum UICloseReasonType
    {
        NotReady = 0,
        UserClosed = ( NotReady + 1 ) ,
        SystemClosed = ( UserClosed + 1 ) ,
        DeviceClosed = ( SystemClosed + 1 ) ,
        ErrorClosed = ( DeviceClosed + 1 )
    } UICloseReasonType;
typedef struct SmartCardApplication
    {
    ApplicationTypeType ApplicationType;
    USHORT ApplicationVersion;
    BSTR pbstrApplicationName;
    BSTR pbstrApplicationURL;
    } SmartCardApplication;
typedef
enum BDA_DrmPairingError
    {
        BDA_DrmPairing_Succeeded = 0,
        BDA_DrmPairing_HardwareFailure = ( BDA_DrmPairing_Succeeded + 1 ) ,
        BDA_DrmPairing_NeedRevocationData = ( BDA_DrmPairing_HardwareFailure + 1 ) ,
        BDA_DrmPairing_NeedIndiv = ( BDA_DrmPairing_NeedRevocationData + 1 ) ,
        BDA_DrmPairing_Other = ( BDA_DrmPairing_NeedIndiv + 1 ) ,
        BDA_DrmPairing_DrmInitFailed = ( BDA_DrmPairing_Other + 1 ) ,
        BDA_DrmPairing_DrmNotPaired = ( BDA_DrmPairing_DrmInitFailed + 1 ) ,
        BDA_DrmPairing_DrmRePairSoon = ( BDA_DrmPairing_DrmNotPaired + 1 ) ,
        BDA_DrmPairing_Aborted = ( BDA_DrmPairing_DrmRePairSoon + 1 ) ,
        BDA_DrmPairing_NeedSDKUpdate = ( BDA_DrmPairing_Aborted + 1 )
    } BDA_DrmPairingError;
#pragma region Desktop Family
#pragma endregion
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_NetworkProvider;
    typedef struct IBDA_NetworkProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_NetworkProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_NetworkProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_NetworkProvider * This);
        HRESULT ( STDMETHODCALLTYPE *PutSignalSource )(
            __RPC__in IBDA_NetworkProvider * This,
                       ULONG ulSignalSource);
        HRESULT ( STDMETHODCALLTYPE *GetSignalSource )(
            __RPC__in IBDA_NetworkProvider * This,
                            __RPC__inout ULONG *pulSignalSource);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkType )(
            __RPC__in IBDA_NetworkProvider * This,
                            __RPC__inout GUID *pguidNetworkType);
        HRESULT ( STDMETHODCALLTYPE *PutTuningSpace )(
            __RPC__in IBDA_NetworkProvider * This,
                       __RPC__in REFGUID guidTuningSpace);
        HRESULT ( STDMETHODCALLTYPE *GetTuningSpace )(
            __RPC__in IBDA_NetworkProvider * This,
                            __RPC__inout GUID *pguidTuingSpace);
        HRESULT ( STDMETHODCALLTYPE *RegisterDeviceFilter )(
            __RPC__in IBDA_NetworkProvider * This,
                       __RPC__in_opt IUnknown *pUnkFilterControl,
                            __RPC__inout ULONG *ppvRegisitrationContext);
        HRESULT ( STDMETHODCALLTYPE *UnRegisterDeviceFilter )(
            __RPC__in IBDA_NetworkProvider * This,
                       ULONG pvRegistrationContext);
        END_INTERFACE
    } IBDA_NetworkProviderVtbl;
    interface IBDA_NetworkProvider
    {
        CONST_VTBL struct IBDA_NetworkProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PutSignalSource(This,ulSignalSource) )
    ( (This)->lpVtbl -> GetSignalSource(This,pulSignalSource) )
    ( (This)->lpVtbl -> GetNetworkType(This,pguidNetworkType) )
    ( (This)->lpVtbl -> PutTuningSpace(This,guidTuningSpace) )
    ( (This)->lpVtbl -> GetTuningSpace(This,pguidTuingSpace) )
    ( (This)->lpVtbl -> RegisterDeviceFilter(This,pUnkFilterControl,ppvRegisitrationContext) )
    ( (This)->lpVtbl -> UnRegisterDeviceFilter(This,pvRegistrationContext) )
EXTERN_C const IID IID_IBDA_EthernetFilter;
    typedef struct IBDA_EthernetFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_EthernetFilter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_EthernetFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_EthernetFilter * This);
        HRESULT ( STDMETHODCALLTYPE *GetMulticastListSize )(
            __RPC__in IBDA_EthernetFilter * This,
                            __RPC__inout ULONG *pulcbAddresses);
        HRESULT ( STDMETHODCALLTYPE *PutMulticastList )(
            __RPC__in IBDA_EthernetFilter * This,
                       ULONG ulcbAddresses,
                                __RPC__in_ecount_full(ulcbAddresses) BYTE pAddressList[ ]);
        HRESULT ( STDMETHODCALLTYPE *GetMulticastList )(
            __RPC__in IBDA_EthernetFilter * This,
                            __RPC__inout ULONG *pulcbAddresses,
                                     __RPC__inout_ecount_full(*pulcbAddresses) BYTE pAddressList[ ]);
        HRESULT ( STDMETHODCALLTYPE *PutMulticastMode )(
            __RPC__in IBDA_EthernetFilter * This,
                       ULONG ulModeMask);
        HRESULT ( STDMETHODCALLTYPE *GetMulticastMode )(
            __RPC__in IBDA_EthernetFilter * This,
                        __RPC__out ULONG *pulModeMask);
        END_INTERFACE
    } IBDA_EthernetFilterVtbl;
    interface IBDA_EthernetFilter
    {
        CONST_VTBL struct IBDA_EthernetFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMulticastListSize(This,pulcbAddresses) )
    ( (This)->lpVtbl -> PutMulticastList(This,ulcbAddresses,pAddressList) )
    ( (This)->lpVtbl -> GetMulticastList(This,pulcbAddresses,pAddressList) )
    ( (This)->lpVtbl -> PutMulticastMode(This,ulModeMask) )
    ( (This)->lpVtbl -> GetMulticastMode(This,pulModeMask) )
EXTERN_C const IID IID_IBDA_IPV4Filter;
    typedef struct IBDA_IPV4FilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_IPV4Filter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_IPV4Filter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_IPV4Filter * This);
        HRESULT ( STDMETHODCALLTYPE *GetMulticastListSize )(
            __RPC__in IBDA_IPV4Filter * This,
                            __RPC__inout ULONG *pulcbAddresses);
        HRESULT ( STDMETHODCALLTYPE *PutMulticastList )(
            __RPC__in IBDA_IPV4Filter * This,
                       ULONG ulcbAddresses,
                                __RPC__in_ecount_full(ulcbAddresses) BYTE pAddressList[ ]);
        HRESULT ( STDMETHODCALLTYPE *GetMulticastList )(
            __RPC__in IBDA_IPV4Filter * This,
                            __RPC__inout ULONG *pulcbAddresses,
                                 __RPC__out_ecount_full(*pulcbAddresses) BYTE pAddressList[ ]);
        HRESULT ( STDMETHODCALLTYPE *PutMulticastMode )(
            __RPC__in IBDA_IPV4Filter * This,
                       ULONG ulModeMask);
        HRESULT ( STDMETHODCALLTYPE *GetMulticastMode )(
            __RPC__in IBDA_IPV4Filter * This,
                        __RPC__out ULONG *pulModeMask);
        END_INTERFACE
    } IBDA_IPV4FilterVtbl;
    interface IBDA_IPV4Filter
    {
        CONST_VTBL struct IBDA_IPV4FilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMulticastListSize(This,pulcbAddresses) )
    ( (This)->lpVtbl -> PutMulticastList(This,ulcbAddresses,pAddressList) )
    ( (This)->lpVtbl -> GetMulticastList(This,pulcbAddresses,pAddressList) )
    ( (This)->lpVtbl -> PutMulticastMode(This,ulModeMask) )
    ( (This)->lpVtbl -> GetMulticastMode(This,pulModeMask) )
EXTERN_C const IID IID_IBDA_IPV6Filter;
    typedef struct IBDA_IPV6FilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_IPV6Filter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_IPV6Filter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_IPV6Filter * This);
        HRESULT ( STDMETHODCALLTYPE *GetMulticastListSize )(
            __RPC__in IBDA_IPV6Filter * This,
                            __RPC__inout ULONG *pulcbAddresses);
        HRESULT ( STDMETHODCALLTYPE *PutMulticastList )(
            __RPC__in IBDA_IPV6Filter * This,
                       ULONG ulcbAddresses,
                                __RPC__in_ecount_full(ulcbAddresses) BYTE pAddressList[ ]);
        HRESULT ( STDMETHODCALLTYPE *GetMulticastList )(
            __RPC__in IBDA_IPV6Filter * This,
                            __RPC__inout ULONG *pulcbAddresses,
                                 __RPC__out_ecount_full(*pulcbAddresses) BYTE pAddressList[ ]);
        HRESULT ( STDMETHODCALLTYPE *PutMulticastMode )(
            __RPC__in IBDA_IPV6Filter * This,
                       ULONG ulModeMask);
        HRESULT ( STDMETHODCALLTYPE *GetMulticastMode )(
            __RPC__in IBDA_IPV6Filter * This,
                        __RPC__out ULONG *pulModeMask);
        END_INTERFACE
    } IBDA_IPV6FilterVtbl;
    interface IBDA_IPV6Filter
    {
        CONST_VTBL struct IBDA_IPV6FilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMulticastListSize(This,pulcbAddresses) )
    ( (This)->lpVtbl -> PutMulticastList(This,ulcbAddresses,pAddressList) )
    ( (This)->lpVtbl -> GetMulticastList(This,pulcbAddresses,pAddressList) )
    ( (This)->lpVtbl -> PutMulticastMode(This,ulModeMask) )
    ( (This)->lpVtbl -> GetMulticastMode(This,pulModeMask) )
EXTERN_C const IID IID_IBDA_DeviceControl;
    typedef struct IBDA_DeviceControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_DeviceControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_DeviceControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_DeviceControl * This);
        HRESULT ( STDMETHODCALLTYPE *StartChanges )(
            __RPC__in IBDA_DeviceControl * This);
        HRESULT ( STDMETHODCALLTYPE *CheckChanges )(
            __RPC__in IBDA_DeviceControl * This);
        HRESULT ( STDMETHODCALLTYPE *CommitChanges )(
            __RPC__in IBDA_DeviceControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetChangeState )(
            __RPC__in IBDA_DeviceControl * This,
                            __RPC__inout ULONG *pState);
        END_INTERFACE
    } IBDA_DeviceControlVtbl;
    interface IBDA_DeviceControl
    {
        CONST_VTBL struct IBDA_DeviceControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartChanges(This) )
    ( (This)->lpVtbl -> CheckChanges(This) )
    ( (This)->lpVtbl -> CommitChanges(This) )
    ( (This)->lpVtbl -> GetChangeState(This,pState) )
EXTERN_C const IID IID_IBDA_PinControl;
    typedef struct IBDA_PinControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_PinControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_PinControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_PinControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetPinID )(
            __RPC__in IBDA_PinControl * This,
                            __RPC__inout ULONG *pulPinID);
        HRESULT ( STDMETHODCALLTYPE *GetPinType )(
            __RPC__in IBDA_PinControl * This,
                            __RPC__inout ULONG *pulPinType);
        HRESULT ( STDMETHODCALLTYPE *RegistrationContext )(
            __RPC__in IBDA_PinControl * This,
                            __RPC__inout ULONG *pulRegistrationCtx);
        END_INTERFACE
    } IBDA_PinControlVtbl;
    interface IBDA_PinControl
    {
        CONST_VTBL struct IBDA_PinControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPinID(This,pulPinID) )
    ( (This)->lpVtbl -> GetPinType(This,pulPinType) )
    ( (This)->lpVtbl -> RegistrationContext(This,pulRegistrationCtx) )
EXTERN_C const IID IID_IBDA_SignalProperties;
    typedef struct IBDA_SignalPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_SignalProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_SignalProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_SignalProperties * This);
        HRESULT ( STDMETHODCALLTYPE *PutNetworkType )(
            __RPC__in IBDA_SignalProperties * This,
                       __RPC__in REFGUID guidNetworkType);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkType )(
            __RPC__in IBDA_SignalProperties * This,
                            __RPC__inout GUID *pguidNetworkType);
        HRESULT ( STDMETHODCALLTYPE *PutSignalSource )(
            __RPC__in IBDA_SignalProperties * This,
                       ULONG ulSignalSource);
        HRESULT ( STDMETHODCALLTYPE *GetSignalSource )(
            __RPC__in IBDA_SignalProperties * This,
                            __RPC__inout ULONG *pulSignalSource);
        HRESULT ( STDMETHODCALLTYPE *PutTuningSpace )(
            __RPC__in IBDA_SignalProperties * This,
                       __RPC__in REFGUID guidTuningSpace);
        HRESULT ( STDMETHODCALLTYPE *GetTuningSpace )(
            __RPC__in IBDA_SignalProperties * This,
                            __RPC__inout GUID *pguidTuingSpace);
        END_INTERFACE
    } IBDA_SignalPropertiesVtbl;
    interface IBDA_SignalProperties
    {
        CONST_VTBL struct IBDA_SignalPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PutNetworkType(This,guidNetworkType) )
    ( (This)->lpVtbl -> GetNetworkType(This,pguidNetworkType) )
    ( (This)->lpVtbl -> PutSignalSource(This,ulSignalSource) )
    ( (This)->lpVtbl -> GetSignalSource(This,pulSignalSource) )
    ( (This)->lpVtbl -> PutTuningSpace(This,guidTuningSpace) )
    ( (This)->lpVtbl -> GetTuningSpace(This,pguidTuingSpace) )
EXTERN_C const IID IID_IBDA_SignalStatistics;
    typedef struct IBDA_SignalStatisticsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_SignalStatistics * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_SignalStatistics * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_SignalStatistics * This);
        HRESULT ( STDMETHODCALLTYPE *put_SignalStrength )(
            __RPC__in IBDA_SignalStatistics * This,
                       LONG lDbStrength);
        HRESULT ( STDMETHODCALLTYPE *get_SignalStrength )(
            __RPC__in IBDA_SignalStatistics * This,
                            __RPC__inout LONG *plDbStrength);
        HRESULT ( STDMETHODCALLTYPE *put_SignalQuality )(
            __RPC__in IBDA_SignalStatistics * This,
                       LONG lPercentQuality);
        HRESULT ( STDMETHODCALLTYPE *get_SignalQuality )(
            __RPC__in IBDA_SignalStatistics * This,
                            __RPC__inout LONG *plPercentQuality);
        HRESULT ( STDMETHODCALLTYPE *put_SignalPresent )(
            __RPC__in IBDA_SignalStatistics * This,
                       BOOLEAN fPresent);
        HRESULT ( STDMETHODCALLTYPE *get_SignalPresent )(
            __RPC__in IBDA_SignalStatistics * This,
                            __RPC__inout BOOLEAN *pfPresent);
        HRESULT ( STDMETHODCALLTYPE *put_SignalLocked )(
            __RPC__in IBDA_SignalStatistics * This,
                       BOOLEAN fLocked);
        HRESULT ( STDMETHODCALLTYPE *get_SignalLocked )(
            __RPC__in IBDA_SignalStatistics * This,
                            __RPC__inout BOOLEAN *pfLocked);
        HRESULT ( STDMETHODCALLTYPE *put_SampleTime )(
            __RPC__in IBDA_SignalStatistics * This,
                       LONG lmsSampleTime);
        HRESULT ( STDMETHODCALLTYPE *get_SampleTime )(
            __RPC__in IBDA_SignalStatistics * This,
                            __RPC__inout LONG *plmsSampleTime);
        END_INTERFACE
    } IBDA_SignalStatisticsVtbl;
    interface IBDA_SignalStatistics
    {
        CONST_VTBL struct IBDA_SignalStatisticsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_SignalStrength(This,lDbStrength) )
    ( (This)->lpVtbl -> get_SignalStrength(This,plDbStrength) )
    ( (This)->lpVtbl -> put_SignalQuality(This,lPercentQuality) )
    ( (This)->lpVtbl -> get_SignalQuality(This,plPercentQuality) )
    ( (This)->lpVtbl -> put_SignalPresent(This,fPresent) )
    ( (This)->lpVtbl -> get_SignalPresent(This,pfPresent) )
    ( (This)->lpVtbl -> put_SignalLocked(This,fLocked) )
    ( (This)->lpVtbl -> get_SignalLocked(This,pfLocked) )
    ( (This)->lpVtbl -> put_SampleTime(This,lmsSampleTime) )
    ( (This)->lpVtbl -> get_SampleTime(This,plmsSampleTime) )
EXTERN_C const IID IID_IBDA_Topology;
    typedef struct IBDA_TopologyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_Topology * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_Topology * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_Topology * This);
        HRESULT ( STDMETHODCALLTYPE *GetNodeTypes )(
            __RPC__in IBDA_Topology * This,
                            __RPC__inout ULONG *pulcNodeTypes,
                       ULONG ulcNodeTypesMax,
                                     __RPC__inout_ecount_full(ulcNodeTypesMax) ULONG rgulNodeTypes[ ]);
        HRESULT ( STDMETHODCALLTYPE *GetNodeDescriptors )(
            __RPC__in IBDA_Topology * This,
                            __RPC__inout ULONG *ulcNodeDescriptors,
                       ULONG ulcNodeDescriptorsMax,
                                     __RPC__inout_ecount_full(ulcNodeDescriptorsMax) BDANODE_DESCRIPTOR rgNodeDescriptors[ ]);
        HRESULT ( STDMETHODCALLTYPE *GetNodeInterfaces )(
            __RPC__in IBDA_Topology * This,
                       ULONG ulNodeType,
                            __RPC__inout ULONG *pulcInterfaces,
                       ULONG ulcInterfacesMax,
                                     __RPC__inout_ecount_full(ulcInterfacesMax) GUID rgguidInterfaces[ ]);
        HRESULT ( STDMETHODCALLTYPE *GetPinTypes )(
            __RPC__in IBDA_Topology * This,
                            __RPC__inout ULONG *pulcPinTypes,
                       ULONG ulcPinTypesMax,
                                     __RPC__inout_ecount_full(ulcPinTypesMax) ULONG rgulPinTypes[ ]);
        HRESULT ( STDMETHODCALLTYPE *GetTemplateConnections )(
            __RPC__in IBDA_Topology * This,
                            __RPC__inout ULONG *pulcConnections,
                       ULONG ulcConnectionsMax,
                                     __RPC__inout_ecount_full(ulcConnectionsMax) BDA_TEMPLATE_CONNECTION rgConnections[ ]);
        HRESULT ( STDMETHODCALLTYPE *CreatePin )(
            __RPC__in IBDA_Topology * This,
                       ULONG ulPinType,
                            __RPC__inout ULONG *pulPinId);
        HRESULT ( STDMETHODCALLTYPE *DeletePin )(
            __RPC__in IBDA_Topology * This,
                       ULONG ulPinId);
        HRESULT ( STDMETHODCALLTYPE *SetMediaType )(
            __RPC__in IBDA_Topology * This,
                       ULONG ulPinId,
                       __RPC__in AM_MEDIA_TYPE *pMediaType);
        HRESULT ( STDMETHODCALLTYPE *SetMedium )(
            __RPC__in IBDA_Topology * This,
                       ULONG ulPinId,
                       __RPC__in REGPINMEDIUM *pMedium);
        HRESULT ( STDMETHODCALLTYPE *CreateTopology )(
            __RPC__in IBDA_Topology * This,
                       ULONG ulInputPinId,
                       ULONG ulOutputPinId);
        HRESULT ( STDMETHODCALLTYPE *GetControlNode )(
            __RPC__in IBDA_Topology * This,
                       ULONG ulInputPinId,
                       ULONG ulOutputPinId,
                       ULONG ulNodeType,
                            __RPC__deref_inout_opt IUnknown **ppControlNode);
        END_INTERFACE
    } IBDA_TopologyVtbl;
    interface IBDA_Topology
    {
        CONST_VTBL struct IBDA_TopologyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNodeTypes(This,pulcNodeTypes,ulcNodeTypesMax,rgulNodeTypes) )
    ( (This)->lpVtbl -> GetNodeDescriptors(This,ulcNodeDescriptors,ulcNodeDescriptorsMax,rgNodeDescriptors) )
    ( (This)->lpVtbl -> GetNodeInterfaces(This,ulNodeType,pulcInterfaces,ulcInterfacesMax,rgguidInterfaces) )
    ( (This)->lpVtbl -> GetPinTypes(This,pulcPinTypes,ulcPinTypesMax,rgulPinTypes) )
    ( (This)->lpVtbl -> GetTemplateConnections(This,pulcConnections,ulcConnectionsMax,rgConnections) )
    ( (This)->lpVtbl -> CreatePin(This,ulPinType,pulPinId) )
    ( (This)->lpVtbl -> DeletePin(This,ulPinId) )
    ( (This)->lpVtbl -> SetMediaType(This,ulPinId,pMediaType) )
    ( (This)->lpVtbl -> SetMedium(This,ulPinId,pMedium) )
    ( (This)->lpVtbl -> CreateTopology(This,ulInputPinId,ulOutputPinId) )
    ( (This)->lpVtbl -> GetControlNode(This,ulInputPinId,ulOutputPinId,ulNodeType,ppControlNode) )
EXTERN_C const IID IID_IBDA_VoidTransform;
    typedef struct IBDA_VoidTransformVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_VoidTransform * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_VoidTransform * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_VoidTransform * This);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IBDA_VoidTransform * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IBDA_VoidTransform * This);
        END_INTERFACE
    } IBDA_VoidTransformVtbl;
    interface IBDA_VoidTransform
    {
        CONST_VTBL struct IBDA_VoidTransformVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Start(This) )
    ( (This)->lpVtbl -> Stop(This) )
EXTERN_C const IID IID_IBDA_NullTransform;
    typedef struct IBDA_NullTransformVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_NullTransform * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_NullTransform * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_NullTransform * This);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IBDA_NullTransform * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IBDA_NullTransform * This);
        END_INTERFACE
    } IBDA_NullTransformVtbl;
    interface IBDA_NullTransform
    {
        CONST_VTBL struct IBDA_NullTransformVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Start(This) )
    ( (This)->lpVtbl -> Stop(This) )
EXTERN_C const IID IID_IBDA_FrequencyFilter;
    typedef struct IBDA_FrequencyFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_FrequencyFilter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_FrequencyFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_FrequencyFilter * This);
        HRESULT ( STDMETHODCALLTYPE *put_Autotune )(
            __RPC__in IBDA_FrequencyFilter * This,
                       ULONG ulTransponder);
        HRESULT ( STDMETHODCALLTYPE *get_Autotune )(
            __RPC__in IBDA_FrequencyFilter * This,
                            __RPC__inout ULONG *pulTransponder);
        HRESULT ( STDMETHODCALLTYPE *put_Frequency )(
            __RPC__in IBDA_FrequencyFilter * This,
                       ULONG ulFrequency);
        HRESULT ( STDMETHODCALLTYPE *get_Frequency )(
            __RPC__in IBDA_FrequencyFilter * This,
                            __RPC__inout ULONG *pulFrequency);
        HRESULT ( STDMETHODCALLTYPE *put_Polarity )(
            __RPC__in IBDA_FrequencyFilter * This,
                       Polarisation Polarity);
        HRESULT ( STDMETHODCALLTYPE *get_Polarity )(
            __RPC__in IBDA_FrequencyFilter * This,
                            __RPC__inout Polarisation *pPolarity);
        HRESULT ( STDMETHODCALLTYPE *put_Range )(
            __RPC__in IBDA_FrequencyFilter * This,
                       ULONG ulRange);
        HRESULT ( STDMETHODCALLTYPE *get_Range )(
            __RPC__in IBDA_FrequencyFilter * This,
                            __RPC__inout ULONG *pulRange);
        HRESULT ( STDMETHODCALLTYPE *put_Bandwidth )(
            __RPC__in IBDA_FrequencyFilter * This,
                       ULONG ulBandwidth);
        HRESULT ( STDMETHODCALLTYPE *get_Bandwidth )(
            __RPC__in IBDA_FrequencyFilter * This,
                            __RPC__inout ULONG *pulBandwidth);
        HRESULT ( STDMETHODCALLTYPE *put_FrequencyMultiplier )(
            __RPC__in IBDA_FrequencyFilter * This,
                       ULONG ulMultiplier);
        HRESULT ( STDMETHODCALLTYPE *get_FrequencyMultiplier )(
            __RPC__in IBDA_FrequencyFilter * This,
                            __RPC__inout ULONG *pulMultiplier);
        END_INTERFACE
    } IBDA_FrequencyFilterVtbl;
    interface IBDA_FrequencyFilter
    {
        CONST_VTBL struct IBDA_FrequencyFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_Autotune(This,ulTransponder) )
    ( (This)->lpVtbl -> get_Autotune(This,pulTransponder) )
    ( (This)->lpVtbl -> put_Frequency(This,ulFrequency) )
    ( (This)->lpVtbl -> get_Frequency(This,pulFrequency) )
    ( (This)->lpVtbl -> put_Polarity(This,Polarity) )
    ( (This)->lpVtbl -> get_Polarity(This,pPolarity) )
    ( (This)->lpVtbl -> put_Range(This,ulRange) )
    ( (This)->lpVtbl -> get_Range(This,pulRange) )
    ( (This)->lpVtbl -> put_Bandwidth(This,ulBandwidth) )
    ( (This)->lpVtbl -> get_Bandwidth(This,pulBandwidth) )
    ( (This)->lpVtbl -> put_FrequencyMultiplier(This,ulMultiplier) )
    ( (This)->lpVtbl -> get_FrequencyMultiplier(This,pulMultiplier) )
EXTERN_C const IID IID_IBDA_LNBInfo;
    typedef struct IBDA_LNBInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_LNBInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_LNBInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_LNBInfo * This);
        HRESULT ( STDMETHODCALLTYPE *put_LocalOscilatorFrequencyLowBand )(
            __RPC__in IBDA_LNBInfo * This,
                       ULONG ulLOFLow);
        HRESULT ( STDMETHODCALLTYPE *get_LocalOscilatorFrequencyLowBand )(
            __RPC__in IBDA_LNBInfo * This,
                            __RPC__inout ULONG *pulLOFLow);
        HRESULT ( STDMETHODCALLTYPE *put_LocalOscilatorFrequencyHighBand )(
            __RPC__in IBDA_LNBInfo * This,
                       ULONG ulLOFHigh);
        HRESULT ( STDMETHODCALLTYPE *get_LocalOscilatorFrequencyHighBand )(
            __RPC__in IBDA_LNBInfo * This,
                            __RPC__inout ULONG *pulLOFHigh);
        HRESULT ( STDMETHODCALLTYPE *put_HighLowSwitchFrequency )(
            __RPC__in IBDA_LNBInfo * This,
                       ULONG ulSwitchFrequency);
        HRESULT ( STDMETHODCALLTYPE *get_HighLowSwitchFrequency )(
            __RPC__in IBDA_LNBInfo * This,
                            __RPC__inout ULONG *pulSwitchFrequency);
        END_INTERFACE
    } IBDA_LNBInfoVtbl;
    interface IBDA_LNBInfo
    {
        CONST_VTBL struct IBDA_LNBInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_LocalOscilatorFrequencyLowBand(This,ulLOFLow) )
    ( (This)->lpVtbl -> get_LocalOscilatorFrequencyLowBand(This,pulLOFLow) )
    ( (This)->lpVtbl -> put_LocalOscilatorFrequencyHighBand(This,ulLOFHigh) )
    ( (This)->lpVtbl -> get_LocalOscilatorFrequencyHighBand(This,pulLOFHigh) )
    ( (This)->lpVtbl -> put_HighLowSwitchFrequency(This,ulSwitchFrequency) )
    ( (This)->lpVtbl -> get_HighLowSwitchFrequency(This,pulSwitchFrequency) )
EXTERN_C const IID IID_IBDA_DiseqCommand;
    typedef struct IBDA_DiseqCommandVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_DiseqCommand * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_DiseqCommand * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_DiseqCommand * This);
        HRESULT ( STDMETHODCALLTYPE *put_EnableDiseqCommands )(
            __RPC__in IBDA_DiseqCommand * This,
                       BOOLEAN bEnable);
        HRESULT ( STDMETHODCALLTYPE *put_DiseqLNBSource )(
            __RPC__in IBDA_DiseqCommand * This,
                       ULONG ulLNBSource);
        HRESULT ( STDMETHODCALLTYPE *put_DiseqUseToneBurst )(
            __RPC__in IBDA_DiseqCommand * This,
                       BOOLEAN bUseToneBurst);
        HRESULT ( STDMETHODCALLTYPE *put_DiseqRepeats )(
            __RPC__in IBDA_DiseqCommand * This,
                       ULONG ulRepeats);
        HRESULT ( STDMETHODCALLTYPE *put_DiseqSendCommand )(
            __RPC__in IBDA_DiseqCommand * This,
                       ULONG ulRequestId,
                       ULONG ulcbCommandLen,
                                __RPC__in_ecount_full(ulcbCommandLen) BYTE *pbCommand);
        HRESULT ( STDMETHODCALLTYPE *get_DiseqResponse )(
            __RPC__in IBDA_DiseqCommand * This,
                       ULONG ulRequestId,
                            __RPC__inout ULONG *pulcbResponseLen,
                                     __RPC__inout_ecount_full(*pulcbResponseLen) BYTE pbResponse[ ]);
        END_INTERFACE
    } IBDA_DiseqCommandVtbl;
    interface IBDA_DiseqCommand
    {
        CONST_VTBL struct IBDA_DiseqCommandVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_EnableDiseqCommands(This,bEnable) )
    ( (This)->lpVtbl -> put_DiseqLNBSource(This,ulLNBSource) )
    ( (This)->lpVtbl -> put_DiseqUseToneBurst(This,bUseToneBurst) )
    ( (This)->lpVtbl -> put_DiseqRepeats(This,ulRepeats) )
    ( (This)->lpVtbl -> put_DiseqSendCommand(This,ulRequestId,ulcbCommandLen,pbCommand) )
    ( (This)->lpVtbl -> get_DiseqResponse(This,ulRequestId,pulcbResponseLen,pbResponse) )
EXTERN_C const IID IID_IBDA_AutoDemodulate;
    typedef struct IBDA_AutoDemodulateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_AutoDemodulate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_AutoDemodulate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_AutoDemodulate * This);
        HRESULT ( STDMETHODCALLTYPE *put_AutoDemodulate )(
            __RPC__in IBDA_AutoDemodulate * This);
        END_INTERFACE
    } IBDA_AutoDemodulateVtbl;
    interface IBDA_AutoDemodulate
    {
        CONST_VTBL struct IBDA_AutoDemodulateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_AutoDemodulate(This) )
EXTERN_C const IID IID_IBDA_AutoDemodulateEx;
    typedef struct IBDA_AutoDemodulateExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_AutoDemodulateEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_AutoDemodulateEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_AutoDemodulateEx * This);
        HRESULT ( STDMETHODCALLTYPE *put_AutoDemodulate )(
            __RPC__in IBDA_AutoDemodulateEx * This);
        HRESULT ( STDMETHODCALLTYPE *get_SupportedDeviceNodeTypes )(
            __RPC__in IBDA_AutoDemodulateEx * This,
                       ULONG ulcDeviceNodeTypesMax,
                        __RPC__out ULONG *pulcDeviceNodeTypes,
                            __RPC__inout GUID *pguidDeviceNodeTypes);
        HRESULT ( STDMETHODCALLTYPE *get_SupportedVideoFormats )(
            __RPC__in IBDA_AutoDemodulateEx * This,
                        __RPC__out ULONG *pulAMTunerModeType,
                        __RPC__out ULONG *pulAnalogVideoStandard);
        HRESULT ( STDMETHODCALLTYPE *get_AuxInputCount )(
            __RPC__in IBDA_AutoDemodulateEx * This,
                            __RPC__inout ULONG *pulCompositeCount,
                            __RPC__inout ULONG *pulSvideoCount);
        END_INTERFACE
    } IBDA_AutoDemodulateExVtbl;
    interface IBDA_AutoDemodulateEx
    {
        CONST_VTBL struct IBDA_AutoDemodulateExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_AutoDemodulate(This) )
    ( (This)->lpVtbl -> get_SupportedDeviceNodeTypes(This,ulcDeviceNodeTypesMax,pulcDeviceNodeTypes,pguidDeviceNodeTypes) )
    ( (This)->lpVtbl -> get_SupportedVideoFormats(This,pulAMTunerModeType,pulAnalogVideoStandard) )
    ( (This)->lpVtbl -> get_AuxInputCount(This,pulCompositeCount,pulSvideoCount) )
EXTERN_C const IID IID_IBDA_DigitalDemodulator;
    typedef struct IBDA_DigitalDemodulatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_DigitalDemodulator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_DigitalDemodulator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_DigitalDemodulator * This);
        HRESULT ( STDMETHODCALLTYPE *put_ModulationType )(
            __RPC__in IBDA_DigitalDemodulator * This,
                       __RPC__in ModulationType *pModulationType);
        HRESULT ( STDMETHODCALLTYPE *get_ModulationType )(
            __RPC__in IBDA_DigitalDemodulator * This,
                            __RPC__inout ModulationType *pModulationType);
        HRESULT ( STDMETHODCALLTYPE *put_InnerFECMethod )(
            __RPC__in IBDA_DigitalDemodulator * This,
                       __RPC__in FECMethod *pFECMethod);
        HRESULT ( STDMETHODCALLTYPE *get_InnerFECMethod )(
            __RPC__in IBDA_DigitalDemodulator * This,
                            __RPC__inout FECMethod *pFECMethod);
        HRESULT ( STDMETHODCALLTYPE *put_InnerFECRate )(
            __RPC__in IBDA_DigitalDemodulator * This,
                       __RPC__in BinaryConvolutionCodeRate *pFECRate);
        HRESULT ( STDMETHODCALLTYPE *get_InnerFECRate )(
            __RPC__in IBDA_DigitalDemodulator * This,
                            __RPC__inout BinaryConvolutionCodeRate *pFECRate);
        HRESULT ( STDMETHODCALLTYPE *put_OuterFECMethod )(
            __RPC__in IBDA_DigitalDemodulator * This,
                       __RPC__in FECMethod *pFECMethod);
        HRESULT ( STDMETHODCALLTYPE *get_OuterFECMethod )(
            __RPC__in IBDA_DigitalDemodulator * This,
                            __RPC__inout FECMethod *pFECMethod);
        HRESULT ( STDMETHODCALLTYPE *put_OuterFECRate )(
            __RPC__in IBDA_DigitalDemodulator * This,
                       __RPC__in BinaryConvolutionCodeRate *pFECRate);
        HRESULT ( STDMETHODCALLTYPE *get_OuterFECRate )(
            __RPC__in IBDA_DigitalDemodulator * This,
                            __RPC__inout BinaryConvolutionCodeRate *pFECRate);
        HRESULT ( STDMETHODCALLTYPE *put_SymbolRate )(
            __RPC__in IBDA_DigitalDemodulator * This,
                       __RPC__in ULONG *pSymbolRate);
        HRESULT ( STDMETHODCALLTYPE *get_SymbolRate )(
            __RPC__in IBDA_DigitalDemodulator * This,
                            __RPC__inout ULONG *pSymbolRate);
        HRESULT ( STDMETHODCALLTYPE *put_SpectralInversion )(
            __RPC__in IBDA_DigitalDemodulator * This,
                       __RPC__in SpectralInversion *pSpectralInversion);
        HRESULT ( STDMETHODCALLTYPE *get_SpectralInversion )(
            __RPC__in IBDA_DigitalDemodulator * This,
                            __RPC__inout SpectralInversion *pSpectralInversion);
        END_INTERFACE
    } IBDA_DigitalDemodulatorVtbl;
    interface IBDA_DigitalDemodulator
    {
        CONST_VTBL struct IBDA_DigitalDemodulatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_ModulationType(This,pModulationType) )
    ( (This)->lpVtbl -> get_ModulationType(This,pModulationType) )
    ( (This)->lpVtbl -> put_InnerFECMethod(This,pFECMethod) )
    ( (This)->lpVtbl -> get_InnerFECMethod(This,pFECMethod) )
    ( (This)->lpVtbl -> put_InnerFECRate(This,pFECRate) )
    ( (This)->lpVtbl -> get_InnerFECRate(This,pFECRate) )
    ( (This)->lpVtbl -> put_OuterFECMethod(This,pFECMethod) )
    ( (This)->lpVtbl -> get_OuterFECMethod(This,pFECMethod) )
    ( (This)->lpVtbl -> put_OuterFECRate(This,pFECRate) )
    ( (This)->lpVtbl -> get_OuterFECRate(This,pFECRate) )
    ( (This)->lpVtbl -> put_SymbolRate(This,pSymbolRate) )
    ( (This)->lpVtbl -> get_SymbolRate(This,pSymbolRate) )
    ( (This)->lpVtbl -> put_SpectralInversion(This,pSpectralInversion) )
    ( (This)->lpVtbl -> get_SpectralInversion(This,pSpectralInversion) )
EXTERN_C const IID IID_IBDA_DigitalDemodulator2;
    typedef struct IBDA_DigitalDemodulator2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_DigitalDemodulator2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_DigitalDemodulator2 * This);
        HRESULT ( STDMETHODCALLTYPE *put_ModulationType )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                       __RPC__in ModulationType *pModulationType);
        HRESULT ( STDMETHODCALLTYPE *get_ModulationType )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                            __RPC__inout ModulationType *pModulationType);
        HRESULT ( STDMETHODCALLTYPE *put_InnerFECMethod )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                       __RPC__in FECMethod *pFECMethod);
        HRESULT ( STDMETHODCALLTYPE *get_InnerFECMethod )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                            __RPC__inout FECMethod *pFECMethod);
        HRESULT ( STDMETHODCALLTYPE *put_InnerFECRate )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                       __RPC__in BinaryConvolutionCodeRate *pFECRate);
        HRESULT ( STDMETHODCALLTYPE *get_InnerFECRate )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                            __RPC__inout BinaryConvolutionCodeRate *pFECRate);
        HRESULT ( STDMETHODCALLTYPE *put_OuterFECMethod )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                       __RPC__in FECMethod *pFECMethod);
        HRESULT ( STDMETHODCALLTYPE *get_OuterFECMethod )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                            __RPC__inout FECMethod *pFECMethod);
        HRESULT ( STDMETHODCALLTYPE *put_OuterFECRate )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                       __RPC__in BinaryConvolutionCodeRate *pFECRate);
        HRESULT ( STDMETHODCALLTYPE *get_OuterFECRate )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                            __RPC__inout BinaryConvolutionCodeRate *pFECRate);
        HRESULT ( STDMETHODCALLTYPE *put_SymbolRate )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                       __RPC__in ULONG *pSymbolRate);
        HRESULT ( STDMETHODCALLTYPE *get_SymbolRate )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                            __RPC__inout ULONG *pSymbolRate);
        HRESULT ( STDMETHODCALLTYPE *put_SpectralInversion )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                       __RPC__in SpectralInversion *pSpectralInversion);
        HRESULT ( STDMETHODCALLTYPE *get_SpectralInversion )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                            __RPC__inout SpectralInversion *pSpectralInversion);
        HRESULT ( STDMETHODCALLTYPE *put_GuardInterval )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                       __RPC__in GuardInterval *pGuardInterval);
        HRESULT ( STDMETHODCALLTYPE *get_GuardInterval )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                            __RPC__inout GuardInterval *pGuardInterval);
        HRESULT ( STDMETHODCALLTYPE *put_TransmissionMode )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                       __RPC__in TransmissionMode *pTransmissionMode);
        HRESULT ( STDMETHODCALLTYPE *get_TransmissionMode )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                            __RPC__inout TransmissionMode *pTransmissionMode);
        HRESULT ( STDMETHODCALLTYPE *put_RollOff )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                       __RPC__in RollOff *pRollOff);
        HRESULT ( STDMETHODCALLTYPE *get_RollOff )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                            __RPC__inout RollOff *pRollOff);
        HRESULT ( STDMETHODCALLTYPE *put_Pilot )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                       __RPC__in Pilot *pPilot);
        HRESULT ( STDMETHODCALLTYPE *get_Pilot )(
            __RPC__in IBDA_DigitalDemodulator2 * This,
                            __RPC__inout Pilot *pPilot);
        END_INTERFACE
    } IBDA_DigitalDemodulator2Vtbl;
    interface IBDA_DigitalDemodulator2
    {
        CONST_VTBL struct IBDA_DigitalDemodulator2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_ModulationType(This,pModulationType) )
    ( (This)->lpVtbl -> get_ModulationType(This,pModulationType) )
    ( (This)->lpVtbl -> put_InnerFECMethod(This,pFECMethod) )
    ( (This)->lpVtbl -> get_InnerFECMethod(This,pFECMethod) )
    ( (This)->lpVtbl -> put_InnerFECRate(This,pFECRate) )
    ( (This)->lpVtbl -> get_InnerFECRate(This,pFECRate) )
    ( (This)->lpVtbl -> put_OuterFECMethod(This,pFECMethod) )
    ( (This)->lpVtbl -> get_OuterFECMethod(This,pFECMethod) )
    ( (This)->lpVtbl -> put_OuterFECRate(This,pFECRate) )
    ( (This)->lpVtbl -> get_OuterFECRate(This,pFECRate) )
    ( (This)->lpVtbl -> put_SymbolRate(This,pSymbolRate) )
    ( (This)->lpVtbl -> get_SymbolRate(This,pSymbolRate) )
    ( (This)->lpVtbl -> put_SpectralInversion(This,pSpectralInversion) )
    ( (This)->lpVtbl -> get_SpectralInversion(This,pSpectralInversion) )
    ( (This)->lpVtbl -> put_GuardInterval(This,pGuardInterval) )
    ( (This)->lpVtbl -> get_GuardInterval(This,pGuardInterval) )
    ( (This)->lpVtbl -> put_TransmissionMode(This,pTransmissionMode) )
    ( (This)->lpVtbl -> get_TransmissionMode(This,pTransmissionMode) )
    ( (This)->lpVtbl -> put_RollOff(This,pRollOff) )
    ( (This)->lpVtbl -> get_RollOff(This,pRollOff) )
    ( (This)->lpVtbl -> put_Pilot(This,pPilot) )
    ( (This)->lpVtbl -> get_Pilot(This,pPilot) )
EXTERN_C const IID IID_IBDA_DigitalDemodulator3;
    typedef struct IBDA_DigitalDemodulator3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_DigitalDemodulator3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_DigitalDemodulator3 * This);
        HRESULT ( STDMETHODCALLTYPE *put_ModulationType )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                       __RPC__in ModulationType *pModulationType);
        HRESULT ( STDMETHODCALLTYPE *get_ModulationType )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                            __RPC__inout ModulationType *pModulationType);
        HRESULT ( STDMETHODCALLTYPE *put_InnerFECMethod )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                       __RPC__in FECMethod *pFECMethod);
        HRESULT ( STDMETHODCALLTYPE *get_InnerFECMethod )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                            __RPC__inout FECMethod *pFECMethod);
        HRESULT ( STDMETHODCALLTYPE *put_InnerFECRate )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                       __RPC__in BinaryConvolutionCodeRate *pFECRate);
        HRESULT ( STDMETHODCALLTYPE *get_InnerFECRate )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                            __RPC__inout BinaryConvolutionCodeRate *pFECRate);
        HRESULT ( STDMETHODCALLTYPE *put_OuterFECMethod )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                       __RPC__in FECMethod *pFECMethod);
        HRESULT ( STDMETHODCALLTYPE *get_OuterFECMethod )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                            __RPC__inout FECMethod *pFECMethod);
        HRESULT ( STDMETHODCALLTYPE *put_OuterFECRate )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                       __RPC__in BinaryConvolutionCodeRate *pFECRate);
        HRESULT ( STDMETHODCALLTYPE *get_OuterFECRate )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                            __RPC__inout BinaryConvolutionCodeRate *pFECRate);
        HRESULT ( STDMETHODCALLTYPE *put_SymbolRate )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                       __RPC__in ULONG *pSymbolRate);
        HRESULT ( STDMETHODCALLTYPE *get_SymbolRate )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                            __RPC__inout ULONG *pSymbolRate);
        HRESULT ( STDMETHODCALLTYPE *put_SpectralInversion )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                       __RPC__in SpectralInversion *pSpectralInversion);
        HRESULT ( STDMETHODCALLTYPE *get_SpectralInversion )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                            __RPC__inout SpectralInversion *pSpectralInversion);
        HRESULT ( STDMETHODCALLTYPE *put_GuardInterval )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                       __RPC__in GuardInterval *pGuardInterval);
        HRESULT ( STDMETHODCALLTYPE *get_GuardInterval )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                            __RPC__inout GuardInterval *pGuardInterval);
        HRESULT ( STDMETHODCALLTYPE *put_TransmissionMode )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                       __RPC__in TransmissionMode *pTransmissionMode);
        HRESULT ( STDMETHODCALLTYPE *get_TransmissionMode )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                            __RPC__inout TransmissionMode *pTransmissionMode);
        HRESULT ( STDMETHODCALLTYPE *put_RollOff )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                       __RPC__in RollOff *pRollOff);
        HRESULT ( STDMETHODCALLTYPE *get_RollOff )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                            __RPC__inout RollOff *pRollOff);
        HRESULT ( STDMETHODCALLTYPE *put_Pilot )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                       __RPC__in Pilot *pPilot);
        HRESULT ( STDMETHODCALLTYPE *get_Pilot )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                            __RPC__inout Pilot *pPilot);
        HRESULT ( STDMETHODCALLTYPE *put_SignalTimeouts )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                       __RPC__in BDA_SIGNAL_TIMEOUTS *pSignalTimeouts);
        HRESULT ( STDMETHODCALLTYPE *get_SignalTimeouts )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                            __RPC__inout BDA_SIGNAL_TIMEOUTS *pSignalTimeouts);
        HRESULT ( STDMETHODCALLTYPE *put_PLPNumber )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                       __RPC__in ULONG *pPLPNumber);
        HRESULT ( STDMETHODCALLTYPE *get_PLPNumber )(
            __RPC__in IBDA_DigitalDemodulator3 * This,
                            __RPC__inout ULONG *pPLPNumber);
        END_INTERFACE
    } IBDA_DigitalDemodulator3Vtbl;
    interface IBDA_DigitalDemodulator3
    {
        CONST_VTBL struct IBDA_DigitalDemodulator3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_ModulationType(This,pModulationType) )
    ( (This)->lpVtbl -> get_ModulationType(This,pModulationType) )
    ( (This)->lpVtbl -> put_InnerFECMethod(This,pFECMethod) )
    ( (This)->lpVtbl -> get_InnerFECMethod(This,pFECMethod) )
    ( (This)->lpVtbl -> put_InnerFECRate(This,pFECRate) )
    ( (This)->lpVtbl -> get_InnerFECRate(This,pFECRate) )
    ( (This)->lpVtbl -> put_OuterFECMethod(This,pFECMethod) )
    ( (This)->lpVtbl -> get_OuterFECMethod(This,pFECMethod) )
    ( (This)->lpVtbl -> put_OuterFECRate(This,pFECRate) )
    ( (This)->lpVtbl -> get_OuterFECRate(This,pFECRate) )
    ( (This)->lpVtbl -> put_SymbolRate(This,pSymbolRate) )
    ( (This)->lpVtbl -> get_SymbolRate(This,pSymbolRate) )
    ( (This)->lpVtbl -> put_SpectralInversion(This,pSpectralInversion) )
    ( (This)->lpVtbl -> get_SpectralInversion(This,pSpectralInversion) )
    ( (This)->lpVtbl -> put_GuardInterval(This,pGuardInterval) )
    ( (This)->lpVtbl -> get_GuardInterval(This,pGuardInterval) )
    ( (This)->lpVtbl -> put_TransmissionMode(This,pTransmissionMode) )
    ( (This)->lpVtbl -> get_TransmissionMode(This,pTransmissionMode) )
    ( (This)->lpVtbl -> put_RollOff(This,pRollOff) )
    ( (This)->lpVtbl -> get_RollOff(This,pRollOff) )
    ( (This)->lpVtbl -> put_Pilot(This,pPilot) )
    ( (This)->lpVtbl -> get_Pilot(This,pPilot) )
    ( (This)->lpVtbl -> put_SignalTimeouts(This,pSignalTimeouts) )
    ( (This)->lpVtbl -> get_SignalTimeouts(This,pSignalTimeouts) )
    ( (This)->lpVtbl -> put_PLPNumber(This,pPLPNumber) )
    ( (This)->lpVtbl -> get_PLPNumber(This,pPLPNumber) )
typedef
enum __MIDL___MIDL_itf_bdaiface_0000_0019_0001
    {
        KSPROPERTY_IPSINK_MULTICASTLIST = 0,
        KSPROPERTY_IPSINK_ADAPTER_DESCRIPTION = ( KSPROPERTY_IPSINK_MULTICASTLIST + 1 ) ,
        KSPROPERTY_IPSINK_ADAPTER_ADDRESS = ( KSPROPERTY_IPSINK_ADAPTER_DESCRIPTION + 1 )
    } KSPROPERTY_IPSINK;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0019_v0_0_s_ifspec;
EXTERN_C const IID IID_ICCSubStreamFiltering;
    typedef struct ICCSubStreamFilteringVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICCSubStreamFiltering * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICCSubStreamFiltering * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICCSubStreamFiltering * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_SubstreamTypes )(
            __RPC__in ICCSubStreamFiltering * This,
                                __RPC__out long *pTypes);
                                    HRESULT ( STDMETHODCALLTYPE *put_SubstreamTypes )(
            __RPC__in ICCSubStreamFiltering * This,
                       long Types);
        END_INTERFACE
    } ICCSubStreamFilteringVtbl;
    interface ICCSubStreamFiltering
    {
        CONST_VTBL struct ICCSubStreamFilteringVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_SubstreamTypes(This,pTypes) )
    ( (This)->lpVtbl -> put_SubstreamTypes(This,Types) )
EXTERN_C const IID IID_IBDA_IPSinkControl;
    typedef struct IBDA_IPSinkControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_IPSinkControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_IPSinkControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_IPSinkControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetMulticastList )(
            __RPC__in IBDA_IPSinkControl * This,
                            __RPC__inout unsigned long *pulcbSize,
                            __RPC__deref_inout_opt BYTE **pbBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetAdapterIPAddress )(
            __RPC__in IBDA_IPSinkControl * This,
                            __RPC__inout unsigned long *pulcbSize,
                            __RPC__deref_inout_opt BYTE **pbBuffer);
        END_INTERFACE
    } IBDA_IPSinkControlVtbl;
    interface IBDA_IPSinkControl
    {
        CONST_VTBL struct IBDA_IPSinkControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMulticastList(This,pulcbSize,pbBuffer) )
    ( (This)->lpVtbl -> GetAdapterIPAddress(This,pulcbSize,pbBuffer) )
EXTERN_C const IID IID_IBDA_IPSinkInfo;
    typedef struct IBDA_IPSinkInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_IPSinkInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_IPSinkInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_IPSinkInfo * This);
        HRESULT ( STDMETHODCALLTYPE *get_MulticastList )(
            __RPC__in IBDA_IPSinkInfo * This,
                            __RPC__inout ULONG *pulcbAddresses,
                                 __RPC__out_ecount_full(*pulcbAddresses) BYTE **ppbAddressList);
        HRESULT ( STDMETHODCALLTYPE *get_AdapterIPAddress )(
            __RPC__in IBDA_IPSinkInfo * This,
                        __RPC__deref_out_opt BSTR *pbstrBuffer);
        HRESULT ( STDMETHODCALLTYPE *get_AdapterDescription )(
            __RPC__in IBDA_IPSinkInfo * This,
                        __RPC__deref_out_opt BSTR *pbstrBuffer);
        END_INTERFACE
    } IBDA_IPSinkInfoVtbl;
    interface IBDA_IPSinkInfo
    {
        CONST_VTBL struct IBDA_IPSinkInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_MulticastList(This,pulcbAddresses,ppbAddressList) )
    ( (This)->lpVtbl -> get_AdapterIPAddress(This,pbstrBuffer) )
    ( (This)->lpVtbl -> get_AdapterDescription(This,pbstrBuffer) )
EXTERN_C const IID IID_IEnumPIDMap;
    typedef struct IEnumPIDMapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumPIDMap * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumPIDMap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumPIDMap * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumPIDMap * This,
                       ULONG cRequest,
                                     __RPC__inout_ecount_full(cRequest) PID_MAP *pPIDMap,
                        __RPC__out ULONG *pcReceived);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumPIDMap * This,
                       ULONG cRecords);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumPIDMap * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumPIDMap * This,
                        __RPC__deref_out_opt IEnumPIDMap **ppIEnumPIDMap);
        END_INTERFACE
    } IEnumPIDMapVtbl;
    interface IEnumPIDMap
    {
        CONST_VTBL struct IEnumPIDMapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cRequest,pPIDMap,pcReceived) )
    ( (This)->lpVtbl -> Skip(This,cRecords) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppIEnumPIDMap) )
EXTERN_C const IID IID_IMPEG2PIDMap;
    typedef struct IMPEG2PIDMapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMPEG2PIDMap * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMPEG2PIDMap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMPEG2PIDMap * This);
        HRESULT ( STDMETHODCALLTYPE *MapPID )(
            __RPC__in IMPEG2PIDMap * This,
                       ULONG culPID,
                       __RPC__in ULONG *pulPID,
                       MEDIA_SAMPLE_CONTENT MediaSampleContent);
        HRESULT ( STDMETHODCALLTYPE *UnmapPID )(
            __RPC__in IMPEG2PIDMap * This,
                       ULONG culPID,
                       __RPC__in ULONG *pulPID);
        HRESULT ( STDMETHODCALLTYPE *EnumPIDMap )(
            __RPC__in IMPEG2PIDMap * This,
                        __RPC__deref_out_opt IEnumPIDMap **pIEnumPIDMap);
        END_INTERFACE
    } IMPEG2PIDMapVtbl;
    interface IMPEG2PIDMap
    {
        CONST_VTBL struct IMPEG2PIDMapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MapPID(This,culPID,pulPID,MediaSampleContent) )
    ( (This)->lpVtbl -> UnmapPID(This,culPID,pulPID) )
    ( (This)->lpVtbl -> EnumPIDMap(This,pIEnumPIDMap) )
EXTERN_C const IID IID_IFrequencyMap;
    typedef struct IFrequencyMapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFrequencyMap * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFrequencyMap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFrequencyMap * This);
                           HRESULT ( STDMETHODCALLTYPE *get_FrequencyMapping )(
            __RPC__in IFrequencyMap * This,
                        __RPC__out ULONG *ulCount,
                                          __RPC__out_ecount_full(1) ULONG **ppulList);
                           HRESULT ( STDMETHODCALLTYPE *put_FrequencyMapping )(
            __RPC__in IFrequencyMap * This,
                       ULONG ulCount,
                                __RPC__in_ecount_full(ulCount) ULONG pList[ ]);
                           HRESULT ( STDMETHODCALLTYPE *get_CountryCode )(
            __RPC__in IFrequencyMap * This,
                        __RPC__out ULONG *pulCountryCode);
                           HRESULT ( STDMETHODCALLTYPE *put_CountryCode )(
            __RPC__in IFrequencyMap * This,
                       ULONG ulCountryCode);
                           HRESULT ( STDMETHODCALLTYPE *get_DefaultFrequencyMapping )(
            __RPC__in IFrequencyMap * This,
                       ULONG ulCountryCode,
                        __RPC__out ULONG *pulCount,
                                          __RPC__out_ecount_full(1) ULONG **ppulList);
                           HRESULT ( STDMETHODCALLTYPE *get_CountryCodeList )(
            __RPC__in IFrequencyMap * This,
                        __RPC__out ULONG *pulCount,
                                          __RPC__out_ecount_full(1) ULONG **ppulList);
        END_INTERFACE
    } IFrequencyMapVtbl;
    interface IFrequencyMap
    {
        CONST_VTBL struct IFrequencyMapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_FrequencyMapping(This,ulCount,ppulList) )
    ( (This)->lpVtbl -> put_FrequencyMapping(This,ulCount,pList) )
    ( (This)->lpVtbl -> get_CountryCode(This,pulCountryCode) )
    ( (This)->lpVtbl -> put_CountryCode(This,ulCountryCode) )
    ( (This)->lpVtbl -> get_DefaultFrequencyMapping(This,ulCountryCode,pulCount,ppulList) )
    ( (This)->lpVtbl -> get_CountryCodeList(This,pulCount,ppulList) )
EXTERN_C const IID IID_IBDA_EasMessage;
    typedef struct IBDA_EasMessageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_EasMessage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_EasMessage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_EasMessage * This);
                           HRESULT ( STDMETHODCALLTYPE *get_EasMessage )(
            __RPC__in IBDA_EasMessage * This,
                       ULONG ulEventID,
                            __RPC__deref_inout_opt IUnknown **ppEASObject);
        END_INTERFACE
    } IBDA_EasMessageVtbl;
    interface IBDA_EasMessage
    {
        CONST_VTBL struct IBDA_EasMessageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_EasMessage(This,ulEventID,ppEASObject) )
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0026_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_TransportStreamInfo;
    typedef struct IBDA_TransportStreamInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_TransportStreamInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_TransportStreamInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_TransportStreamInfo * This);
                           HRESULT ( STDMETHODCALLTYPE *get_PatTableTickCount )(
            __RPC__in IBDA_TransportStreamInfo * This,
                        __RPC__out ULONG *pPatTickCount);
        END_INTERFACE
    } IBDA_TransportStreamInfoVtbl;
    interface IBDA_TransportStreamInfo
    {
        CONST_VTBL struct IBDA_TransportStreamInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_PatTableTickCount(This,pPatTickCount) )
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0027_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_ConditionalAccess;
    typedef struct IBDA_ConditionalAccessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_ConditionalAccess * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_ConditionalAccess * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_ConditionalAccess * This);
                           HRESULT ( STDMETHODCALLTYPE *get_SmartCardStatus )(
            __RPC__in IBDA_ConditionalAccess * This,
                        __RPC__out SmartCardStatusType *pCardStatus,
                        __RPC__out SmartCardAssociationType *pCardAssociation,
                        __RPC__deref_out_opt BSTR *pbstrCardError,
                        __RPC__out VARIANT_BOOL *pfOOBLocked);
                           HRESULT ( STDMETHODCALLTYPE *get_SmartCardInfo )(
            __RPC__in IBDA_ConditionalAccess * This,
                        __RPC__deref_out_opt BSTR *pbstrCardName,
                        __RPC__deref_out_opt BSTR *pbstrCardManufacturer,
                        __RPC__out VARIANT_BOOL *pfDaylightSavings,
                        __RPC__out BYTE *pbyRatingRegion,
                        __RPC__out LONG *plTimeZoneOffsetMinutes,
                        __RPC__deref_out_opt BSTR *pbstrLanguage,
                        __RPC__out EALocationCodeType *pEALocationCode);
                           HRESULT ( STDMETHODCALLTYPE *get_SmartCardApplications )(
            __RPC__in IBDA_ConditionalAccess * This,
                            __RPC__inout ULONG *pulcApplications,
                       ULONG ulcApplicationsMax,
                                     __RPC__inout_ecount_full(ulcApplicationsMax) SmartCardApplication rgApplications[ ]);
                           HRESULT ( STDMETHODCALLTYPE *get_Entitlement )(
            __RPC__in IBDA_ConditionalAccess * This,
                       USHORT usVirtualChannel,
                        __RPC__out EntitlementType *pEntitlement);
                           HRESULT ( STDMETHODCALLTYPE *TuneByChannel )(
            __RPC__in IBDA_ConditionalAccess * This,
                       USHORT usVirtualChannel);
                           HRESULT ( STDMETHODCALLTYPE *SetProgram )(
            __RPC__in IBDA_ConditionalAccess * This,
                       USHORT usProgramNumber);
                           HRESULT ( STDMETHODCALLTYPE *AddProgram )(
            __RPC__in IBDA_ConditionalAccess * This,
                       USHORT usProgramNumber);
                           HRESULT ( STDMETHODCALLTYPE *RemoveProgram )(
            __RPC__in IBDA_ConditionalAccess * This,
                       USHORT usProgramNumber);
                           HRESULT ( STDMETHODCALLTYPE *GetModuleUI )(
            __RPC__in IBDA_ConditionalAccess * This,
                       BYTE byDialogNumber,
                        __RPC__deref_out_opt BSTR *pbstrURL);
                           HRESULT ( STDMETHODCALLTYPE *InformUIClosed )(
            __RPC__in IBDA_ConditionalAccess * This,
                       BYTE byDialogNumber,
                       UICloseReasonType CloseReason);
        END_INTERFACE
    } IBDA_ConditionalAccessVtbl;
    interface IBDA_ConditionalAccess
    {
        CONST_VTBL struct IBDA_ConditionalAccessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_SmartCardStatus(This,pCardStatus,pCardAssociation,pbstrCardError,pfOOBLocked) )
    ( (This)->lpVtbl -> get_SmartCardInfo(This,pbstrCardName,pbstrCardManufacturer,pfDaylightSavings,pbyRatingRegion,plTimeZoneOffsetMinutes,pbstrLanguage,pEALocationCode) )
    ( (This)->lpVtbl -> get_SmartCardApplications(This,pulcApplications,ulcApplicationsMax,rgApplications) )
    ( (This)->lpVtbl -> get_Entitlement(This,usVirtualChannel,pEntitlement) )
    ( (This)->lpVtbl -> TuneByChannel(This,usVirtualChannel) )
    ( (This)->lpVtbl -> SetProgram(This,usProgramNumber) )
    ( (This)->lpVtbl -> AddProgram(This,usProgramNumber) )
    ( (This)->lpVtbl -> RemoveProgram(This,usProgramNumber) )
    ( (This)->lpVtbl -> GetModuleUI(This,byDialogNumber,pbstrURL) )
    ( (This)->lpVtbl -> InformUIClosed(This,byDialogNumber,CloseReason) )
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0028_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_DiagnosticProperties;
    typedef struct IBDA_DiagnosticPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_DiagnosticProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_DiagnosticProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_DiagnosticProperties * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            IBDA_DiagnosticProperties * This,
                       LPCOLESTR pszPropName,
                            VARIANT *pVar,
                               IErrorLog *pErrorLog);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in IBDA_DiagnosticProperties * This,
                       __RPC__in LPCOLESTR pszPropName,
                       __RPC__in VARIANT *pVar);
        END_INTERFACE
    } IBDA_DiagnosticPropertiesVtbl;
    interface IBDA_DiagnosticProperties
    {
        CONST_VTBL struct IBDA_DiagnosticPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pszPropName,pVar,pErrorLog) )
    ( (This)->lpVtbl -> Write(This,pszPropName,pVar) )
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0029_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_DRM;
    typedef struct IBDA_DRMVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_DRM * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_DRM * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_DRM * This);
        HRESULT ( STDMETHODCALLTYPE *GetDRMPairingStatus )(
            __RPC__in IBDA_DRM * This,
                        __RPC__out DWORD *pdwStatus,
                        __RPC__out HRESULT *phError);
        HRESULT ( STDMETHODCALLTYPE *PerformDRMPairing )(
            __RPC__in IBDA_DRM * This,
            BOOL fSync);
        END_INTERFACE
    } IBDA_DRMVtbl;
    interface IBDA_DRM
    {
        CONST_VTBL struct IBDA_DRMVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDRMPairingStatus(This,pdwStatus,phError) )
    ( (This)->lpVtbl -> PerformDRMPairing(This,fSync) )
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0030_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_NameValueService;
    typedef struct IBDA_NameValueServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_NameValueService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_NameValueService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_NameValueService * This);
                           HRESULT ( STDMETHODCALLTYPE *GetValueNameByIndex )(
            __RPC__in IBDA_NameValueService * This,
                       ULONG ulIndex,
                        __RPC__deref_out_opt BSTR *pbstrName);
                           HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in IBDA_NameValueService * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in BSTR bstrLanguage,
                        __RPC__deref_out_opt BSTR *pbstrValue);
                           HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in IBDA_NameValueService * This,
                       ULONG ulDialogRequest,
                       __RPC__in BSTR bstrLanguage,
                       __RPC__in BSTR bstrName,
                       __RPC__in BSTR bstrValue,
                       ULONG ulReserved);
        END_INTERFACE
    } IBDA_NameValueServiceVtbl;
    interface IBDA_NameValueService
    {
        CONST_VTBL struct IBDA_NameValueServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetValueNameByIndex(This,ulIndex,pbstrName) )
    ( (This)->lpVtbl -> GetValue(This,bstrName,bstrLanguage,pbstrValue) )
    ( (This)->lpVtbl -> SetValue(This,ulDialogRequest,bstrLanguage,bstrName,bstrValue,ulReserved) )
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0031_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_ConditionalAccessEx;
    typedef struct IBDA_ConditionalAccessExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_ConditionalAccessEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_ConditionalAccessEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_ConditionalAccessEx * This);
                           HRESULT ( STDMETHODCALLTYPE *CheckEntitlementToken )(
            __RPC__in IBDA_ConditionalAccessEx * This,
                       ULONG ulDialogRequest,
                       __RPC__in BSTR bstrLanguage,
                       BDA_CONDITIONALACCESS_REQUESTTYPE RequestType,
                       ULONG ulcbEntitlementTokenLen,
                                __RPC__in_ecount_full(ulcbEntitlementTokenLen) BYTE *pbEntitlementToken,
                        __RPC__out ULONG *pulDescrambleStatus);
                           HRESULT ( STDMETHODCALLTYPE *SetCaptureToken )(
            __RPC__in IBDA_ConditionalAccessEx * This,
                       ULONG ulcbCaptureTokenLen,
                                __RPC__in_ecount_full(ulcbCaptureTokenLen) BYTE *pbCaptureToken);
                           HRESULT ( STDMETHODCALLTYPE *OpenBroadcastMmi )(
            __RPC__in IBDA_ConditionalAccessEx * This,
                       ULONG ulDialogRequest,
                       __RPC__in BSTR bstrLanguage,
                       ULONG EventId);
                           HRESULT ( STDMETHODCALLTYPE *CloseMmiDialog )(
            __RPC__in IBDA_ConditionalAccessEx * This,
                       ULONG ulDialogRequest,
                       __RPC__in BSTR bstrLanguage,
                       ULONG ulDialogNumber,
                       BDA_CONDITIONALACCESS_MMICLOSEREASON ReasonCode,
                        __RPC__out ULONG *pulSessionResult);
                           HRESULT ( STDMETHODCALLTYPE *CreateDialogRequestNumber )(
            __RPC__in IBDA_ConditionalAccessEx * This,
                        __RPC__out ULONG *pulDialogRequestNumber);
        END_INTERFACE
    } IBDA_ConditionalAccessExVtbl;
    interface IBDA_ConditionalAccessEx
    {
        CONST_VTBL struct IBDA_ConditionalAccessExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CheckEntitlementToken(This,ulDialogRequest,bstrLanguage,RequestType,ulcbEntitlementTokenLen,pbEntitlementToken,pulDescrambleStatus) )
    ( (This)->lpVtbl -> SetCaptureToken(This,ulcbCaptureTokenLen,pbCaptureToken) )
    ( (This)->lpVtbl -> OpenBroadcastMmi(This,ulDialogRequest,bstrLanguage,EventId) )
    ( (This)->lpVtbl -> CloseMmiDialog(This,ulDialogRequest,bstrLanguage,ulDialogNumber,ReasonCode,pulSessionResult) )
    ( (This)->lpVtbl -> CreateDialogRequestNumber(This,pulDialogRequestNumber) )
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0032_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_ISDBConditionalAccess;
    typedef struct IBDA_ISDBConditionalAccessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_ISDBConditionalAccess * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_ISDBConditionalAccess * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_ISDBConditionalAccess * This);
                           HRESULT ( STDMETHODCALLTYPE *SetIsdbCasRequest )(
            __RPC__in IBDA_ISDBConditionalAccess * This,
                       ULONG ulRequestId,
                       ULONG ulcbRequestBufferLen,
                                __RPC__in_ecount_full(ulcbRequestBufferLen) BYTE *pbRequestBuffer);
        END_INTERFACE
    } IBDA_ISDBConditionalAccessVtbl;
    interface IBDA_ISDBConditionalAccess
    {
        CONST_VTBL struct IBDA_ISDBConditionalAccessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetIsdbCasRequest(This,ulRequestId,ulcbRequestBufferLen,pbRequestBuffer) )
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0033_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_EventingService;
    typedef struct IBDA_EventingServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_EventingService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_EventingService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_EventingService * This);
                           HRESULT ( STDMETHODCALLTYPE *CompleteEvent )(
            __RPC__in IBDA_EventingService * This,
                       ULONG ulEventID,
                       ULONG ulEventResult);
        END_INTERFACE
    } IBDA_EventingServiceVtbl;
    interface IBDA_EventingService
    {
        CONST_VTBL struct IBDA_EventingServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CompleteEvent(This,ulEventID,ulEventResult) )
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0034_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_AUX;
    typedef struct IBDA_AUXVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_AUX * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_AUX * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_AUX * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryCapabilities )(
            __RPC__in IBDA_AUX * This,
                        __RPC__out DWORD *pdwNumAuxInputsBSTR);
                           HRESULT ( STDMETHODCALLTYPE *EnumCapability )(
            __RPC__in IBDA_AUX * This,
                       DWORD dwIndex,
                        __RPC__out DWORD *dwInputID,
                        __RPC__out GUID *pConnectorType,
                        __RPC__out DWORD *ConnTypeNum,
                        __RPC__out DWORD *NumVideoStds,
                        __RPC__out ULONGLONG *AnalogStds);
        END_INTERFACE
    } IBDA_AUXVtbl;
    interface IBDA_AUX
    {
        CONST_VTBL struct IBDA_AUXVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryCapabilities(This,pdwNumAuxInputsBSTR) )
    ( (This)->lpVtbl -> EnumCapability(This,dwIndex,dwInputID,pConnectorType,ConnTypeNum,NumVideoStds,AnalogStds) )
DEFINE_GUID(PBDA_AUX_CONNECTOR_TYPE_SVideo, 0xa0e905f4,0x24c9,0x4a54, 0xb7, 0x61, 0x21, 0x33, 0x55, 0xef, 0xc1, 0x3A);
DEFINE_GUID(PBDA_AUX_CONNECTOR_TYPE_Composite, 0xf6298b4c,0xc725,0x4d42, 0x84, 0x9b, 0x41, 0x0b, 0xbb, 0x14, 0xea, 0x62);
DEFINE_GUID(CLSID_PBDA_AUX_DATA_TYPE,
0xfd456373, 0x3323, 0x4090, 0xad, 0xca, 0x8e, 0xd4, 0x5f, 0x55, 0xcf, 0x10);
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0035_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_Encoder;
    typedef struct IBDA_EncoderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_Encoder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_Encoder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_Encoder * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryCapabilities )(
            __RPC__in IBDA_Encoder * This,
                        __RPC__out DWORD *NumAudioFmts,
                        __RPC__out DWORD *NumVideoFmts);
                           HRESULT ( STDMETHODCALLTYPE *EnumAudioCapability )(
            __RPC__in IBDA_Encoder * This,
                       DWORD FmtIndex,
                        __RPC__out DWORD *MethodID,
                        __RPC__out DWORD *AlgorithmType,
                        __RPC__out DWORD *SamplingRate,
                        __RPC__out DWORD *BitDepth,
                        __RPC__out DWORD *NumChannels);
                           HRESULT ( STDMETHODCALLTYPE *EnumVideoCapability )(
            __RPC__in IBDA_Encoder * This,
                       DWORD FmtIndex,
                        __RPC__out DWORD *MethodID,
                        __RPC__out DWORD *AlgorithmType,
                        __RPC__out DWORD *VerticalSize,
                        __RPC__out DWORD *HorizontalSize,
                        __RPC__out DWORD *AspectRatio,
                        __RPC__out DWORD *FrameRateCode,
                        __RPC__out DWORD *ProgressiveSequence);
                           HRESULT ( STDMETHODCALLTYPE *SetParameters )(
            __RPC__in IBDA_Encoder * This,
                       DWORD AudioBitrateMode,
                       DWORD AudioBitrate,
                       DWORD AudioMethodID,
                       DWORD AudioProgram,
                       DWORD VideoBitrateMode,
                       DWORD VideoBitrate,
                       DWORD VideoMethodID);
                           HRESULT ( STDMETHODCALLTYPE *GetState )(
            __RPC__in IBDA_Encoder * This,
                        __RPC__out DWORD *AudioBitrateMax,
                        __RPC__out DWORD *AudioBitrateMin,
                        __RPC__out DWORD *AudioBitrateMode,
                        __RPC__out DWORD *AudioBitrateStepping,
                        __RPC__out DWORD *AudioBitrate,
                        __RPC__out DWORD *AudioMethodID,
                        __RPC__out DWORD *AvailableAudioPrograms,
                        __RPC__out DWORD *AudioProgram,
                        __RPC__out DWORD *VideoBitrateMax,
                        __RPC__out DWORD *VideoBitrateMin,
                        __RPC__out DWORD *VideoBitrateMode,
                        __RPC__out DWORD *VideoBitrate,
                        __RPC__out DWORD *VideoBitrateStepping,
                        __RPC__out DWORD *VideoMethodID,
                        __RPC__out DWORD *SignalSourceID,
                        __RPC__out ULONGLONG *SignalFormat,
                        __RPC__out BOOL *SignalLock,
                        __RPC__out LONG *SignalLevel,
                        __RPC__out DWORD *SignalToNoiseRatio);
        END_INTERFACE
    } IBDA_EncoderVtbl;
    interface IBDA_Encoder
    {
        CONST_VTBL struct IBDA_EncoderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryCapabilities(This,NumAudioFmts,NumVideoFmts) )
    ( (This)->lpVtbl -> EnumAudioCapability(This,FmtIndex,MethodID,AlgorithmType,SamplingRate,BitDepth,NumChannels) )
    ( (This)->lpVtbl -> EnumVideoCapability(This,FmtIndex,MethodID,AlgorithmType,VerticalSize,HorizontalSize,AspectRatio,FrameRateCode,ProgressiveSequence) )
    ( (This)->lpVtbl -> SetParameters(This,AudioBitrateMode,AudioBitrate,AudioMethodID,AudioProgram,VideoBitrateMode,VideoBitrate,VideoMethodID) )
    ( (This)->lpVtbl -> GetState(This,AudioBitrateMax,AudioBitrateMin,AudioBitrateMode,AudioBitrateStepping,AudioBitrate,AudioMethodID,AvailableAudioPrograms,AudioProgram,VideoBitrateMax,VideoBitrateMin,VideoBitrateMode,VideoBitrate,VideoBitrateStepping,VideoMethodID,SignalSourceID,SignalFormat,SignalLock,SignalLevel,SignalToNoiseRatio) )
DEFINE_GUID(CLSID_PBDA_Encoder_DATA_TYPE,
0x728fd6bc, 0x5546, 0x4716, 0xb1, 0x03, 0xf8, 0x99, 0xf5, 0xa1, 0xfa, 0x68);
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0036_v0_0_s_ifspec;
DEFINE_GUID(CLSID_PBDA_FDC_DATA_TYPE,
0xe7dbf9a0, 0x22ab, 0x4047, 0x8e, 0x67, 0xef, 0x9a, 0xd5, 0x4, 0xe7, 0x29);
EXTERN_C const IID IID_IBDA_FDC;
    typedef struct IBDA_FDCVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_FDC * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_FDC * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_FDC * This);
                           HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IBDA_FDC * This,
                        __RPC__out DWORD *CurrentBitrate,
                        __RPC__out BOOL *CarrierLock,
                        __RPC__out DWORD *CurrentFrequency,
                        __RPC__out BOOL *CurrentSpectrumInversion,
                        __RPC__deref_out_opt BSTR *CurrentPIDList,
                        __RPC__deref_out_opt BSTR *CurrentTIDList,
                        __RPC__out BOOL *Overflow);
                           HRESULT ( STDMETHODCALLTYPE *RequestTables )(
            __RPC__in IBDA_FDC * This,
                       __RPC__in BSTR TableIDs);
                           HRESULT ( STDMETHODCALLTYPE *AddPid )(
            __RPC__in IBDA_FDC * This,
                       __RPC__in BSTR PidsToAdd,
                        __RPC__out DWORD *RemainingFilterEntries);
                           HRESULT ( STDMETHODCALLTYPE *RemovePid )(
            __RPC__in IBDA_FDC * This,
                       __RPC__in BSTR PidsToRemove);
                           HRESULT ( STDMETHODCALLTYPE *AddTid )(
            __RPC__in IBDA_FDC * This,
                       __RPC__in BSTR TidsToAdd,
                        __RPC__deref_out_opt BSTR *CurrentTidList);
                           HRESULT ( STDMETHODCALLTYPE *RemoveTid )(
            __RPC__in IBDA_FDC * This,
                       __RPC__in BSTR TidsToRemove);
                           HRESULT ( STDMETHODCALLTYPE *GetTableSection )(
            __RPC__in IBDA_FDC * This,
                        __RPC__out DWORD *Pid,
                       DWORD MaxBufferSize,
                        __RPC__out DWORD *ActualSize,
                        __RPC__out BYTE *SecBuffer);
        END_INTERFACE
    } IBDA_FDCVtbl;
    interface IBDA_FDC
    {
        CONST_VTBL struct IBDA_FDCVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStatus(This,CurrentBitrate,CarrierLock,CurrentFrequency,CurrentSpectrumInversion,CurrentPIDList,CurrentTIDList,Overflow) )
    ( (This)->lpVtbl -> RequestTables(This,TableIDs) )
    ( (This)->lpVtbl -> AddPid(This,PidsToAdd,RemainingFilterEntries) )
    ( (This)->lpVtbl -> RemovePid(This,PidsToRemove) )
    ( (This)->lpVtbl -> AddTid(This,TidsToAdd,CurrentTidList) )
    ( (This)->lpVtbl -> RemoveTid(This,TidsToRemove) )
    ( (This)->lpVtbl -> GetTableSection(This,Pid,MaxBufferSize,ActualSize,SecBuffer) )
EXTERN_C const IID IID_IBDA_GuideDataDeliveryService;
    typedef struct IBDA_GuideDataDeliveryServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_GuideDataDeliveryService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_GuideDataDeliveryService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_GuideDataDeliveryService * This);
                           HRESULT ( STDMETHODCALLTYPE *GetGuideDataType )(
            __RPC__in IBDA_GuideDataDeliveryService * This,
                        __RPC__out GUID *pguidDataType);
                           HRESULT ( STDMETHODCALLTYPE *GetGuideData )(
            __RPC__in IBDA_GuideDataDeliveryService * This,
                            __RPC__inout ULONG *pulcbBufferLen,
                        __RPC__out BYTE *pbBuffer,
                        __RPC__out ULONG *pulGuideDataPercentageProgress);
                           HRESULT ( STDMETHODCALLTYPE *RequestGuideDataUpdate )(
            __RPC__in IBDA_GuideDataDeliveryService * This);
                           HRESULT ( STDMETHODCALLTYPE *GetTuneXmlFromServiceIdx )(
            __RPC__in IBDA_GuideDataDeliveryService * This,
                       ULONG64 ul64ServiceIdx,
                        __RPC__deref_out_opt BSTR *pbstrTuneXml);
                           HRESULT ( STDMETHODCALLTYPE *GetServices )(
            __RPC__in IBDA_GuideDataDeliveryService * This,
                            __RPC__inout ULONG *pulcbBufferLen,
                        __RPC__out BYTE *pbBuffer);
                           HRESULT ( STDMETHODCALLTYPE *GetServiceInfoFromTuneXml )(
            __RPC__in IBDA_GuideDataDeliveryService * This,
                       __RPC__in BSTR bstrTuneXml,
                        __RPC__deref_out_opt BSTR *pbstrServiceDescription);
        END_INTERFACE
    } IBDA_GuideDataDeliveryServiceVtbl;
    interface IBDA_GuideDataDeliveryService
    {
        CONST_VTBL struct IBDA_GuideDataDeliveryServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetGuideDataType(This,pguidDataType) )
    ( (This)->lpVtbl -> GetGuideData(This,pulcbBufferLen,pbBuffer,pulGuideDataPercentageProgress) )
    ( (This)->lpVtbl -> RequestGuideDataUpdate(This) )
    ( (This)->lpVtbl -> GetTuneXmlFromServiceIdx(This,ul64ServiceIdx,pbstrTuneXml) )
    ( (This)->lpVtbl -> GetServices(This,pulcbBufferLen,pbBuffer) )
    ( (This)->lpVtbl -> GetServiceInfoFromTuneXml(This,bstrTuneXml,pbstrServiceDescription) )
DEFINE_GUID(CLSID_PBDA_GDDS_DATA_TYPE,
0xC80C0DF3, 0x6052, 0x4c16, 0x9F, 0x56, 0xC4, 0x4C, 0x21, 0xF7, 0x3C, 0x45);
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0038_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_DRMService;
    typedef struct IBDA_DRMServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_DRMService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_DRMService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_DRMService * This);
                           HRESULT ( STDMETHODCALLTYPE *SetDRM )(
            __RPC__in IBDA_DRMService * This,
                       __RPC__in GUID *puuidNewDrm);
                           HRESULT ( STDMETHODCALLTYPE *GetDRMStatus )(
            __RPC__in IBDA_DRMService * This,
                        __RPC__deref_out_opt BSTR *pbstrDrmUuidList,
                        __RPC__out GUID *DrmUuid);
        END_INTERFACE
    } IBDA_DRMServiceVtbl;
    interface IBDA_DRMService
    {
        CONST_VTBL struct IBDA_DRMServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDRM(This,puuidNewDrm) )
    ( (This)->lpVtbl -> GetDRMStatus(This,pbstrDrmUuidList,DrmUuid) )
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0039_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0039_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_WMDRMSession;
    typedef struct IBDA_WMDRMSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_WMDRMSession * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_WMDRMSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_WMDRMSession * This);
                           HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IBDA_WMDRMSession * This,
                        __RPC__out ULONG *MaxCaptureToken,
                        __RPC__out ULONG *MaxStreamingPid,
                        __RPC__out ULONG *MaxLicense,
                        __RPC__out ULONG *MinSecurityLevel,
                        __RPC__out ULONG *RevInfoSequenceNumber,
                        __RPC__out ULONGLONG *RevInfoIssuedTime,
                        __RPC__out ULONG *RevInfoTTL,
                        __RPC__out ULONG *RevListVersion,
                        __RPC__out ULONG *ulState);
                           HRESULT ( STDMETHODCALLTYPE *SetRevInfo )(
            __RPC__in IBDA_WMDRMSession * This,
                       ULONG ulRevInfoLen,
                                __RPC__in_ecount_full(ulRevInfoLen) BYTE *pbRevInfo);
                           HRESULT ( STDMETHODCALLTYPE *SetCrl )(
            __RPC__in IBDA_WMDRMSession * This,
                       ULONG ulCrlLen,
                                __RPC__in_ecount_full(ulCrlLen) BYTE *pbCrlLen);
                           HRESULT ( STDMETHODCALLTYPE *TransactMessage )(
            __RPC__in IBDA_WMDRMSession * This,
                       ULONG ulcbRequest,
                                __RPC__in_ecount_full(ulcbRequest) BYTE *pbRequest,
                            __RPC__inout ULONG *pulcbResponse,
                            __RPC__inout BYTE *pbResponse);
                           HRESULT ( STDMETHODCALLTYPE *GetLicense )(
            __RPC__in IBDA_WMDRMSession * This,
                       __RPC__in GUID *uuidKey,
                            __RPC__inout ULONG *pulPackageLen,
                            __RPC__inout BYTE *pbPackage);
                           HRESULT ( STDMETHODCALLTYPE *ReissueLicense )(
            __RPC__in IBDA_WMDRMSession * This,
                       __RPC__in GUID *uuidKey);
                           HRESULT ( STDMETHODCALLTYPE *RenewLicense )(
            __RPC__in IBDA_WMDRMSession * This,
                       ULONG ulInXmrLicenseLen,
                                __RPC__in_ecount_full(ulInXmrLicenseLen) BYTE *pbInXmrLicense,
                       ULONG ulEntitlementTokenLen,
                                __RPC__in_ecount_full(ulEntitlementTokenLen) BYTE *pbEntitlementToken,
                        __RPC__out ULONG *pulDescrambleStatus,
                            __RPC__inout ULONG *pulOutXmrLicenseLen,
                            __RPC__inout BYTE *pbOutXmrLicense);
                           HRESULT ( STDMETHODCALLTYPE *GetKeyInfo )(
            __RPC__in IBDA_WMDRMSession * This,
                            __RPC__inout ULONG *pulKeyInfoLen,
                            __RPC__inout BYTE *pbKeyInfo);
        END_INTERFACE
    } IBDA_WMDRMSessionVtbl;
    interface IBDA_WMDRMSession
    {
        CONST_VTBL struct IBDA_WMDRMSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStatus(This,MaxCaptureToken,MaxStreamingPid,MaxLicense,MinSecurityLevel,RevInfoSequenceNumber,RevInfoIssuedTime,RevInfoTTL,RevListVersion,ulState) )
    ( (This)->lpVtbl -> SetRevInfo(This,ulRevInfoLen,pbRevInfo) )
    ( (This)->lpVtbl -> SetCrl(This,ulCrlLen,pbCrlLen) )
    ( (This)->lpVtbl -> TransactMessage(This,ulcbRequest,pbRequest,pulcbResponse,pbResponse) )
    ( (This)->lpVtbl -> GetLicense(This,uuidKey,pulPackageLen,pbPackage) )
    ( (This)->lpVtbl -> ReissueLicense(This,uuidKey) )
    ( (This)->lpVtbl -> RenewLicense(This,ulInXmrLicenseLen,pbInXmrLicense,ulEntitlementTokenLen,pbEntitlementToken,pulDescrambleStatus,pulOutXmrLicenseLen,pbOutXmrLicense) )
    ( (This)->lpVtbl -> GetKeyInfo(This,pulKeyInfoLen,pbKeyInfo) )
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0040_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_WMDRMTuner;
    typedef struct IBDA_WMDRMTunerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_WMDRMTuner * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_WMDRMTuner * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_WMDRMTuner * This);
                           HRESULT ( STDMETHODCALLTYPE *PurchaseEntitlement )(
            __RPC__in IBDA_WMDRMTuner * This,
                       ULONG ulDialogRequest,
                       __RPC__in BSTR bstrLanguage,
                       ULONG ulPurchaseTokenLen,
                                __RPC__in_ecount_full(ulPurchaseTokenLen) BYTE *pbPurchaseToken,
                        __RPC__out ULONG *pulDescrambleStatus,
                            __RPC__inout ULONG *pulCaptureTokenLen,
                            __RPC__inout BYTE *pbCaptureToken);
                           HRESULT ( STDMETHODCALLTYPE *CancelCaptureToken )(
            __RPC__in IBDA_WMDRMTuner * This,
                       ULONG ulCaptureTokenLen,
                                __RPC__in_ecount_full(ulCaptureTokenLen) BYTE *pbCaptureToken);
                           HRESULT ( STDMETHODCALLTYPE *SetPidProtection )(
            __RPC__in IBDA_WMDRMTuner * This,
                       ULONG ulPid,
                       __RPC__in GUID *uuidKey);
                           HRESULT ( STDMETHODCALLTYPE *GetPidProtection )(
            __RPC__in IBDA_WMDRMTuner * This,
                       ULONG pulPid,
                        __RPC__out GUID *uuidKey);
                           HRESULT ( STDMETHODCALLTYPE *SetSyncValue )(
            __RPC__in IBDA_WMDRMTuner * This,
                       ULONG ulSyncValue);
                           HRESULT ( STDMETHODCALLTYPE *GetStartCodeProfile )(
            __RPC__in IBDA_WMDRMTuner * This,
                            __RPC__inout ULONG *pulStartCodeProfileLen,
                            __RPC__inout BYTE *pbStartCodeProfile);
        END_INTERFACE
    } IBDA_WMDRMTunerVtbl;
    interface IBDA_WMDRMTuner
    {
        CONST_VTBL struct IBDA_WMDRMTunerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PurchaseEntitlement(This,ulDialogRequest,bstrLanguage,ulPurchaseTokenLen,pbPurchaseToken,pulDescrambleStatus,pulCaptureTokenLen,pbCaptureToken) )
    ( (This)->lpVtbl -> CancelCaptureToken(This,ulCaptureTokenLen,pbCaptureToken) )
    ( (This)->lpVtbl -> SetPidProtection(This,ulPid,uuidKey) )
    ( (This)->lpVtbl -> GetPidProtection(This,pulPid,uuidKey) )
    ( (This)->lpVtbl -> SetSyncValue(This,ulSyncValue) )
    ( (This)->lpVtbl -> GetStartCodeProfile(This,pulStartCodeProfileLen,pbStartCodeProfile) )
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0041_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_DRIDRMService;
    typedef struct IBDA_DRIDRMServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_DRIDRMService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_DRIDRMService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_DRIDRMService * This);
                           HRESULT ( STDMETHODCALLTYPE *SetDRM )(
            __RPC__in IBDA_DRIDRMService * This,
                       __RPC__in BSTR bstrNewDrm);
                           HRESULT ( STDMETHODCALLTYPE *GetDRMStatus )(
            __RPC__in IBDA_DRIDRMService * This,
                        __RPC__deref_out_opt BSTR *pbstrDrmUuidList,
                        __RPC__out GUID *DrmUuid);
                           HRESULT ( STDMETHODCALLTYPE *GetPairingStatus )(
            __RPC__in IBDA_DRIDRMService * This,
                            __RPC__inout BDA_DrmPairingError *penumPairingStatus);
        END_INTERFACE
    } IBDA_DRIDRMServiceVtbl;
    interface IBDA_DRIDRMService
    {
        CONST_VTBL struct IBDA_DRIDRMServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDRM(This,bstrNewDrm) )
    ( (This)->lpVtbl -> GetDRMStatus(This,pbstrDrmUuidList,DrmUuid) )
    ( (This)->lpVtbl -> GetPairingStatus(This,penumPairingStatus) )
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0042_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0042_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_DRIWMDRMSession;
    typedef struct IBDA_DRIWMDRMSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_DRIWMDRMSession * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_DRIWMDRMSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_DRIWMDRMSession * This);
                           HRESULT ( STDMETHODCALLTYPE *AcknowledgeLicense )(
            __RPC__in IBDA_DRIWMDRMSession * This,
                       HRESULT hrLicenseAck);
                           HRESULT ( STDMETHODCALLTYPE *ProcessLicenseChallenge )(
            __RPC__in IBDA_DRIWMDRMSession * This,
                       DWORD dwcbLicenseMessage,
                                __RPC__in_ecount_full(dwcbLicenseMessage) BYTE *pbLicenseMessage,
                            __RPC__inout DWORD *pdwcbLicenseResponse,
                                     __RPC__inout_ecount_full(*pdwcbLicenseResponse) BYTE **ppbLicenseResponse);
                           HRESULT ( STDMETHODCALLTYPE *ProcessRegistrationChallenge )(
            __RPC__in IBDA_DRIWMDRMSession * This,
                       DWORD dwcbRegistrationMessage,
                                __RPC__in_ecount_full(dwcbRegistrationMessage) BYTE *pbRegistrationMessage,
                            __RPC__inout DWORD *pdwcbRegistrationResponse,
                            __RPC__deref_inout_opt BYTE **ppbRegistrationResponse);
                           HRESULT ( STDMETHODCALLTYPE *SetRevInfo )(
            __RPC__in IBDA_DRIWMDRMSession * This,
                       DWORD dwRevInfoLen,
                                __RPC__in_ecount_full(dwRevInfoLen) BYTE *pbRevInfo,
                            __RPC__inout DWORD *pdwResponse);
                           HRESULT ( STDMETHODCALLTYPE *SetCrl )(
            __RPC__in IBDA_DRIWMDRMSession * This,
                       DWORD dwCrlLen,
                                __RPC__in_ecount_full(dwCrlLen) BYTE *pbCrlLen,
                            __RPC__inout DWORD *pdwResponse);
                           HRESULT ( STDMETHODCALLTYPE *GetHMSAssociationData )(
            __RPC__in IBDA_DRIWMDRMSession * This);
                           HRESULT ( STDMETHODCALLTYPE *GetLastCardeaError )(
            __RPC__in IBDA_DRIWMDRMSession * This,
                            __RPC__inout DWORD *pdwError);
        END_INTERFACE
    } IBDA_DRIWMDRMSessionVtbl;
    interface IBDA_DRIWMDRMSession
    {
        CONST_VTBL struct IBDA_DRIWMDRMSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AcknowledgeLicense(This,hrLicenseAck) )
    ( (This)->lpVtbl -> ProcessLicenseChallenge(This,dwcbLicenseMessage,pbLicenseMessage,pdwcbLicenseResponse,ppbLicenseResponse) )
    ( (This)->lpVtbl -> ProcessRegistrationChallenge(This,dwcbRegistrationMessage,pbRegistrationMessage,pdwcbRegistrationResponse,ppbRegistrationResponse) )
    ( (This)->lpVtbl -> SetRevInfo(This,dwRevInfoLen,pbRevInfo,pdwResponse) )
    ( (This)->lpVtbl -> SetCrl(This,dwCrlLen,pbCrlLen,pdwResponse) )
    ( (This)->lpVtbl -> GetHMSAssociationData(This) )
    ( (This)->lpVtbl -> GetLastCardeaError(This,pdwError) )
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0043_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0043_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_MUX;
    typedef struct IBDA_MUXVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_MUX * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_MUX * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_MUX * This);
                           HRESULT ( STDMETHODCALLTYPE *SetPidList )(
            __RPC__in IBDA_MUX * This,
                       ULONG ulPidListCount,
                                __RPC__in_ecount_full(ulPidListCount) BDA_MUX_PIDLISTITEM *pbPidListBuffer);
                           HRESULT ( STDMETHODCALLTYPE *GetPidList )(
            __RPC__in IBDA_MUX * This,
                            __RPC__inout ULONG *pulPidListCount,
                            __RPC__inout BDA_MUX_PIDLISTITEM *pbPidListBuffer);
        END_INTERFACE
    } IBDA_MUXVtbl;
    interface IBDA_MUX
    {
        CONST_VTBL struct IBDA_MUXVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPidList(This,ulPidListCount,pbPidListBuffer) )
    ( (This)->lpVtbl -> GetPidList(This,pulPidListCount,pbPidListBuffer) )
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0044_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0044_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_TransportStreamSelector;
    typedef struct IBDA_TransportStreamSelectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_TransportStreamSelector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_TransportStreamSelector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_TransportStreamSelector * This);
                           HRESULT ( STDMETHODCALLTYPE *SetTSID )(
            __RPC__in IBDA_TransportStreamSelector * This,
                       USHORT usTSID);
                           HRESULT ( STDMETHODCALLTYPE *GetTSInformation )(
            __RPC__in IBDA_TransportStreamSelector * This,
                            __RPC__inout ULONG *pulTSInformationBufferLen,
                                 __RPC__out_ecount_full(*pulTSInformationBufferLen) BYTE *pbTSInformationBuffer);
        END_INTERFACE
    } IBDA_TransportStreamSelectorVtbl;
    interface IBDA_TransportStreamSelector
    {
        CONST_VTBL struct IBDA_TransportStreamSelectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetTSID(This,usTSID) )
    ( (This)->lpVtbl -> GetTSInformation(This,pulTSInformationBufferLen,pbTSInformationBuffer) )
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0045_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_UserActivityService;
    typedef struct IBDA_UserActivityServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_UserActivityService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_UserActivityService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_UserActivityService * This);
                           HRESULT ( STDMETHODCALLTYPE *SetCurrentTunerUseReason )(
            __RPC__in IBDA_UserActivityService * This,
                       DWORD dwUseReason);
                           HRESULT ( STDMETHODCALLTYPE *GetUserActivityInterval )(
            __RPC__in IBDA_UserActivityService * This,
                        __RPC__out DWORD *pdwActivityInterval);
                           HRESULT ( STDMETHODCALLTYPE *UserActivityDetected )(
            __RPC__in IBDA_UserActivityService * This);
        END_INTERFACE
    } IBDA_UserActivityServiceVtbl;
    interface IBDA_UserActivityService
    {
        CONST_VTBL struct IBDA_UserActivityServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetCurrentTunerUseReason(This,dwUseReason) )
    ( (This)->lpVtbl -> GetUserActivityInterval(This,pdwActivityInterval) )
    ( (This)->lpVtbl -> UserActivityDetected(This) )
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0046_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0046_v0_0_s_ifspec;
EXTERN_C const IID IID_IESEvent;
    typedef struct IESEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IESEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IESEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IESEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetEventId )(
            __RPC__in IESEvent * This,
                                __RPC__out DWORD *pdwEventId);
        HRESULT ( STDMETHODCALLTYPE *GetEventType )(
            __RPC__in IESEvent * This,
                                __RPC__out GUID *pguidEventType);
        HRESULT ( STDMETHODCALLTYPE *SetCompletionStatus )(
            __RPC__in IESEvent * This,
                       DWORD dwResult);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            __RPC__in IESEvent * This,
                                __RPC__deref_out_opt SAFEARRAY * *pbData);
        HRESULT ( STDMETHODCALLTYPE *GetStringData )(
            __RPC__in IESEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
        END_INTERFACE
    } IESEventVtbl;
    interface IESEvent
    {
        CONST_VTBL struct IESEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEventId(This,pdwEventId) )
    ( (This)->lpVtbl -> GetEventType(This,pguidEventType) )
    ( (This)->lpVtbl -> SetCompletionStatus(This,dwResult) )
    ( (This)->lpVtbl -> GetData(This,pbData) )
    ( (This)->lpVtbl -> GetStringData(This,pbstrData) )
EXTERN_C const IID IID_IESEvents;
    typedef struct IESEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IESEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IESEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IESEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnESEventReceived )(
            __RPC__in IESEvents * This,
                       GUID guidEventType,
                       __RPC__in_opt IESEvent *pESEvent);
        END_INTERFACE
    } IESEventsVtbl;
    interface IESEvents
    {
        CONST_VTBL struct IESEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnESEventReceived(This,guidEventType,pESEvent) )
EXTERN_C const IID IID_IBroadcastEvent;
    typedef struct IBroadcastEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBroadcastEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBroadcastEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBroadcastEvent * This);
        HRESULT ( STDMETHODCALLTYPE *Fire )(
            __RPC__in IBroadcastEvent * This,
                       GUID EventID);
        END_INTERFACE
    } IBroadcastEventVtbl;
    interface IBroadcastEvent
    {
        CONST_VTBL struct IBroadcastEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Fire(This,EventID) )
EXTERN_C const IID IID_IBroadcastEventEx;
    typedef struct IBroadcastEventExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBroadcastEventEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBroadcastEventEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBroadcastEventEx * This);
        HRESULT ( STDMETHODCALLTYPE *Fire )(
            __RPC__in IBroadcastEventEx * This,
                       GUID EventID);
        HRESULT ( STDMETHODCALLTYPE *FireEx )(
            __RPC__in IBroadcastEventEx * This,
                       GUID EventID,
                       ULONG Param1,
                       ULONG Param2,
                       ULONG Param3,
                       ULONG Param4);
        END_INTERFACE
    } IBroadcastEventExVtbl;
    interface IBroadcastEventEx
    {
        CONST_VTBL struct IBroadcastEventExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Fire(This,EventID) )
    ( (This)->lpVtbl -> FireEx(This,EventID,Param1,Param2,Param3,Param4) )
DEFINE_GUID(CLSID_BroadcastEventService, 0x0B3FFB92, 0x0919, 0x4934, 0x9D, 0x5B, 0x61, 0x9C, 0x71, 0x9D, 0x02, 0x02);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0050_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
}
