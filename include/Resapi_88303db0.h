#include <winapifamily.h>
#pragma region Desktop Family or FailoverCluster Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_CLUSTER)
#include <windows.h>
#include <winsvc.h>
#include <clusapi.h>
#include <stdio.h>
extern "C" {
                                 _Version, \
                                 _Prefix, \
                                 _Arbitrate, \
                                 _Release, \
                                 _ResControl, \
                                 _ResTypeControl \
                                 ) \
CLRES_FUNCTION_TABLE _Name = { CLRES_V1_FUNCTION_SIZE, \
                               _Version, \
                               _Prefix##Open, \
                               _Prefix##Close, \
                               _Prefix##Online, \
                               _Prefix##Offline, \
                               _Prefix##Terminate, \
                               _Prefix##LooksAlive, \
                               _Prefix##IsAlive, \
                               _Arbitrate, \
                               _Release, \
                               _ResControl, \
                               _ResTypeControl }
                                     _Version, \
                                     _Prefix, \
                                     _Arbitrate, \
                                     _Release, \
                                     _ResControl, \
                                     _ResTypeControl, \
                                     _LooksAlive, \
                                     _IsAlive, \
                                     _Cancel \
                                     ) \
_Name.TableSize = CLRES_V2_FUNCTION_SIZE; \
_Name.Version = _Version; \
_Name.V2Functions.Open = _Prefix##OpenV2; \
_Name.V2Functions.Close = _Prefix##Close; \
_Name.V2Functions.Online = _Prefix##OnlineV2; \
_Name.V2Functions.Offline = _Prefix##OfflineV2; \
_Name.V2Functions.Terminate = _Prefix##Terminate; \
_Name.V2Functions.LooksAlive= _LooksAlive; \
_Name.V2Functions.IsAlive = _IsAlive; \
_Name.V2Functions.Arbitrate = _Arbitrate; \
_Name.V2Functions.Release = _Release; \
_Name.V2Functions.ResourceControl = _ResControl; \
_Name.V2Functions.ResourceTypeControl = _ResTypeControl; \
_Name.V2Functions.Cancel = _Cancel;
                                     _Version, \
                                     _Prefix, \
                                     _Arbitrate, \
                                     _Release, \
                                     _BeginResourceControl, \
                                     _BeginResourceTypeControl, \
                                     _LooksAlive, \
                                     _IsAlive, \
                                     _Cancel \
                                     ) \
_Name.TableSize = CLRES_V3_FUNCTION_SIZE; \
_Name.Version = _Version; \
_Name.V3Functions.Open = _Prefix##OpenV2; \
_Name.V3Functions.Close = _Prefix##Close; \
_Name.V3Functions.Online = _Prefix##OnlineV2; \
_Name.V3Functions.Offline = _Prefix##OfflineV2; \
_Name.V3Functions.Terminate = _Prefix##Terminate; \
_Name.V3Functions.LooksAlive= _LooksAlive; \
_Name.V3Functions.IsAlive = _IsAlive; \
_Name.V3Functions.Arbitrate = _Arbitrate; \
_Name.V3Functions.Release = _Release; \
_Name.V3Functions.Cancel = _Cancel; \
_Name.V3Functions.BeginResourceControl= _BeginResourceControl; \
_Name.V3Functions.BeginResourceTypeControl= _BeginResourceTypeControl
                                     _Version, \
                                     _Prefix, \
                                     _Arbitrate, \
                                     _Release, \
                                     _BeginResCtrl, \
                                     _BeginResTypeCtrl, \
                                     _LooksAlive, \
                                     _IsAlive, \
                                     _Cancel, \
                                     _BeginResCtrlAsUser, \
                                     _BeginResTypeCtrlAsUser \
                                     ) \
_Name.TableSize = CLRES_V4_FUNCTION_SIZE; \
_Name.Version = _Version; \
_Name.V4Functions.Open = _Prefix##OpenV2; \
_Name.V4Functions.Close = _Prefix##Close; \
_Name.V4Functions.Online = _Prefix##OnlineV2; \
_Name.V4Functions.Offline = _Prefix##OfflineV2; \
_Name.V4Functions.Terminate = _Prefix##Terminate; \
_Name.V4Functions.LooksAlive= _LooksAlive; \
_Name.V4Functions.IsAlive = _IsAlive; \
_Name.V4Functions.Arbitrate = _Arbitrate; \
_Name.V4Functions.Release = _Release; \
_Name.V4Functions.Cancel = _Cancel; \
_Name.V4Functions.BeginResourceControl= _BeginResCtrl; \
_Name.V4Functions.BeginResourceTypeControl= _BeginResTypeCtrl; \
_Name.V4Functions.BeginResourceControlAsUser= _BeginResCtrlAsUser; \
_Name.V4Functions.BeginResourceTypeControlAsUser= _BeginResTypeCtrlAsUser
typedef PVOID RESID;
typedef HANDLE RESOURCE_HANDLE;
typedef struct RESOURCE_STATUS {
    CLUSTER_RESOURCE_STATE ResourceState;
    DWORD CheckPoint;
    DWORD WaitHint;
    HANDLE EventHandle;
} RESOURCE_STATUS, *PRESOURCE_STATUS;
struct NodeUtilizationInfoElement
{
    ULONGLONG Id;
    ULONGLONG AvailableMemory;
    ULONGLONG AvailableMemoryAfterReclamation;
};
struct ResourceUtilizationInfoElement
{
    ULONGLONG PhysicalNumaId;
    ULONGLONG CurrentMemory;
};
typedef enum VM_RESDLL_CONTEXT {
    VmResdllContextTurnOff = 0,
    VmResdllContextSave = 1,
    VmResdllContextShutdown = 2,
    VmResdllContextShutdownForce = 3,
    VmResdllContextLiveMigration = 4
} VM_RESDLL_CONTEXT, *PVM_RESDLL_CONTEXT;
typedef enum RESDLL_CONTEXT_OPERATION_TYPE {
    ResdllContextOperationTypeFailback,
    ResdllContextOperationTypeDrain,
    ResdllContextOperationTypeDrainFailure,
    ResdllContextOperationTypeEmbeddedFailure,
    ResdllContextOperationTypePreemption,
    ResdllContextOperationTypeNetworkDisconnect,
    ResdllContextOperationTypeNetworkDisconnectMoveRetry
} RESDLL_CONTEXT_OPERATION_TYPE, *PRESDLL_CONTEXT_OPERATION_TYPE;
typedef struct GET_OPERATION_CONTEXT_PARAMS {
    DWORD Size;
    DWORD Version;
    RESDLL_CONTEXT_OPERATION_TYPE Type;
    DWORD Priority;
} GET_OPERATION_CONTEXT_PARAMS, *PGET_OPERATION_CONTEXT_PARAMS;
typedef struct RESOURCE_STATUS_EX {
    CLUSTER_RESOURCE_STATE ResourceState;
    DWORD CheckPoint;
    HANDLE EventHandle;
    DWORD ApplicationSpecificErrorCode;
    DWORD Flags;
    DWORD WaitHint;
} RESOURCE_STATUS_EX, *PRESOURCE_STATUS_EX;
typedef
DWORD
(_stdcall *PSET_RESOURCE_STATUS_ROUTINE_EX) (
    IN RESOURCE_HANDLE ResourceHandle,
    IN PRESOURCE_STATUS_EX ResourceStatus
    );
    ZeroMemory( _resource_status_, sizeof(RESOURCE_STATUS_EX) )
    ZeroMemory( _resource_status_, sizeof(RESOURCE_STATUS) )
typedef
DWORD
(_stdcall *PSET_RESOURCE_STATUS_ROUTINE) (
    IN RESOURCE_HANDLE ResourceHandle,
    IN PRESOURCE_STATUS ResourceStatus
    );
typedef
VOID
(_stdcall *PQUORUM_RESOURCE_LOST) (
    IN RESOURCE_HANDLE Resource
    );
typedef enum LOG_LEVEL {
    LOG_INFORMATION,
    LOG_WARNING,
    LOG_ERROR,
    LOG_SEVERE
} LOG_LEVEL, *PLOG_LEVEL;
typedef
VOID
(_stdcall *PLOG_EVENT_ROUTINE) (
    IN RESOURCE_HANDLE ResourceHandle,
    IN LOG_LEVEL LogLevel,
    IN LPCWSTR FormatString,
    ...
    );
typedef
RESID
(_stdcall *POPEN_ROUTINE) (
    IN LPCWSTR ResourceName,
    IN HKEY ResourceKey,
    IN RESOURCE_HANDLE ResourceHandle
    );
typedef
VOID
(_stdcall *PCLOSE_ROUTINE) (
    IN RESID Resource
    );
typedef
DWORD
(_stdcall *PONLINE_ROUTINE) (
    IN RESID Resource,
    IN OUT LPHANDLE EventHandle
    );
typedef
DWORD
(_stdcall *POFFLINE_ROUTINE) (
    IN RESID Resource
    );
typedef
VOID
(_stdcall *PTERMINATE_ROUTINE) (
    IN RESID Resource
    );
typedef
BOOL
(_stdcall *PIS_ALIVE_ROUTINE) (
    IN RESID Resource
    );
typedef
BOOL
(_stdcall *PLOOKS_ALIVE_ROUTINE) (
    IN RESID Resource
    );
typedef
DWORD
(_stdcall *PARBITRATE_ROUTINE) (
    IN RESID Resource,
    IN PQUORUM_RESOURCE_LOST LostQuorumResource
    );
typedef
DWORD
(_stdcall *PRELEASE_ROUTINE) (
    IN RESID Resource
    );
typedef
DWORD
(_stdcall *PRESOURCE_CONTROL_ROUTINE) (
    IN RESID Resource,
    IN DWORD ControlCode,
    IN PVOID InBuffer,
    IN DWORD InBufferSize,
    OUT PVOID OutBuffer,
    IN DWORD OutBufferSize,
    OUT LPDWORD BytesReturned
    );
typedef
DWORD
(_stdcall *PRESOURCE_TYPE_CONTROL_ROUTINE) (
    IN LPCWSTR ResourceTypeName,
    IN DWORD ControlCode,
    IN PVOID InBuffer,
    IN DWORD InBufferSize,
    OUT PVOID OutBuffer,
    IN DWORD OutBufferSize,
    OUT LPDWORD BytesReturned
    );
typedef
RESID
(_stdcall *POPEN_V2_ROUTINE) (
    _In_ LPCWSTR ResourceName,
    _In_ HKEY ResourceKey,
    _In_ RESOURCE_HANDLE ResourceHandle,
    _In_ DWORD OpenFlags
    );
typedef
DWORD
(_stdcall *PONLINE_V2_ROUTINE) (
    _In_ RESID Resource,
    _Out_ LPHANDLE EventHandle,
    _In_ DWORD OnlineFlags,
    _In_reads_bytes_opt_(InBufferSize) PBYTE InBuffer,
    _In_ DWORD InBufferSize,
    _In_ DWORD Reserved
    );
typedef
DWORD
(_stdcall *POFFLINE_V2_ROUTINE) (
    _In_ RESID Resource,
    _In_opt_ LPCWSTR DestinationNodeName,
    _In_ DWORD OfflineFlags,
    _In_reads_bytes_opt_(InBufferSize) PBYTE InBuffer,
    _In_ DWORD InBufferSize,
    _In_ DWORD Reserved
    );
typedef
DWORD
(_stdcall *PCANCEL_ROUTINE) (
    IN RESID Resource,
    IN DWORD CancelFlags_RESERVED
    );
typedef INT64 PRESTYPE_CTL_CTX;
typedef INT64 PRES_CTL_CTX;
typedef
DWORD
(_stdcall *PBEGIN_RESCALL_ROUTINE)(
    IN RESID Resource,
    IN DWORD ControlCode,
    IN PVOID InBuffer,
    IN DWORD InBufferSize,
    OUT PVOID OutBuffer,
    IN DWORD OutBufferSize,
    OUT LPDWORD BytesReturned,
    IN PRES_CTL_CTX context,
    OUT PBOOL ReturnedAsynchronously
    );
typedef
DWORD
(_stdcall *PBEGIN_RESTYPECALL_ROUTINE)(
    IN LPCWSTR ResourceTypeName,
    IN DWORD ControlCode,
    IN PVOID InBuffer,
    IN DWORD InBufferSize,
    OUT PVOID OutBuffer,
    IN DWORD OutBufferSize,
    OUT LPDWORD BytesReturned,
    IN PRESTYPE_CTL_CTX context,
    OUT PBOOL ReturnedAsynchronously
    );
typedef enum _RESOURCE_EXIT_STATE {
    ResourceExitStateContinue,
    ResourceExitStateTerminate,
    ResourceExitStateMax
} RESOURCE_EXIT_STATE;
typedef
DWORD
(_stdcall *PBEGIN_RESCALL_AS_USER_ROUTINE)(
    IN RESID Resource,
    IN HANDLE TokenHandle,
    IN DWORD ControlCode,
    IN PVOID InBuffer,
    IN DWORD InBufferSize,
    OUT PVOID OutBuffer,
    IN DWORD OutBufferSize,
    OUT LPDWORD BytesReturned,
    IN PRES_CTL_CTX context,
    OUT PBOOL ReturnedAsynchronously
    );
typedef
DWORD
(_stdcall *PBEGIN_RESTYPECALL_AS_USER_ROUTINE)(
    IN LPCWSTR ResourceTypeName,
    IN HANDLE TokenHandle,
    IN DWORD ControlCode,
    IN PVOID InBuffer,
    IN DWORD InBufferSize,
    OUT PVOID OutBuffer,
    IN DWORD OutBufferSize,
    OUT LPDWORD BytesReturned,
    IN PRESTYPE_CTL_CTX context,
    OUT PBOOL ReturnedAsynchronously
    );
typedef struct CLRES_V1_FUNCTIONS {
    POPEN_ROUTINE Open;
    PCLOSE_ROUTINE Close;
    PONLINE_ROUTINE Online;
    POFFLINE_ROUTINE Offline;
    PTERMINATE_ROUTINE Terminate;
    PLOOKS_ALIVE_ROUTINE LooksAlive;
    PIS_ALIVE_ROUTINE IsAlive;
    PARBITRATE_ROUTINE Arbitrate;
    PRELEASE_ROUTINE Release;
    PRESOURCE_CONTROL_ROUTINE ResourceControl;
    PRESOURCE_TYPE_CONTROL_ROUTINE ResourceTypeControl;
} CLRES_V1_FUNCTIONS, *PCLRES_V1_FUNCTIONS;
typedef struct CLRES_V2_FUNCTIONS {
    POPEN_V2_ROUTINE Open;
    PCLOSE_ROUTINE Close;
    PONLINE_V2_ROUTINE Online;
    POFFLINE_V2_ROUTINE Offline;
    PTERMINATE_ROUTINE Terminate;
    PLOOKS_ALIVE_ROUTINE LooksAlive;
    PIS_ALIVE_ROUTINE IsAlive;
    PARBITRATE_ROUTINE Arbitrate;
    PRELEASE_ROUTINE Release;
    PRESOURCE_CONTROL_ROUTINE ResourceControl;
    PRESOURCE_TYPE_CONTROL_ROUTINE ResourceTypeControl;
    PCANCEL_ROUTINE Cancel;
} CLRES_V2_FUNCTIONS, *PCLRES_V2_FUNCTIONS;
typedef struct CLRES_V3_FUNCTIONS {
    POPEN_V2_ROUTINE Open;
    PCLOSE_ROUTINE Close;
    PONLINE_V2_ROUTINE Online;
    POFFLINE_V2_ROUTINE Offline;
    PTERMINATE_ROUTINE Terminate;
    PLOOKS_ALIVE_ROUTINE LooksAlive;
    PIS_ALIVE_ROUTINE IsAlive;
    PARBITRATE_ROUTINE Arbitrate;
    PRELEASE_ROUTINE Release;
    PBEGIN_RESCALL_ROUTINE BeginResourceControl;
    PBEGIN_RESTYPECALL_ROUTINE BeginResourceTypeControl;
    PCANCEL_ROUTINE Cancel;
} CLRES_V3_FUNCTIONS, *PCLRES_V3_FUNCTIONS;
typedef struct CLRES_V4_FUNCTIONS {
    POPEN_V2_ROUTINE Open;
    PCLOSE_ROUTINE Close;
    PONLINE_V2_ROUTINE Online;
    POFFLINE_V2_ROUTINE Offline;
    PTERMINATE_ROUTINE Terminate;
    PLOOKS_ALIVE_ROUTINE LooksAlive;
    PIS_ALIVE_ROUTINE IsAlive;
    PARBITRATE_ROUTINE Arbitrate;
    PRELEASE_ROUTINE Release;
    PBEGIN_RESCALL_ROUTINE BeginResourceControl;
    PBEGIN_RESTYPECALL_ROUTINE BeginResourceTypeControl;
    PCANCEL_ROUTINE Cancel;
    PBEGIN_RESCALL_AS_USER_ROUTINE BeginResourceControlAsUser;
    PBEGIN_RESTYPECALL_AS_USER_ROUTINE BeginResourceTypeControlAsUser;
} CLRES_V4_FUNCTIONS, *PCLRES_V4_FUNCTIONS;
#pragma warning( disable : 4201 )
typedef struct CLRES_FUNCTION_TABLE {
    DWORD TableSize;
    DWORD Version;
    union {
        CLRES_V1_FUNCTIONS V1Functions;
        CLRES_V2_FUNCTIONS V2Functions;
        CLRES_V3_FUNCTIONS V3Functions;
        CLRES_V4_FUNCTIONS V4Functions;
    } DUMMYUNIONNAME;
} CLRES_FUNCTION_TABLE, *PCLRES_FUNCTION_TABLE;
#pragma warning( default : 4201 )
typedef struct RESUTIL_LARGEINT_DATA {
    LARGE_INTEGER Default;
    LARGE_INTEGER Minimum;
    LARGE_INTEGER Maximum;
} RESUTIL_LARGEINT_DATA, *PRESUTIL_LARGEINT_DATA;
typedef struct RESUTIL_ULARGEINT_DATA {
    ULARGE_INTEGER Default;
    ULARGE_INTEGER Minimum;
    ULARGE_INTEGER Maximum;
} RESUTIL_ULARGEINT_DATA, *PRESUTIL_ULARGEINT_DATA;
typedef struct RESUTIL_FILETIME_DATA {
    FILETIME Default;
    FILETIME Minimum;
    FILETIME Maximum;
} RESUTIL_FILETIME_DATA, *PRESUTIL_FILETIME_DATA;
typedef struct RESUTIL_PROPERTY_ITEM {
    LPWSTR Name;
    LPWSTR KeyName;
    DWORD Format;
    union {
        DWORD_PTR DefaultPtr;
        DWORD Default;
        LPVOID lpDefault;
        PRESUTIL_LARGEINT_DATA LargeIntData;
        PRESUTIL_ULARGEINT_DATA ULargeIntData;
        PRESUTIL_FILETIME_DATA FileTimeData;
    } DUMMYUNIONNAME;
    DWORD Minimum;
    DWORD Maximum;
    DWORD Flags;
    DWORD Offset;
} RESUTIL_PROPERTY_ITEM, *PRESUTIL_PROPERTY_ITEM;
typedef
DWORD
(_stdcall *PSTARTUP_ROUTINE) (
    IN LPCWSTR ResourceType,
    IN DWORD MinVersionSupported,
    IN DWORD MaxVersionSupported,
    IN PSET_RESOURCE_STATUS_ROUTINE SetResourceStatus,
    IN PLOG_EVENT_ROUTINE LogEvent,
    OUT PCLRES_FUNCTION_TABLE *FunctionTable
    );
typedef enum _FAILURE_TYPE {
    FAILURE_TYPE_GENERAL = 0,
    FAILURE_TYPE_EMBEDDED = 1,
    FAILURE_TYPE_NETWORK_LOSS = 2
} FAILURE_TYPE, *PFAILURE_TYPE;
typedef enum CLUSTER_RESOURCE_APPLICATION_STATE
{
    ClusterResourceApplicationStateUnknown = 1,
    ClusterResourceApplicationOSHeartBeat,
    ClusterResourceApplicationReady
} CLUSTER_RESOURCE_APPLICATION_STATE;
typedef
DWORD
(_stdcall *PSET_RESOURCE_LOCKED_MODE_ROUTINE) (
    _In_ RESOURCE_HANDLE ResourceHandle,
    _In_ BOOL LockedModeEnabled,
    _In_ DWORD LockedModeReason
);
typedef
DWORD
(_stdcall *PSIGNAL_FAILURE_ROUTINE) (
    _In_ RESOURCE_HANDLE ResourceHandle,
    _In_ FAILURE_TYPE FailureType,
    _In_ DWORD ApplicationSpecificErrorCode
);
typedef
DWORD
(_stdcall *PSET_RESOURCE_INMEMORY_NODELOCAL_PROPERTIES_ROUTINE) (
    _In_ RESOURCE_HANDLE ResourceHandle,
    _In_ unsigned char * propertyListBuffer,
    _In_ DWORD propertyListBufferSize
);
typedef
DWORD
(_stdcall *PEND_CONTROL_CALL) (
    _In_ const PRES_CTL_CTX context,
    _In_ DWORD status
);
typedef
DWORD
(_stdcall *PEND_TYPE_CONTROL_CALL) (
    _In_ const PRESTYPE_CTL_CTX context,
    _In_ DWORD status
);
typedef
DWORD
(_stdcall *PEXTEND_RES_CONTROL_CALL) (
    _In_ const PRES_CTL_CTX context,
    _In_ DWORD newTimeoutInMs
);
typedef
DWORD
(_stdcall *PEXTEND_RES_TYPE_CONTROL_CALL) (
    _In_ const PRESTYPE_CTL_CTX context,
    _In_ DWORD newTimeoutInMs
);
typedef
DWORD
(_stdcall *PRAISE_RES_TYPE_NOTIFICATION) (
    _In_ LPCWSTR ResourceType,
    _In_reads_bytes_(payloadSize) const PBYTE pPayload,
    _In_ DWORD payloadSize
);
typedef
DWORD
(_stdcall *PCHANGE_RESOURCE_PROCESS_FOR_DUMPS) (
    _In_ RESOURCE_HANDLE resource,
    _In_ LPCWSTR processName,
    _In_ DWORD processId,
    _In_ BOOL isAdd
    );
typedef
DWORD
(_stdcall *PCHANGE_RES_TYPE_PROCESS_FOR_DUMPS) (
    _In_ LPCWSTR resourceTypeName,
    _In_ LPCWSTR processName,
    _In_ DWORD processId,
    _In_ BOOL isAdd
    );
typedef
DWORD
(_stdcall *PSET_INTERNAL_STATE) (
    _In_ RESOURCE_HANDLE,
    _In_ CLUSTER_RESOURCE_APPLICATION_STATE stateType,
    _In_ BOOL active
    );
typedef
DWORD
(_stdcall *PSET_RESOURCE_LOCKED_MODE_EX_ROUTINE) (
    _In_ RESOURCE_HANDLE ResourceHandle,
    _In_ BOOL LockedModeEnabled,
    _In_ DWORD LockedModeReason,
    _In_ DWORD LockedModeFlags
);
typedef struct CLRES_CALLBACK_FUNCTION_TABLE {
    PLOG_EVENT_ROUTINE LogEvent;
    PSET_RESOURCE_STATUS_ROUTINE_EX SetResourceStatusEx;
    PSET_RESOURCE_LOCKED_MODE_ROUTINE SetResourceLockedMode;
    PSIGNAL_FAILURE_ROUTINE SignalFailure;
    PSET_RESOURCE_INMEMORY_NODELOCAL_PROPERTIES_ROUTINE SetResourceInMemoryNodeLocalProperties;
    PEND_CONTROL_CALL EndControlCall;
    PEND_TYPE_CONTROL_CALL EndTypeControlCall;
    PEXTEND_RES_CONTROL_CALL ExtendControlCall;
    PEXTEND_RES_TYPE_CONTROL_CALL ExtendTypeControlCall;
    PRAISE_RES_TYPE_NOTIFICATION RaiseResTypeNotification;
    PCHANGE_RESOURCE_PROCESS_FOR_DUMPS ChangeResourceProcessForDumps;
    PCHANGE_RES_TYPE_PROCESS_FOR_DUMPS ChangeResTypeProcessForDumps;
    PSET_INTERNAL_STATE SetInternalState;
    PSET_RESOURCE_LOCKED_MODE_EX_ROUTINE SetResourceLockedModeEx;
}CLRES_CALLBACK_FUNCTION_TABLE, *PCLRES_CALLBACK_FUNCTION_TABLE;
typedef
DWORD
(_stdcall *PSTARTUP_EX_ROUTINE) (
    IN LPCWSTR ResourceType,
    IN DWORD MinVersionSupported,
    IN DWORD MaxVersionSupported,
    IN PCLRES_CALLBACK_FUNCTION_TABLE MonitorCallbackFunctions,
    OUT PCLRES_FUNCTION_TABLE * ResourceDllInterfaceFunctions
    );
typedef enum RESOURCE_MONITOR_STATE {
    RmonInitializing,
    RmonIdle,
    RmonStartingResource,
    RmonInitializingResource,
    RmonOnlineResource,
    RmonOfflineResource,
    RmonShutdownResource,
    RmonDeletingResource,
    RmonIsAlivePoll,
    RmonLooksAlivePoll,
    RmonArbitrateResource,
    RmonReleaseResource,
    RmonResourceControl,
    RmonResourceTypeControl,
    RmonTerminateResource,
    RmonDeadlocked
} RESOURCE_MONITOR_STATE;
typedef struct MONITOR_STATE {
    LARGE_INTEGER LastUpdate;
    RESOURCE_MONITOR_STATE State;
    HANDLE ActiveResource;
    BOOL ResmonStop;
} MONITOR_STATE, *PMONITOR_STATE;
typedef struct POST_UPGRADE_VERSION_INFO {
    DWORD newMajorVersion;
    DWORD newUpgradeVersion;
    DWORD oldMajorVersion;
    DWORD oldUpgradeVersion;
    DWORD reserved;
} POST_UPGRADE_VERSION_INFO, *PPOST_UPGRADE_VERSION_INFO;
typedef struct _CLUSTER_HEALTH_FAULT{
    LPWSTR Id;
    DWORD ErrorType;
    DWORD ErrorCode;
    LPWSTR Description;
    LPWSTR Provider;
    DWORD Flags;
    DWORD Reserved;
} CLUSTER_HEALTH_FAULT, *PCLUSTER_HEALTH_FAULT;
typedef struct _CLUSTER_HEALTH_FAULT_ARRAY
{
    DWORD numFaults;
    CLUSTER_HEALTH_FAULT * faults;
} CLUSTER_HEALTH_FAULT_ARRAY, *PCLUSTER_HEALTH_FAULT_ARRAY;
DWORD
InitializeClusterHealthFault(
    _Inout_ CLUSTER_HEALTH_FAULT* clusterHealthFault
    );
DWORD
InitializeClusterHealthFaultArray(
    _Inout_ CLUSTER_HEALTH_FAULT_ARRAY* clusterHealthFaultArray
    );
DWORD
FreeClusterHealthFault(
    _Inout_ CLUSTER_HEALTH_FAULT* clusterHealthFault
    );
DWORD
FreeClusterHealthFaultArray(
    _Inout_ CLUSTER_HEALTH_FAULT_ARRAY* clusterHealthFaultArray
    );
DWORD
WINAPI
ClusGetClusterHealthFaults(
    _In_ HCLUSTER hCluster,
    _Out_ CLUSTER_HEALTH_FAULT_ARRAY* objects,
    _In_ DWORD flags);
DWORD
WINAPI
ClusRemoveClusterHealthFault(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR id,
    _In_ DWORD flags
);
DWORD
WINAPI
ClusAddClusterHealthFault(
    _In_ HCLUSTER hCluster,
    _In_ CLUSTER_HEALTH_FAULT* failure,
    _In_ DWORD
);
DWORD
WINAPI
ResUtilStartResourceService(
    IN LPCWSTR pszServiceName,
    OUT LPSC_HANDLE phServiceHandle
    );
typedef DWORD
(WINAPI * PRESUTIL_START_RESOURCE_SERVICE)(
    IN LPCWSTR pszServiceName,
    OUT LPSC_HANDLE phServiceHandle
    );
DWORD
WINAPI
ResUtilVerifyResourceService(
    IN LPCWSTR pszServiceName
    );
typedef DWORD
(WINAPI * PRESUTIL_VERIFY_RESOURCE_SERVICE)(
    IN LPCWSTR pszServiceName
    );
DWORD
WINAPI
ResUtilStopResourceService(
    IN LPCWSTR pszServiceName
    );
typedef DWORD
(WINAPI * PRESUTIL_STOP_RESOURCE_SERVICE)(
    IN LPCWSTR pszServiceName
    );
DWORD
WINAPI
ResUtilVerifyService(
    IN SC_HANDLE hServiceHandle
    );
typedef DWORD
(WINAPI * PRESUTIL_VERIFY_SERVICE)(
    IN SC_HANDLE hServiceHandle
    );
DWORD
WINAPI
ResUtilStopService(
    IN SC_HANDLE hServiceHandle
    );
typedef DWORD
(WINAPI * PRESUTIL_STOP_SERVICE)(
    IN SC_HANDLE hServiceHandle
    );
DWORD
WINAPI
ResUtilCreateDirectoryTree(
    IN LPCWSTR pszPath
    );
typedef DWORD
(WINAPI * PRESUTIL_CREATE_DIRECTORY_TREE)(
    IN LPCWSTR pszPath
    );
BOOL
WINAPI
ResUtilIsPathValid(
    IN LPCWSTR pszPath
    );
typedef BOOL
(WINAPI * PRESUTIL_IS_PATH_VALID)(
    IN LPCWSTR pszPath
    );
DWORD
WINAPI
ResUtilEnumProperties(
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    _Out_writes_bytes_to_(cbOutPropertiesSize, *pcbBytesReturned) LPWSTR pszOutProperties,
    _In_ DWORD cbOutPropertiesSize,
    _Out_ LPDWORD pcbBytesReturned,
    _Out_ LPDWORD pcbRequired
    );
typedef DWORD
(WINAPI * PRESUTIL_ENUM_PROPERTIES)(
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    _Out_writes_bytes_to_(cbOutPropertiesSize, *pcbBytesReturned) LPWSTR pszOutProperties,
    _In_ DWORD cbOutPropertiesSize,
    _Out_ LPDWORD pcbBytesReturned,
    _Out_ LPDWORD pcbRequired
    );
DWORD
WINAPI
ResUtilEnumPrivateProperties(
    _In_ HKEY hkeyClusterKey,
    _Out_writes_bytes_to_(cbOutPropertiesSize, *pcbBytesReturned) LPWSTR pszOutProperties,
    _In_ DWORD cbOutPropertiesSize,
    _Out_ LPDWORD pcbBytesReturned,
    _Out_ LPDWORD pcbRequired
    );
typedef DWORD
(WINAPI * PRESUTIL_ENUM_PRIVATE_PROPERTIES)(
    _In_ HKEY hkeyClusterKey,
    _Out_writes_bytes_to_(cbOutPropertiesSize, *pcbBytesReturned) LPWSTR pszOutProperties,
    _In_ DWORD cbOutPropertiesSize,
    _Out_ LPDWORD pcbBytesReturned,
    _Out_ LPDWORD pcbRequired
    );
DWORD
WINAPI
ResUtilGetProperties(
    _In_ HKEY hkeyClusterKey,
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    _Out_writes_bytes_to_(cbOutPropertyListSize, *pcbBytesReturned) PVOID pOutPropertyList,
    _In_ DWORD cbOutPropertyListSize,
    _Out_ LPDWORD pcbBytesReturned,
    _Out_ LPDWORD pcbRequired
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_PROPERTIES)(
    _In_ HKEY hkeyClusterKey,
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    _Out_writes_bytes_to_(cbOutPropertyListSize, *pcbBytesReturned) PVOID pOutPropertyList,
    _In_ DWORD cbOutPropertyListSize,
    _Out_ LPDWORD pcbBytesReturned,
    _Out_ LPDWORD pcbRequired
    );
DWORD
WINAPI
ResUtilGetAllProperties(
    _In_ HKEY hkeyClusterKey,
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    _Out_writes_bytes_to_(cbOutPropertyListSize, *pcbBytesReturned) PVOID pOutPropertyList,
    _In_ DWORD cbOutPropertyListSize,
    _Out_ LPDWORD pcbBytesReturned,
    _Out_ LPDWORD pcbRequired
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_ALL_PROPERTIES)(
    _In_ HKEY hkeyClusterKey,
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    _Out_writes_bytes_to_(cbOutPropertyListSize, *pcbBytesReturned) PVOID pOutPropertyList,
    _In_ DWORD cbOutPropertyListSize,
    _Out_ LPDWORD pcbBytesReturned,
    _Out_ LPDWORD pcbRequired
    );
DWORD
WINAPI
ResUtilGetPrivateProperties(
    _In_ HKEY hkeyClusterKey,
    _Out_writes_bytes_to_(cbOutPropertyListSize, *pcbBytesReturned) PVOID pOutPropertyList,
    _In_ DWORD cbOutPropertyListSize,
    _Out_ LPDWORD pcbBytesReturned,
    _Out_ LPDWORD pcbRequired
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_PRIVATE_PROPERTIES)(
    _In_ HKEY hkeyClusterKey,
    _Out_writes_bytes_to_(cbOutPropertyListSize, *pcbBytesReturned) PVOID pOutPropertyList,
    _In_ DWORD cbOutPropertyListSize,
    _Out_ LPDWORD pcbBytesReturned,
    _Out_ LPDWORD pcbRequired
    );
DWORD
WINAPI
ResUtilGetPropertySize(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTableItem,
    IN OUT LPDWORD pcbOutPropertyListSize,
    IN OUT LPDWORD pnPropertyCount
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_PROPERTY_SIZE)(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTableItem,
    IN OUT LPDWORD pcbOutPropertyListSize,
    IN OUT LPDWORD pnPropertyCount
    );
_Success_( return == ERROR_SUCCESS )
DWORD
WINAPI
ResUtilGetProperty(
    _In_ HKEY hkeyClusterKey,
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTableItem,
    _Inout_ _At_(*pOutPropertyItem, _Pre_readable_byte_size_(*pcbOutPropertyItemSize) _Post_readable_byte_size_(*pcbOutPropertyItemSize)) PVOID *pOutPropertyItem,
    _Inout_ LPDWORD pcbOutPropertyItemSize
    );
typedef
_Success_( return == ERROR_SUCCESS )
DWORD
(WINAPI * PRESUTIL_GET_PROPERTY)(
    _In_ HKEY hkeyClusterKey,
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTableItem,
    _Inout_ _At_(*pOutPropertyItem, _Pre_readable_byte_size_(*pcbOutPropertyItemSize) _Post_readable_byte_size_(*pcbOutPropertyItemSize)) PVOID *pOutPropertyItem,
    _Inout_ LPDWORD pcbOutPropertyItemSize
    );
DWORD
WINAPI
ResUtilVerifyPropertyTable(
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    _Reserved_ PVOID Reserved,
    _In_ BOOL bAllowUnknownProperties,
    _In_reads_bytes_(cbInPropertyListSize) const PVOID pInPropertyList,
    _In_ DWORD cbInPropertyListSize,
    _Out_opt_ LPBYTE pOutParams
    );
typedef DWORD
(WINAPI * PRESUTIL_VERIFY_PROPERTY_TABLE)(
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    _Reserved_ PVOID Reserved,
    _In_ BOOL bAllowUnknownProperties,
    _In_reads_bytes_(cbInPropertyListSize) const PVOID pInPropertyList,
    _In_ DWORD cbInPropertyListSize,
    _Out_opt_ LPBYTE pOutParams
    );
DWORD
WINAPI
ResUtilSetPropertyTable(
    _In_ HKEY hkeyClusterKey,
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    _Reserved_ PVOID Reserved,
    _In_ BOOL bAllowUnknownProperties,
    _In_reads_bytes_(cbInPropertyListSize) const PVOID pInPropertyList,
    _In_ DWORD cbInPropertyListSize,
    _Out_opt_ LPBYTE pOutParams
    );
typedef DWORD
(WINAPI * PRESUTIL_SET_PROPERTY_TABLE)(
    _In_ HKEY hkeyClusterKey,
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    _Reserved_ PVOID Reserved,
    _In_ BOOL bAllowUnknownProperties,
    _In_reads_bytes_(cbInPropertyListSize) const PVOID pInPropertyList,
    _In_ DWORD cbInPropertyListSize,
    _Out_opt_ LPBYTE pOutParams
    );
DWORD
WINAPI
ResUtilSetPropertyTableEx(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    IN PVOID Reserved,
    IN BOOL bAllowUnknownProperties,
    IN const PVOID pInPropertyList,
    IN DWORD cbInPropertyListSize,
    IN BOOL bForceWrite,
    OUT OPTIONAL LPBYTE pOutParams
    );
typedef DWORD
(WINAPI * PRESUTIL_SET_PROPERTY_TABLE_EX)(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    IN PVOID Reserved,
    IN BOOL bAllowUnknownProperties,
    IN const PVOID pInPropertyList,
    IN DWORD cbInPropertyListSize,
    IN BOOL bForceWrite,
    OUT OPTIONAL LPBYTE pOutParams
    );
DWORD
WINAPI
ResUtilSetPropertyParameterBlock(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    IN PVOID Reserved,
    IN const LPBYTE pInParams,
    IN const PVOID pInPropertyList,
    IN DWORD cbInPropertyListSize,
    OUT OPTIONAL LPBYTE pOutParams
    );
typedef DWORD
(WINAPI * PRESUTIL_SET_PROPERTY_PARAMETER_BLOCK)(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    IN PVOID Reserved,
    IN const LPBYTE pInParams,
    IN const PVOID pInPropertyList,
    IN DWORD cbInPropertyListSize,
    OUT OPTIONAL LPBYTE pOutParams
    );
DWORD
WINAPI
ResUtilSetPropertyParameterBlockEx(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    IN PVOID Reserved,
    IN const LPBYTE pInParams,
    IN const PVOID pInPropertyList,
    IN DWORD cbInPropertyListSize,
    IN BOOL bForceWrite,
    OUT OPTIONAL LPBYTE pOutParams
    );
typedef DWORD
(WINAPI * PRESUTIL_SET_PROPERTY_PARAMETER_BLOCK_EX)(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    IN PVOID Reserved,
    IN const LPBYTE pInParams,
    IN const PVOID pInPropertyList,
    IN DWORD cbInPropertyListSize,
    IN BOOL bForceWrite,
    OUT OPTIONAL LPBYTE pOutParams
    );
DWORD
WINAPI
ResUtilSetUnknownProperties(
    _In_ HKEY hkeyClusterKey,
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    _In_reads_bytes_(cbInPropertyListSize) const PVOID pInPropertyList,
    _In_ DWORD cbInPropertyListSize
    );
typedef DWORD
(WINAPI * PRESUTIL_SET_UNKNOWN_PROPERTIES)(
    _In_ HKEY hkeyClusterKey,
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    _In_reads_bytes_(cbInPropertyListSize) const PVOID pInPropertyList,
    _In_ DWORD cbInPropertyListSize
    );
DWORD
WINAPI
ResUtilGetPropertiesToParameterBlock(
    _In_ HKEY hkeyClusterKey,
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    _Inout_ LPBYTE pOutParams,
    _In_ BOOL bCheckForRequiredProperties,
    _Outptr_result_maybenull_ LPWSTR * pszNameOfPropInError
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_PROPERTIES_TO_PARAMETER_BLOCK)(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    OUT LPBYTE pOutParams,
    IN BOOL bCheckForRequiredProperties,
    OUT OPTIONAL LPWSTR * pszNameOfPropInError
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_PROPERTIES_TO_PARAMETER_BLOCK)(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    OUT LPBYTE pOutParams,
    IN BOOL bCheckForRequiredProperties,
    OUT OPTIONAL LPWSTR * pszNameOfPropInError
    );
DWORD
WINAPI
ResUtilPropertyListFromParameterBlock(
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    _Out_writes_bytes_to_opt_(*pcbOutPropertyListSize, *pcbBytesReturned ) PVOID pOutPropertyList,
    _Inout_ LPDWORD pcbOutPropertyListSize,
    _In_ const LPBYTE pInParams,
    _Out_ LPDWORD pcbBytesReturned,
    _Out_ LPDWORD pcbRequired
    );
typedef DWORD
(WINAPI * PRESUTIL_PROPERTY_LIST_FROM_PARAMETER_BLOCK)(
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    _Out_writes_bytes_to_opt_(*pcbOutPropertyListSize, *pcbBytesReturned ) PVOID pOutPropertyList,
    _Inout_ LPDWORD pcbOutPropertyListSize,
    _In_ const LPBYTE pInParams,
    _Out_ LPDWORD pcbBytesReturned,
    _Out_ LPDWORD pcbRequired
    );
DWORD
WINAPI
ResUtilDupParameterBlock(
    OUT LPBYTE pOutParams,
    IN const LPBYTE pInParams,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable
    );
typedef DWORD
(WINAPI * PRESUTIL_DUP_PARAMETER_BLOCK)(
    OUT LPBYTE pOutParams,
    IN const LPBYTE pInParams,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable
    );
void
WINAPI
ResUtilFreeParameterBlock(
    IN OUT LPBYTE pOutParams,
    IN const LPBYTE pInParams,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable
    );
typedef void
(WINAPI * PRESUTIL_FREE_PARAMETER_BLOCK)(
    IN OUT LPBYTE pOutParams,
    IN const LPBYTE pInParams,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable
    );
DWORD
WINAPI
ResUtilAddUnknownProperties(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    IN OUT PVOID pOutPropertyList,
    IN DWORD pcbOutPropertyListSize,
    IN OUT LPDWORD pcbBytesReturned,
    IN OUT LPDWORD pcbRequired
    );
typedef DWORD
(WINAPI * PRESUTIL_ADD_UNKNOWN_PROPERTIES)(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    IN OUT PVOID pOutPropertyList,
    IN DWORD pcbOutPropertyListSize,
    IN OUT LPDWORD pcbBytesReturned,
    IN OUT LPDWORD pcbRequired
    );
DWORD
WINAPI
ResUtilSetPrivatePropertyList(
    _In_ HKEY hkeyClusterKey,
    _In_reads_bytes_(cbInPropertyListSize) const PVOID pInPropertyList,
    _In_ DWORD cbInPropertyListSize
    );
typedef DWORD
(WINAPI * PRESUTIL_SET_PRIVATE_PROPERTY_LIST)(
    _In_ HKEY hkeyClusterKey,
    _In_reads_bytes_(cbInPropertyListSize) const PVOID pInPropertyList,
    _In_ DWORD cbInPropertyListSize
    );
DWORD
WINAPI
ResUtilVerifyPrivatePropertyList(
    _In_reads_bytes_(cbInPropertyListSize) const PVOID pInPropertyList,
    _In_ DWORD cbInPropertyListSize
    );
typedef DWORD
(WINAPI * PRESUTIL_VERIFY_PRIVATE_PROPERTY_LIST)(
    _In_reads_bytes_(cbInPropertyListSize) const PVOID pInPropertyList,
    _In_ DWORD cbInPropertyListSize
    );
PWSTR
WINAPI
ResUtilDupString(
    IN LPCWSTR pszInString
    );
typedef PWSTR
(WINAPI * PRESUTIL_DUP_STRING)(
    IN LPCWSTR pszInString
    );
DWORD
WINAPI
ResUtilGetBinaryValue(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR pszValueName,
    _Outptr_result_bytebuffer_to_maybenull_(*pcbOutValueSize, *pcbOutValueSize) LPBYTE *ppbOutValue,
    _Out_ LPDWORD pcbOutValueSize
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_BINARY_VALUE)(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR pszValueName,
    _Outptr_result_bytebuffer_to_maybenull_(*pcbOutValueSize, *pcbOutValueSize) LPBYTE *ppbOutValue,
    _Out_ LPDWORD pcbOutValueSize
    );
LPWSTR
WINAPI
ResUtilGetSzValue(
    IN HKEY hkeyClusterKey,
    IN LPCWSTR pszValueName
    );
typedef LPWSTR
(WINAPI * PRESUTIL_GET_SZ_VALUE)(
    IN HKEY hkeyClusterKey,
    IN LPCWSTR pszValueName
    );
LPWSTR
WINAPI
ResUtilGetExpandSzValue(
    IN HKEY hkeyClusterKey,
    IN LPCWSTR pszValueName,
    IN BOOL bExpand
    );
typedef LPWSTR
(WINAPI * PRESUTIL_GET_EXPAND_SZ_VALUE)(
    IN HKEY hkeyClusterKey,
    IN LPCWSTR pszValueName,
    IN BOOL bExpand
    );
FORCEINLINE
DWORD
WINAPI_INLINE
ResUtilGetMultiSzValue(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR pszValueName,
    _Outptr_result_bytebuffer_to_maybenull_(*pcbOutValueSize, *pcbOutValueSize) LPWSTR *ppszOutValue,
    _Out_ LPDWORD pcbOutValueSize
    )
{
    return ResUtilGetBinaryValue( hkeyClusterKey, pszValueName, (LPBYTE *) ppszOutValue, pcbOutValueSize );
}
DWORD
WINAPI
ResUtilGetDwordValue(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR pszValueName,
    _Out_ LPDWORD pdwOutValue,
    _In_ DWORD dwDefaultValue
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_DWORD_VALUE)(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR pszValueName,
    _Out_ LPDWORD pdwOutValue,
    _In_ DWORD dwDefaultValue
    );
DWORD
WINAPI
ResUtilGetQwordValue(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR pszValueName,
    _Out_ PULONGLONG pqwOutValue,
    _In_ ULONGLONG qwDefaultValue
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_QWORD_VALUE)(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR pszValueName,
    _Out_ PULONGLONG pqwOutValue,
    _In_ ULONGLONG qwDefaultValue
    );
DWORD
WINAPI
ResUtilSetBinaryValue(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR pszValueName,
    _In_reads_bytes_(cbNewValueSize) const LPBYTE pbNewValue,
    _In_ DWORD cbNewValueSize,
    _Inout_opt_ _At_(*ppbOutValue, _When_(*ppbOutValue != NULL, _Pre_readable_byte_size_(*pcbOutValueSize)) _Post_readable_byte_size_(*pcbOutValueSize))
            LPBYTE *ppbOutValue,
    _Inout_ LPDWORD pcbOutValueSize
    );
typedef DWORD
(WINAPI * PRESUTIL_SET_BINARY_VALUE)(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR pszValueName,
    _In_reads_bytes_(cbNewValueSize) const LPBYTE pbNewValue,
    _In_ DWORD cbNewValueSize,
    _Inout_opt_ _At_(*ppbOutValue, _When_(*ppbOutValue != NULL, _Pre_readable_byte_size_(*pcbOutValueSize)) _Post_readable_byte_size_(*pcbOutValueSize))
            LPBYTE *ppbOutValue,
    _Inout_ LPDWORD pcbOutValueSize
    );
DWORD
WINAPI
ResUtilSetSzValue(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR pszValueName,
    _In_ LPCWSTR pszNewValue,
    _Inout_opt_ LPWSTR *ppszOutString
    );
typedef DWORD
(WINAPI * PRESUTIL_SET_SZ_VALUE)(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR pszValueName,
    _In_ LPCWSTR pszNewValue,
    _Inout_opt_ LPWSTR *ppszOutString
    );
DWORD
WINAPI
ResUtilSetExpandSzValue(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR pszValueName,
    _In_ LPCWSTR pszNewValue,
    _Inout_opt_ LPWSTR *ppszOutString
    );
typedef DWORD
(WINAPI * PRESUTIL_SET_EXPAND_SZ_VALUE)(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR pszValueName,
    _In_ LPCWSTR pszNewValue,
    _Inout_opt_ LPWSTR *ppszOutString
    );
DWORD
WINAPI
ResUtilSetMultiSzValue(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR pszValueName,
    _In_reads_bytes_(cbNewValueSize) LPCWSTR pszNewValue,
    _In_ DWORD cbNewValueSize,
    _Outptr_opt_result_bytebuffer_to_(*pcbOutValueSize, *pcbOutValueSize) LPWSTR *ppszOutValue,
    _Inout_opt_ LPDWORD pcbOutValueSize
    );
typedef DWORD
(WINAPI * PRESUTIL_SET_MULTI_SZ_VALUE)(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR pszValueName,
    _In_reads_bytes_(cbNewValueSize) LPCWSTR pszNewValue,
    _In_ DWORD cbNewValueSize,
    _Outptr_opt_result_bytebuffer_to_(*pcbOutValueSize, *pcbOutValueSize) LPWSTR *ppszOutValue,
    _Inout_opt_ LPDWORD pcbOutValueSize
    );
DWORD
WINAPI
ResUtilSetDwordValue(
    IN HKEY hkeyClusterKey,
    IN LPCWSTR pszValueName,
    IN DWORD dwNewValue,
    IN OUT LPDWORD pdwOutValue
    );
typedef DWORD
(WINAPI * PRESUTIL_SET_DWORD_VALUE)(
    IN HKEY hkeyClusterKey,
    IN LPCWSTR pszValueName,
    IN DWORD dwNewValue,
    IN OUT LPDWORD pdwOutValue
    );
DWORD
WINAPI
ResUtilSetQwordValue(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR pszValueName,
    _In_ ULONGLONG qwNewValue,
    _Inout_opt_ PULONGLONG pqwOutValue
    );
typedef DWORD
(WINAPI * PRESUTIL_SET_QWORD_VALUE)(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR pszValueName,
    _In_ ULONGLONG qwNewValue,
    _Inout_opt_ PULONGLONG pqwOutValue
    );
DWORD
WINAPI
ResUtilSetValueEx(
    _In_ HKEY hkeyClusterKey,
    _In_ LPCWSTR valueName,
    _In_ DWORD valueType,
    _In_reads_bytes_(valueSize) const LPBYTE valueData,
    _In_ DWORD valueSize,
    _In_ DWORD flags
    );
DWORD
WINAPI
ResUtilGetBinaryProperty(
    _Outptr_result_bytebuffer_(*pcbOutValueSize) LPBYTE *ppbOutValue,
    _Out_ LPDWORD pcbOutValueSize,
    _In_ const PCLUSPROP_BINARY pValueStruct,
    _In_reads_bytes_opt_( cbOldValueSize ) const LPBYTE pbOldValue,
    _In_ DWORD cbOldValueSize,
    _Inout_ _At_(*ppPropertyList, _Pre_readable_byte_size_(*pcbPropertyListSize) _Post_readable_byte_size_(*pcbPropertyListSize)) LPBYTE *ppPropertyList,
    _Inout_ LPDWORD pcbPropertyListSize
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_BINARY_PROPERTY)(
    _Outptr_result_bytebuffer_(*pcbOutValueSize) LPBYTE *ppbOutValue,
    _Out_ LPDWORD pcbOutValueSize,
    _In_ const PCLUSPROP_BINARY pValueStruct,
    _In_reads_bytes_opt_( cbOldValueSize ) const LPBYTE pbOldValue,
    _In_ DWORD cbOldValueSize,
    _Inout_ _At_(*ppPropertyList, _Pre_readable_byte_size_(*pcbPropertyListSize) _Post_readable_byte_size_(*pcbPropertyListSize)) LPBYTE *ppPropertyList,
    _Inout_ LPDWORD pcbPropertyListSize
    );
DWORD
WINAPI
ResUtilGetSzProperty(
    _Outptr_ LPWSTR *ppszOutValue,
    _In_ const PCLUSPROP_SZ pValueStruct,
    _In_opt_ LPCWSTR pszOldValue,
    _Inout_ _At_(*ppPropertyList, _Pre_readable_byte_size_(*pcbPropertyListSize) _Post_readable_byte_size_(*pcbPropertyListSize)) LPBYTE *ppPropertyList,
    _Inout_ LPDWORD pcbPropertyListSize
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_SZ_PROPERTY)(
    _Outptr_ LPWSTR *ppszOutValue,
    _In_ const PCLUSPROP_SZ pValueStruct,
    _In_opt_ LPCWSTR pszOldValue,
    _Inout_ _At_(*ppPropertyList, _Pre_readable_byte_size_(*pcbPropertyListSize) _Post_readable_byte_size_(*pcbPropertyListSize)) LPBYTE *ppPropertyList,
    _Inout_ LPDWORD pcbPropertyListSize
    );
DWORD
WINAPI
ResUtilGetMultiSzProperty(
    _Outptr_result_bytebuffer_(*pcbOutValueSize) LPWSTR *ppszOutValue,
    _Out_ LPDWORD pcbOutValueSize,
    _In_ const PCLUSPROP_SZ pValueStruct,
    _In_reads_bytes_opt_(cbOldValueSize) LPCWSTR pszOldValue,
    _In_ DWORD cbOldValueSize,
    _Inout_ _At_(*ppPropertyList, _Pre_readable_byte_size_(*pcbPropertyListSize) _Post_readable_byte_size_(*pcbPropertyListSize)) LPBYTE *ppPropertyList,
    _Inout_ LPDWORD pcbPropertyListSize
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_MULTI_SZ_PROPERTY)(
    _Outptr_result_bytebuffer_(*pcbOutValueSize) LPWSTR *ppszOutValue,
    _Out_ LPDWORD pcbOutValueSize,
    _In_ const PCLUSPROP_SZ pValueStruct,
    _In_reads_bytes_opt_(cbOldValueSize) LPCWSTR pszOldValue,
    _In_ DWORD cbOldValueSize,
    _Inout_ _At_(*ppPropertyList, _Pre_readable_byte_size_(*pcbPropertyListSize) _Post_readable_byte_size_(*pcbPropertyListSize)) LPBYTE *ppPropertyList,
    _Inout_ LPDWORD pcbPropertyListSize
    );
DWORD
WINAPI
ResUtilGetDwordProperty(
    OUT LPDWORD pdwOutValue,
    IN const PCLUSPROP_DWORD pValueStruct,
    IN DWORD dwOldValue,
    IN DWORD dwMinimum,
    IN DWORD dwMaximum,
    OUT LPBYTE * ppPropertyList,
    OUT LPDWORD pcbPropertyListSize
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_DWORD_PROPERTY)(
    OUT LPDWORD pdwOutValue,
    IN const PCLUSPROP_DWORD pValueStruct,
    IN DWORD dwOldValue,
    IN DWORD dwMinimum,
    IN DWORD dwMaximum,
    OUT LPBYTE * ppPropertyList,
    OUT LPDWORD pcbPropertyListSize
    );
DWORD
WINAPI
ResUtilGetLongProperty(
    OUT LPLONG plOutValue,
    IN const PCLUSPROP_LONG pValueStruct,
    IN LONG lOldValue,
    IN LONG lMinimum,
    IN LONG lMaximum,
    OUT LPBYTE * ppPropertyList,
    OUT LPDWORD pcbPropertyListSize
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_LONG_PROPERTY)(
    OUT LPLONG plOutValue,
    IN const PCLUSPROP_LONG pValueStruct,
    IN LONG lOldValue,
    IN LONG lMinimum,
    IN LONG lMaximum,
    OUT LPBYTE * ppPropertyList,
    OUT LPDWORD pcbPropertyListSize
    );
DWORD
WINAPI
ResUtilGetFileTimeProperty(
    OUT LPFILETIME pftOutValue,
    IN const PCLUSPROP_FILETIME pValueStruct,
    IN FILETIME ftOldValue,
    IN FILETIME ftMinimum,
    IN FILETIME ftMaximum,
    OUT LPBYTE * ppPropertyList,
    OUT LPDWORD pcbPropertyListSize
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_FILETIME_PROPERTY)(
    OUT LPFILETIME pftOutValue,
    IN const PCLUSPROP_FILETIME pValueStruct,
    IN FILETIME ftOldValue,
    IN FILETIME ftMinimum,
    IN FILETIME ftMaximum,
    OUT LPBYTE * ppPropertyList,
    OUT LPDWORD pcbPropertyListSize
    );
LPVOID
WINAPI
ResUtilGetEnvironmentWithNetName(
    _In_ HRESOURCE hResource
    );
typedef LPVOID
(WINAPI * PRESUTIL_GET_ENVIRONMENT_WITH_NET_NAME)(
    _In_ HRESOURCE hResource
    );
DWORD
WINAPI
ResUtilFreeEnvironment(
    IN LPVOID lpEnvironment
    );
typedef DWORD
(WINAPI * PRESUTIL_FREE_ENVIRONMENT)(
    IN LPVOID lpEnvironment
    );
LPWSTR
WINAPI
ResUtilExpandEnvironmentStrings(
    IN LPCWSTR pszSrc
    );
typedef LPWSTR
(WINAPI * PRESUTIL_EXPAND_ENVIRONMENT_STRINGS)(
    IN LPCWSTR pszSrc
    );
DWORD
WINAPI
ResUtilSetResourceServiceEnvironment(
    IN LPCWSTR pszServiceName,
    IN HRESOURCE hResource,
    IN PLOG_EVENT_ROUTINE pfnLogEvent,
    IN RESOURCE_HANDLE hResourceHandle
    );
typedef DWORD
(WINAPI * PRESUTIL_SET_RESOURCE_SERVICE_ENVIRONMENT)(
    IN LPCWSTR pszServiceName,
    IN HRESOURCE hResource,
    IN PLOG_EVENT_ROUTINE pfnLogEvent,
    IN RESOURCE_HANDLE hResourceHandle
    );
DWORD
WINAPI
ResUtilRemoveResourceServiceEnvironment(
    IN LPCWSTR pszServiceName,
    IN PLOG_EVENT_ROUTINE pfnLogEvent,
    IN RESOURCE_HANDLE hResourceHandle
    );
typedef DWORD
(WINAPI * PRESUTIL_REMOVE_RESOURCE_SERVICE_ENVIRONMENT)(
    IN LPCWSTR pszServiceName,
    IN PLOG_EVENT_ROUTINE pfnLogEvent,
    IN RESOURCE_HANDLE hResourceHandle
    );
DWORD
WINAPI
ResUtilSetResourceServiceStartParameters(
    IN LPCWSTR pszServiceName,
    IN SC_HANDLE schSCMHandle,
    IN OUT LPSC_HANDLE phService,
    IN PLOG_EVENT_ROUTINE pfnLogEvent,
    IN RESOURCE_HANDLE hResourceHandle
    );
typedef DWORD
(WINAPI * PRESUTIL_SET_RESOURCE_SERVICE_START_PARAMETERS)(
    IN LPCWSTR pszServiceName,
    IN SC_HANDLE schSCMHandle,
    IN OUT LPSC_HANDLE phService,
    IN PLOG_EVENT_ROUTINE pfnLogEvent,
    IN RESOURCE_HANDLE hResourceHandle
    );
DWORD
WINAPI
ResUtilFindSzProperty(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Outptr_opt_ LPWSTR *pszPropertyValue
    );
typedef DWORD
(WINAPI * PRESUTIL_FIND_SZ_PROPERTY)(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Outptr_opt_ LPWSTR *pszPropertyValue
    );
DWORD
WINAPI
ResUtilFindExpandSzProperty(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Outptr_opt_ LPWSTR *pszPropertyValue
    );
typedef DWORD
(WINAPI * PRESUTIL_FIND_EXPAND_SZ_PROPERTY)(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Outptr_opt_ LPWSTR *pszPropertyValue
    );
DWORD
WINAPI
ResUtilFindExpandedSzProperty(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Outptr_opt_ LPWSTR *pszPropertyValue
    );
typedef DWORD
(WINAPI * PRESUTIL_FIND_EXPANDED_SZ_PROPERTY)(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Outptr_opt_ LPWSTR *pszPropertyValue
    );
DWORD
WINAPI
ResUtilFindDwordProperty(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Out_ LPDWORD pdwPropertyValue
    );
typedef DWORD
(WINAPI * PRESUTIL_FIND_DWORD_PROPERTY)(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Out_ LPDWORD pdwPropertyValue
    );
DWORD
WINAPI
ResUtilFindBinaryProperty(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Outptr_opt_result_bytebuffer_to_(*pcbPropertyValueSize, *pcbPropertyValueSize) LPBYTE *pbPropertyValue,
    _Out_opt_ LPDWORD pcbPropertyValueSize
    );
typedef DWORD
(WINAPI * PRESUTIL_FIND_BINARY_PROPERTY)(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Outptr_opt_result_bytebuffer_to_(*pcbPropertyValueSize, *pcbPropertyValueSize) LPBYTE *pbPropertyValue,
    _Out_opt_ LPDWORD pcbPropertyValueSize
    );
DWORD
WINAPI
ResUtilFindMultiSzProperty(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Outptr_result_bytebuffer_to_(*pcbPropertyValueSize, *pcbPropertyValueSize) LPWSTR *pszPropertyValue,
    _Out_ LPDWORD pcbPropertyValueSize
    );
typedef DWORD
(WINAPI * PRESUTIL_FIND_MULTI_SZ_PROPERTY)(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Outptr_result_bytebuffer_to_(*pcbPropertyValueSize, *pcbPropertyValueSize) LPWSTR *pszPropertyValue,
    _Out_ LPDWORD pcbPropertyValueSize
    );
DWORD
WINAPI
ResUtilFindLongProperty(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Out_ LPLONG plPropertyValue
    );
typedef DWORD
(WINAPI * PRESUTIL_FIND_LONG_PROPERTY)(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Out_ LPLONG plPropertyValue
    );
DWORD
WINAPI
ResUtilFindULargeIntegerProperty(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Out_ ULONGLONG *plPropertyValue
    );
typedef DWORD
(WINAPI * PRESUTIL_FIND_ULARGEINTEGER_PROPERTY)(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Out_ ULONGLONG *plPropertyValue
    );
DWORD
WINAPI
ResUtilFindFileTimeProperty(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Out_ LPFILETIME pftPropertyValue
    );
typedef DWORD
(WINAPI * PRESUTIL_FIND_FILETIME_PROPERTY)(
    _In_reads_bytes_(cbPropertyListSize) const PVOID pPropertyList,
    _In_ DWORD cbPropertyListSize,
    _In_ LPCWSTR pszPropertyName,
    _Out_ LPFILETIME pftPropertyValue
    );
typedef struct CLUS_WORKER {
    HANDLE hThread;
    BOOL Terminate;
} CLUS_WORKER, *PCLUS_WORKER;
typedef DWORD (WINAPI *PWORKER_START_ROUTINE)(
    PCLUS_WORKER pWorker,
    LPVOID lpThreadParameter
    );
DWORD
WINAPI
ClusWorkerCreate(
    OUT PCLUS_WORKER lpWorker,
    IN PWORKER_START_ROUTINE lpStartAddress,
    IN PVOID lpParameter
    );
typedef DWORD
(WINAPI * PCLUSAPI_CLUS_WORKER_CREATE)(
    OUT PCLUS_WORKER lpWorker,
    IN PWORKER_START_ROUTINE lpStartAddress,
    IN PVOID lpParameter
    );
BOOL
WINAPI
ClusWorkerCheckTerminate(
    IN PCLUS_WORKER lpWorker
    );
typedef BOOL
(WINAPI * PCLUSAPIClusWorkerCheckTerminate)(
    IN PCLUS_WORKER lpWorker
    );
VOID
WINAPI
ClusWorkerTerminate(
    _In_ PCLUS_WORKER lpWorker
    );
typedef VOID
(WINAPI * PCLUSAPI_CLUS_WORKER_TERMINATE)(
    _In_ PCLUS_WORKER lpWorker
    );
DWORD
WINAPI
ClusWorkerTerminateEx(
    _Inout_ PCLUS_WORKER ClusWorker,
    _In_ DWORD TimeoutInMilliseconds,
    _In_ BOOL WaitOnly
    );
DWORD
ClusWorkersTerminate(
    _Inout_updates_(ClusWorkersCount) PCLUS_WORKER * ClusWorkers,
    _In_ size_t const ClusWorkersCount,
    _In_ DWORD TimeoutInMilliseconds,
    _In_ BOOL WaitOnly
    );
typedef DWORD (*LPRESOURCE_CALLBACK)( HRESOURCE, HRESOURCE , PVOID );
typedef DWORD (*LPRESOURCE_CALLBACK_EX)( HCLUSTER, HRESOURCE, HRESOURCE , PVOID );
typedef DWORD (*LPGROUP_CALLBACK_EX)( HCLUSTER, HGROUP, HGROUP , PVOID );
typedef DWORD (*LPNODE_CALLBACK)( HCLUSTER, HNODE, CLUSTER_NODE_STATE, PVOID );
BOOL
WINAPI
ResUtilResourcesEqual(
    IN HRESOURCE hSelf,
    IN HRESOURCE hResource
    );
typedef BOOL
(WINAPI * PRESUTIL_RESOURCES_EQUAL)(
    IN HRESOURCE hSelf,
    IN HRESOURCE hResource
    );
BOOL
WINAPI
ResUtilResourceTypesEqual(
    IN LPCWSTR lpszResourceTypeName,
    IN HRESOURCE hResource
    );
typedef BOOL
(WINAPI * PRESUTIL_RESOURCE_TYPES_EQUAL)(
    IN LPCWSTR lpszResourceTypeName,
    IN HRESOURCE hResource
    );
BOOL
WINAPI
ResUtilIsResourceClassEqual(
    IN PCLUS_RESOURCE_CLASS_INFO prci,
    IN HRESOURCE hResource
    );
typedef BOOL
(WINAPI * PRESUTIL_IS_RESOURCE_CLASS_EQUAL)(
    IN PCLUS_RESOURCE_CLASS_INFO prci,
    IN HRESOURCE hResource
    );
DWORD
WINAPI
ResUtilEnumResources(
    IN HRESOURCE hSelf,
    IN LPCWSTR lpszResTypeName,
    IN LPRESOURCE_CALLBACK pResCallBack,
    IN PVOID pParameter
    );
typedef DWORD
(WINAPI * PRESUTIL_ENUM_RESOURCES)(
    IN HRESOURCE hSelf,
    IN LPCWSTR lpszResTypeName,
    IN LPRESOURCE_CALLBACK pResCallBack,
    IN PVOID pParameter
    );
DWORD
WINAPI
ResUtilEnumResourcesEx(
    IN HCLUSTER hCluster,
    IN HRESOURCE hSelf,
    IN LPCWSTR lpszResTypeName,
    IN LPRESOURCE_CALLBACK_EX pResCallBack,
    IN PVOID pParameter
    );
typedef DWORD
(WINAPI * PRESUTIL_ENUM_RESOURCES_EX)(
    IN HCLUSTER hCluster,
    IN HRESOURCE hSelf,
    IN LPCWSTR lpszResTypeName,
    IN LPRESOURCE_CALLBACK_EX pResCallBack,
    IN PVOID pParameter
    );
HRESOURCE
WINAPI
ResUtilGetResourceDependency(
    IN HANDLE hSelf,
    IN LPCWSTR lpszResourceType
    );
typedef HRESOURCE
(WINAPI * PRESUTIL_GET_RESOURCE_DEPENDENCY)(
    IN HANDLE hSelf,
    IN LPCWSTR lpszResourceType
    );
HRESOURCE
WINAPI
ResUtilGetResourceDependencyByName(
    IN HCLUSTER hCluster,
    IN HANDLE hSelf,
    IN LPCWSTR lpszResourceType,
    IN BOOL bRecurse
    );
typedef HRESOURCE
(WINAPI * PRESUTIL_GET_RESOURCE_DEPENDENCY_BY_NAME)(
    IN HCLUSTER hCluster,
    IN HANDLE hSelf,
    IN LPCWSTR lpszResourceType,
    IN BOOL bRecurse
    );
HRESOURCE
WINAPI
ResUtilGetResourceDependencyByClass(
    IN HCLUSTER hCluster,
    IN HANDLE hSelf,
    IN PCLUS_RESOURCE_CLASS_INFO prci,
    IN BOOL bRecurse
    );
typedef HRESOURCE
(WINAPI * PRESUTIL_GET_RESOURCE_DEPENDENCY_BY_CLASS)(
    IN HCLUSTER hCluster,
    IN HANDLE hSelf,
    IN PCLUS_RESOURCE_CLASS_INFO prci,
    IN BOOL bRecurse
    );
HRESOURCE
WINAPI
ResUtilGetResourceNameDependency(
    IN LPCWSTR lpszResourceName,
    IN LPCWSTR lpszResourceType
    );
typedef HRESOURCE
(WINAPI * PRESUTIL_GET_RESOURCE_NAME_DEPENDENCY)(
    IN LPCWSTR lpszResourceName,
    IN LPCWSTR lpszResourceType
    );
_Success_( return == ERROR_SUCCESS )
DWORD
WINAPI
ResUtilGetResourceDependentIPAddressProps(
    _In_ HRESOURCE hResource,
    _Out_writes_to_(*pcchAddress, *pcchAddress) LPWSTR pszAddress,
    _Inout_ DWORD *pcchAddress,
    _Out_writes_to_(*pcchSubnetMask, *pcchSubnetMask) LPWSTR pszSubnetMask,
    _Inout_ DWORD *pcchSubnetMask,
    _Out_writes_to_(*pcchNetwork, *pcchNetwork) LPWSTR pszNetwork,
    _Inout_ DWORD *pcchNetwork
    );
typedef
_Success_( return == ERROR_SUCCESS )
DWORD
(WINAPI * PRESUTIL_GET_RESOURCE_DEPENDENTIP_ADDRESS_PROPS)(
    _In_ HRESOURCE hResource,
    _Out_writes_to_(*pcchAddress, *pcchAddress) LPWSTR pszAddress,
    _Inout_ DWORD *pcchAddress,
    _Out_writes_to_(*pcchSubnetMask, *pcchSubnetMask) LPWSTR pszSubnetMask,
    _Inout_ DWORD *pcchSubnetMask,
    _Out_writes_to_(*pcchNetwork, *pcchNetwork) LPWSTR pszNetwork,
    _Inout_ DWORD *pcchNetwork
    );
_Success_( return == ERROR_SUCCESS )
DWORD
WINAPI
ResUtilFindDependentDiskResourceDriveLetter(
    _In_ HCLUSTER hCluster,
    _In_ HRESOURCE hResource,
    _Out_writes_to_(*pcchDriveLetter, *pcchDriveLetter) LPWSTR pszDriveLetter,
    _Inout_ DWORD * pcchDriveLetter
    );
typedef
_Success_( return == ERROR_SUCCESS ) DWORD
(WINAPI * PRESUTIL_FIND_DEPENDENT_DISK_RESOURCE_DRIVE_LETTER)(
    _In_ HCLUSTER hCluster,
    _In_ HRESOURCE hResource,
    _Out_writes_to_(*pcchDriveLetter, *pcchDriveLetter) LPWSTR pszDriveLetter,
    _Inout_ DWORD *pcchDriveLetter
    );
DWORD
WINAPI
ResUtilTerminateServiceProcessFromResDll(
    _In_ DWORD dwServicePid,
    _In_ BOOL bOffline,
    _Out_ PDWORD pdwResourceState,
    _In_ PLOG_EVENT_ROUTINE pfnLogEvent,
    _In_ RESOURCE_HANDLE hResourceHandle
    );
typedef DWORD
(WINAPI * PRESUTIL_TERMINATE_SERVICE_PROCESS_FROM_RES_DLL)(
    _In_ DWORD dwServicePid,
    _In_ BOOL bOffline,
    _Out_ PDWORD pdwResourceState,
    _In_ PLOG_EVENT_ROUTINE pfnLogEvent,
    _In_ RESOURCE_HANDLE hResourceHandle
    );
DWORD
WINAPI
ResUtilGetPropertyFormats(
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    _Out_writes_bytes_to_(cbPropertyFormatListSize, *pcbBytesReturned) PVOID pOutPropertyFormatList,
    _In_ DWORD cbPropertyFormatListSize,
    _Out_ LPDWORD pcbBytesReturned,
    _Out_ LPDWORD pcbRequired
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_PROPERTY_FORMATS)(
    _In_ const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    _Out_writes_bytes_to_(cbPropertyFormatListSize, *pcbBytesReturned) PVOID pOutPropertyFormatList,
    _In_ DWORD cbPropertyFormatListSize,
    _Out_ LPDWORD pcbBytesReturned,
    _Out_ LPDWORD pcbRequired
    );
DWORD
WINAPI
ResUtilGetCoreClusterResources(
    _In_ HCLUSTER hCluster,
    _Out_ HRESOURCE *phClusterNameResource,
    _Out_ HRESOURCE *phClusterIPAddressResource,
    _Out_ HRESOURCE *phClusterQuorumResource
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_CORE_CLUSTER_RESOURCES)(
    _In_ HCLUSTER hCluster,
    _Out_ HRESOURCE *phClusterNameResource,
    _Out_ HRESOURCE *phClusterIPAddressResource,
    _Out_ HRESOURCE *phClusterQuorumResource
    );
DWORD
WINAPI
ResUtilGetResourceName(
    _In_ HRESOURCE hResource,
    _Out_writes_to_(*pcchResourceNameInOut, *pcchResourceNameInOut) PWSTR pszResourceName,
    _Inout_ DWORD *pcchResourceNameInOut
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_RESOURCE_NAME)(
    _In_ HRESOURCE hResource,
    _Out_writes_to_(*pcchResourceNameInOut, *pcchResourceNameInOut) PWSTR pszResourceName,
    _Inout_ DWORD *pcchResourceNameInOut
    );
typedef enum _CLUSTER_ROLE {
    ClusterRoleDHCP,
    ClusterRoleDTC,
    ClusterRoleFileServer,
    ClusterRoleGenericApplication,
    ClusterRoleGenericScript,
    ClusterRoleGenericService,
    ClusterRoleISCSINameServer,
    ClusterRoleMSMQ,
    ClusterRoleNFS,
    ClusterRolePrintServer,
    ClusterRoleStandAloneNamespaceServer,
    ClusterRoleVolumeShadowCopyServiceTask,
    ClusterRoleWINS,
    ClusterRoleTaskScheduler,
    ClusterRoleNetworkFileSystem,
    ClusterRoleDFSReplicatedFolder,
    ClusterRoleDistributedFileSystem,
    ClusterRoleDistributedNetworkName,
    ClusterRoleFileShare,
    ClusterRoleFileShareWitness,
    ClusterRoleHardDisk,
    ClusterRoleIPAddress,
    ClusterRoleIPV6Address,
    ClusterRoleIPV6TunnelAddress,
    ClusterRoleISCSITargetServer,
    ClusterRoleNetworkName,
    ClusterRolePhysicalDisk,
    ClusterRoleSODAFileServer,
    ClusterRoleStoragePool,
    ClusterRoleVirtualMachine,
    ClusterRoleVirtualMachineConfiguration,
    ClusterRoleVirtualMachineReplicaBroker
} CLUSTER_ROLE;
typedef enum _CLUSTER_ROLE_STATE {
    ClusterRoleUnknown = -1,
    ClusterRoleClustered,
    ClusterRoleUnclustered
} CLUSTER_ROLE_STATE;
_Success_(return >= 0)
CLUSTER_ROLE_STATE
WINAPI
ResUtilGetClusterRoleState(
    _In_ HCLUSTER hCluster,
    _In_ CLUSTER_ROLE eClusterRole
    );
BOOL
WINAPI
ClusterIsPathOnSharedVolume(
    _In_ LPCWSTR lpszPathName
);
typedef BOOL
(WINAPI * PCLUSTER_IS_PATH_ON_SHARED_VOLUME)(
    _In_ LPCWSTR lpszPathName
    );
BOOL
WINAPI
ClusterGetVolumePathName(
    _In_ LPCWSTR lpszFileName,
    _Out_ LPWSTR lpszVolumePathName,
    _In_ DWORD cchBufferLength
    );
typedef BOOL
(WINAPI * PCLUSTER_GET_VOLUME_PATH_NAME)(
    _In_ LPCWSTR lpszFileName,
    _Out_ LPWSTR lpszVolumePathName,
    _In_ DWORD cchBufferLength
    );
BOOL
WINAPI
ClusterGetVolumeNameForVolumeMountPoint(
    _In_ LPCWSTR lpszVolumeMountPoint,
    _Out_ LPWSTR lpszVolumeName,
    _In_ DWORD cchBufferLength
    );
typedef BOOL
(WINAPI * PCLUSTER_GET_VOLUME_NAME_FOR_VOLUME_MOUNT_POINT)(
    _In_ LPCWSTR lpszVolumeMountPoint,
    _Out_ LPWSTR lpszVolumeName,
    _In_ DWORD cchBufferLength
    );
DWORD
WINAPI
ClusterPrepareSharedVolumeForBackup(
    _In_ LPCWSTR lpszFileName,
    _Out_ LPWSTR lpszVolumePathName,
    _Inout_ LPDWORD lpcchVolumePathName,
    _Out_ LPWSTR lpszVolumeName,
    _Inout_ LPDWORD lpcchVolumeName
    );
typedef DWORD
(WINAPI * PCLUSTER_PREPARE_SHARED_VOLUME_FOR_BACKUP)(
    _In_ LPCWSTR lpszFileName,
    _Out_ LPWSTR lpszVolumePathName,
    _Inout_ LPDWORD lpcchVolumePathName,
    _Out_ LPWSTR lpszVolumeName,
    _Inout_ LPDWORD lpcchVolumeName
    );
DWORD
WINAPI
ClusterClearBackupStateForSharedVolume(
    _In_ LPCWSTR lpszVolumePathName
    );
typedef DWORD
(WINAPI * PCLUSTER_CLEAR_BACKUP_STATE_FOR_SHARED_VOLUME)(
    _In_ LPCWSTR lpszVolumePathName
    );
DWORD
WINAPI
ResUtilSetResourceServiceStartParametersEx(
    IN LPCWSTR pszServiceName,
    IN SC_HANDLE schSCMHandle,
    IN OUT LPSC_HANDLE phService,
    IN DWORD dwDesiredAccess,
    IN PLOG_EVENT_ROUTINE pfnLogEvent,
    IN RESOURCE_HANDLE hResourceHandle
    );
typedef DWORD
(WINAPI * PRESUTIL_SET_RESOURCE_SERVICE_START_PARAMETERS_EX)(
    IN LPCWSTR pszServiceName,
    IN SC_HANDLE schSCMHandle,
    IN OUT LPSC_HANDLE phService,
    IN DWORD dwDesiredAccess,
    IN PLOG_EVENT_ROUTINE pfnLogEvent,
    IN RESOURCE_HANDLE hResourceHandle
    );
DWORD
WINAPI
ResUtilEnumResourcesEx2(
    IN HCLUSTER hCluster,
    IN HRESOURCE hSelf,
    IN LPCWSTR lpszResTypeName,
    IN LPRESOURCE_CALLBACK_EX pResCallBack,
    IN PVOID pParameter,
    IN DWORD dwDesiredAccess
    );
typedef DWORD
(WINAPI * PRESUTIL_ENUM_RESOURCES_EX2)(
    IN HCLUSTER hCluster,
    IN HRESOURCE hSelf,
    IN LPCWSTR lpszResTypeName,
    IN LPRESOURCE_CALLBACK_EX pResCallBack,
    IN PVOID pParameter,
    IN DWORD dwDesiredAccess
    );
HRESOURCE
WINAPI
ResUtilGetResourceDependencyEx(
    IN HANDLE hSelf,
    IN LPCWSTR lpszResourceType,
    IN DWORD dwDesiredAccess
    );
typedef HRESOURCE
(WINAPI * PRESUTIL_GET_RESOURCE_DEPENDENCY_EX)(
    IN HANDLE hSelf,
    IN LPCWSTR lpszResourceType,
    IN DWORD dwDesiredAccess
    );
HRESOURCE
WINAPI
ResUtilGetResourceDependencyByNameEx(
    IN HCLUSTER hCluster,
    IN HANDLE hSelf,
    IN LPCWSTR lpszResourceType,
    IN BOOL bRecurse,
    IN DWORD dwDesiredAccess
    );
typedef HRESOURCE
(WINAPI * PRESUTIL_GET_RESOURCE_DEPENDENCY_BY_NAME_EX)(
    IN HCLUSTER hCluster,
    IN HANDLE hSelf,
    IN LPCWSTR lpszResourceType,
    IN BOOL bRecurse,
    IN DWORD dwDesiredAccess
    );
HRESOURCE
WINAPI
ResUtilGetResourceDependencyByClassEx(
    IN HCLUSTER hCluster,
    IN HANDLE hSelf,
    IN PCLUS_RESOURCE_CLASS_INFO prci,
    IN BOOL bRecurse,
    IN DWORD dwDesiredAccess
    );
typedef HRESOURCE
(WINAPI * PRESUTIL_GET_RESOURCE_DEPENDENCY_BY_CLASS_EX)(
    IN HCLUSTER hCluster,
    IN HANDLE hSelf,
    IN PCLUS_RESOURCE_CLASS_INFO prci,
    IN BOOL bRecurse,
    IN DWORD dwDesiredAccess
    );
HRESOURCE
WINAPI
ResUtilGetResourceNameDependencyEx(
    IN LPCWSTR lpszResourceName,
    IN LPCWSTR lpszResourceType,
    IN DWORD dwDesiredAccess
    );
typedef HRESOURCE
(WINAPI * PRESUTIL_GET_RESOURCE_NAME_DEPENDENCY_EX)(
    IN LPCWSTR lpszResourceName,
    IN LPCWSTR lpszResourceType,
    IN DWORD dwDesiredAccess
    );
DWORD
WINAPI
ResUtilGetCoreClusterResourcesEx(
    _In_ HCLUSTER hClusterIn,
    _Out_opt_ HRESOURCE *phClusterNameResourceOut,
    _Out_opt_ HRESOURCE *phClusterQuorumResourceOut,
    _In_ DWORD dwDesiredAccess
    );
typedef DWORD
(WINAPI * PRESUTIL_GET_CORE_CLUSTER_RESOURCES_EX)(
    _In_ HCLUSTER hClusterIn,
    _Out_ HRESOURCE *phClusterNameResourceOut,
    _Out_ HRESOURCE *phClusterIPAddressResourceOut,
    _Out_ HRESOURCE *phClusterQuorumResourceOut,
    _In_ DWORD dwDesiredAccess
    );
typedef struct _HCLUSCRYPTPROVIDER *HCLUSCRYPTPROVIDER;
HCLUSCRYPTPROVIDER
WINAPI
OpenClusterCryptProvider(
    _In_ LPCWSTR lpszResource,
    _In_ LPCTSTR lpszProvider,
    _In_ DWORD dwType,
    _In_ DWORD dwFlags
    );
typedef HCLUSCRYPTPROVIDER
(WINAPI * POPEN_CLUSTER_CRYPT_PROVIDER)(
    _In_ LPCWSTR lpszResource,
    _In_ LPCTSTR lpszProvider,
    _In_ DWORD dwType,
    _In_ DWORD dwFlags
    );
DWORD
WINAPI
CloseClusterCryptProvider(
    _In_ HCLUSCRYPTPROVIDER hClusCryptProvider
    );
typedef DWORD
(WINAPI * PCLOSE_CLUSTER_CRYPT_PROVIDER)(
    _In_ HCLUSCRYPTPROVIDER hClusCryptProvider
    );
DWORD
WINAPI
ClusterEncrypt(
    _In_ HCLUSCRYPTPROVIDER hClusCryptProvider,
    _In_reads_(cbData) PBYTE pData,
    _In_ DWORD cbData,
    _Outptr_result_bytebuffer_(*pcbData) PBYTE* ppData,
    _Out_ PDWORD pcbData
    );
typedef DWORD
(WINAPI * PCLUSTER_ENCRYPT)(
    _In_ HCLUSCRYPTPROVIDER hClusCryptProvider,
    _In_reads_(cbData) PBYTE pData,
    _In_ DWORD cbData,
    _Outptr_result_bytebuffer_(*pcbData) PBYTE* ppData,
    _Out_ PDWORD pcbData
    );
DWORD
WINAPI
ClusterDecrypt(
    _In_ HCLUSCRYPTPROVIDER hClusCryptProvider,
    _In_reads_(cbData) PBYTE pCryptInput,
    _In_ DWORD cbCryptInput,
    _Outptr_result_bytebuffer_(*pcbCryptOutput) PBYTE* ppCryptOutput,
    _Out_ PDWORD pcbCryptOutput
    );
typedef DWORD
(WINAPI * PCLUSTER_DECRYPT)(
    _In_ HCLUSCRYPTPROVIDER hClusCryptProvider,
    _In_reads_(cbData) PBYTE pCryptInput,
    _In_ DWORD cbCryptInput,
    _Outptr_result_bytebuffer_(*pcbCryptOutput) PBYTE* ppCryptOutput,
    _Out_ PDWORD pcbCryptOutput
    );
DWORD
WINAPI
FreeClusterCrypt(
    _In_ PVOID pCryptInfo
    );
typedef DWORD
(WINAPI * PFREE_CLUSTER_CRYPT)(
    _In_ PVOID pCryptInfo
    );
typedef struct _PaxosTagCStruct {
    unsigned __int64 __padding__PaxosTagVtable;
    unsigned __int64 __padding__NextEpochVtable;
    unsigned __int64 __padding__NextEpoch_DateTimeVtable;
    unsigned __int64 NextEpoch_DateTime_ticks;
    int NextEpoch_Value;
    DWORD __padding__BoundryNextEpoch;
    unsigned __int64 __padding__EpochVtable;
    unsigned __int64 __padding__Epoch_DateTimeVtable;
    unsigned __int64 Epoch_DateTime_ticks;
    int Epoch_Value;
    DWORD __padding__BoundryEpoch;
    int Sequence;
    DWORD __padding__BoundrySequence;
} PaxosTagCStruct, *PPaxosTagCStruct;
typedef struct _WitnessTagUpdateHelper
{
    int Version;
    PaxosTagCStruct paxosToSet;
    PaxosTagCStruct paxosToValidate;
}WitnessTagUpdateHelper;
typedef struct _WitnessTagHelper
{
    int Version;
    PaxosTagCStruct paxosToValidate;
}WitnessTagHelper;
BOOL ResUtilPaxosComparer(const PaxosTagCStruct *const left, const PaxosTagCStruct * const right);
BOOL ResUtilLeftPaxosIsLessThanRight(const PaxosTagCStruct *const left, const PaxosTagCStruct * const right);
DWORD ResUtilsDeleteKeyTree(HKEY key, LPCWSTR keyName, BOOL treatNoKeyAsError);
DWORD
WINAPI
ResUtilGroupsEqual(
    IN HGROUP hSelf,
    IN HGROUP hGroup,
    OUT BOOL* pEqual
    );
DWORD
WINAPI
ResUtilEnumGroups(
    IN HCLUSTER hCluster,
    IN HGROUP hSelf,
    IN LPGROUP_CALLBACK_EX pResCallBack,
    IN PVOID pParameter
    );
DWORD
WINAPI
ResUtilEnumGroupsEx(
    IN HCLUSTER hCluster,
    IN HGROUP hSelf,
    IN CLUSGROUP_TYPE groupType,
    IN LPGROUP_CALLBACK_EX pResCallBack,
    IN PVOID pParameter
    );
DWORD
WINAPI
ResUtilDupGroup(IN HGROUP group, OUT HGROUP *copy);
DWORD
WINAPI
ResUtilGetClusterGroupType(IN HGROUP hGroup, OUT CLUSGROUP_TYPE * groupType);
HGROUP
WINAPI
ResUtilGetCoreGroup(IN HCLUSTER hCluster);
DWORD
WINAPI
ResUtilResourceDepEnum(
    IN HRESOURCE hSelf,
    IN DWORD enumType,
    IN LPRESOURCE_CALLBACK_EX pResCallBack,
    IN PVOID pParameter
    );
DWORD
WINAPI
ResUtilDupResource(IN HRESOURCE group, OUT HRESOURCE *copy);
DWORD
WINAPI
ResUtilGetClusterId( IN HCLUSTER hCluster,OUT GUID *guid );
DWORD
WINAPI
ResUtilNodeEnum(
    IN HCLUSTER hCluster,
    IN LPNODE_CALLBACK pNodeCallBack,
    IN PVOID pParameter
    );
}
#endif
#pragma endregion
