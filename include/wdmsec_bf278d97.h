       
extern "C" {
extern const UNICODE_STRING SDDL_DEVOBJ_KERNEL_ONLY;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_ALL;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_RX;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_R;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_R_RES_R;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RWX_RES_RWX;
_IRQL_requires_max_(PASSIVE_LEVEL)
_Post_satisfies_(return <= 0)
NTSTATUS
WdmlibIoCreateDeviceSecure(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ ULONG DeviceExtensionSize,
    _In_opt_ PUNICODE_STRING DeviceName,
    _In_ DEVICE_TYPE DeviceType,
    _In_ ULONG DeviceCharacteristics,
    _In_ BOOLEAN Exclusive,
    _In_ PCUNICODE_STRING DefaultSDDLString,
    _In_opt_ LPCGUID DeviceClassGuid,
    _Out_
    _At_(*DeviceObject,
  __drv_allocatesMem(Mem)
     _When_((((_In_function_class_(DRIVER_INITIALIZE)) ||(_In_function_class_(DRIVER_DISPATCH)))),
   __drv_aliasesMem)
  _On_failure_(_Post_null_))
    PDEVICE_OBJECT *DeviceObject
    );
NTSTATUS
WdmlibRtlInitUnicodeStringEx(
    _Out_ PUNICODE_STRING DestinationString,
    _In_opt_ PCWSTR SourceString
    );
NTSTATUS
WdmlibIoValidateDeviceIoControlAccess(
    _In_ PIRP Irp,
    _In_ ULONG RequiredAccess
    );
}
