       
typedef struct _CPPORT CPPORT, *PCPPORT;
typedef enum {
    UartSuccess,
    UartNoData,
    UartError,
    UartNotReady
} UART_STATUS, *PUART_STATUS;
typedef
BOOLEAN
(*UART_INITIALIZE_PORT) (
    _In_opt_ _Null_terminated_ PCHAR LoadOptions,
    _Inout_ PCPPORT Port,
    BOOLEAN MemoryMapped,
    UCHAR AccessSize,
    UCHAR BitWidth
    );
typedef
BOOLEAN
(*UART_SET_BAUD) (
    _Inout_ PCPPORT Port,
    ULONG Rate
    );
typedef
UART_STATUS
(*UART_GET_BYTE) (
    _Inout_ PCPPORT Port,
    _Out_ PUCHAR Byte
    );
typedef
UART_STATUS
(*UART_PUT_BYTE) (
    _Inout_ PCPPORT Port,
    UCHAR Byte,
    BOOLEAN BusyWait
    );
typedef
BOOLEAN
(*UART_RX_READY) (
    _Inout_ PCPPORT Port
    );
typedef struct _UART_HARDWARE_DRIVER {
    UART_INITIALIZE_PORT InitializePort;
    UART_SET_BAUD SetBaud;
    UART_GET_BYTE GetByte;
    UART_PUT_BYTE PutByte;
    UART_RX_READY RxReady;
} UART_HARDWARE_DRIVER, *PUART_HARDWARE_DRIVER;
typedef
UCHAR
(*UART_HARDWARE_READ_INDEXED_UCHAR) (
    _In_ PCPPORT Port,
    const UCHAR Index
    );
typedef
VOID
(*UART_HARDWARE_WRITE_INDEXED_UCHAR) (
    _In_ PCPPORT Port,
    const UCHAR Index,
    const UCHAR Value
    );
struct _CPPORT {
    PUCHAR Address;
    ULONG BaudRate;
    USHORT Flags;
    UCHAR ByteWidth;
    UART_HARDWARE_READ_INDEXED_UCHAR Read;
    UART_HARDWARE_WRITE_INDEXED_UCHAR Write;
};
typedef
UCHAR
(*UART_HARDWARE_READ_UCHAR) (
    _In_ PUCHAR Address
    );
typedef
VOID
(*UART_HARDWARE_WRITE_UCHAR) (
    _Out_ PUCHAR Address,
    UCHAR Value
    );
typedef
USHORT
(*UART_HARDWARE_READ_USHORT) (
    _In_ PUSHORT Address
    );
typedef
VOID
(*UART_HARDWARE_WRITE_USHORT) (
    _Out_ PUSHORT Address,
    USHORT Value
    );
typedef
ULONG
(*UART_HARDWARE_READ_ULONG) (
    _In_ PULONG Address
    );
typedef
VOID
(*UART_HARDWARE_WRITE_ULONG) (
    _Out_ PULONG Address,
    ULONG Value
    );
typedef
ULONG64
(*UART_HARDWARE_READ_ULONG64) (
    _In_ PULONG64 Address
    );
typedef
VOID
(*UART_HARDWARE_WRITE_ULONG64) (
    _Out_ PULONG64 Address,
    ULONG64 Value
    );
typedef struct _UART_HARDWARE_ACCESS {
    UART_HARDWARE_READ_UCHAR ReadPort8;
    UART_HARDWARE_WRITE_UCHAR WritePort8;
    UART_HARDWARE_READ_USHORT ReadPort16;
    UART_HARDWARE_WRITE_USHORT WritePort16;
    UART_HARDWARE_READ_ULONG ReadPort32;
    UART_HARDWARE_WRITE_ULONG WritePort32;
    UART_HARDWARE_READ_UCHAR ReadRegister8;
    UART_HARDWARE_WRITE_UCHAR WriteRegister8;
    UART_HARDWARE_READ_USHORT ReadRegister16;
    UART_HARDWARE_WRITE_USHORT WriteRegister16;
    UART_HARDWARE_READ_ULONG ReadRegister32;
    UART_HARDWARE_WRITE_ULONG WriteRegister32;
    UART_HARDWARE_READ_ULONG64 ReadRegister64;
    UART_HARDWARE_WRITE_ULONG64 WriteRegister64;
} UART_HARDWARE_ACCESS, *PUART_HARDWARE_ACCESS;
extern UART_HARDWARE_DRIVER Legacy16550HardwareDriver;
extern UART_HARDWARE_DRIVER Uart16550HardwareDriver;
extern UART_HARDWARE_DRIVER SpiMax311HardwareDriver;
extern UART_HARDWARE_DRIVER UsifHardwareDriver;
extern UART_HARDWARE_DRIVER MM16550HardwareDriver;
extern PUART_HARDWARE_DRIVER UartHardwareDrivers[];
extern ULONG UartHardwareDriverCount;
