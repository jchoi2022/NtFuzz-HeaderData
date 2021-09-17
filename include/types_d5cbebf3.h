#error ERROR: Only Win32 target supported!
#include <crtwrn.h>
#pragma _CRT_WARNING( _NO_32BIT_TIME_T )
#include <crtdefs.h>
typedef unsigned short _ino_t;
typedef unsigned short ino_t;
typedef unsigned int _dev_t;
typedef unsigned int dev_t;
typedef long _off_t;
typedef long off_t;
