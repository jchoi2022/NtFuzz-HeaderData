       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
typedef enum HCN_NOTIFICATIONS
{
       HcnNotificationInvalid = 0x00000000,
       HcnNotificationNetworkPreCreate = 0x00000001,
       HcnNotificationNetworkCreate = 0x00000002,
       HcnNotificationNetworkPreDelete = 0x00000003,
       HcnNotificationNetworkDelete = 0x00000004,
       HcnNotificationNamespaceCreate = 0x00000005,
       HcnNotificationNamespaceDelete = 0x00000006,
       HcnNotificationServiceDisconnect = 0x01000000,
       HcnNotificationFlagsReserved = 0xF0000000
} HCN_NOTIFICATIONS;
typedef void* HCN_CALLBACK;
typedef void (CALLBACK *HCN_NOTIFICATION_CALLBACK)(
    _In_ DWORD NotificationType,
    _In_opt_ void* Context,
    _In_ HRESULT NotificationStatus,
    _In_opt_ PCWSTR NotificationData
    );
typedef void* HCN_NETWORK;
typedef HCN_NETWORK* PHCN_NETWORK;
HRESULT
WINAPI
HcnEnumerateNetworks(
    _In_ PCWSTR Query,
    _Outptr_ PWSTR* Networks,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnCreateNetwork(
    _In_ REFGUID Id,
    _In_ PCWSTR Settings,
    _Out_ PHCN_NETWORK Network,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnOpenNetwork(
    _In_ REFGUID Id,
    _Out_ PHCN_NETWORK Network,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnModifyNetwork(
    _In_ HCN_NETWORK Network,
    _In_ PCWSTR Settings,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnQueryNetworkProperties(
    _In_ HCN_NETWORK Network,
    _In_ PCWSTR Query,
    _Outptr_ PWSTR* Properties,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnDeleteNetwork(
    _In_ REFGUID Id,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnCloseNetwork(
    _In_ HCN_NETWORK Network
    );
typedef void* HCN_NAMESPACE;
typedef HCN_NAMESPACE* PHCN_NAMESPACE;
HRESULT
WINAPI
HcnEnumerateNamespaces(
    _In_ PCWSTR Query,
    _Outptr_ PWSTR* Namespaces,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnCreateNamespace(
    _In_ REFGUID Id,
    _In_ PCWSTR Settings,
    _Out_ PHCN_NAMESPACE Namespace,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnOpenNamespace(
    _In_ REFGUID Id,
    _Out_ PHCN_NAMESPACE Namespace,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnModifyNamespace(
    _In_ HCN_NAMESPACE Namespace,
    _In_ PCWSTR Settings,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnQueryNamespaceProperties(
    _In_ HCN_NAMESPACE Namespace,
    _In_ PCWSTR Query,
    _Outptr_ PWSTR* Properties,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnDeleteNamespace(
    _In_ REFGUID Id,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnCloseNamespace(
    _In_ HCN_NAMESPACE Namespace
    );
typedef void* HCN_ENDPOINT;
typedef HCN_ENDPOINT* PHCN_ENDPOINT;
HRESULT
WINAPI
HcnEnumerateEndpoints(
    _In_ PCWSTR Query,
    _Outptr_ PWSTR* Endpoints,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnCreateEndpoint(
    _In_ HCN_NETWORK Network,
    _In_ REFGUID Id,
    _In_ PCWSTR Settings,
    _Out_ PHCN_ENDPOINT Endpoint,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnOpenEndpoint(
    _In_ REFGUID Id,
    _Out_ PHCN_ENDPOINT Endpoint,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnModifyEndpoint(
    _In_ HCN_ENDPOINT Endpoint,
    _In_ PCWSTR Settings,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnQueryEndpointProperties(
    _In_ HCN_ENDPOINT Endpoint,
    _In_ PCWSTR Query,
    _Outptr_ PWSTR* Properties,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnDeleteEndpoint(
    _In_ REFGUID Id,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnCloseEndpoint(
    _In_ HCN_ENDPOINT Endpoint
    );
typedef void* HCN_LOADBALANCER;
typedef HCN_LOADBALANCER* PHCN_LOADBALANCER;
HRESULT
WINAPI
HcnEnumerateLoadBalancers(
    _In_ PCWSTR Query,
    _Outptr_ PWSTR* LoadBalancer,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnCreateLoadBalancer(
    _In_ REFGUID Id,
    _In_ PCWSTR Settings,
    _Out_ PHCN_LOADBALANCER LoadBalancer,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnOpenLoadBalancer(
    _In_ REFGUID Id,
    _Out_ PHCN_LOADBALANCER LoadBalancer,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnModifyLoadBalancer(
    _In_ HCN_LOADBALANCER LoadBalancer,
    _In_ PCWSTR Settings,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnQueryLoadBalancerProperties(
    _In_ HCN_LOADBALANCER LoadBalancer,
    _In_ PCWSTR Query,
    _Outptr_ PWSTR* Properties,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnDeleteLoadBalancer(
    _In_ REFGUID Id,
    _Outptr_opt_ PWSTR* ErrorRecord
    );
HRESULT
WINAPI
HcnCloseLoadBalancer(
    _In_ HCN_LOADBALANCER LoadBalancer
    );
typedef void* HCN_SERVICE;
typedef HCN_SERVICE* PHCN_SERVICE;
HRESULT
WINAPI
HcnRegisterServiceCallback(
    _In_ HCN_NOTIFICATION_CALLBACK Callback,
    _In_ void* Context,
    _Outptr_ HCN_CALLBACK* CallbackHandle
    );
HRESULT
WINAPI
HcnUnregisterServiceCallback(
    _In_ HCN_CALLBACK CallbackHandle
    );
}
#endif
#pragma endregion
extern "C" {
BOOLEAN
__stdcall
IsHcnEnumerateNetworksPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnCreateNetworkPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnOpenNetworkPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnModifyNetworkPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnQueryNetworkPropertiesPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnDeleteNetworkPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnCloseNetworkPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnEnumerateNamespacesPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnCreateNamespacePresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnOpenNamespacePresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnModifyNamespacePresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnQueryNamespacePropertiesPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnDeleteNamespacePresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnCloseNamespacePresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnEnumerateEndpointsPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnCreateEndpointPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnOpenEndpointPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnModifyEndpointPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnQueryEndpointPropertiesPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnDeleteEndpointPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnCloseEndpointPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnEnumerateLoadBalancersPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnCreateLoadBalancerPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnOpenLoadBalancerPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnModifyLoadBalancerPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnQueryLoadBalancerPropertiesPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnDeleteLoadBalancerPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnCloseLoadBalancerPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnRegisterServiceCallbackPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcnUnregisterServiceCallbackPresent(
    VOID
    );
}
