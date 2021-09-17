    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef
_Function_class_(EVT_UDECX_USB_ENDPOINT_RESET)
_IRQL_requires_same_
VOID
EVT_UDECX_USB_ENDPOINT_RESET(
    _In_
        UDECXUSBENDPOINT UdecxUsbEndpoint,
    _In_
        WDFREQUEST Request
    );
typedef EVT_UDECX_USB_ENDPOINT_RESET *PFN_UDECX_USB_ENDPOINT_RESET;
typedef
_Function_class_(EVT_UDECX_USB_ENDPOINT_START)
_IRQL_requires_same_
VOID
EVT_UDECX_USB_ENDPOINT_START(
    _In_
        UDECXUSBENDPOINT UdecxUsbEndpoint
    );
typedef EVT_UDECX_USB_ENDPOINT_START *PFN_UDECX_USB_ENDPOINT_START;
typedef
_Function_class_(EVT_UDECX_USB_ENDPOINT_PURGE)
_IRQL_requires_same_
VOID
EVT_UDECX_USB_ENDPOINT_PURGE(
    _In_
        UDECXUSBENDPOINT UdecxUsbEndpoint
    );
typedef EVT_UDECX_USB_ENDPOINT_PURGE *PFN_UDECX_USB_ENDPOINT_PURGE;
typedef struct _UDECX_USB_ENDPOINT_CALLBACKS {
    ULONG Size;
    PFN_UDECX_USB_ENDPOINT_RESET EvtUsbEndpointReset;
    PFN_UDECX_USB_ENDPOINT_START EvtUsbEndpointStart;
    PFN_UDECX_USB_ENDPOINT_PURGE EvtUsbEndpointPurge;
} UDECX_USB_ENDPOINT_CALLBACKS, *PUDECX_USB_ENDPOINT_CALLBACKS;
FORCEINLINE
VOID
UDECX_USB_ENDPOINT_CALLBACKS_INIT(
    _Out_
        PUDECX_USB_ENDPOINT_CALLBACKS Callbacks,
    _In_
        PFN_UDECX_USB_ENDPOINT_RESET EvtUsbEndpointReset
    )
{
    Callbacks->Size = sizeof(*Callbacks);
    Callbacks->EvtUsbEndpointReset = EvtUsbEndpointReset;
    Callbacks->EvtUsbEndpointStart = NULL;
    Callbacks->EvtUsbEndpointPurge = NULL;
}
typedef
WDFAPI
PUDECXUSBENDPOINT_INIT
(*PFN_UDECXUSBSIMPLEENDPOINTINITALLOCATE)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    UDECXUSBDEVICE UdecxUsbDevice
    );
PUDECXUSBENDPOINT_INIT
FORCEINLINE
UdecxUsbSimpleEndpointInitAllocate(
    _In_
    UDECXUSBDEVICE UdecxUsbDevice
    )
{
    return ((PFN_UDECXUSBSIMPLEENDPOINTINITALLOCATE) UdecxFunctions[UdecxUsbSimpleEndpointInitAllocateTableIndex])(UdecxDriverGlobals, UdecxUsbDevice);
}
typedef
WDFAPI
VOID
(*PFN_UDECXUSBENDPOINTINITFREE)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    PUDECXUSBENDPOINT_INIT Init
    );
VOID
FORCEINLINE
UdecxUsbEndpointInitFree(
    _In_
    PUDECXUSBENDPOINT_INIT Init
    )
{
    ((PFN_UDECXUSBENDPOINTINITFREE) UdecxFunctions[UdecxUsbEndpointInitFreeTableIndex])(UdecxDriverGlobals, Init);
}
typedef
WDFAPI
VOID
(*PFN_UDECXUSBENDPOINTINITSETENDPOINTADDRESS)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PUDECXUSBENDPOINT_INIT Init,
    _In_
    UCHAR EndpointAddress
    );
VOID
FORCEINLINE
UdecxUsbEndpointInitSetEndpointAddress(
    _Inout_
    PUDECXUSBENDPOINT_INIT Init,
    _In_
    UCHAR EndpointAddress
    )
{
    ((PFN_UDECXUSBENDPOINTINITSETENDPOINTADDRESS) UdecxFunctions[UdecxUsbEndpointInitSetEndpointAddressTableIndex])(UdecxDriverGlobals, Init, EndpointAddress);
}
typedef
WDFAPI
VOID
(*PFN_UDECXUSBENDPOINTINITSETCALLBACKS)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PUDECXUSBENDPOINT_INIT UdecxUsbEndpointInit,
    _In_
    PUDECX_USB_ENDPOINT_CALLBACKS EndpointCallbacks
    );
VOID
FORCEINLINE
UdecxUsbEndpointInitSetCallbacks(
    _Inout_
    PUDECXUSBENDPOINT_INIT UdecxUsbEndpointInit,
    _In_
    PUDECX_USB_ENDPOINT_CALLBACKS EndpointCallbacks
    )
{
    ((PFN_UDECXUSBENDPOINTINITSETCALLBACKS) UdecxFunctions[UdecxUsbEndpointInitSetCallbacksTableIndex])(UdecxDriverGlobals, UdecxUsbEndpointInit, EndpointCallbacks);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_UDECXUSBENDPOINTCREATE)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PUDECXUSBENDPOINT_INIT* EndpointInit,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    UDECXUSBENDPOINT* UdecxUsbEndpoint
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
UdecxUsbEndpointCreate(
    _Inout_
    PUDECXUSBENDPOINT_INIT* EndpointInit,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    UDECXUSBENDPOINT* UdecxUsbEndpoint
    )
{
    return ((PFN_UDECXUSBENDPOINTCREATE) UdecxFunctions[UdecxUsbEndpointCreateTableIndex])(UdecxDriverGlobals, EndpointInit, Attributes, UdecxUsbEndpoint);
}
typedef
WDFAPI
VOID
(*PFN_UDECXUSBENDPOINTSETWDFIOQUEUE)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    UDECXUSBENDPOINT UdecxUsbEndpoint,
    _In_
    WDFQUEUE WdfQueue
    );
VOID
FORCEINLINE
UdecxUsbEndpointSetWdfIoQueue(
    _In_
    UDECXUSBENDPOINT UdecxUsbEndpoint,
    _In_
    WDFQUEUE WdfQueue
    )
{
    ((PFN_UDECXUSBENDPOINTSETWDFIOQUEUE) UdecxFunctions[UdecxUsbEndpointSetWdfIoQueueTableIndex])(UdecxDriverGlobals, UdecxUsbEndpoint, WdfQueue);
}
typedef
WDFAPI
VOID
(*PFN_UDECXUSBENDPOINTPURGECOMPLETE)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    UDECXUSBENDPOINT UdecxUsbEndpoint
    );
VOID
FORCEINLINE
UdecxUsbEndpointPurgeComplete(
    _In_
    UDECXUSBENDPOINT UdecxUsbEndpoint
    )
{
    ((PFN_UDECXUSBENDPOINTPURGECOMPLETE) UdecxFunctions[UdecxUsbEndpointPurgeCompleteTableIndex])(UdecxDriverGlobals, UdecxUsbEndpoint);
}
WDF_EXTERN_C_END
