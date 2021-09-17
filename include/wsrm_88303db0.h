       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
enum eWINDOW_ADVANCE_METHOD
{
    E_WINDOW_ADVANCE_BY_TIME = 1,
    E_WINDOW_USE_AS_DATA_CACHE
};
typedef struct _RM_SEND_WINDOW
{
    ULONG RateKbitsPerSec;
    ULONG WindowSizeInMSecs;
    ULONG WindowSizeInBytes;
} RM_SEND_WINDOW;
typedef struct _RM_SENDER_STATS
{
    ULONGLONG DataBytesSent;
    ULONGLONG TotalBytesSent;
    ULONGLONG NaksReceived;
    ULONGLONG NaksReceivedTooLate;
    ULONGLONG NumOutstandingNaks;
    ULONGLONG NumNaksAfterRData;
    ULONGLONG RepairPacketsSent;
    ULONGLONG BufferSpaceAvailable;
    ULONGLONG TrailingEdgeSeqId;
    ULONGLONG LeadingEdgeSeqId;
    ULONGLONG RateKBitsPerSecOverall;
    ULONGLONG RateKBitsPerSecLast;
    ULONGLONG TotalODataPacketsSent;
} RM_SENDER_STATS;
typedef struct _RM_RECEIVER_STATS
{
    ULONGLONG NumODataPacketsReceived;
    ULONGLONG NumRDataPacketsReceived;
    ULONGLONG NumDuplicateDataPackets;
    ULONGLONG DataBytesReceived;
    ULONGLONG TotalBytesReceived;
    ULONGLONG RateKBitsPerSecOverall;
    ULONGLONG RateKBitsPerSecLast;
    ULONGLONG TrailingEdgeSeqId;
    ULONGLONG LeadingEdgeSeqId;
    ULONGLONG AverageSequencesInWindow;
    ULONGLONG MinSequencesInWindow;
    ULONGLONG MaxSequencesInWindow;
    ULONGLONG FirstNakSequenceNumber;
    ULONGLONG NumPendingNaks;
    ULONGLONG NumOutstandingNaks;
    ULONGLONG NumDataPacketsBuffered;
    ULONGLONG TotalSelectiveNaksSent;
    ULONGLONG TotalParityNaksSent;
} RM_RECEIVER_STATS;
typedef struct _RM_FEC_INFO
{
    USHORT FECBlockSize;
    USHORT FECProActivePackets;
    UCHAR FECGroupSize;
    BOOLEAN fFECOnDemandParityEnabled;
} RM_FEC_INFO;
#endif
#pragma endregion
