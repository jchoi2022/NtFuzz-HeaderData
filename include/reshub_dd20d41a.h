#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <strsafe.h>
extern "C" {
    ((sizeof(LARGE_INTEGER) * 2 * sizeof(WCHAR)) + sizeof(UNICODE_NULL))
    (sizeof(RESOURCE_HUB_DEVICE_NAME_PREFIX) + \
     RESOURCE_HUB_CONNECTION_FILE_SIZE - \
     sizeof(UNICODE_NULL))
    ((RESOURCE_HUB_CONNECTION_FILE_SIZE + sizeof(WCHAR) - 1) / sizeof(WCHAR))
    ((RESOURCE_HUB_CONNECTION_PATH_SIZE + sizeof(WCHAR) - 1) / sizeof(WCHAR))
    CTL_CODE(FILE_DEVICE_RESOURCE_HUB, \
             0x0, \
             METHOD_BUFFERED, \
             FILE_READ_ACCESS | FILE_WRITE_ACCESS)
    CTL_CODE(FILE_DEVICE_RESOURCE_HUB, \
             0x1, \
             METHOD_BUFFERED, \
             FILE_READ_ACCESS | FILE_WRITE_ACCESS)
    CTL_CODE(FILE_DEVICE_RESOURCE_HUB, \
             0x2, \
             METHOD_BUFFERED, \
             FILE_READ_ACCESS | FILE_WRITE_ACCESS)
    CTL_CODE(FILE_DEVICE_RESOURCE_HUB, \
             0x3, \
             METHOD_BUFFERED, \
             FILE_READ_ACCESS | FILE_WRITE_ACCESS)
    CTL_CODE(FILE_DEVICE_RESOURCE_HUB, \
             0x4, \
             METHOD_BUFFERED, \
             FILE_READ_ACCESS | FILE_WRITE_ACCESS)
    CTL_CODE(FILE_DEVICE_RESOURCE_HUB, \
             0x5, \
             METHOD_BUFFERED, \
             FILE_READ_ACCESS | FILE_WRITE_ACCESS)
 #define RH_UPDATE_CONNECTIONAL_MASK_ALL 0xFFFF
typedef enum _RH_QUERY_CONNECTION_PROPERTIES_INPUT_TYPE {
    ConnectionIdType,
    InterruptVectorType
} RH_QUERY_CONNECTION_PROPERTIES_INPUT_TYPE,
  *PRH_QUERY_CONNECTION_PROPERTIES_INPUT_TYPE;
typedef struct _RH_QUERY_CONNECTION_PROPERTIES_INPUT_BUFFER {
    ULONG Version;
    RH_QUERY_CONNECTION_PROPERTIES_INPUT_TYPE QueryType;
    union {
        LARGE_INTEGER ConnectionId;
        ULONG InterruptVector;
   } u;
} RH_QUERY_CONNECTION_PROPERTIES_INPUT_BUFFER,
  *PRH_QUERY_CONNECTION_PROPERTIES_INPUT_BUFFER;
typedef struct _RH_QUERY_CONNECTION_PROPERTIES_OUTPUT_BUFFER {
    ULONG Version;
    ULONG PropertiesLength;
    UCHAR ConnectionProperties[ANYSIZE_ARRAY];
} RH_QUERY_CONNECTION_PROPERTIES_OUTPUT_BUFFER,
  *PRH_QUERY_CONNECTION_PROPERTIES_OUTPUT_BUFFER;
typedef enum _RH_CONNECTION_PROPERTIES_INPUT_TYPE {
    GpioIoType,
    GpioInterruptType,
    SpiConnectionType,
    I2cConnectionType,
    UartConnectionType
} RH_CONNECTION_PROPERTIES_INPUT_TYPE,
  *PRH_CONNECTION_PROPERTIES_INPUT_TYPE;
typedef struct _RH_GPIO_IO_CONNECTION_PARAMETERS {
    LARGE_INTEGER ConnectionId;
    USHORT UpdateMask;
    UCHAR PinConfiguration;
    USHORT DebounceTimeout;
    USHORT DriveStrength;
} RH_GPIO_IO_CONNECTION_PARAMETERS,
  *PRH_GPIO_IO_CONNECTION_PARAMETERS;
typedef struct _RH_GPIO_INTERRUPT_CONNECTION_PARAMETERS {
    ULONG InterruptVector;
    USHORT UpdateMask;
     UCHAR InterruptMode;
     UCHAR InterruptPolarity;
     UCHAR PinConfiguration;
     USHORT DebounceTimeout;
} RH_GPIO_INTERRUPT_CONNECTION_PARAMETERS,
  *PRH_GPIO_INTERRUPT_CONNECTION_PARAMETERS;
typedef struct _RH_SPI_CONNECTION_PARAMETERS {
    LARGE_INTEGER ConnectionId;
    USHORT UpdateMask;
    USHORT DeviceSelection;
    ULONG ConnectionSpeed;
    UCHAR ClockPolarity;
    UCHAR ClockPhase;
    UCHAR DevicePolarity;
    UCHAR DataBitLength;
} RH_SPI_CONNECTION_PARAMETERS,
  *PRH_SPI_CONNECTION_PARAMETERS;
typedef struct _RH_I2C_CONNECTION_PARAMETERS {
    LARGE_INTEGER ConnectionId;
    USHORT UpdateMask;
    USHORT TypeSpecificFlags;
    ULONG ConnectionSpeed;
    USHORT SlaveAddress;
} RH_I2C_CONNECTION_PARAMETERS,
  *PRH_I2C_CONNECTION_PARAMETERS;
typedef struct _RH_UART_CONNECTION_PARAMETERS {
    LARGE_INTEGER ConnectionId;
    USHORT UpdateMask;
    ULONG BaudRate;
    USHORT TypeSpecificFlags;
    USHORT RxBufferSize;
    USHORT TxBufferSize;
    UCHAR Parity;
} RH_UART_CONNECTION_PARAMETERS,
  *PRH_UART_CONNECTION_PARAMETERS;
typedef struct _RH_ALLOCATE_UPDATE_CONNECTION_INPUT_BUFFER {
    ULONG Version;
    RH_CONNECTION_PROPERTIES_INPUT_TYPE ConnectionType;
    union {
        RH_GPIO_IO_CONNECTION_PARAMETERS IoConnection;
        RH_GPIO_INTERRUPT_CONNECTION_PARAMETERS InterruptConnection;
        RH_SPI_CONNECTION_PARAMETERS SpiConnection;
        RH_I2C_CONNECTION_PARAMETERS I2cConnection;
        RH_UART_CONNECTION_PARAMETERS UartConnection;
    } u;
} RH_ALLOCATE_UPDATE_CONNECTION_INPUT_BUFFER,
  *PRH_ALLOCATE_UPDATE_CONNECTION_INPUT_BUFFER;
typedef struct _RH_ALLOCATE_CONNECTION_OUTPUT_BUFFER {
    ULONG Version;
    LARGE_INTEGER ConnectionId;
} RH_ALLOCATE_CONNECTION_OUTPUT_BUFFER,
  *PRH_ALLOCATE_CONNECTION_OUTPUT_BUFFER;
typedef struct _RH_UPDATE_CONNECTION_PROPERTIES_OUTPUT_BUFFER {
    ULONG Version;
} RH_UPDATE_CONNECTION_PROPERTIES_OUTPUT_BUFFER,
  *PRH_UPDATE_CONNECTION_PROPERTIES_OUTPUT_BUFFER;
typedef struct _RH_FREE_CONNECTION_INPUT_BUFFER {
    ULONG Version;
    LARGE_INTEGER ConnectionId;
} RH_FREE_CONNECTION_INPUT_BUFFER,
  *PRH_FREE_CONNECTION_INPUT_BUFFER;
typedef struct _RH_FREE_CONNECTION_OUTPUT_BUFFER {
    ULONG Version;
} RH_FREE_CONNECTION_OUTPUT_BUFFER,
  *PRH_FREE_CONNECTION_OUTPUT_BUFFER;
typedef struct _RH_QUERY_ACTIVE_BOTH_INITIAL_POLARITY_INPUT_BUFFER {
    ULONG Version;
    ULONG InterruptVector;
} RH_QUERY_ACTIVE_BOTH_INITIAL_POLARITY_INPUT_BUFFER,
  *PRH_QUERY_ACTIVE_BOTH_INITIAL_POLARITY_INPUT_BUFFER;
typedef struct _RH_QUERY_ACTIVE_BOTH_INITIAL_POLARITY_OUTPUT_BUFFER {
    ULONG Version;
    UCHAR InitialPolarity;
} RH_QUERY_ACTIVE_BOTH_INITIAL_POLARITY_OUTPUT_BUFFER,
  *PRH_QUERY_ACTIVE_BOTH_INITIAL_POLARITY_OUTPUT_BUFFER;
typedef struct _RH_UPDATE_ACTIVE_BOTH_INITIAL_POLARITY_INPUT_BUFFER {
    ULONG Version;
    ULONG InterruptVector;
    BOOLEAN InitialPolarity;
} RH_UPDATE_ACTIVE_BOTH_INITIAL_POLARITY_INPUT_BUFFER,
  *PRH_UPDATE_ACTIVE_BOTH_INITIAL_POLARITY_INPUT_BUFFER;
typedef struct _RH_UPDATE_ACTIVE_BOTH_INITIAL_POLARITY_OUTPUT_BUFFER {
    ULONG Version;
} RH_UPDATE_ACTIVE_BOTH_INITIAL_POLARITY_OUTPUT_BUFFER,
  *PRH_UPDATE_ACTIVE_BOTH_INITIAL_POLARITY_OUTPUT_BUFFER;
#include "pshpack1.h"
    sizeof(PNP_GPIO_INTERRUPT_IO_DESCRIPTOR)
typedef struct _PNP_GPIO_INTERRUPT_IO_DESCRIPTOR {
    UCHAR Tag;
    USHORT Length;
    UCHAR Revision;
    UCHAR DescriptorType;
    USHORT GeneralFlags;
    USHORT InterruptIoFlags;
    UCHAR PinConfiguration;
    USHORT DriveStrength;
    USHORT DebounceTimeout;
    USHORT PinTableOffset;
    UCHAR ResourceSourceIndex;
    USHORT ResourceSourceOffset;
    USHORT VendorDataOffset;
    USHORT VendorDataLength;
} PNP_GPIO_INTERRUPT_IO_DESCRIPTOR, *PPNP_GPIO_INTERRUPT_IO_DESCRIPTOR;
    sizeof(PNP_FUNCTION_CONFIG_DESCRIPTOR)
typedef struct _PNP_LARGE_VENDOR_DESCRIPTOR {
    UCHAR Tag;
    USHORT Length;
    UCHAR SubType;
    GUID UUID;
    UCHAR VendorDescriptor[ANYSIZE_ARRAY];
} PNP_LARGE_VENDOR_DESCRIPTOR, *PPNP_LARGE_VENDOR_DESCRIPTOR;
    sizeof(PNP_LARGE_VENDOR_DESCRIPTOR)
typedef struct _PNP_FUNCTION_CONFIG_DESCRIPTOR {
    UCHAR Tag;
    USHORT Length;
    UCHAR Revision;
    USHORT Flags;
    UCHAR PinConfiguration;
    USHORT FunctionNumber;
    USHORT PinTableOffset;
    UCHAR ResourceSourceIndex;
    USHORT ResourceSourceOffset;
    USHORT VendorDataOffset;
    USHORT VendorDataLength;
} PNP_FUNCTION_CONFIG_DESCRIPTOR, *PPNP_FUNCTION_CONFIG_DESCRIPTOR;
typedef struct _PNP_SERIAL_BUS_DESCRIPTOR {
    UCHAR Tag;
    USHORT Length;
    UCHAR RevisionId;
    UCHAR ResourceSourceIndex;
    UCHAR SerialBusType;
    UCHAR GeneralFlags;
    USHORT TypeSpecificFlags;
    UCHAR TypeSpecificRevisionId;
    USHORT TypeDataLength;
} PNP_SERIAL_BUS_DESCRIPTOR, *PPNP_SERIAL_BUS_DESCRIPTOR;
#include "poppack.h"
_When_(SUCCEEDED(hr), _Post_satisfies_(NT_SUCCESS(return)))
_When_(FAILED(hr), _Post_satisfies_(!NT_SUCCESS(return)))
NTSTATUS
FORCEINLINE
RESOURCE_HUB_HRESULT_TO_NTSTATUS (
    _In_ HRESULT hr
    )
{
    switch(hr)
    {
    case STRSAFE_E_INVALID_PARAMETER:
        return STATUS_INVALID_PARAMETER;
    case STRSAFE_E_INSUFFICIENT_BUFFER:
        return STATUS_BUFFER_OVERFLOW;
    case STRSAFE_E_END_OF_FILE:
        return STATUS_END_OF_FILE;
    default:
        if(SUCCEEDED(hr)) {
            return STATUS_SUCCESS;
        } else {
            return STATUS_UNSUCCESSFUL;
        }
    }
}
    RESOURCE_HUB_HRESULT_TO_NTSTATUS( \
        StringCbPrintfW(pszDest, cbDest, pszFormat, __VA_ARGS__))
static
NTSTATUS
RESOURCE_HUB_UNICODE_STRING_PRINTF (
    _Inout_ PUNICODE_STRING DestinationString,
    _In_ _Printf_format_string_ STRSAFE_LPCWSTR pszFormat,
    ...
    )
{
    HRESULT hr;
    STRSAFE_LPWSTR pszDestEnd;
    va_list argList;
    va_start(argList, pszFormat);
    hr = StringCbVPrintfExW(DestinationString->Buffer,
                            DestinationString->MaximumLength,
                            &pszDestEnd,
                            NULL,
                            0,
                            pszFormat,
                            argList);
    if (SUCCEEDED(hr)) {
        DestinationString->Length = (USHORT)(
            (pszDestEnd - DestinationString->Buffer) * sizeof(WCHAR));
    }
    return RESOURCE_HUB_HRESULT_TO_NTSTATUS(hr);
}
    ((!(_exp)) ? \
        (__annotation(L"Debug", L"AssertFail", L#_exp), \
         DebugBreak(), FALSE) : \
        TRUE)
NTSTATUS
FORCEINLINE
RESOURCE_HUB_ID_TO_FILE_NAME(
    _In_ ULONG IdLowPart,
    _In_ ULONG IdHighPart,
    _Out_writes_bytes_(RESOURCE_HUB_CONNECTION_FILE_SIZE)
        PWCHAR FileName
    )
{
    LARGE_INTEGER Id;
    Id.LowPart = IdLowPart;
    Id.HighPart = IdHighPart;
    return RESOURCE_HUB_STRING_PRINTF(FileName,
                                         RESOURCE_HUB_FILE_SIZE,
                                         L"%0*I64x",
                                         (ULONG)(sizeof(LARGE_INTEGER) * 2),
                                         Id.QuadPart);
}
NTSTATUS
FORCEINLINE
RESOURCE_HUB_CREATE_PATH_FROM_ID (
    _Inout_ PUNICODE_STRING FileName,
    _In_ ULONG IdLowPart,
    _In_ ULONG IdHighPart
    )
{
    WCHAR FileNameSuffix[RESOURCE_HUB_CONNECTION_FILE_CHARS];
    NTSTATUS Status;
    RESOURCE_HUB_ASSERT(FileName->MaximumLength >=
            RESOURCE_HUB_CONNECTION_PATH_SIZE);
    Status = RESOURCE_HUB_ID_TO_FILE_NAME(IdLowPart,
                                          IdHighPart,
                                          FileNameSuffix);
    if (NT_SUCCESS(Status)) {
        Status = RESOURCE_HUB_UNICODE_STRING_PRINTF(
            FileName,
            L"%s%s",
            RESOURCE_HUB_DEVICE_NAME_PREFIX,
            FileNameSuffix);
    }
    return Status;
}
NTSTATUS
FORCEINLINE
RESOURCE_HUB_ID_FROM_FILE_NAME_WITH_SUBPATH (
    _In_z_ LPCWSTR FileName,
    _Out_ PLARGE_INTEGER Id,
    _Out_ LPWSTR *NextPathElement
    )
{
    UNICODE_STRING HighPart;
    USHORT Index;
    UNICODE_STRING LowPart;
    NTSTATUS Status;
    Id->QuadPart = 0;
    *NextPathElement = (LPWSTR)FileName;
    Status = RESOURCE_HUB_UNICODE_STRING_INIT(&HighPart, FileName);
    if (!NT_SUCCESS(Status)) {
        return Status;
    } else if ((RESOURCE_HUB_CONNECTION_FILE_SIZE - sizeof(UNICODE_NULL)) >
               HighPart.Length) {
        Status = STATUS_INVALID_PARAMETER;
        return Status;
    } else {
        HighPart.Length = (RESOURCE_HUB_CONNECTION_FILE_SIZE - sizeof(UNICODE_NULL));
    }
    for (Index = 0; Index < (HighPart.Length / sizeof(WCHAR)); ++Index) {
        if ((HighPart.Buffer[Index] >= L'0' && HighPart.Buffer[Index] <= L'9') ||
            (HighPart.Buffer[Index] >= L'a' && HighPart.Buffer[Index] <= L'f') ||
            (HighPart.Buffer[Index] >= L'A' && HighPart.Buffer[Index] <= L'F')) {
            continue;
        } else {
            Status = STATUS_INVALID_PARAMETER;
            break;
        }
    }
    if (!NT_SUCCESS(Status)) {
        return Status;
    }
    *NextPathElement = &HighPart.Buffer[Index];
    if ((*NextPathElement)[0] != L'\\' && (*NextPathElement)[0] != L'\0') {
        return STATUS_INVALID_PARAMETER;
    }
    HighPart.Length = 2 * sizeof(Id->HighPart) * sizeof(WCHAR);
    LowPart.Buffer = (PWSTR)((ULONG_PTR)HighPart.Buffer + HighPart.Length);
    LowPart.MaximumLength = HighPart.MaximumLength - HighPart.Length;
    LowPart.Length = 2 * sizeof(Id->LowPart) * sizeof(WCHAR);
    Status = RtlUnicodeStringToInteger(&HighPart, 16, (PULONG)&Id->HighPart);
    if (!NT_SUCCESS(Status)) {
        return Status;
    }
    Status = RtlUnicodeStringToInteger(&LowPart, 16, (PULONG)&Id->LowPart);
    if (!NT_SUCCESS(Status)) {
        return Status;
    }
    if ((*NextPathElement)[0] == L'\\') {
        ++(*NextPathElement);
    }
    return Status;
}
NTSTATUS
FORCEINLINE
RESOURCE_HUB_ID_FROM_FILE_NAME (
    _In_z_ LPCWSTR FileName,
    _Out_ PLARGE_INTEGER Id
    )
{
    LPWSTR NextPathElement;
    NTSTATUS Status;
    Status = RESOURCE_HUB_ID_FROM_FILE_NAME_WITH_SUBPATH(FileName,
                                                         Id,
                                                         &NextPathElement);
    return Status;
}
}
#endif
#pragma endregion
