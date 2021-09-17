#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
#include "hlink.h"
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_hliface_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hliface_0000_0000_v0_0_s_ifspec;
}
