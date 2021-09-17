       
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
EXTERN_C_START
#pragma warning(push)
#pragma warning(default:4820)
#pragma warning(disable:4214)
#pragma warning(disable:4201)
typedef struct _NET_PACKET_LARGE_SEND_SEGMENTATION
{
    union {
        struct {
            UINT32
                Mss : 20;
            UINT32
                Reserved0 : 12;
        } TCP;
    } DUMMYUNIONNAME;
} NET_PACKET_LARGE_SEND_SEGMENTATION;
C_ASSERT(sizeof(NET_PACKET_LARGE_SEND_SEGMENTATION) == 4);
#pragma warning(pop)
EXTERN_C_END
#endif
#pragma endregion
