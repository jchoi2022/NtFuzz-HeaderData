#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct _DAV_CALLBACK_AUTH_BLOB{
    PVOID pBuffer;
    ULONG ulSize;
    ULONG ulType;
}DAV_CALLBACK_AUTH_BLOB, *PDAV_CALLBACK_AUTH_BLOB;
typedef struct _DAV_CALLBACK_AUTH_UNP{
   LPWSTR pszUserName;
   ULONG ulUserNameLength;
   LPWSTR pszPassword;
   ULONG ulPasswordLength;
}DAV_CALLBACK_AUTH_UNP, *PDAV_CALLBACK_AUTH_UNP;
typedef struct _DAV_CALLBACK_CRED{
    DAV_CALLBACK_AUTH_BLOB AuthBlob;
    DAV_CALLBACK_AUTH_UNP UNPBlob;
    BOOL bAuthBlobValid;
    BOOL bSave;
}DAV_CALLBACK_CRED, *PDAV_CALLBACK_CRED;
typedef enum
{
  DefaultBehavior,
  RetryRequest,
  CancelRequest
} AUTHNEXTSTEP;
typedef DWORD (CALLBACK *PFNDAVAUTHCALLBACK_FREECRED)(_In_ PVOID pbuffer);
typedef DWORD (CALLBACK *PFNDAVAUTHCALLBACK)(
    _In_ LPWSTR lpwzServerName,
    _In_ LPWSTR lpwzRemoteName,
    _In_ DWORD dwAuthScheme,
    _In_ DWORD dwFlags,
    _Inout_ PDAV_CALLBACK_CRED pCallbackCred,
    _Inout_ AUTHNEXTSTEP *NextStep,
    _Out_ PFNDAVAUTHCALLBACK_FREECRED *pFreeCred
);
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
DavAddConnection(
    _Inout_ HANDLE *ConnectionHandle,
    _In_ LPCWSTR RemoteName,
    _In_opt_ LPCWSTR UserName,
    _In_opt_ LPCWSTR Password,
    _In_reads_bytes_(CertSize) PBYTE ClientCert,
    _In_ DWORD CertSize
    );
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
DavDeleteConnection(
    _In_ HANDLE ConnectionHandle
    );
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
DavGetUNCFromHTTPPath (
    _In_ LPCWSTR Url,
    _Out_writes_to_opt_(*lpSize, *lpSize) LPWSTR UncPath,
    _Inout_ LPDWORD lpSize
    );
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
DavGetHTTPFromUNCPath (
    _In_ LPCWSTR UncPath,
    _Out_writes_to_opt_(*lpSize, *lpSize) LPWSTR Url,
    _Inout_ LPDWORD lpSize
    );
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
DavGetTheLockOwnerOfTheFile(
    _In_ LPCWSTR FileName,
    _Out_writes_bytes_opt_(*LockOwnerNameLengthInBytes) PWSTR LockOwnerName,
    _Inout_ PULONG LockOwnerNameLengthInBytes
    );
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
DavGetExtendedError(
    _In_ HANDLE hFile,
    _Out_ DWORD *ExtError,
    _Out_writes_(*cChSize) LPWSTR ExtErrorString,
    _Inout_ DWORD *cChSize
    );
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
DavFlushFile(
    _In_ HANDLE hFile
    );
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
DavInvalidateCache(
    _In_ LPCWSTR URLName
    );
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
DavCancelConnectionsToServer(
    _In_ LPWSTR lpName,
    _In_ BOOL fForce
    );
OPAQUE_HANDLE
WINAPI
DavRegisterAuthCallback(_In_ PFNDAVAUTHCALLBACK CallBack,
                        _In_ ULONG Version);
VOID
WINAPI
DavUnregisterAuthCallback(_In_ OPAQUE_HANDLE hCallback);
}
#endif
#pragma endregion
