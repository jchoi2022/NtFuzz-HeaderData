extern "C" {
typedef struct
{
    PVOID UserContext;
    ULONG BufferSize;
    PUCHAR Buffer;
    UCHAR MinorFunction;
    UCHAR ReturnStatus;
    ULONG ReturnSize;
} SCSIWMI_REQUEST_CONTEXT, *PSCSIWMI_REQUEST_CONTEXT;
typedef struct
{
    LPCGUID Guid;
    ULONG InstanceCount;
    ULONG Flags;
} SCSIWMIGUIDREGINFO, *PSCSIWMIGUIDREGINFO;
typedef
_Must_inspect_result_
UCHAR
(*PSCSIWMI_QUERY_REGINFO) (
    _In_ PVOID DeviceContext,
    _In_ PSCSIWMI_REQUEST_CONTEXT RequestContext,
    _Out_ PWSTR *MofResourceName
    );
typedef
_Must_inspect_result_
BOOLEAN
(*PSCSIWMI_QUERY_DATABLOCK) (
    _In_ PVOID Context,
    _In_ PSCSIWMI_REQUEST_CONTEXT DispatchContext,
    _In_ ULONG GuidIndex,
    _In_ ULONG InstanceIndex,
    _In_ ULONG InstanceCount,
    _Inout_ PULONG InstanceLengthArray,
    _In_ ULONG BufferAvail,
    _Out_writes_bytes_(BufferAvail) PUCHAR Buffer
    );
typedef
_Must_inspect_result_
BOOLEAN
(*PSCSIWMI_SET_DATABLOCK) (
    _In_ PVOID DeviceContext,
    _In_ PSCSIWMI_REQUEST_CONTEXT RequestContext,
    _In_ ULONG GuidIndex,
    _In_ ULONG InstanceIndex,
    _In_ ULONG BufferSize,
    _In_reads_bytes_(BufferSize) PUCHAR Buffer
    );
typedef
_Must_inspect_result_
BOOLEAN
(*PSCSIWMI_SET_DATAITEM) (
    _In_ PVOID DeviceContext,
    _In_ PSCSIWMI_REQUEST_CONTEXT RequestContext,
    _In_ ULONG GuidIndex,
    _In_ ULONG InstanceIndex,
    _In_ ULONG DataItemId,
    _In_ ULONG BufferSize,
    _In_reads_bytes_(BufferSize) PUCHAR Buffer
    );
typedef
_Must_inspect_result_
BOOLEAN
(*PSCSIWMI_EXECUTE_METHOD) (
    _In_ PVOID DeviceContext,
    _In_ PSCSIWMI_REQUEST_CONTEXT RequestContext,
    _In_ ULONG GuidIndex,
    _In_ ULONG InstanceIndex,
    _In_ ULONG MethodId,
    _In_ ULONG InBufferSize,
    _In_ ULONG OutBufferSize,
    _Inout_updates_bytes_to_(InBufferSize, OutBufferSize) PUCHAR Buffer
    );
typedef enum
{
    ScsiWmiEventControl,
    ScsiWmiDataBlockControl
} SCSIWMI_ENABLE_DISABLE_CONTROL;
typedef
_Must_inspect_result_
BOOLEAN
(*PSCSIWMI_FUNCTION_CONTROL) (
    _In_ PVOID DeviceContext,
    _In_ PSCSIWMI_REQUEST_CONTEXT RequestContext,
    _In_ ULONG GuidIndex,
    _In_ SCSIWMI_ENABLE_DISABLE_CONTROL Function,
    _In_ BOOLEAN Enable
    );
typedef struct _SCSIWMILIB_CONTEXT
{
    ULONG GuidCount;
    PSCSIWMIGUIDREGINFO GuidList;
    PSCSIWMI_QUERY_REGINFO QueryWmiRegInfo;
    PSCSIWMI_QUERY_DATABLOCK QueryWmiDataBlock;
    PSCSIWMI_SET_DATABLOCK SetWmiDataBlock;
    PSCSIWMI_SET_DATAITEM SetWmiDataItem;
    PSCSIWMI_EXECUTE_METHOD ExecuteWmiMethod;
    PSCSIWMI_FUNCTION_CONTROL WmiFunctionControl;
} SCSI_WMILIB_CONTEXT, *PSCSI_WMILIB_CONTEXT;
VOID
ScsiPortWmiPostProcess(
    _Inout_ PSCSIWMI_REQUEST_CONTEXT RequestContext,
    _In_ UCHAR SrbStatus,
    _In_ ULONG BufferUsed
    );
_Must_inspect_result_
BOOLEAN
ScsiPortWmiDispatchFunction(
    _In_ PSCSI_WMILIB_CONTEXT WmiLibInfo,
    _In_ UCHAR MinorFunction,
    _In_ PVOID DeviceContext,
    _In_ PSCSIWMI_REQUEST_CONTEXT RequestContext,
    _In_ PVOID DataPath,
    _In_ ULONG BufferSize,
    _In_ PVOID Buffer
    );
    HwDeviceExtension, \
    Guid, \
    InstanceIndex, \
    EventDataSize, \
    EventData \
    ) \
        ScsiPortWmiFireLogicalUnitEvent(\
    HwDeviceExtension, \
    0xff, \
    0, \
    0, \
    Guid, \
    InstanceIndex, \
    EventDataSize, \
    EventData)
VOID
ScsiPortWmiFireLogicalUnitEvent(
    _In_ PVOID HwDeviceExtension,
    _In_ UCHAR PathId,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun,
    _In_ LPGUID Guid,
    _In_ ULONG InstanceIndex,
    _In_ ULONG EventDataSize,
    _In_ PVOID EventData
    );
    ( (RequestContext)->MinorFunction == WMI_GET_ALL_DATA )
_Must_inspect_result_
PWCHAR ScsiPortWmiGetInstanceName(
    _In_ PSCSIWMI_REQUEST_CONTEXT RequestContext
    );
_Must_inspect_result_
BOOLEAN ScsiPortWmiSetInstanceCount(
    _In_ PSCSIWMI_REQUEST_CONTEXT RequestContext,
    _In_ ULONG InstanceCount,
    _Out_ PULONG BufferAvail,
    _Out_ PULONG SizeNeeded
    );
_Must_inspect_result_
PWCHAR ScsiPortWmiSetInstanceName(
    _In_ PSCSIWMI_REQUEST_CONTEXT RequestContext,
    _In_ ULONG InstanceIndex,
    _In_ ULONG InstanceNameLength,
    _Out_ PULONG BufferAvail,
    _Inout_ PULONG SizeNeeded
    );
_Must_inspect_result_
PVOID ScsiPortWmiSetData(
    _In_ PSCSIWMI_REQUEST_CONTEXT RequestContext,
    _In_ ULONG InstanceIndex,
    _In_ ULONG DataLength,
    _Out_ PULONG BufferAvail,
    _Inout_ PULONG SizeNeeded
    );
}
