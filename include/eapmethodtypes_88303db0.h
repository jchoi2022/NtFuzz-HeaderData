       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct tagEapPacket
{
   BYTE Code;
   BYTE Id;
   BYTE Length[2];
   BYTE Data[1];
} EapPacket;
typedef
   [v1_enum]
enum tagEapCode
{
   EapCodeMinimum = 1,
   EapCodeRequest = 1,
   EapCodeResponse,
   EapCodeSuccess,
   EapCodeFailure,
   EapCodeMaximum = EapCodeFailure
} EapCode;
typedef VOID* EAP_SESSION_HANDLE;
}
#endif
#pragma endregion
