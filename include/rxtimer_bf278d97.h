typedef struct _RX_WORK_ITEM_ {
    RX_WORK_QUEUE_ITEM WorkQueueItem;
    ULONG LastTick;
    ULONG Options;
} RX_WORK_ITEM, *PRX_WORK_ITEM;
extern NTSTATUS
NTAPI
RxPostOneShotTimerRequest(
    IN PRDBSS_DEVICE_OBJECT pDeviceObject,
    IN PRX_WORK_ITEM pWorkItem,
    IN PRX_WORKERTHREAD_ROUTINE Routine,
    IN PVOID pContext,
    IN LARGE_INTEGER TimeInterval);
extern NTSTATUS
NTAPI
RxPostRecurrentTimerRequest(
    IN PRDBSS_DEVICE_OBJECT pDeviceObject,
    IN PRX_WORKERTHREAD_ROUTINE Routine,
    IN PVOID pContext,
    IN LARGE_INTEGER TimeInterval);
extern NTSTATUS
NTAPI
RxCancelTimerRequest(
    IN PRDBSS_DEVICE_OBJECT pDeviceObject,
    IN PRX_WORKERTHREAD_ROUTINE Routine,
    IN PVOID pContext
    );
extern NTSTATUS
NTAPI
RxInitializeRxTimer();
extern VOID
NTAPI
RxTearDownRxTimer(void);
