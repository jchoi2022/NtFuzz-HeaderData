#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
                          ((OSVER(NTDDI_VERSION) == NTDDI_WINXP) && (SPVER(NTDDI_VERSION) >= SPVER(NTDDI_WINXPSP2))) || \
                          ((OSVER(NTDDI_VERSION) == NTDDI_WS03) && (SPVER(NTDDI_VERSION) >= SPVER(NTDDI_WS03SP1))) || \
                          (NTDDI_VERSION >= NTDDI_VISTA))
                             ((OSVER(NTDDI_VERSION) == NTDDI_WINXP) && (SPVER(NTDDI_VERSION) > SPVER(NTDDI_WINXPSP2))) || \
                             ((OSVER(NTDDI_VERSION) == NTDDI_WS03) && (SPVER(NTDDI_VERSION) >= SPVER(NTDDI_WS03SP1))) || \
                             (NTDDI_VERSION >= NTDDI_VISTA))
#include <fltUserStructures.h>
extern "C" {
}
#endif
#pragma endregion
