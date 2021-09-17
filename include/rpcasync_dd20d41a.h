#include <winapifamily.h>
extern "C" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef
enum _RPC_NOTIFICATION_TYPES
{
    RpcNotificationTypeNone,
    RpcNotificationTypeEvent,
    RpcNotificationTypeApc,
    RpcNotificationTypeIoc,
    RpcNotificationTypeHwnd,
    RpcNotificationTypeCallback
} RPC_NOTIFICATION_TYPES;
typedef
enum _RPC_ASYNC_EVENT {
    RpcCallComplete,
    RpcSendComplete,
    RpcReceiveComplete,
    RpcClientDisconnect,
    RpcClientCancel
    } RPC_ASYNC_EVENT;
struct _RPC_ASYNC_STATE;
typedef void RPC_ENTRY
RPCNOTIFICATION_ROUTINE (
                  struct _RPC_ASYNC_STATE *pAsync,
                  void *Context,
                  RPC_ASYNC_EVENT Event);
typedef RPCNOTIFICATION_ROUTINE *PFN_RPCNOTIFICATION_ROUTINE;
typedef union _RPC_ASYNC_NOTIFICATION_INFO {
    struct {
        PFN_RPCNOTIFICATION_ROUTINE NotificationRoutine;
        HANDLE hThread;
        } APC;
    struct {
        HANDLE hIOPort;
        DWORD dwNumberOfBytesTransferred;
        DWORD_PTR dwCompletionKey;
        LPOVERLAPPED lpOverlapped;
        } IOC;
    struct {
        HWND hWnd;
        UINT Msg;
        } HWND;
    HANDLE hEvent;
    PFN_RPCNOTIFICATION_ROUTINE NotificationRoutine;
} RPC_ASYNC_NOTIFICATION_INFO, *PRPC_ASYNC_NOTIFICATION_INFO;
typedef struct _RPC_ASYNC_STATE {
    unsigned int Size;
    unsigned long Signature;
    long Lock;
    unsigned long Flags;
    void *StubInfo;
    void *UserInfo;
    void *RuntimeInfo;
    RPC_ASYNC_EVENT Event;
    RPC_NOTIFICATION_TYPES NotificationType;
    RPC_ASYNC_NOTIFICATION_INFO u;
    LONG_PTR Reserved[4];
    } RPC_ASYNC_STATE, *PRPC_ASYNC_STATE;
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcAsyncRegisterInfo (
    _In_ PRPC_ASYNC_STATE pAsync
    ) ;
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcAsyncInitializeHandle (
    _Out_writes_bytes_(Size) PRPC_ASYNC_STATE pAsync,
    _In_ unsigned int Size
    );
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcAsyncGetCallStatus (
    _In_ PRPC_ASYNC_STATE pAsync
    ) ;
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcAsyncCompleteCall (
    _Inout_ PRPC_ASYNC_STATE pAsync,
    _Out_opt_ void *Reply
    ) ;
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcAsyncAbortCall (
    _Inout_ PRPC_ASYNC_STATE pAsync,
    _In_ unsigned long ExceptionCode
    ) ;
RPCRTAPI
_Must_inspect_result_
RPC_STATUS
RPC_ENTRY
RpcAsyncCancelCall (
    _Inout_ PRPC_ASYNC_STATE pAsync,
    _In_ BOOL fAbort
    ) ;
typedef enum tagExtendedErrorParamTypes
{
    eeptAnsiString = 1,
    eeptUnicodeString,
    eeptLongVal,
    eeptShortVal,
    eeptPointerVal,
    eeptNone,
    eeptBinary
} ExtendedErrorParamTypes;
typedef struct tagBinaryParam
{
    void *Buffer;
    short Size;
} BinaryParam;
typedef struct tagRPC_EE_INFO_PARAM
{
    ExtendedErrorParamTypes ParameterType;
    union
        {
        LPSTR AnsiString;
        LPWSTR UnicodeString;
        long LVal;
        short SVal;
        ULONGLONG PVal;
        BinaryParam BVal;
        } u;
} RPC_EE_INFO_PARAM;
typedef struct tagRPC_EXTENDED_ERROR_INFO
{
    ULONG Version;
    LPWSTR ComputerName;
    ULONG ProcessID;
    union
        {
        SYSTEMTIME SystemTime;
        FILETIME FileTime;
        } u;
    ULONG GeneratingComponent;
    ULONG Status;
    USHORT DetectionLocation;
    USHORT Flags;
    int NumberOfParameters;
    RPC_EE_INFO_PARAM Parameters[MaxNumberOfEEInfoParams];
} RPC_EXTENDED_ERROR_INFO;
typedef struct tagRPC_ERROR_ENUM_HANDLE
{
    ULONG Signature;
    void *CurrentPos;
    void *Head;
} RPC_ERROR_ENUM_HANDLE;
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcErrorStartEnumeration (
    _Out_ RPC_ERROR_ENUM_HANDLE *EnumHandle
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcErrorGetNextRecord (
    _In_ RPC_ERROR_ENUM_HANDLE *EnumHandle,
    _In_ BOOL CopyStrings,
    _Out_ RPC_EXTENDED_ERROR_INFO *ErrorInfo
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcErrorEndEnumeration (
    _Inout_ RPC_ERROR_ENUM_HANDLE *EnumHandle
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcErrorResetEnumeration (
    _Inout_ RPC_ERROR_ENUM_HANDLE *EnumHandle
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcErrorGetNumberOfRecords (
    _In_ RPC_ERROR_ENUM_HANDLE *EnumHandle,
    _Out_ int *Records
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcErrorSaveErrorInfo (
    _In_ RPC_ERROR_ENUM_HANDLE *EnumHandle,
    _Outptr_result_bytebuffer_(*BlobSize) PVOID *ErrorBlob,
    _Out_ size_t *BlobSize
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcErrorLoadErrorInfo (
    _In_reads_bytes_(BlobSize) PVOID ErrorBlob,
    _In_ size_t BlobSize,
    _Out_ RPC_ERROR_ENUM_HANDLE *EnumHandle
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcErrorAddRecord (
    _In_ RPC_EXTENDED_ERROR_INFO *ErrorInfo
    );
RPCRTAPI
void
RPC_ENTRY
RpcErrorClearInformation (
    void
    );
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#endif
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcAsyncCleanupThread (
    _In_ DWORD dwTimeout
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcGetAuthorizationContextForClient (
    _In_opt_ RPC_BINDING_HANDLE ClientBinding,
    _In_ BOOL ImpersonateOnReturn,
    _In_opt_ PVOID Reserved1,
    _In_opt_ PLARGE_INTEGER pExpirationTime,
    _In_ LUID Reserved2,
    _In_ DWORD Reserved3,
    _In_opt_ PVOID Reserved4,
    _Out_ PVOID *pAuthzClientContext
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcFreeAuthorizationContext (
    _Inout_ PVOID *pAuthzClientContext
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcSsContextLockExclusive (
    _In_opt_ RPC_BINDING_HANDLE ServerBindingHandle,
    _In_ PVOID UserContext
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcSsContextLockShared (
    _In_ RPC_BINDING_HANDLE ServerBindingHandle,
    _In_ PVOID UserContext
    );
typedef enum tagRpcLocalAddressFormat
{
    rlafInvalid = 0,
    rlafIPv4,
    rlafIPv6
} RpcLocalAddressFormat;
typedef struct _RPC_CALL_LOCAL_ADDRESS_V1
{
    unsigned int Version;
    void *Buffer;
    unsigned long BufferSize;
    RpcLocalAddressFormat AddressFormat;
} RPC_CALL_LOCAL_ADDRESS_V1, *PRPC_CALL_LOCAL_ADDRESS_V1;
typedef struct tagRPC_CALL_ATTRIBUTES_V1_W
{
    unsigned int Version;
    unsigned long Flags;
    unsigned long ServerPrincipalNameBufferLength;
    unsigned short *ServerPrincipalName;
    unsigned long ClientPrincipalNameBufferLength;
    unsigned short *ClientPrincipalName;
    unsigned long AuthenticationLevel;
    unsigned long AuthenticationService;
    BOOL NullSession;
} RPC_CALL_ATTRIBUTES_V1_W;
typedef struct tagRPC_CALL_ATTRIBUTES_V1_A
{
    unsigned int Version;
    unsigned long Flags;
    unsigned long ServerPrincipalNameBufferLength;
    unsigned char *ServerPrincipalName;
    unsigned long ClientPrincipalNameBufferLength;
    unsigned char *ClientPrincipalName;
    unsigned long AuthenticationLevel;
    unsigned long AuthenticationService;
    BOOL NullSession;
} RPC_CALL_ATTRIBUTES_V1_A;
typedef enum tagRpcCallType
{
    rctInvalid = 0,
    rctNormal,
    rctTraining,
    rctGuaranteed
} RpcCallType;
typedef enum tagRpcCallClientLocality
{
    rcclInvalid = 0,
    rcclLocal,
    rcclRemote,
    rcclClientUnknownLocality
} RpcCallClientLocality;
typedef struct tagRPC_CALL_ATTRIBUTES_V2_W
{
    unsigned int Version;
    unsigned long Flags;
    unsigned long ServerPrincipalNameBufferLength;
    unsigned short *ServerPrincipalName;
    unsigned long ClientPrincipalNameBufferLength;
    unsigned short *ClientPrincipalName;
    unsigned long AuthenticationLevel;
    unsigned long AuthenticationService;
    BOOL NullSession;
    BOOL KernelModeCaller;
    unsigned long ProtocolSequence;
    RpcCallClientLocality IsClientLocal;
    HANDLE ClientPID;
    unsigned long CallStatus;
    RpcCallType CallType;
    RPC_CALL_LOCAL_ADDRESS_V1 *CallLocalAddress;
    unsigned short OpNum;
    UUID InterfaceUuid;
} RPC_CALL_ATTRIBUTES_V2_W;
typedef struct tagRPC_CALL_ATTRIBUTES_V2_A
{
    unsigned int Version;
    unsigned long Flags;
    unsigned long ServerPrincipalNameBufferLength;
    unsigned char *ServerPrincipalName;
    unsigned long ClientPrincipalNameBufferLength;
    unsigned char *ClientPrincipalName;
    unsigned long AuthenticationLevel;
    unsigned long AuthenticationService;
    BOOL NullSession;
    BOOL KernelModeCaller;
    unsigned long ProtocolSequence;
    unsigned long IsClientLocal;
    HANDLE ClientPID;
    unsigned long CallStatus;
    RpcCallType CallType;
    RPC_CALL_LOCAL_ADDRESS_V1 *CallLocalAddress;
    unsigned short OpNum;
    UUID InterfaceUuid;
} RPC_CALL_ATTRIBUTES_V2_A;
typedef struct tagRPC_CALL_ATTRIBUTES_V3_W
{
    unsigned int Version;
    unsigned long Flags;
    unsigned long ServerPrincipalNameBufferLength;
    unsigned short *ServerPrincipalName;
    unsigned long ClientPrincipalNameBufferLength;
    unsigned short *ClientPrincipalName;
    unsigned long AuthenticationLevel;
    unsigned long AuthenticationService;
    BOOL NullSession;
    BOOL KernelModeCaller;
    unsigned long ProtocolSequence;
    RpcCallClientLocality IsClientLocal;
    HANDLE ClientPID;
    unsigned long CallStatus;
    RpcCallType CallType;
    RPC_CALL_LOCAL_ADDRESS_V1 *CallLocalAddress;
    unsigned short OpNum;
    UUID InterfaceUuid;
    unsigned long ClientIdentifierBufferLength;
    unsigned char *ClientIdentifier;
} RPC_CALL_ATTRIBUTES_V3_W;
typedef struct tagRPC_CALL_ATTRIBUTES_V3_A
{
    unsigned int Version;
    unsigned long Flags;
    unsigned long ServerPrincipalNameBufferLength;
    unsigned char *ServerPrincipalName;
    unsigned long ClientPrincipalNameBufferLength;
    unsigned char *ClientPrincipalName;
    unsigned long AuthenticationLevel;
    unsigned long AuthenticationService;
    BOOL NullSession;
    BOOL KernelModeCaller;
    unsigned long ProtocolSequence;
    unsigned long IsClientLocal;
    HANDLE ClientPID;
    unsigned long CallStatus;
    RpcCallType CallType;
    RPC_CALL_LOCAL_ADDRESS_V1 *CallLocalAddress;
    unsigned short OpNum;
    UUID InterfaceUuid;
    unsigned long ClientIdentifierBufferLength;
    unsigned char *ClientIdentifier;
} RPC_CALL_ATTRIBUTES_V3_A;
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcServerInqCallAttributesW (
    _In_opt_ RPC_BINDING_HANDLE ClientBinding,
    _Inout_ void *RpcCallAttributes
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcServerInqCallAttributesA (
    _In_opt_ RPC_BINDING_HANDLE ClientBinding,
    _Inout_ void *RpcCallAttributes
    );
typedef RPC_CALL_ATTRIBUTES_V3 RPC_CALL_ATTRIBUTES;
typedef enum _RPC_NOTIFICATIONS
{
    RpcNotificationCallNone = 0,
    RpcNotificationClientDisconnect = 1,
    RpcNotificationCallCancel = 2
} RPC_NOTIFICATIONS;
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcServerSubscribeForNotification (
    _In_opt_ RPC_BINDING_HANDLE Binding,
    _In_ RPC_NOTIFICATIONS Notification,
    _In_ RPC_NOTIFICATION_TYPES NotificationType,
    _In_ RPC_ASYNC_NOTIFICATION_INFO *NotificationInfo
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcServerUnsubscribeForNotification (
    _In_opt_ RPC_BINDING_HANDLE Binding,
    _In_ RPC_NOTIFICATIONS Notification,
    _Out_ unsigned long *NotificationsQueued
    );
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcBindingBind (
    _In_opt_ PRPC_ASYNC_STATE pAsync,
    _In_ RPC_BINDING_HANDLE Binding,
    _In_ RPC_IF_HANDLE IfSpec
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
RpcBindingUnbind (
    _In_ RPC_BINDING_HANDLE Binding
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#endif
_Must_inspect_result_
RPC_STATUS RPC_ENTRY
I_RpcAsyncSetHandle (
    _In_ PRPC_MESSAGE Message,
    _In_ PRPC_ASYNC_STATE pAsync
    );
_Must_inspect_result_
RPC_STATUS RPC_ENTRY
I_RpcAsyncAbortCall (
    _In_ PRPC_ASYNC_STATE pAsync,
    _In_ unsigned long ExceptionCode
    ) ;
int
RPC_ENTRY
I_RpcExceptionFilter (
    _In_ unsigned long ExceptionCode
    );
RPCRTAPI
RPC_STATUS
RPC_ENTRY
I_RpcBindingInqClientTokenAttributes (
    _In_ RPC_BINDING_HANDLE Binding,
    _Out_opt_ LUID * TokenId,
    _Out_opt_ LUID * AuthenticationId,
    _Out_opt_ LUID * ModifiedId
    );
#endif
#pragma endregion
}
