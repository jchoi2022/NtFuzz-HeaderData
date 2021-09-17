#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <stddef.h>
#include <stdlib.h>
#include <sdkddkver.h>
#include <objbase.h>
#include <windef.h>
#include <winbase.h>
#include <tchar.h>
#include <stdarg.h>
#include <winerror.h>
#include <wingdi.h>
#include <winddi.h>
#include <excpt.h>
#include <winspool.h>
#include <windows.h>
#include <compstui.h>
#include <winddiui.h>
#include <stdio.h>
extern "C" {
typedef long LONG_PTR, *PLONG_PTR;
typedef unsigned long ULONG_PTR, *PULONG_PTR;
typedef int INT_PTR, *PINT_PTR;
typedef unsigned int UINT_PTR, *PUINT_PTR;
typedef ULONG_PTR DWORD_PTR, *PDWORD_PTR;
#include <printoem.h>
#include <prntfont.h>
    (((j) == SHIFTJIS_CHARSET) || \
    ((j) == HANGEUL_CHARSET) || \
    ((j) == JOHAB_CHARSET) || \
    ((j) == GB2312_CHARSET) || \
    ((j) == CHINESEBIG5_CHARSET))
    (((j) == 932) || \
    ((j) == 936) || \
    ((j) == 949) || \
    ((j) == 950) || \
    ((j) == 1361))
}
#endif
#pragma endregion
