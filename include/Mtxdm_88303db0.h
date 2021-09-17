#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "comsvcs.h"
extern "C"{
__declspec(dllimport) HRESULT __cdecl GetDispenserManager(IDispenserManager**);
}
#endif
#pragma endregion
