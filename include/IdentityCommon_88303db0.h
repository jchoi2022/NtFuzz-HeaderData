#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _IdentityType
    {
        IDENTITIES_ALL = 0,
        IDENTITIES_ME_ONLY = 0x1
    } IDENTITY_TYPE;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_identitycommon_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_identitycommon_0000_0000_v0_0_s_ifspec;
}
