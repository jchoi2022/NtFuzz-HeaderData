typedef NTSTATUS (*PNP_CALLBACK)(PDEVICE_OBJECT DeviceObject,
                                 PIRP Irp);
typedef NTSTATUS (*POWER_CALLBACK)(PDEVICE_OBJECT DeviceObject,
                                   DEVICE_POWER_STATE DeviceState,
                                   PBOOLEAN PostWaitWake);
typedef PVOID SCUTIL_HANDLE;
NTSTATUS
ScUtil_Initialize(
    SCUTIL_HANDLE UtilHandle,
    PDEVICE_OBJECT PhysicalDeviceObject,
    PDEVICE_OBJECT LowerDeviceObject,
    PSMARTCARD_EXTENSION SmartcardExtension,
    PIO_REMOVE_LOCK RemoveLock,
    PNP_CALLBACK StartDevice,
    PNP_CALLBACK StopDevice,
    PNP_CALLBACK RemoveDevice,
    PNP_CALLBACK FreeResources,
    POWER_CALLBACK SetPowerState
    );
NTSTATUS
ScUtil_DeviceIOControl(
    PDEVICE_OBJECT DeviceObject,
    PIRP Irp
    );
NTSTATUS
ScUtil_PnP(
    PDEVICE_OBJECT DeviceObject,
    PIRP Irp
    );
NTSTATUS
ScUtil_Power(
    PDEVICE_OBJECT DeviceObject,
    PIRP Irp
    );
NTSTATUS
ScUtil_Cleanup(
    PDEVICE_OBJECT DeviceObject,
    PIRP Irp
    );
NTSTATUS
ScUtil_UnloadDriver(
    PDRIVER_OBJECT DriverObject
    );
NTSTATUS
ScUtil_CreateClose(
    PDEVICE_OBJECT DeviceObject,
    PIRP Irp
    );
NTSTATUS
ScUtil_SystemControl(
    PDEVICE_OBJECT DeviceObject,
    PIRP Irp
    );
NTSTATUS
ScUtil_ForwardAndWait(
    PDEVICE_OBJECT DeviceObject,
    PIRP Irp
    );
NTSTATUS
ScUtil_Cancel(
    PDEVICE_OBJECT DeviceObject,
    PIRP Irp
    );
