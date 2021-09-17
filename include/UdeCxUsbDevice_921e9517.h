    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef enum _UDECX_USB_DEVICE_SPEED {
    UdecxUsbLowSpeed = 0,
    UdecxUsbFullSpeed,
    UdecxUsbHighSpeed,
    UdecxUsbSuperSpeed,
} UDECX_USB_DEVICE_SPEED, *PUDECX_USB_DEVICE_SPEED;
typedef enum _UDECX_ENDPOINT_TYPE {
    UdecxEndpointTypeInvalid = 0,
    UdecxEndpointTypeSimple,
    UdecxEndpointTypeDynamic,
} UDECX_ENDPOINT_TYPE, *PUDECX_ENDPOINT_TYPE;
typedef enum _UDECX_ENDPOINTS_CONFIGURE_TYPE {
    UdecxEndpointsConfigureTypeDeviceInitialize = 0,
    UdecxEndpointsConfigureTypeDeviceConfigurationChange,
    UdecxEndpointsConfigureTypeInterfaceSettingChange,
    UdecxEndpointsConfigureTypeEndpointsReleasedOnly,
} UDECX_ENDPOINTS_CONFIGURE_TYPE, *PUDECX_ENDPOINTS_CONFIGURE_TYPE;
typedef enum _UDECX_USB_DEVICE_WAKE_SETTING {
    UdecxUsbDeviceWakeDisabled = 0,
    UdecxUsbDeviceWakeEnabled,
    UdecxUsbDeviceWakeNotApplicable,
} UDECX_USB_DEVICE_WAKE_SETTING, *PUDECX_USB_DEVICE_WAKE_SETTING;
typedef enum _UDECX_USB_DEVICE_FUNCTION_POWER {
    UdecxUsbDeviceFunctionNotSuspended = 0,
    UdecxUsbDeviceFunctionSuspendedCannotWake,
    UdecxUsbDeviceFunctionSuspendedCanWake,
} UDECX_USB_DEVICE_FUNCTION_POWER, *PUDECX_USB_DEVICE_FUNCTION_POWER;
typedef struct _UDECX_USB_ENDPOINT_INIT_AND_METADATA {
    PUDECXUSBENDPOINT_INIT UdecxUsbEndpointInit;
    _Field_range_(sizeof(USB_ENDPOINT_DESCRIPTOR), 0xff)
    ULONG EndpointDescriptorBufferLength;
    _Notnull_ _Field_size_bytes_(EndpointDescriptorBufferLength)
    PUSB_ENDPOINT_DESCRIPTOR EndpointDescriptor;
    _Maybenull_
    PUSB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR SuperSpeedEndpointCompanionDescriptor;
} UDECX_USB_ENDPOINT_INIT_AND_METADATA, *PUDECX_USB_ENDPOINT_INIT_AND_METADATA;
typedef struct _UDECX_ENDPOINTS_CONFIGURE_PARAMS {
    ULONG Size;
    UDECX_ENDPOINTS_CONFIGURE_TYPE ConfigureType;
    UCHAR NewConfigurationValue;
    UCHAR InterfaceNumber;
    UCHAR NewInterfaceSetting;
    ULONG EndpointsToConfigureCount;
    _Field_size_(EndpointsToConfigureCount)
    UDECXUSBENDPOINT * EndpointsToConfigure;
    ULONG ReleasedEndpointsCount;
    _Field_size_(ReleasedEndpointsCount)
    UDECXUSBENDPOINT * ReleasedEndpoints;
} UDECX_ENDPOINTS_CONFIGURE_PARAMS, *PUDECX_ENDPOINTS_CONFIGURE_PARAMS;
typedef
_Function_class_(EVT_UDECX_USB_DEVICE_DEFAULT_ENDPOINT_ADD)
_IRQL_requires_same_
NTSTATUS
EVT_UDECX_USB_DEVICE_DEFAULT_ENDPOINT_ADD(
    _In_
        UDECXUSBDEVICE UdecxUsbDevice,
    _In_
        PUDECXUSBENDPOINT_INIT UdecxEndpointInit
    );
typedef EVT_UDECX_USB_DEVICE_DEFAULT_ENDPOINT_ADD *PFN_UDECX_USB_DEVICE_DEFAULT_ENDPOINT_ADD;
typedef
_Function_class_(EVT_UDECX_USB_DEVICE_ENDPOINT_ADD)
_IRQL_requires_same_
NTSTATUS
EVT_UDECX_USB_DEVICE_ENDPOINT_ADD(
    _In_
        UDECXUSBDEVICE UdecxUsbDevice,
    _In_
        PUDECX_USB_ENDPOINT_INIT_AND_METADATA EndpointToCreate
    );
typedef EVT_UDECX_USB_DEVICE_ENDPOINT_ADD *PFN_UDECX_USB_DEVICE_ENDPOINT_ADD;
typedef
_Function_class_(EVT_UDECX_USB_DEVICE_ENDPOINTS_CONFIGURE)
_IRQL_requires_same_
VOID
EVT_UDECX_USB_DEVICE_ENDPOINTS_CONFIGURE(
    _In_
        UDECXUSBDEVICE UdecxUsbDevice,
    _In_
        WDFREQUEST Request,
    _In_
        PUDECX_ENDPOINTS_CONFIGURE_PARAMS Params
    );
typedef EVT_UDECX_USB_DEVICE_ENDPOINTS_CONFIGURE *PFN_UDECX_USB_DEVICE_ENDPOINTS_CONFIGURE;
typedef
_Function_class_(EVT_UDECX_USB_DEVICE_D0_ENTRY)
_IRQL_requires_same_
NTSTATUS
EVT_UDECX_USB_DEVICE_D0_ENTRY(
    _In_
        WDFDEVICE UdecxWdfDevice,
    _In_
        UDECXUSBDEVICE UdecxUsbDevice
    );
typedef EVT_UDECX_USB_DEVICE_D0_ENTRY *PFN_UDECX_USB_DEVICE_D0_ENTRY;
typedef
_Function_class_(EVT_UDECX_USB_DEVICE_D0_EXIT)
_IRQL_requires_same_
NTSTATUS
EVT_UDECX_USB_DEVICE_D0_EXIT(
    _In_
        WDFDEVICE UdecxWdfDevice,
    _In_
        UDECXUSBDEVICE UdecxUsbDevice,
    _In_
        UDECX_USB_DEVICE_WAKE_SETTING WakeSetting
    );
typedef EVT_UDECX_USB_DEVICE_D0_EXIT *PFN_UDECX_USB_DEVICE_D0_EXIT;
typedef
_Function_class_(EVT_UDECX_USB_DEVICE_SET_FUNCTION_SUSPEND_AND_WAKE)
_IRQL_requires_same_
NTSTATUS
EVT_UDECX_USB_DEVICE_SET_FUNCTION_SUSPEND_AND_WAKE(
    _In_
        WDFDEVICE UdecxWdfDevice,
    _In_
        UDECXUSBDEVICE UdecxUsbDevice,
    _In_
        ULONG Interface,
    _In_
        UDECX_USB_DEVICE_FUNCTION_POWER FunctionPower
    );
typedef EVT_UDECX_USB_DEVICE_SET_FUNCTION_SUSPEND_AND_WAKE *PFN_UDECX_USB_DEVICE_SET_FUNCTION_SUSPEND_AND_WAKE;
typedef
_Function_class_(EVT_UDECX_USB_DEVICE_POST_ENUMERATION_RESET)
_IRQL_requires_same_
VOID
EVT_UDECX_USB_DEVICE_POST_ENUMERATION_RESET(
    _In_
        WDFDEVICE UdecxWdfDevice,
    _In_
        UDECXUSBDEVICE UdecxUsbDevice,
    _In_
        WDFREQUEST Request,
    _In_
        BOOLEAN AllDevicesReset
    );
typedef EVT_UDECX_USB_DEVICE_POST_ENUMERATION_RESET *PFN_UDECX_USB_DEVICE_POST_ENUMERATION_RESET;
typedef struct _UDECX_USB_DEVICE_STATE_CHANGE_CALLBACKS {
    ULONG Size;
    PFN_UDECX_USB_DEVICE_D0_ENTRY EvtUsbDeviceLinkPowerEntry;
    PFN_UDECX_USB_DEVICE_D0_EXIT EvtUsbDeviceLinkPowerExit;
    PFN_UDECX_USB_DEVICE_SET_FUNCTION_SUSPEND_AND_WAKE EvtUsbDeviceSetFunctionSuspendAndWake;
    PFN_UDECX_USB_DEVICE_POST_ENUMERATION_RESET EvtUsbDeviceReset;
    PFN_UDECX_USB_DEVICE_DEFAULT_ENDPOINT_ADD EvtUsbDeviceDefaultEndpointAdd;
    PFN_UDECX_USB_DEVICE_ENDPOINT_ADD EvtUsbDeviceEndpointAdd;
    PFN_UDECX_USB_DEVICE_ENDPOINTS_CONFIGURE EvtUsbDeviceEndpointsConfigure;
} UDECX_USB_DEVICE_STATE_CHANGE_CALLBACKS, *PUDECX_USB_DEVICE_STATE_CHANGE_CALLBACKS;
FORCEINLINE
VOID
UDECX_USB_DEVICE_CALLBACKS_INIT(
    _Out_
        PUDECX_USB_DEVICE_STATE_CHANGE_CALLBACKS Callbacks
    )
{
    Callbacks->Size = sizeof(*Callbacks);
    Callbacks->EvtUsbDeviceLinkPowerEntry = NULL;
    Callbacks->EvtUsbDeviceLinkPowerExit = NULL;
    Callbacks->EvtUsbDeviceSetFunctionSuspendAndWake = NULL;
    Callbacks->EvtUsbDeviceReset = NULL;
    Callbacks->EvtUsbDeviceDefaultEndpointAdd = NULL;
    Callbacks->EvtUsbDeviceEndpointAdd = NULL;
    Callbacks->EvtUsbDeviceEndpointsConfigure = NULL;
}
typedef struct _UDECX_USB_DEVICE_PLUG_IN_OPTIONS {
    ULONG Size;
    ULONG Usb20PortNumber;
    ULONG Usb30PortNumber;
} UDECX_USB_DEVICE_PLUG_IN_OPTIONS, *PUDECX_USB_DEVICE_PLUG_IN_OPTIONS;
FORCEINLINE
VOID
UDECX_USB_DEVICE_PLUG_IN_OPTIONS_INIT(
    _Out_
        PUDECX_USB_DEVICE_PLUG_IN_OPTIONS Options
    )
{
    Options->Size = sizeof(*Options);
    Options->Usb20PortNumber = 0;
    Options->Usb30PortNumber = 0;
}
typedef
WDFAPI
PUDECXUSBDEVICE_INIT
(*PFN_UDECXUSBDEVICEINITALLOCATE)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE UdecxWdfDevice
    );
PUDECXUSBDEVICE_INIT
FORCEINLINE
UdecxUsbDeviceInitAllocate(
    _In_
    WDFDEVICE UdecxWdfDevice
    )
{
    return ((PFN_UDECXUSBDEVICEINITALLOCATE) UdecxFunctions[UdecxUsbDeviceInitAllocateTableIndex])(UdecxDriverGlobals, UdecxWdfDevice);
}
typedef
WDFAPI
VOID
(*PFN_UDECXUSBDEVICEINITSETSPEED)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PUDECXUSBDEVICE_INIT UdecxUsbDeviceInit,
    _In_
    UDECX_USB_DEVICE_SPEED UsbDeviceSpeed
    );
VOID
FORCEINLINE
UdecxUsbDeviceInitSetSpeed(
    _Inout_
    PUDECXUSBDEVICE_INIT UdecxUsbDeviceInit,
    _In_
    UDECX_USB_DEVICE_SPEED UsbDeviceSpeed
    )
{
    ((PFN_UDECXUSBDEVICEINITSETSPEED) UdecxFunctions[UdecxUsbDeviceInitSetSpeedTableIndex])(UdecxDriverGlobals, UdecxUsbDeviceInit, UsbDeviceSpeed);
}
typedef
WDFAPI
VOID
(*PFN_UDECXUSBDEVICEINITSETENDPOINTSTYPE)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PUDECXUSBDEVICE_INIT UdecxUsbDeviceInit,
    _In_
    UDECX_ENDPOINT_TYPE UdecxEndpointType
    );
VOID
FORCEINLINE
UdecxUsbDeviceInitSetEndpointsType(
    _Inout_
    PUDECXUSBDEVICE_INIT UdecxUsbDeviceInit,
    _In_
    UDECX_ENDPOINT_TYPE UdecxEndpointType
    )
{
    ((PFN_UDECXUSBDEVICEINITSETENDPOINTSTYPE) UdecxFunctions[UdecxUsbDeviceInitSetEndpointsTypeTableIndex])(UdecxDriverGlobals, UdecxUsbDeviceInit, UdecxEndpointType);
}
typedef
WDFAPI
VOID
(*PFN_UDECXUSBDEVICELINKPOWERENTRYCOMPLETE)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    UDECXUSBDEVICE UdecxUsbDevice,
    _In_
    NTSTATUS CompletionStatus
    );
VOID
FORCEINLINE
UdecxUsbDeviceLinkPowerEntryComplete(
    _In_
    UDECXUSBDEVICE UdecxUsbDevice,
    _In_
    NTSTATUS CompletionStatus
    )
{
    ((PFN_UDECXUSBDEVICELINKPOWERENTRYCOMPLETE) UdecxFunctions[UdecxUsbDeviceLinkPowerEntryCompleteTableIndex])(UdecxDriverGlobals, UdecxUsbDevice, CompletionStatus);
}
typedef
WDFAPI
VOID
(*PFN_UDECXUSBDEVICELINKPOWEREXITCOMPLETE)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    UDECXUSBDEVICE UdecxUsbDevice,
    _In_
    NTSTATUS CompletionStatus
    );
VOID
FORCEINLINE
UdecxUsbDeviceLinkPowerExitComplete(
    _In_
    UDECXUSBDEVICE UdecxUsbDevice,
    _In_
    NTSTATUS CompletionStatus
    )
{
    ((PFN_UDECXUSBDEVICELINKPOWEREXITCOMPLETE) UdecxFunctions[UdecxUsbDeviceLinkPowerExitCompleteTableIndex])(UdecxDriverGlobals, UdecxUsbDevice, CompletionStatus);
}
typedef
WDFAPI
VOID
(*PFN_UDECXUSBDEVICESETFUNCTIONSUSPENDANDWAKECOMPLETE)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    UDECXUSBDEVICE UdecxUsbDevice,
    _In_
    NTSTATUS CompletionStatus
    );
VOID
FORCEINLINE
UdecxUsbDeviceSetFunctionSuspendAndWakeComplete(
    _In_
    UDECXUSBDEVICE UdecxUsbDevice,
    _In_
    NTSTATUS CompletionStatus
    )
{
    ((PFN_UDECXUSBDEVICESETFUNCTIONSUSPENDANDWAKECOMPLETE) UdecxFunctions[UdecxUsbDeviceSetFunctionSuspendAndWakeCompleteTableIndex])(UdecxDriverGlobals, UdecxUsbDevice, CompletionStatus);
}
typedef
WDFAPI
VOID
(*PFN_UDECXUSBDEVICEINITSETSTATECHANGECALLBACKS)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PUDECXUSBDEVICE_INIT UdecxUsbDeviceInit,
    _In_
    PUDECX_USB_DEVICE_STATE_CHANGE_CALLBACKS Callbacks
    );
VOID
FORCEINLINE
UdecxUsbDeviceInitSetStateChangeCallbacks(
    _Inout_
    PUDECXUSBDEVICE_INIT UdecxUsbDeviceInit,
    _In_
    PUDECX_USB_DEVICE_STATE_CHANGE_CALLBACKS Callbacks
    )
{
    ((PFN_UDECXUSBDEVICEINITSETSTATECHANGECALLBACKS) UdecxFunctions[UdecxUsbDeviceInitSetStateChangeCallbacksTableIndex])(UdecxDriverGlobals, UdecxUsbDeviceInit, Callbacks);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_UDECXUSBDEVICEINITADDDESCRIPTOR)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PUDECXUSBDEVICE_INIT UdecxUsbDeviceInit,
    _In_reads_(DescriptorLength)
    PUCHAR Descriptor,
    _In_
    USHORT DescriptorLength
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
UdecxUsbDeviceInitAddDescriptor(
    _Inout_
    PUDECXUSBDEVICE_INIT UdecxUsbDeviceInit,
    _In_reads_(DescriptorLength)
    PUCHAR Descriptor,
    _In_
    USHORT DescriptorLength
    )
{
    return ((PFN_UDECXUSBDEVICEINITADDDESCRIPTOR) UdecxFunctions[UdecxUsbDeviceInitAddDescriptorTableIndex])(UdecxDriverGlobals, UdecxUsbDeviceInit, Descriptor, DescriptorLength);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_UDECXUSBDEVICEINITADDDESCRIPTORWITHINDEX)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PUDECXUSBDEVICE_INIT UdecxUsbDeviceInit,
    _In_reads_(DescriptorLength)
    PUCHAR Descriptor,
    _In_
    USHORT DescriptorLength,
    _In_
    UCHAR DescriptorIndex
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
UdecxUsbDeviceInitAddDescriptorWithIndex(
    _Inout_
    PUDECXUSBDEVICE_INIT UdecxUsbDeviceInit,
    _In_reads_(DescriptorLength)
    PUCHAR Descriptor,
    _In_
    USHORT DescriptorLength,
    _In_
    UCHAR DescriptorIndex
    )
{
    return ((PFN_UDECXUSBDEVICEINITADDDESCRIPTORWITHINDEX) UdecxFunctions[UdecxUsbDeviceInitAddDescriptorWithIndexTableIndex])(UdecxDriverGlobals, UdecxUsbDeviceInit, Descriptor, DescriptorLength, DescriptorIndex);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_UDECXUSBDEVICEINITADDSTRINGDESCRIPTOR)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PUDECXUSBDEVICE_INIT UdecxUsbDeviceInit,
    _In_
    PCUNICODE_STRING String,
    _In_
    UCHAR DescriptorIndex,
    _In_
    USHORT LanguageId
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
UdecxUsbDeviceInitAddStringDescriptor(
    _Inout_
    PUDECXUSBDEVICE_INIT UdecxUsbDeviceInit,
    _In_
    PCUNICODE_STRING String,
    _In_
    UCHAR DescriptorIndex,
    _In_
    USHORT LanguageId
    )
{
    return ((PFN_UDECXUSBDEVICEINITADDSTRINGDESCRIPTOR) UdecxFunctions[UdecxUsbDeviceInitAddStringDescriptorTableIndex])(UdecxDriverGlobals, UdecxUsbDeviceInit, String, DescriptorIndex, LanguageId);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_UDECXUSBDEVICEINITADDSTRINGDESCRIPTORRAW)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PUDECXUSBDEVICE_INIT UdecxUsbDeviceInit,
    _In_reads_(DescriptorLength)
    PUCHAR Descriptor,
    _In_
    USHORT DescriptorLength,
    _In_
    UCHAR DescriptorIndex,
    _In_
    USHORT LanguageId
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
UdecxUsbDeviceInitAddStringDescriptorRaw(
    _Inout_
    PUDECXUSBDEVICE_INIT UdecxUsbDeviceInit,
    _In_reads_(DescriptorLength)
    PUCHAR Descriptor,
    _In_
    USHORT DescriptorLength,
    _In_
    UCHAR DescriptorIndex,
    _In_
    USHORT LanguageId
    )
{
    return ((PFN_UDECXUSBDEVICEINITADDSTRINGDESCRIPTORRAW) UdecxFunctions[UdecxUsbDeviceInitAddStringDescriptorRawTableIndex])(UdecxDriverGlobals, UdecxUsbDeviceInit, Descriptor, DescriptorLength, DescriptorIndex, LanguageId);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_UDECXUSBDEVICECREATE)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PUDECXUSBDEVICE_INIT* UdecxUsbDeviceInit,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    UDECXUSBDEVICE* UdecxUsbDevice
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
UdecxUsbDeviceCreate(
    _Inout_
    PUDECXUSBDEVICE_INIT* UdecxUsbDeviceInit,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    UDECXUSBDEVICE* UdecxUsbDevice
    )
{
    return ((PFN_UDECXUSBDEVICECREATE) UdecxFunctions[UdecxUsbDeviceCreateTableIndex])(UdecxDriverGlobals, UdecxUsbDeviceInit, Attributes, UdecxUsbDevice);
}
typedef
WDFAPI
VOID
(*PFN_UDECXUSBDEVICEINITFREE)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    PUDECXUSBDEVICE_INIT UdecxUsbDeviceInit
    );
VOID
FORCEINLINE
UdecxUsbDeviceInitFree(
    _In_
    PUDECXUSBDEVICE_INIT UdecxUsbDeviceInit
    )
{
    ((PFN_UDECXUSBDEVICEINITFREE) UdecxFunctions[UdecxUsbDeviceInitFreeTableIndex])(UdecxDriverGlobals, UdecxUsbDeviceInit);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_UDECXUSBDEVICEPLUGIN)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    UDECXUSBDEVICE UdecxUsbDevice,
    _In_opt_
    PUDECX_USB_DEVICE_PLUG_IN_OPTIONS Options
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
UdecxUsbDevicePlugIn(
    _In_
    UDECXUSBDEVICE UdecxUsbDevice,
    _In_opt_
    PUDECX_USB_DEVICE_PLUG_IN_OPTIONS Options
    )
{
    return ((PFN_UDECXUSBDEVICEPLUGIN) UdecxFunctions[UdecxUsbDevicePlugInTableIndex])(UdecxDriverGlobals, UdecxUsbDevice, Options);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_UDECXUSBDEVICEPLUGOUTANDDELETE)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    UDECXUSBDEVICE UdecxUsbDevice
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
UdecxUsbDevicePlugOutAndDelete(
    _In_
    UDECXUSBDEVICE UdecxUsbDevice
    )
{
    return ((PFN_UDECXUSBDEVICEPLUGOUTANDDELETE) UdecxFunctions[UdecxUsbDevicePlugOutAndDeleteTableIndex])(UdecxDriverGlobals, UdecxUsbDevice);
}
typedef
WDFAPI
VOID
(*PFN_UDECXUSBDEVICESIGNALWAKE)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    UDECXUSBDEVICE UdecxUsbDevice
    );
VOID
FORCEINLINE
UdecxUsbDeviceSignalWake(
    _In_
    UDECXUSBDEVICE UdecxUsbDevice
    )
{
    ((PFN_UDECXUSBDEVICESIGNALWAKE) UdecxFunctions[UdecxUsbDeviceSignalWakeTableIndex])(UdecxDriverGlobals, UdecxUsbDevice);
}
typedef
WDFAPI
VOID
(*PFN_UDECXUSBDEVICESIGNALFUNCTIONWAKE)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    UDECXUSBDEVICE UdecxUsbDevice,
    _In_
    ULONG Interface
    );
VOID
FORCEINLINE
UdecxUsbDeviceSignalFunctionWake(
    _In_
    UDECXUSBDEVICE UdecxUsbDevice,
    _In_
    ULONG Interface
    )
{
    ((PFN_UDECXUSBDEVICESIGNALFUNCTIONWAKE) UdecxFunctions[UdecxUsbDeviceSignalFunctionWakeTableIndex])(UdecxDriverGlobals, UdecxUsbDevice, Interface);
}
WDF_EXTERN_C_END
