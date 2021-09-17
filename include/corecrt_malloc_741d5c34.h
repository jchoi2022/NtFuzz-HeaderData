       
#include <corecrt.h>
_CRT_BEGIN_C_HEADER
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Count * _Size)
_ACRTIMP _CRTALLOCATOR _CRTRESTRICT
void* __cdecl _calloc_base(
    _In_ size_t _Count,
    _In_ size_t _Size
    );
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Count * _Size)
_ACRTIMP _CRT_JIT_INTRINSIC _CRTALLOCATOR _CRTRESTRICT _CRT_HYBRIDPATCHABLE
void* __cdecl calloc(
    _In_ _CRT_GUARDOVERFLOW size_t _Count,
    _In_ _CRT_GUARDOVERFLOW size_t _Size
    );
_Check_return_
_ACRTIMP int __cdecl _callnewh(
    _In_ size_t _Size
    );
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Size)
_ACRTIMP _CRTALLOCATOR _CRT_HYBRIDPATCHABLE
void* __cdecl _expand(
    _Pre_notnull_ void* _Block,
    _In_ _CRT_GUARDOVERFLOW size_t _Size
    );
_ACRTIMP
void __cdecl _free_base(
    _Pre_maybenull_ _Post_invalid_ void* _Block
    );
_ACRTIMP _CRT_HYBRIDPATCHABLE
void __cdecl free(
    _Pre_maybenull_ _Post_invalid_ void* _Block
    );
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Size)
_ACRTIMP _CRTALLOCATOR _CRTRESTRICT
void* __cdecl _malloc_base(
    _In_ size_t _Size
    );
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Size)
_ACRTIMP _CRTALLOCATOR _CRT_JIT_INTRINSIC _CRTRESTRICT _CRT_HYBRIDPATCHABLE
void* __cdecl malloc(
    _In_ _CRT_GUARDOVERFLOW size_t _Size
    );
_Check_return_
_ACRTIMP
size_t __cdecl _msize_base(
    _Pre_notnull_ void* _Block
    );
_Check_return_
_ACRTIMP _CRT_HYBRIDPATCHABLE
size_t __cdecl _msize(
    _Pre_notnull_ void* _Block
    );
_Success_(return != 0) _Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Size)
_ACRTIMP _CRTALLOCATOR _CRTRESTRICT
void* __cdecl _realloc_base(
    _Pre_maybenull_ _Post_invalid_ void* _Block,
    _In_ size_t _Size
    );
_Success_(return != 0) _Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Size)
_ACRTIMP _CRTALLOCATOR _CRTRESTRICT _CRT_HYBRIDPATCHABLE
void* __cdecl realloc(
    _Pre_maybenull_ _Post_invalid_ void* _Block,
    _In_ _CRT_GUARDOVERFLOW size_t _Size
    );
_Success_(return != 0) _Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Count * _Size)
_ACRTIMP _CRTALLOCATOR _CRTRESTRICT
void* __cdecl _recalloc_base(
    _Pre_maybenull_ _Post_invalid_ void* _Block,
    _In_ size_t _Count,
    _In_ size_t _Size
    );
_Success_(return != 0) _Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Count * _Size)
_ACRTIMP _CRTALLOCATOR _CRTRESTRICT
void* __cdecl _recalloc(
    _Pre_maybenull_ _Post_invalid_ void* _Block,
    _In_ _CRT_GUARDOVERFLOW size_t _Count,
    _In_ _CRT_GUARDOVERFLOW size_t _Size
    );
_ACRTIMP
void __cdecl _aligned_free(
    _Pre_maybenull_ _Post_invalid_ void* _Block
    );
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Size)
_ACRTIMP _CRTALLOCATOR _CRTRESTRICT
void* __cdecl _aligned_malloc(
    _In_ _CRT_GUARDOVERFLOW size_t _Size,
    _In_ size_t _Alignment
    );
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Size)
_ACRTIMP _CRTALLOCATOR _CRTRESTRICT
void* __cdecl _aligned_offset_malloc(
    _In_ _CRT_GUARDOVERFLOW size_t _Size,
    _In_ size_t _Alignment,
    _In_ size_t _Offset
    );
_Check_return_
_ACRTIMP
size_t __cdecl _aligned_msize(
    _Pre_notnull_ void* _Block,
    _In_ size_t _Alignment,
    _In_ size_t _Offset
    );
_Success_(return != 0) _Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Size)
_ACRTIMP _CRTALLOCATOR _CRTRESTRICT
void* __cdecl _aligned_offset_realloc(
    _Pre_maybenull_ _Post_invalid_ void* _Block,
    _In_ _CRT_GUARDOVERFLOW size_t _Size,
    _In_ size_t _Alignment,
    _In_ size_t _Offset
    );
_Success_(return != 0) _Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Count * _Size)
_ACRTIMP _CRTALLOCATOR _CRTRESTRICT
void* __cdecl _aligned_offset_recalloc(
    _Pre_maybenull_ _Post_invalid_ void* _Block,
    _In_ _CRT_GUARDOVERFLOW size_t _Count,
    _In_ _CRT_GUARDOVERFLOW size_t _Size,
    _In_ size_t _Alignment,
    _In_ size_t _Offset
    );
_Success_(return != 0) _Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Size)
_ACRTIMP _CRTALLOCATOR _CRTRESTRICT
void* __cdecl _aligned_realloc(
    _Pre_maybenull_ _Post_invalid_ void* _Block,
    _In_ _CRT_GUARDOVERFLOW size_t _Size,
    _In_ size_t _Alignment
    );
_Success_(return != 0) _Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Count * _Size)
_ACRTIMP _CRTALLOCATOR _CRTRESTRICT
void* __cdecl _aligned_recalloc(
    _Pre_maybenull_ _Post_invalid_ void* _Block,
    _In_ _CRT_GUARDOVERFLOW size_t _Count,
    _In_ _CRT_GUARDOVERFLOW size_t _Size,
    _In_ size_t _Alignment
    );
_CRT_END_C_HEADER
