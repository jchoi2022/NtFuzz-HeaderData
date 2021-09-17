#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef enum {
   SEND_TO_FAX_RECIPIENT_ATTACHMENT
} SendToMode;
BOOL WINAPI CanSendToFaxRecipient();
DWORD WINAPI SendToFaxRecipient(SendToMode sndMode, LPCWSTR lpFileName);
}
#endif
#pragma endregion
