       
#include <corecrt.h>
#include <errno.h>
#include <vcruntime_string.h>
_CRT_BEGIN_C_HEADER
    #define _CRT_MEMCPY_S_INLINE static __inline
    { \
        int _Expr_val=!!(expr); \
        if (!(_Expr_val)) \
        { \
            errno = errorcode; \
            _invalid_parameter_noinfo(); \
            return errorcode; \
        } \
    }
_CRT_END_C_HEADER
