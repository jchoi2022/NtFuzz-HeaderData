       
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#error include netadaptercx.h
#pragma warning(push)
#pragma warning(default:4820)
#pragma warning(disable:4201)
EXTERN_C_START
typedef struct _NET_EXTENSION
{
    void *
        Reserved[4];
    union
    {
        BOOLEAN
            Enabled;
        void *
            Reserved1;
    } DUMMYUNIONNAME;
} NET_EXTENSION;
C_ASSERT(sizeof(NET_EXTENSION) == 40);
#pragma warning(pop)
inline
void *
NetExtensionGetData(
    NET_EXTENSION const * Extension,
    UINT32 Index
)
{
    return (void *)((unsigned char *)(Extension->Reserved[0]) + (SIZE_T)Extension->Reserved[1] * Index);
}
EXTERN_C_END
#endif
#pragma endregion
