       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "objbase.h"
#include "msxml6.h"
#include "EapMethodTypes.h"
#include "EapAuthenticatorActionDefine.h"
typedef ULONG_PTR NCRYPT_KEY_HANDLE;
typedef struct _NgcTicketContext
{
    WCHAR wszTicket[NGC_TICKET_PROPERTY_STRING_LENGTH];
    NCRYPT_KEY_HANDLE hKey;
    HANDLE hImpersonateToken;
} NgcTicketContext;
extern "C" {
    TEXT("System\\CurrentControlSet\\Services\\EapHost\\Methods")
typedef struct tagEapPeerMethodResult
{
        BOOL fIsSuccess;
   DWORD dwFailureReasonCode;
        BOOL fSaveConnectionData;
        DWORD dwSizeofConnectionData;
   _Field_size_bytes_(dwSizeofConnectionData) BYTE* pConnectionData;
        BOOL fSaveUserData;
        DWORD dwSizeofUserData;
   _Field_size_bytes_(dwSizeofUserData) BYTE* pUserData;
   EAP_ATTRIBUTES* pAttribArray;
    EAP_ERROR* pEapError;
    NgcTicketContext* pNgcKerbTicket;
    BOOL fSaveToCredMan;
} EapPeerMethodResult;
typedef struct _EAP_PEER_METHOD_ROUTINES
{
   DWORD dwVersion;
   EAP_TYPE* pEapType;
   DWORD (APIENTRY * EapPeerInitialize) (EAP_ERROR** ppEapError);
   DWORD (APIENTRY * EapPeerGetIdentity) (
                        IN DWORD flags,
                        IN DWORD dwSizeofConnectionData,
                        IN const BYTE* pConnectionData,
                        IN DWORD dwSizeofUserData,
                        IN const BYTE* pUserData,
                        IN HANDLE hTokenImpersonateUser,
                        OUT BOOL* pfInvokeUI,
                        IN OUT DWORD* pdwSizeOfUserDataOut,
                        OUT BYTE** ppUserDataOut,
                        OUT WCHAR** ppwszIdentity,
                        OUT EAP_ERROR** ppEapError
                        );
   DWORD (APIENTRY * EapPeerBeginSession) (
                        IN DWORD dwFlags,
                        IN const EapAttributes* const pAttributeArray,
                        IN HANDLE hTokenImpersonateUser,
                        IN DWORD dwSizeofConnectionData,
                        IN BYTE* pConnectionData,
                        IN DWORD dwSizeofUserData,
                        IN BYTE* pUserData,
                        IN DWORD dwMaxSendPacketSize,
                        OUT EAP_SESSION_HANDLE* pSessionHandle,
                        OUT EAP_ERROR** ppEapError
                        );
   DWORD (APIENTRY * EapPeerSetCredentials) (
                        IN EAP_SESSION_HANDLE sessionHandle,
                        IN WCHAR* pwszIdentity,
                        IN WCHAR* pwszPassword,
                        OUT EAP_ERROR** ppEapError
                        );
   DWORD (APIENTRY * EapPeerProcessRequestPacket) (
                        IN EAP_SESSION_HANDLE sessionHandle,
                        IN DWORD cbReceivePacket,
                        IN EapPacket* pReceivePacket,
                        OUT EapPeerMethodOutput* pEapOutput,
                        OUT EAP_ERROR** ppEapError
                        );
   DWORD (APIENTRY * EapPeerGetResponsePacket) (
                        IN EAP_SESSION_HANDLE sessionHandle,
                        IN OUT DWORD* pcbSendPacket,
                        OUT EapPacket* pSendPacket,
                        OUT EAP_ERROR** ppEapError
                        );
   DWORD (APIENTRY * EapPeerGetResult) (
                        IN EAP_SESSION_HANDLE sessionHandle,
                        IN EapPeerMethodResultReason reason,
                        OUT EapPeerMethodResult* ppResult,
                        OUT EAP_ERROR** ppEapError
                        );
   DWORD (APIENTRY * EapPeerGetUIContext) (
                        IN EAP_SESSION_HANDLE sessionHandle,
                        OUT DWORD* dwSizeOfUIContextData,
                        OUT BYTE** pUIContextData,
                        OUT EAP_ERROR** ppEapError
                        );
   DWORD (APIENTRY * EapPeerSetUIContext) (
                        IN EAP_SESSION_HANDLE sessionHandle,
                        IN DWORD dwSizeOfUIContextData,
                        IN const BYTE* pUIContextData,
                        OUT EapPeerMethodOutput* pEapOutput,
                        OUT EAP_ERROR** ppEapError
                        );
   DWORD (APIENTRY * EapPeerGetResponseAttributes) (
                        IN EAP_SESSION_HANDLE sessionHandle,
                        OUT EapAttributes* pAttribs,
                        OUT EAP_ERROR** ppEapError
                        );
   DWORD (APIENTRY * EapPeerSetResponseAttributes) (
                        IN EAP_SESSION_HANDLE sessionHandle,
                        IN EapAttributes* pAttribs,
                        OUT EapPeerMethodOutput* pEapOutput,
                        OUT EAP_ERROR** ppEapError
                        );
   DWORD (APIENTRY * EapPeerEndSession) (
                        IN EAP_SESSION_HANDLE sessionHandle,
                        OUT EAP_ERROR** ppEapError
                        );
   DWORD (APIENTRY * EapPeerShutdown) (OUT EAP_ERROR** ppEapError);
} EAP_PEER_METHOD_ROUTINES;
VOID WINAPI EapPeerFreeErrorMemory(_In_ EAP_ERROR* pEapError);
DWORD WINAPI EapPeerGetInfo(
         _In_ EAP_TYPE* pEapType,
         _Out_ EAP_PEER_METHOD_ROUTINES* pEapInfo,
         _Out_opt_ EAP_ERROR** ppEapError
         );
DWORD WINAPI EapPeerInitialize(OUT EAP_ERROR** ppEapError);
DWORD WINAPI EapPeerGetIdentity (
                IN DWORD dwFlags,
                IN DWORD dwSizeofConnectionData,
                IN const BYTE* pConnectionData,
                IN DWORD dwSizeofUserData,
                IN const BYTE* pUserData,
                IN HANDLE hTokenImpersonateUser,
                OUT BOOL* pfInvokeUI,
                IN OUT DWORD* pdwSizeOfUserDataOut,
                OUT BYTE** ppUserDataOut,
                OUT _Out_ LPWSTR* ppwszIdentity,
                OUT EAP_ERROR** ppEapError
                );
DWORD WINAPI EapPeerBeginSession(
         IN DWORD dwFlags,
         IN const EapAttributes* const pAttributeArray,
         IN HANDLE hTokenImpersonateUser,
         IN DWORD dwSizeofConnectionData,
         IN BYTE* pConnectionData,
         IN DWORD dwSizeofUserData,
         IN BYTE* pUserData,
         IN DWORD dwMaxSendPacketSize,
         OUT EAP_SESSION_HANDLE* pSessionHandle,
         OUT EAP_ERROR** ppEapError
         );
DWORD WINAPI EapPeerSetCredentials(
         IN EAP_SESSION_HANDLE sessionHandle,
         IN _In_ LPWSTR pwszIdentity,
         IN _In_ LPWSTR pwszPassword,
         OUT EAP_ERROR** ppEapError
         );
DWORD WINAPI EapPeerProcessRequestPacket(
         IN EAP_SESSION_HANDLE sessionHandle,
         IN DWORD cbReceivedPacket,
         IN EapPacket* pReceivedPacket,
         OUT EapPeerMethodOutput* pEapOutput,
         OUT EAP_ERROR** ppEapError
         );
DWORD WINAPI EapPeerGetResponsePacket(
         IN EAP_SESSION_HANDLE sessionHandle,
         IN OUT DWORD* pcbSendPacket,
         OUT EapPacket* pSendPacket,
         OUT EAP_ERROR** ppEapError
         );
DWORD WINAPI EapPeerGetResult(
         IN EAP_SESSION_HANDLE sessionHandle,
         IN EapPeerMethodResultReason reason,
         OUT EapPeerMethodResult* ppResult,
         OUT EAP_ERROR** ppEapError
         );
DWORD WINAPI EapPeerGetUIContext(
         IN EAP_SESSION_HANDLE sessionHandle,
         OUT DWORD* pdwSizeOfUIContextData,
         OUT BYTE** ppUIContextData,
         OUT EAP_ERROR** ppEapError
      );
DWORD WINAPI EapPeerSetUIContext(
        IN EAP_SESSION_HANDLE sessionHandle,
        IN DWORD dwSizeOfUIContextData,
        IN const BYTE* pUIContextData,
        OUT EapPeerMethodOutput* pEapOutput,
        OUT EAP_ERROR** ppEapError
     );
DWORD WINAPI EapPeerGetResponseAttributes(
        IN EAP_SESSION_HANDLE sessionHandle,
        OUT EapAttributes* pAttribs,
        OUT EAP_ERROR** ppEapError
     );
DWORD WINAPI EapPeerSetResponseAttributes(
         IN EAP_SESSION_HANDLE sessionHandle,
         IN EapAttributes* pAttribs,
         OUT EapPeerMethodOutput* pEapOutput,
         OUT EAP_ERROR** ppEapError
      );
DWORD WINAPI EapPeerEndSession(
         IN EAP_SESSION_HANDLE sessionHandle,
         OUT EAP_ERROR** ppEapError
         );
DWORD WINAPI EapPeerShutdown(OUT EAP_ERROR** ppEapError);
DWORD WINAPI EapPeerInvokeConfigUI(
         IN EAP_METHOD_TYPE* pEapType,
         IN HWND hwndParent,
         IN DWORD dwFlags,
         IN DWORD dwSizeOfConnectionDataIn,
         IN BYTE* pConnectionDataIn,
         OUT DWORD* pdwSizeOfConnectionDataOut,
         OUT BYTE** ppConnectionDataOut,
         OUT EAP_ERROR** ppEapError
         );
DWORD WINAPI EapPeerInvokeInteractiveUI(
         IN EAP_METHOD_TYPE* pEapType,
         IN HWND hwndParent,
         IN DWORD dwSizeofUIContextData,
         IN BYTE* pUIContextData,
         OUT DWORD* pdwSizeOfDataFromInteractiveUI,
         OUT BYTE** ppDataFromInteractiveUI,
         OUT EAP_ERROR** ppEapError
         );
DWORD WINAPI EapPeerInvokeIdentityUI(
         IN EAP_METHOD_TYPE* pEapType,
         IN DWORD dwFlags,
         IN HWND hwndParent,
         IN DWORD dwSizeOfConnectionData,
         IN const BYTE* pConnectionData,
         IN DWORD dwSizeOfUserData,
         IN const BYTE* pUserData,
         OUT DWORD* pdwSizeOfUserDataOut,
         OUT BYTE** ppUserDataOut,
         OUT _Outptr_ LPWSTR* ppwszIdentity,
         OUT EAP_ERROR** ppEapError
         );
DWORD WINAPI EapPeerQueryCredentialInputFields(
         IN HANDLE hUserImpersonationToken,
         IN EAP_METHOD_TYPE eapMethodType,
         IN DWORD dwFlags,
         IN DWORD dwEapConnDataSize,
         IN _In_reads_(dwEapConnDataSize) BYTE* pbEapConnData,
         OUT EAP_CONFIG_INPUT_FIELD_ARRAY* pEapConfigFieldsArray,
         OUT EAP_ERROR** ppEapError
         );
DWORD WINAPI EapPeerQueryUserBlobFromCredentialInputFields(
         IN HANDLE hUserImpersonationToken,
         IN EAP_METHOD_TYPE eapMethodType,
         IN DWORD dwFlags,
         IN DWORD dwEapConnDataSize,
         IN _In_reads_(dwEapConnDataSize) BYTE* pbEapConnData,
         IN const EAP_CONFIG_INPUT_FIELD_ARRAY *pEapConfigInputFieldArray,
         IN OUT DWORD *pdwUserBlobSize,
         IN OUT _Outptr_result_buffer_(*pdwUserBlobSize) BYTE **ppbUserBlob,
         OUT EAP_ERROR** ppEapError
         );
DWORD WINAPI EapPeerQueryInteractiveUIInputFields(
        IN DWORD dwVersion,
        IN DWORD dwFlags,
        IN DWORD dwSizeofUIContextData,
        IN _In_reads_(dwSizeofUIContextData) const BYTE* pUIContextData,
        OUT EAP_INTERACTIVE_UI_DATA* pEapInteractiveUIData,
        OUT EAP_ERROR** ppEapError,
        IN OUT LPVOID *ppvReserved
        );
DWORD WINAPI EapPeerQueryUIBlobFromInteractiveUIInputFields(
        IN DWORD dwVersion,
        IN DWORD dwFlags,
        IN DWORD dwSizeofUIContextData,
        IN _In_reads_(dwSizeofUIContextData) const BYTE* pUIContextData,
        IN const EAP_INTERACTIVE_UI_DATA *pEapInteractiveUIData,
        OUT DWORD * pdwSizeOfDataFromInteractiveUI,
        OUT _Outptr_result_buffer_(*pdwSizeOfDataFromInteractiveUI) BYTE ** ppDataFromInteractiveUI,
        OUT EAP_ERROR** ppEapError,
        IN OUT LPVOID *ppvReserved
        );
DWORD WINAPI EapPeerConfigXml2Blob(
                IN DWORD dwFlags,
                IN EAP_METHOD_TYPE eapMethodType,
                IN IXMLDOMDocument2* pConfigDoc,
                OUT _Out_writes_(*pdwSizeOfConfigOut) BYTE** ppConfigOut,
                OUT DWORD* pdwSizeOfConfigOut,
                OUT EAP_ERROR** ppEapError
                );
DWORD WINAPI EapPeerCredentialsXml2Blob(
                IN DWORD dwFlags,
                IN EAP_METHOD_TYPE eapMethodType,
                IN IXMLDOMDocument2* pCredentialsDoc,
                IN _In_reads_(dwSizeOfConfigIn) const BYTE* pConfigIn,
                IN DWORD dwSizeOfConfigIn,
                OUT _Out_writes_(*pdwSizeOfCredentialsOut) BYTE** ppCredentialsOut,
                OUT DWORD* pdwSizeOfCredentialsOut,
                OUT EAP_ERROR** ppEapError
                );
DWORD WINAPI EapPeerConfigBlob2Xml(
                IN DWORD dwFlags,
                IN EAP_METHOD_TYPE eapMethodType,
                IN _In_reads_(dwSizeOfConfigIn) const BYTE* pConfigIn,
                IN DWORD dwSizeOfConfigIn,
                OUT IXMLDOMDocument2** ppConfigDoc,
                OUT EAP_ERROR** ppEapError
                );
DWORD WINAPI EapPeerGetMethodProperties(
                _In_ DWORD dwVersion,
                _In_ DWORD dwFlags,
                _In_ EAP_METHOD_TYPE eapMethodType,
                _In_ HANDLE hUserImpersonationToken,
                _In_ DWORD dwSizeOfConnectionDataIn,
                _In_ BYTE* pConnectionDataIn,
                _In_ DWORD dwSizeOfUserDataIn,
                _In_ BYTE* pUserDataIn,
                _Out_ EAP_METHOD_PROPERTY_ARRAY* pMethodPropertyArray,
                _Out_ EAP_ERROR** ppEapError
                );
DWORD WINAPI EapPeerGetConfigBlobAndUserBlob(
                IN DWORD dwFlags,
                IN EAP_METHOD_TYPE eapMethodType,
                IN EapCredential eapCredential,
                OUT DWORD* pdwConfigBlobSize,
                OUT BYTE** ppConfigBlob,
                OUT DWORD* pdwUserBlobSize,
                OUT BYTE** ppUserBlob,
                OUT EAP_ERROR** ppEapError
                );
VOID WINAPI EapPeerFreeMemory(
        _In_ void* pUIContextData
        );
}
#endif
#pragma endregion
