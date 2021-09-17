#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum TPMVSC_ATTESTATION_TYPE
    {
        TPMVSC_ATTESTATION_NONE = 0,
        TPMVSC_ATTESTATION_AIK_ONLY = 1,
        TPMVSC_ATTESTATION_AIK_AND_CERTIFICATE = 2
    } TPMVSC_ATTESTATION_TYPE;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tpmvscattestation_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tpmvscattestation_0000_0000_v0_0_s_ifspec;
}
