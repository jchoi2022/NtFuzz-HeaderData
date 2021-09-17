#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct
{
   RPC_NS_HANDLE LookupContext;
   RPC_BINDING_HANDLE ProposedHandle;
   RPC_BINDING_VECTOR * Bindings;
} RPC_IMPORT_CONTEXT_P, * PRPC_IMPORT_CONTEXT_P;
RPCNSAPI
RPC_STATUS
RPC_ENTRY
I_RpcNsGetBuffer(
    IN PRPC_MESSAGE Message
    );
RPCNSAPI
RPC_STATUS
RPC_ENTRY
I_RpcNsSendReceive(
    IN PRPC_MESSAGE Message,
    OUT RPC_BINDING_HANDLE __RPC_FAR * Handle
    );
RPCNSAPI
_Analysis_noreturn_
void
RPC_ENTRY
I_RpcNsRaiseException(
    IN PRPC_MESSAGE Message,
    IN RPC_STATUS Status
    );
RPCNSAPI
RPC_STATUS
RPC_ENTRY
I_RpcReBindBuffer(
    IN PRPC_MESSAGE Message
    );
RPCNSAPI
RPC_STATUS
RPC_ENTRY
I_NsServerBindSearch(
    void
    );
RPCNSAPI
RPC_STATUS
RPC_ENTRY
I_NsClientBindSearch(
    void
    );
RPCNSAPI
void
RPC_ENTRY
I_NsClientBindDone(
    void
    );
#endif
#pragma endregion
}
