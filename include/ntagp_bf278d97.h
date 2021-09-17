typedef struct _AGP_INFO_COMMON
{
    PCI_AGP_CAPABILITY MasterCap;
    PCI_AGP_CAPABILITY TargetCap;
    USHORT DeviceId;
    USHORT VendorId;
    USHORT SubVendorId;
    USHORT SubSystemId;
    UCHAR HwRevisionId;
    ULONG VerifierFlags;
    BOOLEAN GuardPageCorruption;
}AGP_INFO_COMMON, *PAGP_INFO_COMMON;
typedef struct _AGP_INFO_DRIVER
{
    ULONG AGPReg1;
    ULONG AGPReg2;
    PHYSICAL_ADDRESS ApertureStart;
    PHYSICAL_ADDRESS GartTranslationTable;
    ULONG ApertureLength;
}AGP_INFO_DRIVER, *PAGP_INFO_DRIVER;
typedef struct
{
    AGP_INFO_COMMON CommonInfo;
    AGP_INFO_DRIVER DriverInfo;
}AGP_INFO, *PAGP_INFO;
DEFINE_GUID(GUID_AGP_BUS_INTERFACE_STANDARD, 0x2ef74803, 0xd8d3, 0x11d1, 0x9c, 0xaa, 0x00, 0xc0, 0xf0, 0x16, 0x56, 0x36 );
typedef
NTSTATUS
(*PAGP_BUS_SET_RATE)(
    IN PVOID AgpContext,
    IN ULONG AgpRate
    );
typedef
NTSTATUS
(*PAGP_BUS_RESERVE_MEMORY)(
    IN PVOID AgpContext,
    IN ULONG NumberOfPages,
    IN MEMORY_CACHING_TYPE MemoryType,
    OUT PVOID *MapHandle,
    OUT OPTIONAL PHYSICAL_ADDRESS *PhysicalAddress
    );
typedef
NTSTATUS
(*PAGP_BUS_RELEASE_MEMORY)(
    IN PVOID AgpContext,
    IN PVOID MapHandle
    );
typedef
NTSTATUS
(*PAGP_BUS_COMMIT_MEMORY)(
    IN PVOID AgpContext,
    IN PVOID MapHandle,
    IN ULONG NumberOfPages,
    IN ULONG OffsetInPages,
    IN OUT PMDL Mdl OPTIONAL,
    OUT PHYSICAL_ADDRESS *MemoryBase
    );
typedef
NTSTATUS
(*PAGP_BUS_FREE_MEMORY)(
    IN PVOID AgpContext,
    IN PVOID MapHandle,
    IN ULONG NumberOfPages,
    IN ULONG OffsetInPages
    );
typedef
NTSTATUS
(*PAGP_GET_MAPPED_PAGES)(
    IN PVOID AgpContext,
    IN PVOID MapHandle,
    IN ULONG NumberOfPages,
    IN ULONG OffsetInPages,
    OUT PMDL Mld
    );
typedef
NTSTATUS
(*PAGP_MAP_MEMORY)(
    IN PVOID AgpContext,
    IN PVOID MapHandle,
    IN ULONG NumberOfPages,
    IN ULONG OffsetInPages,
    IN PMDL Mdl,
    OUT PHYSICAL_ADDRESS *MemoryBase
    );
typedef
NTSTATUS
(*PAGP_UNMAP_MEMORY)(
    IN PVOID AgpContext,
    IN PVOID MapHandle,
    IN ULONG NumberOfPages,
    IN ULONG OffsetInPages,
    IN PMDL Mdl
    );
typedef
NTSTATUS
(*PAGP_FLUSH_CHIPSET_CACHES)(
    IN PVOID AgpContext
    );
typedef
NTSTATUS
(*PAGP_CHECK_INTEGRITY)(
    IN PVOID AgpContext
    );
typedef
NTSTATUS
(*PAGP_MAP_MEMORY_EX)(
    IN PVOID AgpContext,
    IN PVOID MapHandle,
    IN ULONG NumberOfPages,
    IN ULONG OffsetInPages,
    IN PMDL Mdl,
    IN OPTIONAL MEMORY_CACHING_TYPE *CacheTypeOverride,
    OUT PHYSICAL_ADDRESS *MemoryBase
    );
typedef
NTSTATUS
(*PAGP_UNMAP_MEMORY_EX)(
    IN PVOID AgpContext,
    IN PVOID MapHandle,
    IN ULONG NumberOfPages,
    IN ULONG OffsetInPages,
    IN PMDL Mdl
    );
typedef
NTSTATUS
(*PAGP_FLUSH_GART_TLB)(
    IN PVOID AgpContext
    );
typedef
NTSTATUS
(*PAGP_CHECK_GUARD_PAGE)(
    IN PVOID AgpContext,
    IN ULONG Flags,
    IN ULONG ULongsToCheck
    );
typedef
VOID
(*PAGP_GET_INFO)(
    IN PVOID AgpContext,
    OUT PAGP_INFO AgpInfo
    );
typedef struct _AGP_BUS_INTERFACE_STANDARD {
    USHORT Size;
    USHORT Version;
    PVOID AgpContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    ULONG Capabilities;
    PAGP_BUS_RESERVE_MEMORY ReserveMemory;
    PAGP_BUS_RELEASE_MEMORY ReleaseMemory;
    PAGP_BUS_COMMIT_MEMORY CommitMemory;
    PAGP_BUS_FREE_MEMORY FreeMemory;
    PAGP_GET_MAPPED_PAGES GetMappedPages;
    PAGP_BUS_SET_RATE SetRate;
    SIZE_T AgpSize;
    PHYSICAL_ADDRESS AgpBase;
    PHYSICAL_ADDRESS MaxPhysicalAddress;
    PAGP_MAP_MEMORY MapMemory;
    PAGP_UNMAP_MEMORY UnMapMemory;
    PAGP_FLUSH_CHIPSET_CACHES FlushChipsetCaches;
    PAGP_CHECK_INTEGRITY CheckIntegrity;
    PAGP_MAP_MEMORY_EX MapMemoryEx;
    PAGP_UNMAP_MEMORY_EX UnMapMemoryEx;
    PAGP_FLUSH_GART_TLB FlushGartTLB;
    PAGP_CHECK_GUARD_PAGE CheckGuardPage;
    PAGP_GET_INFO GetAgpInfo;
} AGP_BUS_INTERFACE_STANDARD, *PAGP_BUS_INTERFACE_STANDARD;
    (FIELD_OFFSET(AGP_BUS_INTERFACE_STANDARD,SetRate))
    (FIELD_OFFSET(AGP_BUS_INTERFACE_STANDARD, AgpSize))
    (FIELD_OFFSET(AGP_BUS_INTERFACE_STANDARD, FlushChipsetCaches))
    (FIELD_OFFSET(AGP_BUS_INTERFACE_STANDARD, MapMemoryEx))
