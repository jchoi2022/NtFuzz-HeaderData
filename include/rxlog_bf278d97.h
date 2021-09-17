typedef enum {
   RX_LOG_UNINITIALIZED,
   RX_LOG_ENABLED,
   RX_LOG_DISABLED,
   RX_LOG_ERROR
} RX_LOGGING_STATE;
typedef struct RX_LOG_ENTRY_HEADER {
    PCHAR Buffer;
} RX_LOG_ENTRY_HEADER, *PRX_LOG_ENTRY_HEADER;
typedef struct RX_LOG {
   RX_SPIN_LOCK SpinLock;
   RX_LOGGING_STATE State;
   PRX_LOG_ENTRY_HEADER CurrentEntry;
   PRX_LOG_ENTRY_HEADER BaseEntry;
   PRX_LOG_ENTRY_HEADER EntryLimit;
   ULONG LogBufferSizeInEntries;
   ULONG NumberOfEntriesIgnored;
   ULONG NumberOfLogWriteAttempts;
   ULONG NumberOfLogWraps;
} RX_LOG, *PRX_LOG;
extern
VOID
RxDebugControlCommand (
    _In_ PSTR ControlString
    );
extern
NTSTATUS
RxInitializeLog(void);
extern
VOID
RxUninitializeLog(void);
extern
VOID
_RxPrintLog(IN ULONG EntriesToPrint OPTIONAL);
extern
VOID
_RxPauseLog(void);
extern
VOID
_RxResumeLog (void);
extern
VOID
_RxLog(PCSTR format, ...);
    (RxContxOperationNames[(MajorFunction)]+((Wait)?(sizeof(RDBSSLOG_ASYNC_NAME_PREFIX)-1):0))
extern PUCHAR RxContxOperationNames[];
extern LIST_ENTRY RxIrpsList;
extern KSPIN_LOCK RxIrpsListSpinLock;
typedef struct _RX_IRP_LIST_ITEM {
    LIST_ENTRY IrpsList;
    PIRP pIrp;
    PMDL CopyDataBuffer;
    ULONG Completed;
} RX_IRP_LIST_ITEM, *PRX_IRP_LIST_ITEM;
