#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
  #define BTH_MAJORVERSION 2
  #define BTH_MINORVERSION 0
#pragma warning(disable:4201)
    #include "bthsdpdef.h"
DEFINE_GUID(GUID_BTHPORT_DEVICE_INTERFACE, 0x850302a, 0xb344, 0x4fda, 0x9b, 0xe9, 0x90, 0x57, 0x6b, 0x8d, 0x46, 0xf0);
DEFINE_GUID(GUID_BTH_RFCOMM_SERVICE_DEVICE_INTERFACE, 0xb142fc3e, 0xfa4e, 0x460b, 0x8a, 0xbc, 0x07, 0x2b, 0x62, 0x8b, 0x3c, 0x70);
DEFINE_GUID(GUID_BLUETOOTH_RADIO_IN_RANGE, 0xea3b5b82, 0x26ee, 0x450e, 0xb0, 0xd8, 0xd2, 0x6f, 0xe3, 0x0a, 0x38, 0x69);
DEFINE_GUID(GUID_BLUETOOTH_RADIO_OUT_OF_RANGE, 0xe28867c9, 0xc2aa, 0x4ced, 0xb9, 0x69, 0x45, 0x70, 0x86, 0x60, 0x37, 0xc4);
DEFINE_GUID(GUID_BLUETOOTH_L2CAP_EVENT, 0x7eae4030, 0xb709, 0x4aa8, 0xac, 0x55, 0xe9, 0x53, 0x82, 0x9c, 0x9d, 0xaa);
DEFINE_GUID(GUID_BLUETOOTH_HCI_EVENT, 0xfc240062, 0x1541, 0x49be, 0xb4, 0x63, 0x84, 0xc4, 0xdc, 0xd7, 0xbf, 0x7f);
DEFINE_GUID(Bluetooth_Base_UUID, 0x00000000, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB);
    DEFINE_GUID(name,shortId,0x0000,0x1000,0x80,0x00,0x00,0x80,0x5F,0x9B,0x34,0xFB)
DEFINE_BLUETOOTH_UUID128(SDP_PROTOCOL_UUID, SDP_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(UDP_PROTOCOL_UUID, UDP_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(RFCOMM_PROTOCOL_UUID, RFCOMM_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(TCP_PROTOCOL_UUID, TCP_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(TCSBIN_PROTOCOL_UUID, TCSBIN_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(TCSAT_PROTOCOL_UUID, TCSAT_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(ATT_PROTOCOL_UUID, ATT_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(OBEX_PROTOCOL_UUID, OBEX_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(IP_PROTOCOL_UUID, IP_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(FTP_PROTOCOL_UUID, FTP_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(HTTP_PROTOCOL_UUID, HTTP_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(WSP_PROTOCOL_UUID, WSP_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(BNEP_PROTOCOL_UUID, BNEP_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(UPNP_PROTOCOL_UUID, UPNP_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(HID_PROTOCOL_UUID, HID_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(HCCC_PROTOCOL_UUID, HCCC_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(HCDC_PROTOCOL_UUID, HCDC_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(HCN_PROTOCOL_UUID, HCN_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(AVCTP_PROTOCOL_UUID, AVCTP_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(AVDTP_PROTOCOL_UUID, AVDTP_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(CMPT_PROTOCOL_UUID, CMPT_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(UDI_C_PLANE_PROTOCOL_UUID, UDI_C_PLANE_PROTOCOL_UUID16);
DEFINE_BLUETOOTH_UUID128(L2CAP_PROTOCOL_UUID, L2CAP_PROTOCOL_UUID16);
                                                        (0x1120)
DEFINE_BLUETOOTH_UUID128(ServiceDiscoveryServerServiceClassID_UUID, ServiceDiscoveryServerServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(BrowseGroupDescriptorServiceClassID_UUID, BrowseGroupDescriptorServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(PublicBrowseGroupServiceClass_UUID, PublicBrowseGroupServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(SerialPortServiceClass_UUID, SerialPortServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(LANAccessUsingPPPServiceClass_UUID, LANAccessUsingPPPServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(DialupNetworkingServiceClass_UUID, DialupNetworkingServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(IrMCSyncServiceClass_UUID, IrMCSyncServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(OBEXObjectPushServiceClass_UUID, OBEXObjectPushServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(OBEXFileTransferServiceClass_UUID, OBEXFileTransferServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(IrMCSyncCommandServiceClass_UUID, IrMcSyncCommandServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(HeadsetServiceClass_UUID, HeadsetServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(CordlessTelephonyServiceClass_UUID, CordlessTelephonyServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(AudioSourceServiceClass_UUID, AudioSourceServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(AudioSinkServiceClass_UUID, AudioSinkServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(AVRemoteControlTargetServiceClass_UUID, AVRemoteControlTargetServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(AVRemoteControlServiceClass_UUID, AVRemoteControlServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(AVRemoteControlControllerServiceClass_UUID, AVRemoteControlControllerServiceClass_UUID16);
DEFINE_BLUETOOTH_UUID128(IntercomServiceClass_UUID, IntercomServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(FaxServiceClass_UUID, FaxServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(HeadsetAudioGatewayServiceClass_UUID, HeadsetAudioGatewayServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(WAPServiceClass_UUID, WAPServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(WAPClientServiceClass_UUID, WAPClientServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(PANUServiceClass_UUID, PANUServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(NAPServiceClass_UUID, NAPServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(GNServiceClass_UUID, GNServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(DirectPrintingServiceClass_UUID, DirectPrintingServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(ReferencePrintingServiceClass_UUID, ReferencePrintingServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(ImagingResponderServiceClass_UUID, ImagingResponderServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(ImagingAutomaticArchiveServiceClass_UUID, ImagingAutomaticArchiveServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(ImagingReferenceObjectsServiceClass_UUID, ImagingReferenceObjectsServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(HandsfreeServiceClass_UUID, HandsfreeServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(HandsfreeAudioGatewayServiceClass_UUID, HandsfreeAudioGatewayServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(DirectPrintingReferenceObjectsServiceClass_UUID, DirectPrintingReferenceObjectsServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(ReflectedUIServiceClass_UUID, ReflectsUIServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(PrintingStatusServiceClass_UUID, PrintingStatusServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(HumanInterfaceDeviceServiceClass_UUID, HumanInterfaceDeviceServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(HCRPrintServiceClass_UUID, HCRPrintServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(HCRScanServiceClass_UUID, HCRScanServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(CommonISDNAccessServiceClass_UUID, CommonISDNAccessServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(VideoConferencingGWServiceClass_UUID, VideoConferencingGWServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(UDIMTServiceClass_UUID, UDIMTServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(UDITAServiceClass_UUID, UDITAServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(AudioVideoServiceClass_UUID, AudioVideoServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(SimAccessServiceClass_UUID, SimAccessServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(PhonebookAccessPceServiceClass_UUID, PhonebookAccessPceServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(PhonebookAccessPseServiceClass_UUID, PhonebookAccessPseServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(HeadsetHSServiceClass_UUID, HeadsetHSServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(MessageAccessServerServiceClass_UUID, MessageAccessServerServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(MessageNotificationServerServiceClass_UUID, MessageNotificationServerServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(GNSSServerServiceClass_UUID, GNSSServerServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(ThreeDimensionalDisplayServiceClass_UUID, ThreeDimensionalDisplayServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(ThreeDimensionalGlassesServiceClass_UUID, ThreeDimensionalGlassesServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(MPSServiceClass_UUID, MPSServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(CTNAccessServiceClass_UUID, CTNAccessServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(CTNNotificationServiceClass_UUID, CTNNotificationServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(PnPInformationServiceClass_UUID, PnPInformationServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(GenericNetworkingServiceClass_UUID, GenericNetworkingServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(GenericFileTransferServiceClass_UUID, GenericFileTransferServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(GenericAudioServiceClass_UUID, GenericAudioServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(GenericTelephonyServiceClass_UUID, GenericTelephonyServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(UPnpServiceClass_UUID, UPnpServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(UPnpIpServiceClass_UUID, UPnpIpServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(ESdpUpnpIpPanServiceClass_UUID, ESdpUpnpIpPanServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(ESdpUpnpIpLapServiceClass_UUID, ESdpUpnpIpLapServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(ESdpUpnpL2capServiceClass_UUID, ESdpUpnpL2capServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(VideoSourceServiceClass_UUID, VideoSourceServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(VideoSinkServiceClass_UUID, VideoSinkServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(HealthDeviceProfileSourceServiceClass_UUID, HealthDeviceProfileSourceServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(HealthDeviceProfileSinkServiceClass_UUID, HealthDeviceProfileSinkServiceClassID_UUID16);
DEFINE_BLUETOOTH_UUID128(AdvancedAudioDistributionProfile_UUID, AdvancedAudioDistributionProfileID_UUID16);
DEFINE_BLUETOOTH_UUID128(ImagingServiceProfile_UUID, ImagingServiceProfileID_UUID16);
DEFINE_BLUETOOTH_UUID128(BasicPrintingProfile_UUID, BasicPrintingProfileID_UUID16);
DEFINE_BLUETOOTH_UUID128(HardcopyCableReplacementProfile_UUID, HardcopyCableReplacementProfileID_UUID16);
DEFINE_BLUETOOTH_UUID128(PhonebookAccessProfile_UUID, PhonebookAccessProfileID_UUID16);
DEFINE_BLUETOOTH_UUID128(MessageAccessProfile_UUID, MessageAccessProfileID_UUID16);
DEFINE_BLUETOOTH_UUID128(GNSSProfile_UUID, GNSSProfileID_UUID16);
DEFINE_BLUETOOTH_UUID128(ThreeDimensionalSynchronizationProfile_UUID, ThreeDimensionalSynchronizationProfileID_UUID16);
DEFINE_BLUETOOTH_UUID128(MPSProfile_UUID, MPSProfileID_UUID16);
DEFINE_BLUETOOTH_UUID128(CTNProfile_UUID, CTNProfileID_UUID16);
DEFINE_BLUETOOTH_UUID128(VideoDistributionProfile_UUID, VideoDistributionProfileID_UUID16);
DEFINE_BLUETOOTH_UUID128(HealthDeviceProfile_UUID, HealthDeviceProfileID_UUID16);
typedef ULONGLONG BTH_ADDR, *PBTH_ADDR;
typedef ULONG BTH_COD, *PBTH_COD;
typedef ULONG BTH_LAP, *PBTH_LAP;
                                             COD_SERVICE_POSITIONING | \
                                             COD_SERVICE_NETWORKING | \
                                             COD_SERVICE_RENDERING | \
                                             COD_SERVICE_CAPTURING | \
                                             COD_SERVICE_OBJECT_XFER |\
                                             COD_SERVICE_AUDIO |\
                                             COD_SERVICE_TELEPHONY |\
                                             COD_SERVICE_INFORMATION)
                                            (0x0F)
                                            (0x10)
                                            (0x01)
                                            (0x06)
                                            (0x07)
typedef UCHAR BTHSTATUS, *PBTHSTATUS;
                                                    (0x39)
                                                    (0x3d)
    (BDIF_ADDRESS | BDIF_COD | BDIF_NAME | BDIF_PAIRED | BDIF_PERSONAL | \
     BDIF_CONNECTED)
typedef struct _BTH_DEVICE_INFO {
    ULONG flags;
    BTH_ADDR address;
    BTH_COD classOfDevice;
    CHAR name[BTH_MAX_NAME_SIZE];
} BTH_DEVICE_INFO, *PBTH_DEVICE_INFO;
typedef struct _BTH_RADIO_IN_RANGE {
    BTH_DEVICE_INFO deviceInfo;
    ULONG previousDeviceFlags;
} BTH_RADIO_IN_RANGE, *PBTH_RADIO_IN_RANGE;
typedef struct _BTH_L2CAP_EVENT_INFO {
    BTH_ADDR bthAddress;
    USHORT psm;
    UCHAR connected;
    UCHAR initiated;
} BTH_L2CAP_EVENT_INFO, *PBTH_L2CAP_EVENT_INFO;
typedef struct _BTH_HCI_EVENT_INFO {
    BTH_ADDR bthAddress;
    UCHAR connectionType;
    UCHAR connected;
} BTH_HCI_EVENT_INFO, *PBTH_HCI_EVENT_INFO;
                                            (0x000D)
#pragma warning(default:4201)
#endif
#pragma endregion
