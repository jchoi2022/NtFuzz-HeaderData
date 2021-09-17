       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef
   [v1_enum]
enum _EAP_METHOD_AUTHENTICATOR_RESPONSE_ACTION
{
   EAP_METHOD_AUTHENTICATOR_RESPONSE_DISCARD = 0,
   EAP_METHOD_AUTHENTICATOR_RESPONSE_SEND,
   EAP_METHOD_AUTHENTICATOR_RESPONSE_RESULT,
   EAP_METHOD_AUTHENTICATOR_RESPONSE_RESPOND,
   EAP_METHOD_AUTHENTICATOR_RESPONSE_AUTHENTICATE,
   EAP_METHOD_AUTHENTICATOR_RESPONSE_HANDLE_IDENTITY
} EAP_METHOD_AUTHENTICATOR_RESPONSE_ACTION;
typedef struct _EAP_METHOD_AUTHENTICATOR_RESULT
{
   BOOL fIsSuccess;
   DWORD dwFailureReason;
   EAP_ATTRIBUTES* pAuthAttribs;
} EAP_METHOD_AUTHENTICATOR_RESULT;
typedef
   [v1_enum]
enum tagEapPeerMethodResponseAction
{
        EapPeerMethodResponseActionDiscard = 0,
        EapPeerMethodResponseActionSend,
        EapPeerMethodResponseActionResult,
        EapPeerMethodResponseActionInvokeUI,
        EapPeerMethodResponseActionRespond,
        EapPeerMethodResponseActionNone
} EapPeerMethodResponseAction;
typedef struct tagEapPeerMethodOuput
{
        EapPeerMethodResponseAction action;
        BOOL fAllowNotifications;
} EapPeerMethodOutput;
typedef
   [v1_enum]
enum tagEapPeerMethodResultReason
{
   EapPeerMethodResultUnknown = 1,
   EapPeerMethodResultSuccess,
   EapPeerMethodResultFailure
} EapPeerMethodResultReason, EapPeerMethodResultReasonOle;
}
#endif
#pragma endregion
