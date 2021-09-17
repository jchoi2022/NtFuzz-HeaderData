#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef LARGE_INTEGER PHYSICAL_ADDRESS;
typedef PVOID PIRP;
typedef PVOID PMDL;
#include "usbspec.h"
#pragma warning(disable:4201)
#pragma warning(disable:4214)
typedef enum _USB_CONTROLLER_FLAVOR {
    USB_HcGeneric = 0,
    OHCI_Generic = 100,
    OHCI_Hydra,
    OHCI_NEC,
    UHCI_Generic = 200,
    UHCI_Piix4 = 201,
    UHCI_Piix3 = 202,
    UHCI_Ich2 = 203,
    UHCI_Reserved204 = 204,
    UHCI_Ich1 = 205,
    UHCI_Ich3m = 206,
    UHCI_Ich4 = 207,
    UHCI_Ich5 = 208,
    UHCI_Ich6 = 209,
    UHCI_Intel = 249,
    UHCI_VIA = 250,
    UHCI_VIA_x01 = 251,
    UHCI_VIA_x02 = 252,
    UHCI_VIA_x03 = 253,
    UHCI_VIA_x04 = 254,
    UHCI_VIA_x0E_FIFO = 264,
    EHCI_Generic = 1000,
    EHCI_NEC = 2000,
    EHCI_Lucent = 3000,
    EHCI_NVIDIA_Tegra2 = 4000,
    EHCI_NVIDIA_Tegra3 = 4001,
    EHCI_Intel_Medfield = 5001
} USB_CONTROLLER_FLAVOR;
    URB_FUNCTION_SYNC_RESET_PIPE_AND_CLEAR_STALL
                                               USBD_TRANSFER_DIRECTION | \
                                               USBD_START_ISO_TRANSFER_ASAP | \
                                               USBD_DEFAULT_PIPE_TRANSFER)
typedef LONG USBD_STATUS;
                                             ((USBD_STATUS)0xC0000F00L)
                                             ((USBD_STATUS)0xC0000F00L)
                                             ((USBD_STATUS)0xC0100005L)
typedef PVOID USBD_PIPE_HANDLE;
typedef PVOID USBD_CONFIGURATION_HANDLE;
typedef PVOID USBD_INTERFACE_HANDLE;
typedef struct _USBD_VERSION_INFORMATION {
    ULONG USBDI_Version;
    ULONG Supported_USB_Version;
} USBD_VERSION_INFORMATION, *PUSBD_VERSION_INFORMATION;
typedef enum _USBD_PIPE_TYPE {
    UsbdPipeTypeControl,
    UsbdPipeTypeIsochronous,
    UsbdPipeTypeBulk,
    UsbdPipeTypeInterrupt
} USBD_PIPE_TYPE;
                                                  USB_ENDPOINT_DIRECTION_MASK)
typedef struct _USBD_DEVICE_INFORMATION {
    ULONG OffsetNext;
    PVOID UsbdDeviceHandle;
    USB_DEVICE_DESCRIPTOR DeviceDescriptor;
} USBD_DEVICE_INFORMATION, *PUSBD_DEVICE_INFORMATION;
typedef struct _USBD_PIPE_INFORMATION {
    USHORT MaximumPacketSize;
    UCHAR EndpointAddress;
    UCHAR Interval;
    USBD_PIPE_TYPE PipeType;
    USBD_PIPE_HANDLE PipeHandle;
    ULONG MaximumTransferSize;
    ULONG PipeFlags;
} USBD_PIPE_INFORMATION, *PUSBD_PIPE_INFORMATION;
                               USBD_PF_SHORT_PACKET_OPT | \
                               USBD_PF_ENABLE_RT_THREAD_ACCESS | \
                               USBD_PF_MAP_ADD_TRANSFERS | \
                               USBD_PF_VIDEO_PRIORITY | \
                               USBD_PF_VOICE_PRIORITY | \
                               USBD_PF_INTERACTIVE_PRIORITY)
typedef enum _USBD_ENDPOINT_OFFLOAD_MODE {
    UsbdEndpointOffloadModeNotSupported = 0,
    UsbdEndpointOffloadSoftwareAssisted,
    UsbdEndpointOffloadHardwareAssisted
} USBD_ENDPOINT_OFFLOAD_MODE;
#pragma pack(push)
#pragma pack(1)
typedef struct _USBD_ENDPOINT_OFFLOAD_INFORMATION {
    ULONG Size;
    USHORT EndpointAddress;
    ULONG ResourceId;
    USBD_ENDPOINT_OFFLOAD_MODE Mode;
    ULONG RootHubPortNumber:8;
    ULONG RouteString:20;
    ULONG Speed:4;
    ULONG UsbDeviceAddress:8;
    ULONG SlotId:8;
    ULONG MultiTT:1;
    ULONG LSOrFSDeviceConnectedToTTHub:1;
    ULONG Reserved0:14;
    PHYSICAL_ADDRESS TransferSegmentLA;
    PVOID TransferSegmentVA;
    size_t TransferRingSize;
    ULONG TransferRingInitialCycleBit;
    ULONG MessageNumber;
    PHYSICAL_ADDRESS EventRingSegmentLA;
    PVOID EventRingSegmentVA;
    size_t EventRingSize;
    ULONG EventRingInitialCycleBit;
} USBD_ENDPOINT_OFFLOAD_INFORMATION, *PUSBD_ENDPOINT_OFFLOAD_INFORMATION;
#pragma pack(pop)
typedef struct _USBD_INTERFACE_INFORMATION {
    USHORT Length;
    UCHAR InterfaceNumber;
    UCHAR AlternateSetting;
    UCHAR Class;
    UCHAR SubClass;
    UCHAR Protocol;
    UCHAR Reserved;
    USBD_INTERFACE_HANDLE InterfaceHandle;
    ULONG NumberOfPipes;
    USBD_PIPE_INFORMATION Pipes[1];
} USBD_INTERFACE_INFORMATION, *PUSBD_INTERFACE_INFORMATION;
struct _URB_HCD_AREA {
    PVOID Reserved8[8];
};
struct _URB_HEADER {
    USHORT Length;
    USHORT Function;
    USBD_STATUS Status;
    PVOID UsbdDeviceHandle;
    ULONG UsbdFlags;
};
struct _URB_SELECT_INTERFACE {
    struct _URB_HEADER Hdr;
    USBD_CONFIGURATION_HANDLE ConfigurationHandle;
    USBD_INTERFACE_INFORMATION Interface;
};
struct _URB_SELECT_CONFIGURATION {
    struct _URB_HEADER Hdr;
    PUSB_CONFIGURATION_DESCRIPTOR ConfigurationDescriptor;
    USBD_CONFIGURATION_HANDLE ConfigurationHandle;
    USBD_INTERFACE_INFORMATION Interface;
};
struct _URB_PIPE_REQUEST {
    struct _URB_HEADER Hdr;
    USBD_PIPE_HANDLE PipeHandle;
    ULONG Reserved;
};
struct _URB_FRAME_LENGTH_CONTROL {
    struct _URB_HEADER Hdr;
};
struct _URB_GET_FRAME_LENGTH {
    struct _URB_HEADER Hdr;
    ULONG FrameLength;
    ULONG FrameNumber;
};
struct _URB_SET_FRAME_LENGTH {
    struct _URB_HEADER Hdr;
    LONG FrameLengthDelta;
};
struct _URB_GET_CURRENT_FRAME_NUMBER {
    struct _URB_HEADER Hdr;
    ULONG FrameNumber;
};
struct _URB_CONTROL_DESCRIPTOR_REQUEST {
    struct _URB_HEADER Hdr;
    PVOID Reserved;
    ULONG Reserved0;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    PMDL TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    USHORT Reserved1;
    UCHAR Index;
    UCHAR DescriptorType;
    USHORT LanguageId;
    USHORT Reserved2;
};
struct _URB_CONTROL_GET_STATUS_REQUEST {
    struct _URB_HEADER Hdr;
    PVOID Reserved;
    ULONG Reserved0;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    PMDL TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    UCHAR Reserved1[4];
    USHORT Index;
    USHORT Reserved2;
};
struct _URB_CONTROL_FEATURE_REQUEST {
    struct _URB_HEADER Hdr;
    PVOID Reserved;
    ULONG Reserved2;
    ULONG Reserved3;
    PVOID Reserved4;
    PMDL Reserved5;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    USHORT Reserved0;
    USHORT FeatureSelector;
    USHORT Index;
    USHORT Reserved1;
};
struct _URB_CONTROL_VENDOR_OR_CLASS_REQUEST {
    struct _URB_HEADER Hdr;
    PVOID Reserved;
    ULONG TransferFlags;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    PMDL TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    UCHAR RequestTypeReservedBits;
    UCHAR Request;
    USHORT Value;
    USHORT Index;
    USHORT Reserved1;
};
struct _URB_CONTROL_GET_INTERFACE_REQUEST {
    struct _URB_HEADER Hdr;
    PVOID Reserved;
    ULONG Reserved0;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    PMDL TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    UCHAR Reserved1[4];
    USHORT Interface;
    USHORT Reserved2;
};
struct _URB_CONTROL_GET_CONFIGURATION_REQUEST {
    struct _URB_HEADER Hdr;
    PVOID Reserved;
    ULONG Reserved0;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    PMDL TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    UCHAR Reserved1[8];
};
typedef struct _OS_STRING {
    UCHAR bLength;
    UCHAR bDescriptorType;
    WCHAR MicrosoftString[7];
    UCHAR bVendorCode;
    union {
        UCHAR bPad;
        UCHAR bFlags;
    };
} OS_STRING, *POS_STRING;
struct _URB_OS_FEATURE_DESCRIPTOR_REQUEST {
    struct _URB_HEADER Hdr;
    PVOID Reserved;
    ULONG Reserved0;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    PMDL TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    UCHAR Recipient:5;
    UCHAR Reserved1:3;
    UCHAR Reserved2;
    UCHAR InterfaceNumber;
    UCHAR MS_PageIndex;
    USHORT MS_FeatureDescriptorIndex;
    USHORT Reserved3;
};
struct _URB_CONTROL_TRANSFER {
    struct _URB_HEADER Hdr;
    USBD_PIPE_HANDLE PipeHandle;
    ULONG TransferFlags;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    PMDL TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    UCHAR SetupPacket[8];
};
struct _URB_CONTROL_TRANSFER_EX {
    struct _URB_HEADER Hdr;
    USBD_PIPE_HANDLE PipeHandle;
    ULONG TransferFlags;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    PMDL TransferBufferMDL;
    ULONG Timeout;
    ULONG Pad;
    struct _URB_HCD_AREA hca;
    UCHAR SetupPacket[8];
};
struct _URB_BULK_OR_INTERRUPT_TRANSFER {
    struct _URB_HEADER Hdr;
    USBD_PIPE_HANDLE PipeHandle;
    ULONG TransferFlags;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    PMDL TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
};
typedef struct _USBD_ISO_PACKET_DESCRIPTOR {
    ULONG Offset;
    ULONG Length;
    USBD_STATUS Status;
} USBD_ISO_PACKET_DESCRIPTOR, *PUSBD_ISO_PACKET_DESCRIPTOR;
struct _URB_ISOCH_TRANSFER {
    struct _URB_HEADER Hdr;
    USBD_PIPE_HANDLE PipeHandle;
    ULONG TransferFlags;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    PMDL TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    ULONG StartFrame;
    ULONG NumberOfPackets;
    ULONG ErrorCount;
    USBD_ISO_PACKET_DESCRIPTOR IsoPacket[1];
};
typedef struct _USBD_STREAM_INFORMATION {
    USBD_PIPE_HANDLE PipeHandle;
    ULONG StreamID;
    ULONG MaximumTransferSize;
    ULONG PipeFlags;
} USBD_STREAM_INFORMATION, *PUSBD_STREAM_INFORMATION;
struct _URB_OPEN_STATIC_STREAMS {
    struct _URB_HEADER Hdr;
    USBD_PIPE_HANDLE PipeHandle;
    ULONG NumberOfStreams;
    USHORT StreamInfoVersion;
    USHORT StreamInfoSize;
    PUSBD_STREAM_INFORMATION Streams;
};
struct _URB_GET_ISOCH_PIPE_TRANSFER_PATH_DELAYS {
    struct _URB_HEADER Hdr;
    USBD_PIPE_HANDLE PipeHandle;
    ULONG MaximumSendPathDelayInMilliSeconds;
    ULONG MaximumCompletionPathDelayInMilliSeconds;
};
typedef _Struct_size_bytes_(UrbHeader.Length) struct _URB {
    union {
        struct _URB_HEADER
            UrbHeader;
        struct _URB_SELECT_INTERFACE
            UrbSelectInterface;
        struct _URB_SELECT_CONFIGURATION
            UrbSelectConfiguration;
        struct _URB_PIPE_REQUEST
            UrbPipeRequest;
        struct _URB_FRAME_LENGTH_CONTROL
            UrbFrameLengthControl;
        struct _URB_GET_FRAME_LENGTH
            UrbGetFrameLength;
        struct _URB_SET_FRAME_LENGTH
            UrbSetFrameLength;
        struct _URB_GET_CURRENT_FRAME_NUMBER
            UrbGetCurrentFrameNumber;
        struct _URB_CONTROL_TRANSFER
            UrbControlTransfer;
        struct _URB_CONTROL_TRANSFER_EX
            UrbControlTransferEx;
        struct _URB_BULK_OR_INTERRUPT_TRANSFER
            UrbBulkOrInterruptTransfer;
        struct _URB_ISOCH_TRANSFER
            UrbIsochronousTransfer;
        struct _URB_CONTROL_DESCRIPTOR_REQUEST
            UrbControlDescriptorRequest;
        struct _URB_CONTROL_GET_STATUS_REQUEST
            UrbControlGetStatusRequest;
        struct _URB_CONTROL_FEATURE_REQUEST
            UrbControlFeatureRequest;
        struct _URB_CONTROL_VENDOR_OR_CLASS_REQUEST
            UrbControlVendorClassRequest;
        struct _URB_CONTROL_GET_INTERFACE_REQUEST
            UrbControlGetInterfaceRequest;
        struct _URB_CONTROL_GET_CONFIGURATION_REQUEST
            UrbControlGetConfigurationRequest;
        struct _URB_OS_FEATURE_DESCRIPTOR_REQUEST
            UrbOSFeatureDescriptorRequest;
        struct _URB_OPEN_STATIC_STREAMS
            UrbOpenStaticStreams;
        struct _URB_GET_ISOCH_PIPE_TRANSFER_PATH_DELAYS
            UrbGetIsochPipeTransferPathDelays;
    };
} URB, *PURB;
#endif
#pragma endregion
