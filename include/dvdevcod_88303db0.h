#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef enum _tagDVD_ERROR {
    DVD_ERROR_Unexpected=1,
    DVD_ERROR_CopyProtectFail=2,
    DVD_ERROR_InvalidDVD1_0Disc=3,
    DVD_ERROR_InvalidDiscRegion=4,
    DVD_ERROR_LowParentalLevel=5,
    DVD_ERROR_MacrovisionFail=6,
    DVD_ERROR_IncompatibleSystemAndDecoderRegions=7,
    DVD_ERROR_IncompatibleDiscAndDecoderRegions=8,
    DVD_ERROR_CopyProtectOutputFail=9,
    DVD_ERROR_CopyProtectOutputNotSupported=10,
} DVD_ERROR;
typedef enum _tagDVD_WARNING {
    DVD_WARNING_InvalidDVD1_0Disc=1,
    DVD_WARNING_FormatNotSupported=2,
    DVD_WARNING_IllegalNavCommand=3,
    DVD_WARNING_Open = 4,
    DVD_WARNING_Seek = 5,
    DVD_WARNING_Read = 6
} DVD_WARNING;
typedef enum _tagDVD_PB_STOPPED {
    DVD_PB_STOPPED_Other=0,
    DVD_PB_STOPPED_NoBranch=1,
    DVD_PB_STOPPED_NoFirstPlayDomain =2,
    DVD_PB_STOPPED_StopCommand = 3,
    DVD_PB_STOPPED_Reset=4,
    DVD_PB_STOPPED_DiscEjected=5,
    DVD_PB_STOPPED_IllegalNavCommand = 6,
    DVD_PB_STOPPED_PlayPeriodAutoStop = 7,
    DVD_PB_STOPPED_PlayChapterAutoStop = 8,
    DVD_PB_STOPPED_ParentalFailure = 9,
    DVD_PB_STOPPED_RegionFailure = 10,
    DVD_PB_STOPPED_MacrovisionFailure = 11,
    DVD_PB_STOPPED_DiscReadError = 12,
    DVD_PB_STOPPED_CopyProtectFailure = 13,
    DVD_PB_STOPPED_CopyProtectOutputFailure = 14,
    DVD_PB_STOPPED_CopyProtectOutputNotSupported = 15
} DVD_PB_STOPPED;
#endif
#pragma endregion
