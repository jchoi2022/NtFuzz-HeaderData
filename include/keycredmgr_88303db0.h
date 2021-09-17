       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum KeyCredentialManagerOperationErrorStates {
    KeyCredentialManagerOperationErrorStateNone = 0x0,
    KeyCredentialManagerOperationErrorStateDeviceJoinFailure = 0x01,
    KeyCredentialManagerOperationErrorStateTokenFailure = 0x02,
    KeyCredentialManagerOperationErrorStateCertificateFailure = 0x04,
    KeyCredentialManagerOperationErrorStateRemoteSessionFailure = 0x08,
    KeyCredentialManagerOperationErrorStatePolicyFailure = 0x10,
    KeyCredentialManagerOperationErrorStateHardwareFailure = 0x20,
    KeyCredentialManagerOperationErrorStatePinExistsFailure = 0x40
} KeyCredentialManagerOperationErrorStates;
DEFINE_ENUM_FLAG_OPERATORS(KeyCredentialManagerOperationErrorStates);
typedef enum KeyCredentialManagerOperationType {
    KeyCredentialManagerProvisioning = 0,
    KeyCredentialManagerPinChange = 1,
    KeyCredentialManagerPinReset = 2,
} KeyCredentialManagerOperationType;
typedef struct KeyCredentialManagerInfo {
    GUID containerId;
} KeyCredentialManagerInfo;
STDAPI
KeyCredentialManagerGetOperationErrorStates(
    _In_ KeyCredentialManagerOperationType keyCredentialManagerOperationType,
    _Out_ BOOL* isReady,
    _Out_ KeyCredentialManagerOperationErrorStates* keyCredentialManagerOperationErrorStates);
STDAPI
KeyCredentialManagerShowUIOperation(
    _In_ HWND hWndOwner,
    _In_ KeyCredentialManagerOperationType keyCredentialManagerOperationType);
STDAPI
KeyCredentialManagerGetInformation(
    _Outptr_ KeyCredentialManagerInfo** keyCredentialManagerInfo);
extern "C" {
VOID
KeyCredentialManagerFreeInformation(
    _In_ KeyCredentialManagerInfo* keyCredentialManagerInfo);
}
#endif
#pragma endregion
       
