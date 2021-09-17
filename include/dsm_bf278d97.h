#include <ntddk.h>
#include <scsi.h>
#include <ntddscsi.h>
#include <ntddstor.h>
#include <wmistr.h>
#include <wmiguid.h>
#include <wmilib.h>
#pragma warning(disable:4201)
typedef struct _DSM_IDS {
    ULONG Count;
    PVOID IdList[1];
} DSM_IDS, *PDSM_IDS;
    #define PTRALIGN 
typedef struct _SCSI_PASS_THROUGH_WITH_BUFFERS {
    SCSI_PASS_THROUGH ScsiPassThrough;
    PTRALIGN UCHAR SenseInfoBuffer[SPTWB_SENSE_LENGTH];
    PTRALIGN UCHAR DataBuffer[SPTWB_DATA_LENGTH];
} SCSI_PASS_THROUGH_WITH_BUFFERS, *PSCSI_PASS_THROUGH_WITH_BUFFERS;
typedef struct _SCSI_PASS_THROUGH_DIRECT_WITH_BUFFER {
    SCSI_PASS_THROUGH_DIRECT ScsiPassThroughDirect;
    PTRALIGN UCHAR SenseInfoBuffer[SPTWB_SENSE_LENGTH];
} SCSI_PASS_THROUGH_DIRECT_WITH_BUFFER, *PSCSI_PASS_THROUGH_DIRECT_WITH_BUFFER;
typedef
NTSTATUS
(*DSM_INQUIRE_DRIVER) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDEVICE_OBJECT TargetDevice,
    _In_ IN PDEVICE_OBJECT PortFdo,
    _In_ IN PSTORAGE_DEVICE_DESCRIPTOR Descriptor,
    _In_ IN PSTORAGE_DEVICE_ID_DESCRIPTOR DeviceIdList,
    _Out_ OUT PVOID *DsmIdentifier
    );
typedef
BOOLEAN
(*DSM_COMPARE_DEVICES) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId1,
    _In_ IN PVOID DsmId2
    );
typedef struct _CONTROLLER_IDS {
    STORAGE_IDENTIFIER_CODE_SET Type;
    ULONG Length;
    UCHAR SerialNumber[32];
} CONTROLLER_IDS, *PCONTROLLER_IDS;
typedef struct _CONTROLLER_INFO {
    PDEVICE_OBJECT DeviceObject;
    CONTROLLER_IDS Identifier;
    ULONG State;
} CONTROLLER_INFO, *PCONTROLLER_INFO;
typedef
NTSTATUS
(*DSM_GET_CONTROLLER_INFO) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId,
    _In_ IN ULONG Flags,
    _Inout_ IN OUT PCONTROLLER_INFO *ControllerInfo
    );
typedef
PUCHAR
(*DSM_DEVICE_SERIAL_NUMBER) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId
    );
typedef
NTSTATUS
(*DSM_SET_DEVICE_INFO) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDEVICE_OBJECT TargetObject,
    _In_ IN PVOID DsmId,
    _Inout_ IN OUT PVOID *PathId
    );
typedef
BOOLEAN
(*DSM_IS_PATH_ACTIVE) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID PathId,
    _In_ IN PVOID DsmId
    );
typedef
ULONG
(*DSM_INTERPRET_ERROR) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId,
    _In_ IN PSCSI_REQUEST_BLOCK Srb,
    _Inout_ IN OUT PNTSTATUS Status,
    _Out_ OUT PBOOLEAN Retry
    );
typedef
ULONG
(*DSM_INTERPRET_ERROR_EX) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId,
    _In_ IN PSCSI_REQUEST_BLOCK Srb,
    _Inout_ IN OUT PNTSTATUS Status,
    _Out_ OUT PBOOLEAN Retry,
    _Out_ OUT PLONG RetryInterval,
    ...
    );
typedef
NTSTATUS
(*DSM_INVALIDATE_PATH) (
    _In_ IN PVOID DsmContext,
    _In_ IN ULONG ErrorMask,
    _In_ IN PVOID PathId,
    _Inout_ IN OUT PVOID *NewPathId
    );
typedef
NTSTATUS
(*DSM_PATH_VERIFY) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId,
    _In_ IN PVOID PathId
    );
typedef
NTSTATUS
(*DSM_MOVE_DEVICE) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDSM_IDS DsmIds,
    _In_ IN PVOID MPIOPath,
    _In_ IN PVOID SuggestedPath,
    _In_ IN ULONG Flags
    );
typedef
NTSTATUS
(*DSM_REMOVE_PENDING) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId
    );
typedef
NTSTATUS
(*DSM_REMOVE_DEVICE) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId,
    _In_ IN PVOID PathId
    );
typedef
NTSTATUS
(*DSM_REMOVE_PATH) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID PathId
    );
typedef
ULONG
(*DSM_CATEGORIZE_REQUEST) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDSM_IDS DsmIds,
    _In_ IN PIRP Irp,
    _In_ IN PSCSI_REQUEST_BLOCK Srb,
    _In_ IN PVOID CurrentPath,
    _Outptr_result_maybenull_ OUT PVOID *PathId,
    _Out_ OUT NTSTATUS *Status
    );
typedef
NTSTATUS
(*DSM_BROADCAST_SRB) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDSM_IDS DsmIds,
    _In_ IN PIRP Irp,
    _In_ IN PSCSI_REQUEST_BLOCK Srb,
    _In_ IN PKEVENT Event
    );
typedef
NTSTATUS
(*DSM_SRB_DEVICE_CONTROL) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDSM_IDS DsmIds,
    _In_ IN PIRP Irp,
    _In_ IN PSCSI_REQUEST_BLOCK Srb,
    _In_ IN PKEVENT Event
    );
typedef
VOID
(*DSM_COMPLETION_ROUTINE) (
    _In_ IN PVOID DsmId,
    _In_ IN PIRP Irp,
    _In_ IN PSCSI_REQUEST_BLOCK Srb,
    _In_ IN PVOID DsmContext
    );
typedef struct _DSM_COMPLETION_INFO {
    DSM_COMPLETION_ROUTINE DsmCompletionRoutine;
    PVOID DsmContext;
} DSM_COMPLETION_INFO, *PDSM_COMPLETION_INFO;
typedef
VOID
(*DSM_SET_COMPLETION) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId,
    _In_ IN PIRP Irp,
    _In_ IN PSCSI_REQUEST_BLOCK Srb,
    _Inout_ IN OUT PDSM_COMPLETION_INFO DsmCompletion
    );
typedef
PVOID
(*DSM_LB_GET_PATH) (
    _In_ IN PVOID DsmContext,
    _In_ IN PSCSI_REQUEST_BLOCK Srb,
    _In_ IN PDSM_IDS DsmList,
    _In_ IN PVOID CurrentPath,
    _Out_ OUT NTSTATUS *Status
    );
typedef
NTSTATUS
(*DSM_QUERY_DATABLOCK) (
    _In_ IN PVOID DsmContext,
    _In_ IN PIRP Irp,
    _In_ IN ULONG GuidIndex,
    _In_ IN ULONG InstanceIndex,
    _In_ IN ULONG InstanceCount,
    _Inout_ IN OUT PULONG InstanceLengthArray,
    _In_ IN ULONG BufferAvail,
    _Out_ OUT PUCHAR Buffer,
    _Out_ OUT PULONG DsmDataLength
    );
typedef
NTSTATUS
(*DSM_SET_DATABLOCK) (
    _In_ IN PVOID DsmContext,
    _In_ IN PIRP Irp,
    _In_ IN ULONG GuidIndex,
    _In_ IN ULONG InstanceIndex,
    _In_ IN ULONG BufferSize,
    _In_ IN PUCHAR Buffer
    );
typedef
NTSTATUS
(*DSM_EXECUTE_METHOD) (
    _In_ IN PVOID DsmContext,
    _In_ IN PIRP Irp,
    _In_ IN ULONG GuidIndex,
    _In_ IN ULONG InstanceIndex,
    _In_ IN ULONG MethodId,
    _In_ IN ULONG InBufferSize,
    _In_ IN PULONG OutBufferSize,
    _Inout_ IN OUT PUCHAR Buffer
    );
typedef
NTSTATUS
(*DSM_FUNCTION_CONTROL) (
    _In_ IN PVOID DsmContext,
    _In_ IN PIRP Irp,
    _In_ IN ULONG GuidIndex,
    _In_ IN WMIENABLEDISABLECONTROL Function,
    _In_ IN BOOLEAN Enable
    );
typedef
NTSTATUS
(*DSM_QUERY_DATABLOCK_EX) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDSM_IDS DsmIds,
    _In_ IN PIRP Irp,
    _In_ IN ULONG GuidIndex,
    _In_ IN ULONG InstanceIndex,
    _In_ IN ULONG InstanceCount,
    _Inout_ IN OUT PULONG InstanceLengthArray,
    _In_ IN ULONG BufferAvail,
    _Out_ OUT PUCHAR Buffer,
    _Out_ OUT PULONG DsmDataLength,
    ...
    );
typedef
NTSTATUS
(*DSM_SET_DATABLOCK_EX) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDSM_IDS DsmIds,
    _In_ IN PIRP Irp,
    _In_ IN ULONG GuidIndex,
    _In_ IN ULONG InstanceIndex,
    _In_ IN ULONG BufferSize,
    _In_ IN PUCHAR Buffer,
    ...
    );
typedef
NTSTATUS
(*DSM_EXECUTE_METHOD_EX) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDSM_IDS DsmIds,
    _In_ IN PIRP Irp,
    _In_ IN ULONG GuidIndex,
    _In_ IN ULONG InstanceIndex,
    _In_ IN ULONG MethodId,
    _In_ IN ULONG InBufferSize,
    _In_ IN PULONG OutBufferSize,
    _Inout_ IN OUT PUCHAR Buffer,
    ...
    );
typedef
NTSTATUS
(*DSM_FUNCTION_CONTROL_EX) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDSM_IDS DsmIds,
    _In_ IN PIRP Irp,
    _In_ IN ULONG GuidIndex,
    _In_ IN WMIENABLEDISABLECONTROL Function,
    _In_ IN BOOLEAN Enable,
    ...
    );
typedef struct _DSM_WMILIB_CONTEXT {
    ULONG GuidCount;
    PWMIGUIDREGINFO GuidList;
    UNICODE_STRING RegistryPath;
    UNICODE_STRING MofResourceName;
    union {
        DSM_QUERY_DATABLOCK QueryWmiDataBlock;
        DSM_QUERY_DATABLOCK_EX QueryWmiDataBlockEx;
    };
    union {
        DSM_SET_DATABLOCK SetWmiDataBlock;
        DSM_SET_DATABLOCK_EX SetWmiDataBlockEx;
    };
    union {
        DSM_EXECUTE_METHOD ExecuteWmiMethod;
        DSM_EXECUTE_METHOD_EX ExecuteWmiMethodEx;
    };
    union {
        DSM_FUNCTION_CONTROL WmiFunctionControl;
        DSM_FUNCTION_CONTROL_EX WmiFunctionControlEx;
    };
} DSM_WMILIB_CONTEXT, *PDSM_WMILIB_CONTEXT;
typedef
BOOLEAN
(*DSM_ADDRESS_TYPE_SUPPORTED) (
    _In_ IN PVOID DsmContext,
    _In_ IN ULONG AddressType
    );
typedef
NTSTATUS
(*DSM_DEVICE_NOT_USED) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId
    );
typedef
NTSTATUS
(*DSM_UNLOAD) (
    _In_ IN PVOID DsmContext
    );
typedef enum _DSM_TYPE {
    DsmTypeUnknown = 0,
    DsmType1,
    DsmType2,
    DsmType3,
    DsmType4,
    DsmType5,
    DsmType6,
    DsmType7
} DSM_TYPE, *PDSM_TYPE;
typedef struct _DSM_VERSION_INFO {
    ULONG MajorVersion;
    ULONG MinorVersion;
    ULONG ProductBuild;
    ULONG QfeNumber;
} DSM_VERSION_INFO, *PDSM_VERSION_INFO;
typedef struct _DSM_INIT_DATA {
    ULONG InitDataSize;
    DSM_INQUIRE_DRIVER DsmInquireDriver;
    DSM_COMPARE_DEVICES DsmCompareDevices;
    DSM_DEVICE_SERIAL_NUMBER DsmDeviceSerialNumber;
    DSM_GET_CONTROLLER_INFO DsmGetControllerInfo;
    DSM_SET_DEVICE_INFO DsmSetDeviceInfo;
    DSM_IS_PATH_ACTIVE DsmIsPathActive;
    DSM_PATH_VERIFY DsmPathVerify;
    DSM_INVALIDATE_PATH DsmInvalidatePath;
    DSM_MOVE_DEVICE DsmMoveDevice;
    DSM_REMOVE_PENDING DsmRemovePending;
    DSM_REMOVE_DEVICE DsmRemoveDevice;
    DSM_REMOVE_PATH DsmRemovePath;
    DSM_SRB_DEVICE_CONTROL DsmSrbDeviceControl;
    DSM_LB_GET_PATH DsmLBGetPath;
    union {
        DSM_INTERPRET_ERROR DsmInterpretError;
        DSM_INTERPRET_ERROR_EX DsmInterpretErrorEx;
    };
    DSM_UNLOAD DsmUnload;
    DSM_SET_COMPLETION DsmSetCompletion;
    DSM_CATEGORIZE_REQUEST DsmCategorizeRequest;
    DSM_BROADCAST_SRB DsmBroadcastSrb;
    DSM_WMILIB_CONTEXT DsmWmiInfo;
    PVOID DsmContext;
    PDRIVER_OBJECT DriverObject;
    UNICODE_STRING DisplayName;
    ULONG Reserved;
    DSM_TYPE DsmType;
    DSM_VERSION_INFO DsmVersion;
    DSM_WMILIB_CONTEXT DsmWmiGlobalInfo;
    DSM_ADDRESS_TYPE_SUPPORTED DsmIsAddressTypeSupported;
    DSM_DEVICE_NOT_USED DsmDeviceNotUsed;
} DSM_INIT_DATA, *PDSM_INIT_DATA;
typedef struct _MPIO_VERSION_INFO {
    ULONG MajorVersion;
    ULONG MinorVersion;
    ULONG ProductBuild;
    ULONG QfeNumber;
} MPIO_VERSION_INFO, *PMPIO_VERSION_INFO;
typedef struct _DSM_MPIO_CONTEXT {
    PVOID MPIOContext;
} DSM_MPIO_CONTEXT, *PDSM_MPIO_CONTEXT;
typedef struct _DSM_DEREGISTER_DATA {
    ULONG DeregisterDataSize;
    PVOID DsmContext;
    PDRIVER_OBJECT DriverObject;
    PDSM_MPIO_CONTEXT MpioContext;
} DSM_DEREGISTER_DATA, *PDSM_DEREGISTER_DATA;
VOID
DsmSendDeviceIoControlSynchronous(
    _In_ IN ULONG IoControlCode,
    _In_ IN PDEVICE_OBJECT TargetDeviceObject,
    _In_opt_ IN PVOID InputBuffer OPTIONAL,
    _Inout_opt_ IN OUT PVOID OutputBuffer OPTIONAL,
    _In_ IN ULONG InputBufferLength,
    _In_ IN ULONG OutputBufferLength,
    _In_ IN BOOLEAN InternalDeviceIoControl,
    _Out_ OUT PIO_STATUS_BLOCK IoStatus
    );
NTSTATUS
DsmSendPassThroughDirect(
    _In_ IN PDEVICE_OBJECT DeviceObject,
    _In_ IN PSCSI_PASS_THROUGH_DIRECT ScsiPassThrough,
    _In_ IN ULONG InputBufferLength,
    _In_ IN ULONG OutputBufferLength
    );
NTSTATUS
DsmGetScsiAddress(
    _In_ IN PDEVICE_OBJECT DeviceObject,
    _Outptr_ OUT PSCSI_ADDRESS *ScsiAddress
    );
PDSM_IDS
DsmGetAssociatedDevice(
    _In_ IN PVOID MPIOContext,
    _In_ IN PDEVICE_OBJECT PortFdo,
    _In_ IN UCHAR DeviceType
    );
NTSTATUS
DsmReleaseQueue(
    _In_ IN PDEVICE_OBJECT TargetDevice
    );
NTSTATUS
DsmSendTUR(
    _In_ IN PDEVICE_OBJECT TargetDevice
    );
NTSTATUS
DsmSendRequest(
    _In_ IN PVOID MPIOContext,
    _In_ IN PDEVICE_OBJECT TargetDevice,
    _In_ IN PIRP Irp,
    _In_ IN PVOID DsmId
    );
NTSTATUS
DsmSendRequestEx(
    _In_ IN PVOID MPIOContext,
    _In_ IN PDEVICE_OBJECT TargetDevice,
    _In_ IN PIRP Irp,
    _In_ IN PVOID DsmId,
    _In_ IN ULONG Flags
    );
VOID
DsmCompleteRequest(
    _In_ IN PVOID MPIOContext,
    _In_ IN PVOID DsmId
    );
PDEVICE_OBJECT
DsmGetPDO(
    _In_ IN PVOID MPIOContext,
    _In_ IN PDEVICE_OBJECT DeviceObject
    );
typedef enum _DSM_NOTIFICATION_TYPE {
     DeviceFailure,
     PathFailure,
     PathOnLine,
     ThrottleIO,
     ResumeIO,
     SetCurrentPath,
     ThrottleIO_V2,
     ResumeIO_V2,
     SetCurrentPath_V2,
     MaxDsmNotificationType
} DSM_NOTIFICATION_TYPE, *PDSM_NOTIFICATION_TYPE;
VOID
DsmNotification(
    _In_ IN PVOID MPIOContext,
    _In_ IN DSM_NOTIFICATION_TYPE NotificationType,
    ...
    );
NTSTATUS
DsmWriteEvent(
    _In_ IN PVOID MPIOContext,
    _In_ IN PWSTR ComponentName,
    _In_ IN PWSTR EventDescription,
    _In_ IN ULONG Severity
    );
NTSTATUS
DsmGetVersion(
    _Inout_ IN OUT PMPIO_VERSION_INFO MpioVersion,
    _In_ IN ULONG MpioVersionSize
    );
PVOID
DsmGetContextFromSrb(
    _In_ IN PSCSI_REQUEST_BLOCK Srb
    );
