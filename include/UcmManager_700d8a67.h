    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
DECLARE_HANDLE(UCMCONNECTOR);
typedef
_Function_class_(EVT_UCM_CONNECTOR_SET_DATA_ROLE)
_IRQL_requires_same_
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_UCM_CONNECTOR_SET_DATA_ROLE(
    _In_
    UCMCONNECTOR Connector,
    _In_
    UCM_DATA_ROLE DataRole
);
typedef EVT_UCM_CONNECTOR_SET_DATA_ROLE *PFN_UCM_CONNECTOR_SET_DATA_ROLE;
typedef
_Function_class_(EVT_UCM_CONNECTOR_SET_POWER_ROLE)
_IRQL_requires_same_
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_UCM_CONNECTOR_SET_POWER_ROLE(
    _In_
    UCMCONNECTOR Connector,
    _In_
    UCM_POWER_ROLE PowerRole
);
typedef EVT_UCM_CONNECTOR_SET_POWER_ROLE *PFN_UCM_CONNECTOR_SET_POWER_ROLE;
typedef struct _UCM_MANAGER_CONFIG
{
    ULONG Size;
} UCM_MANAGER_CONFIG, *PUCM_MANAGER_CONFIG;
VOID
FORCEINLINE
UCM_MANAGER_CONFIG_INIT(
    _Out_ PUCM_MANAGER_CONFIG Config
)
{
    RtlZeroMemory(Config, sizeof(*Config));
    Config->Size = sizeof(*Config);
}
typedef struct _UCM_CONNECTOR_TYPEC_CONFIG
{
    ULONG Size;
    BOOLEAN IsSupported;
    ULONG SupportedOperatingModes;
    ULONG SupportedPowerSourcingCapabilities;
    BOOLEAN AudioAccessoryCapable;
    PFN_UCM_CONNECTOR_SET_DATA_ROLE EvtSetDataRole;
} UCM_CONNECTOR_TYPEC_CONFIG, *PUCM_CONNECTOR_TYPEC_CONFIG;
VOID
FORCEINLINE
UCM_CONNECTOR_TYPEC_CONFIG_INIT(
    _Out_ PUCM_CONNECTOR_TYPEC_CONFIG Config,
    _In_ ULONG SupportedOperatingModes,
    _In_ ULONG SupportedPowerSourcingCapabilities
)
{
    RtlZeroMemory(Config, sizeof(*Config));
    Config->Size = sizeof(*Config);
    Config->IsSupported = TRUE;
    Config->SupportedOperatingModes = SupportedOperatingModes;
    Config->SupportedPowerSourcingCapabilities = SupportedPowerSourcingCapabilities;
}
typedef struct _UCM_CONNECTOR_PD_CONFIG
{
    ULONG Size;
    BOOLEAN IsSupported;
    ULONG SupportedPowerRoles;
    PFN_UCM_CONNECTOR_SET_POWER_ROLE EvtSetPowerRole;
} UCM_CONNECTOR_PD_CONFIG, *PUCM_CONNECTOR_PD_CONFIG;
VOID
FORCEINLINE
UCM_CONNECTOR_PD_CONFIG_INIT(
    _Out_ PUCM_CONNECTOR_PD_CONFIG Config,
    _In_ ULONG SupportedPowerRoles
)
{
    RtlZeroMemory(Config, sizeof(*Config));
    Config->Size = sizeof(*Config);
    Config->IsSupported = TRUE;
    Config->SupportedPowerRoles = SupportedPowerRoles;
}
typedef struct _UCM_CONNECTOR_CONFIG
{
    ULONG Size;
    ULONGLONG ConnectorId;
    PUCM_CONNECTOR_TYPEC_CONFIG TypeCConfig;
    PUCM_CONNECTOR_PD_CONFIG PdConfig;
} UCM_CONNECTOR_CONFIG, *PUCM_CONNECTOR_CONFIG;
VOID
FORCEINLINE
UCM_CONNECTOR_CONFIG_INIT(
    _Out_ PUCM_CONNECTOR_CONFIG Config,
    _In_ ULONGLONG ConnectorId
)
{
    RtlZeroMemory(Config, sizeof(*Config));
    Config->Size = sizeof(*Config);
    Config->ConnectorId = ConnectorId;
}
typedef struct _UCM_CONNECTOR_TYPEC_ATTACH_PARAMS
{
    ULONG Size;
    UCM_TYPEC_PARTNER Partner;
    UCM_TYPEC_CURRENT CurrentAdvertisement;
    UCM_CHARGING_STATE ChargingState;
} UCM_CONNECTOR_TYPEC_ATTACH_PARAMS, *PUCM_CONNECTOR_TYPEC_ATTACH_PARAMS;
VOID
FORCEINLINE
UCM_CONNECTOR_TYPEC_ATTACH_PARAMS_INIT(
    _Out_ PUCM_CONNECTOR_TYPEC_ATTACH_PARAMS Params,
    _In_ UCM_TYPEC_PARTNER Partner
)
{
    RtlZeroMemory(Params, sizeof(*Params));
    Params->Size = sizeof(*Params);
    Params->Partner = Partner;
}
typedef struct _UCM_CONNECTOR_PD_CONN_STATE_CHANGED_PARAMS
{
    ULONG Size;
    UCM_PD_CONN_STATE PdConnState;
    UCM_PD_REQUEST_DATA_OBJECT Rdo;
    UCM_CHARGING_STATE ChargingState;
} UCM_CONNECTOR_PD_CONN_STATE_CHANGED_PARAMS, *PUCM_CONNECTOR_PD_CONN_STATE_CHANGED_PARAMS;
VOID
FORCEINLINE
UCM_CONNECTOR_PD_CONN_STATE_CHANGED_PARAMS_INIT(
    _Out_ PUCM_CONNECTOR_PD_CONN_STATE_CHANGED_PARAMS Params,
    _In_ UCM_PD_CONN_STATE PdConnState
)
{
    RtlZeroMemory(Params, sizeof(*Params));
    Params->Size = sizeof(*Params);
    Params->PdConnState = PdConnState;
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMINITIALIZEDEVICE)(
    _In_
    PUCM_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE WdfDevice,
    _In_
    PUCM_MANAGER_CONFIG Config
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmInitializeDevice(
    _In_
    WDFDEVICE WdfDevice,
    _In_
    PUCM_MANAGER_CONFIG Config
    )
{
    return ((PFN_UCMINITIALIZEDEVICE) UcmFunctions[UcmInitializeDeviceTableIndex])(UcmDriverGlobals, WdfDevice, Config);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMCONNECTORCREATE)(
    _In_
    PUCM_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE WdfDevice,
    _In_
    PUCM_CONNECTOR_CONFIG Config,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    UCMCONNECTOR* Connector
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmConnectorCreate(
    _In_
    WDFDEVICE WdfDevice,
    _In_
    PUCM_CONNECTOR_CONFIG Config,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    UCMCONNECTOR* Connector
    )
{
    return ((PFN_UCMCONNECTORCREATE) UcmFunctions[UcmConnectorCreateTableIndex])(UcmDriverGlobals, WdfDevice, Config, Attributes, Connector);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMCONNECTORTYPECATTACH)(
    _In_
    PUCM_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMCONNECTOR Connector,
    _In_
    PUCM_CONNECTOR_TYPEC_ATTACH_PARAMS Params
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmConnectorTypeCAttach(
    _In_
    UCMCONNECTOR Connector,
    _In_
    PUCM_CONNECTOR_TYPEC_ATTACH_PARAMS Params
    )
{
    return ((PFN_UCMCONNECTORTYPECATTACH) UcmFunctions[UcmConnectorTypeCAttachTableIndex])(UcmDriverGlobals, Connector, Params);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMCONNECTORTYPECDETACH)(
    _In_
    PUCM_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMCONNECTOR Connector
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmConnectorTypeCDetach(
    _In_
    UCMCONNECTOR Connector
    )
{
    return ((PFN_UCMCONNECTORTYPECDETACH) UcmFunctions[UcmConnectorTypeCDetachTableIndex])(UcmDriverGlobals, Connector);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMCONNECTORTYPECCURRENTADCHANGED)(
    _In_
    PUCM_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMCONNECTOR Connector,
    _In_
    UCM_TYPEC_CURRENT CurrentAdvertisement
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmConnectorTypeCCurrentAdChanged(
    _In_
    UCMCONNECTOR Connector,
    _In_
    UCM_TYPEC_CURRENT CurrentAdvertisement
    )
{
    return ((PFN_UCMCONNECTORTYPECCURRENTADCHANGED) UcmFunctions[UcmConnectorTypeCCurrentAdChangedTableIndex])(UcmDriverGlobals, Connector, CurrentAdvertisement);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMCONNECTORPDSOURCECAPS)(
    _In_
    PUCM_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMCONNECTOR Connector,
    _In_
    UCM_PD_POWER_DATA_OBJECT Pdos[],
    _In_
    UCHAR PdoCount
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmConnectorPdSourceCaps(
    _In_
    UCMCONNECTOR Connector,
    _In_
    UCM_PD_POWER_DATA_OBJECT Pdos[],
    _In_
    UCHAR PdoCount
    )
{
    return ((PFN_UCMCONNECTORPDSOURCECAPS) UcmFunctions[UcmConnectorPdSourceCapsTableIndex])(UcmDriverGlobals, Connector, Pdos, PdoCount);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMCONNECTORPDPARTNERSOURCECAPS)(
    _In_
    PUCM_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMCONNECTOR Connector,
    _In_
    UCM_PD_POWER_DATA_OBJECT Pdos[],
    _In_
    UCHAR PdoCount
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmConnectorPdPartnerSourceCaps(
    _In_
    UCMCONNECTOR Connector,
    _In_
    UCM_PD_POWER_DATA_OBJECT Pdos[],
    _In_
    UCHAR PdoCount
    )
{
    return ((PFN_UCMCONNECTORPDPARTNERSOURCECAPS) UcmFunctions[UcmConnectorPdPartnerSourceCapsTableIndex])(UcmDriverGlobals, Connector, Pdos, PdoCount);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMCONNECTORPDCONNECTIONSTATECHANGED)(
    _In_
    PUCM_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMCONNECTOR Connector,
    _In_
    PUCM_CONNECTOR_PD_CONN_STATE_CHANGED_PARAMS Params
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmConnectorPdConnectionStateChanged(
    _In_
    UCMCONNECTOR Connector,
    _In_
    PUCM_CONNECTOR_PD_CONN_STATE_CHANGED_PARAMS Params
    )
{
    return ((PFN_UCMCONNECTORPDCONNECTIONSTATECHANGED) UcmFunctions[UcmConnectorPdConnectionStateChangedTableIndex])(UcmDriverGlobals, Connector, Params);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCMCONNECTORCHARGINGSTATECHANGED)(
    _In_
    PUCM_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMCONNECTOR Connector,
    _In_
    UCM_CHARGING_STATE ChargingState
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcmConnectorChargingStateChanged(
    _In_
    UCMCONNECTOR Connector,
    _In_
    UCM_CHARGING_STATE ChargingState
    )
{
    return ((PFN_UCMCONNECTORCHARGINGSTATECHANGED) UcmFunctions[UcmConnectorChargingStateChangedTableIndex])(UcmDriverGlobals, Connector, ChargingState);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_UCMCONNECTORDATADIRECTIONCHANGED)(
    _In_
    PUCM_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMCONNECTOR Connector,
    _In_
    BOOLEAN Success,
    _In_
    UCM_DATA_ROLE CurrentDataRole
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FORCEINLINE
UcmConnectorDataDirectionChanged(
    _In_
    UCMCONNECTOR Connector,
    _In_
    BOOLEAN Success,
    _In_
    UCM_DATA_ROLE CurrentDataRole
    )
{
    ((PFN_UCMCONNECTORDATADIRECTIONCHANGED) UcmFunctions[UcmConnectorDataDirectionChangedTableIndex])(UcmDriverGlobals, Connector, Success, CurrentDataRole);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_UCMCONNECTORPOWERDIRECTIONCHANGED)(
    _In_
    PUCM_DRIVER_GLOBALS DriverGlobals,
    _In_
    UCMCONNECTOR Connector,
    _In_
    BOOLEAN Success,
    _In_
    UCM_POWER_ROLE CurrentPowerRole
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FORCEINLINE
UcmConnectorPowerDirectionChanged(
    _In_
    UCMCONNECTOR Connector,
    _In_
    BOOLEAN Success,
    _In_
    UCM_POWER_ROLE CurrentPowerRole
    )
{
    ((PFN_UCMCONNECTORPOWERDIRECTIONCHANGED) UcmFunctions[UcmConnectorPowerDirectionChangedTableIndex])(UcmDriverGlobals, Connector, Success, CurrentPowerRole);
}
WDF_EXTERN_C_END
