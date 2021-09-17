    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef enum _NET_REQUEST_QUEUE_TYPE {
    NetRequestQueueTypeInvalid = 0,
    NetRequestQueueDefaultSequential,
    NetRequestQueueDefaultParallel,
} NET_REQUEST_QUEUE_TYPE;
typedef
_Function_class_(EVT_NET_REQUEST_DEFAULT_SET_DATA)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
void
EVT_NET_REQUEST_DEFAULT_SET_DATA(
    _In_
    NETREQUESTQUEUE RequestQueue,
    _In_
    NETREQUEST Request,
    _In_
    NDIS_OID Oid,
    _In_reads_bytes_(InputBufferLength)
    void * InputBuffer,
    _In_
    UINT InputBufferLength
);
typedef EVT_NET_REQUEST_DEFAULT_SET_DATA *PFN_NET_REQUEST_DEFAULT_SET_DATA;
typedef
_Function_class_(EVT_NET_REQUEST_SET_DATA)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
void
EVT_NET_REQUEST_SET_DATA(
    _In_
    NETREQUESTQUEUE RequestQueue,
    _In_
    NETREQUEST Request,
    _In_reads_bytes_(InputBufferLength)
    void * InputBuffer,
    _In_
    UINT InputBufferLength
);
typedef EVT_NET_REQUEST_SET_DATA *PFN_NET_REQUEST_SET_DATA;
typedef
_Function_class_(EVT_NET_REQUEST_DEFAULT_QUERY_DATA)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
void
EVT_NET_REQUEST_DEFAULT_QUERY_DATA(
    _In_
    NETREQUESTQUEUE RequestQueue,
    _In_
    NETREQUEST Request,
    _In_
    NDIS_OID Oid,
    _Out_writes_bytes_(OutputBufferLength)
    void * OutputBuffer,
    _In_
    UINT OutputBufferLength
);
typedef EVT_NET_REQUEST_DEFAULT_QUERY_DATA *PFN_NET_REQUEST_DEFAULT_QUERY_DATA;
typedef
_Function_class_(EVT_NET_REQUEST_QUERY_DATA)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
void
EVT_NET_REQUEST_QUERY_DATA(
    _In_
    NETREQUESTQUEUE RequestQueue,
    _In_
    NETREQUEST Request,
    _Out_writes_bytes_(OutputBufferLength)
    void * OutputBuffer,
    _In_
    UINT OutputBufferLength
);
typedef EVT_NET_REQUEST_QUERY_DATA *PFN_NET_REQUEST_QUERY_DATA;
typedef
_Function_class_(EVT_NET_REQUEST_DEFAULT_METHOD)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
void
EVT_NET_REQUEST_DEFAULT_METHOD(
    _In_
    NETREQUESTQUEUE RequestQueue,
    _In_
    NETREQUEST Request,
    _In_
    NDIS_OID Oid,
    _Pre_writable_byte_size_(OutputBufferLength)
    _Pre_readable_byte_size_(InputBufferLength)
    _Post_readable_byte_size_(OutputBufferLength)
    void * InputOutputBuffer,
    _In_
    UINT InputBufferLength,
    _In_
    UINT OutputBufferLength
);
typedef EVT_NET_REQUEST_DEFAULT_METHOD *PFN_NET_REQUEST_DEFAULT_METHOD;
typedef
_Function_class_(EVT_NET_REQUEST_METHOD)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
void
EVT_NET_REQUEST_METHOD(
    _In_
    NETREQUESTQUEUE RequestQueue,
    _In_
    NETREQUEST Request,
    _Pre_writable_byte_size_(OutputBufferLength)
    _Pre_readable_byte_size_(InputBufferLength)
    _Post_readable_byte_size_(OutputBufferLength)
    void * InputOutputBuffer,
    _In_
    UINT InputBufferLength,
    _In_
    UINT OutputBufferLength
);
typedef EVT_NET_REQUEST_METHOD *PFN_NET_REQUEST_METHOD;
typedef
_Function_class_(EVT_NET_REQUEST_DEFAULT)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
void
EVT_NET_REQUEST_DEFAULT(
    _In_
    NETREQUESTQUEUE RequestQueue,
    _In_
    NETREQUEST Request,
    _In_
    NDIS_REQUEST_TYPE RequestType,
    _In_
    NDIS_OID Oid,
    _Pre_writable_byte_size_(OutputBufferLength)
    _Pre_readable_byte_size_(InputBufferLength)
    _Post_readable_byte_size_(OutputBufferLength)
    void * InputOutputBuffer,
    _In_
    UINT InputBufferLength,
    _In_
    UINT OutputBufferLength
);
typedef EVT_NET_REQUEST_DEFAULT *PFN_NET_REQUEST_DEFAULT;
struct _NET_REQUEST_QUEUE_SET_DATA_HANDLER;
typedef struct _NET_REQUEST_QUEUE_SET_DATA_HANDLER NET_REQUEST_QUEUE_SET_DATA_HANDLER;
typedef struct _NET_REQUEST_QUEUE_SET_DATA_HANDLER {
    NET_REQUEST_QUEUE_SET_DATA_HANDLER * Next;
    WDFMEMORY Memory;
    NDIS_OID Oid;
    PFN_NET_REQUEST_SET_DATA EvtRequestSetData;
    UINT MinimumInputLength;
    UINT MinimumOutputLength;
} NET_REQUEST_QUEUE_SET_DATA_HANDLER;
inline
void
NET_REQUEST_QUEUE_SET_DATA_HANDLER_INIT(
    _Out_ NET_REQUEST_QUEUE_SET_DATA_HANDLER * SetDataHandler,
    _In_ NDIS_OID Oid,
    _In_ PFN_NET_REQUEST_SET_DATA EvtRequestSetData,
    _In_ UINT MinimumInputLength
)
{
    RtlZeroMemory(SetDataHandler, sizeof(*SetDataHandler));
    SetDataHandler->Oid = Oid;
    SetDataHandler->EvtRequestSetData = EvtRequestSetData;
    SetDataHandler->MinimumInputLength = MinimumInputLength;
}
struct _NET_REQUEST_QUEUE_QUERY_DATA_HANDLER;
typedef struct _NET_REQUEST_QUEUE_QUERY_DATA_HANDLER NET_REQUEST_QUEUE_QUERY_DATA_HANDLER;
typedef struct _NET_REQUEST_QUEUE_QUERY_DATA_HANDLER {
    NET_REQUEST_QUEUE_QUERY_DATA_HANDLER * Next;
    WDFMEMORY Memory;
    NDIS_OID Oid;
    PFN_NET_REQUEST_QUERY_DATA EvtRequestQueryData;
    UINT MinimumInputLength;
    UINT MinimumOutputLength;
} NET_REQUEST_QUEUE_QUERY_DATA_HANDLER;
inline
void
NET_REQUEST_QUEUE_QUERY_DATA_HANDLER_INIT(
    _Out_ NET_REQUEST_QUEUE_QUERY_DATA_HANDLER * QueryDataHandler,
    _In_ NDIS_OID Oid,
    _In_ PFN_NET_REQUEST_QUERY_DATA EvtRequestQueryData,
    _In_ UINT MinimumOutputLength
)
{
    RtlZeroMemory(QueryDataHandler, sizeof(*QueryDataHandler));
    QueryDataHandler->Oid = Oid;
    QueryDataHandler->EvtRequestQueryData = EvtRequestQueryData;
    QueryDataHandler->MinimumOutputLength = MinimumOutputLength;
}
struct _NET_REQUEST_QUEUE_METHOD_HANDLER;
typedef struct _NET_REQUEST_QUEUE_METHOD_HANDLER NET_REQUEST_QUEUE_METHOD_HANDLER;
typedef struct _NET_REQUEST_QUEUE_METHOD_HANDLER {
    NET_REQUEST_QUEUE_METHOD_HANDLER * Next;
    WDFMEMORY Memory;
    NDIS_OID Oid;
    PFN_NET_REQUEST_METHOD EvtRequestMethod;
    UINT MinimumInputLength;
    UINT MinimumOutputLength;
} NET_REQUEST_QUEUE_METHOD_HANDLER;
inline
void
NET_REQUEST_QUEUE_METHOD_HANDLER_INIT(
    _Out_ NET_REQUEST_QUEUE_METHOD_HANDLER * MethodHandler,
    _In_ NDIS_OID Oid,
    _In_ PFN_NET_REQUEST_METHOD EvtRequestMethod,
    _In_ UINT MinimumInputLength,
    _In_ UINT MinimumOutputLength
)
{
    RtlZeroMemory(MethodHandler, sizeof(*MethodHandler));
    MethodHandler->Oid = Oid;
    MethodHandler->EvtRequestMethod = EvtRequestMethod;
    MethodHandler->MinimumInputLength = MinimumInputLength;
    MethodHandler->MinimumOutputLength = MinimumOutputLength;
}
#pragma warning(push)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
typedef union _NET_REQUEST_QUEUE_ADD_HANDLER_ERROR {
    struct {
        UCHAR AllocationFailed : 1;
        UCHAR CallbackNull : 1;
        UCHAR AdapterNull : 1;
    }
    DUMMYSTRUCTNAME;
    UCHAR AsUchar;
} NET_REQUEST_QUEUE_ADD_HANDLER_ERROR;
#pragma warning(pop)
typedef struct _NET_REQUEST_QUEUE_CONFIG {
    ULONG Size;
    NETADAPTER Adapter;
    NET_REQUEST_QUEUE_TYPE Type;
    PFN_NET_REQUEST_DEFAULT_SET_DATA EvtRequestDefaultSetData;
    PFN_NET_REQUEST_DEFAULT_QUERY_DATA EvtRequestDefaultQueryData;
    PFN_NET_REQUEST_DEFAULT_METHOD EvtRequestDefaultMethod;
    PFN_NET_REQUEST_DEFAULT EvtRequestDefault;
    NET_REQUEST_QUEUE_ADD_HANDLER_ERROR AddHandlerError;
    ULONG SizeOfSetDataHandler;
    ULONG SizeOfQueryDataHandler;
    ULONG SizeOfMethodHandler;
    NET_REQUEST_QUEUE_SET_DATA_HANDLER * SetDataHandlers;
    NET_REQUEST_QUEUE_QUERY_DATA_HANDLER * QueryDataHandlers;
    NET_REQUEST_QUEUE_METHOD_HANDLER * MethodHandlers;
} NET_REQUEST_QUEUE_CONFIG;
inline
void
NET_REQUEST_QUEUE_CONFIG_INIT(
    _Out_ NET_REQUEST_QUEUE_CONFIG * NetRequestQueueConfig,
    _In_ NETADAPTER Adapter,
    _In_ NET_REQUEST_QUEUE_TYPE QueueType
)
{
    RtlZeroMemory(NetRequestQueueConfig, sizeof(NET_REQUEST_QUEUE_CONFIG));
    NetRequestQueueConfig->Size = sizeof(NET_REQUEST_QUEUE_CONFIG);
    NetRequestQueueConfig->Adapter = Adapter;
    NetRequestQueueConfig->Type = QueueType;
    NetRequestQueueConfig->SizeOfSetDataHandler = sizeof(NET_REQUEST_QUEUE_SET_DATA_HANDLER);
    NetRequestQueueConfig->SizeOfQueryDataHandler = sizeof(NET_REQUEST_QUEUE_QUERY_DATA_HANDLER);
    NetRequestQueueConfig->SizeOfMethodHandler = sizeof(NET_REQUEST_QUEUE_METHOD_HANDLER);
}
inline
void
NET_REQUEST_QUEUE_CONFIG_INIT_DEFAULT_SEQUENTIAL(
    _Out_ NET_REQUEST_QUEUE_CONFIG * NetRequestQueueConfig,
    _In_ NETADAPTER Adapter
)
{
    NET_REQUEST_QUEUE_CONFIG_INIT(NetRequestQueueConfig,
                                  Adapter,
                                  NetRequestQueueDefaultSequential);
}
inline
void
NET_REQUEST_QUEUE_CONFIG_INIT_DEFAULT_PARALLEL(
    _Out_ NET_REQUEST_QUEUE_CONFIG * NetRequestQueueConfig,
    _In_ NETADAPTER Adapter
)
{
    NET_REQUEST_QUEUE_CONFIG_INIT(NetRequestQueueConfig,
                                  Adapter,
                                  NetRequestQueueDefaultParallel);
}
inline
void
NET_REQUEST_QUEUE_CONFIG_ADD_INITIALIZED_SET_DATA_HANDLER(
    _In_ NET_REQUEST_QUEUE_CONFIG * NetRequestQueueConfig,
    _In_ NET_REQUEST_QUEUE_SET_DATA_HANDLER * SetDataHandler
)
{
    NET_REQUEST_QUEUE_SET_DATA_HANDLER * handler;
    NTSTATUS status;
    WDF_OBJECT_ATTRIBUTES attribs;
    WDFMEMORY memory;
    if (SetDataHandler->EvtRequestSetData == NULL) {
        NetRequestQueueConfig->AddHandlerError.CallbackNull = 1;
        return;
    }
    if (NetRequestQueueConfig->Adapter == NULL) {
        NetRequestQueueConfig->AddHandlerError.AdapterNull = 1;
        return;
    }
    WDF_OBJECT_ATTRIBUTES_INIT(&attribs);
    attribs.ParentObject = NetRequestQueueConfig->Adapter;
    status = WdfMemoryCreate(&attribs,
                             NonPagedPoolNx,
                             HANDLER_TAG,
                             sizeof(*handler),
                             &memory,
                             (void **)&handler);
    if (!NT_SUCCESS(status)) {
        handler = NULL;
        NetRequestQueueConfig->AddHandlerError.AllocationFailed = 1;
        return;
    }
    RtlCopyMemory(handler, SetDataHandler, sizeof(*handler));
    handler->Next = NetRequestQueueConfig->SetDataHandlers;
    handler->Memory = memory;
    NetRequestQueueConfig->SetDataHandlers = handler;
}
inline
void
NET_REQUEST_QUEUE_CONFIG_ADD_SET_DATA_HANDLER(
    _In_ NET_REQUEST_QUEUE_CONFIG * NetRequestQueueConfig,
    _In_ NDIS_OID Oid,
    _In_ PFN_NET_REQUEST_SET_DATA EvtRequestSetData,
    _In_ UINT MinimumInputLength
)
{
    NET_REQUEST_QUEUE_SET_DATA_HANDLER setDataHandler;
    NET_REQUEST_QUEUE_SET_DATA_HANDLER_INIT(&setDataHandler,
                                            Oid,
                                            EvtRequestSetData,
                                            MinimumInputLength);
    NET_REQUEST_QUEUE_CONFIG_ADD_INITIALIZED_SET_DATA_HANDLER(
        NetRequestQueueConfig, &setDataHandler);
}
inline
void
NET_REQUEST_QUEUE_CONFIG_ADD_INITIALIZED_QUERY_DATA_HANDLER(
    _In_ NET_REQUEST_QUEUE_CONFIG * NetRequestQueueConfig,
    _In_ NET_REQUEST_QUEUE_QUERY_DATA_HANDLER * QueryDataHandler
)
{
    NET_REQUEST_QUEUE_QUERY_DATA_HANDLER * handler;
    NTSTATUS status;
    WDF_OBJECT_ATTRIBUTES attribs;
    WDFMEMORY memory;
    if (QueryDataHandler->EvtRequestQueryData == NULL) {
        NetRequestQueueConfig->AddHandlerError.CallbackNull = 1;
        return;
    }
    if (NetRequestQueueConfig->Adapter == NULL) {
        NetRequestQueueConfig->AddHandlerError.AdapterNull = 1;
        return;
    }
    WDF_OBJECT_ATTRIBUTES_INIT(&attribs);
    attribs.ParentObject = NetRequestQueueConfig->Adapter;
    status = WdfMemoryCreate(&attribs,
                             NonPagedPoolNx,
                             HANDLER_TAG,
                             sizeof(*handler),
                             &memory,
                             (void **)&handler);
    if (!NT_SUCCESS(status)) {
        handler = NULL;
        NetRequestQueueConfig->AddHandlerError.AllocationFailed = 1;
        return;
    }
    RtlCopyMemory(handler, QueryDataHandler, sizeof(*handler));
    handler->Next = NetRequestQueueConfig->QueryDataHandlers;
    handler->Memory = memory;
    NetRequestQueueConfig->QueryDataHandlers = handler;
}
inline
void
NET_REQUEST_QUEUE_CONFIG_ADD_QUERY_DATA_HANDLER(
    _In_ NET_REQUEST_QUEUE_CONFIG * NetRequestQueueConfig,
    _In_ NDIS_OID Oid,
    _In_ PFN_NET_REQUEST_QUERY_DATA EvtRequestQueryData,
    _In_ UINT MinimumOutputLength
)
{
    NET_REQUEST_QUEUE_QUERY_DATA_HANDLER queryDataHandler;
    NET_REQUEST_QUEUE_QUERY_DATA_HANDLER_INIT(&queryDataHandler,
                                              Oid,
                                              EvtRequestQueryData,
                                              MinimumOutputLength);
    NET_REQUEST_QUEUE_CONFIG_ADD_INITIALIZED_QUERY_DATA_HANDLER(
        NetRequestQueueConfig, &queryDataHandler);
}
inline
void
NET_REQUEST_QUEUE_CONFIG_ADD_INITIALIZED_METHOD_HANDLER(
    _In_ NET_REQUEST_QUEUE_CONFIG * NetRequestQueueConfig,
    _In_ NET_REQUEST_QUEUE_METHOD_HANDLER * MethodHandler
)
{
    NET_REQUEST_QUEUE_METHOD_HANDLER * handler;
    NTSTATUS status;
    WDF_OBJECT_ATTRIBUTES attribs;
    WDFMEMORY memory;
    if (MethodHandler->EvtRequestMethod == NULL) {
        NetRequestQueueConfig->AddHandlerError.CallbackNull = 1;
        return;
    }
    if (NetRequestQueueConfig->Adapter == NULL) {
        NetRequestQueueConfig->AddHandlerError.AdapterNull = 1;
        return;
    }
    WDF_OBJECT_ATTRIBUTES_INIT(&attribs);
    attribs.ParentObject = NetRequestQueueConfig->Adapter;
    status = WdfMemoryCreate(&attribs,
                             NonPagedPoolNx,
                             HANDLER_TAG,
                             sizeof(*handler),
                             &memory,
                             (void **)&handler);
    if (!NT_SUCCESS(status)) {
        handler = NULL;
        NetRequestQueueConfig->AddHandlerError.AllocationFailed = 1;
        return;
    }
    RtlCopyMemory(handler, MethodHandler, sizeof(*handler));
    handler->Next = NetRequestQueueConfig->MethodHandlers;
    handler->Memory = memory;
    NetRequestQueueConfig->MethodHandlers = handler;
}
inline
void
NET_REQUEST_QUEUE_CONFIG_ADD_METHOD_HANDLER(
    _In_ NET_REQUEST_QUEUE_CONFIG * NetRequestQueueConfig,
    _In_ NDIS_OID Oid,
    _In_ PFN_NET_REQUEST_METHOD EvtRequestMethod,
    _In_ UINT MinimumInputLength,
    _In_ UINT MinimumOutputLength
)
{
    NET_REQUEST_QUEUE_METHOD_HANDLER methodHandler;
    NET_REQUEST_QUEUE_METHOD_HANDLER_INIT(&methodHandler,
                                          Oid,
                                          EvtRequestMethod,
                                          MinimumInputLength,
                                          MinimumOutputLength);
    NET_REQUEST_QUEUE_CONFIG_ADD_INITIALIZED_METHOD_HANDLER(
        NetRequestQueueConfig, &methodHandler);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_NETREQUESTQUEUECREATE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NET_REQUEST_QUEUE_CONFIG* NetRequestQueueConfig,
    _In_opt_
    WDF_OBJECT_ATTRIBUTES* QueueAttributes,
    _Out_opt_
    NETREQUESTQUEUE* RequestQueue
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
NTSTATUS
NetRequestQueueCreate(
    _In_
    NET_REQUEST_QUEUE_CONFIG* NetRequestQueueConfig,
    _In_opt_
    WDF_OBJECT_ATTRIBUTES* QueueAttributes,
    _Out_opt_
    NETREQUESTQUEUE* RequestQueue
    )
{
    return ((PFN_NETREQUESTQUEUECREATE) NetFunctions[NetRequestQueueCreateTableIndex])(NetDriverGlobals, NetRequestQueueConfig, QueueAttributes, RequestQueue);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NETADAPTER
(*PFN_NETREQUESTQUEUEGETADAPTER)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETREQUESTQUEUE RequestQueue
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
NETADAPTER
NetRequestQueueGetAdapter(
    _In_
    NETREQUESTQUEUE RequestQueue
    )
{
    return ((PFN_NETREQUESTQUEUEGETADAPTER) NetFunctions[NetRequestQueueGetAdapterTableIndex])(NetDriverGlobals, RequestQueue);
}
WDF_EXTERN_C_END
