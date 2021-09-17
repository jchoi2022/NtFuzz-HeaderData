#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
struct SDP_LARGE_INTEGER_16 {
    ULONGLONG LowPart;
    LONGLONG HighPart;
};
struct SDP_ULARGE_INTEGER_16 {
    ULONGLONG LowPart;
    ULONGLONG HighPart;
};
typedef struct SDP_ULARGE_INTEGER_16 SDP_ULARGE_INTEGER_16, *PSDP_ULARGE_INTEGER_16, *LPSDP_ULARGE_INTEGER_16;
typedef struct SDP_LARGE_INTEGER_16 SDP_LARGE_INTEGER_16, *PSDP_LARGE_INTEGER_16, *LPSDP_LARGE_INTEGER_16;
enum NodeContainerType {
    NodeContainerTypeSequence,
    NodeContainerTypeAlternative
};
typedef enum NodeContainerType NodeContainerType;
typedef USHORT SDP_ERROR, *PSDP_ERROR;
enum SDP_TYPE {
    SDP_TYPE_NIL = 0x00,
    SDP_TYPE_UINT = 0x01,
    SDP_TYPE_INT = 0x02,
    SDP_TYPE_UUID = 0x03,
    SDP_TYPE_STRING = 0x04,
    SDP_TYPE_BOOLEAN = 0x05,
    SDP_TYPE_SEQUENCE = 0x06,
    SDP_TYPE_ALTERNATIVE = 0x07,
    SDP_TYPE_URL = 0x08,
    SDP_TYPE_CONTAINER = 0x20
};
typedef enum SDP_TYPE SDP_TYPE;
enum SDP_SPECIFICTYPE {
    SDP_ST_NONE = 0x0000,
    SDP_ST_UINT8 = 0x0010,
    SDP_ST_UINT16 = 0x0110,
    SDP_ST_UINT32 = 0x0210,
    SDP_ST_UINT64 = 0x0310,
    SDP_ST_UINT128 = 0x0410,
    SDP_ST_INT8 = 0x0020,
    SDP_ST_INT16 = 0x0120,
    SDP_ST_INT32 = 0x0220,
    SDP_ST_INT64 = 0x0320,
    SDP_ST_INT128 = 0x0420,
    SDP_ST_UUID16 = 0x0130,
    SDP_ST_UUID32 = 0x0220,
    SDP_ST_UUID128 = 0x0430
};
typedef enum SDP_SPECIFICTYPE SDP_SPECIFICTYPE;
typedef struct _SdpAttributeRange {
    USHORT minAttribute;
    USHORT maxAttribute;
} SdpAttributeRange;
typedef
      [switch_type(unsigned short)]
                                    union SdpQueryUuidUnion {
    [case(SDP_ST_UUID128)]
       GUID uuid128;
    [case(SDP_ST_UUID32)]
       ULONG uuid32;
    [case(SDP_ST_UUID16)]
        USHORT uuid16;
} SdpQueryUuidUnion;
typedef struct _SdpQueryUuid {
    [switch_is(uuidType)]
       SdpQueryUuidUnion u;
    USHORT uuidType;
} SdpQueryUuid;
};
#endif
#pragma endregion
