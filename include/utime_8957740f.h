       
#include <corecrt.h>
_CRT_BEGIN_C_HEADER
    struct _utimbuf
    {
        time_t actime;
        time_t modtime;
    };
struct __utimbuf32
{
    __time32_t actime;
    __time32_t modtime;
};
struct __utimbuf64
{
    __time64_t actime;
    __time64_t modtime;
};
_ACRTIMP int __cdecl _utime32(
    _In_z_ char const* _FileName,
    _In_opt_ struct __utimbuf32* _Time
    );
_ACRTIMP int __cdecl _futime32(
    _In_ int _FileHandle,
    _In_opt_ struct __utimbuf32* _Time
    );
_ACRTIMP int __cdecl _wutime32(
    _In_z_ wchar_t const* _FileName,
    _In_opt_ struct __utimbuf32* _Time
    );
_ACRTIMP int __cdecl _utime64(
    _In_z_ char const* _FileName,
    _In_opt_ struct __utimbuf64* _Time
    );
_ACRTIMP int __cdecl _futime64(
    _In_ int _FileHandle,
    _In_opt_ struct __utimbuf64* _Time
    );
_ACRTIMP int __cdecl _wutime64(
    _In_z_ wchar_t const* _FileName,
    _In_opt_ struct __utimbuf64* _Time
    );
        static __inline int __CRTDECL _utime(char const* const _FileName, struct _utimbuf* const _Time)
        {
            _STATIC_ASSERT(sizeof(struct _utimbuf) == sizeof(struct __utimbuf32));
            return _utime32(_FileName, (struct __utimbuf32*)_Time);
        }
        static __inline int __CRTDECL _futime(int const _FileHandle, struct _utimbuf* const _Time)
        {
            _STATIC_ASSERT(sizeof(struct _utimbuf) == sizeof(struct __utimbuf32));
            return _futime32(_FileHandle, (struct __utimbuf32*)_Time);
        }
        static __inline int __CRTDECL _wutime(wchar_t const* const _FileName, struct _utimbuf* const _Time)
        {
            _STATIC_ASSERT(sizeof(struct _utimbuf) == sizeof(struct __utimbuf32));
            return _wutime32(_FileName, (struct __utimbuf32*)_Time);
        }
_CRT_END_C_HEADER
