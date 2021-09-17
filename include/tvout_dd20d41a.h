#include <winapifamily.h>
#include <guiddef.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _VIDEOPARAMETERS {
    GUID Guid;
    ULONG dwOffset;
    ULONG dwCommand;
    ULONG dwFlags;
    ULONG dwMode;
    ULONG dwTVStandard;
    ULONG dwAvailableModes;
    ULONG dwAvailableTVStandard;
    ULONG dwFlickerFilter;
    ULONG dwOverScanX;
    ULONG dwOverScanY;
    ULONG dwMaxUnscaledX;
    ULONG dwMaxUnscaledY;
    ULONG dwPositionX;
    ULONG dwPositionY;
    ULONG dwBrightness;
    ULONG dwContrast;
    ULONG dwCPType;
    ULONG dwCPCommand;
    ULONG dwCPStandard;
    ULONG dwCPKey;
    ULONG bCP_APSTriggerBits;
    UCHAR bOEMCopyProtection[256];
} VIDEOPARAMETERS, *PVIDEOPARAMETERS, *LPVIDEOPARAMETERS;
#endif
#pragma endregion
