       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef ULONG SERVICETYPE;
typedef struct _flowspec
{
    ULONG TokenRate;
    ULONG TokenBucketSize;
    ULONG PeakBandwidth;
    ULONG Latency;
    ULONG DelayVariation;
    SERVICETYPE ServiceType;
    ULONG MaxSduSize;
    ULONG MinimumPolicedSize;
} FLOWSPEC, *PFLOWSPEC, * LPFLOWSPEC;
typedef struct {
    ULONG ObjectType;
    ULONG ObjectLength;
} QOS_OBJECT_HDR, *LPQOS_OBJECT_HDR;
typedef struct _QOS_SD_MODE {
    QOS_OBJECT_HDR ObjectHdr;
    ULONG ShapeDiscardMode;
} QOS_SD_MODE, *LPQOS_SD_MODE;
typedef struct _QOS_SHAPING_RATE {
    QOS_OBJECT_HDR ObjectHdr;
    ULONG ShapingRate;
} QOS_SHAPING_RATE, *LPQOS_SHAPING_RATE;
#endif
#pragma endregion
