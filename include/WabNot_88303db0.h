#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct
{
 ULONG cb;
 BYTE ab[MAPI_DIM];
} NOTIFKEY, FAR * LPNOTIFKEY;
 struct _NOTIFKEY_ ## _name \
{ \
 ULONG cb; \
 BYTE ab[_cb]; \
} _name
}
#endif
#pragma endregion
