#include <winapifamily.h>
       
extern "C" {
#pragma region Desktop Family or System Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include <wnnc.h>
typedef struct _NETRESOURCEA {
    DWORD dwScope;
    DWORD dwType;
    DWORD dwDisplayType;
    DWORD dwUsage;
    LPSTR lpLocalName;
    LPSTR lpRemoteName;
    LPSTR lpComment ;
    LPSTR lpProvider;
}NETRESOURCEA, *LPNETRESOURCEA;
typedef struct _NETRESOURCEW {
    DWORD dwScope;
    DWORD dwType;
    DWORD dwDisplayType;
    DWORD dwUsage;
    LPWSTR lpLocalName;
    LPWSTR lpRemoteName;
    LPWSTR lpComment ;
    LPWSTR lpProvider;
}NETRESOURCEW, *LPNETRESOURCEW;
typedef NETRESOURCEW NETRESOURCE;
typedef LPNETRESOURCEW LPNETRESOURCE;
_Check_return_
DWORD APIENTRY
WNetAddConnectionA(
    _In_ LPCSTR lpRemoteName,
    _In_opt_ LPCSTR lpPassword,
    _In_opt_ LPCSTR lpLocalName
    );
_Check_return_
DWORD APIENTRY
WNetAddConnectionW(
    _In_ LPCWSTR lpRemoteName,
    _In_opt_ LPCWSTR lpPassword,
    _In_opt_ LPCWSTR lpLocalName
    );
_Check_return_
DWORD APIENTRY
WNetAddConnection2A(
    _In_ LPNETRESOURCEA lpNetResource,
    _In_opt_ LPCSTR lpPassword,
    _In_opt_ LPCSTR lpUserName,
    _In_ DWORD dwFlags
    );
_Check_return_
DWORD APIENTRY
WNetAddConnection2W(
    _In_ LPNETRESOURCEW lpNetResource,
    _In_opt_ LPCWSTR lpPassword,
    _In_opt_ LPCWSTR lpUserName,
    _In_ DWORD dwFlags
    );
_Check_return_
DWORD APIENTRY
WNetAddConnection3A(
    _In_opt_ HWND hwndOwner,
    _In_ LPNETRESOURCEA lpNetResource,
    _In_opt_ LPCSTR lpPassword,
    _In_opt_ LPCSTR lpUserName,
    _In_ DWORD dwFlags
    );
_Check_return_
DWORD APIENTRY
WNetAddConnection3W(
    _In_opt_ HWND hwndOwner,
    _In_ LPNETRESOURCEW lpNetResource,
    _In_opt_ LPCWSTR lpPassword,
    _In_opt_ LPCWSTR lpUserName,
    _In_ DWORD dwFlags
    );
_Check_return_
DWORD APIENTRY
WNetCancelConnectionA(
    _In_ LPCSTR lpName,
    _In_ BOOL fForce
    );
_Check_return_
DWORD APIENTRY
WNetCancelConnectionW(
    _In_ LPCWSTR lpName,
    _In_ BOOL fForce
    );
_Check_return_
DWORD APIENTRY
WNetCancelConnection2A(
    _In_ LPCSTR lpName,
    _In_ DWORD dwFlags,
    _In_ BOOL fForce
    );
_Check_return_
DWORD APIENTRY
WNetCancelConnection2W(
    _In_ LPCWSTR lpName,
    _In_ DWORD dwFlags,
    _In_ BOOL fForce
    );
_Check_return_
DWORD APIENTRY
WNetGetConnectionA(
    _In_ LPCSTR lpLocalName,
    _Out_writes_opt_(*lpnLength) LPSTR lpRemoteName,
    _Inout_ LPDWORD lpnLength
    );
_Check_return_
DWORD APIENTRY
WNetGetConnectionW(
    _In_ LPCWSTR lpLocalName,
    _Out_writes_opt_(*lpnLength) LPWSTR lpRemoteName,
    _Inout_ LPDWORD lpnLength
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
_Check_return_
DWORD APIENTRY
WNetRestoreSingleConnectionW(
    _In_opt_ HWND hwndParent,
    _In_ LPCWSTR lpDevice,
    _In_ BOOL fUseUI
    );
#endif
#pragma endregion
#pragma region Desktop Family or System Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_
DWORD APIENTRY
WNetUseConnectionA(
    _In_opt_ HWND hwndOwner,
    _In_ LPNETRESOURCEA lpNetResource,
    _In_opt_ LPCSTR lpPassword,
    _In_opt_ LPCSTR lpUserId,
    _In_ DWORD dwFlags,
    _Out_writes_opt_(*lpBufferSize) LPSTR lpAccessName,
    _Inout_opt_ LPDWORD lpBufferSize,
    _Out_opt_ LPDWORD lpResult
    );
_Check_return_
DWORD APIENTRY
WNetUseConnectionW(
    _In_opt_ HWND hwndOwner,
    _In_ LPNETRESOURCEW lpNetResource,
    _In_opt_ LPCWSTR lpPassword,
    _In_opt_ LPCWSTR lpUserId,
    _In_ DWORD dwFlags,
    _Out_writes_opt_(*lpBufferSize) LPWSTR lpAccessName,
    _Inout_opt_ LPDWORD lpBufferSize,
    _Out_opt_ LPDWORD lpResult
    );
_Check_return_
DWORD APIENTRY
WNetConnectionDialog(
    _In_ HWND hwnd,
    _In_ DWORD dwType
    );
_Check_return_
DWORD APIENTRY
WNetDisconnectDialog(
    _In_opt_ HWND hwnd,
    _In_ DWORD dwType
    );
typedef struct _CONNECTDLGSTRUCTA{
    DWORD cbStructure;
    HWND hwndOwner;
    LPNETRESOURCEA lpConnRes;
    DWORD dwFlags;
    DWORD dwDevNum;
} CONNECTDLGSTRUCTA, FAR *LPCONNECTDLGSTRUCTA;
typedef struct _CONNECTDLGSTRUCTW{
    DWORD cbStructure;
    HWND hwndOwner;
    LPNETRESOURCEW lpConnRes;
    DWORD dwFlags;
    DWORD dwDevNum;
} CONNECTDLGSTRUCTW, FAR *LPCONNECTDLGSTRUCTW;
typedef CONNECTDLGSTRUCTW CONNECTDLGSTRUCT;
typedef LPCONNECTDLGSTRUCTW LPCONNECTDLGSTRUCT;
_Check_return_
DWORD APIENTRY
WNetConnectionDialog1A(
    _Inout_ LPCONNECTDLGSTRUCTA lpConnDlgStruct
    );
_Check_return_
DWORD APIENTRY
WNetConnectionDialog1W(
    _Inout_ LPCONNECTDLGSTRUCTW lpConnDlgStruct
    );
typedef struct _DISCDLGSTRUCTA{
    DWORD cbStructure;
    HWND hwndOwner;
    LPSTR lpLocalName;
    LPSTR lpRemoteName;
    DWORD dwFlags;
} DISCDLGSTRUCTA, FAR *LPDISCDLGSTRUCTA;
typedef struct _DISCDLGSTRUCTW{
    DWORD cbStructure;
    HWND hwndOwner;
    LPWSTR lpLocalName;
    LPWSTR lpRemoteName;
    DWORD dwFlags;
} DISCDLGSTRUCTW, FAR *LPDISCDLGSTRUCTW;
typedef DISCDLGSTRUCTW DISCDLGSTRUCT;
typedef LPDISCDLGSTRUCTW LPDISCDLGSTRUCT;
_Check_return_
DWORD APIENTRY
WNetDisconnectDialog1A(
    _In_ LPDISCDLGSTRUCTA lpConnDlgStruct
    );
_Check_return_
DWORD APIENTRY
WNetDisconnectDialog1W(
    _In_ LPDISCDLGSTRUCTW lpConnDlgStruct
    );
_Check_return_
DWORD APIENTRY
WNetOpenEnumA(
    _In_ DWORD dwScope,
    _In_ DWORD dwType,
    _In_ DWORD dwUsage,
    _In_opt_ LPNETRESOURCEA lpNetResource,
    _Out_ LPHANDLE lphEnum
    );
_Check_return_
DWORD APIENTRY
WNetOpenEnumW(
    _In_ DWORD dwScope,
    _In_ DWORD dwType,
    _In_ DWORD dwUsage,
    _In_opt_ LPNETRESOURCEW lpNetResource,
    _Out_ LPHANDLE lphEnum
    );
_Check_return_
DWORD APIENTRY
WNetEnumResourceA(
    _In_ HANDLE hEnum,
    _Inout_ LPDWORD lpcCount,
    _Out_writes_bytes_(*lpBufferSize) LPVOID lpBuffer,
    _Inout_ LPDWORD lpBufferSize
    );
_Check_return_
DWORD APIENTRY
WNetEnumResourceW(
    _In_ HANDLE hEnum,
    _Inout_ LPDWORD lpcCount,
    _Out_writes_bytes_(*lpBufferSize) LPVOID lpBuffer,
    _Inout_ LPDWORD lpBufferSize
    );
_Check_return_
DWORD APIENTRY
WNetCloseEnum(
    _In_ HANDLE hEnum
    );
_Check_return_
DWORD APIENTRY
WNetGetResourceParentA(
    _In_ LPNETRESOURCEA lpNetResource,
    _Out_writes_bytes_(*lpcbBuffer) LPVOID lpBuffer,
    _Inout_ LPDWORD lpcbBuffer
    );
_Check_return_
DWORD APIENTRY
WNetGetResourceParentW(
    _In_ LPNETRESOURCEW lpNetResource,
    _Out_writes_bytes_(*lpcbBuffer) LPVOID lpBuffer,
    _Inout_ LPDWORD lpcbBuffer
    );
_Check_return_
DWORD APIENTRY
WNetGetResourceInformationA(
    _In_ LPNETRESOURCEA lpNetResource,
    _Out_writes_bytes_(*lpcbBuffer) LPVOID lpBuffer,
    _Inout_ LPDWORD lpcbBuffer,
    _Outptr_ LPSTR *lplpSystem
    );
_Check_return_
DWORD APIENTRY
WNetGetResourceInformationW(
    _In_ LPNETRESOURCEW lpNetResource,
    _Out_writes_bytes_(*lpcbBuffer) LPVOID lpBuffer,
    _Inout_ LPDWORD lpcbBuffer,
    _Outptr_ LPWSTR *lplpSystem
    );
typedef struct _UNIVERSAL_NAME_INFOA {
    LPSTR lpUniversalName;
}UNIVERSAL_NAME_INFOA, *LPUNIVERSAL_NAME_INFOA;
typedef struct _UNIVERSAL_NAME_INFOW {
    LPWSTR lpUniversalName;
}UNIVERSAL_NAME_INFOW, *LPUNIVERSAL_NAME_INFOW;
typedef UNIVERSAL_NAME_INFOW UNIVERSAL_NAME_INFO;
typedef LPUNIVERSAL_NAME_INFOW LPUNIVERSAL_NAME_INFO;
typedef struct _REMOTE_NAME_INFOA {
    LPSTR lpUniversalName;
    LPSTR lpConnectionName;
    LPSTR lpRemainingPath;
}REMOTE_NAME_INFOA, *LPREMOTE_NAME_INFOA;
typedef struct _REMOTE_NAME_INFOW {
    LPWSTR lpUniversalName;
    LPWSTR lpConnectionName;
    LPWSTR lpRemainingPath;
}REMOTE_NAME_INFOW, *LPREMOTE_NAME_INFOW;
typedef REMOTE_NAME_INFOW REMOTE_NAME_INFO;
typedef LPREMOTE_NAME_INFOW LPREMOTE_NAME_INFO;
_Check_return_
DWORD APIENTRY
WNetGetUniversalNameA(
    _In_ LPCSTR lpLocalPath,
    _In_ DWORD dwInfoLevel,
    _Out_writes_bytes_(*lpBufferSize) LPVOID lpBuffer,
    _Inout_ LPDWORD lpBufferSize
    );
_Check_return_
DWORD APIENTRY
WNetGetUniversalNameW(
    _In_ LPCWSTR lpLocalPath,
    _In_ DWORD dwInfoLevel,
    _Out_writes_bytes_(*lpBufferSize) LPVOID lpBuffer,
    _Inout_ LPDWORD lpBufferSize
    );
_Check_return_
DWORD APIENTRY
WNetGetUserA(
    _In_opt_ LPCSTR lpName,
    _Out_writes_(*lpnLength) LPSTR lpUserName,
    _Inout_ LPDWORD lpnLength
    );
_Check_return_
DWORD APIENTRY
WNetGetUserW(
    _In_opt_ LPCWSTR lpName,
    _Out_writes_(*lpnLength) LPWSTR lpUserName,
    _Inout_ LPDWORD lpnLength
    );
_Check_return_
DWORD APIENTRY
WNetGetProviderNameA(
    _In_ DWORD dwNetType,
    _Out_writes_(*lpBufferSize) LPSTR lpProviderName,
    _Inout_ LPDWORD lpBufferSize
    );
_Check_return_
DWORD APIENTRY
WNetGetProviderNameW(
    _In_ DWORD dwNetType,
    _Out_writes_(*lpBufferSize) LPWSTR lpProviderName,
    _Inout_ LPDWORD lpBufferSize
    );
typedef struct _NETINFOSTRUCT{
    DWORD cbStructure;
    DWORD dwProviderVersion;
    DWORD dwStatus;
    DWORD dwCharacteristics;
    ULONG_PTR dwHandle;
    WORD wNetType;
    DWORD dwPrinters;
    DWORD dwDrives;
} NETINFOSTRUCT, FAR *LPNETINFOSTRUCT;
_Check_return_
DWORD APIENTRY
WNetGetNetworkInformationA(
    _In_ LPCSTR lpProvider,
    _Out_ LPNETINFOSTRUCT lpNetInfoStruct
    );
_Check_return_
DWORD APIENTRY
WNetGetNetworkInformationW(
    _In_ LPCWSTR lpProvider,
    _Out_ LPNETINFOSTRUCT lpNetInfoStruct
    );
_Check_return_
DWORD APIENTRY
WNetGetLastErrorA(
    _Out_ LPDWORD lpError,
    _Out_writes_(nErrorBufSize) LPSTR lpErrorBuf,
    _In_ DWORD nErrorBufSize,
    _Out_writes_(nNameBufSize) LPSTR lpNameBuf,
    _In_ DWORD nNameBufSize
    );
_Check_return_
DWORD APIENTRY
WNetGetLastErrorW(
    _Out_ LPDWORD lpError,
    _Out_writes_(nErrorBufSize) LPWSTR lpErrorBuf,
    _In_ DWORD nErrorBufSize,
    _Out_writes_(nNameBufSize) LPWSTR lpNameBuf,
    _In_ DWORD nNameBufSize
    );
typedef struct _NETCONNECTINFOSTRUCT{
    DWORD cbStructure;
    DWORD dwFlags;
    DWORD dwSpeed;
    DWORD dwDelay;
    DWORD dwOptDataSize;
} NETCONNECTINFOSTRUCT, *LPNETCONNECTINFOSTRUCT;
_Check_return_
DWORD APIENTRY
MultinetGetConnectionPerformanceA(
    _In_ LPNETRESOURCEA lpNetResource,
    _Out_ LPNETCONNECTINFOSTRUCT lpNetConnectInfoStruct
    );
_Check_return_
DWORD APIENTRY
MultinetGetConnectionPerformanceW(
    _In_ LPNETRESOURCEW lpNetResource,
    _Out_ LPNETCONNECTINFOSTRUCT lpNetConnectInfoStruct
    );
#endif
#pragma endregion
}
