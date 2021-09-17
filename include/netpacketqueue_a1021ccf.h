    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef
_Function_class_(EVT_PACKET_QUEUE_START)
_IRQL_requires_same_
_IRQL_requires_(PASSIVE_LEVEL)
void
EVT_PACKET_QUEUE_START(
    _In_
    NETPACKETQUEUE PacketQueue
);
typedef EVT_PACKET_QUEUE_START *PFN_PACKET_QUEUE_START;
typedef
_Function_class_(EVT_PACKET_QUEUE_STOP)
_IRQL_requires_same_
_IRQL_requires_(PASSIVE_LEVEL)
void
EVT_PACKET_QUEUE_STOP(
    _In_
    NETPACKETQUEUE PacketQueue
);
typedef EVT_PACKET_QUEUE_STOP *PFN_PACKET_QUEUE_STOP;
typedef
_Function_class_(EVT_PACKET_QUEUE_CANCEL)
_IRQL_requires_same_
_IRQL_requires_(PASSIVE_LEVEL)
void
EVT_PACKET_QUEUE_CANCEL(
    _In_
    NETPACKETQUEUE PacketQueue
);
typedef EVT_PACKET_QUEUE_CANCEL *PFN_PACKET_QUEUE_CANCEL;
typedef
_Function_class_(EVT_PACKET_QUEUE_SET_NOTIFICATION_ENABLED)
_IRQL_requires_same_
_IRQL_requires_(PASSIVE_LEVEL)
void
EVT_PACKET_QUEUE_SET_NOTIFICATION_ENABLED(
    _In_
    NETPACKETQUEUE PacketQueue,
    _In_
    BOOLEAN NotificationEnabled
);
typedef EVT_PACKET_QUEUE_SET_NOTIFICATION_ENABLED *PFN_PACKET_QUEUE_SET_NOTIFICATION_ENABLED;
typedef
_Function_class_(EVT_PACKET_QUEUE_ADVANCE)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
void
EVT_PACKET_QUEUE_ADVANCE(
    _In_
    NETPACKETQUEUE PacketQueue
);
typedef EVT_PACKET_QUEUE_ADVANCE *PFN_PACKET_QUEUE_ADVANCE;
typedef struct _NET_PACKET_QUEUE_CONFIG
{
    ULONG Size;
    PFN_PACKET_QUEUE_START EvtStart;
    PFN_PACKET_QUEUE_STOP EvtStop;
    PFN_PACKET_QUEUE_ADVANCE EvtAdvance;
    PFN_PACKET_QUEUE_SET_NOTIFICATION_ENABLED EvtSetNotificationEnabled;
    PFN_PACKET_QUEUE_CANCEL EvtCancel;
} NET_PACKET_QUEUE_CONFIG;
inline
void
NET_PACKET_QUEUE_CONFIG_INIT(
    _Out_ NET_PACKET_QUEUE_CONFIG * Config,
    _In_ PFN_PACKET_QUEUE_ADVANCE EvtAdvance,
    _In_ PFN_PACKET_QUEUE_SET_NOTIFICATION_ENABLED EvtSetNotificationEnabled,
    _In_ PFN_PACKET_QUEUE_CANCEL EvtCancel
)
{
    RtlZeroMemory(Config, sizeof(NET_PACKET_QUEUE_CONFIG));
    Config->Size = sizeof(NET_PACKET_QUEUE_CONFIG);
    Config->EvtAdvance = EvtAdvance;
    Config->EvtSetNotificationEnabled = EvtSetNotificationEnabled;
    Config->EvtCancel = EvtCancel;
}
WDF_EXTERN_C_END
