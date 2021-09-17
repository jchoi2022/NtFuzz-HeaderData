#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
#include <pshpack4.h>
typedef _Return_type_success_(return >= 0) LONG NTSTATUS;
#include "hidusage.h"
#include "hidpi.h"
typedef struct _HIDD_CONFIGURATION {
    PVOID cookie;
    ULONG size;
    ULONG RingBufferSize;
} HIDD_CONFIGURATION, *PHIDD_CONFIGURATION;
typedef struct _HIDD_ATTRIBUTES {
    ULONG Size;
    USHORT VendorID;
    USHORT ProductID;
    USHORT VersionNumber;
} HIDD_ATTRIBUTES, *PHIDD_ATTRIBUTES;
_Must_inspect_result_
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_GetAttributes (
    _In_ HANDLE HidDeviceObject,
    _Out_ PHIDD_ATTRIBUTES Attributes
    );
void __stdcall
HidD_GetHidGuid (
   _Out_ LPGUID HidGuid
   );
_Must_inspect_result_
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_GetPreparsedData (
   _In_ HANDLE HidDeviceObject,
   _Out_ _When_(return!=0, __drv_allocatesMem(Mem)) PHIDP_PREPARSED_DATA * PreparsedData
   );
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_FreePreparsedData (
   _In_ __drv_freesMem(Mem) PHIDP_PREPARSED_DATA PreparsedData
   );
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_FlushQueue (
   _In_ HANDLE HidDeviceObject
   );
_Must_inspect_result_
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_GetConfiguration (
   _In_ HANDLE HidDeviceObject,
   _Out_writes_bytes_(ConfigurationLength) PHIDD_CONFIGURATION Configuration,
   _In_ ULONG ConfigurationLength
   );
_Must_inspect_result_
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_SetConfiguration (
   _In_ HANDLE HidDeviceObject,
   _In_reads_bytes_(ConfigurationLength) PHIDD_CONFIGURATION Configuration,
   _In_ ULONG ConfigurationLength
   );
_Must_inspect_result_
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_GetFeature (
   _In_ HANDLE HidDeviceObject,
   _Out_writes_bytes_(ReportBufferLength) PVOID ReportBuffer,
   _In_ ULONG ReportBufferLength
   );
_Must_inspect_result_
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_SetFeature (
   _In_ HANDLE HidDeviceObject,
   _In_reads_bytes_(ReportBufferLength) PVOID ReportBuffer,
   _In_ ULONG ReportBufferLength
   );
_Must_inspect_result_
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_GetInputReport (
   _In_ HANDLE HidDeviceObject,
   _Out_writes_bytes_(ReportBufferLength) PVOID ReportBuffer,
   _In_ ULONG ReportBufferLength
   );
_Must_inspect_result_
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_SetOutputReport (
   _In_ HANDLE HidDeviceObject,
   _In_reads_bytes_(ReportBufferLength) PVOID ReportBuffer,
   _In_ ULONG ReportBufferLength
   );
_Must_inspect_result_
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_GetNumInputBuffers (
    _In_ HANDLE HidDeviceObject,
    _Out_ PULONG NumberBuffers
    );
_Must_inspect_result_
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_SetNumInputBuffers (
    _In_ HANDLE HidDeviceObject,
    _In_ ULONG NumberBuffers
    );
_Must_inspect_result_
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_GetPhysicalDescriptor (
   _In_ HANDLE HidDeviceObject,
   _Out_writes_bytes_(BufferLength) PVOID Buffer,
   _In_ ULONG BufferLength
   );
_Must_inspect_result_
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_GetManufacturerString (
   _In_ HANDLE HidDeviceObject,
   _Out_writes_bytes_(BufferLength) PVOID Buffer,
   _In_ ULONG BufferLength
   );
_Must_inspect_result_
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_GetProductString (
   _In_ HANDLE HidDeviceObject,
   _Out_writes_bytes_(BufferLength) PVOID Buffer,
   _In_ ULONG BufferLength
   );
_Must_inspect_result_
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_GetIndexedString (
   _In_ HANDLE HidDeviceObject,
   _In_ ULONG StringIndex,
   _Out_writes_bytes_(BufferLength) PVOID Buffer,
   _In_ ULONG BufferLength
   );
_Must_inspect_result_
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_GetSerialNumberString (
   _In_ HANDLE HidDeviceObject,
   _Out_writes_bytes_(BufferLength) PVOID Buffer,
   _In_ ULONG BufferLength
   );
_Must_inspect_result_
_Success_(return==TRUE)
BOOLEAN __stdcall
HidD_GetMsGenreDescriptor (
   _In_ HANDLE HidDeviceObject,
   _Out_writes_bytes_(BufferLength) PVOID Buffer,
   _In_ ULONG BufferLength
   );
#include <poppack.h>
}
#endif
#pragma endregion
