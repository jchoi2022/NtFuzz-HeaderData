#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum _tagSND_DEVICE_ERROR {
    SNDDEV_ERROR_Open=1,
    SNDDEV_ERROR_Close=2,
    SNDDEV_ERROR_GetCaps=3,
    SNDDEV_ERROR_PrepareHeader=4,
    SNDDEV_ERROR_UnprepareHeader=5,
    SNDDEV_ERROR_Reset=6,
    SNDDEV_ERROR_Restart=7,
    SNDDEV_ERROR_GetPosition=8,
    SNDDEV_ERROR_Write=9,
    SNDDEV_ERROR_Pause=10,
    SNDDEV_ERROR_Stop=11,
    SNDDEV_ERROR_Start=12,
    SNDDEV_ERROR_AddBuffer=13,
    SNDDEV_ERROR_Query=14,
} SNDDEV_ERR;
#endif
#pragma endregion
