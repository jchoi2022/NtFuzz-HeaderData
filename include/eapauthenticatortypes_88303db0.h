#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _EAP_AUTHENTICATOR_SEND_TIMEOUT
    {
        EAP_AUTHENTICATOR_SEND_TIMEOUT_NONE = 0,
        EAP_AUTHENTICATOR_SEND_TIMEOUT_BASIC = ( EAP_AUTHENTICATOR_SEND_TIMEOUT_NONE + 1 ) ,
        EAP_AUTHENTICATOR_SEND_TIMEOUT_INTERACTIVE = ( EAP_AUTHENTICATOR_SEND_TIMEOUT_BASIC + 1 )
    } EAP_AUTHENTICATOR_SEND_TIMEOUT;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_eapauthenticatortypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_eapauthenticatortypes_0000_0000_v0_0_s_ifspec;
}
