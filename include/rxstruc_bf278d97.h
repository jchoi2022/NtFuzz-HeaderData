#include "prefix.h"
#include "lowio.h"
#include "scavengr.h"
#include "RxContx.h"
#include "mrx.h"
#include "Fcb.h"
typedef LONGLONG RXVBO;
#if 0
#endif
extern RX_SPIN_LOCK RxStrucSupSpinLock;
typedef struct _RDBSS_EXPORTS {
    PRX_SPIN_LOCK pRxStrucSupSpinLock;
    PLONG pRxDebugTraceIndent;
} RDBSS_EXPORTS, *PRDBSS_EXPORTS;
extern RDBSS_EXPORTS RxExports;
typedef enum _LOCK_HOLDING_STATE {
    LHS_LockNotHeld,
    LHS_SharedLockHeld,
    LHS_ExclusiveLockHeld
} LOCK_HOLDING_STATE, *PLOCK_HOLDING_STATE;
typedef struct _RDBSS_DATA {
    NODE_TYPE_CODE NodeTypeCode;
    NODE_BYTE_SIZE NodeByteSize;
    PDRIVER_OBJECT DriverObject;
    __volatile LONG NumberOfMinirdrsStarted;
    FAST_MUTEX MinirdrRegistrationMutex;
    LIST_ENTRY RegisteredMiniRdrs;
    LONG NumberOfMinirdrsRegistered;
    PEPROCESS OurProcess;
    CACHE_MANAGER_CALLBACKS CacheManagerCallbacks;
    ERESOURCE Resource;
} RDBSS_DATA;
typedef RDBSS_DATA *PRDBSS_DATA;
extern RDBSS_DATA RxData;
PEPROCESS
RxGetRDBSSProcess (
    VOID
    );
typedef enum _RX_RDBSS_STATE_ {
   RDBSS_STARTABLE = 0,
   RDBSS_STARTED,
   RDBSS_STOP_IN_PROGRESS
} RX_RDBSS_STATE, *PRX_RDBSS_STATE;
typedef struct _RDBSS_STARTSTOP_CONTEXT_ {
    RX_RDBSS_STATE State;
    ULONG Version;
    PRX_CONTEXT pStopContext;
} RDBSS_STARTSTOP_CONTEXT, *PRDBSS_STARTSTOP_CONTEXT;
typedef struct _MRX_CALLDOWN_COMPLETION_CONTEXT_ {
    LONG WaitCount;
    KEVENT Event;
} MRX_CALLDOWN_COMPLETION_CONTEXT, *PMRX_CALLDOWN_COMPLETION_CONTEXT;
typedef
NTSTATUS
(NTAPI *PMRX_CALLDOWN_ROUTINE) (
    IN OUT PVOID CalldownParameter
    );
typedef struct _MRX_CALLDOWN_CONTEXT_ {
    RX_WORK_QUEUE_ITEM WorkQueueItem;
    PRDBSS_DEVICE_OBJECT pMRxDeviceObject;
    PMRX_CALLDOWN_COMPLETION_CONTEXT pCompletionContext;
    PMRX_CALLDOWN_ROUTINE pRoutine;
    NTSTATUS CompletionStatus;
    PVOID pParameter;
} MRX_CALLDOWN_CONTEXT, *PMRX_CALLDOWN_CONTEXT;
typedef struct _RX_DISPATCHER_CONTEXT_ {
    __volatile LONG NumberOfWorkerThreads;
    __volatile PKEVENT pTearDownEvent;
} RX_DISPATCHER_CONTEXT, *PRX_DISPATCHER_CONTEXT;
        { \
           KIRQL SavedIrql; \
           KeAcquireSpinLock( &RxStrucSupSpinLock,&SavedIrql ); \
           RxDeviceObject->StartStopContext.State = (NewState); \
           KeReleaseSpinLock( &RxStrucSupSpinLock, SavedIrql ); \
        }
        (RxDeviceObject)->StartStopContext.State
typedef struct _RDBSS_DEVICE_OBJECT {
    union {
        DEVICE_OBJECT DeviceObject;
        DEVICE_OBJECT;
    };
    ULONG RegistrationControls;
    PRDBSS_EXPORTS RdbssExports;
    PDEVICE_OBJECT RDBSSDeviceObject;
    PMINIRDR_DISPATCH Dispatch;
    UNICODE_STRING DeviceName;
    ULONG NetworkProviderPriority;
    HANDLE MupHandle;
    BOOLEAN RegisterUncProvider;
    BOOLEAN RegisterMailSlotProvider;
    BOOLEAN RegisteredAsFileSystem;
    BOOLEAN Unused;
    LIST_ENTRY MiniRdrListLinks;
    __volatile ULONG NumberOfActiveFcbs;
    __volatile ULONG NumberOfActiveContexts;
    struct {
        LARGE_INTEGER PagingReadBytesRequested;
        LARGE_INTEGER NonPagingReadBytesRequested;
        LARGE_INTEGER CacheReadBytesRequested;
        LARGE_INTEGER FastReadBytesRequested;
        LARGE_INTEGER NetworkReadBytesRequested;
        __volatile ULONG ReadOperations;
        ULONG FastReadOperations;
        __volatile ULONG RandomReadOperations;
        LARGE_INTEGER PagingWriteBytesRequested;
        LARGE_INTEGER NonPagingWriteBytesRequested;
        LARGE_INTEGER CacheWriteBytesRequested;
        LARGE_INTEGER FastWriteBytesRequested;
        LARGE_INTEGER NetworkWriteBytesRequested;
        __volatile ULONG WriteOperations;
        ULONG FastWriteOperations;
        __volatile ULONG RandomWriteOperations;
    };
    __deref_volatile LONG PostedRequestCount[RxMaximumWorkQueue];
    LONG OverflowQueueCount[RxMaximumWorkQueue];
    LIST_ENTRY OverflowQueue[RxMaximumWorkQueue];
    RX_SPIN_LOCK OverflowQueueSpinLock;
    LONG AsynchronousRequestsPending;
    PKEVENT pAsynchronousRequestsCompletionEvent;
    RDBSS_STARTSTOP_CONTEXT StartStopContext;
    RX_DISPATCHER_CONTEXT DispatcherContext;
    PRX_PREFIX_TABLE pRxNetNameTable;
    RX_PREFIX_TABLE RxNetNameTableInDeviceObject;
    PRDBSS_SCAVENGER pRdbssScavenger;
    RDBSS_SCAVENGER RdbssScavengerInDeviceObject;
} RDBSS_DEVICE_OBJECT, *PRDBSS_DEVICE_OBJECT;
INLINE
VOID
NTAPI
RxUnregisterMinirdr (
    IN PRDBSS_DEVICE_OBJECT RxDeviceObject
    )
{
    PDEVICE_OBJECT RDBSSDeviceObject;
    RDBSSDeviceObject = RxDeviceObject->RDBSSDeviceObject;
    RxpUnregisterMinirdr( RxDeviceObject );
    if (RDBSSDeviceObject != NULL) {
        ObDereferenceObject( RDBSSDeviceObject );
    }
}
extern FAST_MUTEX RxMinirdrRegistrationMutex;
extern LIST_ENTRY RxRegisteredMiniRdrs;
extern ULONG RxNumberOfMinirdrs;
