       
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
const DWORD MTP_COMMAND_MAX_PARAMS = 5;
const DWORD MTP_RESPONSE_MAX_PARAMS = 5;
const WORD MTP_RESPONSE_OK = 0x2001;
#pragma pack(push, Old, 1)
typedef struct _MTP_COMMAND_DATA_IN
{
    WORD OpCode;
    DWORD NumParams;
    DWORD Params[MTP_COMMAND_MAX_PARAMS];
    DWORD NextPhase;
    DWORD CommandWriteDataSize;
    BYTE CommandWriteData[1];
} MTP_COMMAND_DATA_IN, *PMTP_COMMAND_DATA_IN;
typedef struct _MTP_COMMAND_DATA_OUT
{
    WORD ResponseCode;
    DWORD NumParams;
    DWORD Params[MTP_RESPONSE_MAX_PARAMS];
    DWORD CommandReadDataSize;
    BYTE CommandReadData[1];
} MTP_COMMAND_DATA_OUT, *PMTP_COMMAND_DATA_OUT;
#pragma pack(pop, Old)
#endif
#pragma endregion
