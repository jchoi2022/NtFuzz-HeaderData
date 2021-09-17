    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
DECLARE_HANDLE(UCMUCSIPPM);
DECLARE_HANDLE(UCMUCSI_CONNECTOR_COLLECTION);
typedef struct _UCMUCSI_CONNECTOR_INFO {
    ULONG Size;
    ULONGLONG ConnectorId;
} UCMUCSI_CONNECTOR_INFO, *PUCMUCSI_CONNECTOR_INFO;
VOID
FORCEINLINE
UCMUCSI_CONNECTOR_INFO_INIT (
    _Out_ PUCMUCSI_CONNECTOR_INFO ConnectorInfo
    )
{
    RtlZeroMemory(ConnectorInfo, sizeof(*ConnectorInfo));
    ConnectorInfo->Size = sizeof(*ConnectorInfo);
}
typedef struct _UCMUCSI_PPM_CONFIG
{
    ULONG Size;
    BOOLEAN UsbDeviceControllerEnabled;
    UCMUCSI_CONNECTOR_COLLECTION ConnectorCollectionHandle;
} UCMUCSI_PPM_CONFIG, *PUCMUCSI_PPM_CONFIG;
VOID
FORCEINLINE
UCMUCSI_PPM_CONFIG_INIT (
    _Out_ PUCMUCSI_PPM_CONFIG Config,
    _In_ UCMUCSI_CONNECTOR_COLLECTION CollectionObject
    )
{
    RtlZeroMemory(Config, sizeof(*Config));
    Config->Size = sizeof(*Config);
    Config->ConnectorCollectionHandle = CollectionObject;
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMUCSICONNECTORCOLLECTIONCREATE)(
    _In_
    PUCMUCSI_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE WdfDevice,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    UCMUCSI_CONNECTOR_COLLECTION* ConnectorCollection
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmUcsiConnectorCollectionCreate(
    _In_
    WDFDEVICE WdfDevice,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    UCMUCSI_CONNECTOR_COLLECTION* ConnectorCollection
    )
{
    return ((PFN_UCMUCSICONNECTORCOLLECTIONCREATE) UcmucsiFunctions[UcmUcsiConnectorCollectionCreateTableIndex])(UcmucsiDriverGlobals, WdfDevice, Attributes, ConnectorCollection);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMUCSICONNECTORCOLLECTIONADDCONNECTOR)(
    _In_
    PUCMUCSI_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMUCSI_CONNECTOR_COLLECTION ConnectorCollectionObject,
    _In_
    PUCMUCSI_CONNECTOR_INFO ConnectorInfo
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmUcsiConnectorCollectionAddConnector(
    _In_
    UCMUCSI_CONNECTOR_COLLECTION ConnectorCollectionObject,
    _In_
    PUCMUCSI_CONNECTOR_INFO ConnectorInfo
    )
{
    return ((PFN_UCMUCSICONNECTORCOLLECTIONADDCONNECTOR) UcmucsiFunctions[UcmUcsiConnectorCollectionAddConnectorTableIndex])(UcmucsiDriverGlobals, ConnectorCollectionObject, ConnectorInfo);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMUCSIPPMCREATE)(
    _In_
    PUCMUCSI_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE WdfDevice,
    _In_
    PUCMUCSI_PPM_CONFIG Config,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    UCMUCSIPPM* PPMObject
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmUcsiPpmCreate(
    _In_
    WDFDEVICE WdfDevice,
    _In_
    PUCMUCSI_PPM_CONFIG Config,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    UCMUCSIPPM* PPMObject
    )
{
    return ((PFN_UCMUCSIPPMCREATE) UcmucsiFunctions[UcmUcsiPpmCreateTableIndex])(UcmucsiDriverGlobals, WdfDevice, Config, Attributes, PPMObject);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_UCMUCSIPPMSETUCSICOMMANDREQUESTQUEUE)(
    _In_
    PUCMUCSI_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMUCSIPPM PpmObject,
    _In_
    WDFQUEUE PpmRequestQueue
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcmUcsiPpmSetUcsiCommandRequestQueue(
    _In_
    UCMUCSIPPM PpmObject,
    _In_
    WDFQUEUE PpmRequestQueue
    )
{
    ((PFN_UCMUCSIPPMSETUCSICOMMANDREQUESTQUEUE) UcmucsiFunctions[UcmUcsiPpmSetUcsiCommandRequestQueueTableIndex])(UcmucsiDriverGlobals, PpmObject, PpmRequestQueue);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMUCSIPPMSTART)(
    _In_
    PUCMUCSI_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMUCSIPPM PpmObject
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmUcsiPpmStart(
    _In_
    UCMUCSIPPM PpmObject
    )
{
    return ((PFN_UCMUCSIPPMSTART) UcmucsiFunctions[UcmUcsiPpmStartTableIndex])(UcmucsiDriverGlobals, PpmObject);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_UCMUCSIPPMSTOP)(
    _In_
    PUCMUCSI_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMUCSIPPM PpmObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FORCEINLINE
UcmUcsiPpmStop(
    _In_
    UCMUCSIPPM PpmObject
    )
{
    ((PFN_UCMUCSIPPMSTOP) UcmucsiFunctions[UcmUcsiPpmStopTableIndex])(UcmucsiDriverGlobals, PpmObject);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_UCMUCSIPPMNOTIFICATION)(
    _In_
    PUCMUCSI_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMUCSIPPM PpmObject,
    _In_reads_(sizeof(UCSI_DATA_BLOCK))
    PUCSI_DATA_BLOCK DataBlock
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcmUcsiPpmNotification(
    _In_
    UCMUCSIPPM PpmObject,
    _In_reads_(sizeof(UCSI_DATA_BLOCK))
    PUCSI_DATA_BLOCK DataBlock
    )
{
    ((PFN_UCMUCSIPPMNOTIFICATION) UcmucsiFunctions[UcmUcsiPpmNotificationTableIndex])(UcmucsiDriverGlobals, PpmObject, DataBlock);
}
WDF_EXTERN_C_END
