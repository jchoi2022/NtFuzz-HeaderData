#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
DEFINE_GUID(GUID_DEVINTERFACE_COMPORT, 0X86E0D1E0L, 0X8089, 0X11D0, 0X9C, 0XE4, 0X08, 0X00, 0X3E, 0X30, 0X1F, 0X73);
DEFINE_GUID(GUID_DEVINTERFACE_SERENUM_BUS_ENUMERATOR, 0x4D36E978L, 0xE325, 0x11CE, 0xBF, 0xC1, 0x08, 0x00, 0x2B, 0xE1, 0x03, 0x18);
DEFINE_DEVPROPKEY(DEVPKEY_DeviceInterface_Serial_UsbVendorId, 0X4C6BF15C, 0X4C03, 0X4AAC, 0X91, 0XF5, 0X64, 0XC0, 0XF8, 0X52, 0XBC, 0XF4, 2);
DEFINE_DEVPROPKEY(DEVPKEY_DeviceInterface_Serial_UsbProductId, 0X4C6BF15C, 0X4C03, 0X4AAC, 0X91, 0XF5, 0X64, 0XC0, 0XF8, 0X52, 0XBC, 0XF4, 3);
DEFINE_DEVPROPKEY(DEVPKEY_DeviceInterface_Serial_PortName, 0X4C6BF15C, 0X4C03, 0X4AAC, 0X91, 0XF5, 0X64, 0XC0, 0XF8, 0X52, 0XBC, 0XF4, 4);
extern "C" {
typedef struct _SERIALPERF_STATS {
    ULONG ReceivedCount;
    ULONG TransmittedCount;
    ULONG FrameErrorCount;
    ULONG SerialOverrunErrorCount;
    ULONG BufferOverrunErrorCount;
    ULONG ParityErrorCount;
} SERIALPERF_STATS, *PSERIALPERF_STATS;
typedef struct _SERIALCONFIG {
    ULONG Size;
    USHORT Version;
    ULONG SubType;
    ULONG ProvOffset;
    ULONG ProviderSize;
    WCHAR ProviderData[1];
} SERIALCONFIG,*PSERIALCONFIG;
typedef struct _SERIAL_LINE_CONTROL {
    UCHAR StopBits;
    UCHAR Parity;
    UCHAR WordLength;
    } SERIAL_LINE_CONTROL,*PSERIAL_LINE_CONTROL;
typedef struct _SERIAL_TIMEOUTS {
    ULONG ReadIntervalTimeout;
    ULONG ReadTotalTimeoutMultiplier;
    ULONG ReadTotalTimeoutConstant;
    ULONG WriteTotalTimeoutMultiplier;
    ULONG WriteTotalTimeoutConstant;
    } SERIAL_TIMEOUTS,*PSERIAL_TIMEOUTS;
typedef struct _SERIAL_QUEUE_SIZE {
    ULONG InSize;
    ULONG OutSize;
    } SERIAL_QUEUE_SIZE,*PSERIAL_QUEUE_SIZE;
typedef struct _SERIAL_BAUD_RATE {
    ULONG BaudRate;
    } SERIAL_BAUD_RATE,*PSERIAL_BAUD_RATE;
typedef struct _SERIAL_CHARS {
    UCHAR EofChar;
    UCHAR ErrorChar;
    UCHAR BreakChar;
    UCHAR EventChar;
    UCHAR XonChar;
    UCHAR XoffChar;
    } SERIAL_CHARS,*PSERIAL_CHARS;
typedef struct _SERIAL_HANDFLOW {
    ULONG ControlHandShake;
    ULONG FlowReplace;
    LONG XonLimit;
    LONG XoffLimit;
    } SERIAL_HANDFLOW,*PSERIAL_HANDFLOW;
typedef struct _SERIAL_BASIC_SETTINGS {
   SERIAL_TIMEOUTS Timeouts;
   SERIAL_HANDFLOW HandFlow;
   ULONG RxFifo;
   ULONG TxFifo;
} SERIAL_BASIC_SETTINGS, *PSERIAL_BASIC_SETTINGS;
typedef struct _SERIAL_STATUS {
    ULONG Errors;
    ULONG HoldReasons;
    ULONG AmountInInQueue;
    ULONG AmountInOutQueue;
    BOOLEAN EofReceived;
    BOOLEAN WaitForImmediate;
    } SERIAL_STATUS,*PSERIAL_STATUS;
typedef struct _SERIAL_XOFF_COUNTER {
    ULONG Timeout;
    LONG Counter;
    UCHAR XoffChar;
    } SERIAL_XOFF_COUNTER,*PSERIAL_XOFF_COUNTER;
typedef struct _SERIAL_COMMPROP {
    USHORT PacketLength;
    USHORT PacketVersion;
    ULONG ServiceMask;
    ULONG Reserved1;
    ULONG MaxTxQueue;
    ULONG MaxRxQueue;
    ULONG MaxBaud;
    ULONG ProvSubType;
    ULONG ProvCapabilities;
    ULONG SettableParams;
    ULONG SettableBaud;
    USHORT SettableData;
    USHORT SettableStopParity;
    ULONG CurrentTxQueue;
    ULONG CurrentRxQueue;
    ULONG ProvSpec1;
    ULONG ProvSpec2;
    WCHAR ProvChar[1];
} SERIAL_COMMPROP,*PSERIAL_COMMPROP;
typedef struct _SERENUM_PORT_DESC
{
    IN ULONG Size;
    OUT PVOID PortHandle;
    OUT PHYSICAL_ADDRESS PortAddress;
        USHORT Reserved[1];
} SERENUM_PORT_DESC, * PSERENUM_PORT_DESC;
    CTL_CODE(FILE_DEVICE_SERENUM, 129, METHOD_NEITHER, FILE_ANY_ACCESS)
typedef
UCHAR
(*PSERENUM_READPORT) (
    _In_ PVOID SerPortAddress
    );
typedef
VOID
(*PSERENUM_WRITEPORT) (
    _In_ PVOID SerPortAddress,
    _In_ UCHAR Value
    );
typedef enum _SERENUM_PORTION {
    SerenumFirstHalf,
    SerenumSecondHalf,
    SerenumWhole
} SERENUM_PORTION;
typedef struct _SERENUM_PORT_PARAMETERS
{
    IN ULONG Size;
    OUT PSERENUM_READPORT ReadAccessor;
    OUT PSERENUM_WRITEPORT WriteAccessor;
    OUT PVOID SerPortAddress;
    OUT PVOID HardwareHandle;
    OUT SERENUM_PORTION Portion;
    OUT USHORT NumberAxis;
        USHORT Reserved [3];
} SERENUM_PORT_PARAMETERS, *PSERENUM_PORT_PARAMETERS;
}
#endif
#pragma endregion
