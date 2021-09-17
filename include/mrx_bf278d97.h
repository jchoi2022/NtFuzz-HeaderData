#include <mrxfcb.h>
            (RXCONTEXT)->CurrentIrp->IoStatus.Status = (STATUS)
             ((RXCONTEXT))->CurrentIrp->IoStatus.Information = (INFORMATION)
             ((RXCONTEXT)->CurrentIrp->IoStatus.Information)
NTSTATUS
NTAPI
RxRegisterMinirdr (
    OUT PRDBSS_DEVICE_OBJECT *DeviceObject,
    IN OUT PDRIVER_OBJECT DriverObject,
    IN PMINIRDR_DISPATCH MrdrDispatch,
    IN ULONG Controls,
    IN PUNICODE_STRING DeviceName,
    IN ULONG DeviceExtensionSize,
    IN DEVICE_TYPE DeviceType,
    IN ULONG DeviceCharacteristics
    );
VOID
NTAPI
RxMakeLateDeviceAvailable (
    IN PRDBSS_DEVICE_OBJECT RxDeviceObject
    );
VOID
NTAPI
__RxFillAndInstallFastIoDispatch (
    IN PRDBSS_DEVICE_OBJECT RxDeviceObject,
    IN OUT PFAST_IO_DISPATCH FastIoDispatch,
    IN ULONG FastIoDispatchSize
    );
    __RxFillAndInstallFastIoDispatch(&__devobj->RxDeviceObject,\
                                     &__fastiodisp, \
                                     sizeof(__fastiodisp)); \
    }
VOID
NTAPI
RxpUnregisterMinirdr (
    IN PRDBSS_DEVICE_OBJECT RxDeviceObject
    );
NTSTATUS
RxStartMinirdr (
    IN PRX_CONTEXT RxContext,
    OUT PBOOLEAN PostToFsp
    );
NTSTATUS
RxStopMinirdr (
    IN PRX_CONTEXT RxContext,
    OUT PBOOLEAN PostToFsp
    );
NTSTATUS
RxSetDomainForMailslotBroadcast (
    IN PUNICODE_STRING DomainName
    );
NTSTATUS
RxFsdDispatch (
    IN PRDBSS_DEVICE_OBJECT RxDeviceObject,
    IN PIRP Irp
    );
typedef
NTSTATUS
(NTAPI *PMRX_CALLDOWN) (
    IN OUT PRX_CONTEXT RxContext
    );
typedef
NTSTATUS
(NTAPI *PMRX_CALLDOWN_CTX) (
    IN OUT PRX_CONTEXT RxContext,
    IN OUT PRDBSS_DEVICE_OBJECT RxDeviceObject
    );
typedef
NTSTATUS
(NTAPI *PMRX_CHKDIR_CALLDOWN) (
    IN OUT PRX_CONTEXT RxContext,
    IN PUNICODE_STRING DirectoryName
    );
typedef
NTSTATUS
(NTAPI *PMRX_CHKFCB_CALLDOWN) (
    IN PFCB Fcb1,
    IN PFCB Fcb2
    );
typedef enum _RX_BLOCK_CONDITION {
    Condition_Uninitialized = 0,
    Condition_InTransition,
    Condition_Closing,
    Condition_Good,
    Condition_Bad,
    Condition_Closed
    } RX_BLOCK_CONDITION, *PRX_BLOCK_CONDITION;
typedef
VOID
(NTAPI *PMRX_NETROOT_CALLBACK) (
    IN OUT PMRX_CREATENETROOT_CONTEXT CreateContext
    );
typedef
VOID
(NTAPI *PMRX_EXTRACT_NETROOT_NAME) (
    IN PUNICODE_STRING FilePathName,
    IN PMRX_SRV_CALL SrvCall,
    OUT PUNICODE_STRING NetRootName,
    OUT PUNICODE_STRING RestOfName OPTIONAL
    );
typedef struct _MRX_CREATENETROOT_CONTEXT {
    PRX_CONTEXT RxContext;
    PV_NET_ROOT pVNetRoot;
    KEVENT FinishEvent;
    NTSTATUS VirtualNetRootStatus;
    NTSTATUS NetRootStatus;
    RX_WORK_QUEUE_ITEM WorkQueueItem;
    PMRX_NETROOT_CALLBACK Callback;
} MRX_CREATENETROOT_CONTEXT, *PMRX_CREATENETROOT_CONTEXT;
typedef
NTSTATUS
(NTAPI *PMRX_CREATE_V_NET_ROOT) (
    IN OUT PMRX_CREATENETROOT_CONTEXT Context
    );
typedef
NTSTATUS
(NTAPI *PMRX_UPDATE_NETROOT_STATE) (
    IN OUT PMRX_NET_ROOT NetRoot
    );
typedef struct _MRX_SRVCALL_CALLBACK_CONTEXT {
    struct _MRX_SRVCALLDOWN_STRUCTURE *SrvCalldownStructure;
    ULONG CallbackContextOrdinal;
    PRDBSS_DEVICE_OBJECT RxDeviceObject;
    NTSTATUS Status;
    PVOID RecommunicateContext;
} MRX_SRVCALL_CALLBACK_CONTEXT, *PMRX_SRVCALL_CALLBACK_CONTEXT;
typedef
VOID
(NTAPI *PMRX_SRVCALL_CALLBACK) (
    IN OUT PMRX_SRVCALL_CALLBACK_CONTEXT Context
    );
typedef struct _MRX_SRVCALLDOWN_STRUCTURE {
    KEVENT FinishEvent;
    LIST_ENTRY SrvCalldownList;
    PRX_CONTEXT RxContext;
    PMRX_SRV_CALL SrvCall;
    PMRX_SRVCALL_CALLBACK CallBack;
    BOOLEAN CalldownCancelled;
    ULONG NumberRemaining;
    ULONG NumberToWait;
    ULONG BestFinisherOrdinal;
    PRDBSS_DEVICE_OBJECT BestFinisher;
    MRX_SRVCALL_CALLBACK_CONTEXT CallbackContexts[1];
} MRX_SRVCALLDOWN_STRUCTURE;
typedef
NTSTATUS
(NTAPI *PMRX_CREATE_SRVCALL) (
    IN OUT PMRX_SRV_CALL SrvCall,
    IN OUT PMRX_SRVCALL_CALLBACK_CONTEXT SrvCallCallBackContext
    );
typedef
NTSTATUS
(NTAPI *PMRX_SRVCALL_WINNER_NOTIFY)(
    IN OUT PMRX_SRV_CALL SrvCall,
    IN BOOLEAN ThisMinirdrIsTheWinner,
    IN OUT PVOID RecommunicateContext
    );
typedef
VOID
(NTAPI *PMRX_NEWSTATE_CALLDOWN) (
    IN OUT PVOID Context
    );
typedef
NTSTATUS
(NTAPI *PMRX_DEALLOCATE_FOR_FCB) (
    IN OUT PMRX_FCB Fcb
    );
typedef
NTSTATUS
(NTAPI *PMRX_DEALLOCATE_FOR_FOBX) (
    IN OUT PMRX_FOBX Fobx
    );
typedef
NTSTATUS
(NTAPI *PMRX_IS_LOCK_REALIZABLE) (
    IN OUT PMRX_FCB Fcb,
    IN PLARGE_INTEGER ByteOffset,
    IN PLARGE_INTEGER Length,
    IN ULONG LowIoLockFlags
    );
typedef
NTSTATUS
(NTAPI *PMRX_FORCECLOSED_CALLDOWN) (
    IN OUT PMRX_SRV_OPEN SrvOpen
    );
typedef
NTSTATUS
(NTAPI *PMRX_FINALIZE_SRVCALL_CALLDOWN) (
    IN OUT PMRX_SRV_CALL SrvCall,
    IN BOOLEAN Force
    );
typedef
NTSTATUS
(NTAPI *PMRX_FINALIZE_V_NET_ROOT_CALLDOWN) (
    IN OUT PMRX_V_NET_ROOT VirtualNetRoot,
    IN PBOOLEAN Force
    );
typedef
NTSTATUS
(NTAPI *PMRX_FINALIZE_NET_ROOT_CALLDOWN) (
    IN OUT PMRX_NET_ROOT NetRoot,
    IN PBOOLEAN Force
    );
typedef
ULONG
(NTAPI *PMRX_EXTENDFILE_CALLDOWN) (
    IN OUT PRX_CONTEXT RxContext,
    IN OUT PLARGE_INTEGER NewFileSize,
    OUT PLARGE_INTEGER NewAllocationSize
    );
typedef
BOOLEAN
(*PRX_LOCK_ENUMERATOR) (
    IN OUT PMRX_SRV_OPEN SrvOpen,
    IN OUT PVOID *ContinuationHandle,
    OUT PLARGE_INTEGER FileOffset,
    OUT PLARGE_INTEGER LockRange,
    OUT PBOOLEAN IsLockExclusive
    );
typedef
NTSTATUS
(NTAPI *PMRX_CHANGE_BUFFERING_STATE_CALLDOWN) (
    IN OUT PRX_CONTEXT RxContext,
    IN OUT PMRX_SRV_OPEN SrvOpen,
    IN PVOID MRxContext
    );
typedef
NTSTATUS
(NTAPI *PMRX_PREPARSE_NAME) (
    IN OUT PRX_CONTEXT RxContext,
    IN PUNICODE_STRING Name
    );
typedef
NTSTATUS
(NTAPI *PMRX_GET_CONNECTION_ID) (
    IN OUT PRX_CONTEXT RxContext,
    IN OUT PRX_CONNECTION_ID UniqueId
    );
typedef enum _MINIRDR_BUFSTATE_COMMANDS {
    MRDRBUFSTCMD__COMMAND_FORCEPURGE0,
    MRDRBUFSTCMD__1,
    MRDRBUFSTCMD__2,
    MRDRBUFSTCMD__3,
    MRDRBUFSTCMD__4,
    MRDRBUFSTCMD__5,
    MRDRBUFSTCMD__6,
    MRDRBUFSTCMD__7,
    MRDRBUFSTCMD__8,
    MRDRBUFSTCMD__9,
    MRDRBUFSTCMD__10,
    MRDRBUFSTCMD__11,
    MRDRBUFSTCMD__12,
    MRDRBUFSTCMD__13,
    MRDRBUFSTCMD__14,
    MRDRBUFSTCMD__15,
    MRDRBUFSTCMD__16,
    MRDRBUFSTCMD__17,
    MRDRBUFSTCMD__18,
    MRDRBUFSTCMD__19,
    MRDRBUFSTCMD__20,
    MRDRBUFSTCMD__21,
    MRDRBUFSTCMD__22,
    MRDRBUFSTCMD__23,
    MRDRBUFSTCMD__24,
    MRDRBUFSTCMD__25,
    MRDRBUFSTCMD__26,
    MRDRBUFSTCMD__27,
    MRDRBUFSTCMD__28,
    MRDRBUFSTCMD__29,
    MRDRBUFSTCMD__30,
    MRDRBUFSTCMD__31,
    MRDRBUFSTCMD_MAXXX
} MINIRDR_BUFSTATE_COMMANDS;
typedef
NTSTATUS
(NTAPI *PMRX_COMPUTE_NEW_BUFFERING_STATE) (
    IN OUT PMRX_SRV_OPEN SrvOpen,
    IN PVOID MRxContext,
    OUT PULONG NewBufferingState
    );
typedef enum _LOWIO_OPS {
  LOWIO_OP_READ=0,
  LOWIO_OP_WRITE,
  LOWIO_OP_SHAREDLOCK,
  LOWIO_OP_EXCLUSIVELOCK,
  LOWIO_OP_UNLOCK,
  LOWIO_OP_UNLOCK_MULTIPLE,
  LOWIO_OP_FSCTL,
  LOWIO_OP_IOCTL,
  LOWIO_OP_NOTIFY_CHANGE_DIRECTORY,
  LOWIO_OP_CLEAROUT,
  LOWIO_OP_MAXIMUM
} LOWIO_OPS;
typedef
NTSTATUS
(NTAPI *PLOWIO_COMPLETION_ROUTINE) (
    IN PRX_CONTEXT RxContext
    );
typedef LONGLONG RXVBO;
typedef struct _LOWIO_LOCK_LIST {
    struct _LOWIO_LOCK_LIST * Next;
    ULONG LockNumber;
    RXVBO ByteOffset;
    LONGLONG Length;
    BOOLEAN ExclusiveLock;
    ULONG Key;
} LOWIO_LOCK_LIST, *PLOWIO_LOCK_LIST;
VOID
NTAPI
RxFinalizeLockList(
    struct _RX_CONTEXT *RxContext
    );
typedef struct _XXCTL_LOWIO_COMPONENT {
    ULONG Flags;
    union {
       ULONG FsControlCode;
       ULONG IoControlCode;
    };
    ULONG InputBufferLength;
    PVOID pInputBuffer;
    ULONG OutputBufferLength;
    PVOID pOutputBuffer;
    UCHAR MinorFunction;
} XXCTL_LOWIO_COMPONENT;
typedef struct _LOWIO_CONTEXT {
    USHORT Operation;
    USHORT Flags;
    PLOWIO_COMPLETION_ROUTINE CompletionRoutine;
    PERESOURCE Resource;
    ERESOURCE_THREAD ResourceThreadId;
    union {
        struct {
           ULONG Flags;
           PMDL Buffer;
           RXVBO ByteOffset;
           ULONG ByteCount;
           ULONG Key;
           PNON_PAGED_FCB NonPagedFcb;
        } ReadWrite;
        struct {
           union {
               PLOWIO_LOCK_LIST LockList;
               LONGLONG Length;
           };
           ULONG Flags;
           RXVBO ByteOffset;
           ULONG Key;
        } Locks;
        XXCTL_LOWIO_COMPONENT FsCtl;
        XXCTL_LOWIO_COMPONENT IoCtl;
        struct {
           BOOLEAN WatchTree;
           ULONG CompletionFilter;
           ULONG NotificationBufferLength;
           PVOID pNotificationBuffer;
        } NotifyChangeDirectory;
    } ParamsFor;
} LOWIO_CONTEXT;
#error LOWIO_LOCKSFLAG_FAIL_IMMEDIATELY!=SL_FAIL_IMMEDIATELY
#error LOWIO_LOCKSFLAG_EXCLUSIVELOCK!=SL_EXCLUSIVE_LOCK
typedef struct _MINIRDR_DISPATCH {
    NODE_TYPE_CODE NodeTypeCode;
    NODE_BYTE_SIZE NodeByteSize;
    ULONG MRxFlags;
    ULONG MRxSrvCallSize;
    ULONG MRxNetRootSize;
    ULONG MRxVNetRootSize;
    ULONG MRxFcbSize;
    ULONG MRxSrvOpenSize;
    ULONG MRxFobxSize;
    PMRX_CALLDOWN_CTX MRxStart;
    PMRX_CALLDOWN_CTX MRxStop;
    PMRX_CALLDOWN MRxCancel;
    PMRX_CALLDOWN MRxCreate;
    PMRX_CALLDOWN MRxCollapseOpen;
    PMRX_CALLDOWN MRxShouldTryToCollapseThisOpen;
    PMRX_CALLDOWN MRxFlush;
    PMRX_CALLDOWN MRxZeroExtend;
    PMRX_CALLDOWN MRxTruncate;
    PMRX_CALLDOWN MRxCleanupFobx;
    PMRX_CALLDOWN MRxCloseSrvOpen;
    PMRX_DEALLOCATE_FOR_FCB MRxDeallocateForFcb;
    PMRX_DEALLOCATE_FOR_FOBX MRxDeallocateForFobx;
    PMRX_IS_LOCK_REALIZABLE MRxIsLockRealizable;
    PMRX_FORCECLOSED_CALLDOWN MRxForceClosed;
    PMRX_CHKFCB_CALLDOWN MRxAreFilesAliased;
    PMRX_CALLDOWN MRxOpenPrintFile;
    PMRX_CALLDOWN MRxClosePrintFile;
    PMRX_CALLDOWN MRxWritePrintFile;
    PMRX_CALLDOWN MRxEnumeratePrintQueue;
    PMRX_CALLDOWN MRxClosedSrvOpenTimeOut;
    PMRX_CALLDOWN MRxClosedFcbTimeOut;
    PMRX_CALLDOWN MRxQueryDirectory;
    PMRX_CALLDOWN MRxQueryFileInfo;
    PMRX_CALLDOWN MRxSetFileInfo;
    PMRX_CALLDOWN MRxSetFileInfoAtCleanup;
    PMRX_CALLDOWN MRxQueryEaInfo;
    PMRX_CALLDOWN MRxSetEaInfo;
    PMRX_CALLDOWN MRxQuerySdInfo;
    PMRX_CALLDOWN MRxSetSdInfo;
    PMRX_CALLDOWN MRxQueryQuotaInfo;
    PMRX_CALLDOWN MRxSetQuotaInfo;
    PMRX_CALLDOWN MRxQueryVolumeInfo;
    PMRX_CALLDOWN MRxSetVolumeInfo;
    PMRX_CHKDIR_CALLDOWN MRxIsValidDirectory;
    PMRX_COMPUTE_NEW_BUFFERING_STATE MRxComputeNewBufferingState;
    PMRX_CALLDOWN MRxLowIOSubmit[LOWIO_OP_MAXIMUM+1];
    PMRX_EXTENDFILE_CALLDOWN MRxExtendForCache;
    PMRX_EXTENDFILE_CALLDOWN MRxExtendForNonCache;
    PMRX_CHANGE_BUFFERING_STATE_CALLDOWN MRxCompleteBufferingStateChangeRequest;
    PMRX_CREATE_V_NET_ROOT MRxCreateVNetRoot;
    PMRX_FINALIZE_V_NET_ROOT_CALLDOWN MRxFinalizeVNetRoot;
    PMRX_FINALIZE_NET_ROOT_CALLDOWN MRxFinalizeNetRoot;
    PMRX_UPDATE_NETROOT_STATE MRxUpdateNetRootState;
    PMRX_EXTRACT_NETROOT_NAME MRxExtractNetRootName;
    PMRX_CREATE_SRVCALL MRxCreateSrvCall;
    PMRX_CREATE_SRVCALL MRxCancelCreateSrvCall;
    PMRX_SRVCALL_WINNER_NOTIFY MRxSrvCallWinnerNotify;
    PMRX_FINALIZE_SRVCALL_CALLDOWN MRxFinalizeSrvCall;
    PMRX_CALLDOWN MRxDevFcbXXXControlFile;
    PMRX_PREPARSE_NAME MRxPreparseName;
    PMRX_GET_CONNECTION_ID MRxGetConnectionId;
    ULONG ScavengerTimeout;
} MINIRDR_DISPATCH, *PMINIRDR_DISPATCH;
