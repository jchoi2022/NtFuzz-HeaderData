   #define POINTER_64
  typedef unsigned long POINTER_64_INT;
 #define POINTER_32
extern "C" {
typedef signed char INT8, *PINT8;
typedef signed short INT16, *PINT16;
typedef signed int INT32, *PINT32;
typedef signed __int64 INT64, *PINT64;
typedef unsigned char UINT8, *PUINT8;
typedef unsigned short UINT16, *PUINT16;
typedef unsigned int UINT32, *PUINT32;
typedef unsigned __int64 UINT64, *PUINT64;
typedef signed int LONG32, *PLONG32;
typedef unsigned int ULONG32, *PULONG32;
typedef unsigned int DWORD32, *PDWORD32;
    typedef __int64 INT_PTR, *PINT_PTR;
    typedef unsigned __int64 UINT_PTR, *PUINT_PTR;
    typedef __int64 LONG_PTR, *PLONG_PTR;
    typedef unsigned __int64 ULONG_PTR, *PULONG_PTR;
    #define __int3264 __int64
typedef __int64 SHANDLE_PTR;
typedef unsigned __int64 HANDLE_PTR;
typedef unsigned int UHALF_PTR, *PUHALF_PTR;
typedef int HALF_PTR, *PHALF_PTR;
__inline
unsigned long
HandleToULong(
    const void *h
    )
{
    return((unsigned long) (ULONG_PTR) h );
}
__inline
long
HandleToLong(
    const void *h
    )
{
    return((long) (LONG_PTR) h );
}
__inline
void *
ULongToHandle(
    const unsigned long h
    )
{
    return((void *) (UINT_PTR) h );
}
__inline
void *
LongToHandle(
    const long h
    )
{
    return((void *) (INT_PTR) h );
}
__inline
unsigned long
PtrToUlong(
    const void *p
    )
{
    return((unsigned long) (ULONG_PTR) p );
}
__inline
unsigned int
PtrToUint(
    const void *p
    )
{
    return((unsigned int) (UINT_PTR) p );
}
__inline
unsigned short
PtrToUshort(
    const void *p
    )
{
    return((unsigned short) (unsigned long) (ULONG_PTR) p );
}
__inline
long
PtrToLong(
    const void *p
    )
{
    return((long) (LONG_PTR) p );
}
__inline
int
PtrToInt(
    const void *p
    )
{
    return((int) (INT_PTR) p );
}
__inline
short
PtrToShort(
    const void *p
    )
{
    return((short) (long) (LONG_PTR) p );
}
__inline
void *
IntToPtr(
    const int i
    )
{
    return( (void *)(INT_PTR)i );
}
__inline
void *
UIntToPtr(
    const unsigned int ui
    )
{
    return( (void *)(UINT_PTR)ui );
}
__inline
void *
LongToPtr(
    const long l
    )
{
    return( (void *)(LONG_PTR)l );
}
__inline
void *
ULongToPtr(
    const unsigned long ul
    )
{
    return( (void *)(ULONG_PTR)ul );
}
__inline
void *
Ptr32ToPtr(
    const void * POINTER_32 p
    )
{
    return((void *) (ULONG_PTR) (unsigned long) p);
}
__inline
void *
Handle32ToHandle(
    const void * POINTER_32 h
    )
{
    return((void *) (LONG_PTR) (long) h);
}
__inline
void * POINTER_32
PtrToPtr32(
    const void *p
    )
{
    return((void * POINTER_32) (unsigned long) (ULONG_PTR) p);
}
typedef ULONG_PTR SIZE_T, *PSIZE_T;
typedef LONG_PTR SSIZE_T, *PSSIZE_T;
typedef ULONG_PTR DWORD_PTR, *PDWORD_PTR;
typedef __int64 LONG64, *PLONG64;
typedef unsigned __int64 ULONG64, *PULONG64;
typedef unsigned __int64 DWORD64, *PDWORD64;
typedef ULONG_PTR KAFFINITY;
typedef KAFFINITY *PKAFFINITY;
}
