#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
                            I8042_SLEEP_SYS_BUTTON | \
                            I8042_WAKE_SYS_BUTTON)
#if 0
typedef enum _I8042_PORT_TYPE {
    PortTypeData = 0,
    PortTypeCommand
} I8042_PORT_TYPE;
#endif
_IRQL_requires_same_
_Must_inspect_result_
typedef
NTSTATUS
(*PI8042_SYNCH_READ_PORT) (
    _In_ PVOID Context,
    _Out_ PUCHAR Value,
    _In_ BOOLEAN WaitForACK
    );
_IRQL_requires_same_
_Must_inspect_result_
typedef
NTSTATUS
(*PI8042_SYNCH_WRITE_PORT) (
    _In_ PVOID Context,
    _In_ UCHAR Value,
    _In_ BOOLEAN WaitForACK
    );
typedef
VOID
(*PI8042_ISR_WRITE_PORT) (
    _In_ PVOID Context,
    _In_ UCHAR Value
    );
typedef
VOID
(*PI8042_QUEUE_PACKET) (
    _In_ PVOID Context
    );
typedef enum _TRANSMIT_STATE {
    Idle = 0,
    SendingBytes
} TRANSMIT_STATE;
typedef struct _OUTPUT_PACKET {
    PUCHAR Bytes;
    ULONG CurrentByte;
    ULONG ByteCount;
    TRANSMIT_STATE State;
} OUTPUT_PACKET, *POUTPUT_PACKET;
typedef enum _MOUSE_STATE {
    MouseIdle,
    XMovement,
    YMovement,
    ZMovement,
    MouseExpectingACK,
    MouseResetting
} MOUSE_STATE, *PMOUSE_STATE;
typedef enum _MOUSE_RESET_SUBSTATE {
    ExpectingReset = 0,
    ExpectingResetId,
    ExpectingGetDeviceIdACK,
    ExpectingGetDeviceIdValue,
    ExpectingSetResolutionDefaultACK,
    ExpectingSetResolutionDefaultValueACK,
    ExpectingSetResolutionACK,
    ExpectingSetResolutionValueACK,
    ExpectingSetScaling1to1ACK,
    ExpectingSetScaling1to1ACK2,
    ExpectingSetScaling1to1ACK3,
    ExpectingReadMouseStatusACK,
    ExpectingReadMouseStatusByte1,
    ExpectingReadMouseStatusByte2,
    ExpectingReadMouseStatusByte3,
    StartPnPIdDetection,
    ExpectingLoopSetSamplingRateACK,
    ExpectingLoopSetSamplingRateValueACK,
    ExpectingPnpIdByte1,
    ExpectingPnpIdByte2,
    ExpectingPnpIdByte3,
    ExpectingPnpIdByte4,
    ExpectingPnpIdByte5,
    ExpectingPnpIdByte6,
    ExpectingPnpIdByte7,
    EnableWheel,
    Enable5Buttons,
    ExpectingGetDeviceId2ACK,
    ExpectingGetDeviceId2Value,
    ExpectingSetSamplingRateACK,
    ExpectingSetSamplingRateValueACK,
    ExpectingEnableACK,
    ExpectingFinalResolutionACK,
    ExpectingFinalResolutionValueACK,
    ExpectingGetDeviceIdDetectACK,
    ExpectingGetDeviceIdDetectValue,
    CustomHookStateMinimum = 100,
    CustomHookStateMaximum = 999,
    I8042ReservedMinimum = 1000
} MOUSE_RESET_SUBSTATE, *PMOUSE_RESET_SUBSTATE;
_IRQL_requires_same_
_Must_inspect_result_
typedef
BOOLEAN
(*PI8042_MOUSE_ISR) (
    _In_ PVOID IsrContext,
    _In_ PMOUSE_INPUT_DATA CurrentInput,
    _In_ POUTPUT_PACKET CurrentOutput,
    _In_ UCHAR StatusByte,
    _In_ PUCHAR Byte,
    _Inout_ PBOOLEAN ContinueProcessing,
    _In_ PMOUSE_STATE MouseState,
    _In_ PMOUSE_RESET_SUBSTATE ResetSubState
);
typedef struct _INTERNAL_I8042_HOOK_MOUSE {
    OUT PVOID Context;
    OUT PI8042_MOUSE_ISR IsrRoutine;
    IN PI8042_ISR_WRITE_PORT IsrWritePort;
    IN PI8042_QUEUE_PACKET QueueMousePacket;
    IN PVOID CallContext;
} INTERNAL_I8042_HOOK_MOUSE, *PINTERNAL_I8042_HOOK_MOUSE;
typedef enum _KEYBOARD_SCAN_STATE {
    Normal,
    GotE0,
    GotE1
} KEYBOARD_SCAN_STATE, *PKEYBOARD_SCAN_STATE;
typedef
NTSTATUS
(*PI8042_KEYBOARD_INITIALIZATION_ROUTINE) (
    _In_ PVOID InitializationContext,
    _In_ PVOID SynchFuncContext,
    _In_ PI8042_SYNCH_READ_PORT ReadPort,
    _In_ PI8042_SYNCH_WRITE_PORT WritePort,
    _Out_ PBOOLEAN TurnTranslationOn
    );
_IRQL_requires_same_
_Must_inspect_result_
typedef
BOOLEAN
(*PI8042_KEYBOARD_ISR) (
    _In_ PVOID IsrContext,
    _In_ PKEYBOARD_INPUT_DATA CurrentInput,
    _In_ POUTPUT_PACKET CurrentOutput,
    _In_ UCHAR StatusByte,
    _In_ PUCHAR Byte,
    _Out_ PBOOLEAN ContinueProcessing,
    _In_ PKEYBOARD_SCAN_STATE ScanState
    );
typedef struct _INTERNAL_I8042_HOOK_KEYBOARD {
    OUT PVOID Context;
    OUT PI8042_KEYBOARD_INITIALIZATION_ROUTINE InitializationRoutine;
    OUT PI8042_KEYBOARD_ISR IsrRoutine;
    IN PI8042_ISR_WRITE_PORT IsrWritePort;
    IN PI8042_QUEUE_PACKET QueueKeyboardPacket;
    IN PVOID CallContext;
} INTERNAL_I8042_HOOK_KEYBOARD, *PINTERNAL_I8042_HOOK_KEYBOARD;
typedef struct _INTERNAL_I8042_START_INFORMATION {
    ULONG Size;
    PKINTERRUPT InterruptObject;
    ULONG Reserved[8];
} INTERNAL_I8042_START_INFORMATION, *PINTERNAL_I8042_START_INFORMATION;
}
#endif
#pragma endregion
