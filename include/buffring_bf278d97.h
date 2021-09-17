typedef struct _CHANGE_BUFFERING_STATE_REQUEST_ {
    LIST_ENTRY ListEntry;
    ULONG Flags;
    PSRV_OPEN SrvOpen;
    PVOID SrvOpenKey;
    PVOID MRxContext;
} CHANGE_BUFFERING_STATE_REQUEST, *PCHANGE_BUFFERING_STATE_REQUEST;
typedef struct _RX_BUFFERING_MANAGER_ {
    BOOLEAN DispatcherActive;
    BOOLEAN HandlerInactive;
    BOOLEAN LastChanceHandlerActive;
    UCHAR Pad;
    KSPIN_LOCK SpinLock;
    __volatile LONG CumulativeNumberOfBufferingChangeRequests;
    LONG NumberOfUnhandledRequests;
    LONG NumberOfUndispatchedRequests;
    __volatile LONG NumberOfOutstandingOpens;
    LIST_ENTRY DispatcherList;
    LIST_ENTRY HandlerList;
    LIST_ENTRY LastChanceHandlerList;
    RX_WORK_QUEUE_ITEM DispatcherWorkItem;
    RX_WORK_QUEUE_ITEM HandlerWorkItem;
    RX_WORK_QUEUE_ITEM LastChanceHandlerWorkItem;
    FAST_MUTEX Mutex;
    LIST_ENTRY SrvOpenLists[1];
} RX_BUFFERING_MANAGER, *PRX_BUFFERING_MANAGER;
VOID
RxpProcessChangeBufferingStateRequests (
    PSRV_CALL SrvCall,
    BOOLEAN UpdateHandlerState
    );
VOID
RxProcessChangeBufferingStateRequests (
    PSRV_CALL SrvCall
    );
VOID
RxProcessFcbChangeBufferingStateRequest (
    PFCB Fcb
    );
VOID
RxPurgeChangeBufferingStateRequestsForSrvOpen(
    PSRV_OPEN SrvOpen
    );
VOID
RxCompleteSrvOpenKeyAssociation (
    IN OUT PSRV_OPEN SrvOpen
    );
VOID
RxInitiateSrvOpenKeyAssociation (
   IN OUT PSRV_OPEN SrvOpen
   );
NTSTATUS
RxInitializeBufferingManager (
   PSRV_CALL SrvCall
   );
NTSTATUS
RxTearDownBufferingManager (
   PSRV_CALL SrvCall
   );
NTSTATUS
RxFlushFcbInSystemCache (
    IN PFCB Fcb,
    IN BOOLEAN SynchronizeWithLazyWriter
    );
NTSTATUS
RxPurgeFcbInSystemCache (
    IN PFCB Fcb,
    IN PLARGE_INTEGER FileOffset OPTIONAL,
    IN ULONG Length,
    IN BOOLEAN UninitializeCacheMaps,
    IN BOOLEAN FlushFile
    );
