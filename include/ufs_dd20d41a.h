       
typedef struct {
    UCHAR bLength;
    UCHAR bDescriptorIDN;
    UCHAR bDevice;
    UCHAR bDeviceClass;
    UCHAR bDeviceSubClass;
    UCHAR bProtocol;
    UCHAR bNumberLU;
    UCHAR bNumberWLU;
    UCHAR bBootEnable;
    UCHAR bDescrAccessEn;
    UCHAR bInitPowerMode;
    UCHAR bHighPriorityLUN;
    UCHAR bSecureRemovalType;
    UCHAR bSecurityLU;
    UCHAR bBackgroundOpsTermLat;
    UCHAR bInitActiveICCLevel;
    UCHAR wSpecVersion[2];
    UCHAR wManufactureDate[2];
    UCHAR iManufacturerName;
    UCHAR iProductName;
    UCHAR iSerialNumberID;
    UCHAR iOemID;
    UCHAR wManufacturerID[2];
    UCHAR bUD0BaseOffset;
    UCHAR bUDConfigPLength;
    UCHAR bDeviceRTTCap;
    UCHAR wPeriodicRTCUpdate[2];
    UCHAR bUFSFeaturesSupport;
    UCHAR bFFUTimeout;
    UCHAR bQueueDepth;
    UCHAR wDeviceVersion[2];
    UCHAR bNumSecureWPArea;
    UCHAR dPSAMaxDataSize[4];
    UCHAR dPSAStateTimeout;
    UCHAR iProductRevisionLevel;
    UCHAR Reserved[5];
    UCHAR Reserved2[16];
} UFS_DEVICE_DESCRIPTOR, *PUFS_DEVICE_DESCRIPTOR;
#pragma pack (push, 1)
typedef struct {
    UCHAR bLUEnable;
    UCHAR bBootLunID;
    UCHAR bLUWriteProtect;
    UCHAR bMemoryType;
    UCHAR dNumAllocUnits[4];
    UCHAR bDataReliability;
    UCHAR bLogicalBlockSize;
    UCHAR bProvisioningType;
    UCHAR wContextCapabilities[2];
    UCHAR Reserved[3];
} UFS_UNIT_CONFIG_DESCRIPTOR, *PUFS_UNIT_CONFIG_DESCRIPTOR;
typedef struct {
    UCHAR bLength;
    UCHAR bDescriptorIDN;
    UCHAR Reserved1;
    UCHAR bBootEnable;
    UCHAR bDescrAccessEn;
    UCHAR bInitPowerMode;
    UCHAR bHighPriorityLUN;
    UCHAR bSecureRemovalType;
    UCHAR bInitActiveICCLevel;
    UCHAR wPeriodicRTCUpdate[2];
    UCHAR Reserved2[5];
    UFS_UNIT_CONFIG_DESCRIPTOR UnitConfig[UFS_MAX_NUM_LU];
} UFS_CONFIG_DESCRIPTOR, *PUFS_CONFIG_DESCRIPTOR;
#pragma pack (pop)
typedef struct {
    UCHAR bLength;
    UCHAR bDescriptorIDN;
    UCHAR bMediaTechnology;
    UCHAR Reserved1;
    UCHAR qTotalRawDeviceCapacity[8];
    UCHAR bMaxNumberLU;
    UCHAR dSegmentSize[4];
    UCHAR bAllocationUnitSize;
    UCHAR bMinAddrBlockSize;
    UCHAR bOptimalReadBlockSize;
    UCHAR bOptimalWriteBlockSize;
    UCHAR bMaxInBufferSize;
    UCHAR bMaxOutBufferSize;
    UCHAR bRPMB_ReadWriteSize;
    UCHAR bDynamicCapacityResourcePolicy;
    UCHAR bDataOrdering;
    UCHAR bMaxContexIDNumber;
    UCHAR bSysDataTagUnitSize;
    UCHAR bSysDataTagResSize;
    UCHAR bSupportedSecRTypes;
    UCHAR wSupportedMemoryTypes[2];
    UCHAR dSystemCodeMaxNAllocU[4];
    UCHAR wSystemCodeCapAdjFac[2];
    UCHAR dNonPersistMaxNAllocU[4];
    UCHAR wNonPersistCapAdjFac[2];
    UCHAR dEnhanced1MaxNAllocU[4];
    UCHAR wEnhanced1CapAdjFac[2];
    UCHAR dEnhanced2MaxNAllocU[4];
    UCHAR wEnhanced2CapAdjFac[2];
    UCHAR dEnhanced3MaxNAllocU[4];
    UCHAR wEnhanced3CapAdjFac[2];
    UCHAR dEnhanced4MaxNAllocU[4];
    UCHAR wEnhanced4CapAdjFac[2];
    UCHAR dOptimalLogicalBlockSize[4];
} UFS_GEOMETRY_DESCRIPTOR, *PUFS_GEOMETRY_DESCRIPTOR;
typedef struct {
    UCHAR bLength;
    UCHAR bDescriptorIDN;
    UCHAR bUnitIndex;
    UCHAR bLUEnable;
    UCHAR bBootLunID;
    UCHAR bLUWriteProtect;
    UCHAR bLUQueueDepth;
    UCHAR bPSASensitive;
    UCHAR bMemoryType;
    UCHAR bDataReliability;
    UCHAR bLogicalBlockSize;
    UCHAR qLogicalBlockCount[8];
    UCHAR dEraseBlockSize[4];
    UCHAR bProvisioningType;
    UCHAR qPhyMemResourceCount[8];
    UCHAR wContextCapabilities[2];
    UCHAR bLargeUnitGranularity_M1;
} UFS_UNIT_DESCRIPTOR, *PUFS_UNIT_DESCRIPTOR;
typedef struct {
    UCHAR bLength;
    UCHAR bDescriptorIDN;
    UCHAR bUnitIndex;
    UCHAR bLUEnable;
    UCHAR bBootLunID;
    UCHAR bLUWriteProtect;
    UCHAR bLUQueueDepth;
    UCHAR bPSASensitive;
    UCHAR bMemoryType;
    UCHAR Reserved;
    UCHAR bLogicalBlockSize;
    UCHAR qLogicalBlockCount[8];
    UCHAR dEraseBlockSize[4];
    UCHAR bProvisioningType;
    UCHAR qPhyMemResourceCount[8];
    UCHAR Reserved2[3];
} UFS_RPMB_UNIT_DESCRIPTOR, *PUFS_RPMB_UNIT_DESCRIPTOR;
typedef struct {
    UCHAR bLength;
    UCHAR bDescriptorIDN;
    UCHAR wActiveICCLevelsVCC[32];
    UCHAR wActiveICCLevelsVCCQ[32];
    UCHAR wActiveICCLevelsVCCQ2[32];
} UFS_POWER_DESCRIPTOR, *PUFS_POWER_DESCRIPTOR;
typedef struct {
    UCHAR bLength;
    UCHAR bDescriptorIDN;
    UCHAR bcdUniproVersion[2];
    UCHAR bcdMphyVersion[2];
} UFS_INTERCONNECT_DESCRIPTOR, *PUFS_INTERCONNECT_DESCRIPTOR;
typedef struct _UFS_STRING_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorIDN;
    WCHAR String[UFS_MAX_UNICODE_STRING_LEN];
} UFS_STRING_DESCRIPTOR, *PUFS_STRING_DESCRIPTOR;
typedef struct {
    UCHAR bLength;
    UCHAR bDescriptorIDN;
    UCHAR bPreEOLInfo;
    UCHAR bDeviceLifeTimeEstA;
    UCHAR bDeviceLifeTimeEstB;
    UCHAR VendorPropInfo[32];
} UFS_DEVICE_HEALTH_DESCRIPTOR, *PUFS_DEVICE_HEALTH_DESCRIPTOR;
typedef enum {
    UFS_Reserved1 = 0,
    UFS_fDeviceInit,
    UFS_fPermanentWPEn,
    UFS_fPowerOnWPEn,
    UFS_fBackgroundOpsEn,
    UFS_fDeviceLifeSpanModeEn,
    UFS_fPurgeEnable,
    UFS_Reserved2,
    UFS_fPhyResourceRemoval,
    UFS_fBusyRTC,
    UFS_Reserved3,
    UFS_fPermanentlyDisableFwUpdate,
    UFS_Reserved4,
    UFS_Reserved5
} UFS_FLAGS_DESCRIPTOR;
typedef enum {
    UFS_bBootLunEn = 0,
    UFS_Reserved01,
    UFS_bCurrentPowerMode,
    UFS_bActiveICCLevel,
    UFS_bOutOfOrderDataEn,
    UFS_bBackgroundOpStatus,
    UFS_bPurgeStatus,
    UFS_bMaxDataInSize,
    UFS_bMaxDataOutSize,
    UFS_dDynCapNeeded,
    UFS_bRefClkFreq,
    UFS_bConfigDescrLock,
    UFS_bMaxNumOfRTT,
    UFS_wExceptionEventControl,
    UFS_wExceptionEventStatus,
    UFS_dSecondsPassed,
    UFS_wContextConf,
    UFS_Obsolete,
    UFS_Reserved02,
    UFS_Reserved03,
    UFS_bDeviceFFUStatus,
    UFS_bPSAState,
    UFS_dPSADataSize
} UFS_ATTRIBUTES_DESCRIPTOR;
typedef enum {
    UFS_PurgeStatusIdle = 0,
    UFS_PurgeStatusInProgress = 1,
    UFS_PurgeStatusInterrupted = 2,
    UFS_PurgeStatusSuccess = 3,
    UFS_PurgeStatusQueueNotEmpty = 4,
    UFS_PurgeStatusFailure = 5
} UFS_PURGE_STATUS;
#pragma pack (push, 1)
typedef struct {
    UCHAR bLength;
    UCHAR bDescriptorIDN;
    UCHAR bDevice;
    UCHAR bDeviceClass;
    UCHAR bDeviceSubClass;
    UCHAR bProtocol;
    UCHAR bNumberLU;
    UCHAR bNumberWLU;
    UCHAR bBootEnable;
    UCHAR bDescrAccessEn;
    UCHAR bInitPowerMode;
    UCHAR bHighPriorityLUN;
    UCHAR bSecureRemovalType;
    UCHAR bSecurityLU;
    UCHAR bBackgroundOpsTermLat;
    UCHAR bInitActiveICCLevel;
    USHORT wSpecVersion;
    USHORT wManufactureDate;
    UCHAR iManufacturerName;
    UCHAR iProductName;
    UCHAR iSerialNumberID;
    UCHAR iOemID;
    USHORT wManufacturerID;
    UCHAR bUD0BaseOffset;
    UCHAR bUDConfigPLength;
    UCHAR bDeviceRTTCap;
    USHORT wPeriodicRTCUpdate;
    UCHAR bUFSFeaturesSupport;
    UCHAR bFFUTimeout;
    UCHAR bQueueDepth;
    USHORT wDeviceVersion;
    UCHAR bNumSecureWPArea;
    ULONG dPSAMaxDataSize;
    UCHAR dPSAStateTimeout;
    UCHAR iProductRevisionLevel;
    UCHAR Reserved[5];
    UCHAR Reserved2[16];
    USHORT wHPBVersion;
    UCHAR Reserved3[6];
} UFS_HPB_DEVICE_DESCRIPTOR, *PUFS_HPB_DEVICE_DESCRIPTOR;
typedef struct {
    UCHAR bLength;
    UCHAR bDescriptorIDN;
    UCHAR bMediaTechnology;
    UCHAR Reserved1;
    ULONGLONG qTotalRawDeviceCapacity;
    UCHAR bMaxNumberLU;
    ULONG dSegmentSize;
    UCHAR bAllocationUnitSize;
    UCHAR bMinAddrBlockSize;
    UCHAR bOptimalReadBlockSize;
    UCHAR bOptimalWriteBlockSize;
    UCHAR bMaxInBufferSize;
    UCHAR bMaxOutBufferSize;
    UCHAR bRPMB_ReadWriteSize;
    UCHAR bDynamicCapacityResourcePolicy;
    UCHAR bDataOrdering;
    UCHAR bMaxContexIDNumber;
    UCHAR bSysDataTagUnitSize;
    UCHAR bSysDataTagResSize;
    UCHAR bSupportedSecRTypes;
    USHORT wSupportedMemoryTypes;
    ULONG dSystemCodeMaxNAllocU;
    USHORT wSystemCodeCapAdjFac;
    ULONG dNonPersistMaxNAllocU;
    USHORT wNonPersistCapAdjFac;
    ULONG dEnhanced1MaxNAllocU;
    USHORT wEnhanced1CapAdjFac;
    ULONG dEnhanced2MaxNAllocU;
    USHORT wEnhanced2CapAdjFac;
    ULONG dEnhanced3MaxNAllocU;
    USHORT wEnhanced3CapAdjFac;
    ULONG dEnhanced4MaxNAllocU;
    USHORT wEnhanced4CapAdjFac;
    ULONG dOptimalLogicalBlockSize;
    UCHAR bHPBRegionSize;
    UCHAR bHPBNumberLU;
    UCHAR bHPBSubRegionSize;
    USHORT wDeviceMaxActiveHPBRegions;
    UCHAR Reserved2[3];
} UFS_HPB_GEOMETRY_DESCRIPTOR, *PUFS_HPB_GEOMETRY_DESCRIPTOR;
typedef struct {
    UCHAR bLength;
    UCHAR bDescriptorIDN;
    UCHAR bUnitIndex;
    UCHAR bLUEnable;
    UCHAR bBootLunID;
    UCHAR bLUWriteProtect;
    UCHAR bLUQueueDepth;
    UCHAR bPSASensitive;
    UCHAR bMemoryType;
    UCHAR bDataReliability;
    UCHAR bLogicalBlockSize;
    ULONGLONG qLogicalBlockCount;
    ULONG dEraseBlockSize;
    UCHAR bProvisioningType;
    ULONGLONG qPhyMemResourceCount;
    USHORT wContextCapabilities;
    UCHAR bLargeUnitGranularity_M1;
    USHORT wLUMaxActiveHPBRegions;
    USHORT wHPBPinnedRegionStartIdx;
    USHORT wNumHPBPinnedRegions;
    UCHAR Reserved[3];
} UFS_HPB_UNIT_DESCRIPTOR, *PUFS_HPB_UNIT_DESCRIPTOR;
typedef struct {
    UCHAR bLUEnable;
    UCHAR bBootLunID;
    UCHAR bLUWriteProtect;
    UCHAR bMemoryType;
    ULONG dNumAllocUnits;
    UCHAR bDataReliability;
    UCHAR bLogicalBlockSize;
    UCHAR bProvisioningType;
    USHORT wContextCapabilities;
    UCHAR Reserved[3];
    USHORT wLUMaxActiveHPBRegions;
    USHORT wHPBPinnedRegionStartIdx;
    USHORT wNumHPBPinnedRegions;
    UCHAR Reserved2[2];
} UFS_HPB_UNIT_CONFIG_DESCRIPTOR, *PUFS_HPB_UNIT_CONFIG_DESCRIPTOR;
typedef struct {
    UCHAR bLength;
    UCHAR bDescriptorIDN;
    UCHAR Reserved1;
    UCHAR bBootEnable;
    UCHAR bDescrAccessEn;
    UCHAR bInitPowerMode;
    UCHAR bHighPriorityLUN;
    UCHAR bSecureRemovalType;
    UCHAR bInitActiveICCLevel;
    USHORT wPeriodicRTCUpdate;
    UCHAR Reserved2[5];
    UFS_HPB_UNIT_CONFIG_DESCRIPTOR UnitConfig[UFS_MAX_NUM_LU];
} UFS_HPB_CONFIG_DESCRIPTOR, *PUFS_HPB_CONFIG_DESCRIPTOR;
#pragma pack (pop)
