#include "fcbtable.h"
#include "buffring.h"
typedef NODE_TYPE_CODE TYPE_OF_OPEN;
struct _FCB_INIT_PACKET;
typedef struct _FCB_INIT_PACKET *PFCB_INIT_PACKET;
typedef struct _SRV_CALL : public MRX_SRV_CALL {
    BOOLEAN UpperFinalizationDone;
    RX_PREFIX_ENTRY PrefixEntry;
    RX_BLOCK_CONDITION Condition;
    ULONG SerialNumberForEnum;
    __volatile LONG NumberOfCloseDelayedFiles;
    LIST_ENTRY TransitionWaitList;
    LIST_ENTRY ScavengerFinalizationList;
    PURGE_SYNCHRONIZATION_CONTEXT PurgeSyncronizationContext;
    RX_BUFFERING_MANAGER BufferingManager;
} SRV_CALL, *PSRV_CALL;
typedef struct _NET_ROOT : public MRX_NET_ROOT {
    BOOLEAN UpperFinalizationDone;
    RX_BLOCK_CONDITION Condition;
    LIST_ENTRY TransitionWaitList;
    LIST_ENTRY ScavengerFinalizationList;
    PURGE_SYNCHRONIZATION_CONTEXT PurgeSyncronizationContext;
    PV_NET_ROOT DefaultVNetRoot;
    LIST_ENTRY VirtualNetRoots;
    ULONG NumberOfVirtualNetRoots;
    ULONG SerialNumberForEnum;
    RX_PREFIX_ENTRY PrefixEntry;
    RX_FCB_TABLE FcbTable;
} NET_ROOT, *PNET_ROOT;
typedef struct _V_NET_ROOT : public MRX_V_NET_ROOT {
    BOOLEAN UpperFinalizationDone;
    BOOLEAN ConnectionFinalizationDone;
    RX_BLOCK_CONDITION Condition;
    __volatile LONG AdditionalReferenceForDeleteFsctlTaken;
    RX_PREFIX_ENTRY PrefixEntry;
    UNICODE_STRING NamePrefix;
    ULONG PrefixOffsetInBytes;
    LIST_ENTRY NetRootListEntry;
    ULONG SerialNumberForEnum;
    LIST_ENTRY TransitionWaitList;
    LIST_ENTRY ScavengerFinalizationList;
} V_NET_ROOT, *PV_NET_ROOT;
typedef struct _NON_PAGED_FCB {
    NODE_TYPE_CODE NodeTypeCode;
    NODE_BYTE_SIZE NodeByteSize;
    SECTION_OBJECT_POINTERS SectionObjectPointers;
    ERESOURCE HeaderResource;
    ERESOURCE PagingIoResource;
    FAST_MUTEX FileSizeLock;
    LIST_ENTRY TransitionWaitList;
    ULONG OutstandingAsyncWrites;
    PKEVENT OutstandingAsyncEvent;
    KEVENT TheActualEvent;
    PVOID MiniRdrContext[2];
    FAST_MUTEX AdvancedFcbHeaderMutex;
    ERESOURCE BufferedLocksResource;
} NON_PAGED_FCB, *PNON_PAGED_FCB;
typedef enum _FCB_CONDITION {
    FcbGood = 1,
    FcbBad,
    FcbNeedsToBeVerified
} FCB_CONDITION;
typedef enum _RX_FCBTRACKER_CASES {
    RX_FCBTRACKER_CASE_NORMAL,
    RX_FCBTRACKER_CASE_NULLCONTEXT,
    RX_FCBTRACKER_CASE_CBS_CONTEXT,
    RX_FCBTRACKER_CASE_CBS_WAIT_CONTEXT,
    RX_FCBTRACKER_CASE_MAXIMUM
} RX_FCBTRACKER_CASES;
typedef struct _FCB_LOCK {
    struct _FCB_LOCK *Next;
    LARGE_INTEGER Length;
    LARGE_INTEGER BytesOffset;
    ULONG Key;
    BOOLEAN ExclusiveLock;
} FCB_LOCK, *PFCB_LOCK;
typedef struct _FCB_BUFFERED_LOCKS {
    struct _FCB_LOCK *List;
    __volatile ULONG PendingLockOps;
    PERESOURCE Resource;
} FCB_BUFFERED_LOCKS, *PFCB_BUFFERED_LOCKS;
typedef struct _FCB : public MRX_FCB {
    PV_NET_ROOT VNetRoot;
    PNON_PAGED_FCB NonPaged;
    LIST_ENTRY ScavengerFinalizationList;
    PKEVENT pBufferingStateChangeCompletedEvent;
    LONG NumberOfBufferingStateChangeWaiters;
    RX_FCB_TABLE_ENTRY FcbTableEntry;
    UNICODE_STRING PrivateAlreadyPrefixedName;
    BOOLEAN UpperFinalizationDone;
    RX_BLOCK_CONDITION Condition;
    PRX_FSD_DISPATCH_VECTOR PrivateDispatchVector;
    PRDBSS_DEVICE_OBJECT RxDeviceObject;
    PMINIRDR_DISPATCH MRxDispatch;
    PFAST_IO_DISPATCH MRxFastIoDispatch;
    PSRV_OPEN InternalSrvOpen;
    PFOBX InternalFobx;
    SHARE_ACCESS ShareAccess;
    SHARE_ACCESS ShareAccessPerSrvOpens;
    ULONG NumberOfLinks;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER LastChangeTime;
    ULONG ulFileSizeVersion;
    FILE_LOCK FileLock;
    union {
        LOWIO_PER_FCB_INFO;
        LOWIO_PER_FCB_INFO LowIoPerFcbInfo;
    };
    PFAST_MUTEX FileSizeLock;
    ULONG EaModificationCount;
    FCB_BUFFERED_LOCKS BufferedLocks;
    ULONG FcbAcquires[RX_FCBTRACKER_CASE_MAXIMUM];
    ULONG FcbReleases[RX_FCBTRACKER_CASE_MAXIMUM];
    PCHAR PagingIoResourceFile;
    ULONG PagingIoResourceLine;
} FCB, *PFCB;
                    (( FCB_STATE_WRITECACHING_ENABLED \
                          | FCB_STATE_WRITEBUFFERING_ENABLED \
                          | FCB_STATE_READCACHING_ENABLED \
                          | FCB_STATE_READBUFFERING_ENABLED \
                          | FCB_STATE_OPENSHARING_ENABLED \
                          | FCB_STATE_COLLAPSING_ENABLED \
                          | FCB_STATE_LOCK_BUFFERING_ENABLED \
                          | FCB_STATE_FILESIZECACHEING_ENABLED \
                          | FCB_STATE_FILETIMECACHEING_ENABLED ))
typedef struct _FCB_INIT_PACKET {
    PULONG pAttributes;
    PULONG pNumLinks;
    PLARGE_INTEGER pCreationTime;
    PLARGE_INTEGER pLastAccessTime;
    PLARGE_INTEGER pLastWriteTime;
    PLARGE_INTEGER pLastChangeTime;
    PLARGE_INTEGER pAllocationSize;
    PLARGE_INTEGER pFileSize;
    PLARGE_INTEGER pValidDataLength;
} FCB_INIT_PACKET;
typedef struct _SRV_OPEN : public MRX_SRV_OPEN {
    BOOLEAN UpperFinalizationDone;
    RX_BLOCK_CONDITION Condition;
    __volatile LONG BufferingToken;
    LIST_ENTRY ScavengerFinalizationList;
    LIST_ENTRY TransitionWaitList;
    LIST_ENTRY FobxList;
    PFOBX InternalFobx;
    union {
       LIST_ENTRY SrvOpenKeyList;
       ULONG SequenceNumber;
    };
    NTSTATUS OpenStatus;
} SRV_OPEN, *PSRV_OPEN;
      (FlagOn( (FCB)->FcbState, FCB_STATE_WRITECACHING_ENABLED ) && \
       !FlagOn( (SRVOPEN)->Flags, SRVOPEN_FLAG_DONTUSE_WRITE_CACHING ))
typedef struct _FOBX : public MRX_FOBX {
    __volatile ULONG FobxSerialNumber;
    LIST_ENTRY FobxQLinks;
    LIST_ENTRY ScavengerFinalizationList;
    LIST_ENTRY ClosePendingList;
    LARGE_INTEGER CloseTime;
    BOOLEAN UpperFinalizationDone;
    BOOLEAN ContainsWildCards;
    BOOLEAN fOpenCountDecremented;
    union {
        struct {
            union {
                MRX_PIPE_HANDLE_INFORMATION;
                MRX_PIPE_HANDLE_INFORMATION PipeHandleInformation;
            };
            LARGE_INTEGER CollectDataTime;
            ULONG CollectDataSize;
            THROTTLING_STATE ThrottlingState;
            LIST_ENTRY ReadSerializationQueue;
            LIST_ENTRY WriteSerializationQueue;
        } NamedPipe;
        struct {
            RXVBO PredictedReadOffset;
            RXVBO PredictedWriteOffset;
            THROTTLING_STATE LockThrottlingState;
            LARGE_INTEGER LastLockOffset;
            LARGE_INTEGER LastLockRange;
        } DiskFile;
    } Specific;
    PRDBSS_DEVICE_OBJECT RxDeviceObject;
} FOBX, *PFOBX;
extern ULONG RdbssReferenceTracingValue;
VOID
RxpTrackReference (
    _In_ ULONG TraceType,
    _In_ PCSTR FileName,
    _In_ ULONG Line,
    _In_ PVOID Instance
    );
BOOLEAN
RxpTrackDereference (
    _In_ ULONG TraceType,
    _In_ PCSTR FileName,
    _In_ ULONG Line,
    _In_ PVOID Instance
    );
        if (REF_TRACING_ON( RDBSS_REF_TRACK_ ## TYPE ) && \
            (RdbssReferenceTracingValue & RX_PRINT_REF_TRACKING)) { \
           DbgPrint("%ld\n",Count); \
        }
   RxpTrackReference( RDBSS_REF_TRACK_SRVCALL, __FILE__, __LINE__, SrvCall ); \
   ASSERT( SrvCall->NodeReferenceCount > 1 ); \
   InterlockedIncrement( &SrvCall->NodeReferenceCount )
   RxpTrackReference( RDBSS_REF_TRACK_SRVCALL, __FILE__, __LINE__, SrvCall ); \
   RxReference( SrvCall )
   RxpTrackDereference( RDBSS_REF_TRACK_SRVCALL, __FILE__, __LINE__, SrvCall ); \
   RxDereference(SrvCall, LockHoldingState )
   RxpTrackReference( RDBSS_REF_TRACK_NETROOT, __FILE__, __LINE__, NetRoot ); \
   RxReference( NetRoot )
   RxpTrackDereference( RDBSS_REF_TRACK_NETROOT, __FILE__, __LINE__, NetRoot );\
   RxDereference( NetRoot, LockHoldingState )
   RxpTrackReference( RDBSS_REF_TRACK_VNETROOT, __FILE__, __LINE__, VNetRoot );\
   RxReference( VNetRoot )
   RxpTrackDereference( RDBSS_REF_TRACK_VNETROOT, __FILE__, __LINE__, VNetRoot ); \
   RxDereference( VNetRoot, LockHoldingState )
   RxpTrackReference( RDBSS_REF_TRACK_NETFOBX, __FILE__, __LINE__, Fobx ); \
   RxReference( Fobx )
   RxpTrackDereference( RDBSS_REF_TRACK_NETFOBX, __FILE__, __LINE__, Fobx ); \
   RxDereference( Fobx, LockHoldingState )
   RxpTrackReference( RDBSS_REF_TRACK_SRVOPEN, __FILE__, __LINE__, SrvOpen ); \
   RxReference( SrvOpen )
   RxpTrackDereference( RDBSS_REF_TRACK_SRVOPEN, __FILE__, __LINE__, SrvOpen); \
   RxDereference( SrvOpen, LockHoldingState )
  (RxpTrackReference( RDBSS_REF_TRACK_NETFCB, __FILE__, __LINE__, Fcb ), \
   RxpReferenceNetFcb( Fcb ))
   ((LONG)RxpTrackDereference( RDBSS_REF_TRACK_NETFCB, __FILE__, __LINE__, Fcb )), \
   RxpDereferenceNetFcb( Fcb ))
   RxpTrackDereference( RDBSS_REF_TRACK_NETFCB, __FILE__, __LINE__, Fcb ), \
   RxpDereferenceAndFinalizeNetFcb( Fcb, RxContext, RecursiveFinalize, ForceFinalize )) \
VOID
RxCheckFcbStructuresForAlignment(
    VOID
    );
PSRV_CALL
RxCreateSrvCall (
    IN PRX_CONTEXT RxContext,
    IN PUNICODE_STRING Name,
    IN PUNICODE_STRING InnerNamePrefix OPTIONAL,
    IN PRX_CONNECTION_ID RxConnectionId
    );
    RxDbgTrace( 0, Dbg, ("RxWaitForStableSrvCall -- %lx\n",(SRVCALL)) ); \
    RxWaitForStableCondition( &(SRVCALL)->Condition, &(SRVCALL)->TransitionWaitList, (RXCONTEXT), NULL); \
    }
    RxDbgTrace( 0, Dbg, ("RxWaitForStableSrvCall -- %lx\n",(SRVCALL)) ); \
    RxWaitForStableCondition( &(SRVCALL)->Condition, &(SRVCALL)->TransitionWaitList, (RXCONTEXT), (PNTSTATUS) ); \
    }
    RxDbgTrace( 0, Dbg, ("RxTransitionSrvCall -- %lx Condition -- %ld\n",(SRVCALL),(CONDITION)) ); \
    RxUpdateCondition( (CONDITION), &(SRVCALL)->Condition, &(SRVCALL)->TransitionWaitList )
BOOLEAN
RxFinalizeSrvCall (
    OUT PSRV_CALL ThisSrvCall,
    IN BOOLEAN ForceFinalize
    );
PNET_ROOT
RxCreateNetRoot (
    IN PSRV_CALL SrvCall,
    IN PUNICODE_STRING Name,
    IN ULONG NetRootFlags,
    IN PRX_CONNECTION_ID OPTIONAL RxConnectionId
    );
    RxDbgTrace(0, Dbg, ("RxWaitForStableNetRoot -- %lx\n",(NETROOT))); \
    RxWaitForStableCondition(&(NETROOT)->Condition,&(NETROOT)->TransitionWaitList,(RXCONTEXT),NULL)
    RxDbgTrace(0, Dbg, ("RxTransitionNetRoot -- %lx Condition -- %ld\n",(NETROOT),(CONDITION))); \
    RxUpdateCondition((CONDITION),&(NETROOT)->Condition,&(NETROOT)->TransitionWaitList)
BOOLEAN
RxFinalizeNetRoot (
    OUT PNET_ROOT ThisNetRoot,
    IN BOOLEAN RecursiveFinalize,
    IN BOOLEAN ForceFinalize
    );
NTSTATUS
RxInitializeVNetRootParameters (
   PRX_CONTEXT RxContext,
   OUT LUID *LogonId,
   OUT PULONG SessionId,
   OUT PUNICODE_STRING *UserNamePtr,
   OUT PUNICODE_STRING *UserDomainNamePtr,
   OUT PUNICODE_STRING *PasswordPtr,
   OUT PULONG Flags
   );
VOID
RxUninitializeVNetRootParameters (
   IN PUNICODE_STRING UserName,
   IN PUNICODE_STRING UserDomainName,
   IN PUNICODE_STRING Password,
   OUT PULONG Flags
   );
PV_NET_ROOT
RxCreateVNetRoot (
    IN PRX_CONTEXT RxContext,
    IN PNET_ROOT NetRoot,
    IN PUNICODE_STRING CanonicalName,
    IN PUNICODE_STRING LocalNetRootName,
    IN PUNICODE_STRING FilePath,
    IN PRX_CONNECTION_ID RxConnectionId
    );
BOOLEAN
RxFinalizeVNetRoot (
    OUT PV_NET_ROOT ThisVNetRoot,
    IN BOOLEAN RecursiveFinalize,
    IN BOOLEAN ForceFinalize
    );
    RxDbgTrace( 0, Dbg, ("RxWaitForStableVNetRoot -- %lx\n",(VNETROOT)) ); \
    RxWaitForStableCondition( &(VNETROOT)->Condition, &(VNETROOT)->TransitionWaitList, (RXCONTEXT), NULL )
    RxDbgTrace( 0, Dbg, ("RxTransitionVNetRoot -- %lx Condition -- %ld\n", (VNETROOT), (CONDITION)) ); \
    RxUpdateCondition( (CONDITION), &(VNETROOT)->Condition, &(VNETROOT)->TransitionWaitList )
    ExAcquireFastMutex( (PFCB)->Specific.Fcb.FileSizeLock ); \
}
    ExReleaseFastMutex((PFCB)->Specific.Fcb.FileSizeLock); \
}
VOID
RxSetFileSizeWithLock (
    IN OUT PFCB Fcb,
    IN PLONGLONG FileSize
    );
VOID
RxGetFileSizeWithLock (
    IN PFCB Fcb,
    OUT PLONGLONG FileSize
    );
PFCB
RxCreateNetFcb (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp,
    IN PV_NET_ROOT VNetRoot,
    IN PUNICODE_STRING Name
    );
    RxDbgTrace( 0, Dbg, ("RxWaitForStableNetFcb -- %lx\n",(FCB))); \
    RxWaitForStableCondition( &(FCB)->Condition, &(FCB)->NonPaged->TransitionWaitList, (RXCONTEXT), NULL )
    RxDbgTrace( 0, Dbg, ("RxTransitionNetFcb -- %lx Condition -- %ld\n",(FCB),(CONDITION))); \
    RxUpdateCondition( (CONDITION), &(FCB)->Condition, &(FCB)->NonPaged->TransitionWaitList )
            IP.pAttributes = I1, \
            IP.pNumLinks = I1a, \
            IP.pCreationTime = I2, \
            IP.pLastAccessTime = I3, \
            IP.pLastWriteTime = I4a, \
            IP.pLastChangeTime = I4b, \
            IP.pAllocationSize = I5, \
            IP.pFileSize = I6, \
            IP.pValidDataLength = I7, \
          &IP)
    ASSERT( NodeTypeIsFcb(THIS_FCB__)); \
    ASSERT( THIS_FCB__->NonPaged != NULL ); \
    ASSERT( NodeType(THIS_FCB__->NonPaged) == RDBSS_NTC_NONPAGED_FCB); \
    ASSERT_CORRECT_FCB_STRUCTURE_DBG_ONLY(THIS_FCB__) \
    }
RX_FILE_TYPE
RxInferFileType (
    IN PRX_CONTEXT RxContext
    );
VOID
RxFinishFcbInitialization (
    IN OUT PMRX_FCB Fcb,
    IN RX_FILE_TYPE FileType,
    IN PFCB_INIT_PACKET InitPacket OPTIONAL
    );
    RxDbgTrace( 0, Dbg, ("RxWaitForStableFcb -- %lx\n",(SRVOPEN)) ); \
    RxWaitForStableCondition( &(SRVOPEN)->Condition, &(SRVOPEN)->TransitionWaitList, (RXCONTEXT), NULL )
    RxDbgTrace( 0, Dbg, ("RxTransitionSrvOpen -- %lx Condition -- %ld\n",(SRVOPEN),(CONDITION)) ); \
    RxUpdateCondition( (CONDITION), &(SRVOPEN)->Condition, &(SRVOPEN)->TransitionWaitList )
VOID
RxRemoveNameNetFcb (
    OUT PFCB ThisFcb
    );
LONG
RxpReferenceNetFcb (
   PFCB Fcb
   );
LONG
RxpDereferenceNetFcb (
   PFCB Fcb
   );
BOOLEAN
RxpDereferenceAndFinalizeNetFcb (
    OUT PFCB ThisFcb,
    IN PRX_CONTEXT RxContext,
    IN BOOLEAN RecursiveFinalize,
    IN BOOLEAN ForceFinalize
    );
PSRV_OPEN
RxCreateSrvOpen (
    IN PV_NET_ROOT VNetRoot,
    IN OUT PFCB Fcb
    );
BOOLEAN
RxFinalizeSrvOpen (
    OUT PSRV_OPEN ThisSrvOpen,
    IN BOOLEAN RecursiveFinalize,
    IN BOOLEAN ForceFinalize
    );
#if 0
#else
INLINE
PUNICODE_STRING
GET_ALREADY_PREFIXED_NAME (
    PMRX_SRV_OPEN SrvOpen,
    PMRX_FCB Fcb)
{
    PFCB ThisFcb = (PFCB)Fcb;
    return( &ThisFcb->PrivateAlreadyPrefixedName);
}
#endif
        (GET_ALREADY_PREFIXED_NAME( (Rxcontext)->pRelevantSrvOpen, (Rxcontext)->pFcb ))
PMRX_FOBX
RxCreateNetFobx (
    OUT PRX_CONTEXT RxContext,
    IN PMRX_SRV_OPEN MrxSrvOpen
    );
BOOLEAN
RxFinalizeNetFobx (
    OUT PFOBX ThisFobx,
    IN BOOLEAN RecursiveFinalize,
    IN BOOLEAN ForceFinalize
    );
