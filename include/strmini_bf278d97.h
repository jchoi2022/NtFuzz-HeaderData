#include <wdm.h>
#include <windef.h>
#include <stdio.h>
#include "ks.h"
typedef unsigned __int64 STREAM_SYSTEM_TIME,
               *PSTREAM_SYSTEM_TIME;
typedef unsigned __int64 STREAM_TIMESTAMP,
               *PSTREAM_TIMESTAMP;
typedef enum {
    DebugLevelFatal = 0,
    DebugLevelError,
    DebugLevelWarning,
    DebugLevelInfo,
    DebugLevelTrace,
    DebugLevelVerbose,
    DebugLevelMaximum
} STREAM_DEBUG_LEVEL;
typedef PHYSICAL_ADDRESS STREAM_PHYSICAL_ADDRESS,
               *PSTREAM_PHYSICAL_ADDRESS;
typedef enum {
    TIME_GET_STREAM_TIME,
    TIME_READ_ONBOARD_CLOCK,
    TIME_SET_ONBOARD_CLOCK
} TIME_FUNCTION;
typedef struct _HW_TIME_CONTEXT {
    struct _HW_DEVICE_EXTENSION *HwDeviceExtension;
    struct _HW_STREAM_OBJECT *HwStreamObject;
    TIME_FUNCTION Function;
    ULONGLONG Time;
    ULONGLONG SystemTime;
} HW_TIME_CONTEXT, *PHW_TIME_CONTEXT;
typedef struct _HW_EVENT_DESCRIPTOR {
    BOOLEAN Enable;
    PKSEVENT_ENTRY EventEntry;
    PKSEVENTDATA EventData;
    union {
    struct _HW_STREAM_OBJECT * StreamObject;
    struct _HW_DEVICE_EXTENSION *DeviceExtension;
    };
    ULONG EnableEventSetIndex;
    PVOID HwInstanceExtension;
    ULONG Reserved;
} HW_EVENT_DESCRIPTOR, *PHW_EVENT_DESCRIPTOR;
#pragma warning( disable : 4115)
typedef VOID
                (STREAMAPI * PHW_RECEIVE_STREAM_DATA_SRB) (
                                             IN struct _HW_STREAM_REQUEST_BLOCK * SRB
);
typedef VOID
                (STREAMAPI * PHW_RECEIVE_STREAM_CONTROL_SRB) (
                                             IN struct _HW_STREAM_REQUEST_BLOCK * SRB
);
typedef NTSTATUS
                (STREAMAPI * PHW_EVENT_ROUTINE) (
                                             IN PHW_EVENT_DESCRIPTOR EventDescriptor
);
#pragma warning( default : 4115)
typedef VOID
                (STREAMAPI * PHW_CLOCK_FUNCTION) (
                                             IN PHW_TIME_CONTEXT HwTimeContext
);
typedef struct _HW_CLOCK_OBJECT {
    PHW_CLOCK_FUNCTION HwClockFunction;
    ULONG ClockSupportFlags;
    ULONG Reserved[2];
} HW_CLOCK_OBJECT, *PHW_CLOCK_OBJECT;
typedef struct _HW_STREAM_OBJECT {
    ULONG SizeOfThisPacket;
    ULONG StreamNumber;
    PVOID HwStreamExtension;
    PHW_RECEIVE_STREAM_DATA_SRB ReceiveDataPacket;
    PHW_RECEIVE_STREAM_CONTROL_SRB ReceiveControlPacket;
    HW_CLOCK_OBJECT HwClockObject;
    BOOLEAN Dma;
    BOOLEAN Pio;
    PVOID HwDeviceExtension;
    ULONG StreamHeaderMediaSpecific;
    ULONG StreamHeaderWorkspace;
    BOOLEAN Allocator;
    PHW_EVENT_ROUTINE HwEventRoutine;
    ULONG Reserved[2];
} HW_STREAM_OBJECT, *PHW_STREAM_OBJECT;
typedef struct _HW_STREAM_HEADER {
    ULONG NumberOfStreams;
    ULONG SizeOfHwStreamInformation;
    ULONG NumDevPropArrayEntries;
    PKSPROPERTY_SET DevicePropertiesArray;
    ULONG NumDevEventArrayEntries;
    PKSEVENT_SET DeviceEventsArray;
    PKSTOPOLOGY Topology;
    PHW_EVENT_ROUTINE DeviceEventRoutine;
    LONG NumDevMethodArrayEntries;
    PKSMETHOD_SET DeviceMethodsArray;
} HW_STREAM_HEADER, *PHW_STREAM_HEADER;
typedef struct _HW_STREAM_INFORMATION {
    ULONG NumberOfPossibleInstances;
    KSPIN_DATAFLOW DataFlow;
    BOOLEAN DataAccessible;
    ULONG NumberOfFormatArrayEntries;
    _Field_size_(NumberOfFormatArrayEntries)
    PKSDATAFORMAT* StreamFormatsArray;
    PVOID ClassReserved[4];
    ULONG NumStreamPropArrayEntries;
    _Field_size_(NumStreamPropArrayEntries)
    PKSPROPERTY_SET StreamPropertiesArray;
    ULONG NumStreamEventArrayEntries;
    _Field_size_(NumStreamEventArrayEntries)
    PKSEVENT_SET StreamEventsArray;
    GUID* Category;
    GUID* Name;
    ULONG MediumsCount;
    _Field_size_(MediumsCount)
    const KSPIN_MEDIUM* Mediums;
    BOOLEAN BridgeStream;
    ULONG Reserved[2];
} HW_STREAM_INFORMATION, *PHW_STREAM_INFORMATION;
typedef struct _HW_STREAM_DESCRIPTOR {
    HW_STREAM_HEADER StreamHeader;
    HW_STREAM_INFORMATION StreamInfo;
} HW_STREAM_DESCRIPTOR, *PHW_STREAM_DESCRIPTOR;
typedef struct _STREAM_TIME_REFERENCE {
    STREAM_TIMESTAMP CurrentOnboardClockValue;
    LARGE_INTEGER OnboardClockFrequency;
    LARGE_INTEGER CurrentSystemTime;
    ULONG Reserved[2];
} STREAM_TIME_REFERENCE, *PSTREAM_TIME_REFERENCE;
typedef struct _STREAM_DATA_INTERSECT_INFO {
    ULONG StreamNumber;
    PKSDATARANGE DataRange;
    _Field_size_bytes_(SizeOfDataFormatBuffer)
    PVOID DataFormatBuffer;
    ULONG SizeOfDataFormatBuffer;
} STREAM_DATA_INTERSECT_INFO, *PSTREAM_DATA_INTERSECT_INFO;
typedef struct _STREAM_PROPERTY_DESCRIPTOR {
    PKSPROPERTY Property;
    ULONG PropertySetID;
    PVOID PropertyInfo;
    ULONG PropertyInputSize;
    ULONG PropertyOutputSize;
} STREAM_PROPERTY_DESCRIPTOR, *PSTREAM_PROPERTY_DESCRIPTOR;
typedef struct _STREAM_METHOD_DESCRIPTOR {
    ULONG MethodSetID;
    PKSMETHOD Method;
    PVOID MethodInfo;
    LONG MethodInputSize;
    LONG MethodOutputSize;
} STREAM_METHOD_DESCRIPTOR, *PSTREAM_METHOD_DESCRIPTOR;
typedef enum _SRB_COMMAND {
    SRB_READ_DATA,
    SRB_WRITE_DATA,
    SRB_GET_STREAM_STATE,
    SRB_SET_STREAM_STATE,
    SRB_SET_STREAM_PROPERTY,
    SRB_GET_STREAM_PROPERTY,
    SRB_OPEN_MASTER_CLOCK,
    SRB_INDICATE_MASTER_CLOCK,
    SRB_UNKNOWN_STREAM_COMMAND,
    SRB_SET_STREAM_RATE,
    SRB_PROPOSE_DATA_FORMAT,
    SRB_CLOSE_MASTER_CLOCK,
    SRB_PROPOSE_STREAM_RATE,
    SRB_SET_DATA_FORMAT,
    SRB_GET_DATA_FORMAT,
    SRB_BEGIN_FLUSH,
    SRB_END_FLUSH,
    SRB_GET_STREAM_INFO = 0x100,
    SRB_OPEN_STREAM,
    SRB_CLOSE_STREAM,
    SRB_OPEN_DEVICE_INSTANCE,
    SRB_CLOSE_DEVICE_INSTANCE,
    SRB_GET_DEVICE_PROPERTY,
    SRB_SET_DEVICE_PROPERTY,
    SRB_INITIALIZE_DEVICE,
    SRB_CHANGE_POWER_STATE,
    SRB_UNINITIALIZE_DEVICE,
    SRB_UNKNOWN_DEVICE_COMMAND,
    SRB_PAGING_OUT_DRIVER,
    SRB_GET_DATA_INTERSECTION,
    SRB_INITIALIZATION_COMPLETE,
    SRB_SURPRISE_REMOVAL
    , SRB_DEVICE_METHOD
    , SRB_STREAM_METHOD
    , SRB_NOTIFY_IDLE_STATE
} SRB_COMMAND;
typedef struct {
    PHYSICAL_ADDRESS PhysicalAddress;
    ULONG Length;
} KSSCATTER_GATHER, *PKSSCATTER_GATHER;
typedef struct _HW_STREAM_REQUEST_BLOCK {
    ULONG SizeOfThisPacket;
    SRB_COMMAND Command;
    NTSTATUS Status;
    PHW_STREAM_OBJECT StreamObject;
    PVOID HwDeviceExtension;
    PVOID SRBExtension;
    union _CommandData {
     _Field_size_(_Inexpressible_(NumberOfBuffers))
        PKSSTREAM_HEADER DataBufferArray;
        PHW_STREAM_DESCRIPTOR StreamBuffer;
        KSSTATE StreamState;
        PSTREAM_TIME_REFERENCE TimeReference;
        PSTREAM_PROPERTY_DESCRIPTOR PropertyInfo;
        PKSDATAFORMAT OpenFormat;
        struct _PORT_CONFIGURATION_INFORMATION *ConfigInfo;
        HANDLE MasterClockHandle;
        DEVICE_POWER_STATE DeviceState;
        PSTREAM_DATA_INTERSECT_INFO IntersectInfo;
        PVOID MethodInfo;
        LONG FilterTypeIndex;
        BOOLEAN Idle;
    } CommandData;
    ULONG NumberOfBuffers;
    ULONG TimeoutCounter;
    ULONG TimeoutOriginal;
    struct _HW_STREAM_REQUEST_BLOCK *NextSRB;
    PIRP Irp;
    ULONG Flags;
    PVOID HwInstanceExtension;
    union {
        ULONG NumberOfBytesToTransfer;
        ULONG ActualBytesTransferred;
    };
    _Field_size_(NumberOfScatterGatherElements)
    PKSSCATTER_GATHER ScatterGatherBuffer;
    ULONG NumberOfPhysicalPages;
    ULONG NumberOfScatterGatherElements;
    ULONG Reserved[1];
} HW_STREAM_REQUEST_BLOCK, *PHW_STREAM_REQUEST_BLOCK;
typedef enum {
    PerRequestExtension,
    DmaBuffer,
    SRBDataBuffer
} STREAM_BUFFER_TYPE;
typedef struct _ACCESS_RANGE {
    _Field_size_bytes_(RangeLength)
    STREAM_PHYSICAL_ADDRESS RangeStart;
    ULONG RangeLength;
    BOOLEAN RangeInMemory;
    ULONG Reserved;
} ACCESS_RANGE, *PACCESS_RANGE;
typedef struct _PORT_CONFIGURATION_INFORMATION {
    ULONG SizeOfThisPacket;
    PVOID HwDeviceExtension;
    PDEVICE_OBJECT ClassDeviceObject;
    PDEVICE_OBJECT PhysicalDeviceObject;
    ULONG SystemIoBusNumber;
    INTERFACE_TYPE AdapterInterfaceType;
    ULONG BusInterruptLevel;
    ULONG BusInterruptVector;
    KINTERRUPT_MODE InterruptMode;
    ULONG DmaChannel;
    ULONG NumberOfAccessRanges;
    _Field_size_(NumberOfAccessRanges)
    PACCESS_RANGE AccessRanges;
    ULONG StreamDescriptorSize;
    PIRP Irp;
    PKINTERRUPT InterruptObject;
    PADAPTER_OBJECT DmaAdapterObject;
    PDEVICE_OBJECT RealPhysicalDeviceObject;
    ULONG Reserved[1];
} PORT_CONFIGURATION_INFORMATION, *PPORT_CONFIGURATION_INFORMATION;
typedef VOID
                (STREAMAPI * PHW_RECEIVE_DEVICE_SRB) (
                                             IN PHW_STREAM_REQUEST_BLOCK SRB
);
typedef VOID
                (STREAMAPI * PHW_CANCEL_SRB) (
                                             IN PHW_STREAM_REQUEST_BLOCK SRB
);
typedef VOID
                (STREAMAPI * PHW_REQUEST_TIMEOUT_HANDLER) (
                                             IN PHW_STREAM_REQUEST_BLOCK SRB
);
typedef BOOLEAN
                (STREAMAPI * PHW_INTERRUPT) (
                                                    IN PVOID DeviceExtension
);
typedef VOID
                (STREAMAPI * PHW_TIMER_ROUTINE) (
                                             IN PVOID Context
);
typedef VOID
                (STREAMAPI * PHW_PRIORITY_ROUTINE) (
                                             IN PVOID Context
);
typedef VOID
                (STREAMAPI * PHW_QUERY_CLOCK_ROUTINE) (
                                             IN PHW_TIME_CONTEXT TimeContext
);
typedef BOOLEAN
                (STREAMAPI * PHW_RESET_ADAPTER) (
                                                    IN PVOID DeviceExtension
);
typedef enum _STREAM_MINIDRIVER_STREAM_NOTIFICATION_TYPE {
    ReadyForNextStreamDataRequest,
    ReadyForNextStreamControlRequest,
    HardwareStarved,
    StreamRequestComplete,
    SignalMultipleStreamEvents,
    SignalStreamEvent,
    DeleteStreamEvent,
    StreamNotificationMaximum
} STREAM_MINIDRIVER_STREAM_NOTIFICATION_TYPE, *PSTREAM_MINIDRIVER_STREAM_NOTIFICATION_TYPE;
typedef enum _STREAM_MINIDRIVER_DEVICE_NOTIFICATION_TYPE {
    ReadyForNextDeviceRequest,
    DeviceRequestComplete,
    SignalMultipleDeviceEvents,
    SignalDeviceEvent,
    DeleteDeviceEvent,
    SignalMultipleDeviceInstanceEvents,
    DeviceNotificationMaximum
} STREAM_MINIDRIVER_DEVICE_NOTIFICATION_TYPE, *PSTREAM_MINIDRIVER_DEVICE_NOTIFICATION_TYPE;
typedef struct _HW_INITIALIZATION_DATA {
    union {
        #define STREAM_CLASS_VERSION_20 0x0200
        ULONG HwInitializationDataSize;
        struct {
            USHORT SizeOfThisPacket;
            USHORT StreamClassVersion;
        };
    };
    PHW_INTERRUPT HwInterrupt;
    PHW_RECEIVE_DEVICE_SRB HwReceivePacket;
    PHW_CANCEL_SRB HwCancelPacket;
    PHW_REQUEST_TIMEOUT_HANDLER HwRequestTimeoutHandler;
    ULONG DeviceExtensionSize;
    ULONG PerRequestExtensionSize;
    ULONG PerStreamExtensionSize;
    ULONG FilterInstanceExtensionSize;
    BOOLEAN BusMasterDMA;
    BOOLEAN Dma24BitAddresses;
    ULONG BufferAlignment;
    BOOLEAN TurnOffSynchronization;
    ULONG DmaBufferSize;
    ULONG NumNameExtensions;
    _Field_size_(NumNameExtensions)
    PWCHAR *NameExtensionArray;
} HW_INITIALIZATION_DATA, *PHW_INITIALIZATION_DATA;
typedef enum _STREAM_PRIORITY {
    High,
    Dispatch,
    Low,
    LowToHigh
} STREAM_PRIORITY, *PSTREAM_PRIORITY;
VOID STREAMAPI
                StreamClassScheduleTimer(
                                   _In_opt_ PHW_STREAM_OBJECT StreamObject,
                                         _In_ PVOID HwDeviceExtension,
                                         _In_ ULONG NumberOfMicroseconds,
                                         _In_ PHW_TIMER_ROUTINE TimerRoutine,
                                         _In_ PVOID Context
);
VOID STREAMAPI
                StreamClassCallAtNewPriority(
                                       _In_opt_ PHW_STREAM_OBJECT StreamObject,
                                             _In_ PVOID HwDeviceExtension,
                                             _In_ STREAM_PRIORITY Priority,
                                          _In_ PHW_PRIORITY_ROUTINE PriorityRoutine,
          _In_ PVOID Context
);
VOID __cdecl
                StreamClassStreamNotification(
                                              _In_ STREAM_MINIDRIVER_STREAM_NOTIFICATION_TYPE NotificationType,
                                              _In_ PHW_STREAM_OBJECT StreamObject,
                                              ...
);
VOID __cdecl
                StreamClassDeviceNotification(
                                              _In_ STREAM_MINIDRIVER_DEVICE_NOTIFICATION_TYPE NotificationType,
                                              _In_ PVOID HwDeviceExtension,
                                              ...
);
STREAM_PHYSICAL_ADDRESS STREAMAPI
                StreamClassGetPhysicalAddress(
                                               _In_ PVOID HwDeviceExtension,
                                        _In_opt_ PHW_STREAM_REQUEST_BLOCK HwSRB,
                                               _In_ PVOID VirtualAddress,
                                               _In_ STREAM_BUFFER_TYPE Type,
                                               _Out_ ULONG * Length
);
PVOID STREAMAPI
                StreamClassGetDmaBuffer(
                                        _In_ PVOID HwDeviceExtension
);
VOID __cdecl
                StreamClassDebugPrint(
                                      _In_ STREAM_DEBUG_LEVEL DebugPrintLevel,
                                      _In_ PCSTR DebugMessage,
                                      ...
);
__analysis_noreturn
VOID STREAMAPI
                StreamClassDebugAssert(
                                       _In_ IN PCHAR File,
                                       _In_ IN ULONG Line,
                                       _In_ IN PCHAR AssertText,
                                       _In_ IN ULONG AssertValue
);
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS STREAMAPI
                StreamClassRegisterAdapter(
                                            _In_ PVOID Argument1,
                                            _In_ PVOID Argument2,
                              _In_ PHW_INITIALIZATION_DATA HwInitializationData
);
VOID
StreamClassAbortOutstandingRequests(
                                    _In_ PVOID HwDeviceExtension,
                                    _In_opt_ PHW_STREAM_OBJECT HwStreamObject,
                                    _In_ NTSTATUS Status
);
VOID
StreamClassQueryMasterClock(
                            _In_ PHW_STREAM_OBJECT HwStreamObject,
                            _In_ HANDLE MasterClockHandle,
                            _In_ TIME_FUNCTION TimeFunction,
                            _In_ PHW_QUERY_CLOCK_ROUTINE ClockCallbackRoutine
);
PKSEVENT_ENTRY
StreamClassGetNextEvent(
                        _In_opt_ PVOID HwInstanceExtension_OR_HwDeviceExtension,
                        _In_opt_ PHW_STREAM_OBJECT HwStreamObject,
                        _In_opt_ GUID * EventGuid,
                        _In_ ULONG EventItem,
                        _In_opt_ PKSEVENT_ENTRY CurrentEvent
);
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
StreamClassRegisterFilterWithNoKSPins(
                                      _In_ PDEVICE_OBJECT DeviceObject,
                                      _In_ const GUID * InterfaceClassGUID,
                                      _In_ ULONG PinCount,
                                      _In_reads_(PinCount) BOOL * PinDirection,
                                      _In_reads_(PinCount) KSPIN_MEDIUM * MediumList,
                                      _In_reads_opt_(PinCount) GUID * CategoryList
);
_IRQL_requires_max_(PASSIVE_LEVEL)
BOOLEAN STREAMAPI
StreamClassReadWriteConfig(
                           _In_ PVOID HwDeviceExtension,
                           _In_ BOOLEAN Read,
                           _Inout_updates_bytes_(Length) PVOID Buffer,
                           _In_ ULONG Offset,
                           _In_ ULONG Length
);
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID STREAMAPI
StreamClassQueryMasterClockSync(
                         _In_ HANDLE MasterClockHandle,
                                _Inout_ PHW_TIME_CONTEXT TimeContext
);
VOID STREAMAPI
StreamClassCompleteRequestAndMarkQueueReady(
                                            _In_ PHW_STREAM_REQUEST_BLOCK Srb
);
DECLSPEC_DEPRECATED_DDK
VOID STREAMAPI
StreamClassReenumerateStreams(
                              _In_ PVOID HwDeviceExtension,
                              _In_ ULONG StreamDescriptorSize
);
DECLSPEC_DEPRECATED_DDK
VOID STREAMAPI
StreamClassFilterReenumerateStreams(
                                    _In_ PVOID HwInstanceExtension,
                                    _In_ ULONG StreamDescriptorSize
);
