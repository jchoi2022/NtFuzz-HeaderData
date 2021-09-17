#include <winapifamily.h>
       
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagCRGB
{
    BYTE bRed;
    BYTE bGreen;
    BYTE bBlue;
    BYTE bExtra;
} CRGB;
#endif
#pragma endregion
