#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
                                        SERVICE_INACTIVE)
                                        SC_MANAGER_CONNECT | \
                                        SC_MANAGER_CREATE_SERVICE | \
                                        SC_MANAGER_ENUMERATE_SERVICE | \
                                        SC_MANAGER_LOCK | \
                                        SC_MANAGER_QUERY_LOCK_STATUS | \
                                        SC_MANAGER_MODIFY_BOOT_CONFIG)
                                        SERVICE_QUERY_CONFIG | \
                                        SERVICE_CHANGE_CONFIG | \
                                        SERVICE_QUERY_STATUS | \
                                        SERVICE_ENUMERATE_DEPENDENTS | \
                                        SERVICE_START | \
                                        SERVICE_STOP | \
                                        SERVICE_PAUSE_CONTINUE | \
                                        SERVICE_INTERROGATE | \
                                        SERVICE_USER_DEFINED_CONTROL)
DEFINE_GUID (
    NETWORK_MANAGER_FIRST_IP_ADDRESS_ARRIVAL_GUID,
    0x4f27f2de,
    0x14e2,
    0x430b,
    0xa5, 0x49, 0x7c, 0xd4, 0x8c, 0xbc, 0x82, 0x45
  );
DEFINE_GUID (
    NETWORK_MANAGER_LAST_IP_ADDRESS_REMOVAL_GUID,
    0xcc4ba62a,
    0x162e,
    0x4648,
    0x84, 0x7a, 0xb6, 0xbd, 0xf9, 0x93, 0xe3, 0x35
  );
DEFINE_GUID (
    DOMAIN_JOIN_GUID,
    0x1ce20aba,
    0x9851,
    0x4421,
    0x94, 0x30, 0x1d, 0xde, 0xb7, 0x66, 0xe8, 0x09
  );
DEFINE_GUID (
    DOMAIN_LEAVE_GUID,
    0xddaf516e,
    0x58c2,
    0x4866,
    0x95, 0x74, 0xc3, 0xb6, 0x15, 0xd4, 0x2e, 0xa1
  );
DEFINE_GUID (
    FIREWALL_PORT_OPEN_GUID,
    0xb7569e07,
    0x8421,
    0x4ee0,
    0xad, 0x10, 0x86, 0x91, 0x5a, 0xfd, 0xad, 0x09
  );
DEFINE_GUID (
    FIREWALL_PORT_CLOSE_GUID,
    0xa144ed38,
    0x8e12,
    0x4de4,
    0x9d, 0x96, 0xe6, 0x47, 0x40, 0xb1, 0xa5, 0x24
  );
DEFINE_GUID (
    MACHINE_POLICY_PRESENT_GUID,
    0x659FCAE6,
    0x5BDB,
    0x4DA9,
    0xB1, 0xFF, 0xCA, 0x2A, 0x17, 0x8D, 0x46, 0xE0
  );
DEFINE_GUID (
    USER_POLICY_PRESENT_GUID,
    0x54FB46C8,
    0xF089,
    0x464C,
    0xB1, 0xFD, 0x59, 0xD1, 0xB6, 0x2C, 0x3B, 0x50
  );
DEFINE_GUID (
    RPC_INTERFACE_EVENT_GUID,
    0xbc90d167,
    0x9470,
    0x4139,
    0xa9, 0xba, 0xbe, 0x0b, 0xbb, 0xf5, 0xb7, 0x4d
  );
DEFINE_GUID (
    NAMED_PIPE_EVENT_GUID,
    0x1f81d131,
    0x3fac,
    0x4537,
    0x9e, 0x0c, 0x7e, 0x7b, 0x0c, 0x2f, 0x4b, 0x55
  );
DEFINE_GUID (
    CUSTOM_SYSTEM_STATE_CHANGE_EVENT_GUID,
    0x2d7a2816,
    0x0c5e,
    0x45fc,
    0x9c, 0xe7, 0x57, 0x0e, 0x5e, 0xcd, 0xe9, 0xc9
  );
typedef struct
{
    DWORD Data[2];
} SERVICE_TRIGGER_CUSTOM_STATE_ID;
typedef struct _SERVICE_CUSTOM_SYSTEM_STATE_CHANGE_DATA_ITEM {
    union {
        SERVICE_TRIGGER_CUSTOM_STATE_ID CustomStateId;
        struct {
            DWORD DataOffset;
            BYTE Data[1];
        } s;
    } u;
} SERVICE_CUSTOM_SYSTEM_STATE_CHANGE_DATA_ITEM, *LPSERVICE_CUSTOM_SYSTEM_STATE_CHANGE_DATA_ITEM;
typedef struct _SERVICE_DESCRIPTIONA {
    LPSTR lpDescription;
} SERVICE_DESCRIPTIONA, *LPSERVICE_DESCRIPTIONA;
typedef struct _SERVICE_DESCRIPTIONW {
    LPWSTR lpDescription;
} SERVICE_DESCRIPTIONW, *LPSERVICE_DESCRIPTIONW;
typedef SERVICE_DESCRIPTIONW SERVICE_DESCRIPTION;
typedef LPSERVICE_DESCRIPTIONW LPSERVICE_DESCRIPTION;
typedef enum _SC_ACTION_TYPE {
        SC_ACTION_NONE = 0,
        SC_ACTION_RESTART = 1,
        SC_ACTION_REBOOT = 2,
        SC_ACTION_RUN_COMMAND = 3,
        SC_ACTION_OWN_RESTART = 4
} SC_ACTION_TYPE;
typedef struct _SC_ACTION {
    SC_ACTION_TYPE Type;
    DWORD Delay;
} SC_ACTION, *LPSC_ACTION;
typedef struct _SERVICE_FAILURE_ACTIONSA {
    DWORD dwResetPeriod;
    LPSTR lpRebootMsg;
    LPSTR lpCommand;
    [range(0, 1024)]
    DWORD cActions;
    [size_is(cActions)]
    SC_ACTION * lpsaActions;
} SERVICE_FAILURE_ACTIONSA, *LPSERVICE_FAILURE_ACTIONSA;
typedef struct _SERVICE_FAILURE_ACTIONSW {
    DWORD dwResetPeriod;
    LPWSTR lpRebootMsg;
    LPWSTR lpCommand;
    [range(0, 1024)]
    DWORD cActions;
    [size_is(cActions)]
    SC_ACTION * lpsaActions;
} SERVICE_FAILURE_ACTIONSW, *LPSERVICE_FAILURE_ACTIONSW;
typedef SERVICE_FAILURE_ACTIONSW SERVICE_FAILURE_ACTIONS;
typedef LPSERVICE_FAILURE_ACTIONSW LPSERVICE_FAILURE_ACTIONS;
typedef struct _SERVICE_DELAYED_AUTO_START_INFO {
    BOOL fDelayedAutostart;
} SERVICE_DELAYED_AUTO_START_INFO, *LPSERVICE_DELAYED_AUTO_START_INFO;
typedef struct _SERVICE_FAILURE_ACTIONS_FLAG {
    BOOL fFailureActionsOnNonCrashFailures;
} SERVICE_FAILURE_ACTIONS_FLAG, *LPSERVICE_FAILURE_ACTIONS_FLAG;
typedef struct _SERVICE_SID_INFO {
    DWORD dwServiceSidType;
} SERVICE_SID_INFO, *LPSERVICE_SID_INFO;
typedef struct _SERVICE_REQUIRED_PRIVILEGES_INFOA {
    LPSTR pmszRequiredPrivileges;
} SERVICE_REQUIRED_PRIVILEGES_INFOA, *LPSERVICE_REQUIRED_PRIVILEGES_INFOA;
typedef struct _SERVICE_REQUIRED_PRIVILEGES_INFOW {
    LPWSTR pmszRequiredPrivileges;
} SERVICE_REQUIRED_PRIVILEGES_INFOW, *LPSERVICE_REQUIRED_PRIVILEGES_INFOW;
typedef SERVICE_REQUIRED_PRIVILEGES_INFOW SERVICE_REQUIRED_PRIVILEGES_INFO;
typedef LPSERVICE_REQUIRED_PRIVILEGES_INFOW LPSERVICE_REQUIRED_PRIVILEGES_INFO;
typedef struct _SERVICE_PRESHUTDOWN_INFO {
    DWORD dwPreshutdownTimeout;
} SERVICE_PRESHUTDOWN_INFO, *LPSERVICE_PRESHUTDOWN_INFO;
typedef struct _SERVICE_TRIGGER_SPECIFIC_DATA_ITEM
{
    DWORD dwDataType;
    [range(0, 1024)]
    DWORD cbData;
    [size_is(cbData)]
    PBYTE pData;
} SERVICE_TRIGGER_SPECIFIC_DATA_ITEM, *PSERVICE_TRIGGER_SPECIFIC_DATA_ITEM;
typedef struct _SERVICE_TRIGGER
{
    DWORD dwTriggerType;
    DWORD dwAction;
    GUID * pTriggerSubtype;
    [range(0, 64)]
    DWORD cDataItems;
    [size_is(cDataItems)]
    PSERVICE_TRIGGER_SPECIFIC_DATA_ITEM pDataItems;
} SERVICE_TRIGGER, *PSERVICE_TRIGGER;
typedef struct _SERVICE_TRIGGER_INFO {
    [range(0, 64)]
    DWORD cTriggers;
    [size_is(cTriggers)]
    PSERVICE_TRIGGER pTriggers;
    PBYTE pReserved;
} SERVICE_TRIGGER_INFO, *PSERVICE_TRIGGER_INFO;
typedef struct _SERVICE_PREFERRED_NODE_INFO {
    USHORT usPreferredNode;
    BOOLEAN fDelete;
} SERVICE_PREFERRED_NODE_INFO, *LPSERVICE_PREFERRED_NODE_INFO;
typedef struct _SERVICE_TIMECHANGE_INFO {
    LARGE_INTEGER liNewTime;
    LARGE_INTEGER liOldTime;
} SERVICE_TIMECHANGE_INFO, *PSERVICE_TIMECHANGE_INFO;
typedef struct _SERVICE_LAUNCH_PROTECTED_INFO {
    DWORD dwLaunchProtected;
} SERVICE_LAUNCH_PROTECTED_INFO, *PSERVICE_LAUNCH_PROTECTED_INFO;
DECLARE_HANDLE(SC_HANDLE);
typedef SC_HANDLE *LPSC_HANDLE;
DECLARE_HANDLE(SERVICE_STATUS_HANDLE);
typedef enum _SC_STATUS_TYPE {
    SC_STATUS_PROCESS_INFO = 0
} SC_STATUS_TYPE;
typedef enum _SC_ENUM_TYPE {
    SC_ENUM_PROCESS_INFO = 0
} SC_ENUM_TYPE;
typedef struct _SERVICE_STATUS {
    DWORD dwServiceType;
    DWORD dwCurrentState;
    DWORD dwControlsAccepted;
    DWORD dwWin32ExitCode;
    DWORD dwServiceSpecificExitCode;
    DWORD dwCheckPoint;
    DWORD dwWaitHint;
} SERVICE_STATUS, *LPSERVICE_STATUS;
typedef struct _SERVICE_STATUS_PROCESS {
    DWORD dwServiceType;
    DWORD dwCurrentState;
    DWORD dwControlsAccepted;
    DWORD dwWin32ExitCode;
    DWORD dwServiceSpecificExitCode;
    DWORD dwCheckPoint;
    DWORD dwWaitHint;
    DWORD dwProcessId;
    DWORD dwServiceFlags;
} SERVICE_STATUS_PROCESS, *LPSERVICE_STATUS_PROCESS;
typedef struct _ENUM_SERVICE_STATUSA {
    LPSTR lpServiceName;
    LPSTR lpDisplayName;
    SERVICE_STATUS ServiceStatus;
} ENUM_SERVICE_STATUSA, *LPENUM_SERVICE_STATUSA;
typedef struct _ENUM_SERVICE_STATUSW {
    LPWSTR lpServiceName;
    LPWSTR lpDisplayName;
    SERVICE_STATUS ServiceStatus;
} ENUM_SERVICE_STATUSW, *LPENUM_SERVICE_STATUSW;
typedef ENUM_SERVICE_STATUSW ENUM_SERVICE_STATUS;
typedef LPENUM_SERVICE_STATUSW LPENUM_SERVICE_STATUS;
typedef struct _ENUM_SERVICE_STATUS_PROCESSA {
    LPSTR lpServiceName;
    LPSTR lpDisplayName;
    SERVICE_STATUS_PROCESS ServiceStatusProcess;
} ENUM_SERVICE_STATUS_PROCESSA, *LPENUM_SERVICE_STATUS_PROCESSA;
typedef struct _ENUM_SERVICE_STATUS_PROCESSW {
    LPWSTR lpServiceName;
    LPWSTR lpDisplayName;
    SERVICE_STATUS_PROCESS ServiceStatusProcess;
} ENUM_SERVICE_STATUS_PROCESSW, *LPENUM_SERVICE_STATUS_PROCESSW;
typedef ENUM_SERVICE_STATUS_PROCESSW ENUM_SERVICE_STATUS_PROCESS;
typedef LPENUM_SERVICE_STATUS_PROCESSW LPENUM_SERVICE_STATUS_PROCESS;
typedef LPVOID SC_LOCK;
typedef struct _QUERY_SERVICE_LOCK_STATUSA {
    DWORD fIsLocked;
    LPSTR lpLockOwner;
    DWORD dwLockDuration;
} QUERY_SERVICE_LOCK_STATUSA, *LPQUERY_SERVICE_LOCK_STATUSA;
typedef struct _QUERY_SERVICE_LOCK_STATUSW {
    DWORD fIsLocked;
    LPWSTR lpLockOwner;
    DWORD dwLockDuration;
} QUERY_SERVICE_LOCK_STATUSW, *LPQUERY_SERVICE_LOCK_STATUSW;
typedef QUERY_SERVICE_LOCK_STATUSW QUERY_SERVICE_LOCK_STATUS;
typedef LPQUERY_SERVICE_LOCK_STATUSW LPQUERY_SERVICE_LOCK_STATUS;
typedef struct _QUERY_SERVICE_CONFIGA {
    DWORD dwServiceType;
    DWORD dwStartType;
    DWORD dwErrorControl;
    LPSTR lpBinaryPathName;
    LPSTR lpLoadOrderGroup;
    DWORD dwTagId;
    LPSTR lpDependencies;
    LPSTR lpServiceStartName;
    LPSTR lpDisplayName;
} QUERY_SERVICE_CONFIGA, *LPQUERY_SERVICE_CONFIGA;
typedef struct _QUERY_SERVICE_CONFIGW {
    DWORD dwServiceType;
    DWORD dwStartType;
    DWORD dwErrorControl;
    LPWSTR lpBinaryPathName;
    LPWSTR lpLoadOrderGroup;
    DWORD dwTagId;
    LPWSTR lpDependencies;
    LPWSTR lpServiceStartName;
    LPWSTR lpDisplayName;
} QUERY_SERVICE_CONFIGW, *LPQUERY_SERVICE_CONFIGW;
typedef QUERY_SERVICE_CONFIGW QUERY_SERVICE_CONFIG;
typedef LPQUERY_SERVICE_CONFIGW LPQUERY_SERVICE_CONFIG;
typedef VOID WINAPI SERVICE_MAIN_FUNCTIONW (
    DWORD dwNumServicesArgs,
    LPWSTR *lpServiceArgVectors
    );
typedef VOID WINAPI SERVICE_MAIN_FUNCTIONA (
    DWORD dwNumServicesArgs,
    LPTSTR *lpServiceArgVectors
    );
typedef VOID (WINAPI *LPSERVICE_MAIN_FUNCTIONW)(
    DWORD dwNumServicesArgs,
    LPWSTR *lpServiceArgVectors
    );
typedef VOID (WINAPI *LPSERVICE_MAIN_FUNCTIONA)(
    DWORD dwNumServicesArgs,
    LPSTR *lpServiceArgVectors
    );
typedef struct _SERVICE_TABLE_ENTRYA {
    LPSTR lpServiceName;
    LPSERVICE_MAIN_FUNCTIONA lpServiceProc;
}SERVICE_TABLE_ENTRYA, *LPSERVICE_TABLE_ENTRYA;
typedef struct _SERVICE_TABLE_ENTRYW {
    LPWSTR lpServiceName;
    LPSERVICE_MAIN_FUNCTIONW lpServiceProc;
}SERVICE_TABLE_ENTRYW, *LPSERVICE_TABLE_ENTRYW;
typedef SERVICE_TABLE_ENTRYW SERVICE_TABLE_ENTRY;
typedef LPSERVICE_TABLE_ENTRYW LPSERVICE_TABLE_ENTRY;
typedef VOID WINAPI HANDLER_FUNCTION (
    DWORD dwControl
    );
typedef DWORD WINAPI HANDLER_FUNCTION_EX (
    DWORD dwControl,
    DWORD dwEventType,
    LPVOID lpEventData,
    LPVOID lpContext
    );
typedef VOID (WINAPI *LPHANDLER_FUNCTION)(
    DWORD dwControl
    );
typedef DWORD (WINAPI *LPHANDLER_FUNCTION_EX)(
    DWORD dwControl,
    DWORD dwEventType,
    LPVOID lpEventData,
    LPVOID lpContext
    );
typedef
VOID
( CALLBACK * PFN_SC_NOTIFY_CALLBACK ) (
    _In_ PVOID pParameter
    );
typedef struct _SERVICE_NOTIFY_1 {
    DWORD dwVersion;
    PFN_SC_NOTIFY_CALLBACK pfnNotifyCallback;
    PVOID pContext;
    DWORD dwNotificationStatus;
    SERVICE_STATUS_PROCESS ServiceStatus;
} SERVICE_NOTIFY_1, *PSERVICE_NOTIFY_1;
typedef struct _SERVICE_NOTIFY_2A {
    DWORD dwVersion;
    PFN_SC_NOTIFY_CALLBACK pfnNotifyCallback;
    PVOID pContext;
    DWORD dwNotificationStatus;
    SERVICE_STATUS_PROCESS ServiceStatus;
    DWORD dwNotificationTriggered;
    LPSTR pszServiceNames;
} SERVICE_NOTIFY_2A, *PSERVICE_NOTIFY_2A;
typedef struct _SERVICE_NOTIFY_2W {
    DWORD dwVersion;
    PFN_SC_NOTIFY_CALLBACK pfnNotifyCallback;
    PVOID pContext;
    DWORD dwNotificationStatus;
    SERVICE_STATUS_PROCESS ServiceStatus;
    DWORD dwNotificationTriggered;
    LPWSTR pszServiceNames;
} SERVICE_NOTIFY_2W, *PSERVICE_NOTIFY_2W;
typedef SERVICE_NOTIFY_2W SERVICE_NOTIFY_2;
typedef PSERVICE_NOTIFY_2W PSERVICE_NOTIFY_2;
typedef SERVICE_NOTIFY_2A SERVICE_NOTIFYA, *PSERVICE_NOTIFYA;
typedef SERVICE_NOTIFY_2W SERVICE_NOTIFYW, *PSERVICE_NOTIFYW;
typedef SERVICE_NOTIFYW SERVICE_NOTIFY;
typedef PSERVICE_NOTIFYW PSERVICE_NOTIFY;
typedef struct _SERVICE_CONTROL_STATUS_REASON_PARAMSA {
    DWORD dwReason;
    LPSTR pszComment;
    SERVICE_STATUS_PROCESS ServiceStatus;
} SERVICE_CONTROL_STATUS_REASON_PARAMSA, *PSERVICE_CONTROL_STATUS_REASON_PARAMSA;
typedef struct _SERVICE_CONTROL_STATUS_REASON_PARAMSW {
    DWORD dwReason;
    LPWSTR pszComment;
    SERVICE_STATUS_PROCESS ServiceStatus;
} SERVICE_CONTROL_STATUS_REASON_PARAMSW, *PSERVICE_CONTROL_STATUS_REASON_PARAMSW;
typedef SERVICE_CONTROL_STATUS_REASON_PARAMSW SERVICE_CONTROL_STATUS_REASON_PARAMS;
typedef PSERVICE_CONTROL_STATUS_REASON_PARAMSW PSERVICE_CONTROL_STATUS_REASON_PARAMS;
typedef struct _SERVICE_START_REASON {
    DWORD dwReason;
} SERVICE_START_REASON, *PSERVICE_START_REASON;
WINADVAPI
BOOL
WINAPI
ChangeServiceConfigA(
    _In_ SC_HANDLE hService,
    _In_ DWORD dwServiceType,
    _In_ DWORD dwStartType,
    _In_ DWORD dwErrorControl,
    _In_opt_ LPCSTR lpBinaryPathName,
    _In_opt_ LPCSTR lpLoadOrderGroup,
    _Out_opt_ LPDWORD lpdwTagId,
    _In_opt_ LPCSTR lpDependencies,
    _In_opt_ LPCSTR lpServiceStartName,
    _In_opt_ LPCSTR lpPassword,
    _In_opt_ LPCSTR lpDisplayName
    );
WINADVAPI
BOOL
WINAPI
ChangeServiceConfigW(
    _In_ SC_HANDLE hService,
    _In_ DWORD dwServiceType,
    _In_ DWORD dwStartType,
    _In_ DWORD dwErrorControl,
    _In_opt_ LPCWSTR lpBinaryPathName,
    _In_opt_ LPCWSTR lpLoadOrderGroup,
    _Out_opt_ LPDWORD lpdwTagId,
    _In_opt_ LPCWSTR lpDependencies,
    _In_opt_ LPCWSTR lpServiceStartName,
    _In_opt_ LPCWSTR lpPassword,
    _In_opt_ LPCWSTR lpDisplayName
    );
WINADVAPI
BOOL
WINAPI
ChangeServiceConfig2A(
    _In_ SC_HANDLE hService,
    _In_ DWORD dwInfoLevel,
    _In_opt_ LPVOID lpInfo
    );
WINADVAPI
BOOL
WINAPI
ChangeServiceConfig2W(
    _In_ SC_HANDLE hService,
    _In_ DWORD dwInfoLevel,
    _In_opt_ LPVOID lpInfo
    );
WINADVAPI
BOOL
WINAPI
CloseServiceHandle(
    _In_ SC_HANDLE hSCObject
    );
WINADVAPI
BOOL
WINAPI
ControlService(
    _In_ SC_HANDLE hService,
    _In_ DWORD dwControl,
    _Out_ LPSERVICE_STATUS lpServiceStatus
    );
_Must_inspect_result_
WINADVAPI
SC_HANDLE
WINAPI
CreateServiceA(
    _In_ SC_HANDLE hSCManager,
    _In_ LPCSTR lpServiceName,
    _In_opt_ LPCSTR lpDisplayName,
    _In_ DWORD dwDesiredAccess,
    _In_ DWORD dwServiceType,
    _In_ DWORD dwStartType,
    _In_ DWORD dwErrorControl,
    _In_opt_ LPCSTR lpBinaryPathName,
    _In_opt_ LPCSTR lpLoadOrderGroup,
    _Out_opt_ LPDWORD lpdwTagId,
    _In_opt_ LPCSTR lpDependencies,
    _In_opt_ LPCSTR lpServiceStartName,
    _In_opt_ LPCSTR lpPassword
    );
_Must_inspect_result_
WINADVAPI
SC_HANDLE
WINAPI
CreateServiceW(
    _In_ SC_HANDLE hSCManager,
    _In_ LPCWSTR lpServiceName,
    _In_opt_ LPCWSTR lpDisplayName,
    _In_ DWORD dwDesiredAccess,
    _In_ DWORD dwServiceType,
    _In_ DWORD dwStartType,
    _In_ DWORD dwErrorControl,
    _In_opt_ LPCWSTR lpBinaryPathName,
    _In_opt_ LPCWSTR lpLoadOrderGroup,
    _Out_opt_ LPDWORD lpdwTagId,
    _In_opt_ LPCWSTR lpDependencies,
    _In_opt_ LPCWSTR lpServiceStartName,
    _In_opt_ LPCWSTR lpPassword
    );
WINADVAPI
BOOL
WINAPI
DeleteService(
    _In_ SC_HANDLE hService
    );
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
EnumDependentServicesA(
    _In_ SC_HANDLE hService,
    _In_ DWORD dwServiceState,
    _Out_writes_bytes_opt_(cbBufSize)
                    LPENUM_SERVICE_STATUSA lpServices,
    _In_ DWORD cbBufSize,
    _Out_ LPDWORD pcbBytesNeeded,
    _Out_ LPDWORD lpServicesReturned
    );
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
EnumDependentServicesW(
    _In_ SC_HANDLE hService,
    _In_ DWORD dwServiceState,
    _Out_writes_bytes_opt_(cbBufSize)
                    LPENUM_SERVICE_STATUSW lpServices,
    _In_ DWORD cbBufSize,
    _Out_ LPDWORD pcbBytesNeeded,
    _Out_ LPDWORD lpServicesReturned
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
EnumServicesStatusA(
    _In_ SC_HANDLE hSCManager,
    _In_ DWORD dwServiceType,
    _In_ DWORD dwServiceState,
    _Out_writes_bytes_opt_(cbBufSize)
                    LPENUM_SERVICE_STATUSA lpServices,
    _In_ DWORD cbBufSize,
    _Out_ LPDWORD pcbBytesNeeded,
    _Out_ LPDWORD lpServicesReturned,
    _Inout_opt_ LPDWORD lpResumeHandle
    );
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
EnumServicesStatusW(
    _In_ SC_HANDLE hSCManager,
    _In_ DWORD dwServiceType,
    _In_ DWORD dwServiceState,
    _Out_writes_bytes_opt_(cbBufSize)
                    LPENUM_SERVICE_STATUSW lpServices,
    _In_ DWORD cbBufSize,
    _Out_ LPDWORD pcbBytesNeeded,
    _Out_ LPDWORD lpServicesReturned,
    _Inout_opt_ LPDWORD lpResumeHandle
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
EnumServicesStatusExA(
    _In_ SC_HANDLE hSCManager,
    _In_ SC_ENUM_TYPE InfoLevel,
    _In_ DWORD dwServiceType,
    _In_ DWORD dwServiceState,
    _Out_writes_bytes_opt_(cbBufSize)
                    LPBYTE lpServices,
    _In_ DWORD cbBufSize,
    _Out_ LPDWORD pcbBytesNeeded,
    _Out_ LPDWORD lpServicesReturned,
    _Inout_opt_ LPDWORD lpResumeHandle,
    _In_opt_ LPCSTR pszGroupName
    );
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
EnumServicesStatusExW(
    _In_ SC_HANDLE hSCManager,
    _In_ SC_ENUM_TYPE InfoLevel,
    _In_ DWORD dwServiceType,
    _In_ DWORD dwServiceState,
    _Out_writes_bytes_opt_(cbBufSize)
                    LPBYTE lpServices,
    _In_ DWORD cbBufSize,
    _Out_ LPDWORD pcbBytesNeeded,
    _Out_ LPDWORD lpServicesReturned,
    _Inout_opt_ LPDWORD lpResumeHandle,
    _In_opt_ LPCWSTR pszGroupName
    );
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
GetServiceKeyNameA(
    _In_ SC_HANDLE hSCManager,
    _In_ LPCSTR lpDisplayName,
    _Out_writes_opt_(*lpcchBuffer)
                    LPSTR lpServiceName,
    _Inout_ LPDWORD lpcchBuffer
    );
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
GetServiceKeyNameW(
    _In_ SC_HANDLE hSCManager,
    _In_ LPCWSTR lpDisplayName,
    _Out_writes_opt_(*lpcchBuffer)
                    LPWSTR lpServiceName,
    _Inout_ LPDWORD lpcchBuffer
    );
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
GetServiceDisplayNameA(
    _In_ SC_HANDLE hSCManager,
    _In_ LPCSTR lpServiceName,
    _Out_writes_opt_(*lpcchBuffer)
                    LPSTR lpDisplayName,
    _Inout_ LPDWORD lpcchBuffer
    );
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
GetServiceDisplayNameW(
    _In_ SC_HANDLE hSCManager,
    _In_ LPCWSTR lpServiceName,
    _Out_writes_opt_(*lpcchBuffer)
                    LPWSTR lpDisplayName,
    _Inout_ LPDWORD lpcchBuffer
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINADVAPI
SC_LOCK
WINAPI
LockServiceDatabase(
    _In_ SC_HANDLE hSCManager
    );
WINADVAPI
BOOL
WINAPI
NotifyBootConfigStatus(
    _In_ BOOL BootAcceptable
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Must_inspect_result_
WINADVAPI
SC_HANDLE
WINAPI
OpenSCManagerA(
    _In_opt_ LPCSTR lpMachineName,
    _In_opt_ LPCSTR lpDatabaseName,
    _In_ DWORD dwDesiredAccess
    );
_Must_inspect_result_
WINADVAPI
SC_HANDLE
WINAPI
OpenSCManagerW(
    _In_opt_ LPCWSTR lpMachineName,
    _In_opt_ LPCWSTR lpDatabaseName,
    _In_ DWORD dwDesiredAccess
    );
_Must_inspect_result_
WINADVAPI
SC_HANDLE
WINAPI
OpenServiceA(
    _In_ SC_HANDLE hSCManager,
    _In_ LPCSTR lpServiceName,
    _In_ DWORD dwDesiredAccess
    );
_Must_inspect_result_
WINADVAPI
SC_HANDLE
WINAPI
OpenServiceW(
    _In_ SC_HANDLE hSCManager,
    _In_ LPCWSTR lpServiceName,
    _In_ DWORD dwDesiredAccess
    );
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
QueryServiceConfigA(
    _In_ SC_HANDLE hService,
    _Out_writes_bytes_opt_(cbBufSize)
                    LPQUERY_SERVICE_CONFIGA lpServiceConfig,
    _In_ DWORD cbBufSize,
    _Out_ LPDWORD pcbBytesNeeded
    );
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
QueryServiceConfigW(
    _In_ SC_HANDLE hService,
    _Out_writes_bytes_opt_(cbBufSize)
                    LPQUERY_SERVICE_CONFIGW lpServiceConfig,
    _In_ DWORD cbBufSize,
    _Out_ LPDWORD pcbBytesNeeded
    );
_When_(dwInfoLevel == SERVICE_CONFIG_DESCRIPTION,
       _At_(cbBufSize, _In_range_(>=, sizeof(LPSERVICE_DESCRIPTIONA))))
_When_(dwInfoLevel == SERVICE_CONFIG_FAILURE_ACTIONS,
       _At_(cbBufSize, _In_range_(>=, sizeof(LPSERVICE_FAILURE_ACTIONSA))))
_When_(dwInfoLevel == SERVICE_CONFIG_REQUIRED_PRIVILEGES_INFO,
       _At_(cbBufSize, _In_range_(>=,
                                  sizeof(LPSERVICE_REQUIRED_PRIVILEGES_INFOA))))
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
QueryServiceConfig2A(
    _In_ SC_HANDLE hService,
    _In_ DWORD dwInfoLevel,
    _Out_writes_bytes_opt_(cbBufSize)
                    LPBYTE lpBuffer,
    _In_ DWORD cbBufSize,
    _Out_ LPDWORD pcbBytesNeeded
    );
_When_(dwInfoLevel == SERVICE_CONFIG_DESCRIPTION,
       _At_(cbBufSize, _In_range_(>=, sizeof(LPSERVICE_DESCRIPTIONW))))
_When_(dwInfoLevel == SERVICE_CONFIG_FAILURE_ACTIONS,
       _At_(cbBufSize, _In_range_(>=, sizeof(LPSERVICE_FAILURE_ACTIONSW))))
_When_(dwInfoLevel == SERVICE_CONFIG_REQUIRED_PRIVILEGES_INFO,
       _At_(cbBufSize, _In_range_(>=,
                                  sizeof(LPSERVICE_REQUIRED_PRIVILEGES_INFOW))))
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
QueryServiceConfig2W(
    _In_ SC_HANDLE hService,
    _In_ DWORD dwInfoLevel,
    _Out_writes_bytes_opt_(cbBufSize)
                    LPBYTE lpBuffer,
    _In_ DWORD cbBufSize,
    _Out_ LPDWORD pcbBytesNeeded
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
QueryServiceLockStatusA(
    _In_ SC_HANDLE hSCManager,
    _Out_writes_bytes_opt_(cbBufSize)
                    LPQUERY_SERVICE_LOCK_STATUSA lpLockStatus,
    _In_ DWORD cbBufSize,
    _Out_ LPDWORD pcbBytesNeeded
    );
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
QueryServiceLockStatusW(
    _In_ SC_HANDLE hSCManager,
    _Out_writes_bytes_opt_(cbBufSize)
                    LPQUERY_SERVICE_LOCK_STATUSW lpLockStatus,
    _In_ DWORD cbBufSize,
    _Out_ LPDWORD pcbBytesNeeded
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
QueryServiceObjectSecurity(
    _In_ SC_HANDLE hService,
    _In_ SECURITY_INFORMATION dwSecurityInformation,
    _Out_writes_bytes_opt_(cbBufSize)
                    PSECURITY_DESCRIPTOR lpSecurityDescriptor,
    _In_ DWORD cbBufSize,
    _Out_ LPDWORD pcbBytesNeeded
    );
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
QueryServiceStatus(
    _In_ SC_HANDLE hService,
    _Out_ LPSERVICE_STATUS lpServiceStatus
    );
_Must_inspect_result_
WINADVAPI
BOOL
WINAPI
QueryServiceStatusEx(
    _In_ SC_HANDLE hService,
    _In_ SC_STATUS_TYPE InfoLevel,
    _Out_writes_bytes_opt_(cbBufSize)
                    LPBYTE lpBuffer,
    _In_ DWORD cbBufSize,
    _Out_ LPDWORD pcbBytesNeeded
    );
_Must_inspect_result_
WINADVAPI
SERVICE_STATUS_HANDLE
WINAPI
RegisterServiceCtrlHandlerA(
    _In_ LPCSTR lpServiceName,
    _In_ __callback
            LPHANDLER_FUNCTION lpHandlerProc
    );
_Must_inspect_result_
WINADVAPI
SERVICE_STATUS_HANDLE
WINAPI
RegisterServiceCtrlHandlerW(
    _In_ LPCWSTR lpServiceName,
    _In_ __callback
            LPHANDLER_FUNCTION lpHandlerProc
    );
_Must_inspect_result_
WINADVAPI
SERVICE_STATUS_HANDLE
WINAPI
RegisterServiceCtrlHandlerExA(
    _In_ LPCSTR lpServiceName,
    _In_ __callback
            LPHANDLER_FUNCTION_EX lpHandlerProc,
    _In_opt_ LPVOID lpContext
    );
_Must_inspect_result_
WINADVAPI
SERVICE_STATUS_HANDLE
WINAPI
RegisterServiceCtrlHandlerExW(
    _In_ LPCWSTR lpServiceName,
    _In_ __callback
            LPHANDLER_FUNCTION_EX lpHandlerProc,
    _In_opt_ LPVOID lpContext
    );
WINADVAPI
BOOL
WINAPI
SetServiceObjectSecurity(
    _In_ SC_HANDLE hService,
    _In_ SECURITY_INFORMATION dwSecurityInformation,
    _In_ PSECURITY_DESCRIPTOR lpSecurityDescriptor
    );
WINADVAPI
BOOL
WINAPI
SetServiceStatus(
    _In_ SERVICE_STATUS_HANDLE hServiceStatus,
    _In_ LPSERVICE_STATUS lpServiceStatus
    );
WINADVAPI
BOOL
WINAPI
StartServiceCtrlDispatcherA(
    _In_ CONST SERVICE_TABLE_ENTRYA *lpServiceStartTable
    );
WINADVAPI
BOOL
WINAPI
StartServiceCtrlDispatcherW(
    _In_ CONST SERVICE_TABLE_ENTRYW *lpServiceStartTable
    );
WINADVAPI
BOOL
WINAPI
StartServiceA(
    _In_ SC_HANDLE hService,
    _In_ DWORD dwNumServiceArgs,
    _In_reads_opt_(dwNumServiceArgs)
                    LPCSTR *lpServiceArgVectors
    );
WINADVAPI
BOOL
WINAPI
StartServiceW(
    _In_ SC_HANDLE hService,
    _In_ DWORD dwNumServiceArgs,
    _In_reads_opt_(dwNumServiceArgs)
                    LPCWSTR *lpServiceArgVectors
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINADVAPI
BOOL
WINAPI
UnlockServiceDatabase(
    _In_ SC_LOCK ScLock
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINADVAPI
DWORD
WINAPI
NotifyServiceStatusChangeA (
    _In_ SC_HANDLE hService,
    _In_ DWORD dwNotifyMask,
    _In_ PSERVICE_NOTIFYA pNotifyBuffer
    );
WINADVAPI
DWORD
WINAPI
NotifyServiceStatusChangeW (
    _In_ SC_HANDLE hService,
    _In_ DWORD dwNotifyMask,
    _In_ PSERVICE_NOTIFYW pNotifyBuffer
    );
WINADVAPI
BOOL
WINAPI
ControlServiceExA(
    _In_ SC_HANDLE hService,
    _In_ DWORD dwControl,
    _In_ DWORD dwInfoLevel,
    _Inout_ PVOID pControlParams
    );
WINADVAPI
BOOL
WINAPI
ControlServiceExW(
    _In_ SC_HANDLE hService,
    _In_ DWORD dwControl,
    _In_ DWORD dwInfoLevel,
    _Inout_ PVOID pControlParams
    );
WINADVAPI
BOOL
WINAPI
QueryServiceDynamicInformation (
    _In_ SERVICE_STATUS_HANDLE hServiceStatus,
    _In_ DWORD dwInfoLevel,
    _Outptr_ PVOID * ppDynamicInfo
    );
typedef enum _SC_EVENT_TYPE {
    SC_EVENT_DATABASE_CHANGE,
    SC_EVENT_PROPERTY_CHANGE,
    SC_EVENT_STATUS_CHANGE
} SC_EVENT_TYPE, *PSC_EVENT_TYPE;
typedef
VOID
CALLBACK
SC_NOTIFICATION_CALLBACK (
    _In_ DWORD dwNotify,
    _In_opt_ PVOID pCallbackContext
    );
typedef SC_NOTIFICATION_CALLBACK* PSC_NOTIFICATION_CALLBACK;
typedef struct _SC_NOTIFICATION_REGISTRATION* PSC_NOTIFICATION_REGISTRATION;
WINADVAPI
DWORD
WINAPI
SubscribeServiceChangeNotifications (
    _In_ SC_HANDLE hService,
    _In_ SC_EVENT_TYPE eEventType,
    _In_ PSC_NOTIFICATION_CALLBACK pCallback,
    _In_opt_ PVOID pCallbackContext,
    _Out_ PSC_NOTIFICATION_REGISTRATION* pSubscription
    );
WINADVAPI
VOID
WINAPI
UnsubscribeServiceChangeNotifications (
    _In_ PSC_NOTIFICATION_REGISTRATION pSubscription
    );
WINADVAPI
DWORD
WINAPI
WaitServiceState (
    _In_ SC_HANDLE hService,
    _In_ DWORD dwNotify,
    _In_opt_ DWORD dwTimeout,
    _In_opt_ HANDLE hCancelEvent
    );
typedef enum SERVICE_REGISTRY_STATE_TYPE {
    ServiceRegistryStateParameters = 0,
    ServiceRegistryStatePersistent = 1,
    MaxServiceRegistryStateType = 2,
} SERVICE_REGISTRY_STATE_TYPE;
_Must_inspect_result_
DWORD
WINAPI
GetServiceRegistryStateKey(
    _In_ SERVICE_STATUS_HANDLE ServiceStatusHandle,
    _In_ SERVICE_REGISTRY_STATE_TYPE StateType,
    _In_ DWORD AccessMask,
    _Out_ HKEY *ServiceStateKey
    );
typedef enum SERVICE_DIRECTORY_TYPE {
    ServiceDirectoryPersistentState = 0,
    ServiceDirectoryTypeMax = 1,
} SERVICE_DIRECTORY_TYPE;
_Must_inspect_result_
DWORD
WINAPI
GetServiceDirectory(
    _In_ SERVICE_STATUS_HANDLE hServiceStatus,
    _In_ SERVICE_DIRECTORY_TYPE eDirectoryType,
    _Out_writes_opt_(cchPathBufferLength) PWCHAR lpPathBuffer,
    _In_ DWORD cchPathBufferLength,
    _Out_ DWORD *lpcchRequiredBufferLength
    );
#endif
#pragma endregion
}
