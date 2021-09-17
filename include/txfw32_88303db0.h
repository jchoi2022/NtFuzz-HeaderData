#include <clfsw32.h>
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma pack(4)
typedef struct _TXF_ID {
    struct {
        LONGLONG LowPart;
        LONGLONG HighPart;
    };
} TXF_ID, *PTXF_ID;
typedef GUID *PGUID;
typedef struct _TXF_LOG_RECORD_BASE {
    USHORT Version;
    USHORT RecordType;
    ULONG RecordLength;
} TXF_LOG_RECORD_BASE, *PTXF_LOG_RECORD_BASE;
typedef struct _TXF_LOG_RECORD_WRITE {
    USHORT Version;
    USHORT RecordType;
    ULONG RecordLength;
    ULONG Flags;
    TXF_ID TxfFileId;
    GUID KtmGuid;
    LONGLONG ByteOffsetInFile;
    ULONG NumBytesWritten;
    ULONG ByteOffsetInStructure;
    ULONG FileNameLength;
    ULONG FileNameByteOffsetInStructure;
} TXF_LOG_RECORD_WRITE, *PTXF_LOG_RECORD_WRITE;
typedef struct _TXF_LOG_RECORD_TRUNCATE {
    USHORT Version;
    USHORT RecordType;
    ULONG RecordLength;
    ULONG Flags;
    TXF_ID TxfFileId;
    GUID KtmGuid;
    LONGLONG NewFileSize;
    ULONG FileNameLength;
    ULONG FileNameByteOffsetInStructure;
} TXF_LOG_RECORD_TRUNCATE, *PTXF_LOG_RECORD_TRUNCATE;
typedef struct _TXF_LOG_RECORD_AFFECTED_FILE {
    USHORT Version;
    ULONG RecordLength;
    ULONG Flags;
    TXF_ID TxfFileId;
    GUID KtmGuid;
    ULONG FileNameLength;
    ULONG FileNameByteOffsetInStructure;
} TXF_LOG_RECORD_AFFECTED_FILE, *PTXF_LOG_RECORD_AFFECTED_FILE;
#pragma pack()
extern "C" {
BOOL
WINAPI
TxfLogCreateFileReadContext (
    _In_ LPCWSTR LogPath,
    _In_ CLFS_LSN BeginningLsn,
    _In_ CLFS_LSN EndingLsn,
    _In_ PTXF_ID TxfFileId,
    _Outptr_ PVOID *TxfLogContext
    );
BOOL
WINAPI
TxfLogCreateRangeReadContext (
    _In_ LPCWSTR LogPath,
    _In_ CLFS_LSN BeginningLsn,
    _In_ CLFS_LSN EndingLsn,
    _In_ PLARGE_INTEGER BeginningVirtualClock,
    _In_ PLARGE_INTEGER EndingVirtualClock,
    _In_ ULONG RecordTypeMask,
    _Outptr_ PVOID *TxfLogContext
    );
BOOL
WINAPI
TxfLogDestroyReadContext (
    _In_ PVOID TxfLogContext
    );
BOOL
WINAPI
TxfLogReadRecords (
    _In_ PVOID TxfLogContext,
    _In_ ULONG BufferLength,
    _Out_writes_bytes_to_(BufferLength, *BytesUsed) PVOID Buffer,
    _Out_ PULONG BytesUsed,
    _Out_ PULONG RecordCount
    );
BOOL
WINAPI
TxfReadMetadataInfo (
    _In_ HANDLE FileHandle,
    _Out_ PTXF_ID TxfFileId,
    _Out_ PCLFS_LSN LastLsn,
    _Out_ PULONG TransactionState,
    _Out_ PGUID LockingTransaction
    );
BOOL
WINAPI
TxfLogRecordGetFileName (
    _In_reads_bytes_(RecordBufferLengthInBytes) PVOID RecordBuffer,
    _In_ ULONG RecordBufferLengthInBytes,
    _Out_writes_bytes_(*NameBufferLengthInBytes) PWSTR NameBuffer,
    _Inout_ PULONG NameBufferLengthInBytes,
    _Out_opt_ PTXF_ID TxfId
    );
BOOL
WINAPI
TxfLogRecordGetGenericType (
    _In_ PVOID RecordBuffer,
    _In_ ULONG RecordBufferLengthInBytes,
    _Out_ PULONG GenericType,
    _Out_opt_ PLARGE_INTEGER VirtualClock
    );
VOID
WINAPI
TxfSetThreadMiniVersionForCreate (
    _In_ USHORT MiniVersion
    );
VOID
WINAPI
TxfGetThreadMiniVersionForCreate (
    _Out_ PUSHORT MiniVersion
    );
}
#endif
#pragma endregion
