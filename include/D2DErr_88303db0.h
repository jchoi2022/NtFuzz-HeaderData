       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
    MAKE_HRESULT( sev, FACILITY_D2D, (code) )
    MAKE_D2DHR( 1, code )
#endif
#pragma endregion
