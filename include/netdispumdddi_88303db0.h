       
#pragma warning(push)
#pragma warning(disable:4201)
typedef
NTSTATUS
(NTAPI *QUERY_MIRACAST_DRIVER_INTERFACE)(
    _In_ UINT MiracastDriverInterfaceVersion,
    _In_ UINT MiracastDriverInterfaceSize,
    _Out_writes_bytes_(MiracastDriverInterfaceSize) VOID* pMiracastDriverInterface
    );
typedef enum
{
    MIRACAST_STATUS_CRITICAL_ERROR = 0,
    MIRACAST_STATUS_MISSING_KEEPALIVE = 1,
    MIRACAST_STATUS_SINK_DISOCNNECT_REQUEST = 2,
    MIRACAST_STATUS_INSUFFICIENT_BANDWIDTH = 3,
    MIRACAST_STATUS_SINK_FAILED_STANDARD_MODE_CHANGE = 4,
    MIRACAST_STATUS_COMPANION_DRIVER_DISCONNECT = 5,
    MIRACAST_STATUS_FORCE_UINT32 = 0xffffffff,
} MIRACAST_STATUS;
typedef
VOID
(NTAPI *PFN_REPORT_SESSION_STATUS)(
    _In_ HANDLE hMiracastDeviceHandle,
    _In_ MIRACAST_STATUS MiracastStatus,
    _In_ NTSTATUS Status
    );
typedef
NTSTATUS
(NTAPI *PFN_MIRACAST_IO_CONTROL)(
    _In_ HANDLE hMiracastDeviceHandle,
    _In_ BOOL HardwareAccess,
    _In_ UINT InputBufferSize,
    _In_reads_bytes_(InputBufferSize) VOID* pInputBuffer,
    _In_ UINT OutputBufferSize,
    _Out_writes_bytes_(OutputBufferSize) VOID* pOutputBuffer,
    _Out_opt_ UINT* pBytesReturned
    );
typedef enum
{
    MIRACAST_PROTOCOL_EVENT_IFRAME_RQ = 0,
    MIRACAST_PROTOCOL_EVENT_MONITOR_ARRIVE = 1,
    MIRACAST_PROTOCOL_EVENT_MONITOR_DEPART = 2,
    MIRACAST_PROTOCOL_EVENT_SINK_FAILED_PREFERRED_MODE_CHANGE = 3,
    MIRACAST_PROTOCOL_EVENT_FORCE_UINT32 = 0xffffffff,
} MIRACAST_PROTOCOL_EVENT;
typedef enum
{
    MIRACAST_STATISTIC_TYPE_CHUNK_PROCESSING_COMPLETE = 0,
    MIRACAST_STATISTIC_TYPE_CHUNK_SENT = 1,
    MIRACAST_STATISTIC_TYPE_EVENT = 2,
    MIRACAST_STATISTIC_TYPE_FORCE_UINT32 = 0xffffffff,
} MIRACAST_STATISTIC_TYPE;
typedef union
{
    struct
    {
        UINT64 FrameNumber : 40;
        UINT64 PartNumber : 24;
    };
    UINT64 Value;
} MIRACAST_CHUNK_ID;
typedef enum
{
    MIRACAST_CHUNK_TYPE_UNKNOWN = 0,
    MIRACAST_CHUNK_TYPE_COLOR_CONVERT_COMPLETE = 1,
    MIRACAST_CHUNK_TYPE_ENCODE_COMPLETE = 2,
    MIRACAST_CHUNK_TYPE_FRAME_START = 3,
    MIRACAST_CHUNK_TYPE_FRAME_DROPPED = 4,
    MIRACAST_CHUNK_TYPE_ENCODE_DRIVER_DEFINED_1 = 0x80000000,
    MIRACAST_CHUNK_TYPE_ENCODE_DRIVER_DEFINED_2 = 0x80000001,
    MIRACAST_CHUNK_TYPE_ENCODE_FORCE_UINT32 = 0xffffffff,
} MIRACAST_CHUNK_TYPE;
typedef struct
{
    MIRACAST_CHUNK_TYPE ChunkType;
    MIRACAST_CHUNK_ID ChunkId;
    UINT ProcessingTime;
    UINT EncodeRate;
} MIRACAST_CHUNK_INFO;
typedef struct
{
    MIRACAST_STATISTIC_TYPE StatisticType;
    union
    {
        struct
        {
            MIRACAST_CHUNK_INFO ChunkInfo;
        } EncodeComplete;
        struct
        {
            MIRACAST_CHUNK_ID ChunkId;
        } ChunkSent;
        struct
        {
            MIRACAST_PROTOCOL_EVENT Event;
        } ProtocolEvent;
    };
} MIRACAST_STATISTIC_DATA;
typedef
VOID
(NTAPI *PFN_REPORT_STATISTIC)(
    _In_ HANDLE hMiracastDeviceHandle,
    _In_ MIRACAST_STATISTIC_DATA* pStatistics
    );
typedef struct
{
    MIRACAST_CHUNK_INFO ChunkInfo;
    UINT PrivateDriverDataSize;
    UCHAR PrivateDriverData[1];
} MIRACAST_CHUNK_DATA;
typedef
NTSTATUS
(NTAPI *PFN_GET_NEXT_CHUNK_DATA)(
    _In_ HANDLE hMiracastDeviceHandle,
    _In_ UINT TimeoutInMilliseconds,
    _In_ UINT AdditionalWaitEventCount,
    _In_opt_ HANDLE* pAdditionalWaitEvents,
    _Inout_ UINT* pChunkDataBufferSize,
    _Out_ MIRACAST_CHUNK_DATA* pChunkDataBuffer,
    _Out_ UINT* pOutstandingChunksToProcess
    );
typedef struct {
    UINT64 EncoderBitRate;
    UINT64 CurrentMaxTxDataRate;
    UINT64 TransmittedFrameCount;
    UINT64 FailedFrameCount;
    UINT64 RetriedFrameCount;
    UINT64 MultipleRetryFrameCount;
} MIRACAST_DATARATE_STATS;
typedef
void
(NTAPI *PFN_DATARATE_NOTIFICATION)(
    _In_ PVOID context,
    _In_opt_ MIRACAST_DATARATE_STATS* pDataRateStats
    );
typedef
NTSTATUS
(NTAPI *PFN_REGISTER_DATARATE_NOTIFICATIONS)(
     _In_ HANDLE hMiracastDeviceHandle,
     _In_opt_ PVOID pNotificationContext,
     _In_opt_ PFN_DATARATE_NOTIFICATION pfnDataRateNotify
    );
typedef struct _MIRACAST_CALLBACKS
{
    PFN_REPORT_SESSION_STATUS ReportSessionStatus;
    PFN_MIRACAST_IO_CONTROL MiracastIoControl;
    PFN_REPORT_STATISTIC ReportStatistic;
    PFN_GET_NEXT_CHUNK_DATA GetNextChunkData;
    PFN_REGISTER_DATARATE_NOTIFICATIONS RegisterForDataRateNotifications;
} MIRACAST_CALLBACKS, *PMIRACAST_CALLBACKS;
typedef
NTSTATUS
(NTAPI *PFN_CREATE_MIRACAST_CONTEXT)(
    _In_ HANDLE hMiracastDeviceHandle,
    _In_ MIRACAST_CALLBACKS* pMiracastCallbacks,
    _Out_ PVOID* ppMiracastContext
    );
typedef
VOID
(NTAPI *PFN_DESTROY_MIRACAST_CONTEXT)(
    _In_ PVOID pMiracastContext
    );
typedef union
{
    struct
    {
        UINT MonitorConnected : 1;
        UINT ReducedModeListDueToBandwidth : 1;
        UINT Reserved : 30;
    };
    UINT Value;
} MIRACAST_SESSION_INFO;
typedef struct
{
    UINT64 CurrentBitRate;
    UINT64 LocalMaxBitRate;
    UINT64 RemoteMaxBitRate;
} MIRACAST_WFD_CONNECTION_STATS;
typedef
NTSTATUS
(NTAPI *PFN_START_MIRACAST_SESSION)(
    _In_ PVOID pMiracastContext,
    _In_ SOCKET MiracastRTSPSocket,
    _In_ MIRACAST_WFD_CONNECTION_STATS* pWfdConnectionStats,
    _Out_ MIRACAST_SESSION_INFO* pSessionInfo
    );
typedef
VOID
(NTAPI *PFN_STOP_MIRACAST_SESSION)(
    _In_ PVOID pMiracastContext
    );
typedef
NTSTATUS
(NTAPI *PFN_HANDLE_KMD_MESSAGE)(
    _In_ PVOID pMiracastContext,
    _In_ UINT InputBufferSize,
    _In_reads_bytes_(InputBufferSize) VOID* pInputBuffer,
    _In_ UINT OutputBufferSize,
    _Out_writes_bytes_(OutputBufferSize) VOID* pOutputBuffer,
    _Out_ UINT* pBytesReturned
    );
typedef struct _MIRACAST_DRIVER_INTERFACE
{
    UINT Size;
    PFN_CREATE_MIRACAST_CONTEXT CreateMiracastContext;
    PFN_DESTROY_MIRACAST_CONTEXT DestroyMiracastContext;
    PFN_START_MIRACAST_SESSION StartMiracastSession;
    PFN_STOP_MIRACAST_SESSION StopMiracastSession;
    PFN_HANDLE_KMD_MESSAGE HandleKernelModeMessage;
} MIRACAST_DRIVER_INTERFACE, *PMIRACAST_DRIVER_INTERFACE;
#pragma warning(pop)
