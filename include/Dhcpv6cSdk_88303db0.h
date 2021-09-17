#include <winapifamily.h>
extern "C" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct _DHCPV6CAPI_PARAMS {
    ULONG Flags;
    ULONG OptionId;
    BOOL IsVendor;
    LPBYTE Data;
    DWORD nBytesData;
} DHCPV6CAPI_PARAMS, *PDHCPV6CAPI_PARAMS, *LPDHCPV6CAPI_PARAMS;
typedef struct _DHCPV6CAPI_PARAMS_ARRAY {
    ULONG nParams;
    LPDHCPV6CAPI_PARAMS Params;
} DHCPV6CAPI_PARAMS_ARRAY, *PDHCPV6CAPI_PARAMS_ARRAY, *LPDHCPV6CAPI_PARAMS_ARRAY;
typedef struct _DHCPV6CAPI_CLASSID {
    ULONG Flags;
        [size_is(nBytesData)] LPBYTE Data;
    ULONG nBytesData;
} DHCPV6CAPI_CLASSID, *PDHCPV6CAPI_CLASSID, *LPDHCPV6CAPI_CLASSID;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef
enum
{
    STATUS_NO_ERROR,
    STATUS_UNSPECIFIED_FAILURE,
    STATUS_NO_BINDING = 3,
    STATUS_NOPREFIX_AVAIL = 6
}StatusCode;
typedef struct _DHCPV6Prefix{
    UCHAR prefix[16];
    DWORD prefixLength;
    DWORD preferredLifeTime;
    DWORD validLifeTime;
    StatusCode status;
}DHCPV6Prefix, *PDHCPV6Prefix, *LPDHCPV6Prefix;
typedef struct _DHCPV6PrefixLeaseInformation {
        DWORD nPrefixes;
        _Field_size_(nPrefixes) LPDHCPV6Prefix prefixArray;
 DWORD iaid;
 time_t T1;
 time_t T2;
 time_t MaxLeaseExpirationTime;
 time_t LastRenewalTime;
 StatusCode status;
        _Field_size_bytes_(ServerIdLen) LPBYTE ServerId;
 DWORD ServerIdLen;
} DHCPV6PrefixLeaseInformation, *PDHCPV6PrefixLeaseInformation, *LPDHCPV6PrefixLeaseInformation;
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
VOID
APIENTRY
Dhcpv6CApiInitialize(
    OUT LPDWORD Version
);
VOID
APIENTRY
Dhcpv6CApiCleanup(
    VOID
);
DWORD
APIENTRY
Dhcpv6RequestParams(
IN BOOL forceNewInform,
IN LPVOID reserved,
_In_ IN LPWSTR adapterName,
IN LPDHCPV6CAPI_CLASSID classId,
IN OUT DHCPV6CAPI_PARAMS_ARRAY recdParams,
IN LPBYTE buffer,
IN OUT LPDWORD pSize
);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
DWORD
APIENTRY
Dhcpv6RequestPrefix(
IN _In_ LPWSTR adapterName,
IN LPDHCPV6CAPI_CLASSID pclassId,
IN OUT LPDHCPV6PrefixLeaseInformation prefixleaseInfo,
_Out_ DWORD* pdwTimeToWait
);
DWORD
APIENTRY
Dhcpv6RenewPrefix(
IN _In_ LPWSTR adapterName,
IN LPDHCPV6CAPI_CLASSID pclassId,
IN OUT LPDHCPV6PrefixLeaseInformation prefixleaseInfo,
_Out_ DWORD* pdwTimeToWait,
IN DWORD bValidatePrefix
);
DWORD
APIENTRY
Dhcpv6ReleasePrefix(
_In_ IN LPWSTR adapterName,
IN LPDHCPV6CAPI_CLASSID classId,
IN LPDHCPV6PrefixLeaseInformation leaseInfo
);
#endif
#pragma endregion
}
