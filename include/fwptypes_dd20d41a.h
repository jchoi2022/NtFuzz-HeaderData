#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "wtypes.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family or AppRuntime Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_APPRUNTIME)
typedef struct _LUID
    {
    DWORD LowPart;
    LONG HighPart;
    } LUID;
typedef struct _LUID *PLUID;
typedef
enum FWP_DIRECTION_
    {
        FWP_DIRECTION_OUTBOUND = 0,
        FWP_DIRECTION_INBOUND = ( FWP_DIRECTION_OUTBOUND + 1 ) ,
        FWP_DIRECTION_MAX = ( FWP_DIRECTION_INBOUND + 1 )
    } FWP_DIRECTION;
typedef
enum FWP_IP_VERSION_
    {
        FWP_IP_VERSION_V4 = 0,
        FWP_IP_VERSION_V6 = ( FWP_IP_VERSION_V4 + 1 ) ,
        FWP_IP_VERSION_NONE = ( FWP_IP_VERSION_V6 + 1 ) ,
        FWP_IP_VERSION_MAX = ( FWP_IP_VERSION_NONE + 1 )
    } FWP_IP_VERSION;
typedef
enum FWP_NE_FAMILY_
    {
        FWP_AF_INET = FWP_IP_VERSION_V4,
        FWP_AF_INET6 = FWP_IP_VERSION_V6,
        FWP_AF_ETHER = FWP_IP_VERSION_NONE,
        FWP_AF_NONE = ( FWP_AF_ETHER + 1 )
    } FWP_AF;
typedef
enum FWP_ETHER_ENCAP_METHOD_
    {
        FWP_ETHER_ENCAP_METHOD_ETHER_V2 = 0,
        FWP_ETHER_ENCAP_METHOD_SNAP = 1,
        FWP_ETHER_ENCAP_METHOD_SNAP_W_OUI_ZERO = 3
    } FWP_ETHER_ENCAP_METHOD;
typedef
enum FWP_DATA_TYPE_
    {
        FWP_EMPTY = 0,
        FWP_UINT8 = ( FWP_EMPTY + 1 ) ,
        FWP_UINT16 = ( FWP_UINT8 + 1 ) ,
        FWP_UINT32 = ( FWP_UINT16 + 1 ) ,
        FWP_UINT64 = ( FWP_UINT32 + 1 ) ,
        FWP_INT8 = ( FWP_UINT64 + 1 ) ,
        FWP_INT16 = ( FWP_INT8 + 1 ) ,
        FWP_INT32 = ( FWP_INT16 + 1 ) ,
        FWP_INT64 = ( FWP_INT32 + 1 ) ,
        FWP_FLOAT = ( FWP_INT64 + 1 ) ,
        FWP_DOUBLE = ( FWP_FLOAT + 1 ) ,
        FWP_BYTE_ARRAY16_TYPE = ( FWP_DOUBLE + 1 ) ,
        FWP_BYTE_BLOB_TYPE = ( FWP_BYTE_ARRAY16_TYPE + 1 ) ,
        FWP_SID = ( FWP_BYTE_BLOB_TYPE + 1 ) ,
        FWP_SECURITY_DESCRIPTOR_TYPE = ( FWP_SID + 1 ) ,
        FWP_TOKEN_INFORMATION_TYPE = ( FWP_SECURITY_DESCRIPTOR_TYPE + 1 ) ,
        FWP_TOKEN_ACCESS_INFORMATION_TYPE = ( FWP_TOKEN_INFORMATION_TYPE + 1 ) ,
        FWP_UNICODE_STRING_TYPE = ( FWP_TOKEN_ACCESS_INFORMATION_TYPE + 1 ) ,
        FWP_BYTE_ARRAY6_TYPE = ( FWP_UNICODE_STRING_TYPE + 1 ) ,
        FWP_BITMAP_INDEX_TYPE = ( FWP_BYTE_ARRAY6_TYPE + 1 ) ,
        FWP_BITMAP_ARRAY64_TYPE = ( FWP_BITMAP_INDEX_TYPE + 1 ) ,
        FWP_SINGLE_DATA_TYPE_MAX = 0xff,
        FWP_V4_ADDR_MASK = ( FWP_SINGLE_DATA_TYPE_MAX + 1 ) ,
        FWP_V6_ADDR_MASK = ( FWP_V4_ADDR_MASK + 1 ) ,
        FWP_RANGE_TYPE = ( FWP_V6_ADDR_MASK + 1 ) ,
        FWP_DATA_TYPE_MAX = ( FWP_RANGE_TYPE + 1 )
    } FWP_DATA_TYPE;
typedef struct FWP_BITMAP_ARRAY64_
    {
    UINT8 bitmapArray64[ 8 ];
    } FWP_BITMAP_ARRAY64;
typedef struct FWP_BYTE_ARRAY6_
    {
    UINT8 byteArray6[ 6 ];
    } FWP_BYTE_ARRAY6;
typedef struct FWP_BYTE_ARRAY16_
    {
    UINT8 byteArray16[ 16 ];
    } FWP_BYTE_ARRAY16;
typedef struct FWP_BYTE_BLOB_
    {
    UINT32 size;
                            UINT8 *data;
    } FWP_BYTE_BLOB;
typedef struct FWP_TOKEN_INFORMATION_
    {
    ULONG sidCount;
                    PSID_AND_ATTRIBUTES sids;
    ULONG restrictedSidCount;
                    PSID_AND_ATTRIBUTES restrictedSids;
    } FWP_TOKEN_INFORMATION;
typedef struct FWP_VALUE0_
    {
    FWP_DATA_TYPE type;
                                   union
        {
                       UINT8 uint8;
                       UINT16 uint16;
                       UINT32 uint32;
                               UINT64 *uint64;
                       INT8 int8;
                       INT16 int16;
                       INT32 int32;
                               INT64 *int64;
                       float float32;
                               double *double64;
                               FWP_BYTE_ARRAY16 *byteArray16;
                               FWP_BYTE_BLOB *byteBlob;
                               SID *sid;
                               FWP_BYTE_BLOB *sd;
                               FWP_TOKEN_INFORMATION *tokenInformation;
                               FWP_BYTE_BLOB *tokenAccessInformation;
                               LPWSTR unicodeString;
                               FWP_BYTE_ARRAY6 *byteArray6;
                               FWP_BITMAP_ARRAY64 *bitmapArray64;
        } ;
    } FWP_VALUE0;
typedef
enum FWP_MATCH_TYPE_
    {
        FWP_MATCH_EQUAL = 0,
        FWP_MATCH_GREATER = ( FWP_MATCH_EQUAL + 1 ) ,
        FWP_MATCH_LESS = ( FWP_MATCH_GREATER + 1 ) ,
        FWP_MATCH_GREATER_OR_EQUAL = ( FWP_MATCH_LESS + 1 ) ,
        FWP_MATCH_LESS_OR_EQUAL = ( FWP_MATCH_GREATER_OR_EQUAL + 1 ) ,
        FWP_MATCH_RANGE = ( FWP_MATCH_LESS_OR_EQUAL + 1 ) ,
        FWP_MATCH_FLAGS_ALL_SET = ( FWP_MATCH_RANGE + 1 ) ,
        FWP_MATCH_FLAGS_ANY_SET = ( FWP_MATCH_FLAGS_ALL_SET + 1 ) ,
        FWP_MATCH_FLAGS_NONE_SET = ( FWP_MATCH_FLAGS_ANY_SET + 1 ) ,
        FWP_MATCH_EQUAL_CASE_INSENSITIVE = ( FWP_MATCH_FLAGS_NONE_SET + 1 ) ,
        FWP_MATCH_NOT_EQUAL = ( FWP_MATCH_EQUAL_CASE_INSENSITIVE + 1 ) ,
        FWP_MATCH_PREFIX = ( FWP_MATCH_NOT_EQUAL + 1 ) ,
        FWP_MATCH_NOT_PREFIX = ( FWP_MATCH_PREFIX + 1 ) ,
        FWP_MATCH_TYPE_MAX = ( FWP_MATCH_NOT_PREFIX + 1 )
    } FWP_MATCH_TYPE;
typedef struct FWP_V4_ADDR_AND_MASK_
    {
    UINT32 addr;
    UINT32 mask;
    } FWP_V4_ADDR_AND_MASK;
typedef struct FWP_V6_ADDR_AND_MASK_
    {
    UINT8 addr[ 16 ];
    UINT8 prefixLength;
    } FWP_V6_ADDR_AND_MASK;
typedef struct FWP_RANGE0_
    {
    FWP_VALUE0 valueLow;
    FWP_VALUE0 valueHigh;
    } FWP_RANGE0;
typedef struct FWP_CONDITION_VALUE0_
    {
    FWP_DATA_TYPE type;
                                   union
        {
                       UINT8 uint8;
                       UINT16 uint16;
                       UINT32 uint32;
                               UINT64 *uint64;
                       INT8 int8;
                       INT16 int16;
                       INT32 int32;
                               INT64 *int64;
                       float float32;
                               double *double64;
                               FWP_BYTE_ARRAY16 *byteArray16;
                               FWP_BYTE_BLOB *byteBlob;
                               SID *sid;
                               FWP_BYTE_BLOB *sd;
                               FWP_TOKEN_INFORMATION *tokenInformation;
                               FWP_BYTE_BLOB *tokenAccessInformation;
                               LPWSTR unicodeString;
                               FWP_BYTE_ARRAY6 *byteArray6;
                               FWP_BITMAP_ARRAY64 *bitmapArray64;
                               FWP_V4_ADDR_AND_MASK *v4AddrMask;
                               FWP_V6_ADDR_AND_MASK *v6AddrMask;
                               FWP_RANGE0 *rangeValue;
        } ;
    } FWP_CONDITION_VALUE0;
typedef
enum FWP_CLASSIFY_OPTION_TYPE_
    {
        FWP_CLASSIFY_OPTION_MULTICAST_STATE = 0,
        FWP_CLASSIFY_OPTION_LOOSE_SOURCE_MAPPING = ( FWP_CLASSIFY_OPTION_MULTICAST_STATE + 1 ) ,
        FWP_CLASSIFY_OPTION_UNICAST_LIFETIME = ( FWP_CLASSIFY_OPTION_LOOSE_SOURCE_MAPPING + 1 ) ,
        FWP_CLASSIFY_OPTION_MCAST_BCAST_LIFETIME = ( FWP_CLASSIFY_OPTION_UNICAST_LIFETIME + 1 ) ,
        FWP_CLASSIFY_OPTION_SECURE_SOCKET_SECURITY_FLAGS = ( FWP_CLASSIFY_OPTION_MCAST_BCAST_LIFETIME + 1 ) ,
        FWP_CLASSIFY_OPTION_SECURE_SOCKET_AUTHIP_MM_POLICY_KEY = ( FWP_CLASSIFY_OPTION_SECURE_SOCKET_SECURITY_FLAGS + 1 ) ,
        FWP_CLASSIFY_OPTION_SECURE_SOCKET_AUTHIP_QM_POLICY_KEY = ( FWP_CLASSIFY_OPTION_SECURE_SOCKET_AUTHIP_MM_POLICY_KEY + 1 ) ,
        FWP_CLASSIFY_OPTION_LOCAL_ONLY_MAPPING = ( FWP_CLASSIFY_OPTION_SECURE_SOCKET_AUTHIP_QM_POLICY_KEY + 1 ) ,
        FWP_CLASSIFY_OPTION_MAX = ( FWP_CLASSIFY_OPTION_LOCAL_ONLY_MAPPING + 1 )
    } FWP_CLASSIFY_OPTION_TYPE;
typedef
enum FWP_VSWITCH_NETWORK_TYPE_
    {
        FWP_VSWITCH_NETWORK_TYPE_UNKNOWN = 0,
        FWP_VSWITCH_NETWORK_TYPE_PRIVATE = ( FWP_VSWITCH_NETWORK_TYPE_UNKNOWN + 1 ) ,
        FWP_VSWITCH_NETWORK_TYPE_INTERNAL = ( FWP_VSWITCH_NETWORK_TYPE_PRIVATE + 1 ) ,
        FWP_VSWITCH_NETWORK_TYPE_EXTERNAL = ( FWP_VSWITCH_NETWORK_TYPE_INTERNAL + 1 )
    } FWP_VSWITCH_NETWORK_TYPE;
typedef UINT32 FWP_ACTION_TYPE;
typedef
enum FWP_FILTER_ENUM_TYPE_
    {
        FWP_FILTER_ENUM_FULLY_CONTAINED = 0,
        FWP_FILTER_ENUM_OVERLAPPING = ( FWP_FILTER_ENUM_FULLY_CONTAINED + 1 ) ,
        FWP_FILTER_ENUM_TYPE_MAX = ( FWP_FILTER_ENUM_OVERLAPPING + 1 )
    } FWP_FILTER_ENUM_TYPE;
typedef struct FWPM_DISPLAY_DATA0_
    {
                           wchar_t *name;
                           wchar_t *description;
    } FWPM_DISPLAY_DATA0;
typedef struct IPSEC_VIRTUAL_IF_TUNNEL_INFO0_
    {
    UINT64 virtualIfTunnelId;
    UINT64 trafficSelectorId;
    } IPSEC_VIRTUAL_IF_TUNNEL_INFO0;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_fwptypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fwptypes_0000_0000_v0_0_s_ifspec;
}
