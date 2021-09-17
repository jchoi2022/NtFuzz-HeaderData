#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
            (((rc) < 0x10000) \
                ? HRESULT_FROM_WIN32(rc) \
                : (rc))
            ((HRESULT_FACILITY(hres) == FACILITY_WIN32) \
                ? HRESULT_CODE(hres) \
                : (hres))
#endif
#pragma endregion
