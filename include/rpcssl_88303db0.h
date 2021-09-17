#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcCertGeneratePrincipalNameW(
    _In_ PCCERT_CONTEXT Context,
    _In_ DWORD Flags,
    _Outptr_ RPC_WSTR *pBuffer
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcCertGeneratePrincipalNameA(
    _In_ PCCERT_CONTEXT Context,
    _In_ DWORD Flags,
    _Outptr_ RPC_CSTR * pBuffer
    );
}
#endif
#pragma endregion
