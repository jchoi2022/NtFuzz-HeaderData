#include <ntimage.h>
extern "C" {
typedef struct _AUX_MODULE_BASIC_INFO {
    PVOID ImageBase;
} AUX_MODULE_BASIC_INFO, *PAUX_MODULE_BASIC_INFO;
typedef struct _AUX_MODULE_EXTENDED_INFO {
    AUX_MODULE_BASIC_INFO BasicInfo;
    ULONG ImageSize;
    USHORT FileNameOffset;
    UCHAR FullPathName [AUX_KLIB_MODULE_PATH_LEN];
} AUX_MODULE_EXTENDED_INFO, *PAUX_MODULE_EXTENDED_INFO;
typedef struct _KBUGCHECK_DATA {
    ULONG BugCheckDataSize;
    ULONG BugCheckCode;
    ULONG_PTR Parameter1;
    ULONG_PTR Parameter2;
    ULONG_PTR Parameter3;
    ULONG_PTR Parameter4;
} KBUGCHECK_DATA, *PKBUGCHECK_DATA;
NTSTATUS
__stdcall
AuxKlibInitialize (
    VOID
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
__stdcall
AuxKlibQueryModuleInformation (
    _Inout_ PULONG BufferSize,
    _In_ ULONG ElementSize,
    _Out_writes_bytes_opt_(*BufferSize) PVOID QueryInfo
    );
NTSTATUS
AuxKlibGetBugCheckData(
    _Inout_ PKBUGCHECK_DATA BugCheckData
    );
PIMAGE_EXPORT_DIRECTORY
AuxKlibGetImageExportDirectory(
    _In_ PVOID ImageBase
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
__stdcall
AuxKlibEnumerateSystemFirmwareTables (
    _In_ ULONG FirmwareTableProviderSignature,
    _Out_writes_bytes_to_opt_(BufferLength, *ReturnLength) PVOID FirmwareTableBuffer,
    _In_ ULONG BufferLength,
    _Out_opt_ PULONG ReturnLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
__stdcall
AuxKlibGetSystemFirmwareTable (
    _In_ ULONG FirmwareTableProviderSignature,
    _In_ ULONG FirmwareTableID,
    _Out_writes_bytes_to_opt_(BufferLength, *ReturnLength) PVOID FirmwareTableBuffer,
    _In_ ULONG BufferLength,
    _Out_opt_ PULONG ReturnLength
    );
}
