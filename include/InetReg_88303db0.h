#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
    REGSTR_PATH_INTERNETSETTINGS TEXT("\\Cache")
    REGSTR_PATH_CACHE TEXT("\\Paths")
    REGSTR_PATH_CACHE TEXT("\\Extensible Cache")
    REGSTR_PATH_EXTENSIBLE_CACHE TEXT("\\Log")
    REGSTR_PATH_CACHE TEXT("Special Paths")
    REGSTR_PATH_INTERNETSETTINGS TEXT("\\Url History")
    REGSTR_PATH_INTERNETSETTINGS TEXT("\\Subscription Folder")
#endif
#pragma endregion
