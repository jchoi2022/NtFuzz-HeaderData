#include <winapifamily.h>
#pragma region Desktop Family or BootableSku Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_BOOTABLESKU)
#include <stdio.h>
typedef FILE *PFILE, **PPFILE;
typedef DWORD CLFSSTATUS;
typedef ULONG CLFS_CONTAINER_ID;
typedef CLFS_CONTAINER_ID *PCLFS_CONTAINER_ID;
typedef CLFS_CONTAINER_ID **PPCLFS_CONTAINER_ID;
#include <clfslsn.h>
typedef CLS_LSN CLFS_LSN;
typedef CLFS_LSN *PCLFS_LSN, **PPCLFS_LSN;
extern "C"
{
extern __declspec(dllimport) const CLFS_LSN CLFS_LSN_INVALID;
extern __declspec(dllimport) const CLFS_LSN CLFS_LSN_NULL;
}
const UCHAR ClfsNullRecord = 0x00;
const UCHAR ClfsDataRecord = 0x01;
const UCHAR ClfsRestartRecord = 0x02;
const UCHAR ClfsClientRecord = 0x03;
const LPCWSTR CLFS_CONTAINER_STREAM_PREFIX = L"%BLF%:"
const LPCWSTR CLFS_CONTAINER_RELATIVE_PREFIX = L"%BLF%\\"
typedef UCHAR CLS_RECORD_TYPE, *PCLS_RECORD_TYPE, **PPCLS_RECORD_TYPE;
typedef CLS_RECORD_TYPE CLFS_RECORD_TYPE, *PCLFS_RECORD_TYPE, **PPCLFS_RECORD_TYPE;
typedef enum _CLS_CONTEXT_MODE
{
    ClsContextNone = 0x00,
    ClsContextUndoNext,
    ClsContextPrevious,
    ClsContextForward
} CLS_CONTEXT_MODE, *PCLS_CONTEXT_MODE, **PPCLS_CONTEXT_MODE;
typedef enum _CLFS_CONTEXT_MODE
{
    ClfsContextNone = 0x00,
    ClfsContextUndoNext,
    ClfsContextPrevious,
    ClfsContextForward
} CLFS_CONTEXT_MODE, *PCLFS_CONTEXT_MODE, **PPCLFS_CONTEXT_MODE;
typedef struct _CLFS_NODE_ID
{
    ULONG cType;
    ULONG cbNode;
} CLFS_NODE_ID, *PCLFS_NODE_ID;
typedef struct _CLS_WRITE_ENTRY
{
    PVOID Buffer;
    ULONG ByteLength;
} CLS_WRITE_ENTRY, *PCLS_WRITE_ENTRY, **PPCLS_WRITE_ENTRY;
typedef CLS_WRITE_ENTRY CLFS_WRITE_ENTRY;
typedef CLFS_WRITE_ENTRY *PCLFS_WRITE_ENTRY, **PPCLFS_WRITE_ENTRY;
typedef GUID CLFS_LOG_ID;
typedef struct _CLS_INFORMATION
{
    LONGLONG TotalAvailable;
    LONGLONG CurrentAvailable;
    LONGLONG TotalReservation;
    ULONGLONG BaseFileSize;
    ULONGLONG ContainerSize;
    ULONG TotalContainers;
    ULONG FreeContainers;
    ULONG TotalClients;
    ULONG Attributes;
    ULONG FlushThreshold;
    ULONG SectorSize;
    CLS_LSN MinArchiveTailLsn;
    CLS_LSN BaseLsn;
    CLS_LSN LastFlushedLsn;
    CLS_LSN LastLsn;
    CLS_LSN RestartLsn;
    GUID Identity;
} CLS_INFORMATION, *PCLS_INFORMATION, *PPCLS_INFORMATION;
typedef CLS_INFORMATION CLFS_INFORMATION;
typedef CLFS_INFORMATION *PCLFS_INFORMATION, *PPCLFS_INFORMATION;
typedef struct _CLFS_LOG_NAME_INFORMATION
{
    USHORT NameLengthInBytes;
    WCHAR Name[1];
} CLFS_LOG_NAME_INFORMATION, *PCLFS_LOG_NAME_INFORMATION, **PPCLFS_LOG_NAME_INFORMATION;
typedef struct _CLFS_STREAM_ID_INFORMATION
{
    UCHAR StreamIdentifier;
} CLFS_STREAM_ID_INFORMATION, *PCLFS_STREAM_ID_INFORMATION, **PPCLFS_STREAM_ID_INFORMATION;
#pragma pack(push,8)
typedef struct _CLFS_PHYSICAL_LSN_INFORMATION
{
    UCHAR StreamIdentifier;
    CLFS_LSN VirtualLsn;
    CLFS_LSN PhysicalLsn;
} CLFS_PHYSICAL_LSN_INFORMATION, *PCLFS_PHYSICAL_LSN_INFORMATION;
#pragma pack(pop)
typedef UINT32 CLS_CONTAINER_STATE, *PCLS_CONTAINER_STATE, *PPCLS_CONTAINER_STATE;
typedef CLS_CONTAINER_STATE CLFS_CONTAINER_STATE, *PCLFS_CONTAINER_STATE, *PPCLFS_CONTAINER_STATE;
const CLFS_CONTAINER_STATE ClsContainerInitializing = 0x01;
const CLFS_CONTAINER_STATE ClsContainerInactive = 0x02;
const CLFS_CONTAINER_STATE ClsContainerActive = 0x04;
const CLFS_CONTAINER_STATE ClsContainerActivePendingDelete = 0x08;
const CLFS_CONTAINER_STATE ClsContainerPendingArchive = 0x10;
const CLFS_CONTAINER_STATE ClsContainerPendingArchiveAndDelete = 0x20;
const CLFS_CONTAINER_STATE ClfsContainerInitializing = 0x01;
const CLFS_CONTAINER_STATE ClfsContainerInactive = 0x02;
const CLFS_CONTAINER_STATE ClfsContainerActive = 0x04;
const CLFS_CONTAINER_STATE ClfsContainerActivePendingDelete = 0x08;
const CLFS_CONTAINER_STATE ClfsContainerPendingArchive = 0x10;
const CLFS_CONTAINER_STATE ClfsContainerPendingArchiveAndDelete= 0x20;
const ULONG CLFS_MAX_CONTAINER_INFO = (256);
typedef struct _CLS_CONTAINER_INFORMATION
{
    ULONG FileAttributes;
    ULONGLONG CreationTime;
    ULONGLONG LastAccessTime;
    ULONGLONG LastWriteTime;
    LONGLONG ContainerSize;
    ULONG FileNameActualLength;
    ULONG FileNameLength;
    WCHAR FileName [CLFS_MAX_CONTAINER_INFO];
    CLFS_CONTAINER_STATE State;
    CLFS_CONTAINER_ID PhysicalContainerId;
    CLFS_CONTAINER_ID LogicalContainerId;
} CLS_CONTAINER_INFORMATION, *PCLS_CONTAINER_INFORMATION, **PPCLS_CONTAINER_INFORMATION;
typedef CLS_CONTAINER_INFORMATION CLFS_CONTAINER_INFORMATION;
typedef CLFS_CONTAINER_INFORMATION *PCLFS_CONTAINER_INFORMATION, **PPCLFS_CONTAINER_INFORMATION;
typedef enum _CLS_LOG_INFORMATION_CLASS
{
    ClfsLogBasicInformation = 0x00,
    ClfsLogBasicInformationPhysical,
    ClfsLogPhysicalNameInformation,
    ClfsLogStreamIdentifierInformation,
    ClfsLogSystemMarkingInformation,
    ClfsLogPhysicalLsnInformation
} CLS_LOG_INFORMATION_CLASS, *PCLS_LOG_INFORMATION_CLASS, **PPCLS_LOG_INFORMATION_CLASS;
typedef CLS_LOG_INFORMATION_CLASS CLFS_LOG_INFORMATION_CLASS;
typedef CLFS_LOG_INFORMATION_CLASS *PCLFS_LOG_INFORMATION_CLASS, **PPCLFS_LOG_INFORMATION_CLASS;
typedef enum _CLS_IOSTATS_CLASS
{
    ClsIoStatsDefault = 0x0000,
    ClsIoStatsMax = 0xFFFF
} CLS_IOSTATS_CLASS, *PCLS_IOSTATS_CLASS, **PPCLS_IOSTATS_CLASS;
typedef enum _CLFS_IOSTATS_CLASS
{
    ClfsIoStatsDefault = 0x0000,
    ClfsIoStatsMax = 0xFFFF
} CLFS_IOSTATS_CLASS, *PCLFS_IOSTATS_CLASS, **PPCLFS_IOSTATS_CLASS;
typedef struct _CLS_IO_STATISTICS_HEADER
{
    UCHAR ubMajorVersion;
    UCHAR ubMinorVersion;
    CLFS_IOSTATS_CLASS eStatsClass;
    USHORT cbLength;
    ULONG coffData;
} CLS_IO_STATISTICS_HEADER, *PCLS_IO_STATISTICS_HEADER, **PPCLS_IO_STATISTICS_HEADER;
typedef CLS_IO_STATISTICS_HEADER CLFS_IO_STATISTICS_HEADER;
typedef CLFS_IO_STATISTICS_HEADER *PCLFS_IO_STATISTICS_HEADER, **PPCLFS_IO_STATISTICS_HEADER;
typedef struct _CLS_IO_STATISTICS
{
    CLS_IO_STATISTICS_HEADER hdrIoStats;
    ULONGLONG cFlush;
    ULONGLONG cbFlush;
    ULONGLONG cMetaFlush;
    ULONGLONG cbMetaFlush;
} CLS_IO_STATISTICS, *PCLS_IO_STATISTICS, **PPCLS_IO_STATISTICS;
typedef CLS_IO_STATISTICS CLFS_IO_STATISTICS;
typedef CLFS_IO_STATISTICS *PCLFS_IO_STATISTICS, **PPCLFS_IO_STATISTICS;
const UCHAR CLFS_SCAN_INIT = 0x01;
const UCHAR CLFS_SCAN_FORWARD = 0x02;
const UCHAR CLFS_SCAN_BACKWARD = 0x04;
const UCHAR CLFS_SCAN_CLOSE = 0x08;
const UCHAR CLFS_SCAN_INITIALIZED = 0x10;
const UCHAR CLFS_SCAN_BUFFERED = 0x20;
typedef UCHAR CLFS_SCAN_MODE, *PCLFS_SCAN_MODE;
typedef FILE_OBJECT LOG_FILE_OBJECT, *PLOG_FILE_OBJECT, **PPLOG_FILE_OBJECT;
typedef struct _CLS_SCAN_CONTEXT
{
    CLFS_NODE_ID cidNode;
    PLOG_FILE_OBJECT plfoLog;
    __declspec(align(8)) ULONG cIndex;
    __declspec(align(8)) ULONG cContainers;
    __declspec(align(8)) ULONG cContainersReturned;
    __declspec(align(8)) CLFS_SCAN_MODE eScanMode;
    __declspec(align(8)) PCLS_CONTAINER_INFORMATION pinfoContainer;
} CLS_SCAN_CONTEXT, *PCLS_SCAN_CONTEXT, **PPCLS_SCAN_CONTEXT;
typedef CLS_SCAN_CONTEXT CLFS_SCAN_CONTEXT;
typedef CLFS_SCAN_CONTEXT *PCLFS_SCAN_CONTEXT, **PPCLFS_SCAN_CONTEXT;
typedef struct _CLS_ARCHIVE_DESCRIPTOR
{
    ULONGLONG coffLow;
    ULONGLONG coffHigh;
    CLS_CONTAINER_INFORMATION infoContainer;
} CLS_ARCHIVE_DESCRIPTOR, *PCLS_ARCHIVE_DESCRIPTOR, **PPCLS_ARCHIVE_DESCRIPTOR;
typedef CLS_ARCHIVE_DESCRIPTOR CLFS_ARCHIVE_DESCRIPTOR;
typedef CLFS_ARCHIVE_DESCRIPTOR *PCLFS_ARCHIVE_DESCRIPTOR, **PPCLFS_ARCHIVE_DESCRIPTOR;
typedef PVOID (* CLFS_BLOCK_ALLOCATION) (ULONG cbBufferLength, PVOID pvUserContext);
typedef void (* CLFS_BLOCK_DEALLOCATION) (PVOID pvBuffer, PVOID pvUserContext);
typedef enum _CLFS_LOG_ARCHIVE_MODE
{
    ClfsLogArchiveEnabled = 0x01,
    ClfsLogArchiveDisabled = 0x02
} CLFS_LOG_ARCHIVE_MODE, *PCLFS_LOG_ARCHIVE_MODE;
extern "C"
{
CLFSUSER_API BOOLEAN NTAPI
ClfsLsnEqual
(
    _In_ const CLFS_LSN* plsn1,
    _In_ const CLFS_LSN* plsn2
);
CLFSUSER_API BOOLEAN NTAPI
ClfsLsnLess
(
    _In_ const CLFS_LSN* plsn1,
    _In_ const CLFS_LSN* plsn2
);
CLFSUSER_API BOOLEAN NTAPI
ClfsLsnGreater
(
    _In_ const CLFS_LSN* plsn1,
    _In_ const CLFS_LSN* plsn2
);
CLFSUSER_API BOOLEAN NTAPI
ClfsLsnNull
(
    _In_ const CLFS_LSN* plsn
);
CLFSUSER_API CLFS_CONTAINER_ID NTAPI
ClfsLsnContainer
(
  _In_ const CLFS_LSN* plsn
);
CLFSUSER_API CLFS_LSN NTAPI
ClfsLsnCreate
(
    _In_ CLFS_CONTAINER_ID cidContainer,
    _In_ ULONG offBlock,
    _In_ ULONG cRecord
);
CLFSUSER_API ULONG NTAPI
ClfsLsnBlockOffset
(
  _In_ const CLFS_LSN* plsn
);
CLFSUSER_API ULONG NTAPI
ClfsLsnRecordSequence
(
    _In_ const CLFS_LSN* plsn
);
CLFSUSER_API BOOLEAN NTAPI
ClfsLsnInvalid
(
    _In_ const CLFS_LSN* plsn
);
CLFSUSER_API CLFS_LSN NTAPI
ClfsLsnIncrement (_In_ PCLFS_LSN plsn);
}
inline CLFS_LSN
operator++
(
    _Inout_ CLFS_LSN& refLsn
)
{
    refLsn = ClfsLsnIncrement (&refLsn);
    return refLsn;
}
inline BOOLEAN
operator<
(
    _In_ const CLFS_LSN& refLsn1,
    _In_ const CLFS_LSN& refLsn2
)
{
    return (ClfsLsnLess ((PCLFS_LSN) &refLsn1, (PCLFS_LSN) &refLsn2));
}
inline BOOLEAN
operator>
(
    _In_ const CLFS_LSN& refLsn1,
    _In_ const CLFS_LSN& refLsn2
)
{
    return (ClfsLsnGreater ((PCLFS_LSN) &refLsn1, (PCLFS_LSN) &refLsn2));
}
inline BOOLEAN
operator==
(
    _In_ const CLFS_LSN& refLsn1,
    _In_ const CLFS_LSN& refLsn2
)
{
    return (ClfsLsnEqual ((PCLFS_LSN) &refLsn1, (PCLFS_LSN) &refLsn2));
}
inline BOOLEAN
operator!=
(
    _In_ const CLFS_LSN& refLsn1,
    _In_ const CLFS_LSN& refLsn2
)
{
    return (!ClfsLsnEqual ((PCLFS_LSN) &refLsn1, (PCLFS_LSN) &refLsn2));
}
inline BOOLEAN
operator<=
(
    _In_ const CLFS_LSN& refLsn1,
    _In_ const CLFS_LSN& refLsn2
)
{
    return (!ClfsLsnGreater ((PCLFS_LSN) &refLsn1, (PCLFS_LSN) &refLsn2));
}
inline BOOLEAN
operator>=
(
    _In_ const CLFS_LSN& refLsn1,
    _In_ const CLFS_LSN& refLsn2
)
{
    return (!ClfsLsnLess ((PCLFS_LSN) &refLsn1, (PCLFS_LSN) &refLsn2));
}
#endif
#pragma endregion
