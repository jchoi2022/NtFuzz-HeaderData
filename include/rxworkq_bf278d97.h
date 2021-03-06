typedef
VOID
(NTAPI *PRX_WORKERTHREAD_ROUTINE) (
    IN PVOID Context
    );
typedef struct _RX_WORK_QUEUE_ITEM_ : public WORK_QUEUE_ITEM {
   PRDBSS_DEVICE_OBJECT pDeviceObject;
} RX_WORK_QUEUE_ITEM, *PRX_WORK_QUEUE_ITEM;
typedef struct _RX_WORK_DISPATCH_ITEM_ {
   RX_WORK_QUEUE_ITEM WorkQueueItem;
   PRX_WORKERTHREAD_ROUTINE DispatchRoutine;
   PVOID DispatchRoutineParameter;
} RX_WORK_DISPATCH_ITEM, *PRX_WORK_DISPATCH_ITEM;
typedef enum _RX_WORK_QUEUE_STATE_ {
   RxWorkQueueActive,
   RxWorkQueueInactive,
   RxWorkQueueRundownInProgress
} RX_WORK_QUEUE_STATE, *PRX_WORK_QUEUE_STATE;
typedef struct _RX_WORK_QUEUE_RUNDOWN_CONTEXT_ {
   KEVENT RundownCompletionEvent;
   LONG NumberOfThreadsSpunDown;
   PETHREAD *ThreadPointers;
} RX_WORK_QUEUE_RUNDOWN_CONTEXT, *PRX_WORK_QUEUE_RUNDOWN_CONTEXT;
typedef struct _RX_WORK_QUEUE_ {
   USHORT State;
   BOOLEAN SpinUpRequestPending;
   UCHAR Type;
   KSPIN_LOCK SpinLock;
   PRX_WORK_QUEUE_RUNDOWN_CONTEXT pRundownContext;
   __volatile LONG NumberOfWorkItemsDispatched;
   __volatile LONG NumberOfWorkItemsToBeDispatched;
   LONG CumulativeQueueLength;
   LONG NumberOfSpinUpRequests;
   LONG MaximumNumberOfWorkerThreads;
   LONG MinimumNumberOfWorkerThreads;
   __volatile LONG NumberOfActiveWorkerThreads;
   __volatile LONG NumberOfIdleWorkerThreads;
   LONG NumberOfFailedSpinUpRequests;
   __volatile LONG WorkQueueItemForSpinUpWorkerThreadInUse;
   RX_WORK_QUEUE_ITEM WorkQueueItemForTearDownWorkQueue;
   RX_WORK_QUEUE_ITEM WorkQueueItemForSpinUpWorkerThread;
   RX_WORK_QUEUE_ITEM WorkQueueItemForSpinDownWorkerThread;
   KQUEUE Queue;
   PETHREAD *ThreadPointers;
} RX_WORK_QUEUE, *PRX_WORK_QUEUE;
typedef struct _RX_WORK_QUEUE_DISPATCHER_ {
   RX_WORK_QUEUE WorkQueue[RxMaximumWorkQueue];
} RX_WORK_QUEUE_DISPATCHER, *PRX_WORK_QUEUE_DISPATCHER;
typedef enum _RX_DISPATCHER_STATE_ {
   RxDispatcherActive,
   RxDispatcherInactive
} RX_DISPATCHER_STATE, *PRX_DISPATCHER_STATE;
typedef struct _RX_DISPATCHER_ {
   LONG NumberOfProcessors;
   PEPROCESS OwnerProcess;
   PRX_WORK_QUEUE_DISPATCHER pWorkQueueDispatcher;
   RX_DISPATCHER_STATE State;
   LIST_ENTRY SpinUpRequests;
   KSPIN_LOCK SpinUpRequestsLock;
   KEVENT SpinUpRequestsEvent;
   KEVENT SpinUpRequestsTearDownEvent;
} RX_DISPATCHER, *PRX_DISPATCHER;
extern NTSTATUS
NTAPI
RxPostToWorkerThread (
    IN PRDBSS_DEVICE_OBJECT pMRxDeviceObject,
    IN WORK_QUEUE_TYPE WorkQueueType,
    IN PRX_WORK_QUEUE_ITEM pWorkQueueItem,
    IN PRX_WORKERTHREAD_ROUTINE Routine,
    IN PVOID pContext
    );
extern NTSTATUS
NTAPI
RxDispatchToWorkerThread(
    IN PRDBSS_DEVICE_OBJECT pMRxDeviceObject,
    IN WORK_QUEUE_TYPE WorkQueueType,
    IN PRX_WORKERTHREAD_ROUTINE Routine,
    IN PVOID pContext);
extern NTSTATUS
RxInitializeDispatcher();
extern NTSTATUS
RxTearDownDispatcher();
extern NTSTATUS
RxInitializeMRxDispatcher(
     IN OUT PRDBSS_DEVICE_OBJECT pMRxDeviceObject);
extern NTSTATUS
RxSpinDownMRxDispatcher(
     IN OUT PRDBSS_DEVICE_OBJECT pMRxDeviceObject);
