    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_UDECXURBRETRIEVECONTROLSETUPPACKET)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFREQUEST Request,
    _Out_
    PWDF_USB_CONTROL_SETUP_PACKET SetupPacket
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
UdecxUrbRetrieveControlSetupPacket(
    _In_
    WDFREQUEST Request,
    _Out_
    PWDF_USB_CONTROL_SETUP_PACKET SetupPacket
    )
{
    return ((PFN_UDECXURBRETRIEVECONTROLSETUPPACKET) UdecxFunctions[UdecxUrbRetrieveControlSetupPacketTableIndex])(UdecxDriverGlobals, Request, SetupPacket);
}
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_UDECXURBRETRIEVEBUFFER)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFREQUEST Request,
    _Outptr_result_buffer_(*Length)
    PUCHAR* TransferBuffer,
    _Out_
    PULONG Length
    );
_Must_inspect_result_
NTSTATUS
FORCEINLINE
UdecxUrbRetrieveBuffer(
    _In_
    WDFREQUEST Request,
    _Outptr_result_buffer_(*Length)
    PUCHAR* TransferBuffer,
    _Out_
    PULONG Length
    )
{
    return ((PFN_UDECXURBRETRIEVEBUFFER) UdecxFunctions[UdecxUrbRetrieveBufferTableIndex])(UdecxDriverGlobals, Request, TransferBuffer, Length);
}
typedef
WDFAPI
VOID
(*PFN_UDECXURBSETBYTESCOMPLETED)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFREQUEST Request,
    _In_
    ULONG BytesCompleted
    );
VOID
FORCEINLINE
UdecxUrbSetBytesCompleted(
    _In_
    WDFREQUEST Request,
    _In_
    ULONG BytesCompleted
    )
{
    ((PFN_UDECXURBSETBYTESCOMPLETED) UdecxFunctions[UdecxUrbSetBytesCompletedTableIndex])(UdecxDriverGlobals, Request, BytesCompleted);
}
typedef
WDFAPI
VOID
(*PFN_UDECXURBCOMPLETE)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFREQUEST Request,
    _In_
    USBD_STATUS UsbdStatus
    );
VOID
FORCEINLINE
UdecxUrbComplete(
    _In_
    WDFREQUEST Request,
    _In_
    USBD_STATUS UsbdStatus
    )
{
    ((PFN_UDECXURBCOMPLETE) UdecxFunctions[UdecxUrbCompleteTableIndex])(UdecxDriverGlobals, Request, UsbdStatus);
}
typedef
WDFAPI
VOID
(*PFN_UDECXURBCOMPLETEWITHNTSTATUS)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFREQUEST Request,
    _In_
    NTSTATUS NtStatus
    );
VOID
FORCEINLINE
UdecxUrbCompleteWithNtStatus(
    _In_
    WDFREQUEST Request,
    _In_
    NTSTATUS NtStatus
    )
{
    ((PFN_UDECXURBCOMPLETEWITHNTSTATUS) UdecxFunctions[UdecxUrbCompleteWithNtStatusTableIndex])(UdecxDriverGlobals, Request, NtStatus);
}
WDF_EXTERN_C_END
