#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
#endif
#pragma endregion
#pragma region Desktop Family or RemoteFS Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_REMOTEFS)
DWORD APIENTRY
NPAddConnection (
    _In_ LPNETRESOURCEW lpNetResource,
    _In_opt_ LPWSTR lpPassword,
    _In_opt_ LPWSTR lpUserName
    );
typedef DWORD (APIENTRY *PF_NPAddConnection) (
    _In_ LPNETRESOURCEW lpNetResource,
    _In_opt_ LPWSTR lpPassword,
    _In_opt_ LPWSTR lpUserName
    );
DWORD APIENTRY
NPAddConnection3 (
    _In_opt_ HWND hwndOwner,
    _In_ LPNETRESOURCEW lpNetResource,
    _In_opt_ LPWSTR lpPassword,
    _In_opt_ LPWSTR lpUserName,
    _In_ DWORD dwFlags
    );
typedef DWORD (APIENTRY *PF_NPAddConnection3) (
    _In_opt_ HWND hwndOwner,
    _In_ LPNETRESOURCEW lpNetResource,
    _In_opt_ LPWSTR lpPassword,
    _In_opt_ LPWSTR lpUserName,
    _In_ DWORD dwFlags
    );
DWORD APIENTRY
NPCancelConnection (
    _In_ LPWSTR lpName,
    _In_ BOOL fForce
    );
typedef DWORD (APIENTRY *PF_NPCancelConnection) (
    _In_ LPWSTR lpName,
    _In_ BOOL fForce
    );
DWORD APIENTRY
NPGetConnection (
    _In_ LPWSTR lpLocalName,
    _Out_writes_opt_(*lpnBufferLen) LPWSTR lpRemoteName,
    _Inout_ LPDWORD lpnBufferLen
    );
typedef DWORD (APIENTRY *PF_NPGetConnection) (
    _In_ LPWSTR lpLocalName,
    _Out_writes_opt_(*lpnBufferLen) LPWSTR lpRemoteName,
    _Inout_ LPDWORD lpnBufferLen
    );
DWORD APIENTRY
NPGetConnection3 (
    _In_ LPCWSTR lpLocalName,
    _In_ DWORD dwLevel,
    _Out_writes_bytes_(*lpBufferSize) LPVOID lpBuffer,
    _Inout_ LPDWORD lpBufferSize
    );
typedef DWORD (APIENTRY *PF_NPGetConnection3) (
    _In_ LPCWSTR lpLocalName,
    _In_ DWORD dwLevel,
    _Out_writes_bytes_(*lpBufferSize) LPVOID lpBuffer,
    _Inout_ LPDWORD lpBufferSize
    );
DWORD APIENTRY
NPGetUniversalName (
    _In_ LPCWSTR lpLocalPath,
    _In_ DWORD dwInfoLevel,
    _Out_writes_bytes_(*lpBufferSize) LPVOID lpBuffer,
    _Inout_ LPDWORD lpBufferSize
    );
typedef DWORD (APIENTRY *PF_NPGetUniversalName) (
    _In_ LPCWSTR lpLocalPath,
    _In_ DWORD dwInfoLevel,
    _Out_writes_bytes_(*lpnBufferSize) LPVOID lpBuffer,
    _Inout_ LPDWORD lpnBufferSize
    );
DWORD APIENTRY
NPGetConnectionPerformance (
    _In_ LPCWSTR lpRemoteName,
    _Out_ LPNETCONNECTINFOSTRUCT lpNetConnectInfo
    );
typedef DWORD (APIENTRY *PF_NPGetConnectionPerformance) (
    _In_ LPCWSTR lpRemoteName,
    _Out_ LPNETCONNECTINFOSTRUCT lpNetConnectInfo
    );
DWORD APIENTRY
NPOpenEnum (
    _In_ DWORD dwScope,
    _In_ DWORD dwType,
    _In_ DWORD dwUsage,
    _In_opt_ LPNETRESOURCEW lpNetResource,
    _Out_ LPHANDLE lphEnum
    );
typedef DWORD (APIENTRY *PF_NPOpenEnum) (
    _In_ DWORD dwScope,
    _In_ DWORD dwType,
    _In_ DWORD dwUsage,
    _In_opt_ LPNETRESOURCEW lpNetResource,
    _Out_ LPHANDLE lphEnum
    );
DWORD APIENTRY
NPEnumResource (
    _In_ HANDLE hEnum,
    _Inout_ LPDWORD lpcCount,
    _Out_writes_bytes_(*lpBufferSize) LPVOID lpBuffer,
    _Inout_ LPDWORD lpBufferSize
    );
typedef DWORD (APIENTRY *PF_NPEnumResource) (
    _In_ HANDLE hEnum,
    _Inout_ LPDWORD lpcCount,
    _Out_writes_bytes_(*lpbufferSize) LPVOID lpBuffer,
    _Inout_ LPDWORD lpBufferSize
    );
DWORD APIENTRY
NPCloseEnum (
    _In_ HANDLE hEnum
    );
typedef DWORD (APIENTRY *PF_NPCloseEnum) (
    _In_ HANDLE hEnum
    );
DWORD APIENTRY
NPGetCaps (
    _In_ DWORD ndex
    );
typedef DWORD (APIENTRY *PF_NPGetCaps) (
    _In_ DWORD ndex
    );
DWORD APIENTRY
NPGetUser (
    _In_ LPWSTR lpName,
    _Out_writes_(*lpnBufferLen) LPWSTR lpUserName,
    _Inout_ LPDWORD lpnBufferLen
    );
typedef DWORD (APIENTRY *PF_NPGetUser) (
    _In_ LPWSTR lpName,
    _Out_writes_(*lpnBufferLen) LPWSTR lpUserName,
    _Inout_ LPDWORD lpnBufferLen
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DWORD APIENTRY
NPDeviceMode(
    _In_ HWND hParent
    );
typedef DWORD (APIENTRY *PF_NPDeviceMode) (
    _In_ HWND hParent
    );
DWORD APIENTRY
NPSearchDialog(
    _In_ HWND hwndParent,
    _In_opt_ LPNETRESOURCEW lpNetResource,
    _Out_writes_(cbBuffer) LPVOID lpBuffer,
    _In_ DWORD cbBuffer,
    _Out_ LPDWORD lpnFlags
    );
typedef DWORD (APIENTRY *PF_NPSearchDialog) (
    _In_ HWND hwndParent,
    _In_opt_ LPNETRESOURCEW lpNetResource,
    _Out_writes_(cbBuffer) LPVOID lpBuffer,
    _In_ DWORD cbBuffer,
    _Out_ LPDWORD lpnFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family or RemoteFS Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_REMOTEFS)
DWORD APIENTRY
NPGetResourceParent(
    _In_ LPNETRESOURCEW lpNetResource,
    _Out_writes_bytes_(*lpBufferSize) LPVOID lpBuffer,
    _Inout_ LPDWORD lpBufferSize
    );
typedef DWORD (APIENTRY *PF_NPGetResourceParent) (
    _In_ LPNETRESOURCEW lpNetResource,
    _Out_writes_bytes_(*lpBufferSize) LPVOID lpBuffer,
    _Inout_ LPDWORD lpBufferSize
    );
DWORD APIENTRY NPGetResourceInformation(
    _In_ LPNETRESOURCEW lpNetResource,
    _Out_writes_bytes_(*lpBufferSize) LPVOID lpBuffer,
    _Inout_ LPDWORD lpBufferSize,
    _Outptr_ LPWSTR *lplpSystem
    );
typedef DWORD (APIENTRY *PF_NPGetResourceInformation) (
    _In_ LPNETRESOURCEW lpNetResource,
    _Out_writes_bytes_(*lpBufferSize) LPVOID lpBuffer,
    _Inout_ LPDWORD lpBufferSize,
    _Outptr_ LPWSTR *lplpSystem
    );
DWORD APIENTRY
NPFormatNetworkName(
    _In_ LPWSTR lpRemoteName,
    _Out_writes_(*lpnLength) LPWSTR lpFormattedName,
    _Inout_ LPDWORD lpnLength,
    _In_ DWORD dwFlags,
    _In_ DWORD dwAveCharPerLine
    );
typedef DWORD (APIENTRY *PF_NPFormatNetworkName) (
    _In_ LPWSTR lpRemoteName,
    _Out_writes_(*lpnLength) LPWSTR lpFormattedName,
    _Inout_ LPDWORD lpnLength,
    _In_ DWORD dwFlags,
    _In_ DWORD dwAveCharPerLine
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DWORD APIENTRY
NPGetPropertyText(
    _In_ DWORD iButton,
    _In_ DWORD nPropSel,
    _In_ LPWSTR lpName,
    _Out_writes_(nButtonNameLen) LPWSTR lpButtonName,
    _In_ DWORD nButtonNameLen,
    _In_ DWORD nType
    );
typedef DWORD (APIENTRY *PF_NPGetPropertyText) (
    _In_ DWORD iButton,
    _In_ DWORD nPropSel,
    _In_ LPWSTR lpName,
    _Out_writes_(nButtonNameLen) LPWSTR lpButtonName,
    _In_ DWORD nButtonNameLen,
    _In_ DWORD nType
    );
DWORD APIENTRY
NPPropertyDialog(
    _In_ HWND hwndParent,
    _In_ DWORD iButtonDlg,
    _In_ DWORD nPropSel,
    _In_ LPWSTR lpFileName,
    _In_ DWORD nType
    );
typedef DWORD (APIENTRY *PF_NPPropertyDialog) (
    _In_ HWND hwndParent,
    _In_ DWORD iButtonDlg,
    _In_ DWORD nPropSel,
    _In_ LPWSTR lpFileName,
    _In_ DWORD nType
    );
DWORD APIENTRY
NPGetDirectoryType (
    _In_ LPWSTR lpName,
    _In_ LPINT lpType,
    _In_ BOOL bFlushCache
    );
typedef DWORD (APIENTRY *PF_NPGetDirectoryType) (
    _In_ LPWSTR lpName,
    _In_ LPINT lpType,
    _In_ BOOL bFlushCache
    );
DWORD APIENTRY
NPDirectoryNotify (
    _In_ HWND hwnd,
    _In_ LPWSTR lpDir,
    _In_ DWORD dwOper
    );
typedef DWORD (APIENTRY *PF_NPDirectoryNotify) (
    _In_ HWND hwnd,
    _In_ LPWSTR lpDir,
    _In_ DWORD dwOper
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
VOID
WNetSetLastErrorA(
    _In_ DWORD err,
    _In_ LPSTR lpError,
    _In_ LPSTR lpProviders
    );
VOID
WNetSetLastErrorW(
    _In_ DWORD err,
    _In_ LPWSTR lpError,
    _In_ LPWSTR lpProviders
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DWORD APIENTRY
NPLogonNotify (
    _In_ PLUID lpLogonId,
    _In_ LPCWSTR lpAuthentInfoType,
    _In_ LPVOID lpAuthentInfo,
    _In_opt_ LPCWSTR lpPreviousAuthentInfoType,
    _In_opt_ LPVOID lpPreviousAuthentInfo,
    _In_ LPWSTR lpStationName,
    _In_opt_ LPVOID StationHandle,
    _Out_ LPWSTR *lpLogonScript
    );
typedef DWORD (APIENTRY *PF_NPLogonNotify) (
    _In_ PLUID lpLogonId,
    _In_ LPCWSTR lpAuthentInfoType,
    _In_ LPVOID lpAuthentInfo,
    _In_opt_ LPCWSTR lpPreviousAuthentInfoType,
    _In_opt_ LPVOID lpPreviousAuthentInfo,
    _In_ LPWSTR lpStationName,
    _In_opt_ LPVOID StationHandle,
    _Out_ LPWSTR *lpLogonScript
    );
DWORD APIENTRY
NPPasswordChangeNotify (
    _In_ LPCWSTR lpAuthentInfoType,
    _In_ LPVOID lpAuthentInfo,
    _In_ LPCWSTR lpPreviousAuthentInfoType,
    _In_ LPVOID lpPreviousAuthentInfo,
    _In_ LPWSTR lpStationName,
    _In_opt_ LPVOID StationHandle,
    _In_ DWORD dwChangeInfo
    );
typedef DWORD (APIENTRY *PF_NPPasswordChangeNotify) (
    _In_ LPCWSTR lpAuthentInfoType,
    _In_ LPVOID lpAuthentInfo,
    _In_ LPCWSTR lpPreviousAuthentInfoType,
    _In_ LPVOID lpPreviousAuthentInfo,
    _In_ LPWSTR lpStationName,
    _In_opt_ LPVOID StationHandle,
    _In_ DWORD dwChangeInfo
    );
typedef struct _NOTIFYINFO {
    DWORD dwNotifyStatus;
    DWORD dwOperationStatus;
    LPVOID lpContext;
} NOTIFYINFO, *LPNOTIFYINFO;
typedef struct _NOTIFYADD {
    HWND hwndOwner;
    NETRESOURCE NetResource;
    DWORD dwAddFlags;
} NOTIFYADD, *LPNOTIFYADD;
typedef struct _NOTIFYCANCEL {
    LPWSTR lpName;
    LPWSTR lpProvider;
    DWORD dwFlags;
    BOOL fForce;
} NOTIFYCANCEL, *LPNOTIFYCANCEL;
DWORD APIENTRY
AddConnectNotify (
    _Inout_ LPNOTIFYINFO lpNotifyInfo,
    _In_ LPNOTIFYADD lpAddInfo
    );
typedef DWORD (APIENTRY *PF_AddConnectNotify) (
    _Inout_ LPNOTIFYINFO lpNotifyInfo,
    _In_ LPNOTIFYADD lpAddInfo
    );
DWORD APIENTRY
CancelConnectNotify (
    _Inout_ LPNOTIFYINFO lpNotifyInfo,
    _In_ LPNOTIFYCANCEL lpCancelInfo
    );
typedef DWORD (APIENTRY *PF_CancelConnectNotify) (
    _Inout_ LPNOTIFYINFO lpNotifyInfo,
    _In_ LPNOTIFYCANCEL lpCancelInfo
    );
DWORD APIENTRY
NPFMXGetPermCaps (
    _In_ LPWSTR lpDriveName
    );
typedef DWORD (APIENTRY *PF_NPFMXGetPermCaps) (
    _In_ LPWSTR lpDriveName
    );
DWORD APIENTRY
NPFMXEditPerm (
    _In_ LPWSTR lpDriveName,
    _In_ HWND hwndFMX,
    _In_ DWORD nDialogType
    );
typedef DWORD (APIENTRY *PF_NPFMXEditPerm) (
    _In_ LPWSTR lpDriveName,
    _In_ HWND hwndFMX,
    _In_ DWORD nDialogType
    );
DWORD APIENTRY
NPFMXGetPermHelp (
    _In_ LPWSTR lpDriveName,
    _In_ DWORD nDialogType,
    _In_ BOOL fDirectory,
    _Out_writes_(*lpBufferSize) LPVOID lpFileNameBuffer,
    _Inout_ LPDWORD lpBufferSize,
    _Out_ LPDWORD lpnHelpContext
    );
typedef DWORD (APIENTRY *PF_NPFMXGetPermHelp) (
    _In_ LPWSTR lpDriveName,
    _In_ DWORD nDialogType,
    _In_ BOOL fDirectory,
    _Out_writes_(*lpBufferSize) LPVOID lpFileNameBuffer,
    _Inout_ LPDWORD lpBufferSize,
    _Out_ LPDWORD lpnHelpContext
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
}
#endif
#pragma endregion
