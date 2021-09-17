#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
            DS_FORCE_REDISCOVERY | \
            DS_DIRECTORY_SERVICE_REQUIRED | \
            DS_DIRECTORY_SERVICE_PREFERRED | \
            DS_GC_SERVER_REQUIRED | \
            DS_PDC_REQUIRED | \
            DS_BACKGROUND_ONLY | \
            DS_IP_REQUIRED | \
            DS_KDC_REQUIRED | \
            DS_TIMESERV_REQUIRED | \
            DS_WRITABLE_REQUIRED | \
            DS_GOOD_TIMESERV_PREFERRED | \
            DS_AVOID_SELF | \
            DS_ONLY_LDAP_NEEDED | \
            DS_IS_FLAT_NAME | \
            DS_IS_DNS_NAME | \
            DS_TRY_NEXTCLOSEST_SITE | \
            DS_DIRECTORY_SERVICE_6_REQUIRED | \
            DS_DIRECTORY_SERVICE_8_REQUIRED | \
            DS_DIRECTORY_SERVICE_9_REQUIRED | \
            DS_DIRECTORY_SERVICE_10_REQUIRED | \
            DS_WEB_SERVICE_REQUIRED | \
            DS_RETURN_FLAT_NAME | \
            DS_RETURN_DNS_NAME )
typedef struct _DOMAIN_CONTROLLER_INFOA {
    LPSTR DomainControllerName;
    LPSTR DomainControllerAddress;
    ULONG DomainControllerAddressType;
    GUID DomainGuid;
    LPSTR DomainName;
    LPSTR DnsForestName;
    ULONG Flags;
    LPSTR DcSiteName;
    LPSTR ClientSiteName;
} DOMAIN_CONTROLLER_INFOA, *PDOMAIN_CONTROLLER_INFOA;
typedef struct _DOMAIN_CONTROLLER_INFOW {
    [string,unique] wchar_t *DomainControllerName;
    [string,unique] wchar_t *DomainControllerAddress;
    ULONG DomainControllerAddressType;
    GUID DomainGuid;
    [string,unique] wchar_t *DomainName;
    [string,unique] wchar_t *DnsForestName;
    ULONG Flags;
    [string,unique] wchar_t *DcSiteName;
    [string,unique] wchar_t *ClientSiteName;
} DOMAIN_CONTROLLER_INFOW, *PDOMAIN_CONTROLLER_INFOW;
_Success_(return == ERROR_SUCCESS)
DSGETDCAPI
DWORD
WINAPI
DsGetDcNameA(
    _In_opt_ LPCSTR ComputerName,
    _In_opt_ LPCSTR DomainName,
    _In_opt_ GUID *DomainGuid,
    _In_opt_ LPCSTR SiteName,
    _In_ ULONG Flags,
    _Outptr_result_nullonfailure_ PDOMAIN_CONTROLLER_INFOA *DomainControllerInfo
    );
_Success_(return == ERROR_SUCCESS)
DSGETDCAPI
DWORD
WINAPI
DsGetDcNameW(
    _In_opt_ LPCWSTR ComputerName,
    _In_opt_ LPCWSTR DomainName,
    _In_opt_ GUID *DomainGuid,
    _In_opt_ LPCWSTR SiteName,
    _In_ ULONG Flags,
    _Outptr_result_nullonfailure_ PDOMAIN_CONTROLLER_INFOW *DomainControllerInfo
    );
_Success_(return == ERROR_SUCCESS)
DSGETDCAPI
DWORD
WINAPI
DsGetSiteNameA(
    _In_opt_ LPCSTR ComputerName,
    _Outptr_result_nullonfailure_ LPSTR *SiteName
    );
_Success_(return == ERROR_SUCCESS)
DSGETDCAPI
DWORD
WINAPI
DsGetSiteNameW(
    _In_opt_ LPCWSTR ComputerName,
    _Outptr_result_nullonfailure_ LPWSTR *SiteName
    );
DSGETDCAPI
DWORD
WINAPI
DsValidateSubnetNameW(
    _In_ LPCWSTR SubnetName
    );
DSGETDCAPI
DWORD
WINAPI
DsValidateSubnetNameA(
    _In_ LPCSTR SubnetName
    );
_Success_(return == ERROR_SUCCESS)
DSGETDCAPI
DWORD
WINAPI
DsAddressToSiteNamesW(
    _In_opt_ LPCWSTR ComputerName,
    _In_ DWORD EntryCount,
    _In_reads_(EntryCount) PSOCKET_ADDRESS SocketAddresses,
    _Outptr_result_nullonfailure_ _Outptr_result_buffer_(EntryCount) LPWSTR **SiteNames
    );
_Success_(return == ERROR_SUCCESS)
DSGETDCAPI
DWORD
WINAPI
DsAddressToSiteNamesA(
    _In_opt_ LPCSTR ComputerName,
    _In_ DWORD EntryCount,
    _In_reads_(EntryCount) PSOCKET_ADDRESS SocketAddresses,
    _Outptr_result_nullonfailure_ _Outptr_result_buffer_(EntryCount) LPSTR **SiteNames
    );
_Success_(return == ERROR_SUCCESS)
DSGETDCAPI
DWORD
WINAPI
DsAddressToSiteNamesExW(
    _In_opt_ LPCWSTR ComputerName,
    _In_ DWORD EntryCount,
    _In_reads_(EntryCount) PSOCKET_ADDRESS SocketAddresses,
    _Outptr_result_nullonfailure_ _Outptr_result_buffer_(EntryCount) LPWSTR **SiteNames,
    _Outptr_result_nullonfailure_ _Outptr_result_buffer_(EntryCount) LPWSTR **SubnetNames
    );
_Success_(return == ERROR_SUCCESS)
DSGETDCAPI
DWORD
WINAPI
DsAddressToSiteNamesExA(
    _In_opt_ LPCSTR ComputerName,
    _In_ DWORD EntryCount,
    _In_reads_(EntryCount) PSOCKET_ADDRESS SocketAddresses,
    _Outptr_result_nullonfailure_ _Outptr_result_buffer_(EntryCount) LPSTR **SiteNames,
    _Outptr_result_nullonfailure_ _Outptr_result_buffer_(EntryCount) LPSTR **SubnetNames
    );
typedef struct _DS_DOMAIN_TRUSTSW {
    [string] wchar_t * NetbiosDomainName;
    [string] wchar_t * DnsDomainName;
    ULONG Flags;
            DS_DOMAIN_IN_FOREST | \
            DS_DOMAIN_DIRECT_OUTBOUND | \
            DS_DOMAIN_TREE_ROOT | \
            DS_DOMAIN_PRIMARY | \
            DS_DOMAIN_NATIVE_MODE | \
            DS_DOMAIN_DIRECT_INBOUND )
    ULONG ParentIndex;
    ULONG TrustType;
    ULONG TrustAttributes;
    PSID DomainSid;
    GUID DomainGuid;
} DS_DOMAIN_TRUSTSW, *PDS_DOMAIN_TRUSTSW;
typedef struct _DS_DOMAIN_TRUSTSA {
    LPSTR NetbiosDomainName;
    LPSTR DnsDomainName;
    ULONG Flags;
    ULONG ParentIndex;
    ULONG TrustType;
    ULONG TrustAttributes;
    PSID DomainSid;
    GUID DomainGuid;
} DS_DOMAIN_TRUSTSA, *PDS_DOMAIN_TRUSTSA;
_Success_(return == ERROR_SUCCESS)
DSGETDCAPI
DWORD
WINAPI
DsEnumerateDomainTrustsW (
    _In_opt_ LPWSTR ServerName,
    _In_ ULONG Flags,
    _Outptr_result_nullonfailure_ _Outptr_result_buffer_(*DomainCount) PDS_DOMAIN_TRUSTSW *Domains,
    _Out_ PULONG DomainCount
    );
_Success_(return == ERROR_SUCCESS)
DSGETDCAPI
DWORD
WINAPI
DsEnumerateDomainTrustsA (
    _In_opt_ LPSTR ServerName,
    _In_ ULONG Flags,
    _Outptr_result_nullonfailure_ _Outptr_result_buffer_(*DomainCount) PDS_DOMAIN_TRUSTSA *Domains,
    _Out_ PULONG DomainCount
    );
_Success_(return == ERROR_SUCCESS)
DSGETDCAPI
DWORD
WINAPI
DsGetDcSiteCoverageW(
    _In_opt_ LPCWSTR ServerName,
    _Out_ PULONG EntryCount,
    _Outptr_result_nullonfailure_ _Outptr_result_buffer_(*EntryCount) LPWSTR **SiteNames
    );
_Success_(return == ERROR_SUCCESS)
DSGETDCAPI
DWORD
WINAPI
DsGetDcSiteCoverageA(
    _In_opt_ LPCSTR ServerName,
    _Out_ PULONG EntryCount,
    _Outptr_result_nullonfailure_ _Outptr_result_buffer_(*EntryCount) LPSTR **SiteNames
    );
DSGETDCAPI
DWORD
WINAPI
DsDeregisterDnsHostRecordsW (
    _In_opt_ LPWSTR ServerName,
    _In_opt_ LPWSTR DnsDomainName,
    _In_opt_ GUID *DomainGuid,
    _In_opt_ GUID *DsaGuid,
    _In_ LPWSTR DnsHostName
    );
DSGETDCAPI
DWORD
WINAPI
DsDeregisterDnsHostRecordsA (
    _In_opt_ LPSTR ServerName,
    _In_opt_ LPSTR DnsDomainName,
    _In_opt_ GUID *DomainGuid,
    _In_opt_ GUID *DsaGuid,
    _In_ LPSTR DnsHostName
    );
            DS_FORCE_REDISCOVERY | \
            DS_ONLY_LDAP_NEEDED | \
            DS_KDC_REQUIRED | \
            DS_PDC_REQUIRED | \
            DS_GC_SERVER_REQUIRED | \
            DS_WRITABLE_REQUIRED )
DSGETDCAPI
DWORD
WINAPI
DsGetDcOpenW(
    _In_ LPCWSTR DnsName,
    _In_ ULONG OptionFlags,
    _In_opt_ LPCWSTR SiteName,
    _In_opt_ GUID *DomainGuid,
    _In_opt_ LPCWSTR DnsForestName,
    _In_ ULONG DcFlags,
    _Out_ PHANDLE RetGetDcContext
    );
DSGETDCAPI
DWORD
WINAPI
DsGetDcOpenA(
    _In_ LPCSTR DnsName,
    _In_ ULONG OptionFlags,
    _In_opt_ LPCSTR SiteName,
    _In_opt_ GUID *DomainGuid,
    _In_opt_ LPCSTR DnsForestName,
    _In_ ULONG DcFlags,
    _Out_ PHANDLE RetGetDcContext
    );
_Success_(return == ERROR_SUCCESS)
DSGETDCAPI
DWORD
WINAPI
DsGetDcNextW(
    _In_ HANDLE GetDcContextHandle,
    _Out_opt_ PULONG SockAddressCount,
    _Outptr_opt_result_buffer_(*SockAddressCount) LPSOCKET_ADDRESS *SockAddresses,
    _Outptr_opt_result_nullonfailure_ LPWSTR *DnsHostName
    );
_Success_(return == ERROR_SUCCESS)
DSGETDCAPI
DWORD
WINAPI
DsGetDcNextA(
    _In_ HANDLE GetDcContextHandle,
    _Out_opt_ PULONG SockAddressCount,
    _Outptr_opt_result_buffer_(*SockAddressCount) LPSOCKET_ADDRESS *SockAddresses,
    _Outptr_opt_result_nullonfailure_ LPSTR *DnsHostName
    );
DSGETDCAPI
VOID
WINAPI
DsGetDcCloseW(
    _In_ HANDLE GetDcContextHandle
    );
}
#endif
#pragma endregion
