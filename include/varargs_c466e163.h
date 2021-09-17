#error ERROR: Only Win32 target supported!
#include <crtdefs.h>
#pragma pack(push,_CRT_PACKING)
extern "C" {
typedef unsigned __int64 uintptr_t;
typedef System::ArgIterator va_list;
}
#pragma pack(pop)
