       
#include <corecrt.h>
#include <sys/types.h>
_CRT_BEGIN_C_HEADER
#pragma warning(push)
#pragma warning(disable: 4820)
struct _stat32
{
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
};
struct _stat32i64
{
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    __int64 st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
};
struct _stat64i32
{
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
};
struct _stat64
{
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    __int64 st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
};
    #define _fstat _fstat32
    #define _fstati64 _fstat32i64
    #define _stat _stat32
    #define _stati64 _stat32i64
    #define _wstat _wstat32
    #define _wstati64 _wstat32i64
_ACRTIMP int __cdecl _fstat32(
    _In_ int _FileHandle,
    _Out_ struct _stat32* _Stat
    );
_ACRTIMP int __cdecl _fstat32i64(
    _In_ int _FileHandle,
    _Out_ struct _stat32i64* _Stat
    );
_ACRTIMP int __cdecl _fstat64i32(
    _In_ int _FileHandle,
    _Out_ struct _stat64i32* _Stat
    );
_ACRTIMP int __cdecl _fstat64(
    _In_ int _FileHandle,
    _Out_ struct _stat64* _Stat
    );
_ACRTIMP int __cdecl _stat32(
    _In_z_ char const* _FileName,
    _Out_ struct _stat32* _Stat
    );
_ACRTIMP int __cdecl _stat32i64(
    _In_z_ char const* _FileName,
    _Out_ struct _stat32i64* _Stat
    );
_ACRTIMP int __cdecl _stat64i32(
    _In_z_ char const* _FileName,
    _Out_ struct _stat64i32* _Stat
    );
_ACRTIMP int __cdecl _stat64(
    _In_z_ char const* _FileName,
    _Out_ struct _stat64* _Stat
    );
_ACRTIMP int __cdecl _wstat32(
    _In_z_ wchar_t const* _FileName,
    _Out_ struct _stat32* _Stat
    );
_ACRTIMP int __cdecl _wstat32i64(
    _In_z_ wchar_t const* _FileName,
    _Out_ struct _stat32i64* _Stat
    );
_ACRTIMP int __cdecl _wstat64i32(
    _In_z_ wchar_t const* _FileName,
    _Out_ struct _stat64i32* _Stat
    );
_ACRTIMP int __cdecl _wstat64(
    _In_z_ wchar_t const* _FileName,
    _Out_ struct _stat64* _Stat
    );
#pragma warning(pop)
_CRT_END_C_HEADER
