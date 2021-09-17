#include <crtdefs.h>
extern "C" {
namespace std { typedef decltype(__nullptr) nullptr_t; }
using ::std::nullptr_t;
extern int gbl_errno;
_CRTIMP_ALT
errno_t
__ALTDECL
_set_errno(
    _In_ int _Value
    );
_CRTIMP_ALT
errno_t
__ALTDECL
_get_errno(
    _Out_ int * _Value
    );
_CRTIMP_ALT unsigned long __cdecl __threadid(void);
_CRTIMP_ALT uintptr_t __cdecl __threadhandle(void);
}
