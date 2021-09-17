typedef struct _OS_DEP_DATA {
 PDEVICE_OBJECT DeviceObject;
 PIRP CurrentIrp;
    PIRP NotificationIrp;
    KMUTANT Mutex;
    KSPIN_LOCK SpinLock;
    struct {
        BOOLEAN Removed;
        LONG RefCount;
        KEVENT RemoveEvent;
  LIST_ENTRY TagList;
    } RemoveLock;
    PDEVICE_OBJECT DebugDeviceObject;
} OS_DEP_DATA, *POS_DEP_DATA;
