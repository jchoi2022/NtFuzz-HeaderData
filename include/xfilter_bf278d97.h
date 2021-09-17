       
    (BOOLEAN)(((PUCHAR)(Address))[0] & ((UCHAR)0x01))
    ((((PUCHAR)(Address))[0] == ((UCHAR)0xff)) && (((PUCHAR)(Address))[1] == ((UCHAR)0xff)) && (((PUCHAR)(Address))[2] == ((UCHAR)0xff)) && (((PUCHAR)(Address))[3] == ((UCHAR)0xff)) && (((PUCHAR)(Address))[4] == ((UCHAR)0xff)) && (((PUCHAR)(Address))[5] == ((UCHAR)0xff)))
{ \
    if (*(ULONG UNALIGNED *)&(_A)[2] > \
         *(ULONG UNALIGNED *)&(_B)[2]) \
    { \
        *(_Result) = 1; \
    } \
    else if (*(ULONG UNALIGNED *)&(_A)[2] < \
                *(ULONG UNALIGNED *)&(_B)[2]) \
    { \
        *(_Result) = (UINT)-1; \
    } \
    else if (*(USHORT UNALIGNED *)(_A) > \
                *(USHORT UNALIGNED *)(_B)) \
    { \
        *(_Result) = 1; \
    } \
    else if (*(USHORT UNALIGNED *)(_A) < \
                *(USHORT UNALIGNED *)(_B)) \
    { \
        *(_Result) = (UINT)-1; \
    } \
    else \
    { \
        *(_Result) = 0; \
    } \
}
{ \
    if ((*(ULONG UNALIGNED *)&(_A)[2] == \
            *(ULONG UNALIGNED *)&(_B)[2]) && \
         (*(USHORT UNALIGNED *)(_A) == \
            *(USHORT UNALIGNED *)(_B))) \
    { \
        *(_Result) = 0; \
    } \
    else \
    { \
        *(_Result) = 1; \
    } \
}
{ \
    *((ULONG UNALIGNED *)(_D)) = *((ULONG UNALIGNED *)(_S)); \
    *((USHORT UNALIGNED *)((UCHAR *)(_D)+4)) = *((USHORT UNALIGNED *)((UCHAR *)(_S)+4)); \
}
typedef ULONG TR_FUNCTIONAL_ADDRESS;
typedef ULONG TR_GROUP_ADDRESS;
{ \
    *(_Result) = (BOOLEAN)((_Address)[0] & 0x80); \
}
{ \
    *(_Result) = (BOOLEAN)(((_Address)[0] & 0x80) && \
                          !((_Address)[2] & 0x80)); \
}
{ \
    *(_Result) = (BOOLEAN)((_Address)[0] & (_Address)[2] & 0x80); \
}
{ \
    *(_Result) = (BOOLEAN)((_Address)[0] & 0x80); \
}
{ \
    *(_Result) = (BOOLEAN)(((*(UNALIGNED USHORT *)&(_Address)[0] == 0xFFFF) || \
                            (*(UNALIGNED USHORT *)&(_Address)[0] == 0x00C0)) && \
                            (*(UNALIGNED ULONG *)&(_Address)[2] == 0xFFFFFFFF));\
}
{ \
    if (*(ULONG UNALIGNED *)&(_A)[2] > \
        *(ULONG UNALIGNED *)&(_B)[2]) \
    { \
        *(_Result) = 1; \
    } \
    else if (*(ULONG UNALIGNED *)&(_A)[2] < \
             *(ULONG UNALIGNED *)&(_B)[2]) \
    { \
        *(_Result) = (UINT)-1; \
    } \
    else if (*(USHORT UNALIGNED *)(_A) > \
             *(USHORT UNALIGNED *)(_B)) \
    { \
        *(_Result) = 1; \
    } \
    else if (*(USHORT UNALIGNED *)(_A) < \
             *(USHORT UNALIGNED *)(_B)) \
    { \
        *(_Result) = (UINT)-1; \
    } \
    else \
    { \
        *(_Result) = 0; \
    } \
}
{ \
    if ((*(ULONG UNALIGNED *)&(_A)[2] == *(ULONG UNALIGNED *)&(_B)[2]) && \
        (*(USHORT UNALIGNED *)&(_A)[0] == *(USHORT UNALIGNED *)&(_B)[0])) \
    { \
        *(_Result) = 0; \
    } \
    else \
    { \
        *(_Result) = 1; \
    } \
}
{ \
    *((ULONG UNALIGNED *)(_D)) = *((ULONG UNALIGNED *)(_S)); \
    *((USHORT UNALIGNED *)((UCHAR *)(_D)+4)) = \
                            *((USHORT UNALIGNED *)((UCHAR *)(_S)+4)); \
}
