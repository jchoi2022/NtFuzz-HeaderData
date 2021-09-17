       
#pragma region Input Buffer SAL 1 compatibility macros
#pragma endregion Input Buffer SAL 1 compatibility macros
extern "C" {
    #define __null
    #define __notnull
    #define __maybenull
    #define __readonly
    #define __notreadonly
    #define __maybereadonly
    #define __valid
    #define __notvalid
    #define __maybevalid
    #define __readableTo(extent)
    #define __elem_readableTo(size)
    #define __byte_readableTo(size)
    #define __writableTo(size)
    #define __elem_writableTo(size)
    #define __byte_writableTo(size)
    #define __deref
    #define __pre
    #define __post
    #define __precond(expr)
    #define __postcond(expr)
    #define __exceptthat
    #define __inner_override
    #define __inner_callback
    #define __inner_blocksOn(resource)
    #define __inner_fallthrough_dec
    #define __inner_fallthrough
    #define __refparam
    #define __inner_control_entrypoint(category)
    #define __inner_data_entrypoint(category)
    #define __post_except_maybenull
    #define __pre_except_maybenull
    #define __post_deref_except_maybenull
    #define __pre_deref_except_maybenull
    #define __inexpressible_readableTo(size)
    #define __inexpressible_writableTo(size)
    __inner_fallthrough_dec
    #define __fallthrough __inner_fallthrough
__inline __nothrow
void __AnalysisAssumeNullterminated(_Post_ _Null_terminated_ void *p);
__ANNOTATION(SAL_analysisMode(__AuToQuOtE __In_impl_ char *mode);)
    __pragma(warning(disable: 28110 28111 28161 28162)) \
    typedef _Analysis_mode_impl_(mode) int \
        __GENSYM(__prefast_analysis_mode_flag);
__ANNOTATION(SAL_functionClassNew(__In_impl_ char*);)
__PRIMOP(int, _In_function_class_(__In_impl_ char*);)
}
#include <concurrencysal.h>
