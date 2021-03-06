typedef PVOID PUSB_DEVICE_HANDLE;
typedef _Must_inspect_result_ NTSTATUS
    (USB_BUSIFFN *PUSB_BUSIFFN_SUBMIT_ISO_OUT_URB) (
        _In_ PVOID,
        _In_ PURB
    );
typedef VOID
    (USB_BUSIFFN *PUSB_BUSIFFN_GETUSBDI_VERSION) (
        _In_ PVOID,
        _Out_opt_ PUSBD_VERSION_INFORMATION,
        _Out_opt_ PULONG
    );
typedef _Must_inspect_result_ NTSTATUS
    (USB_BUSIFFN *PUSB_BUSIFFN_QUERY_BUS_TIME) (
        _In_ PVOID,
        _Out_opt_ PULONG
    );
typedef NTSTATUS
    (USB_BUSIFFN *PUSB_BUSIFFN_ENUM_LOG_ENTRY) (
        _In_ PVOID,
        _In_ ULONG,
        _In_ ULONG,
        _In_ ULONG,
        _In_ ULONG
    );
typedef struct _USB_BUS_INFORMATION_LEVEL_0 {
    ULONG TotalBandwidth;
    ULONG ConsumedBandwidth;
} USB_BUS_INFORMATION_LEVEL_0, *PUSB_BUS_INFORMATION_LEVEL_0;
typedef struct _USB_BUS_INFORMATION_LEVEL_1 {
    ULONG TotalBandwidth;
    ULONG ConsumedBandwidth;
    ULONG ControllerNameLength;
    WCHAR ControllerNameUnicodeString[1];
} USB_BUS_INFORMATION_LEVEL_1, *PUSB_BUS_INFORMATION_LEVEL_1;
typedef _Must_inspect_result_ NTSTATUS
    (USB_BUSIFFN *PUSB_BUSIFFN_QUERY_BUS_INFORMATION) (
        _In_ PVOID,
        _In_ ULONG,
        _Inout_ PVOID,
        _Out_ PULONG,
        _Out_opt_ PULONG
    );
typedef _Must_inspect_result_ BOOLEAN
    (USB_BUSIFFN *PUSB_BUSIFFN_IS_DEVICE_HIGH_SPEED) (
        _In_opt_ PVOID
    );
DEFINE_GUID(USB_BUS_INTERFACE_USBDI_GUID,
0xb1a96a13, 0x3de0, 0x4574, 0x9b, 0x1, 0xc0, 0x8f, 0xea, 0xb3, 0x18, 0xd6);
typedef struct _USB_BUS_INTERFACE_USBDI_V0 {
    USHORT Size;
    USHORT Version;
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PUSB_BUSIFFN_GETUSBDI_VERSION GetUSBDIVersion;
    PUSB_BUSIFFN_QUERY_BUS_TIME QueryBusTime;
    PUSB_BUSIFFN_SUBMIT_ISO_OUT_URB SubmitIsoOutUrb;
    PUSB_BUSIFFN_QUERY_BUS_INFORMATION QueryBusInformation;
} USB_BUS_INTERFACE_USBDI_V0, *PUSB_BUS_INTERFACE_USBDI_V0;
typedef struct _USB_BUS_INTERFACE_USBDI_V1 {
    USHORT Size;
    USHORT Version;
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PUSB_BUSIFFN_GETUSBDI_VERSION GetUSBDIVersion;
    PUSB_BUSIFFN_QUERY_BUS_TIME QueryBusTime;
    PUSB_BUSIFFN_SUBMIT_ISO_OUT_URB SubmitIsoOutUrb;
    PUSB_BUSIFFN_QUERY_BUS_INFORMATION QueryBusInformation;
    PUSB_BUSIFFN_IS_DEVICE_HIGH_SPEED IsDeviceHighSpeed;
} USB_BUS_INTERFACE_USBDI_V1, *PUSB_BUS_INTERFACE_USBDI_V1;
typedef struct _USB_BUS_INTERFACE_USBDI_V2 {
    USHORT Size;
    USHORT Version;
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PUSB_BUSIFFN_GETUSBDI_VERSION GetUSBDIVersion;
    PUSB_BUSIFFN_QUERY_BUS_TIME QueryBusTime;
    PUSB_BUSIFFN_SUBMIT_ISO_OUT_URB SubmitIsoOutUrb;
    PUSB_BUSIFFN_QUERY_BUS_INFORMATION QueryBusInformation;
    PUSB_BUSIFFN_IS_DEVICE_HIGH_SPEED IsDeviceHighSpeed;
    PUSB_BUSIFFN_ENUM_LOG_ENTRY EnumLogEntry;
} USB_BUS_INTERFACE_USBDI_V2, *PUSB_BUS_INTERFACE_USBDI_V2;
typedef _Must_inspect_result_ NTSTATUS
    (USB_BUSIFFN *PUSB_BUSIFFN_QUERY_BUS_TIME_EX) (
        _In_opt_ PVOID,
        _Out_opt_ PULONG
    );
typedef _Must_inspect_result_ NTSTATUS
    (USB_BUSIFFN *PUSB_BUSIFFN_QUERY_CONTROLLER_TYPE) (
        _In_opt_ PVOID,
        _Out_opt_ PULONG,
        _Out_opt_ PUSHORT,
        _Out_opt_ PUSHORT,
        _Out_opt_ PUCHAR,
        _Out_opt_ PUCHAR,
        _Out_opt_ PUCHAR,
        _Out_opt_ PUCHAR
    );
typedef struct _USB_BUS_INTERFACE_USBDI_V3 {
    USHORT Size;
    USHORT Version;
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PUSB_BUSIFFN_GETUSBDI_VERSION GetUSBDIVersion;
    PUSB_BUSIFFN_QUERY_BUS_TIME QueryBusTime;
    PUSB_BUSIFFN_SUBMIT_ISO_OUT_URB SubmitIsoOutUrb;
    PUSB_BUSIFFN_QUERY_BUS_INFORMATION QueryBusInformation;
    PUSB_BUSIFFN_IS_DEVICE_HIGH_SPEED IsDeviceHighSpeed;
    PUSB_BUSIFFN_ENUM_LOG_ENTRY EnumLogEntry;
    PUSB_BUSIFFN_QUERY_BUS_TIME_EX QueryBusTimeEx;
    PUSB_BUSIFFN_QUERY_CONTROLLER_TYPE QueryControllerType;
} USB_BUS_INTERFACE_USBDI_V3, *PUSB_BUS_INTERFACE_USBDI_V3;
DEFINE_GUID(USB_BUS_INTERFACE_USBC_CONFIGURATION_GUID,
0x893b6a96, 0xb7f, 0x4d4d, 0xbd, 0xb4, 0xbb, 0xd4, 0xce, 0xeb, 0xb3, 0x1c);
typedef struct _USBC_FUNCTION_DESCRIPTOR{
    UCHAR FunctionNumber;
    UCHAR NumberOfInterfaces;
    PUSB_INTERFACE_DESCRIPTOR *InterfaceDescriptorList;
    UNICODE_STRING HardwareId;
    UNICODE_STRING CompatibleId;
    UNICODE_STRING FunctionDescription;
    ULONG FunctionFlags;
    PVOID Reserved;
} USBC_FUNCTION_DESCRIPTOR, *PUSBC_FUNCTION_DESCRIPTOR;
typedef _Must_inspect_result_
NTSTATUS
(USB_BUSIFFN *USBC_START_DEVICE_CALLBACK)(
    _In_ PUSB_DEVICE_DESCRIPTOR DeviceDescriptor,
    _In_ PUSB_CONFIGURATION_DESCRIPTOR ConfigurationDescriptor,
    _Outptr_result_bytebuffer_maybenull_(*FunctionDescriptorBufferLength) PUSBC_FUNCTION_DESCRIPTOR *FunctionDescriptorBuffer,
    _Out_ PULONG FunctionDescriptorBufferLength,
    _In_ PDEVICE_OBJECT FdoDeviceObject,
    _In_ PDEVICE_OBJECT PdoDeviceObject
    );
typedef _Must_inspect_result_
BOOLEAN
(USB_BUSIFFN *USBC_PDO_ENABLE_CALLBACK)(
   _In_ PVOID Context,
   _In_ USHORT FirstInterfaceNumber,
   _In_ USHORT NumberOfInterfaces,
   _In_ UCHAR FunctionClass,
   _In_ UCHAR FunctionSubClass,
   _In_ UCHAR FunctionProtocol
   );
typedef struct _USBC_DEVICE_CONFIGURATION_INTERFACE_V1 {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    USBC_START_DEVICE_CALLBACK StartDeviceCallback;
    USBC_PDO_ENABLE_CALLBACK PdoEnableCallback;
    PVOID Reserved[7];
} USBC_DEVICE_CONFIGURATION_INTERFACE_V1, *PUSBC_DEVICE_CONFIGURATION_INTERFACE_V1;
