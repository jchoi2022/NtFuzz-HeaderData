#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct {
    USHORT Major;
    USHORT Minor;
} NDK_VERSION;
typedef enum _NDK_RDMA_TECHNOLOGY {
    NdkUndefined = 0,
    NdkiWarp,
    NdkInfiniBand,
    NdkRoCE,
    NdkRoCEv2,
    NdkMaxTechnology
} NDK_RDMA_TECHNOLOGY;
typedef struct _NDK_ADAPTER_INFO {
    NDK_VERSION Version;
    UINT32 VendorId;
    UINT32 DeviceId;
    SIZE_T MaxRegistrationSize;
    SIZE_T MaxWindowSize;
    ULONG FRMRPageCount;
    ULONG MaxInitiatorRequestSge;
    ULONG MaxReceiveRequestSge;
    ULONG MaxReadRequestSge;
    ULONG MaxTransferLength;
    ULONG MaxInlineDataSize;
    ULONG MaxInboundReadLimit;
    ULONG MaxOutboundReadLimit;
    ULONG MaxReceiveQueueDepth;
    ULONG MaxInitiatorQueueDepth;
    ULONG MaxSrqDepth;
    ULONG MaxCqDepth;
    ULONG LargeRequestThreshold;
    ULONG MaxCallerData;
    ULONG MaxCalleeData;
    ULONG AdapterFlags;
    NDK_RDMA_TECHNOLOGY RdmaTechnology;
} NDK_ADAPTER_INFO;
#endif
#pragma endregion
