#include <winapifamily.h>
#pragma region Desktop Family or BootableSku Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_BOOTABLESKU)
#include <clfs.h>
extern "C"
{
typedef void (__stdcall * PCLFS_COMPLETION_ROUTINE) (
                    IN PVOID pvOverlapped,
                    IN ULONG ulReserved
                    );
typedef ULONG (__stdcall * CLFS_PRINT_RECORD_ROUTINE) (
                    IN PFILE pstrmOut,
                    IN CLFS_RECORD_TYPE fRecordType,
                    IN PVOID pvBuffer,
                    IN ULONG cbBuffer
                    );
typedef PVOID CLFS_LOG_ARCHIVE_CONTEXT, *PCLFS_LOG_ARCHIVE_CONTEXT;
CLFSUSER_API CLFS_LSN WINAPI LsnCreate (
                    IN CLFS_CONTAINER_ID cidContainer,
                    IN ULONG offBlock,
                    IN ULONG cRecord
                    );
CLFSUSER_API CLFS_CONTAINER_ID WINAPI LsnContainer (
                    IN const CLFS_LSN* plsn
                    );
CLFSUSER_API ULONG WINAPI LsnBlockOffset (
                    IN const CLFS_LSN* plsn
                    );
CLFSUSER_API ULONG WINAPI LsnRecordSequence (
                    IN const CLFS_LSN* plsn
                    );
CLFSUSER_API HANDLE WINAPI CreateLogFile (
                    IN LPCWSTR pszLogFileName,
                    IN ACCESS_MASK fDesiredAccess,
                    IN DWORD dwShareMode,
                    IN LPSECURITY_ATTRIBUTES psaLogFile OPTIONAL,
                    IN ULONG fCreateDisposition,
                    IN ULONG fFlagsAndAttributes
                    );
CLFSUSER_API BOOL WINAPI DeleteLogByHandle (IN HANDLE hLog);
CLFSUSER_API BOOL WINAPI DeleteLogFile (
                    IN LPCWSTR pszLogFileName,
                    IN PVOID pvReserved OPTIONAL
                    );
CLFSUSER_API BOOL WINAPI AddLogContainer (
                    _In_ HANDLE hLog,
                    _In_opt_ PULONGLONG pcbContainer,
                    _In_ LPWSTR pwszContainerPath,
                    _Inout_opt_ LPVOID pReserved
                    );
CLFSUSER_API BOOL WINAPI AddLogContainerSet (
                    _In_ HANDLE hLog,
                    _In_ USHORT cContainer,
                    _In_opt_ PULONGLONG pcbContainer,
                    _In_reads_(cContainer) LPWSTR *rgwszContainerPath,
                    _Inout_opt_ LPVOID pReserved
                    );
CLFSUSER_API BOOL WINAPI RemoveLogContainer (
                    _In_ HANDLE hLog,
                    _In_ LPWSTR pwszContainerPath,
                    _In_ BOOL fForce,
                    _Inout_opt_ LPVOID pReserved
                    );
CLFSUSER_API BOOL WINAPI RemoveLogContainerSet (
                    _In_ HANDLE hLog,
                    _In_ USHORT cContainer,
                    _In_reads_(cContainer) LPWSTR *rgwszContainerPath,
                    _In_ BOOL fForce,
                    _Inout_opt_ LPVOID pReserved
                    );
CLFSUSER_API BOOL WINAPI SetLogArchiveTail (
                    IN HANDLE hLog,
                    IN PCLFS_LSN plsnArchiveTail,
                    IN OUT LPVOID pReserved OPTIONAL
                    );
CLFSUSER_API BOOL WINAPI SetEndOfLog (
                    IN HANDLE hLog,
                    IN PCLFS_LSN plsnEnd,
                    IN OUT LPOVERLAPPED lpOverlapped
                    );
CLFSUSER_API BOOL WINAPI TruncateLog (
                    _In_ PVOID pvMarshal,
                    _In_ PCLFS_LSN plsnEnd,
                    _Inout_opt_ LPOVERLAPPED lpOverlapped
                    );
CLFSUSER_API BOOL WINAPI CreateLogContainerScanContext (
                    IN HANDLE hLog,
                    IN ULONG cFromContainer,
                    IN ULONG cContainers,
                    IN CLFS_SCAN_MODE eScanMode,
                    IN OUT PCLFS_SCAN_CONTEXT pcxScan,
                    IN OUT LPOVERLAPPED pOverlapped OPTIONAL
                    );
CLFSUSER_API BOOL WINAPI ScanLogContainers (
                    IN OUT PCLFS_SCAN_CONTEXT pcxScan,
                    IN CLFS_SCAN_MODE eScanMode,
                    IN OUT LPVOID pReserved OPTIONAL
                    );
CLFSUSER_API BOOL WINAPI AlignReservedLog (
                    IN OUT PVOID pvMarshal,
                    IN ULONG cReservedRecords,
                    IN LONGLONG rgcbReservation [],
                    OUT PLONGLONG pcbAlignReservation
                    );
CLFSUSER_API BOOL WINAPI AllocReservedLog (
                    IN OUT PVOID pvMarshal,
                    IN ULONG cReservedRecords,
                    IN OUT PLONGLONG pcbAdjustment
                    );
CLFSUSER_API BOOL WINAPI FreeReservedLog (
                    IN OUT PVOID pvMarshal,
                    IN ULONG cReservedRecords,
                    IN OUT PLONGLONG pcbAdjustment
                    );
CLFSUSER_API BOOL WINAPI GetLogFileInformation (
                    IN HANDLE hLog,
                    IN OUT PCLFS_INFORMATION pinfoBuffer,
                    IN OUT PULONG cbBuffer
                    );
CLFSUSER_API BOOL WINAPI SetLogArchiveMode (
                    IN HANDLE hLog,
                    IN CLFS_LOG_ARCHIVE_MODE eMode
                    );
CLFSUSER_API BOOL WINAPI ReadLogRestartArea (
                    IN PVOID pvMarshal,
                    OUT PVOID* ppvRestartBuffer,
                    OUT PULONG pcbRestartBuffer,
                    OUT PCLFS_LSN plsn,
                    OUT PVOID *ppvContext,
                    IN OUT LPOVERLAPPED pOverlapped OPTIONAL
                    );
CLFSUSER_API BOOL WINAPI ReadPreviousLogRestartArea (
                    IN PVOID pvReadContext,
                    OUT PVOID *ppvRestartBuffer,
                    OUT PULONG pcbRestartBuffer,
                    OUT PCLFS_LSN plsnRestart,
                    IN OUT LPOVERLAPPED pOverlapped OPTIONAL
                    );
CLFSUSER_API BOOL WINAPI WriteLogRestartArea (
                    IN OUT PVOID pvMarshal,
                    IN PVOID pvRestartBuffer,
                    IN ULONG cbRestartBuffer,
                    IN PCLFS_LSN plsnBase OPTIONAL,
                    IN ULONG fFlags,
                    OUT PULONG pcbWritten OPTIONAL,
                    OUT PCLFS_LSN plsnNext OPTIONAL,
                    IN OUT LPOVERLAPPED pOverlapped OPTIONAL
                    );
CLFSUSER_API BOOL WINAPI GetLogReservationInfo (
                    _In_ PVOID pvMarshal,
                    _Out_ PULONG pcbRecordNumber,
                    _Out_ PLONGLONG pcbUserReservation,
                    _Out_ PLONGLONG pcbCommitReservation
                    );
CLFSUSER_API BOOL WINAPI AdvanceLogBase (
                    IN OUT PVOID pvMarshal,
                    IN PCLFS_LSN plsnBase,
                    IN ULONG fFlags,
                    IN OUT LPOVERLAPPED pOverlapped OPTIONAL
                    );
CLFSUSER_API BOOL WINAPI CloseAndResetLogFile (IN HANDLE hLog);
CLFSUSER_API BOOL WINAPI CreateLogMarshallingArea (
                    IN HANDLE hLog,
                    IN CLFS_BLOCK_ALLOCATION pfnAllocBuffer OPTIONAL,
                    IN CLFS_BLOCK_DEALLOCATION pfnFreeBuffer OPTIONAL,
                    IN PVOID pvBlockAllocContext OPTIONAL,
                    IN ULONG cbMarshallingBuffer,
                    IN ULONG cMaxWriteBuffers,
                    IN ULONG cMaxReadBuffers,
                    OUT PVOID *ppvMarshal
                    );
CLFSUSER_API BOOL WINAPI DeleteLogMarshallingArea (IN PVOID pvMarshal);
CLFSUSER_API BOOL WINAPI ReserveAndAppendLog (
                    IN PVOID pvMarshal,
                    IN PCLFS_WRITE_ENTRY rgWriteEntries OPTIONAL,
                    IN ULONG cWriteEntries,
                    IN PCLFS_LSN plsnUndoNext OPTIONAL,
                    IN PCLFS_LSN plsnPrevious OPTIONAL,
                    IN ULONG cReserveRecords,
                    IN OUT LONGLONG rgcbReservation [] OPTIONAL,
                    IN ULONG fFlags,
                    OUT PCLFS_LSN plsn OPTIONAL,
                    IN OUT LPOVERLAPPED pOverlapped OPTIONAL
                    );
CLFSUSER_API BOOL WINAPI ReserveAndAppendLogAligned (
                    IN PVOID pvMarshal,
                    IN PCLFS_WRITE_ENTRY rgWriteEntries OPTIONAL,
                    IN ULONG cWriteEntries,
                    IN ULONG cbEntryAlignment,
                    IN PCLFS_LSN plsnUndoNext OPTIONAL,
                    IN PCLFS_LSN plsnPrevious OPTIONAL,
                    IN ULONG cReserveRecords,
                    IN OUT LONGLONG rgcbReservation [] OPTIONAL,
                    IN ULONG fFlags,
                    OUT PCLFS_LSN plsn OPTIONAL,
                    IN OUT LPOVERLAPPED pOverlapped OPTIONAL
                    );
CLFSUSER_API BOOL WINAPI FlushLogBuffers (
                    IN PVOID pvMarshal,
                    IN OUT LPOVERLAPPED pOverlapped OPTIONAL
                    );
CLFSUSER_API BOOL WINAPI FlushLogToLsn (
                    IN PVOID pvMarshalContext,
                    IN PCLFS_LSN plsnFlush,
                    OUT PCLFS_LSN plsnLastFlushed OPTIONAL,
                    IN OUT LPOVERLAPPED pOverlapped OPTIONAL
                    );
CLFSUSER_API BOOL WINAPI ReadLogRecord (
                    IN PVOID pvMarshal,
                    IN PCLFS_LSN plsnFirst,
                    IN CLFS_CONTEXT_MODE eContextMode,
                    OUT PVOID* ppvReadBuffer,
                    OUT PULONG pcbReadBuffer,
                    OUT PCLFS_RECORD_TYPE peRecordType,
                    OUT PCLFS_LSN plsnUndoNext,
                    OUT PCLFS_LSN plsnPrevious,
                    OUT PVOID* ppvReadContext,
                    IN OUT LPOVERLAPPED pOverlapped OPTIONAL
                    );
CLFSUSER_API BOOL WINAPI ReadNextLogRecord (
                    IN OUT PVOID pvReadContext,
                    OUT PVOID* ppvBuffer,
                    OUT PULONG pcbBuffer,
                    IN OUT PCLFS_RECORD_TYPE peRecordType,
                    IN PCLFS_LSN plsnUser OPTIONAL,
                    OUT PCLFS_LSN plsnUndoNext,
                    OUT PCLFS_LSN plsnPrevious,
                    OUT PCLFS_LSN plsnRecord,
                    IN OUT LPOVERLAPPED pOverlapped OPTIONAL
                    );
CLFSUSER_API BOOL WINAPI TerminateReadLog (IN PVOID pvCursorContext);
CLFSUSER_API BOOL WINAPI DumpLogRecords (
                    _In_ PWSTR pwszLogFileName,
                    _In_ CLFS_RECORD_TYPE fRecordType,
                    _In_opt_ PCLFS_LSN plsnStart,
                    _In_opt_ PCLFS_LSN plsnEnd,
                    _In_opt_ PFILE pstrmOut,
                    _In_opt_ CLFS_PRINT_RECORD_ROUTINE pfnPrintRecord,
                    _In_opt_ CLFS_BLOCK_ALLOCATION pfnAllocBlock,
                    _In_opt_ CLFS_BLOCK_DEALLOCATION pfnFreeBlock,
                    _In_opt_ PVOID pvBlockAllocContext,
                    _In_ ULONG cbBlock,
                    _In_ ULONG cMaxBlocks
                    );
CLFSUSER_API BOOL WINAPI PrepareLogArchive (
                _In_ HANDLE hLog,
                _Inout_updates_(cLen) PWSTR pszBaseLogFileName,
                _In_ ULONG cLen,
                _In_opt_ const PCLFS_LSN plsnLow,
                _In_opt_ const PCLFS_LSN plsnHigh,
                _Out_opt_ PULONG pcActualLength,
                _Out_ PULONGLONG poffBaseLogFileData,
                _Out_ PULONGLONG pcbBaseLogFileLength,
                _Out_ PCLFS_LSN plsnBase,
                _Out_ PCLFS_LSN plsnLast,
                _Out_ PCLFS_LSN plsnCurrentArchiveTail,
                _Out_ PCLFS_LOG_ARCHIVE_CONTEXT ppvArchiveContext
                );
CLFSUSER_API BOOL WINAPI ReadLogArchiveMetadata(
                IN CLFS_LOG_ARCHIVE_CONTEXT pvArchiveContext,
                IN ULONG cbOffset,
                IN ULONG cbBytesToRead,
                IN OUT PBYTE pbReadBuffer,
                OUT PULONG pcbBytesRead
                );
CLFSUSER_API BOOL WINAPI GetNextLogArchiveExtent (
                IN CLFS_LOG_ARCHIVE_CONTEXT pvArchiveContext,
                IN OUT CLFS_ARCHIVE_DESCRIPTOR rgadExtent [],
                IN ULONG cDescriptors,
                OUT PULONG pcDescriptorsReturned
                );
CLFSUSER_API BOOL WINAPI TerminateLogArchive (
                IN CLFS_LOG_ARCHIVE_CONTEXT pvArchiveContext
                );
CLFSUSER_API BOOL WINAPI ValidateLog (
                IN LPCWSTR pszLogFileName,
                IN LPSECURITY_ATTRIBUTES psaLogFile OPTIONAL,
                OUT PCLFS_INFORMATION pinfoBuffer OPTIONAL,
                IN OUT PULONG pcbBuffer
                );
CLFSUSER_API BOOL WINAPI GetLogContainerName (
                IN HANDLE hLog,
                IN CLFS_CONTAINER_ID cidLogicalContainer,
                IN OUT LPCWSTR pwstrContainerName,
                IN ULONG cLenContainerName,
                IN OUT PULONG pcActualLenContainerName OPTIONAL
                );
CLFSUSER_API BOOL WINAPI GetLogIoStatistics (
                IN HANDLE hLog,
                IN OUT PVOID pvStatsBuffer,
                IN ULONG cbStatsBuffer,
                IN CLFS_IOSTATS_CLASS eStatsClass,
                OUT PULONG pcbStatsWritten OPTIONAL
                );
}
#endif
#pragma endregion
