       
#include <corecrt_share.h>
#include <corecrt_wio.h>
_CRT_BEGIN_C_HEADER
    #define _finddata_t _finddata32_t
    #define _finddatai64_t _finddata32i64_t
struct _finddata32_t
{
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    _fsize_t size;
    char name[260];
};
struct _finddata32i64_t
{
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    __int64 size;
    char name[260];
};
struct _finddata64i32_t
{
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    _fsize_t size;
    char name[260];
};
struct __finddata64_t
{
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    __int64 size;
    char name[260];
};
    #define _findfirst _findfirst32
    #define _findnext _findnext32
    #define _findfirsti64 _findfirst32i64
    #define _findnexti64 _findnext32i64
_CRT_END_C_HEADER
