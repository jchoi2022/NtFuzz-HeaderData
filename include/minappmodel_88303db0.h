#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
                                             PACKAGE_VERSION_MIN_LENGTH + 1 + \
                                             PACKAGE_ARCHITECTURE_MIN_LENGTH + 1 + \
                                             PACKAGE_RESOURCEID_MIN_LENGTH + 1 + \
                                             PACKAGE_PUBLISHERID_MIN_LENGTH)
                                             PACKAGE_VERSION_MAX_LENGTH + 1 + \
                                             PACKAGE_ARCHITECTURE_MAX_LENGTH + 1 + \
                                             PACKAGE_RESOURCEID_MAX_LENGTH + 1 + \
                                             PACKAGE_PUBLISHERID_MAX_LENGTH)
                                             PACKAGE_PUBLISHERID_MIN_LENGTH)
                                             PACKAGE_PUBLISHERID_MAX_LENGTH)
                                                     PACKAGE_RELATIVE_APPLICATION_ID_MIN_LENGTH)
                                                     PACKAGE_RELATIVE_APPLICATION_ID_MAX_LENGTH)
#endif
#pragma endregion
