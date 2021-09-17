       
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#error include netadaptercx.h
#pragma warning(push)
#pragma warning(default:4820)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#if _WIN64
#else
#endif
EXTERN_C_START
typedef UINT64 LOGICAL_ADDRESS;
typedef struct  _NET_FRAGMENT
{
    UINT64
        ValidLength : 26;
    UINT64
        Capacity : 26;
    UINT64
        Offset : 10;
    UINT64
        Scratch : 1;
    UINT64
        Reserved0 : 1;
    ULONG_PTR
        OsReserved_Bounced : 1;
    ULONG_PTR
        Reserved : 63;
    void *
        VirtualAddress;
    union
    {
        struct
        {
            void *
                RxBufferReturnContext;
        } DUMMYSTRUCTNAME;
        union
        {
            MDL *
                Mdl;
            LOGICAL_ADDRESS
                DmaLogicalAddress;
        } Mapping;
    } DUMMYUNIONNAME;
} NET_FRAGMENT;
EXTERN_C_END
C_ASSERT(sizeof(NET_FRAGMENT) == 32);
#pragma warning(pop)
#endif
#pragma endregion
