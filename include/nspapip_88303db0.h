#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
INT
(APIENTRY *LPGET_ADDR_BY_NAME_PROC) (
    _In_ LPGUID lpServiceType,
    _In_z_ LPWSTR lpServiceName,
    _In_ LPDWORD lpdwProtocols,
    _In_ DWORD dwResolution,
    _Out_writes_bytes_(*lpdwBufferLength) LPVOID lpCsaddrBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _Out_writes_bytes_(*lpdwAliasBufferlength) LPWSTR lpAliasBuffer,
    _Inout_ LPDWORD lpdwAliasBufferLength,
    _In_ HANDLE hCancellationEvent
    );
typedef struct _NS_ROUTINE {
    DWORD dwFunctionCount;
    LPFN_NSPAPI *alpfnFunctions;
    DWORD dwNameSpace;
    DWORD dwPriority;
} NS_ROUTINE, *PNS_ROUTINE, * FAR LPNS_ROUTINE;
typedef
DWORD
(APIENTRY *LPLOAD_NAME_SPACE_PROC) (
    _Inout_ LPDWORD lpdwVersion,
    _Inout_updates_bytes_(*lpdwBufferLength) LPNS_ROUTINE nsrBuffer,
    _Inout_ LPDWORD lpdwBufferLength
    );
typedef
INT
(APIENTRY *LPGET_SERVICE_PROC) (
    _In_ LPGUID lpServiceType,
    _In_z_ LPWSTR lpServiceName,
    _In_ DWORD dwProperties,
    _In_ BOOL fUnicodeBlob,
    _Out_writes_bytes_(*lpdwBufferLen) LPSERVICE_INFO lpServiceInfo,
    _Inout_ LPDWORD lpdwBufferLen
    );
typedef
DWORD
(APIENTRY *LPSET_SERVICE_PROC) (
    _In_ DWORD dwOperation,
    _In_ DWORD dwFlags,
    _In_ BOOL fUnicodeBlob,
    _In_ LPSERVICE_INFO lpServiceInfo
    );
DWORD
APIENTRY
NPGetService (
    _In_ LPGUID lpServiceType,
    _In_z_ LPWSTR lpServiceName,
    _In_ DWORD dwProperties,
    _In_ BOOL fUnicodeBlob,
    _Out_writes_bytes_(*lpdwBufferLen) LPSERVICE_INFO lpServiceInfo,
    _Inout_ LPDWORD lpdwBufferLen
    );
DWORD
APIENTRY
NPSetService (
    _In_ DWORD dwOperation,
    _In_ DWORD dwFlags,
    _In_ BOOL fUnicodeBlob,
    _In_ LPSERVICE_INFO lpServiceInfo
    );
INT
APIENTRY
NPGetAddressByName (
    _In_ LPGUID lpServiceType,
    _In_z_ LPWSTR lpServiceName,
    _In_ LPDWORD lpdwProtocols,
    _In_ DWORD dwResolution,
    _Out_writes_bytes_(*lpdwBufferLength) LPVOID lpCsaddrBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _Out_writes_bytes_(*lpdwAliasBufferlength) LPWSTR lpAliasBuffer,
    _Inout_ LPDWORD lpdwAliasBufferLength,
    _In_ HANDLE hCancellationEvent
    );
INT
APIENTRY
NPLoadNameSpaces (
    _Inout_ LPDWORD lpdwVersion,
    _Inout_updates_bytes_(*lpdwBufferLength) LPNS_ROUTINE nsrBuffer,
    _Inout_ LPDWORD lpdwBufferLength
    );
#endif
#pragma endregion
