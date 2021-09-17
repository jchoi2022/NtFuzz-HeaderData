       
DEFINE_GUID(GUID_BUS_VPCI,
0xc066f39a, 0xde00, 0x4667, 0x89, 0x41, 0x33, 0x68, 0xed, 0x5d, 0x83, 0xb5);
DEFINE_GUID(GUID_VPCI_INTERFACE_STANDARD,
0x12e65e71, 0xb651, 0x4067, 0x83, 0x1a, 0x13, 0x83, 0x20, 0x3c, 0xb0, 0xcb);
DEFINE_GUID(GUID_DEVINTERFACE_VPCI,
0x57863182, 0xc948, 0x4692, 0x97, 0xe3, 0x34, 0xb5, 0x76, 0x62, 0xa3, 0xe0);
typedef
_Function_class_(VPCI_WRITE_BLOCK)
_IRQL_requires_same_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
VPCI_WRITE_BLOCK (
    _In_ PVOID Context,
    _In_ ULONG BlockId,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length
    );
typedef VPCI_WRITE_BLOCK *PVPCI_WRITE_BLOCK;
typedef
_Function_class_(VPCI_READ_BLOCK)
_IRQL_requires_same_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
VPCI_READ_BLOCK (
    _In_ PVOID Context,
    _In_ ULONG BlockId,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length
    );
typedef VPCI_READ_BLOCK *PVPCI_READ_BLOCK;
typedef struct _VPCI_INTERFACE_STANDARD
{
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PVPCI_WRITE_BLOCK WriteVfConfigBlock;
    PVPCI_READ_BLOCK ReadVfConfigBlock;
    UINT32 SerialNumber;
} VPCI_INTERFACE_STANDARD, *PVPCI_INTERFACE_STANDARD;
typedef struct _VPCI_READ_BLOCK_INPUT
{
    ULONG BlockId;
    ULONG BytesRequested;
} VPCI_READ_BLOCK_INPUT, *PVPCI_READ_BLOCK_INPUT;
typedef struct _VPCI_WRITE_BLOCK_INPUT
{
    ULONG BlockId;
    ULONG DataLength;
    UCHAR Data[ANYSIZE_ARRAY];
} VPCI_WRITE_BLOCK_INPUT, *PVPCI_WRITE_BLOCK_INPUT;
typedef struct _VPCI_INVALIDATE_BLOCK_OUTPUT
{
    UINT64 BlockMask;
} VPCI_INVALIDATE_BLOCK_OUTPUT, *PVPCI_INVALIDATE_BLOCK_OUTPUT;
