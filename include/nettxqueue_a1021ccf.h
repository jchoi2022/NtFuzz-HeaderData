    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
#include <NetPacketQueue.h>
struct _NETTXQUEUE_INIT;
typedef struct _NETTXQUEUE_INIT NETTXQUEUE_INIT;
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_NETTXQUEUECREATE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    NETTXQUEUE_INIT* NetTxQueueInit,
    _In_opt_
    WDF_OBJECT_ATTRIBUTES* TxQueueAttributes,
    _In_
    NET_PACKET_QUEUE_CONFIG* Configuration,
    _Out_
    NETPACKETQUEUE* PacketQueue
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
NTSTATUS
NetTxQueueCreate(
    _Inout_
    NETTXQUEUE_INIT* NetTxQueueInit,
    _In_opt_
    WDF_OBJECT_ATTRIBUTES* TxQueueAttributes,
    _In_
    NET_PACKET_QUEUE_CONFIG* Configuration,
    _Out_
    NETPACKETQUEUE* PacketQueue
    )
{
    return ((PFN_NETTXQUEUECREATE) NetFunctions[NetTxQueueCreateTableIndex])(NetDriverGlobals, NetTxQueueInit, TxQueueAttributes, Configuration, PacketQueue);
}
typedef
_IRQL_requires_max_(HIGH_LEVEL)
WDFAPI
void
(*PFN_NETTXQUEUENOTIFYMORECOMPLETEDPACKETSAVAILABLE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPACKETQUEUE PacketQueue
    );
_IRQL_requires_max_(HIGH_LEVEL)
FORCEINLINE
void
NetTxQueueNotifyMoreCompletedPacketsAvailable(
    _In_
    NETPACKETQUEUE PacketQueue
    )
{
    ((PFN_NETTXQUEUENOTIFYMORECOMPLETEDPACKETSAVAILABLE) NetFunctions[NetTxQueueNotifyMoreCompletedPacketsAvailableTableIndex])(NetDriverGlobals, PacketQueue);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
ULONG
(*PFN_NETTXQUEUEINITGETQUEUEID)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETTXQUEUE_INIT* NetTxQueueInit
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
ULONG
NetTxQueueInitGetQueueId(
    _In_
    NETTXQUEUE_INIT* NetTxQueueInit
    )
{
    return ((PFN_NETTXQUEUEINITGETQUEUEID) NetFunctions[NetTxQueueInitGetQueueIdTableIndex])(NetDriverGlobals, NetTxQueueInit);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
const NET_RING_COLLECTION *
(*PFN_NETTXQUEUEGETRINGCOLLECTION)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPACKETQUEUE PacketQueue
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
const NET_RING_COLLECTION *
NetTxQueueGetRingCollection(
    _In_
    NETPACKETQUEUE PacketQueue
    )
{
    return ((PFN_NETTXQUEUEGETRINGCOLLECTION) NetFunctions[NetTxQueueGetRingCollectionTableIndex])(NetDriverGlobals, PacketQueue);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
void
(*PFN_NETTXQUEUEGETEXTENSION)(
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
NetTxQueueGetExtension(
    _In_
    NETPACKETQUEUE PacketQueue,
    _In_
    CONST NET_PACKET_EXTENSION_QUERY* Query,
    _Out_
    NET_EXTENSION* Extension
    )
{
    ((PFN_NETTXQUEUEGETEXTENSION) NetFunctions[NetTxQueueGetExtensionTableIndex])(NetDriverGlobals, PacketQueue, Query, Extension);
}
WDF_EXTERN_C_END
