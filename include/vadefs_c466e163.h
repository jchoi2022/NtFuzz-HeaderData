#error ERROR: Only Win32 target supported!
#pragma pack(push,_CRT_PACKING)
    __pragma(comment(linker, "/FAILIFMISMATCH:\"" \
        _PRAGMA_DETECT_MISMATCH_STRING0(name) "=" \
        _PRAGMA_DETECT_MISMATCH_STRING0(value) "\""))
extern "C" {
#include <specstrings.h>
typedef unsigned __int64 uintptr_t;
typedef System::ArgIterator va_list;
}
#pragma pack(pop)
