#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windows.h>
extern "C"
{
typedef enum _TRANSPORTCLIENT_CALLBACK_ID
{
    WDS_TRANSPORTCLIENT_SESSION_START = 0,
    WDS_TRANSPORTCLIENT_RECEIVE_CONTENTS,
    WDS_TRANSPORTCLIENT_SESSION_COMPLETE,
    WDS_TRANSPORTCLIENT_RECEIVE_METADATA,
    WDS_TRANSPORTCLIENT_SESSION_STARTEX,
    WDS_TRANSPORTCLIENT_SESSION_NEGOTIATE,
    WDS_TRANSPORTCLIENT_MAX_CALLBACKS,
} TRANSPORTCLIENT_CALLBACK_ID, *PTRANSPORTCLIENT_CALLBACK_ID;
typedef struct _TRANSPORTCLIENT_SESSION_INFO
{
    ULONG ulStructureLength;
    ULARGE_INTEGER ullFileSize;
    ULONG ulBlockSize;
} TRANSPORTCLIENT_SESSION_INFO, *PTRANSPORTCLIENT_SESSION_INFO;
typedef
VOID
(CALLBACK *PFN_WdsTransportClientSessionStart) (
    _In_ HANDLE hSessionKey,
    _In_ PVOID pCallerData,
    _In_ PULARGE_INTEGER ullFileSize
    );
typedef
VOID
(CALLBACK *PFN_WdsTransportClientSessionStartEx) (
    _In_ HANDLE hSessionKey,
    _In_ PVOID pCallerData,
    _In_ PTRANSPORTCLIENT_SESSION_INFO Info
    );
typedef
VOID
(CALLBACK *PFN_WdsTransportClientReceiveMetadata) (
    _In_ HANDLE hSessionKey,
    _In_ PVOID pCallerData,
    _In_reads_bytes_(ulSize) PVOID pMetadata,
    _In_ ULONG ulSize
    );
typedef
VOID
(CALLBACK *PFN_WdsTransportClientReceiveContents) (
    _In_ HANDLE hSessionKey,
    _In_ PVOID pCallerData,
    _In_reads_bytes_(ulSize) PVOID pContents,
    _In_ ULONG ulSize,
    _In_ PULARGE_INTEGER pullContentOffset
    );
typedef
VOID
(CALLBACK *PFN_WdsTransportClientSessionComplete) (
    _In_ HANDLE hSessionKey,
    _In_ PVOID pCallerData,
    _In_ DWORD dwError
    );
typedef
VOID
(CALLBACK *PFN_WdsTransportClientSessionNegotiate) (
    _In_ HANDLE hSessionKey,
    _In_ PVOID pCallerData,
    _In_ PTRANSPORTCLIENT_SESSION_INFO pInfo,
    _In_ HANDLE hNegotiateKey
    );
typedef struct _WDS_TRANSPORTCLIENT_REQUEST
{
    ULONG ulLength;
    ULONG ulApiVersion;
    ULONG ulAuthLevel;
    LPCWSTR pwszServer;
    LPCWSTR pwszNamespace;
    LPCWSTR pwszObjectName;
    ULONG ulCacheSize;
    ULONG ulProtocol;
    PVOID pvProtocolData;
    ULONG ulProtocolDataLength;
} WDS_TRANSPORTCLIENT_REQUEST, *PWDS_TRANSPORTCLIENT_REQUEST;
typedef struct _WDS_TRANSPORTCLIENT_CALLBACKS
{
    PFN_WdsTransportClientSessionStart SessionStart;
    PFN_WdsTransportClientSessionStartEx SessionStartEx;
    PFN_WdsTransportClientReceiveContents ReceiveContents;
    PFN_WdsTransportClientReceiveMetadata ReceiveMetadata;
    PFN_WdsTransportClientSessionComplete SessionComplete;
    PFN_WdsTransportClientSessionNegotiate SessionNegotiate;
} WDS_TRANSPORTCLIENT_CALLBACKS, *PWDS_TRANSPORTCLIENT_CALLBACKS;
DWORD
WDSTCIAPI
WdsTransportClientInitialize (
    VOID
    );
DWORD
WDSTCIAPI
WdsTransportClientInitializeSession (
    _In_ PWDS_TRANSPORTCLIENT_REQUEST pSessionRequest,
    _In_ PVOID pCallerData,
    _Out_ PHANDLE hSessionKey
    );
DWORD
WDSTCIAPI
WdsTransportClientRegisterCallback (
    _In_ HANDLE hSessionKey,
    _In_ TRANSPORTCLIENT_CALLBACK_ID CallbackId,
    _In_ PVOID pfnCallback
    );
DWORD
WDSTCIAPI
WdsTransportClientStartSession (
    _In_ HANDLE hSessionKey
    );
DWORD
WDSTCIAPI
WdsTransportClientCompleteReceive (
    _In_ HANDLE hSessionKey,
    _In_ ULONG ulSize,
    _In_ PULARGE_INTEGER pullOffset
    );
DWORD
WDSTCIAPI
WdsTransportClientCancelSession (
    _In_ HANDLE hSessionKey
    );
DWORD
WDSTCIAPI
WdsTransportClientCancelSessionEx (
    _In_ HANDLE hSessionKey,
    _In_ DWORD dwErrorCode
    );
DWORD
WDSTCIAPI
WdsTransportClientWaitForCompletion (
    _In_ HANDLE hSessionKey,
    _In_ ULONG uTimeout
    );
DWORD
WDSTCIAPI
WdsTransportClientQueryStatus (
    _In_ HANDLE hSessionKey,
    _Out_ PULONG puStatus,
    _Out_ PULONG puErrorCode
    );
DWORD
WDSTCIAPI
WdsTransportClientCloseSession (
    _In_ HANDLE hSessionKey
    );
DWORD
WDSTCIAPI
WdsTransportClientAddRefBuffer (
    _In_ PVOID pvBuffer
    );
DWORD
WDSTCIAPI
WdsTransportClientReleaseBuffer (
    _In_ PVOID pvBuffer
    );
DWORD
WDSTCIAPI
WdsTransportClientShutdown (
    VOID
    );
DWORD
WDSTCIAPI
WdsTransportClientNegotiateRequiredDataRange (
    _In_ HANDLE hSessionKey,
    _In_ HANDLE hNegotiateKey,
    _In_ ULARGE_INTEGER ullDataRangeStart,
    _In_ ULARGE_INTEGER ullDataRangeSize
    );
}
#endif
#pragma endregion
