#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "comcat.h"
#include "ocidl.h"
#include "docobj.h"
#include "hlink.h"
extern "C"{
#pragma comment(lib,"uuid.lib")
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_inetsdk_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inetsdk_0000_0000_v0_0_s_ifspec;
}
