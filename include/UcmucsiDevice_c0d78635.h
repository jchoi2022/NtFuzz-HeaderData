    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef struct _UCMUCSI_DEVICE_CONFIG
{
    ULONG Size;
} UCMUCSI_DEVICE_CONFIG, *PUCMUCSI_DEVICE_CONFIG;
VOID
FORCEINLINE
UCMUCSI_DEVICE_CONFIG_INIT (
    _Out_ PUCMUCSI_DEVICE_CONFIG Config
    )
{
    RtlZeroMemory(Config, sizeof(*Config));
    Config->Size = sizeof(*Config);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMUCSIDEVICEINITINITIALIZE)(
    _In_
    PUCMUCSI_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmUcsiDeviceInitInitialize(
    _In_
    PWDFDEVICE_INIT DeviceInit
    )
{
    return ((PFN_UCMUCSIDEVICEINITINITIALIZE) UcmucsiFunctions[UcmUcsiDeviceInitInitializeTableIndex])(UcmucsiDriverGlobals, DeviceInit);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMUCSIDEVICEINITIALIZE)(
    _In_
    PUCMUCSI_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE WdfDevice,
    _In_
    PUCMUCSI_DEVICE_CONFIG Config
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmUcsiDeviceInitialize(
    _In_
    WDFDEVICE WdfDevice,
    _In_
    PUCMUCSI_DEVICE_CONFIG Config
    )
{
    return ((PFN_UCMUCSIDEVICEINITIALIZE) UcmucsiFunctions[UcmUcsiDeviceInitializeTableIndex])(UcmucsiDriverGlobals, WdfDevice, Config);
}
WDF_EXTERN_C_END
