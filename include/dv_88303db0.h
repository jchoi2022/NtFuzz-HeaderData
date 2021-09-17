#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct Tag_DVAudInfo
{
 BYTE bAudStyle[2];
 BYTE bAudQu[2];
 BYTE bNumAudPin;
 WORD wAvgSamplesPerPinPerFrm[2];
 WORD wBlkMode;
 WORD wDIFMode;
 WORD wBlkDiv;
} DVAudInfo;
#endif
#pragma endregion
