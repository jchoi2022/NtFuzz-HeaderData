       
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES | WINAPI_FAMILY_SYSTEM)
struct PERCEPTION_PAYLOAD_FIELD
{
    GUID FieldId;
    UINT OffsetInBytes;
    UINT SizeInBytes;
};
struct PERCEPTION_STATE_STREAM_TIMESTAMPS
{
    LONGLONG InputTimestampInQpcCounts;
    LONGLONG AvailableTimestampInQpcCounts;
};
DEFINE_GUID( PERCEPTIONFIELD_StateStream_TimeStamps,
    0xaa886119, 0xf32f, 0x49bf, 0x92, 0xca, 0xf9, 0xdd, 0xf7, 0x84, 0xd2, 0x97);
#endif
