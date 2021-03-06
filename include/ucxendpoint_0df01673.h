    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef enum _ENDPOINT_RESET_FLAGS {
    FlagEndpointResetPreserveTransferState = 0x1,
} ENDPOINT_RESET_FLAGS;
typedef struct _ENDPOINTS_CONFIGURE_FAILURE_FLAGS {
    ULONG InsufficientBandwidth:1;
    ULONG InsufficientHardwareResourcesForEndpoints:1;
    ULONG MaxExitLatencyTooLarge:1;
    ULONG Reserved:29;
} ENDPOINTS_CONFIGURE_FAILURE_FLAGS;
typedef struct _ENDPOINTS_CONFIGURE {
    USBDEVICE_MGMT_HEADER Header;
    ULONG EndpointsToEnableCount;
    _Field_size_(EndpointsToEnableCount)
    UCXENDPOINT * EndpointsToEnable;
    ULONG EndpointsToDisableCount;
    _Field_size_(EndpointsToDisableCount)
    UCXENDPOINT * EndpointsToDisable;
    ULONG EndpointsEnabledAndUnchangedCount;
    _Field_size_(EndpointsEnabledAndUnchangedCount)
    UCXENDPOINT * EndpointsEnabledAndUnchanged;
    ENDPOINTS_CONFIGURE_FAILURE_FLAGS FailureFlags;
    ULONG ExitLatencyDelta;
    UCHAR ConfigurationValue;
    UCHAR InterfaceNumber;
    UCHAR AlternateSetting;
} ENDPOINTS_CONFIGURE, *PENDPOINTS_CONFIGURE;
typedef struct _ENDPOINT_RESET {
    USBDEVICE_MGMT_HEADER Header;
    UCXENDPOINT Endpoint;
    ENDPOINT_RESET_FLAGS Flags;
} ENDPOINT_RESET, *PENDPOINT_RESET;
typedef struct _DEFAULT_ENDPOINT_UPDATE {
    USBDEVICE_MGMT_HEADER Header;
    UCXENDPOINT DefaultEndpoint;
    ULONG MaxPacketSize;
} DEFAULT_ENDPOINT_UPDATE, *PDEFAULT_ENDPOINT_UPDATE;
typedef
_Function_class_(EVT_UCX_ENDPOINT_RESET)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ENDPOINT_RESET(
    __in
    UCXCONTROLLER UcxController,
    __in
    UCXENDPOINT UcxEndpoint,
    __in
    WDFREQUEST Request
);
typedef EVT_UCX_ENDPOINT_RESET *PFN_UCX_ENDPOINT_RESET;
typedef
_Function_class_(EVT_UCX_ENDPOINT_PURGE)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ENDPOINT_PURGE(
    __in
    UCXCONTROLLER UcxController,
    __in
    UCXENDPOINT UcxEndpoint
);
typedef EVT_UCX_ENDPOINT_PURGE *PFN_UCX_ENDPOINT_PURGE;
typedef
_Function_class_(EVT_UCX_ENDPOINT_START)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ENDPOINT_START(
    __in
    UCXCONTROLLER UcxController,
    __in
    UCXENDPOINT UcxEndpoint
);
typedef EVT_UCX_ENDPOINT_START *PFN_UCX_ENDPOINT_START;
typedef
_Function_class_(EVT_UCX_ENDPOINT_ABORT)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ENDPOINT_ABORT(
    __in
    UCXCONTROLLER UcxController,
    __in
    UCXENDPOINT UcxEndpoint
);
typedef EVT_UCX_ENDPOINT_ABORT *PFN_UCX_ENDPOINT_ABORT;
typedef
_Function_class_(EVT_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS(
    __in
    UCXENDPOINT UcxEndpoint
);
typedef EVT_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS *PFN_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS;
typedef
_Function_class_(EVT_UCX_ENDPOINT_STATIC_STREAMS_ADD)
_IRQL_requires_same_
__drv_requiresIRQL(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS
EVT_UCX_ENDPOINT_STATIC_STREAMS_ADD(
    __in
    UCXENDPOINT UcxEndpoint,
    __in
    ULONG NumberOfStreams,
    __in
    PUCXSSTREAMS_INIT UcxStaticStreamsInit
);
typedef EVT_UCX_ENDPOINT_STATIC_STREAMS_ADD *PFN_UCX_ENDPOINT_STATIC_STREAMS_ADD;
typedef
_Function_class_(EVT_UCX_ENDPOINT_STATIC_STREAMS_ENABLE)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ENDPOINT_STATIC_STREAMS_ENABLE(
    __in
    UCXENDPOINT UcxEndpoint,
    __in
    UCXSSTREAMS UcxStaticStreams,
    __in
    WDFREQUEST Request
);
typedef EVT_UCX_ENDPOINT_STATIC_STREAMS_ENABLE *PFN_UCX_ENDPOINT_STATIC_STREAMS_ENABLE;
typedef
_Function_class_(EVT_UCX_ENDPOINT_STATIC_STREAMS_DISABLE)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ENDPOINT_STATIC_STREAMS_DISABLE(
    __in
    UCXENDPOINT UcxEndpoint,
    __in
    UCXSSTREAMS UcxStaticStreams,
    __in
    WDFREQUEST Request
);
typedef EVT_UCX_ENDPOINT_STATIC_STREAMS_DISABLE *PFN_UCX_ENDPOINT_STATIC_STREAMS_DISABLE;
typedef
_Function_class_(EVT_UCX_DEFAULT_ENDPOINT_UPDATE)
_IRQL_requires_same_
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_DEFAULT_ENDPOINT_UPDATE(
    __in
    UCXCONTROLLER UcxController,
    __in
    WDFREQUEST Request
);
typedef EVT_UCX_DEFAULT_ENDPOINT_UPDATE *PFN_UCX_DEFAULT_ENDPOINT_UPDATE;
typedef struct _UCX_ENDPOINT_EVENT_CALLBACKS {
    ULONG Size;
    PFN_UCX_ENDPOINT_PURGE EvtEndpointPurge;
    PFN_UCX_ENDPOINT_START EvtEndpointStart;
    PFN_UCX_ENDPOINT_ABORT EvtEndpointAbort;
    PFN_UCX_ENDPOINT_RESET EvtEndpointReset;
    PFN_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS EvtEndpointOkToCancelTransfers;
    PFN_UCX_ENDPOINT_STATIC_STREAMS_ADD EvtEndpointStaticStreamsAdd;
    PFN_UCX_ENDPOINT_STATIC_STREAMS_ENABLE EvtEndpointStaticStreamsEnable;
    PFN_UCX_ENDPOINT_STATIC_STREAMS_DISABLE EvtEndpointStaticStreamsDisable;
    HANDLE Reserved1;
} UCX_ENDPOINT_EVENT_CALLBACKS, *PUCX_ENDPOINT_EVENT_CALLBACKS;
VOID
FORCEINLINE
UCX_ENDPOINT_EVENT_CALLBACKS_INIT
(
    __out
        PUCX_ENDPOINT_EVENT_CALLBACKS Callbacks,
    __in
        PFN_UCX_ENDPOINT_PURGE EvtEndpointPurge,
    __in
        PFN_UCX_ENDPOINT_START EvtEndpointStart,
    __in
        PFN_UCX_ENDPOINT_ABORT EvtEndpointAbort,
    __in
        PFN_UCX_ENDPOINT_RESET EvtEndpointReset,
    __in
        PFN_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS EvtEndpointOkToCancelTransfers,
    __in
        PFN_UCX_ENDPOINT_STATIC_STREAMS_ADD EvtEndpointStaticStreamsAdd,
    __in
        PFN_UCX_ENDPOINT_STATIC_STREAMS_ENABLE EvtEndpointStaticStreamsEnable,
    __in
        PFN_UCX_ENDPOINT_STATIC_STREAMS_DISABLE EvtEndpointStaticStreamsDisable
)
{
    RtlZeroMemory(Callbacks, sizeof(UCX_ENDPOINT_EVENT_CALLBACKS));
    Callbacks->Size = sizeof(UCX_ENDPOINT_EVENT_CALLBACKS);
    Callbacks->EvtEndpointPurge = EvtEndpointPurge;
    Callbacks->EvtEndpointStart = EvtEndpointStart;
    Callbacks->EvtEndpointAbort = EvtEndpointAbort;
    Callbacks->EvtEndpointReset = EvtEndpointReset;
    Callbacks->EvtEndpointOkToCancelTransfers = EvtEndpointOkToCancelTransfers;
    Callbacks->EvtEndpointStaticStreamsAdd = EvtEndpointStaticStreamsAdd;
    Callbacks->EvtEndpointStaticStreamsEnable = EvtEndpointStaticStreamsEnable;
    Callbacks->EvtEndpointStaticStreamsDisable = EvtEndpointStaticStreamsDisable;
}
typedef struct _UCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS {
    ULONG Size;
    PFN_UCX_ENDPOINT_PURGE EvtEndpointPurge;
    PFN_UCX_ENDPOINT_START EvtEndpointStart;
    PFN_UCX_ENDPOINT_ABORT EvtEndpointAbort;
    PFN_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS EvtEndpointOkToCancelTransfers;
    PFN_UCX_DEFAULT_ENDPOINT_UPDATE EvtDefaultEndpointUpdate;
    HANDLE Reserved1;
} UCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS, *PUCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS;
VOID
FORCEINLINE
UCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS_INIT
(
    __out
        PUCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS Callbacks,
    __in
        PFN_UCX_ENDPOINT_PURGE EvtEndpointPurge,
    __in
        PFN_UCX_ENDPOINT_START EvtEndpointStart,
    __in
        PFN_UCX_ENDPOINT_ABORT EvtEndpointAbort,
    __in
        PFN_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS EvtEndpointOkToCancelTransfers,
    __in
        PFN_UCX_DEFAULT_ENDPOINT_UPDATE EvtDefaultEndpointUpdate
    )
{
    RtlZeroMemory(Callbacks, sizeof(UCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS));
    Callbacks->Size = sizeof(UCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS);
    Callbacks->EvtEndpointPurge = EvtEndpointPurge;
    Callbacks->EvtEndpointStart = EvtEndpointStart;
    Callbacks->EvtEndpointAbort = EvtEndpointAbort;
    Callbacks->EvtEndpointOkToCancelTransfers = EvtEndpointOkToCancelTransfers;
    Callbacks->EvtDefaultEndpointUpdate = EvtDefaultEndpointUpdate;
}
typedef PFN_UCX_DEFAULT_ENDPOINT_UPDATE PEVT_UCX_DEFAULT_ENDPOINT_UPDATE;
typedef PFN_UCX_ENDPOINT_ABORT PEVT_UCX_ENDPOINT_ABORT;
typedef PFN_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS PEVT_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS;
typedef PFN_UCX_ENDPOINT_PURGE PEVT_UCX_ENDPOINT_PURGE;
typedef PFN_UCX_ENDPOINT_RESET PEVT_UCX_ENDPOINT_RESET;
typedef PFN_UCX_ENDPOINT_START PEVT_UCX_ENDPOINT_START;
typedef PFN_UCX_ENDPOINT_STATIC_STREAMS_ADD PEVT_UCX_ENDPOINT_STATIC_STREAMS_ADD;
typedef PFN_UCX_ENDPOINT_STATIC_STREAMS_DISABLE PEVT_UCX_ENDPOINT_STATIC_STREAMS_DISABLE;
typedef PFN_UCX_ENDPOINT_STATIC_STREAMS_ENABLE PEVT_UCX_ENDPOINT_STATIC_STREAMS_ENABLE;
typedef
_Must_inspect_result_
__drv_requiresIRQL(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCXENDPOINTCREATE)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    UCXUSBDEVICE UsbDevice,
    __deref_inout_opt
    PUCXENDPOINT_INIT* EndpointInit,
    __in_opt
    PWDF_OBJECT_ATTRIBUTES Attributes,
    __out
    UCXENDPOINT* Endpoint
    );
_Must_inspect_result_
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcxEndpointCreate(
    __in
    UCXUSBDEVICE UsbDevice,
    __deref_inout_opt
    PUCXENDPOINT_INIT* EndpointInit,
    __in_opt
    PWDF_OBJECT_ATTRIBUTES Attributes,
    __out
    UCXENDPOINT* Endpoint
    )
{
    return ((PFN_UCXENDPOINTCREATE) UcxFunctions[UcxEndpointCreateTableIndex])(UcxDriverGlobals, UsbDevice, EndpointInit, Attributes, Endpoint);
}
typedef
_Must_inspect_result_
__drv_maxIRQL(DISPATCH_LEVEL)
WDFAPI
UCXSSTREAMS
(*PFN_UCXENDPOINTGETSTATICSTREAMSREFERENCED)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    UCXENDPOINT Endpoint,
    __in
    PVOID Tag
    );
_Must_inspect_result_
__drv_maxIRQL(DISPATCH_LEVEL)
UCXSSTREAMS
FORCEINLINE
UcxEndpointGetStaticStreamsReferenced(
    __in
    UCXENDPOINT Endpoint,
    __in
    PVOID Tag
    )
{
    return ((PFN_UCXENDPOINTGETSTATICSTREAMSREFERENCED) UcxFunctions[UcxEndpointGetStaticStreamsReferencedTableIndex])(UcxDriverGlobals, Endpoint, Tag);
}
typedef
__drv_maxIRQL(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_UCXENDPOINTNEEDTOCANCELTRANSFERS)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    UCXENDPOINT Endpoint
    );
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxEndpointNeedToCancelTransfers(
    __in
    UCXENDPOINT Endpoint
    )
{
    ((PFN_UCXENDPOINTNEEDTOCANCELTRANSFERS) UcxFunctions[UcxEndpointNeedToCancelTransfersTableIndex])(UcxDriverGlobals, Endpoint);
}
typedef
WDFAPI
VOID
(*PFN_UCXENDPOINTINITSETEVENTCALLBACKS)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __inout
    PUCXENDPOINT_INIT EndpointInit,
    __in
    PUCX_ENDPOINT_EVENT_CALLBACKS EventCallbacks
    );
VOID
FORCEINLINE
UcxEndpointInitSetEventCallbacks(
    __inout
    PUCXENDPOINT_INIT EndpointInit,
    __in
    PUCX_ENDPOINT_EVENT_CALLBACKS EventCallbacks
    )
{
    ((PFN_UCXENDPOINTINITSETEVENTCALLBACKS) UcxFunctions[UcxEndpointInitSetEventCallbacksTableIndex])(UcxDriverGlobals, EndpointInit, EventCallbacks);
}
typedef
WDFAPI
VOID
(*PFN_UCXDEFAULTENDPOINTINITSETEVENTCALLBACKS)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __inout
    PUCXENDPOINT_INIT EndpointInit,
    __in
    PUCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS EventCallbacks
    );
VOID
FORCEINLINE
UcxDefaultEndpointInitSetEventCallbacks(
    __inout
    PUCXENDPOINT_INIT EndpointInit,
    __in
    PUCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS EventCallbacks
    )
{
    ((PFN_UCXDEFAULTENDPOINTINITSETEVENTCALLBACKS) UcxFunctions[UcxDefaultEndpointInitSetEventCallbacksTableIndex])(UcxDriverGlobals, EndpointInit, EventCallbacks);
}
typedef
WDFAPI
VOID
(*PFN_UCXENDPOINTSETWDFIOQUEUE)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    UCXENDPOINT Endpoint,
    __in
    WDFQUEUE WdfQueue
    );
VOID
FORCEINLINE
UcxEndpointSetWdfIoQueue(
    __in
    UCXENDPOINT Endpoint,
    __in
    WDFQUEUE WdfQueue
    )
{
    ((PFN_UCXENDPOINTSETWDFIOQUEUE) UcxFunctions[UcxEndpointSetWdfIoQueueTableIndex])(UcxDriverGlobals, Endpoint, WdfQueue);
}
typedef
__drv_maxIRQL(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_UCXENDPOINTPURGECOMPLETE)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    UCXENDPOINT Endpoint
    );
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxEndpointPurgeComplete(
    __in
    UCXENDPOINT Endpoint
    )
{
    ((PFN_UCXENDPOINTPURGECOMPLETE) UcxFunctions[UcxEndpointPurgeCompleteTableIndex])(UcxDriverGlobals, Endpoint);
}
typedef
__drv_maxIRQL(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_UCXENDPOINTABORTCOMPLETE)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    UCXENDPOINT Endpoint
    );
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxEndpointAbortComplete(
    __in
    UCXENDPOINT Endpoint
    )
{
    ((PFN_UCXENDPOINTABORTCOMPLETE) UcxFunctions[UcxEndpointAbortCompleteTableIndex])(UcxDriverGlobals, Endpoint);
}
typedef
__drv_maxIRQL(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_UCXENDPOINTNOPINGRESPONSEERROR)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    UCXENDPOINT Endpoint
    );
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxEndpointNoPingResponseError(
    __in
    UCXENDPOINT Endpoint
    )
{
    ((PFN_UCXENDPOINTNOPINGRESPONSEERROR) UcxFunctions[UcxEndpointNoPingResponseErrorTableIndex])(UcxDriverGlobals, Endpoint);
}
WDF_EXTERN_C_END
