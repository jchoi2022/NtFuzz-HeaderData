#include "stddef.h"
#include <specstrings.h>
#include <kernelspecs.h>
#include <basetsd.h>
typedef void *PVOID;
typedef void * POINTER_64 PVOID64;
typedef char CHAR;
typedef short SHORT;
typedef long LONG;
typedef int INT;
typedef wchar_t WCHAR;
typedef WCHAR *PWCHAR, *LPWCH, *PWCH;
typedef CONST WCHAR *LPCWCH, *PCWCH;
typedef _Null_terminated_ WCHAR *NWPSTR, *LPWSTR, *PWSTR;
typedef _Null_terminated_ PWSTR *PZPWSTR;
typedef _Null_terminated_ CONST PWSTR *PCZPWSTR;
typedef _Null_terminated_ WCHAR UNALIGNED *LPUWSTR, *PUWSTR;
typedef _Null_terminated_ CONST WCHAR *LPCWSTR, *PCWSTR;
typedef _Null_terminated_ PCWSTR *PZPCWSTR;
typedef _Null_terminated_ CONST PCWSTR *PCZPCWSTR;
typedef _Null_terminated_ CONST WCHAR UNALIGNED *LPCUWSTR, *PCUWSTR;
typedef _NullNull_terminated_ WCHAR *PZZWSTR;
typedef _NullNull_terminated_ CONST WCHAR *PCZZWSTR;
typedef _NullNull_terminated_ WCHAR UNALIGNED *PUZZWSTR;
typedef _NullNull_terminated_ CONST WCHAR UNALIGNED *PCUZZWSTR;
typedef WCHAR *PNZWCH;
typedef CONST WCHAR *PCNZWCH;
typedef WCHAR UNALIGNED *PUNZWCH;
typedef CONST WCHAR UNALIGNED *PCUNZWCH;
typedef CONST WCHAR *LPCWCHAR, *PCWCHAR;
typedef CONST WCHAR UNALIGNED *LPCUWCHAR, *PCUWCHAR;
typedef unsigned long UCSCHAR;
typedef UCSCHAR *PUCSCHAR;
typedef const UCSCHAR *PCUCSCHAR;
typedef UCSCHAR *PUCSSTR;
typedef UCSCHAR UNALIGNED *PUUCSSTR;
typedef const UCSCHAR *PCUCSSTR;
typedef const UCSCHAR UNALIGNED *PCUUCSSTR;
typedef UCSCHAR UNALIGNED *PUUCSCHAR;
typedef const UCSCHAR UNALIGNED *PCUUCSCHAR;
typedef CHAR *PCHAR, *LPCH, *PCH;
typedef CONST CHAR *LPCCH, *PCCH;
typedef _Null_terminated_ CHAR *NPSTR, *LPSTR, *PSTR;
typedef _Null_terminated_ PSTR *PZPSTR;
typedef _Null_terminated_ CONST PSTR *PCZPSTR;
typedef _Null_terminated_ CONST CHAR *LPCSTR, *PCSTR;
typedef _Null_terminated_ PCSTR *PZPCSTR;
typedef _Null_terminated_ CONST PCSTR *PCZPCSTR;
typedef _NullNull_terminated_ CHAR *PZZSTR;
typedef _NullNull_terminated_ CONST CHAR *PCZZSTR;
typedef CHAR *PNZCH;
typedef CONST CHAR *PCNZCH;
typedef WCHAR TCHAR, *PTCHAR;
typedef WCHAR TUCHAR, *PTUCHAR;
typedef LPWCH LPTCH, PTCH;
typedef LPCWCH LPCTCH, PCTCH;
typedef LPWSTR PTSTR, LPTSTR;
typedef LPCWSTR PCTSTR, LPCTSTR;
typedef LPUWSTR PUTSTR, LPUTSTR;
typedef LPCUWSTR PCUTSTR, LPCUTSTR;
typedef LPWSTR LP;
typedef PZZWSTR PZZTSTR;
typedef PCZZWSTR PCZZTSTR;
typedef PUZZWSTR PUZZTSTR;
typedef PCUZZWSTR PCUZZTSTR;
typedef PZPWSTR PZPTSTR;
typedef PNZWCH PNZTCH;
typedef PCNZWCH PCNZTCH;
typedef PUNZWCH PUNZTCH;
typedef PCUNZWCH PCUNZTCH;
typedef double DOUBLE;
typedef struct _QUAD {
    union {
        __int64 UseThisFieldToCopy;
        double DoNotUseThisField;
    } DUMMYUNIONNAME;
} QUAD;
typedef SHORT *PSHORT;
typedef LONG *PLONG;
typedef QUAD *PQUAD;
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned long ULONG;
typedef QUAD UQUAD;
typedef UCHAR *PUCHAR;
typedef USHORT *PUSHORT;
typedef ULONG *PULONG;
typedef UQUAD *PUQUAD;
typedef CONST UCHAR *PCUCHAR;
typedef CONST USHORT *PCUSHORT;
typedef CONST ULONG *PCULONG;
typedef CONST UQUAD *PCUQUAD;
typedef signed char SCHAR;
typedef SCHAR *PSCHAR;
typedef CONST SCHAR *PCSCHAR;
typedef struct _PROCESSOR_NUMBER {
    USHORT Group;
    UCHAR Number;
    UCHAR Reserved;
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER;
typedef struct _GROUP_AFFINITY {
    KAFFINITY Mask;
    USHORT Group;
    USHORT Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY;
typedef void *HANDLE;
typedef HANDLE *PHANDLE;
typedef UCHAR FCHAR;
typedef USHORT FSHORT;
typedef ULONG FLONG;
typedef LONG HRESULT;
    #define EXTERN_C extern "C"
    #define EXTERN_C_START extern "C" {
    #define EXTERN_C_END }
typedef char CCHAR;
typedef short CSHORT;
typedef ULONG CLONG;
typedef CCHAR *PCCHAR;
typedef CSHORT *PCSHORT;
typedef CLONG *PCLONG;
typedef __int64 LONGLONG;
typedef unsigned __int64 ULONGLONG;
typedef LONGLONG *PLONGLONG;
typedef ULONGLONG *PULONGLONG;
typedef LONGLONG USN;
typedef union _LARGE_INTEGER {
    struct {
        ULONG LowPart;
        LONG HighPart;
    } DUMMYSTRUCTNAME;
    struct {
        ULONG LowPart;
        LONG HighPart;
    } u;
    LONGLONG QuadPart;
} LARGE_INTEGER;
typedef LARGE_INTEGER *PLARGE_INTEGER;
typedef union _ULARGE_INTEGER {
    struct {
        ULONG LowPart;
        ULONG HighPart;
    } DUMMYSTRUCTNAME;
    struct {
        ULONG LowPart;
        ULONG HighPart;
    } u;
    ULONGLONG QuadPart;
} ULARGE_INTEGER;
typedef ULARGE_INTEGER *PULARGE_INTEGER;
typedef LONG_PTR RTL_REFERENCE_COUNT, *PRTL_REFERENCE_COUNT;
typedef LONG RTL_REFERENCE_COUNT32, *PRTL_REFERENCE_COUNT32;
typedef LARGE_INTEGER PHYSICAL_ADDRESS, *PPHYSICAL_ADDRESS;
typedef UCHAR BOOLEAN;
typedef BOOLEAN *PBOOLEAN;
    (FIELD_OFFSET(type, field) + RTL_FIELD_SIZE(type, field))
    ( (((PCHAR)(&(Struct)->Field)) + sizeof((Struct)->Field)) <= (((PCHAR)(Struct))+(Size)) )
    ((FIELD_OFFSET(T, F2) > FIELD_OFFSET(T, F1)) \
        ? (FIELD_OFFSET(T, F2) - FIELD_OFFSET(T, F1) - RTL_FIELD_SIZE(T, F1)) \
        : (FIELD_OFFSET(T, F1) - FIELD_OFFSET(T, F2) - RTL_FIELD_SIZE(T, F2)))
extern "C++"
{
char _RTL_CONSTANT_STRING_type_check(const char *s);
char _RTL_CONSTANT_STRING_type_check(const WCHAR *s);
template <size_t N> class _RTL_CONSTANT_STRING_remove_const_template_class;
template <> class _RTL_CONSTANT_STRING_remove_const_template_class<sizeof(char)> {public: typedef char T; };
template <> class _RTL_CONSTANT_STRING_remove_const_template_class<sizeof(WCHAR)> {public: typedef WCHAR T; };
    (const_cast<_RTL_CONSTANT_STRING_remove_const_template_class<sizeof((s)[0])>::T*>(s))
}
{ \
    sizeof( s ) - sizeof( (s)[0] ), \
    sizeof( s ) / sizeof(_RTL_CONSTANT_STRING_type_check(s)), \
    _RTL_CONSTANT_STRING_remove_const_macro(s) \
}
                                                  (PCHAR)(address) - \
                                                  (ULONG_PTR)(&((type *)0)->field)))
typedef UCHAR KIRQL;
typedef KIRQL *PKIRQL;
#include <sdkddkver.h>
void _Prefast_unreferenced_parameter_impl_(const char*, ...);
extern "C++" {
    template <size_t S>
    struct _ENUM_FLAG_INTEGER_FOR_SIZE;
    template <>
    struct _ENUM_FLAG_INTEGER_FOR_SIZE<1>
    {
        typedef INT8 type;
    };
    template <>
    struct _ENUM_FLAG_INTEGER_FOR_SIZE<2>
    {
        typedef INT16 type;
    };
    template <>
    struct _ENUM_FLAG_INTEGER_FOR_SIZE<4>
    {
        typedef INT32 type;
    };
    template <>
    struct _ENUM_FLAG_INTEGER_FOR_SIZE<8>
    {
        typedef INT64 type;
    };
    template <class T>
    struct _ENUM_FLAG_SIZED_INTEGER
    {
        typedef typename _ENUM_FLAG_INTEGER_FOR_SIZE<sizeof(T)>::type type;
    };
}
extern "C++" { \
inline _ENUM_FLAG_CONSTEXPR ENUMTYPE operator | (ENUMTYPE a, ENUMTYPE b) throw() { return ENUMTYPE(((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)a) | ((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)b)); } \
inline ENUMTYPE &operator |= (ENUMTYPE &a, ENUMTYPE b) throw() { return (ENUMTYPE &)(((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type &)a) |= ((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)b)); } \
inline _ENUM_FLAG_CONSTEXPR ENUMTYPE operator & (ENUMTYPE a, ENUMTYPE b) throw() { return ENUMTYPE(((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)a) & ((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)b)); } \
inline ENUMTYPE &operator &= (ENUMTYPE &a, ENUMTYPE b) throw() { return (ENUMTYPE &)(((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type &)a) &= ((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)b)); } \
inline _ENUM_FLAG_CONSTEXPR ENUMTYPE operator ~ (ENUMTYPE a) throw() { return ENUMTYPE(~((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)a)); } \
inline _ENUM_FLAG_CONSTEXPR ENUMTYPE operator ^ (ENUMTYPE a, ENUMTYPE b) throw() { return ENUMTYPE(((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)a) ^ ((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)b)); } \
inline ENUMTYPE &operator ^= (ENUMTYPE &a, ENUMTYPE b) throw() { return (ENUMTYPE &)(((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type &)a) ^= ((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)b)); } \
}
#pragma warning( default:4164 )
FORCEINLINE
CHAR
ReadRaw8 (
    _In_ _Interlocked_operand_ CHAR const volatile *Source
    )
{
    CHAR Value;
    Value = *(CHAR *)Source;
    return Value;
}
FORCEINLINE
VOID
WriteRaw8 (
    _Out_ _Interlocked_operand_ CHAR volatile *Destination,
    _In_ CHAR Value
    )
{
    *(CHAR *)Destination = Value;
    return;
}
FORCEINLINE
SHORT
ReadRaw16 (
    _In_ _Interlocked_operand_ SHORT const volatile *Source
    )
{
    SHORT Value;
    Value = *(SHORT *)Source;
    return Value;
}
FORCEINLINE
VOID
WriteRaw16 (
    _Out_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT Value
    )
{
    *(SHORT *)Destination = Value;
    return;
}
FORCEINLINE
LONG
ReadRaw (
    _In_ _Interlocked_operand_ LONG const volatile *Source
    )
{
    LONG Value;
    Value = *(LONG *)Source;
    return Value;
}
CFORCEINLINE
VOID
WriteRaw (
    _Out_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG Value
    )
{
    *(LONG *)Destination = Value;
    return;
}
FORCEINLINE
LONG64
ReadRaw64 (
    _In_ _Interlocked_operand_ LONG64 const volatile *Source
    )
{
    LONG64 Value;
    Value = *(LONG64 *)Source;
    return Value;
}
FORCEINLINE
VOID
WriteRaw64 (
    _Out_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 Value
    )
{
    *(LONG64 *)Destination = Value;
    return;
}
FORCEINLINE
UCHAR
ReadUCharAcquire (
    _In_ _Interlocked_operand_ UCHAR const volatile *Source
    )
{
    return (UCHAR)ReadAcquire8((PCHAR)Source);
}
FORCEINLINE
UCHAR
ReadUCharNoFence (
    _In_ _Interlocked_operand_ UCHAR const volatile *Source
    )
{
    return (UCHAR)ReadNoFence8((PCHAR)Source);
}
FORCEINLINE
UCHAR
ReadBooleanAcquire (
    _In_ _Interlocked_operand_ BOOLEAN const volatile *Source
    )
{
    return (BOOLEAN)ReadAcquire8((PCHAR)Source);
}
FORCEINLINE
UCHAR
ReadBooleanNoFence (
    _In_ _Interlocked_operand_ BOOLEAN const volatile *Source
    )
{
    return (BOOLEAN)ReadNoFence8((PCHAR)Source);
}
FORCEINLINE
UCHAR
ReadUCharRaw (
    _In_ _Interlocked_operand_ UCHAR const volatile *Source
    )
{
    return (UCHAR)ReadRaw8((PCHAR)Source);
}
FORCEINLINE
VOID
WriteUCharRelease (
    _Out_ _Interlocked_operand_ UCHAR volatile *Destination,
    _In_ UCHAR Value
    )
{
    WriteRelease8((PCHAR)Destination, (CHAR)Value);
    return;
}
FORCEINLINE
VOID
WriteUCharNoFence (
    _Out_ _Interlocked_operand_ UCHAR volatile *Destination,
    _In_ UCHAR Value
    )
{
    WriteNoFence8((PCHAR)Destination, (CHAR)Value);
    return;
}
FORCEINLINE
VOID
WriteBooleanRelease (
    _Out_ _Interlocked_operand_ BOOLEAN volatile *Destination,
    _In_ BOOLEAN Value
    )
{
    WriteRelease8((PCHAR)Destination, (CHAR)Value);
    return;
}
FORCEINLINE
VOID
WriteBooleanNoFence (
    _Out_ _Interlocked_operand_ BOOLEAN volatile *Destination,
    _In_ BOOLEAN Value
    )
{
    WriteNoFence8((PCHAR)Destination, (CHAR)Value);
    return;
}
FORCEINLINE
VOID
WriteUCharRaw (
    _Out_ _Interlocked_operand_ UCHAR volatile *Destination,
    _In_ UCHAR Value
    )
{
    WriteRaw8((PCHAR)Destination, (CHAR)Value);
    return;
}
FORCEINLINE
USHORT
ReadUShortAcquire (
    _In_ _Interlocked_operand_ USHORT const volatile *Source
    )
{
    return (USHORT)ReadAcquire16((PSHORT)Source);
}
FORCEINLINE
USHORT
ReadUShortNoFence (
    _In_ _Interlocked_operand_ USHORT const volatile *Source
    )
{
    return (USHORT)ReadNoFence16((PSHORT)Source);
}
FORCEINLINE
USHORT
ReadUShortRaw (
    _In_ _Interlocked_operand_ USHORT const volatile *Source
    )
{
    return (USHORT)ReadRaw16((PSHORT)Source);
}
FORCEINLINE
VOID
WriteUShortRelease (
    _Out_ _Interlocked_operand_ USHORT volatile *Destination,
    _In_ USHORT Value
    )
{
    WriteRelease16((PSHORT)Destination, (SHORT)Value);
    return;
}
FORCEINLINE
VOID
WriteUShortNoFence (
    _Out_ _Interlocked_operand_ USHORT volatile *Destination,
    _In_ USHORT Value
    )
{
    WriteNoFence16((PSHORT)Destination, (SHORT)Value);
    return;
}
FORCEINLINE
VOID
WriteUShortRaw (
    _Out_ _Interlocked_operand_ USHORT volatile *Destination,
    _In_ USHORT Value
    )
{
    WriteRaw16((PSHORT)Destination, (SHORT)Value);
    return;
}
FORCEINLINE
ULONG
ReadULongAcquire (
    _In_ _Interlocked_operand_ ULONG const volatile *Source
    )
{
    return (ULONG)ReadAcquire((PLONG)Source);
}
FORCEINLINE
ULONG
ReadULongNoFence (
    _In_ _Interlocked_operand_ ULONG const volatile *Source
    )
{
    return (ULONG)ReadNoFence((PLONG)Source);
}
FORCEINLINE
ULONG
ReadULongRaw (
    _In_ _Interlocked_operand_ ULONG const volatile *Source
    )
{
    return (ULONG)ReadRaw((PLONG)Source);
}
CFORCEINLINE
VOID
WriteULongRelease (
    _Out_ _Interlocked_operand_ ULONG volatile *Destination,
    _In_ ULONG Value
    )
{
    WriteRelease((PLONG)Destination, (LONG)Value);
    return;
}
FORCEINLINE
VOID
WriteULongNoFence (
    _Out_ _Interlocked_operand_ ULONG volatile *Destination,
    _In_ ULONG Value
    )
{
    WriteNoFence((PLONG)Destination, (LONG)Value);
    return;
}
FORCEINLINE
VOID
WriteULongRaw (
    _Out_ _Interlocked_operand_ ULONG volatile *Destination,
    _In_ ULONG Value
    )
{
    WriteRaw((PLONG)Destination, (LONG)Value);
    return;
}
FORCEINLINE
ULONG64
ReadULong64Acquire (
    _In_ _Interlocked_operand_ ULONG64 const volatile *Source
    )
{
    return (ULONG64)ReadAcquire64((PLONG64)Source);
}
FORCEINLINE
ULONG64
ReadULong64NoFence (
    _In_ _Interlocked_operand_ ULONG64 const volatile *Source
    )
{
    return (ULONG64)ReadNoFence64((PLONG64)Source);
}
FORCEINLINE
ULONG64
ReadULong64Raw (
    _In_ _Interlocked_operand_ ULONG64 const volatile *Source
    )
{
    return (ULONG64)ReadRaw64((PLONG64)Source);
}
CFORCEINLINE
VOID
WriteULong64Release (
    _Out_ _Interlocked_operand_ ULONG64 volatile *Destination,
    _In_ ULONG64 Value
    )
{
    WriteRelease64((PLONG64)Destination, (LONG64)Value);
    return;
}
FORCEINLINE
VOID
WriteULong64NoFence (
    _Out_ _Interlocked_operand_ ULONG64 volatile *Destination,
    _In_ ULONG64 Value
    )
{
    WriteNoFence64((PLONG64)Destination, (LONG64)Value);
    return;
}
FORCEINLINE
VOID
WriteULong64Raw (
    _Out_ _Interlocked_operand_ ULONG64 volatile *Destination,
    _In_ ULONG64 Value
    )
{
    WriteRaw64((PLONG64)Destination, (LONG64)Value);
    return;
}
FORCEINLINE
PVOID
ReadPointerAcquire (
    _In_ _Interlocked_operand_ PVOID const volatile *Source
    )
{
    return (PVOID)ReadAcquire64((PLONG64)Source);
}
CFORCEINLINE
PVOID
ReadPointerNoFence (
    _In_ _Interlocked_operand_ PVOID const volatile *Source
    )
{
    return (PVOID)ReadNoFence64((PLONG64)Source);
}
FORCEINLINE
PVOID
ReadPointerRaw (
    _In_ _Interlocked_operand_ PVOID const volatile *Source
    )
{
    return (PVOID)ReadRaw64((PLONG64)Source);
}
FORCEINLINE
VOID
WritePointerRelease (
    _Out_ _Interlocked_operand_ PVOID volatile *Destination,
    _In_ PVOID Value
    )
{
    WriteRelease64((PLONG64)Destination, (LONG64)Value);
    return;
}
FORCEINLINE
VOID
WritePointerNoFence (
    _Out_ _Interlocked_operand_ PVOID volatile *Destination,
    _In_ PVOID Value
    )
{
    WriteNoFence64((PLONG64)Destination, (LONG64)Value);
    return;
}
FORCEINLINE
VOID
WritePointerRaw (
    _Out_ _Interlocked_operand_ PVOID volatile *Destination,
    _In_ PVOID Value
    )
{
    WriteRaw64((PLONG64)Destination, (LONG64)Value);
    return;
}
typedef enum _LOGICAL_PROCESSOR_RELATIONSHIP {
    RelationProcessorCore,
    RelationNumaNode,
    RelationCache,
    RelationProcessorPackage,
    RelationGroup,
    RelationAll = 0xffff
} LOGICAL_PROCESSOR_RELATIONSHIP;
typedef enum _PROCESSOR_CACHE_TYPE {
    CacheUnified,
    CacheInstruction,
    CacheData,
    CacheTrace
} PROCESSOR_CACHE_TYPE;
typedef struct _CACHE_DESCRIPTOR {
    UCHAR Level;
    UCHAR Associativity;
    USHORT LineSize;
    ULONG Size;
    PROCESSOR_CACHE_TYPE Type;
} CACHE_DESCRIPTOR, *PCACHE_DESCRIPTOR;
typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION {
    ULONG_PTR ProcessorMask;
    LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
    union {
        struct {
            UCHAR Flags;
        } ProcessorCore;
        struct {
            ULONG NodeNumber;
        } NumaNode;
        CACHE_DESCRIPTOR Cache;
        ULONGLONG Reserved[2];
    } DUMMYUNIONNAME;
} SYSTEM_LOGICAL_PROCESSOR_INFORMATION, *PSYSTEM_LOGICAL_PROCESSOR_INFORMATION;
typedef struct _PROCESSOR_RELATIONSHIP {
    UCHAR Flags;
    UCHAR EfficiencyClass;
    UCHAR Reserved[20];
    USHORT GroupCount;
    _Field_size_(GroupCount) GROUP_AFFINITY GroupMask[ANYSIZE_ARRAY];
} PROCESSOR_RELATIONSHIP, *PPROCESSOR_RELATIONSHIP;
typedef struct _NUMA_NODE_RELATIONSHIP {
    ULONG NodeNumber;
    UCHAR Reserved[20];
    GROUP_AFFINITY GroupMask;
} NUMA_NODE_RELATIONSHIP, *PNUMA_NODE_RELATIONSHIP;
typedef struct _CACHE_RELATIONSHIP {
    UCHAR Level;
    UCHAR Associativity;
    USHORT LineSize;
    ULONG CacheSize;
    PROCESSOR_CACHE_TYPE Type;
    UCHAR Reserved[20];
    GROUP_AFFINITY GroupMask;
} CACHE_RELATIONSHIP, *PCACHE_RELATIONSHIP;
typedef struct _PROCESSOR_GROUP_INFO {
    UCHAR MaximumProcessorCount;
    UCHAR ActiveProcessorCount;
    UCHAR Reserved[38];
    KAFFINITY ActiveProcessorMask;
} PROCESSOR_GROUP_INFO, *PPROCESSOR_GROUP_INFO;
typedef struct _GROUP_RELATIONSHIP {
    USHORT MaximumGroupCount;
    USHORT ActiveGroupCount;
    UCHAR Reserved[20];
    PROCESSOR_GROUP_INFO GroupInfo[ANYSIZE_ARRAY];
} GROUP_RELATIONSHIP, *PGROUP_RELATIONSHIP;
_Struct_size_bytes_(Size) struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX {
    LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
    ULONG Size;
    union {
        PROCESSOR_RELATIONSHIP Processor;
        NUMA_NODE_RELATIONSHIP NumaNode;
        CACHE_RELATIONSHIP Cache;
        GROUP_RELATIONSHIP Group;
    } DUMMYUNIONNAME;
};
typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX, *PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX;
typedef enum _CPU_SET_INFORMATION_TYPE {
    CpuSetInformation
} CPU_SET_INFORMATION_TYPE, *PCPU_SET_INFORMATION_TYPE;
_Struct_size_bytes_(Size) struct _SYSTEM_CPU_SET_INFORMATION {
    ULONG Size;
    CPU_SET_INFORMATION_TYPE Type;
    union {
        struct {
            ULONG Id;
            USHORT Group;
            UCHAR LogicalProcessorIndex;
            UCHAR CoreIndex;
            UCHAR LastLevelCacheIndex;
            UCHAR NumaNodeIndex;
            UCHAR EfficiencyClass;
            union {
                UCHAR AllFlags;
                struct {
                    UCHAR Parked : 1;
                    UCHAR Allocated : 1;
                    UCHAR AllocatedToTargetProcess : 1;
                    UCHAR RealTime : 1;
                    UCHAR ReservedFlags : 4;
                } DUMMYSTRUCTNAME;
            } DUMMYUNIONNAME2;
            union {
                ULONG Reserved;
                UCHAR SchedulingClass;
            };
            ULONG64 AllocationTag;
        } CpuSet;
    } DUMMYUNIONNAME;
};
typedef struct _SYSTEM_CPU_SET_INFORMATION SYSTEM_CPU_SET_INFORMATION, *PSYSTEM_CPU_SET_INFORMATION;
typedef enum _INTERFACE_TYPE {
    InterfaceTypeUndefined = -1,
    Internal,
    Isa,
    Eisa,
    MicroChannel,
    TurboChannel,
    PCIBus,
    VMEBus,
    NuBus,
    PCMCIABus,
    CBus,
    MPIBus,
    MPSABus,
    ProcessorInternal,
    InternalPowerBus,
    PNPISABus,
    PNPBus,
    Vmcs,
    ACPIBus,
    MaximumInterfaceType
}INTERFACE_TYPE, *PINTERFACE_TYPE;
typedef enum _DMA_WIDTH {
    Width8Bits,
    Width16Bits,
    Width32Bits,
    Width64Bits,
    WidthNoWrap,
    MaximumDmaWidth
}DMA_WIDTH, *PDMA_WIDTH;
typedef enum _DMA_SPEED {
    Compatible,
    TypeA,
    TypeB,
    TypeC,
    TypeF,
    MaximumDmaSpeed
}DMA_SPEED, *PDMA_SPEED;
typedef VOID (*PINTERFACE_REFERENCE)(PVOID Context);
typedef VOID (*PINTERFACE_DEREFERENCE)(PVOID Context);
typedef enum _BUS_DATA_TYPE {
    ConfigurationSpaceUndefined = -1,
    Cmos,
    EisaConfiguration,
    Pos,
    CbusConfiguration,
    PCIConfiguration,
    VMEConfiguration,
    NuBusConfiguration,
    PCMCIAConfiguration,
    MPIConfiguration,
    MPSAConfiguration,
    PNPISAConfiguration,
    SgiInternalConfiguration,
    MaximumBusDataType
} BUS_DATA_TYPE, *PBUS_DATA_TYPE;
#include <guiddef.h>
extern "C" {
}
extern "C" {
__forceinline
UCHAR
READ_REGISTER_UCHAR (
    _In_ _Notliteral_ volatile UCHAR *Register
    )
{
    _ReadWriteBarrier();
    return *Register;
}
__forceinline
USHORT
READ_REGISTER_USHORT (
    _In_ _Notliteral_ volatile USHORT *Register
    )
{
    _ReadWriteBarrier();
    return *Register;
}
__forceinline
ULONG
READ_REGISTER_ULONG (
    _In_ _Notliteral_ volatile ULONG *Register
    )
{
    _ReadWriteBarrier();
    return *Register;
}
__forceinline
ULONG64
READ_REGISTER_ULONG64 (
    _In_ _Notliteral_ volatile ULONG64 *Register
    )
{
    _ReadWriteBarrier();
    return *Register;
}
__forceinline
VOID
READ_REGISTER_BUFFER_UCHAR (
    _In_reads_(Count) _Notliteral_ volatile UCHAR *Register,
    _Out_writes_all_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __movsb(Buffer, (PUCHAR)Register, Count);
    return;
}
__forceinline
VOID
READ_REGISTER_BUFFER_USHORT (
    _In_reads_(Count) _Notliteral_ volatile USHORT *Register,
    _Out_writes_all_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __movsw(Buffer, (PUSHORT)Register, Count);
    return;
}
__forceinline
VOID
READ_REGISTER_BUFFER_ULONG (
    _In_reads_(Count) _Notliteral_ volatile ULONG *Register,
    _Out_writes_all_(Count) PULONG Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __movsd(Buffer, (PULONG)Register, Count);
    return;
}
__forceinline
VOID
READ_REGISTER_BUFFER_ULONG64 (
    _In_reads_(Count) _Notliteral_ volatile ULONG64 *Register,
    _Out_writes_all_(Count) PULONG64 Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __movsq(Buffer, (PULONG64)Register, Count);
    return;
}
__forceinline
VOID
WRITE_REGISTER_UCHAR (
    _In_ _Notliteral_ volatile UCHAR *Register,
    _In_ UCHAR Value
    )
{
    *Register = Value;
    FastFence();
    return;
}
__forceinline
VOID
WRITE_REGISTER_USHORT (
    _In_ _Notliteral_ volatile USHORT *Register,
    _In_ USHORT Value
    )
{
    *Register = Value;
    FastFence();
    return;
}
__forceinline
VOID
WRITE_REGISTER_ULONG (
    _In_ _Notliteral_ volatile ULONG *Register,
    _In_ ULONG Value
    )
{
    *Register = Value;
    FastFence();
    return;
}
__forceinline
VOID
WRITE_REGISTER_ULONG64 (
    _In_ _Notliteral_ volatile ULONG64 *Register,
    _In_ ULONG64 Value
    )
{
    *Register = Value;
    FastFence();
    return;
}
__forceinline
VOID
WRITE_REGISTER_BUFFER_UCHAR (
    _Out_writes_(Count) _Notliteral_ volatile UCHAR *Register,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    )
{
    __movsb((PUCHAR)Register, Buffer, Count);
    FastFence();
    return;
}
__forceinline
VOID
WRITE_REGISTER_BUFFER_USHORT (
    _Out_writes_(Count) _Notliteral_ volatile USHORT *Register,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    )
{
    __movsw((PUSHORT)Register, Buffer, Count);
    FastFence();
    return;
}
__forceinline
VOID
WRITE_REGISTER_BUFFER_ULONG (
    _Out_writes_(Count) _Notliteral_ volatile ULONG *Register,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG Count
    )
{
    __movsd((PULONG)Register, Buffer, Count);
    FastFence();
    return;
}
__forceinline
VOID
WRITE_REGISTER_BUFFER_ULONG64 (
    _Out_writes_(Count) _Notliteral_ volatile ULONG64 *Register,
    _In_reads_(Count) PULONG64 Buffer,
    _In_ ULONG Count
    )
{
    __movsq((PULONG64)Register, Buffer, Count);
    FastFence();
    return;
}
__forceinline
UCHAR
READ_PORT_UCHAR (
    _In_ _Notliteral_ PUCHAR Port
    )
{
    UCHAR Result;
    _ReadWriteBarrier();
    Result = __inbyte((USHORT)((ULONG_PTR)Port));
    _ReadWriteBarrier();
    return Result;
}
__forceinline
USHORT
READ_PORT_USHORT (
    _In_ _Notliteral_ PUSHORT Port
    )
{
    USHORT Result;
    _ReadWriteBarrier();
    Result = __inword((USHORT)((ULONG_PTR)Port));
    _ReadWriteBarrier();
    return Result;
}
__forceinline
ULONG
READ_PORT_ULONG (
    _In_ _Notliteral_ PULONG Port
    )
{
    ULONG Result;
    _ReadWriteBarrier();
    Result = __indword((USHORT)((ULONG_PTR)Port));
    _ReadWriteBarrier();
    return Result;
}
__forceinline
VOID
READ_PORT_BUFFER_UCHAR (
    _In_ _Notliteral_ PUCHAR Port,
    _Out_writes_all_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __inbytestring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}
__forceinline
VOID
READ_PORT_BUFFER_USHORT (
    _In_ _Notliteral_ PUSHORT Port,
    _Out_writes_all_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __inwordstring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}
__forceinline
VOID
READ_PORT_BUFFER_ULONG (
    _In_ _Notliteral_ PULONG Port,
    _Out_writes_all_(Count) PULONG Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __indwordstring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}
__forceinline
VOID
WRITE_PORT_UCHAR (
    _In_ _Notliteral_ PUCHAR Port,
    _In_ UCHAR Value
    )
{
    _ReadWriteBarrier();
    __outbyte((USHORT)((ULONG_PTR)Port), Value);
    _ReadWriteBarrier();
    return;
}
__forceinline
VOID
WRITE_PORT_USHORT (
    _In_ _Notliteral_ PUSHORT Port,
    _In_ USHORT Value
    )
{
    _ReadWriteBarrier();
    __outword((USHORT)((ULONG_PTR)Port), Value);
    _ReadWriteBarrier();
    return;
}
__forceinline
VOID
WRITE_PORT_ULONG (
    _In_ _Notliteral_ PULONG Port,
    _In_ ULONG Value
    )
{
    _ReadWriteBarrier();
    __outdword((USHORT)((ULONG_PTR)Port), Value);
    _ReadWriteBarrier();
    return;
}
__forceinline
VOID
WRITE_PORT_BUFFER_UCHAR (
    _In_ _Notliteral_ PUCHAR Port,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __outbytestring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}
__forceinline
VOID
WRITE_PORT_BUFFER_USHORT (
    _In_ _Notliteral_ PUSHORT Port,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __outwordstring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}
__forceinline
VOID
WRITE_PORT_BUFFER_ULONG (
    _In_ _Notliteral_ PULONG Port,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __outdwordstring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}
}
typedef enum _KINTERRUPT_MODE {
    LevelSensitive,
    Latched
} KINTERRUPT_MODE;
typedef enum _KINTERRUPT_POLARITY {
    InterruptPolarityUnknown,
    InterruptActiveHigh,
    InterruptRisingEdge = InterruptActiveHigh,
    InterruptActiveLow,
    InterruptFallingEdge = InterruptActiveLow,
    InterruptActiveBoth,
    InterruptActiveBothTriggerLow = InterruptActiveBoth,
    InterruptActiveBothTriggerHigh,
} KINTERRUPT_POLARITY, *PKINTERRUPT_POLARITY;
typedef enum _MEMORY_CACHING_TYPE_ORIG {
    MmFrameBufferCached = 2
} MEMORY_CACHING_TYPE_ORIG;
typedef enum _MEMORY_CACHING_TYPE {
    MmNonCached = FALSE,
    MmCached = TRUE,
    MmWriteCombined = MmFrameBufferCached,
    MmHardwareCoherentCached,
    MmNonCachedUnordered,
    MmUSWCCached,
    MmMaximumCacheType,
    MmNotMapped = -1
} MEMORY_CACHING_TYPE;
typedef enum _EMULATOR_PORT_ACCESS_TYPE {
    Uchar,
    Ushort,
    Ulong
} EMULATOR_PORT_ACCESS_TYPE, *PEMULATOR_PORT_ACCESS_TYPE;
typedef struct _EMULATOR_ACCESS_ENTRY {
    ULONG BasePort;
    ULONG NumConsecutivePorts;
    EMULATOR_PORT_ACCESS_TYPE AccessType;
    UCHAR AccessMode;
    UCHAR StringSupport;
    PVOID Routine;
} EMULATOR_ACCESS_ENTRY, *PEMULATOR_ACCESS_ENTRY;
typedef struct _PCI_SLOT_NUMBER {
    union {
        struct {
            ULONG DeviceNumber:5;
            ULONG FunctionNumber:3;
            ULONG Reserved:24;
        } bits;
        ULONG AsULONG;
    } u;
} PCI_SLOT_NUMBER, *PPCI_SLOT_NUMBER;
typedef struct _PCI_COMMON_HEADER {
    USHORT VendorID;
    USHORT DeviceID;
    USHORT Command;
    USHORT Status;
    UCHAR RevisionID;
    UCHAR ProgIf;
    UCHAR SubClass;
    UCHAR BaseClass;
    UCHAR CacheLineSize;
    UCHAR LatencyTimer;
    UCHAR HeaderType;
    UCHAR BIST;
    union {
        struct _PCI_HEADER_TYPE_0 {
            ULONG BaseAddresses[PCI_TYPE0_ADDRESSES];
            ULONG CIS;
            USHORT SubVendorID;
            USHORT SubSystemID;
            ULONG ROMBaseAddress;
            UCHAR CapabilitiesPtr;
            UCHAR Reserved1[3];
            ULONG Reserved2;
            UCHAR InterruptLine;
            UCHAR InterruptPin;
            UCHAR MinimumGrant;
            UCHAR MaximumLatency;
        } type0;
    } u;
} PCI_COMMON_HEADER, *PPCI_COMMON_HEADER;
typedef struct _PCI_COMMON_CONFIG : PCI_COMMON_HEADER {
    UCHAR DeviceSpecific[192];
} PCI_COMMON_CONFIG, *PPCI_COMMON_CONFIG;
    (((PPCI_COMMON_CONFIG)(PciData))->HeaderType & ~PCI_MULTIFUNCTION)
    ((((PPCI_COMMON_CONFIG)(PciData))->HeaderType & PCI_MULTIFUNCTION) != 0)
typedef struct _PCI_CAPABILITIES_HEADER {
    UCHAR CapabilityID;
    UCHAR Next;
} PCI_CAPABILITIES_HEADER, *PPCI_CAPABILITIES_HEADER;
typedef struct _PCI_PMC {
    UCHAR Version:3;
    UCHAR PMEClock:1;
    UCHAR Rsvd1:1;
    UCHAR DeviceSpecificInitialization:1;
    UCHAR Rsvd2:2;
    struct _PM_SUPPORT {
        UCHAR Rsvd2:1;
        UCHAR D1:1;
        UCHAR D2:1;
        UCHAR PMED0:1;
        UCHAR PMED1:1;
        UCHAR PMED2:1;
        UCHAR PMED3Hot:1;
        UCHAR PMED3Cold:1;
    } Support;
} PCI_PMC, *PPCI_PMC;
typedef struct _PCI_PMCSR {
    USHORT PowerState:2;
    USHORT Rsvd1:1;
    USHORT NoSoftReset:1;
    USHORT Rsvd2:4;
    USHORT PMEEnable:1;
    USHORT DataSelect:4;
    USHORT DataScale:2;
    USHORT PMEStatus:1;
} PCI_PMCSR, *PPCI_PMCSR;
typedef struct _PCI_PMCSR_BSE {
    UCHAR Rsvd1:6;
    UCHAR D3HotSupportsStopClock:1;
    UCHAR BusPowerClockControlEnabled:1;
} PCI_PMCSR_BSE, *PPCI_PMCSR_BSE;
typedef struct _PCI_PM_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    union {
        PCI_PMC Capabilities;
        USHORT AsUSHORT;
    } PMC;
    union {
        PCI_PMCSR ControlStatus;
        USHORT AsUSHORT;
    } PMCSR;
    union {
        PCI_PMCSR_BSE BridgeSupport;
        UCHAR AsUCHAR;
    } PMCSR_BSE;
    UCHAR Data;
} PCI_PM_CAPABILITY, *PPCI_PM_CAPABILITY;
typedef struct _PCI_AGP_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    USHORT Minor:4;
    USHORT Major:4;
    USHORT Rsvd1:8;
    struct _PCI_AGP_STATUS {
        ULONG Rate:3;
        ULONG Agp3Mode:1;
        ULONG FastWrite:1;
        ULONG FourGB:1;
        ULONG HostTransDisable:1;
        ULONG Gart64:1;
        ULONG ITA_Coherent:1;
        ULONG SideBandAddressing:1;
        ULONG CalibrationCycle:3;
        ULONG AsyncRequestSize:3;
        ULONG Rsvd1:1;
        ULONG Isoch:1;
        ULONG Rsvd2:6;
        ULONG RequestQueueDepthMaximum:8;
    } AGPStatus;
    struct _PCI_AGP_COMMAND {
        ULONG Rate:3;
        ULONG Rsvd1:1;
        ULONG FastWriteEnable:1;
        ULONG FourGBEnable:1;
        ULONG Rsvd2:1;
        ULONG Gart64:1;
        ULONG AGPEnable:1;
        ULONG SBAEnable:1;
        ULONG CalibrationCycle:3;
        ULONG AsyncReqSize:3;
        ULONG Rsvd3:8;
        ULONG RequestQueueDepth:8;
    } AGPCommand;
} PCI_AGP_CAPABILITY, *PPCI_AGP_CAPABILITY;
typedef enum _EXTENDED_AGP_REGISTER {
    IsochStatus,
    AgpControl,
    ApertureSize,
    AperturePageSize,
    GartLow,
    GartHigh,
    IsochCommand
} EXTENDED_AGP_REGISTER, *PEXTENDED_AGP_REGISTER;
typedef struct _PCI_AGP_ISOCH_STATUS {
    ULONG ErrorCode: 2;
    ULONG Rsvd1: 1;
    ULONG Isoch_L: 3;
    ULONG Isoch_Y: 2;
    ULONG Isoch_N: 8;
    ULONG Rsvd2: 16;
} PCI_AGP_ISOCH_STATUS, *PPCI_AGP_ISOCH_STATUS;
typedef struct _PCI_AGP_CONTROL {
    ULONG Rsvd1: 7;
    ULONG GTLB_Enable: 1;
    ULONG AP_Enable: 1;
    ULONG CAL_Disable: 1;
    ULONG Rsvd2: 22;
} PCI_AGP_CONTROL, *PPCI_AGP_CONTROL;
typedef struct _PCI_AGP_APERTURE_PAGE_SIZE {
    USHORT PageSizeMask: 11;
    USHORT Rsvd1: 1;
    USHORT PageSizeSelect: 4;
} PCI_AGP_APERTURE_PAGE_SIZE, *PPCI_AGP_APERTURE_PAGE_SIZE;
typedef struct _PCI_AGP_ISOCH_COMMAND {
    USHORT Rsvd1: 6;
    USHORT Isoch_Y: 2;
    USHORT Isoch_N: 8;
} PCI_AGP_ISOCH_COMMAND, *PPCI_AGP_ISOCH_COMMAND;
typedef struct PCI_AGP_EXTENDED_CAPABILITY {
    PCI_AGP_ISOCH_STATUS IsochStatus;
    PCI_AGP_CONTROL AgpControl;
    USHORT ApertureSize;
    PCI_AGP_APERTURE_PAGE_SIZE AperturePageSize;
    ULONG GartLow;
    ULONG GartHigh;
    PCI_AGP_ISOCH_COMMAND IsochCommand;
} PCI_AGP_EXTENDED_CAPABILITY, *PPCI_AGP_EXTENDED_CAPABILITY;
typedef struct {
    PCI_CAPABILITIES_HEADER Header;
    union {
        struct {
            USHORT DataParityErrorRecoveryEnable:1;
            USHORT EnableRelaxedOrdering:1;
            USHORT MaxMemoryReadByteCount:2;
            USHORT MaxOutstandingSplitTransactions:3;
            USHORT Reserved:9;
        } bits;
        USHORT AsUSHORT;
    } Command;
    union {
        struct {
            ULONG FunctionNumber:3;
            ULONG DeviceNumber:5;
            ULONG BusNumber:8;
            ULONG Device64Bit:1;
            ULONG Capable133MHz:1;
            ULONG SplitCompletionDiscarded:1;
            ULONG UnexpectedSplitCompletion:1;
            ULONG DeviceComplexity:1;
            ULONG DesignedMaxMemoryReadByteCount:2;
            ULONG DesignedMaxOutstandingSplitTransactions:3;
            ULONG DesignedMaxCumulativeReadSize:3;
            ULONG ReceivedSplitCompletionErrorMessage:1;
            ULONG CapablePCIX266:1;
            ULONG CapablePCIX533:1;
        } bits;
        ULONG AsULONG;
    } Status;
} PCI_X_CAPABILITY, *PPCI_X_CAPABILITY;
typedef struct _PCIX_BRIDGE_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    union {
        struct {
            USHORT Bus64Bit:1;
            USHORT Bus133MHzCapable:1;
            USHORT SplitCompletionDiscarded:1;
            USHORT UnexpectedSplitCompletion:1;
            USHORT SplitCompletionOverrun:1;
            USHORT SplitRequestDelayed:1;
            USHORT BusModeFrequency:4;
            USHORT Rsvd:2;
            USHORT Version:2;
            USHORT Bus266MHzCapable:1;
            USHORT Bus533MHzCapable:1;
        } DUMMYSTRUCTNAME;
        USHORT AsUSHORT;
    } SecondaryStatus;
    union {
        struct {
            ULONG FunctionNumber:3;
            ULONG DeviceNumber:5;
            ULONG BusNumber:8;
            ULONG Device64Bit:1;
            ULONG Device133MHzCapable:1;
            ULONG SplitCompletionDiscarded:1;
            ULONG UnexpectedSplitCompletion:1;
            ULONG SplitCompletionOverrun:1;
            ULONG SplitRequestDelayed:1;
            ULONG Rsvd:7;
            ULONG DIMCapable:1;
            ULONG Device266MHzCapable:1;
            ULONG Device533MHzCapable:1;
        } DUMMYSTRUCTNAME;
        ULONG AsULONG;
    } BridgeStatus;
    USHORT UpstreamSplitTransactionCapacity;
    USHORT UpstreamSplitTransactionLimit;
    USHORT DownstreamSplitTransactionCapacity;
    USHORT DownstreamSplitTransactionLimit;
    union {
        struct {
            ULONG SelectSecondaryRegisters:1;
            ULONG ErrorPresentInOtherBank:1;
            ULONG AdditionalCorrectableError:1;
            ULONG AdditionalUncorrectableError:1;
            ULONG ErrorPhase:3;
            ULONG ErrorCorrected:1;
            ULONG Syndrome:8;
            ULONG ErrorFirstCommand:4;
            ULONG ErrorSecondCommand:4;
            ULONG ErrorUpperAttributes:4;
            ULONG ControlUpdateEnable:1;
            ULONG Rsvd:1;
            ULONG DisableSingleBitCorrection:1;
            ULONG EccMode:1;
        } DUMMYSTRUCTNAME;
        ULONG AsULONG;
    } EccControlStatus;
    ULONG EccFirstAddress;
    ULONG EccSecondAddress;
    ULONG EccAttribute;
} PCIX_BRIDGE_CAPABILITY, *PPCIX_BRIDGE_CAPABILITY;
typedef struct _PCI_SUBSYSTEM_IDS_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    USHORT Reserved;
    USHORT SubVendorID;
    USHORT SubSystemID;
} PCI_SUBSYSTEM_IDS_CAPABILITY, *PPCI_SUBSYSTEM_IDS_CAPABILITY;
typedef struct _PCI_ADVANCED_FEATURES_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    UCHAR Length;
    union {
        struct {
            UCHAR FunctionLevelResetSupported:1;
            UCHAR TransactionsPendingSupported:1;
            UCHAR Rsvd:6;
        } DUMMYSTRUCTNAME;
        UCHAR AsUCHAR;
    } Capabilities;
    union {
        struct {
            UCHAR InitiateFunctionLevelReset:1;
            UCHAR Rsvd:7;
        } DUMMYSTRUCTNAME;
        UCHAR AsUCHAR;
    } Control;
    union {
        struct {
            UCHAR TransactionsPending:1;
            UCHAR Rsvd:7;
        } DUMMYSTRUCTNAME;
        UCHAR AsUCHAR;
    } Status;
} PCI_ADVANCED_FEATURES_CAPABILITY, *PPCI_ADVANCED_FEATURES_CAPABILITY;
typedef struct _PCI_ROOT_BUS_OSC_SUPPORT_FIELD {
    union {
        struct {
            ULONG ExtendedConfigOpRegions:1;
            ULONG ActiveStatePowerManagement:1;
            ULONG ClockPowerManagement:1;
            ULONG SegmentGroups:1;
            ULONG MessageSignaledInterrupts:1;
            ULONG OptimizedBufferFlushAndFill:1;
            ULONG AspmOptionality:1;
            ULONG Reserved:25;
        } DUMMYSTRUCTNAME;
        ULONG AsULONG;
    } u;
} PCI_ROOT_BUS_OSC_SUPPORT_FIELD, *PPCI_ROOT_BUS_OSC_SUPPORT_FIELD;
typedef struct _PCI_ROOT_BUS_OSC_CONTROL_FIELD {
    union {
        struct {
            ULONG ExpressNativeHotPlug:1;
            ULONG ShpcNativeHotPlug:1;
            ULONG ExpressNativePME:1;
            ULONG ExpressAdvancedErrorReporting:1;
            ULONG ExpressCapabilityStructure:1;
            ULONG LatencyToleranceReporting:1;
            ULONG Reserved:26;
        } DUMMYSTRUCTNAME;
        ULONG AsULONG;
    } u;
} PCI_ROOT_BUS_OSC_CONTROL_FIELD, *PPCI_ROOT_BUS_OSC_CONTROL_FIELD;
typedef struct _PCI_FIRMWARE_BUS_CAPS {
    USHORT Type;
    USHORT Length;
    struct {
        UCHAR SixtyFourBitDevice:1;
        UCHAR PciXMode1EccCapable:1;
        UCHAR DeviceIdMessagingCapable:1;
        UCHAR ObffWakeSignalCapable:1;
        UCHAR Reserved1:4;
    } DUMMYSTRUCTNAME;
    UCHAR CurrentSpeedAndMode;
    UCHAR SupportedSpeedsAndModesLowByte;
    UCHAR SupportedSpeedsAndModesHighByte;
    UCHAR Voltage;
    UCHAR Reserved2[7];
} PCI_FIRMWARE_BUS_CAPS, *PPCI_FIRMWARE_BUS_CAPS;
typedef struct _PCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER {
    USHORT Version;
    USHORT Status;
    ULONG Length;
    PCI_FIRMWARE_BUS_CAPS Caps;
} PCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER, *PPCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER;
typedef enum _PCI_HARDWARE_INTERFACE {
    PciConventional,
    PciXMode1,
    PciXMode2,
    PciExpress
} PCI_HARDWARE_INTERFACE, *PPCI_HARDWARE_INTERFACE;
typedef enum {
    BusWidth32Bits,
    BusWidth64Bits
} PCI_BUS_WIDTH;
typedef struct _PCI_ROOT_BUS_HARDWARE_CAPABILITY {
    PCI_HARDWARE_INTERFACE SecondaryInterface;
    struct {
        BOOLEAN BusCapabilitiesFound;
        ULONG CurrentSpeedAndMode;
        ULONG SupportedSpeedsAndModes;
        BOOLEAN DeviceIDMessagingCapable;
        PCI_BUS_WIDTH SecondaryBusWidth;
    } DUMMYSTRUCTNAME;
    PCI_ROOT_BUS_OSC_SUPPORT_FIELD OscFeatureSupport;
    PCI_ROOT_BUS_OSC_CONTROL_FIELD OscControlRequest;
    PCI_ROOT_BUS_OSC_CONTROL_FIELD OscControlGranted;
} PCI_ROOT_BUS_HARDWARE_CAPABILITY, *PPCI_ROOT_BUS_HARDWARE_CAPABILITY;
typedef struct _PCI_FPB_CAPABILITY_HEADER {
    PCI_CAPABILITIES_HEADER Header;
    USHORT Reserved;
} PCI_FPB_CAPABILITY_HEADER, *PPCI_FPB_CAPABILITY_HEADER;
typedef union _PCI_FPB_CAPABILITIES_REGISTER {
    struct {
        ULONG RidDecodeMechanismSupported:1;
        ULONG MemLowDecodeMechanismSupported:1;
        ULONG MemHighDecodeMechanismSupported:1;
        ULONG NumSecDev:5;
        ULONG RidVectorSizeSupported:3;
        ULONG Rsvd0:5;
        ULONG MemLowVectorSizeSupported:3;
        ULONG Rsvd1:5;
        ULONG MemHighVectorSizeSupported:3;
        ULONG Rsvd2:5;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_FPB_CAPABILITIES_REGISTER, *PPCI_FPB_CAPABILITIES_REGISTER;
typedef union _PCI_FPB_RID_VECTOR_CONTROL1_REGISTER {
    struct {
        ULONG RidDecodeMechanismEnable:1;
        ULONG Rsvd0:3;
        ULONG RidVectorGranularity:4;
        ULONG Rsvd1:11;
        ULONG RidVectorStart:13;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_FPB_RID_VECTOR_CONTROL1_REGISTER, *PPCI_FPB_RID_VECTOR_CONTROL1_REGISTER;
typedef union _PCI_FPB_RID_VECTOR_CONTROL2_REGISTER {
    struct {
        ULONG Rsvd0:3;
        ULONG RidSecondaryStart:13;
        ULONG Rsvd1:16;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_FPB_RID_VECTOR_CONTROL2_REGISTER, *PPCI_FPB_RID_VECTOR_CONTROL2_REGISTER;
typedef union _PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER {
    struct {
        ULONG MemLowDecodeMechanismEnable:1;
        ULONG Rsvd0:3;
        ULONG MemLowVectorGranularity:4;
        ULONG Rsvd1:12;
        ULONG MemLowVectorStart:12;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER, *PPCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER;
typedef union _PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER {
    struct {
        ULONG MemHighDecodeMechanismEnable:1;
        ULONG Rsvd0:3;
        ULONG MemHighVectorGranularity:4;
        ULONG Rsvd1:20;
        ULONG MemHighVectorStartLower:4;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER, *PPCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER;
typedef struct _PCI_FPB_MEM_HIGH_VECTOR_CONTROL2_REGISTER {
    ULONG MemHighVectorStartUpper;
} PCI_FPB_MEM_HIGH_VECTOR_CONTROL2_REGISTER, *PPCI_FPB_MEM_HIGH_VECTOR_CONTROL2_REGISTER;
typedef union _PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER {
    struct {
        ULONG VectorAccessOffset:8;
        ULONG Rsvd0:6;
        ULONG VectorSelect:2;
        ULONG Rsvd1:16;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER, *PPCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER;
typedef struct _PCI_FPB_VECTOR_ACCESS_DATA_REGISTER {
    ULONG VectorAccessData;
} PCI_FPB_VECTOR_ACCESS_DATA_REGISTER, *PPCI_FPB_VECTOR_ACCESS_DATA_REGISTER;
typedef struct _PCI_FPB_CAPABILITY {
    PCI_FPB_CAPABILITY_HEADER Header;
    PCI_FPB_CAPABILITIES_REGISTER CapabilitiesRegister;
    PCI_FPB_RID_VECTOR_CONTROL1_REGISTER RidVectorControl1Register;
    PCI_FPB_RID_VECTOR_CONTROL2_REGISTER RidVectorControl2Register;
    PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER MemLowVectorControlRegister;
    PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER MemHighVectorControl1Register;
    PCI_FPB_MEM_HIGH_VECTOR_CONTROL2_REGISTER MemHighVectorControl2Register;
    PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER VectorAccessControlRegister;
    PCI_FPB_VECTOR_ACCESS_DATA_REGISTER VectorAccessDataRegister;
} PCI_FPB_CAPABILITY, *PPCI_FPB_CAPABILITY;
typedef union _PCI_EXPRESS_CAPABILITIES_REGISTER {
    struct {
        USHORT CapabilityVersion:4;
        USHORT DeviceType:4;
        USHORT SlotImplemented:1;
        USHORT InterruptMessageNumber:5;
        USHORT Rsvd:2;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_CAPABILITIES_REGISTER, *PPCI_EXPRESS_CAPABILITIES_REGISTER;
typedef union _PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER {
    struct {
        ULONG MaxPayloadSizeSupported:3;
        ULONG PhantomFunctionsSupported:2;
        ULONG ExtendedTagSupported:1;
        ULONG L0sAcceptableLatency:3;
        ULONG L1AcceptableLatency:3;
        ULONG Undefined:3;
        ULONG RoleBasedErrorReporting:1;
        ULONG Rsvd1:2;
        ULONG CapturedSlotPowerLimit:8;
        ULONG CapturedSlotPowerLimitScale:2;
        ULONG FunctionLevelResetCapability:1;
        ULONG Rsvd2:3;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER, *PPCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER;
typedef union _PCI_EXPRESS_DEVICE_CONTROL_REGISTER {
    struct {
        USHORT CorrectableErrorEnable:1;
        USHORT NonFatalErrorEnable:1;
        USHORT FatalErrorEnable:1;
        USHORT UnsupportedRequestErrorEnable:1;
        USHORT EnableRelaxedOrder:1;
        USHORT MaxPayloadSize:3;
        USHORT ExtendedTagEnable:1;
        USHORT PhantomFunctionsEnable:1;
        USHORT AuxPowerEnable:1;
        USHORT NoSnoopEnable:1;
        USHORT MaxReadRequestSize:3;
        USHORT BridgeConfigRetryEnable:1;
    } DUMMYSTRUCTNAME;
    struct {
        USHORT :15;
        USHORT InitiateFunctionLevelReset:1;
    } DUMMYSTRUCTNAME2;
    USHORT AsUSHORT;
} PCI_EXPRESS_DEVICE_CONTROL_REGISTER, *PPCI_EXPRESS_DEVICE_CONTROL_REGISTER;
typedef union _PCI_EXPRESS_DEVICE_STATUS_REGISTER {
    struct {
        USHORT CorrectableErrorDetected:1;
        USHORT NonFatalErrorDetected:1;
        USHORT FatalErrorDetected:1;
        USHORT UnsupportedRequestDetected:1;
        USHORT AuxPowerDetected:1;
        USHORT TransactionsPending:1;
        USHORT Rsvd:10;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_DEVICE_STATUS_REGISTER, *PPCI_EXPRESS_DEVICE_STATUS_REGISTER;
typedef union _PCI_EXPRESS_LINK_CAPABILITIES_REGISTER {
    struct {
        ULONG MaximumLinkSpeed:4;
        ULONG MaximumLinkWidth:6;
        ULONG ActiveStatePMSupport:2;
        ULONG L0sExitLatency:3;
        ULONG L1ExitLatency:3;
        ULONG ClockPowerManagement:1;
        ULONG SurpriseDownErrorReportingCapable:1;
        ULONG DataLinkLayerActiveReportingCapable:1;
        ULONG LinkBandwidthNotificationCapability:1;
        ULONG AspmOptionalityCompliance:1;
        ULONG Rsvd:1;
        ULONG PortNumber:8;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_LINK_CAPABILITIES_REGISTER, *PPCI_EXPRESS_LINK_CAPABILITIES_REGISTER;
typedef union _PCI_EXPRESS_LINK_CONTROL_REGISTER {
    struct {
        USHORT ActiveStatePMControl:2;
        USHORT Rsvd1:1;
        USHORT ReadCompletionBoundary:1;
        USHORT LinkDisable:1;
        USHORT RetrainLink:1;
        USHORT CommonClockConfig:1;
        USHORT ExtendedSynch:1;
        USHORT EnableClockPowerManagement:1;
        USHORT Rsvd2:7;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_LINK_CONTROL_REGISTER, *PPCI_EXPRESS_LINK_CONTROL_REGISTER;
typedef union _PCI_EXPRESS_LINK_STATUS_REGISTER {
    struct {
        USHORT LinkSpeed:4;
        USHORT LinkWidth:6;
        USHORT Undefined:1;
        USHORT LinkTraining:1;
        USHORT SlotClockConfig:1;
        USHORT DataLinkLayerActive:1;
        USHORT Rsvd:2;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_LINK_STATUS_REGISTER, *PPCI_EXPRESS_LINK_STATUS_REGISTER;
typedef union _PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER {
    struct {
        ULONG AttentionButtonPresent:1;
        ULONG PowerControllerPresent:1;
        ULONG MRLSensorPresent:1;
        ULONG AttentionIndicatorPresent:1;
        ULONG PowerIndicatorPresent:1;
        ULONG HotPlugSurprise:1;
        ULONG HotPlugCapable:1;
        ULONG SlotPowerLimit:8;
        ULONG SlotPowerLimitScale:2;
        ULONG ElectromechanicalLockPresent:1;
        ULONG NoCommandCompletedSupport:1;
        ULONG PhysicalSlotNumber:13;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER, *PPCI_EXPRESS_SLOT_CAPABILITIES_REGISTER;
typedef union _PCI_EXPRESS_SLOT_CONTROL_REGISTER {
    struct {
        USHORT AttentionButtonEnable:1;
        USHORT PowerFaultDetectEnable:1;
        USHORT MRLSensorEnable:1;
        USHORT PresenceDetectEnable:1;
        USHORT CommandCompletedEnable:1;
        USHORT HotPlugInterruptEnable:1;
        USHORT AttentionIndicatorControl:2;
        USHORT PowerIndicatorControl:2;
        USHORT PowerControllerControl:1;
        USHORT ElectromechanicalLockControl:1;
        USHORT DataLinkStateChangeEnable:1;
        USHORT Rsvd:3;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_SLOT_CONTROL_REGISTER, *PPCI_EXPRESS_SLOT_CONTROL_REGISTER;
typedef union _PCI_EXPRESS_SLOT_STATUS_REGISTER {
    struct {
        USHORT AttentionButtonPressed:1;
        USHORT PowerFaultDetected:1;
        USHORT MRLSensorChanged:1;
        USHORT PresenceDetectChanged:1;
        USHORT CommandCompleted:1;
        USHORT MRLSensorState:1;
        USHORT PresenceDetectState:1;
        USHORT ElectromechanicalLockEngaged:1;
        USHORT DataLinkStateChanged:1;
        USHORT Rsvd:7;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_SLOT_STATUS_REGISTER, *PPCI_EXPRESS_SLOT_STATUS_REGISTER;
typedef union _PCI_EXPRESS_ROOT_CONTROL_REGISTER {
    struct {
        USHORT CorrectableSerrEnable:1;
        USHORT NonFatalSerrEnable:1;
        USHORT FatalSerrEnable:1;
        USHORT PMEInterruptEnable:1;
        USHORT CRSSoftwareVisibilityEnable:1;
        USHORT Rsvd:11;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_ROOT_CONTROL_REGISTER, *PPCI_EXPRESS_ROOT_CONTROL_REGISTER;
typedef union _PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER {
    struct {
        USHORT CRSSoftwareVisibility:1;
        USHORT Rsvd:15;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER, *PPCI_EXPRESS_ROOT_CAPABILITIES_REGISTER;
typedef union _PCI_EXPRESS_ROOT_STATUS_REGISTER {
    struct {
        ULONG PMERequestorId:16;
        ULONG PMEStatus:1;
        ULONG PMEPending:1;
        ULONG Rsvd:14;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_ROOT_STATUS_REGISTER, *PPCI_EXPRESS_ROOT_STATUS_REGISTER;
typedef union _PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER {
    struct {
        ULONG CompletionTimeoutRangesSupported:4;
        ULONG CompletionTimeoutDisableSupported:1;
        ULONG AriForwardingSupported:1;
        ULONG AtomicOpRoutingSupported:1;
        ULONG AtomicOpCompleterSupported32Bit:1;
        ULONG AtomicOpCompleterSupported64Bit:1;
        ULONG CASCompleterSupported128Bit:1;
        ULONG NoROEnabledPRPRPassing:1;
        ULONG LTRMechanismSupported:1;
        ULONG TPHCompleterSupported:2;
        ULONG Rsvd:4;
        ULONG OBFFSupported:2;
        ULONG ExtendedFmtFieldSuported:1;
        ULONG EndEndTLPPrefixSupported:1;
        ULONG MaxEndEndTLPPrefixes:2;
        ULONG Rsvd2:8;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER, *PPCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER;
typedef union _PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER {
    struct {
        USHORT CompletionTimeoutValue:4;
        USHORT CompletionTimeoutDisable:1;
        USHORT AriForwardingEnable:1;
        USHORT AtomicOpRequesterEnable:1;
        USHORT AtomicOpEgresBlocking:1;
        USHORT IDORequestEnable:1;
        USHORT IDOCompletionEnable:1;
        USHORT LTRMechanismEnable:1;
        USHORT Rsvd:2;
        USHORT OBFFEnable:2;
        USHORT EndEndTLPPrefixBlocking:1;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER, *PPCI_EXPRESS_DEVICE_CONTROL_2_REGISTER;
typedef union _PCI_EXPRESS_DEVICE_STATUS_2_REGISTER {
    struct {
        USHORT Rsvd:16;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_DEVICE_STATUS_2_REGISTER, *PPCI_EXPRESS_DEVICE_STATUS_2_REGISTER;
typedef struct _PCI_EXPRESS_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    PCI_EXPRESS_CAPABILITIES_REGISTER ExpressCapabilities;
    PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER DeviceCapabilities;
    PCI_EXPRESS_DEVICE_CONTROL_REGISTER DeviceControl;
    PCI_EXPRESS_DEVICE_STATUS_REGISTER DeviceStatus;
    PCI_EXPRESS_LINK_CAPABILITIES_REGISTER LinkCapabilities;
    PCI_EXPRESS_LINK_CONTROL_REGISTER LinkControl;
    PCI_EXPRESS_LINK_STATUS_REGISTER LinkStatus;
    PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER SlotCapabilities;
    PCI_EXPRESS_SLOT_CONTROL_REGISTER SlotControl;
    PCI_EXPRESS_SLOT_STATUS_REGISTER SlotStatus;
    PCI_EXPRESS_ROOT_CONTROL_REGISTER RootControl;
    PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER RootCapabilities;
    PCI_EXPRESS_ROOT_STATUS_REGISTER RootStatus;
    PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER DeviceCapabilities2;
    PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER DeviceControl2;
    PCI_EXPRESS_DEVICE_STATUS_2_REGISTER DeviceStatus2;
} PCI_EXPRESS_CAPABILITY, *PPCI_EXPRESS_CAPABILITY;
typedef enum {
    MRLClosed = 0,
    MRLOpen
} PCI_EXPRESS_MRL_STATE;
typedef enum {
    SlotEmpty = 0,
    CardPresent
} PCI_EXPRESS_CARD_PRESENCE;
typedef enum {
    IndicatorOn = 1,
    IndicatorBlink,
    IndicatorOff
} PCI_EXPRESS_INDICATOR_STATE;
typedef enum {
    PowerOn = 0,
    PowerOff
} PCI_EXPRESS_POWER_STATE;
typedef enum {
    NoAspmSupport = 0,
    L0sEntrySupport = 1,
    L1EntrySupport = 2,
    L0sAndL1EntrySupport = 3
} PCI_EXPRESS_ASPM_SUPPORT;
typedef enum {
    L0sAndL1EntryDisabled,
    L0sEntryEnabled,
    L1EntryEnabled,
    L0sAndL1EntryEnabled
} PCI_EXPRESS_ASPM_CONTROL;
typedef enum {
    L0s_Below64ns = 0,
    L0s_64ns_128ns,
    L0s_128ns_256ns,
    L0s_256ns_512ns,
    L0s_512ns_1us,
    L0s_1us_2us,
    L0s_2us_4us,
    L0s_Above4us
} PCI_EXPRESS_L0s_EXIT_LATENCY;
typedef enum {
    L1_Below1us = 0,
    L1_1us_2us,
    L1_2us_4us,
    L1_4us_8us,
    L1_8us_16us,
    L1_16us_32us,
    L1_32us_64us,
    L1_Above64us
} PCI_EXPRESS_L1_EXIT_LATENCY;
typedef enum {
    PciExpressEndpoint = 0,
    PciExpressLegacyEndpoint,
    PciExpressRootPort = 4,
    PciExpressUpstreamSwitchPort,
    PciExpressDownstreamSwitchPort,
    PciExpressToPciXBridge,
    PciXToExpressBridge,
    PciExpressRootComplexIntegratedEndpoint,
    PciExpressRootComplexEventCollector
} PCI_EXPRESS_DEVICE_TYPE;
typedef enum {
    MaxPayload128Bytes = 0,
    MaxPayload256Bytes,
    MaxPayload512Bytes,
    MaxPayload1024Bytes,
    MaxPayload2048Bytes,
    MaxPayload4096Bytes
} PCI_EXPRESS_MAX_PAYLOAD_SIZE;
typedef union _PCI_EXPRESS_PME_REQUESTOR_ID {
    struct {
        USHORT FunctionNumber:3;
        USHORT DeviceNumber:5;
        USHORT BusNumber:8;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_PME_REQUESTOR_ID, *PPCI_EXPRESS_PME_REQUESTOR_ID;
typedef struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER {
    USHORT CapabilityID;
    USHORT Version:4;
    USHORT Next:12;
} PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER, *PPCI_EXPRESS_ENHANCED_CAPABILITY_HEADER;
typedef struct _PCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    USHORT VsecId;
    USHORT VsecRev:4;
    USHORT VsecLength:12;
} PCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY, *PPCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY;
typedef struct _PCI_EXPRESS_SERIAL_NUMBER_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    ULONG LowSerialNumber;
    ULONG HighSerialNumber;
} PCI_EXPRESS_SERIAL_NUMBER_CAPABILITY, *PPCI_EXPRESS_SERIAL_NUMBER_CAPABILITY;
typedef struct _PCI_EXPRESS_ARI_CAPABILITY_REGISTER {
    USHORT MfvcFunctionGroupsCapability:1;
    USHORT AcsFunctionGroupsCapability:1;
    USHORT Reserved:6;
    USHORT NextFunctionNumber:8;
} PCI_EXPRESS_ARI_CAPABILITY_REGISTER, *PPCI_EXPRESS_ARI_CAPABILITY_REGISTER;
typedef struct _PCI_EXPRESS_ARI_CONTROL_REGISTER {
    USHORT MfvcFunctionGroupsEnable:1;
    USHORT AcsFunctionGroupsEnable:1;
    USHORT Reserved1:2;
    USHORT FunctionGroup:3;
    USHORT Reserved2:9;
} PCI_EXPRESS_ARI_CONTROL_REGISTER, *PPCI_EXPRESS_ARI_CONTROL_REGISTER;
typedef struct _PCI_EXPRESS_ARI_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_ARI_CAPABILITY_REGISTER Capability;
    PCI_EXPRESS_ARI_CONTROL_REGISTER Control;
} PCI_EXPRESS_ARI_CAPABILITY, *PPCI_EXPRESS_ARI_CAPABILITY;
typedef union _VIRTUAL_CHANNEL_CAPABILITIES1 {
    struct {
        ULONG ExtendedVCCount:3;
        ULONG RsvdP1:1;
        ULONG LowPriorityExtendedVCCount:3;
        ULONG RsvdP2:1;
        ULONG ReferenceClock:2;
        ULONG PortArbitrationTableEntrySize:2;
        ULONG RsvdP3:20;
    };
    ULONG AsULONG;
} VIRTUAL_CHANNEL_CAPABILITIES1, *PVIRTUAL_CHANNEL_CAPABILITIES1;
typedef union _VIRTUAL_CHANNEL_CAPABILITIES2 {
    struct {
        ULONG VCArbitrationCapability:8;
        ULONG RsvdP:16;
        ULONG VCArbitrationTableOffset:8;
    };
    ULONG AsULONG;
} VIRTUAL_CHANNEL_CAPABILITIES2, *PVIRTUAL_CHANNEL_CAPABILITIES2;
typedef union _VIRTUAL_CHANNEL_CONTROL {
    struct {
        USHORT LoadVCArbitrationTable:1;
        USHORT VCArbitrationSelect:3;
        USHORT RsvdP:12;
    };
    USHORT AsUSHORT;
} VIRTUAL_CHANNEL_CONTROL, *PVIRTUAL_CHANNEL_CONTROL;
typedef union _VIRTUAL_CHANNEL_STATUS {
    struct {
        USHORT VCArbitrationTableStatus:1;
        USHORT RsvdZ:15;
    };
    USHORT AsUSHORT;
} VIRTUAL_CHANNEL_STATUS, *PVIRTUAL_CHANNEL_STATUS;
typedef union _VIRTUAL_RESOURCE_CAPABILITY {
    struct {
        ULONG PortArbitrationCapability:8;
        ULONG RsvdP1:6;
        ULONG Undefined:1;
        ULONG RejectSnoopTransactions:1;
        ULONG MaximumTimeSlots:7;
        ULONG RsvdP2:1;
        ULONG PortArbitrationTableOffset:8;
    };
    ULONG AsULONG;
} VIRTUAL_RESOURCE_CAPABILITY, *PVIRTUAL_RESOURCE_CAPABILITY;
typedef union _VIRTUAL_RESOURCE_CONTROL {
    struct {
        ULONG TcVcMap:8;
        ULONG RsvdP1:8;
        ULONG LoadPortArbitrationTable:1;
        ULONG PortArbitrationSelect:3;
        ULONG RsvdP2:4;
        ULONG VcID:3;
        ULONG RsvdP3:4;
        ULONG VcEnable:1;
    };
    ULONG AsULONG;
} VIRTUAL_RESOURCE_CONTROL, *PVIRTUAL_RESOURCE_CONTROL;
typedef union _VIRTUAL_RESOURCE_STATUS {
    struct {
        USHORT PortArbitrationTableStatus:1;
        USHORT VcNegotiationPending:1;
        USHORT RsvdZ:14;
    };
    USHORT AsUSHORT;
} VIRTUAL_RESOURCE_STATUS, *PVIRTUAL_RESOURCE_STATUS;
typedef struct _VIRTUAL_RESOURCE {
    VIRTUAL_RESOURCE_CAPABILITY Capability;
    VIRTUAL_RESOURCE_CONTROL Control;
    USHORT RsvdP;
    VIRTUAL_RESOURCE_STATUS Status;
} VIRTUAL_RESOURCE, *PVIRTUAL_RESOURCE;
typedef struct _PCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    VIRTUAL_CHANNEL_CAPABILITIES1 Capabilities1;
    VIRTUAL_CHANNEL_CAPABILITIES2 Capabilities2;
    VIRTUAL_CHANNEL_CONTROL Control;
    VIRTUAL_CHANNEL_STATUS Status;
    VIRTUAL_RESOURCE Resource[8];
} PCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY, *PPCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY;
typedef struct _PCI_EXPRESS_ATS_CAPABILITY_REGISTER {
    USHORT InvalidateQueueDepth:5;
    USHORT PageAlignedRequest:1;
    USHORT GlobalInvalidateSupported:1;
    USHORT Reserved:9;
} PCI_EXPRESS_ATS_CAPABILITY_REGISTER, *PPCI_EXPRESS_ATS_CAPABILITY_REGISTER;
typedef struct _PCI_EXPRESS_ATS_CONTROL_REGISTER {
    USHORT SmallestTransactionUnit:5;
    USHORT Reserved:10;
    USHORT Enable:1;
} PCI_EXPRESS_ATS_CONTROL_REGISTER, *PPCI_EXPRESS_ATS_CONTROL_REGISTER;
typedef struct _PCI_EXPRESS_ATS_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_ATS_CAPABILITY_REGISTER Capability;
    PCI_EXPRESS_ATS_CONTROL_REGISTER Control;
} PCI_EXPRESS_ATS_CAPABILITY, *PPCI_EXPRESS_ATS_CAPABILITY;
typedef union _PCI_EXPRESS_PASID_CAPABILITY_REGISTER {
    struct {
        USHORT Rsvd:1;
        USHORT ExecutePermissionSupported:1;
        USHORT PrivilegedModeSupported:1;
        USHORT Rsvd2:5;
        USHORT MaxPASIDWidth:5;
        USHORT Rsvd3:3;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_PASID_CAPABILITY_REGISTER, *PPCI_EXPRESS_PASID_CAPABILITY_REGISTER;
typedef union _PCI_EXPRESS_PASID_CONTROL_REGISTER {
    struct {
        USHORT PASIDEnable:1;
        USHORT ExecutePermissionEnable:1;
        USHORT PrivilegedModeEnable:1;
        USHORT Rsvd:13;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_PASID_CONTROL_REGISTER, *PPCI_EXPRESS_PASID_CONTROL_REGISTER;
typedef struct _PCI_EXPRESS_PASID_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_PASID_CAPABILITY_REGISTER Capability;
    PCI_EXPRESS_PASID_CONTROL_REGISTER Control;
} PCI_EXPRESS_PASID_CAPABILITY, *PPCI_EXPRESS_PASID_CAPABILITY;
typedef union _PCI_EXPRESS_PRI_STATUS_REGISTER {
    struct {
        USHORT ResponseFailure:1;
        USHORT UnexpectedPageRequestGroupIndex:1;
        USHORT Rsvd:6;
        USHORT Stopped:1;
        USHORT Rsvd2:6;
        USHORT PrgResponsePasidRequired:1;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_PRI_STATUS_REGISTER, *PPCI_EXPRESS_PRI_STATUS_REGISTER;
typedef union _PCI_EXPRESS_PRI_CONTROL_REGISTER {
    struct {
        USHORT Enable:1;
        USHORT Reset:1;
        USHORT Rsvd:14;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_PRI_CONTROL_REGISTER, *PPCI_EXPRESS_PRI_CONTROL_REGISTER;
typedef struct _PCI_EXPRESS_PRI_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_PRI_CONTROL_REGISTER Control;
    PCI_EXPRESS_PRI_STATUS_REGISTER Status;
    ULONG PRCapacity;
    ULONG PRAllocation;
} PCI_EXPRESS_PRI_CAPABILITY, *PPCI_EXPRESS_PRI_CAPABILITY;
typedef union _PCI_EXPRESS_PTM_CAPABILITY_REGISTER {
    struct {
        ULONG RequesterCapable:1;
        ULONG ResponderCapable:1;
        ULONG RootCapable:1;
        ULONG Rsvd:5;
        ULONG LocalGranularity:8;
        ULONG Rsvd2:16;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_PTM_CAPABILITY_REGISTER, *PPCI_EXPRESS_PTM_CAPABILITY_REGISTER;
typedef union _PCI_EXPRESS_PTM_CONTROL_REGISTER {
    struct {
        ULONG Enable:1;
        ULONG RootSelect:1;
        ULONG Rsvd:6;
        ULONG EffectiveGranularity:8;
        ULONG Rsvd2:16;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_PTM_CONTROL_REGISTER, *PPCI_EXPRESS_PTM_CONTROL_REGISTER;
typedef struct _PCI_EXPRESS_PTM_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_PTM_CAPABILITY_REGISTER PtmCapability;
    PCI_EXPRESS_PTM_CONTROL_REGISTER PtmControl;
} PCI_EXPRESS_PTM_CAPABILITY, *PPCI_EXPRESS_PTM_CAPABILITY;
typedef union _PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS {
    struct {
        ULONG Undefined:1;
        ULONG Reserved1:3;
        ULONG DataLinkProtocolError:1;
        ULONG SurpriseDownError:1;
        ULONG Reserved2:6;
        ULONG PoisonedTLP:1;
        ULONG FlowControlProtocolError:1;
        ULONG CompletionTimeout:1;
        ULONG CompleterAbort:1;
        ULONG UnexpectedCompletion:1;
        ULONG ReceiverOverflow:1;
        ULONG MalformedTLP:1;
        ULONG ECRCError:1;
        ULONG UnsupportedRequestError:1;
        ULONG AcsViolation:1;
        ULONG UncorrectableInternalError:1;
        ULONG MCBlockedTlp:1;
        ULONG AtomicOpEgressBlocked:1;
        ULONG TlpPrefixBlocked:1;
        ULONG Reserved3:6;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS, *PPCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS;
typedef union _PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK {
    struct {
        ULONG Undefined:1;
        ULONG Reserved1:3;
        ULONG DataLinkProtocolError:1;
        ULONG SurpriseDownError:1;
        ULONG Reserved2:6;
        ULONG PoisonedTLP:1;
        ULONG FlowControlProtocolError:1;
        ULONG CompletionTimeout:1;
        ULONG CompleterAbort:1;
        ULONG UnexpectedCompletion:1;
        ULONG ReceiverOverflow:1;
        ULONG MalformedTLP:1;
        ULONG ECRCError:1;
        ULONG UnsupportedRequestError:1;
        ULONG AcsViolation:1;
        ULONG UncorrectableInternalError:1;
        ULONG MCBlockedTlp:1;
        ULONG AtomicOpEgressBlocked:1;
        ULONG TlpPrefixBlocked:1;
        ULONG Reserved3:6;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK, *PPCI_EXPRESS_UNCORRECTABLE_ERROR_MASK;
typedef union _PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY {
    struct {
        ULONG Undefined:1;
        ULONG Reserved1:3;
        ULONG DataLinkProtocolError:1;
        ULONG SurpriseDownError:1;
        ULONG Reserved2:6;
        ULONG PoisonedTLP:1;
        ULONG FlowControlProtocolError:1;
        ULONG CompletionTimeout:1;
        ULONG CompleterAbort:1;
        ULONG UnexpectedCompletion:1;
        ULONG ReceiverOverflow:1;
        ULONG MalformedTLP:1;
        ULONG ECRCError:1;
        ULONG UnsupportedRequestError:1;
        ULONG AcsViolation:1;
        ULONG UncorrectableInternalError:1;
        ULONG MCBlockedTlp:1;
        ULONG AtomicOpEgressBlocked:1;
        ULONG TlpPrefixBlocked:1;
        ULONG Reserved3:6;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY, *PPCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY;
typedef union _PCI_EXPRESS_CORRECTABLE_ERROR_STATUS {
    struct {
        ULONG ReceiverError:1;
        ULONG Reserved1:5;
        ULONG BadTLP:1;
        ULONG BadDLLP:1;
        ULONG ReplayNumRollover:1;
        ULONG Reserved2:3;
        ULONG ReplayTimerTimeout:1;
        ULONG AdvisoryNonFatalError:1;
        ULONG CorrectedInternalError:1;
        ULONG HeaderLogOverflow:1;
        ULONG Reserved3:16;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_CORRECTABLE_ERROR_STATUS, *PPCI_CORRECTABLE_ERROR_STATUS;
typedef union _PCI_EXPRESS_CORRECTABLE_ERROR_MASK {
    struct {
        ULONG ReceiverError:1;
        ULONG Reserved1:5;
        ULONG BadTLP:1;
        ULONG BadDLLP:1;
        ULONG ReplayNumRollover:1;
        ULONG Reserved2:3;
        ULONG ReplayTimerTimeout:1;
        ULONG AdvisoryNonFatalError:1;
        ULONG CorrectedInternalError:1;
        ULONG HeaderLogOverflow:1;
        ULONG Reserved3:16;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_CORRECTABLE_ERROR_MASK, *PPCI_CORRECTABLE_ERROR_MASK;
typedef union _PCI_EXPRESS_AER_CAPABILITIES {
    struct {
        ULONG FirstErrorPointer:5;
        ULONG ECRCGenerationCapable:1;
        ULONG ECRCGenerationEnable:1;
        ULONG ECRCCheckCapable:1;
        ULONG ECRCCheckEnable:1;
        ULONG MultipleHeaderRecordingCapable:1;
        ULONG MultipleHeaderRecordingEnable:1;
        ULONG TlpPrefixLogPresent:1;
        ULONG Reserved:20;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_AER_CAPABILITIES, *PPCI_EXPRESS_AER_CAPABILITIES;
typedef union _PCI_EXPRESS_ROOT_ERROR_COMMAND {
    struct {
        ULONG CorrectableErrorReportingEnable:1;
        ULONG NonFatalErrorReportingEnable:1;
        ULONG FatalErrorReportingEnable:1;
        ULONG Reserved:29;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_ROOT_ERROR_COMMAND, *PPCI_EXPRESS_ROOT_ERROR_COMMAND;
typedef union _PCI_EXPRESS_ROOT_ERROR_STATUS {
    struct {
        ULONG CorrectableErrorReceived:1;
        ULONG MultipleCorrectableErrorsReceived:1;
        ULONG UncorrectableErrorReceived:1;
        ULONG MultipleUncorrectableErrorsReceived:1;
        ULONG FirstUncorrectableFatal:1;
        ULONG NonFatalErrorMessagesReceived:1;
        ULONG FatalErrorMessagesReceived:1;
        ULONG Reserved:20;
        ULONG AdvancedErrorInterruptMessageNumber:5;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_ROOT_ERROR_STATUS, *PPCI_EXPRESS_ROOT_ERROR_STATUS;
typedef union _PCI_EXPRESS_ERROR_SOURCE_ID {
    struct {
        USHORT CorrectableSourceIdFun:3;
        USHORT CorrectableSourceIdDev:5;
        USHORT CorrectableSourceIdBus:8;
        USHORT UncorrectableSourceIdFun:3;
        USHORT UncorrectableSourceIdDev:5;
        USHORT UncorrectableSourceIdBus:8;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_ERROR_SOURCE_ID, *PPCI_EXPRESS_ERROR_SOURCE_ID;
typedef union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS {
    struct {
        ULONG TargetAbortOnSplitCompletion:1;
        ULONG MasterAbortOnSplitCompletion:1;
        ULONG ReceivedTargetAbort:1;
        ULONG ReceivedMasterAbort:1;
        ULONG RsvdZ:1;
        ULONG UnexpectedSplitCompletionError:1;
        ULONG UncorrectableSplitCompletion:1;
        ULONG UncorrectableDataError:1;
        ULONG UncorrectableAttributeError:1;
        ULONG UncorrectableAddressError:1;
        ULONG DelayedTransactionDiscardTimerExpired:1;
        ULONG PERRAsserted:1;
        ULONG SERRAsserted:1;
        ULONG InternalBridgeError:1;
        ULONG Reserved:18;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS,
  *PPCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS;
typedef union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK {
    struct {
        ULONG TargetAbortOnSplitCompletion:1;
        ULONG MasterAbortOnSplitCompletion:1;
        ULONG ReceivedTargetAbort:1;
        ULONG ReceivedMasterAbort:1;
        ULONG RsvdZ:1;
        ULONG UnexpectedSplitCompletionError:1;
        ULONG UncorrectableSplitCompletion:1;
        ULONG UncorrectableDataError:1;
        ULONG UncorrectableAttributeError:1;
        ULONG UncorrectableAddressError:1;
        ULONG DelayedTransactionDiscardTimerExpired:1;
        ULONG PERRAsserted:1;
        ULONG SERRAsserted:1;
        ULONG InternalBridgeError:1;
        ULONG Reserved:18;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK,
  *PPCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK;
typedef union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY {
    struct {
        ULONG TargetAbortOnSplitCompletion:1;
        ULONG MasterAbortOnSplitCompletion:1;
        ULONG ReceivedTargetAbort:1;
        ULONG ReceivedMasterAbort:1;
        ULONG RsvdZ:1;
        ULONG UnexpectedSplitCompletionError:1;
        ULONG UncorrectableSplitCompletion:1;
        ULONG UncorrectableDataError:1;
        ULONG UncorrectableAttributeError:1;
        ULONG UncorrectableAddressError:1;
        ULONG DelayedTransactionDiscardTimerExpired:1;
        ULONG PERRAsserted:1;
        ULONG SERRAsserted:1;
        ULONG InternalBridgeError:1;
        ULONG Reserved:18;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY,
  *PPCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY;
typedef union _PCI_EXPRESS_SEC_AER_CAPABILITIES {
    struct {
        ULONG SecondaryUncorrectableFirstErrorPtr:5;
        ULONG Reserved:27;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_SEC_AER_CAPABILITIES, *PPCI_EXPRESS_SEC_AER_CAPABILITIES;
    (ROOT_CMD_ENABLE_FATAL_ERROR_REPORTING | \
     ROOT_CMD_ENABLE_NONFATAL_ERROR_REPORTING | \
     ROOT_CMD_ENABLE_CORRECTABLE_ERROR_REPORTING)
typedef struct _PCI_EXPRESS_AER_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS UncorrectableErrorStatus;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK UncorrectableErrorMask;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY UncorrectableErrorSeverity;
    PCI_EXPRESS_CORRECTABLE_ERROR_STATUS CorrectableErrorStatus;
    PCI_EXPRESS_CORRECTABLE_ERROR_MASK CorrectableErrorMask;
    PCI_EXPRESS_AER_CAPABILITIES CapabilitiesAndControl;
    ULONG HeaderLog[4];
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS SecUncorrectableErrorStatus;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK SecUncorrectableErrorMask;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY SecUncorrectableErrorSeverity;
    PCI_EXPRESS_SEC_AER_CAPABILITIES SecCapabilitiesAndControl;
    ULONG SecHeaderLog[4];
} PCI_EXPRESS_AER_CAPABILITY, *PPCI_EXPRESS_AER_CAPABILITY;
typedef struct _PCI_EXPRESS_ROOTPORT_AER_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS UncorrectableErrorStatus;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK UncorrectableErrorMask;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY UncorrectableErrorSeverity;
    PCI_EXPRESS_CORRECTABLE_ERROR_STATUS CorrectableErrorStatus;
    PCI_EXPRESS_CORRECTABLE_ERROR_MASK CorrectableErrorMask;
    PCI_EXPRESS_AER_CAPABILITIES CapabilitiesAndControl;
    ULONG HeaderLog[4];
    PCI_EXPRESS_ROOT_ERROR_COMMAND RootErrorCommand;
    PCI_EXPRESS_ROOT_ERROR_STATUS RootErrorStatus;
    PCI_EXPRESS_ERROR_SOURCE_ID ErrorSourceId;
} PCI_EXPRESS_ROOTPORT_AER_CAPABILITY, *PPCI_EXPRESS_ROOTPORT_AER_CAPABILITY;
typedef struct _PCI_EXPRESS_BRIDGE_AER_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS UncorrectableErrorStatus;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK UncorrectableErrorMask;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY UncorrectableErrorSeverity;
    PCI_EXPRESS_CORRECTABLE_ERROR_STATUS CorrectableErrorStatus;
    PCI_EXPRESS_CORRECTABLE_ERROR_MASK CorrectableErrorMask;
    PCI_EXPRESS_AER_CAPABILITIES CapabilitiesAndControl;
    ULONG HeaderLog[4];
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS SecUncorrectableErrorStatus;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK SecUncorrectableErrorMask;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY SecUncorrectableErrorSeverity;
    PCI_EXPRESS_SEC_AER_CAPABILITIES SecCapabilitiesAndControl;
    ULONG SecHeaderLog[4];
} PCI_EXPRESS_BRIDGE_AER_CAPABILITY, *PPCI_EXPRESS_BRIDGE_AER_CAPABILITY;
typedef union _PCI_EXPRESS_ACS_CAPABILITY_REGISTER {
    struct {
        USHORT SourceValidation:1;
        USHORT TranslationBlocking:1;
        USHORT RequestRedirect:1;
        USHORT CompletionRedirect:1;
        USHORT UpstreamForwarding:1;
        USHORT EgressControl:1;
        USHORT DirectTranslation:1;
        USHORT Reserved:1;
        USHORT EgressControlVectorSize:8;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_ACS_CAPABILITY_REGISTER, *PPCI_EXPRESS_ACS_CAPABILITY_REGISTER;
typedef union _PCI_EXPRESS_ACS_CONTROL {
    struct {
        USHORT SourceValidation:1;
        USHORT TranslationBlocking:1;
        USHORT RequestRedirect:1;
        USHORT CompletionRedirect:1;
        USHORT UpstreamForwarding:1;
        USHORT EgressControl:1;
        USHORT DirectTranslation:1;
        USHORT Reserved:9;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_ACS_CONTROL, *PPCI_EXPRESS_ACS_CONTROL;
typedef struct _PCI_EXPRESS_ACS_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_ACS_CAPABILITY_REGISTER Capability;
    PCI_EXPRESS_ACS_CONTROL Control;
    ULONG EgressControl[1];
} PCI_EXPRESS_ACS_CAPABILITY, *PPCI_EXPRESS_ACS_CAPABILITY ;
typedef union _PCI_EXPRESS_SRIOV_CAPS {
    struct {
        ULONG VFMigrationCapable:1;
        ULONG Reserved1:20;
        ULONG VFMigrationInterruptNumber:11;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_SRIOV_CAPS, *PPCI_EXPRESS_SRIOV_CAPS;
typedef union _PCI_EXPRESS_SRIOV_CONTROL {
    struct {
        USHORT VFEnable:1;
        USHORT VFMigrationEnable:1;
        USHORT VFMigrationInterruptEnable:1;
        USHORT VFMemorySpaceEnable:1;
        USHORT ARICapableHierarchy:1;
        USHORT Reserved1:11;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_SRIOV_CONTROL, *PPCI_EXPRESS_SRIOV_CONTROL;
typedef union _PCI_EXPRESS_SRIOV_STATUS {
    struct {
        USHORT VFMigrationStatus:1;
        USHORT Reserved1:15;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_SRIOV_STATUS, *PPCI_EXPRESS_SRIOV_STATUS;
typedef union _PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY {
    struct {
        ULONG VFMigrationStateBIR:3;
        ULONG VFMigrationStateOffset:29;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY, *PPCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY;
typedef struct _PCI_EXPRESS_SRIOV_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_SRIOV_CAPS SRIOVCapabilities;
    PCI_EXPRESS_SRIOV_CONTROL SRIOVControl;
    PCI_EXPRESS_SRIOV_STATUS SRIOVStatus;
    USHORT InitialVFs;
    USHORT TotalVFs;
    USHORT NumVFs;
    UCHAR FunctionDependencyLink;
    UCHAR RsvdP1;
    USHORT FirstVFOffset;
    USHORT VFStride;
    USHORT RsvdP2;
    USHORT VFDeviceId;
    ULONG SupportedPageSizes;
    ULONG SystemPageSize;
    ULONG BaseAddresses[PCI_TYPE0_ADDRESSES];
    PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY VFMigrationStateArrayOffset;
} PCI_EXPRESS_SRIOV_CAPABILITY, *PPCI_EXPRESS_SRIOV_CAPABILITY;
typedef ULONG NODE_REQUIREMENT;
typedef
VOID
(*PBANKED_SECTION_ROUTINE) (
    _In_ ULONG ReadBank,
    _In_ ULONG WriteBank,
    _In_ PVOID Context
    );
typedef struct _INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
} INTERFACE, *PINTERFACE;
    ((ULONG_PTR)(length) & ~((ULONG_PTR)(alignment) - 1))
    (ALIGN_DOWN_BY(((ULONG_PTR)(length) + (alignment) - 1), alignment))
    ((PVOID)((ULONG_PTR)(address) & ~((ULONG_PTR)(alignment) - 1)))
    (ALIGN_DOWN_POINTER_BY(((ULONG_PTR)(address) + (alignment) - 1), alignment))
    ALIGN_DOWN_BY(length, sizeof(type))
    ALIGN_UP_BY(length, sizeof(type))
    ALIGN_DOWN_POINTER_BY(address, sizeof(type))
    ALIGN_UP_POINTER_BY(address, sizeof(type))
typedef int CM_RESOURCE_TYPE;
typedef enum _CM_SHARE_DISPOSITION {
    CmResourceShareUndetermined = 0,
    CmResourceShareDeviceExclusive,
    CmResourceShareDriverExclusive,
    CmResourceShareShared
} CM_SHARE_DISPOSITION;
#include "pshpack1.h"
typedef struct _CM_MCA_POS_DATA {
    USHORT AdapterId;
    UCHAR PosData1;
    UCHAR PosData2;
    UCHAR PosData3;
    UCHAR PosData4;
} CM_MCA_POS_DATA, *PCM_MCA_POS_DATA;
typedef struct _EISA_MEMORY_TYPE {
    UCHAR ReadWrite: 1;
    UCHAR Cached : 1;
    UCHAR Reserved0 :1;
    UCHAR Type:2;
    UCHAR Shared:1;
    UCHAR Reserved1 :1;
    UCHAR MoreEntries : 1;
} EISA_MEMORY_TYPE, *PEISA_MEMORY_TYPE;
typedef struct _EISA_MEMORY_CONFIGURATION {
    EISA_MEMORY_TYPE ConfigurationByte;
    UCHAR DataSize;
    USHORT AddressLowWord;
    UCHAR AddressHighByte;
    USHORT MemorySize;
} EISA_MEMORY_CONFIGURATION, *PEISA_MEMORY_CONFIGURATION;
typedef struct _EISA_IRQ_DESCRIPTOR {
    UCHAR Interrupt : 4;
    UCHAR Reserved :1;
    UCHAR LevelTriggered :1;
    UCHAR Shared : 1;
    UCHAR MoreEntries : 1;
} EISA_IRQ_DESCRIPTOR, *PEISA_IRQ_DESCRIPTOR;
typedef struct _EISA_IRQ_CONFIGURATION {
    EISA_IRQ_DESCRIPTOR ConfigurationByte;
    UCHAR Reserved;
} EISA_IRQ_CONFIGURATION, *PEISA_IRQ_CONFIGURATION;
typedef struct _DMA_CONFIGURATION_BYTE0 {
    UCHAR Channel : 3;
    UCHAR Reserved : 3;
    UCHAR Shared :1;
    UCHAR MoreEntries :1;
} DMA_CONFIGURATION_BYTE0;
typedef struct _DMA_CONFIGURATION_BYTE1 {
    UCHAR Reserved0 : 2;
    UCHAR TransferSize : 2;
    UCHAR Timing : 2;
    UCHAR Reserved1 : 2;
} DMA_CONFIGURATION_BYTE1;
typedef struct _EISA_DMA_CONFIGURATION {
    DMA_CONFIGURATION_BYTE0 ConfigurationByte0;
    DMA_CONFIGURATION_BYTE1 ConfigurationByte1;
} EISA_DMA_CONFIGURATION, *PEISA_DMA_CONFIGURATION;
typedef struct _EISA_PORT_DESCRIPTOR {
    UCHAR NumberPorts : 5;
    UCHAR Reserved :1;
    UCHAR Shared :1;
    UCHAR MoreEntries : 1;
} EISA_PORT_DESCRIPTOR, *PEISA_PORT_DESCRIPTOR;
typedef struct _EISA_PORT_CONFIGURATION {
    EISA_PORT_DESCRIPTOR Configuration;
    USHORT PortAddress;
} EISA_PORT_CONFIGURATION, *PEISA_PORT_CONFIGURATION;
typedef struct _CM_EISA_SLOT_INFORMATION {
    UCHAR ReturnCode;
    UCHAR ReturnFlags;
    UCHAR MajorRevision;
    UCHAR MinorRevision;
    USHORT Checksum;
    UCHAR NumberFunctions;
    UCHAR FunctionInformation;
    ULONG CompressedId;
} CM_EISA_SLOT_INFORMATION, *PCM_EISA_SLOT_INFORMATION;
typedef struct _CM_EISA_FUNCTION_INFORMATION {
    ULONG CompressedId;
    UCHAR IdSlotFlags1;
    UCHAR IdSlotFlags2;
    UCHAR MinorRevision;
    UCHAR MajorRevision;
    UCHAR Selections[26];
    UCHAR FunctionFlags;
    UCHAR TypeString[80];
    EISA_MEMORY_CONFIGURATION EisaMemory[9];
    EISA_IRQ_CONFIGURATION EisaIrq[7];
    EISA_DMA_CONFIGURATION EisaDma[4];
    EISA_PORT_CONFIGURATION EisaPort[20];
    UCHAR InitializationData[60];
} CM_EISA_FUNCTION_INFORMATION, *PCM_EISA_FUNCTION_INFORMATION;
typedef struct _CM_PNP_BIOS_DEVICE_NODE {
    USHORT Size;
    UCHAR Node;
    ULONG ProductId;
    UCHAR DeviceType[3];
    USHORT DeviceAttributes;
} CM_PNP_BIOS_DEVICE_NODE,*PCM_PNP_BIOS_DEVICE_NODE;
typedef struct _CM_PNP_BIOS_INSTALLATION_CHECK {
    UCHAR Signature[4];
    UCHAR Revision;
    UCHAR Length;
    USHORT ControlField;
    UCHAR Checksum;
    ULONG EventFlagAddress;
    USHORT RealModeEntryOffset;
    USHORT RealModeEntrySegment;
    USHORT ProtectedModeEntryOffset;
    ULONG ProtectedModeCodeBaseAddress;
    ULONG OemDeviceId;
    USHORT RealModeDataBaseAddress;
    ULONG ProtectedModeDataBaseAddress;
} CM_PNP_BIOS_INSTALLATION_CHECK, *PCM_PNP_BIOS_INSTALLATION_CHECK;
#include "poppack.h"
                                                EISA_HAS_DMA_ENTRY + \
                                                EISA_HAS_IRQ_ENTRY + \
                                                EISA_HAS_MEMORY_ENTRY + \
                                                EISA_HAS_TYPE_ENTRY
typedef enum _IRQ_DEVICE_POLICY {
    IrqPolicyMachineDefault = 0,
    IrqPolicyAllCloseProcessors,
    IrqPolicyOneCloseProcessor,
    IrqPolicyAllProcessorsInMachine,
    IrqPolicySpecifiedProcessors,
    IrqPolicySpreadMessagesAcrossAllProcessors,
    IrqPolicyAllProcessorsInMachineWhenSteered
} IRQ_DEVICE_POLICY, *PIRQ_DEVICE_POLICY;
typedef enum _IRQ_PRIORITY {
    IrqPriorityUndefined = 0,
    IrqPriorityLow,
    IrqPriorityNormal,
    IrqPriorityHigh
} IRQ_PRIORITY, *PIRQ_PRIORITY;
typedef enum _IRQ_GROUP_POLICY {
    GroupAffinityAllGroupZero = 0,
    GroupAffinityDontCare
} IRQ_GROUP_POLICY, *PIRQ_GROUP_POLICY;
typedef struct _IO_RESOURCE_DESCRIPTOR {
    UCHAR Option;
    UCHAR Type;
    UCHAR ShareDisposition;
    UCHAR Spare1;
    USHORT Flags;
    USHORT Spare2;
    union {
        struct {
            ULONG Length;
            ULONG Alignment;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Port;
        struct {
            ULONG Length;
            ULONG Alignment;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory;
        struct {
            ULONG MinimumVector;
            ULONG MaximumVector;
            IRQ_DEVICE_POLICY AffinityPolicy;
            IRQ_PRIORITY PriorityPolicy;
            KAFFINITY TargetedProcessors;
        } Interrupt;
        struct {
            ULONG MinimumChannel;
            ULONG MaximumChannel;
        } Dma;
        struct {
            ULONG RequestLine;
            ULONG Reserved;
            ULONG Channel;
            ULONG TransferWidth;
        } DmaV3;
        struct {
            ULONG Length;
            ULONG Alignment;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Generic;
        struct {
            ULONG Data[3];
        } DevicePrivate;
        struct {
            ULONG Length;
            ULONG MinBusNumber;
            ULONG MaxBusNumber;
            ULONG Reserved;
        } BusNumber;
        struct {
            ULONG Priority;
            ULONG Reserved1;
            ULONG Reserved2;
        } ConfigData;
        struct {
            ULONG Length40;
            ULONG Alignment40;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory40;
        struct {
            ULONG Length48;
            ULONG Alignment48;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory48;
        struct {
            ULONG Length64;
            ULONG Alignment64;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory64;
        struct {
            UCHAR Class;
            UCHAR Type;
            UCHAR Reserved1;
            UCHAR Reserved2;
            ULONG IdLowPart;
            ULONG IdHighPart;
        } Connection;
    } u;
} IO_RESOURCE_DESCRIPTOR, *PIO_RESOURCE_DESCRIPTOR;
typedef struct _IO_RESOURCE_LIST {
    USHORT Version;
    USHORT Revision;
    ULONG Count;
    IO_RESOURCE_DESCRIPTOR Descriptors[1];
} IO_RESOURCE_LIST, *PIO_RESOURCE_LIST;
typedef struct _IO_RESOURCE_REQUIREMENTS_LIST {
    ULONG ListSize;
    INTERFACE_TYPE InterfaceType;
    ULONG BusNumber;
    ULONG SlotNumber;
    ULONG Reserved[3];
    ULONG AlternativeLists;
    IO_RESOURCE_LIST List[1];
} IO_RESOURCE_REQUIREMENTS_LIST, *PIO_RESOURCE_REQUIREMENTS_LIST;
