#include <winapifamily.h>
extern "C" {
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef struct _RPC_VERSION {
    unsigned short MajorVersion;
    unsigned short MinorVersion;
} RPC_VERSION;
typedef struct _RPC_SYNTAX_IDENTIFIER {
    GUID SyntaxGUID;
    RPC_VERSION SyntaxVersion;
} RPC_SYNTAX_IDENTIFIER, __RPC_FAR * PRPC_SYNTAX_IDENTIFIER;
typedef struct _RPC_MESSAGE
{
    RPC_BINDING_HANDLE Handle;
    unsigned long DataRepresentation;
    void __RPC_FAR * Buffer;
    unsigned int BufferLength;
    unsigned int ProcNum;
    PRPC_SYNTAX_IDENTIFIER TransferSyntax;
    void __RPC_FAR * RpcInterfaceInformation;
    void __RPC_FAR * ReservedForRuntime;
    RPC_MGR_EPV __RPC_FAR * ManagerEpv;
    void __RPC_FAR * ImportContext;
    unsigned long RpcFlags;
} RPC_MESSAGE, __RPC_FAR * PRPC_MESSAGE;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef RPC_STATUS
RPC_ENTRY RPC_FORWARD_FUNCTION(
                       IN UUID __RPC_FAR * InterfaceId,
                       IN RPC_VERSION __RPC_FAR * InterfaceVersion,
                       IN UUID __RPC_FAR * ObjectId,
                       IN unsigned char __RPC_FAR * Rpcpro,
                       IN void __RPC_FAR * __RPC_FAR * ppDestEndpoint);
enum RPC_ADDRESS_CHANGE_TYPE
{
    PROTOCOL_NOT_LOADED = 1,
    PROTOCOL_LOADED,
    PROTOCOL_ADDRESS_CHANGE
};
typedef void
RPC_ENTRY RPC_ADDRESS_CHANGE_FN(
                        IN void * arg
                        );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef
void
(__RPC_STUB __RPC_FAR * RPC_DISPATCH_FUNCTION) (
    IN OUT PRPC_MESSAGE Message
    );
typedef struct {
    unsigned int DispatchTableCount;
    RPC_DISPATCH_FUNCTION __RPC_FAR * DispatchTable;
    LONG_PTR Reserved;
} RPC_DISPATCH_TABLE, __RPC_FAR * PRPC_DISPATCH_TABLE;
typedef struct _RPC_PROTSEQ_ENDPOINT
{
    unsigned char __RPC_FAR * RpcProtocolSequence;
    unsigned char __RPC_FAR * Endpoint;
} RPC_PROTSEQ_ENDPOINT, __RPC_FAR * PRPC_PROTSEQ_ENDPOINT;
typedef struct _RPC_SERVER_INTERFACE
{
    unsigned int Length;
    RPC_SYNTAX_IDENTIFIER InterfaceId;
    RPC_SYNTAX_IDENTIFIER TransferSyntax;
    PRPC_DISPATCH_TABLE DispatchTable;
    unsigned int RpcProtseqEndpointCount;
    PRPC_PROTSEQ_ENDPOINT RpcProtseqEndpoint;
    RPC_MGR_EPV __RPC_FAR *DefaultManagerEpv;
    void const __RPC_FAR *InterpreterInfo;
    unsigned int Flags ;
} RPC_SERVER_INTERFACE, __RPC_FAR * PRPC_SERVER_INTERFACE;
typedef struct _RPC_CLIENT_INTERFACE
{
    unsigned int Length;
    RPC_SYNTAX_IDENTIFIER InterfaceId;
    RPC_SYNTAX_IDENTIFIER TransferSyntax;
    PRPC_DISPATCH_TABLE DispatchTable;
    unsigned int RpcProtseqEndpointCount;
    PRPC_PROTSEQ_ENDPOINT RpcProtseqEndpoint;
    ULONG_PTR Reserved;
    void const __RPC_FAR * InterpreterInfo;
    unsigned int Flags ;
} RPC_CLIENT_INTERFACE, __RPC_FAR * PRPC_CLIENT_INTERFACE;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcNegotiateTransferSyntax (
    IN OUT RPC_MESSAGE __RPC_FAR * Message
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcGetBuffer (
    IN OUT RPC_MESSAGE __RPC_FAR * Message
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcGetBufferWithObject (
    IN OUT RPC_MESSAGE __RPC_FAR * Message,
    IN UUID * ObjectUuid
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcSendReceive (
    IN OUT RPC_MESSAGE __RPC_FAR * Message
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcFreeBuffer (
    IN OUT RPC_MESSAGE __RPC_FAR * Message
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcSend (
    IN OUT PRPC_MESSAGE Message
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcReceive (
    IN OUT PRPC_MESSAGE Message,
    IN unsigned int Size
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcFreePipeBuffer (
    IN OUT RPC_MESSAGE __RPC_FAR * Message
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcReallocPipeBuffer (
    _In_ PRPC_MESSAGE Message,
     unsigned int NewSize
    );
typedef void * I_RPC_MUTEX;
RPCRTAPI
void
RPC_ENTRY
I_RpcRequestMutex (
    IN OUT I_RPC_MUTEX * Mutex
    );
RPCRTAPI
void
RPC_ENTRY
I_RpcClearMutex (
    IN I_RPC_MUTEX Mutex
    );
RPCRTAPI
void
RPC_ENTRY
I_RpcDeleteMutex (
    IN I_RPC_MUTEX Mutex
    );
RPCRTAPI
void __RPC_FAR *
RPC_ENTRY
I_RpcAllocate (
    IN unsigned int Size
    );
RPCRTAPI
void
RPC_ENTRY
I_RpcFree (
    IN void __RPC_FAR * Object
    );
RPCRTAPI
unsigned long
RPC_ENTRY
I_RpcFreeSystemHandleCollection (
    _Inout_ void * CallObj,
    _In_ unsigned long FreeFlags
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcSetSystemHandle (
    _In_ void * Handle,
    _In_ unsigned char Type,
    _In_ unsigned long AccessMask,
    _Inout_ void * CallObj,
    _Out_ unsigned long * HandleIndex
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcGetSystemHandle (
    _Out_writes_bytes_(sizeof(HANDLE)) unsigned char* pMemory,
    _In_ unsigned char Type,
    _In_ unsigned long AccessMask,
    _In_ unsigned long HandleIndex,
    _Inout_ void * CallObj
    );
RPCRTAPI
void
RPC_ENTRY
I_RpcFreeSystemHandle (
    _In_ unsigned char Type,
    _In_ void * Handle
    );
RPCRTAPI
void
RPC_ENTRY
I_RpcPauseExecution (
    IN unsigned long Milliseconds
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcGetExtendedError (
    void
    );
typedef enum _LRPC_SYSTEM_HANDLE_MARSHAL_DIRECTION
{
    MarshalDirectionMarshal,
    MarshalDirectionUnmarshal
}LRPC_SYSTEM_HANDLE_MARSHAL_DIRECTION;
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcSystemHandleTypeSpecificWork (
    _Inout_ void * Handle,
    _In_ unsigned char ActualType,
    _In_ unsigned char IdlType,
    _In_ LRPC_SYSTEM_HANDLE_MARSHAL_DIRECTION MarshalDirection
    );
typedef
void
(__RPC_USER __RPC_FAR * PRPC_RUNDOWN) (
    void __RPC_FAR * AssociationContext
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcMonitorAssociation (
    IN RPC_BINDING_HANDLE Handle,
    IN PRPC_RUNDOWN RundownRoutine,
    IN void * Context
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcStopMonitorAssociation (
    IN RPC_BINDING_HANDLE Handle
    );
RPCRTAPI
RPC_BINDING_HANDLE
RPC_ENTRY
I_RpcGetCurrentCallHandle(
    void
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcGetAssociationContext (
    IN RPC_BINDING_HANDLE BindingHandle,
    OUT void __RPC_FAR * __RPC_FAR * AssociationContext
    );
RPCRTAPI
void *
RPC_ENTRY
I_RpcGetServerContextList (
    IN RPC_BINDING_HANDLE BindingHandle
    );
RPCRTAPI
void
RPC_ENTRY
I_RpcSetServerContextList (
    IN RPC_BINDING_HANDLE BindingHandle,
    OUT void * ServerContextList
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcNsInterfaceExported (
    IN unsigned long EntryNameSyntax,
    IN unsigned short *EntryName,
    IN RPC_SERVER_INTERFACE * RpcInterfaceInformation
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcNsInterfaceUnexported (
    IN unsigned long EntryNameSyntax,
    IN unsigned short *EntryName,
    IN RPC_SERVER_INTERFACE * RpcInterfaceInformation
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcBindingToStaticStringBindingW (
    IN RPC_BINDING_HANDLE Binding,
    OUT unsigned short **StringBinding
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcBindingInqSecurityContext (
    IN RPC_BINDING_HANDLE Binding,
    OUT void **SecurityContextHandle
    );
typedef struct _RPC_SEC_CONTEXT_KEY_INFO
{
    unsigned long EncryptAlgorithm;
    unsigned long KeySize;
    unsigned long SignatureAlgorithm;
}
RPC_SEC_CONTEXT_KEY_INFO, *PRPC_SEC_CONTEXT_KEY_INFO;
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcBindingInqSecurityContextKeyInfo (
    _In_opt_ RPC_BINDING_HANDLE Binding,
    _Inout_ void *KeyInfo
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcBindingInqWireIdForSnego (
    _In_ RPC_BINDING_HANDLE Binding,
    _Out_ unsigned char * WireId
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcBindingInqMarshalledTargetInfo (
    _In_ RPC_BINDING_HANDLE Binding,
    _Out_ unsigned long * MarshalledTargetInfoSize,
    _Outptr_result_bytebuffer_(* MarshalledTargetInfoSize) RPC_CSTR * MarshalledTargetInfo
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcBindingInqLocalClientPID (
    IN RPC_BINDING_HANDLE Binding,
    OUT unsigned long *Pid
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcBindingHandleToAsyncHandle (
    IN RPC_BINDING_HANDLE Binding,
    OUT void **AsyncHandle
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcNsBindingSetEntryNameW (
    _In_ RPC_BINDING_HANDLE Binding,
    _In_ unsigned long EntryNameSyntax,
    _In_ RPC_WSTR EntryName
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcNsBindingSetEntryNameA (
    _In_ RPC_BINDING_HANDLE Binding,
    _In_ unsigned long EntryNameSyntax,
    _In_ RPC_CSTR EntryName
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcServerUseProtseqEp2A (
    _In_opt_ RPC_CSTR NetworkAddress,
    _In_ RPC_CSTR Protseq,
    _In_ unsigned int MaxCalls,
    _In_ RPC_CSTR Endpoint,
    _In_opt_ void __RPC_FAR * SecurityDescriptor,
    _In_ void * Policy
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcServerUseProtseqEp2W (
    _In_opt_ RPC_WSTR NetworkAddress,
    _In_ RPC_WSTR Protseq,
    _In_ unsigned int MaxCalls,
    _In_ RPC_WSTR Endpoint,
    _In_opt_ void __RPC_FAR * SecurityDescriptor,
    _In_ void * Policy
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcServerUseProtseq2W (
    _In_opt_ RPC_WSTR NetworkAddress,
    _In_ RPC_WSTR Protseq,
    _In_ unsigned int MaxCalls,
    _In_opt_ void __RPC_FAR * SecurityDescriptor,
    _In_ void * Policy
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcServerUseProtseq2A (
    _In_opt_ RPC_CSTR NetworkAddress,
    _In_ RPC_CSTR Protseq,
    _In_ unsigned int MaxCalls,
    _In_opt_ void __RPC_FAR * SecurityDescriptor,
    _In_ void * Policy
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcServerStartService (
    _In_ RPC_WSTR Protseq,
    _In_ RPC_WSTR Endpoint,
    _In_ RPC_IF_HANDLE IfSpec
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcBindingInqDynamicEndpointW (
    _In_ RPC_BINDING_HANDLE Binding,
    _Outptr_result_maybenull_ RPC_WSTR __RPC_FAR *DynamicEndpoint
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcBindingInqDynamicEndpointA (
    _In_ RPC_BINDING_HANDLE Binding,
    _Outptr_result_maybenull_ RPC_CSTR __RPC_FAR *DynamicEndpoint
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcServerCheckClientRestriction (
    IN RPC_BINDING_HANDLE Context
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcBindingInqTransportType (
    IN RPC_BINDING_HANDLE Binding,
    OUT unsigned int __RPC_FAR * Type
    );
typedef struct _RPC_TRANSFER_SYNTAX
{
    UUID Uuid;
    unsigned short VersMajor;
    unsigned short VersMinor;
} RPC_TRANSFER_SYNTAX;
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcIfInqTransferSyntaxes (
    IN RPC_IF_HANDLE RpcIfHandle,
    OUT RPC_TRANSFER_SYNTAX __RPC_FAR * TransferSyntaxes,
    IN unsigned int TransferSyntaxSize,
    OUT unsigned int __RPC_FAR * TransferSyntaxCount
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_UuidCreate (
    OUT UUID __RPC_FAR * Uuid
    );
RPCRTAPI
void
RPC_ENTRY
I_RpcUninitializeNdrOle (
    void
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcBindingCopy (
    IN RPC_BINDING_HANDLE SourceBinding,
    OUT RPC_BINDING_HANDLE __RPC_FAR * DestinationBinding
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcBindingIsClientLocal (
    IN OPTIONAL RPC_BINDING_HANDLE BindingHandle,
    OUT unsigned int __RPC_FAR * ClientLocalFlag
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcBindingInqConnId (
    IN RPC_BINDING_HANDLE Binding,
    OUT void **ConnId,
    OUT int *pfFirstCall
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcBindingCreateNP (
    _In_ RPC_WSTR ServerName,
    _In_ RPC_WSTR ServiceName,
    _In_ RPC_WSTR NetworkOptions,
    _Out_ RPC_BINDING_HANDLE *Binding
    );
RPCRTAPI
void
RPC_ENTRY
I_RpcSsDontSerializeContext (
    void
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcLaunchDatagramReceiveThread(
    void __RPC_FAR * pAddress
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcServerRegisterForwardFunction (
    IN RPC_FORWARD_FUNCTION * pForwardFunction
    );
RPC_ADDRESS_CHANGE_FN * RPC_ENTRY
I_RpcServerInqAddressChangeFn(
    void
    );
RPC_STATUS RPC_ENTRY
I_RpcServerSetAddressChangeFn(
    IN RPC_ADDRESS_CHANGE_FN * pAddressChangeFn
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcServerInqLocalConnAddress (
    IN RPC_BINDING_HANDLE Binding,
    IN OUT void *Buffer,
    IN OUT unsigned long *BufferSize,
    OUT unsigned long *AddressFormat
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcServerInqRemoteConnAddress (
    IN RPC_BINDING_HANDLE Binding,
    IN OUT void *Buffer,
    IN OUT unsigned long *BufferSize,
    OUT unsigned long *AddressFormat
    );
RPCRTAPI
void
RPC_ENTRY
I_RpcSessionStrictContextHandle (
    void
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcTurnOnEEInfoPropagation (
    void
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcConnectionInqSockBuffSize(
  OUT unsigned long __RPC_FAR * RecvBuffSize,
  OUT unsigned long __RPC_FAR * SendBuffSize
  );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcConnectionSetSockBuffSize(
   IN unsigned long RecvBuffSize,
   IN unsigned long SendBuffSize
   );
typedef
void
(*RPCLT_PDU_FILTER_FUNC) (
    IN void *Buffer,
    IN unsigned int BufferLength,
    IN int fDatagram
    );
typedef
void
(__cdecl *RPC_SETFILTER_FUNC) (
    IN RPCLT_PDU_FILTER_FUNC pfnFilter
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcServerStartListening(
    void * hWnd
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcServerStopListening(
    void
    );
typedef RPC_STATUS (*RPC_BLOCKING_FN) (
    IN void * hWnd,
    IN void * Context,
    IN OPTIONAL void * hSyncEvent
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcBindingSetAsync(
    IN RPC_BINDING_HANDLE Binding,
    IN RPC_BLOCKING_FN BlockingFn,
    IN unsigned long ServerTid
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcSetThreadParams(
    IN int fClientFree,
    IN OPTIONAL void *Context,
    IN OPTIONAL void * hWndClient
    );
RPCRTAPI
unsigned int
RPC_ENTRY
I_RpcWindowProc(
    IN void * hWnd,
    IN unsigned int Message,
    IN unsigned int wParam,
    IN unsigned long lParam
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcServerUnregisterEndpointA (
    _In_ RPC_CSTR Protseq,
    _In_ RPC_CSTR Endpoint
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
I_RpcServerUnregisterEndpointW (
    _In_ RPC_WSTR Protseq,
    _In_ RPC_WSTR Endpoint
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcServerInqTransportType(
    OUT unsigned int __RPC_FAR * Type
    );
RPCRTAPI
long
RPC_ENTRY
I_RpcMapWin32Status (
    IN RPC_STATUS Status
    );
typedef struct _RPC_C_OPT_COOKIE_AUTH_DESCRIPTOR
{
    unsigned long BufferSize;
    _Field_size_bytes_(BufferSize) char *Buffer;
} RPC_C_OPT_COOKIE_AUTH_DESCRIPTOR;
typedef struct _RDR_CALLOUT_STATE
{
    RPC_STATUS LastError;
    void *LastEEInfo;
    RPC_HTTP_REDIRECTOR_STAGE LastCalledStage;
    unsigned short *ServerName;
    unsigned short *ServerPort;
    unsigned short *RemoteUser;
    unsigned short *AuthType;
    unsigned char ResourceTypePresent;
    unsigned char SessionIdPresent;
    unsigned char InterfacePresent;
    UUID ResourceType;
    UUID SessionId;
    RPC_SYNTAX_IDENTIFIER Interface;
    void *CertContext;
} RDR_CALLOUT_STATE;
typedef RPC_STATUS
(RPC_ENTRY *I_RpcProxyIsValidMachineFn)
        (
        _In_ RPC_WSTR Machine,
        _In_ RPC_WSTR DotMachine,
        _In_ unsigned long PortNumber
        );
typedef RPC_STATUS
(RPC_ENTRY *I_RpcProxyGetClientAddressFn)
        (
        IN void *Context,
        OUT char *Buffer,
        OUT unsigned long *BufferLength
        );
typedef RPC_STATUS
(RPC_ENTRY *I_RpcProxyGetConnectionTimeoutFn)
        (
        OUT unsigned long *ConnectionTimeout
        );
typedef RPC_STATUS
(RPC_ENTRY *I_RpcPerformCalloutFn)
    (
    IN void *Context,
    IN RDR_CALLOUT_STATE *CallOutState,
    IN RPC_HTTP_REDIRECTOR_STAGE Stage
    );
typedef void
(RPC_ENTRY *I_RpcFreeCalloutStateFn)
    (
    IN RDR_CALLOUT_STATE *CallOutState
    );
typedef RPC_STATUS
(RPC_ENTRY *I_RpcProxyGetClientSessionAndResourceUUID)
        (
        _In_ void *Context,
        _Out_opt_ int *SessionIdPresent,
        _Out_opt_ UUID *SessionId,
        _Out_ int *ResourceIdPresent,
        _Out_ UUID *ResourceId
        );
typedef RPC_STATUS
(RPC_ENTRY *I_RpcProxyFilterIfFn)
    (
    _In_ void *Context,
    _In_ UUID *IfUuid,
    _In_ unsigned short IfMajorVersion,
    _Out_ int *fAllow
    );
typedef enum RpcProxyPerfCounters
{
    RpcCurrentUniqueUser = 1,
    RpcBackEndConnectionAttempts,
    RpcBackEndConnectionFailed,
    RpcRequestsPerSecond,
    RpcIncomingConnections,
    RpcIncomingBandwidth,
    RpcOutgoingBandwidth,
    RpcAttemptedLbsDecisions,
    RpcFailedLbsDecisions,
    RpcAttemptedLbsMessages,
    RpcFailedLbsMessages,
    RpcLastCounter
} RpcPerfCounters;
typedef void
(RPC_ENTRY *I_RpcProxyUpdatePerfCounterFn)
    (
    _In_ RpcPerfCounters Counter,
    _In_ int ModifyTrend,
    _In_ unsigned long Size
    );
 typedef void
(RPC_ENTRY *I_RpcProxyUpdatePerfCounterBackendServerFn)
    (
    _In_ unsigned short* MachineName,
    _In_ int IsConnectEvent
    );
typedef struct tagI_RpcProxyCallbackInterface
{
    I_RpcProxyIsValidMachineFn IsValidMachineFn;
    I_RpcProxyGetClientAddressFn GetClientAddressFn;
    I_RpcProxyGetConnectionTimeoutFn GetConnectionTimeoutFn;
    I_RpcPerformCalloutFn PerformCalloutFn;
    I_RpcFreeCalloutStateFn FreeCalloutStateFn;
    I_RpcProxyGetClientSessionAndResourceUUID GetClientSessionAndResourceUUIDFn;
    I_RpcProxyFilterIfFn ProxyFilterIfFn;
    I_RpcProxyUpdatePerfCounterFn RpcProxyUpdatePerfCounterFn;
    I_RpcProxyUpdatePerfCounterBackendServerFn RpcProxyUpdatePerfCounterBackendServerFn;
} I_RpcProxyCallbackInterface;
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcProxyNewConnection (
    IN unsigned long ConnectionType,
    IN unsigned short *ServerAddress,
    IN unsigned short *ServerPort,
    IN unsigned short *MinConnTimeout,
    IN void *ConnectionParameter,
    IN OPTIONAL RDR_CALLOUT_STATE *CallOutState,
    IN I_RpcProxyCallbackInterface *ProxyCallbackInterface
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcReplyToClientWithStatus (
    IN void *ConnectionParameter,
    IN RPC_STATUS RpcStatus
    );
RPCRTAPI
void
RPC_ENTRY
I_RpcRecordCalloutFailure (
    IN RPC_STATUS RpcStatus,
    IN RDR_CALLOUT_STATE *CallOutState,
    IN unsigned short *DllName
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcMgmtEnableDedicatedThreadPool (
    void
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcGetDefaultSD(
    _Out_ void __RPC_FAR ** ppSecurityDescriptor
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcOpenClientProcess(
    _In_opt_ RPC_BINDING_HANDLE Binding,
    _In_ unsigned long DesiredAccess,
    _Outptr_ void** ClientProcess
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcBindingIsServerLocal(
    _In_ RPC_BINDING_HANDLE Binding,
    _Out_ unsigned int * ServerLocalFlag
    );
RPC_STATUS RPC_ENTRY
I_RpcBindingSetPrivateOption (
    _In_ RPC_BINDING_HANDLE hBinding,
    _In_ unsigned long option,
    _In_ ULONG_PTR optionValue
    );
RPC_STATUS
RPC_ENTRY
I_RpcServerSubscribeForDisconnectNotification (
    _In_opt_ RPC_BINDING_HANDLE Binding,
    _In_opt_ void *hEvent
    );
RPC_STATUS
RPC_ENTRY
I_RpcServerGetAssociationID (
    _In_opt_ RPC_BINDING_HANDLE Binding,
    _Out_ unsigned long *AssociationID
    );
RPCRTAPI
long
RPC_ENTRY
I_RpcServerDisableExceptionFilter (
    void
    );
RPC_STATUS
RPC_ENTRY
I_RpcServerSubscribeForDisconnectNotification2 (
    _In_opt_ RPC_BINDING_HANDLE Binding,
    _In_ void *hEvent,
    _Out_ UUID *SubscriptionId
    );
RPC_STATUS
RPC_ENTRY
I_RpcServerUnsubscribeForDisconnectNotification (
    _In_opt_ RPC_BINDING_HANDLE Binding,
    _In_ UUID SubscriptionId
    );
#endif
#pragma endregion
}
