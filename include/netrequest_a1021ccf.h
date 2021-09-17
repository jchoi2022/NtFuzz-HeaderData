    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_NETREQUESTRETRIEVEINPUTOUTPUTBUFFER)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETREQUEST Request,
    _In_
    UINT MininumInputLengthRequired,
    _In_
    UINT MininumOutputLengthRequired,
    _Outptr_result_bytebuffer_(max(*InputBufferLength,*OutputBufferLength))
    PVOID* InputOutputBuffer,
    _Out_opt_
    UINT* InputBufferLength,
    _Out_opt_
    UINT* OutputBufferLength
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
NTSTATUS
NetRequestRetrieveInputOutputBuffer(
    _In_
    NETREQUEST Request,
    _In_
    UINT MininumInputLengthRequired,
    _In_
    UINT MininumOutputLengthRequired,
    _Outptr_result_bytebuffer_(max(*InputBufferLength,*OutputBufferLength))
    PVOID* InputOutputBuffer,
    _Out_opt_
    UINT* InputBufferLength,
    _Out_opt_
    UINT* OutputBufferLength
    )
{
    return ((PFN_NETREQUESTRETRIEVEINPUTOUTPUTBUFFER) NetFunctions[NetRequestRetrieveInputOutputBufferTableIndex])(NetDriverGlobals, Request, MininumInputLengthRequired, MininumOutputLengthRequired, InputOutputBuffer, InputBufferLength, OutputBufferLength);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
PNDIS_OID_REQUEST
(*PFN_NETREQUESTWDMGETNDISOIDREQUEST)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETREQUEST Request
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
PNDIS_OID_REQUEST
NetRequestWdmGetNdisOidRequest(
    _In_
    NETREQUEST Request
    )
{
    return ((PFN_NETREQUESTWDMGETNDISOIDREQUEST) NetFunctions[NetRequestWdmGetNdisOidRequestTableIndex])(NetDriverGlobals, Request);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
void
(*PFN_NETREQUESTCOMPLETEWITHOUTINFORMATION)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETREQUEST Request,
    _In_
    NTSTATUS CompletionStatus
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
void
NetRequestCompleteWithoutInformation(
    _In_
    NETREQUEST Request,
    _In_
    NTSTATUS CompletionStatus
    )
{
    ((PFN_NETREQUESTCOMPLETEWITHOUTINFORMATION) NetFunctions[NetRequestCompleteWithoutInformationTableIndex])(NetDriverGlobals, Request, CompletionStatus);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
void
(*PFN_NETREQUESTSETDATACOMPLETE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETREQUEST Request,
    _In_
    NTSTATUS CompletionStatus,
    _In_
    UINT BytesRead
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
void
NetRequestSetDataComplete(
    _In_
    NETREQUEST Request,
    _In_
    NTSTATUS CompletionStatus,
    _In_
    UINT BytesRead
    )
{
    ((PFN_NETREQUESTSETDATACOMPLETE) NetFunctions[NetRequestSetDataCompleteTableIndex])(NetDriverGlobals, Request, CompletionStatus, BytesRead);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
void
(*PFN_NETREQUESTQUERYDATACOMPLETE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETREQUEST Request,
    _In_
    NTSTATUS CompletionStatus,
    _In_
    UINT BytesWritten
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
void
NetRequestQueryDataComplete(
    _In_
    NETREQUEST Request,
    _In_
    NTSTATUS CompletionStatus,
    _In_
    UINT BytesWritten
    )
{
    ((PFN_NETREQUESTQUERYDATACOMPLETE) NetFunctions[NetRequestQueryDataCompleteTableIndex])(NetDriverGlobals, Request, CompletionStatus, BytesWritten);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
void
(*PFN_NETREQUESTMETHODCOMPLETE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETREQUEST Request,
    _In_
    NTSTATUS CompletionStatus,
    _In_
    UINT BytesRead,
    _In_
    UINT BytesWritten
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
void
NetRequestMethodComplete(
    _In_
    NETREQUEST Request,
    _In_
    NTSTATUS CompletionStatus,
    _In_
    UINT BytesRead,
    _In_
    UINT BytesWritten
    )
{
    ((PFN_NETREQUESTMETHODCOMPLETE) NetFunctions[NetRequestMethodCompleteTableIndex])(NetDriverGlobals, Request, CompletionStatus, BytesRead, BytesWritten);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
void
(*PFN_NETREQUESTSETBYTESNEEDED)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETREQUEST Request,
    _In_
    UINT BytesNeeded
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
void
NetRequestSetBytesNeeded(
    _In_
    NETREQUEST Request,
    _In_
    UINT BytesNeeded
    )
{
    ((PFN_NETREQUESTSETBYTESNEEDED) NetFunctions[NetRequestSetBytesNeededTableIndex])(NetDriverGlobals, Request, BytesNeeded);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NDIS_OID
(*PFN_NETREQUESTGETID)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETREQUEST Request
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
NDIS_OID
NetRequestGetId(
    _In_
    NETREQUEST Request
    )
{
    return ((PFN_NETREQUESTGETID) NetFunctions[NetRequestGetIdTableIndex])(NetDriverGlobals, Request);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NDIS_PORT_NUMBER
(*PFN_NETREQUESTGETPORTNUMBER)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETREQUEST Request
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
NDIS_PORT_NUMBER
NetRequestGetPortNumber(
    _In_
    NETREQUEST Request
    )
{
    return ((PFN_NETREQUESTGETPORTNUMBER) NetFunctions[NetRequestGetPortNumberTableIndex])(NetDriverGlobals, Request);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NDIS_NIC_SWITCH_ID
(*PFN_NETREQUESTGETSWITCHID)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETREQUEST Request
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
NDIS_NIC_SWITCH_ID
NetRequestGetSwitchId(
    _In_
    NETREQUEST Request
    )
{
    return ((PFN_NETREQUESTGETSWITCHID) NetFunctions[NetRequestGetSwitchIdTableIndex])(NetDriverGlobals, Request);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NDIS_NIC_SWITCH_VPORT_ID
(*PFN_NETREQUESTGETVPORTID)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETREQUEST Request
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
NDIS_NIC_SWITCH_VPORT_ID
NetRequestGetVPortId(
    _In_
    NETREQUEST Request
    )
{
    return ((PFN_NETREQUESTGETVPORTID) NetFunctions[NetRequestGetVPortIdTableIndex])(NetDriverGlobals, Request);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NDIS_REQUEST_TYPE
(*PFN_NETREQUESTGETTYPE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETREQUEST Request
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
NDIS_REQUEST_TYPE
NetRequestGetType(
    _In_
    NETREQUEST Request
    )
{
    return ((PFN_NETREQUESTGETTYPE) NetFunctions[NetRequestGetTypeTableIndex])(NetDriverGlobals, Request);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NETADAPTER
(*PFN_NETREQUESTGETADAPTER)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETREQUEST Request
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
NETADAPTER
NetRequestGetAdapter(
    _In_
    NETREQUEST Request
    )
{
    return ((PFN_NETREQUESTGETADAPTER) NetFunctions[NetRequestGetAdapterTableIndex])(NetDriverGlobals, Request);
}
WDF_EXTERN_C_END
