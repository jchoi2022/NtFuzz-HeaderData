#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
HRESULT
WINAPI
InitCompression(
    VOID
);
VOID
WINAPI
DeInitCompression(
    VOID
);
HRESULT
WINAPI
CreateCompression(
    OUT PVOID *context,
    IN ULONG reserved
);
HRESULT WINAPI Compress(
    IN OUT PVOID context,
    IN CONST BYTE * input_buffer,
    IN LONG input_buffer_size,
    IN PBYTE output_buffer,
    IN LONG output_buffer_size,
    OUT PLONG input_used,
    OUT PLONG output_used,
    IN INT compression_level
);
HRESULT WINAPI Compress2(
    IN OUT PVOID context,
    IN CONST BYTE * input_buffer,
    IN LONG input_buffer_size,
    IN PBYTE output_buffer,
    IN LONG output_buffer_size,
    OUT PLONG input_used,
    OUT PLONG output_used,
    IN INT compression_level,
    IN INT operation
);
VOID
WINAPI
DestroyCompression(
    IN PVOID context
);
HRESULT
WINAPI
ResetCompression(
    IN OUT PVOID context
);
#endif
#pragma endregion
