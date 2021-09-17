       
#include <corecrt.h>
        
#pragma message(_CRT_WARNING_MESSAGE("UCRT4000", \
    "The Universal CRT implementation of tgmath.h does not conform to the C99 standard. " \
    "Functionality equivalent to the type-generic functions provided by tgmath.h is available " \
    "in <ctgmath> when compiling as C++. " \
    "If compiling in C++17 mode or higher (/std:c++17), this header will automatically include <ctgmath> instead. " \
    "You can define _CRT_SILENCE_NONCONFORMING_TGMATH_H to acknowledge that you have received this warning."))
#include <math.h>
#include <complex.h>
