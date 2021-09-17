#include <limits.h>
#pragma pack(push,_CRT_PACKING)
extern "C" {
typedef struct _heapinfo {
        int * _pentry;
        size_t _size;
        int _useflag;
        } _HEAPINFO;
extern _CRT_INSECURE_DEPRECATE_GLOBALS(_get_amblksiz) unsigned int _amblksiz;
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Count*_Size) _CRTIMP _CRT_JIT_INTRINSIC _CRTNOALIAS _CRTRESTRICT void * __cdecl calloc(_In_ size_t _Count, _In_ size_t _Size);
_CRTIMP _CRTNOALIAS void __cdecl free(_Pre_maybenull_ _Post_invalid_ void * _Memory);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Size) _CRTIMP _CRT_JIT_INTRINSIC _CRTNOALIAS _CRTRESTRICT void * __cdecl malloc(_In_ size_t _Size);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_NewSize) _CRTIMP _CRTNOALIAS _CRTRESTRICT void * __cdecl realloc(_Pre_maybenull_ _Post_invalid_ void * _Memory, _In_ size_t _NewSize);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Count*_Size) _CRTIMP _CRTNOALIAS _CRTRESTRICT void * __cdecl _recalloc(_Pre_maybenull_ _Post_invalid_ void * _Memory, _In_ size_t _Count, _In_ size_t _Size);
_CRTIMP _CRTNOALIAS void __cdecl _aligned_free(_Pre_maybenull_ _Post_invalid_ void * _Memory);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Size) _CRTIMP _CRTNOALIAS _CRTRESTRICT void * __cdecl _aligned_malloc(_In_ size_t _Size, _In_ size_t _Alignment);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Size) _CRTIMP _CRTNOALIAS _CRTRESTRICT void * __cdecl _aligned_offset_malloc(_In_ size_t _Size, _In_ size_t _Alignment, _In_ size_t _Offset);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_NewSize) _CRTIMP _CRTNOALIAS _CRTRESTRICT void * __cdecl _aligned_realloc(_Pre_maybenull_ _Post_invalid_ void * _Memory, _In_ size_t _NewSize, _In_ size_t _Alignment);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Count*_Size) _CRTIMP _CRTNOALIAS _CRTRESTRICT void * __cdecl _aligned_recalloc(_Pre_maybenull_ _Post_invalid_ void * _Memory, _In_ size_t _Count, _In_ size_t _Size, _In_ size_t _Alignment);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_NewSize) _CRTIMP _CRTNOALIAS _CRTRESTRICT void * __cdecl _aligned_offset_realloc(_Pre_maybenull_ _Post_invalid_ void * _Memory, _In_ size_t _NewSize, _In_ size_t _Alignment, _In_ size_t _Offset);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Count*_Size) _CRTIMP _CRTNOALIAS _CRTRESTRICT void * __cdecl _aligned_offset_recalloc(_Pre_maybenull_ _Post_invalid_ void * _Memory, _In_ size_t _Count, _In_ size_t _Size, _In_ size_t _Alignment, _In_ size_t _Offset);
_Check_return_ _CRTIMP size_t __cdecl _aligned_msize(_In_ void * _Memory, _In_ size_t _Alignment, _In_ size_t _Offset);
int __cdecl _resetstkoflw (void);
int __cdecl _resetstkoflw_downlevel(void);
unsigned long __cdecl _set_malloc_crt_max_wait(_In_ unsigned long _NewValue);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_NewSize) _CRTIMP void * __cdecl _expand(_In_opt_ void * _Memory, _In_ size_t _NewSize);
_Check_return_ _CRTIMP size_t __cdecl _msize(_In_ void * _Memory);
                   _Ret_notnull_ _Post_writable_byte_size_(_Size) void * __cdecl _alloca(_In_ size_t _Size);
_Check_return_ _CRTIMP size_t __cdecl _get_sbh_threshold(void);
_CRTIMP int __cdecl _set_sbh_threshold(_In_ size_t _NewValue);
_CRTIMP errno_t __cdecl _set_amblksiz(_In_ size_t _Value);
_CRTIMP errno_t __cdecl _get_amblksiz(_Out_ size_t * _Value);
_Check_return_ _CRTIMP int __cdecl _heapadd(_In_ void * _Memory, _In_ size_t _Size);
_Check_return_ _CRTIMP int __cdecl _heapchk(void);
_Check_return_ _CRTIMP int __cdecl _heapmin(void);
_CRTIMP int __cdecl _heapset(_In_ unsigned int _Fill);
_CRTIMP _CRT_MANAGED_HEAP_DEPRECATE int __cdecl _heapwalk(_Inout_ _HEAPINFO * _EntryInfo);
_CRTIMP size_t __cdecl _heapused(size_t * _Used, size_t * _Commit);
_CRTIMP intptr_t __cdecl _get_heap_handle(void);
_STATIC_ASSERT(sizeof(unsigned int) <= _ALLOCA_S_MARKER_SIZE);
#pragma warning(push)
#pragma warning(disable:4616)
#pragma warning(disable:6540)
__inline void *_MarkAllocaS(_Out_opt_ __crt_typefix(unsigned int*) void *_Ptr, unsigned int _Marker)
{
    if (_Ptr)
    {
        *((unsigned int*)_Ptr) = _Marker;
        _Ptr = (char*)_Ptr + _ALLOCA_S_MARKER_SIZE;
    }
    return _Ptr;
}
#pragma warning(pop)
 __pragma(warning(suppress: 6255)) \
 ((((size) + _ALLOCA_S_MARKER_SIZE) > (size)) ? \
    (((((size) + _ALLOCA_S_MARKER_SIZE) <= _ALLOCA_S_THRESHOLD) ? \
        _MarkAllocaS(_alloca((size) + _ALLOCA_S_MARKER_SIZE), _ALLOCA_S_STACK_MARKER) : \
        _MarkAllocaS(malloc((size) + _ALLOCA_S_MARKER_SIZE), _ALLOCA_S_HEAP_MARKER))) \
 : NULL)
#pragma prefast(suppress: __WARNING_MEMORY_LEAK)
_CRTNOALIAS __inline void __CRTDECL _freea(_Pre_maybenull_ _Post_invalid_ void * _Memory)
{
    unsigned int _Marker;
    if (_Memory)
    {
        _Memory = (char*)_Memory - _ALLOCA_S_MARKER_SIZE;
        _Marker = *(unsigned int *)_Memory;
        if (_Marker == _ALLOCA_S_HEAP_MARKER)
        {
            free(_Memory);
        }
    }
}
typedef int (__cdecl * _HEAPHOOK)(int, size_t, void *, void **);
_CRTIMP _HEAPHOOK __cdecl _setheaphook(_In_opt_ _HEAPHOOK _NewHook);
}
#pragma pack(pop)
