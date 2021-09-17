    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef enum _NET_PACKET_FILTER_TYPES_FLAGS {
    NET_PACKET_FILTER_TYPE_DIRECTED = NDIS_PACKET_TYPE_DIRECTED,
    NET_PACKET_FILTER_TYPE_MULTICAST = NDIS_PACKET_TYPE_MULTICAST,
    NET_PACKET_FILTER_TYPE_ALL_MULTICAST = NDIS_PACKET_TYPE_ALL_MULTICAST,
    NET_PACKET_FILTER_TYPE_BROADCAST = NDIS_PACKET_TYPE_BROADCAST,
    NET_PACKET_FILTER_TYPE_SOURCE_ROUTING = NDIS_PACKET_TYPE_SOURCE_ROUTING,
    NET_PACKET_FILTER_TYPE_PROMISCUOUS = NDIS_PACKET_TYPE_PROMISCUOUS,
    NET_PACKET_FILTER_TYPE_ALL_LOCAL = NDIS_PACKET_TYPE_ALL_LOCAL,
    NET_PACKET_FILTER_TYPE_MAC_FRAME = NDIS_PACKET_TYPE_MAC_FRAME,
    NET_PACKET_FILTER_TYPE_NO_LOCAL = NDIS_PACKET_TYPE_NO_LOCAL,
} NET_PACKET_FILTER_TYPES_FLAGS;
typedef enum _NET_ADAPTER_STATISTICS_FLAGS {
    NET_ADAPTER_STATISTICS_NO_FLAGS = 0,
    NET_ADAPTER_STATISTICS_XMIT_OK = NDIS_STATISTICS_XMIT_OK_SUPPORTED,
    NET_ADAPTER_STATISTICS_RCV_OK = NDIS_STATISTICS_RCV_OK_SUPPORTED,
    NET_ADAPTER_STATISTICS_XMIT_ERROR = NDIS_STATISTICS_XMIT_ERROR_SUPPORTED,
    NET_ADAPTER_STATISTICS_RCV_ERROR = NDIS_STATISTICS_RCV_ERROR_SUPPORTED,
    NET_ADAPTER_STATISTICS_RCV_NO_BUFFER = NDIS_STATISTICS_RCV_NO_BUFFER_SUPPORTED,
    NET_ADAPTER_STATISTICS_DIRECTED_BYTES_XMIT = NDIS_STATISTICS_DIRECTED_BYTES_XMIT_SUPPORTED,
    NET_ADAPTER_STATISTICS_DIRECTED_FRAMES_XMIT = NDIS_STATISTICS_DIRECTED_FRAMES_XMIT_SUPPORTED,
    NET_ADAPTER_STATISTICS_MULTICAST_BYTES_XMIT = NDIS_STATISTICS_MULTICAST_BYTES_XMIT_SUPPORTED,
    NET_ADAPTER_STATISTICS_MULTICAST_FRAMES_XMIT = NDIS_STATISTICS_MULTICAST_FRAMES_XMIT_SUPPORTED,
    NET_ADAPTER_STATISTICS_BROADCAST_BYTES_XMIT = NDIS_STATISTICS_BROADCAST_BYTES_XMIT_SUPPORTED,
    NET_ADAPTER_STATISTICS_BROADCAST_FRAMES_XMIT = NDIS_STATISTICS_BROADCAST_FRAMES_XMIT_SUPPORTED,
    NET_ADAPTER_STATISTICS_DIRECTED_BYTES_RCV = NDIS_STATISTICS_DIRECTED_BYTES_RCV_SUPPORTED,
    NET_ADAPTER_STATISTICS_DIRECTED_FRAMES_RCV = NDIS_STATISTICS_DIRECTED_FRAMES_RCV_SUPPORTED,
    NET_ADAPTER_STATISTICS_MULTICAST_BYTES_RCV = NDIS_STATISTICS_MULTICAST_BYTES_RCV_SUPPORTED,
    NET_ADAPTER_STATISTICS_MULTICAST_FRAMES_RCV = NDIS_STATISTICS_MULTICAST_FRAMES_RCV_SUPPORTED,
    NET_ADAPTER_STATISTICS_BROADCAST_BYTES_RCV = NDIS_STATISTICS_BROADCAST_BYTES_RCV_SUPPORTED,
    NET_ADAPTER_STATISTICS_BROADCAST_FRAMES_RCV = NDIS_STATISTICS_BROADCAST_FRAMES_RCV_SUPPORTED,
    NET_ADAPTER_STATISTICS_RCV_CRC_ERROR = NDIS_STATISTICS_RCV_CRC_ERROR_SUPPORTED,
    NET_ADAPTER_STATISTICS_TRANSMIT_QUEUE_LENGTH = NDIS_STATISTICS_TRANSMIT_QUEUE_LENGTH_SUPPORTED,
    NET_ADAPTER_STATISTICS_BYTES_RCV = NDIS_STATISTICS_BYTES_RCV_SUPPORTED,
    NET_ADAPTER_STATISTICS_BYTES_XMIT = NDIS_STATISTICS_BYTES_XMIT_SUPPORTED,
    NET_ADAPTER_STATISTICS_RCV_DISCARDS = NDIS_STATISTICS_RCV_DISCARDS_SUPPORTED,
    NET_ADAPTER_STATISTICS_GEN_STATISTICS = NDIS_STATISTICS_GEN_STATISTICS_SUPPORTED,
    NET_ADAPTER_STATISTICS_XMIT_DISCARDS = NDIS_STATISTICS_XMIT_DISCARDS_SUPPORTED,
} NET_ADAPTER_STATISTICS_FLAGS;
typedef enum _NET_ADAPTER_POWER_FLAGS {
    NET_ADAPTER_POWER_WAKE_PACKET_INDICATION = NDIS_PM_WAKE_PACKET_INDICATION_SUPPORTED,
    NET_ADAPTER_POWER_SELECTIVE_SUSPEND = NDIS_PM_SELECTIVE_SUSPEND_SUPPORTED,
} NET_ADAPTER_POWER_FLAGS;
typedef enum _NET_ADAPTER_WAKE_PATTERN_FLAGS {
    NET_ADAPTER_WAKE_BITMAP_PATTERN = NDIS_PM_WOL_BITMAP_PATTERN_ENABLED,
    NET_ADAPTER_WAKE_MAGIC_PACKET = NDIS_PM_WOL_MAGIC_PACKET_ENABLED,
    NET_ADAPTER_WAKE_IPV4_TCP_SYN = NDIS_PM_WOL_IPV4_TCP_SYN_ENABLED,
    NET_ADAPTER_WAKE_IPV6_TCP_SYN = NDIS_PM_WOL_IPV6_TCP_SYN_ENABLED,
    NET_ADAPTER_WAKE_IPV4_DEST_ADDR_WILDCARD = NDIS_PM_WOL_IPV4_DEST_ADDR_WILDCARD_ENABLED,
    NET_ADAPTER_WAKE_IPV6_DEST_ADDR_WILDCARD = NDIS_PM_WOL_IPV6_DEST_ADDR_WILDCARD_ENABLED,
    NET_ADAPTER_WAKE_EAPOL_REQUEST_ID_MESSAGE = NDIS_PM_WOL_EAPOL_REQUEST_ID_MESSAGE_ENABLED,
} NET_ADAPTER_WAKE_PATTERN_FLAGS;
typedef enum _NET_ADAPTER_PROTOCOL_OFFLOADS_FLAGS {
    NET_ADAPTER_PROTOCOL_OFFLOAD_ARP = NDIS_PM_PROTOCOL_OFFLOAD_ARP_ENABLED,
    NET_ADAPTER_PROTOCOL_OFFLOAD_NS = NDIS_PM_PROTOCOL_OFFLOAD_NS_ENABLED,
    NET_ADAPTER_PROTOCOL_OFFLOAD_80211_RSN_REKEY = NDIS_PM_PROTOCOL_OFFLOAD_80211_RSN_REKEY_ENABLED,
} NET_ADAPTER_PROTOCOL_OFFLOADS_FLAGS;
typedef enum _NET_ADAPTER_WAKEUP_EVENTS_FLAGS {
    NET_ADAPTER_WAKE_ON_MEDIA_CONNECT = NDIS_PM_WAKE_ON_MEDIA_CONNECT_SUPPORTED,
    NET_ADAPTER_WAKE_ON_MEDIA_DISCONNECT = NDIS_PM_WAKE_ON_MEDIA_DISCONNECT_SUPPORTED,
} NET_ADAPTER_WAKEUP_EVENTS_FLAGS;
typedef enum _NET_ADAPTER_MEDIA_SPECIFIC_WAKEUP_EVENTS_FLAGS {
    NET_ADAPTER_WLAN_WAKE_ON_NLO_DISCOVERY = NDIS_WLAN_WAKE_ON_NLO_DISCOVERY_SUPPORTED,
    NET_ADAPTER_WLAN_WAKE_ON_AP_ASSOCIATION_LOST = NDIS_WLAN_WAKE_ON_AP_ASSOCIATION_LOST_SUPPORTED,
    NET_ADAPTER_WLAN_WAKE_ON_GTK_HANDSHAKE_ERROR = NDIS_WLAN_WAKE_ON_GTK_HANDSHAKE_ERROR_SUPPORTED,
    NET_ADAPTER_WLAN_WAKE_ON_4WAY_HANDSHAKE_REQUEST = NDIS_WLAN_WAKE_ON_4WAY_HANDSHAKE_REQUEST_SUPPORTED,
    NET_ADAPTER_WWAN_WAKE_ON_REGISTER_STATE = NDIS_WWAN_WAKE_ON_REGISTER_STATE_SUPPORTED,
    NET_ADAPTER_WWAN_WAKE_ON_SMS_RECEIVE = NDIS_WWAN_WAKE_ON_SMS_RECEIVE_SUPPORTED,
    NET_ADAPTER_WWAN_WAKE_ON_USSD_RECEIVE = NDIS_WWAN_WAKE_ON_USSD_RECEIVE_SUPPORTED,
    NET_ADAPTER_WWAN_WAKE_ON_PACKET_STATE = NDIS_WWAN_WAKE_ON_PACKET_STATE_SUPPORTED,
    NET_ADAPTER_WWAN_WAKE_ON_UICC_CHANGE = NDIS_WWAN_WAKE_ON_UICC_CHANGE_SUPPORTED,
} NET_ADAPTER_MEDIA_SPECIFIC_WAKEUP_EVENTS_FLAGS;
typedef enum _NET_ADAPTER_PAUSE_FUNCTIONS {
    NetAdapterPauseFunctionsUnsupported = NdisPauseFunctionsUnsupported,
    NetAdapterPauseFunctionsSendOnly = NdisPauseFunctionsSendOnly,
    NetAdapterPauseFunctionsReceiveOnly = NdisPauseFunctionsReceiveOnly,
    NetAdapterPauseFunctionsSendAndReceive = NdisPauseFunctionsSendAndReceive,
    NetAdapterPauseFunctionsUnknown = NdisPauseFunctionsUnknown,
} NET_ADAPTER_PAUSE_FUNCTIONS;
typedef enum _NET_ADAPTER_AUTO_NEGOTIATION_FLAGS {
    NET_ADAPTER_AUTO_NEGOTIATION_NO_FLAGS = 0,
    NET_ADAPTER_LINK_STATE_XMIT_LINK_SPEED_AUTO_NEGOTIATED = NDIS_LINK_STATE_XMIT_LINK_SPEED_AUTO_NEGOTIATED,
    NET_ADAPTER_LINK_STATE_RCV_LINK_SPEED_AUTO_NEGOTIATED = NDIS_LINK_STATE_RCV_LINK_SPEED_AUTO_NEGOTIATED,
    NET_ADAPTER_LINK_STATE_DUPLEX_AUTO_NEGOTIATED = NDIS_LINK_STATE_DUPLEX_AUTO_NEGOTIATED,
    NET_ADAPTER_LINK_STATE_PAUSE_FUNCTIONS_AUTO_NEGOTIATED = NDIS_LINK_STATE_PAUSE_FUNCTIONS_AUTO_NEGOTIATED,
} NET_ADAPTER_AUTO_NEGOTIATION_FLAGS;
typedef enum _NET_MEMORY_MAPPING_REQUIREMENT {
    NetMemoryMappingRequirementNone = 0,
    NetMemoryMappingRequirementDmaMapped,
} NET_MEMORY_MAPPING_REQUIREMENT;
#include <NetReceiveScaling.h>
DEFINE_ENUM_FLAG_OPERATORS(NET_PACKET_FILTER_TYPES_FLAGS);
DEFINE_ENUM_FLAG_OPERATORS(NET_ADAPTER_STATISTICS_FLAGS);
DEFINE_ENUM_FLAG_OPERATORS(NET_ADAPTER_POWER_FLAGS);
DEFINE_ENUM_FLAG_OPERATORS(NET_ADAPTER_WAKE_PATTERN_FLAGS);
DEFINE_ENUM_FLAG_OPERATORS(NET_ADAPTER_PROTOCOL_OFFLOADS_FLAGS);
DEFINE_ENUM_FLAG_OPERATORS(NET_ADAPTER_WAKEUP_EVENTS_FLAGS);
DEFINE_ENUM_FLAG_OPERATORS(NET_ADAPTER_MEDIA_SPECIFIC_WAKEUP_EVENTS_FLAGS);
DEFINE_ENUM_FLAG_OPERATORS(NET_ADAPTER_PAUSE_FUNCTIONS);
DEFINE_ENUM_FLAG_OPERATORS(NET_ADAPTER_AUTO_NEGOTIATION_FLAGS);
typedef
_Function_class_(EVT_NET_ADAPTER_CREATE_TXQUEUE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_NET_ADAPTER_CREATE_TXQUEUE(
    _In_
    NETADAPTER Adapter,
    _Inout_
    NETTXQUEUE_INIT * TxQueueInit
);
typedef EVT_NET_ADAPTER_CREATE_TXQUEUE *PFN_NET_ADAPTER_CREATE_TXQUEUE;
typedef
_Function_class_(EVT_NET_ADAPTER_CREATE_RXQUEUE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_NET_ADAPTER_CREATE_RXQUEUE(
    _In_
    NETADAPTER Adapter,
    _Inout_
    NETRXQUEUE_INIT * RxQueueInit
);
typedef EVT_NET_ADAPTER_CREATE_RXQUEUE *PFN_NET_ADAPTER_CREATE_RXQUEUE;
typedef NDIS_IF_PHYSICAL_ADDRESS NET_ADAPTER_LINK_LAYER_ADDRESS;
inline
void
NET_ADAPTER_LINK_LAYER_ADDRESS_INIT(
    _Out_ NET_ADAPTER_LINK_LAYER_ADDRESS * LinkLayerAddress,
    _In_range_(1,NDIS_MAX_PHYS_ADDRESS_LENGTH) USHORT Length,
    _In_reads_bytes_(Length) PCUCHAR AddressBuffer
)
{
    RtlZeroMemory(LinkLayerAddress, sizeof(NET_ADAPTER_LINK_LAYER_ADDRESS));
    NT_ASSERTMSG("Failed: 0 < Length <= NDIS_MAX_PHYS_ADDRESS_LENGTH",
                 (Length != 0) && (Length <= NDIS_MAX_PHYS_ADDRESS_LENGTH));
    LinkLayerAddress->Length = Length;
    RtlCopyMemory(LinkLayerAddress->Address,
                  AddressBuffer,
                  Length < sizeof(LinkLayerAddress->Address) ?
                    Length :
                    sizeof(LinkLayerAddress->Address));
}
typedef struct _NET_ADAPTER_LINK_LAYER_CAPABILITIES {
    ULONG Size;
    NET_PACKET_FILTER_TYPES_FLAGS SupportedPacketFilters;
    ULONG MaxMulticastListSize;
    NET_ADAPTER_STATISTICS_FLAGS SupportedStatistics;
    ULONG64 MaxTxLinkSpeed;
    ULONG64 MaxRxLinkSpeed;
} NET_ADAPTER_LINK_LAYER_CAPABILITIES;
inline
void
NET_ADAPTER_LINK_LAYER_CAPABILITIES_INIT(
    _Out_ NET_ADAPTER_LINK_LAYER_CAPABILITIES * LinkLayerCapabilities,
    _In_ NET_PACKET_FILTER_TYPES_FLAGS SupportedPacketFilters,
    _In_ ULONG MaxMulticastListSize,
    _In_ NET_ADAPTER_STATISTICS_FLAGS SupportedStatistics,
    _In_ ULONG64 MaxTxLinkSpeed,
    _In_ ULONG64 MaxRxLinkSpeed
)
{
    RtlZeroMemory(LinkLayerCapabilities, sizeof(NET_ADAPTER_LINK_LAYER_CAPABILITIES));
    LinkLayerCapabilities->Size = sizeof(NET_ADAPTER_LINK_LAYER_CAPABILITIES);
    LinkLayerCapabilities->SupportedPacketFilters = SupportedPacketFilters;
    LinkLayerCapabilities->MaxMulticastListSize = MaxMulticastListSize;
    LinkLayerCapabilities->SupportedStatistics = SupportedStatistics;
    LinkLayerCapabilities->MaxTxLinkSpeed = MaxTxLinkSpeed;
    LinkLayerCapabilities->MaxRxLinkSpeed = MaxRxLinkSpeed;
}
typedef
_Function_class_(EVT_NET_ADAPTER_PREVIEW_WAKE_PATTERN)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_NET_ADAPTER_PREVIEW_WAKE_PATTERN(
    _In_
    NETADAPTER Adapter,
    _In_
    NETPOWERSETTINGS ExistingPowerSettings,
    _In_
    NDIS_PM_WOL_PACKET WakePatternType,
    _In_
    PNDIS_PM_WOL_PATTERN PatternToBeAdded
);
typedef EVT_NET_ADAPTER_PREVIEW_WAKE_PATTERN *PFN_NET_ADAPTER_PREVIEW_WAKE_PATTERN;
typedef
_Function_class_(EVT_NET_ADAPTER_PREVIEW_PROTOCOL_OFFLOAD)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_NET_ADAPTER_PREVIEW_PROTOCOL_OFFLOAD(
    _In_
    NETADAPTER Adapter,
    _In_
    NETPOWERSETTINGS ExistingPowerSettings,
    _In_
    NDIS_PM_PROTOCOL_OFFLOAD_TYPE ProtocolOffloadType,
    _In_
    PNDIS_PM_PROTOCOL_OFFLOAD ProtocolOffloadToBeAdded
);
typedef EVT_NET_ADAPTER_PREVIEW_PROTOCOL_OFFLOAD *PFN_NET_ADAPTER_PREVIEW_PROTOCOL_OFFLOAD;
typedef
_Function_class_(EVT_NET_ADAPTER_RETURN_RX_BUFFER)
_IRQL_requires_same_
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(DISPATCH_LEVEL)
void
EVT_NET_ADAPTER_RETURN_RX_BUFFER(
    _In_
    NETADAPTER Adapter,
    _In_
    void * RxBufferVirtualAddress,
    _In_
    void * RxBufferReturnContext
);
typedef EVT_NET_ADAPTER_RETURN_RX_BUFFER *PFN_NET_ADAPTER_RETURN_RX_BUFFER;
typedef struct _NET_ADAPTER_POWER_CAPABILITIES {
    ULONG Size;
    NET_ADAPTER_POWER_FLAGS Flags;
    NET_ADAPTER_WAKE_PATTERN_FLAGS SupportedWakePatterns;
    ULONG NumTotalWakePatterns;
    ULONG MaxWakePatternSize;
    ULONG MaxWakePatternOffset;
    ULONG MaxWakePacketSaveBuffer;
    NET_ADAPTER_PROTOCOL_OFFLOADS_FLAGS SupportedProtocolOffloads;
    ULONG NumArpOffloadIPv4Addresses;
    ULONG NumNSOffloadIPv6Addresses;
    NET_ADAPTER_WAKEUP_EVENTS_FLAGS SupportedWakeUpEvents;
    NET_ADAPTER_MEDIA_SPECIFIC_WAKEUP_EVENTS_FLAGS SupportedMediaSpecificWakeUpEvents;
    PFN_NET_ADAPTER_PREVIEW_WAKE_PATTERN EvtAdapterPreviewWakePattern;
    PFN_NET_ADAPTER_PREVIEW_PROTOCOL_OFFLOAD EvtAdapterPreviewProtocolOffload;
    WDF_TRI_STATE ManageS0IdlePowerReferences;
} NET_ADAPTER_POWER_CAPABILITIES;
inline
void
NET_ADAPTER_POWER_CAPABILITIES_INIT(
    _Out_ NET_ADAPTER_POWER_CAPABILITIES * PowerCapabilities
)
{
    RtlZeroMemory(PowerCapabilities, sizeof(NET_ADAPTER_POWER_CAPABILITIES));
    PowerCapabilities->Size = sizeof(NET_ADAPTER_POWER_CAPABILITIES);
    PowerCapabilities->ManageS0IdlePowerReferences = WdfUseDefault;
}
typedef struct _NET_ADAPTER_DMA_CAPABILITIES
{
    ULONG Size;
    WDFDMAENABLER DmaEnabler;
    PHYSICAL_ADDRESS MaximumPhysicalAddress;
    WDF_TRI_STATE CacheEnabled;
    NODE_REQUIREMENT PreferredNode;
} NET_ADAPTER_DMA_CAPABILITIES;
inline
void
NET_ADAPTER_DMA_CAPABILITIES_INIT(
    _Out_ NET_ADAPTER_DMA_CAPABILITIES * DmaCapabilities,
    _In_ WDFDMAENABLER DmaEnabler
)
{
    RtlZeroMemory(DmaCapabilities, sizeof(NET_ADAPTER_DMA_CAPABILITIES));
    DmaCapabilities->Size = sizeof(NET_ADAPTER_DMA_CAPABILITIES);
    DmaCapabilities->DmaEnabler = DmaEnabler;
    DmaCapabilities->CacheEnabled = WdfUseDefault;
    DmaCapabilities->PreferredNode = MM_ANY_NODE_OK;
}
typedef enum _NET_RX_FRAGMENT_BUFFER_ALLOCATION_MODE
{
    NetRxFragmentBufferAllocationModeSystem = 0,
    NetRxFragmentBufferAllocationModeDriver,
} NET_RX_FRAGMENT_BUFFER_ALLOCATION_MODE;
typedef enum _NET_RX_FRAGMENT_BUFFER_ATTACHMENT_MODE
{
    NetRxFragmentBufferAttachmentModeSystem = 0,
    NetRxFragmentBufferAttachmentModeDriver,
} NET_RX_FRAGMENT_BUFFER_ATTACHMENT_MODE;
#pragma warning(push)
#pragma warning(disable:4201)
typedef struct _NET_ADAPTER_RX_CAPABILITIES
{
    ULONG Size;
    NET_RX_FRAGMENT_BUFFER_ALLOCATION_MODE AllocationMode;
    NET_RX_FRAGMENT_BUFFER_ATTACHMENT_MODE AttachmentMode;
    UINT32 FragmentRingNumberOfElementsHint;
    SIZE_T MaximumFrameSize;
    SIZE_T MaximumNumberOfQueues;
    union
    {
        struct
        {
            PFN_NET_ADAPTER_RETURN_RX_BUFFER EvtAdapterReturnRxBuffer;
        }
        DUMMYSTRUCTNAME;
        struct
        {
            NET_MEMORY_MAPPING_REQUIREMENT MappingRequirement;
            SIZE_T FragmentBufferAlignment;
            NET_ADAPTER_DMA_CAPABILITIES * DmaCapabilities;
        }
        DUMMYSTRUCTNAME2;
    }
    DUMMYUNIONNAME;
} NET_ADAPTER_RX_CAPABILITIES;
#pragma warning(pop)
inline
void
NET_ADAPTER_RX_CAPABILITIES_INIT_DRIVER_MANAGED(
    _Out_ NET_ADAPTER_RX_CAPABILITIES * RxCapabilities,
    _In_ PFN_NET_ADAPTER_RETURN_RX_BUFFER EvtAdapterReturnRxBuffer,
    _In_ SIZE_T MaximumFrameSize,
    _In_ SIZE_T MaximumNumberOfQueues
)
{
    RtlZeroMemory(RxCapabilities, sizeof(NET_ADAPTER_RX_CAPABILITIES));
    RxCapabilities->Size = sizeof(NET_ADAPTER_RX_CAPABILITIES);
    RxCapabilities->FragmentBufferAlignment = NET_ADAPTER_FRAGMENT_DEFAULT_ALIGNMENT;
    RxCapabilities->MaximumFrameSize = MaximumFrameSize;
    RxCapabilities->MaximumNumberOfQueues = MaximumNumberOfQueues;
    RxCapabilities->AllocationMode = NetRxFragmentBufferAllocationModeDriver;
    RxCapabilities->AttachmentMode = NetRxFragmentBufferAttachmentModeDriver;
    RxCapabilities->EvtAdapterReturnRxBuffer = EvtAdapterReturnRxBuffer;
}
inline
void
NET_ADAPTER_RX_CAPABILITIES_INIT_SYSTEM_MANAGED(
    _Out_ NET_ADAPTER_RX_CAPABILITIES * RxCapabilities,
    _In_ SIZE_T MaximumFrameSize,
    _In_ SIZE_T MaximumNumberOfQueues
)
{
    RtlZeroMemory(RxCapabilities, sizeof(NET_ADAPTER_RX_CAPABILITIES));
    RxCapabilities->Size = sizeof(NET_ADAPTER_RX_CAPABILITIES);
    RxCapabilities->FragmentBufferAlignment = NET_ADAPTER_FRAGMENT_DEFAULT_ALIGNMENT;
    RxCapabilities->MaximumFrameSize = MaximumFrameSize;
    RxCapabilities->MaximumNumberOfQueues = MaximumNumberOfQueues;
    RxCapabilities->AllocationMode = NetRxFragmentBufferAllocationModeSystem;
    RxCapabilities->AttachmentMode = NetRxFragmentBufferAttachmentModeSystem;
    RxCapabilities->MappingRequirement = NetMemoryMappingRequirementNone;
}
inline
void
NET_ADAPTER_RX_CAPABILITIES_INIT_SYSTEM_MANAGED_DMA(
    _Out_ NET_ADAPTER_RX_CAPABILITIES * RxCapabilities,
    _In_ NET_ADAPTER_DMA_CAPABILITIES * DmaCapabilities,
    _In_ SIZE_T MaximumFrameSize,
    _In_ SIZE_T MaximumNumberOfQueues
)
{
    RtlZeroMemory(RxCapabilities, sizeof(NET_ADAPTER_RX_CAPABILITIES));
    RxCapabilities->Size = sizeof(NET_ADAPTER_RX_CAPABILITIES);
    RxCapabilities->FragmentBufferAlignment = NET_ADAPTER_FRAGMENT_DEFAULT_ALIGNMENT;
    RxCapabilities->MaximumFrameSize = MaximumFrameSize;
    RxCapabilities->MaximumNumberOfQueues = MaximumNumberOfQueues;
    RxCapabilities->AllocationMode = NetRxFragmentBufferAllocationModeSystem;
    RxCapabilities->AttachmentMode = NetRxFragmentBufferAttachmentModeSystem;
    RxCapabilities->MappingRequirement = NetMemoryMappingRequirementDmaMapped;
    RxCapabilities->DmaCapabilities = DmaCapabilities;
}
typedef struct _NET_ADAPTER_TX_CAPABILITIES
{
    ULONG Size;
    NET_MEMORY_MAPPING_REQUIREMENT MappingRequirement;
    SIZE_T MaximumFrameSize;
    SIZE_T PayloadBackfill;
    SIZE_T MaximumNumberOfFragments;
    SIZE_T FragmentBufferAlignment;
    UINT32 FragmentRingNumberOfElementsHint;
    SIZE_T MaximumNumberOfQueues;
    NET_ADAPTER_DMA_CAPABILITIES * DmaCapabilities;
} NET_ADAPTER_TX_CAPABILITIES;
inline
void
NET_ADAPTER_TX_CAPABILITIES_INIT(
    _Out_ NET_ADAPTER_TX_CAPABILITIES * TxCapabilities,
    _In_ SIZE_T MaximumFrameSize,
    _In_ SIZE_T MaximumNumberOfQueues
)
{
    RtlZeroMemory(TxCapabilities, sizeof(NET_ADAPTER_TX_CAPABILITIES));
    TxCapabilities->Size = sizeof(NET_ADAPTER_TX_CAPABILITIES);
    TxCapabilities->FragmentBufferAlignment = NET_ADAPTER_FRAGMENT_DEFAULT_ALIGNMENT;
    TxCapabilities->MaximumFrameSize = MaximumFrameSize;
    TxCapabilities->MaximumNumberOfQueues = MaximumNumberOfQueues;
    TxCapabilities->MaximumNumberOfFragments = (SIZE_T)-1;
}
inline
void
NET_ADAPTER_TX_CAPABILITIES_INIT_FOR_DMA(
    _Out_ NET_ADAPTER_TX_CAPABILITIES * TxCapabilities,
    _In_ NET_ADAPTER_DMA_CAPABILITIES * DmaCapabilities,
    _In_ SIZE_T MaximumFrameSize,
    _In_ SIZE_T MaximumNumberOfQueues
)
{
    NET_ADAPTER_TX_CAPABILITIES_INIT(
        TxCapabilities,
        MaximumFrameSize,
        MaximumNumberOfQueues);
    TxCapabilities->DmaCapabilities = DmaCapabilities;
    TxCapabilities->MappingRequirement = NetMemoryMappingRequirementDmaMapped;
}
typedef struct _NET_ADAPTER_LINK_STATE {
    ULONG Size;
    ULONG64 TxLinkSpeed;
    ULONG64 RxLinkSpeed;
    NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
    NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;
    NET_ADAPTER_PAUSE_FUNCTIONS SupportedPauseFunctions;
    NET_ADAPTER_AUTO_NEGOTIATION_FLAGS AutoNegotiationFlags;
} NET_ADAPTER_LINK_STATE;
inline
void
NET_ADAPTER_LINK_STATE_INIT(
    _Out_ NET_ADAPTER_LINK_STATE * LinkState,
    _In_ ULONG64 LinkSpeed,
    _In_ NET_IF_MEDIA_CONNECT_STATE MediaConnectState,
    _In_ NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState,
    _In_ NET_ADAPTER_PAUSE_FUNCTIONS SupportedPauseFunctions,
    _In_ NET_ADAPTER_AUTO_NEGOTIATION_FLAGS AutoNegotiationFlags
)
{
    RtlZeroMemory(LinkState, sizeof(NET_ADAPTER_LINK_STATE));
    LinkState->Size = sizeof(NET_ADAPTER_LINK_STATE);
    LinkState->TxLinkSpeed = LinkSpeed;
    LinkState->RxLinkSpeed = LinkSpeed;
    LinkState->MediaConnectState = MediaConnectState;
    LinkState->MediaDuplexState = MediaDuplexState;
    LinkState->SupportedPauseFunctions = SupportedPauseFunctions;
    LinkState->AutoNegotiationFlags = AutoNegotiationFlags;
}
inline
void
NET_ADAPTER_LINK_STATE_INIT_DISCONNECTED(
    _Out_ NET_ADAPTER_LINK_STATE * LinkState
)
{
    RtlZeroMemory(LinkState, sizeof(NET_ADAPTER_LINK_STATE));
    LinkState->Size = sizeof(NET_ADAPTER_LINK_STATE);
    LinkState->MediaConnectState = MediaConnectStateDisconnected;
    LinkState->TxLinkSpeed = NDIS_LINK_SPEED_UNKNOWN;
    LinkState->RxLinkSpeed = NDIS_LINK_SPEED_UNKNOWN;
    LinkState->MediaDuplexState = MediaDuplexStateUnknown;
    LinkState->SupportedPauseFunctions = NetAdapterPauseFunctionsUnknown;
    LinkState->AutoNegotiationFlags = NET_ADAPTER_AUTO_NEGOTIATION_NO_FLAGS;
}
typedef struct _NET_ADAPTER_DATAPATH_CALLBACKS {
    ULONG Size;
    PFN_NET_ADAPTER_CREATE_TXQUEUE EvtAdapterCreateTxQueue;
    PFN_NET_ADAPTER_CREATE_RXQUEUE EvtAdapterCreateRxQueue;
} NET_ADAPTER_DATAPATH_CALLBACKS;
inline
void
NET_ADAPTER_DATAPATH_CALLBACKS_INIT(
    _Out_ NET_ADAPTER_DATAPATH_CALLBACKS * DatapathCallbacks,
    _In_ PFN_NET_ADAPTER_CREATE_TXQUEUE EvtAdapterCreateTxQueue,
    _In_ PFN_NET_ADAPTER_CREATE_RXQUEUE EvtAdapterCreateRxQueue
)
{
    RtlZeroMemory(DatapathCallbacks,
        sizeof(NET_ADAPTER_DATAPATH_CALLBACKS));
    DatapathCallbacks->Size = sizeof(NET_ADAPTER_DATAPATH_CALLBACKS);
    DatapathCallbacks->EvtAdapterCreateTxQueue = EvtAdapterCreateTxQueue;
    DatapathCallbacks->EvtAdapterCreateRxQueue = EvtAdapterCreateRxQueue;
}
typedef
_Function_class_(EVT_NET_ADAPTER_OFFLOAD_SET_CHECKSUM)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
void
EVT_NET_ADAPTER_OFFLOAD_SET_CHECKSUM(
    _In_
    NETADAPTER Adapter,
    _In_
    NETOFFLOAD Offload
);
typedef EVT_NET_ADAPTER_OFFLOAD_SET_CHECKSUM *PFN_NET_ADAPTER_OFFLOAD_SET_CHECKSUM;
typedef struct _NET_ADAPTER_OFFLOAD_CHECKSUM_CAPABILITIES
{
    ULONG Size;
    BOOLEAN IPv4;
    BOOLEAN Tcp;
    BOOLEAN Udp;
    PFN_NET_ADAPTER_OFFLOAD_SET_CHECKSUM
        EvtAdapterOffloadSetChecksum;
} NET_ADAPTER_OFFLOAD_CHECKSUM_CAPABILITIES;
inline
void
NET_ADAPTER_OFFLOAD_CHECKSUM_CAPABILITIES_INIT(
    _Out_ NET_ADAPTER_OFFLOAD_CHECKSUM_CAPABILITIES * ChecksumCapabilities,
    _In_ BOOLEAN IPv4,
    _In_ BOOLEAN Tcp,
    _In_ BOOLEAN Udp,
    _In_ PFN_NET_ADAPTER_OFFLOAD_SET_CHECKSUM EvtAdapterOffloadSetChecksum
)
{
    RtlZeroMemory(ChecksumCapabilities, sizeof(NET_ADAPTER_OFFLOAD_CHECKSUM_CAPABILITIES));
    ChecksumCapabilities->Size = sizeof(NET_ADAPTER_OFFLOAD_CHECKSUM_CAPABILITIES);
    ChecksumCapabilities->IPv4 = IPv4;
    ChecksumCapabilities->Tcp = Tcp;
    ChecksumCapabilities->Udp = Udp;
    ChecksumCapabilities->EvtAdapterOffloadSetChecksum = EvtAdapterOffloadSetChecksum;
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NETADAPTER_INIT *
(*PFN_NETADAPTERINITALLOCATE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
NETADAPTER_INIT *
NetAdapterInitAllocate(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_NETADAPTERINITALLOCATE) NetFunctions[NetAdapterInitAllocateTableIndex])(NetDriverGlobals, Device);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
void
(*PFN_NETADAPTERINITFREE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER_INIT* AdapterInit
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
void
NetAdapterInitFree(
    _In_
    NETADAPTER_INIT* AdapterInit
    )
{
    ((PFN_NETADAPTERINITFREE) NetFunctions[NetAdapterInitFreeTableIndex])(NetDriverGlobals, AdapterInit);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
void
(*PFN_NETADAPTERINITSETDATAPATHCALLBACKS)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    NETADAPTER_INIT* AdapterInit,
    _In_
    NET_ADAPTER_DATAPATH_CALLBACKS* DatapathCallbacks
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
void
NetAdapterInitSetDatapathCallbacks(
    _Inout_
    NETADAPTER_INIT* AdapterInit,
    _In_
    NET_ADAPTER_DATAPATH_CALLBACKS* DatapathCallbacks
    )
{
    ((PFN_NETADAPTERINITSETDATAPATHCALLBACKS) NetFunctions[NetAdapterInitSetDatapathCallbacksTableIndex])(NetDriverGlobals, AdapterInit, DatapathCallbacks);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
void
(*PFN_NETADAPTERINITSETNETREQUESTATTRIBUTES)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    NETADAPTER_INIT* AdapterInit,
    _In_
    WDF_OBJECT_ATTRIBUTES* NetRequestAttributes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
void
NetAdapterInitSetNetRequestAttributes(
    _Inout_
    NETADAPTER_INIT* AdapterInit,
    _In_
    WDF_OBJECT_ATTRIBUTES* NetRequestAttributes
    )
{
    ((PFN_NETADAPTERINITSETNETREQUESTATTRIBUTES) NetFunctions[NetAdapterInitSetNetRequestAttributesTableIndex])(NetDriverGlobals, AdapterInit, NetRequestAttributes);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
void
(*PFN_NETADAPTERINITSETNETPOWERSETTINGSATTRIBUTES)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    NETADAPTER_INIT* AdapterInit,
    _In_
    WDF_OBJECT_ATTRIBUTES* NetPowerSettingsAttributes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
void
NetAdapterInitSetNetPowerSettingsAttributes(
    _Inout_
    NETADAPTER_INIT* AdapterInit,
    _In_
    WDF_OBJECT_ATTRIBUTES* NetPowerSettingsAttributes
    )
{
    ((PFN_NETADAPTERINITSETNETPOWERSETTINGSATTRIBUTES) NetFunctions[NetAdapterInitSetNetPowerSettingsAttributesTableIndex])(NetDriverGlobals, AdapterInit, NetPowerSettingsAttributes);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_NETADAPTERDEVICEINITCONFIG)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PWDFDEVICE_INIT DeviceInit
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
NTSTATUS
NetAdapterDeviceInitConfig(
    _Inout_
    PWDFDEVICE_INIT DeviceInit
    )
{
    return ((PFN_NETADAPTERDEVICEINITCONFIG) NetFunctions[NetAdapterDeviceInitConfigTableIndex])(NetDriverGlobals, DeviceInit);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_NETADAPTERCREATE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER_INIT* AdapterInit,
    _In_opt_
    WDF_OBJECT_ATTRIBUTES* AdapterAttributes,
    _Out_
    NETADAPTER* Adapter
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
NTSTATUS
NetAdapterCreate(
    _In_
    NETADAPTER_INIT* AdapterInit,
    _In_opt_
    WDF_OBJECT_ATTRIBUTES* AdapterAttributes,
    _Out_
    NETADAPTER* Adapter
    )
{
    return ((PFN_NETADAPTERCREATE) NetFunctions[NetAdapterCreateTableIndex])(NetDriverGlobals, AdapterInit, AdapterAttributes, Adapter);
}
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_NETADAPTERSTART)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER Adapter
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
NTSTATUS
NetAdapterStart(
    _In_
    NETADAPTER Adapter
    )
{
    return ((PFN_NETADAPTERSTART) NetFunctions[NetAdapterStartTableIndex])(NetDriverGlobals, Adapter);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
void
(*PFN_NETADAPTERSTOP)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER Adapter
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
void
NetAdapterStop(
    _In_
    NETADAPTER Adapter
    )
{
    ((PFN_NETADAPTERSTOP) NetFunctions[NetAdapterStopTableIndex])(NetDriverGlobals, Adapter);
}
typedef
_IRQL_requires_(PASSIVE_LEVEL)
WDFAPI
void
(*PFN_NETADAPTERSETLINKLAYERCAPABILITIES)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER Adapter,
    _In_
    NET_ADAPTER_LINK_LAYER_CAPABILITIES* LinkLayerCapabilities
    );
_IRQL_requires_(PASSIVE_LEVEL)
FORCEINLINE
void
NetAdapterSetLinkLayerCapabilities(
    _In_
    NETADAPTER Adapter,
    _In_
    NET_ADAPTER_LINK_LAYER_CAPABILITIES* LinkLayerCapabilities
    )
{
    ((PFN_NETADAPTERSETLINKLAYERCAPABILITIES) NetFunctions[NetAdapterSetLinkLayerCapabilitiesTableIndex])(NetDriverGlobals, Adapter, LinkLayerCapabilities);
}
typedef
_IRQL_requires_(PASSIVE_LEVEL)
WDFAPI
void
(*PFN_NETADAPTERSETLINKLAYERMTUSIZE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER Adapter,
    _In_
    ULONG MtuSize
    );
_IRQL_requires_(PASSIVE_LEVEL)
FORCEINLINE
void
NetAdapterSetLinkLayerMtuSize(
    _In_
    NETADAPTER Adapter,
    _In_
    ULONG MtuSize
    )
{
    ((PFN_NETADAPTERSETLINKLAYERMTUSIZE) NetFunctions[NetAdapterSetLinkLayerMtuSizeTableIndex])(NetDriverGlobals, Adapter, MtuSize);
}
typedef
_IRQL_requires_(PASSIVE_LEVEL)
WDFAPI
void
(*PFN_NETADAPTERSETPOWERCAPABILITIES)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER Adapter,
    _In_
    NET_ADAPTER_POWER_CAPABILITIES* PowerCapabilities
    );
_IRQL_requires_(PASSIVE_LEVEL)
FORCEINLINE
void
NetAdapterSetPowerCapabilities(
    _In_
    NETADAPTER Adapter,
    _In_
    NET_ADAPTER_POWER_CAPABILITIES* PowerCapabilities
    )
{
    ((PFN_NETADAPTERSETPOWERCAPABILITIES) NetFunctions[NetAdapterSetPowerCapabilitiesTableIndex])(NetDriverGlobals, Adapter, PowerCapabilities);
}
typedef
_IRQL_requires_(PASSIVE_LEVEL)
WDFAPI
void
(*PFN_NETADAPTERSETDATAPATHCAPABILITIES)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER Adapter,
    _In_
    NET_ADAPTER_TX_CAPABILITIES* TxCapabilities,
    _In_
    NET_ADAPTER_RX_CAPABILITIES* RxCapabilities
    );
_IRQL_requires_(PASSIVE_LEVEL)
FORCEINLINE
void
NetAdapterSetDataPathCapabilities(
    _In_
    NETADAPTER Adapter,
    _In_
    NET_ADAPTER_TX_CAPABILITIES* TxCapabilities,
    _In_
    NET_ADAPTER_RX_CAPABILITIES* RxCapabilities
    )
{
    ((PFN_NETADAPTERSETDATAPATHCAPABILITIES) NetFunctions[NetAdapterSetDataPathCapabilitiesTableIndex])(NetDriverGlobals, Adapter, TxCapabilities, RxCapabilities);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
void
(*PFN_NETADAPTERSETLINKSTATE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER Adapter,
    _In_
    NET_ADAPTER_LINK_STATE* State
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
void
NetAdapterSetLinkState(
    _In_
    NETADAPTER Adapter,
    _In_
    NET_ADAPTER_LINK_STATE* State
    )
{
    ((PFN_NETADAPTERSETLINKSTATE) NetFunctions[NetAdapterSetLinkStateTableIndex])(NetDriverGlobals, Adapter, State);
}
typedef
_IRQL_requires_(PASSIVE_LEVEL)
WDFAPI
NET_LUID
(*PFN_NETADAPTERGETNETLUID)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER Adapter
    );
_IRQL_requires_(PASSIVE_LEVEL)
FORCEINLINE
NET_LUID
NetAdapterGetNetLuid(
    _In_
    NETADAPTER Adapter
    )
{
    return ((PFN_NETADAPTERGETNETLUID) NetFunctions[NetAdapterGetNetLuidTableIndex])(NetDriverGlobals, Adapter);
}
typedef
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_NETADAPTEROPENCONFIGURATION)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER Adapter,
    _In_opt_
    WDF_OBJECT_ATTRIBUTES* ConfigurationAttributes,
    _Out_
    NETCONFIGURATION* Configuration
    );
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
FORCEINLINE
NTSTATUS
NetAdapterOpenConfiguration(
    _In_
    NETADAPTER Adapter,
    _In_opt_
    WDF_OBJECT_ATTRIBUTES* ConfigurationAttributes,
    _Out_
    NETCONFIGURATION* Configuration
    )
{
    return ((PFN_NETADAPTEROPENCONFIGURATION) NetFunctions[NetAdapterOpenConfigurationTableIndex])(NetDriverGlobals, Adapter, ConfigurationAttributes, Configuration);
}
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NETPOWERSETTINGS
(*PFN_NETADAPTERGETPOWERSETTINGS)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER Adapter
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
NETPOWERSETTINGS
NetAdapterGetPowerSettings(
    _In_
    NETADAPTER Adapter
    )
{
    return ((PFN_NETADAPTERGETPOWERSETTINGS) NetFunctions[NetAdapterGetPowerSettingsTableIndex])(NetDriverGlobals, Adapter);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
void
(*PFN_NETADAPTERSETPERMANENTLINKLAYERADDRESS)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER Adapter,
    _In_
    NET_ADAPTER_LINK_LAYER_ADDRESS* LinkLayerAddress
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
void
NetAdapterSetPermanentLinkLayerAddress(
    _In_
    NETADAPTER Adapter,
    _In_
    NET_ADAPTER_LINK_LAYER_ADDRESS* LinkLayerAddress
    )
{
    ((PFN_NETADAPTERSETPERMANENTLINKLAYERADDRESS) NetFunctions[NetAdapterSetPermanentLinkLayerAddressTableIndex])(NetDriverGlobals, Adapter, LinkLayerAddress);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
void
(*PFN_NETADAPTERSETCURRENTLINKLAYERADDRESS)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER Adapter,
    _In_
    NET_ADAPTER_LINK_LAYER_ADDRESS* LinkLayerAddress
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
void
NetAdapterSetCurrentLinkLayerAddress(
    _In_
    NETADAPTER Adapter,
    _In_
    NET_ADAPTER_LINK_LAYER_ADDRESS* LinkLayerAddress
    )
{
    ((PFN_NETADAPTERSETCURRENTLINKLAYERADDRESS) NetFunctions[NetAdapterSetCurrentLinkLayerAddressTableIndex])(NetDriverGlobals, Adapter, LinkLayerAddress);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
void
(*PFN_NETADAPTEROFFLOADSETCHECKSUMCAPABILITIES)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETADAPTER Adapter,
    _In_
    NET_ADAPTER_OFFLOAD_CHECKSUM_CAPABILITIES* HardwareCapabilities
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
void
NetAdapterOffloadSetChecksumCapabilities(
    _In_
    NETADAPTER Adapter,
    _In_
    NET_ADAPTER_OFFLOAD_CHECKSUM_CAPABILITIES* HardwareCapabilities
    )
{
    ((PFN_NETADAPTEROFFLOADSETCHECKSUMCAPABILITIES) NetFunctions[NetAdapterOffloadSetChecksumCapabilitiesTableIndex])(NetDriverGlobals, Adapter, HardwareCapabilities);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
BOOLEAN
(*PFN_NETOFFLOADISCHECKSUMIPV4ENABLED)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETOFFLOAD Offload
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
BOOLEAN
NetOffloadIsChecksumIPv4Enabled(
    _In_
    NETOFFLOAD Offload
    )
{
    return ((PFN_NETOFFLOADISCHECKSUMIPV4ENABLED) NetFunctions[NetOffloadIsChecksumIPv4EnabledTableIndex])(NetDriverGlobals, Offload);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
BOOLEAN
(*PFN_NETOFFLOADISCHECKSUMTCPENABLED)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETOFFLOAD Offload
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
BOOLEAN
NetOffloadIsChecksumTcpEnabled(
    _In_
    NETOFFLOAD Offload
    )
{
    return ((PFN_NETOFFLOADISCHECKSUMTCPENABLED) NetFunctions[NetOffloadIsChecksumTcpEnabledTableIndex])(NetDriverGlobals, Offload);
}
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
BOOLEAN
(*PFN_NETOFFLOADISCHECKSUMUDPENABLED)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETOFFLOAD Offload
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
BOOLEAN
NetOffloadIsChecksumUdpEnabled(
    _In_
    NETOFFLOAD Offload
    )
{
    return ((PFN_NETOFFLOADISCHECKSUMUDPENABLED) NetFunctions[NetOffloadIsChecksumUdpEnabledTableIndex])(NetDriverGlobals, Offload);
}
WDF_EXTERN_C_END
