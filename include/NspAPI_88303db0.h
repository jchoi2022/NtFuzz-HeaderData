#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern "C" {
typedef struct _BLOB {
    ULONG cbSize ;
    [size_is(cbSize)] BYTE *pBlobData;
} BLOB, *LPBLOB ;
typedef struct _GUID
{
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} GUID;
typedef GUID *LPGUID;
typedef struct _NS_INFOA {
    DWORD dwNameSpace ;
    DWORD dwNameSpaceFlags ;
    LPSTR lpNameSpace ;
} NS_INFOA, * PNS_INFOA, FAR * LPNS_INFOA;
typedef struct _NS_INFOW {
    DWORD dwNameSpace ;
    DWORD dwNameSpaceFlags ;
    LPWSTR lpNameSpace ;
} NS_INFOW, * PNS_INFOW, FAR * LPNS_INFOW;
typedef NS_INFOW NS_INFO;
typedef PNS_INFOW PNS_INFO;
typedef LPNS_INFOW LPNS_INFO;
typedef struct _SERVICE_TYPE_VALUE {
    DWORD dwNameSpace ;
    DWORD dwValueType ;
    DWORD dwValueSize ;
    DWORD dwValueNameOffset ;
    DWORD dwValueOffset ;
} SERVICE_TYPE_VALUE, *PSERVICE_TYPE_VALUE, FAR *LPSERVICE_TYPE_VALUE ;
typedef struct _SERVICE_TYPE_VALUE_ABSA {
    DWORD dwNameSpace ;
    DWORD dwValueType ;
    DWORD dwValueSize ;
    LPSTR lpValueName ;
    PVOID lpValue ;
} SERVICE_TYPE_VALUE_ABSA,
  *PSERVICE_TYPE_VALUE_ABSA,
  FAR *LPSERVICE_TYPE_VALUE_ABSA;
typedef struct _SERVICE_TYPE_VALUE_ABSW {
    DWORD dwNameSpace ;
    DWORD dwValueType ;
    DWORD dwValueSize ;
    LPWSTR lpValueName ;
    PVOID lpValue ;
} SERVICE_TYPE_VALUE_ABSW,
  *PSERVICE_TYPE_VALUE_ABSW,
  FAR *LPSERVICE_TYPE_VALUE_ABSW;
typedef SERVICE_TYPE_VALUE_ABSW SERVICE_TYPE_VALUE_ABS;
typedef PSERVICE_TYPE_VALUE_ABSW PSERVICE_TYPE_VALUE_ABS;
typedef LPSERVICE_TYPE_VALUE_ABSW LPSERVICE_TYPE_VALUE_ABS;
typedef struct _SERVICE_TYPE_INFO {
    DWORD dwTypeNameOffset ;
    DWORD dwValueCount ;
    SERVICE_TYPE_VALUE Values[1] ;
} SERVICE_TYPE_INFO, *PSERVICE_TYPE_INFO, FAR *LPSERVICE_TYPE_INFO ;
typedef struct _SERVICE_TYPE_INFO_ABSA {
    LPSTR lpTypeName ;
    DWORD dwValueCount ;
    SERVICE_TYPE_VALUE_ABSA Values[1] ;
} SERVICE_TYPE_INFO_ABSA,
  *PSERVICE_TYPE_INFO_ABSA,
  FAR *LPSERVICE_TYPE_INFO_ABSA ;
typedef struct _SERVICE_TYPE_INFO_ABSW {
    LPWSTR lpTypeName ;
    DWORD dwValueCount ;
    SERVICE_TYPE_VALUE_ABSW Values[1] ;
} SERVICE_TYPE_INFO_ABSW,
  *PSERVICE_TYPE_INFO_ABSW,
  FAR *LPSERVICE_TYPE_INFO_ABSW ;
typedef SERVICE_TYPE_INFO_ABSW SERVICE_TYPE_INFO_ABS;
typedef PSERVICE_TYPE_INFO_ABSW PSERVICE_TYPE_INFO_ABS;
typedef LPSERVICE_TYPE_INFO_ABSW LPSERVICE_TYPE_INFO_ABS;
typedef struct _SERVICE_ADDRESS {
    DWORD dwAddressType ;
    DWORD dwAddressFlags ;
    DWORD dwAddressLength ;
    DWORD dwPrincipalLength ;
    [size_is(dwAddressLength)] BYTE *lpAddress;
    [size_is(dwPrincipalLength)] BYTE *lpPrincipal;
} SERVICE_ADDRESS, *PSERVICE_ADDRESS, *LPSERVICE_ADDRESS;
typedef struct _SERVICE_ADDRESSES {
    DWORD dwAddressCount ;
    [size_is(dwAddressCount)] SERVICE_ADDRESS Addressses[*];
} SERVICE_ADDRESSES, *PSERVICE_ADDRESSES, *LPSERVICE_ADDRESSES;
typedef struct _SERVICE_INFOA {
    LPGUID lpServiceType ;
    LPSTR lpServiceName ;
    LPSTR lpComment ;
    LPSTR lpLocale ;
    DWORD dwDisplayHint ;
    DWORD dwVersion ;
    DWORD dwTime ;
    LPSTR lpMachineName ;
    LPSERVICE_ADDRESSES lpServiceAddress ;
    BLOB ServiceSpecificInfo ;
} SERVICE_INFOA, *PSERVICE_INFOA, FAR * LPSERVICE_INFOA ;
typedef struct _SERVICE_INFOW {
    LPGUID lpServiceType ;
    LPWSTR lpServiceName ;
    LPWSTR lpComment ;
    LPWSTR lpLocale ;
    DWORD dwDisplayHint ;
    DWORD dwVersion ;
    DWORD dwTime ;
    LPWSTR lpMachineName ;
    LPSERVICE_ADDRESSES lpServiceAddress ;
    BLOB ServiceSpecificInfo ;
} SERVICE_INFOW, *PSERVICE_INFOW, FAR * LPSERVICE_INFOW ;
typedef SERVICE_INFOW SERVICE_INFO;
typedef PSERVICE_INFOW PSERVICE_INFO;
typedef LPSERVICE_INFOW LPSERVICE_INFO;
typedef struct _NS_SERVICE_INFOA {
    DWORD dwNameSpace ;
    SERVICE_INFOA ServiceInfo ;
} NS_SERVICE_INFOA, *PNS_SERVICE_INFOA, FAR * LPNS_SERVICE_INFOA ;
typedef struct _NS_SERVICE_INFOW {
    DWORD dwNameSpace ;
    SERVICE_INFOW ServiceInfo ;
} NS_SERVICE_INFOW, *PNS_SERVICE_INFOW, FAR * LPNS_SERVICE_INFOW ;
typedef NS_SERVICE_INFOW NS_SERVICE_INFO;
typedef PNS_SERVICE_INFOW PNS_SERVICE_INFO;
typedef LPNS_SERVICE_INFOW LPNS_SERVICE_INFO;
typedef struct _SOCKET_ADDRESS {
    LPSOCKADDR lpSockaddr ;
    INT iSockaddrLength ;
} SOCKET_ADDRESS, *PSOCKET_ADDRESS, FAR * LPSOCKET_ADDRESS ;
typedef struct _CSADDR_INFO {
    SOCKET_ADDRESS LocalAddr ;
    SOCKET_ADDRESS RemoteAddr ;
    INT iSocketType ;
    INT iProtocol ;
} CSADDR_INFO, *PCSADDR_INFO, FAR * LPCSADDR_INFO ;
typedef struct _PROTOCOL_INFOA {
    DWORD dwServiceFlags ;
    INT iAddressFamily ;
    INT iMaxSockAddr ;
    INT iMinSockAddr ;
    INT iSocketType ;
    INT iProtocol ;
    DWORD dwMessageSize ;
    LPSTR lpProtocol ;
} PROTOCOL_INFOA, *PPROTOCOL_INFOA, FAR * LPPROTOCOL_INFOA ;
typedef struct _PROTOCOL_INFOW {
    DWORD dwServiceFlags ;
    INT iAddressFamily ;
    INT iMaxSockAddr ;
    INT iMinSockAddr ;
    INT iSocketType ;
    INT iProtocol ;
    DWORD dwMessageSize ;
    LPWSTR lpProtocol ;
} PROTOCOL_INFOW, *PPROTOCOL_INFOW, FAR * LPPROTOCOL_INFOW ;
typedef PROTOCOL_INFOW PROTOCOL_INFO;
typedef PPROTOCOL_INFOW PPROTOCOL_INFO;
typedef LPPROTOCOL_INFOW LPPROTOCOL_INFO;
typedef struct _NETRESOURCE2A {
    DWORD dwScope ;
    DWORD dwType ;
    DWORD dwUsage ;
    DWORD dwDisplayType ;
    LPSTR lpLocalName ;
    LPSTR lpRemoteName ;
    LPSTR lpComment ;
    NS_INFO ns_info ;
    GUID ServiceType ;
    DWORD dwProtocols ;
    LPINT lpiProtocols ;
} NETRESOURCE2A, *PNETRESOURCE2A, FAR * LPNETRESOURCE2A ;
typedef struct _NETRESOURCE2W {
    DWORD dwScope ;
    DWORD dwType ;
    DWORD dwUsage ;
    DWORD dwDisplayType ;
    LPWSTR lpLocalName ;
    LPWSTR lpRemoteName ;
    LPWSTR lpComment ;
    NS_INFO ns_info ;
    GUID ServiceType ;
    DWORD dwProtocols ;
    LPINT lpiProtocols ;
} NETRESOURCE2W, *PNETRESOURCE2W, FAR * LPNETRESOURCE2W ;
typedef NETRESOURCE2W NETRESOURCE2;
typedef PNETRESOURCE2W PNETRESOURCE2;
typedef LPNETRESOURCE2W LPNETRESOURCE2;
typedef DWORD (* LPFN_NSPAPI) (VOID ) ;
typedef
VOID
(*LPSERVICE_CALLBACK_PROC) (
    _In_ LPARAM lParam,
    _In_ HANDLE hAsyncTaskHandle
    );
typedef struct _SERVICE_ASYNC_INFO {
    LPSERVICE_CALLBACK_PROC lpServiceCallbackProc;
    LPARAM lParam;
    HANDLE hAsyncTaskHandle;
} SERVICE_ASYNC_INFO, *PSERVICE_ASYNC_INFO, FAR * LPSERVICE_ASYNC_INFO;
INT
APIENTRY
EnumProtocolsA (
    _In_opt_ LPINT lpiProtocols,
    _Out_writes_bytes_(*lpdwBufferLength) LPVOID lpProtocolBuffer,
    _Inout_ LPDWORD lpdwBufferLength
    );
INT
APIENTRY
EnumProtocolsW (
    _In_opt_ LPINT lpiProtocols,
    _Out_writes_bytes_(*lpdwBufferLength) LPVOID lpProtocolBuffer,
    _Inout_ LPDWORD lpdwBufferLength
    );
INT
APIENTRY
GetAddressByNameA (
    _In_ DWORD dwNameSpace,
    _In_ LPGUID lpServiceType,
    _In_opt_ LPSTR lpServiceName,
    _In_opt_ LPINT lpiProtocols,
    _In_ DWORD dwResolution,
    _In_opt_ LPSERVICE_ASYNC_INFO lpServiceAsyncInfo,
    _Out_writes_bytes_(*lpdwBufferLength) LPVOID lpCsaddrBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _Inout_updates_opt_(*lpdwAliasBufferLength) LPSTR lpAliasBuffer,
    _Inout_ LPDWORD lpdwAliasBufferLength
    );
INT
APIENTRY
GetAddressByNameW (
    _In_ DWORD dwNameSpace,
    _In_ LPGUID lpServiceType,
    _In_opt_ LPWSTR lpServiceName,
    _In_opt_ LPINT lpiProtocols,
    _In_ DWORD dwResolution,
    _In_opt_ LPSERVICE_ASYNC_INFO lpServiceAsyncInfo,
    _Out_writes_bytes_(*lpdwBufferLength) LPVOID lpCsaddrBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _Inout_updates_opt_(*lpdwAliasBufferLength) LPWSTR lpAliasBuffer,
    _Inout_ LPDWORD lpdwAliasBufferLength
    );
INT
APIENTRY
GetTypeByNameA (
    _In_ LPSTR lpServiceName,
    _Inout_ LPGUID lpServiceType
    );
INT
APIENTRY
GetTypeByNameW (
    _In_ LPWSTR lpServiceName,
    _Inout_ LPGUID lpServiceType
    );
INT
APIENTRY
GetNameByTypeA (
    _In_ LPGUID lpServiceType,
    _Out_writes_bytes_(dwNameLength) LPSTR lpServiceName,
    _In_ DWORD dwNameLength
    );
INT
APIENTRY
GetNameByTypeW (
    _In_ LPGUID lpServiceType,
    _Out_writes_bytes_(dwNameLength) LPWSTR lpServiceName,
    _In_ DWORD dwNameLength
    );
INT
APIENTRY
SetServiceA (
    _In_ DWORD dwNameSpace,
    _In_ DWORD dwOperation,
    _In_ DWORD dwFlags,
    _In_ LPSERVICE_INFOA lpServiceInfo,
    _In_opt_ LPSERVICE_ASYNC_INFO lpServiceAsyncInfo,
    _Out_ LPDWORD lpdwStatusFlags
    );
INT
APIENTRY
SetServiceW (
    _In_ DWORD dwNameSpace,
    _In_ DWORD dwOperation,
    _In_ DWORD dwFlags,
    _In_ LPSERVICE_INFOW lpServiceInfo,
    _In_opt_ LPSERVICE_ASYNC_INFO lpServiceAsyncInfo,
    _Out_ LPDWORD lpdwStatusFlags
    );
INT
APIENTRY
GetServiceA (
    _In_ DWORD dwNameSpace,
    _In_ LPGUID lpGuid,
    _In_ LPSTR lpServiceName,
    _In_ DWORD dwProperties,
    _Out_writes_bytes_(*lpdwBufferSize) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwBufferSize,
    _In_opt_ LPSERVICE_ASYNC_INFO lpServiceAsyncInfo
    );
INT
APIENTRY
GetServiceW (
    _In_ DWORD dwNameSpace,
    _In_ LPGUID lpGuid,
    _In_ LPWSTR lpServiceName,
    _In_ DWORD dwProperties,
    _Out_writes_bytes_(*lpdwBufferSize) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwBufferSize,
    _In_opt_ LPSERVICE_ASYNC_INFO lpServiceAsyncInfo
    );
}
#endif
#pragma endregion
