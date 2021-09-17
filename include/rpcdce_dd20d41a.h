#include <winapifamily.h>
extern "C" {
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#include <specstrings.h>
typedef _Null_terminated_ unsigned char __RPC_FAR * RPC_CSTR;
typedef _Null_terminated_ unsigned short __RPC_FAR * RPC_WSTR;
typedef _Null_terminated_ const unsigned short * RPC_CWSTR;
typedef I_RPC_HANDLE RPC_BINDING_HANDLE;
typedef RPC_BINDING_HANDLE handle_t;
#include <guiddef.h>
typedef GUID UUID;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct _RPC_BINDING_VECTOR
{
    unsigned long Count;
    _Field_size_(Count) RPC_BINDING_HANDLE BindingH[1];
} RPC_BINDING_VECTOR;
typedef struct _UUID_VECTOR
{
  unsigned long Count;
  _Field_size_(Count) UUID *Uuid[1];
} UUID_VECTOR;
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef void __RPC_FAR * RPC_IF_HANDLE;
typedef struct _RPC_IF_ID
{
    UUID Uuid;
    unsigned short VersMajor;
    unsigned short VersMinor;
} RPC_IF_ID;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct _RPC_PROTSEQ_VECTORA
{
    unsigned int Count;
    unsigned char __RPC_FAR * Protseq[1];
} RPC_PROTSEQ_VECTORA;
typedef struct _RPC_PROTSEQ_VECTORW
{
    unsigned int Count;
    unsigned short __RPC_FAR * Protseq[1];
} RPC_PROTSEQ_VECTORW;
typedef struct _RPC_POLICY {
    unsigned int Length ;
    unsigned long EndpointFlags ;
    unsigned long NICFlags ;
    } RPC_POLICY, __RPC_FAR *PRPC_POLICY ;
typedef void __RPC_USER
RPC_OBJECT_INQ_FN (
    _In_ UUID __RPC_FAR * ObjectUuid,
    _Out_ UUID __RPC_FAR * TypeUuid,
    _Out_ RPC_STATUS __RPC_FAR * Status
    );
_Success_(return == 0)
typedef RPC_STATUS RPC_ENTRY
RPC_IF_CALLBACK_FN (
    _In_ RPC_IF_HANDLE InterfaceUuid,
    _In_ void *Context
    ) ;
typedef void RPC_ENTRY
RPC_SECURITY_CALLBACK_FN (
    _In_ void *Context
    ) ;
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef struct
{
    unsigned int Count;
    unsigned long Stats[1];
} RPC_STATS_VECTOR;
typedef struct
{
  unsigned long Count;
  RPC_IF_ID __RPC_FAR * IfId[1];
} RPC_IF_ID_VECTOR;
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingCopy (
    _In_ RPC_BINDING_HANDLE SourceBinding,
    _Out_ RPC_BINDING_HANDLE __RPC_FAR * DestinationBinding
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcBindingFree (
    _Inout_ RPC_BINDING_HANDLE __RPC_FAR * Binding
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingSetOption (
    _In_ RPC_BINDING_HANDLE hBinding,
    _In_ unsigned long option,
    _In_ ULONG_PTR optionValue
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingInqOption (
    _In_ RPC_BINDING_HANDLE hBinding,
    _In_ unsigned long option,
    _Out_ ULONG_PTR *pOptionValue
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingFromStringBindingA (
    _In_ RPC_CSTR StringBinding,
    _Out_ RPC_BINDING_HANDLE __RPC_FAR * Binding
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingFromStringBindingW (
    _In_ RPC_WSTR StringBinding,
    _Out_ RPC_BINDING_HANDLE __RPC_FAR * Binding
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcSsGetContextBinding (
    _In_ void *ContextHandle,
    _Out_ RPC_BINDING_HANDLE __RPC_FAR * Binding
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingInqObject (
    _In_ RPC_BINDING_HANDLE Binding,
    _Out_ UUID __RPC_FAR * ObjectUuid
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingReset (
    _In_ RPC_BINDING_HANDLE Binding
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingSetObject (
    _In_ RPC_BINDING_HANDLE Binding,
    _In_ UUID __RPC_FAR * ObjectUuid
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtInqDefaultProtectLevel (
    _In_ unsigned long AuthnSvc,
    _Out_ unsigned long __RPC_FAR *AuthnLevel
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingToStringBindingA (
    _In_ RPC_BINDING_HANDLE Binding,
    _Outptr_ RPC_CSTR __RPC_FAR * StringBinding
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingToStringBindingW (
    _In_ RPC_BINDING_HANDLE Binding,
    _Outptr_ RPC_WSTR __RPC_FAR * StringBinding
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcBindingVectorFree (
    _Inout_ RPC_BINDING_VECTOR __RPC_FAR * __RPC_FAR * BindingVector
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcStringBindingComposeA (
    _In_opt_ RPC_CSTR ObjUuid,
    _In_opt_ RPC_CSTR ProtSeq,
    _In_opt_ RPC_CSTR NetworkAddr,
    _In_opt_ RPC_CSTR Endpoint,
    _In_opt_ RPC_CSTR Options,
    _Outptr_opt_ RPC_CSTR __RPC_FAR * StringBinding
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcStringBindingComposeW (
    _In_opt_ RPC_WSTR ObjUuid,
    _In_opt_ RPC_WSTR ProtSeq,
    _In_opt_ RPC_WSTR NetworkAddr,
    _In_opt_ RPC_WSTR Endpoint,
    _In_opt_ RPC_WSTR Options,
    _Outptr_opt_ RPC_WSTR __RPC_FAR * StringBinding
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcStringBindingParseA (
    _In_ RPC_CSTR StringBinding,
    _Outptr_opt_ RPC_CSTR __RPC_FAR * ObjUuid,
    _Outptr_opt_ RPC_CSTR __RPC_FAR * Protseq,
    _Outptr_opt_ RPC_CSTR __RPC_FAR * NetworkAddr,
    _Outptr_opt_ RPC_CSTR __RPC_FAR * Endpoint,
    _Outptr_opt_ RPC_CSTR __RPC_FAR * NetworkOptions
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcStringBindingParseW (
    _In_ RPC_WSTR StringBinding,
    _Outptr_opt_ RPC_WSTR __RPC_FAR * ObjUuid,
    _Outptr_opt_ RPC_WSTR __RPC_FAR * Protseq,
    _Outptr_opt_ RPC_WSTR __RPC_FAR * NetworkAddr,
    _Outptr_opt_ RPC_WSTR __RPC_FAR * Endpoint,
    _Outptr_opt_ RPC_WSTR __RPC_FAR * NetworkOptions
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcStringFreeA (
    _Inout_ RPC_CSTR __RPC_FAR * String
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcStringFreeW (
    _Inout_ RPC_WSTR __RPC_FAR * String
    );
#endif
#pragma endregion
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcIfInqId (
    _In_ RPC_IF_HANDLE RpcIfHandle,
    _Out_ RPC_IF_ID __RPC_FAR * RpcIfId
    );
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcNetworkIsProtseqValidA (
    _In_ RPC_CSTR Protseq
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcNetworkIsProtseqValidW (
    _In_ RPC_WSTR Protseq
    );
#endif
#pragma endregion
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtInqComTimeout (
    _In_ RPC_BINDING_HANDLE Binding,
    _Out_ unsigned int __RPC_FAR * Timeout
    );
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtSetComTimeout (
    _In_ RPC_BINDING_HANDLE Binding,
    _In_ unsigned int Timeout
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtSetCancelTimeout(
    _In_ long Timeout
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcNetworkInqProtseqsA (
    _Outptr_ RPC_PROTSEQ_VECTORA __RPC_FAR * __RPC_FAR * ProtseqVector
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcNetworkInqProtseqsW (
    _Outptr_ RPC_PROTSEQ_VECTORW __RPC_FAR * __RPC_FAR * ProtseqVector
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcObjectInqType (
    _In_ UUID __RPC_FAR * ObjUuid,
    _Out_opt_ OPTIONAL UUID __RPC_FAR * TypeUuid
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcObjectSetInqFn (
    _In_ RPC_OBJECT_INQ_FN __RPC_FAR * InquiryFn
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcObjectSetType (
    _In_ UUID __RPC_FAR * ObjUuid,
    _In_opt_ OPTIONAL UUID __RPC_FAR * TypeUuid
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcProtseqVectorFreeA (
    _Inout_ RPC_PROTSEQ_VECTORA __RPC_FAR * __RPC_FAR * ProtseqVector
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcProtseqVectorFreeW (
    _Inout_ RPC_PROTSEQ_VECTORW __RPC_FAR * __RPC_FAR * ProtseqVector
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerInqBindings (
    _Outptr_ RPC_BINDING_VECTOR __RPC_FAR * __RPC_FAR * BindingVector
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerInqBindingsEx (
    _In_opt_ void __RPC_FAR * SecurityDescriptor,
    _Outptr_ RPC_BINDING_VECTOR __RPC_FAR * __RPC_FAR * BindingVector
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerInqIf (
    _In_ RPC_IF_HANDLE IfSpec,
    _In_opt_ UUID __RPC_FAR * MgrTypeUuid,
    _Outptr_ RPC_MGR_EPV __RPC_FAR * __RPC_FAR * MgrEpv
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerListen (
    _In_ unsigned int MinimumCallThreads,
    _In_ unsigned int MaxCalls,
    _In_ unsigned int DontWait
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerRegisterIf (
    _In_ RPC_IF_HANDLE IfSpec,
    _In_opt_ UUID __RPC_FAR * MgrTypeUuid,
    _In_opt_ RPC_MGR_EPV __RPC_FAR * MgrEpv
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerRegisterIfEx (
    _In_ RPC_IF_HANDLE IfSpec,
    _In_opt_ UUID __RPC_FAR * MgrTypeUuid,
    _In_opt_ RPC_MGR_EPV __RPC_FAR * MgrEpv,
    _In_ unsigned int Flags,
    _In_ unsigned int MaxCalls,
    _In_opt_ RPC_IF_CALLBACK_FN __RPC_FAR *IfCallback
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcServerRegisterIf2 (
    _In_ RPC_IF_HANDLE IfSpec,
    _In_opt_ UUID * MgrTypeUuid,
    _In_opt_ RPC_MGR_EPV * MgrEpv,
    _In_ unsigned int Flags,
    _In_ unsigned int MaxCalls,
    _In_ unsigned int MaxRpcSize,
    _In_opt_ RPC_IF_CALLBACK_FN *IfCallbackFn
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcServerRegisterIf3 (
    _In_ RPC_IF_HANDLE IfSpec,
    _In_opt_ UUID __RPC_FAR * MgrTypeUuid,
    _In_opt_ RPC_MGR_EPV __RPC_FAR * MgrEpv,
    _In_ unsigned int Flags,
    _In_ unsigned int MaxCalls,
    _In_ unsigned int MaxRpcSize,
    _In_opt_ RPC_IF_CALLBACK_FN __RPC_FAR *IfCallback,
    _In_opt_ void __RPC_FAR * SecurityDescriptor
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerUnregisterIf (
    _In_opt_ RPC_IF_HANDLE IfSpec,
    _In_opt_ UUID __RPC_FAR * MgrTypeUuid,
    _In_ unsigned int WaitForCallsToComplete
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcServerUnregisterIfEx (
    _In_opt_ RPC_IF_HANDLE IfSpec,
    _In_opt_ UUID __RPC_FAR * MgrTypeUuid,
    _In_ int RundownContextHandles
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerUseAllProtseqs (
    _In_ unsigned int MaxCalls,
    _In_opt_ void __RPC_FAR * SecurityDescriptor
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerUseAllProtseqsEx (
    _In_ unsigned int MaxCalls,
    _In_opt_ void __RPC_FAR * SecurityDescriptor,
    _In_ PRPC_POLICY Policy
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerUseAllProtseqsIf (
    _In_ unsigned int MaxCalls,
    _In_ RPC_IF_HANDLE IfSpec,
    _In_opt_ void __RPC_FAR * SecurityDescriptor
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerUseAllProtseqsIfEx (
    _In_ unsigned int MaxCalls,
    _In_ RPC_IF_HANDLE IfSpec,
    _In_opt_ void __RPC_FAR * SecurityDescriptor,
    _In_ PRPC_POLICY Policy
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerUseProtseqA (
    _In_ RPC_CSTR Protseq,
    _In_ unsigned int MaxCalls,
    _In_opt_ void __RPC_FAR * SecurityDescriptor
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerUseProtseqExA (
    _In_ RPC_CSTR Protseq,
    _In_ unsigned int MaxCalls,
    _In_opt_ void __RPC_FAR * SecurityDescriptor,
    _In_ PRPC_POLICY Policy
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerUseProtseqW (
    _In_ RPC_WSTR Protseq,
    _In_ unsigned int MaxCalls,
    _In_opt_ void __RPC_FAR * SecurityDescriptor
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerUseProtseqExW (
    _In_ RPC_WSTR Protseq,
    _In_ unsigned int MaxCalls,
    _In_opt_ void __RPC_FAR * SecurityDescriptor,
    _In_ PRPC_POLICY Policy
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerUseProtseqEpA (
    _In_ RPC_CSTR Protseq,
    _In_ unsigned int MaxCalls,
    _In_ RPC_CSTR Endpoint,
    _In_opt_ void __RPC_FAR * SecurityDescriptor
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerUseProtseqEpExA (
    _In_ RPC_CSTR Protseq,
    _In_ unsigned int MaxCalls,
    _In_ RPC_CSTR Endpoint,
    _In_opt_ void __RPC_FAR * SecurityDescriptor,
    _In_ PRPC_POLICY Policy
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerUseProtseqEpW (
    _In_ RPC_WSTR Protseq,
    _In_ unsigned int MaxCalls,
    _In_ RPC_WSTR Endpoint,
    _In_opt_ void __RPC_FAR * SecurityDescriptor
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerUseProtseqEpExW (
    _In_ RPC_WSTR Protseq,
    _In_ unsigned int MaxCalls,
    _In_ RPC_WSTR Endpoint,
    _In_opt_ void __RPC_FAR * SecurityDescriptor,
    _In_ PRPC_POLICY Policy
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerUseProtseqIfA (
    _In_ RPC_CSTR Protseq,
    _In_ unsigned int MaxCalls,
    _In_ RPC_IF_HANDLE IfSpec,
    _In_opt_ void __RPC_FAR * SecurityDescriptor
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerUseProtseqIfExA (
    _In_ RPC_CSTR Protseq,
    _In_ unsigned int MaxCalls,
    _In_ RPC_IF_HANDLE IfSpec,
    _In_opt_ void __RPC_FAR * SecurityDescriptor,
    _In_ PRPC_POLICY Policy
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerUseProtseqIfW (
    _In_ RPC_WSTR Protseq,
    _In_ unsigned int MaxCalls,
    _In_ RPC_IF_HANDLE IfSpec,
    _In_opt_ void __RPC_FAR * SecurityDescriptor
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerUseProtseqIfExW (
    _In_ RPC_WSTR Protseq,
    _In_ unsigned int MaxCalls,
    _In_ RPC_IF_HANDLE IfSpec,
    _In_opt_ void __RPC_FAR * SecurityDescriptor,
    _In_ PRPC_POLICY Policy
    );
RPCRTAPI
void
RPC_ENTRY
RpcServerYield (
    void
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcMgmtStatsVectorFree (
    _Inout_ RPC_STATS_VECTOR ** StatsVector
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtInqStats (
    _In_opt_ RPC_BINDING_HANDLE Binding,
    _Outptr_ RPC_STATS_VECTOR ** Statistics
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtIsServerListening (
    _In_opt_ RPC_BINDING_HANDLE Binding
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtStopServerListening (
    _In_opt_ RPC_BINDING_HANDLE Binding
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtWaitServerListen (
    void
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtSetServerStackSize (
    _In_ unsigned long ThreadStackSize
    );
RPCRTAPI
void
RPC_ENTRY
RpcSsDontSerializeContext (
    void
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtEnableIdleCleanup (
    void
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtInqIfIds (
    _In_opt_ RPC_BINDING_HANDLE Binding,
    _Outptr_ RPC_IF_ID_VECTOR __RPC_FAR * __RPC_FAR * IfIdVector
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcIfIdVectorFree (
    _Inout_ RPC_IF_ID_VECTOR __RPC_FAR * __RPC_FAR * IfIdVector
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtInqServerPrincNameA (
    _In_opt_ RPC_BINDING_HANDLE Binding,
    _In_ unsigned long AuthnSvc,
    _Outptr_ RPC_CSTR __RPC_FAR * ServerPrincName
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtInqServerPrincNameW (
    _In_opt_ RPC_BINDING_HANDLE Binding,
    _In_ unsigned long AuthnSvc,
    _Outptr_ RPC_WSTR __RPC_FAR * ServerPrincName
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerInqDefaultPrincNameA (
    _In_ unsigned long AuthnSvc,
    _Outptr_ RPC_CSTR __RPC_FAR * PrincName
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerInqDefaultPrincNameW (
    _In_ unsigned long AuthnSvc,
    _Outptr_ RPC_WSTR __RPC_FAR * PrincName
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcEpResolveBinding (
    _In_ RPC_BINDING_HANDLE Binding,
    _In_ RPC_IF_HANDLE IfSpec
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcNsBindingInqEntryNameA (
    _In_ RPC_BINDING_HANDLE Binding,
    _In_ unsigned long EntryNameSyntax,
    _Outptr_ RPC_CSTR __RPC_FAR * EntryName
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcNsBindingInqEntryNameW (
    _In_ RPC_BINDING_HANDLE Binding,
    _In_ unsigned long EntryNameSyntax,
    _Outptr_ RPC_WSTR __RPC_FAR * EntryName
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef void __RPC_FAR * RPC_AUTH_IDENTITY_HANDLE;
typedef void __RPC_FAR * RPC_AUTHZ_HANDLE;
typedef struct _RPC_SECURITY_QOS {
  unsigned long Version;
  unsigned long Capabilities;
  unsigned long IdentityTracking;
  unsigned long ImpersonationType;
} RPC_SECURITY_QOS, *PRPC_SECURITY_QOS;
typedef struct _SEC_WINNT_AUTH_IDENTITY_W {
  _Field_size_bytes_((UserLength+1)*sizeof(WCHAR)) unsigned short __RPC_FAR *User;
  unsigned long UserLength;
  _Field_size_bytes_((DomainLength+1)*sizeof(WCHAR)) unsigned short __RPC_FAR *Domain;
  unsigned long DomainLength;
  _Field_size_bytes_((PasswordLength+1)*sizeof(WCHAR)) unsigned short __RPC_FAR *Password;
  unsigned long PasswordLength;
  unsigned long Flags;
} SEC_WINNT_AUTH_IDENTITY_W, *PSEC_WINNT_AUTH_IDENTITY_W;
typedef struct _SEC_WINNT_AUTH_IDENTITY_A {
  _Field_size_(UserLength+1) unsigned char __RPC_FAR *User;
  unsigned long UserLength;
  _Field_size_(DomainLength+1) unsigned char __RPC_FAR *Domain;
  unsigned long DomainLength;
  _Field_size_(PasswordLength+1) unsigned char __RPC_FAR *Password;
  unsigned long PasswordLength;
  unsigned long Flags;
} SEC_WINNT_AUTH_IDENTITY_A, *PSEC_WINNT_AUTH_IDENTITY_A;
typedef struct _RPC_HTTP_TRANSPORT_CREDENTIALS_W
{
    SEC_WINNT_AUTH_IDENTITY_W *TransportCredentials;
    unsigned long Flags;
    unsigned long AuthenticationTarget;
    unsigned long NumberOfAuthnSchemes;
    unsigned long *AuthnSchemes;
    unsigned short __RPC_FAR *ServerCertificateSubject;
} RPC_HTTP_TRANSPORT_CREDENTIALS_W, *PRPC_HTTP_TRANSPORT_CREDENTIALS_W;
typedef struct _RPC_HTTP_TRANSPORT_CREDENTIALS_A
{
    SEC_WINNT_AUTH_IDENTITY_A *TransportCredentials;
    unsigned long Flags;
    unsigned long AuthenticationTarget;
    unsigned long NumberOfAuthnSchemes;
    unsigned long *AuthnSchemes;
    unsigned char __RPC_FAR *ServerCertificateSubject;
} RPC_HTTP_TRANSPORT_CREDENTIALS_A, *PRPC_HTTP_TRANSPORT_CREDENTIALS_A;
typedef struct _RPC_HTTP_TRANSPORT_CREDENTIALS_V2_W
{
    SEC_WINNT_AUTH_IDENTITY_W *TransportCredentials;
    unsigned long Flags;
    unsigned long AuthenticationTarget;
    unsigned long NumberOfAuthnSchemes;
    _Field_size_(NumberOfAuthnSchemes) unsigned long *AuthnSchemes;
    unsigned short __RPC_FAR *ServerCertificateSubject;
    SEC_WINNT_AUTH_IDENTITY_W *ProxyCredentials;
    unsigned long NumberOfProxyAuthnSchemes;
    _Field_size_(NumberOfProxyAuthnSchemes) unsigned long *ProxyAuthnSchemes;
} RPC_HTTP_TRANSPORT_CREDENTIALS_V2_W, *PRPC_HTTP_TRANSPORT_CREDENTIALS_V2_W;
typedef struct _RPC_HTTP_TRANSPORT_CREDENTIALS_V2_A
{
    SEC_WINNT_AUTH_IDENTITY_A *TransportCredentials;
    unsigned long Flags;
    unsigned long AuthenticationTarget;
    unsigned long NumberOfAuthnSchemes;
    unsigned long *AuthnSchemes;
    unsigned char __RPC_FAR *ServerCertificateSubject;
    SEC_WINNT_AUTH_IDENTITY_A *ProxyCredentials;
    unsigned long NumberOfProxyAuthnSchemes;
    unsigned long *ProxyAuthnSchemes;
} RPC_HTTP_TRANSPORT_CREDENTIALS_V2_A, *PRPC_HTTP_TRANSPORT_CREDENTIALS_V2_A;
typedef struct _RPC_HTTP_TRANSPORT_CREDENTIALS_V3_W
{
    RPC_AUTH_IDENTITY_HANDLE TransportCredentials;
    unsigned long Flags;
    unsigned long AuthenticationTarget;
    unsigned long NumberOfAuthnSchemes;
    _Field_size_(NumberOfAuthnSchemes) unsigned long *AuthnSchemes;
    unsigned short __RPC_FAR *ServerCertificateSubject;
    RPC_AUTH_IDENTITY_HANDLE ProxyCredentials;
    unsigned long NumberOfProxyAuthnSchemes;
    _Field_size_(NumberOfProxyAuthnSchemes) unsigned long *ProxyAuthnSchemes;
} RPC_HTTP_TRANSPORT_CREDENTIALS_V3_W, *PRPC_HTTP_TRANSPORT_CREDENTIALS_V3_W;
typedef struct _RPC_HTTP_TRANSPORT_CREDENTIALS_V3_A
{
    RPC_AUTH_IDENTITY_HANDLE TransportCredentials;
    unsigned long Flags;
    unsigned long AuthenticationTarget;
    unsigned long NumberOfAuthnSchemes;
    _Field_size_(NumberOfAuthnSchemes) unsigned long *AuthnSchemes;
    unsigned char __RPC_FAR *ServerCertificateSubject;
    RPC_AUTH_IDENTITY_HANDLE ProxyCredentials;
    unsigned long NumberOfProxyAuthnSchemes;
    _Field_size_(NumberOfProxyAuthnSchemes) unsigned long *ProxyAuthnSchemes;
} RPC_HTTP_TRANSPORT_CREDENTIALS_V3_A, *PRPC_HTTP_TRANSPORT_CREDENTIALS_V3_A;
typedef struct _RPC_SECURITY_QOS_V2_W {
  unsigned long Version;
  unsigned long Capabilities;
  unsigned long IdentityTracking;
  unsigned long ImpersonationType;
  unsigned long AdditionalSecurityInfoType;
  union
      {
      RPC_HTTP_TRANSPORT_CREDENTIALS_W *HttpCredentials;
      } u;
} RPC_SECURITY_QOS_V2_W, *PRPC_SECURITY_QOS_V2_W;
typedef struct _RPC_SECURITY_QOS_V2_A {
  unsigned long Version;
  unsigned long Capabilities;
  unsigned long IdentityTracking;
  unsigned long ImpersonationType;
  unsigned long AdditionalSecurityInfoType;
  union
      {
      RPC_HTTP_TRANSPORT_CREDENTIALS_A *HttpCredentials;
      } u;
} RPC_SECURITY_QOS_V2_A, *PRPC_SECURITY_QOS_V2_A;
typedef struct _RPC_SECURITY_QOS_V3_W {
  unsigned long Version;
  unsigned long Capabilities;
  unsigned long IdentityTracking;
  unsigned long ImpersonationType;
  unsigned long AdditionalSecurityInfoType;
  union
      {
      RPC_HTTP_TRANSPORT_CREDENTIALS_W *HttpCredentials;
      } u;
  void *Sid;
} RPC_SECURITY_QOS_V3_W, *PRPC_SECURITY_QOS_V3_W;
typedef struct _RPC_SECURITY_QOS_V3_A {
  unsigned long Version;
  unsigned long Capabilities;
  unsigned long IdentityTracking;
  unsigned long ImpersonationType;
  unsigned long AdditionalSecurityInfoType;
  union
      {
      RPC_HTTP_TRANSPORT_CREDENTIALS_A *HttpCredentials;
      } u;
  void *Sid;
} RPC_SECURITY_QOS_V3_A, *PRPC_SECURITY_QOS_V3_A;
typedef struct _RPC_SECURITY_QOS_V4_W {
  unsigned long Version;
  unsigned long Capabilities;
  unsigned long IdentityTracking;
  unsigned long ImpersonationType;
  unsigned long AdditionalSecurityInfoType;
  union
      {
      RPC_HTTP_TRANSPORT_CREDENTIALS_W *HttpCredentials;
      } u;
  void *Sid;
  unsigned int EffectiveOnly;
} RPC_SECURITY_QOS_V4_W, *PRPC_SECURITY_QOS_V4_W;
typedef struct _RPC_SECURITY_QOS_V4_A {
  unsigned long Version;
  unsigned long Capabilities;
  unsigned long IdentityTracking;
  unsigned long ImpersonationType;
  unsigned long AdditionalSecurityInfoType;
  union
      {
      RPC_HTTP_TRANSPORT_CREDENTIALS_A *HttpCredentials;
      } u;
  void *Sid;
  unsigned int EffectiveOnly;
} RPC_SECURITY_QOS_V4_A, *PRPC_SECURITY_QOS_V4_A;
typedef struct _RPC_SECURITY_QOS_V5_W {
  unsigned long Version;
  unsigned long Capabilities;
  unsigned long IdentityTracking;
  unsigned long ImpersonationType;
  unsigned long AdditionalSecurityInfoType;
  union
      {
      RPC_HTTP_TRANSPORT_CREDENTIALS_W *HttpCredentials;
      } u;
  void *Sid;
  unsigned int EffectiveOnly;
  void *ServerSecurityDescriptor;
} RPC_SECURITY_QOS_V5_W, *PRPC_SECURITY_QOS_V5_W;
typedef struct _RPC_SECURITY_QOS_V5_A {
  unsigned long Version;
  unsigned long Capabilities;
  unsigned long IdentityTracking;
  unsigned long ImpersonationType;
  unsigned long AdditionalSecurityInfoType;
  union
      {
      RPC_HTTP_TRANSPORT_CREDENTIALS_A *HttpCredentials;
      } u;
  void *Sid;
  unsigned int EffectiveOnly;
  void *ServerSecurityDescriptor;
} RPC_SECURITY_QOS_V5_A, *PRPC_SECURITY_QOS_V5_A;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct _RPC_BINDING_HANDLE_TEMPLATE_V1_W {
    unsigned long Version;
    unsigned long Flags;
    unsigned long ProtocolSequence;
    unsigned short *NetworkAddress;
    unsigned short *StringEndpoint;
    union
    {
        unsigned short *Reserved;
    } u1;
    UUID ObjectUuid;
} RPC_BINDING_HANDLE_TEMPLATE_V1_W, *PRPC_BINDING_HANDLE_TEMPLATE_V1_W;
typedef struct _RPC_BINDING_HANDLE_TEMPLATE_V1_A {
    unsigned long Version;
    unsigned long Flags;
    unsigned long ProtocolSequence;
    unsigned char *NetworkAddress;
    unsigned char *StringEndpoint;
    union
    {
        unsigned char *Reserved;
    } u1;
    UUID ObjectUuid;
} RPC_BINDING_HANDLE_TEMPLATE_V1_A, *PRPC_BINDING_HANDLE_TEMPLATE_V1_A;
typedef struct _RPC_BINDING_HANDLE_SECURITY_V1_W {
    unsigned long Version;
    unsigned short *ServerPrincName;
    unsigned long AuthnLevel;
    unsigned long AuthnSvc;
    SEC_WINNT_AUTH_IDENTITY_W *AuthIdentity;
    RPC_SECURITY_QOS *SecurityQos;
} RPC_BINDING_HANDLE_SECURITY_V1_W, *PRPC_BINDING_HANDLE_SECURITY_V1_W;
typedef struct _RPC_BINDING_HANDLE_SECURITY_V1_A {
    unsigned long Version;
    unsigned char *ServerPrincName;
    unsigned long AuthnLevel;
    unsigned long AuthnSvc;
    SEC_WINNT_AUTH_IDENTITY_A *AuthIdentity;
    RPC_SECURITY_QOS *SecurityQos;
} RPC_BINDING_HANDLE_SECURITY_V1_A, *PRPC_BINDING_HANDLE_SECURITY_V1_A;
typedef struct _RPC_BINDING_HANDLE_OPTIONS_V1 {
    unsigned long Version;
    unsigned long Flags;
    unsigned long ComTimeout;
    unsigned long CallTimeout;
} RPC_BINDING_HANDLE_OPTIONS_V1, *PRPC_BINDING_HANDLE_OPTIONS_V1;
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcBindingCreateA (
    _In_ RPC_BINDING_HANDLE_TEMPLATE_V1_A * Template,
    _In_opt_ RPC_BINDING_HANDLE_SECURITY_V1_A * Security,
    _In_opt_ RPC_BINDING_HANDLE_OPTIONS_V1 * Options,
    _Out_ RPC_BINDING_HANDLE * Binding
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcBindingCreateW (
    _In_ RPC_BINDING_HANDLE_TEMPLATE_V1_W * Template,
    _In_opt_ RPC_BINDING_HANDLE_SECURITY_V1_W * Security,
    _In_opt_ RPC_BINDING_HANDLE_OPTIONS_V1 * Options,
    _Out_ RPC_BINDING_HANDLE * Binding
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcBindingGetTrainingContextHandle (
    _In_ RPC_BINDING_HANDLE Binding,
    _Outptr_ void ** ContextHandle
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcServerInqBindingHandle (
    _Out_ RPC_BINDING_HANDLE * Binding
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef enum _RPC_HTTP_REDIRECTOR_STAGE
{
    RPCHTTP_RS_REDIRECT = 1,
    RPCHTTP_RS_ACCESS_1,
    RPCHTTP_RS_SESSION,
    RPCHTTP_RS_ACCESS_2,
    RPCHTTP_RS_INTERFACE
} RPC_HTTP_REDIRECTOR_STAGE;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef RPC_STATUS
(__RPC_USER * RPC_NEW_HTTP_PROXY_CHANNEL) (
    _In_ RPC_HTTP_REDIRECTOR_STAGE RedirectorStage,
    _In_ RPC_WSTR ServerName,
    _In_ RPC_WSTR ServerPort,
    _In_opt_ RPC_WSTR RemoteUser,
    _In_opt_ RPC_WSTR AuthType,
    _Inout_ void __RPC_FAR * ResourceUuid,
    _Inout_ void __RPC_FAR * SessionId,
    _In_opt_ void __RPC_FAR * Interface,
    _In_opt_ void __RPC_FAR * Reserved,
    _In_ unsigned long Flags,
    _Outptr_opt_ RPC_WSTR __RPC_FAR * NewServerName,
    _Outptr_opt_ RPC_WSTR __RPC_FAR * NewServerPort
    );
typedef void
(__RPC_USER * RPC_HTTP_PROXY_FREE_STRING) (
    _In_ RPC_WSTR String
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcImpersonateClient (
    _In_opt_ RPC_BINDING_HANDLE BindingHandle
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcImpersonateClient2 (
    _In_opt_ RPC_BINDING_HANDLE BindingHandle
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcRevertToSelfEx (
    _In_opt_ RPC_BINDING_HANDLE BindingHandle
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcRevertToSelf (
    void
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcImpersonateClientContainer (
    _In_opt_ RPC_BINDING_HANDLE BindingHandle
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcRevertContainerImpersonation (
    void
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingInqAuthClientA (
    _In_opt_ RPC_BINDING_HANDLE ClientBinding,
    _Out_ RPC_AUTHZ_HANDLE __RPC_FAR * Privs,
    _Outptr_opt_ RPC_CSTR __RPC_FAR * ServerPrincName,
    _Out_opt_ unsigned long __RPC_FAR * AuthnLevel,
    _Out_opt_ unsigned long __RPC_FAR * AuthnSvc,
    _Out_opt_ unsigned long __RPC_FAR * AuthzSvc
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingInqAuthClientW (
    _In_opt_ RPC_BINDING_HANDLE ClientBinding,
    _Out_ RPC_AUTHZ_HANDLE __RPC_FAR * Privs,
    _Outptr_opt_ RPC_WSTR __RPC_FAR * ServerPrincName,
    _Out_opt_ unsigned long __RPC_FAR * AuthnLevel,
    _Out_opt_ unsigned long __RPC_FAR * AuthnSvc,
    _Out_opt_ unsigned long __RPC_FAR * AuthzSvc
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcBindingInqAuthClientExA (
    _In_opt_ RPC_BINDING_HANDLE ClientBinding,
    _Out_ RPC_AUTHZ_HANDLE __RPC_FAR * Privs,
    _Outptr_opt_ RPC_CSTR __RPC_FAR * ServerPrincName,
    _Out_opt_ unsigned long __RPC_FAR * AuthnLevel,
    _Out_opt_ unsigned long __RPC_FAR * AuthnSvc,
    _Out_opt_ unsigned long __RPC_FAR * AuthzSvc,
    _In_ unsigned long Flags
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcBindingInqAuthClientExW (
    _In_opt_ RPC_BINDING_HANDLE ClientBinding,
    _Out_ RPC_AUTHZ_HANDLE __RPC_FAR * Privs,
    _Outptr_opt_ RPC_WSTR __RPC_FAR * ServerPrincName,
    _Out_opt_ unsigned long __RPC_FAR * AuthnLevel,
    _Out_opt_ unsigned long __RPC_FAR * AuthnSvc,
    _Out_opt_ unsigned long __RPC_FAR * AuthzSvc,
    _In_ unsigned long Flags
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingInqAuthInfoA (
    _In_ RPC_BINDING_HANDLE Binding,
    _Outptr_opt_ RPC_CSTR __RPC_FAR * ServerPrincName,
    _Out_opt_ unsigned long __RPC_FAR * AuthnLevel,
    _Out_opt_ unsigned long __RPC_FAR * AuthnSvc,
    _Out_opt_ RPC_AUTH_IDENTITY_HANDLE __RPC_FAR * AuthIdentity,
    _Out_opt_ unsigned long __RPC_FAR * AuthzSvc
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingInqAuthInfoW (
    _In_ RPC_BINDING_HANDLE Binding,
    _Outptr_opt_ RPC_WSTR __RPC_FAR * ServerPrincName,
    _Out_opt_ unsigned long __RPC_FAR * AuthnLevel,
    _Out_opt_ unsigned long __RPC_FAR * AuthnSvc,
    _Out_opt_ RPC_AUTH_IDENTITY_HANDLE __RPC_FAR * AuthIdentity,
    _Out_opt_ unsigned long __RPC_FAR * AuthzSvc
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingSetAuthInfoA (
    _In_ RPC_BINDING_HANDLE Binding,
    _In_opt_ RPC_CSTR ServerPrincName,
    _In_ unsigned long AuthnLevel,
    _In_ unsigned long AuthnSvc,
    _In_opt_ RPC_AUTH_IDENTITY_HANDLE AuthIdentity,
    _In_ unsigned long AuthzSvc
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingSetAuthInfoExA (
    _In_ RPC_BINDING_HANDLE Binding,
    _In_opt_ RPC_CSTR ServerPrincName,
    _In_ unsigned long AuthnLevel,
    _In_ unsigned long AuthnSvc,
    _In_opt_ RPC_AUTH_IDENTITY_HANDLE AuthIdentity,
    _In_ unsigned long AuthzSvc,
    _In_opt_ RPC_SECURITY_QOS * SecurityQos
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingSetAuthInfoW (
    _In_ RPC_BINDING_HANDLE Binding,
    _In_opt_ RPC_WSTR ServerPrincName,
    _In_ unsigned long AuthnLevel,
    _In_ unsigned long AuthnSvc,
    _In_opt_ RPC_AUTH_IDENTITY_HANDLE AuthIdentity,
    _In_ unsigned long AuthzSvc
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingSetAuthInfoExW (
    _In_ RPC_BINDING_HANDLE Binding,
    _In_opt_ RPC_WSTR ServerPrincName,
    _In_ unsigned long AuthnLevel,
    _In_ unsigned long AuthnSvc,
    _In_opt_ RPC_AUTH_IDENTITY_HANDLE AuthIdentity,
    _In_ unsigned long AuthzSvc,
    _In_opt_ RPC_SECURITY_QOS * SecurityQOS
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingInqAuthInfoExA (
    _In_ RPC_BINDING_HANDLE Binding,
    _Outptr_opt_ RPC_CSTR __RPC_FAR * ServerPrincName,
    _Out_opt_ unsigned long __RPC_FAR * AuthnLevel,
    _Out_opt_ unsigned long __RPC_FAR * AuthnSvc,
    _Out_opt_ RPC_AUTH_IDENTITY_HANDLE __RPC_FAR * AuthIdentity,
    _Out_opt_ unsigned long __RPC_FAR * AuthzSvc,
    _In_ unsigned long RpcQosVersion,
    _Out_opt_ RPC_SECURITY_QOS *SecurityQOS
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingInqAuthInfoExW (
    _In_ RPC_BINDING_HANDLE Binding,
    _Outptr_opt_ RPC_WSTR __RPC_FAR * ServerPrincName,
    _Out_opt_ unsigned long __RPC_FAR * AuthnLevel,
    _Out_opt_ unsigned long __RPC_FAR * AuthnSvc,
    _Out_opt_ RPC_AUTH_IDENTITY_HANDLE __RPC_FAR * AuthIdentity,
    _Out_opt_ unsigned long __RPC_FAR * AuthzSvc,
    _In_ unsigned long RpcQosVersion,
    _Out_opt_ RPC_SECURITY_QOS * SecurityQOS
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef void
(__RPC_USER * RPC_AUTH_KEY_RETRIEVAL_FN) (
    _In_ void __RPC_FAR * Arg,
    _In_ RPC_WSTR ServerPrincName,
    _In_ unsigned long KeyVer,
    _Outptr_ void __RPC_FAR * __RPC_FAR * Key,
    _Out_ RPC_STATUS __RPC_FAR * Status
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcServerCompleteSecurityCallback(
    _In_ RPC_BINDING_HANDLE BindingHandle,
    _In_ RPC_STATUS Status
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerRegisterAuthInfoA (
    _In_opt_ RPC_CSTR ServerPrincName,
    _In_ unsigned long AuthnSvc,
    _In_opt_ RPC_AUTH_KEY_RETRIEVAL_FN GetKeyFn,
    _In_opt_ void __RPC_FAR * Arg
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerRegisterAuthInfoW (
    _In_opt_ RPC_WSTR ServerPrincName,
    _In_ unsigned long AuthnSvc,
    _In_opt_ RPC_AUTH_KEY_RETRIEVAL_FN GetKeyFn,
    _In_opt_ void __RPC_FAR * Arg
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct {
    unsigned char __RPC_FAR * UserName;
    unsigned char __RPC_FAR * ComputerName;
    unsigned short Privilege;
    unsigned long AuthFlags;
} RPC_CLIENT_INFORMATION1, __RPC_FAR * PRPC_CLIENT_INFORMATION1;
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcBindingServerFromClient (
    _In_opt_ RPC_BINDING_HANDLE ClientBinding,
    _Out_ RPC_BINDING_HANDLE __RPC_FAR * ServerBinding
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
DECLSPEC_NORETURN
void
RPC_ENTRY
RpcRaiseException (
    _In_ RPC_STATUS exception
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcTestCancel(
    void
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcServerTestCancel (
    _In_opt_ RPC_BINDING_HANDLE BindingHandle
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcCancelThread(
    _In_ void * Thread
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcCancelThreadEx(
    _In_ void * Thread,
    _In_ long Timeout
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
UuidCreate (
    _Out_ UUID __RPC_FAR * Uuid
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
UuidCreateSequential (
    _Out_ UUID __RPC_FAR * Uuid
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
UuidToStringA (
    _In_ const UUID __RPC_FAR * Uuid,
    _Outptr_ RPC_CSTR __RPC_FAR * StringUuid
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
UuidFromStringA (
    _In_opt_ RPC_CSTR StringUuid,
    _Out_ UUID __RPC_FAR * Uuid
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
UuidToStringW (
    _In_ const UUID __RPC_FAR * Uuid,
    _Outptr_ RPC_WSTR __RPC_FAR * StringUuid
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
UuidFromStringW (
    _In_opt_ RPC_WSTR StringUuid,
    _Out_ UUID __RPC_FAR * Uuid
    );
RPCRTAPI
signed int
RPC_ENTRY
UuidCompare (
    _In_ UUID __RPC_FAR * Uuid1,
    _In_ UUID __RPC_FAR * Uuid2,
    _Out_ RPC_STATUS __RPC_FAR * Status
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
UuidCreateNil (
    _Out_ UUID __RPC_FAR * NilUuid
    );
RPCRTAPI
int
RPC_ENTRY
UuidEqual (
    _In_ UUID __RPC_FAR * Uuid1,
    _In_ UUID __RPC_FAR * Uuid2,
    _Out_ RPC_STATUS __RPC_FAR * Status
    );
RPCRTAPI
unsigned short
RPC_ENTRY
UuidHash (
    _In_ UUID __RPC_FAR * Uuid,
    _Out_ RPC_STATUS __RPC_FAR * Status
    );
RPCRTAPI
int
RPC_ENTRY
UuidIsNil (
    _In_ UUID __RPC_FAR * Uuid,
    _Out_ RPC_STATUS __RPC_FAR * Status
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcEpRegisterNoReplaceA (
    _In_ RPC_IF_HANDLE IfSpec,
    _In_ RPC_BINDING_VECTOR * BindingVector,
    _In_opt_ UUID_VECTOR * UuidVector,
    _In_opt_ RPC_CSTR Annotation
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcEpRegisterNoReplaceW (
    _In_ RPC_IF_HANDLE IfSpec,
    _In_ RPC_BINDING_VECTOR * BindingVector,
    _In_opt_ UUID_VECTOR * UuidVector,
    _In_opt_ RPC_WSTR Annotation
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcEpRegisterA (
    _In_ RPC_IF_HANDLE IfSpec,
    _In_ RPC_BINDING_VECTOR * BindingVector,
    _In_opt_ UUID_VECTOR * UuidVector,
    _In_opt_ RPC_CSTR Annotation
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcEpRegisterW (
    _In_ RPC_IF_HANDLE IfSpec,
    _In_ RPC_BINDING_VECTOR * BindingVector,
    _In_opt_ UUID_VECTOR * UuidVector,
    _In_opt_ RPC_WSTR Annotation
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcEpUnregister(
    _In_ RPC_IF_HANDLE IfSpec,
    _In_ RPC_BINDING_VECTOR * BindingVector,
    _In_opt_ UUID_VECTOR * UuidVector
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
DceErrorInqTextA (
    _In_ RPC_STATUS RpcStatus,
    _Out_writes_(DCE_C_ERROR_STRING_LEN) RPC_CSTR ErrorText
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
DceErrorInqTextW (
    _In_ RPC_STATUS RpcStatus,
    _Out_writes_(DCE_C_ERROR_STRING_LEN) RPC_WSTR ErrorText
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef I_RPC_HANDLE * RPC_EP_INQ_HANDLE;
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtEpEltInqBegin (
    _In_opt_ OPTIONAL RPC_BINDING_HANDLE EpBinding,
    _In_ unsigned long InquiryType,
    _In_opt_ RPC_IF_ID __RPC_FAR * IfId,
    _In_opt_ unsigned long VersOption,
    _In_opt_ UUID __RPC_FAR * ObjectUuid,
    _Out_ RPC_EP_INQ_HANDLE __RPC_FAR * InquiryContext
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtEpEltInqDone (
    _Inout_ RPC_EP_INQ_HANDLE __RPC_FAR * InquiryContext
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtEpEltInqNextA (
    _In_ RPC_EP_INQ_HANDLE InquiryContext,
    _Out_ RPC_IF_ID __RPC_FAR * IfId,
    _Out_opt_ RPC_BINDING_HANDLE __RPC_FAR * Binding,
    _Out_opt_ UUID __RPC_FAR * ObjectUuid,
    _Outptr_opt_ RPC_CSTR __RPC_FAR * Annotation
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtEpEltInqNextW (
    _In_ RPC_EP_INQ_HANDLE InquiryContext,
    _Out_ RPC_IF_ID __RPC_FAR * IfId,
    _Out_opt_ RPC_BINDING_HANDLE __RPC_FAR * Binding,
    _Out_opt_ UUID __RPC_FAR * ObjectUuid,
    _Outptr_opt_ RPC_WSTR __RPC_FAR * Annotation
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtEpUnregister (
    _In_opt_ RPC_BINDING_HANDLE EpBinding,
    _In_ RPC_IF_ID __RPC_FAR * IfId,
    _In_ RPC_BINDING_HANDLE Binding,
    _In_opt_ UUID __RPC_FAR * ObjectUuid
    );
typedef int
(__RPC_API * RPC_MGMT_AUTHORIZATION_FN) (
    _In_ RPC_BINDING_HANDLE ClientBinding,
    _In_ unsigned long RequestedMgmtOperation,
    _Out_ RPC_STATUS __RPC_FAR * Status
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcMgmtSetAuthorizationFn (
    _In_ RPC_MGMT_AUTHORIZATION_FN AuthorizationFn
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
int
RPC_ENTRY
RpcExceptionFilter (
    _In_ unsigned long ExceptionCode
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef void *RPC_INTERFACE_GROUP, **PRPC_INTERFACE_GROUP;
typedef struct
{
    unsigned long Version;
    RPC_WSTR ProtSeq;
    RPC_WSTR Endpoint;
    void * SecurityDescriptor;
    unsigned long Backlog;
} RPC_ENDPOINT_TEMPLATEW, *PRPC_ENDPOINT_TEMPLATEW;
typedef struct
{
    unsigned long Version;
    RPC_CSTR ProtSeq;
    RPC_CSTR Endpoint;
    void * SecurityDescriptor;
    unsigned long Backlog;
} RPC_ENDPOINT_TEMPLATEA, *PRPC_ENDPOINT_TEMPLATEA;
typedef struct
{
    unsigned long Version;
    RPC_IF_HANDLE IfSpec;
    UUID * MgrTypeUuid;
    RPC_MGR_EPV * MgrEpv;
    unsigned int Flags;
    unsigned int MaxCalls;
    unsigned int MaxRpcSize;
    RPC_IF_CALLBACK_FN *IfCallback;
    UUID_VECTOR *UuidVector;
    RPC_CSTR Annotation;
    void * SecurityDescriptor;
} RPC_INTERFACE_TEMPLATEA, *PRPC_INTERFACE_TEMPLATEA;
typedef struct
{
    unsigned long Version;
    RPC_IF_HANDLE IfSpec;
    UUID * MgrTypeUuid;
    RPC_MGR_EPV * MgrEpv;
    unsigned int Flags;
    unsigned int MaxCalls;
    unsigned int MaxRpcSize;
    RPC_IF_CALLBACK_FN *IfCallback;
    UUID_VECTOR *UuidVector;
    RPC_WSTR Annotation;
    void * SecurityDescriptor;
} RPC_INTERFACE_TEMPLATEW, *PRPC_INTERFACE_TEMPLATEW;
typedef void RPC_ENTRY
RPC_INTERFACE_GROUP_IDLE_CALLBACK_FN (
    _In_ RPC_INTERFACE_GROUP IfGroup,
    _In_ void* IdleCallbackContext,
    _In_ unsigned long IsGroupIdle
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcServerInterfaceGroupCreateW (
    _In_reads_(NumIfs) RPC_INTERFACE_TEMPLATEW *Interfaces,
    _In_ unsigned long NumIfs,
    _In_reads_(NumEndpoints) RPC_ENDPOINT_TEMPLATEW *Endpoints,
    _In_ unsigned long NumEndpoints,
    _In_ unsigned long IdlePeriod,
    _In_ RPC_INTERFACE_GROUP_IDLE_CALLBACK_FN IdleCallbackFn,
    _In_ void* IdleCallbackContext,
    _Out_ PRPC_INTERFACE_GROUP IfGroup
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcServerInterfaceGroupCreateA (
    _In_reads_(NumIfs) RPC_INTERFACE_TEMPLATEA *Interfaces,
    _In_ unsigned long NumIfs,
    _In_reads_(NumEndpoints) RPC_ENDPOINT_TEMPLATEA *Endpoints,
    _In_ unsigned long NumEndpoints,
    _In_ unsigned long IdlePeriod,
    _In_ RPC_INTERFACE_GROUP_IDLE_CALLBACK_FN IdleCallbackFn,
    _In_ void* IdleCallbackContext,
    _Out_ PRPC_INTERFACE_GROUP IfGroup
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcServerInterfaceGroupClose (
    _In_ RPC_INTERFACE_GROUP IfGroup
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcServerInterfaceGroupActivate (
    _In_ RPC_INTERFACE_GROUP IfGroup
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcServerInterfaceGroupDeactivate (
    _In_ RPC_INTERFACE_GROUP IfGroup,
    _In_ unsigned long ForceDeactivation
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcServerInterfaceGroupInqBindings (
    _In_ RPC_INTERFACE_GROUP IfGroup,
    _Outptr_ RPC_BINDING_VECTOR __RPC_FAR * __RPC_FAR * BindingVector
    );
#endif
#pragma endregion
#include <rpcdcep.h>
}
