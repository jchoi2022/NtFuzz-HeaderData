#include <crtdefs.h>
extern "C" {
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
}
