#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <videoagp.h>
extern "C" {
typedef LONG VP_STATUS;
typedef VP_STATUS *PVP_STATUS;
typedef enum VIDEO_SYNCHRONIZE_PRIORITY {
    VpLowPriority,
    VpMediumPriority,
    VpHighPriority
} VIDEO_SYNCHRONIZE_PRIORITY, *PVIDEO_SYNCHRONIZE_PRIORITY;
typedef struct _VIDEO_PORT_SPIN_LOCK *PSPIN_LOCK;
typedef enum _VIDEO_DEVICE_DATA_TYPE {
    VpMachineData,
    VpCmosData,
    VpBusData,
    VpControllerData,
    VpMonitorData
} VIDEO_DEVICE_DATA_TYPE, *PVIDEO_DEVICE_DATA_TYPE;
typedef enum _VP_POOL_TYPE {
    VpNonPagedPool,
    VpPagedPool,
    VpNonPagedPoolCacheAligned = 4,
    VpPagedPoolCacheAligned
} VP_POOL_TYPE, *PVP_POOL_TYPE;
typedef struct _VIDEO_HARDWARE_CONFIGURATION_DATA {
    INTERFACE_TYPE InterfaceType;
    ULONG BusNumber;
    USHORT Version;
    USHORT Revision;
    USHORT Irql;
    USHORT Vector;
    ULONG ControlBase;
    ULONG ControlSize;
    ULONG CursorBase;
    ULONG CursorSize;
    ULONG FrameBase;
    ULONG FrameSize;
} VIDEO_HARDWARE_CONFIGURATION_DATA, *PVIDEO_HARDWARE_CONFIGURATION_DATA;
typedef struct _VIDEO_X86_BIOS_ARGUMENTS {
    ULONG Eax;
    ULONG Ebx;
    ULONG Ecx;
    ULONG Edx;
    ULONG Esi;
    ULONG Edi;
    ULONG Ebp;
} VIDEO_X86_BIOS_ARGUMENTS, *PVIDEO_X86_BIOS_ARGUMENTS;
typedef struct _INT10_BIOS_ARGUMENTS {
    ULONG Eax;
    ULONG Ebx;
    ULONG Ecx;
    ULONG Edx;
    ULONG Esi;
    ULONG Edi;
    ULONG Ebp;
    USHORT SegDs;
    USHORT SegEs;
} INT10_BIOS_ARGUMENTS, *PINT10_BIOS_ARGUMENTS;
typedef enum VIDEO_DEBUG_LEVEL {
    Error = 0,
    Warn,
    Trace,
    Info
} VIDEO_DEBUG_LEVEL, *PVIDEO_DEBUG_LEVEL;
ULONG
DriverEntry(
    _In_ PVOID Context1,
    _In_ PVOID Context2
    );
typedef
VP_STATUS
(*PDRIVER_IO_PORT_UCHAR ) (
    ULONG_PTR Context,
    ULONG Port,
    UCHAR AccessMode,
    PUCHAR Data
    );
typedef
VP_STATUS
(*PDRIVER_IO_PORT_UCHAR_STRING ) (
    ULONG_PTR Context,
    ULONG Port,
    UCHAR AccessMode,
    PUCHAR Data,
    ULONG DataLength
    );
typedef
VP_STATUS
(*PDRIVER_IO_PORT_USHORT ) (
    ULONG_PTR Context,
    ULONG Port,
    UCHAR AccessMode,
    PUSHORT Data
    );
typedef
VP_STATUS
(*PDRIVER_IO_PORT_USHORT_STRING ) (
    ULONG_PTR Context,
    ULONG Port,
    UCHAR AccessMode,
    PUSHORT Data,
    ULONG DataLength
    );
typedef
VP_STATUS
(*PDRIVER_IO_PORT_ULONG ) (
    ULONG_PTR Context,
    ULONG Port,
    UCHAR AccessMode,
    PULONG Data
    );
typedef
VP_STATUS
(*PDRIVER_IO_PORT_ULONG_STRING ) (
    ULONG_PTR Context,
    ULONG Port,
    UCHAR AccessMode,
    PULONG Data,
    ULONG DataLength
    );
typedef struct _STATUS_BLOCK {
    union {
       VP_STATUS Status;
       PVOID Pointer;
    };
    ULONG_PTR Information;
} STATUS_BLOCK, *PSTATUS_BLOCK;
typedef struct _VIDEO_REQUEST_PACKET {
    ULONG IoControlCode;
    PSTATUS_BLOCK StatusBlock;
    PVOID InputBuffer;
    ULONG InputBufferLength;
    PVOID OutputBuffer;
    ULONG OutputBufferLength;
} VIDEO_REQUEST_PACKET, *PVIDEO_REQUEST_PACKET;
typedef struct __VRB_SG {
    __int64 PhysicalAddress;
    ULONG Length;
    } VRB_SG, *PVRB_SG;
typedef struct __DMA_PARAMETERS * PDMA;
                                                                                           \
        do { \
            ULONG_PTR byteOffset; \
                                                                                           \
            byteOffset = (PCHAR) VirtualAddress - (PCHAR)InputBuffer; \
                                                                                           \
            while (byteOffset >= scatterList->Length) { \
                                                                                           \
                byteOffset -= scatterList->Length; \
                scatterList++; \
            } \
                                                                                           \
            *pLength = scatterList->Length - byteOffset; \
                                                                                           \
            Address = (ULONG_PTR) (scatterList->PhysicalAddress + byteOffset); \
                                                                                           \
        } while (0)
typedef struct __VP_DMA_ADAPTER *PVP_DMA_ADAPTER;
typedef enum _VP_LOCK_OPERATION {
    VpReadAccess,
    VpWriteAccess,
    VpModifyAccess
    } VP_LOCK_OPERATION;
typedef struct _VP_DEVICE_DESCRIPTION {
    BOOLEAN ScatterGather;
    BOOLEAN Dma32BitAddresses;
    BOOLEAN Dma64BitAddresses;
    ULONG MaximumLength;
} VP_DEVICE_DESCRIPTION, *PVP_DEVICE_DESCRIPTION;
typedef struct _VP_SCATTER_GATHER_ELEMENT {
    PHYSICAL_ADDRESS Address;
    ULONG Length;
    ULONG_PTR Reserved;
    } VP_SCATTER_GATHER_ELEMENT, *PVP_SCATTER_GATHER_ELEMENT;
#pragma warning(disable:4200)
typedef struct _VP_SCATTER_GATHER_LIST {
    ULONG NumberOfElements;
    ULONG_PTR Reserved;
    VP_SCATTER_GATHER_ELEMENT Elements[];
    } VP_SCATTER_GATHER_LIST, *PVP_SCATTER_GATHER_LIST;
#pragma warning(default:4200)
typedef struct _VIDEO_ACCESS_RANGE {
    PHYSICAL_ADDRESS RangeStart;
    ULONG RangeLength;
    UCHAR RangeInIoSpace;
    UCHAR RangeVisible;
    UCHAR RangeShareable;
    UCHAR RangePassive;
} VIDEO_ACCESS_RANGE, *PVIDEO_ACCESS_RANGE;
typedef
PVOID
(*PVIDEO_PORT_GET_PROC_ADDRESS)(
    IN PVOID HwDeviceExtension,
    IN PUCHAR FunctionName
    );
typedef struct _VIDEO_PORT_CONFIG_INFO {
    ULONG Length;
    ULONG SystemIoBusNumber;
    INTERFACE_TYPE AdapterInterfaceType;
    ULONG BusInterruptLevel;
    ULONG BusInterruptVector;
    KINTERRUPT_MODE InterruptMode;
    ULONG NumEmulatorAccessEntries;
    PEMULATOR_ACCESS_ENTRY EmulatorAccessEntries;
    ULONG_PTR EmulatorAccessEntriesContext;
    PHYSICAL_ADDRESS VdmPhysicalVideoMemoryAddress;
    ULONG VdmPhysicalVideoMemoryLength;
    ULONG HardwareStateSize;
    ULONG DmaChannel;
    ULONG DmaPort;
    UCHAR DmaShareable;
    UCHAR InterruptShareable;
    BOOLEAN Master;
    DMA_WIDTH DmaWidth;
    DMA_SPEED DmaSpeed;
    BOOLEAN bMapBuffers;
    BOOLEAN NeedPhysicalAddresses;
    BOOLEAN DemandMode;
    ULONG MaximumTransferLength;
    ULONG NumberOfPhysicalBreaks;
    BOOLEAN ScatterGather;
    ULONG MaximumScatterGatherChunkSize;
    PVIDEO_PORT_GET_PROC_ADDRESS VideoPortGetProcAddress;
    PWSTR DriverRegistryPath;
    ULONGLONG SystemMemorySize;
} VIDEO_PORT_CONFIG_INFO, *PVIDEO_PORT_CONFIG_INFO;
typedef
VP_STATUS
(*PVIDEO_HW_FIND_ADAPTER) (
    PVOID HwDeviceExtension,
    PVOID HwContext,
    PWSTR ArgumentString,
    PVIDEO_PORT_CONFIG_INFO ConfigInfo,
    PUCHAR Again
    );
typedef
BOOLEAN
(*PVIDEO_HW_INITIALIZE) (
    PVOID HwDeviceExtension
    );
typedef
BOOLEAN
(*PVIDEO_HW_INTERRUPT) (
    PVOID HwDeviceExtension
    );
typedef
VOID
(*PVIDEO_HW_LEGACYRESOURCES) (
    IN ULONG VendorId,
    IN ULONG DeviceId,
    IN OUT PVIDEO_ACCESS_RANGE *LegacyResourceList,
    IN OUT PULONG LegacyResourceCount
    );
typedef enum _HW_DMA_RETURN {
    DmaAsyncReturn,
    DmaSyncReturn
    } HW_DMA_RETURN, *PHW_DMA_RETURN;
typedef
HW_DMA_RETURN
(*PVIDEO_HW_START_DMA) (
    PVOID HwDeviceExtension,
    PDMA pDma
    );
typedef
VOID
(*PEXECUTE_DMA)(
    PVOID HwDeviceExtension,
    PVP_DMA_ADAPTER VpDmaAdapter,
    PVP_SCATTER_GATHER_LIST SGList,
    PVOID Context
    );
typedef enum {
    VideoPortUnlockAfterDma = 1,
    VideoPortKeepPagesLocked,
    VideoPortDmaInitOnly
    } DMA_FLAGS;
typedef ULONG DMA_EVENT_FLAGS;
typedef struct _VIDEO_CHILD_ENUM_INFO {
    ULONG Size;
    ULONG ChildDescriptorSize;
    ULONG ChildIndex;
    ULONG ACPIHwId;
    PVOID ChildHwDeviceExtension;
} VIDEO_CHILD_ENUM_INFO, *PVIDEO_CHILD_ENUM_INFO;
typedef enum {
    Monitor = 1,
    NonPrimaryChip,
    VideoChip,
    Other
} VIDEO_CHILD_TYPE, *PVIDEO_CHILD_TYPE;
typedef struct _VIDEO_CHILD_STATE {
    ULONG Id;
    ULONG State;
} VIDEO_CHILD_STATE, *PVIDEO_CHILD_STATE;
typedef struct _VIDEO_CHILD_STATE_CONFIGURATION {
    ULONG Count;
    VIDEO_CHILD_STATE ChildStateArray[ANYSIZE_ARRAY];
} VIDEO_CHILD_STATE_CONFIGURATION, *PVIDEO_CHILD_STATE_CONFIGURATION;
typedef
VP_STATUS
(*PVIDEO_HW_GET_CHILD_DESCRIPTOR) (
    IN PVOID HwDeviceExtension,
    IN PVIDEO_CHILD_ENUM_INFO ChildEnumInfo,
    OUT PVIDEO_CHILD_TYPE VideoChildType,
    OUT PUCHAR pChildDescriptor,
    OUT PULONG UId,
    OUT PULONG pUnused
    );
typedef
VP_STATUS
(*PVIDEO_HW_POWER_SET) (
    PVOID HwDeviceExtension,
    ULONG HwId,
    PVIDEO_POWER_MANAGEMENT VideoPowerControl
    );
typedef
VP_STATUS
(*PVIDEO_HW_POWER_GET) (
    PVOID HwDeviceExtension,
    ULONG HwId,
    PVIDEO_POWER_MANAGEMENT VideoPowerControl
    );
typedef struct _QUERY_INTERFACE {
    CONST GUID *InterfaceType;
    USHORT Size;
    USHORT Version;
    PINTERFACE Interface;
    PVOID InterfaceSpecificData;
    ULONG DeviceUid;
} QUERY_INTERFACE, *PQUERY_INTERFACE;
typedef
VP_STATUS
(*PVIDEO_HW_QUERY_INTERFACE) (
    PVOID HwDeviceExtension,
    PQUERY_INTERFACE QueryInterface
    );
typedef
VP_STATUS
(*PVIDEO_HW_CHILD_CALLBACK) (
    PVOID HwDeviceExtension,
    PVOID ChildDeviceExtension
    );
typedef
BOOLEAN
(*PVIDEO_HW_START_IO) (
    PVOID HwDeviceExtension,
    PVIDEO_REQUEST_PACKET RequestPacket
    );
typedef
BOOLEAN
(*PVIDEO_HW_RESET_HW) (
    PVOID HwDeviceExtension,
    ULONG Columns,
    ULONG Rows
    );
typedef
VOID
(*PVIDEO_HW_TIMER) (
    PVOID HwDeviceExtension
    );
typedef struct _VIDEO_HW_INITIALIZATION_DATA {
    ULONG HwInitDataSize;
    INTERFACE_TYPE AdapterInterfaceType;
    PVIDEO_HW_FIND_ADAPTER HwFindAdapter;
    PVIDEO_HW_INITIALIZE HwInitialize;
    PVIDEO_HW_INTERRUPT HwInterrupt;
    PVIDEO_HW_START_IO HwStartIO;
    ULONG HwDeviceExtensionSize;
    ULONG StartingDeviceNumber;
    PVIDEO_HW_RESET_HW HwResetHw;
    PVIDEO_HW_TIMER HwTimer;
    PVIDEO_HW_START_DMA HwStartDma;
    PVIDEO_HW_POWER_SET HwSetPowerState;
    PVIDEO_HW_POWER_GET HwGetPowerState;
    PVIDEO_HW_GET_CHILD_DESCRIPTOR HwGetVideoChildDescriptor;
    PVIDEO_HW_QUERY_INTERFACE HwQueryInterface;
    ULONG HwChildDeviceExtensionSize;
    PVIDEO_ACCESS_RANGE HwLegacyResourceList;
    ULONG HwLegacyResourceCount;
    PVIDEO_HW_LEGACYRESOURCES HwGetLegacyResources;
    BOOLEAN AllowEarlyEnumeration;
    ULONG Reserved;
} VIDEO_HW_INITIALIZATION_DATA, *PVIDEO_HW_INITIALIZATION_DATA;
typedef
VOID
(*PVIDEO_WRITE_CLOCK_LINE)(
    PVOID HwDeviceExtension,
    UCHAR Data
    );
typedef
VOID
(*PVIDEO_WRITE_DATA_LINE)(
    PVOID HwDeviceExtension,
    UCHAR Data
    );
typedef
BOOLEAN
(*PVIDEO_READ_CLOCK_LINE)(
    PVOID HwDeviceExtension
    );
typedef
BOOLEAN
(*PVIDEO_READ_DATA_LINE)(
    PVOID HwDeviceExtension
    );
typedef
VOID
(*PVIDEO_WAIT_VSYNC_ACTIVE)(
    PVOID HwDeviceExtension
    );
typedef struct _I2C_FNC_TABLE
{
    IN ULONG Size;
    IN PVIDEO_WRITE_CLOCK_LINE WriteClockLine;
    IN PVIDEO_WRITE_DATA_LINE WriteDataLine;
    IN PVIDEO_READ_CLOCK_LINE ReadClockLine;
    IN PVIDEO_READ_DATA_LINE ReadDataLine;
    IN PVIDEO_WAIT_VSYNC_ACTIVE WaitVsync;
    PVOID Reserved;
} I2C_FNC_TABLE, *PI2C_FNC_TABLE;
typedef struct _I2C_CALLBACKS
{
    IN PVIDEO_WRITE_CLOCK_LINE WriteClockLine;
    IN PVIDEO_WRITE_DATA_LINE WriteDataLine;
    IN PVIDEO_READ_CLOCK_LINE ReadClockLine;
    IN PVIDEO_READ_DATA_LINE ReadDataLine;
} I2C_CALLBACKS, *PI2C_CALLBACKS;
typedef struct _DDC_CONTROL
{
    IN ULONG Size;
    IN I2C_CALLBACKS I2CCallbacks;
    IN UCHAR EdidSegment;
} DDC_CONTROL, *PDDC_CONTROL;
typedef struct _VIDEO_I2C_CONTROL
{
    IN PVIDEO_WRITE_CLOCK_LINE WriteClockLine;
    IN PVIDEO_WRITE_DATA_LINE WriteDataLine;
    IN PVIDEO_READ_CLOCK_LINE ReadClockLine;
    IN PVIDEO_READ_DATA_LINE ReadDataLine;
    IN ULONG I2CDelay;
} VIDEO_I2C_CONTROL, *PVIDEO_I2C_CONTROL;
typedef enum
{
    VideoPortServicesAGP = 1,
    VideoPortServicesI2C,
    VideoPortServicesHeadless,
    VideoPortServicesInt10,
    VideoPortServicesDebugReport,
    VideoPortServicesWCMemoryProtection
} VIDEO_PORT_SERVICES;
typedef struct _VIDEO_PORT_AGP_INTERFACE
{
    IN USHORT Size;
    IN USHORT Version;
    OUT PVOID Context;
    OUT PINTERFACE_REFERENCE InterfaceReference;
    OUT PINTERFACE_DEREFERENCE InterfaceDereference;
    OUT PAGP_RESERVE_PHYSICAL AgpReservePhysical;
    OUT PAGP_RELEASE_PHYSICAL AgpReleasePhysical;
    OUT PAGP_COMMIT_PHYSICAL AgpCommitPhysical;
    OUT PAGP_FREE_PHYSICAL AgpFreePhysical;
    OUT PAGP_RESERVE_VIRTUAL AgpReserveVirtual;
    OUT PAGP_RELEASE_VIRTUAL AgpReleaseVirtual;
    OUT PAGP_COMMIT_VIRTUAL AgpCommitVirtual;
    OUT PAGP_FREE_VIRTUAL AgpFreeVirtual;
    OUT ULONGLONG AgpAllocationLimit;
} VIDEO_PORT_AGP_INTERFACE, *PVIDEO_PORT_AGP_INTERFACE;
typedef struct _VIDEO_PORT_AGP_INTERFACE_2
{
    IN USHORT Size;
    IN USHORT Version;
    OUT PVOID Context;
    OUT PINTERFACE_REFERENCE InterfaceReference;
    OUT PINTERFACE_DEREFERENCE InterfaceDereference;
    OUT PAGP_RESERVE_PHYSICAL AgpReservePhysical;
    OUT PAGP_RELEASE_PHYSICAL AgpReleasePhysical;
    OUT PAGP_COMMIT_PHYSICAL AgpCommitPhysical;
    OUT PAGP_FREE_PHYSICAL AgpFreePhysical;
    OUT PAGP_RESERVE_VIRTUAL AgpReserveVirtual;
    OUT PAGP_RELEASE_VIRTUAL AgpReleaseVirtual;
    OUT PAGP_COMMIT_VIRTUAL AgpCommitVirtual;
    OUT PAGP_FREE_VIRTUAL AgpFreeVirtual;
    OUT ULONGLONG AgpAllocationLimit;
    OUT PAGP_SET_RATE AgpSetRate;
} VIDEO_PORT_AGP_INTERFACE_2, *PVIDEO_PORT_AGP_INTERFACE_2;
typedef
BOOLEAN
(*PI2C_START)(
    IN PVOID HwDeviceExtension,
    IN PI2C_CALLBACKS I2CCallbacks
    );
typedef
BOOLEAN
(*PI2C_STOP)(
    IN PVOID HwDeviceExtension,
    IN PI2C_CALLBACKS I2CCallbacks
    );
typedef
BOOLEAN
(*PI2C_WRITE)(
    IN PVOID HwDeviceExtension,
    IN PI2C_CALLBACKS I2CCallbacks,
    IN PUCHAR Buffer,
    IN ULONG Length
    );
typedef
BOOLEAN
(*PI2C_READ)(
    IN PVOID HwDeviceExtension,
    IN PI2C_CALLBACKS I2CCallbacks,
    OUT PUCHAR Buffer,
    IN ULONG Length
    );
typedef struct _VIDEO_PORT_I2C_INTERFACE
{
    IN USHORT Size;
    IN USHORT Version;
    OUT PVOID Context;
    OUT PINTERFACE_REFERENCE InterfaceReference;
    OUT PINTERFACE_DEREFERENCE InterfaceDereference;
    OUT PI2C_START I2CStart;
    OUT PI2C_STOP I2CStop;
    OUT PI2C_WRITE I2CWrite;
    OUT PI2C_READ I2CRead;
} VIDEO_PORT_I2C_INTERFACE, *PVIDEO_PORT_I2C_INTERFACE;
typedef
BOOLEAN
(*PI2C_START_2)(
    IN PVOID HwDeviceExtension,
    IN PVIDEO_I2C_CONTROL I2CControl
    );
typedef
BOOLEAN
(*PI2C_STOP_2)(
    IN PVOID HwDeviceExtension,
    IN PVIDEO_I2C_CONTROL I2CControl
    );
typedef
BOOLEAN
(*PI2C_WRITE_2)(
    IN PVOID HwDeviceExtension,
    IN PVIDEO_I2C_CONTROL I2CControl,
    IN PUCHAR Buffer,
    IN ULONG Length
    );
typedef
BOOLEAN
(*PI2C_READ_2)(
    IN PVOID HwDeviceExtension,
    IN PVIDEO_I2C_CONTROL I2CControl,
    OUT PUCHAR Buffer,
    IN ULONG Length,
    IN BOOLEAN EndOfRead
    );
typedef struct _VIDEO_PORT_I2C_INTERFACE_2
{
    IN USHORT Size;
    IN USHORT Version;
    OUT PVOID Context;
    OUT PINTERFACE_REFERENCE InterfaceReference;
    OUT PINTERFACE_DEREFERENCE InterfaceDereference;
    OUT PI2C_START_2 I2CStart;
    OUT PI2C_STOP_2 I2CStop;
    OUT PI2C_WRITE_2 I2CWrite;
    OUT PI2C_READ_2 I2CRead;
} VIDEO_PORT_I2C_INTERFACE_2, *PVIDEO_PORT_I2C_INTERFACE_2;
typedef
VP_STATUS
(*PINT10_ALLOCATE_BUFFER)(
    IN PVOID Context,
    OUT PUSHORT Seg,
    OUT PUSHORT Off,
    IN OUT PULONG Length
    );
typedef
VP_STATUS
(*PINT10_FREE_BUFFER)(
    IN PVOID Context,
    IN USHORT Seg,
    IN USHORT Off
    );
typedef
VP_STATUS
(*PINT10_READ_MEMORY)(
    IN PVOID Context,
    IN USHORT Seg,
    IN USHORT Off,
    OUT PVOID Buffer,
    IN ULONG Length
    );
typedef
VP_STATUS
(*PINT10_WRITE_MEMORY)(
    IN PVOID Context,
    IN USHORT Seg,
    IN USHORT Off,
    IN PVOID Buffer,
    IN ULONG Length
    );
typedef
VP_STATUS
(*PINT10_CALL_BIOS)(
    PVOID Context,
    PINT10_BIOS_ARGUMENTS BiosArguments
    );
typedef struct _VIDEO_PORT_INT10_INTERFACE
{
    IN USHORT Size;
    IN USHORT Version;
    OUT PVOID Context;
    OUT PINTERFACE_REFERENCE InterfaceReference;
    OUT PINTERFACE_DEREFERENCE InterfaceDereference;
    OUT PINT10_ALLOCATE_BUFFER Int10AllocateBuffer;
    OUT PINT10_FREE_BUFFER Int10FreeBuffer;
    OUT PINT10_READ_MEMORY Int10ReadMemory;
    OUT PINT10_WRITE_MEMORY Int10WriteMemory;
    OUT PINT10_CALL_BIOS Int10CallBios;
} VIDEO_PORT_INT10_INTERFACE, *PVIDEO_PORT_INT10_INTERFACE;
typedef
VP_STATUS
(*PROTECT_WC_MEMORY)(
    IN PVOID Context,
    IN PVOID HwDeviceExtension
    );
typedef
VP_STATUS
(*RESTORE_WC_MEMORY)(
    IN PVOID Context,
    IN PVOID HwDeviceExtension
    );
typedef struct _VIDEO_PORT_WCMEMORYPROTECTION_INTERFACE
{
    IN USHORT Size;
    IN USHORT Version;
    OUT PVOID Context;
    OUT PINTERFACE_REFERENCE InterfaceReference;
    OUT PINTERFACE_DEREFERENCE InterfaceDereference;
    OUT PROTECT_WC_MEMORY VideoPortProtectWCMemory;
    OUT RESTORE_WC_MEMORY VideoPortRestoreWCMemory;
} VIDEO_PORT_WCMEMORYPROTECTION_INTERFACE, *PVIDEO_PORT_WCMEMORYPROTECTION_INTERFACE;
typedef struct _VPOSVERSIONINFO
{
    IN ULONG Size;
    OUT ULONG MajorVersion;
    OUT ULONG MinorVersion;
    OUT ULONG BuildNumber;
    OUT USHORT ServicePackMajor;
    OUT USHORT ServicePackMinor;
} VPOSVERSIONINFO, *PVPOSVERSIONINFO;
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_preferredFunction("VideoPortAllocatePool", "Obsolete")
VIDEOPORT_API
VP_STATUS
VideoPortAllocateBuffer(
    IN PVOID HwDeviceExtension,
    IN ULONG Size,
    OUT PVOID *Buffer
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VOID
VideoPortAcquireDeviceLock(
    IN PVOID HwDeviceExtension
    );
VIDEOPORT_API
ULONG
VideoPortCompareMemory(
    PVOID Source1,
    PVOID Source2,
    SIZE_T Length
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
BOOLEAN
VideoPortDDCMonitorHelper(
    IN PVOID HwDeviceExtension,
    IN PVOID DDCControl,
    IN OUT _Inout_updates_bytes_(EdidBufferSize) PUCHAR EdidBuffer,
    IN ULONG EdidBufferSize
    );
VIDEOPORT_API
VOID
VideoPortDebugPrint(
    VIDEO_DEBUG_LEVEL DebugPrintLevel,
    _In_ PSTR DebugMessage,
    ...
    );
VIDEOPORT_API
VP_STATUS
VideoPortDisableInterrupt(
    PVOID HwDeviceExtension
    );
VIDEOPORT_API
VP_STATUS
VideoPortEnableInterrupt(
    PVOID HwDeviceExtension
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortEnumerateChildren(
    IN PVOID HwDeviceExtension,
    IN _Reserved_ PVOID Reserved
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VOID
VideoPortFreeDeviceBase(
    PVOID HwDeviceExtension,
    PVOID MappedAddress
    );
typedef
VP_STATUS
(*PMINIPORT_QUERY_DEVICE_ROUTINE)(
    PVOID HwDeviceExtension,
    PVOID Context,
    VIDEO_DEVICE_DATA_TYPE DeviceDataType,
    PVOID Identifier,
    ULONG IdentiferLength,
    PVOID ConfigurationData,
    ULONG ConfigurationDataLength,
    PVOID ComponentInformation,
    ULONG ComponentInformationLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortGetAccessRanges(
    PVOID HwDeviceExtension,
    ULONG NumRequestedResources,
    _In_reads_opt_(NumRequestedResources) PIO_RESOURCE_DESCRIPTOR RequestedResources OPTIONAL,
    ULONG NumAccessRanges,
    _Out_writes_(NumAccessRanges) PVIDEO_ACCESS_RANGE AccessRanges,
    PVOID VendorId,
    PVOID DeviceId,
    PULONG Slot
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
PVOID
VideoPortGetAssociatedDeviceExtension(
    IN PVOID DeviceObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
ULONG
VideoPortGetBusData(
    PVOID HwDeviceExtension,
    BUS_DATA_TYPE BusDataType,
    ULONG SlotNumber,
    _Out_writes_bytes_(Length) PVOID Buffer,
    ULONG Offset,
    ULONG Length
    );
VIDEOPORT_API
UCHAR
VideoPortGetCurrentIrql();
VIDEOPORT_API
PVOID
VideoPortGetDeviceBase(
    PVOID HwDeviceExtension,
    PHYSICAL_ADDRESS IoAddress,
    ULONG NumberOfUchars,
    UCHAR InIoSpace
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortGetDeviceData(
    PVOID HwDeviceExtension,
    VIDEO_DEVICE_DATA_TYPE DeviceDataType,
    PMINIPORT_QUERY_DEVICE_ROUTINE CallbackRoutine,
    PVOID Context
    );
typedef
VP_STATUS
(*PMINIPORT_GET_REGISTRY_ROUTINE)(
    PVOID HwDeviceExtension,
    PVOID Context,
    PWSTR ValueName,
    PVOID ValueData,
    ULONG ValueLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortGetRegistryParameters(
    PVOID HwDeviceExtension,
    _In_ PWSTR ParameterName,
    UCHAR IsParameterFileName,
    PMINIPORT_GET_REGISTRY_ROUTINE GetRegistryRoutine,
    PVOID Context
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
_Out_writes_bytes_opt_(Length) PVOID
VideoPortGetRomImage(
    IN PVOID HwDeviceExtension,
    IN _Reserved_ PVOID Unused1,
    IN _Reserved_ ULONG Unused2,
    IN ULONG Length
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortGetVgaStatus(
    PVOID HwDeviceExtension,
    OUT PULONG VgaStatus
    );
VIDEOPORT_API
LONG
FASTCALL
VideoPortInterlockedDecrement(
    IN PLONG Addend
    );
VIDEOPORT_API
LONG
FASTCALL
VideoPortInterlockedIncrement(
    IN PLONG Addend
    );
VIDEOPORT_API
LONG
FASTCALL
VideoPortInterlockedExchange(
    IN OUT PLONG Target,
    IN LONG Value
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
ULONG
VideoPortInitialize(
    PVOID Argument1,
    PVOID Argument2,
    PVIDEO_HW_INITIALIZATION_DATA HwInitializationData,
    PVOID HwContext
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortInt10(
    PVOID HwDeviceExtension,
    PVIDEO_X86_BIOS_ARGUMENTS BiosArguments
    );
_IRQL_requires_max_(HIGH_LEVEL)
VIDEOPORT_API
VOID
VideoPortLogError(
    PVOID HwDeviceExtension,
    PVIDEO_REQUEST_PACKET Vrp OPTIONAL,
    VP_STATUS ErrorCode,
    ULONG UniqueId
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_preferredFunction("VideoPortMapMemory", "Obsolete")
VIDEOPORT_API
VP_STATUS
VideoPortMapBankedMemory(
    PVOID HwDeviceExtension,
    PHYSICAL_ADDRESS PhysicalAddress,
    PULONG Length,
    PULONG InIoSpace,
    PVOID *VirtualAddress,
    ULONG BankLength,
    UCHAR ReadWriteBank,
    PBANKED_SECTION_ROUTINE BankRoutine,
    PVOID Context
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortMapMemory(
    PVOID HwDeviceExtension,
    PHYSICAL_ADDRESS PhysicalAddress,
    PULONG Length,
    PULONG InIoSpace,
    PVOID *VirtualAddress
    );
VIDEOPORT_API
VOID
VideoPortMoveMemory(
    _Inout_updates_bytes_(Length) PVOID Destination,
    _Inout_updates_bytes_(Length) PVOID Source,
    ULONG Length
    );
VIDEOPORT_API
LONGLONG
VideoPortQueryPerformanceCounter(
    IN PVOID HwDeviceExtension,
    OUT PLONGLONG PerformanceFrequency OPTIONAL
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortQueryServices(
    IN PVOID HwDeviceExtension,
    IN VIDEO_PORT_SERVICES ServicesType,
    IN OUT PINTERFACE Interface
    );
typedef
VOID
(*PMINIPORT_DPC_ROUTINE)(
    IN PVOID HwDeviceExtension,
    IN PVOID Context
    );
_IRQL_requires_max_(HIGH_LEVEL)
_IRQL_requires_min_(DISPATCH_LEVEL)
VIDEOPORT_API
BOOLEAN
VideoPortQueueDpc(
    IN PVOID HwDeviceExtension,
    IN PMINIPORT_DPC_ROUTINE CallbackRoutine,
    IN PVOID Context
    );
VIDEOPORT_API
UCHAR
VideoPortReadPortUchar(
    PUCHAR Port
    );
VIDEOPORT_API
USHORT
VideoPortReadPortUshort(
    PUSHORT Port
    );
VIDEOPORT_API
ULONG
VideoPortReadPortUlong(
    PULONG Port
    );
VIDEOPORT_API
VOID
VideoPortReadPortBufferUchar(
    PUCHAR Port,
    _Out_writes_(Count) PUCHAR Buffer,
    ULONG Count
    );
VIDEOPORT_API
VOID
VideoPortReadPortBufferUshort(
    PUSHORT Port,
    _Out_writes_(Count) PUSHORT Buffer,
    ULONG Count
    );
VIDEOPORT_API
VOID
VideoPortReadPortBufferUlong(
    PULONG Port,
    _Out_writes_(Count) PULONG Buffer,
    ULONG Count
    );
VIDEOPORT_API
UCHAR
VideoPortReadRegisterUchar(
    PUCHAR Register
    );
VIDEOPORT_API
USHORT
VideoPortReadRegisterUshort(
    PUSHORT Register
    );
VIDEOPORT_API
ULONG
VideoPortReadRegisterUlong(
    PULONG Register
    );
VIDEOPORT_API
VOID
VideoPortReadRegisterBufferUchar(
    PUCHAR Register,
    _Out_writes_(Count) PUCHAR Buffer,
    ULONG Count
    );
VIDEOPORT_API
VOID
VideoPortReadRegisterBufferUshort(
    PUSHORT Register,
    _Out_writes_(Count) PUSHORT Buffer,
    ULONG Count
    );
VIDEOPORT_API
VOID
VideoPortReadRegisterBufferUlong(
    PULONG Register,
    _Out_writes_(Count) PULONG Buffer,
    ULONG Count
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_preferredFunction("VideoPortFreePool", "Obsolete")
VIDEOPORT_API
VOID
VideoPortReleaseBuffer(
  IN PVOID HwDeviceExtension,
  IN PVOID Buffer
  );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VOID
VideoPortReleaseDeviceLock(
    IN PVOID HwDeviceExtension
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_preferredFunction("(see documentation)", "Obsolete")
VIDEOPORT_API
BOOLEAN
VideoPortScanRom(
    PVOID HwDeviceExtension,
    PUCHAR RomBase,
    ULONG RomLength,
    PUCHAR String
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
ULONG
VideoPortSetBusData(
    PVOID HwDeviceExtension,
    BUS_DATA_TYPE BusDataType,
    ULONG SlotNumber,
    _In_reads_bytes_(Length) PVOID Buffer,
    ULONG Offset,
    ULONG Length
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortSetRegistryParameters(
    PVOID HwDeviceExtension,
    _In_ PWSTR ValueName,
    _In_reads_bytes_(ValueLength) PVOID ValueData,
    ULONG ValueLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortSetTrappedEmulatorPorts(
    PVOID HwDeviceExtension,
    ULONG NumAccessRanges,
    _In_reads_(NumAccessRanges) PVIDEO_ACCESS_RANGE AccessRange
    );
VIDEOPORT_API
VOID
VideoPortStallExecution(
    ULONG Microseconds
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VIDEOPORT_API
VOID
VideoPortStartTimer(
    PVOID HwDeviceExtension
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VIDEOPORT_API
VOID
VideoPortStopTimer(
    PVOID HwDeviceExtension
    );
typedef
BOOLEAN
(*PMINIPORT_SYNCHRONIZE_ROUTINE)(
    PVOID Context
    );
_IRQL_requires_max_(HIGH_LEVEL)
BOOLEAN
VIDEOPORT_API
VideoPortSynchronizeExecution(
    PVOID HwDeviceExtension,
    VIDEO_SYNCHRONIZE_PRIORITY Priority,
    PMINIPORT_SYNCHRONIZE_ROUTINE SynchronizeRoutine,
    PVOID Context
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortUnmapMemory(
    PVOID HwDeviceExtension,
    PVOID VirtualAddress,
    HANDLE ProcessHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortVerifyAccessRanges(
    PVOID HwDeviceExtension,
    ULONG NumAccessRanges,
    _In_reads_opt_(NumAccessRanges) PVIDEO_ACCESS_RANGE AccessRanges
    );
VIDEOPORT_API
VOID
VideoPortWritePortUchar(
    PUCHAR Port,
    UCHAR Value
    );
VIDEOPORT_API
VOID
VideoPortWritePortUshort(
    PUSHORT Port,
    USHORT Value
    );
VIDEOPORT_API
VOID
VideoPortWritePortUlong(
    PULONG Port,
    ULONG Value
    );
VIDEOPORT_API
VOID
VideoPortWritePortBufferUchar(
    PUCHAR Port,
    _In_reads_(Count) PUCHAR Buffer,
    ULONG Count
    );
VIDEOPORT_API
VOID
VideoPortWritePortBufferUshort(
    PUSHORT Port,
    _In_reads_(Count) PUSHORT Buffer,
    ULONG Count
    );
VIDEOPORT_API
VOID
VideoPortWritePortBufferUlong(
    PULONG Port,
    _In_reads_(Count) PULONG Buffer,
    ULONG Count
    );
VIDEOPORT_API
VOID
VideoPortWriteRegisterUchar(
    PUCHAR Register,
    UCHAR Value
    );
VIDEOPORT_API
VOID
VideoPortWriteRegisterUshort(
    PUSHORT Register,
    USHORT Value
    );
VIDEOPORT_API
VOID
VideoPortWriteRegisterUlong(
    PULONG Register,
    ULONG Value
    );
VIDEOPORT_API
VOID
VideoPortWriteRegisterBufferUchar(
    PUCHAR Register,
    _In_reads_(Count) PUCHAR Buffer,
    ULONG Count
    );
VIDEOPORT_API
VOID
VideoPortWriteRegisterBufferUshort(
    PUSHORT Register,
    _In_reads_(Count) PUSHORT Buffer,
    ULONG Count
    );
VIDEOPORT_API
VOID
VideoPortWriteRegisterBufferUlong(
    PULONG Register,
    _In_reads_(Count) PULONG Buffer,
    ULONG Count
    );
VIDEOPORT_API
VOID
VideoPortZeroDeviceMemory(
    _Out_writes_bytes_(Length) PVOID Destination,
    ULONG Length
    );
VIDEOPORT_API
VOID
VideoPortZeroMemory(
    _Out_writes_bytes_(Length) PVOID Destination,
    ULONG Length
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_preferredFunction("VideoPortAllocateCommonBuffer", "Obsolete")
VIDEOPORT_API
PVOID
VideoPortAllocateContiguousMemory(
    IN PVOID HwDeviceExtension,
    IN ULONG NumberOfBytes,
    IN PHYSICAL_ADDRESS HighestAcceptableAddress
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_preferredFunction("VideoPortAllocateCommonBuffer", "Obsolete")
VIDEOPORT_API
PVOID
VideoPortGetCommonBuffer(
    IN PVOID HwDeviceExtension,
    IN ULONG DesiredLength,
    IN ULONG Alignment,
    OUT PPHYSICAL_ADDRESS LogicalAddress,
    OUT PULONG pActualLength,
    IN BOOLEAN CacheEnabled
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_preferredFunction("VideoPortReleaseCommonBuffer", "Obsolete")
VIDEOPORT_API
VOID
VideoPortFreeCommonBuffer(
    IN PVOID HwDeviceExtension,
    IN ULONG Length,
    IN PVOID VirtualAddress,
    IN PHYSICAL_ADDRESS LogicalAddress,
    IN BOOLEAN CacheEnabled
    );
__drv_preferredFunction("(see documentation)", "Obsolete")
VIDEOPORT_API
PDMA
VideoPortDoDma(
    IN PVOID HwDeviceExtension,
    IN PDMA pDma,
    IN DMA_FLAGS DmaFlags
    );
__drv_preferredFunction("VideoPortLockBuffer", "Obsolete")
VIDEOPORT_API
BOOLEAN
VideoPortLockPages(
    IN PVOID HwDeviceExtension,
    IN OUT PVIDEO_REQUEST_PACKET pVrp,
    IN PEVENT pUEvent,
    IN PEVENT pDisplayEvent,
    IN DMA_FLAGS DmaFlags
    );
__drv_preferredFunction("VideoPortUnlockBuffer", "Obsolete")
VIDEOPORT_API
BOOLEAN
VideoPortUnlockPages(
    PVOID hwDeviceExtension,
    PDMA pDma
    );
__drv_preferredFunction("(see documentation)", "Obsolete")
VIDEOPORT_API
BOOLEAN
VideoPortSignalDmaComplete(
    IN PVOID HwDeviceExtension,
    IN PDMA pDmaHandle
    );
__drv_preferredFunction("(see documentation)", "Obsolete")
VIDEOPORT_API
PVOID
VideoPortGetMdl(
    IN PVOID HwDeviceExtension,
    IN PDMA pDma
    );
__drv_preferredFunction("(see documentation)", "Obsolete")
VIDEOPORT_API
PVOID
VideoPortGetDmaContext(
    IN PVOID HwDeviceExtension,
    IN PDMA pDma
    );
__drv_preferredFunction("(see documentation)", "Obsolete")
VIDEOPORT_API
VOID
VideoPortSetDmaContext(
    IN PVOID HwDeviceExtension,
    OUT PDMA pDma,
    IN PVOID InstanceContext
    );
__drv_preferredFunction("(see documentation)", "Obsolete")
VIDEOPORT_API
ULONG
VideoPortGetBytesUsed(
    IN PVOID HwDeviceExtension,
    IN PDMA pDma
    );
__drv_preferredFunction("(see documentation)", "Obsolete")
VIDEOPORT_API
VOID
VideoPortSetBytesUsed(
    IN PVOID HwDeviceExtension,
    IN OUT PDMA pDma,
    IN ULONG BytesUsed
    );
__drv_preferredFunction("(see documentation)", "Obsolete")
VIDEOPORT_API
PDMA
VideoPortAssociateEventsWithDmaHandle(
    IN PVOID HwDeviceExtension,
    IN OUT PVIDEO_REQUEST_PACKET pVrp,
    IN PVOID MappedUserEvent,
    IN PVOID DisplayDriverEvent
    );
__drv_preferredFunction("(see documentation)", "Obsolete")
VIDEOPORT_API
PDMA
VideoPortMapDmaMemory(
    IN PVOID HwDeviceExtension,
    IN PVIDEO_REQUEST_PACKET pVrp,
    IN PHYSICAL_ADDRESS BoardAddress,
    IN PULONG Length,
    IN PULONG InIoSpace,
    IN PVOID MappedUserEvent,
    IN PVOID DisplayDriverEvent,
    IN OUT PVOID * VirtualAddress
    );
__drv_preferredFunction("(see documentation)", "Obsolete")
VIDEOPORT_API
BOOLEAN
VideoPortUnmapDmaMemory(
    PVOID HwDeviceExtension,
    PVOID VirtualAddress,
    HANDLE ProcessHandle,
    PDMA BoardMemoryHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortCreateSecondaryDisplay(
    IN PVOID HwDeviceExtension,
    IN OUT PVOID *SecondaryDeviceExtension,
    IN ULONG ulFlag
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
PVP_DMA_ADAPTER
VideoPortGetDmaAdapter(
    IN PVOID HwDeviceExtension,
    IN PVP_DEVICE_DESCRIPTION VpDeviceDescription
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VOID
VideoPortPutDmaAdapter(
    IN PVOID HwDeviceExtension,
    IN PVP_DMA_ADAPTER VpDmaAdapter
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
PVOID
VideoPortAllocateCommonBuffer(
    IN PVOID HwDeviceExtension,
    IN PVP_DMA_ADAPTER VpDmaAdapter,
    IN ULONG DesiredLength,
    OUT PPHYSICAL_ADDRESS LogicalAddress,
    IN BOOLEAN CacheEnabled,
    OUT PVOID Reserved
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VOID
VideoPortReleaseCommonBuffer(
    IN PVOID HwDeviceExtension,
    IN PVP_DMA_ADAPTER VpDmaAdapter,
    IN ULONG Length,
    IN PHYSICAL_ADDRESS LogicalAddress,
    IN PVOID VirtualAddress,
    IN BOOLEAN CacheEnabled
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
PVOID
VideoPortLockBuffer(
    IN PVOID HwDeviceExtension,
    IN PVOID BaseAddress,
    IN ULONG Length,
    IN VP_LOCK_OPERATION Operation
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VIDEOPORT_API
VOID
VideoPortUnlockBuffer(
    IN PVOID HwDeviceExtension,
    IN PVOID Mdl
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortStartDma(
    IN PVOID HwDeviceExtension,
    IN PVP_DMA_ADAPTER VpDmaAdapter,
    IN PVOID Mdl,
    IN ULONG Offset,
    IN OUT PULONG pLength,
    IN PEXECUTE_DMA ExecuteDmaRoutine,
    IN PVOID Context,
    IN BOOLEAN WriteToDevice
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortCompleteDma(
    IN PVOID HwDeviceExtension,
    IN PVP_DMA_ADAPTER VpDmaAdapter,
    IN PVP_SCATTER_GATHER_LIST VpScatterGather,
    IN BOOLEAN WriteToDevice
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortCreateEvent(
    IN PVOID HwDeviceExtension,
    IN ULONG EventFlag,
    IN PVOID Unused,
    OUT PEVENT *ppEvent
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortDeleteEvent(
    IN PVOID HwDeviceExtension,
    IN PEVENT pEvent
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VIDEOPORT_API
LONG
VideoPortSetEvent(
    IN PVOID HwDeviceExtension,
    IN PEVENT pEvent
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VIDEOPORT_API
VOID
VideoPortClearEvent(
    IN PVOID HwDeviceExtension,
    IN PEVENT pEvent
);
_IRQL_requires_max_(DISPATCH_LEVEL)
VIDEOPORT_API
LONG
VideoPortReadStateEvent(
    IN PVOID HwDeviceExtension,
    IN PEVENT pEvent
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortWaitForSingleObject(
    IN PVOID HwDeviceExtension,
    IN PVOID Object,
    IN PLARGE_INTEGER Timeout
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(DISPATCH_LEVEL)
VIDEOPORT_API
PVOID
VideoPortAllocatePool(
    IN PVOID HwDeviceExtension,
    IN VP_POOL_TYPE PoolType,
    IN SIZE_T NumberOfBytes,
    IN ULONG Tag
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VIDEOPORT_API
VOID
VideoPortFreePool(
    IN PVOID HwDeviceExtension,
    IN PVOID Ptr
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortCreateSpinLock(
    IN PVOID HwDeviceExtension,
    OUT PSPIN_LOCK *SpinLock
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortDeleteSpinLock(
    IN PVOID HwDeviceExtension,
    IN PSPIN_LOCK SpinLock
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_raises_(DISPATCH_LEVEL)
VIDEOPORT_API
VOID
VideoPortAcquireSpinLock(
    _Inout_ PVOID HwDeviceExtension,
    _In_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PSPIN_LOCK SpinLock,
    _Out_ _At_(*OldIrql, _IRQL_saves_) PUCHAR OldIrql
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(DISPATCH_LEVEL)
VIDEOPORT_API
VOID
VideoPortAcquireSpinLockAtDpcLevel(
    _Inout_ PVOID HwDeviceExtension,
    _In_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PSPIN_LOCK SpinLock
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(DISPATCH_LEVEL)
VIDEOPORT_API
VOID
VideoPortReleaseSpinLock(
    _In_ PVOID HwDeviceExtension,
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PSPIN_LOCK SpinLock,
    _In_ _IRQL_restores_ UCHAR NewIrql
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(DISPATCH_LEVEL)
VIDEOPORT_API
VOID
VideoPortReleaseSpinLockFromDpcLevel(
    _In_ PVOID HwDeviceExtension,
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PSPIN_LOCK SpinLock
    );
VIDEOPORT_API
VOID
VideoPortQuerySystemTime(
    OUT PLARGE_INTEGER CurrentTime
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
BOOLEAN
VideoPortCheckForDeviceExistence(
    IN PVOID HwDeviceExtension,
    IN USHORT VendorId,
    IN USHORT DeviceId,
    IN UCHAR RevisionId,
    IN USHORT SubVendorId,
    IN USHORT SubSystemId,
    IN ULONG Flags
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
ULONG
VideoPortGetAssociatedDeviceID(
    IN PVOID DeviceObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortFlushRegistry(
    PVOID HwDeviceExtension
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortGetVersion(
    IN PVOID HwDeviceExtension,
    IN OUT PVPOSVERSIONINFO pVpOsVersionInfo
    );
VIDEOPORT_API
BOOLEAN
VideoPortIsNoVesa(
    VOID
    );
typedef
VOID
(*PVIDEO_BUGCHECK_CALLBACK) (
    IN PVOID HwDeviceExtension,
    IN ULONG BugcheckCode,
    IN PUCHAR Buffer,
    IN ULONG BufferSize
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VIDEOPORT_API
VP_STATUS
VideoPortRegisterBugcheckCallback(
    IN PVOID HwDeviceExtension,
    IN ULONG BugcheckCode,
    IN PVIDEO_BUGCHECK_CALLBACK Callback,
    IN ULONG BugcheckDataSize
    );
typedef struct _VIDEO_DEBUG_REPORT *PVIDEO_DEBUG_REPORT;
VIDEOPORT_API
PVIDEO_DEBUG_REPORT
VideoPortDbgReportCreate(
    IN PVOID HwDeviceExtension,
    IN ULONG ulCode,
    IN ULONG_PTR ulpArg1,
    IN ULONG_PTR ulpArg2,
    IN ULONG_PTR ulpArg3,
    IN ULONG_PTR ulpArg4
    );
VIDEOPORT_API
BOOLEAN
VideoPortDbgReportSecondaryData(
    IN OUT PVIDEO_DEBUG_REPORT pReport,
    IN _In_reads_bytes_(ulDataSize) PVOID pvData,
    IN ULONG ulDataSize
    );
VIDEOPORT_API
VOID
VideoPortDbgReportComplete(
    IN OUT PVIDEO_DEBUG_REPORT pReport
    );
typedef struct _VIDEO_PORT_DEBUG_REPORT_INTERFACE
{
    IN USHORT Size;
    IN USHORT Version;
    OUT PVOID Context;
    OUT PINTERFACE_REFERENCE InterfaceReference;
    OUT PINTERFACE_DEREFERENCE InterfaceDereference;
    OUT
    PVIDEO_DEBUG_REPORT
    (*DbgReportCreate)(
        IN PVOID HwDeviceExtension,
        IN ULONG ulCode,
        IN ULONG_PTR ulpArg1,
        IN ULONG_PTR ulpArg2,
        IN ULONG_PTR ulpArg3,
        IN ULONG_PTR ulpArg4
        );
    OUT
    BOOLEAN
    (*DbgReportSecondaryData)(
        IN OUT PVIDEO_DEBUG_REPORT pReport,
        IN PVOID pvData,
        IN ULONG ulDataSize
        );
    OUT
    VOID
    (*DbgReportComplete)(
        IN OUT PVIDEO_DEBUG_REPORT pReport
        );
} VIDEO_PORT_DEBUG_REPORT_INTERFACE, *PVIDEO_PORT_DEBUG_REPORT_INTERFACE;
}
#endif
#pragma endregion
