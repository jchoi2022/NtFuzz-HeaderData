    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
DECLARE_HANDLE(UCMTCPCIPORTCONTROLLER);
typedef enum _UCMTCPCI_PORT_CONTROLLER_ALERT_TYPE {
    UcmTcpciPortControllerAlertInvalid = 0x0,
    UcmTcpciPortControllerAlertCCStatus,
    UcmTcpciPortControllerAlertPowerStatus,
    UcmTcpciPortControllerAlertReceiveSOPMessageStatus,
    UcmTcpciPortControllerAlertReceivedHardReset,
    UcmTcpciPortControllerAlertTransmitSOPMessageFailed,
    UcmTcpciPortControllerAlertTransmitSOPMessageDiscarded,
    UcmTcpciPortControllerAlertTransmitSOPMessageSuccessful,
    UcmTcpciPortControllerAlertVbusVoltageAlarmHi,
    UcmTcpciPortControllerAlertVbusVoltageAlarmLo,
    UcmTcpciPortControllerAlertFault,
    UcmTcpciPortControllerAlertRxBufferOverflow,
    UcmTcpciPortControllerAlertVbusSinkDisconnectDetected,
} UCMTCPCI_PORT_CONTROLLER_ALERT_TYPE;
typedef struct _UCMTCPCI_PORT_CONTROLLER_IDENTIFICATION
{
    ULONG Size;
    UINT16 VendorId;
    UINT16 ProductId;
    UINT16 DeviceId;
    UINT16 TypeCRevisionInBcd;
    UINT16 PDRevisionAndVersionInBcd;
    UINT16 PDInterfaceRevisionAndVersionInBcd;
} UCMTCPCI_PORT_CONTROLLER_IDENTIFICATION, *PUCMTCPCI_PORT_CONTROLLER_IDENTIFICATION;
VOID
FORCEINLINE
UCMTCPCI_PORT_CONTROLLER_IDENTIFICATION_INIT (
    _Out_ PUCMTCPCI_PORT_CONTROLLER_IDENTIFICATION Identification
    )
{
    RtlZeroMemory(Identification, sizeof(*Identification));
    Identification->Size = sizeof(*Identification);
}
typedef struct _UCMTCPCI_PORT_CONTROLLER_CAPABILITIES
{
    ULONG Size;
    BOOLEAN IsPowerDeliveryCapable;
    UCMTCPCI_PORT_CONTROLLER_DEVICE_CAPABILITIES_1 DeviceCapabilities1;
    UCMTCPCI_PORT_CONTROLLER_DEVICE_CAPABILITIES_2 DeviceCapabilities2;
    UCMTCPCI_PORT_CONTROLLER_STANDARD_INPUT_CAPABILITIES StandardInputCapabilities;
    UCMTCPCI_PORT_CONTROLLER_STANDARD_OUTPUT_CAPABILITIES StandardOutputCapabilities;
} UCMTCPCI_PORT_CONTROLLER_CAPABILITIES, *PUCMTCPCI_PORT_CONTROLLER_CAPABILITIES;
VOID
FORCEINLINE
UCMTCPCI_PORT_CONTROLLER_CAPABILITIES_INIT (
    _Out_ PUCMTCPCI_PORT_CONTROLLER_CAPABILITIES Capabilities
    )
{
    RtlZeroMemory(Capabilities, sizeof(*Capabilities));
    Capabilities->Size = sizeof(*Capabilities);
}
typedef struct _UCMTCPCI_PORT_CONTROLLER_CONFIG
{
    ULONG Size;
    PUCMTCPCI_PORT_CONTROLLER_IDENTIFICATION Identification;
    PUCMTCPCI_PORT_CONTROLLER_CAPABILITIES Capabilities;
} UCMTCPCI_PORT_CONTROLLER_CONFIG, *PUCMTCPCI_PORT_CONTROLLER_CONFIG;
VOID
FORCEINLINE
UCMTCPCI_PORT_CONTROLLER_CONFIG_INIT (
    _Out_ PUCMTCPCI_PORT_CONTROLLER_CONFIG Config,
    _In_ PUCMTCPCI_PORT_CONTROLLER_IDENTIFICATION Identification,
    _In_ PUCMTCPCI_PORT_CONTROLLER_CAPABILITIES Capabilities
    )
{
    RtlZeroMemory(Config, sizeof(*Config));
    Config->Size = sizeof(*Config);
    Config->Identification = Identification;
    Config->Capabilities = Capabilities;
}
#pragma warning(push)
#pragma warning(disable:4201)
typedef struct _UCMTCPCI_PORT_CONTROLLER_ALERT_DATA
{
    ULONG Size;
    UCMTCPCI_PORT_CONTROLLER_ALERT_TYPE AlertType;
    union
    {
        UCMTCPCI_PORT_CONTROLLER_CC_STATUS CCStatus;
        UCMTCPCI_PORT_CONTROLLER_POWER_STATUS PowerStatus;
        UCMTCPCI_PORT_CONTROLLER_FAULT_STATUS FaultStatus;
        PUCMTCPCI_PORT_CONTROLLER_RECEIVE_BUFFER ReceiveBuffer;
    };
} UCMTCPCI_PORT_CONTROLLER_ALERT_DATA, *PUCMTCPCI_PORT_CONTROLLER_ALERT_DATA;
#pragma warning(pop)
VOID
FORCEINLINE
UCMTCPCI_PORT_CONTROLLER_ALERT_DATA_INIT (
    _Out_ PUCMTCPCI_PORT_CONTROLLER_ALERT_DATA AlertData
    )
{
    RtlZeroMemory(AlertData, sizeof(*AlertData));
    AlertData->Size = sizeof(*AlertData);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMTCPCIPORTCONTROLLERCREATE)(
    _In_
    PUCMTCPCI_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE WdfDevice,
    _In_
    PUCMTCPCI_PORT_CONTROLLER_CONFIG Config,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    UCMTCPCIPORTCONTROLLER* PortControllerObject
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmTcpciPortControllerCreate(
    _In_
    WDFDEVICE WdfDevice,
    _In_
    PUCMTCPCI_PORT_CONTROLLER_CONFIG Config,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    UCMTCPCIPORTCONTROLLER* PortControllerObject
    )
{
    return ((PFN_UCMTCPCIPORTCONTROLLERCREATE) UcmtcpciFunctions[UcmTcpciPortControllerCreateTableIndex])(UcmtcpciDriverGlobals, WdfDevice, Config, Attributes, PortControllerObject);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_UCMTCPCIPORTCONTROLLERSETHARDWAREREQUESTQUEUE)(
    _In_
    PUCMTCPCI_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMTCPCIPORTCONTROLLER PortControllerObject,
    _In_
    WDFQUEUE HardwareRequestQueue
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcmTcpciPortControllerSetHardwareRequestQueue(
    _In_
    UCMTCPCIPORTCONTROLLER PortControllerObject,
    _In_
    WDFQUEUE HardwareRequestQueue
    )
{
    ((PFN_UCMTCPCIPORTCONTROLLERSETHARDWAREREQUESTQUEUE) UcmtcpciFunctions[UcmTcpciPortControllerSetHardwareRequestQueueTableIndex])(UcmtcpciDriverGlobals, PortControllerObject, HardwareRequestQueue);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMTCPCIPORTCONTROLLERSTART)(
    _In_
    PUCMTCPCI_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMTCPCIPORTCONTROLLER PortControllerObject
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmTcpciPortControllerStart(
    _In_
    UCMTCPCIPORTCONTROLLER PortControllerObject
    )
{
    return ((PFN_UCMTCPCIPORTCONTROLLERSTART) UcmtcpciFunctions[UcmTcpciPortControllerStartTableIndex])(UcmtcpciDriverGlobals, PortControllerObject);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_UCMTCPCIPORTCONTROLLERSTOP)(
    _In_
    PUCMTCPCI_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMTCPCIPORTCONTROLLER PortControllerObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FORCEINLINE
UcmTcpciPortControllerStop(
    _In_
    UCMTCPCIPORTCONTROLLER PortControllerObject
    )
{
    ((PFN_UCMTCPCIPORTCONTROLLERSTOP) UcmtcpciFunctions[UcmTcpciPortControllerStopTableIndex])(UcmtcpciDriverGlobals, PortControllerObject);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_UCMTCPCIPORTCONTROLLERALERT)(
    _In_
    PUCMTCPCI_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMTCPCIPORTCONTROLLER PortControllerObject,
    _In_reads_(NumberOfAlerts)
    PUCMTCPCI_PORT_CONTROLLER_ALERT_DATA AlertData,
    _In_
    size_t NumberOfAlerts
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcmTcpciPortControllerAlert(
    _In_
    UCMTCPCIPORTCONTROLLER PortControllerObject,
    _In_reads_(NumberOfAlerts)
    PUCMTCPCI_PORT_CONTROLLER_ALERT_DATA AlertData,
    _In_
    size_t NumberOfAlerts
    )
{
    ((PFN_UCMTCPCIPORTCONTROLLERALERT) UcmtcpciFunctions[UcmTcpciPortControllerAlertTableIndex])(UcmtcpciDriverGlobals, PortControllerObject, AlertData, NumberOfAlerts);
}
WDF_EXTERN_C_END
