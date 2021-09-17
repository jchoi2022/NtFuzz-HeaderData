extern "C" {
typedef struct _WMIGUIDREGINFO {
    LPCGUID Guid;
    ULONG InstanceCount;
    ULONG Flags;
} WMIGUIDREGINFO, *PWMIGUIDREGINFO;
typedef enum _WMIENABLEDISABLECONTROL {
    WmiEventControl,
    WmiDataBlockControl
} WMIENABLEDISABLECONTROL, *PWMIENABLEDISABLECONTROL;
typedef enum _SYSCTL_IRP_DISPOSITION {
    IrpProcessed,
    IrpNotCompleted,
    IrpNotWmi,
    IrpForward
} SYSCTL_IRP_DISPOSITION, *PSYSCTL_IRP_DISPOSITION;
_Function_class_(WMI_QUERY_REGINFO_CALLBACK)
_IRQL_requires_same_
_Must_inspect_result_
typedef
NTSTATUS
WMI_QUERY_REGINFO_CALLBACK (
    _Inout_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PULONG RegFlags,
    _Inout_ PUNICODE_STRING InstanceName,
    _Outptr_result_maybenull_ PUNICODE_STRING *RegistryPath,
    _Inout_ PUNICODE_STRING MofResourceName,
    _Outptr_result_maybenull_ PDEVICE_OBJECT *Pdo
    );
typedef WMI_QUERY_REGINFO_CALLBACK *PWMI_QUERY_REGINFO;
_Function_class_(WMI_QUERY_DATABLOCK_CALLBACK)
_IRQL_requires_same_
_Must_inspect_result_
typedef
NTSTATUS
WMI_QUERY_DATABLOCK_CALLBACK (
    _Inout_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ ULONG InstanceIndex,
    _In_ ULONG InstanceCount,
    _Out_writes_opt_(InstanceCount) PULONG InstanceLengthArray,
    _In_ ULONG BufferAvail,
    _Out_writes_bytes_opt_(BufferAvail) PUCHAR Buffer
    );
typedef WMI_QUERY_DATABLOCK_CALLBACK *PWMI_QUERY_DATABLOCK;
_Function_class_(WMI_SET_DATABLOCK_CALLBACK)
_IRQL_requires_same_
_Must_inspect_result_
typedef
NTSTATUS
WMI_SET_DATABLOCK_CALLBACK (
    _Inout_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ ULONG InstanceIndex,
    _In_ ULONG BufferSize,
    _In_reads_bytes_(BufferSize) PUCHAR Buffer
    );
typedef WMI_SET_DATABLOCK_CALLBACK *PWMI_SET_DATABLOCK;
_Function_class_(WMI_SET_DATAITEM_CALLBACK)
_IRQL_requires_same_
_Must_inspect_result_
typedef
NTSTATUS
WMI_SET_DATAITEM_CALLBACK (
    _Inout_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ ULONG InstanceIndex,
    _In_ ULONG DataItemId,
    _In_ ULONG BufferSize,
    _In_reads_bytes_(BufferSize) PUCHAR Buffer
    );
typedef WMI_SET_DATAITEM_CALLBACK *PWMI_SET_DATAITEM;
_Function_class_(WMI_EXECUTE_METHOD_CALLBACK)
_IRQL_requires_same_
_Must_inspect_result_
typedef
NTSTATUS
WMI_EXECUTE_METHOD_CALLBACK (
    _Inout_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ ULONG InstanceIndex,
    _In_ ULONG MethodId,
    _In_ ULONG InBufferSize,
    _In_ ULONG OutBufferSize,
    _Inout_updates_bytes_(OutBufferSize) PUCHAR Buffer
    );
typedef WMI_EXECUTE_METHOD_CALLBACK *PWMI_EXECUTE_METHOD;
_Function_class_(WMI_FUNCTION_CONTROL_CALLBACK)
_IRQL_requires_same_
_Must_inspect_result_
typedef
NTSTATUS
WMI_FUNCTION_CONTROL_CALLBACK (
    _Inout_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ WMIENABLEDISABLECONTROL Function,
    _In_ BOOLEAN Enable
    );
typedef WMI_FUNCTION_CONTROL_CALLBACK *PWMI_FUNCTION_CONTROL;
typedef struct _WMILIB_CONTEXT {
    ULONG GuidCount;
    _Field_size_(GuidCount) PWMIGUIDREGINFO GuidList;
    PWMI_QUERY_REGINFO QueryWmiRegInfo;
    PWMI_QUERY_DATABLOCK QueryWmiDataBlock;
    PWMI_SET_DATABLOCK SetWmiDataBlock;
    PWMI_SET_DATAITEM SetWmiDataItem;
    PWMI_EXECUTE_METHOD ExecuteWmiMethod;
    PWMI_FUNCTION_CONTROL WmiFunctionControl;
} WMILIB_CONTEXT, *PWMILIB_CONTEXT;
_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS
WmiCompleteRequest (
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp,
    _In_ NTSTATUS Status,
    _In_ ULONG BufferUsed,
    _In_ CCHAR PriorityBoost
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Success_(TRUE)
NTSTATUS
WmiSystemControl (
    _In_ PWMILIB_CONTEXT WmiLibInfo,
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp,
    _Out_ _At_(*IrpDisposition, _Must_inspect_result_) PSYSCTL_IRP_DISPOSITION IrpDisposition
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_Success_(TRUE)
NTSTATUS
WmiFireEvent (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ LPCGUID Guid,
    _In_ ULONG InstanceIndex,
    _In_ ULONG EventDataSize,
    _In_reads_bytes_opt_(EventDataSize) __drv_freesMem(Mem) PVOID EventData
    );
}
