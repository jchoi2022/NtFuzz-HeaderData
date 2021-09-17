#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
    ((((DD_GETDRIVERINFO2DATA*)(pData->lpvData))->dwMagic) == D3DGDI2_MAGIC)
    ((((DD_STEREOMODE*) (pData->lpvData))->dwHeight) != D3DGDI2_MAGIC)
    (D3DGDI_IS_GDI2(pData) ? (((DD_GETDRIVERINFO2DATA*)(pData->lpvData))) : NULL)
    (D3DGDI_IS_STEREOMODE(pData) ? (((DD_STEREOMODE*)(pData->lpvData))) : NULL)
#endif
#pragma endregion
