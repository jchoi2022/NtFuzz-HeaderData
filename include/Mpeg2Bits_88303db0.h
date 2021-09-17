       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma pack(push)
#pragma pack(1)
typedef struct
{
    WORD Bits;
} PID_BITS_MIDL;
typedef struct
{
    WORD Bits;
} MPEG_HEADER_BITS_MIDL;
typedef struct
{
    BYTE Bits;
} MPEG_HEADER_VERSION_BITS_MIDL;
#pragma pack(pop)
#endif
#pragma endregion
