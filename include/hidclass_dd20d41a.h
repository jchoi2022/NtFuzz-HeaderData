#include <basetyps.h>
#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
DEFINE_GUID( GUID_DEVINTERFACE_HID, 0x4D1E55B2L, 0xF16F, 0x11CF, 0x88, 0xCB, 0x00, 0x11, 0x11, 0x00, 0x00, 0x30);
DEFINE_GUID( GUID_HID_INTERFACE_NOTIFY, 0x2c4e2e88L, 0x25e6, 0x4c33, 0x88, 0x2f, 0x3d, 0x82, 0xe6, 0x07, 0x36, 0x81 );
DEFINE_GUID( GUID_HID_INTERFACE_HIDPARSE, 0xf5c315a5, 0x69ac, 0x4bc2, 0x92, 0x79, 0xd0, 0xb6, 0x45, 0x76, 0xf4, 0x4b );
DEFINE_DEVPROPKEY(DEVPKEY_DeviceInterface_HID_UsagePage, 0xcbf38310, 0x4a17, 0x4310, 0xa1, 0xeb, 0x24, 0x7f, 0xb, 0x67, 0x59, 0x3b, 2);
DEFINE_DEVPROPKEY(DEVPKEY_DeviceInterface_HID_UsageId, 0xcbf38310, 0x4a17, 0x4310, 0xa1, 0xeb, 0x24, 0x7f, 0xb, 0x67, 0x59, 0x3b, 3);
DEFINE_DEVPROPKEY(DEVPKEY_DeviceInterface_HID_IsReadOnly, 0xcbf38310, 0x4a17, 0x4310, 0xa1, 0xeb, 0x24, 0x7f, 0xb, 0x67, 0x59, 0x3b, 4);
DEFINE_DEVPROPKEY(DEVPKEY_DeviceInterface_HID_VendorId, 0xcbf38310, 0x4a17, 0x4310, 0xa1, 0xeb, 0x24, 0x7f, 0xb, 0x67, 0x59, 0x3b, 5);
DEFINE_DEVPROPKEY(DEVPKEY_DeviceInterface_HID_ProductId, 0xcbf38310, 0x4a17, 0x4310, 0xa1, 0xeb, 0x24, 0x7f, 0xb, 0x67, 0x59, 0x3b, 6);
DEFINE_DEVPROPKEY(DEVPKEY_DeviceInterface_HID_VersionNumber, 0xcbf38310, 0x4a17, 0x4310, 0xa1, 0xeb, 0x24, 0x7f, 0xb, 0x67, 0x59, 0x3b, 7);
DEFINE_DEVPROPKEY(DEVPKEY_DeviceInterface_HID_BackgroundAccess, 0xcbf38310, 0x4a17, 0x4310, 0xa1, 0xeb, 0x24, 0x7f, 0xb, 0x67, 0x59, 0x3b, 8);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma warning(disable:4201)
typedef struct _HID_XFER_PACKET {
    PUCHAR reportBuffer;
    ULONG reportBufferLen;
    UCHAR reportId;
} HID_XFER_PACKET, *PHID_XFER_PACKET;
enum DeviceObjectState {
    DeviceObjectStarted,
    DeviceObjectStopped,
    DeviceObjectRemoved
};
typedef VOID (*PHID_STATUS_CHANGE)(_In_ PVOID Context, _In_ enum DeviceObjectState State);
typedef struct _HID_INTERFACE_NOTIFY_PNP
{
    INTERFACE;
    PHID_STATUS_CHANGE StatusChangeFn;
    PVOID CallbackContext;
} HID_INTERFACE_NOTIFY_PNP, *PHID_INTERFACE_NOTIFY_PNP;
_Must_inspect_result_
typedef
NTSTATUS
(__stdcall *PHIDP_GETCAPS) (
    _In_ PHIDP_PREPARSED_DATA PreparsedData,
    _Out_ PHIDP_CAPS Capabilities
    );
typedef struct _HID_INTERFACE_HIDPARSE
{
    INTERFACE;
    PHIDP_GETCAPS HidpGetCaps;
} HID_INTERFACE_HIDPARSE, *PHID_INTERFACE_HIDPARSE;
typedef struct _HID_COLLECTION_INFORMATION {
    ULONG DescriptorSize;
    BOOLEAN Polled;
    UCHAR Reserved1[ 1 ];
    USHORT VendorID;
    USHORT ProductID;
    USHORT VersionNumber;
} HID_COLLECTION_INFORMATION, *PHID_COLLECTION_INFORMATION;
typedef struct _HID_DRIVER_CONFIG {
    ULONG Size;
    ULONG RingBufferSize;
} HID_DRIVER_CONFIG, *PHID_DRIVER_CONFIG;
#pragma warning(default:4201)
#endif
#pragma endregion
