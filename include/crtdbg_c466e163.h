#include <crtdefs.h>
#pragma pack(push,_CRT_PACKING)
       
#pragma warning(push)
#pragma warning(disable:4595)
extern "C" {
typedef void *_HFILE;
typedef int (__cdecl * _CRT_REPORT_HOOK)(int, char *, int *);
typedef int (__cdecl * _CRT_REPORT_HOOKW)(int, wchar_t *, int *);
typedef int (__cdecl * _CRT_ALLOC_HOOK)(int, void *, size_t, int, long, const unsigned char *, int);
typedef void (__cdecl * _CRT_DUMP_CLIENT)(void *, size_t);
struct _CrtMemBlockHeader;
typedef struct _CrtMemState
{
        struct _CrtMemBlockHeader * pBlockHeader;
        size_t lCounts[_MAX_BLOCKS];
        size_t lSizes[_MAX_BLOCKS];
        size_t lHighWaterCount;
        size_t lTotalCount;
} _CrtMemState;
}
extern "C++" {
#pragma warning(push)
#pragma warning(disable: 4985)
_Ret_notnull_ _Post_writable_byte_size_(_Size) void * __CRTDECL operator new[](size_t _Size);
_Ret_notnull_ _Post_writable_byte_size_(_Size) void * __CRTDECL operator new(
        size_t _Size,
        int,
        const char *,
        int
        );
_Ret_notnull_ _Post_writable_byte_size_(_Size) void * __CRTDECL operator new[](
        size_t _Size,
        int,
        const char *,
        int
        );
#pragma warning(pop)
}
#pragma warning(pop)
       
#pragma pack(pop)
