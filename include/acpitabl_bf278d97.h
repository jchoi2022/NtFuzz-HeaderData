       
#include <pshpack1.h>
typedef struct _GEN_ADDR {
    UCHAR AddressSpaceID;
    UCHAR BitWidth;
    UCHAR BitOffset;
    UCHAR AccessSize;
    PHYSICAL_ADDRESS Address;
} GEN_ADDR, *PGEN_ADDR;
typedef struct _RSDP {
    ULONGLONG Signature;
    UCHAR Checksum;
    UCHAR OEMID[6];
    UCHAR Revision;
    ULONG RsdtAddress;
    ULONG Length;
    PHYSICAL_ADDRESS XsdtAddress;
    UCHAR XChecksum;
    UCHAR Reserved[3];
} RSDP, *PRSDP;
typedef struct _DESCRIPTION_HEADER {
    ULONG Signature;
    ULONG Length;
    UCHAR Revision;
    UCHAR Checksum;
    CHAR OEMID[ACPI_MAX_OEM_ID];
    CHAR OEMTableID[ACPI_MAX_TABLE_ID];
    ULONG OEMRevision;
    CHAR CreatorID[ACPI_MAX_CREATOR_ID];
    ULONG CreatorRev;
} DESCRIPTION_HEADER, *PDESCRIPTION_HEADER;
typedef enum _ACPI_GENERIC_ADDRESS_TYPE {
    AcpiGenericSpaceMemory = 0,
    AcpiGenericSpaceIO,
    AcpiGenericSpacePciConfig,
    AcpiGenericSpaceEC,
    AcpiGenericSpaceSMBus,
    AcpiGenericSpacePcc = 0x0a,
    AcpiGenericSpaceFixedFunction = 0x7F
} ACPI_GENERIC_ADDRESS_TYPE, *PACPI_GENERIC_ADDRESS_TYPE;
typedef enum _ACPI_GENERIC_ACCESS_SIZE {
    AcpiGenericAccessSizeLegacy = 0,
    AcpiGenericAccessSizeByte,
    AcpiGenericAccessSizeWord,
    AcpiGenericAccessSizeDWord,
    AcpiGenericAccessSizeQWord
} ACPI_GENERIC_ACCESS_SIZE, *PACPI_GENERIC_ACCESS_SIZE;
typedef struct _FACS {
    ULONG Signature;
    ULONG Length;
    ULONG HardwareSignature;
    ULONG pFirmwareWakingVector;
    ULONG GlobalLock;
    ULONG Flags;
    PHYSICAL_ADDRESS x_FirmwareWakingVector;
    UCHAR version;
    UCHAR Reserved[31];
} FACS, *PFACS;
typedef struct _FADT {
DESCRIPTION_HEADER Header;
ULONG facs;
ULONG dsdt;
UCHAR int_model;
UCHAR pm_profile;
USHORT sci_int_vector;
ULONG smi_cmd_io_port;
UCHAR acpi_on_value;
UCHAR acpi_off_value;
UCHAR s4bios_req;
UCHAR pstate_control;
ULONG pm1a_evt_blk_io_port;
ULONG pm1b_evt_blk_io_port;
ULONG pm1a_ctrl_blk_io_port;
ULONG pm1b_ctrl_blk_io_port;
ULONG pm2_ctrl_blk_io_port;
ULONG pm_tmr_blk_io_port;
ULONG gp0_blk_io_port;
ULONG gp1_blk_io_port;
UCHAR pm1_evt_len;
UCHAR pm1_ctrl_len;
UCHAR pm2_ctrl_len;
UCHAR pm_tmr_len;
UCHAR gp0_blk_len;
UCHAR gp1_blk_len;
UCHAR gp1_base;
UCHAR cstate_control;
USHORT lvl2_latency;
USHORT lvl3_latency;
USHORT flush_size;
USHORT flush_stride;
UCHAR duty_offset;
UCHAR duty_width;
UCHAR day_alarm_index;
UCHAR month_alarm_index;
UCHAR century_alarm_index;
USHORT boot_arch;
UCHAR reserved3[1];
ULONG flags;
GEN_ADDR reset_reg;
UCHAR reset_val;
USHORT arm_boot_arch;
UCHAR minor_version_number;
PHYSICAL_ADDRESS x_firmware_ctrl;
PHYSICAL_ADDRESS x_dsdt;
GEN_ADDR x_pm1a_evt_blk;
GEN_ADDR x_pm1b_evt_blk;
GEN_ADDR x_pm1a_ctrl_blk;
GEN_ADDR x_pm1b_ctrl_blk;
GEN_ADDR x_pm2_ctrl_blk;
GEN_ADDR x_pm_tmr_blk;
GEN_ADDR x_gp0_blk;
GEN_ADDR x_gp1_blk;
GEN_ADDR sleep_control_reg;
GEN_ADDR sleep_status_reg;
} FADT, *PFADT;
    ((((PUCHAR)(Entry)) + RTL_SIZEOF_THROUGH_FIELD(Type, Length) <= (PUCHAR)(TableEnd)) && \
     (((Type *)(Entry))->Length >= RTL_SIZEOF_THROUGH_FIELD(Type, Length)) && \
     (((PUCHAR)(Entry)) + ((Type *)(Entry))->Length <= (PUCHAR)(TableEnd)))
typedef struct _ACPI_SRAT {
    DESCRIPTION_HEADER Header;
    ULONG TableRevision;
    ULONG Reserved[2];
} ACPI_SRAT, *PACPI_SRAT;
#pragma warning(disable: 4214)
#pragma warning(disable: 4201)
typedef struct _ACPI_SRAT_ENTRY {
    UCHAR Type;
    UCHAR Length;
    union {
        struct {
            UCHAR ProximityDomainLow;
            UCHAR ApicId;
            struct {
                ULONG Enabled:1;
                ULONG Reserved:31;
            } Flags;
            UCHAR SApicEid;
            UCHAR ProximityDomainHigh[3];
            ULONG ClockDomain;
        } ApicAffinity;
        struct {
            ULONG ProximityDomain;
            UCHAR Reserved[2];
            PHYSICAL_ADDRESS Base;
            ULONGLONG Length;
            ULONG Reserved2;
            struct {
                ULONG Enabled:1;
                ULONG HotPlug:1;
                ULONG Reserved:30;
            } Flags;
            UCHAR Reserved3[8];
        } MemoryAffinity;
        struct {
            UCHAR Reserved[2];
            ULONG ProximityDomain;
            ULONG ApicId;
            struct {
                ULONG Enabled:1;
                ULONG Reserved:31;
            } Flags;
            ULONG ClockDomain;
            ULONG Reserved2;
        } X2ApicAffinity;
        struct {
            ULONG ProximityDomain;
            ULONG ProcessorUid;
            struct {
                ULONG Enabled:1;
                ULONG Reserved:31;
            } Flags;
            ULONG ClockDomain;
        } GiccAffinity;
    } DUMMYUNIONNAME;
} ACPI_SRAT_ENTRY, *PACPI_SRAT_ENTRY;
    (FIELD_OFFSET(ACPI_SRAT_ENTRY, ApicAffinity) + \
     RTL_FIELD_SIZE(ACPI_SRAT_ENTRY, ApicAffinity))
    (FIELD_OFFSET(ACPI_SRAT_ENTRY, MemoryAffinity) + \
     RTL_FIELD_SIZE(ACPI_SRAT_ENTRY, MemoryAffinity))
    (FIELD_OFFSET(ACPI_SRAT_ENTRY, X2ApicAffinity) + \
     RTL_FIELD_SIZE(ACPI_SRAT_ENTRY, X2ApicAffinity))
    (FIELD_OFFSET(ACPI_SRAT_ENTRY, GiccAffinity) + \
     RTL_FIELD_SIZE(ACPI_SRAT_ENTRY, GiccAffinity))
    (((SratTable)->Header.Revision == 1) ? \
     PROXIMITY_DOMAIN_1(SratEntry) : PROXIMITY_DOMAIN_2(SratEntry))
    (SratEntry)->ApicAffinity.ProximityDomainLow
    (((SratEntry)->Type == SratProcessorLocalAPIC) ? \
     (((ULONG)((SratEntry)->ApicAffinity.ProximityDomainLow)) + \
      (((ULONG)((SratEntry)->ApicAffinity.ProximityDomainHigh[0])) << 8) + \
      (((ULONG)((SratEntry)->ApicAffinity.ProximityDomainHigh[1])) << 16) + \
      (((ULONG)((SratEntry)->ApicAffinity.ProximityDomainHigh[2])) << 24)) : \
     (((SratEntry)->Type == SratProcessorLocalX2APIC) ? \
      (SratEntry)->X2ApicAffinity.ProximityDomain : \
      (((SratEntry)->Type == SratMemory) ? \
       (SratEntry)->MemoryAffinity.ProximityDomain : \
       (SratEntry)->GiccAffinity.ProximityDomain)))
typedef enum {
    SratProcessorLocalAPIC,
    SratMemory,
    SratProcessorLocalX2APIC,
    SratGicc
} SRAT_ENTRY_TYPE;
typedef struct _MEMORY_POWER_STATE {
    UCHAR PowerStateValue;
    UCHAR PowerStateInformationIndex;
} MEMORY_POWER_STATE, *PMEMORY_POWER_STATE;
typedef struct _MEMORY_POWER_NODE {
    UCHAR Flag;
    UCHAR Reserved1;
    USHORT MpnId;
    ULONG Length;
    ULONG BaseAddressLow;
    ULONG BaseAddressHigh;
    ULONG LengthLow;
    ULONG LengthHigh;
    ULONG PowerStateCount;
    ULONG PhysicalComponentCount;
    MEMORY_POWER_STATE MpState;
} MEMORY_POWER_NODE, *PMEMORY_POWER_NODE;
typedef struct _ACPI_MPST {
    DESCRIPTION_HEADER Header;
    UCHAR SubspaceId;
    UCHAR Reserved2[3];
    USHORT MpnCount;
    UCHAR Reserved[2];
    MEMORY_POWER_NODE Mpn;
} ACPI_MPST, *PACPI_MPST;
#pragma warning(disable: 4214)
#pragma warning(disable: 4201)
typedef struct _POWER_STATE_CHARACTERISTICS {
    union {
        UINT8 AsUINT8;
        struct {
            UINT8 Value:6;
            UINT8 Revision:2;
        } DUMMYSTRUCTNAME;
    } ID;
    UINT8 Flag;
    USHORT Reserved1;
    ULONG PowerInMPS0;
    ULONG PowerSavingToMPS0;
    ULONGLONG ExitLatencyNs;
    UCHAR Reserved2[8];
} POWER_STATE_CHARACTERISTICS, *PPOWER_STATE_CHARACTERISTICS;
typedef struct _MEMORY_COOLING_REGION {
    ULONG PowerCommandRegister;
    ULONG PowerStatusRegister;
    ULONG PowerStateId;
    ULONG MpnId;
    ULONGLONG EnergyConsumed;
    ULONGLONG ExpectedPowerConsumed;
} MEMORY_COOLING_REGION, *PMEMORY_COOLING_REGION;
typedef struct _ACPI_MSCT {
    DESCRIPTION_HEADER Header;
    ULONG DomainInfoOffset;
    ULONG ProximityDomainCount;
    ULONG ClockDomainCount;
    PHYSICAL_ADDRESS MaximumPhysicalAddress;
} ACPI_MSCT, *PACPI_MSCT;
typedef struct _ACPI_MSCT_ENTRY {
    UCHAR Revision;
    UCHAR Length;
    ULONG DomainIdRangeLow;
    ULONG DomainIdRangeHigh;
    ULONG ProcessorCapacity;
    ULONG64 MemoryCapacity;
} ACPI_MSCT_ENTRY, *PACPI_MSCT_ENTRY;
typedef struct _MAPIC {
DESCRIPTION_HEADER Header;
ULONG LocalAPICAddress;
ULONG Flags;
ULONG APICTables[ANYSIZE_ARRAY];
} MAPIC;
typedef MAPIC *PMAPIC;
typedef struct _APICTABLE {
   UCHAR Type;
   UCHAR Length;
} APICTABLE;
typedef APICTABLE UNALIGNED *PAPICTABLE;
typedef struct _PROCLOCALAPIC {
    UCHAR Type;
    UCHAR Length;
    UCHAR ACPIProcessorID;
    UCHAR APICID;
    ULONG Flags;
} PROCLOCALAPIC;
typedef PROCLOCALAPIC UNALIGNED *PPROCLOCALAPIC;
typedef struct _IOAPIC {
    UCHAR Type;
    UCHAR Length;
    UCHAR IOAPICID;
    UCHAR Reserved;
    ULONG IOAPICAddress;
    ULONG SystemVectorBase;
} IOAPIC;
typedef IOAPIC UNALIGNED *PIOAPIC;
typedef struct _ISA_VECTOR {
    UCHAR Type;
    UCHAR Length;
    UCHAR Bus;
    UCHAR Source;
    ULONG GlobalSystemInterruptVector;
    USHORT Flags;
} ISA_VECTOR;
typedef ISA_VECTOR UNALIGNED *PISA_VECTOR;
typedef struct _IO_NMISOURCE {
    UCHAR Type;
    UCHAR Length;
    USHORT Flags;
    ULONG GlobalSystemInterruptVector;
} IO_NMISOURCE;
typedef IO_NMISOURCE UNALIGNED *PIO_NMISOURCE;
typedef struct _LOCAL_NMISOURCE {
    UCHAR Type;
    UCHAR Length;
    UCHAR ProcessorID;
    USHORT Flags;
    UCHAR LINTIN;
} LOCAL_NMISOURCE;
typedef LOCAL_NMISOURCE UNALIGNED *PLOCAL_NMISOURCE;
typedef struct _PROCLOCALSAPIC {
    UCHAR Type;
    UCHAR Length;
    UCHAR ACPIProcessorID;
    UCHAR APICID;
    UCHAR APICEID;
    UCHAR Reserved[3];
    ULONG Flags;
    ULONG ACPIProcessorUIDInteger;
    CHAR ACPIProcessorUIDString[ANYSIZE_ARRAY];
} PROCLOCALSAPIC;
typedef PROCLOCALSAPIC UNALIGNED *PPROCLOCALSAPIC;
typedef struct _IOSAPIC {
    UCHAR Type;
    UCHAR Length;
    UCHAR IOSAPICID;
    UCHAR Reserved;
    ULONG SystemVectorBase;
    ULONG_PTR IOSAPICAddress;
} IOSAPIC;
typedef IOSAPIC UNALIGNED *PIOSAPIC;
typedef struct _PLATFORM_INTERRUPT {
    UCHAR Type;
    UCHAR Length;
    USHORT Flags;
    UCHAR InterruptType;
    UCHAR APICID;
    UCHAR ACPIEID;
    UCHAR IOSAPICVector;
    ULONG GlobalVector;
    ULONG Reserved;
} PLATFORM_INTERRUPT;
typedef PLATFORM_INTERRUPT UNALIGNED *PPLATFORM_INTERRUPT;
typedef struct _PROCLOCALX2APIC {
    UCHAR Type;
    UCHAR Length;
    USHORT Reserved;
    ULONG APICID;
    ULONG Flags;
    ULONG ACPIProcessorID;
} PROCLOCALX2APIC;
typedef PROCLOCALX2APIC UNALIGNED *PPROCLOCALX2APIC;
typedef struct _LOCAL_X2APIC_NMISOURCE {
    UCHAR Type;
    UCHAR Length;
    USHORT Flags;
    ULONG ProcessorID;
    UCHAR LINTIN;
    UCHAR Reserved[3];
} LOCAL_X2APIC_NMISOURCE;
typedef LOCAL_X2APIC_NMISOURCE UNALIGNED *PLOCAL_X2APIC_NMISOURCE;
{ \
    ULONG _AFF3_; \
                                                         \
    _AFF3_ = (ULONG)((_MPIDR_ & 0xFF00000000ULL) >> 8); \
    _COMPRESSED_ = (ULONG)(_MPIDR_ & 0xFFFFFF); \
    _COMPRESSED_ |= _AFF3_; \
}
{ \
    (_MPIDR_) = (ULONGLONG)(_COMPRESSED_) & 0x00FFFFFFULL; \
    (_MPIDR_) |= ((ULONGLONG)(_COMPRESSED_) & 0xFF000000ULL) << 8; \
}
typedef struct _PROCLOCALGIC {
    UCHAR Type;
    UCHAR Length;
    USHORT Reserved;
    ULONG Identifier;
    ULONG AcpiProcessorId;
    ULONG Flags;
    ULONG ParkingProtocolVersion;
    ULONG PerformanceInterruptGsi;
    ULONGLONG ParkedPhysicalAddress;
    ULONGLONG ControllerPhysicalAddress;
    ULONGLONG Gicv;
    ULONGLONG Gich;
    ULONG VgicMaintenanceInterrupt;
    ULONGLONG GicrBaseAddress;
    ULONGLONG Mpidr;
    UCHAR ProcessorPowerEfficiencyClass;
    UCHAR Reserved2[3];
} PROCLOCALGIC;
typedef PROCLOCALGIC UNALIGNED *PPROCLOCALGIC;
    (RTL_SIZEOF_THROUGH_FIELD(PROCLOCALGIC, ControllerPhysicalAddress))
    (RTL_SIZEOF_THROUGH_FIELD(PROCLOCALGIC, Mpidr))
    (RTL_SIZEOF_THROUGH_FIELD(PROCLOCALGIC, ProcessorPowerEfficiencyClass))
    (RTL_SIZEOF_THROUGH_FIELD(PROCLOCALGIC, Reserved2))
        (1 << PLGF_PERF_INTERRUPT_EDGE_TRIGGERED_BIT)
typedef struct _GIC_DISTRIBUTOR {
    UCHAR Type;
    UCHAR Length;
    USHORT Reserved1;
    ULONG Identifier;
    ULONGLONG ControllerPhysicalAddress;
    ULONG GsivBase;
    UCHAR Version;
    UCHAR Reserved[3];
} GIC_DISTRIBUTOR;
typedef GIC_DISTRIBUTOR UNALIGNED *PGIC_DISTRIBUTOR;
typedef struct _GIC_MSIFRAME_ENTRY {
    UCHAR Type;
    UCHAR Length;
    USHORT Reserved1;
    ULONG Identifier;
    ULONGLONG PhysicalAddress;
    ULONG Flags;
    USHORT SpiCount;
    USHORT SpiBase;
} GIC_MSIFRAME_ENTRY;
typedef GIC_MSIFRAME_ENTRY UNALIGNED *PGIC_MSIFRAME_ENTRY;
typedef struct _GIC_REDISTRIBUTOR {
    UCHAR Type;
    UCHAR Length;
    USHORT Reserved;
    ULONGLONG DiscoveryRangeBaseAddress;
    ULONG DiscoveryRangeLength;
} GIC_REDISTRIBUTOR;
typedef GIC_REDISTRIBUTOR UNALIGNED *PGIC_REDISTRIBUTOR;
typedef struct _GIC_ITS {
    UCHAR Type;
    UCHAR Length;
    USHORT Reserved1;
    ULONG Identifier;
    ULONGLONG PhysicalAddress;
    ULONG Reserved2;
} GIC_ITS;
typedef GIC_ITS UNALIGNED *PGIC_ITS;
typedef struct _SMARTBATTTABLE {
DESCRIPTION_HEADER Header;
ULONG WarningEnergyLevel;
ULONG LowEnergyLevel;
ULONG CriticalEnergyLevel;
} SMARTBATTTABLE;
typedef SMARTBATTTABLE *PSMARTBATTTABLE;
typedef struct {
    DESCRIPTION_HEADER Header;
    GEN_ADDR Control;
    GEN_ADDR Data;
    ULONG Uid;
    UCHAR GpeBit;
    CHAR Id[ANYSIZE_ARRAY];
} ECDT, *PECDT;
typedef struct _RSDT_32 {
DESCRIPTION_HEADER Header;
ULONG Tables[ANYSIZE_ARRAY];
} RSDT_32;
typedef struct _RSDT_64 {
    DESCRIPTION_HEADER Header;
    ULONG Reserved;
    ULONG_PTR Tables[ANYSIZE_ARRAY];
} RSDT_64;
typedef RSDT_64 RSDT;
typedef RSDT *PRSDT;
typedef struct _XSDT {
    DESCRIPTION_HEADER Header;
    UNALIGNED PHYSICAL_ADDRESS Tables[ANYSIZE_ARRAY];
} XSDT, *PXSDT;
typedef struct _DSDT {
DESCRIPTION_HEADER Header;
UCHAR DiffDefBlock[ANYSIZE_ARRAY];
} DSDT;
typedef DSDT *PDSDT;
typedef struct _DEBUG_PORT_TABLE {
    DESCRIPTION_HEADER Header;
    UCHAR InterfaceType;
    UCHAR Reserved0[3];
    GEN_ADDR BaseAddress;
    ULONG OffsetDbgDevInfo;
    ULONG NumberDbgDevInfo;
} DEBUG_PORT_TABLE, *PDEBUG_PORT_TABLE;
typedef struct _DEBUG_DEVICE_INFORMATION {
    UCHAR Revision;
    UCHAR Length;
    USHORT InterfaceType;
    ULONG InterfaceSubType;
    GEN_ADDR DeviceAddress;
    ULONG64 AddressSize;
} DEBUG_DEVICE_INFORMATION, *PDEBUG_DEVICE_INFORMATION;
typedef struct _DEBUG_DEVICE_INFORMATION_V2 {
    UCHAR Revision;
    USHORT Length;
    UCHAR BaseAddressRegisterCount;
    USHORT NameSpaceStringLength;
    USHORT NameSpaceStringOffset;
    USHORT OemDataLength;
    USHORT OemDataOffset;
    USHORT PortType;
    USHORT PortSubtype;
    USHORT Reserved;
    USHORT BaseAddressRegisterOffset;
    USHORT AddressSizeOffset;
} DEBUG_DEVICE_INFORMATION_V2, *PDEBUG_DEVICE_INFORMATION_V2;
typedef struct _DEBUG_PORT_TABLE_V2 {
    DESCRIPTION_HEADER Header;
    ULONG OffsetDbgDevInfo;
    ULONG NumberDbgDevInfo;
} DEBUG_PORT_TABLE_V2, *PDEBUG_PORT_TABLE_V2;
typedef struct _SERIAL_PORT_REDIRECTION_TABLE {
    DESCRIPTION_HEADER Header;
    UCHAR InterfaceType;
    UCHAR Reserved0[3];
    GEN_ADDR BaseAddress;
    UCHAR InterruptType;
    UCHAR Irq;
    ULONG GlobalSystemInterruptVector;
    UCHAR BaudRate;
    UCHAR Parity;
    UCHAR StopBits;
    UCHAR FlowControl;
    UCHAR TerminalType;
    UCHAR Language;
    USHORT PciDeviceId;
    USHORT PciVendorId;
    UCHAR PciBusNumber;
    UCHAR PciSlotNumber;
    UCHAR PciFunctionNumber;
    ULONG PciFlags;
    UCHAR PciSegment;
    UCHAR Reserved1[4];
} SERIAL_PORT_REDIRECTION_TABLE, *PSERIAL_PORT_REDIRECTION_TABLE;
typedef struct _WATCHDOG_TIMER_RESOURCE_TABLE {
    DESCRIPTION_HEADER Header;
    GEN_ADDR ControlRegisterAddress;
    GEN_ADDR CountRegisterAddress;
    USHORT PciDeviceId;
    USHORT PciVendorId;
    UCHAR PciBusNumber;
    UCHAR PciSlotNumber;
    UCHAR PciFunctionNumber;
    UCHAR PciSegment;
    USHORT MaxCount;
    UCHAR Units;
} WATCHDOG_TIMER_RESOURCE_TABLE, *PWATCHDOG_TIMER_RESOURCE_TABLE;
typedef struct _WATCHDOG_TIMER_INSTRUCTION_ENTRY {
    UCHAR WatchdogAction;
    UCHAR InstructionFlags;
    UCHAR Reserved[2];
    GEN_ADDR RegisterRegion;
    ULONG Value;
    ULONG Mask;
} WATCHDOG_TIMER_INSTRUCTION_ENTRY, *PWATCHDOG_TIMER_INSTRUCTION_ENTRY;
typedef struct _WATCHDOG_TIMER_ACTION_TABLE {
    DESCRIPTION_HEADER Header;
    ULONG WatchdogHeaderLength;
    USHORT PciSegment;
    UCHAR PciBusNumber;
    UCHAR PciDeviceNumber;
    UCHAR PciFunctionNumber;
    UCHAR Reserved1[3];
    ULONG TimerPeriod;
    ULONG MaximumCount;
    ULONG MinimumCount;
    UCHAR WatchdogFlags;
    UCHAR Reserved2[3];
    ULONG InstructionCount;
    WATCHDOG_TIMER_INSTRUCTION_ENTRY InstructionEntry[ANYSIZE_ARRAY];
} WATCHDOG_TIMER_ACTION_TABLE, *PWATCHDOG_TIMER_ACTION_TABLE;
typedef struct _BOOT_TABLE {
    DESCRIPTION_HEADER Header;
    UCHAR CMOSIndex;
    UCHAR Reserved[3];
} BOOT_TABLE, *PBOOT_TABLE;
typedef struct _IPPT_TABLE {
    DESCRIPTION_HEADER Header;
    ULONG Flags;
    ULONG Reserved[3];
} IPPT_TABLE, *PIPPT_TABLE;
typedef struct _MCFG_TABLE_ENTRY {
    ULONGLONG BaseAddress;
    USHORT SegmentNumber;
    UCHAR StartBusNumber;
    UCHAR EndBusNumber;
    ULONG Reserved;
} MCFG_TABLE_ENTRY, *PMCFG_TABLE_ENTRY;
typedef struct _MCFG_TABLE {
    DESCRIPTION_HEADER Header;
    ULONG Reserved[2];
    MCFG_TABLE_ENTRY TableEntry[ANYSIZE_ARRAY];
} MCFG_TABLE, *PMCFG_TABLE;
typedef struct _HPET_DESCRIPTION_TABLE {
    DESCRIPTION_HEADER Header;
    ULONG EventTimerBlockId;
    GEN_ADDR Address;
    UCHAR HpetNumber;
    USHORT MinimumPeriodicTickCount;
    UCHAR PageProtection;
} HPET_DESCRIPTION_TABLE, *PHPET_DESCRIPTION_TABLE;
typedef struct _SFI_TIMER {
    GEN_ADDR Address;
    ULONG FemtosecondsPerTick;
    ULONG Gsi;
} SFI_TIMER, *PSFI_TIMER;
typedef struct _SFI_TIMER_DESCRIPTION_TABLE {
    DESCRIPTION_HEADER Header;
    SFI_TIMER Timers[ANYSIZE_ARRAY];
} SFI_TIMER_DESCRIPTION_TABLE, *PSFI_TIMER_DESCRIPTION_TABLE;
typedef struct _TCG_DESCRIPTION_TABLE_CLIENT {
    DESCRIPTION_HEADER Header;
    USHORT PlatformClass;
    ULONG LAML;
    PHYSICAL_ADDRESS LASA;
} TCG_DESCRIPTION_TABLE_CLIENT, *PTCG_DESCRIPTION_TABLE_CLIENT;
typedef struct _TCG_DESCRIPTION_TABLE_SERVER {
    DESCRIPTION_HEADER Header;
    USHORT PlatformClass;
    USHORT Reserved1;
    ULONGLONG LAML;
    PHYSICAL_ADDRESS LASA;
    USHORT SpecificationRevision;
    UCHAR DeviceFlags;
    UCHAR InterruptFlags;
    UCHAR GPE;
    UCHAR Reserved2[3];
    ULONG GlobalSystemInterupt;
    GEN_ADDR BaseAddress;
    ULONG Reserved3;
    GEN_ADDR ConfigurationAddress;
    UCHAR PCISegmentGroupNumber;
    UCHAR PCIBusNumber;
    UCHAR PCIDeviceNumber;
    UCHAR PCIFunctionNumber;
} TCG_DESCRIPTION_TABLE_SERVER, *PTCG_DESCRIPTION_TABLE_SERVER;
typedef struct _TCG_DESCRIPTION_TABLE {
    union {
        TCG_DESCRIPTION_TABLE_CLIENT ClientTable;
        TCG_DESCRIPTION_TABLE_SERVER ServerTable;
    } u;
} TCG_DESCRIPTION_TABLE, *PTCG_DESCRIPTION_TABLE;
typedef struct _WAE_DESCRIPTION_TABLE {
    DESCRIPTION_HEADER Header;
    ULONG EmulatedDeviceFlags;
} WAE_DESCRIPTION_TABLE, *PWAE_DESCRIPTION_TABLE;
C_ASSERT(WAET_DEV_RTC_ENLIGHTENED == 1);
#pragma warning(disable: 4214)
#pragma warning(disable: 4201)
typedef struct _IORT {
    DESCRIPTION_HEADER Header;
    ULONG NodeCount;
    ULONG NodeArrayOffset;
    UCHAR Reserved[4];
} IORT, *PIORT;
typedef struct _IORT_NODE_HEADER {
    UCHAR Type;
    USHORT Length;
    UCHAR Revision;
    UCHAR Reserved[4];
    ULONG IdMappingCount;
    ULONG IdMappingArrayOffset;
} IORT_NODE_HEADER, *PIORT_NODE_HEADER;
typedef struct _IORT_IDMAPPING {
    ULONG InputBase;
    ULONG IdCount;
    ULONG OutputBase;
    ULONG OutputNodeOffset;
    union {
        ULONG AsULONG;
        struct {
            ULONG SingleMapping : 1;
            ULONG Reserved : 31;
        } DUMMYSTRUCTNAME;
    } Flags;
} IORT_IDMAPPING, *PIORT_IDMAPPING;
typedef union _IORT_SMMUV2_INTERRUPT {
    ULONGLONG AsULONGLONG;
    struct {
        ULONG Gsiv;
        union {
            ULONG AsULONG;
            struct {
                ULONG InterruptFlags : 1;
                ULONG Reserved : 31;
            } DUMMYSTRUCTNAME;
        } Flags;
    } DUMMYSTRUCTNAME;
} IORT_SMMUV2_INTERRUPT, *PIORT_SMMUV2_INTERRUPT;
typedef struct _IORT_SMMUV2_NODE {
    IORT_NODE_HEADER Header;
    ULONGLONG BaseAddress;
    ULONGLONG Span;
    ULONG Model;
    union {
        ULONG AsULONG;
        struct {
            ULONG DvmSupported : 1;
            ULONG CoherentPageTableWalk : 1;
            ULONG Reserved : 30;
        } DUMMYSTRUCTNAME;
    } Flags;
    ULONG GlobalInterruptArrayOffset;
    ULONG ContextInterruptCount;
    ULONG ContextInterruptArrayOffset;
    ULONG PmuInterruptCount;
    ULONG PmuInterruptArrayOffset;
    IORT_SMMUV2_INTERRUPT NSgIrpt;
    IORT_SMMUV2_INTERRUPT NSgCfgIrpt;
} IORT_SMMUV2_NODE, *PIORT_SMMUV2_NODE;
typedef struct _IORT_SMMUV3_NODE {
    IORT_NODE_HEADER Header;
    ULONGLONG BaseAddress;
    union {
        ULONG AsULONG;
        struct {
            ULONG CohaccOverride : 1;
            ULONG HttuOverride : 2;
            ULONG Reserved : 29;
        } DUMMYSTRUCTNAME;
    } Flags;
    UCHAR Reserved[4];
    ULONGLONG VatosAddress;
    ULONG Model;
    ULONG EventGsiv;
    ULONG PriGsiv;
    ULONG GerrGsiv;
    ULONG SyncGsiv;
} IORT_SMMUV3_NODE, *PIORT_SMMUV3_NODE;
typedef union _IORT_NODE_MEMORY_ATTRIBUTES {
    ULONGLONG AsULONGLONG;
    struct {
        ULONG Cca;
        union {
            UCHAR AsUCHAR;
            struct {
                UCHAR Transient : 1;
                UCHAR WriteAllocate : 1;
                UCHAR ReadAllocate : 1;
                UCHAR Aho : 1;
                UCHAR Reserved : 4;
            } DUMMYSTRUCTNAME;
        } Ah;
        UCHAR Reserved[2];
        union {
            UCHAR AsUCHAR;
            struct {
                UCHAR Cpm : 1;
                UCHAR Dacs : 1;
                UCHAR Reserved : 6;
            } DUMMYSTRUCTNAME;
        } Maf;
    } DUMMYSTRUCTNAME;
} IORT_NODE_MEMORY_ATTRIBUTES, *PIORT_NODE_MEMORY_ATTRIBUTES;
typedef struct _IORT_ITS_GROUP_NODE {
    IORT_NODE_HEADER Header;
    ULONG ItsCount;
    ULONG ItsArray[ANYSIZE_ARRAY];
} IORT_ITS_GROUP_NODE, *PIORT_ITS_GROUP_NODE;
typedef struct _IORT_NAMED_COMPONENT_NODE {
    IORT_NODE_HEADER Header;
    UCHAR Reserved[4];
    IORT_NODE_MEMORY_ATTRIBUTES MemoryProperties;
    UCHAR MemoryAccessWidth;
    UCHAR DeviceName[ANYSIZE_ARRAY];
} IORT_NAMED_COMPONENT_NODE, *PIORT_NAMED_COMPONENT_NODE;
typedef struct _IORT_ROOT_COMPLEX_NODE {
    IORT_NODE_HEADER Header;
    IORT_NODE_MEMORY_ATTRIBUTES MemoryProperties;
    ULONG AtsAttribute;
    ULONG PciSegmentNumber;
} IORT_ROOT_COMPLEX_NODE, *PIORT_ROOT_COMPLEX_NODE;
typedef struct _DEVICESCOPE
{
    UCHAR Type;
    UCHAR Length;
    UCHAR Reserved[2];
    UCHAR EnumerationId;
    UCHAR StartBusNumber;
    struct {
        UCHAR Device;
        UCHAR Function;
    } PCIPath[ANYSIZE_ARRAY];
} DEVICESCOPE, *PDEVICESCOPE;
typedef struct _DRHD {
    UCHAR Flags;
    UCHAR Reserved;
    USHORT SegmentNumber;
    ULONGLONG BaseAddress;
    DEVICESCOPE DeviceScope[ANYSIZE_ARRAY];
} DRHD, *PDRHD;
typedef struct _RMRR {
    UCHAR Reserved[2];
    USHORT SegmentNumber;
    ULONGLONG RegionBaseAddress;
    ULONGLONG RegionLimitAddress;
    DEVICESCOPE DeviceScope[ANYSIZE_ARRAY];
} RMRR, *PRMRR;
typedef struct _ATSR {
    UCHAR Flags;
    UCHAR Reserved;
    USHORT SegmentNumber;
    DEVICESCOPE DeviceScope[ANYSIZE_ARRAY];
} ATSR, *PATSR;
typedef struct _RHSA {
    USHORT Type;
    USHORT Length;
    ULONG ReservedZ;
    ULONGLONG RegisterBaseAddress;
    ULONG ProximityDomain;
} RHSA, *PRHSA;
#pragma warning(disable: 4214)
#pragma warning(disable: 4201)
typedef struct _DMARTABLE
{
    USHORT Type;
    USHORT Length;
    union {
        DRHD Drhd;
        RMRR Rmrr;
        ATSR Atsr;
        RHSA Rhsa;
    } DUMMYUNIONNAME;
} DMARTABLE, *PDMARTABLE;
typedef struct _DMAR {
    DESCRIPTION_HEADER Header;
    UCHAR HostAddressWidth;
    UCHAR Flags;
    UCHAR Reserved[10];
    DMARTABLE DMARTables[ANYSIZE_ARRAY];
} DMAR, *PDMAR;
typedef union _DMAR_GCMD_REG {
    ULONG AsULONG;
    struct {
        ULONG Reserved:23;
        ULONG CompatibilityFormatInterruptEnable:1;
        ULONG SetInterruptRemappingTablePointer:1;
        ULONG InterruptRemappingEnable:1;
        ULONG QueuedInvalidationEnable:1;
        ULONG WriteBufferFlush:1;
        ULONG EnableAdvancedFaultLogging:1;
        ULONG SetFaultLog:1;
        ULONG SetRootTablePointer:1;
        ULONG TranslationEnable:1;
    } DUMMYSTRUCTNAME;
} DMAR_GCMD_REG, *PDMAR_GCMD_REG;
typedef union _DMAR_GSTS_REG {
    ULONG AsULONG;
    struct {
        ULONG Reserved:23;
        ULONG CompatibilityFormatInterruptStatus:1;
        ULONG SetInterruptRemappingTablePointerStatus:1;
        ULONG InterruptRemappingEnableStatus:1;
        ULONG QueuedInvalidationEnableStatus:1;
        ULONG WriteBufferFlushStatus:1;
        ULONG EnableAdvancedFaultLoggingStatus:1;
        ULONG SetFaultLogStatus:1;
        ULONG SetRootTablePointerStatus:1;
        ULONG TranslationEnableStatus:1;
    } DUMMYSTRUCTNAME;
} DMAR_GSTS_REG, *PDMAR_GSTS_REG;
typedef union _IVRS_IVINFO {
    UINT32 AsUINT32;
    struct {
        UINT32 EFRSup:1;
        UINT32 DmaGuardOptIn:1;
        UINT32 ReservedZ0:3;
        UINT32 GVASize:3;
        UINT32 PASize:7;
        UINT32 VASize:7;
        UINT32 HtAtsResv:1;
        UINT32 ReservedZ1:9;
    } DUMMYSTRUCTNAME;
} IVRS_IVINFO, *PIVRS_IVINFO;
typedef struct _IVRS {
    DESCRIPTION_HEADER Header;
    IVRS_IVINFO IVInfo;
    UINT64 Reserved;
    UINT8 DefinitionBlocks[1];
} IVRS, *PIVRS;
typedef enum _IVRS_BLOCK_TYPE {
    IommuDefinitionBlockTypeIvhd = 0x10,
    IommuDefinitionBlockType11Ivhd = 0x11,
    IommuDefinitionBlockTypeIvmdAll = 0x20,
    IommuDefinitionBlockTypeIvmdSpecified = 0x21,
    IommuDefinitionBlockTypeIvmdRange = 0x22,
    IommuDefinitionBlockType40Ivhd = 0x40,
} IVRS_BLOCK_TYPE;
typedef struct _IVRS_BLOCK_HEADER {
    UINT8 Type;
    UINT8 Flags;
    UINT16 Length;
} IVRS_BLOCK_HEADER, *PIVRS_BLOCK_HEADER;
typedef struct _IVHD_BLOCK {
    UINT8 Type;
    union {
        UINT8 AsUINT8;
        struct {
            UINT8 HtTunEn:1;
            UINT8 PassPW:1;
            UINT8 ResPassPW:1;
            UINT8 Isoc:1;
            UINT8 IotlbSup:1;
            UINT8 ReservedZ0:3;
        } DUMMYSTRUCTNAME;
    } Flags;
    UINT16 Length;
    UINT16 DeviceId;
    UINT16 CapabilityOffset;
    UINT64 IommuBaseAddress;
    UINT16 PciSegment;
    union {
        UINT16 AsUINT16;
        struct {
            UINT16 MsiNum:5;
            UINT16 Reserved1:3;
            UINT16 UnitId:5;
            UINT16 Reserved2:3;
        } DUMMYSTRUCTNAME;
    } IommuInfo;
    UINT32 ReservedZ0;
    union {
        UINT8 DeviceEntries[1];
        struct {
            UINT64 EfrRegisterImage;
            UINT64 ReservedZ1;
            UINT8 Type11DeviceEntries[1];
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} IVHD_BLOCK, *PIVHD_BLOCK;
typedef enum _IVHD_ENTRY_TYPE {
    IvhdEntryTypePad4 = 0,
    IvhdEntryTypeAll = 1,
    IvhdEntryTypeSelect = 2,
    IvhdEntryTypeStartRange = 3,
    IvhdEntryTypeEndRange = 4,
    IvhdEntryTypePad8 = 64,
    IvhdEntryTypeAliasSelect = 66,
    IvhdEntryTypeAliasStartRange = 67,
    IvhdEntryTypeExtendedSelect = 70,
    IvhdEntryTypeExtendedStartRange = 71,
    IvhdEntryTypeSpecialDevice = 72,
    IvhdEntryTypeAcpiDevice = 0xF0
} IVRS_TABLE_TYPE;
typedef enum _APCI_IVHD_ENTRY_VARIETY {
    IvhdEntryVarietyIoapic = 1,
    IvhdEntryVarietyHpet = 2
} IVHD_ENTRY_VARIETY;
typedef struct _IVHD_DEVICE_ENTRY {
    UINT8 Type;
    UINT16 DeviceId;
    union {
        UINT8 AsUINT8;
        struct {
            UINT8 INITPass:1;
            UINT8 ExtIntPass:1;
            UINT8 NMIPass:1;
            UINT8 ReservedZ0:1;
            UINT8 SysMgt:2;
            UINT8 LINT0Pass:1;
            UINT8 LINT1Pass:1;
        } DUMMYSTRUCTNAME;
    } DataSetting;
    union {
        UINT32 AsUINT32;
        struct {
            UINT8 Handle;
            UINT16 AliasDeviceId;
            UINT8 Variety;
        };
        struct {
            UINT32 Reserved:31;
            UINT32 AtsDisabled:1;
        };
    } ExtendedDataSetting;
} IVHD_DEVICE_ENTRY, *PIVHD_DEVICE_ENTRY;
typedef struct _IVHD_ACPI_DEVICE_ENTRY {
    UINT8 Type;
    UINT16 DeviceId;
    union {
        UINT8 AsUINT8;
        struct {
            UINT8 INITPass:1;
            UINT8 ExtIntPass:1;
            UINT8 NMIPass:1;
            UINT8 ReservedZ0:1;
            UINT8 SysMgt:2;
            UINT8 LINT0Pass:1;
            UINT8 LINT1Pass:1;
        } DUMMYSTRUCTNAME;
    } DataSetting;
    UINT64 HardwareId;
    UINT64 CompatibleId;
    UINT8 UniqueIdFormat;
    UINT8 UniqueIdLength;
} IVHD_ACPI_DEVICE_ENTRY, *PIVHD_ACPI_DEVICE_ENTRY;
typedef struct _IVMD_BLOCK {
    UINT8 Type;
    union {
        UINT8 AsUINT8;
        struct {
            UINT8 Unity:1;
            UINT8 IR:1;
            UINT8 IW:1;
            UINT8 ExclusionRange:1;
            UINT8 ReservedZ0:4;
        } DUMMYSTRUCTNAME;
    } Flags;
    UINT16 Length;
    union {
        UINT16 DeviceId;
        UINT16 StartDeviceId;
    } u1;
    union {
        UINT16 AuxiliaryData;
        UINT16 EndDeviceId;
    } u2;
    UINT64 ReservedZ0;
    UINT64 StartAddress;
    UINT64 MemoryBlockLength;
} IVMD_BLOCK, *PIVMD_BLOCK;
typedef struct _SDEV_ENTRY_HEADER {
    UCHAR Type;
    UCHAR Flags;
    USHORT Length;
} SDEV_ENTRY_HEADER, *PSDEV_ENTRY_HEADER;
typedef struct _SDEV_SECURE_PCI_INFO_ENTRY {
    SDEV_ENTRY_HEADER Header;
    USHORT PciSegmentNumber;
    USHORT StartBusNumber;
    USHORT PciPathOffset;
    USHORT PciPathLength;
    USHORT VendorInfoOffset;
    USHORT VendorInfoLength;
} SDEV_SECURE_PCI_INFO_ENTRY, *PSDEV_SECURE_PCI_INFO_ENTRY;
typedef struct _SDEV_SECURE_ACPI_INFO_ENTRY {
    SDEV_ENTRY_HEADER Header;
    USHORT IdentifierOffset;
    USHORT IdentifierLength;
    USHORT VendorInfoOffset;
    USHORT VendorInfoLength;
} SDEV_SECURE_ACPI_INFO_ENTRY, *PSDEV_SECURE_ACPI_INFO_ENTRY;
typedef struct _SDEV {
    DESCRIPTION_HEADER Header;
    ULONG SDEVTables[ANYSIZE_ARRAY];
} SDEV, *PSDEV;
typedef struct _CSRT_TABLE_HEADER {
    DESCRIPTION_HEADER Header;
} CSRT_TABLE_HEADER, *PCSRT_TABLE_HEADER;
typedef struct _CSRT_RESOURCE_GROUP_HEADER {
    UINT32 Length;
    UINT32 VendorId;
    UINT32 SubvendorId;
    UINT16 DeviceId;
    UINT16 SubdeviceId;
    UINT16 Revision;
    UINT16 Instance;
    UINT32 SharedInfoLength;
} CSRT_RESOURCE_GROUP_HEADER, *PCSRT_RESOURCE_GROUP_HEADER;
typedef struct _CSRT_RESOURCE_DESCRIPTOR_HEADER {
    UINT32 Length;
    UINT16 Type;
    UINT16 Subtype;
    UINT32 Uid;
} CSRT_RESOURCE_DESCRIPTOR_HEADER, *PCSRT_RESOURCE_DESCRIPTOR_HEADER;
typedef struct _PCC_SUBSPACE_HEADER {
    UCHAR Type;
    UCHAR Length;
} PCC_SUBSPACE_HEADER, *PPCC_SUBSPACE_HEADER;
typedef struct _PCC_GENERIC_SUBSPACE {
    PCC_SUBSPACE_HEADER Header;
    USHORT Reserved1;
    ULONG Reserved2;
    PHYSICAL_ADDRESS BaseAddress;
    ULONGLONG Length;
    GEN_ADDR DoorbellRegister;
    ULONGLONG DoorbellPreserve;
    ULONGLONG DoorbellWrite;
    ULONG NominalLatency;
    ULONG MaximumPeriodicAccessRate;
    USHORT MinimumRequestTurnaroundTime;
} PCC_GENERIC_SUBSPACE, *PPCC_GENERIC_SUBSPACE;
typedef struct _PCC_GENREIC_SHARED_REGION {
    ULONG Signature;
    union {
        struct {
            USHORT CommandCode:8;
            USHORT ReservedZ:7;
            USHORT SciDoorbell:1;
        };
        USHORT AsUShort;
    } Command;
    union {
        struct {
            USHORT CommandComplete:1;
            USHORT SciReceived:1;
            USHORT Error:1;
            USHORT PlatformNotification:1;
            USHORT Reserved:12;
        };
        USHORT AsUShort;
    } Status;
    UCHAR CommunicationSpace[ANYSIZE_ARRAY];
} PCC_GENERIC_SHARED_REGION, *PPCC_GENERIC_SHARED_REGION;
typedef struct _PCC_TABLE {
    DESCRIPTION_HEADER Header;
    union {
        ULONG AsULong;
        struct {
            ULONG SciSupported:1;
            ULONG Reserved:31;
        } DUMMYSTRUCTNAME;
    } Flags;
    ULONG64 Reserved;
    PCC_SUBSPACE_HEADER Subspaces;
} PCC_TABLE, *PPCC_TABLE;
    ((UCHAR)((ULONG)((_Status_) & BGRT_STATUS_DISPLAY_ROTATION) >> 1))
typedef enum _BGRT_IMAGE_TYPE {
    BgrtImageTypeBitmap,
    BgrtImageTypeMax
} BGRT_IMAGE_TYPE, *PBGRT_IMAGE_TYPE;
typedef struct _BGRT_TABLE {
    DESCRIPTION_HEADER Header;
    USHORT Version;
    UCHAR Status;
    UCHAR ImageType;
    ULONGLONG LogoAddress;
    ULONG OffsetX;
    ULONG OffsetY;
} BGRT_TABLE, *PBGRT_TABLE;
typedef struct _BBRT_TABLE {
    DESCRIPTION_HEADER Header;
    ULONG Background;
    ULONG Foreground;
} BBRT_TABLE, *PBBRT_TABLE;
typedef struct _GTDT_TABLE {
    DESCRIPTION_HEADER Header;
    ULONGLONG CntControlBasePhysicalAddress;
    ULONG Reserved;
    ULONG SecurePhysicalTimerGsiv;
    ULONG SecurePhysicalTimerFlags;
    ULONG NonSecurePhysicalTimerGsiv;
    ULONG NonSecurePhysicalTimerFlags;
    ULONG VirtualTimerEventGsiv;
    ULONG VirtualTimerEventFlags;
    ULONG NonSecurePhysicalTimer2Gsiv;
    ULONG NonSecurePhysicalTimer2Flags;
    ULONGLONG CntReadBasePhysicalAddress;
    ULONG TimerBlockCount;
    ULONG TimerBlockOffset;
} GTDT_TABLE, *PGTDT_TABLE;
typedef enum _GTDT_PLATFORM_TIMER_BLOCK_TYPE {
    GtdtPlatformGtBlock = 0,
    GtdtPlatformWatchdogBlock = 1,
} GTDT_PLATFORM_TIMER_BLOCK_TYPE, *PGTDT_PLATFORM_TIMER_BLOCK_TYPE;
typedef struct _GTDT_PLATFORM_TIMER_HEADER {
    UCHAR Type;
    USHORT Length;
} GTDT_PLATFORM_TIMER_HEADER, *PGTDT_PLATFORM_TIMER_HEADER;
typedef struct _GTDT_PLATFORM_GT_BLOCK {
    GTDT_PLATFORM_TIMER_HEADER Header;
    UCHAR Reserved;
    ULONGLONG CntCtlBasePhysicalAddress;
    ULONG BlockTimerCount;
    ULONG BlockTimerOffset;
} GTDT_PLATFORM_GT_BLOCK, *PGTDT_PLATFORM_GT_BLOCK;
typedef struct _GTDT_PLATFORM_GT_INSTANCE {
    UCHAR FrameNumber;
    UCHAR Reserved[3];
    ULONGLONG CntBasePhysicalAddress;
    ULONGLONG CntEL0BasePhysicalAddress;
    ULONG PhysicalTimerGsiv;
    ULONG PhysicalTimerFlags;
    ULONG VirtualTimerGsiv;
    ULONG VirtualTimerFlags;
    ULONG CommonFlags;
} GTDT_PLATFORM_GT_INSTANCE, *PGTDT_PLATFORM_GT_INSTANCE;
typedef struct _GTDT_PLATFORM_WATCHDOG_BLOCK {
    GTDT_PLATFORM_TIMER_HEADER Header;
    UCHAR Reserved;
    ULONGLONG RefreshFramePhysicalAddress;
    ULONGLONG ControlFramePhysicalAddress;
    ULONG WatchdogTimerGsiv;
    ULONG WatchdogTimerFlags;
} GTDT_PLATFORM_WATCHDOG_BLOCK, *PGTDT_PLATFORM_WATCHDOG_BLOCK;
typedef struct _OEM0_TABLE {
    DESCRIPTION_HEADER Header;
    UCHAR Data[OEM0_RANDOM_BYTES];
} OEM0_TABLE, *POEM0_TABLE;
typedef struct SLIT_TABLE {
    DESCRIPTION_HEADER Header;
    ULONGLONG LocalityCount;
} SLIT_TABLE, *PSLIT_TABLE;
typedef struct _FIRMWARE_S3_PERFORMANCE_TABLE {
    ULONG Signature;
    ULONG Length;
} FIRMWARE_S3_PERFORMANCE_TABLE, *PFIRMWARE_S3_PERFORMANCE_TABLE;
typedef struct _S3PT_RECORD_HEADER {
    USHORT RecordSubtype;
    CHAR RecordLength;
    CHAR Revision;
} S3PT_RECORD_HEADER, *PS3PT_RECORD_HEADER;
typedef struct _S3PT_PERFORMANCE_RECORD {
    S3PT_RECORD_HEADER RecordHeader;
    union {
        struct {
            ULONG ResumeCount;
            ULONGLONG FullResume;
            ULONGLONG AverageResume;
        } ResumeRecord;
        struct {
            ULONGLONG SuspendStart;
            ULONGLONG SuspendEnd;
        } SuspendRecord;
    }u;
} S3PT_PERFORMANCE_RECORD, *PS3PT_PERFORMANCE_RECORD;
typedef enum _FPDT_RECORD_SUBTYPE {
    S3PTTypeResumePerformance = 0,
    S3PTTypeSuspendPerformance = 1,
    BasicBootPerformanceType = 2
} FPDT_RECORD_SUBTYPE, *PFPDT_RECORD_SUBTYPE;
typedef struct _FIRMWARE_BOOT_PERFORMANCE_TABLE {
    ULONG Signature;
    ULONG Length;
} FIRMWARE_BOOT_PERFORMANCE_TABLE, *PFIRMWARE_BOOT_PERFORMANCE_TABLE;
typedef struct _FBPT_RECORD_HEADER {
    USHORT RecordSubtype;
    CHAR RecordLength;
    CHAR Revision;
} FBPT_RECORD_HEADER, *PFBPT_RECORD_HEADER;
typedef struct _FBPT_RECORD {
    FBPT_RECORD_HEADER RecordHeader;
    ULONG Reserved;
    ULONGLONG ResetEnd;
    ULONGLONG LoadImageStart;
    ULONGLONG StartImageStart;
    ULONGLONG ExitBootServicesEntry;
    ULONGLONG ExitBootServicesExit;
} FBPT_RECORD, *PFBPT_RECORD;
typedef struct _FPDT_TABLE {
    DESCRIPTION_HEADER Header;
} FPDT_TABLE, *PFPDT_TABLE;
typedef enum _FPDT_RECORD_TYPE {
    FpdtTypeBootTablePointer = 0,
    FpdtTypeS3TablePointer = 1
} FPDT_RECORD_TYPE, *PFPDT_RECORD_TYPE;
typedef struct _FPDT_RECORD_HEADER {
    USHORT RecordType;
    CHAR RecordLength;
    CHAR Revision;
    ULONG Reserved;
} FPDT_RECORD_HEADER, *PFPDT_RECORD_HEADER;
typedef struct _FPDT_RECORD {
    FPDT_RECORD_HEADER RecordHeader;
    union {
        struct {
            PHYSICAL_ADDRESS PhysicalAddress;
        } S3TablePointer;
        struct {
            PHYSICAL_ADDRESS PhysicalAddress;
        } BasicBootPointer;
    }u;
} FPDT_RECORD, *PFPDT_RECORD;
typedef enum _ACPI_WPBT_CONTENT_LAYOUT {
    WpbtContentLayoutPE = 1
} ACPI_WPBT_CONTENT_LAYOUT;
typedef enum _ACPI_WPBT_CONTENT_TYPE {
    WpbtContentTypeNative = 1
} ACPI_WPBT_CONTENT_TYPE;
typedef struct _ACPI_WPBT_TABLE {
    DESCRIPTION_HEADER Header;
    ULONG HandoffMemorySize;
    ULONG64 HandoffMemoryLocation;
    UCHAR ContentLayout;
    UCHAR ContentType;
    USHORT CommandLineArgumentsLength;
    WCHAR CommandLineArguments[ANYSIZE_ARRAY];
} ACPI_WPBT_TABLE, *PACPI_WPBT_TABLE;
typedef struct _TPM20_TABLE {
    DESCRIPTION_HEADER Header;
    union {
        struct {
            UINT32 UseMemoryDescriptors : 1;
            UINT32 CmdListCapable : 1;
            UINT32 NoDeviceIO : 1;
            UINT32 DeviceMemory : 1;
            UINT32 DevMemOnly : 1;
            UINT32 Reserved : 27;
        } Flags;
        UINT32 FlagBits;
    } u;
    UINT64 ControlAreaPA;
    UINT32 StartMethod;
    UINT32 PlatformParameters[8];
} TPM20_TABLE, *PTPM20_TABLE;
typedef enum _TPM20_START_METHOD {
    Tpm20TableStartMethodInvalid = 0,
    Tpm20TableStartMethodSim = 1,
    Tpm20TableStartMethodAcpi = 2,
    Tpm20TableStartMethodTz1 = 3,
    Tpm20TableStartMethodTz2 = 4,
    Tpm20TableStartMethodTz3 = 5,
    Tpm20TableStartMethodTis13 = 6,
    Tpm20TableStartMethodCR = 7,
    Tpm20TableStartMethodCRWithAcpi = 8
} TPM20_START_METHOD, *PTPM20_START_METHOD;
typedef struct _ACPI_PLD_BUFFER {
    UINT32 Revision:7;
    UINT32 IgnoreColor:1;
    UINT32 Color:24;
    UINT32 Width:16;
    UINT32 Height:16;
    UINT32 UserVisible:1;
    UINT32 Dock:1;
    UINT32 Lid:1;
    UINT32 Panel:3;
    UINT32 VerticalPosition:2;
    UINT32 HorizontalPosition:2;
    UINT32 Shape:4;
    UINT32 GroupOrientation:1;
    UINT32 GroupToken:8;
    UINT32 GroupPosition:8;
    UINT32 Bay:1;
    UINT32 Ejectable:1;
    UINT32 EjectionRequired:1;
    UINT32 CabinetNumber:8;
    UINT32 CardCageNumber:8;
    UINT32 Reserved:14;
} ACPI_PLD_BUFFER, *PACPI_PLD_BUFFER;
typedef struct _ACPI_PLD_V2_BUFFER {
    UINT32 Revision:7;
    UINT32 IgnoreColor:1;
    UINT32 Color:24;
    UINT32 Width:16;
    UINT32 Height:16;
    UINT32 UserVisible:1;
    UINT32 Dock:1;
    UINT32 Lid:1;
    UINT32 Panel:3;
    UINT32 VerticalPosition:2;
    UINT32 HorizontalPosition:2;
    UINT32 Shape:4;
    UINT32 GroupOrientation:1;
    UINT32 GroupToken:8;
    UINT32 GroupPosition:8;
    UINT32 Bay:1;
    UINT32 Ejectable:1;
    UINT32 EjectionRequired:1;
    UINT32 CabinetNumber:8;
    UINT32 CardCageNumber:8;
    UINT32 Reference:1;
    UINT32 Rotation:4;
    UINT32 Order:5;
    UINT32 Reserved:4;
    UINT32 VerticalOffset:16;
    UINT32 HorizontalOffset:16;
} ACPI_PLD_V2_BUFFER, *PACPI_PLD_V2_BUFFER;
typedef enum _ACPI_PLD_PANEL {
    AcpiPldPanelTop = 0,
    AcpiPldPanelBottom = 1,
    AcpiPldPanelLeft = 2,
    AcpiPldPanelRight = 3,
    AcpiPldPanelFront = 4,
    AcpiPldPanelBack = 5,
    AcpiPldPanelUnknown = 6,
} ACPI_PLD_PANEL, *PACPI_PLD_PANEL;
typedef ACPI_PLD_PANEL AcpiPldPanel;
typedef enum _ACPI_PLD_VERTICAL_POSITION {
    AcpiPldVPosUpper = 0,
    AcpiPldVPosCenter = 1,
    AcpiPldVPosLower = 2,
} ACPI_PLD_VERTICAL_POSITION, *PACPI_PLD_VERTICAL_POSITION;
typedef ACPI_PLD_VERTICAL_POSITION AcpiPldVPos;
typedef enum _ACPI_PLD_HORIZONTAL_POSITION {
    AcpiPldHPosLeft = 0,
    AcpiPldHPosCenter = 1,
    AcpiPldHPosRight = 2,
} ACPI_PLD_HORIZONTAL_POSITION, *PACPI_PLD_HORIZONTAL_POSITION;
typedef ACPI_PLD_HORIZONTAL_POSITION AcpiPldHPos;
typedef enum _ACPI_PLD_SHAPE {
    AcpiPldShapeRound = 0,
    AcpiPldShapeOval = 1,
    AcpiPldShapeSquare = 2,
    AcpiPldShapeVRect = 3,
    AcpiPldShapeHRect = 4,
    AcpiPldShapeVTrap = 5,
    AcpiPldShapeHTrap = 6,
    AcpiPldShapeUnknown = 7,
    AcpiPldShapeChamfered = 8,
} ACPI_PLD_SHAPE, *PACPI_PLD_SHAPE;
typedef ACPI_PLD_SHAPE AcpiPldShape;
typedef enum _ACPI_PLD_ORIENTATION {
    AcpiPldOrientationHorizontal = 0,
    AcpiPldOrientationVertical = 1,
} ACPI_PLD_ORIENTATION, *PACPI_PLD_ORIENTATION;
typedef enum _ACPI_PLD_ROTATION {
    AcpiPldRotation0 = 0,
    AcpiPldRotation45 = 1,
    AcpiPldRotation90 = 2,
    AcpiPldRotation135 = 3,
    AcpiPldRotation180 = 4,
    AcpiPldRotation225 = 5,
    AcpiPldRotation270 = 6,
    AcpiPldRotation315 = 7,
} ACPI_PLD_ROTATION, *PACPI_PLD_ROTATION;
typedef ACPI_PLD_ROTATION AcpiPldRotation;
typedef struct _ACPI_PLD_JOINT_BUFFER {
    UINT32 Revision:5;
    UINT32 JointType:4;
    UINT32 SourceEdge:3;
    UINT32 TargetCabinetNumber:8;
    UINT32 TargetPanel:3;
    UINT32 TargetEdge:3;
    UINT32 Reserved1:5;
    UINT32 MovementOrientation:1;
    UINT32 ForwardMovementRange:16;
    UINT32 BackwardMovementRange:16;
    UINT32 HorizontalOffset:16;
    UINT32 VerticalOffset:16;
    UINT32 GapOffset:16;
    UINT32 Rotation:9;
    UINT32 Reserved2:7;
} ACPI_PLD_JOINT_BUFFER, *PACPI_PLD_JOINT_BUFFER;
DEFINE_GUID(ACPI_PLD_JOINT_BUFFER_GUID,
    0xf01cfc40, 0x3c75, 0x4523, 0x9e, 0x44, 0x21, 0x5c, 0xb1, 0x54, 0xbd, 0xa6);
typedef enum _ACPI_PLD_JOINT_TYPE {
    AcpiPldJointTypeFixed = 0,
    AcpiPldJointTypePlanar = 1,
    AcpiPldJointTypeHinge = 2,
    AcpiPldJointTypePivot = 3,
    AcpiPldJointTypeSwivel = 4,
} ACPI_PLD_JOINT_TYPE, *PACPI_PLD_JOINT_TYPE;
typedef enum _ACPI_PLD_EDGE {
    AcpiPldEdgeTop = 0,
    AcpiPldEdgeBottom = 1,
    AcpiPldEdgeLeft = 2,
    AcpiPldEdgeRight = 3,
    AcpiPldEdgeUnknown = 4,
} ACPI_PLD_EDGE, *PACPI_PLD_EDGE;
typedef struct _ACPI_PLD_SPATIAL_BUFFER {
    UINT32 Revision:5;
    UINT32 RollRotation:9;
    UINT32 PitchRotation:9;
    UINT32 YawRotation:9;
    UINT32 Width:16;
    UINT32 Height:16;
    UINT32 Length:16;
    UINT32 HorizontalOffset:16;
    UINT32 VerticalOffset:16;
    UINT32 DepthOffset:16;
} ACPI_PLD_SPATIAL_BUFFER, *PACPI_PLD_SPATIAL_BUFFER;
DEFINE_GUID(ACPI_PLD_SPATIAL_BUFFER_GUID,
    0x59af1a1f, 0xaba4, 0x4bb8, 0x81, 0xef, 0x55, 0x93, 0x8e, 0x9b, 0xc5, 0x3a);
typedef struct _ACPI_PLD_INTERFACE_CLASS_BUFFER {
    GUID ClassGuid;
} ACPI_PLD_INTERFACE_CLASS_BUFFER, *PACPI_PLD_INTERFACE_CLASS_BUFFER;
DEFINE_GUID(ACPI_PLD_INTERFACE_CLASS_BUFFER_GUID,
    0x1facec76, 0x96a8, 0x4d9e, 0x84, 0x6e, 0x3a, 0x6d, 0x68, 0x7c, 0x32, 0xfc);
typedef struct _ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER {
    CHAR ReferenceString[16];
} ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER, *PACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER;
typedef struct _ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER {
    WCHAR ReferenceString[8];
} ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER, *PACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER;
typedef struct _ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER {
    GUID ReferenceGuid;
} ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER, *PACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER;
DEFINE_GUID(ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID,
    0x1facea4b, 0xda66, 0x484c, 0xba, 0x5b, 0x51, 0x27, 0xe0, 0x5f, 0x95, 0xb2);
DEFINE_GUID(ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID,
    0x1face3f6, 0x1a60, 0x4686, 0x98, 0x33, 0xec, 0x84, 0x02, 0xd4, 0x3b, 0x04);
DEFINE_GUID(ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID,
    0x1face9db, 0x2530, 0x4248, 0x8e, 0xe3, 0x51, 0x05, 0x3a, 0xef, 0x47, 0xc2);
typedef struct _ACPI_PLD_CONTAINER_BUFFER {
    GUID ContainerId;
} ACPI_PLD_CONTAINER_BUFFER, *PACPI_PLD_CONTAINER_BUFFER;
DEFINE_GUID(ACPI_PLD_CONTAINER_BUFFER_GUID,
     0xc02fa109, 0x6a82, 0x4188, 0x9f, 0x66, 0xb1, 0x90, 0xba, 0x62, 0xdb, 0x49);
typedef struct _NFIT_TABLE {
    DESCRIPTION_HEADER Header;
    ULONG Reserved;
    UCHAR Structures[ANYSIZE_ARRAY];
} NFIT_TABLE, *PNFIT_TABLE;
typedef struct _NFIT_STRUCT_HEADER {
    USHORT Type;
    USHORT Length;
} NFIT_STRUCT_HEADER, *PNFIT_STRUCT_HEADER;
typedef enum _NFIT_STRUCTURE_TYPE {
    NfitSystemPhysicalAddressRange = 0,
    NfitNvdimmRegionMapping = 1,
    NfitInterleave = 2,
    NfitSmbiosManagementInformation = 3,
    NfitNvdimmControlRegion = 4,
    NfitNvdimmBlockDataWindowRegion = 5,
    NfitFlushHintAddress = 6,
    NfitPlatformCapabilities = 7,
    NfitMaximum
} NFIT_STRUCTURE_TYPE, *PNFIT_STRUCTURE_TYPE;
#include <guiddef.h>
DEFINE_GUID(
    NFitSpaRangeVolatileMemory,
    0x7305944F,
    0xFDDA,
    0x44E3,
    0xB1, 0x6C, 0x3F, 0x22, 0xD2, 0x52, 0xE5, 0xD0);
DEFINE_GUID(
    NFitSpaRangeByteAddressablePersistentMemory,
    0x66F0D379,
    0xB4F3,
    0x4074,
    0xAC, 0x43, 0x0D, 0x33, 0x18, 0xB7, 0x8C, 0xDB);
DEFINE_GUID(
    NFitSpaRangeNvdimmControlRegion,
    0x92F701F6,
    0x13B4,
    0x405D,
    0x91, 0x0B, 0x29, 0x93, 0x67, 0xE8, 0x23, 0x4C);
DEFINE_GUID(
    NFitSpaRangeNvdimmBlockDataWindow,
    0x91AF0530,
    0x5D86,
    0x470E,
    0xA6, 0xB0, 0x0A, 0x2D, 0xB9, 0x40, 0x82, 0x49);
DEFINE_GUID(
    NFitSpaRangeVolatileVirtualDisk,
    0x77AB535A,
    0x45FC,
    0x624B,
    0x55, 0x60, 0xF7, 0xB2, 0x81, 0xD1, 0xF9, 0x6E);
DEFINE_GUID(
    NFitSpaRangeVolatileVirtualCD,
    0x3D5ABD30,
    0x4175,
    0x87CE,
    0x6D, 0x64, 0xD2, 0xAD, 0xE5, 0x23, 0xC4, 0xBB);
DEFINE_GUID(
    NFitSpaRangePersistentVirtualDisk,
    0x5CEA02C9,
    0x4D07,
    0x69D3,
    0x26, 0x9F, 0x44, 0x96, 0xFB, 0xE0, 0x96, 0xF9);
DEFINE_GUID(
    NFitSpaRangePersistentVirtualCD,
    0x08018188,
    0x42CD,
    0xBB48,
    0x10, 0x0F, 0x53, 0x87, 0xD5, 0x3D, 0xED, 0x3D);
typedef enum _NFIT_SPA_RANGE_FLAG {
    NfitSpaRangeFlagManagementOnlyControlRegion = 0x0001,
    NfitSpaRangeFlagProximityDomainValid = 0x0002,
} NFIT_SPA_RANGE_FLAG, *PNFIT_SPA_RANGE_FLAG;
    (NfitSpaRangeFlagManagementOnlyControlRegion | \
     NfitSpaRangeFlagProximityDomainValid)
typedef enum _NFIT_SPA_RANGE_MEMORY_MAP_ATTRIBUTES {
    NfitSpaRangeAttributeUC = 0x00000001,
    NfitSpaRangeAttributeWC = 0x00000002,
    NfitSpaRangeAttributeWT = 0x00000004,
    NfitSpaRangeAttributeWB = 0x00000008,
    NfitSpaRangeAttributeUCE = 0x00000010,
    NfitSpaRangeAttributeWP = 0x00001000,
    NfitSpaRangeAttributeRP = 0x00002000,
    NfitSpaRangeAttributeXP = 0x00004000,
    NfitSpaRangeAttributeNV = 0x00008000,
    NfitSpaRangeAttributeMoreReliable = 0x00010000
} NFIT_SPA_RANGE_MEMORY_MAP_ATTRIBUTES, *PNFIT_SPA_RANGE_MEMORY_MAP_ATTRIBUTES;
    (NfitSpaRangeAttributeUC | \
     NfitSpaRangeAttributeWC | \
     NfitSpaRangeAttributeWT | \
     NfitSpaRangeAttributeWB | \
     NfitSpaRangeAttributeUCE | \
     NfitSpaRangeAttributeWP | \
     NfitSpaRangeAttributeRP | \
     NfitSpaRangeAttributeXP | \
     NfitSpaRangeAttributeNV | \
     NfitSpaRangeAttributeMoreReliable)
typedef struct _NFIT_SYSTEM_PHYSICAL_ADDRESS_RANGE {
    NFIT_STRUCT_HEADER Header;
    USHORT SPARangeIndex;
    USHORT Flags;
    UCHAR Reserved[4];
    ULONG ProximityDomain;
    GUID AddressRangeType;
    ULONG64 SPARangeBase;
    ULONG64 SPARangeLength;
    ULONG64 AddressRangeMappingAttribute;
} NFIT_SYSTEM_PHYSICAL_ADDRESS_RANGE, *PNFIT_SYSTEM_PHYSICAL_ADDRESS_RANGE;
#pragma warning(disable: 4214)
typedef struct _NFIT_DEVICE_HANDLE {
    union {
        struct {
            ULONG DIMMNumber:4;
            ULONG MemoryChannelNumber:4;
            ULONG MemoryControllerId:4;
            ULONG SocketId:4;
            ULONG NodeControllerId:12;
            ULONG Reserved:4;
        } NfitHandle;
        ULONG AsUlong;
    } u;
} NFIT_DEVICE_HANDLE, *PNFIT_DEVICE_HANDLE;
typedef enum _NFIT_NVDIMM_STATE_FLAG {
    NfitNvdimmStateFlagSaveFail = 0x0001,
    NfitNvdimmStateFlagRestoreFail = 0x0002,
    NfitNvdimmStateFlagPlatformFlushFail = 0x0004,
    NfitNvdimmStateFlagNotArm = 0x0008,
    NfitNvdimmStateFlagHealthEvent = 0x0010,
    NfitNvdimmStateFlagNotifyEnabled = 0x0020,
    NfitNvdimmStateNoSPAMapping = 0x0040,
} NFIT_NVDIMM_STATE_FLAG, *PNFIT_NVDIMM_STATE_FLAG;
    (NfitNvdimmStateFlagSaveFail | \
     NfitNvdimmStateFlagRestoreFail | \
     NfitNvdimmStateFlagPlatformFlushFail | \
     NfitNvdimmStateFlagNotArm | \
     NfitNvdimmStateFlagHealthEvent | \
     NfitNvdimmStateFlagNotifyEnabled | \
     NfitNvdimmStateNoSPAMapping)
typedef struct _NFIT_NVDIMM_REGION_MAPPING {
    NFIT_STRUCT_HEADER Header;
    NFIT_DEVICE_HANDLE NfitHandle;
    USHORT NVDIMMPhysicalId;
    USHORT NVDIMMRegionId;
    USHORT SpaRangeIndex;
    USHORT NVDIMMControlRegionIndex;
    ULONG64 NVDIMMRegionSize;
    ULONG64 RegionOffset;
    ULONG64 NVDIMMPhysicalAddrRegionBase;
    USHORT InterleaveIndex;
    USHORT InterleaveWays;
    USHORT NVDIMMStateFlags;
    UCHAR Reserved[2];
} NFIT_NVDIMM_REGION_MAPPING, *PNFIT_NVDIMM_REGION_MAPPING;
typedef struct _NFIT_INTERLEAVE {
    NFIT_STRUCT_HEADER Header;
    USHORT InterleaveIndex;
    UCHAR Reserved[2];
    ULONG LinesDescribed;
    ULONG LineSize;
    ULONG LineOffsets[ANYSIZE_ARRAY];
} NFIT_INTERLEAVE, *PNFIT_INTERLEAVE;
typedef struct _NFIT_SMBIOS_MANAGEMENT_INFO {
    NFIT_STRUCT_HEADER Header;
    UCHAR Reserved[4];
    UCHAR Data[ANYSIZE_ARRAY];
} NFIT_SMBIOS_MANAGEMENT_INFO, *PNFIT_SMBIOS_MANAGEMENT_INFO;
typedef enum _NFIT_CONTROL_REGION_FLAG {
    NfitControlRegionFlagBufferBlockDataWindow = 0x0001
} NFIT_CONTROL_REGION_FLAG, *PNFIT_CONTROL_REGION_FLAG;
    (NfitControlRegionFlagBufferBlockDataWindow)
#pragma warning(disable: 4214)
typedef struct _NFIT_NVDIMM_CONTROL_REGION {
    NFIT_STRUCT_HEADER Header;
    USHORT NvdimmControlRegionIndex;
    USHORT VendorId;
    USHORT DeviceId;
    USHORT RevisionId;
    USHORT SubsystemVendorId;
    USHORT SubsystemDeviceId;
    USHORT SubsystemRevisionId;
    union {
        UCHAR AsUchar;
        struct {
            UCHAR ManufacturingFields:1;
            UCHAR Reserved:7;
        } u;
    } ValidFields;
    UCHAR ManufacturingLocation;
    UCHAR ManufacturingYear;
    UCHAR ManufacturingWeek;
    UCHAR Reserved[2];
    ULONG SerialNumber;
    USHORT RegionFormatInterfaceCode;
    USHORT BCWCount;
    ULONG64 BCWSize;
    ULONG64 BCWCommandRegisterOffset;
    ULONG64 BCWCommandRegisterSize;
    ULONG64 BCWStatusRegisterOffset;
    ULONG64 BCWStatusRegisterSize;
    USHORT NvdimmControlRegionFlag;
    UCHAR Reserved1[6];
} NFIT_NVDIMM_CONTROL_REGION, *PNFIT_NVDIMM_CONTROL_REGION;
typedef struct _NFIT_BLOCK_DATA_WINDOW_REGION {
    NFIT_STRUCT_HEADER Header;
    USHORT NvdimmControlRegionIndex;
    USHORT BlockDataWindowCount;
    ULONG64 BlockDataWindowOffset;
    ULONG64 BlockDataWindowSize;
    ULONG64 BlockAccessibleCapacity;
    ULONG64 FirstAccessibleBlockAddress;
} NFIT_BLOCK_DATA_WINDOW_REGION, *PNFIT_BLOCK_DATA_WINDOW_REGION;
typedef struct _NFIT_FLUSH_HINT_ADDRESS {
    NFIT_STRUCT_HEADER Header;
    NFIT_DEVICE_HANDLE NfitHandle;
    USHORT FlushHintAddressCount;
    UCHAR Reserved[6];
    ULONG64 FlushHintAddress[ANYSIZE_ARRAY];
} NFIT_FLUSH_HINT_ADDRESS, *PNFIT_FLUSH_HINT_ADDRESS;
typedef struct _NFIT_PLATFORM_CAPABILITIES {
    NFIT_STRUCT_HEADER Header;
    UCHAR HighestValidCapability;
    UCHAR Reserved[3];
    union {
        ULONG AsUlong;
        struct {
            ULONG CpuCacheFlushOnPowerLoss : 1;
            ULONG MemCtrlrFlushOnPowerLoss : 1;
            ULONG PmemHardwareMirroring : 1;
        } u;
    } Capabilities;
    UCHAR Reserved1[4];
} NFIT_PLATFORM_CAPABILITIES, *PNFIT_PLATFORM_CAPABILITIES;
#pragma warning(disable: 4201)
#pragma warning(disable: 4214)
typedef union _WSMT_PROTECTION_FLAGS {
    ULONG AsUlong;
    struct {
        ULONG FixedCommBuffers:1;
        ULONG CommBufferNestedPtrProtection:1;
        ULONG SystemResourceProtection:1;
        ULONG Reserved:29;
    } DUMMYSTRUCTNAME;
} WSMT_PROTECTION_FLAGS, *PWSMT_PROTECTION_FLAGS;
typedef struct _WSMT {
    DESCRIPTION_HEADER Header;
    WSMT_PROTECTION_FLAGS ProtectionFlags;
} WSMT, *PWSMT;
#pragma warning(disable: 4201)
#pragma warning(disable: 4214)
typedef union _LPI_STATE_FLAGS {
    struct {
        ULONG Disabled:1;
        ULONG CounterUnavailable:1;
        ULONG Reserved:30;
    };
    ULONG AsUlong;
} LPI_STATE_FLAGS, *PLPI_STATE_FLAGS;
typedef struct _LPI_STATE_DESCRIPTOR {
    ULONG Type;
    ULONG Length;
    USHORT UniqueId;
    UCHAR Reserved[2];
    LPI_STATE_FLAGS Flags;
    GEN_ADDR EntryTrigger;
    ULONG Residency;
    ULONG Latency;
    GEN_ADDR ResidencyCounter;
    ULONGLONG ResidencyCounterFrequency;
} LPI_STATE_DESCRIPTOR, *PLPI_STATE_DESCRIPTOR;
typedef struct _LPIT {
    DESCRIPTION_HEADER Header;
    LPI_STATE_DESCRIPTOR LpiStates[ANYSIZE_ARRAY];
} LPIT, *PLPIT;
#pragma warning(disable: 4201)
#pragma warning(disable: 4214)
typedef union _PROC_TOPOLOGY_NODE_FLAGS {
    struct {
        ULONG PhysicalPackage:1;
        ULONG ACPIProcessorIdValid:1;
        ULONG Reserved:30;
    };
    ULONG AsULONG;
} PROC_TOPOLOGY_NODE_FLAGS, *PPROC_TOPOLOGY_NODE_FLAGS;
typedef union _PROC_TOPOLOGY_CACHE_FLAGS {
    struct {
        ULONG SizeValid:1;
        ULONG SetsValid:1;
        ULONG AssociativityValid:1;
        ULONG AllocationTypeValid:1;
        ULONG CacheTypeValid:1;
        ULONG WritePolicyValid:1;
        ULONG LineSizeValid:1;
        ULONG Reserved:25;
    };
    ULONG AsULONG;
} PROC_TOPOLOGY_CACHE_FLAGS, *PPROC_TOPOLOGY_CACHE_FLAGS;
    (CacheType == 0)
    (CacheType == 1)
    ((CacheType == 2) || (CacheType == 3))
typedef union _PROC_TOPOLOGY_CACHE_ATTRIBUTES {
    struct {
        UCHAR ReadAllocate:1;
        UCHAR WriteAllocate:1;
        UCHAR CacheType:2;
        UCHAR WritePolicy:1;
        UCHAR Reserved:3;
    };
    UCHAR AsUCHAR;
} PROC_TOPOLOGY_CACHE_ATTRIBUTES, *PPROC_TOPOLOGY_CACHE_ATTRIBUTES;
typedef struct _PROC_TOPOLOGY_NODE PROC_TOPOLOGY_NODE,
    *PPROC_TOPOLOGY_NODE;
struct _PROC_TOPOLOGY_NODE {
    struct {
        UCHAR Type;
        UCHAR Length;
        UCHAR Reserved[2];
    };
    union {
        struct {
            PROC_TOPOLOGY_NODE_FLAGS Flags;
            ULONG Parent;
            ULONG ACPIProcessorId;
            ULONG NumberPrivateResources;
            ULONG PrivateResources[ANYSIZE_ARRAY];
        } HeirarchyNode;
        struct {
            PROC_TOPOLOGY_CACHE_FLAGS Flags;
            ULONG NextLevelCacheOffset;
            ULONG Size;
            ULONG Sets;
            UCHAR Associativity;
            PROC_TOPOLOGY_CACHE_ATTRIBUTES Attributes;
            USHORT LineSize;
        } CacheNode;
        struct {
            ULONG Vendor;
            ULONG64 Level1;
            ULONG64 Level2;
            USHORT Major;
            USHORT Minor;
            USHORT Spin;
        } IdNode;
    };
};
typedef struct _PPTT {
    DESCRIPTION_HEADER Header;
    PROC_TOPOLOGY_NODE HeirarchyNodes[ANYSIZE_ARRAY];
} PPTT, *PPPTT;
#pragma warning(disable: 4214)
typedef struct _PDTT_PCC_SUBCHANNEL_INDENTIFIER {
    UCHAR SubChannelId;
    UCHAR Runtime:1;
    UCHAR WaitCompletion:1;
    UCHAR Reserved:6;
} PDTT_PCC_SUBCHANNEL_INDENTIFIER, *PPDTT_PCC_SUBCHANNEL_INDENTIFIER;
typedef struct _ACPI_PDTT {
    DESCRIPTION_HEADER Header;
    UCHAR TriggerCount;
    UCHAR Reserved[3];
    ULONG TriggerOffset;
} ACPI_PDTT, *PACPI_PDTT;
#pragma warning(disable: 4214)
#pragma warning(disable: 4201)
typedef struct _HMAT_ENTRY {
    USHORT Type;
    USHORT Reserved;
    ULONG Length;
    union {
        struct {
            union {
                struct {
                    USHORT ProcessorProximityDomainValid : 1;
                    USHORT MemoryProximityDomainValid : 1;
                    USHORT ReservationHint : 1;
                    USHORT Reserved : 13;
                } DUMMYSTRUCTNAME;
                USHORT AsUSHort;
            } Flags;
            USHORT Reserved1;
            ULONG ProcessorProximityDomain;
            ULONG MemoryProximityDomain;
            ULONG Reserved2;
            PHYSICAL_ADDRESS SystemPhysicalAddressRangeBase;
            ULONGLONG SystemPhysicalAddressRangeLength;
        } Msar;
        struct {
            union {
                struct {
                    UCHAR Memory : 1;
                    UCHAR LastLevelMemory : 1;
                    UCHAR FirstLevelMemorySideCache : 1;
                    UCHAR SecondLevelMemorySideCache : 1;
                    UCHAR ThirdLevelMemorySideCache : 1;
                    UCHAR Reserved : 3;
                } DUMMYSTRUCTNAME;
                UCHAR AsUChar;
            } Flags;
            UCHAR DataType;
            USHORT Reserved1;
            ULONG NumberOfInitiatorProximityDomains;
            ULONG NumberOfTargetProximityDomains;
            ULONG Reserved2;
            ULONGLONG EntryBaseUnit;
        } Sllbi;
        struct {
            ULONG MemoryProximityDomain;
            ULONG Reserved1;
            ULONGLONG MemorySideCacheSize;
            union {
                struct {
                    ULONG TotalCacheLevels : 4;
                    ULONG CacheLevel : 4;
                    ULONG CacheAssociativity : 4;
                    ULONG WritePolicy : 4;
                    ULONG CacheLineSize : 16;
                } DUMMYSTRUCTNAME;
                ULONG AsULong;
            } CacheAttributes;
            USHORT Reserved2;
            USHORT NumberOfSmBiosHandles;
        } Msci;
    } DUMMYUNIONNAME;
} HMAT_ENTRY, *PHMAT_ENTRY;
typedef struct _HMAT_TABLE {
    DESCRIPTION_HEADER Header;
    ULONG Reserved;
} HMAT_TABLE, *PHMAT_TABLE;
#include <poppack.h>
