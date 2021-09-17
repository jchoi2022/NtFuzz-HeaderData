extern KMUTEX RxScavengerMutex;
typedef enum _RX_SCAVENGER_ENTRY_STATE {
    RX_SCAVENGING_INACTIVE,
    RX_SCAVENGING_PENDING,
    RX_SCAVENGING_IN_PROGRESS,
    RX_SCAVENGING_AWAITING_RESPONSE
} RX_SCAVENGER_ENTRY_STATE, *PRX_SCAVENGER_ENTRY_STATE;
typedef struct _RX_SCAVENGER_ENTRY {
    LIST_ENTRY List;
    UCHAR Type;
    UCHAR Operation;
    UCHAR State;
    UCHAR Flags;
    struct _RX_SCAVENGER_ENTRY *pContinuationEntry;
} RX_SCAVENGER_ENTRY, *PRX_SCAVENGER_ENTRY;
        (ScavengerEntry)->State = 0; \
        (ScavengerEntry)->Flags = 0; \
        (ScavengerEntry)->Type = 0; \
        (ScavengerEntry)->Operation = 0; \
        InitializeListHead(&(ScavengerEntry)->List); \
        (ScavengerEntry)->pContinuationEntry = NULL
typedef enum _RDBSS_SCAVENGER_STATE {
    RDBSS_SCAVENGER_INACTIVE,
    RDBSS_SCAVENGER_DORMANT,
    RDBSS_SCAVENGER_ACTIVE,
    RDBSS_SCAVENGER_SUSPENDED
} RDBSS_SCAVENGER_STATE, *PRDBSS_SCAVENGER_STATE;
typedef struct _RDBSS_SCAVENGER {
    RDBSS_SCAVENGER_STATE State;
    LONG MaximumNumberOfDormantFiles;
    __volatile LONG NumberOfDormantFiles;
    LARGE_INTEGER TimeLimit;
    ULONG SrvCallsToBeFinalized;
    ULONG NetRootsToBeFinalized;
    ULONG VNetRootsToBeFinalized;
    ULONG FcbsToBeFinalized;
    ULONG SrvOpensToBeFinalized;
    ULONG FobxsToBeFinalized;
    LIST_ENTRY SrvCallFinalizationList;
    LIST_ENTRY NetRootFinalizationList;
    LIST_ENTRY VNetRootFinalizationList;
    LIST_ENTRY FcbFinalizationList;
    LIST_ENTRY SrvOpenFinalizationList;
    LIST_ENTRY FobxFinalizationList;
    LIST_ENTRY ClosePendingFobxsList;
    RX_WORK_ITEM WorkItem;
    KEVENT SyncEvent;
    KEVENT ScavengeEvent;
    PETHREAD CurrentScavengerThread;
    PNET_ROOT CurrentNetRootForClosePendingProcessing;
    PFCB CurrentFcbForClosePendingProcessing;
    KEVENT ClosePendingProcessingSyncEvent;
} RDBSS_SCAVENGER, *PRDBSS_SCAVENGER;
    (Scavenger)->State = RDBSS_SCAVENGER_INACTIVE; \
    (Scavenger)->SrvCallsToBeFinalized = 0; \
    (Scavenger)->NetRootsToBeFinalized = 0; \
    (Scavenger)->VNetRootsToBeFinalized = 0; \
    (Scavenger)->FcbsToBeFinalized = 0; \
    (Scavenger)->SrvOpensToBeFinalized = 0; \
    (Scavenger)->FobxsToBeFinalized = 0; \
    (Scavenger)->NumberOfDormantFiles = 0; \
    (Scavenger)->MaximumNumberOfDormantFiles = 50; \
    (Scavenger)->CurrentFcbForClosePendingProcessing = NULL; \
    (Scavenger)->CurrentNetRootForClosePendingProcessing = NULL; \
    if( (ScavengerTimeLimit).QuadPart == 0 ) { \
          (Scavenger)->TimeLimit.QuadPart = RX_SCAVENGER_FINALIZATION_TIME_INTERVAL; \
    } else { \
          (Scavenger)->TimeLimit.QuadPart = (ScavengerTimeLimit).QuadPart; \
    } \
    KeInitializeEvent(&((Scavenger)->SyncEvent),NotificationEvent,FALSE); \
    KeInitializeEvent(&((Scavenger)->ScavengeEvent),SynchronizationEvent,TRUE); \
    KeInitializeEvent(&((Scavenger)->ClosePendingProcessingSyncEvent),NotificationEvent,FALSE); \
    InitializeListHead(&(Scavenger)->SrvCallFinalizationList); \
    InitializeListHead(&(Scavenger)->NetRootFinalizationList); \
    InitializeListHead(&(Scavenger)->VNetRootFinalizationList); \
    InitializeListHead(&(Scavenger)->SrvOpenFinalizationList); \
    InitializeListHead(&(Scavenger)->FcbFinalizationList); \
    InitializeListHead(&(Scavenger)->FobxFinalizationList); \
    InitializeListHead(&(Scavenger)->ClosePendingFobxsList)
        KeWaitForSingleObject( &RxScavengerMutex, Executive, KernelMode, FALSE, NULL )
        KeReleaseMutex( &RxScavengerMutex, FALSE )
VOID
RxMarkFobxOnCleanup (
    PFOBX pFobx,
    PBOOLEAN NeedPurge
    );
VOID
RxMarkFobxOnClose (
    PFOBX Fobx
    );
NTSTATUS
RxPurgeRelatedFobxs (
    PNET_ROOT NetRoot,
    PRX_CONTEXT RxContext,
    BOOLEAN AttemptFinalization,
    PFCB PurgingFcb
    );
typedef struct _PURGE_SYNCHRONIZATION_CONTEXT {
    LIST_ENTRY ContextsAwaitingPurgeCompletion;
    BOOLEAN PurgeInProgress;
} PURGE_SYNCHRONIZATION_CONTEXT, *PPURGE_SYNCHRONIZATION_CONTEXT;
VOID
RxInitializePurgeSyncronizationContext (
    PPURGE_SYNCHRONIZATION_CONTEXT PurgeSyncronizationContext
    );
BOOLEAN
RxScavengeRelatedFobxs (
    PFCB Fcb
    );
VOID
RxScavengeFobxsForNetRoot (
    PNET_ROOT NetRoot,
    PFCB PurgingFcb,
    BOOLEAN SynchronizeWithScavenger
    );
VOID
RxpMarkInstanceForScavengedFinalization (
   PVOID Instance
   );
VOID
RxpUndoScavengerFinalizationMarking (
   PVOID Instance
   );
VOID
RxTerminateScavenging (
   PRX_CONTEXT RxContext
   );
BOOLEAN
RxScavengeVNetRoots (
    PRDBSS_DEVICE_OBJECT RxDeviceObject
    );
VOID
RxSynchronizeWithScavenger (
    IN PRX_CONTEXT RxContext,
    IN PFCB Fcb
    );
