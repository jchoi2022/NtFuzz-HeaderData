#error ERROR: Only Win32 target supported!
#include <crtdefs.h>
#pragma pack(push,_CRT_PACKING)
extern "C" {
#include <sys/types.h>
typedef __int64 time_t;
struct _stat32 {
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
struct stat {
        _dev_t st_dev;
        _ino_t st_ino;
        unsigned short st_mode;
        short st_nlink;
        short st_uid;
        short st_gid;
        _dev_t st_rdev;
        _off_t st_size;
        time_t st_atime;
        time_t st_mtime;
        time_t st_ctime;
        };
struct _stat32i64 {
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
struct _stat64i32 {
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
struct _stat64 {
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
struct _stat {
        _dev_t st_dev;
        _ino_t st_ino;
        unsigned short st_mode;
        short st_nlink;
        short st_uid;
        short st_gid;
        _dev_t st_rdev;
        _off_t st_size;
        time_t st_atime;
        time_t st_mtime;
        time_t st_ctime;
        };
struct _stati64 {
        _dev_t st_dev;
        _ino_t st_ino;
        unsigned short st_mode;
        short st_nlink;
        short st_uid;
        short st_gid;
        _dev_t st_rdev;
        __int64 st_size;
        time_t st_atime;
        time_t st_mtime;
        time_t st_ctime;
        };
_CRTIMP int __cdecl _fstat(_In_ int _FileDes, _Out_ struct _stat * _Stat);
_CRTIMP int __cdecl _stat(_In_z_ const char *_Name, _Out_ struct _stat * _Stat);
_CRTIMP int __cdecl _fstati64(_In_ int _FileDes, _Out_ struct _stati64 *_Stat);
_CRTIMP int __cdecl _stati64(_In_z_ const char *_Name, _Out_ struct _stati64 *_Stat);
_CRTIMP int __cdecl _fstat32(_In_ int _FileDes, _Out_ struct _stat32 * _Stat);
_CRTIMP int __cdecl _stat32(_In_z_ const char * _Name, _Out_ struct _stat32 * _Stat);
_CRTIMP int __cdecl _fstat32i64(_In_ int _FileDes, _Out_ struct _stat32i64 * _Stat);
_CRTIMP int __cdecl _fstat64i32(_In_ int _FileDes, _Out_ struct _stat64i32 * _Stat);
_CRTIMP int __cdecl _fstat64(_In_ int _FileDes, _Out_ struct _stat64 * _Stat);
_CRTIMP int __cdecl _stat32i64(_In_z_ const char * _Name, _Out_ struct _stat32i64 * _Stat);
_CRTIMP int __cdecl _stat64i32(_In_z_ const char * _Name, _Out_ struct _stat64i32 * _Stat);
_CRTIMP int __cdecl _stat64(_In_z_ const char * _Name, _Out_ struct _stat64 * _Stat);
_CRTIMP int __cdecl _wstat(_In_z_ const wchar_t *_Name, _Out_ struct _stat * _Stat);
_CRTIMP int __cdecl _wstati64(_In_z_ const wchar_t *_Name, _Out_ struct _stati64 *_Stat);
_CRTIMP int __cdecl _wstat32(_In_z_ const wchar_t * _Name, _Out_ struct _stat32 * _Stat);
_CRTIMP int __cdecl _wstat32i64(_In_z_ const wchar_t * _Name, _Out_ struct _stat32i64 * _Stat);
_CRTIMP int __cdecl _wstat64i32(_In_z_ const wchar_t * _Name, _Out_ struct _stat64i32 * _Stat);
_CRTIMP int __cdecl _wstat64(_In_z_ const wchar_t * _Name, _Out_ struct _stat64 * _Stat);
#include <sys/stat.inl>
}
#pragma pack(pop)
