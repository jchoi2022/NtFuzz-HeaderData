#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _TWAIN_CAPABILITY {
    LONG lSize;
    LONG lMSG;
    LONG lCapID;
    LONG lConType;
    LONG lRC;
    LONG lCC;
    LONG lDataSize;
    BYTE Data[1];
}TWAIN_CAPABILITY,*PTWAIN_CAPABILITY;
#endif
#pragma endregion
