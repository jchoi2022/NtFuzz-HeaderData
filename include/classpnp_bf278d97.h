#include <ntdddisk.h>
#include <ntddcdrm.h>
#include <ntddtape.h>
#include <ntddscsi.h>
#include "ntddstor.h"
#include <stdio.h>
#include <scsi.h>
    #undef TRY
    #undef LEAVE
    #undef FINALLY
typedef enum _CLASS_DEBUG_LEVEL {
    ClassDebugError = 0,
    ClassDebugWarning = 1,
    ClassDebugTrace = 2,
    ClassDebugInfo = 3,
#if 0
    ClassDebug Internal = 4,
    ClassDebug Internal = 5,
    ClassDebug Internal = 6,
    ClassDebug Internal = 7,
#endif
    ClassDebugMediaLocks = 8,
    ClassDebugMCN = 9,
    ClassDebugDelayedRetry = 10,
    ClassDebugSenseInfo = 11,
    ClassDebugRemoveLock = 12,
    ClassDebugExternal4 = 13,
    ClassDebugExternal3 = 14,
    ClassDebugExternal2 = 15,
    ClassDebugExternal1 = 16
} CLASS_DEBUG_LEVEL, *PCLASS_DEBUG_LEVEL;
__inline ULONG CountOfSetBitsUChar(UCHAR _X)
{ ULONG i = 0; while (_X) { _X &= _X - 1; i++; } return i; }
__inline ULONG CountOfSetBitsULong(ULONG _X)
{ ULONG i = 0; while (_X) { _X &= _X - 1; i++; } return i; }
__inline ULONG CountOfSetBitsULong32(ULONG32 _X)
{ ULONG i = 0; while (_X) { _X &= _X - 1; i++; } return i; }
__inline ULONG CountOfSetBitsULong64(ULONG64 _X)
{ ULONG i = 0; while (_X) { _X &= _X - 1; i++; } return i; }
__inline ULONG CountOfSetBitsUlongPtr(ULONG_PTR _X)
{ ULONG i = 0; while (_X) { _X &= _X - 1; i++; } return i; }
    NT_ASSERT(((PCOMMON_DEVICE_EXTENSION) (x)->DeviceExtension)->IsFdo)
    NT_ASSERT(!(((PCOMMON_DEVICE_EXTENSION) (x)->DeviceExtension)->IsFdo))
        ((majorFunction == IRP_MJ_CLOSE) || \
         (majorFunction == IRP_MJ_CLEANUP) || \
         (majorFunction == IRP_MJ_SHUTDOWN))
    (((fdoExtension)->MediaChangeDetectionInfo != NULL) && \
     ((fdoExtension)->MediaChangeDetectionInfo->MediaChangeDetectionDisableCount == 0))
      ((opCode == SCSIOP_READ6) || \
       (opCode == SCSIOP_READ) || \
       (opCode == SCSIOP_READ12) || \
       (opCode == SCSIOP_READ16))
      ((opCode == SCSIOP_WRITE6) || \
       (opCode == SCSIOP_WRITE) || \
       (opCode == SCSIOP_WRITE12) || \
       (opCode == SCSIOP_WRITE16))
    if (TEST_FLAG(fdoExt->DeviceFlags, DEV_WRITE_CACHE) && \
        !TEST_FLAG(fdoExt->DeviceFlags, DEV_POWER_PROTECTED) && \
        !TEST_FLAG(fdoExt->ScanForSpecialFlags, CLASS_SPECIAL_FUA_NOT_SUPPORTED) ) { \
        fdoExt->CdbForceUnitAccess = TRUE; \
    } else { \
        fdoExt->CdbForceUnitAccess = FALSE; \
    } \
}
    if (_PoolPtr != NULL) { \
        ExFreePool(_PoolPtr); \
        _PoolPtr = NULL; \
    }
struct _CLASS_INIT_DATA;
typedef struct _CLASS_INIT_DATA
                CLASS_INIT_DATA,
                *PCLASS_INIT_DATA;
struct _CLASS_PRIVATE_FDO_DATA;
typedef struct _CLASS_PRIVATE_FDO_DATA
                CLASS_PRIVATE_FDO_DATA,
              *PCLASS_PRIVATE_FDO_DATA;
struct _CLASS_PRIVATE_PDO_DATA;
typedef struct _CLASS_PRIVATE_PDO_DATA
                CLASS_PRIVATE_PDO_DATA,
              *PCLASS_PRIVATE_PDO_DATA;
struct _CLASS_PRIVATE_COMMON_DATA;
typedef struct _CLASS_PRIVATE_COMMON_DATA
                CLASS_PRIVATE_COMMON_DATA,
              *PCLASS_PRIVATE_COMMON_DATA;
    ClassAcquireRemoveLockEx(devobj, tag, __FILE__, __LINE__)
typedef enum _MEDIA_CHANGE_DETECTION_STATE {
    MediaUnknown,
    MediaPresent,
    MediaNotPresent,
    MediaUnavailable
} MEDIA_CHANGE_DETECTION_STATE, *PMEDIA_CHANGE_DETECTION_STATE;
struct _MEDIA_CHANGE_DETECTION_INFO;
typedef struct _MEDIA_CHANGE_DETECTION_INFO
    MEDIA_CHANGE_DETECTION_INFO, *PMEDIA_CHANGE_DETECTION_INFO;
struct _DICTIONARY_HEADER;
typedef struct _DICTIONARY_HEADER DICTIONARY_HEADER, *PDICTIONARY_HEADER;
typedef struct _DICTIONARY {
    ULONGLONG Signature;
    PDICTIONARY_HEADER List;
    KSPIN_LOCK SpinLock;
} DICTIONARY, *PDICTIONARY;
typedef struct _CLASSPNP_SCAN_FOR_SPECIAL_INFO {
    PCHAR VendorId;
    PCHAR ProductId;
    PCHAR ProductRevision;
    ULONG_PTR Data;
} CLASSPNP_SCAN_FOR_SPECIAL_INFO, *PCLASSPNP_SCAN_FOR_SPECIAL_INFO;
    ExAllocatePoolWithTag(NonPagedPool, \
                          sizeof(SCSI_REQUEST_BLOCK), \
                          'sBRS')
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
VOID
(*PCLASS_ERROR) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _Out_ NTSTATUS *Status,
    _Inout_ BOOLEAN *Retry
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_ADD_DEVICE) (
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDEVICE_OBJECT Pdo
    );
typedef
NTSTATUS
(*PCLASS_POWER_DEVICE) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_START_DEVICE) (
    _In_ PDEVICE_OBJECT DeviceObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_STOP_DEVICE) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ UCHAR Type
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_INIT_DEVICE) (
    _In_ PDEVICE_OBJECT DeviceObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_ENUM_DEVICE) (
    _In_ PDEVICE_OBJECT DeviceObject
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
NTSTATUS
(*PCLASS_READ_WRITE) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
NTSTATUS
(*PCLASS_DEVICE_CONTROL) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
NTSTATUS
(*PCLASS_SHUTDOWN_FLUSH) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_CREATE_CLOSE) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_QUERY_ID) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ BUS_QUERY_ID_TYPE IdType,
    _In_ PUNICODE_STRING IdString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_REMOVE_DEVICE) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ UCHAR Type
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
VOID
(*PCLASS_UNLOAD) (
    _In_ PDRIVER_OBJECT DriverObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_QUERY_PNP_CAPABILITIES) (
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ PDEVICE_CAPABILITIES Capabilities
    );
_IRQL_requires_(DISPATCH_LEVEL)
typedef
VOID
(*PCLASS_TICK) (
    _In_ PDEVICE_OBJECT DeviceObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_QUERY_WMI_REGINFO_EX) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _Out_ ULONG *RegFlags,
    _Out_ PUNICODE_STRING Name,
    _Out_ PUNICODE_STRING MofResouceName
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_QUERY_WMI_REGINFO) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _Out_ ULONG *RegFlags,
    _Out_ PUNICODE_STRING Name
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_QUERY_WMI_DATABLOCK) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ ULONG BufferAvail,
    _Out_writes_bytes_(BufferAvail) PUCHAR Buffer
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_SET_WMI_DATABLOCK) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ ULONG BufferSize,
    _In_reads_bytes_(BufferSize) PUCHAR Buffer
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_SET_WMI_DATAITEM) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ ULONG DataItemId,
    _In_ ULONG BufferSize,
    _In_reads_bytes_(BufferSize) PUCHAR Buffer
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_EXECUTE_WMI_METHOD) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ ULONG MethodId,
    _In_ ULONG InBufferSize,
    _In_ ULONG OutBufferSize,
    _In_reads_(_Inexpressible_(max(InBufferSize, OutBufferSize))) PUCHAR Buffer
    );
typedef enum {
    EventGeneration,
    DataBlockCollection
} CLASSENABLEDISABLEFUNCTION;
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_WMI_FUNCTION_CONTROL) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ CLASSENABLEDISABLEFUNCTION Function,
    _In_ BOOLEAN Enable
    );
typedef struct _SRB_HISTORY_ITEM {
    LARGE_INTEGER TickCountSent;
    LARGE_INTEGER TickCountCompleted;
    ULONG MillisecondsDelayOnRetry;
    SENSE_DATA NormalizedSenseData;
    UCHAR SrbStatus;
    UCHAR ClassDriverUse;
} SRB_HISTORY_ITEM, *PSRB_HISTORY_ITEM;
typedef struct _SRB_HISTORY {
    ULONG_PTR ClassDriverUse[4];
    _Field_range_(1,30000)
    ULONG TotalHistoryCount;
    _Field_range_(0,TotalHistoryCount)
    ULONG UsedHistoryCount;
    _Field_size_part_(TotalHistoryCount, UsedHistoryCount)
    SRB_HISTORY_ITEM History[1];
} SRB_HISTORY, *PSRB_HISTORY;
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
BOOLEAN
(*PCLASS_INTERPRET_SENSE_INFO) (
    _In_ PDEVICE_OBJECT Fdo,
    _In_opt_ PIRP OriginalRequest,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _In_ UCHAR MajorFunctionCode,
    _In_ ULONG IoDeviceCode,
    _In_ ULONG PreviousRetryCount,
    _In_opt_ SRB_HISTORY * RequestHistory,
    _Out_ NTSTATUS * Status,
    _Out_ _Deref_out_range_(0,MAXIMUM_RETRY_FOR_SINGLE_IO_IN_100NS_UNITS)
              LONGLONG * RetryIn100nsUnits
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_At_(RequestHistory->UsedHistoryCount,
     _Pre_equal_to_(RequestHistory->TotalHistoryCount)
     _Out_range_(0, RequestHistory->TotalHistoryCount - 1))
typedef
VOID
(*PCLASS_COMPRESS_RETRY_HISTORY_DATA) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PSRB_HISTORY RequestHistory
    );
typedef struct {
    GUID Guid;
    ULONG InstanceCount;
    ULONG Flags;
} GUIDREGINFO, *PGUIDREGINFO;
typedef struct _CLASS_WMI_INFO {
    ULONG GuidCount;
    PGUIDREGINFO GuidRegInfo;
    PCLASS_QUERY_WMI_REGINFO ClassQueryWmiRegInfo;
    PCLASS_QUERY_WMI_DATABLOCK ClassQueryWmiDataBlock;
    PCLASS_SET_WMI_DATABLOCK ClassSetWmiDataBlock;
    PCLASS_SET_WMI_DATAITEM ClassSetWmiDataItem;
    PCLASS_EXECUTE_WMI_METHOD ClassExecuteWmiMethod;
    PCLASS_WMI_FUNCTION_CONTROL ClassWmiFunctionControl;
} CLASS_WMI_INFO, *PCLASS_WMI_INFO;
typedef struct _CLASS_DEV_INFO {
    ULONG DeviceExtensionSize;
    DEVICE_TYPE DeviceType;
    UCHAR StackSize;
    ULONG DeviceCharacteristics;
    PCLASS_ERROR ClassError;
    PCLASS_READ_WRITE ClassReadWriteVerification;
    PCLASS_DEVICE_CONTROL ClassDeviceControl;
    PCLASS_SHUTDOWN_FLUSH ClassShutdownFlush;
    PCLASS_CREATE_CLOSE ClassCreateClose;
    PCLASS_INIT_DEVICE ClassInitDevice;
    PCLASS_START_DEVICE ClassStartDevice;
    PCLASS_POWER_DEVICE ClassPowerDevice;
    PCLASS_STOP_DEVICE ClassStopDevice;
    PCLASS_REMOVE_DEVICE ClassRemoveDevice;
    PCLASS_QUERY_PNP_CAPABILITIES ClassQueryPnpCapabilities;
    CLASS_WMI_INFO ClassWmiInfo;
} CLASS_DEV_INFO, *PCLASS_DEV_INFO;
struct _CLASS_INIT_DATA {
    ULONG InitializationDataSize;
    CLASS_DEV_INFO FdoData;
    CLASS_DEV_INFO PdoData;
    PCLASS_ADD_DEVICE ClassAddDevice;
    PCLASS_ENUM_DEVICE ClassEnumerateDevice;
    PCLASS_QUERY_ID ClassQueryId;
    PDRIVER_STARTIO ClassStartIo;
    PCLASS_UNLOAD ClassUnload;
    PCLASS_TICK ClassTick;
};
typedef struct _FILE_OBJECT_EXTENSION {
    PFILE_OBJECT FileObject;
    PDEVICE_OBJECT DeviceObject;
    ULONG LockCount;
    ULONG McnDisableCount;
} FILE_OBJECT_EXTENSION, *PFILE_OBJECT_EXTENSION;
typedef struct _CLASS_WORKING_SET
{
    _Field_range_(sizeof(CLASS_WORKING_SET),sizeof(CLASS_WORKING_SET))
    ULONG Size;
    _Field_range_(0,2048)
    ULONG XferPacketsWorkingSetMaximum;
    _Field_range_(0,2048)
    ULONG XferPacketsWorkingSetMinimum;
} CLASS_WORKING_SET, *PCLASS_WORKING_SET;
typedef struct _CLASS_INTERPRET_SENSE_INFO2
{
    _Field_range_(sizeof(CLASS_INTERPRET_SENSE_INFO2),sizeof(CLASS_INTERPRET_SENSE_INFO2))
    ULONG Size;
    _Field_range_(1,30000)
    ULONG HistoryCount;
    __callback PCLASS_COMPRESS_RETRY_HISTORY_DATA Compress;
    __callback PCLASS_INTERPRET_SENSE_INFO Interpret;
} CLASS_INTERPRET_SENSE_INFO2, *PCLASS_INTERPRET_SENSE_INFO2;
C_ASSERT( (MAXULONG - sizeof(SRB_HISTORY)) / 30000 >= sizeof(SRB_HISTORY_ITEM) );
typedef struct _CLASS_DRIVER_EXTENSION {
    UNICODE_STRING RegistryPath;
    CLASS_INIT_DATA InitData;
    ULONG DeviceCount;
    PCLASS_QUERY_WMI_REGINFO_EX ClassFdoQueryWmiRegInfoEx;
    PCLASS_QUERY_WMI_REGINFO_EX ClassPdoQueryWmiRegInfoEx;
    REGHANDLE EtwHandle;
    PDRIVER_DISPATCH DeviceMajorFunctionTable[IRP_MJ_MAXIMUM_FUNCTION + 1];
    PDRIVER_DISPATCH MpDeviceMajorFunctionTable[IRP_MJ_MAXIMUM_FUNCTION + 1];
    PCLASS_INTERPRET_SENSE_INFO2 InterpretSenseInfo;
    PCLASS_WORKING_SET WorkingSet;
    ULONG SrbSupport;
} CLASS_DRIVER_EXTENSION, *PCLASS_DRIVER_EXTENSION;
typedef struct _COMMON_DEVICE_EXTENSION COMMON_DEVICE_EXTENSION, *PCOMMON_DEVICE_EXTENSION;
typedef struct _FUNCTIONAL_DEVICE_EXTENSION FUNCTIONAL_DEVICE_EXTENSION, *PFUNCTIONAL_DEVICE_EXTENSION;
typedef struct _PHYSICAL_DEVICE_EXTENSION PHYSICAL_DEVICE_EXTENSION, *PPHYSICAL_DEVICE_EXTENSION;
typedef struct _COMMON_DEVICE_EXTENSION {
    ULONG Version;
    PDEVICE_OBJECT DeviceObject;
    PDEVICE_OBJECT LowerDeviceObject;
    PFUNCTIONAL_DEVICE_EXTENSION PartitionZeroExtension;
    PCLASS_DRIVER_EXTENSION DriverExtension;
    LONG RemoveLock;
    KEVENT RemoveEvent;
    KSPIN_LOCK RemoveTrackingSpinlock;
    PVOID RemoveTrackingList;
    LONG RemoveTrackingUntrackedCount;
    PVOID DriverData;
#pragma warning(disable:4214)
#pragma warning(disable:4201)
    struct {
        BOOLEAN IsFdo : 1;
        BOOLEAN IsInitialized : 1;
        BOOLEAN IsSrbLookasideListInitialized : 1;
    };
    UCHAR PreviousState;
    UCHAR CurrentState;
    ULONG IsRemoved;
    UNICODE_STRING DeviceName;
    PPHYSICAL_DEVICE_EXTENSION ChildList;
    ULONG PartitionNumber;
    LARGE_INTEGER PartitionLength;
    LARGE_INTEGER StartingOffset;
    PCLASS_DEV_INFO DevInfo;
    ULONG PagingPathCount;
    ULONG DumpPathCount;
    ULONG HibernationPathCount;
    KEVENT PathCountEvent;
    NPAGED_LOOKASIDE_LIST SrbLookasideList;
    UNICODE_STRING MountedDeviceInterfaceName;
    ULONG GuidCount;
    PGUIDREGINFO GuidRegInfo;
    DICTIONARY FileObjectDictionary;
    PCLASS_PRIVATE_COMMON_DATA PrivateCommonData;
    PDRIVER_DISPATCH *DispatchTable;
    ULONG_PTR Reserved3;
    ULONG_PTR Reserved4;
} COMMON_DEVICE_EXTENSION, *PCOMMON_DEVICE_EXTENSION;
typedef enum {
    FailurePredictionNone = 0,
    FailurePredictionIoctl,
    FailurePredictionSmart,
    FailurePredictionSense
} FAILURE_PREDICTION_METHOD, *PFAILURE_PREDICTION_METHOD;
struct _FAILURE_PREDICTION_INFO;
typedef struct _FAILURE_PREDICTION_INFO *PFAILURE_PREDICTION_INFO;
#pragma warning(disable:4214)
typedef struct _CLASS_POWER_OPTIONS {
    ULONG PowerDown : 1;
    ULONG LockQueue : 1;
    ULONG HandleSpinDown : 1;
    ULONG HandleSpinUp : 1;
    ULONG Reserved : 27;
} CLASS_POWER_OPTIONS, *PCLASS_POWER_OPTIONS;
typedef enum {
    PowerDownDeviceInitial,
    PowerDownDeviceLocked,
    PowerDownDeviceStopped,
    PowerDownDeviceOff,
    PowerDownDeviceUnlocked
} CLASS_POWER_DOWN_STATE;
typedef enum {
    PowerDownDeviceInitial2,
    PowerDownDeviceLocked2,
    PowerDownDeviceFlushed2,
    PowerDownDeviceStopped2,
    PowerDownDeviceOff2,
    PowerDownDeviceUnlocked2
} CLASS_POWER_DOWN_STATE2;
typedef enum {
    PowerDownDeviceInitial3 = 0,
    PowerDownDeviceLocked3,
    PowerDownDeviceQuiesced3,
    PowerDownDeviceFlushed3,
    PowerDownDeviceStopped3,
    PowerDownDeviceOff3,
    PowerDownDeviceUnlocked3
} CLASS_POWER_DOWN_STATE3;
typedef enum {
    PowerUpDeviceInitial,
    PowerUpDeviceLocked,
    PowerUpDeviceOn,
    PowerUpDeviceStarted,
    PowerUpDeviceUnlocked
} CLASS_POWER_UP_STATE;
typedef struct _CLASS_POWER_CONTEXT {
    union {
        CLASS_POWER_DOWN_STATE PowerDown;
        CLASS_POWER_DOWN_STATE2 PowerDown2;
        CLASS_POWER_DOWN_STATE3 PowerDown3;
        CLASS_POWER_UP_STATE PowerUp;
    } PowerChangeState;
    CLASS_POWER_OPTIONS Options;
    BOOLEAN InUse;
    BOOLEAN QueueLocked;
    NTSTATUS FinalStatus;
    ULONG RetryCount;
    ULONG RetryInterval;
    PIO_COMPLETION_ROUTINE CompletionRoutine;
    PDEVICE_OBJECT DeviceObject;
    PIRP Irp;
    SCSI_REQUEST_BLOCK Srb;
} CLASS_POWER_CONTEXT, *PCLASS_POWER_CONTEXT;
typedef enum {
    SupportUnknown = 0,
    Supported,
    NotSupported
} CLASS_FUNCTION_SUPPORT;
typedef struct _CLASS_VPD_B1_DATA {
    NTSTATUS CommandStatus;
    USHORT MediumRotationRate;
    UCHAR NominalFormFactor;
    UCHAR Zoned;
    ULONG MediumProductType;
    ULONG DepopulationTime;
} CLASS_VPD_B1_DATA, *PCLASS_VPD_B1_DATA;
typedef struct _CLASS_VPD_B0_DATA {
    NTSTATUS CommandStatus;
    ULONG MaxUnmapLbaCount;
    ULONG MaxUnmapBlockDescrCount;
    ULONG OptimalUnmapGranularity;
    ULONG UnmapGranularityAlignment;
    BOOLEAN UGAVALID;
    UCHAR Reserved0;
    USHORT OptimalTransferLengthGranularity;
    ULONG MaximumTransferLength;
    ULONG OptimalTransferLength;
} CLASS_VPD_B0_DATA, *PCLASS_VPD_B0_DATA;
#pragma warning(disable:4214)
typedef struct _CLASS_VPD_B2_DATA {
    NTSTATUS CommandStatus;
    UCHAR ThresholdExponent;
    UCHAR DP : 1;
    UCHAR ANC_SUP : 1;
    UCHAR Reserved0 : 2;
    UCHAR LBPRZ : 1;
    UCHAR LBPWS10 : 1;
    UCHAR LBPWS : 1;
    UCHAR LBPU : 1;
    UCHAR ProvisioningType : 3;
    UCHAR Reserved1 : 5;
    ULONG SoftThresholdEventPending;
} CLASS_VPD_B2_DATA, *PCLASS_VPD_B2_DATA;
typedef struct _CLASS_READ_CAPACITY16_DATA {
    NTSTATUS CommandStatus;
    ULONG BytesPerLogicalSector;
    ULONG BytesPerPhysicalSector;
    ULONG BytesOffsetForSectorAlignment;
    BOOLEAN LBProvisioningEnabled;
    BOOLEAN LBProvisioningReadZeros;
    UCHAR Reserved0[2];
    ULONG Reserved1;
} CLASS_READ_CAPACITY16_DATA, *PCLASS_READ_CAPACITY16_DATA;
typedef struct _CLASS_VPD_ECOP_BLOCK_DEVICE_ROD_LIMITS {
    NTSTATUS CommandStatus;
    USHORT MaximumRangeDescriptors;
    UCHAR Restricted;
    UCHAR Reserved;
    ULONG MaximumInactivityTimer;
    ULONG DefaultInactivityTimer;
    ULONGLONG MaximumTokenTransferSize;
    ULONGLONG OptimalTransferCount;
} CLASS_VPD_ECOP_BLOCK_DEVICE_ROD_LIMITS, *PCLASS_VPD_ECOP_BLOCK_DEVICE_ROD_LIMITS;
typedef struct _CLASS_FUNCTION_SUPPORT_INFO {
    KSPIN_LOCK SyncLock;
    ULONG GenerationCount;
    volatile ULONG ChangeRequestCount;
#pragma warning(disable:4214)
    struct {
        ULONG BlockLimits : 1;
        ULONG BlockDeviceCharacteristics : 1;
        ULONG LBProvisioning : 1;
        ULONG BlockDeviceRODLimits : 1;
        ULONG ZonedBlockDeviceCharacteristics : 1;
        ULONG Reserved : 22;
        ULONG DeviceType : 5;
    } ValidInquiryPages;
    struct {
        CLASS_FUNCTION_SUPPORT SeekPenaltyProperty;
        CLASS_FUNCTION_SUPPORT AccessAlignmentProperty;
        CLASS_FUNCTION_SUPPORT TrimProperty;
        CLASS_FUNCTION_SUPPORT TrimProcess;
    } LowerLayerSupport;
    BOOLEAN RegAccessAlignmentQueryNotSupported;
    BOOLEAN AsynchronousNotificationSupported;
    BOOLEAN UseModeSense10;
    UCHAR Reserved;
    CLASS_VPD_B0_DATA BlockLimitsData;
    CLASS_VPD_B1_DATA DeviceCharacteristicsData;
    CLASS_VPD_B2_DATA LBProvisioningData;
    CLASS_READ_CAPACITY16_DATA ReadCapacity16Data;
    CLASS_VPD_ECOP_BLOCK_DEVICE_ROD_LIMITS BlockDeviceRODLimitsData;
#pragma warning(disable:4214)
    struct {
        ULONG D3ColdSupported : 1;
        ULONG DeviceWakeable : 1;
        ULONG IdlePowerEnabled : 1;
        ULONG D3IdleTimeoutOverridden : 1;
        ULONG NoVerifyDuringIdlePower : 1;
        ULONG Reserved2 : 27;
        ULONG D3IdleTimeout;
    } IdlePower;
    CLASS_FUNCTION_SUPPORT HwFirmwareGetInfoSupport;
    PSTORAGE_HW_FIRMWARE_INFO HwFirmwareInfo;
} CLASS_FUNCTION_SUPPORT_INFO, *PCLASS_FUNCTION_SUPPORT_INFO;
typedef struct _ADDITIONAL_FDO_DATA {
    ULONG DeviceGuidFlags;
    GUID DeviceGuid;
} ADDITIONAL_FDO_DATA, *PADDITIONAL_FDO_DATA;
typedef struct _FUNCTIONAL_DEVICE_EXTENSION {
#pragma warning(disable:4201)
    union {
        struct {
            ULONG Version;
            PDEVICE_OBJECT DeviceObject;
        };
        COMMON_DEVICE_EXTENSION CommonExtension;
    };
    PDEVICE_OBJECT LowerPdo;
    PSTORAGE_DEVICE_DESCRIPTOR DeviceDescriptor;
    PSTORAGE_ADAPTER_DESCRIPTOR AdapterDescriptor;
    DEVICE_POWER_STATE DevicePowerState;
    ULONG DMByteSkew;
    ULONG DMSkew;
    BOOLEAN DMActive;
    UCHAR SenseDataLength;
    UCHAR Reserved0[2];
    DISK_GEOMETRY DiskGeometry;
    PSENSE_DATA SenseData;
    ULONG TimeOutValue;
    ULONG DeviceNumber;
    ULONG SrbFlags;
    ULONG ErrorCount;
    LONG LockCount;
    LONG ProtectedLockCount;
    LONG InternalLockCount;
    KEVENT EjectSynchronizationEvent;
    USHORT DeviceFlags;
    UCHAR SectorShift;
    UCHAR CdbForceUnitAccess;
    PMEDIA_CHANGE_DETECTION_INFO MediaChangeDetectionInfo;
    PKEVENT Unused1;
    HANDLE Unused2;
    FILE_OBJECT_EXTENSION KernelModeMcnContext;
    ULONG MediaChangeCount;
    HANDLE DeviceDirectory;
    KSPIN_LOCK ReleaseQueueSpinLock;
    PIRP ReleaseQueueIrp;
    SCSI_REQUEST_BLOCK ReleaseQueueSrb;
    BOOLEAN ReleaseQueueNeeded;
    BOOLEAN ReleaseQueueInProgress;
    BOOLEAN ReleaseQueueIrpFromPool;
    BOOLEAN FailurePredicted;
    ULONG FailureReason;
    PFAILURE_PREDICTION_INFO FailurePredictionInfo;
    BOOLEAN PowerDownInProgress;
    ULONG EnumerationInterlock;
    KEVENT ChildLock;
    PKTHREAD ChildLockOwner;
    ULONG ChildLockAcquisitionCount;
    ULONG ScanForSpecialFlags;
    KDPC PowerRetryDpc;
    KTIMER PowerRetryTimer;
    CLASS_POWER_CONTEXT PowerContext;
#if (SPVER(NTDDI_VERSION) < 2))
    ULONG_PTR Reserved1;
    ULONG_PTR Reserved2;
    ULONG_PTR Reserved3;
    ULONG_PTR Reserved4;
#else
    ULONG CompletionSuccessCount;
    ULONG SavedSrbFlags;
    ULONG SavedErrorCount;
    ULONG_PTR Reserved1;
#endif
} FUNCTIONAL_DEVICE_EXTENSION, *PFUNCTIONAL_DEVICE_EXTENSION;
typedef struct _PHYSICAL_DEVICE_EXTENSION {
#pragma warning(disable:4201)
    union {
        struct {
            ULONG Version;
            PDEVICE_OBJECT DeviceObject;
        };
        COMMON_DEVICE_EXTENSION CommonExtension;
    };
    BOOLEAN IsMissing;
    BOOLEAN IsEnumerated;
    PCLASS_PRIVATE_PDO_DATA PrivatePdoData;
    ULONG_PTR Reserved2;
    ULONG_PTR Reserved3;
    ULONG_PTR Reserved4;
} PHYSICAL_DEVICE_EXTENSION, *PPHYSICAL_DEVICE_EXTENSION;
    (sizeof(STORAGE_REQUEST_BLOCK) + sizeof(STOR_ADDR_BTL8) + sizeof(SRBEX_DATA_SCSI_CDB16))
    (sizeof(STORAGE_REQUEST_BLOCK) + sizeof(STOR_ADDR_BTL8))
typedef struct _COMPLETION_CONTEXT {
    PDEVICE_OBJECT DeviceObject;
    union {
        SCSI_REQUEST_BLOCK Srb;
        STORAGE_REQUEST_BLOCK SrbEx;
        UCHAR SrbExBuffer[CLASS_SRBEX_SCSI_CDB16_BUFFER_SIZE];
    } Srb;
} COMPLETION_CONTEXT, *PCOMPLETION_CONTEXT;
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
SCSIPORT_API
ULONG
ClassInitialize(
    _In_ PVOID Argument1,
    _In_ PVOID Argument2,
    _In_ PCLASS_INIT_DATA InitializationData
    );
typedef struct _CLASS_QUERY_WMI_REGINFO_EX_LIST
{
    ULONG Size;
    __callback PCLASS_QUERY_WMI_REGINFO_EX ClassFdoQueryWmiRegInfoEx;
    __callback PCLASS_QUERY_WMI_REGINFO_EX ClassPdoQueryWmiRegInfoEx;
} CLASS_QUERY_WMI_REGINFO_EX_LIST, *PCLASS_QUERY_WMI_REGINFO_EX_LIST;
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
SCSIPORT_API
ULONG
ClassInitializeEx(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ LPGUID Guid,
    _In_ PVOID Data
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
_Post_satisfies_(return <= 0)
SCSIPORT_API
NTSTATUS
ClassCreateDeviceObject(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_z_ PCCHAR ObjectNameBuffer,
    _In_ PDEVICE_OBJECT LowerDeviceObject,
    _In_ BOOLEAN IsFdo,
    _Outptr_result_nullonfailure_
    _At_(*DeviceObject, __drv_allocatesMem(Mem) __drv_aliasesMem)
    PDEVICE_OBJECT *DeviceObject
    );
_Must_inspect_result_
SCSIPORT_API
NTSTATUS
ClassReadDriveCapacity(
    _In_ PDEVICE_OBJECT DeviceObject
    );
SCSIPORT_API
VOID
ClassReleaseQueue(
    _In_ PDEVICE_OBJECT DeviceObject
    );
SCSIPORT_API
VOID
ClassSplitRequest(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_ ULONG MaximumBytes
    );
SCSIPORT_API
NTSTATUS
ClassDeviceControl(
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp
    );
SCSIPORT_API
IO_COMPLETION_ROUTINE ClassIoComplete;
SCSIPORT_API
IO_COMPLETION_ROUTINE ClassIoCompleteAssociated;
SCSIPORT_API
BOOLEAN
ClassInterpretSenseInfo(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _In_ UCHAR MajorFunctionCode,
    _In_ ULONG IoDeviceCode,
    _In_ ULONG RetryCount,
    _Out_ NTSTATUS *Status,
    _Out_opt_ _Deref_out_range_(0,100) ULONG *RetryInterval
    );
VOID
ClassSendDeviceIoControlSynchronous(
    _In_ ULONG IoControlCode,
    _In_ PDEVICE_OBJECT TargetDeviceObject,
    _Inout_updates_opt_(_Inexpressible_(max(InputBufferLength, OutputBufferLength))) PVOID Buffer,
    _In_ ULONG InputBufferLength,
    _In_ ULONG OutputBufferLength,
    _In_ BOOLEAN InternalDeviceIoControl,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
SCSIPORT_API
NTSTATUS
ClassSendIrpSynchronous(
    _In_ PDEVICE_OBJECT TargetDeviceObject,
    _In_ PIRP Irp); SCSIPORT_API NTSTATUS ClassForwardIrpSynchronous(
    _In_ PCOMMON_DEVICE_EXTENSION CommonExtension,
    _In_ PIRP Irp
    );
SCSIPORT_API
NTSTATUS
ClassSendSrbSynchronous(
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PSCSI_REQUEST_BLOCK Srb,
    _In_reads_bytes_opt_(BufferLength) PVOID BufferAddress,
    _In_ ULONG BufferLength,
    _In_ BOOLEAN WriteToDevice
    );
_Success_(return == STATUS_PENDING)
SCSIPORT_API
NTSTATUS
ClassSendSrbAsynchronous(
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ _On_failure_(__drv_freesMem(Mem)) __drv_aliasesMem PSCSI_REQUEST_BLOCK _Srb,
    _In_ PIRP Irp,
    _In_reads_bytes_opt_(BufferLength) __drv_aliasesMem PVOID BufferAddress,
    _In_ ULONG BufferLength,
    _In_ BOOLEAN WriteToDevice
    );
SCSIPORT_API
NTSTATUS
ClassBuildRequest(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
SCSIPORT_API
ULONG
ClassModeSense(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_reads_bytes_(Length) PCHAR ModeSenseBuffer,
    _In_ ULONG Length,
    _In_ UCHAR PageMode
    );
SCSIPORT_API
NTSTATUS
ClassModeSenseTranslate(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PMODE_PARAMETER_HEADER ModeSenseData,
    _Inout_ PULONG ModeSenseBufferSize
    );
SCSIPORT_API
PVOID
ClassFindModePage(
    _In_reads_bytes_(Length) PCHAR ModeSenseBuffer,
    _In_ ULONG Length,
    _In_ UCHAR PageMode,
    _In_ BOOLEAN Use6Byte
    );
SCSIPORT_API
ULONG
ClassModeSenseEx(
    _In_ PDEVICE_OBJECT Fdo,
    _In_reads_bytes_(Length) PCHAR ModeSenseBuffer,
    _In_ ULONG Length,
    _In_ UCHAR PageMode,
    _In_ UCHAR PageControl
    );
SCSIPORT_API
NTSTATUS
ClassModeSelect(
    _In_ PDEVICE_OBJECT Fdo,
    _In_reads_bytes_(Length) PCHAR ModeSelectBuffer,
    _In_ ULONG Length,
    _In_ BOOLEAN SavePages
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
NTSTATUS
ClassClaimDevice(
    _In_ PDEVICE_OBJECT LowerDeviceObject,
    _In_ BOOLEAN Release
    );
SCSIPORT_API
_Dispatch_type_(IRP_MJ_SCSI)
DRIVER_DISPATCH ClassInternalIoControl;
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassInitializeSrbLookasideList(
    _Inout_ PCOMMON_DEVICE_EXTENSION CommonExtension,
    _In_ ULONG NumberElements
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassDeleteSrbLookasideList(
    _Inout_ PCOMMON_DEVICE_EXTENSION CommonExtension
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
ULONG
ClassQueryTimeOutRegistryValue(
    _In_ PDEVICE_OBJECT DeviceObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
NTSTATUS
ClassGetDescriptor(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PSTORAGE_PROPERTY_ID PropertyId,
    _Outptr_ PVOID *Descriptor
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassInvalidateBusRelations(
    _In_ PDEVICE_OBJECT Fdo
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassMarkChildrenMissing(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION Fdo
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
BOOLEAN
ClassMarkChildMissing(
    _In_ PPHYSICAL_DEVICE_EXTENSION PdoExtension,
    _In_ BOOLEAN AcquireChildLock
    );
SCSIPORT_API
VOID
ClassDebugPrint(
    _In_ CLASS_DEBUG_LEVEL DebugPrintLevel,
    _In_z_ PCCHAR DebugMessage,
    ...
    );
__drv_aliasesMem
_IRQL_requires_max_(DISPATCH_LEVEL)
SCSIPORT_API
PCLASS_DRIVER_EXTENSION
ClassGetDriverExtension(
    _In_ PDRIVER_OBJECT DriverObject
    );
SCSIPORT_API
VOID
ClassCompleteRequest(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_ CCHAR PriorityBoost
    );
SCSIPORT_API
VOID
ClassReleaseRemoveLock(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_opt_ PVOID Tag
    );
SCSIPORT_API
ULONG
ClassAcquireRemoveLockEx(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PVOID Tag,
    _In_ PCSTR File,
    _In_ ULONG Line
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassUpdateInformationInRegistry(
    _In_ PDEVICE_OBJECT Fdo,
    _In_ PCHAR DeviceName,
    _In_ ULONG DeviceNumber,
    _In_reads_bytes_opt_(InquiryDataLength) PINQUIRYDATA InquiryData,
    _In_ ULONG InquiryDataLength
    );
SCSIPORT_API
NTSTATUS
ClassWmiCompleteRequest(
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp,
    _In_ NTSTATUS Status,
    _In_ ULONG BufferUsed,
    _In_ CCHAR PriorityBoost
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
SCSIPORT_API
NTSTATUS
ClassWmiFireEvent(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ LPGUID Guid,
    _In_ ULONG InstanceIndex,
    _In_ ULONG EventDataSize,
    _In_reads_bytes_(EventDataSize) PVOID EventData
    );
SCSIPORT_API
VOID
ClassResetMediaChangeTimer(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassInitializeMediaChangeDetection(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ PUCHAR EventPrefix
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
NTSTATUS
ClassInitializeTestUnitPolling(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ BOOLEAN AllowDriveToSleep
    );
SCSIPORT_API
PVPB
ClassGetVpb(
    _In_ PDEVICE_OBJECT DeviceObject
    );
SCSIPORT_API
__control_entrypoint(DeviceDriver)
NTSTATUS
ClassSpinDownPowerHandler(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
NTSTATUS
ClassStopUnitPowerHandler(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
ClassSetFailurePredictionPoll(
    _Inout_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ FAILURE_PREDICTION_METHOD FailurePredictionMethod,
    _In_ ULONG PollingPeriod
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
ClassNotifyFailurePredicted(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_reads_bytes_(BufferSize) PUCHAR Buffer,
    _In_ ULONG BufferSize,
    _In_ BOOLEAN LogError,
    _In_ ULONG UniqueErrorValue,
    _In_ UCHAR PathId,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassAcquireChildLock(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension
    );
SCSIPORT_API
VOID
ClassReleaseChildLock(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension
    );
IO_COMPLETION_ROUTINE ClassSignalCompletion;
VOID
ClassSendStartUnit(
    _In_ PDEVICE_OBJECT DeviceObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
NTSTATUS
ClassRemoveDevice(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ UCHAR RemoveType
    );
SCSIPORT_API
IO_COMPLETION_ROUTINE ClassAsynchronousCompletion;
SCSIPORT_API
VOID
ClassCheckMediaState(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassSetMediaChangeState(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ MEDIA_CHANGE_DETECTION_STATE State,
    _In_ BOOLEAN Wait
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassEnableMediaChangeDetection(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassDisableMediaChangeDetection(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassCleanupMediaChangeDetection(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
ClassGetDeviceParameter(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_opt_ PWSTR SubkeyName,
    _In_ PWSTR ParameterName,
    _Inout_ PULONG ParameterValue
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
ClassSetDeviceParameter(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_opt_ PWSTR SubkeyName,
    _In_ PWSTR ParameterName,
    _In_ ULONG ParameterValue
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
PFILE_OBJECT_EXTENSION
ClassGetFsContext(
    _In_ PCOMMON_DEVICE_EXTENSION CommonExtension,
    _In_ PFILE_OBJECT FileObject
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
ClassSendNotification(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ const GUID * Guid,
    _In_ ULONG ExtraDataSize,
    _In_reads_bytes_opt_(ExtraDataSize) PVOID ExtraData
    );
__inline
UCHAR
GET_FDO_EXTENSON_SENSE_DATA_LENGTH (
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension
    )
{
    UCHAR SenseDataLength = 0;
    if (FdoExtension->SenseData != NULL) {
        if (FdoExtension->SenseDataLength > 0) {
            SenseDataLength = FdoExtension->SenseDataLength;
        } else {
            SenseDataLength = SENSE_BUFFER_SIZE;
        }
    }
    return SenseDataLength;
}
__inline
BOOLEAN
PORT_ALLOCATED_SENSE(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb
    )
{
    return ((BOOLEAN)((TEST_FLAG(Srb->SrbFlags, SRB_FLAGS_PORT_DRIVER_ALLOCSENSE) &&
             TEST_FLAG(Srb->SrbFlags, SRB_FLAGS_FREE_SENSE_BUFFER)) &&
            (Srb->SenseInfoBuffer != FdoExtension->SenseData))
            );
}
__inline
VOID
FREE_PORT_ALLOCATED_SENSE_BUFFER(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb
    )
{
    NT_ASSERT(TEST_FLAG(Srb->SrbFlags, SRB_FLAGS_PORT_DRIVER_ALLOCSENSE));
    NT_ASSERT(TEST_FLAG(Srb->SrbFlags, SRB_FLAGS_FREE_SENSE_BUFFER));
    NT_ASSERT(Srb->SenseInfoBuffer != FdoExtension->SenseData);
    ExFreePool(Srb->SenseInfoBuffer);
    Srb->SenseInfoBuffer = FdoExtension->SenseData;
    Srb->SenseInfoBufferLength = GET_FDO_EXTENSON_SENSE_DATA_LENGTH(FdoExtension);
    CLEAR_FLAG(Srb->SrbFlags, SRB_FLAGS_FREE_SENSE_BUFFER);
    return;
}
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
VOID
(*PCLASS_SCAN_FOR_SPECIAL_HANDLER) (
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ ULONG_PTR Data
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
ClassScanForSpecial(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ CLASSPNP_SCAN_FOR_SPECIAL_INFO DeviceList[],
    _In_ PCLASS_SCAN_FOR_SPECIAL_HANDLER Function
    );
