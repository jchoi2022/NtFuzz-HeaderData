#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <specstrings.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <wincrypt.h>
extern "C" {
typedef PVOID HDRT;
typedef PVOID HDRT_SEARCH_CONTEXT;
typedef PVOID HDRT_TRANSPORT;
typedef PVOID HDRT_REGISTRATION_CONTEXT;
typedef enum drt_scope_tag
{
    DRT_GLOBAL_SCOPE = 1,
    DRT_SITE_LOCAL_SCOPE = 2,
    DRT_LINK_LOCAL_SCOPE = 3,
} DRT_SCOPE;
typedef enum drt_status_tag
{
    DRT_ACTIVE = 0,
    DRT_ALONE = 1,
    DRT_NO_NETWORK = 10,
    DRT_FAULTED = 20,
} DRT_STATUS;
typedef enum drt_match_type_tag
{
    DRT_MATCH_EXACT = 0,
    DRT_MATCH_NEAR = 1,
    DRT_MATCH_INTERMEDIATE = 2,
} DRT_MATCH_TYPE;
typedef enum drt_leafset_key_change_type_tag
{
    DRT_LEAFSET_KEY_ADDED = 0,
    DRT_LEAFSET_KEY_DELETED = 1,
} DRT_LEAFSET_KEY_CHANGE_TYPE;
typedef enum drt_event_type_tag
{
    DRT_EVENT_STATUS_CHANGED = 0,
    DRT_EVENT_LEAFSET_KEY_CHANGED = 1,
    DRT_EVENT_REGISTRATION_STATE_CHANGED = 2,
} DRT_EVENT_TYPE;
typedef enum drt_security_mode_tag
{
    DRT_SECURE_RESOLVE = 0,
    DRT_SECURE_MEMBERSHIP = 1,
    DRT_SECURE_CONFIDENTIALPAYLOAD = 2,
} DRT_SECURITY_MODE;
typedef enum _DRT_REGISTRATION_STATE
{
    DRT_REGISTRATION_STATE_UNRESOLVEABLE = 1
} DRT_REGISTRATION_STATE, *PDRT_REGISTRATION_STATE;
typedef enum _DRT_ADDRESS_FLAGS
{
    DRT_ADDRESS_FLAG_ACCEPTED = 0x01,
    DRT_ADDRESS_FLAG_REJECTED = 0x02,
    DRT_ADDRESS_FLAG_UNREACHABLE = 0x04,
    DRT_ADDRESS_FLAG_LOOP = 0x08,
    DRT_ADDRESS_FLAG_TOO_BUSY = 0x10,
    DRT_ADDRESS_FLAG_BAD_VALIDATE_ID = 0x20,
    DRT_ADDRESS_FLAG_SUSPECT_UNREGISTERED_ID = 0x40,
    DRT_ADDRESS_FLAG_INQUIRE = 0x80
} DRT_ADDRESS_FLAGS, *PDRT_ADDRESS_FLAGS;
typedef struct drt_data_tag
{
    ULONG cb;
    BYTE* pb;
} DRT_DATA, *PDRT_DATA;
typedef const DRT_DATA *PCDRT_DATA;
typedef struct drt_registration_tag
{
    DRT_DATA key;
    DRT_DATA appData;
} DRT_REGISTRATION, *PDRT_REGISTRATION;
typedef const DRT_REGISTRATION *PCDRT_REGISTRATION;
typedef struct drt_security_provider_tag
{
    PVOID pvContext;
    HRESULT (*Attach)(
        _In_ const PVOID pvContext);
    VOID (*Detach)(
        _In_ const PVOID pvContext);
    HRESULT (*RegisterKey)(
        _In_ const PVOID pvContext,
        _In_ const DRT_REGISTRATION* pRegistration,
        _In_opt_ PVOID pvKeyContext);
    HRESULT (*UnregisterKey)(
        _In_ const PVOID pvContext,
        _In_ const DRT_DATA* pKey,
        _In_opt_ PVOID pvKeyContext);
    HRESULT (*ValidateAndUnpackPayload)(
        _In_ const PVOID pvContext,
        _In_ DRT_DATA* pSecuredAddressPayload,
        _In_opt_ DRT_DATA* pCertChain,
        _In_opt_ DRT_DATA* pClassifier,
        _In_opt_ DRT_DATA* pNonce,
        _In_opt_ DRT_DATA* pSecuredPayload,
        _Out_ BYTE* pbProtocolMajor,
        _Out_ BYTE* pbProtocolMinor,
        _Out_ DRT_DATA* pKey,
        _Out_opt_ DRT_DATA* pPayload,
        _Out_ CERT_PUBLIC_KEY_INFO** ppPublicKey,
        _Out_opt_ SOCKET_ADDRESS_LIST** ppAddressList,
        _Out_ DWORD* pdwFlags);
    HRESULT (*SecureAndPackPayload)(
        _In_ const PVOID pvContext,
        _In_opt_ PVOID pvKeyContext,
                    BYTE bProtocolMajor,
                    BYTE bProtocolMinor,
                    DWORD dwFlags,
        _In_ const DRT_DATA* pKey,
        _In_opt_ const DRT_DATA* pPayload,
        _In_opt_ const SOCKET_ADDRESS_LIST* pAddressList,
        _In_ const DRT_DATA* pNonce,
        _Out_ DRT_DATA* pSecuredAddressPayload,
        _Out_opt_ DRT_DATA* pClassifier,
        _Out_opt_ DRT_DATA* pSecuredPayload,
        _Out_opt_ DRT_DATA* pCertChain);
    void (*FreeData)(
        _In_ const PVOID pvContext,
        _In_opt_ PVOID pv);
    HRESULT (*EncryptData)(
        _In_ const PVOID pvContext,
        _In_ const DRT_DATA* pRemoteCredential,
        _In_ DWORD dwBuffers,
        _In_reads_(dwBuffers) DRT_DATA* pDataBuffers,
        _Out_writes_(dwBuffers) DRT_DATA* pEncryptedBuffers,
        _Out_ DRT_DATA *pKeyToken
        );
    HRESULT (*DecryptData)(
        _In_ const PVOID pvContext,
        _In_ DRT_DATA* pKeyToken,
        _In_ const PVOID pvKeyContext,
        _In_ DWORD dwBuffers,
        _Inout_updates_(dwBuffers) DRT_DATA* pData
        );
    HRESULT (*GetSerializedCredential)(
        _In_ const PVOID pvContext,
        _Out_ DRT_DATA *pSelfCredential);
    HRESULT (*ValidateRemoteCredential)(
        _In_ const PVOID pvContext,
        _In_ DRT_DATA *pRemoteCredential);
    HRESULT (*SignData)(
        _In_ const PVOID pvContext,
        _In_ DWORD dwBuffers,
        _In_reads_(dwBuffers) DRT_DATA* pDataBuffers,
        _Out_ DRT_DATA *pKeyIdentifier,
        _Out_ DRT_DATA *pSignature);
    HRESULT (*VerifyData)(
        _In_ const PVOID pvContext,
        _In_ DWORD dwBuffers,
        _In_reads_(dwBuffers) DRT_DATA* pDataBuffers,
        _In_ DRT_DATA *pRemoteCredentials,
        _In_ DRT_DATA *pKeyIdentifier,
        _In_ DRT_DATA *pSignature);
} DRT_SECURITY_PROVIDER, *PDRT_SECURITY_PROVIDER;
typedef const DRT_SECURITY_PROVIDER *PCDRT_SECURITY_PROVIDER;
typedef PVOID DRT_BOOTSTRAP_RESOLVE_CONTEXT;
typedef void (CALLBACK* DRT_BOOTSTRAP_RESOLVE_CALLBACK)(HRESULT hr, PVOID pvContext, SOCKET_ADDRESS_LIST* pAddresses, BOOL fFatalError);
typedef struct drt_bootstrap_provider_tag
{
    PVOID pvContext;
    HRESULT (*Attach)(
        _In_ const PVOID pvContext);
    VOID (*Detach)(
        _In_ const PVOID pvContext);
    HRESULT (*InitResolve)(
        _In_ const PVOID pvContext,
        _In_ BOOL fSplitDetect,
        _In_ ULONG timeout,
        _In_ ULONG cMaxResults,
        _Out_ DRT_BOOTSTRAP_RESOLVE_CONTEXT* ResolveContext,
        _Out_ BOOL* fFatalError
                    );
    HRESULT (*IssueResolve)(
        _In_ const PVOID pvContext,
        _In_ const PVOID pvCallbackContext,
        _In_ DRT_BOOTSTRAP_RESOLVE_CALLBACK callback,
        _In_ DRT_BOOTSTRAP_RESOLVE_CONTEXT ResolveContext,
        _Out_ BOOL* fFatalError
        );
    VOID (*EndResolve)(
        _In_ const PVOID pvContext,
        _In_ DRT_BOOTSTRAP_RESOLVE_CONTEXT ResolveContext
        );
    HRESULT (*Register)(
        _In_ const PVOID pvContext,
        _In_ const SOCKET_ADDRESS_LIST* pAddressList);
    VOID (*Unregister)(
        _In_ const PVOID pvContext
        );
} DRT_BOOTSTRAP_PROVIDER, *PDRT_BOOTSTRAP_PROVIDER;
typedef const DRT_BOOTSTRAP_PROVIDER *PCDRT_BOOTSTRAP_PROVIDER;
typedef struct drt_settings_tag
{
    DWORD dwSize;
    ULONG cbKey;
    BYTE bProtocolMajorVersion;
    BYTE bProtocolMinorVersion;
    ULONG ulMaxRoutingAddresses;
    PWSTR pwzDrtInstancePrefix;
    HDRT_TRANSPORT hTransport;
    DRT_SECURITY_PROVIDER* pSecurityProvider;
    DRT_BOOTSTRAP_PROVIDER* pBootstrapProvider;
    DRT_SECURITY_MODE eSecurityMode;
} DRT_SETTINGS, *PDRT_SETTINGS;
typedef const DRT_SETTINGS *PCDRT_SETTINGS;
typedef struct drt_search_info_tag
{
    DWORD dwSize;
    BOOL fIterative;
    BOOL fAllowCurrentInstanceMatch;
    BOOL fAnyMatchInRange;
    ULONG cMaxEndpoints;
    DRT_DATA* pMaximumKey;
    DRT_DATA* pMinimumKey;
} DRT_SEARCH_INFO, *PDRT_SEARCH_INFO;
typedef const DRT_SEARCH_INFO *PCDRT_SEARCH_INFO;
typedef struct _DRT_ADDRESS
{
    SOCKADDR_STORAGE socketAddress;
    ULONG flags;
    LONG nearness;
    ULONG latency;
} DRT_ADDRESS, *PDRT_ADDRESS;
typedef struct _DRT_ADDRESS_LIST {
    ULONG AddressCount;
    _Field_size_(AddressCount) DRT_ADDRESS AddressList[1];
} DRT_ADDRESS_LIST, *PDRT_ADDRESS_LIST;
typedef const DRT_ADDRESS_LIST *PCDRT_ADDRESS_LIST;
typedef struct drt_search_result_tag
{
    DWORD dwSize;
    DRT_MATCH_TYPE type;
    PVOID pvContext;
    DRT_REGISTRATION registration;
} DRT_SEARCH_RESULT, *PDRT_SEARCH_RESULT;
typedef const DRT_SEARCH_RESULT *PCDRT_SEARCH_RESULT;
typedef struct drt_event_data_tag
{
    DRT_EVENT_TYPE type;
    HRESULT hr;
    PVOID pvContext;
    union
    {
        struct
        {
            DRT_LEAFSET_KEY_CHANGE_TYPE change;
            DRT_DATA localKey;
            DRT_DATA remoteKey;
        } leafsetKeyChange;
        struct
        {
            DRT_REGISTRATION_STATE state;
            DRT_DATA localKey;
        } registrationStateChange;
        struct
        {
            DRT_STATUS status;
            struct
            {
                ULONG cntAddress;
                PSOCKADDR_STORAGE pAddresses;
            } bootstrapAddresses;
        } statusChange;
    };
} DRT_EVENT_DATA, *PDRT_EVENT_DATA;
typedef const DRT_EVENT_DATA *PCDRT_EVENT_DATA;
HRESULT WINAPI DrtCreatePnrpBootstrapResolver(
    _In_ BOOL fPublish,
    _In_ PCWSTR pwzPeerName,
    _In_opt_ PCWSTR pwzCloudName,
    _In_opt_ PCWSTR pwzPublishingIdentity,
    _Out_ DRT_BOOTSTRAP_PROVIDER** ppResolver);
void WINAPI DrtDeletePnrpBootstrapResolver(
    _In_ DRT_BOOTSTRAP_PROVIDER* pResolver);
HRESULT WINAPI DrtCreateDnsBootstrapResolver(
    _In_ USHORT port,
    _In_ PCWSTR pwszAddress,
    _Out_ DRT_BOOTSTRAP_PROVIDER** ppModule
    );
void WINAPI DrtDeleteDnsBootstrapResolver(
    _In_ DRT_BOOTSTRAP_PROVIDER* pResolver
    );
HRESULT WINAPI DrtCreateIpv6UdpTransport(
                DRT_SCOPE scope,
                ULONG dwScopeId,
                ULONG dwLocalityThreshold,
    _Inout_ USHORT *pwPort,
    _Out_ HDRT_TRANSPORT *phTransport);
HRESULT WINAPI DrtDeleteIpv6UdpTransport(
    _In_ HDRT_TRANSPORT hTransport);
HRESULT WINAPI DrtCreateDerivedKeySecurityProvider(
    _In_ PCCERT_CONTEXT pRootCert,
    _In_opt_ PCCERT_CONTEXT pLocalCert,
    _Out_ DRT_SECURITY_PROVIDER** ppSecurityProvider);
HRESULT WINAPI DrtCreateDerivedKey(
    _In_ PCCERT_CONTEXT pLocalCert,
    _Out_ DRT_DATA* pKey);
void WINAPI DrtDeleteDerivedKeySecurityProvider(
    _In_ DRT_SECURITY_PROVIDER* pSecurityProvider);
HRESULT WINAPI DrtCreateNullSecurityProvider(
    _Out_ DRT_SECURITY_PROVIDER** ppSecurityProvider);
void WINAPI DrtDeleteNullSecurityProvider(
    _In_ DRT_SECURITY_PROVIDER* pSecurityProvider);
HRESULT WINAPI DrtOpen(
    _In_ const DRT_SETTINGS* pSettings,
    _In_opt_ HANDLE hEvent,
    _In_opt_ const PVOID pvContext,
    _Out_ HDRT *phDrt);
VOID WINAPI DrtClose(
    _In_ HDRT hDrt);
HRESULT WINAPI DrtGetEventDataSize(
    _In_ HDRT hDrt,
    _Out_ ULONG *pulEventDataLen);
HRESULT WINAPI DrtGetEventData(
    _In_ HDRT hDrt,
    _In_ ULONG ulEventDataLen,
    _Out_writes_bytes_all_(ulEventDataLen) DRT_EVENT_DATA *pEventData);
HRESULT WINAPI DrtRegisterKey(
    _In_ HDRT hDrt,
    _In_ DRT_REGISTRATION *pRegistration,
    _In_opt_ PVOID pvKeyContext,
    _Out_ HDRT_REGISTRATION_CONTEXT *phKeyRegistration);
HRESULT WINAPI DrtUpdateKey(
    _In_ HDRT_REGISTRATION_CONTEXT hKeyRegistration,
    _In_ DRT_DATA *pAppData
    );
VOID WINAPI DrtUnregisterKey(
    _In_ HDRT_REGISTRATION_CONTEXT hKeyRegistration);
HRESULT WINAPI DrtStartSearch(
    _In_ HDRT hDrt,
    _In_ DRT_DATA *pKey,
    _In_opt_ const DRT_SEARCH_INFO *pInfo,
                ULONG timeout,
    _In_ HANDLE hEvent,
    _In_opt_ const PVOID pvContext,
    _Out_ HDRT_SEARCH_CONTEXT* hSearchContext);
HRESULT WINAPI DrtContinueSearch(
    _In_ HDRT_SEARCH_CONTEXT hSearchContext);
HRESULT WINAPI DrtGetSearchResultSize(
    _In_ HDRT_SEARCH_CONTEXT hSearchContext,
    _Out_ ULONG *pulSearchResultSize);
HRESULT WINAPI DrtGetSearchResult(
    _In_ HDRT_SEARCH_CONTEXT hSearchContext,
    _Inout_ ULONG ulSearchResultSize,
    _Out_writes_bytes_all_(ulSearchResultSize) DRT_SEARCH_RESULT *pSearchResult);
HRESULT WINAPI DrtGetSearchPathSize(
    _In_ HDRT_SEARCH_CONTEXT hSearchContext,
    _Out_ ULONG *pulSearchPathSize);
HRESULT WINAPI DrtGetSearchPath(
    _In_ HDRT_SEARCH_CONTEXT hSearchContext,
    _Inout_ ULONG ulSearchPathSize,
    _Out_writes_bytes_all_(ulSearchPathSize) DRT_ADDRESS_LIST *pSearchPath);
HRESULT WINAPI DrtEndSearch(
    _In_ HDRT_SEARCH_CONTEXT hSearchContext);
HRESULT WINAPI DrtGetInstanceName(
    _In_ HDRT hDrt,
    _In_ ULONG ulcbInstanceNameSize,
    _Out_writes_bytes_all_(ulcbInstanceNameSize) PWSTR pwzDrtInstanceName);
HRESULT WINAPI DrtGetInstanceNameSize(
    _In_ HDRT hDrt,
    _Out_ ULONG* pulcbInstanceNameSize);
}
#endif
#pragma endregion
