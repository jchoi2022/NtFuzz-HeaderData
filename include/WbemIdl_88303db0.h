#include <winapifamily.h>
#pragma region Desktop Family or WinMgmt Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT)
#include <wbemcli.h>
#include <wbemprov.h>
#include <wbemtran.h>
#include <wbemdisp.h>
#endif
#pragma endregion
