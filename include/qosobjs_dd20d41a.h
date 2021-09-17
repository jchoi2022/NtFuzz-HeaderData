       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct _QOS_FRIENDLY_NAME {
    QOS_OBJECT_HDR ObjectHdr;
    WCHAR FriendlyName[QOS_MAX_OBJECT_STRING_LENGTH];
} QOS_FRIENDLY_NAME, *LPQOS_FRIENDLY_NAME;
typedef struct _QOS_TRAFFIC_CLASS {
    QOS_OBJECT_HDR ObjectHdr;
    ULONG TrafficClass;
} QOS_TRAFFIC_CLASS, *LPQOS_TRAFFIC_CLASS;
typedef struct _QOS_DS_CLASS {
    QOS_OBJECT_HDR ObjectHdr;
    ULONG DSField;
} QOS_DS_CLASS, *LPQOS_DS_CLASS;
typedef struct _QOS_DIFFSERV {
    QOS_OBJECT_HDR ObjectHdr;
    ULONG DSFieldCount;
    UCHAR DiffservRule[1];
} QOS_DIFFSERV, *LPQOS_DIFFSERV;
typedef struct _QOS_DIFFSERV_RULE {
    UCHAR InboundDSField;
    UCHAR ConformingOutboundDSField;
    UCHAR NonConformingOutboundDSField;
    UCHAR ConformingUserPriority;
    UCHAR NonConformingUserPriority;
} QOS_DIFFSERV_RULE, *LPQOS_DIFFSERV_RULE;
typedef struct _QOS_TCP_TRAFFIC {
    QOS_OBJECT_HDR ObjectHdr;
} QOS_TCP_TRAFFIC, *LPQOS_TCP_TRAFFIC;
}
#endif
#pragma endregion
