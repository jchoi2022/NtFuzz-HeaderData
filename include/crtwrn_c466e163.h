       
#include <crtdefs.h>
    message("" __FILE__ "(" _CRT_STRINGIZE(__LINE__) ") : " \
    "warning CRT" _CRT_STRINGIZE(_Number) ": " _CRT_STRINGIZE(_Description))
    __CRT_WARNING( _CRTWRN_WNUMBER_##_Id, _CRTWRN_MESSAGE_##_Id )
       'explicit' keyword not recognized
        You cannot use 32-bit time_t with _WIN64
        control routines not defined for this platform
        supported in retail builds.\n \
        Setting _HAS_ITERA##TOR_DEBUGGING=0
        supported while building with /clr or /clr:pure
        and status words is not reliable in managed code
