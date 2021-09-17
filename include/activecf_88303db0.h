#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagVFW_FILTERLIST{
    UINT cFilters;
    CLSID aClsId[1];
} VFW_FILTERLIST;
#endif
#pragma endregion
