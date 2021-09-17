#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma pack(push,8)
 #define MAX_NUM_PIPES 8
typedef struct _DRV_VERSION {
    _Out_ unsigned major;
    _Out_ unsigned minor;
    _Out_ unsigned internal;
} DRV_VERSION, *PDRV_VERSION;
typedef struct _IO_BLOCK {
    _In_ unsigned uOffset;
    _In_ unsigned uLength;
    _Inout_updates_bytes_(uLength) PUCHAR pbyData;
    _In_ unsigned uIndex;
} IO_BLOCK, *PIO_BLOCK;
typedef struct _IO_BLOCK_EX {
    _In_ unsigned uOffset;
    _In_ unsigned uLength;
    _Inout_updates_bytes_(uLength) PUCHAR pbyData;
    _In_ unsigned uIndex;
    _In_ UCHAR bRequest;
    _In_ UCHAR bmRequestType;
    _In_ UCHAR fTransferDirectionIn;
} IO_BLOCK_EX, *PIO_BLOCK_EX;
typedef struct _CHANNEL_INFO {
    _Out_ unsigned EventChannelSize;
    _Out_ unsigned uReadDataAlignment;
    _Out_ unsigned uWriteDataAlignment;
} CHANNEL_INFO, *PCHANNEL_INFO;
typedef enum {
    EVENT_PIPE,
    READ_DATA_PIPE,
    WRITE_DATA_PIPE,
    ALL_PIPE
} PIPE_TYPE;
typedef struct _USBSCAN_GET_DESCRIPTOR {
    _In_ UCHAR DescriptorType;
    _In_ UCHAR Index;
    _In_ USHORT LanguageId;
} USBSCAN_GET_DESCRIPTOR, *PUSBSCAN_GET_DESCRIPTOR;
typedef struct _DEVICE_DESCRIPTOR {
    _Out_ USHORT usVendorId;
    _Out_ USHORT usProductId;
    _Out_ USHORT usBcdDevice;
    _Out_ USHORT usLanguageId;
} DEVICE_DESCRIPTOR, *PDEVICE_DESCRIPTOR;
typedef enum _RAW_PIPE_TYPE {
    USBSCAN_PIPE_CONTROL,
    USBSCAN_PIPE_ISOCHRONOUS,
    USBSCAN_PIPE_BULK,
    USBSCAN_PIPE_INTERRUPT
} RAW_PIPE_TYPE;
typedef struct _USBSCAN_PIPE_INFORMATION {
    USHORT MaximumPacketSize;
    UCHAR EndpointAddress;
    UCHAR Interval;
    RAW_PIPE_TYPE PipeType;
} USBSCAN_PIPE_INFORMATION, *PUSBSCAN_PIPE_INFORMATION;
typedef struct _USBSCAN_PIPE_CONFIGURATION {
    _Out_ ULONG NumberOfPipes;
    _Out_writes_(NumberOfPipes) USBSCAN_PIPE_INFORMATION PipeInfo[MAX_NUM_PIPES];
} USBSCAN_PIPE_CONFIGURATION, *PUSBSCAN_PIPE_CONFIGURATION;
typedef struct _USBSCAN_TIMEOUT {
    ULONG TimeoutRead;
    ULONG TimeoutWrite;
    ULONG TimeoutEvent;
} USBSCAN_TIMEOUT, *PUSBSCAN_TIMEOUT;
#pragma pack(pop)
#endif
#pragma endregion
