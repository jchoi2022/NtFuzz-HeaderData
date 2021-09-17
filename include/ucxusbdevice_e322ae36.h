    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef struct _USBDEVICE_MGMT_HEADER {
    ULONG Size;
    UCXUSBDEVICE Hub;
    UCXUSBDEVICE UsbDevice;
} USBDEVICE_MGMT_HEADER, *PUSBDEVICE_MGMT_HEADER;
typedef struct _ADDRESS0_OWNERSHIP_ACQUIRE {
    USBDEVICE_MGMT_HEADER Header;
} ADDRESS0_OWNERSHIP_ACQUIRE, *PADDRESS0_OWNERSHIP_ACQUIRE;
typedef struct _USBDEVICE_ENABLE_FAILURE_FLAGS {
    ULONG InsufficientHardwareResourcesForDefaultEndpoint:1;
    ULONG InsufficientHardwareResourcesForDevice:1;
    ULONG Reserved:30;
} USBDEVICE_ENABLE_FAILURE_FLAGS;
typedef struct _USBDEVICE_ENABLE {
    USBDEVICE_MGMT_HEADER Header;
    UCXENDPOINT DefaultEndpoint;
    USBDEVICE_ENABLE_FAILURE_FLAGS FailureFlags;
} USBDEVICE_ENABLE, *PUSBDEVICE_ENABLE;
typedef struct _USBDEVICE_RESET {
    USBDEVICE_MGMT_HEADER Header;
    UCXENDPOINT DefaultEndpoint;
    ULONG EndpointsToDisableCount;
    UCXENDPOINT * EndpointsToDisable;
} USBDEVICE_RESET, *PUSBDEVICE_RESET;
typedef struct _USBDEVICE_PURGEIO {
    USBDEVICE_MGMT_HEADER Header;
    BOOLEAN OnSuspend;
} USBDEVICE_PURGEIO, *PUSBDEVICE_PURGEIO;
typedef struct _USBDEVICE_ABORTIO {
    USBDEVICE_MGMT_HEADER Header;
} USBDEVICE_ABORTIO, *PUSBDEVICE_ABORTIO;
typedef struct _USBDEVICE_STARTIO {
    USBDEVICE_MGMT_HEADER Header;
} USBDEVICE_STARTIO, *PUSBDEVICE_STARTIO;
typedef struct _USBDEVICE_TREE_PURGEIO {
    USBDEVICE_MGMT_HEADER Header;
} USBDEVICE_TREE_PURGEIO, *PUSBDEVICE_TREE_PURGEIO;
typedef struct _USBDEVICE_ADDRESS {
    USBDEVICE_MGMT_HEADER Header;
    ULONG Reserved;
    ULONG Address;
} USBDEVICE_ADDRESS, *PUSBDEVICE_ADDRESS;
typedef struct _USBDEVICE_UPDATE_FLAGS {
    ULONG UpdateDeviceDescriptor:1;
    ULONG UpdateBosDescriptor:1;
    ULONG UpdateMaxExitLatency:1;
    ULONG UpdateIsHub:1;
    ULONG UpdateAllowIoOnInvalidPipeHandles:1;
    ULONG Update20HardwareLpmParameters:1;
    ULONG UpdateRootPortResumeTime:1;
    ULONG Reserved:26;
} USBDEVICE_UPDATE_FLAGS;
typedef struct _USBDEVICE_UPDATE_FAILURE_FLAGS {
    ULONG MaxExitLatencyTooLarge:1;
    ULONG Reserved:31;
} USBDEVICE_UPDATE_FAILURE_FLAGS;
typedef struct _USBDEVICE_UPDATE_20_HARDWARE_LPM_PARAMETERS {
    ULONG HardwareLpmEnable:1;
    ULONG RemoteWakeEnable:1;
    ULONG HostInitiatedResumeDurationMode:1;
    ULONG BestEffortServiceLatency:4;
    ULONG BestEffortServiceLatencyDeep:4;
    ULONG L1Timeout:8;
    ULONG Reserved:13;
} USBDEVICE_UPDATE_20_HARDWARE_LPM_PARAMETERS;
typedef struct _USBDEVICE_UPDATE {
    USBDEVICE_MGMT_HEADER Header;
    USBDEVICE_UPDATE_FLAGS Flags;
    PUSB_DEVICE_DESCRIPTOR DeviceDescriptor;
    PUSB_BOS_DESCRIPTOR BosDescriptor;
    ULONG MaxExitLatency;
    BOOLEAN IsHub;
    USBDEVICE_UPDATE_FAILURE_FLAGS FailureFlags;
    USBDEVICE_UPDATE_20_HARDWARE_LPM_PARAMETERS Usb20HardwareLpmParameters;
    USHORT RootPortResumeTime;
} USBDEVICE_UPDATE, *PUSBDEVICE_UPDATE;
typedef struct _USBDEVICE_HUB_INFO {
    USBDEVICE_MGMT_HEADER Header;
    ULONG NumberOfPorts;
    ULONG NumberOfTTs;
    ULONG TTThinkTime;
} USBDEVICE_HUB_INFO, *PUSBDEVICE_HUB_INFO;
typedef enum _UCX_USBDEVICE_RECOVERY_ACTION {
    UcxUsbDeviceRecoverActionNone = 0x00,
    UcxUsbDeviceRecoverActionFunctionLevelDeviceReset = 0x01,
    UcxUsbDeviceRecoverActionPlatformLevelDeviceReset = 0x02
} UCX_USBDEVICE_RECOVERY_ACTION;
typedef struct _USBDEVICE_DISABLE {
    USBDEVICE_MGMT_HEADER Header;
    UCXENDPOINT DefaultEndpoint;
    UCX_USBDEVICE_RECOVERY_ACTION UsbDeviceRecoveryAction;
} USBDEVICE_DISABLE, *PUSBDEVICE_DISABLE;
typedef struct _USB_DEVICE_PORT_PATH {
    ULONG Size;
    ULONG PortPathDepth;
    ULONG TTHubDepth;
    ULONG PortPath[ MAX_USB_DEVICE_DEPTH ];
} USB_DEVICE_PORT_PATH, *PUSB_DEVICE_PORT_PATH;
typedef struct _UCXUSBDEVICE_INFO {
    ULONG Size;
    USB_DEVICE_SPEED DeviceSpeed;
    UCXUSBDEVICE TtHub;
    USB_DEVICE_PORT_PATH PortPath;
} UCXUSBDEVICE_INFO, *PUCXUSBDEVICE_INFO;
typedef enum _UCX_USBDEVICE_CHARACTERISTIC_TYPE {
    UCX_USBDEVICE_CHARACTERISTIC_TYPE_PATH_DELAY = 0x01
} UCX_USBDEVICE_CHARACTERISTIC_TYPE;
typedef struct _UCX_USBDEVICE_CHARACTERISTIC_PATH_DELAY {
    ULONG MaximumSendPathDelayInMilliSeconds;
    ULONG MaximumCompletionPathDelayInMilliSeconds;
} UCX_USBDEVICE_CHARACTERISTIC_PATH_DELAY, *PUCX_USBDEVICE_CHARACTERISTIC_PATH_DELAY;
typedef struct _UCX_USBDEVICE_CHARACTERISTIC {
    ULONG Size;
    UCX_USBDEVICE_CHARACTERISTIC_TYPE CharacteristicType;
    union {
        UCX_USBDEVICE_CHARACTERISTIC_PATH_DELAY PathDelay;
    };
} UCX_USBDEVICE_CHARACTERISTIC, *PUCX_USBDEVICE_CHARACTERISTIC;
typedef
_Function_class_(EVT_UCX_USBDEVICE_ENDPOINTS_CONFIGURE)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_USBDEVICE_ENDPOINTS_CONFIGURE(
    __in
    UCXCONTROLLER UcxController,
    __in
    WDFREQUEST Request
);
typedef EVT_UCX_USBDEVICE_ENDPOINTS_CONFIGURE *PFN_UCX_USBDEVICE_ENDPOINTS_CONFIGURE;
typedef
_Function_class_(EVT_UCX_USBDEVICE_ENABLE)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_USBDEVICE_ENABLE(
    __in
    UCXCONTROLLER UcxController,
    __in
    WDFREQUEST Request
);
typedef EVT_UCX_USBDEVICE_ENABLE *PFN_UCX_USBDEVICE_ENABLE;
typedef
_Function_class_(EVT_UCX_USBDEVICE_DISABLE)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_USBDEVICE_DISABLE(
    __in
    UCXCONTROLLER UcxController,
    __in
    WDFREQUEST Request
);
typedef EVT_UCX_USBDEVICE_DISABLE *PFN_UCX_USBDEVICE_DISABLE;
typedef
_Function_class_(EVT_UCX_USBDEVICE_RESET)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_USBDEVICE_RESET(
    __in
    UCXCONTROLLER UcxController,
    __in
    WDFREQUEST Request
);
typedef EVT_UCX_USBDEVICE_RESET *PFN_UCX_USBDEVICE_RESET;
typedef
_Function_class_(EVT_UCX_USBDEVICE_ADDRESS)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_USBDEVICE_ADDRESS(
    __in
    UCXCONTROLLER UcxController,
    __in
    WDFREQUEST Request
);
typedef EVT_UCX_USBDEVICE_ADDRESS *PFN_UCX_USBDEVICE_ADDRESS;
typedef
_Function_class_(EVT_UCX_USBDEVICE_UPDATE)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_USBDEVICE_UPDATE(
    __in
    UCXCONTROLLER UcxController,
    __in
    WDFREQUEST Request
);
typedef EVT_UCX_USBDEVICE_UPDATE *PFN_UCX_USBDEVICE_UPDATE;
typedef
_Function_class_(EVT_UCX_USBDEVICE_HUB_INFO)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_USBDEVICE_HUB_INFO(
    __in
    UCXCONTROLLER UcxController,
    __in
    WDFREQUEST Request
);
typedef EVT_UCX_USBDEVICE_HUB_INFO *PFN_UCX_USBDEVICE_HUB_INFO;
typedef
_Function_class_(EVT_UCX_USBDEVICE_DEFAULT_ENDPOINT_ADD)
_IRQL_requires_same_
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
EVT_UCX_USBDEVICE_DEFAULT_ENDPOINT_ADD(
    __in
    UCXCONTROLLER UcxController,
    __in
    UCXUSBDEVICE UcxUsbDevice,
    __in
    ULONG MaxPacketSize,
    __in
    PUCXENDPOINT_INIT UcxEndpointInit
);
typedef EVT_UCX_USBDEVICE_DEFAULT_ENDPOINT_ADD *PFN_UCX_USBDEVICE_DEFAULT_ENDPOINT_ADD;
typedef
_Function_class_(EVT_UCX_USBDEVICE_ENDPOINT_ADD)
_IRQL_requires_same_
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
EVT_UCX_USBDEVICE_ENDPOINT_ADD(
    __in
    UCXCONTROLLER UcxController,
    __in
    UCXUSBDEVICE UcxUsbDevice,
    __in_bcount(UsbEndpointDescriptorBufferLength)
    PUSB_ENDPOINT_DESCRIPTOR UsbEndpointDescriptor,
    __in
    ULONG UsbEndpointDescriptorBufferLength,
    __in_opt
    PUSB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR SuperSpeedEndpointCompanionDescriptor,
    __in
    PUCXENDPOINT_INIT UcxEndpointInit
);
typedef EVT_UCX_USBDEVICE_ENDPOINT_ADD *PFN_UCX_USBDEVICE_ENDPOINT_ADD;
typedef
_Function_class_(EVT_UCX_USBDEVICE_SUSPEND)
_IRQL_requires_same_
__drv_requiresIRQL(PASSIVE_LEVEL)
VOID
EVT_UCX_USBDEVICE_SUSPEND(
    __in
    UCXCONTROLLER UcxController,
    __in
    UCXUSBDEVICE UcxUsbDevice
);
typedef EVT_UCX_USBDEVICE_SUSPEND *PFN_UCX_USBDEVICE_SUSPEND;
typedef
_Function_class_(EVT_UCX_USBDEVICE_RESUME)
_IRQL_requires_same_
__drv_requiresIRQL(PASSIVE_LEVEL)
VOID
EVT_UCX_USBDEVICE_RESUME(
    __in
    UCXCONTROLLER UcxController,
    __in
    UCXUSBDEVICE UcxUsbDevice
);
typedef EVT_UCX_USBDEVICE_RESUME *PFN_UCX_USBDEVICE_RESUME;
typedef
_Function_class_(EVT_UCX_USBDEVICE_GET_CHARACTERISTIC)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
NTSTATUS
EVT_UCX_USBDEVICE_GET_CHARACTERISTIC(
    __in
    UCXCONTROLLER UcxController,
    __in
    UCXUSBDEVICE UcxUsbDevice,
    __inout
    PUCX_USBDEVICE_CHARACTERISTIC UcxUsbDeviceCharacteristic
);
typedef EVT_UCX_USBDEVICE_GET_CHARACTERISTIC *PFN_UCX_USBDEVICE_GET_CHARACTERISTIC;
typedef struct _UCX_USBDEVICE_EVENT_CALLBACKS {
    ULONG Size;
    PFN_UCX_USBDEVICE_ENDPOINTS_CONFIGURE EvtUsbDeviceEndpointsConfigure;
    PFN_UCX_USBDEVICE_ENABLE EvtUsbDeviceEnable;
    PFN_UCX_USBDEVICE_DISABLE EvtUsbDeviceDisable;
    PFN_UCX_USBDEVICE_RESET EvtUsbDeviceReset;
    PFN_UCX_USBDEVICE_ADDRESS EvtUsbDeviceAddress;
    PFN_UCX_USBDEVICE_UPDATE EvtUsbDeviceUpdate;
    PFN_UCX_USBDEVICE_HUB_INFO EvtUsbDeviceHubInfo;
    PFN_UCX_USBDEVICE_DEFAULT_ENDPOINT_ADD EvtUsbDeviceDefaultEndpointAdd;
    PFN_UCX_USBDEVICE_ENDPOINT_ADD EvtUsbDeviceEndpointAdd;
    PFN_UCX_USBDEVICE_SUSPEND EvtUsbDeviceSuspend;
    PFN_UCX_USBDEVICE_RESUME EvtUsbDeviceResume;
    PFN_UCX_USBDEVICE_GET_CHARACTERISTIC EvtUsbDeviceGetCharacteristic;
} UCX_USBDEVICE_EVENT_CALLBACKS, *PUCX_USBDEVICE_EVENT_CALLBACKS;
VOID
FORCEINLINE
UCX_USBDEVICE_EVENT_CALLBACKS_INIT(
    __out
        PUCX_USBDEVICE_EVENT_CALLBACKS Callbacks,
    __in
        PFN_UCX_USBDEVICE_ENDPOINTS_CONFIGURE EvtUsbDeviceEndpointsConfigure,
    __in
        PFN_UCX_USBDEVICE_ENABLE EvtUsbDeviceEnable,
    __in
        PFN_UCX_USBDEVICE_DISABLE EvtUsbDeviceDisable,
    __in
        PFN_UCX_USBDEVICE_RESET EvtUsbDeviceReset,
    __in
        PFN_UCX_USBDEVICE_ADDRESS EvtUsbDeviceAddress,
    __in
        PFN_UCX_USBDEVICE_UPDATE EvtUsbDeviceUpdate,
    __in
        PFN_UCX_USBDEVICE_HUB_INFO EvtUsbDeviceHubInfo,
    __in
        PFN_UCX_USBDEVICE_DEFAULT_ENDPOINT_ADD EvtUsbDeviceDefaultEndpointAdd,
    __in
        PFN_UCX_USBDEVICE_ENDPOINT_ADD EvtUsbDeviceEndpointAdd
    )
{
    RtlZeroMemory(Callbacks, sizeof(UCX_USBDEVICE_EVENT_CALLBACKS));
    Callbacks->Size = sizeof(UCX_USBDEVICE_EVENT_CALLBACKS);
    Callbacks->EvtUsbDeviceEndpointsConfigure = EvtUsbDeviceEndpointsConfigure;
    Callbacks->EvtUsbDeviceEnable = EvtUsbDeviceEnable;
    Callbacks->EvtUsbDeviceDisable = EvtUsbDeviceDisable;
    Callbacks->EvtUsbDeviceReset = EvtUsbDeviceReset;
    Callbacks->EvtUsbDeviceAddress = EvtUsbDeviceAddress;
    Callbacks->EvtUsbDeviceUpdate = EvtUsbDeviceUpdate;
    Callbacks->EvtUsbDeviceHubInfo = EvtUsbDeviceHubInfo;
    Callbacks->EvtUsbDeviceDefaultEndpointAdd = EvtUsbDeviceDefaultEndpointAdd;
    Callbacks->EvtUsbDeviceEndpointAdd = EvtUsbDeviceEndpointAdd;
}
typedef PFN_UCX_USBDEVICE_ADDRESS PEVT_UCX_USBDEVICE_ADDRESS;
typedef PFN_UCX_USBDEVICE_DEFAULT_ENDPOINT_ADD PEVT_UCX_USBDEVICE_DEFAULT_ENDPOINT_ADD;
typedef PFN_UCX_USBDEVICE_DISABLE PEVT_UCX_USBDEVICE_DISABLE;
typedef PFN_UCX_USBDEVICE_ENABLE PEVT_UCX_USBDEVICE_ENABLE;
typedef PFN_UCX_USBDEVICE_ENDPOINT_ADD PEVT_UCX_USBDEVICE_ENDPOINT_ADD;
typedef PFN_UCX_USBDEVICE_ENDPOINTS_CONFIGURE PEVT_UCX_USBDEVICE_ENDPOINTS_CONFIGURE;
typedef PFN_UCX_USBDEVICE_HUB_INFO PEVT_UCX_USBDEVICE_HUB_INFO;
typedef PFN_UCX_USBDEVICE_RESET PEVT_UCX_USBDEVICE_RESET;
typedef PFN_UCX_USBDEVICE_UPDATE PEVT_UCX_USBDEVICE_UPDATE;
typedef PFN_UCX_USBDEVICE_GET_CHARACTERISTIC PEVT_UCX_USBDEVICE_GET_CHARACTERISTIC;
typedef
_Must_inspect_result_
__drv_requiresIRQL(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCXUSBDEVICECREATE)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    UCXCONTROLLER Controller,
    __deref_inout
    PUCXUSBDEVICE_INIT* UsbDeviceInit,
    __in_opt
    PWDF_OBJECT_ATTRIBUTES Attributes,
    __out
    UCXUSBDEVICE* UsbDevice
    );
_Must_inspect_result_
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcxUsbDeviceCreate(
    __in
    UCXCONTROLLER Controller,
    __deref_inout
    PUCXUSBDEVICE_INIT* UsbDeviceInit,
    __in_opt
    PWDF_OBJECT_ATTRIBUTES Attributes,
    __out
    UCXUSBDEVICE* UsbDevice
    )
{
    return ((PFN_UCXUSBDEVICECREATE) UcxFunctions[UcxUsbDeviceCreateTableIndex])(UcxDriverGlobals, Controller, UsbDeviceInit, Attributes, UsbDevice);
}
typedef
WDFAPI
VOID
(*PFN_UCXUSBDEVICEINITSETEVENTCALLBACKS)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __inout
    PUCXUSBDEVICE_INIT UsbDeviceInit,
    __in
    PUCX_USBDEVICE_EVENT_CALLBACKS EventCallbacks
    );
VOID
FORCEINLINE
UcxUsbDeviceInitSetEventCallbacks(
    __inout
    PUCXUSBDEVICE_INIT UsbDeviceInit,
    __in
    PUCX_USBDEVICE_EVENT_CALLBACKS EventCallbacks
    )
{
    ((PFN_UCXUSBDEVICEINITSETEVENTCALLBACKS) UcxFunctions[UcxUsbDeviceInitSetEventCallbacksTableIndex])(UcxDriverGlobals, UsbDeviceInit, EventCallbacks);
}
typedef
__drv_maxIRQL(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_UCXUSBDEVICEREMOTEWAKENOTIFICATION)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    UCXUSBDEVICE UsbDevice,
    __in
    ULONG Interface
    );
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxUsbDeviceRemoteWakeNotification(
    __in
    UCXUSBDEVICE UsbDevice,
    __in
    ULONG Interface
    )
{
    ((PFN_UCXUSBDEVICEREMOTEWAKENOTIFICATION) UcxFunctions[UcxUsbDeviceRemoteWakeNotificationTableIndex])(UcxDriverGlobals, UsbDevice, Interface);
}
WDF_EXTERN_C_END
