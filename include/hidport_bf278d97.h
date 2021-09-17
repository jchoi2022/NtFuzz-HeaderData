#include <hidclass.h>
typedef struct _HID_MINIDRIVER_REGISTRATION {
    ULONG Revision;
    PDRIVER_OBJECT DriverObject;
    PUNICODE_STRING RegistryPath;
    ULONG DeviceExtensionSize;
    BOOLEAN DevicesArePolled;
    UCHAR Reserved[3];
} HID_MINIDRIVER_REGISTRATION, *PHID_MINIDRIVER_REGISTRATION;
typedef struct _HID_DEVICE_EXTENSION {
    PDEVICE_OBJECT PhysicalDeviceObject;
    PDEVICE_OBJECT NextDeviceObject;
    PVOID MiniDeviceExtension;
} HID_DEVICE_EXTENSION, *PHID_DEVICE_EXTENSION;
typedef struct _HID_DEVICE_ATTRIBUTES {
    ULONG Size;
    USHORT VendorID;
    USHORT ProductID;
    USHORT VersionNumber;
    USHORT Reserved[11];
} HID_DEVICE_ATTRIBUTES, * PHID_DEVICE_ATTRIBUTES;
#include <pshpack1.h>
typedef struct _HID_DESCRIPTOR
{
    UCHAR bLength;
    UCHAR bDescriptorType;
    USHORT bcdHID;
    UCHAR bCountry;
    UCHAR bNumDescriptors;
    struct _HID_DESCRIPTOR_DESC_LIST {
       UCHAR bReportType;
       USHORT wReportLength;
    } DescriptorList [1];
} HID_DESCRIPTOR, * PHID_DESCRIPTOR;
#include <poppack.h>
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS
HidRegisterMinidriver(
    _In_ PHID_MINIDRIVER_REGISTRATION MinidriverRegistration
    );
NTSTATUS
HidNotifyPresence(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ BOOLEAN IsPresent
    );
typedef VOID (*HID_SEND_IDLE_CALLBACK)( _In_ PVOID Context);
typedef struct _HID_SUBMIT_IDLE_NOTIFICATION_CALLBACK_INFO {
    HID_SEND_IDLE_CALLBACK IdleCallback;
    PVOID IdleContext;
} HID_SUBMIT_IDLE_NOTIFICATION_CALLBACK_INFO, *PHID_SUBMIT_IDLE_NOTIFICATION_CALLBACK_INFO;
