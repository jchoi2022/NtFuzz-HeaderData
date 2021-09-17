#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <setupapi.h>
typedef struct _REDBOOK_DIGITAL_AUDIO_EXTRACTION_INFO {
    ULONG Version;
    ULONG Accurate;
    ULONG Supported;
    ULONG AccurateMask0;
} REDBOOK_DIGITAL_AUDIO_EXTRACTION_INFO,
  *PREDBOOK_DIGITAL_AUDIO_EXTRACTION_INFO;
DWORD
CdromCddaInfo(
    IN HDEVINFO HDevInfo,
    IN PSP_DEVINFO_DATA DevInfoData,
       OUT PREDBOOK_DIGITAL_AUDIO_EXTRACTION_INFO CddaInfo,
    IN OUT PULONG BufferSize
    );
BOOL
CdromKnownGoodDigitalPlayback(IN HDEVINFO HDevInfo,
                              IN PSP_DEVINFO_DATA DevInfoData);
LONG
CdromEnableDigitalPlayback(IN HDEVINFO DevInfo,
                           IN PSP_DEVINFO_DATA DevInfoData,
                           IN BOOLEAN ForceUnknown);
LONG
CdromDisableDigitalPlayback( IN HDEVINFO DevInfo,
                             IN PSP_DEVINFO_DATA DevInfoData);
LONG
CdromIsDigitalPlaybackEnabled(
    IN HDEVINFO DevInfo,
    IN PSP_DEVINFO_DATA DevInfoData,
    OUT PBOOLEAN Enabled
    );
LONG
CdromSetDefaultDvdRegion(IN GEOID GeoId);
#endif
#pragma endregion
