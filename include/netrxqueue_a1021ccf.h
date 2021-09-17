    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
#include <NetPacketQueue.h>
struct _NETRXQUEUE_INIT;
typedef struct _NETRXQUEUE_INIT NETRXQUEUE_INIT;
typedef struct _NET_RXQUEUE_BUFFER_LAYOUT_HINT
{
    ULONG MinimumBackfillSize;
    ULONG L3HeaderAlignment;
} NET_RXQUEUE_BUFFER_LAYOUT_HINT;
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_NETRXQUEUECREATE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    NETRXQUEUE_INIT* NetRxQueueInit,
    _In_opt_
    WDF_OBJECT_ATTRIBUTES* RxQueueAttributes,
    _In_
    NET_PACKET_QUEUE_CONFIG* Configuration,
    _Out_
    NETPACKETQUEUE* PacketQueue
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
NTSTATUS
NetRxQueueCreate(
    _Inout_
    NETRXQUEUE_INIT* NetRxQueueInit,
    _In_opt_
    WDF_OBJECT_ATTRIBUTES* RxQueueAttributes,
    _In_
    NET_PACKET_QUEUE_CONFIG* Configuration,
    _Out_
    NETPACKETQUEUE* PacketQueue
    )
{
    return ((PFN_NETRXQUEUECREATE) NetFunctions[NetRxQueueCreateTableIndex])(NetDriverGlobals, NetRxQueueInit, RxQueueAttributes, Configuration, PacketQueue);
}
typedef
_IRQL_requires_max_(HIGH_LEVEL)
WDFAPI
void
(*PFN_NETRXQUEUENOTIFYMORERECEIVEDPACKETSAVAILABLE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPACKETQUEUE PacketQueue
    );
_IRQL_requires_max_(HIGH_LEVEL)
FORCEINLINE
void
NetRxQueueNotifyMoreReceivedPacketsAvailable(
    _In_
    NETPACKETQUEUE PacketQueue
    )
{
    ((PFN_NETRXQUEUENOTIFYMORERECEIVEDPACKETSAVAILABLE) NetFunctions[NetRxQueueNotifyMoreReceivedPacketsAvailableTableIndex])(NetDriverGlobals, PacketQueue);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
ULONG
(*PFN_NETRXQUEUEINITGETQUEUEID)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETRXQUEUE_INIT* NetRxQueueInit
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
ULONG
NetRxQueueInitGetQueueId(
    _In_
    NETRXQUEUE_INIT* NetRxQueueInit
    )
{
    return ((PFN_NETRXQUEUEINITGETQUEUEID) NetFunctions[NetRxQueueInitGetQueueIdTableIndex])(NetDriverGlobals, NetRxQueueInit);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
const NET_RING_COLLECTION *
(*PFN_NETRXQUEUEGETRINGCOLLECTION)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPACKETQUEUE PacketQueue
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
const NET_RING_COLLECTION *
NetRxQueueGetRingCollection(
    _In_
    NETPACKETQUEUE PacketQueue
    )
{
    return ((PFN_NETRXQUEUEGETRINGCOLLECTION) NetFunctions[NetRxQueueGetRingCollectionTableIndex])(NetDriverGlobals, PacketQueue);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
void
(*PFN_NETRXQUEUEGETEXTENSION)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPACKETQUEUE PacketQueue,
    _In_
    CONST NET_PACKET_EXTENSION_QUERY* Query,
    _Out_
    NET_EXTENSION* Extension
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
void
NetRxQueueGetExtension(
    _In_
    NETPACKETQUEUE PacketQueue,
    _In_
    CONST NET_PACKET_EXTENSION_QUERY* Query,
    _Out_
    NET_EXTENSION* Extension
    )
{
    ((PFN_NETRXQUEUEGETEXTENSION) NetFunctions[NetRxQueueGetExtensionTableIndex])(NetDriverGlobals, PacketQueue, Query, Extension);
}
WDF_EXTERN_C_END
