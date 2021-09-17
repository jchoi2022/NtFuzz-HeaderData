       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <ws2tcpip.h>
#include <mstcpip.h>
    #define ExternC
typedef ULONG QOS_FLOWID, *PQOS_FLOWID;
typedef enum _QOS_TRAFFIC_TYPE
{
    QOSTrafficTypeBestEffort = 0,
    QOSTrafficTypeBackground = 1,
    QOSTrafficTypeExcellentEffort = 2,
    QOSTrafficTypeAudioVideo = 3,
    QOSTrafficTypeVoice = 4,
    QOSTrafficTypeControl = 5
} QOS_TRAFFIC_TYPE, *PQOS_TRAFFIC_TYPE;
typedef enum _QOS_SET_FLOW
{
    QOSSetTrafficType = 0,
    QOSSetOutgoingRate = 1,
    QOSSetOutgoingDSCPValue = 2
} QOS_SET_FLOW, *PQOS_SET_FLOW;
typedef struct _QOS_PACKET_PRIORITY
{
    ULONG ConformantDSCPValue;
    ULONG NonConformantDSCPValue;
    ULONG ConformantL2Value;
    ULONG NonConformantL2Value;
} QOS_PACKET_PRIORITY, *PQOS_PACKET_PRIORITY;
typedef struct _QOS_FLOW_FUNDAMENTALS
{
    BOOL BottleneckBandwidthSet;
    UINT64 BottleneckBandwidth;
    BOOL AvailableBandwidthSet;
    UINT64 AvailableBandwidth;
    BOOL RTTSet;
    UINT32 RTT;
} QOS_FLOW_FUNDAMENTALS, *PQOS_FLOW_FUNDAMENTALS;
typedef enum _QOS_FLOWRATE_REASON
{
    QOSFlowRateNotApplicable = 0,
    QOSFlowRateContentChange = 1,
    QOSFlowRateCongestion = 2,
    QOSFlowRateHigherContentEncoding = 3,
    QOSFlowRateUserCaused = 4
} QOS_FLOWRATE_REASON, *PQOS_FLOWRATE_REASON;
typedef enum _QOS_SHAPING{
    QOSShapeOnly = 0,
    QOSShapeAndMark = 1,
    QOSUseNonConformantMarkings = 2
} QOS_SHAPING, *PQOS_SHAPING;
typedef struct _QOS_FLOWRATE_OUTGOING
{
    UINT64 Bandwidth;
    QOS_SHAPING ShapingBehavior;
    QOS_FLOWRATE_REASON Reason;
} QOS_FLOWRATE_OUTGOING, *PQOS_FLOWRATE_OUTGOING;
typedef enum _QOS_QUERY_FLOW
{
    QOSQueryFlowFundamentals = 0,
    QOSQueryPacketPriority = 1,
    QOSQueryOutgoingRate = 2
} QOS_QUERY_FLOW, *PQOS_QUERY_FLOW;
typedef enum _QOS_NOTIFY_FLOW
{
    QOSNotifyCongested = 0,
    QOSNotifyUncongested = 1,
    QOSNotifyAvailable = 2
} QOS_NOTIFY_FLOW, *PQOS_NOTIFY_FLOW;
typedef struct _QOS_VERSION
{
    USHORT MajorVersion;
    USHORT MinorVersion;
} QOS_VERSION, *PQOS_VERSION;
__inline
INT
QOS_HEADER_OVERHEAD(
    _In_ INT af,
    _In_ INT protocol
){
    UINT32 overhead;
    if (af == AF_INET)
        overhead = 20;
    else
        overhead = 40;
    if (protocol == IPPROTO_TCP)
        overhead += 20;
    else
        overhead += 8;
    return overhead;
}
__inline
UINT64
QOS_ADD_OVERHEAD(
    _In_ INT af,
    _In_ INT protocol,
    _In_ UINT32 targetDataPacketSize,
    _In_ UINT64 dataRate
){
    UINT32 overhead;
    double d;
    UINT64 r;
    overhead = QOS_HEADER_OVERHEAD(af, protocol);
    overhead *= 8;
    targetDataPacketSize *= 8;
    d = (double) overhead;
    d /= (double) targetDataPacketSize;
    d *= (double) dataRate;
    r = dataRate;
    r += (UINT64) d;
    return r;
}
__inline
UINT64
QOS_SUBTRACT_OVERHEAD(
    _In_ INT af,
    _In_ INT protocol,
    _In_ UINT32 targetDataPacketSize,
    _In_ UINT64 dataRate
){
    UINT32 overhead;
    double d;
    UINT64 r;
    overhead = QOS_HEADER_OVERHEAD(af, protocol);
    overhead *= 8;
    targetDataPacketSize *= 8;
    d = (double) overhead;
    d /= (double) targetDataPacketSize + overhead;
    d *= (double) dataRate;
    r = dataRate;
    r -= (UINT64) d;
    return r;
}
ExternC
BOOL
WINAPI
QOSCreateHandle(
    _In_ PQOS_VERSION Version,
    _Out_ PHANDLE QOSHandle
);
ExternC
BOOL
WINAPI
QOSCloseHandle(
    _In_ HANDLE QOSHandle
);
ExternC
BOOL
WINAPI
QOSStartTrackingClient(
    _In_ HANDLE QOSHandle,
    _In_ PSOCKADDR DestAddr,
    _Reserved_ DWORD Flags
);
ExternC
BOOL
WINAPI
QOSStopTrackingClient(
    _In_ HANDLE QOSHandle,
    _In_ PSOCKADDR DestAddr,
    _Reserved_ DWORD Flags
);
ExternC
BOOL
WINAPI
QOSEnumerateFlows(
    _In_ HANDLE QOSHandle,
    _Inout_ PULONG Size,
    _Out_writes_bytes_(*Size) PVOID Buffer
);
ExternC
BOOL
WINAPI
QOSAddSocketToFlow(
    _In_ HANDLE QOSHandle,
    _In_ SOCKET Socket,
    _In_opt_ PSOCKADDR DestAddr,
    _In_ QOS_TRAFFIC_TYPE TrafficType,
    _In_opt_ DWORD Flags,
    _Inout_ PQOS_FLOWID FlowId
);
ExternC
BOOL
WINAPI
QOSRemoveSocketFromFlow(
    _In_ HANDLE QOSHandle,
    _In_opt_ SOCKET Socket,
    _In_ QOS_FLOWID FlowId,
    _Reserved_ DWORD Flags
);
ExternC
BOOL
WINAPI
QOSSetFlow(
    _In_ HANDLE QOSHandle,
    _In_ QOS_FLOWID FlowId,
    _In_ QOS_SET_FLOW Operation,
    _In_ ULONG Size,
    _In_reads_bytes_(Size) PVOID Buffer,
    _Reserved_ DWORD Flags,
    _Out_opt_ LPOVERLAPPED Overlapped
);
ExternC
BOOL
WINAPI
QOSQueryFlow(
    _In_ HANDLE QOSHandle,
    _In_ QOS_FLOWID FlowId,
    _In_ QOS_QUERY_FLOW Operation,
    _Inout_ PULONG Size,
    _Out_writes_bytes_(*Size) PVOID Buffer,
    _In_opt_ DWORD Flags,
    _Out_opt_ LPOVERLAPPED Overlapped
);
ExternC
BOOL
WINAPI
QOSNotifyFlow(
    _In_ HANDLE QOSHandle,
    _In_ QOS_FLOWID FlowId,
    _In_ QOS_NOTIFY_FLOW Operation,
    _Inout_opt_ PULONG Size,
    _Inout_updates_bytes_opt_(*Size) PVOID Buffer,
    _Reserved_ DWORD Flags,
    _Out_opt_ LPOVERLAPPED Overlapped
);
ExternC
BOOL
WINAPI
QOSCancel(
    _In_ HANDLE QOSHandle,
    _In_ LPOVERLAPPED Overlapped
);
#endif
#pragma endregion
