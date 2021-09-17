#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <unknwn.h>
class IProtocolManager;
class IWpfReferencedObject
{
public:
    virtual
    ULONG
    AddRef(
        VOID
    ) = 0;
    virtual
    ULONG
    Release
    (
        VOID
    ) = 0;
};
enum WPF_INTERFACE_ID_ENUM
{
    WPF_CONFIG_API_ID = 1,
    WPF_APPLICATION_INFO_UTIL_ID,
    WPF_SETTINGS_ID,
    WPF_ACTIONS_ID,
    WPF_EXPOSE_PROTOCOL_MANAGER_CUSTOM_INTERFACE_ID,
    WPF_APPLICATION_PRELOAD_INFO_UTIL_ID,
};
class IWorkerProcessFramework: public IWpfReferencedObject
{
public:
    virtual
    HRESULT
    GetWpfInterface(
        IN WPF_INTERFACE_ID_ENUM WpfInterfaceId,
        OUT PVOID* ppInterface
    ) = 0;
    virtual
    HRESULT
    GetCustomInterface(
        IN DWORD InterfaceId,
        OUT PVOID* ppInterface
    ) = 0;
    virtual
    HRESULT
    GetInterfaceVersion(
        OUT PDWORD pdwMajorVersion,
        OUT PDWORD pdwMinorVersion
    ) = 0;
};
class IWpfApplicationInfoUtil: public IWpfReferencedObject
{
public:
    virtual
    HRESULT
    GetApplicationPropertiesFromAppId(
        IN PCWSTR pszAppId,
        _Out_writes_opt_(*pcchVirtualPath) PWSTR pszVirtualPath,
        OUT DWORD * pcchVirtualPath,
        OUT DWORD * pdwSiteId ) = 0;
};
enum WPF_SETTINGS_STRING_ENUM
{
    CLR_VERSION,
    APP_POOL_NAME,
    APP_HOST_FILE_NAME,
    ROOT_WEB_CONFIG_FILE_NAME,
    CLR_CONFIG_FILE_NAME,
    CLR_VERSION_PATH
};
enum WPF_SETTINGS_DWORD_ENUM
{
    PERIODIC_RESTART_REQUESTS = 1,
    PERIODIC_RESTART_TIME,
    IDLE_TIMEOUT,
    MANAGED_PIPELINE_MODE,
    THREAD_AFFINITY_POLICY,
    IDLE_TIMEOUT_ACTION
};
enum WPF_SETTINGS_ULONGLONG_ENUM
{
    PERIODIC_RESTART_VIRTUAL_MEMORY,
    PERIODIC_RESTART_PRIVATE_MEMORY,
};
enum WPF_SETTINGS_BOOL_ENUM
{
    ENABLED_CENTRAL_BINARY_LOGGING,
    ENABLED_HOSTABLE_WEB_CORE
};
enum WPF_SETTINGS_HANDLE_ENUM
{
    ANONYMOUS_USER_TOKEN
};
class IWpfSettings : public IWpfReferencedObject
{
public:
    virtual
    HRESULT
    GetDwordProperty(
        IN WPF_SETTINGS_DWORD_ENUM SettingId,
        OUT DWORD* pdwSetting
    ) = 0;
    virtual
    HRESULT
    GetUlonglongProperty(
        IN WPF_SETTINGS_ULONGLONG_ENUM SettingId,
        OUT ULONGLONG* pSetting
    ) = 0;
    virtual
    HRESULT
    GetStringProperty(
        IN WPF_SETTINGS_STRING_ENUM SettingId,
        _Out_writes_opt_(*pcchSetting) PWSTR pszSetting,
        OUT DWORD* pcchSetting
    ) = 0;
    virtual
    HRESULT
    GetBoolProperty(
        IN WPF_SETTINGS_BOOL_ENUM SettingId,
        OUT BOOL * pfSetting
    ) = 0;
    virtual
    HRESULT
    GetHandleProperty(
        IN WPF_SETTINGS_HANDLE_ENUM SettingId,
        OUT HANDLE * phSetting
    ) = 0;
};
class IWpfActions : public IWpfReferencedObject
{
public:
    virtual
    VOID
    RecycleWorkerProcess(
        IN PCWSTR pszReason
    ) = 0;
    virtual
    VOID
    FailWorkerProcess(
        IN PCWSTR pszReason,
        IN HRESULT hrFailureToReport,
        IN BOOL fFailOnNextPing = FALSE
    ) = 0;
};
class IWpfExposeProtocolManagerCustomInterface: public IWpfReferencedObject
{
public:
    virtual
    HRESULT
    LoadProtocolManagerAndGetCustomInterface(
        IN PCWSTR pProtocolManagerDll,
        IN PCWSTR pProtocolManagerDllInitFunction,
        IN DWORD dwCustomInterfaceId,
        OUT PVOID* ppCustomInterface
    ) = 0;
};
class IWpfListenerChannelCallback;
enum PM_INTERFACE_ID_ENUM
{
    PM_LISTENER_CHANNEL_MANAGER_ID = 1,
    PM_HEALTH_AND_IDLE_MONITOR_ID,
    PM_CUSTOM_ACTIONS_ID,
    PM_APPLICATION_PRELOAD_ID,
    PM_IDLE_TIMEOUT_ID
};
class IProtocolManager : public IWpfReferencedObject
{
public:
    virtual
    HRESULT
    GetPmInterface(
        IN PM_INTERFACE_ID_ENUM PmInterfaceId,
        OUT PVOID* ppInterface
    ) = 0;
    virtual
    HRESULT
    GetCustomInterface(
        IN DWORD InterfaceId,
        OUT PVOID* ppInterface
    ) = 0;
    virtual
    HRESULT
    Shutdown(
        IN BOOL fImmediate
    ) = 0;
};
class IHealthStatusCallback: public IWpfReferencedObject
{
public:
   virtual
    HRESULT
    ReportHealth(
        BOOL fHealthy
    ) = 0;
};
class IPmHealthAndIdleMonitor : public IWpfReferencedObject
{
public:
    virtual
    HRESULT
    CheckIdle(
        OUT BOOL *pfIdle
    ) = 0;
    virtual
    HRESULT
    CheckHealth(
        IHealthStatusCallback * pIHealthStatusCallback
    ) = 0;
};
class ICustomActionResultCallback
        : public IWpfReferencedObject
{
public:
    virtual
    HRESULT
    ReportResult(
        IN HRESULT hrStatus,
        IN PBYTE pbResponse,
        IN DWORD cbResponse
    ) = 0;
};
class ICustomAction2ResultCallback
        : public IWpfReferencedObject
{
public:
    virtual
    HRESULT
    ReportResult(
        IN HRESULT hrStatus,
        IN BOOL fFinalResponse,
        IN PBYTE pbResponse,
        IN DWORD cbResponse
    ) = 0;
};
class IWpfApplicationPreloadUtil : public IWpfReferencedObject
{
public:
    virtual
    HRESULT
    GetApplicationPreloadInfo(
        IN PCWSTR pszConfigPath,
        OUT BOOL * pfEnabled,
        OUT BSTR * pbstrType,
        OUT SAFEARRAY ** psaPreloadValues
    ) = 0;
    virtual
    HRESULT
    ReportApplicationPreloadFailure(
        IN PCWSTR pszConfigPath,
        IN HRESULT hrFailureCode,
        IN PCWSTR pszErrorString
    ) = 0;
};
class IPmApplicationPreload : public IWpfReferencedObject
{
public:
    virtual
    HRESULT
    PreloadApplication(
        IN DWORD dwSiteId,
        IN PCWSTR pszAppConfigPath,
        IN BOOL fRecycledWorkerProcess = FALSE
    ) = 0;
};
class IPmCustomActions : public IWpfReferencedObject
{
public:
    virtual
    HRESULT
    RunCustomAction(
        IN PCWSTR pszFunctionName,
        IN PCWSTR pszFunctionArgs,
        IN ICustomActionResultCallback * pCompletionCallbackClass
    ) = 0 ;
};
class IPmCustomActions2 : public IWpfReferencedObject
{
public:
    virtual
    HRESULT
    RegisterCustomActionCallback(
        IN PCWSTR pszFunctionName,
        IN PCWSTR pszFunctionArgs,
        IN ICustomAction2ResultCallback * pCompletionCallbackClass
    ) = 0 ;
    virtual
    HRESULT
    UnregisterCustomActionCallback(
        IN PCWSTR pszFunctionName
    ) = 0;
};
class IWpfListenerChannelCallback : public IWpfReferencedObject
{
public:
    virtual
    HRESULT
    ReportStarted(
        VOID
    ) = 0;
    virtual
    HRESULT
    ReportStopped(
        HRESULT hr
    ) = 0;
    virtual
    HRESULT
    ReportMessageReceived(
        VOID
    ) = 0;
    virtual
    HRESULT
    GetId(
        OUT DWORD* pdwListenerChannelId
    ) = 0;
    virtual
    HRESULT
    GetBlob(
        IN OUT PBYTE pBlob,
        IN OUT DWORD* pcbBlob
    ) = 0;
};
class IPmListenerChannelManager: public IWpfReferencedObject
{
public:
    virtual
    HRESULT
    StartListenerChannel(
        IN PCWSTR protocolId,
        IN IWpfListenerChannelCallback * pListenerChannelCallback
    ) = 0;
    virtual
    HRESULT
    StopListenerChannel(
        IN PCWSTR protocolId,
        IN IWpfListenerChannelCallback * pListenerChannelCallback,
        IN BOOL fImmediate
    ) = 0;
};
class IPmIdleTimeOutAction : public IWpfReferencedObject
{
public:
    virtual
    HRESULT
    SuspendProcess(
        VOID
    ) = 0;
};
typedef HRESULT (*PFN_GET_PROTOCOL_MANAGER)
                    ( IN IWorkerProcessFramework * pWpFramework,
                      OUT IProtocolManager ** ppProtocolManager );
HRESULT __stdcall LoadManagedRuntime(
    PCWSTR pwszRuntimeVersion,
    IUnknown ** ppManagedRuntimeHost );
typedef HRESULT (__stdcall *PFNLoadManagedRuntime)(
    PCWSTR pwszRuntimeVersion,
    IUnknown ** ppManagedRuntimeHost );
typedef HRESULT (__stdcall *PFNLoadManagedRuntimeEx)(
    PCWSTR pwszRuntimeVersion,
    PCWSTR pszClrConfigFile,
    IUnknown ** ppManagedRuntimeHost );
#endif
#pragma endregion
