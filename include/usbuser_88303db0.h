#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include "usbiodef.h"
#include <PSHPACK1.H>
typedef enum _USB_USER_ERROR_CODE {
    UsbUserSuccess = 0,
    UsbUserNotSupported,
    UsbUserInvalidRequestCode,
    UsbUserFeatureDisabled,
    UsbUserInvalidHeaderParameter,
    UsbUserInvalidParameter,
    UsbUserMiniportError,
    UsbUserBufferTooSmall,
    UsbUserErrorNotMapped,
    UsbUserDeviceNotStarted,
    UsbUserNoDeviceConnected
} USB_USER_ERROR_CODE;
typedef struct _USBUSER_REQUEST_HEADER {
    ULONG UsbUserRequest;
    USB_USER_ERROR_CODE UsbUserStatusCode;
    ULONG RequestBufferLength;
    ULONG ActualBufferLength;
} USBUSER_REQUEST_HEADER, *PUSBUSER_REQUEST_HEADER;
typedef struct _PACKET_PARAMETERS {
    UCHAR DeviceAddress;
    UCHAR EndpointAddress;
    USHORT MaximumPacketSize;
    ULONG Timeout;
    ULONG Flags;
    ULONG DataLength;
    USHORT HubDeviceAddress;
    USHORT PortTTNumber;
    UCHAR ErrorCount;
    UCHAR Pad[3];
    USBD_STATUS UsbdStatusCode;
    UCHAR Data[4];
} PACKET_PARAMETERS, *PPACKET_PARAMETERS;
typedef struct _USBUSER_SEND_ONE_PACKET {
    USBUSER_REQUEST_HEADER Header;
    PACKET_PARAMETERS PacketParameters;
} USBUSER_SEND_ONE_PACKET, *PUSBUSER_SEND_ONE_PACKET;
typedef struct _RAW_RESET_PORT_PARAMETERS {
    USHORT PortNumber;
    USHORT PortStatus;
} RAW_RESET_PORT_PARAMETERS, *PRAW_RESET_PORT_PARAMETERS;
typedef struct _USBUSER_RAW_RESET_ROOT_PORT {
    USBUSER_REQUEST_HEADER Header;
    RAW_RESET_PORT_PARAMETERS Parameters;
} USBUSER_RAW_RESET_ROOT_PORT, *PUSBUSER_RAW_RESET_ROOT_PORT;
typedef struct _RAW_ROOTPORT_FEATURE {
    USHORT PortNumber;
    USHORT PortFeature;
    USHORT PortStatus;
} RAW_ROOTPORT_FEATURE, *PRAW_ROOTPORT_FEATURE;
typedef struct _USBUSER_ROOTPORT_FEATURE_REQUEST {
    USBUSER_REQUEST_HEADER Header;
    RAW_ROOTPORT_FEATURE Parameters;
} USBUSER_ROOTPORT_FEATURE_REQUEST, *PUSBUSER_ROOTPORT_FEATURE_REQUEST;
typedef struct _RAW_ROOTPORT_PARAMETERS {
    USHORT PortNumber;
    USHORT PortStatus;
} RAW_ROOTPORT_PARAMETERS, *PRAW_ROOTPORT_PARAMETERS;
typedef struct _USBUSER_ROOTPORT_PARAMETERS {
    USBUSER_REQUEST_HEADER Header;
    RAW_ROOTPORT_PARAMETERS Parameters;
} USBUSER_ROOTPORT_PARAMETERS, *PUSBUSER_ROOTPORT_PARAMETERS;
typedef struct _USB_CONTROLLER_INFO_0 {
    ULONG PciVendorId;
    ULONG PciDeviceId;
    ULONG PciRevision;
    ULONG NumberOfRootPorts;
    USB_CONTROLLER_FLAVOR ControllerFlavor;
    ULONG HcFeatureFlags;
} USB_CONTROLLER_INFO_0 , *PUSB_CONTROLLER_INFO_0;
typedef struct _USBUSER_CONTROLLER_INFO_0 {
    USBUSER_REQUEST_HEADER Header;
    USB_CONTROLLER_INFO_0 Info0;
} USBUSER_CONTROLLER_INFO_0, *PUSBUSER_CONTROLLER_INFO_0;
typedef struct _USB_UNICODE_NAME {
    ULONG Length;
    WCHAR String[1];
} USB_UNICODE_NAME, *PUSB_UNICODE_NAME;
typedef struct _USBUSER_CONTROLLER_UNICODE_NAME {
    USBUSER_REQUEST_HEADER Header;
    USB_UNICODE_NAME UnicodeName;
} USBUSER_CONTROLLER_UNICODE_NAME, *PUSBUSER_CONTROLLER_UNICODE_NAME;
typedef struct _USB_PASS_THRU_PARAMETERS {
    GUID FunctionGUID;
    ULONG ParameterLength;
    UCHAR Parameters[4];
} USB_PASS_THRU_PARAMETERS, *PUSB_PASS_THRU_PARAMETERS;
typedef struct _USBUSER_PASS_THRU_REQUEST {
    USBUSER_REQUEST_HEADER Header;
    USB_PASS_THRU_PARAMETERS PassThru;
} USBUSER_PASS_THRU_REQUEST, *PUSBUSER_PASS_THRU_REQUEST;
typedef enum _WDMUSB_POWER_STATE {
    WdmUsbPowerNotMapped = 0,
    WdmUsbPowerSystemUnspecified = 100,
    WdmUsbPowerSystemWorking,
    WdmUsbPowerSystemSleeping1,
    WdmUsbPowerSystemSleeping2,
    WdmUsbPowerSystemSleeping3,
    WdmUsbPowerSystemHibernate,
    WdmUsbPowerSystemShutdown,
    WdmUsbPowerDeviceUnspecified = 200,
    WdmUsbPowerDeviceD0,
    WdmUsbPowerDeviceD1,
    WdmUsbPowerDeviceD2,
    WdmUsbPowerDeviceD3
} WDMUSB_POWER_STATE;
typedef struct _USB_POWER_INFO {
    WDMUSB_POWER_STATE SystemState;
    WDMUSB_POWER_STATE HcDevicePowerState;
    WDMUSB_POWER_STATE HcDeviceWake;
    WDMUSB_POWER_STATE HcSystemWake;
    WDMUSB_POWER_STATE RhDevicePowerState;
    WDMUSB_POWER_STATE RhDeviceWake;
    WDMUSB_POWER_STATE RhSystemWake;
    WDMUSB_POWER_STATE LastSystemSleepState;
    BOOLEAN CanWakeup;
    BOOLEAN IsPowered;
} USB_POWER_INFO, *PUSB_POWER_INFO;
typedef struct _USBUSER_POWER_INFO_REQUEST {
    USBUSER_REQUEST_HEADER Header;
    USB_POWER_INFO PowerInformation;
} USBUSER_POWER_INFO_REQUEST, *PUSBUSER_POWER_INFO_REQUEST;
typedef struct _USB_OPEN_RAW_DEVICE_PARAMETERS {
    USHORT PortStatus;
    USHORT MaxPacketEp0;
} USB_OPEN_RAW_DEVICE_PARAMETERS , *PUSB_OPEN_RAW_DEVICE_PARAMETERS;
typedef struct _USBUSER_OPEN_RAW_DEVICE {
    USBUSER_REQUEST_HEADER Header;
    USB_OPEN_RAW_DEVICE_PARAMETERS Parameters;
} USBUSER_OPEN_RAW_DEVICE, *PUSBUSER_OPEN_RAW_DEVICE;
typedef struct _USB_CLOSE_RAW_DEVICE_PARAMETERS {
    ULONG xxx;
} USB_CLOSE_RAW_DEVICE_PARAMETERS , *PUSB_CLOSE_RAW_DEVICE_PARAMETERS;
typedef struct _USBUSER_CLOSE_RAW_DEVICE {
    USBUSER_REQUEST_HEADER Header;
    USB_CLOSE_RAW_DEVICE_PARAMETERS Parameters;
} USBUSER_CLOSE_RAW_DEVICE, *PUSBUSER_CLOSE_RAW_DEVICE;
typedef struct _USB_SEND_RAW_COMMAND_PARAMETERS {
    UCHAR Usb_bmRequest;
    UCHAR Usb_bRequest;
    USHORT Usb_wVlaue;
    USHORT Usb_wIndex;
    USHORT Usb_wLength;
    USHORT DeviceAddress;
    USHORT MaximumPacketSize;
    ULONG Timeout;
    ULONG DataLength;
    USBD_STATUS UsbdStatusCode;
    UCHAR Data[4];
} USB_SEND_RAW_COMMAND_PARAMETERS, *PUSB_SEND_RAW_COMMAND_PARAMETERS;
typedef struct _USBUSER_SEND_RAW_COMMAND {
    USBUSER_REQUEST_HEADER Header;
    USB_SEND_RAW_COMMAND_PARAMETERS Parameters;
} USBUSER_SEND_RAW_COMMAND, *PUSBUSER_SEND_RAW_COMMAND;
typedef struct _USB_BANDWIDTH_INFO {
    ULONG DeviceCount;
    ULONG TotalBusBandwidth;
    ULONG Total32secBandwidth;
    ULONG AllocedBulkAndControl;
    ULONG AllocedIso;
    ULONG AllocedInterrupt_1ms;
    ULONG AllocedInterrupt_2ms;
    ULONG AllocedInterrupt_4ms;
    ULONG AllocedInterrupt_8ms;
    ULONG AllocedInterrupt_16ms;
    ULONG AllocedInterrupt_32ms;
} USB_BANDWIDTH_INFO, *PUSB_BANDWIDTH_INFO;
typedef struct _USBUSER_BANDWIDTH_INFO_REQUEST {
    USBUSER_REQUEST_HEADER Header;
    USB_BANDWIDTH_INFO BandwidthInformation;
} USBUSER_BANDWIDTH_INFO_REQUEST, *PUSBUSER_BANDWIDTH_INFO_REQUEST;
typedef struct _USB_BUS_STATISTICS_0 {
    ULONG DeviceCount;
    LARGE_INTEGER CurrentSystemTime;
    ULONG CurrentUsbFrame;
    ULONG BulkBytes;
    ULONG IsoBytes;
    ULONG InterruptBytes;
    ULONG ControlDataBytes;
    ULONG PciInterruptCount;
    ULONG HardResetCount;
    ULONG WorkerSignalCount;
    ULONG CommonBufferBytes;
    ULONG WorkerIdleTimeMs;
    BOOLEAN RootHubEnabled;
    UCHAR RootHubDevicePowerState;
    UCHAR Unused;
    UCHAR NameIndex;
} USB_BUS_STATISTICS_0, *PUSB_BUS_STATISTICS_0;
typedef struct _USBUSER_BUS_STATISTICS_0_REQUEST {
    USBUSER_REQUEST_HEADER Header;
    USB_BUS_STATISTICS_0 BusStatistics0;
} USBUSER_BUS_STATISTICS_0_REQUEST, *PUSBUSER_BUS_STATISTICS_0_REQUEST;
typedef struct _USB_DRIVER_VERSION_PARAMETERS {
    ULONG DriverTrackingCode;
    ULONG USBDI_Version;
    ULONG USBUSER_Version;
    BOOLEAN CheckedPortDriver;
    BOOLEAN CheckedMiniportDriver;
    USHORT USB_Version;
} USB_DRIVER_VERSION_PARAMETERS , *PUSB_DRIVER_VERSION_PARAMETERS;
typedef struct _USBUSER_GET_DRIVER_VERSION {
    USBUSER_REQUEST_HEADER Header;
    USB_DRIVER_VERSION_PARAMETERS Parameters;
} USBUSER_GET_DRIVER_VERSION, *PUSBUSER_GET_DRIVER_VERSION;
typedef struct _USB_USB2HW_VERSION_PARAMETERS {
    UCHAR Usb2HwRevision;
} USB_USB2HW_VERSION_PARAMETERS, *PUSB_USB2HW_VERSION_PARAMETERS;
typedef struct _USBUSER_GET_USB2HW_VERSION {
    USBUSER_REQUEST_HEADER Header;
    USB_USB2HW_VERSION_PARAMETERS Parameters;
} USBUSER_GET_USB2HW_VERSION, *PUSBUSER_GET_USB2HW_VERSION;
typedef struct _USBUSER_REFRESH_HCT_REG {
    USBUSER_REQUEST_HEADER Header;
    ULONG Flags;
} USBUSER_REFRESH_HCT_REG, *PUSBUSER_REFRESH_HCT_REG;
#include <POPPACK.H>
#endif
#pragma endregion
