#include <new>
#include <crtdefs.h>
       
typedef void (__cdecl * new_handler) ();
_CRTIMP new_handler __cdecl set_new_handler(_In_opt_ new_handler _NewHandler) throw();
namespace std {
struct nothrow_t { };
extern const nothrow_t nothrow;
}
_Ret_maybenull_ _Post_writable_byte_size_(_Size) void *__CRTDECL operator new(size_t _Size, const std::nothrow_t&) throw();
_Ret_maybenull_ _Post_writable_byte_size_(_Size) void *__CRTDECL operator new[](size_t _Size, const std::nothrow_t&) throw();
void __CRTDECL operator delete(_Pre_maybenull_ void *, const std::nothrow_t&) throw();
void __CRTDECL operator delete[](_Pre_maybenull_ void *, const std::nothrow_t&) throw();
inline void *__CRTDECL operator new(size_t, void *_Where)
        {return (_Where); }
_CRTIMP int __cdecl _query_new_mode( void );
_CRTIMP int __cdecl _set_new_mode( _In_ int _NewMode);
typedef int (__clrcall * _PNH)( size_t );
_CRTIMP _PNH __cdecl _query_new_handler( void );
_CRTIMP _PNH __cdecl _set_new_handler( _In_opt_ _PNH _NewHandler);
       
