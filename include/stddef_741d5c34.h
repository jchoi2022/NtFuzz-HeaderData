       
#include <corecrt.h>
_CRT_BEGIN_C_HEADER
    namespace std
    {
        typedef decltype(__nullptr) nullptr_t;
    }
    using ::std::nullptr_t;
    #define offsetof(s,m) __builtin_offsetof(s,m)
_ACRTIMP extern unsigned long __cdecl __threadid(void);
_ACRTIMP extern uintptr_t __cdecl __threadhandle(void);
_CRT_END_C_HEADER
