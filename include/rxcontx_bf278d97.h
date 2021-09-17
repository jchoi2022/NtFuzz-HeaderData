#error tracker must be defined right now
#pragma warning(push)
#pragma warning(disable:4201)
typedef struct _RX_TOPLEVELIRP_CONTEXT {
    union {
        LIST_ENTRY;
        LIST_ENTRY ListEntry;
    };
    ULONG Signature;
    PRDBSS_DEVICE_OBJECT RxDeviceObject;
    PRX_CONTEXT RxContext;
    PIRP Irp;
    ULONG Flags;
    PVOID Previous;
    PETHREAD Thread;
} RX_TOPLEVELIRP_CONTEXT, *PRX_TOPLEVELIRP_CONTEXT;
#pragma warning(pop)
BOOLEAN
RxTryToBecomeTheTopLevelIrp (
    IN OUT PRX_TOPLEVELIRP_CONTEXT TopLevelContext,
    IN PIRP Irp,
    IN PRDBSS_DEVICE_OBJECT RxDeviceObject,
    IN BOOLEAN ForceTopLevel
    );
VOID
__RxInitializeTopLevelIrpContext (
    IN OUT PRX_TOPLEVELIRP_CONTEXT TopLevelContext,
    IN PIRP Irp,
    IN PRDBSS_DEVICE_OBJECT RxDeviceObject,
    IN ULONG Flags
    );
PIRP
RxGetTopIrpIfRdbssIrp (
    VOID
    );
PRDBSS_DEVICE_OBJECT
RxGetTopDeviceObjectIfRdbssIrp (
    VOID
    );
VOID
RxUnwindTopLevelIrp (
    IN OUT PRX_TOPLEVELIRP_CONTEXT TopLevelContext
    );
BOOLEAN
RxIsThisTheTopLevelIrp (
    IN PIRP Irp
    );
typedef struct _RX_FCBTRACKER_CALLINFO {
    ULONG AcquireRelease;
    USHORT SavedTrackerValue;
    USHORT LineNumber;
    PSZ FileName;
    ULONG Flags;
} RX_FCBTRACKER_CALLINFO, *PRX_FCBTRACKER_CALLINFO;
typedef
NTSTATUS
(NTAPI *PRX_DISPATCH) (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp
    );
typedef struct _DFS_NAME_CONTEXT_ *PDFS_NAME_CONTEXT;
typedef struct _NT_CREATE_PARAMETERS {
    ACCESS_MASK DesiredAccess;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG ShareAccess;
    ULONG Disposition;
    ULONG CreateOptions;
    PIO_SECURITY_CONTEXT SecurityContext;
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    PVOID DfsContext;
    PDFS_NAME_CONTEXT DfsNameContext;
} NT_CREATE_PARAMETERS, *PNT_CREATE_PARAMETERS;
typedef struct _RX_CONTEXT {
    NODE_TYPE_CODE NodeTypeCode;
    NODE_BYTE_SIZE NodeByteSize;
    __volatile ULONG ReferenceCount;
    LIST_ENTRY ContextListEntry;
    UCHAR MajorFunction;
    UCHAR MinorFunction;
    BOOLEAN PendingReturned;
    BOOLEAN PostRequest;
    PDEVICE_OBJECT RealDevice;
    PIRP CurrentIrp;
    PIO_STACK_LOCATION CurrentIrpSp;
    PMRX_FCB pFcb;
    PMRX_FOBX pFobx;
    PMRX_SRV_OPEN pRelevantSrvOpen;
    PNON_PAGED_FCB NonPagedFcb;
    PRDBSS_DEVICE_OBJECT RxDeviceObject;
    PETHREAD OriginalThread;
    PETHREAD LastExecutionThread;
    __volatile PVOID LockManagerContext;
    PVOID RdbssDbgExtension;
    RX_SCAVENGER_ENTRY ScavengerEntry;
    ULONG SerialNumber;
    ULONG FobxSerialNumber;
    ULONG Flags;
    BOOLEAN FcbResourceAcquired;
    BOOLEAN FcbPagingIoResourceAcquired;
    UCHAR MustSucceedDescriptorNumber;
    union {
        struct {
            union {
                NTSTATUS StoredStatus;
                PVOID StoredStatusAlignment;
            };
            ULONG_PTR InformationToReturn;
        };
        IO_STATUS_BLOCK IoStatusBlock;
    };
    union {
        ULONGLONG ForceLonglongAligmentDummyField;
        PVOID MRxContext[MRX_CONTEXT_FIELD_COUNT];
    };
    PVOID WriteOnlyOpenRetryContext;
    PMRX_CALLDOWN MRxCancelRoutine;
    PRX_DISPATCH ResumeRoutine;
    RX_WORK_QUEUE_ITEM WorkQueueItem;
    LIST_ENTRY OverflowListEntry;
    KEVENT SyncEvent;
    LIST_ENTRY BlockedOperations;
    PFAST_MUTEX BlockedOpsMutex;
    LIST_ENTRY RxContextSerializationQLinks;
    union {
        struct {
            union {
                FS_INFORMATION_CLASS FsInformationClass;
                FILE_INFORMATION_CLASS FileInformationClass;
            };
            PVOID Buffer;
            union {
                LONG Length;
                LONG LengthRemaining;
            };
            BOOLEAN ReplaceIfExists;
            BOOLEAN AdvanceOnly;
        } Info;
        struct {
            UNICODE_STRING SuppliedPathName;
            NET_ROOT_TYPE NetRootType;
            PIO_SECURITY_CONTEXT pSecurityContext;
        } PrefixClaim;
    };
    union{
        struct {
            NT_CREATE_PARAMETERS NtCreateParameters;
            ULONG ReturnedCreateInformation;
            PWCH CanonicalNameBuffer;
            PRX_PREFIX_ENTRY NetNamePrefixEntry;
            PMRX_SRV_CALL pSrvCall;
            PMRX_NET_ROOT pNetRoot;
            PMRX_V_NET_ROOT pVNetRoot;
            PVOID EaBuffer;
            ULONG EaLength;
            ULONG SdLength;
            ULONG PipeType;
            ULONG PipeReadMode;
            ULONG PipeCompletionMode;
            USHORT Flags;
            NET_ROOT_TYPE Type;
            UCHAR RdrFlags;
            BOOLEAN FcbAcquired;
            BOOLEAN TryForScavengingOnSharingViolation;
            BOOLEAN ScavengingAlreadyTried;
            BOOLEAN ThisIsATreeConnectOpen;
            BOOLEAN TreeConnectOpenDeferred;
            UNICODE_STRING TransportName;
            UNICODE_STRING UserName;
            UNICODE_STRING Password;
            UNICODE_STRING UserDomainName;
        } Create;
        struct {
            ULONG FileIndex;
            BOOLEAN RestartScan;
            BOOLEAN ReturnSingleEntry;
            BOOLEAN IndexSpecified;
            BOOLEAN InitialQuery;
        } QueryDirectory;
        struct {
            PMRX_V_NET_ROOT pVNetRoot;
        } NotifyChangeDirectory;
        struct {
            PUCHAR UserEaList;
            ULONG UserEaListLength;
            ULONG UserEaIndex;
            BOOLEAN RestartScan;
            BOOLEAN ReturnSingleEntry;
            BOOLEAN IndexSpecified;
        } QueryEa;
        struct {
            SECURITY_INFORMATION SecurityInformation;
            ULONG Length;
        } QuerySecurity;
        struct {
            SECURITY_INFORMATION SecurityInformation;
            PSECURITY_DESCRIPTOR SecurityDescriptor;
        } SetSecurity;
        struct {
            ULONG Length;
            PSID StartSid;
            PFILE_GET_QUOTA_INFORMATION SidList;
            ULONG SidListLength;
            BOOLEAN RestartScan;
            BOOLEAN ReturnSingleEntry;
            BOOLEAN IndexSpecified;
        } QueryQuota;
        struct {
            ULONG Length;
        } SetQuota;
        struct {
            PV_NET_ROOT VNetRoot;
            PSRV_CALL SrvCall;
            PNET_ROOT NetRoot;
        } DosVolumeFunction;
        struct {
            ULONG FlagsForLowIo;
            LOWIO_CONTEXT LowIoContext;
        };
    } ;
    PWCH AlsoCanonicalNameBuffer;
    PUNICODE_STRING LoudCompletionString;
    __volatile LONG AcquireReleaseFcbTrackerX;
    __volatile ULONG TrackerHistoryPointer;
    RX_FCBTRACKER_CALLINFO TrackerHistory[RDBSS_TRACKER_HISTORY_SIZE];
} RX_CONTEXT, *PRX_CONTEXT;
typedef enum {
    RX_CONTEXT_FLAG_FROM_POOL = 0x00000001,
    RX_CONTEXT_FLAG_WAIT = 0x00000002,
    RX_CONTEXT_FLAG_WRITE_THROUGH = 0x00000004,
    RX_CONTEXT_FLAG_FLOPPY = 0x00000008,
    RX_CONTEXT_FLAG_RECURSIVE_CALL = 0x00000010,
    RX_CONTEXT_FLAG_THIS_DEVICE_TOP_LEVEL = 0x00000020,
    RX_CONTEXT_FLAG_DEFERRED_WRITE = 0x00000040,
    RX_CONTEXT_FLAG_VERIFY_READ = 0x00000080,
    RX_CONTEXT_FLAG_STACK_IO_CONTEZT = 0x00000100,
    RX_CONTEXT_FLAG_IN_FSP = 0x00000200,
    RX_CONTEXT_FLAG_CREATE_MAILSLOT = 0x00000400,
    RX_CONTEXT_FLAG_MAILSLOT_REPARSE = 0x00000800,
    RX_CONTEXT_FLAG_ASYNC_OPERATION = 0x00001000,
    RX_CONTEXT_FLAG_NO_COMPLETE_FROM_FSP = 0x00002000,
    RX_CONTEXT_FLAG_POST_ON_STABLE_CONDITION = 0x00004000,
    RX_CONTEXT_FLAG_FSP_DELAYED_OVERFLOW_QUEUE = 0x00008000,
    RX_CONTEXT_FLAG_FSP_CRITICAL_OVERFLOW_QUEUE = 0x00010000,
    RX_CONTEXT_FLAG_MINIRDR_INVOKED = 0x00020000,
    RX_CONTEXT_FLAG_WAITING_FOR_RESOURCE = 0x00040000,
    RX_CONTEXT_FLAG_CANCELLED = 0x00080000,
    RX_CONTEXT_FLAG_SYNC_EVENT_WAITERS = 0x00100000,
    RX_CONTEXT_FLAG_NO_PREPOSTING_NEEDED = 0x00200000,
    RX_CONTEXT_FLAG_BYPASS_VALIDOP_CHECK = 0x00400000,
    RX_CONTEXT_FLAG_BLOCKED_PIPE_RESUME = 0x00800000,
    RX_CONTEXT_FLAG_IN_SERIALIZATION_QUEUE = 0x01000000,
    RX_CONTEXT_FLAG_NO_EXCEPTION_BREAKPOINT = 0x02000000,
    RX_CONTEXT_FLAG_NEEDRECONNECT = 0x04000000,
    RX_CONTEXT_FLAG_MUST_SUCCEED = 0x08000000,
    RX_CONTEXT_FLAG_MUST_SUCCEED_NONBLOCKING = 0x10000000,
    RX_CONTEXT_FLAG_MUST_SUCCEED_ALLOCATED = 0x20000000,
    RX_CONTEXT_FLAG_MINIRDR_INITIATED = 0x80000000,
} RX_CONTEXT_FLAGS;
                                    RX_CONTEXT_FLAG_MUST_SUCCEED_ALLOCATED | \
                                    RX_CONTEXT_FLAG_IN_FSP)
                                         RX_CONTEXT_FLAG_MUST_SUCCEED | \
                                         RX_CONTEXT_FLAG_MUST_SUCCEED_NONBLOCKING)
typedef enum {
    RX_CONTEXT_CREATE_FLAG_UNC_NAME = 0x1,
    RX_CONTEXT_CREATE_FLAG_STRIPPED_TRAILING_BACKSLASH = 0x2,
    RX_CONTEXT_CREATE_FLAG_ADDEDBACKSLASH = 0x4,
    RX_CONTEXT_CREATE_FLAG_REPARSE = 0x8,
    RX_CONTEXT_CREATE_FLAG_SPECIAL_PATH = 0x10,
} RX_CONTEXT_CREATE_FLAGS;
typedef enum {
    RXCONTEXT_FLAG4LOWIO_PIPE_OPERATION = 0x1,
    RXCONTEXT_FLAG4LOWIO_PIPE_SYNC_OPERATION = 0x2,
    RXCONTEXT_FLAG4LOWIO_READAHEAD = 0x4,
    RXCONTEXT_FLAG4LOWIO_THIS_READ_ENLARGED = 0x8,
    RXCONTEXT_FLAG4LOWIO_THIS_IO_BUFFERED = 0x10,
    RXCONTEXT_FLAG4LOWIO_LOCK_FCB_RESOURCE_HELD = 0x20,
    RXCONTEXT_FLAG4LOWIO_LOCK_WAS_QUEUED_IN_LOCKMANAGER = 0x40,
    RXCONTEXT_FLAG4LOWIO_THIS_IO_FAST = 0x80,
    RXCONTEXT_FLAG4LOWIO_LOCK_OPERATION_COMPLETED = 0x100,
    RXCONTEXT_FLAG4LOWIO_LOCK_BUFFERED_ON_ENTRY = 0x200
} RX_CONTEXT_LOWIO_FLAGS;
extern NPAGED_LOOKASIDE_LIST RxContextLookasideList;
   { \
    ASSERT(DISPATCH); \
    ASSERT( NodeType(DISPATCH) == RDBSS_NTC_MINIRDR_DISPATCH ); \
    if (DISPATCH->FUNC == NULL) { \
        STATUS = STATUS_NOT_IMPLEMENTED; \
    } else { \
        RxDbgTrace(0, Dbg, ("MiniRdr Calldown - %s\n",#FUNC)); \
        STATUS = DISPATCH->FUNC ARGLIST; \
    } \
   }
   { \
    ASSERT(DISPATCH); \
    ASSERT( NodeType(DISPATCH) == RDBSS_NTC_MINIRDR_DISPATCH ); \
    if ( DISPATCH->FUNC == NULL) { \
       STATUS = STATUS_NOT_IMPLEMENTED; \
    } else { \
       if (!BooleanFlagOn((CONTEXT)->Flags,RX_CONTEXT_FLAG_CANCELLED)) { \
          RxDbgTrace(0, Dbg, ("MiniRdr Calldown - %s\n",#FUNC)); \
          RtlZeroMemory(&((CONTEXT)->MRxContext[0]), \
                        sizeof((CONTEXT)->MRxContext)); \
          STATUS = DISPATCH->FUNC ARGLIST; \
       } else { \
          STATUS = STATUS_CANCELLED; \
       } \
    } \
   }
         RxDbgTrace(+1, Dbg, ("RxWaitSync, RxContext = %08lx\n", (RxContext))); \
         (RxContext)->Flags |= RX_CONTEXT_FLAG_SYNC_EVENT_WAITERS; \
         KeWaitForSingleObject( &(RxContext)->SyncEvent, \
                               Executive, KernelMode, FALSE, NULL ); \
         RxDbgTrace(-1, Dbg, ("RxWaitSync -> VOID\n", 0 ))
        (RxContext)->Flags &= ~RX_CONTEXT_FLAG_SYNC_EVENT_WAITERS; \
        KeSetEvent( &(RxContext)->SyncEvent, 0, FALSE )
        (RxContext)->Flags |= RX_CONTEXT_FLAG_IN_SERIALIZATION_QUEUE; \
        InsertTailList( SerializationQueue, &((RxContext)->RxContextSerializationQLinks ))
INLINE
PRX_CONTEXT
RxRemoveFirstContextFromSerializationQueue (
    PLIST_ENTRY SerializationQueue
    )
{
   if (IsListEmpty( SerializationQueue )) {
      return NULL;
   } else {
      PRX_CONTEXT Context = (PRX_CONTEXT)(CONTAINING_RECORD( SerializationQueue->Flink,
                                            RX_CONTEXT,
                                            RxContextSerializationQLinks ));
      RemoveEntryList( SerializationQueue->Flink );
      Context->RxContextSerializationQLinks.Flink = NULL;
      Context->RxContextSerializationQLinks.Blink = NULL;
      return Context;
   }
}
         if (IsListEmpty( (Source) )) { \
            InitializeListHead( (Destination) ); \
         } else { \
            *(Destination) = *(Source); \
            (Destination)->Flink->Blink = (Destination); \
            (Destination)->Blink->Flink = (Destination); \
            InitializeListHead( (Source) ); \
         }
    { \
        ExAcquireFastMutex( Mutex ); \
        RxTransferList( Destination, Source ); \
        ExReleaseFastMutex( Mutex ); \
    }
NTSTATUS
RxCancelNotifyChangeDirectoryRequestsForVNetRoot (
   PV_NET_ROOT VNetRoot,
   BOOLEAN ForceFilesClosed
   );
VOID
RxCancelNotifyChangeDirectoryRequestsForFobx (
   PFOBX Fobx
   );
NTSTATUS
NTAPI
RxSetMinirdrCancelRoutine (
    IN OUT PRX_CONTEXT RxContext,
    IN PMRX_CALLDOWN MRxCancelRoutine
    );
VOID
NTAPI
RxInitializeContext (
    IN PIRP Irp,
    IN PRDBSS_DEVICE_OBJECT RxDeviceObject,
    IN ULONG InitialContextFlags,
    IN OUT PRX_CONTEXT RxContext
    );
PRX_CONTEXT
NTAPI
RxCreateRxContext (
    IN PIRP Irp,
    IN PRDBSS_DEVICE_OBJECT RxDeviceObject,
    IN ULONG InitialContextFlags
    );
VOID
NTAPI
RxPrepareContextForReuse (
   IN OUT PRX_CONTEXT RxContext
   );
VOID
NTAPI
RxDereferenceAndDeleteRxContext_Real (
    IN PRX_CONTEXT RxContext
    );
VOID
NTAPI
RxReinitializeContext (
   IN OUT PRX_CONTEXT RxContext
   );
    RxDereferenceAndDeleteRxContext_Real((RXCONTEXT)); \
}
extern FAST_MUTEX RxContextPerFileSerializationMutex;
NTSTATUS
NTAPI
__RxSynchronizeBlockingOperations (
    IN OUT PRX_CONTEXT RxContext,
    IN PFCB Fcb,
    IN OUT PLIST_ENTRY BlockingIoQ,
    IN BOOLEAN DropFcbLock
    );
              __RxSynchronizeBlockingOperations(RXCONTEXT,FCB,IOQUEUE,TRUE)
              __RxSynchronizeBlockingOperations(RXCONTEXT,FCB,IOQUEUE,FALSE)
VOID
NTAPI
RxResumeBlockedOperations_Serially (
    IN OUT PRX_CONTEXT RxContext,
    IN OUT PLIST_ENTRY BlockingIoQ
    );
VOID
RxResumeBlockedOperations_ALL (
    IN OUT PRX_CONTEXT RxContext
    );
VOID
RxCancelBlockingOperation (
    IN OUT PRX_CONTEXT RxContext,
    IN PIRP Irp
    );
VOID
RxRemoveOperationFromBlockingQueue (
    IN OUT PRX_CONTEXT RxContext
    );
