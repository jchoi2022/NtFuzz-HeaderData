    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef
_Function_class_(EVT_URS_DEVICE_FILTER_RESOURCE_REQUIREMENTS)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_URS_DEVICE_FILTER_RESOURCE_REQUIREMENTS(
    _In_
    WDFDEVICE Device,
    _In_
    WDFIORESREQLIST IoResourceRequirementsList,
    _In_
    URSIORESLIST HostRoleResources,
    _In_
    URSIORESLIST FunctionRoleResources
    );
typedef EVT_URS_DEVICE_FILTER_RESOURCE_REQUIREMENTS *PFN_URS_DEVICE_FILTER_RESOURCE_REQUIREMENTS;
typedef
_Function_class_(EVT_URS_SET_ROLE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_URS_SET_ROLE(
    _In_
    WDFDEVICE Device,
    _In_
    URS_ROLE Role
    );
typedef EVT_URS_SET_ROLE *PFN_URS_SET_ROLE;
typedef struct _URS_CONFIG {
    ULONG Size;
    URS_HOST_INTERFACE_TYPE HostInterfaceType;
    PFN_URS_DEVICE_FILTER_RESOURCE_REQUIREMENTS EvtUrsFilterRemoveResourceRequirements;
    PFN_URS_SET_ROLE EvtUrsSetRole;
} URS_CONFIG, *PURS_CONFIG;
VOID
FORCEINLINE
URS_CONFIG_INIT (
    _Out_ PURS_CONFIG Config,
    _In_ URS_HOST_INTERFACE_TYPE HostInterfaceType,
    _In_ PFN_URS_DEVICE_FILTER_RESOURCE_REQUIREMENTS EvtUrsFilterRemoveResourceRequirements
    )
{
    RtlZeroMemory(Config, sizeof(URS_CONFIG));
    Config->Size = sizeof(URS_CONFIG);
    Config->HostInterfaceType = HostInterfaceType;
    Config->EvtUrsFilterRemoveResourceRequirements = EvtUrsFilterRemoveResourceRequirements;
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_URSDEVICEINITIALIZE)(
    _In_
    PURS_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PURS_CONFIG Config
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UrsDeviceInitialize(
    _In_
    WDFDEVICE Device,
    _In_
    PURS_CONFIG Config
    )
{
    return ((PFN_URSDEVICEINITIALIZE) UrsFunctions[UrsDeviceInitializeTableIndex])(UrsDriverGlobals, Device, Config);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_URSDEVICEINITINITIALIZE)(
    _In_
    PURS_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UrsDeviceInitInitialize(
    _In_
    PWDFDEVICE_INIT DeviceInit
    )
{
    return ((PFN_URSDEVICEINITINITIALIZE) UrsFunctions[UrsDeviceInitInitializeTableIndex])(UrsDriverGlobals, DeviceInit);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_URSIORESOURCELISTAPPENDDESCRIPTOR)(
    _In_
    PURS_DRIVER_GLOBALS DriverGlobals,
    _In_
    URSIORESLIST IoResourceList,
    _In_
    PIO_RESOURCE_DESCRIPTOR Descriptor
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UrsIoResourceListAppendDescriptor(
    _In_
    URSIORESLIST IoResourceList,
    _In_
    PIO_RESOURCE_DESCRIPTOR Descriptor
    )
{
    return ((PFN_URSIORESOURCELISTAPPENDDESCRIPTOR) UrsFunctions[UrsIoResourceListAppendDescriptorTableIndex])(UrsDriverGlobals, IoResourceList, Descriptor);
}
typedef
_IRQL_requires_max_(HIGH_LEVEL)
WDFAPI
VOID
(*PFN_URSREPORTHARDWAREEVENT)(
    _In_
    PURS_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    URS_HARDWARE_EVENT HardwareEvent
    );
_IRQL_requires_max_(HIGH_LEVEL)
VOID
FORCEINLINE
UrsReportHardwareEvent(
    _In_
    WDFDEVICE Device,
    _In_
    URS_HARDWARE_EVENT HardwareEvent
    )
{
    ((PFN_URSREPORTHARDWAREEVENT) UrsFunctions[UrsReportHardwareEventTableIndex])(UrsDriverGlobals, Device, HardwareEvent);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_URSSETPOHANDLE)(
    _In_
    PURS_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    POHANDLE PoHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FORCEINLINE
UrsSetPoHandle(
    _In_
    WDFDEVICE Device,
    _In_
    POHANDLE PoHandle
    )
{
    ((PFN_URSSETPOHANDLE) UrsFunctions[UrsSetPoHandleTableIndex])(UrsDriverGlobals, Device, PoHandle);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_URSSETHARDWAREEVENTSUPPORT)(
    _In_
    PURS_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    BOOLEAN HardwareEventReportingSupported
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FORCEINLINE
UrsSetHardwareEventSupport(
    _In_
    WDFDEVICE Device,
    _In_
    BOOLEAN HardwareEventReportingSupported
    )
{
    ((PFN_URSSETHARDWAREEVENTSUPPORT) UrsFunctions[UrsSetHardwareEventSupportTableIndex])(UrsDriverGlobals, Device, HardwareEventReportingSupported);
}
WDF_EXTERN_C_END
