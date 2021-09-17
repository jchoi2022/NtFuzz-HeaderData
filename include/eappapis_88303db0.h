       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef void (CALLBACK *NotificationHandler) (
                 IN GUID connectionId,
                 IN void* pContextData
                 );
DWORD APIENTRY EapHostPeerInitialize();
void APIENTRY EapHostPeerUninitialize();
DWORD APIENTRY
EapHostPeerBeginSession(
   IN DWORD dwFlags,
   IN EAP_METHOD_TYPE eapType,
   IN const EapAttributes* const pAttributeArray,
   IN HANDLE hTokenImpersonateUser,
   IN DWORD dwSizeofConnectionData,
   IN const BYTE* const pConnectionData,
   IN DWORD dwSizeofUserData,
   IN const BYTE* const pUserData,
   IN DWORD dwMaxSendPacketSize,
   IN const GUID* const pConnectionId,
   IN NotificationHandler func,
   IN void* pContextData,
   OUT EAP_SESSIONID* pSessionId,
   OUT EAP_ERROR** ppEapError
   );
DWORD APIENTRY
EapHostPeerProcessReceivedPacket(
   IN EAP_SESSIONID sessionHandle,
   IN DWORD cbReceivePacket,
   IN const BYTE* const pReceivePacket,
   OUT EapHostPeerResponseAction* pEapOutput,
   OUT EAP_ERROR** ppEapError
   );
DWORD APIENTRY
EapHostPeerGetSendPacket(
   IN EAP_SESSIONID sessionHandle,
 OUT DWORD* pcbSendPacket,
 OUT BYTE** ppSendPacket,
 OUT EAP_ERROR** ppEapError
 );
DWORD APIENTRY
EapHostPeerGetResult(
   IN EAP_SESSIONID sessionHandle,
 IN EapHostPeerMethodResultReason reason,
 OUT EapHostPeerMethodResult* ppResult,
 OUT EAP_ERROR** ppEapError
    );
DWORD APIENTRY
EapHostPeerGetUIContext(
   IN EAP_SESSIONID sessionHandle,
   OUT DWORD* pdwSizeOfUIContextData,
   OUT BYTE** ppUIContextData,
 OUT EAP_ERROR** ppEapError
   );
DWORD APIENTRY
EapHostPeerSetUIContext(
   IN EAP_SESSIONID sessionHandle,
   IN DWORD dwSizeOfUIContextData,
   IN const BYTE* const pUIContextData,
   OUT EapHostPeerResponseAction* pEapOutput,
 OUT EAP_ERROR** ppEapError
 );
DWORD APIENTRY
EapHostPeerGetResponseAttributes(
   IN EAP_SESSIONID sessionHandle,
   OUT EapAttributes* pAttribs,
 OUT EAP_ERROR** ppEapError
   );
DWORD APIENTRY
EapHostPeerSetResponseAttributes(
   IN EAP_SESSIONID sessionHandle,
   IN const EapAttributes* const pAttribs,
   OUT EapHostPeerResponseAction* pEapOutput,
 OUT EAP_ERROR** ppEapError
   );
DWORD APIENTRY
EapHostPeerGetAuthStatus(
   IN EAP_SESSIONID sessionHandle,
   IN EapHostPeerAuthParams authParam,
   OUT DWORD* pcbAuthData,
   OUT BYTE** ppAuthData,
   OUT EAP_ERROR** ppEapError
   );
DWORD APIENTRY
EapHostPeerEndSession(
   IN EAP_SESSIONID sessionHandle,
   OUT EAP_ERROR** ppEapError
   );
DWORD APIENTRY
EapHostPeerGetDataToUnplumbCredentials(
OUT GUID * pConnectionIdThatLastSavedCreds,
OUT __int3264 * phCredentialImpersonationToken,
IN EAP_SESSIONID sessionHandle,
OUT EAP_ERROR** ppEapError,
OUT BOOL * fSaveToCredMan
);
DWORD APIENTRY
EapHostPeerClearConnection(
   IN GUID* pConnectionId,
   OUT EAP_ERROR** ppEapError
   );
void APIENTRY EapHostPeerFreeEapError(IN EAP_ERROR* pEapError);
DWORD APIENTRY
EapHostPeerGetIdentity (
      IN DWORD dwVersion,
      IN DWORD dwFlags,
      IN EAP_METHOD_TYPE eapMethodType,
      IN DWORD dwSizeofConnectionData,
      IN _In_reads_(dwSizeofConnectionData) const BYTE* pConnectionData,
      IN DWORD dwSizeofUserData,
      IN _In_reads_opt_(dwSizeofUserData) const BYTE* pUserData,
      IN HANDLE hTokenImpersonateUser,
      OUT BOOL* pfInvokeUI,
      IN OUT DWORD* pdwSizeOfUserDataOut,
      OUT _Outptr_result_buffer_(*pdwSizeOfUserDataOut) BYTE** ppUserDataOut,
      OUT _Outptr_ LPWSTR* ppwszIdentity,
      OUT EAP_ERROR** ppEapError,
      IN OUT BYTE **ppvReserved
      );
DWORD APIENTRY
EapHostPeerGetEncryptedPassword(
      IN DWORD dwSizeofPassword,
      IN __in_bcount(dwSizeofPassword) LPWSTR szPassword,
      OUT _Outptr_ LPWSTR* ppszEncPassword
      );
void APIENTRY EapHostPeerFreeRuntimeMemory (IN BYTE* pData);
}
#endif
#pragma endregion
