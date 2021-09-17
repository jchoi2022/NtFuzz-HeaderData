#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _IPX_TRAFFIC_FILTER_GLOBAL_INFO {
 ULONG FilterAction;
} IPX_TRAFFIC_FILTER_GLOBAL_INFO, *PIPX_TRAFFIC_FILTER_GLOBAL_INFO;
typedef struct _IPX_TRAFFIC_FILTER_INFO {
    ULONG FilterDefinition;
    UCHAR DestinationNetwork[4];
    UCHAR DestinationNetworkMask[4];
    UCHAR DestinationNode[6];
    UCHAR DestinationSocket[2];
    UCHAR SourceNetwork[4];
    UCHAR SourceNetworkMask[4];
    UCHAR SourceNode[6];
    UCHAR SourceSocket[2];
 UCHAR PacketType;
    } IPX_TRAFFIC_FILTER_INFO, *PIPX_TRAFFIC_FILTER_INFO;
typedef struct _FLT_IF_SET_PARAMS {
 ULONG InterfaceIndex;
 ULONG FilterAction;
 ULONG FilterSize;
} FLT_IF_SET_PARAMS, *PFLT_IF_SET_PARAMS;
typedef struct _FLT_IF_GET_PARAMS {
 ULONG FilterAction;
 ULONG FilterSize;
 ULONG TotalSize;
} FLT_IF_GET_PARAMS, *PFLT_IF_GET_PARAMS;
typedef struct _FLT_PACKET_LOG {
 ULONG SrcIfIdx;
 ULONG DstIfIdx;
 USHORT DataSize;
 USHORT SeqNum;
 UCHAR Header[30];
} FLT_PACKET_LOG, *PFLT_PACKET_LOG;
#endif
#pragma endregion
