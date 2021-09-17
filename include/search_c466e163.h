#include <crtdefs.h>
#include <stddef.h>
extern "C" {
_Check_return_ _CRTIMP void * __cdecl bsearch(_In_ const void * _Key, _In_reads_bytes_(_NumOfElements * _SizeOfElements) const void * _Base,
        _In_ size_t _NumOfElements, _In_ size_t _SizeOfElements,
        _In_ int (__cdecl * _PtFuncCompare)(const void *, const void *));
_CRTIMP void __cdecl qsort(_Inout_updates_bytes_(_NumOfElements * _SizeOfElements) void * _Base,
 _In_ size_t _NumOfElements, _In_ size_t _SizeOfElements,
        _In_ int (__cdecl * _PtFuncCompare)(const void *, const void *));
_Check_return_ _CRTIMP void * __cdecl _lfind_s(_In_ const void * _Key, _In_reads_bytes_((*_NumOfElements) * _SizeOfElements) const void * _Base,
        _Inout_ unsigned int * _NumOfElements, _In_ size_t _SizeOfElements,
        _In_ int (__cdecl * _PtFuncCompare)(void *, const void *, const void *), void * _Context);
_Check_return_ _CRTIMP void * __cdecl _lfind(_In_ const void * _Key, _In_reads_bytes_((*_NumOfElements) * _SizeOfElements) const void * _Base,
        _Inout_ unsigned int * _NumOfElements, _In_ unsigned int _SizeOfElements,
 _In_ int (__cdecl * _PtFuncCompare)(const void *, const void *));
_Check_return_ _CRTIMP void * __cdecl _lsearch_s(_In_ const void * _Key, _Inout_updates_bytes_((*_NumOfElements ) * _SizeOfElements) void * _Base,
        _Inout_ unsigned int * _NumOfElements, _In_ size_t _SizeOfElements,
 _In_ int (__cdecl * _PtFuncCompare)(void *, const void *, const void *), void * _Context);
_Check_return_ _CRTIMP void * __cdecl _lsearch(_In_ const void * _Key, _Inout_updates_bytes_((*_NumOfElements ) * _SizeOfElements) void * _Base,
        _Inout_ unsigned int * _NumOfElements, _In_ unsigned int _SizeOfElements,
 _In_ int (__cdecl * _PtFuncCompare)(const void *, const void *));
_Check_return_ _CRTIMP _CRT_NONSTDC_DEPRECATE(_lfind) void * __cdecl lfind(_In_ const void * _Key, _In_reads_bytes_((*_NumOfElements) * _SizeOfElements) const void * _Base,
        _Inout_ unsigned int * _NumOfElements, _In_ unsigned int _SizeOfElements,
 _In_ int (__cdecl * _PtFuncCompare)(const void *, const void *));
_Check_return_ _CRTIMP _CRT_NONSTDC_DEPRECATE(_lsearch) void * __cdecl lsearch(_In_ const void * _Key, _Inout_updates_bytes_((*_NumOfElements) * _SizeOfElements) void * _Base,
        _Inout_ unsigned int * _NumOfElements, _In_ unsigned int _SizeOfElements,
 _In_ int (__cdecl * _PtFuncCompare)(const void *, const void *));
}
