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
typedef signed __int64 RtlINT64;
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
typedef _Return_type_success_(return >= 0) long NTSTATUS;
#error Must define a target architecture.
C_ASSERT(sizeof(USHORT) == 2);
C_ASSERT(sizeof(INT) == 4);
C_ASSERT(sizeof(UINT) == 4);
C_ASSERT(sizeof(LONG) == 4);
C_ASSERT(sizeof(ULONG) == 4);
C_ASSERT(sizeof(UINT_PTR) == sizeof(ULONG_PTR));
_Must_inspect_result_
__inline
NTSTATUS
RtlInt8ToUChar(
    _In_ INT8 i8Operand,
    _Out_ _Deref_out_range_(==, i8Operand) UCHAR* pch)
{
    NTSTATUS status;
    if (i8Operand >= 0)
    {
        *pch = (UCHAR)i8Operand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pch = '\0';
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlInt8ToUInt8(
    _In_ INT8 i8Operand,
    _Out_ _Deref_out_range_(==, i8Operand) UINT8* pu8Result)
{
    NTSTATUS status;
    if (i8Operand >= 0)
    {
        *pu8Result = (UINT8)i8Operand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pu8Result = UINT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlInt8ToUShort(
    _In_ INT8 i8Operand,
    _Out_ _Deref_out_range_(==, i8Operand) USHORT* pusResult)
{
    NTSTATUS status;
    if (i8Operand >= 0)
    {
        *pusResult = (USHORT)i8Operand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlInt8ToUInt(
    _In_ INT8 i8Operand,
    _Out_ _Deref_out_range_(==, i8Operand) UINT* puResult)
{
    NTSTATUS status;
    if (i8Operand >= 0)
    {
        *puResult = (UINT)i8Operand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *puResult = UINT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlInt8ToUIntPtr(
    _In_ INT8 i8Operand,
    _Out_ _Deref_out_range_(==, i8Operand) UINT_PTR* puResult)
{
    NTSTATUS status;
    if (i8Operand >= 0)
    {
        *puResult = (UINT_PTR)i8Operand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *puResult = UINT_PTR_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlInt8ToULong(
    _In_ INT8 i8Operand,
    _Out_ _Deref_out_range_(==, i8Operand) ULONG* pulResult)
{
    NTSTATUS status;
    if (i8Operand >= 0)
    {
        *pulResult = (ULONG)i8Operand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pulResult = ULONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlInt8ToULongPtr(
    _In_ INT8 i8Operand,
    _Out_ _Deref_out_range_(==, i8Operand) ULONG_PTR* pulResult)
{
    NTSTATUS status;
    if (i8Operand >= 0)
    {
        *pulResult = (ULONG_PTR)i8Operand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pulResult = ULONG_PTR_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlInt8ToULongLong(
    _In_ INT8 i8Operand,
    _Out_ _Deref_out_range_(==, i8Operand) ULONGLONG* pullResult)
{
    NTSTATUS status;
    if (i8Operand >= 0)
    {
        *pullResult = (ULONGLONG)i8Operand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUInt8ToInt8(
    _In_ UINT8 u8Operand,
    _Out_ _Deref_out_range_(==, u8Operand) INT8* pi8Result)
{
    NTSTATUS status;
    if (u8Operand <= INT8_MAX)
    {
        *pi8Result = (INT8)u8Operand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
__forceinline
NTSTATUS
RtlUInt8ToChar(
    _In_ UINT8 u8Operand,
    _Out_ _Deref_out_range_(==, u8Operand) CHAR* pch)
{
    *pch = (CHAR)u8Operand;
    return STATUS_SUCCESS;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlByteToInt8(
    _In_ BYTE bOperand,
    _Out_ _Deref_out_range_(==, bOperand) INT8* pi8Result)
{
    NTSTATUS status;
    if (bOperand <= INT8_MAX)
    {
        *pi8Result = (INT8)bOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
__forceinline
NTSTATUS
RtlByteToChar(
    _In_ BYTE bOperand,
    _Out_ _Deref_out_range_(==, bOperand) CHAR* pch)
{
    *pch = (CHAR)bOperand;
    return STATUS_SUCCESS;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlShortToInt8(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) INT8* pi8Result)
{
    NTSTATUS status;
    if ((sOperand >= INT8_MIN) && (sOperand <= INT8_MAX))
    {
        *pi8Result = (INT8)sOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlShortToUChar(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) UCHAR* pch)
{
    NTSTATUS status;
    if ((sOperand >= 0) && (sOperand <= 255))
    {
        *pch = (UCHAR)sOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pch = '\0';
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
__forceinline
NTSTATUS
RtlShortToChar(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) CHAR* pch)
{
    return RtlShortToUChar(sOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
NTSTATUS
RtlShortToUInt8(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) UINT8* pui8Result)
{
    NTSTATUS status;
    if ((sOperand >= 0) && (sOperand <= UINT8_MAX))
    {
        *pui8Result = (UINT8)sOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlShortToUShort(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) USHORT* pusResult)
{
    NTSTATUS status;
    if (sOperand >= 0)
    {
        *pusResult = (USHORT)sOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlShortToUInt(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) UINT* puResult)
{
    NTSTATUS status;
    if (sOperand >= 0)
    {
        *puResult = (UINT)sOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *puResult = UINT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlShortToUIntPtr(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) UINT_PTR* puResult)
{
    NTSTATUS status;
    if (sOperand >= 0)
    {
        *puResult = (UINT_PTR)sOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *puResult = UINT_PTR_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlShortToULong(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) ULONG* pulResult)
{
    NTSTATUS status;
    if (sOperand >= 0)
    {
        *pulResult = (ULONG)sOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pulResult = ULONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlShortToULongPtr(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) ULONG_PTR* pulResult)
{
    NTSTATUS status;
    if (sOperand >= 0)
    {
        *pulResult = (ULONG_PTR)sOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pulResult = ULONG_PTR_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlShortToDWordPtr(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) DWORD_PTR* pdwResult)
{
    NTSTATUS status;
    if (sOperand >= 0)
    {
        *pdwResult = (DWORD_PTR)sOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pdwResult = DWORD_PTR_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlShortToULongLong(
    _In_ SHORT sOperand,
    _Out_ _Deref_out_range_(==, sOperand) ULONGLONG* pullResult)
{
    NTSTATUS status;
    if (sOperand >= 0)
    {
        *pullResult = (ULONGLONG)sOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUShortToInt8(
    _In_ USHORT usOperand,
    _Out_ _Deref_out_range_(==, usOperand) INT8* pi8Result)
{
    NTSTATUS status;
    if (usOperand <= INT8_MAX)
    {
        *pi8Result = (INT8)usOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUShortToUChar(
    _In_ USHORT usOperand,
    _Out_ _Deref_out_range_(==, usOperand) UCHAR* pch)
{
    NTSTATUS status;
    if (usOperand <= 255)
    {
        *pch = (UCHAR)usOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pch = '\0';
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
__forceinline
NTSTATUS
RtlUShortToChar(
    _In_ USHORT usOperand,
    _Out_ _Deref_out_range_(==, usOperand) CHAR* pch)
{
    return RtlUShortToUChar(usOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUShortToUInt8(
    _In_ USHORT usOperand,
    _Out_ _Deref_out_range_(==, usOperand) UINT8* pui8Result)
{
    NTSTATUS status;
    if (usOperand <= UINT8_MAX)
    {
        *pui8Result = (UINT8)usOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUShortToShort(
    _In_ USHORT usOperand,
    _Out_ _Deref_out_range_(==, usOperand) SHORT* psResult)
{
    NTSTATUS status;
    if (usOperand <= SHORT_MAX)
    {
        *psResult = (SHORT)usOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *psResult = SHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlIntToInt8(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) INT8* pi8Result)
{
    NTSTATUS status;
    if ((iOperand >= INT8_MIN) && (iOperand <= INT8_MAX))
    {
        *pi8Result = (INT8)iOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlIntToUChar(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) UCHAR* pch)
{
    NTSTATUS status;
    if ((iOperand >= 0) && (iOperand <= 255))
    {
        *pch = (UCHAR)iOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pch = '\0';
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
__forceinline
NTSTATUS
RtlIntToChar(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) CHAR* pch)
{
    return RtlIntToUChar(iOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
NTSTATUS
RtlIntToUInt8(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) UINT8* pui8Result)
{
    NTSTATUS status;
    if ((iOperand >= 0) && (iOperand <= UINT8_MAX))
    {
        *pui8Result = (UINT8)iOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlIntToShort(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) SHORT* psResult)
{
    NTSTATUS status;
    if ((iOperand >= SHORT_MIN) && (iOperand <= SHORT_MAX))
    {
        *psResult = (SHORT)iOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *psResult = SHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlIntToUShort(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) USHORT* pusResult)
{
    NTSTATUS status;
    if ((iOperand >= 0) && (iOperand <= USHORT_MAX))
    {
        *pusResult = (USHORT)iOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlIntToUInt(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) UINT* puResult)
{
    NTSTATUS status;
    if (iOperand >= 0)
    {
        *puResult = (UINT)iOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *puResult = UINT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlIntToULong(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) ULONG* pulResult)
{
    NTSTATUS status;
    if (iOperand >= 0)
    {
        *pulResult = (ULONG)iOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pulResult = ULONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlIntToULongLong(
    _In_ INT iOperand,
    _Out_ _Deref_out_range_(==, iOperand) ULONGLONG* pullResult)
{
    NTSTATUS status;
    if (iOperand >= 0)
    {
        *pullResult = (ULONGLONG)iOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlIntPtrToInt8(
    _In_ INT_PTR iOperand,
    _Out_ _Deref_out_range_(==, iOperand) INT8* pi8Result)
{
    NTSTATUS status;
    if ((iOperand >= INT8_MIN) && (iOperand <= INT8_MAX))
    {
        *pi8Result = (INT8)iOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlIntPtrToUChar(
    _In_ INT_PTR iOperand,
    _Out_ _Deref_out_range_(==, iOperand) UCHAR* pch)
{
    NTSTATUS status;
    if ((iOperand >= 0) && (iOperand <= 255))
    {
        *pch = (UCHAR)iOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pch = '\0';
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
__forceinline
NTSTATUS
RtlIntPtrToChar(
    _In_ INT_PTR iOperand,
    _Out_ _Deref_out_range_(==, iOperand) CHAR* pch)
{
    return RtlIntPtrToUChar(iOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
NTSTATUS
RtlIntPtrToUInt8(
    _In_ INT_PTR iOperand,
    _Out_ _Deref_out_range_(==, iOperand) UINT8* pui8Result)
{
    NTSTATUS status;
    if ((iOperand >= 0) && (iOperand <= UINT8_MAX))
    {
        *pui8Result = (UINT8)iOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlIntPtrToShort(
    _In_ INT_PTR iOperand,
    _Out_ _Deref_out_range_(==, iOperand) SHORT* psResult)
{
    NTSTATUS status;
    if ((iOperand >= SHORT_MIN) && (iOperand <= SHORT_MAX))
    {
        *psResult = (SHORT)iOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *psResult = SHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlIntPtrToUShort(
    _In_ INT_PTR iOperand,
    _Out_ _Deref_out_range_(==, iOperand) USHORT* pusResult)
{
    NTSTATUS status;
    if ((iOperand >= 0) && (iOperand <= USHORT_MAX))
    {
        *pusResult = (USHORT)iOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlIntPtrToLongPtr(
    _In_ INT_PTR iOperand,
    _Out_ _Deref_out_range_(==, iOperand) LONG_PTR* plResult)
{
    *plResult = (LONG_PTR)iOperand;
    return STATUS_SUCCESS;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntToInt8(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) INT8* pi8Result)
{
    NTSTATUS status;
    if (uOperand <= INT8_MAX)
    {
        *pi8Result = (INT8)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntToUChar(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) UCHAR* pch)
{
    NTSTATUS status;
    if (uOperand <= 255)
    {
        *pch = (UCHAR)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pch = '\0';
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
__forceinline
NTSTATUS
RtlUIntToChar(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) CHAR* pch)
{
    return RtlUIntToUChar(uOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntToUInt8(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) UINT8* pui8Result)
{
    NTSTATUS status;
    if (uOperand <= UINT8_MAX)
    {
        *pui8Result = (UINT8)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntToShort(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) SHORT* psResult)
{
    NTSTATUS status;
    if (uOperand <= SHORT_MAX)
    {
        *psResult = (SHORT)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *psResult = SHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntToUShort(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) USHORT* pusResult)
{
    NTSTATUS status;
    if (uOperand <= USHORT_MAX)
    {
        *pusResult = (USHORT)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntToInt(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) INT* piResult)
{
    NTSTATUS status;
    if (uOperand <= INT_MAX)
    {
        *piResult = (INT)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *piResult = INT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntToIntPtr(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) INT_PTR* piResult)
{
    *piResult = uOperand;
    return STATUS_SUCCESS;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntToLong(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) LONG* plResult)
{
    NTSTATUS status;
    if (uOperand <= LONG_MAX)
    {
        *plResult = (LONG)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *plResult = LONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntToLongPtr(
    _In_ UINT uOperand,
    _Out_ _Deref_out_range_(==, uOperand) LONG_PTR* plResult)
{
    *plResult = uOperand;
    return STATUS_SUCCESS;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntPtrToInt8(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) INT8* pi8Result)
{
    NTSTATUS status;
    if (uOperand <= INT8_MAX)
    {
        *pi8Result = (INT8)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntPtrToUChar(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) UCHAR* pch)
{
    NTSTATUS status;
    if (uOperand <= 255)
    {
        *pch = (UCHAR)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pch = '\0';
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
__forceinline
NTSTATUS
RtlUIntPtrToChar(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) CHAR* pch)
{
    return RtlUIntPtrToUChar(uOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntPtrToUInt8(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==,uOperand) UINT8* pu8Result)
{
    NTSTATUS status;
    if (uOperand <= UINT8_MAX)
    {
        *pu8Result = (UINT8)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pu8Result = UINT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntPtrToShort(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) SHORT* psResult)
{
    NTSTATUS status;
    if (uOperand <= SHORT_MAX)
    {
        *psResult = (SHORT)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *psResult = SHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntPtrToInt16(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) INT16* pi16Result)
{
    NTSTATUS status;
    if (uOperand <= INT16_MAX)
    {
        *pi16Result = (INT16)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pi16Result = INT16_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntPtrToUShort(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) USHORT* pusResult)
{
    NTSTATUS status;
    if (uOperand <= USHORT_MAX)
    {
        *pusResult = (USHORT)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntPtrToUInt16(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) UINT16* pu16Result)
{
    NTSTATUS status;
    if (uOperand <= UINT16_MAX)
    {
        *pu16Result = (UINT16)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pu16Result = UINT16_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntPtrToInt(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) INT* piResult)
{
    NTSTATUS status;
    if (uOperand <= INT_MAX)
    {
        *piResult = (INT)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *piResult = INT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntPtrToIntPtr(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) INT_PTR* piResult)
{
    NTSTATUS status;
    if (uOperand <= INT_PTR_MAX)
    {
        *piResult = (INT_PTR)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *piResult = INT_PTR_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntPtrToLong(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) LONG* plResult)
{
    NTSTATUS status;
    if (uOperand <= LONG_MAX)
    {
        *plResult = (LONG)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *plResult = LONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntPtrToLongPtr(
    _In_ UINT_PTR uOperand,
    _Out_ _Deref_out_range_(==, uOperand) LONG_PTR* plResult)
{
    NTSTATUS status;
    if (uOperand <= LONG_PTR_MAX)
    {
        *plResult = (LONG_PTR)uOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *plResult = LONG_PTR_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongToInt8(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) INT8* pi8Result)
{
    NTSTATUS status;
    if ((lOperand >= INT8_MIN) && (lOperand <= INT8_MAX))
    {
        *pi8Result = (INT8)lOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongToUChar(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) UCHAR* pch)
{
    NTSTATUS status;
    if ((lOperand >= 0) && (lOperand <= 255))
    {
        *pch = (UCHAR)lOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pch = '\0';
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
__forceinline
NTSTATUS
RtlLongToChar(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) CHAR* pch)
{
    return RtlLongToUChar(lOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongToUInt8(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) UINT8* pui8Result)
{
    NTSTATUS status;
    if ((lOperand >= 0) && (lOperand <= UINT8_MAX))
    {
        *pui8Result = (UINT8)lOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongToShort(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) SHORT* psResult)
{
    NTSTATUS status;
    if ((lOperand >= SHORT_MIN) && (lOperand <= SHORT_MAX))
    {
       *psResult = (SHORT)lOperand;
       status = STATUS_SUCCESS;
    }
    else
    {
        *psResult = SHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongToUShort(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) USHORT* pusResult)
{
    NTSTATUS status;
    if ((lOperand >= 0) && (lOperand <= USHORT_MAX))
    {
        *pusResult = (USHORT)lOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongToInt(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) INT* piResult)
{
    C_ASSERT(sizeof(INT) == sizeof(LONG));
    *piResult = (INT)lOperand;
    return STATUS_SUCCESS;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongToIntPtr(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) INT_PTR* piResult)
{
    *piResult = lOperand;
    return STATUS_SUCCESS;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongToUInt(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) UINT* puResult)
{
    NTSTATUS status;
    if (lOperand >= 0)
    {
        *puResult = (UINT)lOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *puResult = UINT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongToUIntPtr(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) UINT_PTR* puResult)
{
    NTSTATUS status;
    if (lOperand >= 0)
    {
        *puResult = (UINT_PTR)lOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *puResult = UINT_PTR_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongToULong(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) ULONG* pulResult)
{
    NTSTATUS status;
    if (lOperand >= 0)
    {
        *pulResult = (ULONG)lOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pulResult = ULONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongToULongPtr(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) ULONG_PTR* pulResult)
{
    NTSTATUS status;
    if (lOperand >= 0)
    {
        *pulResult = (ULONG_PTR)lOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pulResult = ULONG_PTR_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongToULongLong(
    _In_ LONG lOperand,
    _Out_ _Deref_out_range_(==, lOperand) ULONGLONG* pullResult)
{
    NTSTATUS status;
    if (lOperand >= 0)
    {
        *pullResult = (ULONGLONG)lOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongPtrToInt8(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) INT8* pi8Result)
{
    NTSTATUS status;
    if ((lOperand >= INT8_MIN) && (lOperand <= INT8_MAX))
    {
        *pi8Result = (INT8)lOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongPtrToUChar(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) UCHAR* pch)
{
    NTSTATUS status;
    if ((lOperand >= 0) && (lOperand <= 255))
    {
        *pch = (UCHAR)lOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pch = '\0';
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
__forceinline
NTSTATUS
RtlLongPtrToChar(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) CHAR* pch)
{
    return RtlLongPtrToUChar(lOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongPtrToUInt8(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) UINT8* pui8Result)
{
    NTSTATUS status;
    if ((lOperand >= 0) && (lOperand <= UINT8_MAX))
    {
        *pui8Result = (UINT8)lOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongPtrToShort(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) SHORT* psResult)
{
    NTSTATUS status;
    if ((lOperand >= SHORT_MIN) && (lOperand <= SHORT_MAX))
    {
        *psResult = (SHORT)lOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *psResult = SHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongPtrToUShort(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) USHORT* pusResult)
{
    NTSTATUS status;
    if ((lOperand >= 0) && (lOperand <= USHORT_MAX))
    {
        *pusResult = (USHORT)lOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongPtrToIntPtr(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) INT_PTR* piResult)
{
    C_ASSERT(sizeof(LONG_PTR) == sizeof(INT_PTR));
    *piResult = (INT_PTR)lOperand;
    return STATUS_SUCCESS;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongPtrToUIntPtr(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) UINT_PTR* puResult)
{
    NTSTATUS status;
    if (lOperand >= 0)
    {
        *puResult = (UINT_PTR)lOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *puResult = UINT_PTR_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongPtrToULongPtr(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) ULONG_PTR* pulResult)
{
    NTSTATUS status;
    if (lOperand >= 0)
    {
        *pulResult = (ULONG_PTR)lOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pulResult = ULONG_PTR_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongPtrToULongLong(
    _In_ LONG_PTR lOperand,
    _Out_ _Deref_out_range_(==, lOperand) ULONGLONG* pullResult)
{
    NTSTATUS status;
    if (lOperand >= 0)
    {
        *pullResult = (ULONGLONG)lOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongToInt8(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) INT8* pi8Result)
{
    NTSTATUS status;
    if (ulOperand <= INT8_MAX)
    {
        *pi8Result = (INT8)ulOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongToUChar(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) UCHAR* pch)
{
    NTSTATUS status;
    if (ulOperand <= 255)
    {
        *pch = (UCHAR)ulOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pch = '\0';
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
__forceinline
NTSTATUS
RtlULongToChar(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) CHAR* pch)
{
    return RtlULongToUChar(ulOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongToUInt8(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) UINT8* pui8Result)
{
    NTSTATUS status;
    if (ulOperand <= UINT8_MAX)
    {
        *pui8Result = (UINT8)ulOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongToShort(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) SHORT* psResult)
{
    NTSTATUS status;
    if (ulOperand <= SHORT_MAX)
    {
        *psResult = (SHORT)ulOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *psResult = SHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongToUShort(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) USHORT* pusResult)
{
    NTSTATUS status;
    if (ulOperand <= USHORT_MAX)
    {
        *pusResult = (USHORT)ulOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongToInt(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) INT* piResult)
{
    NTSTATUS status;
    if (ulOperand <= INT_MAX)
    {
        *piResult = (INT)ulOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *piResult = INT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongToIntPtr(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) INT_PTR* piResult)
{
    *piResult = (INT_PTR)ulOperand;
    return STATUS_SUCCESS;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongToUInt(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) UINT* puResult)
{
    C_ASSERT(sizeof(ULONG) == sizeof(UINT));
    *puResult = (UINT)ulOperand;
    return STATUS_SUCCESS;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongToUIntPtr(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) UINT_PTR* puiResult)
{
    C_ASSERT(sizeof(UINT_PTR) > sizeof(ULONG));
    *puiResult = (UINT_PTR)ulOperand;
    return STATUS_SUCCESS;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongToLong(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) LONG* plResult)
{
    NTSTATUS status;
    if (ulOperand <= LONG_MAX)
    {
        *plResult = (LONG)ulOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *plResult = LONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongToLongPtr(
    _In_ ULONG ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) LONG_PTR* plResult)
{
    C_ASSERT(sizeof(LONG_PTR) > sizeof(ULONG));
    *plResult = (LONG_PTR)ulOperand;
    return STATUS_SUCCESS;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongPtrToInt8(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) INT8* pi8Result)
{
    NTSTATUS status;
    if (ulOperand <= INT8_MAX)
    {
        *pi8Result = (INT8)ulOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongPtrToUChar(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) UCHAR* pch)
{
    NTSTATUS status;
    if (ulOperand <= 255)
    {
        *pch = (UCHAR)ulOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pch = '\0';
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
__forceinline
NTSTATUS
RtlULongPtrToChar(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) CHAR* pch)
{
    return RtlULongPtrToUChar(ulOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongPtrToUInt8(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) UINT8* pui8Result)
{
    NTSTATUS status;
    if (ulOperand <= UINT8_MAX)
    {
        *pui8Result = (UINT8)ulOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pui8Result = UINT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongPtrToShort(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) SHORT* psResult)
{
    NTSTATUS status;
    if (ulOperand <= SHORT_MAX)
    {
        *psResult = (SHORT)ulOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *psResult = SHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongPtrToUShort(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) USHORT* pusResult)
{
    NTSTATUS status;
    if (ulOperand <= USHORT_MAX)
    {
        *pusResult = (USHORT)ulOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongPtrToInt(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) INT* piResult)
{
    NTSTATUS status;
    if (ulOperand <= INT_MAX)
    {
        *piResult = (INT)ulOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *piResult = INT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongPtrToIntPtr(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) INT_PTR* piResult)
{
    NTSTATUS status;
    if (ulOperand <= INT_PTR_MAX)
    {
        *piResult = (INT_PTR)ulOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *piResult = INT_PTR_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongPtrToUIntPtr(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) UINT_PTR* puResult)
{
    *puResult = (UINT_PTR)ulOperand;
    return STATUS_SUCCESS;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongPtrToLong(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) LONG* plResult)
{
    NTSTATUS status;
    if (ulOperand <= LONG_MAX)
    {
        *plResult = (LONG)ulOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *plResult = LONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongPtrToLongPtr(
    _In_ ULONG_PTR ulOperand,
    _Out_ _Deref_out_range_(==, ulOperand) LONG_PTR* plResult)
{
    NTSTATUS status;
    if (ulOperand <= LONG_PTR_MAX)
    {
        *plResult = (LONG_PTR)ulOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *plResult = LONG_PTR_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongLongToInt8(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) INT8* pi8Result)
{
    NTSTATUS status;
    if ((llOperand >= INT8_MIN) && (llOperand <= INT8_MAX))
    {
        *pi8Result = (INT8)llOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongLongToUChar(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) UCHAR* pch)
{
    NTSTATUS status;
    if ((llOperand >= 0) && (llOperand <= 255))
    {
        *pch = (UCHAR)llOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pch = '\0';
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
__forceinline
NTSTATUS
RtlLongLongToChar(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) CHAR* pch)
{
    return RtlLongLongToUChar(llOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongLongToUInt8(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) UINT8* pu8Result)
{
    NTSTATUS status;
    if ((llOperand >= 0) && (llOperand <= UINT8_MAX))
    {
        *pu8Result = (UINT8)llOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pu8Result = UINT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongLongToShort(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) SHORT* psResult)
{
    NTSTATUS status;
    if ((llOperand >= SHORT_MIN) && (llOperand <= SHORT_MAX))
    {
        *psResult = (SHORT)llOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *psResult = SHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongLongToUShort(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) USHORT* pusResult)
{
    NTSTATUS status;
    if ((llOperand >= 0) && (llOperand <= USHORT_MAX))
    {
        *pusResult = (USHORT)llOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongLongToInt(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) INT* piResult)
{
    NTSTATUS status;
    if ((llOperand >= INT_MIN) && (llOperand <= INT_MAX))
    {
        *piResult = (INT)llOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *piResult = INT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongLongToIntPtr(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) INT_PTR* piResult)
{
    *piResult = llOperand;
    return STATUS_SUCCESS;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongLongToUInt(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) UINT* puResult)
{
    NTSTATUS status;
    if ((llOperand >= 0) && (llOperand <= UINT_MAX))
    {
        *puResult = (UINT)llOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *puResult = UINT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongLongToLong(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) LONG* plResult)
{
    NTSTATUS status;
    if ((llOperand >= LONG_MIN) && (llOperand <= LONG_MAX))
    {
        *plResult = (LONG)llOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *plResult = LONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongLongToLongPtr(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) LONG_PTR* plResult)
{
    *plResult = (LONG_PTR)llOperand;
    return STATUS_SUCCESS;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongLongToULong(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) ULONG* pulResult)
{
    NTSTATUS status;
    if ((llOperand >= 0) && (llOperand <= ULONG_MAX))
    {
        *pulResult = (ULONG)llOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pulResult = ULONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlLongLongToULongLong(
    _In_ LONGLONG llOperand,
    _Out_ _Deref_out_range_(==, llOperand) ULONGLONG* pullResult)
{
    NTSTATUS status;
    if (llOperand >= 0)
    {
        *pullResult = (ULONGLONG)llOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongLongToInt8(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) INT8* pi8Result)
{
    NTSTATUS status;
    if (ullOperand <= INT8_MAX)
    {
        *pi8Result = (INT8)ullOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pi8Result = INT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongLongToUChar(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) UCHAR* pch)
{
    NTSTATUS status;
    if (ullOperand <= 255)
    {
        *pch = (UCHAR)ullOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pch = '\0';
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
__forceinline
NTSTATUS
RtlULongLongToChar(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) CHAR* pch)
{
    return RtlULongLongToUChar(ullOperand, (UCHAR*)pch);
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongLongToUInt8(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) UINT8* pu8Result)
{
    NTSTATUS status;
    if (ullOperand <= UINT8_MAX)
    {
        *pu8Result = (UINT8)ullOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pu8Result = UINT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongLongToShort(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) SHORT* psResult)
{
    NTSTATUS status;
    if (ullOperand <= SHORT_MAX)
    {
        *psResult = (SHORT)ullOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *psResult = SHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongLongToUShort(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) USHORT* pusResult)
{
    NTSTATUS status;
    if (ullOperand <= USHORT_MAX)
    {
        *pusResult = (USHORT)ullOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongLongToInt(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) INT* piResult)
{
    NTSTATUS status;
    if (ullOperand <= INT_MAX)
    {
        *piResult = (INT)ullOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *piResult = INT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongLongToUInt(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) UINT* puResult)
{
    NTSTATUS status;
    if (ullOperand <= UINT_MAX)
    {
        *puResult = (UINT)ullOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *puResult = UINT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongLongToUIntPtr(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) UINT_PTR* puResult)
{
    *puResult = ullOperand;
    return STATUS_SUCCESS;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongLongToLong(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) LONG* plResult)
{
    NTSTATUS status;
    if (ullOperand <= LONG_MAX)
    {
        *plResult = (LONG)ullOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *plResult = LONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongLongToLongPtr(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) LONG_PTR* plResult)
{
    NTSTATUS status;
    if (ullOperand <= LONG_PTR_MAX)
    {
        *plResult = (LONG_PTR)ullOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *plResult = LONG_PTR_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongLongToULong(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) ULONG* pulResult)
{
    NTSTATUS status;
    if (ullOperand <= ULONG_MAX)
    {
        *pulResult = (ULONG)ullOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pulResult = ULONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongLongToULongPtr(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) ULONG_PTR* pulResult)
{
    *pulResult = ullOperand;
    return STATUS_SUCCESS;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongLongToLongLong(
    _In_ ULONGLONG ullOperand,
    _Out_ _Deref_out_range_(==, ullOperand) LONGLONG* pllResult)
{
    NTSTATUS status;
    if (ullOperand <= LONGLONG_MAX)
    {
        *pllResult = (LONGLONG)ullOperand;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pllResult = LONGLONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUInt8Add(
    _In_ UINT8 u8Augend,
    _In_ UINT8 u8Addend,
    _Out_ _Deref_out_range_(==, u8Augend + u8Addend) UINT8* pu8Result)
{
    NTSTATUS status;
    if (((UINT8)(u8Augend + u8Addend)) >= u8Augend)
    {
        *pu8Result = (UINT8)(u8Augend + u8Addend);
        status = STATUS_SUCCESS;
    }
    else
    {
        *pu8Result = UINT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUShortAdd(
    _In_ USHORT usAugend,
    _In_ USHORT usAddend,
    _Out_ _Deref_out_range_(==, usAugend + usAddend) USHORT* pusResult)
{
    NTSTATUS status;
    if (((USHORT)(usAugend + usAddend)) >= usAugend)
    {
        *pusResult = (USHORT)(usAugend + usAddend);
        status = STATUS_SUCCESS;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntAdd(
    _In_ UINT uAugend,
    _In_ UINT uAddend,
    _Out_ _Deref_out_range_(==, uAugend + uAddend) UINT* puResult)
{
    NTSTATUS status;
    if ((uAugend + uAddend) >= uAugend)
    {
        *puResult = (uAugend + uAddend);
        status = STATUS_SUCCESS;
    }
    else
    {
        *puResult = UINT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongAdd(
    _In_ ULONG ulAugend,
    _In_ ULONG ulAddend,
    _Out_ _Deref_out_range_(==, ulAugend + ulAddend) ULONG* pulResult)
{
    NTSTATUS status;
    if ((ulAugend + ulAddend) >= ulAugend)
    {
        *pulResult = (ulAugend + ulAddend);
        status = STATUS_SUCCESS;
    }
    else
    {
        *pulResult = ULONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlSizeTAdd(
    _In_ size_t Augend,
    _In_ size_t Addend,
    _Out_ _Deref_out_range_(==, Augend + Addend) size_t* pResult)
{
    NTSTATUS status;
    if ((Augend + Addend) >= Augend)
    {
        *pResult = (Augend + Addend);
        status = STATUS_SUCCESS;
    }
    else
    {
        *pResult = SIZE_T_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongLongAdd(
    _In_ ULONGLONG ullAugend,
    _In_ ULONGLONG ullAddend,
    _Out_ _Deref_out_range_(==, ullAugend + ullAddend) ULONGLONG* pullResult)
{
    NTSTATUS status;
    if ((ullAugend + ullAddend) >= ullAugend)
    {
        *pullResult = (ullAugend + ullAddend);
        status = STATUS_SUCCESS;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUInt8Sub(
    _In_ UINT8 u8Minuend,
    _In_ UINT8 u8Subtrahend,
    _Out_ _Deref_out_range_(==, u8Minuend - u8Subtrahend) UINT8* pu8Result)
{
    NTSTATUS status;
    if (u8Minuend >= u8Subtrahend)
    {
        *pu8Result = (UINT8)(u8Minuend - u8Subtrahend);
        status = STATUS_SUCCESS;
    }
    else
    {
        *pu8Result = UINT8_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUShortSub(
    _In_ USHORT usMinuend,
    _In_ USHORT usSubtrahend,
    _Out_ _Deref_out_range_(==, usMinuend - usSubtrahend) USHORT* pusResult)
{
    NTSTATUS status;
    if (usMinuend >= usSubtrahend)
    {
        *pusResult = (USHORT)(usMinuend - usSubtrahend);
        status = STATUS_SUCCESS;
    }
    else
    {
        *pusResult = USHORT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntSub(
    _In_ UINT uMinuend,
    _In_ UINT uSubtrahend,
    _Out_ _Deref_out_range_(==, uMinuend - uSubtrahend) UINT* puResult)
{
    NTSTATUS status;
    if (uMinuend >= uSubtrahend)
    {
        *puResult = (uMinuend - uSubtrahend);
        status = STATUS_SUCCESS;
    }
    else
    {
        *puResult = UINT_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongSub(
    _In_ ULONG ulMinuend,
    _In_ ULONG ulSubtrahend,
    _Out_ _Deref_out_range_(==, ulMinuend - ulSubtrahend) ULONG* pulResult)
{
    NTSTATUS status;
    if (ulMinuend >= ulSubtrahend)
    {
        *pulResult = (ulMinuend - ulSubtrahend);
        status = STATUS_SUCCESS;
    }
    else
    {
        *pulResult = ULONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlSizeTSub(
    _In_ size_t Minuend,
    _In_ size_t Subtrahend,
    _Out_ _Deref_out_range_(==, Minuend - Subtrahend) size_t* pResult)
{
    NTSTATUS status;
    if (Minuend >= Subtrahend)
    {
        *pResult = (Minuend - Subtrahend);
        status = STATUS_SUCCESS;
    }
    else
    {
        *pResult = SIZE_T_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongLongSub(
    _In_ ULONGLONG ullMinuend,
    _In_ ULONGLONG ullSubtrahend,
    _Out_ _Deref_out_range_(==, ullMinuend - ullSubtrahend) ULONGLONG* pullResult)
{
    NTSTATUS status;
    if (ullMinuend >= ullSubtrahend)
    {
        *pullResult = (ullMinuend - ullSubtrahend);
        status = STATUS_SUCCESS;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUInt8Mult(
    _In_ UINT8 u8Multiplicand,
    _In_ UINT8 u8Multiplier,
    _Out_ _Deref_out_range_(==, u8Multiplicand * u8Multiplier) UINT8* pu8Result)
{
    UINT uResult = ((UINT)u8Multiplicand) * ((UINT)u8Multiplier);
    return RtlUIntToUInt8(uResult, pu8Result);
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUShortMult(
    _In_ USHORT usMultiplicand,
    _In_ USHORT usMultiplier,
    _Out_ _Deref_out_range_(==, usMultiplicand * usMultiplier) USHORT* pusResult)
{
    ULONG ulResult = ((ULONG)usMultiplicand) * ((ULONG)usMultiplier);
    return RtlULongToUShort(ulResult, pusResult);
}
_Must_inspect_result_
__inline
NTSTATUS
RtlUIntMult(
    _In_ UINT uMultiplicand,
    _In_ UINT uMultiplier,
    _Out_ _Deref_out_range_(==, uMultiplicand * uMultiplier) UINT* puResult)
{
    ULONGLONG ull64Result = UInt32x32To64(uMultiplicand, uMultiplier);
    return RtlULongLongToUInt(ull64Result, puResult);
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongMult(
    _In_ ULONG ulMultiplicand,
    _In_ ULONG ulMultiplier,
    _Out_ _Deref_out_range_(==, ulMultiplicand * ulMultiplier) ULONG* pulResult)
{
    ULONGLONG ull64Result = UInt32x32To64(ulMultiplicand, ulMultiplier);
    return RtlULongLongToULong(ull64Result, pulResult);
}
_Must_inspect_result_
__inline
NTSTATUS
RtlULongLongMult(
    _In_ ULONGLONG ullMultiplicand,
    _In_ ULONGLONG ullMultiplier,
    _Out_ _Deref_out_range_(==, ullMultiplicand * ullMultiplier) ULONGLONG* pullResult)
{
    NTSTATUS status;
    ULONGLONG ullResultHigh;
    ULONGLONG ullResultLow;
    ullResultLow = UnsignedMultiply128(ullMultiplicand, ullMultiplier, &ullResultHigh);
    if (ullResultHigh == 0)
    {
        _Analysis_assume_(ullMultiplicand * ullMultiplier == ullResultLow);
        *pullResult = ullResultLow;
        status = STATUS_SUCCESS;
    }
    else
    {
        *pullResult = ULONGLONG_ERROR;
        status = STATUS_INTEGER_OVERFLOW;
    }
    return status;
}
#endif
#pragma endregion
