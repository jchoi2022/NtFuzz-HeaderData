#include "rx.h"
#include "backpack.h"
#include "RxTypes.h"
#include "RxLog.h"
#include "RxTrace.h"
#include "RxTimer.h"
#include "RxStruc.h"
extern PVOID RxNull;
            RxLogEventDirect( _DeviceObject, _OriginatorId, _EventId, _Status, __LINE__ )
            RxLogEventWithBufferDirect( _DeviceObject, _OriginatorId, _EventId, _Status, _Buffer, _Length, __LINE__ )
            RxLogEventDirect(_DeviceObject, _OriginatorId, _EventId, _Status, __LINE__)
VOID
RxLogEventDirect (
    IN PRDBSS_DEVICE_OBJECT DeviceObject,
    IN PUNICODE_STRING OriginatorId,
    IN ULONG EventId,
    IN NTSTATUS Status,
    IN ULONG Line
    );
VOID
RxLogEventWithBufferDirect (
    IN PVOID DeviceOrDriverObject,
    IN PUNICODE_STRING OriginatorId,
    IN ULONG EventId,
    IN NTSTATUS Status,
    IN PVOID DataBuffer,
    IN USHORT DataBufferLength,
    IN ULONG LineNumber
    );
VOID
RxLogEventWithAnnotation (
    IN PRDBSS_DEVICE_OBJECT DeviceObject,
    IN ULONG EventId,
    IN NTSTATUS Status,
    IN PVOID DataBuffer,
    IN USHORT DataBufferLength,
    IN PUNICODE_STRING Annotation,
    IN ULONG AnnotationCount
    );
BOOLEAN
RxCcLogError (
    IN PDEVICE_OBJECT DeviceObject,
    IN PUNICODE_STRING FileName,
    IN NTSTATUS Error,
    IN NTSTATUS DeviceError,
    IN UCHAR IrpMajorCode,
    IN PVOID Context
    );
NTSTATUS
RxPrefixClaim (
    IN PRX_CONTEXT RxContext
    );
VOID
RxpPrepareCreateContextForReuse (
    PRX_CONTEXT RxContext
    );
LUID
RxGetUid (
    IN PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext
    );
ULONG
RxGetSessionId (
    IN PIO_STACK_LOCATION IrpSp
    );
NTSTATUS
RxFindOrCreateConnections (
    _In_ PRX_CONTEXT RxContext,
    _In_ PIRP Irp,
    _In_ PUNICODE_STRING CanonicalName,
    _In_ NET_ROOT_TYPE NetRootType,
    _In_ BOOLEAN TreeConnect,
    _Out_ PUNICODE_STRING LocalNetRootName,
    _Out_ PUNICODE_STRING FilePathName,
    _Inout_ PLOCK_HOLDING_STATE LockState,
    _In_ PRX_CONNECTION_ID RxConnectionId
    );
typedef enum _RX_NAME_CONJURING_METHODS {
    VNetRoot_As_Prefix,
    VNetRoot_As_UNC_Name,
    VNetRoot_As_DriveLetter
} RX_NAME_CONJURING_METHODS;
VOID
RxConjureOriginalName (
    _Inout_ PFCB Fcb,
    _Inout_ PFOBX Fobx,
    _Out_ PULONG ActualNameLength,
    _Out_writes_bytes_( *LengthRemaining) PWCHAR OriginalName,
    _Inout_ PLONG LengthRemaining,
    _In_ RX_NAME_CONJURING_METHODS NameConjuringMethod
    );
NTSTATUS
RxCompleteMdl (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp
    );
VOID
RxSyncUninitializeCacheMap (
    IN PRX_CONTEXT RxContext,
    IN PFILE_OBJECT FileObject
    );
VOID
RxLockUserBuffer (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp,
    IN LOCK_OPERATION Operation,
    IN ULONG BufferLength
    );
PVOID
RxMapSystemBuffer (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp
    );
PVOID
RxMapUserBuffer (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp
    );
    RtlUpperString( UPCASEDNAME, NAME )
NTSTATUS
__RxAcquireFcb(
    _Inout_ PFCB Fcb,
    _Inout_opt_ PRX_CONTEXT RxContext OPTIONAL,
    _In_ ULONG Mode
    ,
    _In_ ULONG LineNumber,
    _In_ PCSTR FileName,
    _In_ ULONG SerialNumber
    );
        __RxAcquireFcb((FCB),(RXCONTEXT),FCB_MODE_EXCLUSIVE,__LINE__,__FILE__,0)
        __RxAcquireFcb((FCB),(RXCONTEXT),FCB_MODE_SHARED,__LINE__,__FILE__,0)
        __RxAcquireFcb((FCB),(RXCONTEXT),FCB_MODE_SHARED_WAIT_FOR_EXCLUSIVE,__LINE__,__FILE__,0)
        __RxAcquireFcb((FCB),(RXCONTEXT),FCB_MODE_SHARED_STARVE_EXCLUSIVE,__LINE__,__FILE__,0)
_Releases_lock_(*(MrxFcb->Header.Resource))
VOID
__RxReleaseFcb(
    _Inout_opt_ PRX_CONTEXT RxContext,
    _Inout_ PMRX_FCB MrxFcb
    ,
    _In_ ULONG LineNumber,
    _In_ PCSTR FileName,
    _In_ ULONG SerialNumber
    );
        __RxReleaseFcb((RXCONTEXT),RX_GET_MRX_FCB(FCB),__LINE__,__FILE__,0)
VOID
__RxReleaseFcbForThread(
    _Inout_opt_ PRX_CONTEXT RxContext,
    _Inout_ PMRX_FCB MrxFcb,
    _In_ ERESOURCE_THREAD ResourceThreadId
    ,
    _In_ ULONG LineNumber,
    _In_ PCSTR FileName,
    _In_ ULONG SerialNumber
    );
        __RxReleaseFcbForThread((RXCONTEXT),RX_GET_MRX_FCB(FCB),(THREAD),__LINE__,__FILE__,0)
VOID RxTrackerUpdateHistory (
    _Inout_opt_ PRX_CONTEXT RxContext,
    _Inout_ PMRX_FCB MrxFcb,
    _In_ ULONG Operation,
    _In_ ULONG LineNumber,
    _In_ PCSTR FileName,
    _In_ ULONG SerialNumber
    );
VOID
RxTrackPagingIoResource (
    _Inout_ PVOID Instance,
    _In_ ULONG Type,
    _In_ ULONG Line,
    _In_ PCSTR File
    );
    ExIsResourceAcquiredSharedLite( (FCB)->Header.Resource ) \
)
    ExIsResourceAcquiredSharedLite( (FCB)->Header.Resource ) \
)
    ExIsResourceAcquiredExclusiveLite( (FCB)->Header.Resource ) \
)
    ExIsResourceAcquiredSharedLite( (FCB)->Header.Resource ) | \
    ExIsResourceAcquiredExclusiveLite( (FCB)->Header.Resource ) \
)
    ExAcquireResourceExclusiveLite( (FCB)->Header.PagingIoResource, TRUE ); \
    if (RXCONTEXT) { \
        ((PRX_CONTEXT)RXCONTEXT)->FcbPagingIoResourceAcquired = TRUE; \
    } \
    RxTrackPagingIoResource( FCB, 1, __LINE__, __FILE__ ) \
    ExAcquireResourceSharedLite( (FCB)->Header.PagingIoResource, FLAG ); \
    if (AcquiredFile) { \
        if (RXCONTEXT) { \
            ((PRX_CONTEXT)RXCONTEXT)->FcbPagingIoResourceAcquired = TRUE; \
        } \
        RxTrackPagingIoResource( FCB, 2, __LINE__, __FILE__ ); \
    }
     RxTrackPagingIoResource( FCB, 3, __LINE__, __FILE__ ); \
    if (RXCONTEXT) { \
        ((PRX_CONTEXT)RXCONTEXT)->FcbPagingIoResourceAcquired = FALSE; \
    } \
    ExReleaseResourceLite( (FCB)->Header.PagingIoResource )
    RxTrackPagingIoResource( FCB, 3, __LINE__, __FILE__ ); \
    if (RXCONTEXT) { \
        ((PRX_CONTEXT)RXCONTEXT)->FcbPagingIoResourceAcquired = FALSE; \
    } \
    ExReleaseResourceForThreadLite( (FCB)->Header.PagingIoResource, (THREAD) )
BOOLEAN
RxAcquireFcbForLazyWrite (
    IN PVOID Null,
    IN BOOLEAN Wait
    );
VOID
RxReleaseFcbFromLazyWrite (
    IN PVOID Null
    );
BOOLEAN
RxAcquireFcbForReadAhead (
    IN PVOID Null,
    IN BOOLEAN Wait
    );
VOID
RxReleaseFcbFromReadAhead (
    IN PVOID Null
    );
BOOLEAN
RxNoOpAcquire (
    IN PVOID Fcb,
    IN BOOLEAN Wait
    );
VOID
RxNoOpRelease (
    IN PVOID Fcb
    );
NTSTATUS
RxAcquireForCcFlush (
    IN PFILE_OBJECT FileObject,
    IN PDEVICE_OBJECT DeviceObject
    );
NTSTATUS
RxReleaseForCcFlush (
    IN PFILE_OBJECT FileObject,
    IN PDEVICE_OBJECT DeviceObject
    );
    ExConvertExclusiveToSharedLite( RX_GET_MRX_FCB(FCB)->Header.Resource ); \
    }
VOID
RxVerifyOperationIsLegal (
    IN PRX_CONTEXT RxContext
    );
VOID
RxPrePostIrp (
    IN PVOID Context,
    IN PIRP Irp
    );
VOID
RxAddToWorkque (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp
    );
NTSTATUS
RxFsdPostRequest (
    IN PRX_CONTEXT RxContext
    );
        (((RXCONTEXT)->ResumeRoutine = (RESUMEROUTINE)), \
        RxFsdPostRequest( (RXCONTEXT) ) \
        )
    ALIGN_UP( Val, WORD ) \
    )
    ALIGN_UP_POINTER( Ptr, WORD ) \
    )
    ALIGN_UP( Val, LONG ) \
    )
    ALIGN_UP_POINTER( Ptr, LONG ) \
    )
    ALIGN_UP( Val, ULONGLONG ) \
    )
    ALIGN_UP_POINTER( Ptr, ULONGLONG ) \
    )
    QuadAlignPtr(Ptr) == (PVOID)(Ptr) \
    )
typedef union _UCHAR1 {
    UCHAR Uchar[1];
    UCHAR ForceAlignment;
} UCHAR1, *PUCHAR1;
typedef union _UCHAR2 {
    UCHAR Uchar[2];
    USHORT ForceAlignment;
} UCHAR2, *PUCHAR2;
typedef union _UCHAR4 {
    UCHAR Uchar[4];
    ULONG ForceAlignment;
} UCHAR4, *PUCHAR4;
    *((UCHAR1 *)(Dst)) = *((UNALIGNED UCHAR1 *)(Src)); \
    }
    *((UCHAR2 *)(Dst)) = *((UNALIGNED UCHAR2 *)(Src)); \
    }
    *((UCHAR4 *)(Dst)) = *((UNALIGNED UCHAR4 *)(Src)); \
    }
    *((UNALIGNED UCHAR4 *)(Dst)) = *((UCHAR4 *)(Src)); \
    }
    RxDbgTrace(0, Dbg, ("RxNotifyReportChange PRETENDING Fcb %08lx %wZ Filter/Action = %08lx/%08lx\n", \
                 (F),&((F)->FcbTableEntry.Path),(FL),(A)))
#if 0
    RxDbgTrace(0, Dbg, ("FsRtlNotifyFullReportChange PRETENDING ............\n",0))
#endif
        (STATUS_SUCCESS)
VOID
RxCompleteRequest_Real (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp,
    IN NTSTATUS Status
    );
    RxCompleteRequest_Real( RXCONTEXT, IRP, STATUS ); \
}
NTSTATUS
RxCompleteRequest(
      PRX_CONTEXT pContext,
      NTSTATUS Status);
        RxCompleteRequest(RXCONTEXT,STATUS)
             NTSTATUS __sss = (STATUS); \
             RxCompleteRequest(RxContext,__sss); \
             return(__sss);}
             NTSTATUS __sss = (STATUS); \
             RxCompleteRequest(RxContext,__sss);} \
VOID
RxPopUpFileCorrupt (
    IN PRX_CONTEXT RxContext,
    IN PFCB Fcb
    );
NTSTATUS
RxConstructSrvCall (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp,
    IN PSRV_CALL SrvCall,
    OUT PLOCK_HOLDING_STATE LockHoldingState
    );
NTSTATUS
RxSetSrvCallDomainName (
    IN PMRX_SRV_CALL SrvCall,
    IN PUNICODE_STRING DomainName
    );
NTSTATUS
RxConstructNetRoot (
    IN PRX_CONTEXT RxContext,
    IN PSRV_CALL SrvCall,
    IN PNET_ROOT NetRoot,
    IN PV_NET_ROOT VirtualNetRoot,
    OUT PLOCK_HOLDING_STATE LockHoldingState
    );
NTSTATUS
RxConstructVirtualNetRoot (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp,
    IN PUNICODE_STRING CanonicalName,
    IN NET_ROOT_TYPE NetRootType,
    IN BOOLEAN TreeConnect,
    OUT PV_NET_ROOT *VirtualNetRootPointer,
    OUT PLOCK_HOLDING_STATE LockHoldingState,
    OUT PRX_CONNECTION_ID RxConnectionId
    );
NTSTATUS
RxFindOrConstructVirtualNetRoot (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp,
    IN PUNICODE_STRING CanonicalName,
    IN NET_ROOT_TYPE NetRootType,
    IN PUNICODE_STRING RemainingName
    );
NTSTATUS
RxLowIoFsCtlShell (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp,
    IN PFCB Fcb,
    IN PFOBX Fobx
    );
NTSTATUS
RxLowIoFsCtlShellCompletion (
    IN PRX_CONTEXT RxContext
    );
NTSTATUS
RxLowIoLockControlShell (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp,
    IN PFCB Fcb
    );
NTSTATUS
RxShadowLowIo (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp,
    IN PFCB Fcb
    );
NTSTATUS
RxShadowFastLowIo (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp
    );
NTSTATUS
RxChangeBufferingState (
    PSRV_OPEN SrvOpen,
    PVOID Context,
    BOOLEAN ComputeNewState
    );
VOID
RxIndicateChangeOfBufferingState (
    PMRX_SRV_CALL SrvCall,
    PVOID SrvOpenKey,
    PVOID Context
    );
VOID
RxIndicateChangeOfBufferingStateForSrvOpen (
    PMRX_SRV_CALL SrvCall,
    PMRX_SRV_OPEN SrvOpen,
    PVOID SrvOpenKey,
    PVOID Context
    );
NTSTATUS
RxPrepareToReparseSymbolicLink (
    PRX_CONTEXT RxContext,
    BOOLEAN SymbolicLinkEmbeddedInOldPath,
    PUNICODE_STRING NewPath,
    BOOLEAN NewPathIsAbsolute,
    PBOOLEAN ReparseRequired
    );
BOOLEAN
RxLockEnumerator (
    IN OUT PMRX_SRV_OPEN SrvOpen,
    IN OUT PVOID *ContinuationHandle,
    OUT PLARGE_INTEGER FileOffset,
    OUT PLARGE_INTEGER LockRange,
    OUT PBOOLEAN IsLockExclusive
    );
VOID
RxReference (
    IN OUT PVOID Instance
    );
VOID
RxDereference (
    IN OUT PVOID Instance,
    IN LOCK_HOLDING_STATE LockHoldingState
    );
VOID
RxWaitForStableCondition (
    IN PRX_BLOCK_CONDITION Condition,
    IN OUT PLIST_ENTRY TransitionWaitList,
    IN OUT PRX_CONTEXT RxContext,
    OUT NTSTATUS *AsyncStatus OPTIONAL
    );
VOID
RxUpdateCondition (
    IN RX_BLOCK_CONDITION NewConditionValue,
    OUT PRX_BLOCK_CONDITION Condition,
    IN OUT PLIST_ENTRY TransitionWaitList
    );
VOID
RxFinalizeNetTable (
    IN PRDBSS_DEVICE_OBJECT RxDeviceObject,
    IN BOOLEAN ForceFinalization
    );
NTSTATUS
RxCloseAssociatedSrvOpen (
    IN PRX_CONTEXT RxContext OPTIONAL,
    IN PFOBX Fobx
    );
NTSTATUS
RxFinalizeConnection (
    IN OUT PNET_ROOT NetRoot,
    IN OUT PV_NET_ROOT VNetRoot OPTIONAL,
    IN LOGICAL ForceFilesClosed
    );
NTSTATUS
RxCheckShareAccessPerSrvOpens (
    IN PFCB Fcb,
    IN ACCESS_MASK DesiredAccess,
    IN ULONG DesiredShareAccess
    );
VOID
RxUpdateShareAccessPerSrvOpens (
    IN PSRV_OPEN SrvOpen
    );
VOID
RxRemoveShareAccessPerSrvOpens (
    IN OUT PSRV_OPEN SrvOpen
    );
VOID
RxRemoveShareAccessPerSrvOpens (
    IN OUT PSRV_OPEN SrvOpen
    );
    IoCheckShareAccess(a1,a2,a3,a4,a5)
    IoRemoveShareAccess(a1,a2)
    IoSetShareAccess(a1,a2,a3,a4)
    IoUpdateShareAccess(a1,a2)
NTSTATUS
RxDriverEntry (
    IN PDRIVER_OBJECT DriverObject,
    IN PUNICODE_STRING RegistryPath
    );
VOID
RxUnload (
    IN PDRIVER_OBJECT DriverObject
    );
VOID
RxInitializeMinirdrDispatchTable (
    IN PDRIVER_OBJECT DriverObject
    );
ULONG
RxGetNetworkProviderPriority(
    PUNICODE_STRING DeviceName
    );
VOID
RxExtractServerName(
    IN PUNICODE_STRING FilePathName,
    OUT PUNICODE_STRING SrvCallName,
    OUT PUNICODE_STRING RestOfName
    );
VOID
RxCreateNetRootCallBack (
    IN PMRX_CREATENETROOT_CONTEXT CreateNetRootContext
    );
NTSTATUS
DuplicateTransportAddress (
    PTRANSPORT_ADDRESS *Copy,
    PTRANSPORT_ADDRESS Original,
    POOL_TYPE PoolType);
NTSTATUS
RxCepInitializeVC (
    PRXCE_VC Vc,
    PRXCE_CONNECTION Connection
    );
NTSTATUS
DuplicateConnectionInformation (
    PRXCE_CONNECTION_INFORMATION *Copy,
    PRXCE_CONNECTION_INFORMATION Original,
    POOL_TYPE PoolType
    );
NTSTATUS
RxCepInitializeConnection (
    IN OUT PRXCE_CONNECTION Connection,
    IN PRXCE_ADDRESS Address,
    IN PRXCE_CONNECTION_INFORMATION ConnectionInformation,
    IN PRXCE_CONNECTION_EVENT_HANDLER Handler,
    IN PVOID EventContext
    );
typedef struct _RX_CALLOUT_PARAMETERS_BLOCK_ * PRX_CALLOUT_PARAMETERS_BLOCK;
typedef struct _RX_CREATE_CONNECTION_CALLOUT_CONTEXT_ *PRX_CREATE_CONNECTION_CALLOUT_CONTEXT;
NTSTATUS
RxCeInitiateConnectRequest (
    IN PRX_CALLOUT_PARAMETERS_BLOCK ParameterBlock
    );
VOID
RxCeCleanupConnectCallOutContext (
    PRX_CREATE_CONNECTION_CALLOUT_CONTEXT CreateConnectionContext
    );
PVOID
RxAllocateObject (
    NODE_TYPE_CODE NodeType,
    PMINIRDR_DISPATCH MRxDispatch,
    ULONG NameLength
    );
VOID
RxFreeObject (
    PVOID pObject
    );
NTSTATUS
RxInitializeSrvCallParameters (
    IN PRX_CONTEXT RxContext,
    IN OUT PSRV_CALL SrvCall
    );
VOID
RxAddVirtualNetRootToNetRoot (
    PNET_ROOT NetRoot,
    PV_NET_ROOT VNetRoot
    );
VOID
RxRemoveVirtualNetRootFromNetRoot (
    PNET_ROOT NetRoot,
    PV_NET_ROOT VNetRoot
    );
PVOID
RxAllocateFcbObject (
    PRDBSS_DEVICE_OBJECT RxDeviceObject,
    NODE_TYPE_CODE NodeType,
    POOL_TYPE PoolType,
    ULONG NameSize,
    PVOID AlreadyAllocatedObject
    );
VOID
RxFreeFcbObject (
    PVOID Object
    );
VOID
RxPurgeFcb (
    IN PFCB Fcb
    );
BOOLEAN
RxFinalizeNetFcb (
    OUT PFCB ThisFcb,
    IN BOOLEAN RecursiveFinalize,
    IN BOOLEAN ForceFinalize,
    IN LONG ReferenceCount
    );
BOOLEAN
RxIsThisACscAgentOpen (
    IN PRX_CONTEXT RxContext
    );
VOID
RxCheckFcbStructuresForAlignment (
    VOID
    );
VOID
RxpPrepareCreateContextForReuse (
    PRX_CONTEXT RxContext
    );
NTSTATUS
RxLowIoSubmitRETRY (
    IN PRX_CONTEXT RxContext,
    IN PIRP Irp
    );
NTSTATUS
RxLowIoCompletionTail (
    IN PRX_CONTEXT RxContext
    );
VOID
RxRecurrentTimerWorkItemDispatcher (
    IN PVOID Context
    );
NTSTATUS
RxInitializeWorkQueueDispatcher (
   PRX_WORK_QUEUE_DISPATCHER Dispatcher
   );
VOID
RxInitializeWorkQueue (
   PRX_WORK_QUEUE WorkQueue,
   WORK_QUEUE_TYPE WorkQueueType,
   ULONG MaximumNumberOfWorkerThreads,
   ULONG MinimumNumberOfWorkerThreads
   );
VOID
RxTearDownWorkQueueDispatcher (
   PRX_WORK_QUEUE_DISPATCHER Dispatcher
   );
VOID
RxTearDownWorkQueue (
   PRX_WORK_QUEUE WorkQueue
   );
NTSTATUS
RxSpinUpWorkerThread (
   PRX_WORK_QUEUE WorkQueue,
   PRX_WORKERTHREAD_ROUTINE Routine,
   PVOID Parameter
   );
VOID
RxSpinUpWorkerThreads (
   PRX_WORK_QUEUE WorkQueue
   );
VOID
RxSpinUpRequestsDispatcher (
    PRX_DISPATCHER Dispatcher
    );
VOID
RxpSpinUpWorkerThreads (
    PRX_WORK_QUEUE WorkQueue
    );
VOID
RxpWorkerThreadDispatcher (
   IN PRX_WORK_QUEUE WorkQueue,
   IN PLARGE_INTEGER WaitInterval
   );
VOID
RxBootstrapWorkerThreadDispatcher (
   IN PRX_WORK_QUEUE WorkQueue
   );
VOID
RxWorkerThreadDispatcher (
   IN PRX_WORK_QUEUE WorkQueue
   );
VOID
RxWorkItemDispatcher (
   PVOID Context
   );
BOOLEAN
RxIsPrefixTableEmpty (
    IN PRX_PREFIX_TABLE ThisTable
    );
PRX_PREFIX_ENTRY
RxTableLookupName_ExactLengthMatch (
    IN PRX_PREFIX_TABLE ThisTable,
    IN PUNICODE_STRING Name,
    IN ULONG HashValue,
    IN PRX_CONNECTION_ID OPTIONAL RxConnectionId
    );
PVOID
RxTableLookupName (
    IN PRX_PREFIX_TABLE ThisTable,
    IN PUNICODE_STRING Name,
    OUT PUNICODE_STRING RemainingName,
    IN PRX_CONNECTION_ID OPTIONAL RxConnectionId
    );
VOID
RxAcquireFileForNtCreateSection (
    IN PFILE_OBJECT FileObject
    );
VOID
RxReleaseFileForNtCreateSection (
    IN PFILE_OBJECT FileObject
    );
NTSTATUS
RxPrepareRequestForHandling (
    PCHANGE_BUFFERING_STATE_REQUEST Request
    );
VOID
RxPrepareRequestForReuse (
    PCHANGE_BUFFERING_STATE_REQUEST Request
    );
VOID
RxpDiscardChangeBufferingStateRequests (
    IN OUT PLIST_ENTRY DiscardedRequests
    );
VOID
RxGatherRequestsForSrvOpen (
    IN OUT PSRV_CALL SrvCall,
    IN PSRV_OPEN SrvOpen,
    IN OUT PLIST_ENTRY RequestsListHead
    );
NTSTATUS
RxpLookupSrvOpenForRequestLite (
    IN PSRV_CALL SrvCall,
    IN OUT PCHANGE_BUFFERING_STATE_REQUEST Request
    );
PRX_LOG_ENTRY_HEADER
RxGetNextLogEntry (
    VOID
    );
VOID
RxPrintLog (
    IN ULONG EntriesToPrint OPTIONAL
    );
VOID
RxProcessChangeBufferingStateRequestsForSrvOpen (
    PSRV_OPEN SrvOpen
    );
NTSTATUS
RxPurgeFobxFromCache (
    PFOBX FobxToBePurged
    );
BOOLEAN
RxPurgeFobx (
   PFOBX pFobx
   );
VOID
RxPurgeAllFobxs (
    PRDBSS_DEVICE_OBJECT RxDeviceObject
    );
VOID
RxUndoScavengerFinalizationMarking (
    PVOID Instance
    );
VOID
RxScavengeAllFobxs (
    PRDBSS_DEVICE_OBJECT RxDeviceObject
    );
ULONG
RxTableComputePathHashValue (
    IN PUNICODE_STRING Name
    );
VOID
RxExtractServerName (
    IN PUNICODE_STRING FilePathName,
    OUT PUNICODE_STRING SrvCallName,
    OUT PUNICODE_STRING RestOfName
    );
VOID
RxCreateNetRootCallBack (
    IN PMRX_CREATENETROOT_CONTEXT CreateNetRootContext
    );
VOID
RxSpinDownOutstandingAsynchronousRequests (
    IN PRDBSS_DEVICE_OBJECT RxDeviceObject
    );
NTSTATUS
RxRegisterAsynchronousRequest (
    IN PRDBSS_DEVICE_OBJECT RxDeviceObject
    );
VOID
RxDeregisterAsynchronousRequest (
    IN PRDBSS_DEVICE_OBJECT RxDeviceObject
    );
BOOLEAN
RxCancelOperationInOverflowQueue (
    IN PRX_CONTEXT RxContext
    );
VOID
RxOrphanSrvOpens (
    IN PV_NET_ROOT ThisVNetRoot
    );
VOID
RxOrphanThisFcb (
    PFCB Fcb
    );
VOID
RxOrphanSrvOpensForThisFcb (
    IN PFCB Fcb,
    IN PV_NET_ROOT ThisVNetRoot,
    IN BOOLEAN OrphanAll
    );
VOID
RxForceFinalizeAllVNetRoots (
    PNET_ROOT NetRoot
    );
NTSTATUS
RxLockOperationCompletion (
    IN PVOID Context,
    IN PIRP Irp
    );
VOID
RxUnlockOperation (
    IN PVOID Context,
    IN PFILE_LOCK_INFO LockInfo
    );
VOID
RxStackOverflowRead (
    IN PVOID Context,
    IN PKEVENT Event
    );
NTSTATUS
RxPostStackOverflowRead (
    IN PRX_CONTEXT RxContext,
    IN PFCB Fcb
    );
VOID
RxCancelRoutine (
    PDEVICE_OBJECT DeviceObject,
    PIRP Irp
    );
INLINE
TYPE_OF_OPEN
RxDecodeFileObject (
    IN PFILE_OBJECT FileObject,
    OUT PFCB *Fcb,
    OUT PFOBX *Fobx
    ) {
    if (FileObject) {
        *Fcb = (PFCB)FileObject->FsContext;
        *Fobx = (PFOBX)FileObject->FsContext2;
        return NodeType( *Fcb );
    } else {
        *Fcb = NULL;
        *Fobx = NULL;
        return RDBSS_NTC_STORAGE_TYPE_UNKNOWN;
    }
}
