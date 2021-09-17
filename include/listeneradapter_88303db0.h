#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef VOID
(*PFN_WEBHOST_LISTENER_CONFIG_MANAGER_CONNECTED)(
    IN VOID * pContext
    );
typedef VOID
(*PFN_WEBHOST_LISTENER_CONFIG_MANAGER_DISCONNECT)(
    IN VOID * pContext,
    IN HRESULT hr
    );
typedef VOID
(*PFN_WEBHOST_LISTENER_CONFIG_MANAGER_INITIALIZATION_COMPLETED)(
    IN VOID * pContext
    );
typedef VOID
(*PFN_WEBHOST_LISTENER_APPLICATION_POOL_CREATED)(
    IN VOID * pContext,
    IN LPCWSTR AppPoolId,
    IN PSID PSID
    );
typedef VOID
(*PFN_WEBHOST_LISTENER_APPLICATION_POOL_DELETED)(
    IN VOID * pContext,
    IN LPCWSTR AppPoolId
    );
typedef VOID
(*PFN_WEBHOST_LISTENER_APPLICATION_POOL_IDENTITY_CHANGED)(
    IN VOID * pContext,
    IN LPCWSTR AppPoolId,
    IN PSID PSID
    );
typedef VOID
(*PFN_WEBHOST_LISTENER_APPLICATION_POOL_STATE_CHANGED)(
    IN VOID * pContext,
    IN LPCWSTR AppPoolId,
    IN BOOL fIsEnabled
    );
typedef VOID
(*PFN_WEBHOST_LISTENER_APPLICATION_POOL_CAN_OPEN_NEW_LISTENER_CHANNEL_INSTANCE)(
    IN VOID * pContext,
    IN LPCWSTR AppPoolId,
    IN DWORD ListenerChannelId
    );
typedef VOID
(*PFN_WEBHOST_LISTENER_APPLICATION_POOL_ALL_LISTENER_CHANNEL_INSTANCES_STOPPED)(
    IN VOID * pContext,
    IN LPCWSTR AppPoolId,
    IN DWORD ListenerChannelId
    );
typedef VOID
(*PFN_WEBHOST_LISTENER_APPLICATION_CREATED)(
    IN VOID * pContext,
    IN LPCWSTR AppKey,
    IN LPCWSTR Path,
    IN DWORD SiteId,
    IN LPCWSTR AppPoolId,
    IN PBYTE Bindings,
    IN DWORD NumberOfBindings,
    IN BOOL RequestsBlocked
    );
typedef VOID
(*PFN_WEBHOST_LISTENER_APPLICATION_DELETED)(
    IN VOID * pContext,
    IN LPCWSTR AppKey
    );
typedef VOID
(*PFN_WEBHOST_LISTENER_APPLICATION_BINDINGS_CHANGED)(
    IN VOID * pContext,
    IN LPCWSTR AppKey,
    IN PBYTE Bindings,
    IN DWORD NumberOfBindings
    );
typedef VOID
(*PFN_WEBHOST_LISTENER_APPLICATION_APP_POOL_CHANGED)(
    IN VOID * pContext,
    IN LPCWSTR AppKey,
    IN LPCWSTR AppPoolId
    );
typedef VOID
(*PFN_WEBHOST_LISTENER_APPLICATION_REQUESTS_BLOCKED_CHANGED)(
    IN VOID * pContext,
    IN LPCWSTR AppKey,
    IN BOOL RequestsBlocked
    );
struct WEBHOST_LISTENER_CALLBACKS
{
    DWORD dwBytesInCallbackStructure;
    PFN_WEBHOST_LISTENER_CONFIG_MANAGER_CONNECTED pfnWebhostListenerConfigManagerConnected;
    PFN_WEBHOST_LISTENER_CONFIG_MANAGER_DISCONNECT pfnWebhostListenerConfigManagerDisconnected;
    PFN_WEBHOST_LISTENER_CONFIG_MANAGER_INITIALIZATION_COMPLETED pfnWebhostListenerConfigManagerInitializationCompleted;
    PFN_WEBHOST_LISTENER_APPLICATION_POOL_CREATED pfnWebhostListenerApplicationPoolCreated;
    PFN_WEBHOST_LISTENER_APPLICATION_POOL_DELETED pfnWebhostListenerApplicationPoolDeleted;
    PFN_WEBHOST_LISTENER_APPLICATION_POOL_IDENTITY_CHANGED pfnWebhostListenerApplicationPoolIdentityChanged;
    PFN_WEBHOST_LISTENER_APPLICATION_POOL_STATE_CHANGED pfnWebhostListenerApplicationPoolStateChanged;
    PFN_WEBHOST_LISTENER_APPLICATION_POOL_CAN_OPEN_NEW_LISTENER_CHANNEL_INSTANCE pfnWebhostListenerApplicationPoolCanOpenNewListenerChannelInstance;
    PFN_WEBHOST_LISTENER_APPLICATION_POOL_ALL_LISTENER_CHANNEL_INSTANCES_STOPPED pfnWebhostListenerApplicationPoolAllListenerChannelInstancesStopped;
    PFN_WEBHOST_LISTENER_APPLICATION_CREATED pfnWebhostListenerApplicationCreated;
    PFN_WEBHOST_LISTENER_APPLICATION_DELETED pfnWebhostListenerApplicationDeleted;
    PFN_WEBHOST_LISTENER_APPLICATION_BINDINGS_CHANGED pfnWebhostListenerApplicationBindingsChanged;
    PFN_WEBHOST_LISTENER_APPLICATION_APP_POOL_CHANGED pfnWebhostListenerApplicationAppPoolChanged;
    PFN_WEBHOST_LISTENER_APPLICATION_REQUESTS_BLOCKED_CHANGED pfnWebhostListenerApplicationRequestsBlockedChanged;
};
HRESULT
WebhostGetVersion(
    OUT DWORD* pMajorVersion,
    OUT DWORD* pMinorVersion
    );
HRESULT
WebhostRegisterProtocol(
    IN LPCWSTR ProtocolId,
    IN VOID* pListenerCallbacks,
    IN VOID * pContext,
    OUT DWORD* pProtocolHandle
    );
HRESULT
WebhostUnregisterProtocol(
    IN DWORD ProtocolHandle
    );
HRESULT
WebhostOpenListenerChannelInstance(
    IN DWORD ProtocolHandle,
    IN LPCWSTR AppPoolId,
    IN DWORD ListenerChannelId,
    IN PBYTE ListenerChannelBlob,
    IN DWORD ListenerChannelBlobByteCount
    );
HRESULT
WebhostCloseAllListenerChannelInstances(
    IN DWORD ProtocolHandle,
    IN LPCWSTR AppPoolId,
    IN DWORD ListenerChannelId
    );
}
#endif
#pragma endregion
