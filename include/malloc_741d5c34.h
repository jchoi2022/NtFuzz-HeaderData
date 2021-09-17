       
#include <corecrt.h>
#include <corecrt_malloc.h>
_CRT_BEGIN_C_HEADER
    #define _HEAP_MAXREQ 0xFFFFFFFFFFFFFFE0
typedef struct _heapinfo
{
    int* _pentry;
    size_t _size;
    int _useflag;
} _HEAPINFO;
_Ret_notnull_ _Post_writable_byte_size_(_Size)
void* __cdecl _alloca(_In_ size_t _Size);
    _ACRTIMP intptr_t __cdecl _get_heap_handle(void);
    _Check_return_
    _DCRTIMP int __cdecl _heapmin(void);
        _Check_return_ _DCRTIMP int __cdecl _heapchk(void);
    _DCRTIMP int __cdecl _resetstkoflw(void);
    #define _ALLOCA_S_THRESHOLD 1024
    #define _ALLOCA_S_STACK_MARKER 0xCCCC
    #define _ALLOCA_S_HEAP_MARKER 0xDDDD
        #define _ALLOCA_S_MARKER_SIZE 16
    _STATIC_ASSERT(sizeof(unsigned int) <= _ALLOCA_S_MARKER_SIZE);
    #pragma warning(push)
    #pragma warning(disable:6540)
    __inline void* _MarkAllocaS(_Out_opt_ __crt_typefix(unsigned int*) void* _Ptr, unsigned int _Marker)
    {
        if (_Ptr)
        {
            *((unsigned int*)_Ptr) = _Marker;
            _Ptr = (char*)_Ptr + _ALLOCA_S_MARKER_SIZE;
        }
        return _Ptr;
    }
    __inline size_t _MallocaComputeSize(size_t _Size)
    {
        size_t _MarkedSize = _Size + _ALLOCA_S_MARKER_SIZE;
        return _MarkedSize > _Size ? _MarkedSize : 0;
    }
    #pragma warning(pop)
        #undef _malloca
        #define _malloca(size) \
            __pragma(warning(suppress: 6255 6386)) \
            (_MallocaComputeSize(size) != 0 \
                ? _MarkAllocaS(malloc(_MallocaComputeSize(size)), _ALLOCA_S_HEAP_MARKER) \
                : NULL)
    #undef _freea
    #pragma warning(push)
    #pragma warning(disable: 6014)
    __inline void __CRTDECL _freea(_Pre_maybenull_ _Post_invalid_ void* _Memory)
    {
        unsigned int _Marker;
        if (_Memory)
        {
            _Memory = (char*)_Memory - _ALLOCA_S_MARKER_SIZE;
            _Marker = *(unsigned int*)_Memory;
            if (_Marker == _ALLOCA_S_HEAP_MARKER)
            {
                free(_Memory);
            }
            else if (_Marker != _ALLOCA_S_STACK_MARKER)
            {
                _ASSERTE(("Corrupted pointer passed to _freea" && 0));
            }
        }
    }
    #pragma warning(pop)
_CRT_END_C_HEADER
