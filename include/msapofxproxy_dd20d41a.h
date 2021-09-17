       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <ks.h>
    0xb217a72, 0x16b8, 0x4a4d, 0xbd, 0xed, 0xf9, 0xd6, 0xbb, 0xed, 0xcd, 0x8f
DEFINE_GUIDSTRUCT("0B217A72-16B8-4A4D-BDED-F9D6BBEDCD8F", KSPROPSETID_AudioEffectsDiscovery);
typedef enum {
    KSPROPERTY_AUDIOEFFECTSDISCOVERY_EFFECTSLIST = 1,
} KSPROPERTY_AUDIOEFFECTSDISCOVERY;
typedef struct tagKSP_PINMODE
{
    KSP_PIN PinProperty;
    GUID AudioProcessingMode;
} KSP_PINMODE, *PKSP_PINMODE;
#endif
#pragma endregion
