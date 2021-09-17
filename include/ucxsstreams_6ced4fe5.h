    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef struct _STREAM_INFO {
    ULONG Size;
    WDFQUEUE WdfQueue;
    ULONG StreamId;
} STREAM_INFO, *PSTREAM_INFO;
VOID
FORCEINLINE
STREAM_INFO_INIT(
    __out
        PSTREAM_INFO StreamInfo,
    __in
        WDFQUEUE WdfQueue,
    __in
        ULONG StreamId
    )
{
    RtlZeroMemory(StreamInfo, sizeof(STREAM_INFO));
    StreamInfo->Size = sizeof(STREAM_INFO);
    StreamInfo->WdfQueue = WdfQueue;
    StreamInfo->StreamId = StreamId;
}
typedef
WDFAPI
VOID
(*PFN_UCXSTATICSTREAMSSETSTREAMINFO)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    UCXSSTREAMS StaticStreams,
    __in
    PSTREAM_INFO StreamInfo
    );
VOID
FORCEINLINE
UcxStaticStreamsSetStreamInfo(
    __in
    UCXSSTREAMS StaticStreams,
    __in
    PSTREAM_INFO StreamInfo
    )
{
    ((PFN_UCXSTATICSTREAMSSETSTREAMINFO) UcxFunctions[UcxStaticStreamsSetStreamInfoTableIndex])(UcxDriverGlobals, StaticStreams, StreamInfo);
}
typedef
_Must_inspect_result_
__drv_requiresIRQL(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_UCXSTATICSTREAMSCREATE)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __in
    UCXENDPOINT Endpoint,
    __deref_inout_opt
    PUCXSSTREAMS_INIT* StaticStreamsInit,
    __in_opt
    PWDF_OBJECT_ATTRIBUTES Attributes,
    __out
    UCXSSTREAMS* StaticStreams
    );
_Must_inspect_result_
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcxStaticStreamsCreate(
    __in
    UCXENDPOINT Endpoint,
    __deref_inout_opt
    PUCXSSTREAMS_INIT* StaticStreamsInit,
    __in_opt
    PWDF_OBJECT_ATTRIBUTES Attributes,
    __out
    UCXSSTREAMS* StaticStreams
    )
{
    return ((PFN_UCXSTATICSTREAMSCREATE) UcxFunctions[UcxStaticStreamsCreateTableIndex])(UcxDriverGlobals, Endpoint, StaticStreamsInit, Attributes, StaticStreams);
}
WDF_EXTERN_C_END
