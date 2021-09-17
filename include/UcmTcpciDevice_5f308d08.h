    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef struct _UCMTCPCI_DEVICE_CONFIG
{
    ULONG Size;
} UCMTCPCI_DEVICE_CONFIG, *PUCMTCPCI_DEVICE_CONFIG;
VOID
FORCEINLINE
UCMTCPCI_DEVICE_CONFIG_INIT (
    _Out_ PUCMTCPCI_DEVICE_CONFIG Config
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
(*PFN_UCMTCPCIDEVICEINITINITIALIZE)(
    _In_
    PUCMTCPCI_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmTcpciDeviceInitInitialize(
    _In_
    PWDFDEVICE_INIT DeviceInit
    )
{
    return ((PFN_UCMTCPCIDEVICEINITINITIALIZE) UcmtcpciFunctions[UcmTcpciDeviceInitInitializeTableIndex])(UcmtcpciDriverGlobals, DeviceInit);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMTCPCIDEVICEINITIALIZE)(
    _In_
    PUCMTCPCI_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE WdfDevice,
    _In_
    PUCMTCPCI_DEVICE_CONFIG Config
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmTcpciDeviceInitialize(
    _In_
    WDFDEVICE WdfDevice,
    _In_
    PUCMTCPCI_DEVICE_CONFIG Config
    )
{
    return ((PFN_UCMTCPCIDEVICEINITIALIZE) UcmtcpciFunctions[UcmTcpciDeviceInitializeTableIndex])(UcmtcpciDriverGlobals, WdfDevice, Config);
}
WDF_EXTERN_C_END
