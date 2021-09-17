    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_NETDEVICEOPENCONFIGURATION)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_opt_
    WDF_OBJECT_ATTRIBUTES* ConfigurationAttributes,
    _Out_
    NETCONFIGURATION* Configuration
    );
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
FORCEINLINE
NTSTATUS
NetDeviceOpenConfiguration(
    _In_
    WDFDEVICE Device,
    _In_opt_
    WDF_OBJECT_ATTRIBUTES* ConfigurationAttributes,
    _Out_
    NETCONFIGURATION* Configuration
    )
{
    return ((PFN_NETDEVICEOPENCONFIGURATION) NetFunctions[NetDeviceOpenConfigurationTableIndex])(NetDriverGlobals, Device, ConfigurationAttributes, Configuration);
}
WDF_EXTERN_C_END
