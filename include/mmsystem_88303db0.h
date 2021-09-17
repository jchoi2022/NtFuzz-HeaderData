#include <winapifamily.h>
#include <mmsyscom.h>
#include <pshpack1.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <mciapi.h>
#include <mmiscapi.h>
#include <mmiscapi2.h>
#include <playsoundapi.h>
#include <mmeapi.h>
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include <timeapi.h>
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <joystickapi.h>
    #define NEWTRANSPARENT 3
    #define QUERYROPSUPPORT 40
    #define SC_SCREENSAVE 0xF140
#endif
#pragma endregion
}
#include <poppack.h>
