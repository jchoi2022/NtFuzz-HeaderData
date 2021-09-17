       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "objbase.h"
#include "msxml6.h"
#include "EapTypes.h"
extern "C" {
DWORD WINAPI EapHostPeerGetMethods(
                OUT EAP_METHOD_INFO_ARRAY* pEapMethodInfoArray,
                OUT EAP_ERROR** ppEapError
                );
DWORD WINAPI EapHostPeerGetMethodProperties(
                IN DWORD dwVersion,
                IN DWORD dwFlags,
                IN EAP_METHOD_TYPE eapMethodType,
                IN HANDLE hUserImpersonationToken,
                IN DWORD dwEapConnDataSize,
                IN _In_reads_(dwEapConnDataSize) const BYTE* pbEapConnData,
                IN DWORD dwUserDataSize,
                IN _In_reads_(dwUserDataSize) const BYTE* pbUserData,
                OUT EAP_METHOD_PROPERTY_ARRAY* pMethodPropertyArray,
                OUT EAP_ERROR** ppEapError
                );
DWORD WINAPI EapHostPeerInvokeConfigUI(
                IN HWND hwndParent,
                IN DWORD dwFlags,
                IN EAP_METHOD_TYPE eapMethodType,
                IN DWORD dwSizeOfConfigIn,
                IN _In_reads_opt_(dwSizeOfConfigIn) const BYTE* pConfigIn,
                OUT DWORD* pdwSizeOfConfigOut,
                OUT BYTE** ppConfigOut,
                OUT EAP_ERROR** ppEapError
                );
DWORD WINAPI EapHostPeerQueryCredentialInputFields(
                IN HANDLE hUserImpersonationToken,
                IN EAP_METHOD_TYPE eapMethodType,
                IN DWORD dwFlags,
                IN DWORD dwEapConnDataSize,
                IN _In_reads_(dwEapConnDataSize) const BYTE* pbEapConnData,
                OUT EAP_CONFIG_INPUT_FIELD_ARRAY *pEapConfigInputFieldArray,
                OUT EAP_ERROR** ppEapError
                );
DWORD WINAPI EapHostPeerQueryUserBlobFromCredentialInputFields(
                IN HANDLE hUserImpersonationToken,
                IN EAP_METHOD_TYPE eapMethodType,
                IN DWORD dwFlags,
                IN DWORD dwEapConnDataSize,
                IN _In_reads_(dwEapConnDataSize) const BYTE* pbEapConnData,
                IN const EAP_CONFIG_INPUT_FIELD_ARRAY *pEapConfigInputFieldArray,
                IN OUT DWORD *pdwUserBlobSize,
                IN OUT _Inout_
                       _At_(*ppbUserBlob,
                            _When_(*ppbUserBlob != NULL, _Pre_writable_size_(*pdwUserBlobSize))
                            _Post_readable_size_(*pdwUserBlobSize))
                BYTE **ppbUserBlob,
                OUT EAP_ERROR** ppEapError
                );
DWORD WINAPI EapHostPeerInvokeIdentityUI (
                IN DWORD dwVersion,
                IN EAP_METHOD_TYPE eapMethodType,
                IN DWORD dwFlags,
                IN HWND hwndParent,
                IN DWORD dwSizeofConnectionData,
                IN _In_reads_(dwSizeofConnectionData) const BYTE* pConnectionData,
                IN DWORD dwSizeofUserData,
                IN _In_reads_opt_(dwSizeofUserData) const BYTE* pUserData,
                IN OUT DWORD* pdwSizeOfUserDataOut,
                OUT _Outptr_result_buffer_(*pdwSizeOfUserDataOut)BYTE** ppUserDataOut,
                OUT _Outptr_ LPWSTR* ppwszIdentity,
                OUT EAP_ERROR** ppEapError,
                IN OUT LPVOID *ppvReserved
                );
DWORD WINAPI EapHostPeerInvokeInteractiveUI(
                IN HWND hwndParent,
                IN DWORD dwSizeofUIContextData,
                IN _In_reads_opt_(dwSizeofUIContextData) const BYTE* pUIContextData,
                OUT DWORD* pdwSizeOfDataFromInteractiveUI,
                OUT _Outptr_result_buffer_(*pdwSizeOfDataFromInteractiveUI) BYTE** ppDataFromInteractiveUI,
                OUT EAP_ERROR** ppEapError
                );
DWORD WINAPI EapHostPeerQueryInteractiveUIInputFields (
                IN DWORD dwVersion,
                IN DWORD dwFlags,
                IN DWORD dwSizeofUIContextData,
                IN _In_reads_(dwSizeofUIContextData) const BYTE* pUIContextData,
                OUT EAP_INTERACTIVE_UI_DATA *pEapInteractiveUIData,
                OUT EAP_ERROR** ppEapError,
                IN OUT LPVOID *ppvReserved
                );
DWORD WINAPI EapHostPeerQueryUIBlobFromInteractiveUIInputFields(
                IN DWORD dwVersion,
                IN DWORD dwFlags,
                IN DWORD dwSizeofUIContextData,
                IN _In_reads_(dwSizeofUIContextData) const BYTE* pUIContextData,
                IN const EAP_INTERACTIVE_UI_DATA *pEapInteractiveUIData,
                IN OUT DWORD * pdwSizeOfDataFromInteractiveUI,
                IN OUT _Outptr_result_buffer_(*pdwSizeOfDataFromInteractiveUI) BYTE ** ppDataFromInteractiveUI,
                OUT EAP_ERROR** ppEapError,
                IN OUT LPVOID *ppvReserved
                );
DWORD WINAPI EapHostPeerConfigXml2Blob(
                IN DWORD dwFlags,
                IN IXMLDOMNode* pConfigDoc,
                OUT DWORD* pdwSizeOfConfigOut,
                OUT _Outptr_result_buffer_(*pdwSizeOfConfigOut) BYTE** ppConfigOut,
                OUT EAP_METHOD_TYPE* pEapMethodType,
                OUT EAP_ERROR** ppEapError
                );
DWORD WINAPI EapHostPeerCredentialsXml2Blob(
                IN DWORD dwFlags,
                IN IXMLDOMNode* pCredentialsDoc,
                IN DWORD dwSizeOfConfigIn,
                IN _In_reads_(dwSizeOfConfigIn) BYTE* pConfigIn,
                OUT DWORD* pdwSizeOfCredentialsOut,
                OUT _Outptr_result_buffer_(*pdwSizeOfCredentialsOut) BYTE** ppCredentialsOut,
                OUT EAP_METHOD_TYPE* pEapMethodType,
                OUT EAP_ERROR** ppEapError
                );
DWORD WINAPI EapHostPeerConfigBlob2Xml(
                IN DWORD dwFlags,
                IN EAP_METHOD_TYPE eapMethodType,
                IN DWORD dwSizeOfConfigIn,
                IN _In_reads_(dwSizeOfConfigIn) BYTE* pConfigIn,
                OUT IXMLDOMDocument2** ppConfigDoc,
                OUT EAP_ERROR** ppEapError
                );
VOID WINAPI EapHostPeerFreeMemory(BYTE* pData);
VOID WINAPI EapHostPeerFreeErrorMemory(EAP_ERROR* pEapError);
}
#endif
#pragma endregion
