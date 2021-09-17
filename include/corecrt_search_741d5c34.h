       
#include <corecrt.h>
#include <stddef.h>
_CRT_BEGIN_C_HEADER
    typedef int (__cdecl* _CoreCrtSecureSearchSortCompareFunction)(void*, void const*, void const*);
    typedef int (__cdecl* _CoreCrtNonSecureSearchSortCompareFunction)(void const*, void const*);
_Check_return_
_ACRTIMP void* __cdecl bsearch(
    _In_ void const* _Key,
    _In_reads_bytes_(_NumOfElements * _SizeOfElements) void const* _Base,
    _In_ size_t _NumOfElements,
    _In_ size_t _SizeOfElements,
    _In_ _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction
    );
_ACRTIMP void __cdecl qsort(
    _Inout_updates_bytes_(_NumOfElements * _SizeOfElements) void* _Base,
    _In_ size_t _NumOfElements,
    _In_ size_t _SizeOfElements,
    _In_ _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction
    );
_Check_return_
_ACRTIMP void* __cdecl _lfind_s(
    _In_ void const* _Key,
    _In_reads_bytes_((*_NumOfElements) * _SizeOfElements) void const* _Base,
    _Inout_ unsigned int* _NumOfElements,
    _In_ size_t _SizeOfElements,
    _In_ _CoreCrtSecureSearchSortCompareFunction _CompareFunction,
    _In_ void* _Context
    );
_Check_return_
_ACRTIMP void* __cdecl _lfind(
    _In_ void const* _Key,
    _In_reads_bytes_((*_NumOfElements) * _SizeOfElements) void const* _Base,
    _Inout_ unsigned int* _NumOfElements,
    _In_ unsigned int _SizeOfElements,
    _In_ _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction
    );
_Check_return_
_ACRTIMP void* __cdecl _lsearch_s(
    _In_ void const* _Key,
    _Inout_updates_bytes_((*_NumOfElements ) * _SizeOfElements) void* _Base,
    _Inout_ unsigned int* _NumOfElements,
    _In_ size_t _SizeOfElements,
    _In_ _CoreCrtSecureSearchSortCompareFunction _CompareFunction,
    _In_ void* _Context
    );
_Check_return_
_ACRTIMP void* __cdecl _lsearch(
    _In_ void const* _Key,
    _Inout_updates_bytes_((*_NumOfElements ) * _SizeOfElements) void* _Base,
    _Inout_ unsigned int* _NumOfElements,
    _In_ unsigned int _SizeOfElements,
    _In_ _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction
    );
_CRT_END_C_HEADER
