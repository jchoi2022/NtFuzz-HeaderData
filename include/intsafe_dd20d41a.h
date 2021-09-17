#include <winapifamily.h>
#pragma region Application Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#include <specstrings.h>
typedef char CHAR;
typedef signed char INT8;
typedef unsigned char UCHAR;
typedef unsigned char UINT8;
typedef unsigned char BYTE;
typedef short SHORT;
typedef signed short INT16;
typedef unsigned short USHORT;
typedef unsigned short UINT16;
typedef unsigned short WORD;
typedef int INT;
typedef signed int INT32;
typedef unsigned int UINT;
typedef unsigned int UINT32;
typedef long LONG;
typedef unsigned long ULONG;
typedef unsigned long DWORD;
typedef __int64 LONGLONG;
typedef __int64 LONG64;
typedef signed __int64 INT64;
typedef unsigned __int64 ULONGLONG;
typedef unsigned __int64 DWORDLONG;
typedef unsigned __int64 ULONG64;
typedef unsigned __int64 DWORD64;
typedef unsigned __int64 UINT64;
typedef __int64 INT_PTR;
typedef unsigned __int64 UINT_PTR;
typedef __int64 LONG_PTR;
typedef unsigned __int64 ULONG_PTR;
typedef __int64 ptrdiff_t;
typedef unsigned __int64 size_t;
typedef ULONG_PTR DWORD_PTR;
typedef LONG_PTR SSIZE_T;
typedef ULONG_PTR SIZE_T;
extern "C" {
ULONG64
UnsignedMultiply128(
    _In_ ULONGLONG ullMultiplicand,
    _In_ ULONGLONG ullMultiplier,
    _Out_ _Deref_out_range_(==, ullMultiplicand * ullMultiplier) ULONGLONG* pullResultHigh);
#pragma intrinsic(_umul128)
}
typedef _Return_type_success_(return >= 0) long HRESULT;
#error Must define a target architecture.
C_ASSERT(sizeof(USHORT) == 2);
C_ASSERT(sizeof(INT) == 4);
C_ASSERT(sizeof(UINT) == 4);
C_ASSERT(sizeof(LONG) == 4);
C_ASSERT(sizeof(ULONG) == 4);
C_ASSERT(sizeof(UINT_PTR) == sizeof(ULONG_PTR));
_Must_inspect_result_
__inline
HRESULT
Int8ToUChar(
    _In_ INT8 i8Operand,
    _Out_ _Deref_out_range_(==, i8Operand) UCHAR* pch)
{
    HRESULT hr;
    if (i8Operand >= 0)
    {
        *pch = (UCHAR)i8Operand;
        hr = S_OK;
    }
    else
    {
        *pch = '\0';
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
Int8ToUInt8(
    _In_ INT8 i8Operand,
    _Out_ _Deref_out_range_(==, i8Operand) UINT8* pu8Result)
{
    HRESULT hr;
    if (i8Operand >= 0)
    {
        *pu8Result = (UINT8)i8Operand;
        hr = S_OK;
    }
    else
    {
        *pu8Result = UINT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
Int8ToUShort(
    _In_ INT8 i8Operand,
    _Out_ _Deref_out_range_(==, i8Operand) USHORT* pusResult)
{
    HRESULT hr;
    if (i8Operand >= 0)
    {
        *pusResult = (USHORT)i8Operand;
        hr = S_OK;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
Int8ToUInt(
    _In_ INT8 i8Operand,
    _Out_ _Deref_out_range_(==, i8Operand) UINT* puResult)
{
    HRESULT hr;
    if (i8Operand >= 0)
    {
        *puResult = (UINT)i8Operand;
        hr = S_OK;
    }
    else
    {
        *puResult = UINT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
Int8ToUIntPtr(
    _In_ INT8 i8Operand,
    _Out_ _Deref_out_range_(==, i8Operand) UINT_PTR* puResult)
{
    HRESULT hr;
    if (i8Operand >= 0)
    {
        *puResult = (UINT_PTR)i8Operand;
        hr = S_OK;
    }
    else
    {
        *puResult = UINT_PTR_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
Int8ToULong(
    _In_ INT8 i8Operand,
    _Out_ _Deref_out_range_(==, i8Operand) ULONG* pulResult)
{
    HRESULT hr;
    if (i8Operand >= 0)
    {
        *pulResult = (ULONG)i8Operand;
        hr = S_OK;
    }
    else
    {
        *pulResult = ULONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
Int8ToULongPtr(
    _In_ INT8 i8Operand,
    _Out_ _Deref_out_range_(==, i8Operand) ULONG_PTR* pulResult)
{
    HRESULT hr;
    if (i8Operand >= 0)
    {
        *pulResult = (ULONG_PTR)i8Operand;
        hr = S_OK;
    }
    else
    {
        *pulResult = ULONG_PTR_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
Int8ToULongLong(
    _In_ INT8 i8Operand,
    _Out_ _Deref_out_range_(==, i8Operand) ULONGLONG* pullResult)
{
    HRESULT hr;
    if (i8Operand >= 0)
    {
        *pullResult = (ULONGLONG)i8Operand;
        hr = S_OK;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UInt8ToInt8(
    _In_ UINT8 u8Operand,
    _Out_ _Deref_out_range_(==, u8Operand) INT8* pi8Result)
{
    HRESULT hr;
    if (u8Operand <= INT8_MAX)
    {
        *pi8Result = (INT8)u8Operand;
        hr = S_OK;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
__forceinline
HRESULT
UInt8ToChar(
    _In_ UINT8 u8Operand,
    _Out_ _Deref_out_range_(==, u8Operand) CHAR* pch)
{
    *pch = (CHAR)u8Operand;
    return S_OK;
}
_Must_inspect_result_
__inline
HRESULT
ByteToInt8(
    _In_ BYTE bOperand,
    _Out_ _Deref_out_range_(==, bOperand) INT8* pi8Result)
{
    HRESULT hr;
    if (bOperand <= INT8_MAX)
    {
        *pi8Result = (INT8)bOperand;
        hr = S_OK;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
__forceinline
HRESULT
ByteToChar(
    _In_ BYTE bOperand,
    _Out_ _Deref_out_range_(==, bOperand) CHAR* pch)
{
    *pch = (CHAR)bOperand;
    return S_OK;
}
_Must_inspect_result_
__inline
HRESULT
ShortToInt8(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) INT8* pi8Result)
{
    HRESULT hr;
    if ((sOperand >= INT8_MIN) && (sOperand <= INT8_MAX))
    {
        *pi8Result = (INT8)sOperand;
        hr = S_OK;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ShortToUChar(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) UCHAR* pch)
{
    HRESULT hr;
    if ((sOperand >= 0) && (sOperand <= 255))
    {
        *pch = (UCHAR)sOperand;
        hr = S_OK;
    }
    else
    {
        *pch = '\0';
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
__forceinline
HRESULT
ShortToChar(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) CHAR* pch)
{
    return ShortToUChar(sOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
HRESULT
ShortToUInt8(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) UINT8* pui8Result)
{
    HRESULT hr;
    if ((sOperand >= 0) && (sOperand <= UINT8_MAX))
    {
        *pui8Result = (UINT8)sOperand;
        hr = S_OK;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ShortToUShort(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) USHORT* pusResult)
{
    HRESULT hr;
    if (sOperand >= 0)
    {
        *pusResult = (USHORT)sOperand;
        hr = S_OK;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ShortToUInt(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) UINT* puResult)
{
    HRESULT hr;
    if (sOperand >= 0)
    {
        *puResult = (UINT)sOperand;
        hr = S_OK;
    }
    else
    {
        *puResult = UINT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ShortToUIntPtr(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) UINT_PTR* puResult)
{
    HRESULT hr;
    if (sOperand >= 0)
    {
        *puResult = (UINT_PTR)sOperand;
        hr = S_OK;
    }
    else
    {
        *puResult = UINT_PTR_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ShortToULong(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) ULONG* pulResult)
{
    HRESULT hr;
    if (sOperand >= 0)
    {
        *pulResult = (ULONG)sOperand;
        hr = S_OK;
    }
    else
    {
        *pulResult = ULONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ShortToULongPtr(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) ULONG_PTR* pulResult)
{
    HRESULT hr;
    if (sOperand >= 0)
    {
        *pulResult = (ULONG_PTR)sOperand;
        hr = S_OK;
    }
    else
    {
        *pulResult = ULONG_PTR_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ShortToDWordPtr(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) DWORD_PTR* pdwResult)
{
    HRESULT hr;
    if (sOperand >= 0)
    {
        *pdwResult = (DWORD_PTR)sOperand;
        hr = S_OK;
    }
    else
    {
        *pdwResult = DWORD_PTR_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ShortToULongLong(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) ULONGLONG* pullResult)
{
    HRESULT hr;
    if (sOperand >= 0)
    {
        *pullResult = (ULONGLONG)sOperand;
        hr = S_OK;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UShortToInt8(
    _In_ USHORT usOperand,
    _Out_ _Deref_out_range_(==, usOperand) INT8* pi8Result)
{
    HRESULT hr;
    if (usOperand <= INT8_MAX)
    {
        *pi8Result = (INT8)usOperand;
        hr = S_OK;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UShortToUChar(
    _In_ USHORT usOperand,
    _Out_ _Deref_out_range_(==, usOperand) UCHAR* pch)
{
    HRESULT hr;
    if (usOperand <= 255)
    {
        *pch = (UCHAR)usOperand;
        hr = S_OK;
    }
    else
    {
        *pch = '\0';
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
__forceinline
HRESULT
UShortToChar(
    _In_ USHORT usOperand,
    _Out_ _Deref_out_range_(==, usOperand) CHAR* pch)
{
    return UShortToUChar(usOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
HRESULT
UShortToUInt8(
    _In_ USHORT usOperand,
    _Out_ _Deref_out_range_(==, usOperand) UINT8* pui8Result)
{
    HRESULT hr;
    if (usOperand <= UINT8_MAX)
    {
        *pui8Result = (UINT8)usOperand;
        hr = S_OK;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UShortToShort(
    _In_ USHORT usOperand,
    _Out_ _Deref_out_range_(==, usOperand) SHORT* psResult)
{
    HRESULT hr;
    if (usOperand <= SHORT_MAX)
    {
        *psResult = (SHORT)usOperand;
        hr = S_OK;
    }
    else
    {
        *psResult = SHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
IntToInt8(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) INT8* pi8Result)
{
    HRESULT hr;
    if ((iOperand >= INT8_MIN) && (iOperand <= INT8_MAX))
    {
        *pi8Result = (INT8)iOperand;
        hr = S_OK;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
IntToUChar(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) UCHAR* pch)
{
    HRESULT hr;
    if ((iOperand >= 0) && (iOperand <= 255))
    {
        *pch = (UCHAR)iOperand;
        hr = S_OK;
    }
    else
    {
        *pch = '\0';
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
__forceinline
HRESULT
IntToChar(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) CHAR* pch)
{
    return IntToUChar(iOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
HRESULT
IntToUInt8(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) UINT8* pui8Result)
{
    HRESULT hr;
    if ((iOperand >= 0) && (iOperand <= UINT8_MAX))
    {
        *pui8Result = (UINT8)iOperand;
        hr = S_OK;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
IntToShort(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) SHORT* psResult)
{
    HRESULT hr;
    if ((iOperand >= SHORT_MIN) && (iOperand <= SHORT_MAX))
    {
        *psResult = (SHORT)iOperand;
        hr = S_OK;
    }
    else
    {
        *psResult = SHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
IntToUShort(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) USHORT* pusResult)
{
    HRESULT hr;
    if ((iOperand >= 0) && (iOperand <= USHORT_MAX))
    {
        *pusResult = (USHORT)iOperand;
        hr = S_OK;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
IntToUInt(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) UINT* puResult)
{
    HRESULT hr;
    if (iOperand >= 0)
    {
        *puResult = (UINT)iOperand;
        hr = S_OK;
    }
    else
    {
        *puResult = UINT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
IntToULong(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) ULONG* pulResult)
{
    HRESULT hr;
    if (iOperand >= 0)
    {
        *pulResult = (ULONG)iOperand;
        hr = S_OK;
    }
    else
    {
        *pulResult = ULONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
IntToULongLong(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) ULONGLONG* pullResult)
{
    HRESULT hr;
    if (iOperand >= 0)
    {
        *pullResult = (ULONGLONG)iOperand;
        hr = S_OK;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
IntPtrToInt8(
    _In_ INT_PTR iOperand,
    _Out_ _Deref_out_range_(==, iOperand) INT8* pi8Result)
{
    HRESULT hr;
    if ((iOperand >= INT8_MIN) && (iOperand <= INT8_MAX))
    {
        *pi8Result = (INT8)iOperand;
        hr = S_OK;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
IntPtrToUChar(
    _In_ INT_PTR iOperand,
    _Out_ _Deref_out_range_(==, iOperand) UCHAR* pch)
{
    HRESULT hr;
    if ((iOperand >= 0) && (iOperand <= 255))
    {
        *pch = (UCHAR)iOperand;
        hr = S_OK;
    }
    else
    {
        *pch = '\0';
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
__forceinline
HRESULT
IntPtrToChar(
    _In_ INT_PTR iOperand,
    _Out_ _Deref_out_range_(==, iOperand) CHAR* pch)
{
    return IntPtrToUChar(iOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
HRESULT
IntPtrToUInt8(
    _In_ INT_PTR iOperand,
    _Out_ _Deref_out_range_(==, iOperand) UINT8* pui8Result)
{
    HRESULT hr;
    if ((iOperand >= 0) && (iOperand <= UINT8_MAX))
    {
        *pui8Result = (UINT8)iOperand;
        hr = S_OK;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
IntPtrToShort(
    _In_ INT_PTR iOperand,
    _Out_ _Deref_out_range_(==, iOperand) SHORT* psResult)
{
    HRESULT hr;
    if ((iOperand >= SHORT_MIN) && (iOperand <= SHORT_MAX))
    {
        *psResult = (SHORT)iOperand;
        hr = S_OK;
    }
    else
    {
        *psResult = SHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
IntPtrToUShort(
    _In_ INT_PTR iOperand,
    _Out_ _Deref_out_range_(==, iOperand) USHORT* pusResult)
{
    HRESULT hr;
    if ((iOperand >= 0) && (iOperand <= USHORT_MAX))
    {
        *pusResult = (USHORT)iOperand;
        hr = S_OK;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
IntPtrToLongPtr(
    _In_ INT_PTR iOperand,
    _Out_ _Deref_out_range_(==, iOperand) LONG_PTR* plResult)
{
    *plResult = (LONG_PTR)iOperand;
    return S_OK;
}
_Must_inspect_result_
__inline
HRESULT
UIntToInt8(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) INT8* pi8Result)
{
    HRESULT hr;
    if (uOperand <= INT8_MAX)
    {
        *pi8Result = (INT8)uOperand;
        hr = S_OK;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UIntToUChar(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) UCHAR* pch)
{
    HRESULT hr;
    if (uOperand <= 255)
    {
        *pch = (UCHAR)uOperand;
        hr = S_OK;
    }
    else
    {
        *pch = '\0';
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
__forceinline
HRESULT
UIntToChar(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) CHAR* pch)
{
    return UIntToUChar(uOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
HRESULT
UIntToUInt8(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) UINT8* pui8Result)
{
    HRESULT hr;
    if (uOperand <= UINT8_MAX)
    {
        *pui8Result = (UINT8)uOperand;
        hr = S_OK;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UIntToShort(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) SHORT* psResult)
{
    HRESULT hr;
    if (uOperand <= SHORT_MAX)
    {
        *psResult = (SHORT)uOperand;
        hr = S_OK;
    }
    else
    {
        *psResult = SHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UIntToUShort(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) USHORT* pusResult)
{
    HRESULT hr;
    if (uOperand <= USHORT_MAX)
    {
        *pusResult = (USHORT)uOperand;
        hr = S_OK;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UIntToInt(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) INT* piResult)
{
    HRESULT hr;
    if (uOperand <= INT_MAX)
    {
        *piResult = (INT)uOperand;
        hr = S_OK;
    }
    else
    {
        *piResult = INT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UIntToIntPtr(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) INT_PTR* piResult)
{
    *piResult = uOperand;
    return S_OK;
}
_Must_inspect_result_
__inline
HRESULT
UIntToLong(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) LONG* plResult)
{
    HRESULT hr;
    if (uOperand <= LONG_MAX)
    {
        *plResult = (LONG)uOperand;
        hr = S_OK;
    }
    else
    {
        *plResult = LONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UIntToLongPtr(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) LONG_PTR* plResult)
{
    *plResult = uOperand;
    return S_OK;
}
_Must_inspect_result_
__inline
HRESULT
UIntPtrToInt8(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) INT8* pi8Result)
{
    HRESULT hr;
    if (uOperand <= INT8_MAX)
    {
        *pi8Result = (INT8)uOperand;
        hr = S_OK;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UIntPtrToUChar(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) UCHAR* pch)
{
    HRESULT hr;
    if (uOperand <= 255)
    {
        *pch = (UCHAR)uOperand;
        hr = S_OK;
    }
    else
    {
        *pch = '\0';
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
__forceinline
HRESULT
UIntPtrToChar(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) CHAR* pch)
{
    return UIntPtrToUChar(uOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
HRESULT
UIntPtrToUInt8(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==,uOperand) UINT8* pu8Result)
{
    HRESULT hr;
    if (uOperand <= UINT8_MAX)
    {
        *pu8Result = (UINT8)uOperand;
        hr = S_OK;
    }
    else
    {
        *pu8Result = UINT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UIntPtrToShort(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) SHORT* psResult)
{
    HRESULT hr;
    if (uOperand <= SHORT_MAX)
    {
        *psResult = (SHORT)uOperand;
        hr = S_OK;
    }
    else
    {
        *psResult = SHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UIntPtrToInt16(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) INT16* pi16Result)
{
    HRESULT hr;
    if (uOperand <= INT16_MAX)
    {
        *pi16Result = (INT16)uOperand;
        hr = S_OK;
    }
    else
    {
        *pi16Result = INT16_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UIntPtrToUShort(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) USHORT* pusResult)
{
    HRESULT hr;
    if (uOperand <= USHORT_MAX)
    {
        *pusResult = (USHORT)uOperand;
        hr = S_OK;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UIntPtrToUInt16(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) UINT16* pu16Result)
{
    HRESULT hr;
    if (uOperand <= UINT16_MAX)
    {
        *pu16Result = (UINT16)uOperand;
        hr = S_OK;
    }
    else
    {
        *pu16Result = UINT16_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UIntPtrToInt(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) INT* piResult)
{
    HRESULT hr;
    if (uOperand <= INT_MAX)
    {
        *piResult = (INT)uOperand;
        hr = S_OK;
    }
    else
    {
        *piResult = INT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UIntPtrToIntPtr(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) INT_PTR* piResult)
{
    HRESULT hr;
    if (uOperand <= INT_PTR_MAX)
    {
        *piResult = (INT_PTR)uOperand;
        hr = S_OK;
    }
    else
    {
        *piResult = INT_PTR_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UIntPtrToLong(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) LONG* plResult)
{
    HRESULT hr;
    if (uOperand <= LONG_MAX)
    {
        *plResult = (LONG)uOperand;
        hr = S_OK;
    }
    else
    {
        *plResult = LONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UIntPtrToLongPtr(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) LONG_PTR* plResult)
{
    HRESULT hr;
    if (uOperand <= LONG_PTR_MAX)
    {
        *plResult = (LONG_PTR)uOperand;
        hr = S_OK;
    }
    else
    {
        *plResult = LONG_PTR_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongToInt8(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) INT8* pi8Result)
{
    HRESULT hr;
    if ((lOperand >= INT8_MIN) && (lOperand <= INT8_MAX))
    {
        *pi8Result = (INT8)lOperand;
        hr = S_OK;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongToUChar(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) UCHAR* pch)
{
    HRESULT hr;
    if ((lOperand >= 0) && (lOperand <= 255))
    {
        *pch = (UCHAR)lOperand;
        hr = S_OK;
    }
    else
    {
        *pch = '\0';
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
__forceinline
HRESULT
LongToChar(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) CHAR* pch)
{
    return LongToUChar(lOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
HRESULT
LongToUInt8(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) UINT8* pui8Result)
{
    HRESULT hr;
    if ((lOperand >= 0) && (lOperand <= UINT8_MAX))
    {
        *pui8Result = (UINT8)lOperand;
        hr = S_OK;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongToShort(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) SHORT* psResult)
{
    HRESULT hr;
    if ((lOperand >= SHORT_MIN) && (lOperand <= SHORT_MAX))
    {
       *psResult = (SHORT)lOperand;
       hr = S_OK;
    }
    else
    {
        *psResult = SHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongToUShort(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) USHORT* pusResult)
{
    HRESULT hr;
    if ((lOperand >= 0) && (lOperand <= USHORT_MAX))
    {
        *pusResult = (USHORT)lOperand;
        hr = S_OK;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongToInt(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) INT* piResult)
{
    C_ASSERT(sizeof(INT) == sizeof(LONG));
    *piResult = (INT)lOperand;
    return S_OK;
}
_Must_inspect_result_
__inline
HRESULT
LongToIntPtr(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) INT_PTR* piResult)
{
    *piResult = lOperand;
    return S_OK;
}
_Must_inspect_result_
__inline
HRESULT
LongToUInt(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) UINT* puResult)
{
    HRESULT hr;
    if (lOperand >= 0)
    {
        *puResult = (UINT)lOperand;
        hr = S_OK;
    }
    else
    {
        *puResult = UINT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongToUIntPtr(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) UINT_PTR* puResult)
{
    HRESULT hr;
    if (lOperand >= 0)
    {
        *puResult = (UINT_PTR)lOperand;
        hr = S_OK;
    }
    else
    {
        *puResult = UINT_PTR_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongToULong(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) ULONG* pulResult)
{
    HRESULT hr;
    if (lOperand >= 0)
    {
        *pulResult = (ULONG)lOperand;
        hr = S_OK;
    }
    else
    {
        *pulResult = ULONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongToULongPtr(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) ULONG_PTR* pulResult)
{
    HRESULT hr;
    if (lOperand >= 0)
    {
        *pulResult = (ULONG_PTR)lOperand;
        hr = S_OK;
    }
    else
    {
        *pulResult = ULONG_PTR_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongToULongLong(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) ULONGLONG* pullResult)
{
    HRESULT hr;
    if (lOperand >= 0)
    {
        *pullResult = (ULONGLONG)lOperand;
        hr = S_OK;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongPtrToInt8(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) INT8* pi8Result)
{
    HRESULT hr;
    if ((lOperand >= INT8_MIN) && (lOperand <= INT8_MAX))
    {
        *pi8Result = (INT8)lOperand;
        hr = S_OK;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongPtrToUChar(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) UCHAR* pch)
{
    HRESULT hr;
    if ((lOperand >= 0) && (lOperand <= 255))
    {
        *pch = (UCHAR)lOperand;
        hr = S_OK;
    }
    else
    {
        *pch = '\0';
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
__forceinline
HRESULT
LongPtrToChar(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) CHAR* pch)
{
    return LongPtrToUChar(lOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
HRESULT
LongPtrToUInt8(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) UINT8* pui8Result)
{
    HRESULT hr;
    if ((lOperand >= 0) && (lOperand <= UINT8_MAX))
    {
        *pui8Result = (UINT8)lOperand;
        hr = S_OK;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongPtrToShort(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) SHORT* psResult)
{
    HRESULT hr;
    if ((lOperand >= SHORT_MIN) && (lOperand <= SHORT_MAX))
    {
        *psResult = (SHORT)lOperand;
        hr = S_OK;
    }
    else
    {
        *psResult = SHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongPtrToUShort(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) USHORT* pusResult)
{
    HRESULT hr;
    if ((lOperand >= 0) && (lOperand <= USHORT_MAX))
    {
        *pusResult = (USHORT)lOperand;
        hr = S_OK;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongPtrToIntPtr(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) INT_PTR* piResult)
{
    C_ASSERT(sizeof(LONG_PTR) == sizeof(INT_PTR));
    *piResult = (INT_PTR)lOperand;
    return S_OK;
}
_Must_inspect_result_
__inline
HRESULT
LongPtrToUIntPtr(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) UINT_PTR* puResult)
{
    HRESULT hr;
    if (lOperand >= 0)
    {
        *puResult = (UINT_PTR)lOperand;
        hr = S_OK;
    }
    else
    {
        *puResult = UINT_PTR_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongPtrToULongPtr(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) ULONG_PTR* pulResult)
{
    HRESULT hr;
    if (lOperand >= 0)
    {
        *pulResult = (ULONG_PTR)lOperand;
        hr = S_OK;
    }
    else
    {
        *pulResult = ULONG_PTR_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongPtrToULongLong(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) ULONGLONG* pullResult)
{
    HRESULT hr;
    if (lOperand >= 0)
    {
        *pullResult = (ULONGLONG)lOperand;
        hr = S_OK;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongToInt8(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) INT8* pi8Result)
{
    HRESULT hr;
    if (ulOperand <= INT8_MAX)
    {
        *pi8Result = (INT8)ulOperand;
        hr = S_OK;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongToUChar(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) UCHAR* pch)
{
    HRESULT hr;
    if (ulOperand <= 255)
    {
        *pch = (UCHAR)ulOperand;
        hr = S_OK;
    }
    else
    {
        *pch = '\0';
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
__forceinline
HRESULT
ULongToChar(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) CHAR* pch)
{
    return ULongToUChar(ulOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
HRESULT
ULongToUInt8(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) UINT8* pui8Result)
{
    HRESULT hr;
    if (ulOperand <= UINT8_MAX)
    {
        *pui8Result = (UINT8)ulOperand;
        hr = S_OK;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongToShort(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) SHORT* psResult)
{
    HRESULT hr;
    if (ulOperand <= SHORT_MAX)
    {
        *psResult = (SHORT)ulOperand;
        hr = S_OK;
    }
    else
    {
        *psResult = SHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongToUShort(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) USHORT* pusResult)
{
    HRESULT hr;
    if (ulOperand <= USHORT_MAX)
    {
        *pusResult = (USHORT)ulOperand;
        hr = S_OK;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongToInt(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) INT* piResult)
{
    HRESULT hr;
    if (ulOperand <= INT_MAX)
    {
        *piResult = (INT)ulOperand;
        hr = S_OK;
    }
    else
    {
        *piResult = INT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongToIntPtr(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) INT_PTR* piResult)
{
    *piResult = (INT_PTR)ulOperand;
    return S_OK;
}
_Must_inspect_result_
__inline
HRESULT
ULongToUInt(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) UINT* puResult)
{
    C_ASSERT(sizeof(ULONG) == sizeof(UINT));
    *puResult = (UINT)ulOperand;
    return S_OK;
}
_Must_inspect_result_
__inline
HRESULT
ULongToUIntPtr(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) UINT_PTR* puiResult)
{
    C_ASSERT(sizeof(UINT_PTR) > sizeof(ULONG));
    *puiResult = (UINT_PTR)ulOperand;
    return S_OK;
}
_Must_inspect_result_
__inline
HRESULT
ULongToLong(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) LONG* plResult)
{
    HRESULT hr;
    if (ulOperand <= LONG_MAX)
    {
        *plResult = (LONG)ulOperand;
        hr = S_OK;
    }
    else
    {
        *plResult = LONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongToLongPtr(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) LONG_PTR* plResult)
{
    C_ASSERT(sizeof(LONG_PTR) > sizeof(ULONG));
    *plResult = (LONG_PTR)ulOperand;
    return S_OK;
}
_Must_inspect_result_
__inline
HRESULT
ULongPtrToInt8(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) INT8* pi8Result)
{
    HRESULT hr;
    if (ulOperand <= INT8_MAX)
    {
        *pi8Result = (INT8)ulOperand;
        hr = S_OK;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongPtrToUChar(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) UCHAR* pch)
{
    HRESULT hr;
    if (ulOperand <= 255)
    {
        *pch = (UCHAR)ulOperand;
        hr = S_OK;
    }
    else
    {
        *pch = '\0';
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
__forceinline
HRESULT
ULongPtrToChar(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) CHAR* pch)
{
    return ULongPtrToUChar(ulOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
HRESULT
ULongPtrToUInt8(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) UINT8* pui8Result)
{
    HRESULT hr;
    if (ulOperand <= UINT8_MAX)
    {
        *pui8Result = (UINT8)ulOperand;
        hr = S_OK;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongPtrToShort(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) SHORT* psResult)
{
    HRESULT hr;
    if (ulOperand <= SHORT_MAX)
    {
        *psResult = (SHORT)ulOperand;
        hr = S_OK;
    }
    else
    {
        *psResult = SHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongPtrToUShort(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) USHORT* pusResult)
{
    HRESULT hr;
    if (ulOperand <= USHORT_MAX)
    {
        *pusResult = (USHORT)ulOperand;
        hr = S_OK;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongPtrToInt(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) INT* piResult)
{
    HRESULT hr;
    if (ulOperand <= INT_MAX)
    {
        *piResult = (INT)ulOperand;
        hr = S_OK;
    }
    else
    {
        *piResult = INT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongPtrToIntPtr(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) INT_PTR* piResult)
{
    HRESULT hr;
    if (ulOperand <= INT_PTR_MAX)
    {
        *piResult = (INT_PTR)ulOperand;
        hr = S_OK;
    }
    else
    {
        *piResult = INT_PTR_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongPtrToUIntPtr(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) UINT_PTR* puResult)
{
    *puResult = (UINT_PTR)ulOperand;
    return S_OK;
}
_Must_inspect_result_
__inline
HRESULT
ULongPtrToLong(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) LONG* plResult)
{
    HRESULT hr;
    if (ulOperand <= LONG_MAX)
    {
        *plResult = (LONG)ulOperand;
        hr = S_OK;
    }
    else
    {
        *plResult = LONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongPtrToLongPtr(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) LONG_PTR* plResult)
{
    HRESULT hr;
    if (ulOperand <= LONG_PTR_MAX)
    {
        *plResult = (LONG_PTR)ulOperand;
        hr = S_OK;
    }
    else
    {
        *plResult = LONG_PTR_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongLongToInt8(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) INT8* pi8Result)
{
    HRESULT hr;
    if ((llOperand >= INT8_MIN) && (llOperand <= INT8_MAX))
    {
        *pi8Result = (INT8)llOperand;
        hr = S_OK;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongLongToUChar(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) UCHAR* pch)
{
    HRESULT hr;
    if ((llOperand >= 0) && (llOperand <= 255))
    {
        *pch = (UCHAR)llOperand;
        hr = S_OK;
    }
    else
    {
        *pch = '\0';
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
__forceinline
HRESULT
LongLongToChar(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) CHAR* pch)
{
    return LongLongToUChar(llOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
HRESULT
LongLongToUInt8(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) UINT8* pu8Result)
{
    HRESULT hr;
    if ((llOperand >= 0) && (llOperand <= UINT8_MAX))
    {
        *pu8Result = (UINT8)llOperand;
        hr = S_OK;
    }
    else
    {
        *pu8Result = UINT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongLongToShort(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) SHORT* psResult)
{
    HRESULT hr;
    if ((llOperand >= SHORT_MIN) && (llOperand <= SHORT_MAX))
    {
        *psResult = (SHORT)llOperand;
        hr = S_OK;
    }
    else
    {
        *psResult = SHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongLongToUShort(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) USHORT* pusResult)
{
    HRESULT hr;
    if ((llOperand >= 0) && (llOperand <= USHORT_MAX))
    {
        *pusResult = (USHORT)llOperand;
        hr = S_OK;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongLongToInt(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) INT* piResult)
{
    HRESULT hr;
    if ((llOperand >= INT_MIN) && (llOperand <= INT_MAX))
    {
        *piResult = (INT)llOperand;
        hr = S_OK;
    }
    else
    {
        *piResult = INT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongLongToIntPtr(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) INT_PTR* piResult)
{
    *piResult = llOperand;
    return S_OK;
}
_Must_inspect_result_
__inline
HRESULT
LongLongToUInt(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) UINT* puResult)
{
    HRESULT hr;
    if ((llOperand >= 0) && (llOperand <= UINT_MAX))
    {
        *puResult = (UINT)llOperand;
        hr = S_OK;
    }
    else
    {
        *puResult = UINT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongLongToLong(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) LONG* plResult)
{
    HRESULT hr;
    if ((llOperand >= LONG_MIN) && (llOperand <= LONG_MAX))
    {
        *plResult = (LONG)llOperand;
        hr = S_OK;
    }
    else
    {
        *plResult = LONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongLongToLongPtr(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) LONG_PTR* plResult)
{
    *plResult = (LONG_PTR)llOperand;
    return S_OK;
}
_Must_inspect_result_
__inline
HRESULT
LongLongToULong(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) ULONG* pulResult)
{
    HRESULT hr;
    if ((llOperand >= 0) && (llOperand <= ULONG_MAX))
    {
        *pulResult = (ULONG)llOperand;
        hr = S_OK;
    }
    else
    {
        *pulResult = ULONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
LongLongToULongLong(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) ULONGLONG* pullResult)
{
    HRESULT hr;
    if (llOperand >= 0)
    {
        *pullResult = (ULONGLONG)llOperand;
        hr = S_OK;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongLongToInt8(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) INT8* pi8Result)
{
    HRESULT hr;
    if (ullOperand <= INT8_MAX)
    {
        *pi8Result = (INT8)ullOperand;
        hr = S_OK;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongLongToUChar(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) UCHAR* pch)
{
    HRESULT hr;
    if (ullOperand <= 255)
    {
        *pch = (UCHAR)ullOperand;
        hr = S_OK;
    }
    else
    {
        *pch = '\0';
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
__forceinline
HRESULT
ULongLongToChar(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) CHAR* pch)
{
    return ULongLongToUChar(ullOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
HRESULT
ULongLongToUInt8(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) UINT8* pu8Result)
{
    HRESULT hr;
    if (ullOperand <= UINT8_MAX)
    {
        *pu8Result = (UINT8)ullOperand;
        hr = S_OK;
    }
    else
    {
        *pu8Result = UINT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongLongToShort(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) SHORT* psResult)
{
    HRESULT hr;
    if (ullOperand <= SHORT_MAX)
    {
        *psResult = (SHORT)ullOperand;
        hr = S_OK;
    }
    else
    {
        *psResult = SHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongLongToUShort(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) USHORT* pusResult)
{
    HRESULT hr;
    if (ullOperand <= USHORT_MAX)
    {
        *pusResult = (USHORT)ullOperand;
        hr = S_OK;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongLongToInt(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) INT* piResult)
{
    HRESULT hr;
    if (ullOperand <= INT_MAX)
    {
        *piResult = (INT)ullOperand;
        hr = S_OK;
    }
    else
    {
        *piResult = INT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongLongToUInt(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) UINT* puResult)
{
    HRESULT hr;
    if (ullOperand <= UINT_MAX)
    {
        *puResult = (UINT)ullOperand;
        hr = S_OK;
    }
    else
    {
        *puResult = UINT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongLongToUIntPtr(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) UINT_PTR* puResult)
{
    *puResult = ullOperand;
    return S_OK;
}
_Must_inspect_result_
__inline
HRESULT
ULongLongToLong(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) LONG* plResult)
{
    HRESULT hr;
    if (ullOperand <= LONG_MAX)
    {
        *plResult = (LONG)ullOperand;
        hr = S_OK;
    }
    else
    {
        *plResult = LONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongLongToLongPtr(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) LONG_PTR* plResult)
{
    HRESULT hr;
    if (ullOperand <= LONG_PTR_MAX)
    {
        *plResult = (LONG_PTR)ullOperand;
        hr = S_OK;
    }
    else
    {
        *plResult = LONG_PTR_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongLongToULong(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) ULONG* pulResult)
{
    HRESULT hr;
    if (ullOperand <= ULONG_MAX)
    {
        *pulResult = (ULONG)ullOperand;
        hr = S_OK;
    }
    else
    {
        *pulResult = ULONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongLongToULongPtr(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) ULONG_PTR* pulResult)
{
    *pulResult = ullOperand;
    return S_OK;
}
_Must_inspect_result_
__inline
HRESULT
ULongLongToLongLong(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) LONGLONG* pllResult)
{
    HRESULT hr;
    if (ullOperand <= LONGLONG_MAX)
    {
        *pllResult = (LONGLONG)ullOperand;
        hr = S_OK;
    }
    else
    {
        *pllResult = LONGLONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UInt8Add(
    _In_ UINT8 u8Augend,
    _In_ UINT8 u8Addend,
    _Out_ _Deref_out_range_(==, u8Augend + u8Addend) UINT8* pu8Result)
{
    HRESULT hr;
    if (((UINT8)(u8Augend + u8Addend)) >= u8Augend)
    {
        *pu8Result = (UINT8)(u8Augend + u8Addend);
        hr = S_OK;
    }
    else
    {
        *pu8Result = UINT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UShortAdd(
    _In_ USHORT usAugend,
    _In_ USHORT usAddend,
    _Out_ _Deref_out_range_(==, usAugend + usAddend) USHORT* pusResult)
{
    HRESULT hr;
    if (((USHORT)(usAugend + usAddend)) >= usAugend)
    {
        *pusResult = (USHORT)(usAugend + usAddend);
        hr = S_OK;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UIntAdd(
    _In_ UINT uAugend,
    _In_ UINT uAddend,
    _Out_ _Deref_out_range_(==, uAugend + uAddend) UINT* puResult)
{
    HRESULT hr;
    if ((uAugend + uAddend) >= uAugend)
    {
        *puResult = (uAugend + uAddend);
        hr = S_OK;
    }
    else
    {
        *puResult = UINT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongAdd(
    _In_ ULONG ulAugend,
    _In_ ULONG ulAddend,
    _Out_ _Deref_out_range_(==, ulAugend + ulAddend) ULONG* pulResult)
{
    HRESULT hr;
    if ((ulAugend + ulAddend) >= ulAugend)
    {
        *pulResult = (ulAugend + ulAddend);
        hr = S_OK;
    }
    else
    {
        *pulResult = ULONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
SizeTAdd(
    _In_ size_t Augend,
    _In_ size_t Addend,
    _Out_ _Deref_out_range_(==, Augend + Addend) size_t* pResult)
{
    HRESULT hr;
    if ((Augend + Addend) >= Augend)
    {
        *pResult = (Augend + Addend);
        hr = S_OK;
    }
    else
    {
        *pResult = SIZE_T_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongLongAdd(
    _In_ ULONGLONG ullAugend,
    _In_ ULONGLONG ullAddend,
    _Out_ _Deref_out_range_(==, ullAugend + ullAddend) ULONGLONG* pullResult)
{
    HRESULT hr;
    if ((ullAugend + ullAddend) >= ullAugend)
    {
        *pullResult = (ullAugend + ullAddend);
        hr = S_OK;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UInt8Sub(
    _In_ UINT8 u8Minuend,
    _In_ UINT8 u8Subtrahend,
    _Out_ _Deref_out_range_(==, u8Minuend - u8Subtrahend) UINT8* pu8Result)
{
    HRESULT hr;
    if (u8Minuend >= u8Subtrahend)
    {
        *pu8Result = (UINT8)(u8Minuend - u8Subtrahend);
        hr = S_OK;
    }
    else
    {
        *pu8Result = UINT8_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UShortSub(
    _In_ USHORT usMinuend,
    _In_ USHORT usSubtrahend,
    _Out_ _Deref_out_range_(==, usMinuend - usSubtrahend) USHORT* pusResult)
{
    HRESULT hr;
    if (usMinuend >= usSubtrahend)
    {
        *pusResult = (USHORT)(usMinuend - usSubtrahend);
        hr = S_OK;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UIntSub(
    _In_ UINT uMinuend,
    _In_ UINT uSubtrahend,
    _Out_ _Deref_out_range_(==, uMinuend - uSubtrahend) UINT* puResult)
{
    HRESULT hr;
    if (uMinuend >= uSubtrahend)
    {
        *puResult = (uMinuend - uSubtrahend);
        hr = S_OK;
    }
    else
    {
        *puResult = UINT_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongSub(
    _In_ ULONG ulMinuend,
    _In_ ULONG ulSubtrahend,
    _Out_ _Deref_out_range_(==, ulMinuend - ulSubtrahend) ULONG* pulResult)
{
    HRESULT hr;
    if (ulMinuend >= ulSubtrahend)
    {
        *pulResult = (ulMinuend - ulSubtrahend);
        hr = S_OK;
    }
    else
    {
        *pulResult = ULONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
SizeTSub(
    _In_ size_t Minuend,
    _In_ size_t Subtrahend,
    _Out_ _Deref_out_range_(==, Minuend - Subtrahend) size_t* pResult)
{
    HRESULT hr;
    if (Minuend >= Subtrahend)
    {
        *pResult = (Minuend - Subtrahend);
        hr = S_OK;
    }
    else
    {
        *pResult = SIZE_T_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
ULongLongSub(
    _In_ ULONGLONG ullMinuend,
    _In_ ULONGLONG ullSubtrahend,
    _Out_ _Deref_out_range_(==, ullMinuend - ullSubtrahend) ULONGLONG* pullResult)
{
    HRESULT hr;
    if (ullMinuend >= ullSubtrahend)
    {
        *pullResult = (ullMinuend - ullSubtrahend);
        hr = S_OK;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
_Must_inspect_result_
__inline
HRESULT
UInt8Mult(
    _In_ UINT8 u8Multiplicand,
    _In_ UINT8 u8Multiplier,
    _Out_ _Deref_out_range_(==, u8Multiplicand * u8Multiplier) UINT8* pu8Result)
{
    UINT uResult = ((UINT)u8Multiplicand) * ((UINT)u8Multiplier);
    return UIntToUInt8(uResult, pu8Result);
}
_Must_inspect_result_
__inline
HRESULT
UShortMult(
    _In_ USHORT usMultiplicand,
    _In_ USHORT usMultiplier,
    _Out_ _Deref_out_range_(==, usMultiplicand * usMultiplier) USHORT* pusResult)
{
    ULONG ulResult = ((ULONG)usMultiplicand) * ((ULONG)usMultiplier);
    return ULongToUShort(ulResult, pusResult);
}
_Must_inspect_result_
__inline
HRESULT
UIntMult(
    _In_ UINT uMultiplicand,
    _In_ UINT uMultiplier,
    _Out_ _Deref_out_range_(==, uMultiplicand * uMultiplier) UINT* puResult)
{
    ULONGLONG ull64Result = UInt32x32To64(uMultiplicand, uMultiplier);
    return ULongLongToUInt(ull64Result, puResult);
}
_Must_inspect_result_
__inline
HRESULT
ULongMult(
    _In_ ULONG ulMultiplicand,
    _In_ ULONG ulMultiplier,
    _Out_ _Deref_out_range_(==, ulMultiplicand * ulMultiplier) ULONG* pulResult)
{
    ULONGLONG ull64Result = UInt32x32To64(ulMultiplicand, ulMultiplier);
    return ULongLongToULong(ull64Result, pulResult);
}
_Must_inspect_result_
__inline
HRESULT
ULongLongMult(
    _In_ ULONGLONG ullMultiplicand,
    _In_ ULONGLONG ullMultiplier,
    _Out_ _Deref_out_range_(==, ullMultiplicand * ullMultiplier) ULONGLONG* pullResult)
{
    HRESULT hr;
    ULONGLONG ullResultHigh;
    ULONGLONG ullResultLow;
    ullResultLow = UnsignedMultiply128(ullMultiplicand, ullMultiplier, &ullResultHigh);
    if (ullResultHigh == 0)
    {
        _Analysis_assume_(ullMultiplicand * ullMultiplier == ullResultLow);
        *pullResult = ullResultLow;
        hr = S_OK;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
    }
    return hr;
}
#endif
#pragma endregion
