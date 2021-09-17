#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib, "wuguid.lib")
typedef
enum tagServerSelection
    {
        ssDefault = 0,
        ssManagedServer = 1,
        ssWindowsUpdate = 2,
        ssOthers = 3
    } ServerSelection;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wuapicommon_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wuapicommon_0000_0000_v0_0_s_ifspec;
}
