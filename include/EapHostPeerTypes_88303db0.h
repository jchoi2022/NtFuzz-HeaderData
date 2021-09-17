       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
   [v1_enum]
enum tagEapHostPeerMethodResultReason
{
   EapHostPeerMethodResultAltSuccessReceived = 1,
   EapHostPeerMethodResultTimeout,
   EapHostPeerMethodResultFromMethod
} EapHostPeerMethodResultReason;
typedef
   [v1_enum]
enum tagEapHostPeerResponseAction
{
        EapHostPeerResponseDiscard = 0,
        EapHostPeerResponseSend,
        EapHostPeerResponseResult,
        EapHostPeerResponseInvokeUi,
        EapHostPeerResponseRespond,
   EapHostPeerResponseStartAuthentication,
        EapHostPeerResponseNone
} EapHostPeerResponseAction;
typedef
   [v1_enum]
enum tagEapHostPeerAuthParams {
   EapHostPeerAuthStatus = 1,
   EapHostPeerIdentity,
   EapHostPeerIdentityExtendedInfo,
   EapHostNapInfo
} EapHostPeerAuthParams;
typedef
   [v1_enum]
enum _EAPHOST_AUTH_STATUS
{
   EapHostInvalidSession = 0,
   EapHostAuthNotStarted,
   EapHostAuthIdentityExchange,
   EapHostAuthNegotiatingType,
   EapHostAuthInProgress,
   EapHostAuthSucceeded,
   EapHostAuthFailed
} EAPHOST_AUTH_STATUS;
typedef struct _EAPHOST_AUTH_INFO
{
   EAPHOST_AUTH_STATUS status;
   DWORD dwErrorCode;
   DWORD dwReasonCode;
} EAPHOST_AUTH_INFO;
typedef
   [v1_enum]
enum _ISOLATION_STATE
{
   ISOLATION_STATE_UNKNOWN = 0,
   ISOLATION_STATE_NOT_RESTRICTED = 1,
   ISOLATION_STATE_IN_PROBATION = 2,
   ISOLATION_STATE_RESTRICTED_ACCESS = 3
} ISOLATION_STATE;
typedef struct tagEapHostPeerMethodResult
{
   BOOL fIsSuccess;
   UINT32 dwFailureReasonCode;
   BOOL fSaveConnectionData;
   UINT32 dwSizeofConnectionData;
   [size_is(dwSizeofConnectionData)] BYTE* pConnectionData;
   BOOL fSaveUserData;
   UINT32 dwSizeofUserData;
   [size_is(dwSizeofUserData)] BYTE* pUserData;
   EAP_ATTRIBUTES* pAttribArray;
   ISOLATION_STATE isolationState;
   EAP_METHOD_INFO* pEapMethodInfo;
   EAP_ERROR* pEapError;
} EapHostPeerMethodResult;
#endif
#pragma endregion
