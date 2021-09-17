#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
  #define _WIN32_MSI 500
enum msidbControlAttributes
{
 msidbControlAttributesVisible = 0x00000001,
 msidbControlAttributesEnabled = 0x00000002,
 msidbControlAttributesSunken = 0x00000004,
 msidbControlAttributesIndirect = 0x00000008,
 msidbControlAttributesInteger = 0x00000010,
 msidbControlAttributesRTLRO = 0x00000020,
 msidbControlAttributesRightAligned = 0x00000040,
 msidbControlAttributesLeftScroll = 0x00000080,
 msidbControlAttributesBiDi = msidbControlAttributesRTLRO |
                                           msidbControlAttributesRightAligned |
                         msidbControlAttributesLeftScroll,
 msidbControlAttributesTransparent = 0x00010000,
 msidbControlAttributesNoPrefix = 0x00020000,
 msidbControlAttributesNoWrap = 0x00040000,
 msidbControlAttributesFormatSize = 0x00080000,
 msidbControlAttributesUsersLanguage = 0x00100000,
 msidbControlAttributesMultiline = 0x00010000,
 msidbControlAttributesPasswordInput = 0x00200000,
 msidbControlAttributesProgress95 = 0x00010000,
 msidbControlAttributesRemovableVolume = 0x00010000,
 msidbControlAttributesFixedVolume = 0x00020000,
 msidbControlAttributesRemoteVolume = 0x00040000,
 msidbControlAttributesCDROMVolume = 0x00080000,
 msidbControlAttributesRAMDiskVolume = 0x00100000,
 msidbControlAttributesFloppyVolume = 0x00200000,
 msidbControlShowRollbackCost = 0x00400000,
 msidbControlAttributesSorted = 0x00010000,
 msidbControlAttributesComboList = 0x00020000,
 msidbControlAttributesImageHandle = 0x00010000,
 msidbControlAttributesPushLike = 0x00020000,
 msidbControlAttributesBitmap = 0x00040000,
 msidbControlAttributesIcon = 0x00080000,
 msidbControlAttributesFixedSize = 0x00100000,
 msidbControlAttributesIconSize16 = 0x00200000,
 msidbControlAttributesIconSize32 = 0x00400000,
 msidbControlAttributesIconSize48 = 0x00600000,
 msidbControlAttributesElevationShield = 0x00800000,
 msidbControlAttributesHasBorder = 0x01000000,
};
typedef enum _msidbLocatorType
{
 msidbLocatorTypeDirectory = 0x00000000,
 msidbLocatorTypeFileName = 0x00000001,
 msidbLocatorTypeRawValue = 0x00000002,
 msidbLocatorType64bit = 0x00000010,
} msidbLocatorType;
enum msidbComponentAttributes
{
 msidbComponentAttributesLocalOnly = 0x00000000,
 msidbComponentAttributesSourceOnly = 0x00000001,
 msidbComponentAttributesOptional = 0x00000002,
 msidbComponentAttributesRegistryKeyPath = 0x00000004,
 msidbComponentAttributesSharedDllRefCount = 0x00000008,
 msidbComponentAttributesPermanent = 0x00000010,
 msidbComponentAttributesODBCDataSource = 0x00000020,
 msidbComponentAttributesTransitive = 0x00000040,
 msidbComponentAttributesNeverOverwrite = 0x00000080,
 msidbComponentAttributes64bit = 0x00000100,
 msidbComponentAttributesDisableRegistryReflection = 0x00000200,
 msidbComponentAttributesUninstallOnSupersedence = 0x00000400,
 msidbComponentAttributesShared = 0x00000800,
};
enum msidbAssemblyAttributes
{
 msidbAssemblyAttributesURT = 0x00000000,
 msidbAssemblyAttributesWin32 = 0x00000001,
};
enum msidbCustomActionType
{
 msidbCustomActionTypeDll = 0x00000001,
 msidbCustomActionTypeExe = 0x00000002,
 msidbCustomActionTypeTextData = 0x00000003,
 msidbCustomActionTypeJScript = 0x00000005,
 msidbCustomActionTypeVBScript = 0x00000006,
 msidbCustomActionTypeInstall = 0x00000007,
 msidbCustomActionTypeBinaryData = 0x00000000,
 msidbCustomActionTypeSourceFile = 0x00000010,
 msidbCustomActionTypeDirectory = 0x00000020,
 msidbCustomActionTypeProperty = 0x00000030,
 msidbCustomActionTypeContinue = 0x00000040,
 msidbCustomActionTypeAsync = 0x00000080,
 msidbCustomActionTypeFirstSequence = 0x00000100,
 msidbCustomActionTypeOncePerProcess = 0x00000200,
 msidbCustomActionTypeClientRepeat = 0x00000300,
 msidbCustomActionTypeInScript = 0x00000400,
 msidbCustomActionTypeRollback = 0x00000100,
 msidbCustomActionTypeCommit = 0x00000200,
 msidbCustomActionTypeNoImpersonate = 0x00000800,
 msidbCustomActionTypeTSAware = 0x00004000,
 msidbCustomActionType64BitScript = 0x00001000,
 msidbCustomActionTypeHideTarget = 0x00002000,
 msidbCustomActionTypePatchUninstall = 0x00008000,
};
enum msidbDialogAttributes
{
 msidbDialogAttributesVisible = 0x00000001,
 msidbDialogAttributesModal = 0x00000002,
 msidbDialogAttributesMinimize = 0x00000004,
 msidbDialogAttributesSysModal = 0x00000008,
 msidbDialogAttributesKeepModeless = 0x00000010,
 msidbDialogAttributesTrackDiskSpace = 0x00000020,
 msidbDialogAttributesUseCustomPalette = 0x00000040,
 msidbDialogAttributesRTLRO = 0x00000080,
 msidbDialogAttributesRightAligned = 0x00000100,
 msidbDialogAttributesLeftScroll = 0x00000200,
 msidbDialogAttributesBiDi = msidbDialogAttributesRTLRO |
                       msidbDialogAttributesRightAligned |
                       msidbDialogAttributesLeftScroll,
 msidbDialogAttributesError = 0x00010000,
};
enum msidbFeatureAttributes
{
 msidbFeatureAttributesFavorLocal = 0x00000000,
 msidbFeatureAttributesFavorSource = 0x00000001,
 msidbFeatureAttributesFollowParent = 0x00000002,
 msidbFeatureAttributesFavorAdvertise = 0x00000004,
 msidbFeatureAttributesDisallowAdvertise = 0x00000008,
 msidbFeatureAttributesUIDisallowAbsent = 0x00000010,
 msidbFeatureAttributesNoUnsupportedAdvertise= 0x00000020,
};
enum msidbFileAttributes
{
 msidbFileAttributesReadOnly = 0x00000001,
 msidbFileAttributesHidden = 0x00000002,
 msidbFileAttributesSystem = 0x00000004,
 msidbFileAttributesReserved0 = 0x00000008,
 msidbFileAttributesIsolatedComp = 0x00000010,
 msidbFileAttributesReserved1 = 0x00000040,
 msidbFileAttributesReserved2 = 0x00000080,
 msidbFileAttributesReserved3 = 0x00000100,
 msidbFileAttributesVital = 0x00000200,
 msidbFileAttributesChecksum = 0x00000400,
 msidbFileAttributesPatchAdded = 0x00001000,
 msidbFileAttributesNoncompressed = 0x00002000,
 msidbFileAttributesCompressed = 0x00004000,
 msidbFileAttributesReserved4 = 0x00008000,
};
typedef enum _msidbIniFileAction
{
 msidbIniFileActionAddLine = 0x00000000,
 msidbIniFileActionCreateLine = 0x00000001,
 msidbIniFileActionRemoveLine = 0x00000002,
 msidbIniFileActionAddTag = 0x00000003,
 msidbIniFileActionRemoveTag = 0x00000004,
} msidbIniFileAction;
enum msidbMoveFileOptions
{
 msidbMoveFileOptionsMove = 0x00000001,
};
typedef enum _msidbODBCDataSourceRegistration
{
 msidbODBCDataSourceRegistrationPerMachine = 0x00000000,
 msidbODBCDataSourceRegistrationPerUser = 0x00000001,
} msidbODBCDataSourceRegistration;
enum msidbClassAttributes
{
 msidbClassAttributesRelativePath = 0x00000001,
};
enum msidbPatchAttributes
{
 msidbPatchAttributesNonVital = 0x00000001,
};
enum msidbRegistryRoot
{
 msidbRegistryRootClassesRoot = 0,
 msidbRegistryRootCurrentUser = 1,
 msidbRegistryRootLocalMachine = 2,
 msidbRegistryRootUsers = 3,
};
enum msidbRemoveFileInstallMode
{
 msidbRemoveFileInstallModeOnInstall = 0x00000001,
 msidbRemoveFileInstallModeOnRemove = 0x00000002,
 msidbRemoveFileInstallModeOnBoth = 0x00000003,
};
enum msidbServiceControlEvent
{
 msidbServiceControlEventStart = 0x00000001,
 msidbServiceControlEventStop = 0x00000002,
 msidbServiceControlEventDelete = 0x00000008,
 msidbServiceControlEventUninstallStart = 0x00000010,
 msidbServiceControlEventUninstallStop = 0x00000020,
 msidbServiceControlEventUninstallDelete = 0x00000080,
};
enum msidbServiceConfigEvent
{
 msidbServiceConfigEventInstall = 0x00000001,
 msidbServiceConfigEventUninstall = 0x00000002,
 msidbServiceConfigEventReinstall = 0x00000004,
};
enum msidbServiceInstallErrorControl
{
 msidbServiceInstallErrorControlVital = 0x00008000,
};
enum msidbTextStyleStyleBits
{
 msidbTextStyleStyleBitsBold = 0x00000001,
 msidbTextStyleStyleBitsItalic = 0x00000002,
 msidbTextStyleStyleBitsUnderline = 0x00000004,
 msidbTextStyleStyleBitsStrike = 0x00000008,
};
enum msidbUpgradeAttributes
{
 msidbUpgradeAttributesMigrateFeatures = 0x00000001,
 msidbUpgradeAttributesOnlyDetect = 0x00000002,
 msidbUpgradeAttributesIgnoreRemoveFailure = 0x00000004,
 msidbUpgradeAttributesVersionMinInclusive = 0x00000100,
 msidbUpgradeAttributesVersionMaxInclusive = 0x00000200,
 msidbUpgradeAttributesLanguagesExclusive = 0x00000400,
};
enum msidbEmbeddedUIAttributes
{
 msidbEmbeddedUI = 0x01,
 msidbEmbeddedHandlesBasic = 0x02,
};
enum msidbSumInfoSourceType
{
 msidbSumInfoSourceTypeSFN = 0x00000001,
 msidbSumInfoSourceTypeCompressed = 0x00000002,
 msidbSumInfoSourceTypeAdminImage = 0x00000004,
 msidbSumInfoSourceTypeLUAPackage = 0x00000008,
};
enum msirbRebootType
{
 msirbRebootImmediate = 1,
 msirbRebootDeferred = 2,
};
enum msirbRebootReason
{
 msirbRebootUndeterminedReason = 0,
 msirbRebootInUseFilesReason = 1,
 msirbRebootScheduleRebootReason = 2,
 msirbRebootForceRebootReason = 3,
 msirbRebootCustomActionReason = 4,
};
enum msifiFastInstallBits
{
 msifiFastInstallNoSR = 0x00000001,
 msifiFastInstallQuickCosting = 0x00000002,
 msifiFastInstallLessPrgMsg = 0x00000004
};
#endif
#pragma endregion
