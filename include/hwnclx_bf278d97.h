extern "C" {
typedef struct _CLIENT_DEVICE_INFORMATION {
    USHORT Version;
    USHORT Size;
    USHORT TotalHwNs;
} CLIENT_DEVICE_INFORMATION, *PCLIENT_DEVICE_INFORMATION;
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLIENT_INITIALIZE_DEVICE) (
    __in WDFDEVICE Device,
    __in PVOID Context,
    __in WDFCMRESLIST ResourcesRaw,
    __in WDFCMRESLIST ResourcesTranslated
);
typedef HWN_CLIENT_INITIALIZE_DEVICE *PHWN_CLIENT_INITIALIZE_DEVICE;
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLIENT_UNINITIALIZE_DEVICE) (
    __in WDFDEVICE Device,
    __in PVOID Context
);
typedef HWN_CLIENT_UNINITIALIZE_DEVICE *PHWN_CLIENT_UNINITIALIZE_DEVICE;
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLIENT_QUERY_DEVICE_INFORMATION) (
    __in PVOID Context,
    __out PCLIENT_DEVICE_INFORMATION Information
);
typedef HWN_CLIENT_QUERY_DEVICE_INFORMATION
    *PHWN_CLIENT_QUERY_DEVICE_INFORMATION;
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLIENT_START_DEVICE) (
    __in PVOID Context
);
typedef HWN_CLIENT_START_DEVICE *PHWN_CLIENT_START_DEVICE;
typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLIENT_STOP_DEVICE) (
    __in PVOID Context
);
typedef HWN_CLIENT_STOP_DEVICE *PHWN_CLIENT_STOP_DEVICE;
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLIENT_GET_STATE) (
    __in PVOID Context,
    __out_bcount(OutputBufferLength) PVOID OutputBuffer,
    __in ULONG OutputBufferLength,
    __in_bcount(InputBufferLength) PVOID InputBuffer,
    __in ULONG InputBufferLength,
    __out PULONG BytesRead
);
typedef HWN_CLIENT_GET_STATE *PHWN_CLIENT_GET_STATE;
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLIENT_SET_STATE) (
    __in PVOID Context,
    __in_bcount(BufferLength) PVOID Buffer,
    __in ULONG BufferLength,
    __out PULONG BytesWritten
);
typedef HWN_CLIENT_SET_STATE *PHWN_CLIENT_SET_STATE;
typedef struct _HWN_CLIENT_REGISTRATION_PACKET {
    USHORT Version;
    USHORT Size;
    ULONG DeviceContextSize;
    ULONG Reserved;
    PHWN_CLIENT_INITIALIZE_DEVICE ClientInitializeDevice;
    PHWN_CLIENT_UNINITIALIZE_DEVICE ClientUnInitializeDevice;
    PHWN_CLIENT_QUERY_DEVICE_INFORMATION ClientQueryDeviceInformation;
    PHWN_CLIENT_START_DEVICE ClientStartDevice;
    PHWN_CLIENT_STOP_DEVICE ClientStopDevice;
    PHWN_CLIENT_SET_STATE ClientSetHwNState;
    PHWN_CLIENT_GET_STATE ClientGetHwNState;
} HWN_CLIENT_REGISTRATION_PACKET, *PHWN_CLIENT_REGISTRATION_PACKET;
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLX_REGISTER_CLIENT) (
    __in WDFDRIVER Driver,
    __inout PHWN_CLIENT_REGISTRATION_PACKET RegistrationPacket,
    __in PUNICODE_STRING RegistryPath
);
typedef HWN_CLX_REGISTER_CLIENT *PHWN_CLX_REGISTER_CLIENT;
typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLX_UNREGISTER_CLIENT) (
    __in WDFDRIVER Driver
);
typedef HWN_CLX_UNREGISTER_CLIENT *PHWN_CLX_UNREGISTER_CLIENT;
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE) (
    __in WDFDRIVER Driver,
    __inout PWDFDEVICE_INIT DeviceInit,
    __out PWDF_OBJECT_ATTRIBUTES FdoAttributes
);
typedef HWN_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE
    *PHWN_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE;
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE) (
    __in WDFDRIVER Driver,
    __in WDFDEVICE Device,
    __in LPGUID DeviceGuid
);
typedef HWN_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE
    *PHWN_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE;
typedef enum _HWN_CLX_EXPORT_INDEX {
    RegisterClientIndex = 0x0,
    UnregisterClientIndex,
    AddDevicePreDeviceCreateIndex,
    AddDevicePostDeviceCreateIndex,
    HwNExportLastExportIndex
} HWN_CLX_EXPORT_INDEX, *PHWN_CLX_EXPORT_INDEX;
typedef VOID (*PHWN_CLX_EXPORTED_INTERFACES)(VOID);
extern PHWN_CLX_EXPORTED_INTERFACES
    HwNClxExportedInterfaces[HWN_CLX_TOTAL_EXPORTS];
NTSTATUS
FORCEINLINE
HwNRegisterClient (
    __in WDFDRIVER Driver,
    __inout PHWN_CLIENT_REGISTRATION_PACKET RegistrationPacket,
    __in PUNICODE_STRING RegistryPath
    )
{
    PHWN_CLX_REGISTER_CLIENT RegisterClient;
    RegisterClient = (PHWN_CLX_REGISTER_CLIENT)
                       HwNClxExportedInterfaces[RegisterClientIndex];
    return RegisterClient(Driver, RegistrationPacket, RegistryPath);
}
NTSTATUS
FORCEINLINE
HwNUnregisterClient (
    __in WDFDRIVER Driver
    )
{
    PHWN_CLX_UNREGISTER_CLIENT UnregisterClient;
    UnregisterClient = (PHWN_CLX_UNREGISTER_CLIENT)
                         HwNClxExportedInterfaces[UnregisterClientIndex];
    return UnregisterClient(Driver);
}
NTSTATUS
FORCEINLINE
HwNProcessAddDevicePreDeviceCreate (
    __in WDFDRIVER Driver,
    __in PWDFDEVICE_INIT DeviceInit,
    __out PWDF_OBJECT_ATTRIBUTES FdoAttributes
    )
{
    PHWN_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE PreDeviceCreate;
    PreDeviceCreate = (PHWN_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE)
                      HwNClxExportedInterfaces[AddDevicePreDeviceCreateIndex];
    return PreDeviceCreate(Driver, DeviceInit, FdoAttributes);
}
NTSTATUS
FORCEINLINE
HwNProcessAddDevicePostDeviceCreate (
    __in WDFDRIVER Driver,
    __in WDFDEVICE Device,
    __in LPGUID DeviceGuid
    )
{
    PHWN_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE PostDeviceCreate;
    PostDeviceCreate = (PHWN_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE)
                       HwNClxExportedInterfaces[AddDevicePostDeviceCreateIndex];
    return PostDeviceCreate(Driver, Device, DeviceGuid);
}
}
