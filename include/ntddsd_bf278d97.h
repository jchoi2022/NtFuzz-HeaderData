#pragma warning(disable:4201)
#include <sddef.h>
extern "C" {
_Function_class_(SDBUS_CALLBACK_ROUTINE)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
VOID
SDBUS_CALLBACK_ROUTINE(
    _In_ PVOID CallbackRoutineContext,
    _In_ ULONG InterruptType
    );
typedef SDBUS_CALLBACK_ROUTINE *PSDBUS_CALLBACK_ROUTINE;
typedef struct _SDBUS_INTERFACE_PARAMETERS {
    USHORT Size;
    USHORT SdioFlags;
    PDEVICE_OBJECT TargetObject;
    BOOLEAN DeviceGeneratesInterrupts;
    BOOLEAN CallbackAtDpcLevel;
    PSDBUS_CALLBACK_ROUTINE CallbackRoutine;
    PVOID CallbackRoutineContext;
} SDBUS_INTERFACE_PARAMETERS, *PSDBUS_INTERFACE_PARAMETERS;
_Check_return_
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
NTSTATUS
(*PSDBUS_INITIALIZE_INTERFACE_ROUTINE)(
    _In_ PVOID Context,
    _In_ PSDBUS_INTERFACE_PARAMETERS InterfaceParameters
    );
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
NTSTATUS
(*PSDBUS_ACKNOWLEDGE_INT_ROUTINE)(
    _In_ PVOID Context
    );
DEFINE_GUID( GUID_SDBUS_INTERFACE_STANDARD, 0x6bb24d81L, 0xe924, 0x4825, 0xaf, 0x49, 0x3a, 0xcd, 0x33, 0xc1, 0xd8, 0x20 );
DEFINE_GUID( GUID_SD_HOST_CONTROLLER, 0x79626149L, 0x04a0, 0x4353, 0xbe, 0x16, 0x4b, 0x34, 0x1b, 0x11, 0x07, 0xa9 );
typedef struct _SDBUS_INTERFACE_STANDARD {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PSDBUS_INITIALIZE_INTERFACE_ROUTINE InitializeInterface;
    PSDBUS_ACKNOWLEDGE_INT_ROUTINE AcknowledgeInterrupt;
} SDBUS_INTERFACE_STANDARD, *PSDBUS_INTERFACE_STANDARD;
_Check_return_
_IRQL_requires_same_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
SdBusOpenInterface(
    _In_ PDEVICE_OBJECT Pdo,
    _Out_ PSDBUS_INTERFACE_STANDARD InterfaceStandard,
    _In_ USHORT Size,
    _In_ USHORT Version
    );
typedef enum {
    SDP_MEDIA_CHANGECOUNT = 0,
    SDP_MEDIA_STATE,
    SDP_WRITE_PROTECTED,
    SDP_FUNCTION_NUMBER,
    SDP_FUNCTION_TYPE,
    SDP_BUS_DRIVER_VERSION,
    SDP_BUS_WIDTH,
    SDP_BUS_CLOCK,
    SDP_BUS_INTERFACE_CONTROL,
    SDP_HOST_BLOCK_LENGTH,
    SDP_FUNCTION_BLOCK_LENGTH,
    SDP_FN0_BLOCK_LENGTH,
    SDP_FUNCTION_INT_ENABLE,
    SDP_SET_CARD_INTERRUPT_FORWARD,
    SDP_SET_WAKE_INTERRUPT_FORWARD,
    SDP_HIGH_CAPACITY_SUPPORTED,
    SDP_CHAINED_MDL_SUPPORTED,
    SDP_HPI_SUPPORTED,
} SDBUS_PROPERTY;
typedef enum {
    SDPMS_NO_MEDIA = 0,
    SDPMS_MEDIA_INSERTED
} SDPROP_MEDIA_STATE;
typedef enum {
    SDBUS_FUNCTION_TYPE_UNKNOWN = 0,
    SDBUS_FUNCTION_TYPE_SDIO,
    SDBUS_FUNCTION_TYPE_SD_MEMORY,
    SDBUS_FUNCTION_TYPE_MMC_MEMORY,
} SDBUS_FUNCTION_TYPE;
                            (type == SDBUS_FUNCTION_TYPE_MMC_MEMORY))
typedef enum {
    SDBUS_ERASE_TYPE_ERASE = 0,
    SDBUS_ERASE_TYPE_TRIM = 1,
    SDBUS_ERASE_TYPE_DISCARD = 3,
    SDBUS_ERASE_TYPE_SEC_ERASE = 0x80000000,
    SDBUS_ERASE_TYPE_SEC_TRIM_1 = 0x80000001,
    SDBUS_ERASE_TYPE_SEC_TRIM_2 = 0x80008000
} SDBUS_ERASE_TYPE;
typedef enum {
    SDRF_GET_PROPERTY,
    SDRF_SET_PROPERTY,
    SDRF_DEVICE_COMMAND,
    SDRF_ERASE_COMMAND,
    SDRF_MMC_SOFT_RESET,
    SDRF_MMC_HPI,
} SD_REQUEST_FUNCTION;
typedef struct _SDBUS_REQUEST_PACKET {
    SD_REQUEST_FUNCTION RequestFunction;
    PVOID UserContext[3];
    ULONG_PTR Information;
    union {
        UCHAR AsUCHAR[16];
        ULONG AsULONG[4];
        SDRESP_TYPE3 Type3;
    } ResponseData;
    UCHAR ResponseLength;
    UCHAR Reserved;
    USHORT Flags;
    union {
        struct {
            SDBUS_PROPERTY Property;
            PVOID Buffer;
            ULONG Length;
        } GetSetProperty;
        struct {
            SDCMD_DESCRIPTOR CmdDesc;
            ULONG Argument;
            PMDL Mdl;
            ULONG Length;
        } DeviceCommand;
        struct {
            SDBUS_ERASE_TYPE EraseType;
            ULONG StartBlock;
            ULONG EndBlock;
        } EraseCommand;
        struct {
            ULONG Frequency;
        } MmcSoftReset;
        struct {
            PIRP IrpToHpi;
        } MmcHpi;
    } Parameters;
} SDBUS_REQUEST_PACKET, *PSDBUS_REQUEST_PACKET;
_Check_return_
_IRQL_requires_same_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
SdBusSubmitRequest(
    _In_ PVOID InterfaceContext,
    _In_ PSDBUS_REQUEST_PACKET Packet
    );
_Check_return_
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
SdBusSubmitRequestAsync(
    _In_ PVOID InterfaceContext,
    _In_ PSDBUS_REQUEST_PACKET Packet,
    _In_ PIRP Irp,
    _In_ PIO_COMPLETION_ROUTINE CompletionRoutine,
    _In_ PVOID UserContext
    );
}
