#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C"
{
typedef enum _TRANSPORTPROVIDER_CALLBACK_ID
{
    WDS_TRANSPORTPROVIDER_CREATE_INSTANCE = 0,
    WDS_TRANSPORTPROVIDER_COMPARE_CONTENT,
    WDS_TRANSPORTPROVIDER_OPEN_CONTENT,
    WDS_TRANSPORTPROVIDER_USER_ACCESS_CHECK,
    WDS_TRANSPORTPROVIDER_GET_CONTENT_SIZE,
    WDS_TRANSPORTPROVIDER_READ_CONTENT,
    WDS_TRANSPORTPROVIDER_CLOSE_CONTENT,
    WDS_TRANSPORTPROVIDER_CLOSE_INSTANCE,
    WDS_TRANSPORTPROVIDER_SHUTDOWN,
    WDS_TRANSPORTPROVIDER_DUMP_STATE,
    WDS_TRANSPORTPROVIDER_REFRESH_SETTINGS,
    WDS_TRANSPORTPROVIDER_GET_CONTENT_METADATA,
    WDS_TRANSPORTPROVIDER_MAX_CALLBACKS,
} TRANSPORTPROVIDER_CALLBACK_ID, *PTRANSPORTPROVIDER_CALLBACK_ID;
typedef ULONG WDS_MC_SEVERITY;
typedef struct _WDS_TRANSPORTPROVIDER_INIT_PARAMS
{
    ULONG ulLength;
    ULONG ulMcServerVersion;
    HKEY hRegistryKey;
    HANDLE hProvider;
} WDS_TRANSPORTPROVIDER_INIT_PARAMS, *PWDS_TRANSPORTPROVIDER_INIT_PARAMS;
typedef struct _WDS_TRANSPORTPROVIDER_SETTINGS
{
    ULONG ulLength;
    ULONG ulProviderVersion;
} WDS_TRANSPORTPROVIDER_SETTINGS, *PWDS_TRANSPORTPROVIDER_SETTINGS;
HRESULT
WDSTRANSPORTPROVIDERAPI
WdsTransportProviderInitialize(
    _In_ PWDS_TRANSPORTPROVIDER_INIT_PARAMS pInParameters,
    _Out_writes_bytes_(ulLength) PWDS_TRANSPORTPROVIDER_SETTINGS pSettings,
    _In_ ULONG ulLength
);
HRESULT
WDSTRANSPORTPROVIDERAPI
WdsTransportProviderCreateInstance(
    _In_ PCWSTR pwszConfigString,
    _Out_ PHANDLE phInstance
);
HRESULT
WDSTRANSPORTPROVIDERAPI
WdsTransportProviderCompareContent(
    _In_ HANDLE hInstance,
    _In_ PCWSTR pwszContentName,
    _In_ HANDLE hContent,
    _Out_ PBOOL pbContentMatches
);
HRESULT
WDSTRANSPORTPROVIDERAPI
WdsTransportProviderOpenContent(
    _In_ HANDLE hInstance,
    _In_ PCWSTR pwszContentName,
    _Out_ PHANDLE phContent
);
HRESULT
WDSTRANSPORTPROVIDERAPI
WdsTransportProviderGetContentMetadata(
    _In_ HANDLE hContent,
    _Out_writes_bytes_(*pulLength) PVOID* pvData,
    _Out_ PULONG pulLength
);
HRESULT
WDSTRANSPORTPROVIDERAPI
WdsTransportProviderUserAccessCheck(
    _In_ HANDLE hContent,
    _In_ HANDLE hUserToken,
    _Out_ PBOOL pbAccessAllowed
);
HRESULT
WDSTRANSPORTPROVIDERAPI
WdsTransportProviderGetContentSize(
    _In_ HANDLE hContent,
    _Out_ PULARGE_INTEGER pContentSize
);
HRESULT
WDSTRANSPORTPROVIDERAPI
WdsTransportProviderReadContent(
    _In_ HANDLE hContent,
    _In_reads_bytes_(ulBytesToRead) PVOID pBuffer,
    _In_ ULONG ulBytesToRead,
    _In_ PULARGE_INTEGER pContentOffset,
    _In_ PVOID pvUserData
);
HRESULT
WDSTRANSPORTPROVIDERAPI
WdsTransportProviderCloseContent(
    _In_ HANDLE hContent
);
HRESULT
WDSTRANSPORTPROVIDERAPI
WdsTransportProviderCloseInstance(
    _In_ HANDLE hInstance
);
HRESULT
WDSTRANSPORTPROVIDERAPI
WdsTransportProviderShutdown(
);
HRESULT
WDSTRANSPORTPROVIDERAPI
WdsTransportProviderDumpState(
);
HRESULT
WDSTRANSPORTPROVIDERAPI
WdsTransportProviderRefreshSettings(
);
HRESULT
WDSMCSAPI
WdsTransportServerRegisterCallback(
    _In_ HANDLE hProvider,
    _In_ TRANSPORTPROVIDER_CALLBACK_ID CallbackId,
    _In_ PVOID pfnCallback
);
HRESULT
WDSMCSAPI
WdsTransportServerCompleteRead(
    _In_ HANDLE hProvider,
    _In_ ULONG ulBytesRead,
    _In_ PVOID pvUserData,
    _In_ HRESULT hReadResult
);
HRESULT
WDSMCSAPI
WdsTransportServerTrace(
    _In_ HANDLE hProvider,
    _In_ WDS_MC_SEVERITY Severity,
    _In_ LPCWSTR pwszFormat,
    ...
);
HRESULT
WDSMCSAPI
WdsTransportServerTraceV(
    _In_ HANDLE hProvider,
    _In_ WDS_MC_SEVERITY Severity,
    _In_ LPCWSTR pwszFormat,
    _In_ va_list Params
);
PVOID
WDSMCSAPI
WdsTransportServerAllocateBuffer(
    _In_ HANDLE hProvider,
    _In_ ULONG ulBufferSize
);
HRESULT
WDSMCSAPI
WdsTransportServerFreeBuffer(
    _In_ HANDLE hProvider,
    _In_ PVOID pvBuffer
);
}
#endif
#pragma endregion
