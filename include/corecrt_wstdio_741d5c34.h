       
#include <corecrt.h>
#include <corecrt_stdio_config.h>
_CRT_BEGIN_C_HEADER
    #define _FILE_DEFINED
    typedef struct _iobuf
    {
        void* _Placeholder;
    } FILE;
_ACRTIMP_ALT FILE* __cdecl __acrt_iob_func(unsigned _Ix);
_CRT_END_C_HEADER
