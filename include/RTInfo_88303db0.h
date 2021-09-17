#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
    (ptr) = (PVOID)((DWORD_PTR)(ptr) + ALIGN_SHIFT); \
    (ptr) = (PVOID)((DWORD_PTR)(ptr) & ALIGN_MASK_POINTER); \
}
    (length) = (DWORD)((length) + ALIGN_SHIFT); \
    (length) = (DWORD)((length) & ALIGN_MASK_LENGTH); \
}
typedef struct _RTR_TOC_ENTRY
{
    ULONG InfoType;
    ULONG InfoSize;
    ULONG Count;
    ULONG Offset;
}RTR_TOC_ENTRY, *PRTR_TOC_ENTRY;
typedef struct _RTR_INFO_BLOCK_HEADER
{
    ULONG Version;
    ULONG Size;
    ULONG TocEntriesCount;
    _Field_size_(TocEntriesCount) RTR_TOC_ENTRY TocEntry[1];
} RTR_INFO_BLOCK_HEADER, *PRTR_INFO_BLOCK_HEADER;
    (((toc)->Offset < (hdr)->Size) ? ((PVOID)(((PBYTE)(hdr)) + (toc)->Offset)) : NULL)
#endif
#pragma endregion
