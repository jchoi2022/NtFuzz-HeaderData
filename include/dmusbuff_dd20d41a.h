#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "dmdls.h"
#include <pshpack4.h>
typedef struct _DMUS_EVENTHEADER *LPDMUS_EVENTHEADER;
typedef struct _DMUS_EVENTHEADER
{
    DWORD cbEvent;
    DWORD dwChannelGroup;
    REFERENCE_TIME rtDelta;
    DWORD dwFlags;
} DMUS_EVENTHEADER;
#include <poppack.h>
#endif
#pragma endregion
