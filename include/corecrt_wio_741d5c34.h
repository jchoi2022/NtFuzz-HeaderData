       
#include <corecrt.h>
#include <corecrt_share.h>
_CRT_BEGIN_C_HEADER
#pragma warning(push)
#pragma warning(disable:4820)
    #define _wfinddata_t _wfinddata32_t
    #define _wfinddatai64_t _wfinddata32i64_t
typedef unsigned long _fsize_t;
struct _wfinddata32_t
{
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    _fsize_t size;
    wchar_t name[260];
};
struct _wfinddata32i64_t
{
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    __int64 size;
    wchar_t name[260];
};
struct _wfinddata64i32_t
{
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    _fsize_t size;
    wchar_t name[260];
};
struct _wfinddata64_t
{
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    __int64 size;
    wchar_t name[260];
};
    #define _wfindfirst _wfindfirst32
    #define _wfindnext _wfindnext32
    #define _wfindfirsti64 _wfindfirst32i64
    #define _wfindnexti64 _wfindnext32i64
_Check_return_
_ACRTIMP int __cdecl _waccess(
    _In_z_ wchar_t const* _FileName,
    _In_ int _AccessMode
    );
_Check_return_wat_
_ACRTIMP errno_t __cdecl _waccess_s(
    _In_z_ wchar_t const* _FileName,
    _In_ int _AccessMode
    );
_Check_return_
_ACRTIMP int __cdecl _wchmod(
    _In_z_ wchar_t const* _FileName,
    _In_ int _Mode
    );
_Check_return_ _CRT_INSECURE_DEPRECATE(_wsopen_s)
_ACRTIMP int __cdecl _wcreat(
    _In_z_ wchar_t const* _FileName,
    _In_ int _PermissionMode
    );
_Success_(return != -1)
_Check_return_
_ACRTIMP intptr_t __cdecl _wfindfirst32(
    _In_z_ wchar_t const* _FileName,
    _Out_ struct _wfinddata32_t* _FindData
    );
_Success_(return != -1)
_Check_return_
_ACRTIMP int __cdecl _wfindnext32(
    _In_ intptr_t _FindHandle,
    _Out_ struct _wfinddata32_t* _FindData
    );
_ACRTIMP int __cdecl _wunlink(
    _In_z_ wchar_t const* _FileName
    );
_Check_return_
_ACRTIMP int __cdecl _wrename(
    _In_z_ wchar_t const* _OldFileName,
    _In_z_ wchar_t const* _NewFileName
    );
_ACRTIMP errno_t __cdecl _wmktemp_s(
    _Inout_updates_z_(_SizeInWords) wchar_t* _TemplateName,
    _In_ size_t _SizeInWords
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(
    errno_t, _wmktemp_s,
    wchar_t, _TemplateName
    )
_Success_(return != 0)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(
    wchar_t*, __RETURN_POLICY_DST, _ACRTIMP, _wmktemp,
    _Inout_z_, wchar_t, _TemplateName
    )
_Success_(return != -1)
_Check_return_
_ACRTIMP intptr_t __cdecl _wfindfirst32i64(
    _In_z_ wchar_t const* _FileName,
    _Out_ struct _wfinddata32i64_t* _FindData
    );
_Success_(return != -1)
_Check_return_
_ACRTIMP intptr_t __cdecl _wfindfirst64i32(
    _In_z_ wchar_t const* _FileName,
    _Out_ struct _wfinddata64i32_t* _FindData
    );
_Success_(return != -1)
_Check_return_
_ACRTIMP intptr_t __cdecl _wfindfirst64(
    _In_z_ wchar_t const* _FileName,
    _Out_ struct _wfinddata64_t* _FindData
    );
_Success_(return != -1)
_Check_return_
_ACRTIMP int __cdecl _wfindnext32i64(
    _In_ intptr_t _FindHandle,
    _Out_ struct _wfinddata32i64_t* _FindData
    );
_Success_(return != -1)
_Check_return_
_ACRTIMP int __cdecl _wfindnext64i32(
    _In_ intptr_t _FindHandle,
    _Out_ struct _wfinddata64i32_t* _FindData
    );
_Success_(return != -1)
_Check_return_
_ACRTIMP int __cdecl _wfindnext64(
    _In_ intptr_t _FindHandle,
    _Out_ struct _wfinddata64_t* _FindData
    );
_Check_return_wat_
_ACRTIMP errno_t __cdecl _wsopen_s(
    _Out_ int* _FileHandle,
    _In_z_ wchar_t const* _FileName,
    _In_ int _OpenFlag,
    _In_ int _ShareFlag,
    _In_ int _PermissionFlag
    );
_ACRTIMP errno_t __cdecl _wsopen_dispatch(
    _In_z_ wchar_t const* _FileName,
    _In_ int _OFlag,
    _In_ int _ShFlag,
    _In_ int _PMode,
    _Out_ int* _PFileHandle,
    _In_ int _BSecure
    );
    _Check_return_ _CRT_INSECURE_DEPRECATE(_wsopen_s)
    _ACRTIMP int __cdecl _wopen(
        _In_z_ wchar_t const* _FileName,
        _In_ int _OpenFlag,
        ...);
    _Check_return_ _CRT_INSECURE_DEPRECATE(_wsopen_s)
    _ACRTIMP int __cdecl _wsopen(
        _In_z_ wchar_t const* _FileName,
        _In_ int _OpenFlag,
        _In_ int _ShareFlag,
        ...);
#pragma warning(pop)
_CRT_END_C_HEADER
