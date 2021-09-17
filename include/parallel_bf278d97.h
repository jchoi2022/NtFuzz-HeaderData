#include <ntddpar.h>
typedef struct _PARPORT_REMOVAL_RELATIONS {
    PDEVICE_OBJECT DeviceObject;
    ULONG Flags;
    PUNICODE_STRING DeviceName;
} PARPORT_REMOVAL_RELATIONS, *PPARPORT_REMOVAL_RELATIONS;
static UCHAR ModeQualifier[MODE_LEN_1284_3] = { 0xAA, 0x55, 0x00, 0xFF, 0x87, 0x78, 0xFF };
static UCHAR LegacyZipModeQualifier[LEGACYZIP_MODE_LEN] = { 0x00, 0x3c, 0x20 };
typedef enum {
    P12843DL_OFF,
    P12843DL_DOT3_DL,
    P12843DL_MLC_DL,
    P12843DL_DOT4_DL
} P12843_DL_MODES;
typedef
BOOLEAN
(*PPARALLEL_TRY_ALLOCATE_ROUTINE) (
 _In_ PVOID TryAllocateContext
 );
typedef
VOID
(*PPARALLEL_FREE_ROUTINE) (
 _In_ PVOID FreeContext
 );
typedef
ULONG
(*PPARALLEL_QUERY_WAITERS_ROUTINE) (
 _In_ PVOID QueryAllocsContext
 );
typedef
NTSTATUS
(*PPARALLEL_SET_CHIP_MODE) (
 _In_ PVOID SetChipContext,
 _In_ UCHAR ChipMode
 );
typedef
NTSTATUS
(*PPARALLEL_CLEAR_CHIP_MODE) (
 _In_ PVOID ClearChipContext,
 _In_ UCHAR ChipMode
 );
typedef
NTSTATUS
(*PPARALLEL_TRY_SELECT_ROUTINE) (
 _In_ PVOID TrySelectContext,
 _In_ PVOID TrySelectCommand
 );
typedef
NTSTATUS
(*PPARALLEL_DESELECT_ROUTINE) (
 _In_ PVOID DeselectContext,
 _In_ PVOID DeselectCommand
 );
typedef
NTSTATUS
(*PPARCHIP_SET_CHIP_MODE) (
 _In_ PVOID SetChipContext,
 _In_ UCHAR ChipMode
 );
typedef
NTSTATUS
(*PPARCHIP_CLEAR_CHIP_MODE) (
 _In_ PVOID ClearChipContext,
 _In_ UCHAR ChipMode
 );
typedef struct _PARALLEL_PARCHIP_INFO {
    PUCHAR Controller;
    PUCHAR EcrController;
    ULONG HardwareModes;
    PPARCHIP_SET_CHIP_MODE ParChipSetMode;
    PPARCHIP_CLEAR_CHIP_MODE ParChipClearMode;
    PVOID Context;
    BOOLEAN success;
} PARALLEL_PARCHIP_INFO, *PPARALLEL_PARCHIP_INFO;
typedef struct _PARALLEL_PORT_INFORMATION {
    PHYSICAL_ADDRESS OriginalController;
    PUCHAR Controller;
    ULONG SpanOfController;
    PPARALLEL_TRY_ALLOCATE_ROUTINE TryAllocatePort;
    PPARALLEL_FREE_ROUTINE FreePort;
    PPARALLEL_QUERY_WAITERS_ROUTINE QueryNumWaiters;
    PVOID Context;
} PARALLEL_PORT_INFORMATION, *PPARALLEL_PORT_INFORMATION;
typedef struct _PARALLEL_PNP_INFORMATION {
    PHYSICAL_ADDRESS OriginalEcpController;
    PUCHAR EcpController;
    ULONG SpanOfEcpController;
    ULONG PortNumber;
    ULONG HardwareCapabilities;
    PPARALLEL_SET_CHIP_MODE TrySetChipMode;
    PPARALLEL_CLEAR_CHIP_MODE ClearChipMode;
    ULONG FifoDepth;
    ULONG FifoWidth;
    PHYSICAL_ADDRESS EppControllerPhysicalAddress;
    ULONG SpanOfEppController;
    ULONG Ieee1284_3DeviceCount;
    PPARALLEL_TRY_SELECT_ROUTINE TrySelectDevice;
    PPARALLEL_DESELECT_ROUTINE DeselectDevice;
    PVOID Context;
    ULONG CurrentMode;
    PWSTR PortName;
} PARALLEL_PNP_INFORMATION, *PPARALLEL_PNP_INFORMATION;
typedef struct _PARALLEL_1284_COMMAND {
    UCHAR ID;
    UCHAR Port;
    ULONG CommandFlags;
} PARALLEL_1284_COMMAND, *PPARALLEL_1284_COMMAND;
typedef struct _PARALLEL_CHIP_MODE {
    UCHAR ModeFlags;
    BOOLEAN success;
} PARALLEL_CHIP_MODE, *PPARALLEL_CHIP_MODE;
typedef
VOID
(*PPARALLEL_DEFERRED_ROUTINE) (
 _In_ PVOID DeferredContext
 );
typedef struct _PARALLEL_INTERRUPT_SERVICE_ROUTINE {
 PKSERVICE_ROUTINE InterruptServiceRoutine;
 PVOID InterruptServiceContext;
 PPARALLEL_DEFERRED_ROUTINE DeferredPortCheckRoutine;
 PVOID DeferredPortCheckContext;
} PARALLEL_INTERRUPT_SERVICE_ROUTINE, *PPARALLEL_INTERRUPT_SERVICE_ROUTINE;
typedef struct _PARALLEL_INTERRUPT_INFORMATION {
 PKINTERRUPT InterruptObject;
 PPARALLEL_TRY_ALLOCATE_ROUTINE TryAllocatePortAtInterruptLevel;
 PPARALLEL_FREE_ROUTINE FreePortFromInterruptLevel;
 PVOID Context;
} PARALLEL_INTERRUPT_INFORMATION, *PPARALLEL_INTERRUPT_INFORMATION;
typedef struct _MORE_PARALLEL_PORT_INFORMATION {
 INTERFACE_TYPE InterfaceType;
 ULONG BusNumber;
 ULONG InterruptLevel;
 ULONG InterruptVector;
 KAFFINITY InterruptAffinity;
 KINTERRUPT_MODE InterruptMode;
} MORE_PARALLEL_PORT_INFORMATION, *PMORE_PARALLEL_PORT_INFORMATION;
typedef enum {
    SAFE_MODE,
    UNSAFE_MODE
} PARALLEL_SAFETY;
typedef
USHORT
(*PDETERMINE_IEEE_MODES) (
    _In_ PVOID Context
    );
typedef
NTSTATUS
(*PNEGOTIATE_IEEE_MODE) (
    _In_ PVOID Context,
    _In_ USHORT ModeMaskFwd,
    _In_ USHORT ModeMaskRev,
    _In_ PARALLEL_SAFETY ModeSafety,
    _In_ BOOLEAN IsForward
    );
typedef
NTSTATUS
(*PTERMINATE_IEEE_MODE) (
 _In_ PVOID Context
 );
typedef
NTSTATUS
(*PPARALLEL_IEEE_FWD_TO_REV)(
    _In_ PVOID Context
    );
typedef
NTSTATUS
(*PPARALLEL_IEEE_REV_TO_FWD)(
    _In_ PVOID Context
    );
typedef
NTSTATUS
(*PPARALLEL_READ) (
 _In_ PVOID Context,
 _Out_writes_bytes_to_(NumBytesToRead,*NumBytesRead) PVOID Buffer,
 _In_ ULONG NumBytesToRead,
 _Out_ PULONG NumBytesRead,
 _In_ UCHAR Channel
 );
typedef
NTSTATUS
(*PPARALLEL_WRITE) (
 _In_ PVOID Context,
 _In_reads_bytes_(NumBytesToWrite) PVOID Buffer,
 _In_ ULONG NumBytesToWrite,
 _Out_ PULONG NumBytesWritten,
 _In_ UCHAR Channel
 );
typedef
NTSTATUS
(*PPARALLEL_TRYSELECT_DEVICE) (
    _In_ PVOID Context,
    _In_ PARALLEL_1284_COMMAND Command
    );
typedef
NTSTATUS
(*PPARALLEL_DESELECT_DEVICE) (
    _In_ PVOID Context,
    _In_ PARALLEL_1284_COMMAND Command
    );
typedef struct _PARCLASS_INFORMATION {
    PUCHAR Controller;
    PUCHAR EcrController;
    ULONG SpanOfController;
    PDETERMINE_IEEE_MODES DetermineIeeeModes;
    PNEGOTIATE_IEEE_MODE NegotiateIeeeMode;
    PTERMINATE_IEEE_MODE TerminateIeeeMode;
    PPARALLEL_IEEE_FWD_TO_REV IeeeFwdToRevMode;
    PPARALLEL_IEEE_REV_TO_FWD IeeeRevToFwdMode;
    PPARALLEL_READ ParallelRead;
    PPARALLEL_WRITE ParallelWrite;
    PVOID ParclassContext;
    ULONG HardwareCapabilities;
    ULONG FifoDepth;
    ULONG FifoWidth;
    PPARALLEL_TRYSELECT_DEVICE ParallelTryselect;
    PPARALLEL_DESELECT_DEVICE ParallelDeSelect;
} PARCLASS_INFORMATION, *PPARCLASS_INFORMATION;
    #define DVRH_USE_PARPORT_ECP_ADDR 0
    #define ECP_OFFSET 0x400
    #define CNFGB_OFFSET 0x401
    #define ECR_OFFSET 0x402
 ( ( (registerValue) & ECR_FIFO_MASK ) == testValue )
    #define SET_DCR(b5,b4,b3,b2,b1,b0) \
    ((UCHAR)((b5==ACTIVE? BIT_5_SET : 0) | \
            (b4==ACTIVE? BIT_4_SET : 0) | \
            (b3==ACTIVE? 0 : BIT_3_SET) | \
            (b2==ACTIVE? BIT_2_SET : 0) | \
            (b1==ACTIVE? 0 : BIT_1_SET) | \
            (b0==ACTIVE? 0 : BIT_0_SET) ) )
typedef enum {
    PHASE_UNKNOWN,
    PHASE_NEGOTIATION,
    PHASE_SETUP,
    PHASE_FORWARD_IDLE,
    PHASE_FORWARD_XFER,
    PHASE_FWD_TO_REV,
    PHASE_REVERSE_IDLE,
    PHASE_REVERSE_XFER,
    PHASE_REV_TO_FWD,
    PHASE_TERMINATE,
    PHASE_DATA_AVAILABLE,
    PHASE_DATA_NOT_AVAIL,
    PHASE_INTERRUPT_HOST
} P1284_PHASE;
typedef enum {
    HW_MODE_COMPATIBILITY,
    HW_MODE_PS2,
    HW_MODE_FAST_CENTRONICS,
    HW_MODE_ECP,
    HW_MODE_EPP,
    HW_MODE_RESERVED,
    HW_MODE_TEST,
    HW_MODE_CONFIGURATION
} P1284_HW_MODE;
