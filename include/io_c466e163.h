#include <crtdefs.h>
#pragma pack(push,8)
extern "C" {
typedef unsigned long _fsize_t;
struct _finddata32_t {
        unsigned attrib;
        __time32_t time_create;
        __time32_t time_access;
        __time32_t time_write;
        _fsize_t size;
        char name[260];
};
struct _finddata32i64_t {
        unsigned attrib;
        __time32_t time_create;
        __time32_t time_access;
        __time32_t time_write;
        __int64 size;
        char name[260];
};
struct _finddata64i32_t {
        unsigned attrib;
        __time64_t time_create;
        __time64_t time_access;
        __time64_t time_write;
        _fsize_t size;
        char name[260];
};
struct __finddata64_t {
        unsigned attrib;
        __time64_t time_create;
        __time64_t time_access;
        __time64_t time_write;
        __int64 size;
        char name[260];
};
struct _finddata_t {
        unsigned attrib;
        time_t time_create;
        time_t time_access;
        time_t time_write;
        _fsize_t size;
        char name[260];
};
struct _finddatai64_t {
        unsigned attrib;
        time_t time_create;
        time_t time_access;
        time_t time_write;
        __int64 size;
        char name[260];
};
struct _wfinddata32_t {
        unsigned attrib;
        __time32_t time_create;
        __time32_t time_access;
        __time32_t time_write;
        _fsize_t size;
        wchar_t name[260];
};
struct _wfinddata32i64_t {
        unsigned attrib;
        __time32_t time_create;
        __time32_t time_access;
        __time32_t time_write;
        __int64 size;
        wchar_t name[260];
};
struct _wfinddata64i32_t {
        unsigned attrib;
        __time64_t time_create;
        __time64_t time_access;
        __time64_t time_write;
        _fsize_t size;
        wchar_t name[260];
};
struct _wfinddata64_t {
        unsigned attrib;
        __time64_t time_create;
        __time64_t time_access;
        __time64_t time_write;
        __int64 size;
        wchar_t name[260];
};
struct _wfinddata_t {
        unsigned attrib;
        time_t time_create;
        time_t time_access;
        time_t time_write;
        _fsize_t size;
        wchar_t name[260];
};
struct _wfinddatai64_t {
        unsigned attrib;
        time_t time_create;
        time_t time_access;
        time_t time_write;
        __int64 size;
        wchar_t name[260];
};
typedef unsigned __int64 size_t;
_Check_return_ _CRTIMP int __cdecl _access(_In_z_ const char * _Filename, _In_ int _AccessMode);
_Check_return_wat_ _CRTIMP errno_t __cdecl _access_s(_In_z_ const char * _Filename, _In_ int _AccessMode);
_Check_return_ _CRTIMP int __cdecl _chmod(_In_z_ const char * _Filename, _In_ int _Mode);
_Check_return_ _CRTIMP int __cdecl _chsize(_In_ int _FileHandle, _In_ long _Size);
_Check_return_wat_ _CRTIMP errno_t __cdecl _chsize_s(_In_ int _FileHandle,_In_ __int64 _Size);
_Check_return_opt_ _CRTIMP int __cdecl _close(_In_ int _FileHandle);
_Check_return_opt_ _CRTIMP int __cdecl _commit(_In_ int _FileHandle);
_Check_return_ _CRT_INSECURE_DEPRECATE(_sopen_s) _CRTIMP int __cdecl _creat(_In_z_ const char * _Filename, _In_ int _PermissionMode);
_Check_return_ _CRTIMP int __cdecl _dup(_In_ int _FileHandle);
_Check_return_ _CRTIMP int __cdecl _dup2(_In_ int _FileHandleSrc, _In_ int _FileHandleDst);
_Check_return_ _CRTIMP int __cdecl _eof(_In_ int _FileHandle);
_Check_return_ _CRTIMP long __cdecl _filelength(_In_ int _FileHandle);
_Check_return_ _CRTIMP intptr_t __cdecl _findfirst32(_In_z_ const char * _Filename, _Out_ struct _finddata32_t * _FindData);
_Check_return_ _CRTIMP int __cdecl _findnext32(_In_ intptr_t _FindHandle, _Out_ struct _finddata32_t * _FindData);
_Check_return_opt_ _CRTIMP int __cdecl _findclose(_In_ intptr_t _FindHandle);
_Check_return_ _CRTIMP int __cdecl _isatty(_In_ int _FileHandle);
_CRTIMP int __cdecl _locking(_In_ int _FileHandle, _In_ int _LockMode, _In_ long _NumOfBytes);
_Check_return_opt_ _CRTIMP long __cdecl _lseek(_In_ int _FileHandle, _In_ long _Offset, _In_ int _Origin);
_Check_return_wat_ _CRTIMP errno_t __cdecl _mktemp_s(_Inout_updates_z_(_Size) char * _TemplateName, _In_ size_t _Size);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t, _mktemp_s, _Deref_prepost_z_ char, _TemplateName)
_Check_return_ __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(char *, __RETURN_POLICY_DST, _CRTIMP, _mktemp, _Inout_z_, char, _TemplateName)
_Check_return_ _CRTIMP int __cdecl _pipe(_Inout_updates_(2) int * _PtHandles, _In_ unsigned int _PipeSize, _In_ int _TextMode);
_Check_return_ _CRTIMP int __cdecl _read(_In_ int _FileHandle, _Out_writes_bytes_(_MaxCharCount) void * _DstBuf, _In_ unsigned int _MaxCharCount);
_Check_return_ _CRTIMP int __cdecl remove(_In_z_ const char * _Filename);
_Check_return_ _CRTIMP int __cdecl rename(_In_z_ const char * _OldFilename, _In_z_ const char * _NewFilename);
_Check_return_ _CRTIMP int __cdecl _unlink(_In_z_ const char * _Filename);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_unlink) _CRTIMP int __cdecl unlink(_In_z_ const char * _Filename);
_Check_return_ _CRTIMP int __cdecl _setmode(_In_ int _FileHandle, _In_ int _Mode);
_Check_return_ _CRTIMP long __cdecl _tell(_In_ int _FileHandle);
_CRT_INSECURE_DEPRECATE(_umask_s) _CRTIMP int __cdecl _umask(_In_ int _Mode);
_Check_return_wat_ _CRTIMP errno_t __cdecl _umask_s(_In_ int _NewMode, _Out_ int * _OldMode);
_CRTIMP int __cdecl _write(_In_ int _FileHandle, _In_reads_bytes_(_MaxCharCount) const void * _Buf, _In_ unsigned int _MaxCharCount);
_CRTIMP intptr_t __cdecl _findfirst(const char *, struct _finddata_t *);
_CRTIMP int __cdecl _findnext(intptr_t, struct _finddata_t *);
_Check_return_ _CRTIMP __int64 __cdecl _filelengthi64(_In_ int _FileHandle);
_Check_return_ _CRTIMP intptr_t __cdecl _findfirst32i64(_In_z_ const char * _Filename, _Out_ struct _finddata32i64_t * _FindData);
_Check_return_ _CRTIMP intptr_t __cdecl _findfirst64i32(_In_z_ const char * _Filename, _Out_ struct _finddata64i32_t * _FindData);
_Check_return_ _CRTIMP intptr_t __cdecl _findfirst64(_In_z_ const char * _Filename, _Out_ struct __finddata64_t * _FindData);
_Check_return_ _CRTIMP int __cdecl _findnext32i64(_In_ intptr_t _FindHandle, _Out_ struct _finddata32i64_t * _FindData);
_Check_return_ _CRTIMP int __cdecl _findnext64i32(_In_ intptr_t _FindHandle, _Out_ struct _finddata64i32_t * _FindData);
_Check_return_ _CRTIMP int __cdecl _findnext64(_In_ intptr_t _FindHandle, _Out_ struct __finddata64_t * _FindData);
_Check_return_opt_ _CRTIMP __int64 __cdecl _lseeki64(_In_ int _FileHandle, _In_ __int64 _Offset, _In_ int _Origin);
_Check_return_ _CRTIMP __int64 __cdecl _telli64(_In_ int _FileHandle);
_CRTIMP intptr_t __cdecl _findfirsti64(const char *, struct _finddatai64_t *);
_CRTIMP int __cdecl _findnexti64(intptr_t, struct _finddatai64_t *);
_Check_return_wat_ _CRTIMP errno_t __cdecl _sopen_s(_Out_ int * _FileHandle, _In_z_ const char * _Filename,_In_ int _OpenFlag, _In_ int _ShareFlag, _In_ int _PermissionMode);
_Check_return_ _CRT_INSECURE_DEPRECATE(_sopen_s) _CRTIMP int __cdecl _open(_In_z_ const char * _Filename, _In_ int _OpenFlag, ...);
_Check_return_ _CRT_INSECURE_DEPRECATE(_sopen_s) _CRTIMP int __cdecl _sopen(_In_z_ const char * _Filename, _In_ int _OpenFlag, int _ShareFlag, ...);
_Check_return_ _CRTIMP int __cdecl _waccess(_In_z_ const wchar_t * _Filename, _In_ int _AccessMode);
_Check_return_wat_ _CRTIMP errno_t __cdecl _waccess_s(_In_z_ const wchar_t * _Filename, _In_ int _AccessMode);
_Check_return_ _CRTIMP int __cdecl _wchmod(_In_z_ const wchar_t * _Filename, _In_ int _Mode);
_Check_return_ _CRT_INSECURE_DEPRECATE(_wsopen_s) _CRTIMP int __cdecl _wcreat(_In_z_ const wchar_t * _Filename, _In_ int _PermissionMode);
_Check_return_ _CRTIMP intptr_t __cdecl _wfindfirst32(_In_z_ const wchar_t * _Filename, _Out_ struct _wfinddata32_t * _FindData);
_Check_return_ _CRTIMP int __cdecl _wfindnext32(_In_ intptr_t _FindHandle, _Out_ struct _wfinddata32_t * _FindData);
_Check_return_ _CRTIMP int __cdecl _wunlink(_In_z_ const wchar_t * _Filename);
_Check_return_ _CRTIMP int __cdecl _wrename(_In_z_ const wchar_t * _OldFilename, _In_z_ const wchar_t * _NewFilename);
_CRTIMP errno_t __cdecl _wmktemp_s(_Inout_updates_z_(_SizeInWords) wchar_t * _TemplateName, _In_ size_t _SizeInWords);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t, _wmktemp_s, _Deref_prepost_z_ wchar_t, _TemplateName)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(wchar_t *, __RETURN_POLICY_DST, _CRTIMP, _wmktemp, _Inout_z_, wchar_t, _TemplateName)
_CRTIMP intptr_t __cdecl _wfindfirst(const wchar_t *, struct _wfinddata_t *);
_CRTIMP int __cdecl _wfindnext(intptr_t, struct _wfinddata_t *);
_Check_return_ _CRTIMP intptr_t __cdecl _wfindfirst32i64(_In_z_ const wchar_t * _Filename, _Out_ struct _wfinddata32i64_t * _FindData);
_Check_return_ _CRTIMP intptr_t __cdecl _wfindfirst64i32(_In_z_ const wchar_t * _Filename, _Out_ struct _wfinddata64i32_t * _FindData);
_Check_return_ _CRTIMP intptr_t __cdecl _wfindfirst64(_In_z_ const wchar_t * _Filename, _Out_ struct _wfinddata64_t * _FindData);
_Check_return_ _CRTIMP int __cdecl _wfindnext32i64(_In_ intptr_t _FindHandle, _Out_ struct _wfinddata32i64_t * _FindData);
_Check_return_ _CRTIMP int __cdecl _wfindnext64i32(_In_ intptr_t _FindHandle, _Out_ struct _wfinddata64i32_t * _FindData);
_Check_return_ _CRTIMP int __cdecl _wfindnext64(_In_ intptr_t _FindHandle, _Out_ struct _wfinddata64_t * _FindData);
_CRTIMP intptr_t __cdecl _wfindfirsti64(const wchar_t *, struct _wfinddatai64_t *);
_CRTIMP int __cdecl _wfindnexti64(intptr_t, struct _wfinddatai64_t *);
_Check_return_wat_ _CRTIMP errno_t __cdecl _wsopen_s(_Out_ int * _FileHandle, _In_z_ const wchar_t * _Filename, _In_ int _OpenFlag, _In_ int _ShareFlag, _In_ int _PermissionFlag);
_CRTIMP _Check_return_ int __cdecl _wopen(_In_z_ const wchar_t * _Filename, _In_ int _OpenFlag, _In_ int _ModeFlag);
_CRTIMP int __cdecl _wsopen(_In_z_ const wchar_t * _Filename, _In_ int _OpenFlag, _In_ int _ShareFlag, _In_ int _ModeFlag);
int __cdecl __lock_fhandle(_In_ int _Filehandle);
void __cdecl _unlock_fhandle(_In_ int _Filehandle);
_CRTIMP intptr_t __cdecl _get_osfhandle(_In_ int _FileHandle);
_CRTIMP int __cdecl _open_osfhandle(_In_ intptr_t _OSFileHandle, _In_ int _Flags);
#pragma warning(push)
#pragma warning(disable: 4141)
_Check_return_ _CRT_NONSTDC_DEPRECATE(_access) _CRTIMP int __cdecl access(_In_z_ const char * _Filename, _In_ int _AccessMode);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_chmod) _CRTIMP int __cdecl chmod(_In_z_ const char * _Filename, int _AccessMode);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_chsize) _CRTIMP int __cdecl chsize(_In_ int _FileHandle, _In_ long _Size);
_Check_return_opt_ _CRT_NONSTDC_DEPRECATE(_close) _CRTIMP int __cdecl close(_In_ int _FileHandle);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_creat) _CRT_INSECURE_DEPRECATE(_sopen_s) _CRTIMP int __cdecl creat(_In_z_ const char * _Filename, _In_ int _PermissionMode);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_dup) _CRTIMP int __cdecl dup(_In_ int _FileHandle);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_dup2) _CRTIMP int __cdecl dup2(_In_ int _FileHandleSrc, _In_ int _FileHandleDst);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_eof) _CRTIMP int __cdecl eof(_In_ int _FileHandle);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_filelength) _CRTIMP long __cdecl filelength(_In_ int _FileHandle);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_isatty) _CRTIMP int __cdecl isatty(_In_ int _FileHandle);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_locking) _CRTIMP int __cdecl locking(_In_ int _FileHandle, _In_ int _LockMode, _In_ long _NumOfBytes);
_Check_return_opt_ _CRT_NONSTDC_DEPRECATE(_lseek) _CRTIMP long __cdecl lseek(_In_ int _FileHandle, _In_ long _Offset, _In_ int _Origin);
_CRT_NONSTDC_DEPRECATE(_mktemp) _CRT_INSECURE_DEPRECATE(_mktemp_s) _CRTIMP char * __cdecl mktemp(_Inout_z_ char * _TemplateName);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_open) _CRT_INSECURE_DEPRECATE(_sopen_s) _CRTIMP int __cdecl open(_In_z_ const char * _Filename, _In_ int _OpenFlag, ...);
_CRT_NONSTDC_DEPRECATE(_read) _CRTIMP int __cdecl read(int _FileHandle, _Out_writes_bytes_(_MaxCharCount) void * _DstBuf, _In_ unsigned int _MaxCharCount);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_setmode) _CRTIMP int __cdecl setmode(_In_ int _FileHandle, _In_ int _Mode);
_CRT_NONSTDC_DEPRECATE(_sopen) _CRT_INSECURE_DEPRECATE(_sopen_s) _CRTIMP int __cdecl sopen(const char * _Filename, _In_ int _OpenFlag, _In_ int _ShareFlag, ...);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_tell) _CRTIMP long __cdecl tell(_In_ int _FileHandle);
_CRT_NONSTDC_DEPRECATE(_umask) _CRT_INSECURE_DEPRECATE(_umask_s) _CRTIMP int __cdecl umask(_In_ int _Mode);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_write) _CRTIMP int __cdecl write(_In_ int _Filehandle, _In_reads_bytes_(_MaxCharCount) const void * _Buf, _In_ unsigned int _MaxCharCount);
#pragma warning(pop)
}
#pragma pack(pop)
