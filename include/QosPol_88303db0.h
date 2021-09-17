       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _IDPE_ATTR {
    USHORT PeAttribLength;
    UCHAR PeAttribType;
    UCHAR PeAttribSubType;
    UCHAR PeAttribValue[4];
} IDPE_ATTR, *LPIDPE_ATTR;
#endif
#pragma endregion
