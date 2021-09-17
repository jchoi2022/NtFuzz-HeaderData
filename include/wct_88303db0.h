#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef enum _WCT_OBJECT_TYPE
{
    WctCriticalSectionType = 1,
    WctSendMessageType,
    WctMutexType,
    WctAlpcType,
    WctComType,
    WctThreadWaitType,
    WctProcessWaitType,
    WctThreadType,
    WctComActivationType,
    WctUnknownType,
    WctSocketIoType,
    WctSmbIoType,
    WctMaxType
} WCT_OBJECT_TYPE;
typedef enum _WCT_OBJECT_STATUS
{
    WctStatusNoAccess = 1,
    WctStatusRunning,
    WctStatusBlocked,
    WctStatusPidOnly,
    WctStatusPidOnlyRpcss,
    WctStatusOwned,
    WctStatusNotOwned,
    WctStatusAbandoned,
    WctStatusUnknown,
    WctStatusError,
    WctStatusMax
} WCT_OBJECT_STATUS;
typedef struct _WAITCHAIN_NODE_INFO
{
    WCT_OBJECT_TYPE ObjectType;
    WCT_OBJECT_STATUS ObjectStatus;
    union {
        struct {
            WCHAR ObjectName[WCT_OBJNAME_LENGTH];
            LARGE_INTEGER Timeout;
            BOOL Alertable;
        } LockObject;
        struct {
            DWORD ProcessId;
            DWORD ThreadId;
            DWORD WaitTime;
            DWORD ContextSwitches;
        } ThreadObject;
    };
} WAITCHAIN_NODE_INFO, *PWAITCHAIN_NODE_INFO;
typedef LPVOID HWCT;
typedef VOID (CALLBACK *PWAITCHAINCALLBACK) (
    HWCT WctHandle,
    DWORD_PTR Context,
    DWORD CallbackStatus,
    LPDWORD NodeCount,
    PWAITCHAIN_NODE_INFO NodeInfoArray,
    LPBOOL IsCycle
    );
_Check_return_
WINADVAPI
HWCT WINAPI
OpenThreadWaitChainSession (
    _In_ DWORD Flags,
    _In_opt_ PWAITCHAINCALLBACK callback
    );
WINADVAPI
VOID WINAPI
CloseThreadWaitChainSession (
    _In_ HWCT WctHandle
    );
_Check_return_
WINADVAPI
BOOL WINAPI
GetThreadWaitChain (
    _In_ HWCT WctHandle,
    _In_opt_ DWORD_PTR Context,
    _In_ DWORD Flags,
    _In_ DWORD ThreadId,
    _Inout_ LPDWORD NodeCount,
    _Out_writes_(*NodeCount) PWAITCHAIN_NODE_INFO NodeInfoArray,
    _Out_ LPBOOL IsCycle
    );
typedef HRESULT (*PCOGETCALLSTATE)(int, PULONG);
typedef HRESULT (*PCOGETACTIVATIONSTATE)(GUID, DWORD, DWORD*);
WINADVAPI
VOID WINAPI
RegisterWaitChainCOMCallback (
    _In_ PCOGETCALLSTATE CallStateCallback,
    _In_ PCOGETACTIVATIONSTATE ActivationStateCallback
    );
}
#endif
#pragma endregion
