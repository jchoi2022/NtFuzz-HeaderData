       
#include <usbspec.h>
typedef enum _USBFN_EVENT
{
    UsbfnEventMinimum = 0x0,
    UsbfnEventAttach,
    UsbfnEventReset,
    UsbfnEventDetach,
    UsbfnEventSuspend,
    UsbfnEventResume,
    UsbfnEventSetupPacket,
    UsbfnEventConfigured,
    UsbfnEventUnConfigured,
    UsbfnEventPortType,
    UsbfnEventBusTearDown,
    UsbfnEventSetInterface,
    UsbfnEventMaximum
} USBFN_EVENT, *PUSBFN_EVENT;
typedef enum _USBFN_PORT_TYPE {
    UsbfnUnknownPort = 0,
    UsbfnStandardDownstreamPort,
    UsbfnChargingDownstreamPort,
    UsbfnDedicatedChargingPort,
    UsbfnInvalidDedicatedChargingPort,
    UsbfnProprietaryDedicatedChargingPort,
    UsbfnPortTypeMaximum
} USBFN_PORT_TYPE, *PUSBFN_PORT_TYPE;
typedef enum _USBFN_BUS_SPEED
{
    UsbfnBusSpeedLow,
    UsbfnBusSpeedFull,
    UsbfnBusSpeedHigh,
    UsbfnBusSpeedSuper,
    UsbfnBusSpeedMaximum
} USBFN_BUS_SPEED, *PUSBFN_BUS_SPEED;
typedef enum _USBFN_DIRECTION
{
    UsbfnDirectionMinimum = 0x0,
    UsbfnDirectionIn,
    UsbfnDirectionOut,
    UsbfnDirectionTx = UsbfnDirectionIn,
    UsbfnDirectionRx = UsbfnDirectionOut,
    UsbfnDirectionMaximum
} USBFN_DIRECTION, *PUSBFN_DIRECTION;
typedef enum _USBFN_DEVICE_STATE {
    UsbfnDeviceStateMinimum = 0x0,
    UsbfnDeviceStateAttached,
    UsbfnDeviceStateDefault,
    UsbfnDeviceStateDetached,
    UsbfnDeviceStateAddressed,
    UsbfnDeviceStateConfigured,
    UsbfnDeviceStateSuspended,
    UsbfnDeviceStateStateMaximum
} USBFN_DEVICE_STATE, *PUSBFN_DEVICE_STATE;
typedef struct _ALTERNATE_INTERFACE {
    USHORT InterfaceNumber;
    USHORT AlternateInterfaceNumber;
} ALTERNATE_INTERFACE, *PALTERNATE_INTERFACE;
typedef struct _USBFN_NOTIFICATION
{
    USBFN_EVENT Event;
    union
    {
        USBFN_BUS_SPEED BusSpeed;
        USB_DEFAULT_PIPE_SETUP_PACKET SetupPacket;
        USHORT ConfigurationValue;
        USBFN_PORT_TYPE PortType;
        ALTERNATE_INTERFACE AlternateInterface;
    } u;
} USBFN_NOTIFICATION, *PUSBFN_NOTIFICATION;
typedef ULONG USBFNPIPEID;
typedef USBFNPIPEID *PUSBFNPIPEID;
typedef struct _USBFN_PIPE_INFORMATION {
    USB_ENDPOINT_DESCRIPTOR EpDesc;
    USBFNPIPEID PipeId;
} USBFN_PIPE_INFORMATION, *PUSBFN_PIPE_INFORMATION;
typedef struct _USBFN_CLASS_INTERFACE {
    UINT8 InterfaceNumber;
    UINT8 PipeCount;
    USBFN_PIPE_INFORMATION PipeArr[MAX_NUM_USBFN_PIPES];
} USBFN_CLASS_INTERFACE, *PUSBFN_CLASS_INTERFACE;
typedef struct _USBFN_CLASS_INFORMATION_PACKET {
    USBFN_CLASS_INTERFACE FullSpeedClassInterface;
    USBFN_CLASS_INTERFACE HighSpeedClassInterface;
    WCHAR InterfaceName[MAX_INTERFACE_NAME_LENGTH];
    WCHAR InterfaceGuid[MAX_INTERFACE_GUID_LENGTH];
    BOOLEAN HasInterfaceGuid;
    USBFN_CLASS_INTERFACE SuperSpeedClassInterface;
} USBFN_CLASS_INFORMATION_PACKET, *PUSBFN_CLASS_INFORMATION_PACKET;
typedef struct _USBFN_CLASS_INTERFACE_EX {
    UINT8 BaseInterfaceNumber;
    UINT8 InterfaceCount;
    UINT8 PipeCount;
    USBFN_PIPE_INFORMATION PipeArr[MAX_NUM_USBFN_PIPES];
} USBFN_CLASS_INTERFACE_EX, *PUSBFN_CLASS_INTERFACE_EX;
typedef struct _USBFN_CLASS_INFORMATION_PACKET_EX {
    USBFN_CLASS_INTERFACE_EX FullSpeedClassInterfaceEx;
    USBFN_CLASS_INTERFACE_EX HighSpeedClassInterfaceEx;
    USBFN_CLASS_INTERFACE_EX SuperSpeedClassInterfaceEx;
    WCHAR InterfaceName[MAX_INTERFACE_NAME_LENGTH];
    WCHAR InterfaceGuid[MAX_INTERFACE_GUID_LENGTH];
    BOOLEAN HasInterfaceGuid;
} USBFN_CLASS_INFORMATION_PACKET_EX, *PUSBFN_CLASS_INFORMATION_PACKET_EX;
typedef struct _USBFN_INTERFACE_INFO {
    UINT8 InterfaceNumber;
    USBFN_BUS_SPEED Speed;
    USHORT Size;
    UCHAR InterfaceDescriptorSet[1];
} USBFN_INTERFACE_INFO, *PUSBFN_INTERFACE_INFO;
typedef struct _USBFN_USB_STRING {
    UINT8 StringIndex;
    WCHAR UsbString[MAX_USB_STRING_LENGTH];
} USBFN_USB_STRING, *PUSBFN_USB_STRING;
typedef struct _USBFN_BUS_CONFIGURATION_INFO {
    WCHAR ConfigurationName[MAX_CONFIGURATION_NAME_LENGTH];
    BOOLEAN IsCurrent;
    BOOLEAN IsActive;
} USBFN_BUS_CONFIGURATION_INFO, *PUSBFN_BUS_CONFIGURATION_INFO;
