#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct _DISK_EXTENT {
    ULONG DiskNumber;
    LARGE_INTEGER StartingOffset;
    LARGE_INTEGER ExtentLength;
} DISK_EXTENT, *PDISK_EXTENT;
typedef struct _VOLUME_DISK_EXTENTS {
    ULONG NumberOfDiskExtents;
    DISK_EXTENT Extents[ANYSIZE_ARRAY];
} VOLUME_DISK_EXTENTS, *PVOLUME_DISK_EXTENTS;
typedef struct _VOLUME_GET_GPT_ATTRIBUTES_INFORMATION {
    ULONGLONG GptAttributes;
} VOLUME_GET_GPT_ATTRIBUTES_INFORMATION, *PVOLUME_GET_GPT_ATTRIBUTES_INFORMATION;
typedef struct _VOLUME_FAILOVER_SET {
    ULONG NumberOfDisks;
    ULONG DiskNumbers[ANYSIZE_ARRAY];
} VOLUME_FAILOVER_SET, *PVOLUME_FAILOVER_SET;
typedef struct _VOLUME_NUMBER {
    ULONG VolumeNumber;
    WCHAR VolumeManagerName[8];
} VOLUME_NUMBER, *PVOLUME_NUMBER;
typedef struct _VOLUME_LOGICAL_OFFSET {
    LONGLONG LogicalOffset;
} VOLUME_LOGICAL_OFFSET, *PVOLUME_LOGICAL_OFFSET;
typedef struct _VOLUME_PHYSICAL_OFFSET {
    ULONG DiskNumber;
    LONGLONG Offset;
} VOLUME_PHYSICAL_OFFSET, *PVOLUME_PHYSICAL_OFFSET;
typedef struct _VOLUME_PHYSICAL_OFFSETS {
    ULONG NumberOfPhysicalOffsets;
    VOLUME_PHYSICAL_OFFSET PhysicalOffset[ANYSIZE_ARRAY];
} VOLUME_PHYSICAL_OFFSETS, *PVOLUME_PHYSICAL_OFFSETS;
typedef struct _VOLUME_READ_PLEX_INPUT {
    LARGE_INTEGER ByteOffset;
    ULONG Length;
    ULONG PlexNumber;
} VOLUME_READ_PLEX_INPUT, *PVOLUME_READ_PLEX_INPUT;
typedef struct _VOLUME_SET_GPT_ATTRIBUTES_INFORMATION {
    ULONGLONG GptAttributes;
    BOOLEAN RevertOnClose;
    BOOLEAN ApplyToAllConnectedVolumes;
    USHORT Reserved1;
    ULONG Reserved2;
} VOLUME_SET_GPT_ATTRIBUTES_INFORMATION, *PVOLUME_SET_GPT_ATTRIBUTES_INFORMATION;
typedef struct _VOLUME_GET_BC_PROPERTIES_INPUT {
    ULONG Version;
    ULONG Reserved1;
    ULONGLONG LowestByteOffset;
    ULONGLONG HighestByteOffset;
    ULONG AccessType;
    ULONG AccessMode;
} VOLUME_GET_BC_PROPERTIES_INPUT, *PVOLUME_GET_BC_PROPERTIES_INPUT;
typedef struct _VOLUME_GET_BC_PROPERTIES_OUTPUT {
    ULONG MaximumRequestsPerPeriod;
    ULONG MinimumPeriod;
    ULONGLONG MaximumRequestSize;
    ULONG EstimatedTimePerRequest;
    ULONG NumOutStandingRequests;
    ULONGLONG RequestSize;
} VOLUME_GET_BC_PROPERTIES_OUTPUT, *PVOLUME_GET_BC_PROPERTIES_OUTPUT;
typedef struct _VOLUME_ALLOCATE_BC_STREAM_INPUT {
    ULONG Version;
    ULONG RequestsPerPeriod;
    ULONG Period;
    BOOLEAN RetryFailures;
    BOOLEAN Discardable;
    BOOLEAN Reserved1[2];
    ULONGLONG LowestByteOffset;
    ULONGLONG HighestByteOffset;
    ULONG AccessType;
    ULONG AccessMode;
} VOLUME_ALLOCATE_BC_STREAM_INPUT, *PVOLUME_ALLOCATE_BC_STREAM_INPUT;
typedef struct _VOLUME_ALLOCATE_BC_STREAM_OUTPUT {
    ULONGLONG RequestSize;
    ULONG NumOutStandingRequests;
} VOLUME_ALLOCATE_BC_STREAM_OUTPUT, *PVOLUME_ALLOCATE_BC_STREAM_OUTPUT;
typedef struct _FILE_EXTENT {
    ULONGLONG VolumeOffset;
    ULONGLONG ExtentLength;
} FILE_EXTENT, *PFILE_EXTENT;
typedef struct _VOLUME_CRITICAL_IO {
    ULONG AccessType;
    ULONG ExtentsCount;
    FILE_EXTENT Extents[ANYSIZE_ARRAY];
} VOLUME_CRITICAL_IO, *PVOLUME_CRITICAL_IO;
typedef struct _VOLUME_ALLOCATION_HINT_INPUT {
    ULONG ClusterSize;
    ULONG NumberOfClusters;
    LONGLONG StartingClusterNumber;
} VOLUME_ALLOCATION_HINT_INPUT, *PVOLUME_ALLOCATION_HINT_INPUT;
typedef struct _VOLUME_ALLOCATION_HINT_OUTPUT {
    ULONG Bitmap[ANYSIZE_ARRAY];
} VOLUME_ALLOCATION_HINT_OUTPUT, *PVOLUME_ALLOCATION_HINT_OUTPUT;
typedef struct _VOLUME_SHRINK_INFO {
    ULONGLONG VolumeSize;
} VOLUME_SHRINK_INFO, *PVOLUME_SHRINK_INFO;
typedef struct _CSV_FILECACHE_CONTEXT {
    union {
        struct {
            IO_STATUS_BLOCK IoStatus;
            ULONG IrpFlags;
            UCHAR MajorFunction;
            UCHAR MinorFunction;
            UCHAR OperationFlags;
            ULONG Length;
            ULONG Key;
            LARGE_INTEGER ByteOffset;
            PVOID MdlAddress;
        } ReadWrite;
        struct {
            ULONGLONG Length;
            LARGE_INTEGER ByteOffset;
        } Purge;
    } Parameters;
    GUID StreamId;
    PVOID CsvIoContext;
    PVOID DriverContext;
} CSV_FILECACHE_CONTEXT, *PCSV_FILECACHE_CONTEXT;
typedef
_Function_class_(CSV_BLOCKCACHE_PURGE_CACHE)
_IRQL_requires_max_(PASSIVE_LEVEL)
void (*CSV_BLOCKCACHE_PURGE_CACHE) (_Inout_ PVOID CallbackContext,
                                    _In_ ULONGLONG Offset,
                                    _In_ ULONGLONG Length);
typedef
_Function_class_(CSV_BLOCKCACHE_DISABLE_CACHE)
_IRQL_requires_max_(PASSIVE_LEVEL)
void (*CSV_BLOCKCACHE_DISABLE_CACHE) (_Inout_ PVOID CallbackContext);
typedef
_Function_class_(CSV_BLOCKCACHE_ENABLE_CACHE)
_IRQL_requires_max_(PASSIVE_LEVEL)
LONG (*CSV_BLOCKCACHE_ENABLE_CACHE) (_Inout_ PVOID CallbackContext);
typedef
_Function_class_(CSV_FILECACHE_PURGE_RDCACHE)
_IRQL_requires_max_(PASSIVE_LEVEL)
void (*CSV_FILECACHE_PURGE_RDCACHE) (_Inout_ PVOID CallbackContext,
                                     _In_ PCSV_FILECACHE_CONTEXT CSVContext);
typedef
_Function_class_(CSV_FILECACHE_HANDLE_CACHE_IO)
_IRQL_requires_max_(PASSIVE_LEVEL)
LONG (*CSV_FILECACHE_HANDLE_CACHE_IO) (_Inout_ PVOID CallbackContext,
                                       _Inout_ PCSV_FILECACHE_CONTEXT CSVContext);
typedef
_Function_class_(CSV_FILECACHE_COMPLETE_CACHE_MISS)
_IRQL_requires_max_(DISPATCH_LEVEL)
void (*CSV_FILECACHE_COMPLETE_CACHE_MISS) (_Inout_ PVOID CallbackContext,
                                           _Inout_ PCSV_FILECACHE_CONTEXT CSVContext);
typedef
_Function_class_(CSV_FILECACHE_HANDLE_CACHE_MISS)
_IRQL_requires_max_(PASSIVE_LEVEL)
LONG (*CSV_FILECACHE_HANDLE_CACHE_MISS) (_Inout_ PCSV_FILECACHE_CONTEXT CSVContext);
typedef
_Function_class_(CSV_FILECACHE_COMPLETE_CACHE_IO)
_IRQL_requires_max_(DISPATCH_LEVEL)
void (*CSV_FILECACHE_COMPLETE_CACHE_IO) (_Inout_ PCSV_FILECACHE_CONTEXT CSVContext);
typedef struct _CSV_BLOCKCACHE_CALLBACK {
    ULONG Version;
    CSV_BLOCKCACHE_PURGE_CACHE PurgeCache;
    CSV_BLOCKCACHE_ENABLE_CACHE CacheEnable;
    CSV_BLOCKCACHE_DISABLE_CACHE CacheDisable;
    PVOID CallbackContext;
} CSV_BLOCKCACHE_CALLBACK, *PCSV_BLOCKCACHE_CALLBACK;
#pragma warning( push )
#pragma warning( disable : 4201 )
typedef struct _CSV_CACHE_CALLBACK_V2_OUTPUT : public CSV_BLOCKCACHE_CALLBACK {
    CSV_FILECACHE_HANDLE_CACHE_IO HandleCacheIo;
    CSV_FILECACHE_COMPLETE_CACHE_MISS CompleteCacheMiss;
    CSV_FILECACHE_PURGE_RDCACHE PurgeFileCache;
} CSV_CACHE_CALLBACK_V2_OUTPUT, *PCSV_CACHE_CALLBACK_V2_OUTPUT,
CSV_CACHE_CALLBACK, *PCSV_CACHE_CALLBACK;
#pragma warning( pop )
typedef struct _CSV_CACHE_CALLBACK_V2_INPUT {
    CSV_FILECACHE_HANDLE_CACHE_MISS HandleCacheMiss;
    CSV_FILECACHE_COMPLETE_CACHE_IO CompleteCacheIo;
} CSV_CACHE_CALLBACK_V2_INPUT, *PCSV_CACHE_CALLBACK_V2_INPUT,
CSV_CACHE_CALLBACK_INPUT, *PCSV_CACHE_CALLBACK_INPUT;
typedef enum _CSV_FILECACHE_IO_TYPE
{
    CSV_FILECACHE_IO_TYPE_READWRITE = 0,
    CSV_FILECACHE_IO_TYPE_PURGE = 1,
} CSV_FILECACHE_IO_TYPE;
typedef struct _CSV_FILECACHE_IO_CONTEXT
{
    CSV_FILECACHE_IO_TYPE Type;
    union
    {
        struct
        {
            IRP *m_pIrp;
            IO_STACK_LOCATION *m_pStackLocation;
        } ReadWrite;
        struct
        {
            LARGE_INTEGER StartOffset;
            LARGE_INTEGER EndOffset;
            BOOLEAN fHard;
        } Purge;
    } Parameters;
    VOID *m_pFileContext;
    ULONGLONG m_ExtraContext[1];
} CSV_FILECACHE_IO_CONTEXT, *PCSV_FILECACHE_IO_CONTEXT;
typedef struct _CSV_FILECACHE_IO_RANGE
{
    ULONGLONG Offset;
    ULONG Length;
} CSV_FILECACHE_IO_RANGE;
typedef
_Function_class_(CSV_FILECACHE_HANDLE_CACHE_MISS_V2)
_IRQL_requires_max_(PASSIVE_LEVEL)
void(*CSV_FILECACHE_HANDLE_CACHE_MISS_V2) (_Inout_ PCSV_FILECACHE_IO_CONTEXT pContext, ULONG cRanges, CSV_FILECACHE_IO_RANGE const * pNotRequiredRanges);
typedef
_Function_class_(CSV_FILECACHE_COMPLETE_CACHE_IO_V2)
_IRQL_requires_max_(DISPATCH_LEVEL)
void(*CSV_FILECACHE_COMPLETE_CACHE_IO_V2) (_Inout_ PCSV_FILECACHE_IO_CONTEXT pContext);
typedef struct _CSV_CACHE_CALLBACK_V3_INPUT {
    CSV_FILECACHE_HANDLE_CACHE_MISS_V2 HandleCacheMiss;
    CSV_FILECACHE_COMPLETE_CACHE_IO_V2 CompleteCacheIo;
} CSV_CACHE_CALLBACK_V3_INPUT, *PCSV_CACHE_CALLBACK_V3_INPUT;
typedef struct _CSV_FILECACHE_FILE_CONTEXT_EXTENSION
    CSV_FILECACHE_FILE_CONTEXT_EXTENSION, *PCSV_FILECACHE_FILE_CONTEXT_EXTENSION;
typedef GUID FILE_SIG_T;
typedef GUID VOLUME_SIG_T;
typedef NTSTATUS(*CSV_FILECACHE_FILE_CREATE) (PVOID pRegContext, VOLUME_SIG_T const * volSig, FILE_SIG_T const * fileSig, PVOID * ppContext);
typedef void(*CSV_FILECACHE_FILE_CLOSE) (PVOID pRegContext, PVOID pContext);
typedef void(*CSV_FILECACHE_HANDLE_CACHE_IO_V2) (PVOID pRegContext, PCSV_FILECACHE_IO_CONTEXT pContext);
typedef void(*CSV_FILECACHE_COMPLETE_CACHE_MISS_V2) (PVOID pRegContext, PCSV_FILECACHE_IO_CONTEXT pContext);
typedef PCSV_FILECACHE_FILE_CONTEXT_EXTENSION (*CSV_FILECACHE_FILE_SET_EXTENSION) (PVOID pRegContext, PCSV_FILECACHE_IO_CONTEXT pContext, PCSV_FILECACHE_FILE_CONTEXT_EXTENSION pExtension);
typedef PCSV_FILECACHE_FILE_CONTEXT_EXTENSION (*CSV_FILECACHE_FILE_GET_EXTENSION) (PVOID pRegContext, PCSV_FILECACHE_IO_CONTEXT pContext);
typedef
_Function_class_(CSV_FILECACHE_CLEANUP_CACHE)
_IRQL_requires_max_(PASSIVE_LEVEL)
void (*CSV_FILECACHE_CLEANUP_CACHE) (_Inout_ PVOID pRegContext);
#pragma warning( push )
#pragma warning( disable : 4201 )
typedef struct _CSV_CACHE_CALLBACK_V3_OUTPUT : public CSV_BLOCKCACHE_CALLBACK {
    PVOID FileCacheCallbackContext;
    ULONG IoContextBytesRequired;
    CSV_FILECACHE_CLEANUP_CACHE CacheCleanup;
    CSV_FILECACHE_FILE_CREATE FileCreate;
    CSV_FILECACHE_FILE_CLOSE FileClose;
    CSV_FILECACHE_HANDLE_CACHE_IO_V2 HandleCacheIo;
    CSV_FILECACHE_COMPLETE_CACHE_MISS_V2 CompleteCacheMiss;
    CSV_FILECACHE_FILE_SET_EXTENSION FileSetExtension;
    CSV_FILECACHE_FILE_GET_EXTENSION FileGetExtension;
} CSV_CACHE_CALLBACK_V3_OUTPUT, *PCSV_CACHE_CALLBACK_V3_OUTPUT;
#pragma warning( push )
#endif
#pragma endregion
}
