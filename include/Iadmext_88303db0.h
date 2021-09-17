#include "windows.h"
#include "ole2.h"
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C"{
#include "unknwn.h"
#include "objidl.h"
#include "ocidl.h"
DEFINE_GUID(IID_IADMEXT, 0x51dfe970, 0xf6f2, 0x11d0, 0xb9, 0xbd, 0x0, 0xa0, 0xc9, 0x22, 0xe7, 0x50);
EXTERN_C const IID IID_IADMEXT;
}
#endif
#pragma endregion
