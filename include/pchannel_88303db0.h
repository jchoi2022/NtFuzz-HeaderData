#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#error PAL_PACKED_STRUCT is not defined
#pragma PAL_PRAGMA_PACK_PUSH(pchannel_channel_def, 1)
typedef struct tagCHANNEL_DEF
{
    char name[CHANNEL_NAME_LEN + 1];
    ULONG options;
} PAL_PACKED_STRUCT(CHANNEL_DEF);
typedef CHANNEL_DEF UNALIGNED FAR *PCHANNEL_DEF;
typedef PCHANNEL_DEF UNALIGNED FAR *PPCHANNEL_DEF;
#pragma PAL_PRAGMA_PACK_POP(pchannel_channel_def)
typedef struct tagCHANNEL_PDU_HEADER
{
    UINT32 length;
    UINT32 flags;
} CHANNEL_PDU_HEADER, FAR * PCHANNEL_PDU_HEADER;
#endif
#pragma endregion
