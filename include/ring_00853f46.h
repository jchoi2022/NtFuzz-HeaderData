       
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#error include netadaptercx.h
EXTERN_C_START
struct _NET_PACKET;
typedef struct _NET_PACKET NET_PACKET;
struct _NET_FRAGMENT;
typedef struct _NET_FRAGMENT NET_FRAGMENT;
#pragma warning(push)
#pragma warning(disable:4201)
typedef struct DECLSPEC_CACHEALIGN _NET_RING
{
    UINT16 OSReserved1;
    UINT16 ElementStride;
    UINT32 NumberOfElements;
    UINT32 ElementIndexMask;
    UINT32 BeginIndex;
    UINT32 NextIndex;
    UINT32 EndIndex;
    union {
        UINT32 OSReserved0;
        void * OSReserved2[3];
    } DUMMYUNIONNAME;
    void * NetAdapterScratch[2];
    
    _Field_size_(NumberOfElements * ElementStride)
    unsigned char
        Buffer[ANYSIZE_ARRAY];
} NET_RING;
C_ASSERT(FIELD_OFFSET(NET_RING, Buffer) == 64);
#pragma warning(pop)
inline
void *
NetRingGetElementAtIndex(
    _In_ NET_RING const * Ring,
    _In_ UINT32 Index
)
{
    NT_ASSERT(Index < Ring->NumberOfElements);
    return (void *)(Ring->Buffer + (SIZE_T)Index * Ring->ElementStride);
}
inline
UINT32
NetRingIncrementIndex(
    _In_ NET_RING const * Ring,
    _In_ UINT32 Index
)
{
    return (Index + 1) & Ring->ElementIndexMask;
}
inline
UINT32
NetRingGetRangeCount(
    _In_ NET_RING const * Ring,
    _In_ UINT32 StartIndex,
    _In_ UINT32 EndIndex
)
{
    NT_ASSERT(StartIndex < Ring->NumberOfElements);
    NT_ASSERT(EndIndex < Ring->NumberOfElements);
    return (EndIndex - StartIndex) & Ring->ElementIndexMask;
}
inline
NET_PACKET *
NetRingGetPacketAtIndex(
    NET_RING const * Ring,
    UINT32 Index
)
{
    return (NET_PACKET *)NetRingGetElementAtIndex(Ring, Index);
}
inline
NET_FRAGMENT *
NetRingGetFragmentAtIndex(
    NET_RING const * Ring,
    UINT32 Index
)
{
    return (NET_FRAGMENT *)NetRingGetElementAtIndex(Ring, Index);
}
EXTERN_C_END
#endif
#pragma endregion
