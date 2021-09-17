       
#include <corecrt.h>
#include <vcruntime_new_debug.h>
_CRT_BEGIN_C_HEADER
typedef void* _HFILE;
typedef int (__CRTDECL* _CRT_REPORT_HOOK )(int, char*, int*);
typedef int (__CRTDECL* _CRT_REPORT_HOOKW)(int, wchar_t*, int*);
typedef int (__CRTDECL* _CRT_ALLOC_HOOK)(int, void*, size_t, int, long, unsigned char const*, int);
    typedef int (__clrcall* _CRT_ALLOC_HOOK_M)(int, void*, size_t, int, long, unsigned char const*, int);
typedef void (__CRTDECL* _CRT_DUMP_CLIENT)(void*, size_t);
    typedef void (__clrcall* _CRT_DUMP_CLIENT_M)(void*, size_t);
struct _CrtMemBlockHeader;
typedef struct _CrtMemState
{
    struct _CrtMemBlockHeader* pBlockHeader;
    size_t lCounts[_MAX_BLOCKS];
    size_t lSizes[_MAX_BLOCKS];
    size_t lHighWaterCount;
    size_t lTotalCount;
} _CrtMemState;
    #define _CrtGetAllocHook() ((_CRT_ALLOC_HOOK)0)
    #define _CrtSetAllocHook(f) ((_CRT_ALLOC_HOOK)0)
    #define _CrtGetDumpClient() ((_CRT_DUMP_CLIENT)0)
    #define _CrtSetDumpClient(f) ((_CRT_DUMP_CLIENT)0)
    #define _CrtCheckMemory() ((int)1)
    #define _CrtDoForAllClientObjects(f, c) ((void)0)
    #define _CrtDumpMemoryLeaks() ((int)0)
    #define _CrtIsMemoryBlock(p, t, r, f, l) ((int)1)
    #define _CrtIsValidHeapPointer(p) ((int)1)
    #define _CrtIsValidPointer(p, n, r) ((int)1)
    #define _CrtMemCheckpoint(s) ((void)0)
    #define _CrtMemDifference(s1, s2, s3) ((int)0)
    #define _CrtMemDumpAllObjectsSince(s) ((void)0)
    #define _CrtMemDumpStatistics(s) ((void)0)
    #define _CrtReportBlockType(p) ((int)-1)
    #define _CrtSetBreakAlloc(a) ((long)0)
    #define _CrtSetDbgFlag(f) ((int)0)
    #define _calloc_dbg(c, s, t, f, l) calloc(c, s)
    #define _expand_dbg(p, s, t, f, l) _expand(p, s)
    #define _free_dbg(p, t) free(p)
    #define _malloc_dbg(s, t, f, l) malloc(s)
    #define _msize_dbg(p, t) _msize(p)
    #define _realloc_dbg(p, s, t, f, l) realloc(p, s)
    #define _recalloc_dbg(p, c, s, t, f, l) _recalloc(p, c, s)
    #define _aligned_free_dbg(p) _aligned_free(p)
    #define _aligned_malloc_dbg(s, a, f, l) _aligned_malloc(s, a)
    #define _aligned_msize_dbg(p, a, o) _aligned_msize(p, a, o)
    #define _aligned_offset_malloc_dbg(s, a, o, f, l) _aligned_offset_malloc(s, a, o)
    #define _aligned_offset_realloc_dbg(p, s, a, o, f, l) _aligned_offset_realloc(p, s, a, o)
    #define _aligned_offset_recalloc_dbg(p, c, s, a, o, f, l) _aligned_offset_recalloc(p, c, s, a, o)
    #define _aligned_realloc_dbg(p, s, a, f, l) _aligned_realloc(p, s, a)
    #define _aligned_recalloc_dbg(p, c, s, a, f, l) _aligned_recalloc(p, c, s, a)
    #define _freea_dbg(p, t) _freea(p)
    #define _malloca_dbg(s, t, f, l) _malloca(s)
    #define _dupenv_s_dbg(ps1, size, s2, t, f, l) _dupenv_s(ps1, size, s2)
    #define _fullpath_dbg(s1, s2, le, t, f, l) _fullpath(s1, s2, le)
    #define _getcwd_dbg(s, le, t, f, l) _getcwd(s, le)
    #define _getdcwd_dbg(d, s, le, t, f, l) _getdcwd(d, s, le)
    #define _getdcwd_lk_dbg(d, s, le, t, f, l) _getdcwd(d, s, le)
    #define _mbsdup_dbg(s, t, f, l) _mbsdup(s)
    #define _strdup_dbg(s, t, f, l) _strdup(s)
    #define _tempnam_dbg(s1, s2, t, f, l) _tempnam(s1, s2)
    #define _wcsdup_dbg(s, t, f, l) _wcsdup(s)
    #define _wdupenv_s_dbg(ps1, size, s2, t, f, l) _wdupenv_s(ps1, size, s2)
    #define _wfullpath_dbg(s1, s2, le, t, f, l) _wfullpath(s1, s2, le)
    #define _wgetcwd_dbg(s, le, t, f, l) _wgetcwd(s, le)
    #define _wgetdcwd_dbg(d, s, le, t, f, l) _wgetdcwd(d, s, le)
    #define _wgetdcwd_lk_dbg(d, s, le, t, f, l) _wgetdcwd(d, s, le)
    #define _wtempnam_dbg(s1, s2, t, f, l) _wtempnam(s1, s2)
    #define _CrtSetDebugFillThreshold(t) ((size_t)0)
    #define _CrtSetReportFile(t, f) ((_HFILE)0)
    #define _CrtSetReportMode(t, f) ((int)0)
    #define _CrtGetReportHook() ((_CRT_REPORT_HOOK)0)
    #define _CrtSetReportHook(f) ((_CRT_REPORT_HOOK)0)
    #define _CrtSetReportHook2(t, f) ((int)0)
    #define _CrtSetReportHookW2(t, f) ((int)0)
    #define _CrtDbgBreak() ((void)0)
        #define _ASSERT_EXPR(expr, msg) ((void)0)
        #define _ASSERT(expr) ((void)0)
        #define _ASSERTE(expr) ((void)0)
    #define _RPT0(rptno, msg)
    #define _RPTN(rptno, msg, ...)
    #define _RPTW0(rptno, msg)
    #define _RPTWN(rptno, msg, ...)
    #define _RPTF0(rptno, msg)
    #define _RPTFN(rptno, msg, ...)
    #define _RPTFW0(rptno, msg)
    #define _RPTFWN(rptno, msg, ...)
    { \
        _ASSERTE((expr)); \
        if (!(expr)) \
        { \
            _invoke_watson(_CRT_WIDE(#expr), __FUNCTIONW__, __FILEW__, __LINE__, 0); \
        } \
    }
    #define _ASSERT_BASE _ASSERT_EXPR
_CRT_END_C_HEADER
