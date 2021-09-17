    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef struct _NET_PACKET_EXTENSION
{
    ULONG Size;
    PCWSTR Name;
    ULONG Version;
    ULONG Alignment;
    SIZE_T ExtensionSize;
} NET_PACKET_EXTENSION;
inline
void
NET_PACKET_EXTENSION_INIT(
    _Out_ NET_PACKET_EXTENSION * Extension,
    _In_ PCWSTR Name,
    _In_ ULONG Version,
    _In_ SIZE_T ExtensionSize,
    _In_ ULONG Alignment
)
{
    RtlZeroMemory(Extension, sizeof(NET_PACKET_EXTENSION));
    Extension->Size = sizeof(NET_PACKET_EXTENSION);
    Extension->Name = Name;
    Extension->Version = Version;
    Extension->Alignment = Alignment;
    Extension->ExtensionSize = ExtensionSize;
}
typedef struct _NET_PACKET_EXTENSION_QUERY
{
    ULONG Size;
    PCWSTR Name;
    ULONG Version;
} NET_PACKET_EXTENSION_QUERY;
inline
void
NET_PACKET_EXTENSION_QUERY_INIT(
    _Out_ NET_PACKET_EXTENSION_QUERY * Extension,
    _In_ PCWSTR Name,
    _In_ ULONG Version
)
{
    RtlZeroMemory(Extension, sizeof(NET_PACKET_EXTENSION_QUERY));
    Extension->Size = sizeof(NET_PACKET_EXTENSION_QUERY);
    Extension->Name = Name;
    Extension->Version = Version;
}
WDF_EXTERN_C_END
