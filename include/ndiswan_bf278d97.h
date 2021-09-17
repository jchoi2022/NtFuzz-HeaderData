       
typedef struct _NDIS_WAN_INFO
{
    _Out_ ULONG MaxFrameSize;
    _Out_ ULONG MaxTransmit;
    _Out_ ULONG HeaderPadding;
    _Out_ ULONG TailPadding;
    _Out_ ULONG Endpoints;
    _Out_ UINT MemoryFlags;
    _Out_ NDIS_PHYSICAL_ADDRESS HighestAcceptableAddress;
    _Out_ ULONG FramingBits;
    _Out_ ULONG DesiredACCM;
} NDIS_WAN_INFO, *PNDIS_WAN_INFO;
typedef struct _NDIS_WAN_SET_LINK_INFO
{
    _In_ NDIS_HANDLE NdisLinkHandle;
    _In_ ULONG MaxSendFrameSize;
    _In_ ULONG MaxRecvFrameSize;
          ULONG HeaderPadding;
          ULONG TailPadding;
    _In_ ULONG SendFramingBits;
    _In_ ULONG RecvFramingBits;
    _In_ ULONG SendCompressionBits;
    _In_ ULONG RecvCompressionBits;
    _In_ ULONG SendACCM;
    _In_ ULONG RecvACCM;
} NDIS_WAN_SET_LINK_INFO, *PNDIS_WAN_SET_LINK_INFO;
typedef struct _NDIS_WAN_GET_LINK_INFO {
    _In_ NDIS_HANDLE NdisLinkHandle;
    _Out_ ULONG MaxSendFrameSize;
    _Out_ ULONG MaxRecvFrameSize;
    _Out_ ULONG HeaderPadding;
    _Out_ ULONG TailPadding;
    _Out_ ULONG SendFramingBits;
    _Out_ ULONG RecvFramingBits;
    _Out_ ULONG SendCompressionBits;
    _Out_ ULONG RecvCompressionBits;
    _Out_ ULONG SendACCM;
    _Out_ ULONG RecvACCM;
} NDIS_WAN_GET_LINK_INFO, *PNDIS_WAN_GET_LINK_INFO;
typedef struct _NDIS_WAN_GET_BRIDGE_INFO
{
    _In_ NDIS_HANDLE NdisLinkHandle;
    _Out_ USHORT LanSegmentNumber;
    _Out_ UCHAR BridgeNumber;
    _Out_ UCHAR BridgingOptions;
    _Out_ ULONG BridgingCapabilities;
    _Out_ UCHAR BridgingType;
    _Out_ UCHAR MacBytes[6];
} NDIS_WAN_GET_BRIDGE_INFO, *PNDIS_WAN_GET_BRIDGE_INFO;
typedef struct _NDIS_WAN_SET_BRIDGE_INFO
{
    _In_ NDIS_HANDLE NdisLinkHandle;
    _In_ USHORT LanSegmentNumber;
    _In_ UCHAR BridgeNumber;
    _In_ UCHAR BridgingOptions;
    _In_ ULONG BridgingCapabilities;
    _In_ UCHAR BridgingType;
    _In_ UCHAR MacBytes[6];
} NDIS_WAN_SET_BRIDGE_INFO, *PNDIS_WAN_SET_BRIDGE_INFO;
typedef struct _NDIS_WAN_COMPRESS_INFO
{
    UCHAR SessionKey[8];
    ULONG MSCompType;
    UCHAR CompType;
    USHORT CompLength;
    union
    {
        struct
        {
            UCHAR CompOUI[3];
            UCHAR CompSubType;
            UCHAR CompValues[32];
        } Proprietary;
        struct
        {
            UCHAR CompValues[32];
        } Public;
    };
} NDIS_WAN_COMPRESS_INFO;
typedef NDIS_WAN_COMPRESS_INFO UNALIGNED *PNDIS_WAN_COMPRESS_INFO;
typedef struct _NDIS_WAN_GET_COMP_INFO
{
    _In_ NDIS_HANDLE NdisLinkHandle;
    _Out_ NDIS_WAN_COMPRESS_INFO SendCapabilities;
    _Out_ NDIS_WAN_COMPRESS_INFO RecvCapabilities;
} NDIS_WAN_GET_COMP_INFO, *PNDIS_WAN_GET_COMP_INFO;
typedef struct _NDIS_WAN_SET_COMP_INFO
{
    _In_ NDIS_HANDLE NdisLinkHandle;
    _In_ NDIS_WAN_COMPRESS_INFO SendCapabilities;
    _In_ NDIS_WAN_COMPRESS_INFO RecvCapabilities;
} NDIS_WAN_SET_COMP_INFO, *PNDIS_WAN_SET_COMP_INFO;
typedef struct _NDIS_WAN_GET_STATS_INFO
{
    _In_ NDIS_HANDLE NdisLinkHandle;
    _Out_ ULONG BytesSent;
    _Out_ ULONG BytesRcvd;
    _Out_ ULONG FramesSent;
    _Out_ ULONG FramesRcvd;
    _Out_ ULONG CRCErrors;
    _Out_ ULONG TimeoutErrors;
    _Out_ ULONG AlignmentErrors;
    _Out_ ULONG SerialOverrunErrors;
    _Out_ ULONG FramingErrors;
    _Out_ ULONG BufferOverrunErrors;
    _Out_ ULONG BytesTransmittedUncompressed;
    _Out_ ULONG BytesReceivedUncompressed;
    _Out_ ULONG BytesTransmittedCompressed;
    _Out_ ULONG BytesReceivedCompressed;
    _Out_ ULONG TunnelPacketsRecieved;
    _Out_ ULONG TunnelRecievePacketsPending;
    _Out_ ULONG TunnelPacketsIndicatedUp;
    _Out_ ULONG TunnelRecievePacketsRejected;
    _Out_ ULONG TunnelPacketsSent;
    _Out_ ULONG TunnelPacketsSentComplete;
    _Out_ ULONG TunnelTransmitPacketsPending;
    _Out_ ULONG TunnelPacketsTransmitError;
    _Out_ ULONG TunnelPacketsSentError;
    _Out_ ULONG TunnelTransmitPacketsRejected;
    _Out_ ULONG TunnelAcksSent;
    _Out_ ULONG TunnelAcksSentComplete;
    _Out_ ULONG TunnelGeneric1;
    _Out_ ULONG TunnelGeneric2;
    _Out_ ULONG TunnelGeneric3;
} NDIS_WAN_GET_STATS_INFO, *PNDIS_WAN_GET_STATS_INFO;
                                  SystemSpecific1, \
                                  SystemSpecific2, \
                                  SystemSpecific3) \
{ \
    NdisMInitializeWrapper(NdisWrapperHandle, \
                            SystemSpecific1, \
                            SystemSpecific2, \
                            SystemSpecific3); \
}
typedef struct _NDIS_MAC_LINE_UP
{
    _In_ ULONG LinkSpeed;
    _In_ NDIS_WAN_QUALITY Quality;
    _In_ USHORT SendWindow;
    _In_ NDIS_HANDLE ConnectionWrapperID;
    _In_ NDIS_HANDLE NdisLinkHandle;
    _Out_ NDIS_HANDLE NdisLinkContext;
} NDIS_MAC_LINE_UP, *PNDIS_MAC_LINE_UP;
typedef struct _NDIS_MAC_LINE_DOWN
{
    _In_ NDIS_HANDLE NdisLinkContext;
} NDIS_MAC_LINE_DOWN, *PNDIS_MAC_LINE_DOWN;
typedef struct _NDIS_MAC_FRAGMENT
{
    _In_ NDIS_HANDLE NdisLinkContext;
    _In_ ULONG Errors;
} NDIS_MAC_FRAGMENT, *PNDIS_MAC_FRAGMENT;
typedef struct _NDIS_WAN_CO_INFO {
    _Out_ ULONG MaxFrameSize;
    _Out_ ULONG MaxSendWindow;
    _Out_ ULONG FramingBits;
    _Out_ ULONG DesiredACCM;
} NDIS_WAN_CO_INFO, *PNDIS_WAN_CO_INFO;
typedef struct _NDIS_WAN_CO_SET_LINK_INFO {
    _In_ ULONG MaxSendFrameSize;
    _In_ ULONG MaxRecvFrameSize;
    _In_ ULONG SendFramingBits;
    _In_ ULONG RecvFramingBits;
    _In_ ULONG SendCompressionBits;
    _In_ ULONG RecvCompressionBits;
    _In_ ULONG SendACCM;
    _In_ ULONG RecvACCM;
} NDIS_WAN_CO_SET_LINK_INFO, *PNDIS_WAN_CO_SET_LINK_INFO;
typedef struct _NDIS_WAN_CO_GET_LINK_INFO {
    _Out_ ULONG MaxSendFrameSize;
    _Out_ ULONG MaxRecvFrameSize;
    _Out_ ULONG SendFramingBits;
    _Out_ ULONG RecvFramingBits;
    _Out_ ULONG SendCompressionBits;
    _Out_ ULONG RecvCompressionBits;
    _Out_ ULONG SendACCM;
    _Out_ ULONG RecvACCM;
} NDIS_WAN_CO_GET_LINK_INFO, *PNDIS_WAN_CO_GET_LINK_INFO;
typedef struct _NDIS_WAN_CO_GET_COMP_INFO {
    _Out_ NDIS_WAN_COMPRESS_INFO SendCapabilities;
    _Out_ NDIS_WAN_COMPRESS_INFO RecvCapabilities;
} NDIS_WAN_CO_GET_COMP_INFO, *PNDIS_WAN_CO_GET_COMP_INFO;
typedef struct _NDIS_WAN_CO_SET_COMP_INFO {
    _In_ NDIS_WAN_COMPRESS_INFO SendCapabilities;
    _In_ NDIS_WAN_COMPRESS_INFO RecvCapabilities;
} NDIS_WAN_CO_SET_COMP_INFO, *PNDIS_WAN_CO_SET_COMP_INFO;
typedef struct _NDIS_WAN_CO_GET_STATS_INFO {
    _Out_ ULONG BytesSent;
    _Out_ ULONG BytesRcvd;
    _Out_ ULONG FramesSent;
    _Out_ ULONG FramesRcvd;
    _Out_ ULONG CRCErrors;
    _Out_ ULONG TimeoutErrors;
    _Out_ ULONG AlignmentErrors;
    _Out_ ULONG SerialOverrunErrors;
    _Out_ ULONG FramingErrors;
    _Out_ ULONG BufferOverrunErrors;
    _Out_ ULONG BytesTransmittedUncompressed;
    _Out_ ULONG BytesReceivedUncompressed;
    _Out_ ULONG BytesTransmittedCompressed;
    _Out_ ULONG BytesReceivedCompressed;
    _Out_ ULONG TunnelPacketsRecieved;
    _Out_ ULONG TunnelRecievePacketsPending;
    _Out_ ULONG TunnelPacketsIndicatedUp;
    _Out_ ULONG TunnelRecievePacketsRejected;
    _Out_ ULONG TunnelPacketsSent;
    _Out_ ULONG TunnelPacketsSentComplete;
    _Out_ ULONG TunnelTransmitPacketsPending;
    _Out_ ULONG TunnelPacketsTransmitError;
    _Out_ ULONG TunnelPacketsSentError;
    _Out_ ULONG TunnelTransmitPacketsRejected;
    _Out_ ULONG TunnelAcksSent;
    _Out_ ULONG TunnelAcksSentComplete;
    _Out_ ULONG TunnelGeneric1;
    _Out_ ULONG TunnelGeneric2;
    _Out_ ULONG TunnelGeneric3;
} NDIS_WAN_CO_GET_STATS_INFO, *PNDIS_WAN_CO_GET_STATS_INFO;
typedef struct _NDIS_WAN_CO_FRAGMENT {
    _In_ ULONG Errors;
} NDIS_WAN_CO_FRAGMENT, *PNDIS_WAN_CO_FRAGMENT;
typedef struct _WAN_CO_LINKPARAMS {
    ULONG TransmitSpeed;
    ULONG ReceiveSpeed;
    ULONG SendWindow;
} WAN_CO_LINKPARAMS, *PWAN_CO_LINKPARAMS;
typedef struct _WAN_CO_MTULINKPARAMS {
    ULONG Version;
    ULONG TransmitSpeed;
    ULONG ReceiveSpeed;
    ULONG SendWindow;
    ULONG MTU;
} WAN_CO_MTULINKPARAMS, *PWAN_CO_MTULINKPARAMS;
