       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "EapAuthenticatorTypes.h"
#include "EapAuthenticatorActionDefine.h"
extern "C" {
    TEXT("System\\CurrentControlSet\\Services\\EapHost\\Methods")
typedef struct _EAP_AUTHENTICATOR_METHOD_ROUTINES
{
   DWORD dwSizeInBytes;
   EAP_METHOD_TYPE* pEapType;
   DWORD (APIENTRY * EapMethodAuthenticatorInitialize) (
            IN EAP_METHOD_TYPE* pEapType,
            OUT EAP_ERROR** ppEapError
            );
   DWORD (APIENTRY * EapMethodAuthenticatorBeginSession) (
         IN DWORD dwFlags,
         IN LPCWSTR pwszIdentity,
         IN const EapAttributes* const pAttributeArray,
         IN DWORD dwSizeofConnectionData,
         IN const BYTE* const pConnectionData,
         IN DWORD dwMaxSendPacketSize,
         OUT EAP_SESSION_HANDLE* pSessionHandle,
         OUT EAP_ERROR** ppEapError
         );
   DWORD (APIENTRY * EapMethodAuthenticatorUpdateInnerMethodParams)(
         IN EAP_SESSION_HANDLE sessionHandle,
         IN DWORD dwFlags,
         IN CONST WCHAR* pwszIdentity,
         IN const EapAttributes* const pAttributeArray,
         OUT EAP_ERROR** ppEapError
         );
   DWORD (APIENTRY * EapMethodAuthenticatorReceivePacket) (
            IN EAP_SESSION_HANDLE sessionHandle,
            IN DWORD cbReceivePacket,
            IN const EapPacket* const pReceivePacket,
            OUT EAP_METHOD_AUTHENTICATOR_RESPONSE_ACTION* pEapOutput,
            OUT EAP_ERROR** ppEapError
            );
   DWORD (APIENTRY * EapMethodAuthenticatorSendPacket) (
            IN EAP_SESSION_HANDLE sessionHandle,
            IN BYTE bPacketId,
            OUT DWORD* pcbSendPacket,
            OUT EapPacket* pSendPacket,
            OUT EAP_AUTHENTICATOR_SEND_TIMEOUT* pTimeout,
            OUT EAP_ERROR** ppEapError
            );
   DWORD (APIENTRY * EapMethodAuthenticatorGetAttributes) (
         IN EAP_SESSION_HANDLE sessionHandle,
         OUT EapAttributes* pAttribs,
         OUT EAP_ERROR** ppEapError
         );
   DWORD (APIENTRY * EapMethodAuthenticatorSetAttributes) (
         IN EAP_SESSION_HANDLE sessionHandle,
         IN const EapAttributes* const pAttribs,
         OUT EAP_METHOD_AUTHENTICATOR_RESPONSE_ACTION* pEapOutput,
         OUT EAP_ERROR** ppEapError
         );
   DWORD (APIENTRY * EapMethodAuthenticatorGetResult) (
         IN EAP_SESSION_HANDLE sessionHandle,
         OUT EAP_METHOD_AUTHENTICATOR_RESULT* pResult,
         OUT EAP_ERROR** ppEapError
         );
   DWORD (APIENTRY * EapMethodAuthenticatorEndSession) (
         IN EAP_SESSION_HANDLE sessionHandle,
         OUT EAP_ERROR** ppEapError
      );
   DWORD (APIENTRY * EapMethodAuthenticatorShutdown) (
            IN EAP_METHOD_TYPE* pEapType,
            OUT EAP_ERROR** ppEapError
            );
} EAP_AUTHENTICATOR_METHOD_ROUTINES, *PEAP_AUTHENTICATOR_METHOD_ROUTINES;
void WINAPI EapMethodAuthenticatorFreeErrorMemory(IN EAP_ERROR* pEapError);
void WINAPI EapMethodAuthenticatorFreeMemory(
        IN void* pUIContextData
        );
DWORD EapMethodAuthenticatorGetInfo(
         IN EAP_METHOD_TYPE* pEapType,
         OUT EAP_AUTHENTICATOR_METHOD_ROUTINES* pEapInfo,
         OUT EAP_ERROR** ppEapError
         );
DWORD EapMethodAuthenticatorInitialize(
         IN EAP_METHOD_TYPE* pEapType,
         OUT EAP_ERROR** ppEapError
         );
DWORD EapMethodAuthenticatorBeginSession(
      IN DWORD dwFlags,
      IN BYTE bInitialId,
      IN LPCWSTR pwszIdentity,
      IN const EapAttributes* const pAttributeArray,
      IN DWORD dwSizeofConnectionData,
      IN const BYTE* const pConnectionData,
      IN DWORD dwMaxSendPacketSize,
      OUT EAP_SESSION_HANDLE* pSessionHandle,
      OUT EAP_ERROR** ppEapError
      );
DWORD EapMethodAuthenticatorUpdateInnerMethodParams(
         IN EAP_SESSION_HANDLE sessionHandle,
         IN DWORD dwFlags,
         IN CONST WCHAR* pwszIdentity,
         IN const EapAttributes* const pAttributeArray,
         OUT EAP_ERROR** ppEapError
         );
DWORD EapMethodAuthenticatorReceivePacket(
         IN EAP_SESSION_HANDLE sessionHandle,
         IN DWORD cbReceivePacket,
         IN const EapPacket* const pReceivePacket,
         OUT EAP_METHOD_AUTHENTICATOR_RESPONSE_ACTION* pEapOutput,
         OUT EAP_ERROR** ppEapError
         );
DWORD EapMethodAuthenticatorSendPacket(
         IN EAP_SESSION_HANDLE sessionHandle,
         IN BYTE bPacketId,
         IN OUT DWORD* pcbSendPacket,
         OUT EapPacket* pSendPacket,
         OUT EAP_AUTHENTICATOR_SEND_TIMEOUT* pTimeout,
         OUT EAP_ERROR** ppEapError
         );
DWORD EapMethodAuthenticatorGetAttributes(
      IN EAP_SESSION_HANDLE sessionHandle,
      OUT EapAttributes* pAttribs,
      OUT EAP_ERROR** ppEapError
      );
DWORD EapMethodAuthenticatorSetAttributes(
      IN EAP_SESSION_HANDLE sessionHandle,
      IN const EapAttributes* const pAttribs,
      OUT EAP_METHOD_AUTHENTICATOR_RESPONSE_ACTION* pEapOutput,
      OUT EAP_ERROR** ppEapError
      );
DWORD EapMethodAuthenticatorGetResult(
      IN EAP_SESSION_HANDLE sessionHandle,
      OUT EAP_METHOD_AUTHENTICATOR_RESULT* pResult,
      OUT EAP_ERROR** ppEapError
      );
DWORD EapMethodAuthenticatorEndSession(
      IN EAP_SESSION_HANDLE sessionHandle,
      OUT EAP_ERROR** ppEapError
   );
DWORD EapMethodAuthenticatorShutdown(
         IN EAP_METHOD_TYPE* pEapType,
         OUT EAP_ERROR** ppEapError
         );
DWORD WINAPI EapMethodAuthenticatorInvokeConfigUI(
                IN EAP_METHOD_TYPE* pEapMethodType,
                IN HWND hwndParent,
                IN DWORD dwFlags,
                IN LPCWSTR pwszMachineName,
                IN DWORD dwSizeOfConfigIn,
                IN BYTE* pConfigIn,
                OUT DWORD* pdwSizeOfConfigOut,
                OUT BYTE** ppConfigOut,
                OUT EAP_ERROR** ppEapError
                );
}
#endif
#pragma endregion
