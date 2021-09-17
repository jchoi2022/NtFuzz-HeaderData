       
#include <wdm.h>
#include <acpitabl.h>
    ((_Pointer)->Header.TableVersion = DMA_INITIALIZATION_VERSION), \
    ((_Pointer)->Header.TableSize = sizeof(DMA_INITIALIZATION_BLOCK))
    ((_Pointer)->Header.TableVersion = DMA_CHANNEL_INITIALIZATION_VERSION), \
    ((_Pointer)->Header.TableSize = sizeof(DMA_CHANNEL_INITIALIZATION_BLOCK))
    ((_Pointer)->Header.TableVersion = TIMER_INITIALIZATION_VERSION), \
    ((_Pointer)->Header.TableSize = sizeof(TIMER_INITIALIZATION_BLOCK))
                              TIMER_GENERATES_LINE_BASED_INTERRUPTS | \
                              TIMER_GENERATES_MSI_INTERRUPTS | \
                              TIMER_GENERATES_INTERNAL_INTERRUPTS)
                       TIMER_IDLE_STATE_VARIANT)
typedef struct _SOC_INITIALIZATION_HEADER {
    ULONG TableVersion;
    ULONG TableSize;
} SOC_INITIALIZATION_HEADER, *PSOC_INITIALIZATION_HEADER;
typedef enum _TIMER_MODE {
    TimerModeInvalid,
    TimerModePseudoPeriodic,
    TimerModePeriodic,
    TimerModeOneShot,
    MaxTimerModes
} TIMER_MODE, *PTIMER_MODE;
typedef enum _KNOWN_TIMER_TYPE {
    TimerInvalid,
    TimerAcpi,
    TimerCmosRtc,
    TimerHpet,
    Timer8254,
    TimerProcessor,
    TimerSfi,
    TimerApic,
    TimerHypervisor,
    TimerBrokenAcpi,
    TimerCycleCounter,
    TimerGit,
    TimerVPPT,
    TimerWDAT,
    TimerGitWatchdog,
    TimerART,
    TimerGitAux,
    TimerUnknown = 0x1000
} KNOWN_TIMER_TYPE, *PKNOWN_TIMER_TYPE;
typedef
_Function_class_(TIMER_INITIALIZE)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
TIMER_INITIALIZE (
    _In_ PVOID TimerData
    );
typedef TIMER_INITIALIZE *PTIMER_INITIALIZE;
typedef
_Function_class_(TIMER_QUERY_COUNTER)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
ULONGLONG
TIMER_QUERY_COUNTER (
    _In_ PVOID TimerData
    );
typedef TIMER_QUERY_COUNTER *PTIMER_QUERY_COUNTER;
typedef
_Function_class_(TIMER_ACKNOWLEDGE_INTERRUPT)
_IRQL_requires_same_
_IRQL_requires_max_(CLOCK_LEVEL)
VOID
TIMER_ACKNOWLEDGE_INTERRUPT (
    _In_ PVOID TimerData
    );
typedef TIMER_ACKNOWLEDGE_INTERRUPT *PTIMER_ACKNOWLEDGE_INTERRUPT;
typedef
_Function_class_(TIMER_SET_DIVISOR)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
VOID
TIMER_SET_DIVISOR (
    _In_ PVOID TimerData,
    _In_ ULONG NewDivisor
    );
typedef TIMER_SET_DIVISOR *PTIMER_SET_DIVISOR;
typedef
_Function_class_(TIMER_ARM_TIMER)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
TIMER_ARM_TIMER (
    _In_ PVOID TimerData,
    _In_ TIMER_MODE Mode,
    _In_ ULONGLONG TickCount
    );
typedef TIMER_ARM_TIMER *PTIMER_ARM_TIMER;
typedef
_Function_class_(TIMER_SET_MESSAGE_INTERRUPT_ROUTING)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
TIMER_SET_MESSAGE_INTERRUPT_ROUTING (
    _In_ PVOID TimerData,
    _In_ BOOLEAN Enable,
    _In_ PHYSICAL_ADDRESS MessageAddress,
    _In_ ULONG MessageData
    );
typedef TIMER_SET_MESSAGE_INTERRUPT_ROUTING *PTIMER_SET_MESSAGE_INTERRUPT_ROUTING;
typedef
_Function_class_(TIMER_CHANGE_LOSSLESS_RATE)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
ULONG
TIMER_CHANGE_LOSSLESS_RATE (
    _In_ PVOID TimerData,
    _In_ ULONGLONG NewTickCount
    );
typedef TIMER_CHANGE_LOSSLESS_RATE *PTIMER_CHANGE_LOSSLESS_RATE;
typedef
_Function_class_(TIMER_SET_INTERRUPT_VECTOR)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
VOID
TIMER_SET_INTERRUPT_VECTOR (
    _In_ PVOID TimerData,
    _In_ ULONG Vector
    );
typedef TIMER_SET_INTERRUPT_VECTOR *PTIMER_SET_INTERRUPT_VECTOR;
typedef
_Function_class_(TIMER_FIXED_STALL)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
ULONGLONG
TIMER_FIXED_STALL (
    _In_ PVOID TimerData,
    _In_ ULONGLONG MinimumStallIn100ns
    );
typedef TIMER_FIXED_STALL *PTIMER_FIXED_STALL;
typedef
_Function_class_(TIMER_STOP)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
VOID
TIMER_STOP (
    _In_ PVOID TimerData
    );
typedef TIMER_STOP *PTIMER_STOP;
typedef struct _TIMER_FUNCTION_TABLE {
    PTIMER_INITIALIZE Initialize;
    PTIMER_QUERY_COUNTER QueryCounter;
    PTIMER_ACKNOWLEDGE_INTERRUPT AcknowledgeInterrupt;
    PTIMER_ARM_TIMER ArmTimer;
    PTIMER_STOP Stop;
    PTIMER_SET_DIVISOR SetDivisor;
    PTIMER_SET_MESSAGE_INTERRUPT_ROUTING SetMessageInterruptRouting;
    PTIMER_CHANGE_LOSSLESS_RATE LosslessRateChange;
    PTIMER_SET_INTERRUPT_VECTOR SetInterruptVector;
    PTIMER_FIXED_STALL FixedStall;
} TIMER_FUNCTION_TABLE, *PTIMER_FUNCTION_TABLE;
typedef struct _TIMER_INTERRUPT {
    LONG LegacyIrq;
    LONG Gsi;
    KINTERRUPT_POLARITY Polarity;
    KINTERRUPT_MODE Mode;
} TIMER_INTERRUPT, *PTIMER_INTERRUPT;
typedef struct _TIMER_INITIALIZATION_BLOCK {
    SOC_INITIALIZATION_HEADER Header;
    TIMER_FUNCTION_TABLE FunctionTable;
    PVOID InternalData;
    ULONG InternalDataSize;
    ULONG CounterBitWidth;
    ULONGLONG CounterFrequency;
    ULONG MaxDivisor;
    ULONG Capabilities;
    TIMER_INTERRUPT Interrupt;
    KNOWN_TIMER_TYPE KnownType;
    ULONG Identifier;
} TIMER_INITIALIZATION_BLOCK, *PTIMER_INITIALIZATION_BLOCK;
typedef enum _DMA_INTERRUPT_TYPE {
    InterruptTypeCompletion,
    InterruptTypeError,
    InterruptTypeCancelled
} DMA_INTERRUPT_TYPE, *PDMA_INTERRUPT_TYPE;
typedef struct _DMA_REQUEST_LINE_BINDING_DESCRIPTION {
    ULONG RequestLine;
    ULONG ChannelNumber;
} DMA_REQUEST_LINE_BINDING_DESCRIPTION, *PDMA_REQUEST_LINE_BINDING_DESCRIPTION;
typedef struct _DMA_SCATTER_GATHER_ELEMENT {
    PHYSICAL_ADDRESS Address;
    ULONG Length;
    ULONG_PTR Reserved;
} DMA_SCATTER_GATHER_ELEMENT, *PDMA_SCATTER_GATHER_ELEMENT;
#pragma warning(push)
#pragma warning(disable:4200)
typedef struct _DMA_SCATTER_GATHER_LIST {
    ULONG NumberOfElements;
    ULONG_PTR Reserved;
    SCATTER_GATHER_ELEMENT Elements[];
} DMA_SCATTER_GATHER_LIST, *PDMA_SCATTER_GATHER_LIST;
#pragma warning(pop)
typedef
_Function_class_(DMA_INITIALIZE_CONTROLLER)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
VOID
DMA_INITIALIZE_CONTROLLER (
    _In_ PVOID ControllerContext
    );
typedef DMA_INITIALIZE_CONTROLLER *PDMA_INITIALIZE_CONTROLLER;
typedef
_Function_class_(DMA_VALIDATE_REQUEST_LINE_BINDING)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
BOOLEAN
DMA_VALIDATE_REQUEST_LINE_BINDING (
    _In_ PVOID ControllerContext,
    _In_ PDMA_REQUEST_LINE_BINDING_DESCRIPTION BindingDescription
    );
typedef DMA_VALIDATE_REQUEST_LINE_BINDING *PDMA_VALIDATE_REQUEST_LINE_BINDING;
typedef
_Function_class_(DMA_QUERY_MAX_FRAGMENTS)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
ULONG
DMA_QUERY_MAX_FRAGMENTS (
    _In_ PVOID ControllerContext,
    _In_ ULONG ChannelNumber,
    _In_ ULONG MaxFragmentsRequested
    );
typedef DMA_QUERY_MAX_FRAGMENTS *PDMA_QUERY_MAX_FRAGMENTS;
typedef
_Function_class_(DMA_PROGRAM_CHANNEL)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
VOID
DMA_PROGRAM_CHANNEL (
    _In_ PVOID ControllerContext,
    _In_ ULONG ChannelNumber,
    _In_ ULONG RequestLine,
    _In_ PDMA_SCATTER_GATHER_LIST MemoryAddress,
    _In_ PHYSICAL_ADDRESS DeviceAddress,
    _In_ BOOLEAN WriteToDevice,
    _In_ BOOLEAN LoopTransfer
    );
typedef DMA_PROGRAM_CHANNEL *PDMA_PROGRAM_CHANNEL;
typedef
_Function_class_(DMA_CONFIGURE_CHANNEL)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
DMA_CONFIGURE_CHANNEL (
    _In_ PVOID ControllerContext,
    _In_ ULONG ChannelNumber,
    _In_ ULONG FunctionNumber,
    _In_ PVOID Context
    );
typedef DMA_CONFIGURE_CHANNEL *PDMA_CONFIGURE_CHANNEL;
typedef
_Function_class_(DMA_FLUSH_CHANNEL)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
VOID
DMA_FLUSH_CHANNEL (
    _In_ PVOID ControllerContext,
    _In_ ULONG ChannelNumber
    );
typedef DMA_FLUSH_CHANNEL *PDMA_FLUSH_CHANNEL;
typedef
_Function_class_(DMA_HANDLE_INTERRUPT)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
BOOLEAN
DMA_HANDLE_INTERRUPT (
    _In_ PVOID ControllerContext,
    _Out_ PULONG ChannelNumber,
    _Out_ PDMA_INTERRUPT_TYPE InterruptType
    );
typedef DMA_HANDLE_INTERRUPT *PDMA_HANDLE_INTERRUPT;
typedef
_Function_class_(DMA_READ_DMA_COUNTER)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
ULONG
DMA_READ_DMA_COUNTER (
    _In_ PVOID ControllerContext,
    _In_ ULONG ChannelNumber
    );
typedef DMA_READ_DMA_COUNTER *PDMA_READ_DMA_COUNTER;
typedef
_Function_class_(DMA_REPORT_COMMON_BUFFER)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
VOID
DMA_REPORT_COMMON_BUFFER (
    _In_ PVOID ControllerContext,
    _In_ ULONG ChannelNumber,
    _In_ PVOID VirtualAddress,
    _In_ PHYSICAL_ADDRESS LogicalAddress
    );
typedef DMA_REPORT_COMMON_BUFFER *PDMA_REPORT_COMMON_BUFFER;
typedef
_Function_class_(DMA_CANCEL_TRANSFER)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
BOOLEAN
DMA_CANCEL_TRANSFER (
    _In_ PVOID ControllerContext,
    _In_ ULONG ChannelNumber
    );
typedef DMA_CANCEL_TRANSFER *PDMA_CANCEL_TRANSFER;
typedef struct _DMA_FUNCTION_TABLE {
    PDMA_INITIALIZE_CONTROLLER InitializeController;
    PDMA_VALIDATE_REQUEST_LINE_BINDING ValidateRequestLineBinding;
    PDMA_QUERY_MAX_FRAGMENTS QueryMaxFragments;
    PDMA_PROGRAM_CHANNEL ProgramChannel;
    PDMA_CONFIGURE_CHANNEL ConfigureChannel;
    PDMA_FLUSH_CHANNEL FlushChannel;
    PDMA_HANDLE_INTERRUPT HandleInterrupt;
    PDMA_READ_DMA_COUNTER ReadDmaCounter;
    PDMA_REPORT_COMMON_BUFFER ReportCommonBuffer;
    PDMA_CANCEL_TRANSFER CancelTransfer;
} DMA_FUNCTION_TABLE, *PDMA_FUNCTION_TABLE;
typedef struct _DMA_INITIALIZATION_BLOCK {
    SOC_INITIALIZATION_HEADER Header;
    ULONG ControllerId;
    ULONG ChannelCount;
    BOOLEAN CacheCoherent;
    ULONG DmaAddressWidth;
    ULONG SupportedPortWidths;
    ULONG MinimumTransferUnit;
    ULONG MinimumRequestLine;
    ULONG MaximumRequestLine;
    BOOLEAN GeneratesInterrupt;
    LONG Gsi;
    KINTERRUPT_POLARITY InterruptPolarity;
    KINTERRUPT_MODE InterruptMode;
    PVOID InternalData;
    ULONG InternalDataSize;
    PDMA_FUNCTION_TABLE Operations;
} DMA_INITIALIZATION_BLOCK, *PDMA_INITIALIZATION_BLOCK;
typedef struct _DMA_CHANNEL_INITIALIZATION_BLOCK {
    SOC_INITIALIZATION_HEADER Header;
    ULONG ControllerId;
    BOOLEAN GeneratesInterrupt;
    LONG Gsi;
    KINTERRUPT_POLARITY InterruptPolarity;
    KINTERRUPT_MODE InterruptMode;
    ULONG CommonBufferLength;
    ULONG ChannelNumber;
} DMA_CHANNEL_INITIALIZATION_BLOCK, *PDMA_CHANNEL_INITIALIZATION_BLOCK;
NTSTATUS
AddResourceGroup (
    _In_ ULONG Handle,
    _In_ PCSRT_RESOURCE_GROUP_HEADER ResourceGroup
    );
NTSTATUS
RegisterResourceDescriptor (
    _In_ ULONG Handle,
    _In_ PCSRT_RESOURCE_GROUP_HEADER ResourceGroup,
    _In_ PCSRT_RESOURCE_DESCRIPTOR_HEADER ResourceDescriptor,
    _In_opt_ PVOID ResourceDescriptorInfo
    );
PCSRT_RESOURCE_DESCRIPTOR_HEADER
GetNextResourceDescriptor (
    _In_ ULONG Handle,
    _In_ PCSRT_RESOURCE_GROUP_HEADER ResourceGroup,
    _In_opt_ PCSRT_RESOURCE_DESCRIPTOR_HEADER ResourceDescriptor,
    _In_ USHORT ResourceType,
    _In_ USHORT ResourceSubtype,
    _In_ ULONG ResourceID
    );
PVOID
GetAcpiTable (
    _In_ ULONG Handle,
    _In_ ULONG Signature,
    _In_opt_ PCSTR OemId,
    _In_opt_ PCSTR OemTableId
    );
PVOID
HalMapIoSpace (
    _In_ PHYSICAL_ADDRESS PhysicalAddress,
    _In_ SIZE_T NumberOfBytes,
    _In_ MEMORY_CACHING_TYPE CacheType
    );
VOID
HalUnmapIoSpace (
    _In_ PVOID VirtualAddress,
    _In_ SIZE_T NumberOfBytes
    );
NTSTATUS
HalRegisterPermanentAddressUsage (
    _In_ PHYSICAL_ADDRESS PhysicalAddress,
    _In_ ULONG SizeInBytes
    );
