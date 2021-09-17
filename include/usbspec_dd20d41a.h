#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include <PSHPACK1.H>
#pragma warning(disable:4201)
#pragma warning(disable:4214)
typedef enum _USB_DEVICE_SPEED {
    UsbLowSpeed = 0,
    UsbFullSpeed,
    UsbHighSpeed,
    UsbSuperSpeed
} USB_DEVICE_SPEED;
typedef enum _USB_DEVICE_TYPE {
    Usb11Device = 0,
    Usb20Device
} USB_DEVICE_TYPE;
typedef union _BM_REQUEST_TYPE {
    struct _BM {
        UCHAR Recipient:2;
        UCHAR Reserved:3;
        UCHAR Type:2;
        UCHAR Dir:1;
        } s;
    UCHAR B;
} BM_REQUEST_TYPE, *PBM_REQUEST_TYPE;
typedef struct _USB_DEFAULT_PIPE_SETUP_PACKET {
    BM_REQUEST_TYPE bmRequestType;
    UCHAR bRequest;
    union _wValue {
        struct {
            UCHAR LowByte;
            UCHAR HiByte;
        };
        USHORT W;
    } wValue;
    union _wIndex {
        struct {
            UCHAR LowByte;
            UCHAR HiByte;
        };
        USHORT W;
    } wIndex;
    USHORT wLength;
} USB_DEFAULT_PIPE_SETUP_PACKET, *PUSB_DEFAULT_PIPE_SETUP_PACKET;
C_ASSERT(sizeof(USB_DEFAULT_PIPE_SETUP_PACKET) == 8);
typedef union _USB_DEVICE_STATUS {
    USHORT AsUshort16;
    struct {
        USHORT SelfPowered:1;
        USHORT RemoteWakeup:1;
        USHORT U1Enable:1;
        USHORT U2Enable:1;
        USHORT LtmEnable:1;
        USHORT Reserved:11;
    };
} USB_DEVICE_STATUS, *PUSB_DEVICE_STATUS;
C_ASSERT(sizeof(USB_DEVICE_STATUS) == sizeof(USHORT));
typedef union _USB_INTERFACE_STATUS {
    USHORT AsUshort16;
    struct {
        USHORT RemoteWakeupCapable:1;
        USHORT RemoteWakeupEnabled:1;
        USHORT Reserved:14;
    };
} USB_INTERFACE_STATUS, *PUSB_INTERFACE_STATUS;
C_ASSERT(sizeof(USB_INTERFACE_STATUS) == sizeof(USHORT));
typedef union _USB_ENDPOINT_STATUS {
    USHORT AsUshort16;
    struct {
        USHORT Halt:1;
        USHORT Reserved:15;
    };
} USB_ENDPOINT_STATUS, *PUSB_ENDPOINT_STATUS;
C_ASSERT(sizeof(USB_ENDPOINT_STATUS) == sizeof(USHORT));
typedef struct _USB_COMMON_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
} USB_COMMON_DESCRIPTOR, *PUSB_COMMON_DESCRIPTOR;
typedef struct _USB_DEVICE_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    USHORT bcdUSB;
    UCHAR bDeviceClass;
    UCHAR bDeviceSubClass;
    UCHAR bDeviceProtocol;
    UCHAR bMaxPacketSize0;
    USHORT idVendor;
    USHORT idProduct;
    USHORT bcdDevice;
    UCHAR iManufacturer;
    UCHAR iProduct;
    UCHAR iSerialNumber;
    UCHAR bNumConfigurations;
} USB_DEVICE_DESCRIPTOR, *PUSB_DEVICE_DESCRIPTOR;
C_ASSERT(sizeof(USB_DEVICE_DESCRIPTOR) == 18);
typedef struct _USB_DEVICE_QUALIFIER_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    USHORT bcdUSB;
    UCHAR bDeviceClass;
    UCHAR bDeviceSubClass;
    UCHAR bDeviceProtocol;
    UCHAR bMaxPacketSize0;
    UCHAR bNumConfigurations;
    UCHAR bReserved;
} USB_DEVICE_QUALIFIER_DESCRIPTOR, *PUSB_DEVICE_QUALIFIER_DESCRIPTOR;
C_ASSERT(sizeof(USB_DEVICE_QUALIFIER_DESCRIPTOR) == 10);
typedef struct _USB_BOS_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    USHORT wTotalLength;
    UCHAR bNumDeviceCaps;
} USB_BOS_DESCRIPTOR, *PUSB_BOS_DESCRIPTOR;
C_ASSERT(sizeof(USB_BOS_DESCRIPTOR) == 5);
typedef struct _USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR bDevCapabilityType;
    union {
        ULONG AsUlong;
        struct {
            ULONG Reserved:1;
            ULONG LPMCapable:1;
            ULONG BESLAndAlternateHIRDSupported:1;
            ULONG BaselineBESLValid:1;
            ULONG DeepBESLValid:1;
            ULONG Reserved1:3;
            ULONG BaselineBESL:4;
            ULONG DeepBESL:4;
            ULONG Reserved2:16;
        };
    } bmAttributes;
} USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR, *PUSB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR;
C_ASSERT(sizeof(USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR) == 7);
typedef struct _USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR bDevCapabilityType;
    UCHAR bReserved;
    union {
        ULONG AsUlong;
        struct {
            ULONG Reserved1:1;
            ULONG BatteryCharging:1;
            ULONG USBPowerDelivery:1;
            ULONG Provider:1;
            ULONG Consumer:1;
            ULONG ChargingPolicy:1;
            ULONG TypeCCurrent:1;
            ULONG Reserved2:1;
            ULONG ACSupply:1;
            ULONG Battery:1;
            ULONG Other:1;
            ULONG NumBatteries:3;
            ULONG UsesVbus:1;
            ULONG Reserved3:17;
        };
    } bmAttributes;
    USHORT bmProviderPorts;
    USHORT bmConsumerPorts;
    USHORT bcdBCVersion;
    USHORT bcdPDVersion;
    USHORT bcdUSBTypeCVersion;
} USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR, *PUSB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR;
C_ASSERT(sizeof(USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR) == 18);
typedef struct _USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR bDevCapabilityType;
    UCHAR bReserved;
    union {
        USHORT AsUshort;
        struct {
            USHORT BatteryCharging:1;
            USHORT USBPowerDelivery:1;
            USHORT USBTypeCCurrent:1;
            USHORT Reserved:13;
        };
    } bmCapabilities;
    USHORT wMinVoltage;
    USHORT wMaxVoltage;
    USHORT wReserved;
    ULONG dwMaxOperatingPower;
    ULONG dwMaxPeakPower;
    ULONG dwMaxPeakPowerTime;
} USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR, *PUSB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR;
C_ASSERT(sizeof(USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR) == 24);
typedef struct _USB_DEVICE_CAPABILITY_SUPERSPEED_USB_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR bDevCapabilityType;
    UCHAR bmAttributes;
    USHORT wSpeedsSupported;
    UCHAR bFunctionalitySupport;
    UCHAR bU1DevExitLat;
    USHORT wU2DevExitLat;
} USB_DEVICE_CAPABILITY_SUPERSPEED_USB_DESCRIPTOR, *PUSB_DEVICE_CAPABILITY_SUPERSPEED_USB_DESCRIPTOR;
C_ASSERT(sizeof(USB_DEVICE_CAPABILITY_SUPERSPEED_USB_DESCRIPTOR) == 10);
typedef union _USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED {
    ULONG AsUlong32;
    struct {
        ULONG SublinkSpeedAttrID:4;
        ULONG LaneSpeedExponent:2;
        ULONG SublinkTypeMode:1;
        ULONG SublinkTypeDir:1;
        ULONG Reserved:6;
        ULONG LinkProtocol:2;
        ULONG LaneSpeedMantissa:16;
    };
} USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED, *PUSB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED;
typedef struct _USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR bDevCapabilityType;
    UCHAR bReserved;
    union {
        ULONG AsUlong;
        struct {
            ULONG SublinkSpeedAttrCount:5;
            ULONG SublinkSpeedIDCount:4;
            ULONG Reserved:23;
        };
    } bmAttributes;
    union {
        USHORT AsUshort;
        struct {
            USHORT SublinkSpeedAttrID:4;
            USHORT Reserved:4;
            USHORT MinRxLaneCount:4;
            USHORT MinTxLaneCount:4;
        };
    } wFunctionalitySupport;
    USHORT wReserved;
    USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED bmSublinkSpeedAttr[1];
} USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR, *PUSB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR;
C_ASSERT(sizeof(USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR) == 16);
typedef struct _USB_DEVICE_CAPABILITY_CONTAINER_ID_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR bDevCapabilityType;
    UCHAR bReserved;
    UCHAR ContainerID[16];
} USB_DEVICE_CAPABILITY_CONTAINER_ID_DESCRIPTOR, *PUSB_DEVICE_CAPABILITY_CONTAINER_ID_DESCRIPTOR;
C_ASSERT(sizeof(USB_DEVICE_CAPABILITY_CONTAINER_ID_DESCRIPTOR) == 20);
typedef struct _USB_DEVICE_CAPABILITY_PLATFORM_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR bDevCapabilityType;
    UCHAR bReserved;
    GUID PlatformCapabilityUuid;
    UCHAR CapabililityData[1];
} USB_DEVICE_CAPABILITY_PLATFORM_DESCRIPTOR, *PUSB_DEVICE_CAPABILITY_PLATFORM_DESCRIPTOR;
C_ASSERT(sizeof(USB_DEVICE_CAPABILITY_PLATFORM_DESCRIPTOR) == 21);
typedef struct _USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR bDevCapabilityType;
    UCHAR iAddtionalInfoURL;
    UCHAR bNumberOfAlternateModes;
    UCHAR bPreferredAlternateMode;
    union {
        USHORT AsUshort;
        struct {
            USHORT VConnPowerNeededForFullFunctionality:3;
            USHORT Reserved:12;
            USHORT NoVconnPowerRequired:1;
        };
    } VconnPower;
    UCHAR bmConfigured[32];
    ULONG bReserved;
    struct {
        USHORT wSVID;
        UCHAR bAlternateMode;
        UCHAR iAlternateModeSetting;
    } AlternateMode[1];
} USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR, *PUSB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR;
C_ASSERT(sizeof(USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR) == 48);
typedef struct _USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR bDevCapabilityType;
    UCHAR bcdDescriptorVersion;
    union {
        ULONG AsUlong;
        struct {
            ULONG GetFirmwareImageHashSupport:1;
            ULONG DisallowFirmwareUpdateSupport:1;
            ULONG Reserved:30;
        };
    } bmAttributes;
} USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR, *PUSB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR;
C_ASSERT(sizeof(USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR) == 8);
DEFINE_GUID(GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID,
0xD8DD60DF, 0x4589, 0x4CC7, 0x9C, 0xD2, 0x65, 0x9D, 0x9E, 0x64, 0x8A, 0x9F);
typedef struct _USB_DEVICE_CAPABILITY_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR bDevCapabilityType;
} USB_DEVICE_CAPABILITY_DESCRIPTOR, *PUSB_DEVICE_CAPABILITY_DESCRIPTOR;
C_ASSERT(sizeof(USB_DEVICE_CAPABILITY_DESCRIPTOR) == 3);
typedef struct _USB_CONFIGURATION_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    USHORT wTotalLength;
    UCHAR bNumInterfaces;
    UCHAR bConfigurationValue;
    UCHAR iConfiguration;
    UCHAR bmAttributes;
    UCHAR MaxPower;
} USB_CONFIGURATION_DESCRIPTOR, *PUSB_CONFIGURATION_DESCRIPTOR;
C_ASSERT(sizeof(USB_CONFIGURATION_DESCRIPTOR) == 9);
typedef struct _USB_INTERFACE_ASSOCIATION_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR bFirstInterface;
    UCHAR bInterfaceCount;
    UCHAR bFunctionClass;
    UCHAR bFunctionSubClass;
    UCHAR bFunctionProtocol;
    UCHAR iFunction;
} USB_INTERFACE_ASSOCIATION_DESCRIPTOR, *PUSB_INTERFACE_ASSOCIATION_DESCRIPTOR;
C_ASSERT(sizeof(USB_INTERFACE_ASSOCIATION_DESCRIPTOR) == 8);
typedef struct _USB_INTERFACE_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR bInterfaceNumber;
    UCHAR bAlternateSetting;
    UCHAR bNumEndpoints;
    UCHAR bInterfaceClass;
    UCHAR bInterfaceSubClass;
    UCHAR bInterfaceProtocol;
    UCHAR iInterface;
} USB_INTERFACE_DESCRIPTOR, *PUSB_INTERFACE_DESCRIPTOR;
C_ASSERT(sizeof(USB_INTERFACE_DESCRIPTOR) == 9);
typedef struct _USB_ENDPOINT_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR bEndpointAddress;
    UCHAR bmAttributes;
    USHORT wMaxPacketSize;
    UCHAR bInterval;
} USB_ENDPOINT_DESCRIPTOR, *PUSB_ENDPOINT_DESCRIPTOR;
C_ASSERT(sizeof(USB_ENDPOINT_DESCRIPTOR) == 7);
typedef union _USB_HIGH_SPEED_MAXPACKET {
    struct _MP {
        USHORT MaxPacket:11;
        USHORT HSmux:2;
        USHORT Reserved:3;
    };
    USHORT us;
} USB_HIGH_SPEED_MAXPACKET, *PUSB_HIGH_SPEED_MAXPACKET;
C_ASSERT(sizeof(USB_HIGH_SPEED_MAXPACKET) == 2);
typedef struct _USB_STRING_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    WCHAR bString[1];
} USB_STRING_DESCRIPTOR, *PUSB_STRING_DESCRIPTOR;
typedef struct _USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR bMaxBurst;
    union {
        UCHAR AsUchar;
        struct {
            UCHAR MaxStreams:5;
            UCHAR Reserved1:3;
        } Bulk;
        struct {
            UCHAR Mult:2;
            UCHAR Reserved2:5;
            UCHAR SspCompanion:1;
        } Isochronous;
    } bmAttributes;
    USHORT wBytesPerInterval;
} USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR, *PUSB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR;
C_ASSERT(sizeof(USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR) == 6);
typedef struct _USB_SUPERSPEEDPLUS_ISOCH_ENDPOINT_COMPANION_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    USHORT wReserved;
    ULONG dwBytesPerInterval;
} USB_SUPERSPEEDPLUS_ISOCH_ENDPOINT_COMPANION_DESCRIPTOR, *PUSB_SUPERSPEEDPLUS_ISOCH_ENDPOINT_COMPANION_DESCRIPTOR;
C_ASSERT(sizeof(USB_SUPERSPEEDPLUS_ISOCH_ENDPOINT_COMPANION_DESCRIPTOR) == 8);
typedef struct _USB_HUB_DESCRIPTOR {
    UCHAR bDescriptorLength;
    UCHAR bDescriptorType;
    UCHAR bNumberOfPorts;
    USHORT wHubCharacteristics;
    UCHAR bPowerOnToPowerGood;
    UCHAR bHubControlCurrent;
    UCHAR bRemoveAndPowerMask[64];
} USB_HUB_DESCRIPTOR, *PUSB_HUB_DESCRIPTOR;
typedef struct _USB_30_HUB_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR bNumberOfPorts;
    USHORT wHubCharacteristics;
    UCHAR bPowerOnToPowerGood;
    UCHAR bHubControlCurrent;
    UCHAR bHubHdrDecLat;
    USHORT wHubDelay;
    USHORT DeviceRemovable;
} USB_30_HUB_DESCRIPTOR, *PUSB_30_HUB_DESCRIPTOR;
typedef union _USB_HUB_STATUS {
    USHORT AsUshort16;
    struct {
        USHORT LocalPowerLost:1;
        USHORT OverCurrent:1;
        USHORT Reserved:14;
    };
} USB_HUB_STATUS, *PUSB_HUB_STATUS;
C_ASSERT(sizeof(USB_HUB_STATUS) == sizeof(USHORT));
typedef union _USB_HUB_CHANGE {
    USHORT AsUshort16;
    struct {
        USHORT LocalPowerChange:1;
        USHORT OverCurrentChange:1;
        USHORT Reserved:14;
    };
} USB_HUB_CHANGE, *PUSB_HUB_CHANGE;
C_ASSERT(sizeof(USB_HUB_CHANGE) == sizeof(USHORT));
typedef union _USB_HUB_STATUS_AND_CHANGE {
    ULONG AsUlong32;
    struct {
        USB_HUB_STATUS HubStatus;
        USB_HUB_CHANGE HubChange;
    };
} USB_HUB_STATUS_AND_CHANGE, *PUSB_HUB_STATUS_AND_CHANGE;
C_ASSERT(sizeof(USB_HUB_STATUS_AND_CHANGE) == sizeof(ULONG));
typedef union _USB_20_PORT_STATUS {
    USHORT AsUshort16;
    struct {
        USHORT CurrentConnectStatus:1;
        USHORT PortEnabledDisabled:1;
        USHORT Suspend:1;
        USHORT OverCurrent:1;
        USHORT Reset:1;
        USHORT L1:1;
        USHORT Reserved0:2;
        USHORT PortPower:1;
        USHORT LowSpeedDeviceAttached:1;
        USHORT HighSpeedDeviceAttached:1;
        USHORT PortTestMode:1;
        USHORT PortIndicatorControl:1;
        USHORT Reserved1:3;
    };
} USB_20_PORT_STATUS, *PUSB_20_PORT_STATUS;
C_ASSERT(sizeof(USB_20_PORT_STATUS) == sizeof(USHORT));
typedef union _USB_20_PORT_CHANGE {
    USHORT AsUshort16;
    struct {
        USHORT ConnectStatusChange:1;
        USHORT PortEnableDisableChange:1;
        USHORT SuspendChange:1;
        USHORT OverCurrentIndicatorChange:1;
        USHORT ResetChange:1;
        USHORT Reserved2:11;
    };
} USB_20_PORT_CHANGE, *PUSB_20_PORT_CHANGE;
C_ASSERT(sizeof(USB_20_PORT_CHANGE) == sizeof(USHORT));
typedef union _USB_30_PORT_STATUS {
    USHORT AsUshort16;
    struct {
        USHORT CurrentConnectStatus:1;
        USHORT PortEnabledDisabled:1;
        USHORT Reserved0:1;
        USHORT OverCurrent:1;
        USHORT Reset:1;
        USHORT PortLinkState:4;
        USHORT PortPower:1;
        USHORT NegotiatedDeviceSpeed:3;
        USHORT Reserved1:3;
    };
} USB_30_PORT_STATUS, *PUSB_30_PORT_STATUS;
C_ASSERT(sizeof(USB_30_PORT_STATUS) == sizeof(USHORT));
typedef union _USB_30_PORT_CHANGE {
    USHORT AsUshort16;
    struct {
        USHORT ConnectStatusChange:1;
        USHORT Reserved2:2;
        USHORT OverCurrentIndicatorChange:1;
        USHORT ResetChange:1;
        USHORT BHResetChange:1;
        USHORT PortLinkStateChange:1;
        USHORT PortConfigErrorChange:1;
        USHORT Reserved3:8;
    };
} USB_30_PORT_CHANGE, *PUSB_30_PORT_CHANGE;
C_ASSERT(sizeof(USB_30_PORT_CHANGE) == sizeof(USHORT));
typedef union _USB_PORT_STATUS {
    USHORT AsUshort16;
    USB_20_PORT_STATUS Usb20PortStatus;
    USB_30_PORT_STATUS Usb30PortStatus;
} USB_PORT_STATUS, *PUSB_PORT_STATUS;
C_ASSERT(sizeof(USB_PORT_STATUS) == sizeof(USHORT));
typedef union _USB_PORT_CHANGE {
    USHORT AsUshort16;
    USB_20_PORT_CHANGE Usb20PortChange;
    USB_30_PORT_CHANGE Usb30PortChange;
} USB_PORT_CHANGE, *PUSB_PORT_CHANGE;
C_ASSERT(sizeof(USB_PORT_CHANGE) == sizeof(USHORT));
typedef union _USB_PORT_EXT_STATUS {
    ULONG AsUlong32;
    struct {
        ULONG RxSublinkSpeedID:4;
        ULONG TxSublinkSpeedID:4;
        ULONG RxLaneCount:4;
        ULONG TxLaneCount:4;
        ULONG Reserved:16;
    };
} USB_PORT_EXT_STATUS, *PUSB_PORT_EXT_STATUS;
C_ASSERT(sizeof(USB_PORT_EXT_STATUS) == sizeof(ULONG));
typedef union _USB_PORT_STATUS_AND_CHANGE {
    ULONG AsUlong32;
    struct {
        USB_PORT_STATUS PortStatus;
        USB_PORT_CHANGE PortChange;
    };
} USB_PORT_STATUS_AND_CHANGE, *PUSB_PORT_STATUS_AND_CHANGE;
C_ASSERT(sizeof(USB_PORT_STATUS_AND_CHANGE) == sizeof(ULONG));
typedef union _USB_PORT_EXT_STATUS_AND_CHANGE {
    ULONG64 AsUlong64;
    struct {
        USB_PORT_STATUS_AND_CHANGE PortStatusChange;
        USB_PORT_EXT_STATUS PortExtStatus;
    };
} USB_PORT_EXT_STATUS_AND_CHANGE, *PUSB_PORT_EXT_STATUS_AND_CHANGE;
C_ASSERT(sizeof(USB_PORT_EXT_STATUS_AND_CHANGE) == sizeof(ULONG64));
typedef union _USB_HUB_30_PORT_REMOTE_WAKE_MASK {
    UCHAR AsUchar8;
    struct {
        UCHAR ConnectRemoteWakeEnable:1;
        UCHAR DisconnectRemoteWakeEnable:1;
        UCHAR OverCurrentRemoteWakeEnable:1;
        UCHAR Reserved0:5;
    };
} USB_HUB_30_PORT_REMOTE_WAKE_MASK, *PUSB_HUB_30_PORT_REMOTE_WAKE_MASK;
C_ASSERT(sizeof(USB_HUB_30_PORT_REMOTE_WAKE_MASK) == sizeof(UCHAR));
typedef union _USB_FUNCTION_SUSPEND_OPTIONS {
    UCHAR AsUchar;
    struct {
        UCHAR PowerState:1;
        UCHAR RemoteWakeEnabled:1;
        UCHAR Reserved:6;
    };
} USB_FUNCTION_SUSPEND_OPTIONS, *PUSB_FUNCTION_SUSPEND_OPTIONS;
C_ASSERT(sizeof(USB_FUNCTION_SUSPEND_OPTIONS) == sizeof(UCHAR));
typedef struct _USB_CONFIGURATION_POWER_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR SelfPowerConsumedD0[3];
    UCHAR bPowerSummaryId;
    UCHAR bBusPowerSavingD1;
    UCHAR bSelfPowerSavingD1;
    UCHAR bBusPowerSavingD2;
    UCHAR bSelfPowerSavingD2;
    UCHAR bBusPowerSavingD3;
    UCHAR bSelfPowerSavingD3;
    USHORT TransitionTimeFromD1;
    USHORT TransitionTimeFromD2;
    USHORT TransitionTimeFromD3;
} USB_CONFIGURATION_POWER_DESCRIPTOR, *PUSB_CONFIGURATION_POWER_DESCRIPTOR;
typedef struct _USB_INTERFACE_POWER_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR bmCapabilitiesFlags;
    UCHAR bBusPowerSavingD1;
    UCHAR bSelfPowerSavingD1;
    UCHAR bBusPowerSavingD2;
    UCHAR bSelfPowerSavingD2;
    UCHAR bBusPowerSavingD3;
    UCHAR bSelfPowerSavingD3;
    USHORT TransitionTimeFromD1;
    USHORT TransitionTimeFromD2;
    USHORT TransitionTimeFromD3;
} USB_INTERFACE_POWER_DESCRIPTOR, *PUSB_INTERFACE_POWER_DESCRIPTOR;
#include <POPPACK.H>
#endif
#pragma endregion
