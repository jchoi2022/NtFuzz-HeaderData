extern PIO_WORKITEM RxIoWorkItem;
extern RX_DISPATCHER RxDispatcher;
extern RX_WORK_QUEUE_DISPATCHER RxDispatcherWorkQueues;
extern KMUTEX RxSerializationMutex;
        KeWaitForSingleObject(&RxSerializationMutex,Executive,KernelMode,FALSE,NULL)
        KeReleaseMutex(&RxSerializationMutex,FALSE)
extern ULONG RxElapsedSecondsSinceStart;
extern NTSTATUS RxStubStatus;
extern PRDBSS_DEVICE_OBJECT RxFileSystemDeviceObject;
extern LARGE_INTEGER RxLargeZero;
extern LARGE_INTEGER RxMaxLarge;
extern LARGE_INTEGER Rx30Milliseconds;
extern LARGE_INTEGER RxOneSecond;
extern LARGE_INTEGER RxOneDay;
extern LARGE_INTEGER RxJanOne1980;
extern LARGE_INTEGER RxDecThirtyOne1979;
extern NTSTATUS RxStubStatus;
extern FCB RxDeviceFCB;
#if 0
extern ULONG RxMaxDelayedCloseCount;
#endif
extern LIST_ENTRY RxSrvCalldownList;
extern LIST_ENTRY RxActiveContexts;
__volatile extern LONG RxNumberOfActiveFcbs;
extern UNICODE_STRING s_PipeShareName;
extern UNICODE_STRING s_MailSlotShareName;
extern UNICODE_STRING s_MailSlotServerPrefix;
extern UNICODE_STRING s_IpcShareName;
extern UNICODE_STRING s_PrimaryDomainName;
extern VOID (*RxTeardownPerStreamContexts)(IN PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader);
