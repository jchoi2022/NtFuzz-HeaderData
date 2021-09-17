       
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
EXTERN_C_START
#pragma warning(push)
#pragma warning(default:4820)
#pragma warning(disable:4201)
typedef struct _NET_PACKET_RECEIVE_SEGMENT_COALESCENCE
{
    UINT16
        CoalescedSegmentCount;
    union {
        struct {
            UINT16
                RscTcpTimestampDelta;
        } TCP;
    } DUMMYUNIONNAME;
} NET_PACKET_RECEIVE_SEGMENT_COALESCENCE;
C_ASSERT(sizeof(NET_PACKET_RECEIVE_SEGMENT_COALESCENCE) == 8);
#pragma warning(pop)
EXTERN_C_END
#endif
#pragma endregion
