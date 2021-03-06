       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef DWORD DHCP_IP_ADDRESS, *PDHCP_IP_ADDRESS, *LPDHCP_IP_ADDRESS;
typedef DWORD DHCP_OPTION_ID;
typedef struct _DATE_TIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
} DATE_TIME,*PDATE_TIME, *LPDATE_TIME;
typedef DWORD DHCP_IP_MASK;
typedef DWORD DHCP_RESUME_HANDLE;
typedef struct _DHCP_IP_RANGE {
    DHCP_IP_ADDRESS StartAddress;
    DHCP_IP_ADDRESS EndAddress;
} DHCP_IP_RANGE, *LPDHCP_IP_RANGE;
typedef struct _DHCP_BINARY_DATA {
    DWORD DataLength;
    _Field_size_bytes_(DataLength) BYTE *Data;
} DHCP_BINARY_DATA, *LPDHCP_BINARY_DATA;
typedef DHCP_BINARY_DATA DHCP_CLIENT_UID;
typedef struct _DHCP_HOST_INFO {
    DHCP_IP_ADDRESS IpAddress;
    LPWSTR NetBiosName;
    LPWSTR HostName;
} DHCP_HOST_INFO, *LPDHCP_HOST_INFO;
typedef enum _DHCP_FORCE_FLAG {
    DhcpFullForce,
    DhcpNoForce,
    DhcpFailoverForce
} DHCP_FORCE_FLAG, *LPDHCP_FORCE_FLAG;
typedef struct _DWORD_DWORD {
    DWORD DWord1;
    DWORD DWord2;
} DWORD_DWORD, *LPDWORD_DWORD;
typedef enum _DHCP_SUBNET_STATE {
    DhcpSubnetEnabled = 0,
    DhcpSubnetDisabled,
    DhcpSubnetEnabledSwitched,
    DhcpSubnetDisabledSwitched,
    DhcpSubnetInvalidState
} DHCP_SUBNET_STATE, *LPDHCP_SUBNET_STATE;
typedef struct _DHCP_SUBNET_INFO {
    DHCP_IP_ADDRESS SubnetAddress;
    DHCP_IP_MASK SubnetMask;
    LPWSTR SubnetName;
    LPWSTR SubnetComment;
    DHCP_HOST_INFO PrimaryHost;
    DHCP_SUBNET_STATE SubnetState;
} DHCP_SUBNET_INFO, *LPDHCP_SUBNET_INFO;
typedef struct _DHCP_SUBNET_INFO_VQ {
    DHCP_IP_ADDRESS SubnetAddress;
    DHCP_IP_MASK SubnetMask;
    LPWSTR SubnetName;
    LPWSTR SubnetComment;
    DHCP_HOST_INFO PrimaryHost;
    DHCP_SUBNET_STATE SubnetState;
    DWORD QuarantineOn;
    DWORD Reserved1;
    DWORD Reserved2;
    INT64 Reserved3;
    INT64 Reserved4;
} DHCP_SUBNET_INFO_VQ, *LPDHCP_SUBNET_INFO_VQ;
typedef struct _DHCP_IP_ARRAY {
    DWORD NumElements;
    _Field_size_(NumElements) LPDHCP_IP_ADDRESS Elements;
} DHCP_IP_ARRAY, *LPDHCP_IP_ARRAY;
typedef struct _DHCP_IP_CLUSTER {
    DHCP_IP_ADDRESS ClusterAddress;
    DWORD ClusterMask;
} DHCP_IP_CLUSTER, *LPDHCP_IP_CLUSTER;
typedef struct _DHCP_IP_RESERVATION {
    DHCP_IP_ADDRESS ReservedIpAddress;
    DHCP_CLIENT_UID *ReservedForClient;
} DHCP_IP_RESERVATION, *LPDHCP_IP_RESERVATION;
typedef enum _DHCP_SUBNET_ELEMENT_TYPE_V5 {
    DhcpIpRanges,
    DhcpSecondaryHosts,
    DhcpReservedIps,
    DhcpExcludedIpRanges,
    DhcpIpUsedClusters,
    DhcpIpRangesDhcpOnly,
    DhcpIpRangesDhcpBootp,
    DhcpIpRangesBootpOnly,
} DHCP_SUBNET_ELEMENT_TYPE, *LPDHCP_SUBNET_ELEMENT_TYPE;
typedef struct _DHCP_SUBNET_ELEMENT_DATA {
    DHCP_SUBNET_ELEMENT_TYPE ElementType;
    union _DHCP_SUBNET_ELEMENT_UNION {
        DHCP_IP_RANGE *IpRange;
        DHCP_HOST_INFO *SecondaryHost;
        DHCP_IP_RESERVATION *ReservedIp;
        DHCP_IP_RANGE *ExcludeIpRange;
        DHCP_IP_CLUSTER *IpUsedCluster;
    } Element;
} DHCP_SUBNET_ELEMENT_DATA, *LPDHCP_SUBNET_ELEMENT_DATA;
typedef union _DHCP_SUBNET_ELEMENT_UNION
    DHCP_SUBNET_ELEMENT_UNION, *LPDHCP_SUBNET_ELEMENT_UNION;
typedef struct _DHCP_SUBNET_ELEMENT_INFO_ARRAY {
    DWORD NumElements;
    LPDHCP_SUBNET_ELEMENT_DATA Elements;
} DHCP_SUBNET_ELEMENT_INFO_ARRAY, *LPDHCP_SUBNET_ELEMENT_INFO_ARRAY;
typedef struct _DHCP_IPV6_ADDRESS {
    ULONGLONG HighOrderBits;
    ULONGLONG LowOrderBits;
} DHCP_IPV6_ADDRESS, *LPDHCP_IPV6_ADDRESS, *PDHCP_IPV6_ADDRESS;
typedef DHCP_IPV6_ADDRESS DHCP_RESUME_IPV6_HANDLE;
typedef enum _DHCP_FILTER_LIST_TYPE {
    Deny,
    Allow
} DHCP_FILTER_LIST_TYPE, *LPDHCP_FILTER_LIST_TYPE;
typedef struct _DHCP_ADDR_PATTERN {
    BOOL MatchHWType;
    BYTE HWType;
    BOOL IsWildcard;
    BYTE Length;
    BYTE Pattern[MAX_PATTERN_LENGTH];
} DHCP_ADDR_PATTERN, *LPDHCP_ADDR_PATTERN;
typedef struct _DHCP_FILTER_ADD_INFOV4 {
    DHCP_ADDR_PATTERN AddrPatt;
    LPWSTR Comment;
    DHCP_FILTER_LIST_TYPE ListType;
} DHCP_FILTER_ADD_INFO, *LPDHCP_FILTER_ADD_INFO;
typedef struct _DHCP_FILTER_GLOBAL_INFO {
    BOOL EnforceAllowList;
    BOOL EnforceDenyList;
} DHCP_FILTER_GLOBAL_INFO, *LPDHCP_FILTER_GLOBAL_INFO;
typedef struct _DHCP_FILTER_RECORD {
    DHCP_ADDR_PATTERN AddrPatt;
    LPWSTR Comment;
} DHCP_FILTER_RECORD, *LPDHCP_FILTER_RECORD;
typedef struct _DHCP_FILTER_ENUM_INFO {
    DWORD NumElements;
    _Field_size_(NumElements) LPDHCP_FILTER_RECORD pEnumRecords;
} DHCP_FILTER_ENUM_INFO, *LPDHCP_FILTER_ENUM_INFO;
typedef enum _DHCP_OPTION_DATA_TYPE {
    DhcpByteOption,
    DhcpWordOption,
    DhcpDWordOption,
    DhcpDWordDWordOption,
    DhcpIpAddressOption,
    DhcpStringDataOption,
    DhcpBinaryDataOption,
    DhcpEncapsulatedDataOption,
    DhcpIpv6AddressOption
} DHCP_OPTION_DATA_TYPE, *LPDHCP_OPTION_DATA_TYPE;
typedef struct _DHCP_OPTION_DATA_ELEMENT {
    DHCP_OPTION_DATA_TYPE OptionType;
    union _DHCP_OPTION_ELEMENT_UNION {
        BYTE ByteOption;
        WORD WordOption;
        DWORD DWordOption;
        DWORD_DWORD DWordDWordOption;
        DHCP_IP_ADDRESS IpAddressOption;
        LPWSTR StringDataOption;
        DHCP_BINARY_DATA BinaryDataOption;
        DHCP_BINARY_DATA EncapsulatedDataOption;
        LPWSTR Ipv6AddressDataOption;
    } Element;
} DHCP_OPTION_DATA_ELEMENT, *LPDHCP_OPTION_DATA_ELEMENT;
typedef union _DHCP_OPTION_ELEMENT_UNION
    DHCP_OPTION_ELEMENT_UNION, *LPDHCP_OPTION_ELEMENT_UNION;
typedef struct _DHCP_OPTION_DATA {
    DWORD NumElements;
    _Field_size_(NumElements) LPDHCP_OPTION_DATA_ELEMENT Elements;
} DHCP_OPTION_DATA, *LPDHCP_OPTION_DATA;
typedef enum _DHCP_OPTION_TYPE {
    DhcpUnaryElementTypeOption,
    DhcpArrayTypeOption
} DHCP_OPTION_TYPE, *LPDHCP_OPTION_TYPE;
typedef struct _DHCP_OPTION {
    DHCP_OPTION_ID OptionID;
    LPWSTR OptionName;
    LPWSTR OptionComment;
    DHCP_OPTION_DATA DefaultValue;
    DHCP_OPTION_TYPE OptionType;
} DHCP_OPTION, *LPDHCP_OPTION;
typedef struct _DHCP_OPTION_ARRAY {
    DWORD NumElements;
    LPDHCP_OPTION Options;
} DHCP_OPTION_ARRAY, *LPDHCP_OPTION_ARRAY;
typedef struct _DHCP_OPTION_VALUE {
    DHCP_OPTION_ID OptionID;
    DHCP_OPTION_DATA Value;
} DHCP_OPTION_VALUE, *LPDHCP_OPTION_VALUE;
typedef struct _DHCP_OPTION_VALUE_ARRAY {
    DWORD NumElements;
    LPDHCP_OPTION_VALUE Values;
} DHCP_OPTION_VALUE_ARRAY, *LPDHCP_OPTION_VALUE_ARRAY;
typedef enum _DHCP_OPTION_SCOPE_TYPE {
    DhcpDefaultOptions,
    DhcpGlobalOptions,
    DhcpSubnetOptions,
    DhcpReservedOptions,
    DhcpMScopeOptions
} DHCP_OPTION_SCOPE_TYPE, *LPDHCP_OPTION_SCOPE_TYPE;
typedef struct _DHCP_RESERVED_SCOPE {
    DHCP_IP_ADDRESS ReservedIpAddress;
    DHCP_IP_ADDRESS ReservedIpSubnetAddress;
} DHCP_RESERVED_SCOPE, *LPDHCP_RESERVED_SCOPE;
typedef struct _DHCP_OPTION_SCOPE_INFO {
    DHCP_OPTION_SCOPE_TYPE ScopeType;
    union _DHCP_OPTION_SCOPE_UNION {
        PVOID DefaultScopeInfo;
        PVOID GlobalScopeInfo;
        DHCP_IP_ADDRESS SubnetScopeInfo;
        DHCP_RESERVED_SCOPE ReservedScopeInfo;
        LPWSTR MScopeInfo;
    } ScopeInfo;
} DHCP_OPTION_SCOPE_INFO, *LPDHCP_OPTION_SCOPE_INFO;
typedef enum _DHCP_OPTION_SCOPE_TYPE6 {
    DhcpDefaultOptions6,
    DhcpScopeOptions6,
    DhcpReservedOptions6,
    DhcpGlobalOptions6
} DHCP_OPTION_SCOPE_TYPE6, *LPDHCP_OPTION_SCOPE_TYPE6;
typedef struct _DHCP_RESERVED_SCOPE6 {
    DHCP_IPV6_ADDRESS ReservedIpAddress;
    DHCP_IPV6_ADDRESS ReservedIpSubnetAddress;
} DHCP_RESERVED_SCOPE6, *LPDHCP_RESERVED_SCOPE6;
typedef struct _DHCP_OPTION_SCOPE_INFO6 {
    DHCP_OPTION_SCOPE_TYPE6 ScopeType;
    union _DHCP_OPTION_SCOPE_UNION6 {
        PVOID DefaultScopeInfo;
        DHCP_IPV6_ADDRESS SubnetScopeInfo;
        DHCP_RESERVED_SCOPE6 ReservedScopeInfo;
    } ScopeInfo;
} DHCP_OPTION_SCOPE_INFO6, *LPDHCP_OPTION_SCOPE_INFO6;
typedef union _DHCP_OPTION_SCOPE_UNION6
    DHCP_OPTION_SCOPE_UNION6, *LPDHCP_OPTION_SCOPE_UNION6;
typedef struct _DHCP_OPTION_LIST {
    DWORD NumOptions;
    DHCP_OPTION_VALUE *Options;
} DHCP_OPTION_LIST, *LPDHCP_OPTION_LIST;
typedef struct _DHCP_CLIENT_INFO {
    DHCP_IP_ADDRESS ClientIpAddress;
    DHCP_IP_MASK SubnetMask;
    DHCP_CLIENT_UID ClientHardwareAddress;
    LPWSTR ClientName;
    LPWSTR ClientComment;
    DATE_TIME ClientLeaseExpires;
    DHCP_HOST_INFO OwnerHost;
} DHCP_CLIENT_INFO, *LPDHCP_CLIENT_INFO;
typedef struct _DHCP_CLIENT_INFO_ARRAY {
    DWORD NumElements;
    LPDHCP_CLIENT_INFO *Clients;
} DHCP_CLIENT_INFO_ARRAY, *LPDHCP_CLIENT_INFO_ARRAY;
typedef enum _QuarantineStatus
{
   NOQUARANTINE = 0,
   RESTRICTEDACCESS,
   DROPPACKET,
   PROBATION,
   EXEMPT,
   DEFAULTQUARSETTING,
   NOQUARINFO
}QuarantineStatus;
typedef struct _DHCP_CLIENT_INFO_VQ {
    DHCP_IP_ADDRESS ClientIpAddress;
    DHCP_IP_MASK SubnetMask;
    DHCP_CLIENT_UID ClientHardwareAddress;
    LPWSTR ClientName;
    LPWSTR ClientComment;
    DATE_TIME ClientLeaseExpires;
    DHCP_HOST_INFO OwnerHost;
    BYTE bClientType;
    BYTE AddressState;
    QuarantineStatus Status;
    DATE_TIME ProbationEnds;
    BOOL QuarantineCapable;
} DHCP_CLIENT_INFO_VQ, *LPDHCP_CLIENT_INFO_VQ;
typedef struct _DHCP_CLIENT_INFO_ARRAY_VQ {
    DWORD NumElements;
    LPDHCP_CLIENT_INFO_VQ *Clients;
} DHCP_CLIENT_INFO_ARRAY_VQ, *LPDHCP_CLIENT_INFO_ARRAY_VQ;
typedef struct _DHCP_CLIENT_FILTER_STATUS_INFO {
    DHCP_IP_ADDRESS ClientIpAddress;
    DHCP_IP_MASK SubnetMask;
    DHCP_CLIENT_UID ClientHardwareAddress;
    LPWSTR ClientName;
    LPWSTR ClientComment;
    DATE_TIME ClientLeaseExpires;
    DHCP_HOST_INFO OwnerHost;
    BYTE bClientType;
    BYTE AddressState;
    QuarantineStatus Status;
    DATE_TIME ProbationEnds;
    BOOL QuarantineCapable;
    DWORD FilterStatus;
} DHCP_CLIENT_FILTER_STATUS_INFO, *LPDHCP_CLIENT_FILTER_STATUS_INFO;
typedef struct _DHCP_CLIENT_FILTER_STATUS_INFO_ARRAY {
    DWORD NumElements;
    LPDHCP_CLIENT_FILTER_STATUS_INFO *Clients;
} DHCP_CLIENT_FILTER_STATUS_INFO_ARRAY, *LPDHCP_CLIENT_FILTER_STATUS_INFO_ARRAY;
typedef struct _DHCP_CLIENT_INFO_PB {
    DHCP_IP_ADDRESS ClientIpAddress;
    DHCP_IP_MASK SubnetMask;
    DHCP_CLIENT_UID ClientHardwareAddress;
    LPWSTR ClientName;
    LPWSTR ClientComment;
    DATE_TIME ClientLeaseExpires;
    DHCP_HOST_INFO OwnerHost;
    BYTE bClientType;
    BYTE AddressState;
    QuarantineStatus Status;
    DATE_TIME ProbationEnds;
    BOOL QuarantineCapable;
    DWORD FilterStatus;
    LPWSTR PolicyName;
} DHCP_CLIENT_INFO_PB, *LPDHCP_CLIENT_INFO_PB;
typedef struct _DHCP_CLIENT_INFO_PB_ARRAY {
    DWORD NumElements;
    LPDHCP_CLIENT_INFO_PB *Clients;
} DHCP_CLIENT_INFO_PB_ARRAY, *LPDHCP_CLIENT_INFO_PB_ARRAY;
typedef enum _DHCP_CLIENT_SEARCH_TYPE {
    DhcpClientIpAddress,
    DhcpClientHardwareAddress,
    DhcpClientName
} DHCP_SEARCH_INFO_TYPE, *LPDHCP_SEARCH_INFO_TYPE;
typedef struct _DHCP_CLIENT_SEARCH_INFO {
    DHCP_SEARCH_INFO_TYPE SearchType;
    union _DHCP_CLIENT_SEARCH_UNION {
        DHCP_IP_ADDRESS ClientIpAddress;
        DHCP_CLIENT_UID ClientHardwareAddress;
        LPWSTR ClientName;
    } SearchInfo;
} DHCP_SEARCH_INFO, *LPDHCP_SEARCH_INFO;
typedef union _DHCP_CLIENT_SEARCH_UNION
    DHCP_CLIENT_SEARCH_UNION, *LPDHCP_CLIENT_SEARCH_UNION;
typedef enum
{
    DhcpPropTypeByte,
    DhcpPropTypeWord,
    DhcpPropTypeDword,
    DhcpPropTypeString,
    DhcpPropTypeBinary,
} DHCP_PROPERTY_TYPE;
typedef enum
{
    DhcpPropIdPolicyDnsSuffix,
    DhcpPropIdClientAddressStateEx,
} DHCP_PROPERTY_ID;
typedef struct _DHCP_PROPERTY
{
    DHCP_PROPERTY_ID ID;
    DHCP_PROPERTY_TYPE Type;
    union _DHCP_PROPERTY_VALUE_UNION {
        BYTE ByteValue;
        WORD WordValue;
        DWORD DWordValue;
        LPWSTR StringValue;
        DHCP_BINARY_DATA BinaryValue;
    } Value;
} DHCP_PROPERTY, *PDHCP_PROPERTY, *LPDHCP_PROPERTY;
typedef struct _DHCP_PROPERTY_ARRAY {
    DWORD NumElements;
     _Field_size_(NumElements) LPDHCP_PROPERTY Elements;
} DHCP_PROPERTY_ARRAY, *PDHCP_PROPERTY_ARRAY, *LPDHCP_PROPERTY_ARRAY;
typedef struct _DHCP_CLIENT_INFO_EX {
    DHCP_IP_ADDRESS ClientIpAddress;
    DHCP_IP_MASK SubnetMask;
    DHCP_CLIENT_UID ClientHardwareAddress;
    LPWSTR ClientName;
    LPWSTR ClientComment;
    DATE_TIME ClientLeaseExpires;
    DHCP_HOST_INFO OwnerHost;
    BYTE bClientType;
    BYTE AddressState;
    QuarantineStatus Status;
    DATE_TIME ProbationEnds;
    BOOL QuarantineCapable;
    DWORD FilterStatus;
    LPWSTR PolicyName;
    LPDHCP_PROPERTY_ARRAY Properties;
} DHCP_CLIENT_INFO_EX, *LPDHCP_CLIENT_INFO_EX;
typedef struct _DHCP_CLIENT_INFO_EX_ARRAY {
    DWORD NumElements;
    LPDHCP_CLIENT_INFO_EX *Clients;
} DHCP_CLIENT_INFO_EX_ARRAY, *LPDHCP_CLIENT_INFO_EX_ARRAY;
typedef struct _SCOPE_MIB_INFO {
    DHCP_IP_ADDRESS Subnet;
    DWORD NumAddressesInuse;
    DWORD NumAddressesFree;
    DWORD NumPendingOffers;
} SCOPE_MIB_INFO, *LPSCOPE_MIB_INFO;
typedef struct _DHCP_MIB_INFO {
    DWORD Discovers;
    DWORD Offers;
    DWORD Requests;
    DWORD Acks;
    DWORD Naks;
    DWORD Declines;
    DWORD Releases;
    DATE_TIME ServerStartTime;
    DWORD Scopes;
    _Field_size_(Scopes) LPSCOPE_MIB_INFO ScopeInfo;
} DHCP_MIB_INFO, *LPDHCP_MIB_INFO;
typedef struct _SCOPE_MIB_INFO_VQ {
    DHCP_IP_ADDRESS Subnet;
    DWORD NumAddressesInuse;
    DWORD NumAddressesFree;
    DWORD NumPendingOffers;
    DWORD QtnNumLeases;
    DWORD QtnPctQtnLeases;
    DWORD QtnProbationLeases;
    DWORD QtnNonQtnLeases;
    DWORD QtnExemptLeases;
    DWORD QtnCapableClients;
} SCOPE_MIB_INFO_VQ, *LPSCOPE_MIB_INFO_VQ;
typedef struct _DHCP_MIB_INFO_VQ {
    DWORD Discovers;
    DWORD Offers;
    DWORD Requests;
    DWORD Acks;
    DWORD Naks;
    DWORD Declines;
    DWORD Releases;
    DATE_TIME ServerStartTime;
    DWORD QtnNumLeases;
    DWORD QtnPctQtnLeases;
    DWORD QtnProbationLeases;
    DWORD QtnNonQtnLeases;
    DWORD QtnExemptLeases;
    DWORD QtnCapableClients;
    DWORD QtnIASErrors;
    DWORD Scopes;
    LPSCOPE_MIB_INFO_VQ ScopeInfo;
} DHCP_MIB_INFO_VQ, *LPDHCP_MIB_INFO_VQ;
typedef struct _SCOPE_MIB_INFO_V5 {
    DHCP_IP_ADDRESS Subnet;
    DWORD NumAddressesInuse;
    DWORD NumAddressesFree;
    DWORD NumPendingOffers;
} SCOPE_MIB_INFO_V5, *LPSCOPE_MIB_INFO_V5;
typedef struct _DHCP_MIB_INFO_V5 {
    DWORD Discovers;
    DWORD Offers;
    DWORD Requests;
    DWORD Acks;
    DWORD Naks;
    DWORD Declines;
    DWORD Releases;
    DATE_TIME ServerStartTime;
    DWORD QtnNumLeases;
    DWORD QtnPctQtnLeases;
    DWORD QtnProbationLeases;
    DWORD QtnNonQtnLeases;
    DWORD QtnExemptLeases;
    DWORD QtnCapableClients;
    DWORD QtnIASErrors;
    DWORD DelayedOffers;
    DWORD ScopesWithDelayedOffers;
    DWORD Scopes;
    _Field_size_(Scopes) LPSCOPE_MIB_INFO_V5 ScopeInfo;
} DHCP_MIB_INFO_V5, *LPDHCP_MIB_INFO_V5;
typedef struct _DHCP_SERVER_CONFIG_INFO {
    DWORD APIProtocolSupport;
    LPWSTR DatabaseName;
    LPWSTR DatabasePath;
    LPWSTR BackupPath;
    DWORD BackupInterval;
    DWORD DatabaseLoggingFlag;
    DWORD RestoreFlag;
    DWORD DatabaseCleanupInterval;
    DWORD DebugFlag;
} DHCP_SERVER_CONFIG_INFO, *LPDHCP_SERVER_CONFIG_INFO;
typedef enum _DHCP_SCAN_FLAG {
    DhcpRegistryFix,
    DhcpDatabaseFix
} DHCP_SCAN_FLAG, *LPDHCP_SCAN_FLAG;
typedef struct _DHCP_SCAN_ITEM {
    DHCP_IP_ADDRESS IpAddress;
    DHCP_SCAN_FLAG ScanFlag;
} DHCP_SCAN_ITEM, *LPDHCP_SCAN_ITEM;
typedef struct _DHCP_SCAN_LIST {
    DWORD NumScanItems;
        _Field_size_(NumScanItems) DHCP_SCAN_ITEM *ScanItems;
} DHCP_SCAN_LIST, *LPDHCP_SCAN_LIST;
typedef struct _DHCP_CLASS_INFO {
    LPWSTR ClassName;
    LPWSTR ClassComment;
    DWORD ClassDataLength;
    BOOL IsVendor;
    DWORD Flags;
    _Field_size_bytes_(ClassDataLength) LPBYTE ClassData;
} DHCP_CLASS_INFO, *LPDHCP_CLASS_INFO;
typedef struct _DHCP_CLASS_INFO_ARRAY {
    DWORD NumElements;
    LPDHCP_CLASS_INFO Classes;
} DHCP_CLASS_INFO_ARRAY, *LPDHCP_CLASS_INFO_ARRAY;
typedef struct _DHCP_CLASS_INFO_V6 {
    LPWSTR ClassName;
    LPWSTR ClassComment;
    DWORD ClassDataLength;
    BOOL IsVendor;
    DWORD EnterpriseNumber;
    DWORD Flags;
    _Field_size_bytes_(ClassDataLength) LPBYTE ClassData;
} DHCP_CLASS_INFO_V6, *LPDHCP_CLASS_INFO_V6;
typedef struct _DHCP_CLASS_INFO_ARRAY_V6 {
    DWORD NumElements;
    LPDHCP_CLASS_INFO_V6 Classes;
} DHCP_CLASS_INFO_ARRAY_V6, *LPDHCP_CLASS_INFO_ARRAY_V6;
typedef struct _DHCP_SERVER_SPECIFIC_STRINGS {
    LPWSTR DefaultVendorClassName;
    LPWSTR DefaultUserClassName;
} DHCP_SERVER_SPECIFIC_STRINGS, *LPDHCP_SERVER_SPECIFIC_STRINGS;
typedef struct _DHCP_IP_RESERVATION_V4 {
    DHCP_IP_ADDRESS ReservedIpAddress;
    DHCP_CLIENT_UID *ReservedForClient;
    BYTE bAllowedClientTypes;
} DHCP_IP_RESERVATION_V4, *LPDHCP_IP_RESERVATION_V4;
typedef struct _DHCP_IP_RESERVATION_INFO {
    DHCP_IP_ADDRESS ReservedIpAddress;
    DHCP_CLIENT_UID ReservedForClient;
    LPWSTR ReservedClientName;
    LPWSTR ReservedClientDesc;
    BYTE bAllowedClientTypes;
    BYTE fOptionsPresent;
} DHCP_IP_RESERVATION_INFO, *LPDHCP_IP_RESERVATION_INFO;
typedef struct _DHCP_RESERVATION_INFO_ARRAY {
    DWORD NumElements;
    LPDHCP_IP_RESERVATION_INFO *Elements;
} DHCP_RESERVATION_INFO_ARRAY, *LPDHCP_RESERVATION_INFO_ARRAY;
typedef struct _DHCP_SUBNET_ELEMENT_DATA_V4 {
    DHCP_SUBNET_ELEMENT_TYPE ElementType;
    union _DHCP_SUBNET_ELEMENT_UNION_V4 {
        DHCP_IP_RANGE *IpRange;
        DHCP_HOST_INFO *SecondaryHost;
        DHCP_IP_RESERVATION_V4 *ReservedIp;
        DHCP_IP_RANGE *ExcludeIpRange;
        DHCP_IP_CLUSTER *IpUsedCluster;
    } Element;
} DHCP_SUBNET_ELEMENT_DATA_V4, *LPDHCP_SUBNET_ELEMENT_DATA_V4;
typedef union _DHCP_SUBNET_ELEMENT_UNION_V4
    DHCP_SUBNET_ELEMENT_UNION_V4, *LPDHCP_SUBNET_ELEMENT_UNION_V4;
typedef struct _DHCP_SUBNET_ELEMENT_INFO_ARRAY_V4 {
    DWORD NumElements;
    LPDHCP_SUBNET_ELEMENT_DATA_V4 Elements;
} DHCP_SUBNET_ELEMENT_INFO_ARRAY_V4, *LPDHCP_SUBNET_ELEMENT_INFO_ARRAY_V4;
typedef struct _DHCP_CLIENT_INFO_V4 {
    DHCP_IP_ADDRESS ClientIpAddress;
    DHCP_IP_MASK SubnetMask;
    DHCP_CLIENT_UID ClientHardwareAddress;
    LPWSTR ClientName;
    LPWSTR ClientComment;
    DATE_TIME ClientLeaseExpires;
    DHCP_HOST_INFO OwnerHost;
    BYTE bClientType;
} DHCP_CLIENT_INFO_V4, *LPDHCP_CLIENT_INFO_V4;
typedef struct _DHCP_CLIENT_INFO_ARRAY_V4 {
    DWORD NumElements;
        LPDHCP_CLIENT_INFO_V4 *Clients;
} DHCP_CLIENT_INFO_ARRAY_V4, *LPDHCP_CLIENT_INFO_ARRAY_V4;
typedef struct _DHCP_SERVER_CONFIG_INFO_V4 {
    DWORD APIProtocolSupport;
    LPWSTR DatabaseName;
    LPWSTR DatabasePath;
    LPWSTR BackupPath;
    DWORD BackupInterval;
    DWORD DatabaseLoggingFlag;
    DWORD RestoreFlag;
    DWORD DatabaseCleanupInterval;
    DWORD DebugFlag;
    DWORD dwPingRetries;
    DWORD cbBootTableString;
    _Field_size_bytes_(cbBootTableString) WCHAR *wszBootTableString;
    BOOL fAuditLog;
} DHCP_SERVER_CONFIG_INFO_V4, *LPDHCP_SERVER_CONFIG_INFO_V4;
typedef struct _DHCP_SERVER_CONFIG_INFO_VQ {
    DWORD APIProtocolSupport;
    LPWSTR DatabaseName;
    LPWSTR DatabasePath;
    LPWSTR BackupPath;
    DWORD BackupInterval;
    DWORD DatabaseLoggingFlag;
    DWORD RestoreFlag;
    DWORD DatabaseCleanupInterval;
    DWORD DebugFlag;
    DWORD dwPingRetries;
    DWORD cbBootTableString;
    _Field_size_bytes_(cbBootTableString) WCHAR *wszBootTableString;
    BOOL fAuditLog;
    BOOL QuarantineOn;
    DWORD QuarDefFail;
    BOOL QuarRuntimeStatus;
} DHCP_SERVER_CONFIG_INFO_VQ, *LPDHCP_SERVER_CONFIG_INFO_VQ;
typedef struct _DHCP_SERVER_CONFIG_INFO_V6 {
    BOOL UnicastFlag;
    BOOL RapidCommitFlag;
    DWORD PreferredLifetime;
    DWORD ValidLifetime;
    DWORD T1;
    DWORD T2;
    DWORD PreferredLifetimeIATA;
    DWORD ValidLifetimeIATA;
        BOOL fAuditLog;
} DHCP_SERVER_CONFIG_INFO_V6, *LPDHCP_SERVER_CONFIG_INFO_V6;
typedef struct _DHCP_SUPER_SCOPE_TABLE_ENTRY {
    DHCP_IP_ADDRESS SubnetAddress;
    DWORD SuperScopeNumber;
    DWORD NextInSuperScope;
    LPWSTR SuperScopeName;
} DHCP_SUPER_SCOPE_TABLE_ENTRY, *LPDHCP_SUPER_SCOPE_TABLE_ENTRY;
typedef struct _DHCP_SUPER_SCOPE_TABLE
{
    DWORD cEntries;
    DHCP_SUPER_SCOPE_TABLE_ENTRY *pEntries;
} DHCP_SUPER_SCOPE_TABLE, *LPDHCP_SUPER_SCOPE_TABLE;
typedef struct _DHCP_CLIENT_INFO_V5 {
    DHCP_IP_ADDRESS ClientIpAddress;
    DHCP_IP_MASK SubnetMask;
    DHCP_CLIENT_UID ClientHardwareAddress;
    LPWSTR ClientName;
    LPWSTR ClientComment;
    DATE_TIME ClientLeaseExpires;
    DHCP_HOST_INFO OwnerHost;
    BYTE bClientType;
    BYTE AddressState;
} DHCP_CLIENT_INFO_V5, *LPDHCP_CLIENT_INFO_V5;
typedef struct _DHCP_CLIENT_INFO_ARRAY_V5 {
    DWORD NumElements;
    LPDHCP_CLIENT_INFO_V5 *Clients;
} DHCP_CLIENT_INFO_ARRAY_V5, *LPDHCP_CLIENT_INFO_ARRAY_V5;
typedef struct _DHCP_ALL_OPTIONS {
    DWORD Flags;
    LPDHCP_OPTION_ARRAY NonVendorOptions;
    DWORD NumVendorOptions;
    struct {
        DHCP_OPTION Option;
        LPWSTR VendorName;
        LPWSTR ClassName;
    } *VendorOptions;
} DHCP_ALL_OPTIONS, *LPDHCP_ALL_OPTIONS;
typedef struct _DHCP_ALL_OPTION_VALUES {
    DWORD Flags;
    DWORD NumElements;
    struct {
        LPWSTR ClassName;
        LPWSTR VendorName;
        BOOL IsVendor;
        LPDHCP_OPTION_VALUE_ARRAY OptionsArray;
    } *Options;
} DHCP_ALL_OPTION_VALUES, *LPDHCP_ALL_OPTION_VALUES;
typedef struct _DHCP_ALL_OPTION_VALUES_PB {
    DWORD Flags;
    DWORD NumElements;
    struct {
        LPWSTR PolicyName;
        LPWSTR VendorName;
        BOOL IsVendor;
        LPDHCP_OPTION_VALUE_ARRAY OptionsArray;
    } *Options;
} DHCP_ALL_OPTION_VALUES_PB, *LPDHCP_ALL_OPTION_VALUES_PB;
typedef struct _DHCPDS_SERVER {
    DWORD Version;
    LPWSTR ServerName;
    DWORD ServerAddress;
    DWORD Flags;
    DWORD State;
    LPWSTR DsLocation;
    DWORD DsLocType;
} DHCPDS_SERVER, *LPDHCPDS_SERVER, *PDHCPDS_SERVER;
typedef struct _DHCPDS_SERVERS {
    DWORD Flags;
    DWORD NumElements;
    LPDHCPDS_SERVER Servers;
} DHCPDS_SERVERS, *LPDHCPDS_SERVERS, *PDHCPDS_SERVERS;
typedef DHCPDS_SERVER DHCP_SERVER_INFO;
typedef PDHCPDS_SERVER PDHCP_SERVER_INFO;
typedef LPDHCPDS_SERVER LPDHCP_SERVER_INFO;
typedef DHCPDS_SERVERS DHCP_SERVER_INFO_ARRAY;
typedef PDHCPDS_SERVERS PDHCP_SERVER_INFO_ARRAY;
typedef LPDHCPDS_SERVERS LPDHCP_SERVER_INFO_ARRAY;
typedef ULONG DHCP_ATTRIB_ID, *PDHCP_ATTRIB_ID, *LPDHCP_ATTRIB_ID;
typedef struct _DHCP_ATTRIB {
    DHCP_ATTRIB_ID DhcpAttribId;
    ULONG DhcpAttribType;
    union {
    BOOL DhcpAttribBool;
    ULONG DhcpAttribUlong;
    };
} DHCP_ATTRIB, *PDHCP_ATTRIB, *LPDHCP_ATTRIB;
typedef struct _DHCP_ATTRIB_ARRAY {
    ULONG NumElements;
    _Field_size_(NumElements) LPDHCP_ATTRIB DhcpAttribs;
} DHCP_ATTRIB_ARRAY, *PDHCP_ATTRIB_ARRAY, *LPDHCP_ATTRIB_ARRAY;
typedef struct _DHCP_BOOTP_IP_RANGE {
    DHCP_IP_ADDRESS StartAddress;
    DHCP_IP_ADDRESS EndAddress;
    ULONG BootpAllocated;
    ULONG MaxBootpAllowed;
} DHCP_BOOTP_IP_RANGE, *LPDHCP_BOOT_IP_RANGE;
typedef struct _DHCP_SUBNET_ELEMENT_DATA_V5 {
    DHCP_SUBNET_ELEMENT_TYPE ElementType;
    union _DHCP_SUBNET_ELEMENT_UNION_V5 {
        DHCP_BOOTP_IP_RANGE *IpRange;
        DHCP_HOST_INFO *SecondaryHost;
        DHCP_IP_RESERVATION_V4 *ReservedIp;
        DHCP_IP_RANGE *ExcludeIpRange;
        DHCP_IP_CLUSTER *IpUsedCluster;
    } Element;
} DHCP_SUBNET_ELEMENT_DATA_V5, *LPDHCP_SUBNET_ELEMENT_DATA_V5;
typedef struct _DHCP_SUBNET_ELEMENT_INFO_ARRAY_V5 {
    DWORD NumElements;
    LPDHCP_SUBNET_ELEMENT_DATA_V5 Elements;
} DHCP_SUBNET_ELEMENT_INFO_ARRAY_V5, *LPDHCP_SUBNET_ELEMENT_INFO_ARRAY_V5;
#pragma pack(4)
typedef struct _DHCP_PERF_STATS {
    ULONG dwNumPacketsReceived;
    ULONG dwNumPacketsDuplicate;
    ULONG dwNumPacketsExpired;
    ULONG dwNumMilliSecondsProcessed;
    ULONG dwNumPacketsInActiveQueue;
    ULONG dwNumPacketsInPingQueue;
    ULONG dwNumDiscoversReceived;
    ULONG dwNumOffersSent;
    ULONG dwNumRequestsReceived;
    ULONG dwNumInformsReceived;
    ULONG dwNumAcksSent;
    ULONG dwNumNacksSent;
    ULONG dwNumDeclinesReceived;
    ULONG dwNumReleasesReceived;
    ULONG dwNumDelayedOfferInQueue;
    ULONG dwNumPacketsProcessed;
    ULONG dwNumPacketsInQuarWaitingQueue;
    ULONG dwNumPacketsInQuarReadyQueue;
    ULONG dwNumPacketsInQuarDecisionQueue;
} DHCP_PERF_STATS, *LPDHCP_PERF_STATS;
#pragma pack()
typedef struct _DHCP_BIND_ELEMENT {
    ULONG Flags;
    BOOL fBoundToDHCPServer;
    DHCP_IP_ADDRESS AdapterPrimaryAddress;
    DHCP_IP_ADDRESS AdapterSubnetAddress;
    LPWSTR IfDescription;
    ULONG IfIdSize;
    _Field_size_bytes_(IfIdSize) LPBYTE IfId;
} DHCP_BIND_ELEMENT, *LPDHCP_BIND_ELEMENT;
typedef struct _DHCP_BIND_ELEMENT_ARRAY {
    DWORD NumElements;
    LPDHCP_BIND_ELEMENT Elements;
} DHCP_BIND_ELEMENT_ARRAY, *LPDHCP_BIND_ELEMENT_ARRAY;
typedef struct _DHCPV6_BIND_ELEMENT {
    ULONG Flags;
    BOOL fBoundToDHCPServer;
    DHCP_IPV6_ADDRESS AdapterPrimaryAddress;
    DHCP_IPV6_ADDRESS AdapterSubnetAddress;
    LPWSTR IfDescription;
    DWORD IpV6IfIndex;
    ULONG IfIdSize;
    LPBYTE IfId;
} DHCPV6_BIND_ELEMENT, *LPDHCPV6_BIND_ELEMENT;
typedef struct _DHCPV6_BIND_ELEMENT_ARRAY {
    DWORD NumElements;
    LPDHCPV6_BIND_ELEMENT Elements;
} DHCPV6_BIND_ELEMENT_ARRAY, *LPDHCPV6_BIND_ELEMENT_ARRAY;
typedef struct _DHCP_IP_RANGE_V6 {
    DHCP_IPV6_ADDRESS StartAddress;
    DHCP_IPV6_ADDRESS EndAddress;
} DHCP_IP_RANGE_V6, *LPDHCP_IP_RANGE_V6;
typedef struct _DHCP_HOST_INFO_V6 {
    DHCP_IPV6_ADDRESS IpAddress;
    LPWSTR NetBiosName;
    LPWSTR HostName;
} DHCP_HOST_INFO_V6, *LPDHCP_HOST_INFO_V6;
typedef struct _DHCP_SUBNET_INFO_V6
{
    DHCP_IPV6_ADDRESS SubnetAddress;
    ULONG Prefix;
    USHORT Preference;
    LPWSTR SubnetName;
    LPWSTR SubnetComment;
    DWORD State;
    DWORD ScopeId;
} DHCP_SUBNET_INFO_V6, *PDHCP_SUBNET_INFO_V6,*LPDHCP_SUBNET_INFO_V6;
typedef struct _SCOPE_MIB_INFO_V6 {
    DHCP_IPV6_ADDRESS Subnet;
    ULONGLONG NumAddressesInuse;
    ULONGLONG NumAddressesFree;
    ULONGLONG NumPendingAdvertises;
} SCOPE_MIB_INFO_V6, *LPSCOPE_MIB_INFO_V6;
typedef struct _DHCP_MIB_INFO_V6 {
    DWORD Solicits;
    DWORD Advertises;
    DWORD Requests;
    DWORD Renews;
    DWORD Rebinds;
    DWORD Replies;
    DWORD Confirms;
    DWORD Declines;
    DWORD Releases;
    DWORD Informs;
    DATE_TIME ServerStartTime;
    DWORD Scopes;
    LPSCOPE_MIB_INFO_V6 ScopeInfo;
} DHCP_MIB_INFO_V6, *LPDHCP_MIB_INFO_V6;
typedef struct _DHCP_IP_RESERVATION_V6 {
    DHCP_IPV6_ADDRESS ReservedIpAddress;
    DHCP_CLIENT_UID *ReservedForClient;
    DWORD InterfaceId;
} DHCP_IP_RESERVATION_V6, *LPDHCP_IP_RESERVATION_V6;
typedef enum _DHCP_SUBNET_ELEMENT_TYPE_V6 {
    Dhcpv6IpRanges,
    Dhcpv6ReservedIps,
    Dhcpv6ExcludedIpRanges
} DHCP_SUBNET_ELEMENT_TYPE_V6, *LPDHCP_SUBNET_ELEMENT_TYPE_V6;
typedef struct _DHCP_SUBNET_ELEMENT_DATA_V6 {
    DHCP_SUBNET_ELEMENT_TYPE_V6 ElementType;
    union _DHCP_SUBNET_ELEMENT_UNION_V6 {
        DHCP_IP_RANGE_V6 *IpRange;
        DHCP_IP_RESERVATION_V6 *ReservedIp;
        DHCP_IP_RANGE_V6 *ExcludeIpRange;
    } Element;
} DHCP_SUBNET_ELEMENT_DATA_V6, *LPDHCP_SUBNET_ELEMENT_DATA_V6;
typedef union _DHCP_SUBNET_ELEMENT_UNION_V6
    DHCP_SUBNET_ELEMENT_UNION_V6, *LPDHCP_SUBNET_ELEMENT_UNION_V6;
typedef struct _DHCP_SUBNET_ELEMENT_INFO_ARRAY_V6 {
    DWORD NumElements;
    LPDHCP_SUBNET_ELEMENT_DATA_V6 Elements;
} DHCP_SUBNET_ELEMENT_INFO_ARRAY_V6, *LPDHCP_SUBNET_ELEMENT_INFO_ARRAY_V6;
typedef struct _DHCP_CLIENT_INFO_V6 {
    DHCP_IPV6_ADDRESS ClientIpAddress;
    DHCP_CLIENT_UID ClientDUID;
    DWORD AddressType;
    DWORD IAID;
    LPWSTR ClientName;
    LPWSTR ClientComment;
    DATE_TIME ClientValidLeaseExpires;
    DATE_TIME ClientPrefLeaseExpires;
    DHCP_HOST_INFO_V6 OwnerHost;
} DHCP_CLIENT_INFO_V6, *LPDHCP_CLIENT_INFO_V6;
typedef struct _DHCPV6_IP_ARRAY {
    DWORD NumElements;
        LPDHCP_IPV6_ADDRESS Elements;
} DHCPV6_IP_ARRAY, *LPDHCPV6_IP_ARRAY;
typedef struct _DHCP_CLIENT_INFO_ARRAY_V6 {
    DWORD NumElements;
    LPDHCP_CLIENT_INFO_V6 *Clients;
} DHCP_CLIENT_INFO_ARRAY_V6, *LPDHCP_CLIENT_INFO_ARRAY_V6;
typedef enum _DHCP_CLIENT_SEARCH_TYPE_V6 {
    Dhcpv6ClientIpAddress,
    Dhcpv6ClientDUID,
    Dhcpv6ClientName
} DHCP_SEARCH_INFO_TYPE_V6, *LPDHCP_SEARCH_INFO_TYPE_V6;
typedef struct _DHCP_CLIENT_SEARCH_INFO_V6 {
    DHCP_SEARCH_INFO_TYPE_V6 SearchType;
    union _DHCP_CLIENT_SEARCH_UNION_V6 {
        DHCP_IPV6_ADDRESS ClientIpAddress;
        DHCP_CLIENT_UID ClientDUID;
        LPWSTR ClientName;
    } SearchInfo;
} DHCP_SEARCH_INFO_V6, *LPDHCP_SEARCH_INFO_V6;
typedef enum
{
    DhcpAttrHWAddr,
    DhcpAttrOption,
    DhcpAttrSubOption,
    DhcpAttrFqdn,
    DhcpAttrFqdnSingleLabel,
} DHCP_POL_ATTR_TYPE;
typedef enum
{
    DhcpCompEqual,
    DhcpCompNotEqual,
    DhcpCompBeginsWith,
    DhcpCompNotBeginWith,
    DhcpCompEndsWith,
    DhcpCompNotEndWith,
} DHCP_POL_COMPARATOR;
typedef enum
{
    DhcpLogicalOr,
    DhcpLogicalAnd,
} DHCP_POL_LOGIC_OPER;
typedef enum {
    DhcpUpdatePolicyName = 0x00000001,
    DhcpUpdatePolicyOrder = 0x00000002,
    DhcpUpdatePolicyExpr = 0x00000004,
    DhcpUpdatePolicyRanges = 0x00000008,
    DhcpUpdatePolicyDescr = 0x00000010,
    DhcpUpdatePolicyStatus = 0x00000020,
    DhcpUpdatePolicyDnsSuffix= 0x00000040,
} DHCP_POLICY_FIELDS_TO_UPDATE;
typedef struct _DHCP_POL_COND
{
    DWORD ParentExpr;
    DHCP_POL_ATTR_TYPE Type;
    DWORD OptionID;
    DWORD SubOptionID;
    LPWSTR VendorName;
    DHCP_POL_COMPARATOR Operator;
     _Field_size_bytes_(ValueLength) LPBYTE Value;
    DWORD ValueLength;
} DHCP_POL_COND, *PDHCP_POL_COND, *LPDHCP_POL_COND;
typedef struct _DHCP_POL_COND_ARRAY {
    DWORD NumElements;
     _Field_size_(NumElements) LPDHCP_POL_COND Elements;
} DHCP_POL_COND_ARRAY, *PDHCP_POL_COND_ARRAY, *LPDHCP_POL_COND_ARRAY;
typedef struct _DHCP_POL_EXPR
{
    DWORD ParentExpr;
    DHCP_POL_LOGIC_OPER Operator;
} DHCP_POL_EXPR, *PDHCP_POL_EXPR, *LPDHCP_POL_EXPR;
typedef struct _DHCP_POL_EXPR_ARRAY {
    DWORD NumElements;
     _Field_size_(NumElements) LPDHCP_POL_EXPR Elements;
} DHCP_POL_EXPR_ARRAY, *PDHCP_POL_EXPR_ARRAY, *LPDHCP_POL_EXPR_ARRAY;
typedef struct _DHCP_IP_RANGE_ARRAY {
    DWORD NumElements;
     _Field_size_(NumElements) LPDHCP_IP_RANGE Elements;
} DHCP_IP_RANGE_ARRAY, *PDHCP_IP_RANGE_ARRAY, *LPDHCP_IP_RANGE_ARRAY;
typedef struct _DHCP_POLICY
{
    LPWSTR PolicyName;
    BOOL IsGlobalPolicy;
    DHCP_IP_ADDRESS Subnet;
    DWORD ProcessingOrder;
    LPDHCP_POL_COND_ARRAY Conditions;
    LPDHCP_POL_EXPR_ARRAY Expressions;
    LPDHCP_IP_RANGE_ARRAY Ranges;
    LPWSTR Description;
    BOOL Enabled;
} DHCP_POLICY, *PDHCP_POLICY, *LPDHCP_POLICY;
typedef struct _DHCP_POLICY_ARRAY {
    DWORD NumElements;
    _Field_size_(NumElements) LPDHCP_POLICY Elements;
} DHCP_POLICY_ARRAY, *PDHCP_POLICY_ARRAY, *LPDHCP_POLICY_ARRAY;
typedef struct _DHCP_POLICY_EX
{
    LPWSTR PolicyName;
    BOOL IsGlobalPolicy;
    DHCP_IP_ADDRESS Subnet;
    DWORD ProcessingOrder;
    LPDHCP_POL_COND_ARRAY Conditions;
    LPDHCP_POL_EXPR_ARRAY Expressions;
    LPDHCP_IP_RANGE_ARRAY Ranges;
    LPWSTR Description;
    BOOL Enabled;
    LPDHCP_PROPERTY_ARRAY Properties;
} DHCP_POLICY_EX, *PDHCP_POLICY_EX, *LPDHCP_POLICY_EX;
typedef struct _DHCP_POLICY_EX_ARRAY {
    DWORD NumElements;
    _Field_size_(NumElements) LPDHCP_POLICY_EX Elements;
} DHCP_POLICY_EX_ARRAY, *PDHCP_POLICY_EX_ARRAY, *LPDHCP_POLICY_EX_ARRAY;
typedef enum
{
    DhcpStatelessPurgeInterval = 0x01,
    DhcpStatelessStatus = 0x02
} DHCPV6_STATELESS_PARAM_TYPE;
typedef struct
{
    BOOL Status;
    DWORD PurgeInterval;
} DHCPV6_STATELESS_PARAMS, *PDHCPV6_STATELESS_PARAMS, *LPDHCPV6_STATELESS_PARAMS;
typedef struct
{
    DHCP_IPV6_ADDRESS SubnetAddress;
    ULONGLONG NumStatelessClientsAdded;
    ULONGLONG NumStatelessClientsRemoved;
} DHCPV6_STATELESS_SCOPE_STATS, *PDHCPV6_STATELESS_SCOPE_STATS, *LPDHCPV6_STATELESS_SCOPE_STATS;
typedef struct
{
    DWORD NumScopes;
    _Field_size_(NumScopes) LPDHCPV6_STATELESS_SCOPE_STATS ScopeStats;
} DHCPV6_STATELESS_STATS, *PDHCPV6_STATELESS_STATS, *LPDHCPV6_STATELESS_STATS;
DWORD DHCP_API_FUNCTION
DhcpAddFilterV4(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    _In_ DHCP_FILTER_ADD_INFO *AddFilterInfo,
    _In_ BOOL ForceFlag
    );
DWORD DHCP_API_FUNCTION
DhcpDeleteFilterV4(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    _In_ DHCP_ADDR_PATTERN *DeleteFilterInfo
    );
DWORD DHCP_API_FUNCTION
DhcpSetFilterV4(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    _In_ DHCP_FILTER_GLOBAL_INFO *GlobalFilterInfo
    );
DWORD DHCP_API_FUNCTION
DhcpGetFilterV4(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    _Out_ DHCP_FILTER_GLOBAL_INFO *GlobalFilterInfo
    );
DWORD DHCP_API_FUNCTION
DhcpEnumFilterV4(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    _Inout_ LPDHCP_ADDR_PATTERN ResumeHandle,
    _In_ DWORD PreferredMaximum,
    _In_ DHCP_FILTER_LIST_TYPE ListType,
    _Out_ LPDHCP_FILTER_ENUM_INFO *EnumFilterInfo,
    _Out_ DWORD *ElementsRead,
    _Out_ DWORD *ElementsTotal
    );
DWORD DHCP_API_FUNCTION
DhcpCreateSubnet(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
    DHCP_CONST DHCP_SUBNET_INFO * SubnetInfo
    );
DWORD DHCP_API_FUNCTION
DhcpSetSubnetInfo(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
    DHCP_CONST DHCP_SUBNET_INFO * SubnetInfo
    );
DWORD DHCP_API_FUNCTION
DhcpGetSubnetInfo(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
               LPDHCP_SUBNET_INFO * SubnetInfo
    );
DWORD DHCP_API_FUNCTION
DhcpEnumSubnets(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    _Inout_ DHCP_RESUME_HANDLE *ResumeHandle,
    _In_ DWORD PreferredMaximum,
    _Inout_ LPDHCP_IP_ARRAY *EnumInfo,
    _Out_ DWORD *ElementsRead,
    _Out_ DWORD *ElementsTotal
    );
DWORD DHCP_API_FUNCTION
DhcpAddSubnetElement(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
    DHCP_CONST DHCP_SUBNET_ELEMENT_DATA * AddElementInfo
    );
DWORD DHCP_API_FUNCTION
DhcpEnumSubnetElements(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
               DHCP_SUBNET_ELEMENT_TYPE EnumElementType,
               DHCP_RESUME_HANDLE *ResumeHandle,
               DWORD PreferredMaximum,
               LPDHCP_SUBNET_ELEMENT_INFO_ARRAY *EnumElementInfo,
               DWORD *ElementsRead,
               DWORD *ElementsTotal
    );
DWORD DHCP_API_FUNCTION
DhcpRemoveSubnetElement(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
    DHCP_CONST DHCP_SUBNET_ELEMENT_DATA * RemoveElementInfo,
               DHCP_FORCE_FLAG ForceFlag
    );
DWORD DHCP_API_FUNCTION
DhcpDeleteSubnet(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
               DHCP_FORCE_FLAG ForceFlag
    );
DWORD DHCP_API_FUNCTION
DhcpCreateOption(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_OPTION_ID OptionID,
               DHCP_CONST DHCP_OPTION * OptionInfo
    );
DWORD DHCP_API_FUNCTION
DhcpSetOptionInfo(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_OPTION_ID OptionID,
    DHCP_CONST DHCP_OPTION *OptionInfo
    );
DWORD DHCP_API_FUNCTION
DhcpGetOptionInfo(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_OPTION_ID OptionID,
               LPDHCP_OPTION *OptionInfo
    );
DWORD DHCP_API_FUNCTION
DhcpEnumOptions(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_RESUME_HANDLE *ResumeHandle,
               DWORD PreferredMaximum,
               LPDHCP_OPTION_ARRAY *Options,
               DWORD *OptionsRead,
               DWORD *OptionsTotal
    );
DWORD DHCP_API_FUNCTION
DhcpRemoveOption(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_OPTION_ID OptionID
    );
DWORD DHCP_API_FUNCTION
DhcpSetOptionValue(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_OPTION_ID OptionID,
    DHCP_CONST DHCP_OPTION_SCOPE_INFO *ScopeInfo,
    DHCP_CONST DHCP_OPTION_DATA *OptionValue
    );
DWORD DHCP_API_FUNCTION
DhcpSetOptionValues(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_OPTION_SCOPE_INFO *ScopeInfo,
    DHCP_CONST DHCP_OPTION_VALUE_ARRAY *OptionValues
    );
DWORD DHCP_API_FUNCTION
DhcpGetOptionValue(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_OPTION_ID OptionID,
    DHCP_CONST DHCP_OPTION_SCOPE_INFO *ScopeInfo,
    LPDHCP_OPTION_VALUE *OptionValue
    );
DWORD DHCP_API_FUNCTION
DhcpEnumOptionValues(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_OPTION_SCOPE_INFO *ScopeInfo,
               DHCP_RESUME_HANDLE *ResumeHandle,
               DWORD PreferredMaximum,
               LPDHCP_OPTION_VALUE_ARRAY *OptionValues,
               DWORD *OptionsRead,
               DWORD *OptionsTotal
    );
DWORD DHCP_API_FUNCTION
DhcpRemoveOptionValue(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_OPTION_ID OptionID,
    DHCP_CONST DHCP_OPTION_SCOPE_INFO *ScopeInfo
    );
DWORD DHCP_API_FUNCTION
DhcpCreateClientInfoVQ(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_CLIENT_INFO_VQ *ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpSetClientInfoVQ(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_CLIENT_INFO_VQ *ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpGetClientInfoVQ(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_SEARCH_INFO *SearchInfo,
    LPDHCP_CLIENT_INFO_VQ *ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpEnumSubnetClientsVQ(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
               DHCP_RESUME_HANDLE *ResumeHandle,
               DWORD PreferredMaximum,
               LPDHCP_CLIENT_INFO_ARRAY_VQ *ClientInfo,
               DWORD *ClientsRead,
               DWORD *ClientsTotal
    );
DWORD DHCP_API_FUNCTION
DhcpEnumSubnetClientsFilterStatusInfo(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
               DHCP_RESUME_HANDLE *ResumeHandle,
               DWORD PreferredMaximum,
               LPDHCP_CLIENT_FILTER_STATUS_INFO_ARRAY *ClientInfo,
               DWORD *ClientsRead,
               DWORD *ClientsTotal
    );
DWORD DHCP_API_FUNCTION
DhcpCreateClientInfo(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_CLIENT_INFO *ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpSetClientInfo(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_CLIENT_INFO *ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpGetClientInfo(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_SEARCH_INFO *SearchInfo,
    LPDHCP_CLIENT_INFO *ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpDeleteClientInfo(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_SEARCH_INFO *ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpEnumSubnetClients(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
               DHCP_RESUME_HANDLE *ResumeHandle,
               DWORD PreferredMaximum,
               LPDHCP_CLIENT_INFO_ARRAY *ClientInfo,
               DWORD *ClientsRead,
               DWORD *ClientsTotal
    );
DWORD DHCP_API_FUNCTION
DhcpGetClientOptions(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS ClientIpAddress,
               DHCP_IP_MASK ClientSubnetMask,
               LPDHCP_OPTION_LIST *ClientOptions
    );
DWORD DHCP_API_FUNCTION
DhcpGetMibInfo(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    LPDHCP_MIB_INFO *MibInfo
    );
DWORD DHCP_API_FUNCTION
DhcpServerSetConfig(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DWORD FieldsToSet,
               LPDHCP_SERVER_CONFIG_INFO ConfigInfo
    );
DWORD DHCP_API_FUNCTION
DhcpServerGetConfig(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    LPDHCP_SERVER_CONFIG_INFO *ConfigInfo
    );
DWORD DHCP_API_FUNCTION
DhcpScanDatabase(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
               DWORD FixFlag,
               LPDHCP_SCAN_LIST *ScanList
    );
VOID DHCP_API_FUNCTION
DhcpRpcFreeMemory(
    PVOID BufferPointer
    );
DWORD DHCP_API_FUNCTION
DhcpGetVersion(
    _In_opt_ LPWSTR ServerIpAddress,
             LPDWORD MajorVersion,
             LPDWORD MinorVersion
    );
DWORD DHCP_API_FUNCTION
DhcpAddSubnetElementV4(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
    DHCP_CONST DHCP_SUBNET_ELEMENT_DATA_V4 *AddElementInfo
    );
DWORD DHCP_API_FUNCTION
DhcpEnumSubnetElementsV4(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
               DHCP_SUBNET_ELEMENT_TYPE EnumElementType,
               DHCP_RESUME_HANDLE *ResumeHandle,
               DWORD PreferredMaximum,
               LPDHCP_SUBNET_ELEMENT_INFO_ARRAY_V4 *EnumElementInfo,
               DWORD *ElementsRead,
               DWORD *ElementsTotal
    );
DWORD DHCP_API_FUNCTION
DhcpRemoveSubnetElementV4(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
    DHCP_CONST DHCP_SUBNET_ELEMENT_DATA_V4 *RemoveElementInfo,
               DHCP_FORCE_FLAG ForceFlag
    );
DWORD DHCP_API_FUNCTION
DhcpCreateClientInfoV4(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_CLIENT_INFO_V4 *ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpSetClientInfoV4(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_CLIENT_INFO_V4 *ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpGetClientInfoV4(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_SEARCH_INFO *SearchInfo,
               LPDHCP_CLIENT_INFO_V4 *ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpEnumSubnetClientsV4(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
               DHCP_RESUME_HANDLE *ResumeHandle,
               DWORD PreferredMaximum,
               LPDHCP_CLIENT_INFO_ARRAY_V4 *ClientInfo,
               DWORD *ClientsRead,
               DWORD *ClientsTotal
    );
DWORD DHCP_API_FUNCTION
DhcpServerSetConfigV4(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DWORD FieldsToSet,
               LPDHCP_SERVER_CONFIG_INFO_V4 ConfigInfo
    );
DWORD DHCP_API_FUNCTION
DhcpServerGetConfigV4(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    LPDHCP_SERVER_CONFIG_INFO_V4 *ConfigInfo
    );
DWORD
DhcpSetSuperScopeV4(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_IP_ADDRESS SubnetAddress,
    _In_opt_ DHCP_CONST LPWSTR SuperScopeName,
    DHCP_CONST BOOL ChangeExisting
    );
DWORD
DhcpDeleteSuperScopeV4(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    _In_ DHCP_CONST LPWSTR SuperScopeName
    );
DWORD
DhcpGetSuperScopeInfoV4(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    LPDHCP_SUPER_SCOPE_TABLE *SuperScopeTable
    );
DWORD DHCP_API_FUNCTION
DhcpEnumSubnetClientsV5(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
               DHCP_RESUME_HANDLE *ResumeHandle,
               DWORD PreferredMaximum,
               LPDHCP_CLIENT_INFO_ARRAY_V5 *ClientInfo,
               DWORD *ClientsRead,
               DWORD *ClientsTotal
    );
DWORD
DhcpCreateOptionV5(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
             IN DHCP_OPTION_ID OptionId,
    _In_opt_ IN LPWSTR ClassName,
    _In_opt_ IN LPWSTR VendorName,
             IN LPDHCP_OPTION OptionInfo
) ;
DWORD
DhcpSetOptionInfoV5(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
             IN DHCP_OPTION_ID OptionID,
    _In_opt_ IN LPWSTR ClassName,
    _In_opt_ IN LPWSTR VendorName,
             IN LPDHCP_OPTION OptionInfo
) ;
DWORD
DhcpGetOptionInfoV5(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
             IN DHCP_OPTION_ID OptionID,
    _In_opt_ IN LPWSTR ClassName,
    _In_opt_ IN LPWSTR VendorName,
             OUT LPDHCP_OPTION *OptionInfo
) ;
DWORD
DhcpEnumOptionsV5(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
    _In_opt_ IN LPWSTR ClassName,
    _In_opt_ IN LPWSTR VendorName,
             IN OUT DHCP_RESUME_HANDLE *ResumeHandle,
             IN DWORD PreferredMaximum,
             OUT LPDHCP_OPTION_ARRAY *Options,
             OUT DWORD *OptionsRead,
             OUT DWORD *OptionsTotal
) ;
DWORD
DhcpRemoveOptionV5(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
             IN DHCP_OPTION_ID OptionID,
    _In_opt_ IN LPWSTR ClassName,
    _In_opt_ IN LPWSTR VendorName
) ;
DWORD
DhcpSetOptionValueV5(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
             IN DHCP_OPTION_ID OptionId,
    _In_opt_ IN LPWSTR ClassName,
    _In_opt_ IN LPWSTR VendorName,
             IN LPDHCP_OPTION_SCOPE_INFO ScopeInfo,
             IN LPDHCP_OPTION_DATA OptionValue
) ;
DWORD
DhcpSetOptionValuesV5(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
    _In_opt_ IN LPWSTR ClassName,
    _In_opt_ IN LPWSTR VendorName,
             IN LPDHCP_OPTION_SCOPE_INFO ScopeInfo,
             IN LPDHCP_OPTION_VALUE_ARRAY OptionValues
) ;
DWORD
DhcpGetOptionValueV5(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
             IN DHCP_OPTION_ID OptionID,
    _In_opt_ IN LPWSTR ClassName,
    _In_opt_ IN LPWSTR VendorName,
             IN LPDHCP_OPTION_SCOPE_INFO ScopeInfo,
             OUT LPDHCP_OPTION_VALUE *OptionValue
) ;
DWORD
DhcpGetOptionValueV6(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
             IN DHCP_OPTION_ID OptionID,
    _In_opt_ IN LPWSTR ClassName,
    _In_opt_ IN LPWSTR VendorName,
             IN LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo,
             OUT LPDHCP_OPTION_VALUE *OptionValue
) ;
DWORD
DhcpEnumOptionValuesV5(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
    _In_opt_ IN LPWSTR ClassName,
    _In_opt_ IN LPWSTR VendorName,
             IN LPDHCP_OPTION_SCOPE_INFO ScopeInfo,
             IN DHCP_RESUME_HANDLE *ResumeHandle,
             IN DWORD PreferredMaximum,
             OUT LPDHCP_OPTION_VALUE_ARRAY *OptionValues,
             OUT DWORD *OptionsRead,
             OUT DWORD *OptionsTotal
) ;
DWORD
DhcpRemoveOptionValueV5(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
             IN DHCP_OPTION_ID OptionID,
    _In_opt_ IN LPWSTR ClassName,
    _In_opt_ IN LPWSTR VendorName,
             IN LPDHCP_OPTION_SCOPE_INFO ScopeInfo
) ;
DWORD
DhcpCreateClass(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD ReservedMustBeZero,
             IN LPDHCP_CLASS_INFO ClassInfo
) ;
DWORD
DhcpModifyClass(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD ReservedMustBeZero,
             IN LPDHCP_CLASS_INFO ClassInfo
) ;
DWORD
DhcpDeleteClass(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD ReservedMustBeZero,
    _In_ IN LPWSTR ClassName
) ;
DWORD
DhcpGetClassInfo(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD ReservedMustBeZero,
             IN LPDHCP_CLASS_INFO PartialClassInfo,
             OUT LPDHCP_CLASS_INFO *FilledClassInfo
) ;
DWORD
DhcpEnumClasses(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD ReservedMustBeZero,
             IN OUT DHCP_RESUME_HANDLE *ResumeHandle,
             IN DWORD PreferredMaximum,
             OUT LPDHCP_CLASS_INFO_ARRAY *ClassInfoArray,
             OUT DWORD *nRead,
             OUT DWORD *nTotal
) ;
DWORD
DhcpGetAllOptions(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
             OUT LPDHCP_ALL_OPTIONS *OptionStruct
) ;
DWORD DHCP_API_FUNCTION
DhcpGetAllOptionsV6(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
             OUT LPDHCP_ALL_OPTIONS *OptionStruct
);
DWORD
DhcpGetAllOptionValues(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
             IN LPDHCP_OPTION_SCOPE_INFO ScopeInfo,
             OUT LPDHCP_ALL_OPTION_VALUES *Values
) ;
DWORD DHCP_API_FUNCTION
DhcpGetAllOptionValuesV6(
    _In_opt_ LPWSTR ServerIpAddress,
           IN DWORD Flags,
           IN LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo,
           OUT LPDHCP_ALL_OPTION_VALUES *Values
);
DWORD
DhcpEnumServers(
    IN DWORD Flags,
    IN LPVOID IdInfo,
    OUT LPDHCP_SERVER_INFO_ARRAY *Servers,
    IN LPVOID CallbackFn,
    IN LPVOID CallbackData
);
DWORD
DhcpAddServer(
    IN DWORD Flags,
    IN LPVOID IdInfo,
    IN LPDHCP_SERVER_INFO NewServer,
    IN LPVOID CallbackFn,
    IN LPVOID CallbackData
);
DWORD
DhcpDeleteServer(
    IN DWORD Flags,
    IN LPVOID IdInfo,
    IN LPDHCP_SERVER_INFO NewServer,
    IN LPVOID CallbackFn,
    IN LPVOID CallbackData
);
DWORD DHCP_API_FUNCTION
DhcpGetServerBindingInfo(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               ULONG Flags,
               LPDHCP_BIND_ELEMENT_ARRAY *BindElementsInfo
);
DWORD DHCP_API_FUNCTION
DhcpSetServerBindingInfo(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               ULONG Flags,
               LPDHCP_BIND_ELEMENT_ARRAY BindElementInfo
);
DWORD DHCP_API_FUNCTION
DhcpAddSubnetElementV5(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
    DHCP_CONST DHCP_SUBNET_ELEMENT_DATA_V5 *AddElementInfo
    );
DWORD DHCP_API_FUNCTION
DhcpEnumSubnetElementsV5(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
               DHCP_SUBNET_ELEMENT_TYPE EnumElementType,
               DHCP_RESUME_HANDLE *ResumeHandle,
               DWORD PreferredMaximum,
               LPDHCP_SUBNET_ELEMENT_INFO_ARRAY_V5 *EnumElementInfo,
               DWORD *ElementsRead,
               DWORD *ElementsTotal
    );
DWORD DHCP_API_FUNCTION
DhcpRemoveSubnetElementV5(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
    DHCP_CONST DHCP_SUBNET_ELEMENT_DATA_V5 *RemoveElementInfo,
               DHCP_FORCE_FLAG ForceFlag
    );
DWORD DHCP_API_FUNCTION
DhcpV4EnumSubnetReservations(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    _In_ DHCP_IP_ADDRESS SubnetAddress,
    _Inout_ DHCP_RESUME_HANDLE *ResumeHandle,
    _In_ DWORD PreferredMaximum,
    _Out_ LPDHCP_RESERVATION_INFO_ARRAY *EnumElementInfo,
    _Out_ DWORD *ElementsRead,
    _Out_ DWORD *ElementsTotal
    );
DWORD DHCP_API_FUNCTION
DhcpCreateOptionV6(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
             IN DHCP_OPTION_ID OptionId,
    _In_opt_ IN LPWSTR ClassName,
    _In_opt_ IN LPWSTR VendorName,
             IN LPDHCP_OPTION OptionInfo
);
DWORD DHCP_API_FUNCTION
DhcpRemoveOptionV6(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
             IN DHCP_OPTION_ID OptionID,
    _In_opt_ IN LPWSTR ClassName,
    _In_opt_ IN LPWSTR VendorName
);
DWORD DHCP_API_FUNCTION
DhcpEnumOptionsV6(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
    _In_opt_ IN LPWSTR ClassName,
    _In_opt_ IN LPWSTR VendorName,
             IN OUT DHCP_RESUME_HANDLE *ResumeHandle,
             IN DWORD PreferredMaximum,
             OUT LPDHCP_OPTION_ARRAY *Options,
             OUT DWORD *OptionsRead,
             OUT DWORD *OptionsTotal
);
DWORD DHCP_API_FUNCTION
DhcpRemoveOptionValueV6(
    _In_opt_ LPWSTR ServerIpAddress,
           IN DWORD Flags,
           IN DHCP_OPTION_ID OptionID,
    _In_opt_ LPWSTR ClassName,
    _In_opt_ LPWSTR VendorName,
           IN LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo
);
DWORD DHCP_API_FUNCTION
DhcpGetOptionInfoV6(
    _In_opt_ LPWSTR ServerIpAddress,
           IN DWORD Flags,
           IN DHCP_OPTION_ID OptionID,
    _In_opt_ LPWSTR ClassName,
    _In_opt_ LPWSTR VendorName,
           OUT LPDHCP_OPTION *OptionInfo
);
DWORD DHCP_API_FUNCTION
DhcpSetOptionInfoV6(
    _In_opt_ LPWSTR ServerIpAddress,
          IN DWORD Flags,
          IN DHCP_OPTION_ID OptionID,
    _In_opt_ LPWSTR ClassName,
    _In_opt_ LPWSTR VendorName,
          IN LPDHCP_OPTION OptionInfo
);
DWORD DHCP_API_FUNCTION
DhcpSetOptionValueV6(
    _In_opt_ LPWSTR ServerIpAddress,
          IN DWORD Flags,
          IN DHCP_OPTION_ID OptionId,
    _In_opt_ LPWSTR ClassName,
    _In_opt_ LPWSTR VendorName,
          IN LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo,
          IN LPDHCP_OPTION_DATA OptionValue
);
DWORD DHCP_API_FUNCTION
DhcpGetSubnetInfoVQ(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
    _Out_ LPDHCP_SUBNET_INFO_VQ *SubnetInfo
    );
DWORD DHCP_API_FUNCTION
DhcpCreateSubnetVQ(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
    _In_ DHCP_CONST DHCP_SUBNET_INFO_VQ *SubnetInfo
    );
DWORD DHCP_API_FUNCTION
DhcpSetSubnetInfoVQ(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IP_ADDRESS SubnetAddress,
    _In_ DHCP_CONST DHCP_SUBNET_INFO_VQ *SubnetInfo
    );
DWORD DHCP_API_FUNCTION
DhcpEnumOptionValuesV6(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DWORD Flags,
    _In_opt_ LPWSTR ClassName,
    _In_opt_ LPWSTR VendorName,
               LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo,
               DHCP_RESUME_HANDLE *ResumeHandle,
               DWORD PreferredMaximum,
               LPDHCP_OPTION_VALUE_ARRAY *OptionValues,
               DWORD *OptionsRead,
               DWORD *OptionsTotal
    );
DWORD
DhcpDsInit(
    VOID
);
VOID
DhcpDsCleanup(
    VOID
);
DWORD
DhcpSetThreadOptions(
    IN DWORD Flags,
    IN LPVOID Reserved
);
DWORD
DhcpGetThreadOptions(
    OUT LPDWORD pFlags,
    IN OUT LPVOID Reserved
);
DWORD
DhcpServerQueryAttribute(
    _In_opt_ IN LPWSTR ServerIpAddr,
             IN ULONG dwReserved,
             IN DHCP_ATTRIB_ID DhcpAttribId,
             OUT LPDHCP_ATTRIB *pDhcpAttrib
);
DWORD
DhcpServerQueryAttributes(
    _In_opt_ IN LPWSTR ServerIpAddr,
             IN ULONG dwReserved,
             IN ULONG dwAttribCount,
             IN DHCP_ATTRIB_ID pDhcpAttribs[],
             OUT LPDHCP_ATTRIB_ARRAY *pDhcpAttribArr
);
DWORD
DhcpServerRedoAuthorization(
    _In_opt_ IN LPWSTR ServerIpAddr,
             IN ULONG dwReserved
);
DWORD
DhcpAuditLogSetParams(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD Flags,
    _In_opt_ IN LPWSTR AuditLogDir,
             IN DWORD DiskCheckInterval,
             IN DWORD MaxLogFilesSize,
             IN DWORD MinSpaceOnDisk
);
DWORD
DhcpAuditLogGetParams(
    _In_opt_ IN LPWSTR ServerIpAddress,
                    IN DWORD Flags,
    _Outptr_result_maybenull_ OUT LPWSTR *AuditLogDir,
                    OUT DWORD *DiskCheckInterval,
                    OUT DWORD *MaxLogFilesSize,
                    OUT DWORD *MinSpaceOnDisk
);
DWORD
DhcpServerQueryDnsRegCredentials(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN ULONG UnameSize,
    _Out_writes_(UnameSize) LPWSTR Uname,
             IN ULONG DomainSize,
    _Out_writes_(DomainSize) LPWSTR Domain
    );
DWORD
DhcpServerSetDnsRegCredentials(
    _In_opt_ IN LPWSTR ServerIpAddress,
    _In_opt_ IN LPWSTR Uname,
    _In_opt_ IN LPWSTR Domain,
    _In_opt_ IN LPWSTR Passwd
    );
DWORD
DhcpServerSetDnsRegCredentialsV5(
    _In_opt_ IN LPWSTR ServerIpAddress,
    _In_opt_ IN LPWSTR Uname,
    _In_opt_ IN LPWSTR Domain,
    _In_opt_ IN LPWSTR Passwd
    );
DWORD
DhcpServerBackupDatabase(
    _In_opt_ IN LPWSTR ServerIpAddress,
    _In_ IN LPWSTR Path
    );
DWORD
DhcpServerRestoreDatabase(
    _In_opt_ IN LPWSTR ServerIpAddress,
    _In_ IN LPWSTR Path
    );
DWORD DHCP_API_FUNCTION
DhcpServerSetConfigVQ(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DWORD FieldsToSet,
               LPDHCP_SERVER_CONFIG_INFO_VQ ConfigInfo
    );
DWORD DHCP_API_FUNCTION
DhcpServerGetConfigVQ(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               LPDHCP_SERVER_CONFIG_INFO_VQ *ConfigInfo
    );
DWORD DHCP_API_FUNCTION
DhcpGetServerSpecificStrings(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               LPDHCP_SERVER_SPECIFIC_STRINGS *ServerSpecificStrings
    );
void DHCP_API_FUNCTION
DhcpServerAuditlogParamsFree(
    DHCP_SERVER_CONFIG_INFO_VQ *ConfigInfo
    );
DWORD DHCP_API_FUNCTION
DhcpCreateSubnetV6(
    _In_opt_ LPWSTR ServerIpAddress,
             DHCP_IPV6_ADDRESS SubnetAddress,
             LPDHCP_SUBNET_INFO_V6 SubnetInfo
    );
DWORD DHCP_API_FUNCTION
DhcpDeleteSubnetV6(
    _In_opt_ LPWSTR ServerIpAddress,
             DHCP_IPV6_ADDRESS SubnetAddress,
             DHCP_FORCE_FLAG ForceFlag
);
DWORD DHCP_API_FUNCTION
DhcpEnumSubnetsV6(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_RESUME_HANDLE *ResumeHandle,
               DWORD PreferredMaximum,
               LPDHCPV6_IP_ARRAY *EnumInfo,
               DWORD *ElementsRead,
               DWORD *ElementsTotal
    );
DWORD DHCP_API_FUNCTION
DhcpAddSubnetElementV6(
    _In_opt_ LPWSTR ServerIpAddress,
             DHCP_IPV6_ADDRESS SubnetAddress,
             LPDHCP_SUBNET_ELEMENT_DATA_V6 AddElementInfo
    );
DWORD DHCP_API_FUNCTION
DhcpRemoveSubnetElementV6(
    _In_opt_ LPWSTR ServerIpAddress,
             DHCP_IPV6_ADDRESS SubnetAddress,
             LPDHCP_SUBNET_ELEMENT_DATA_V6 RemoveElementInfo,
             DHCP_FORCE_FLAG ForceFlag
    );
DWORD DHCP_API_FUNCTION
DhcpEnumSubnetElementsV6(
    _In_opt_ LPWSTR ServerIpAddress,
             DHCP_IPV6_ADDRESS SubnetAddress,
             DHCP_SUBNET_ELEMENT_TYPE_V6 EnumElementType,
             DHCP_RESUME_HANDLE *ResumeHandle,
             DWORD PreferredMaximum,
             LPDHCP_SUBNET_ELEMENT_INFO_ARRAY_V6 *EnumElementInfo,
             DWORD *ElementsRead,
             DWORD *ElementsTotal
    );
DWORD DHCP_API_FUNCTION
DhcpGetSubnetInfoV6(
    _In_opt_ LPWSTR ServerIpAddress,
             DHCP_IPV6_ADDRESS SubnetAddress,
             LPDHCP_SUBNET_INFO_V6 *SubnetInfo
    );
DWORD DHCP_API_FUNCTION
DhcpEnumSubnetClientsV6(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IPV6_ADDRESS SubnetAddress,
               DHCP_RESUME_IPV6_HANDLE *ResumeHandle,
               DWORD PreferredMaximum,
               LPDHCP_CLIENT_INFO_ARRAY_V6 *ClientInfo,
               DWORD *ClientsRead,
               DWORD *ClientsTotal
    );
DWORD DHCP_API_FUNCTION
DhcpServerGetConfigV6(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo,
               LPDHCP_SERVER_CONFIG_INFO_V6 *ConfigInfo
    );
DWORD DHCP_API_FUNCTION
DhcpServerSetConfigV6(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo,
               DWORD FieldsToSet,
               LPDHCP_SERVER_CONFIG_INFO_V6 ConfigInfo
    );
DWORD
DhcpSetSubnetInfoV6(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               DHCP_IPV6_ADDRESS SubnetAddress,
               LPDHCP_SUBNET_INFO_V6 SubnetInfo
);
DWORD
DhcpGetMibInfoV6(
    _In_opt_z_ DHCP_CONST WCHAR * ServerIpAddress,
               LPDHCP_MIB_INFO_V6 *MibInfo
);
DWORD DHCP_API_FUNCTION
DhcpGetServerBindingInfoV6(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               ULONG Flags,
               LPDHCPV6_BIND_ELEMENT_ARRAY *BindElementsInfo
);
DWORD DHCP_API_FUNCTION
DhcpSetServerBindingInfoV6(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
               ULONG Flags,
               LPDHCPV6_BIND_ELEMENT_ARRAY BindElementInfo
);
DWORD DHCP_API_FUNCTION
DhcpSetClientInfoV6(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_CLIENT_INFO_V6 *ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpGetClientInfoV6(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_SEARCH_INFO_V6 *SearchInfo,
               LPDHCP_CLIENT_INFO_V6 *ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpDeleteClientInfoV6(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_SEARCH_INFO_V6 *ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpCreateClassV6(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD ReservedMustBeZero,
             IN LPDHCP_CLASS_INFO_V6 ClassInfo
);
DWORD DHCP_API_FUNCTION
DhcpModifyClassV6(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD ReservedMustBeZero,
             IN LPDHCP_CLASS_INFO_V6 ClassInfo
);
DWORD DHCP_API_FUNCTION
DhcpDeleteClassV6(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD ReservedMustBeZero,
    _In_ IN LPWSTR ClassName
);
DWORD DHCP_API_FUNCTION
DhcpEnumClassesV6(
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DWORD ReservedMustBeZero,
             IN OUT DHCP_RESUME_HANDLE *ResumeHandle,
             IN DWORD PreferredMaximum,
             OUT LPDHCP_CLASS_INFO_ARRAY_V6 *ClassInfoArray,
             OUT DWORD *nRead,
             OUT DWORD *nTotal
);
DWORD DHCP_API_FUNCTION
DhcpSetSubnetDelayOffer (
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DHCP_IP_ADDRESS SubnetAddress,
             IN USHORT TimeDelayInMilliseconds
);
DWORD DHCP_API_FUNCTION
DhcpGetSubnetDelayOffer (
    _In_opt_ IN LPWSTR ServerIpAddress,
             IN DHCP_IP_ADDRESS SubnetAddress,
             IN USHORT * TimeDelayInMilliseconds
);
DWORD DHCP_API_FUNCTION
DhcpGetMibInfoV5(
_In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
OUT LPDHCP_MIB_INFO_V5 *MibInfo
    );
DWORD DHCP_API_FUNCTION
DhcpAddSecurityGroup(
_In_opt_ LPWSTR pServer
);
DWORD DHCP_API_FUNCTION
DhcpV4GetOptionValue (
    _In_opt_ IN LPWSTR ServerIpAddress,
                IN DWORD Flags,
                IN DHCP_OPTION_ID OptionID,
    _In_opt_ IN LPWSTR PolicyName,
    _In_opt_ IN LPWSTR VendorName,
                IN LPDHCP_OPTION_SCOPE_INFO ScopeInfo,
                OUT LPDHCP_OPTION_VALUE *OptionValue
        );
DWORD DHCP_API_FUNCTION
DhcpV4SetOptionValue (
    _In_opt_ IN LPWSTR ServerIpAddress,
                IN DWORD Flags,
                IN DHCP_OPTION_ID OptionId,
    _In_opt_ IN LPWSTR PolicyName,
    _In_opt_ IN LPWSTR VendorName,
                IN LPDHCP_OPTION_SCOPE_INFO ScopeInfo,
                IN LPDHCP_OPTION_DATA OptionValue
        );
DWORD DHCP_API_FUNCTION
DhcpV4SetOptionValues(
    _In_opt_ IN LPWSTR ServerIpAddress,
                IN DWORD Flags,
    _In_opt_ IN LPWSTR PolicyName,
    _In_opt_ IN LPWSTR VendorName,
                IN LPDHCP_OPTION_SCOPE_INFO ScopeInfo,
                IN LPDHCP_OPTION_VALUE_ARRAY OptionValues
        );
DWORD DHCP_API_FUNCTION
DhcpV4RemoveOptionValue (
    _In_opt_ IN LPWSTR ServerIpAddress,
                IN DWORD Flags,
                IN DHCP_OPTION_ID OptionID,
    _In_opt_ IN LPWSTR PolicyName,
    _In_opt_ IN LPWSTR VendorName,
                IN LPDHCP_OPTION_SCOPE_INFO ScopeInfo
        );
DWORD DHCP_API_FUNCTION
DhcpV4GetAllOptionValues (
    _In_opt_ IN LPWSTR ServerIpAddress,
                IN DWORD Flags,
                IN LPDHCP_OPTION_SCOPE_INFO ScopeInfo,
                OUT LPDHCP_ALL_OPTION_VALUES_PB *Values
        );
typedef enum _DHCP_FAILOVER_MODE {
   LoadBalance,
   HotStandby
} DHCP_FAILOVER_MODE, *LPDHCP_FAILOVER_MODE;
typedef enum _DHCP_FAILOVER_SERVER {
  PrimaryServer,
  SecondaryServer
} DHCP_FAILOVER_SERVER, *LPDHCP_FAILOVER_SERVER;
typedef enum _FSM_STATE
{
    NO_STATE=0,
    INIT,
    STARTUP,
    NORMAL,
    COMMUNICATION_INT,
    PARTNER_DOWN,
    POTENTIAL_CONFLICT,
    CONFLICT_DONE,
    RESOLUTION_INT,
    RECOVER,
    RECOVER_WAIT,
    RECOVER_DONE,
    PAUSED,
    SHUTDOWN
} FSM_STATE;
typedef struct _DHCP_FAILOVER_RELATIONSHIP
{
    DHCP_IP_ADDRESS PrimaryServer;
    DHCP_IP_ADDRESS SecondaryServer;
    DHCP_FAILOVER_MODE Mode;
    DHCP_FAILOVER_SERVER ServerType;
    FSM_STATE State;
    FSM_STATE PrevState;
    DWORD Mclt;
    DWORD SafePeriod;
    LPWSTR RelationshipName;
    LPWSTR PrimaryServerName;
    LPWSTR SecondaryServerName;
    LPDHCP_IP_ARRAY pScopes;
    BYTE Percentage;
    LPWSTR SharedSecret;
} DHCP_FAILOVER_RELATIONSHIP, *LPDHCP_FAILOVER_RELATIONSHIP;
typedef struct _DHCP_FAILOVER_RELATIONSHIP_ARRAY
{
    DWORD NumElements;
    _Field_size_(NumElements) LPDHCP_FAILOVER_RELATIONSHIP pRelationships;
} DHCP_FAILOVER_RELATIONSHIP_ARRAY , *LPDHCP_FAILOVER_RELATIONSHIP_ARRAY;
typedef struct _DHCPV4_FAILOVER_CLIENT_INFO {
    DHCP_IP_ADDRESS ClientIpAddress;
    DHCP_IP_MASK SubnetMask;
    DHCP_CLIENT_UID ClientHardwareAddress;
    LPWSTR ClientName;
    LPWSTR ClientComment;
    DATE_TIME ClientLeaseExpires;
    DHCP_HOST_INFO OwnerHost;
    BYTE bClientType;
    BYTE AddressState;
    QuarantineStatus Status;
    DATE_TIME ProbationEnds;
    BOOL QuarantineCapable;
    DWORD SentPotExpTime;
    DWORD AckPotExpTime;
    DWORD RecvPotExpTime;
    DWORD StartTime;
    DWORD CltLastTransTime;
    DWORD LastBndUpdTime;
    DWORD BndMsgStatus;
    LPWSTR PolicyName;
    BYTE Flags;
} DHCPV4_FAILOVER_CLIENT_INFO, *LPDHCPV4_FAILOVER_CLIENT_INFO;
typedef struct _DHCPV4_FAILOVER_CLIENT_INFO_ARRAY {
    DWORD NumElements;
     _Field_size_(NumElements) LPDHCPV4_FAILOVER_CLIENT_INFO *Clients;
} DHCPV4_FAILOVER_CLIENT_INFO_ARRAY, *LPDHCPV4_FAILOVER_CLIENT_INFO_ARRAY;
typedef struct _DHCPV4_FAILOVER_CLIENT_INFO_EX {
    DHCP_IP_ADDRESS ClientIpAddress;
    DHCP_IP_MASK SubnetMask;
    DHCP_CLIENT_UID ClientHardwareAddress;
    LPWSTR ClientName;
    LPWSTR ClientComment;
    DATE_TIME ClientLeaseExpires;
    DHCP_HOST_INFO OwnerHost;
    BYTE bClientType;
    BYTE AddressState;
    QuarantineStatus Status;
    DATE_TIME ProbationEnds;
    BOOL QuarantineCapable;
    DWORD SentPotExpTime;
    DWORD AckPotExpTime;
    DWORD RecvPotExpTime;
    DWORD StartTime;
    DWORD CltLastTransTime;
    DWORD LastBndUpdTime;
    DWORD BndMsgStatus;
    LPWSTR PolicyName;
    BYTE Flags;
    DWORD AddressStateEx;
} DHCPV4_FAILOVER_CLIENT_INFO_EX, *LPDHCPV4_FAILOVER_CLIENT_INFO_EX;
typedef struct _DHCP_FAILOVER_STATISTICS
{
    DWORD NumAddr;
    DWORD AddrFree;
    DWORD AddrInUse;
    DWORD PartnerAddrFree;
    DWORD ThisAddrFree;
    DWORD PartnerAddrInUse;
    DWORD ThisAddrInUse;
} DHCP_FAILOVER_STATISTICS, *LPDHCP_FAILOVER_STATISTICS;
DWORD DHCP_API_FUNCTION
DhcpV4FailoverCreateRelationship(
 _In_opt_ LPWSTR ServerIpAddress,
 _In_ LPDHCP_FAILOVER_RELATIONSHIP pRelationship
  );
DWORD DHCP_API_FUNCTION
DhcpV4FailoverSetRelationship(
 _In_opt_ LPWSTR ServerIpAddress,
 _In_ DWORD Flags,
 _In_ LPDHCP_FAILOVER_RELATIONSHIP pRelationship
 );
DWORD DHCP_API_FUNCTION
DhcpV4FailoverDeleteRelationship(
  _In_opt_ LPWSTR ServerIpAddress,
  _In_ LPWSTR pRelationshipName
 );
DWORD DHCP_API_FUNCTION
DhcpV4FailoverGetRelationship(
  _In_opt_ LPWSTR ServerIpAddress,
  _In_ LPWSTR pRelationshipName,
  _Out_ LPDHCP_FAILOVER_RELATIONSHIP *pRelationship
);
DWORD DHCP_API_FUNCTION
DhcpV4FailoverEnumRelationship(
  _In_opt_ LPWSTR ServerIpAddress,
  _Inout_ DHCP_RESUME_HANDLE *ResumeHandle,
  _In_ DWORD PreferredMaximum,
  _Out_ LPDHCP_FAILOVER_RELATIONSHIP_ARRAY *pRelationship,
  _Out_ LPDWORD RelationshipRead,
  _Out_ LPDWORD RelationshipTotal
 );
DWORD DHCP_API_FUNCTION
DhcpV4FailoverAddScopeToRelationship(
  _In_opt_ LPWSTR ServerIpAddress,
  _In_ LPDHCP_FAILOVER_RELATIONSHIP pRelationship
 );
DWORD DHCP_API_FUNCTION
DhcpV4FailoverDeleteScopeFromRelationship(
  _In_opt_ LPWSTR ServerIpAddress,
  _In_ LPDHCP_FAILOVER_RELATIONSHIP pRelationship
 );
DWORD DHCP_API_FUNCTION
DhcpV4FailoverGetScopeRelationship(
  _In_opt_ LPWSTR ServerIpAddress,
  _In_ DHCP_IP_ADDRESS ScopeId,
  _Out_ LPDHCP_FAILOVER_RELATIONSHIP *pRelationship
 );
DWORD DHCP_API_FUNCTION
DhcpV4FailoverGetScopeStatistics(
  _In_opt_ LPWSTR ServerIpAddress,
  _In_ DHCP_IP_ADDRESS ScopeId,
  _Out_ LPDHCP_FAILOVER_STATISTICS *pStats
);
DWORD DHCP_API_FUNCTION
DhcpV4FailoverGetClientInfo(
  _In_opt_ LPWSTR ServerIpAddress,
  _In_ DHCP_CONST DHCP_SEARCH_INFO *SearchInfo,
  _Out_ LPDHCPV4_FAILOVER_CLIENT_INFO *ClientInfo
);
DWORD DHCP_API_FUNCTION
DhcpV4FailoverGetSystemTime(
    _In_opt_ LPWSTR ServerIpAddress,
    _Out_ LPDWORD pTime,
    _Out_ LPDWORD pMaxAllowedDeltaTime
);
DWORD DHCP_API_FUNCTION
DhcpV4FailoverGetAddressStatus(
_In_opt_ LPWSTR ServerIpAddress,
_In_ DHCP_IP_ADDRESS SubnetAddress,
_Inout_ LPDWORD pStatus
);
DWORD DHCP_API_FUNCTION
DhcpV4FailoverTriggerAddrAllocation(
_In_opt_ LPWSTR ServerIpAddress,
_In_ LPWSTR pFailRelName
);
DWORD DHCP_API_FUNCTION
DhcpHlprCreateV4Policy (
        _In_ LPWSTR PolicyName,
        _In_ BOOL fGlobalPolicy,
        _In_ DHCP_IP_ADDRESS Subnet,
        _In_ DWORD ProcessingOrder,
        _In_ DHCP_POL_LOGIC_OPER RootOperator,
        _In_ LPWSTR Description,
        _In_ BOOL Enabled,
        _Out_ LPDHCP_POLICY *Policy
);
DWORD DHCP_API_FUNCTION
DhcpHlprCreateV4PolicyEx (
        _In_ LPWSTR PolicyName,
        _In_ BOOL fGlobalPolicy,
        _In_ DHCP_IP_ADDRESS Subnet,
        _In_ DWORD ProcessingOrder,
        _In_ DHCP_POL_LOGIC_OPER RootOperator,
        _In_ LPWSTR Description,
        _In_ BOOL Enabled,
        _Out_ LPDHCP_POLICY_EX *Policy
);
DWORD DHCP_API_FUNCTION
DhcpHlprAddV4PolicyExpr (
        _Inout_ LPDHCP_POLICY Policy,
        _In_ DWORD ParentExpr,
        _In_ DHCP_POL_LOGIC_OPER Operator,
        _Out_ DWORD *ExprIndex
);
DWORD DHCP_API_FUNCTION
DhcpHlprAddV4PolicyCondition (
        _Inout_ LPDHCP_POLICY Policy,
        _In_ DWORD ParentExpr,
        _In_ DHCP_POL_ATTR_TYPE Type,
        _In_ DWORD OptionID,
        _In_ DWORD SubOptionID,
        _In_opt_ LPWSTR VendorName,
        _In_ DHCP_POL_COMPARATOR Operator,
        _In_reads_bytes_(ValueLength) LPBYTE Value,
        _In_ DWORD ValueLength,
        _Out_ DWORD *ConditionIndex
);
DWORD DHCP_API_FUNCTION
DhcpHlprAddV4PolicyRange (
   _Inout_ LPDHCP_POLICY Policy,
   _In_ LPDHCP_IP_RANGE Range
);
DWORD DHCP_API_FUNCTION
DhcpHlprResetV4PolicyExpr (
   _Inout_ LPDHCP_POLICY Policy
);
DWORD DHCP_API_FUNCTION
DhcpHlprModifyV4PolicyExpr (
    _Inout_ LPDHCP_POLICY Policy,
    _In_ DHCP_POL_LOGIC_OPER Operator
);
VOID DHCP_API_FUNCTION
DhcpHlprFreeV4Policy (
    _Inout_ LPDHCP_POLICY Policy
);
VOID DHCP_API_FUNCTION
DhcpHlprFreeV4PolicyArray (
    _Inout_ LPDHCP_POLICY_ARRAY PolicyArray
);
VOID DHCP_API_FUNCTION
DhcpHlprFreeV4PolicyEx (
    _Inout_ LPDHCP_POLICY_EX PolicyEx
);
VOID DHCP_API_FUNCTION
DhcpHlprFreeV4PolicyExArray (
    _Inout_ LPDHCP_POLICY_EX_ARRAY PolicyExArray
);
VOID DHCP_API_FUNCTION
DhcpHlprFreeV4DhcpProperty (
    _Inout_ LPDHCP_PROPERTY Property
);
VOID DHCP_API_FUNCTION
DhcpHlprFreeV4DhcpPropertyArray (
    _Inout_ LPDHCP_PROPERTY_ARRAY PropertyArray
);
LPDHCP_PROPERTY
DhcpHlprFindV4DhcpProperty (
    _In_ LPDHCP_PROPERTY_ARRAY PropertyArray,
    _In_ DHCP_PROPERTY_ID ID,
    _In_ DHCP_PROPERTY_TYPE Type
);
BOOL DHCP_API_FUNCTION
DhcpHlprIsV4PolicySingleUC(
    _In_ LPDHCP_POLICY Policy
);
DWORD DHCP_API_FUNCTION
DhcpV4QueryPolicyEnforcement (
    _In_opt_ LPWSTR ServerIpAddress,
    _In_ BOOL fGlobalPolicy,
    _In_ DHCP_IP_ADDRESS SubnetAddress,
    _Out_ BOOL *Enabled
);
DWORD DHCP_API_FUNCTION
DhcpV4SetPolicyEnforcement (
    _In_opt_ LPWSTR ServerIpAddress,
       _In_ BOOL fGlobalPolicy,
       _In_ DHCP_IP_ADDRESS SubnetAddress,
       _In_ BOOL Enable
);
BOOL DHCP_API_FUNCTION
DhcpHlprIsV4PolicyWellFormed (
    _In_ LPDHCP_POLICY pPolicy
);
DWORD DHCP_API_FUNCTION
DhcpHlprIsV4PolicyValid (
    _In_ LPDHCP_POLICY pPolicy
);
DWORD DHCP_API_FUNCTION
DhcpV4CreatePolicy (
        _In_opt_ LPWSTR ServerIpAddress,
        _In_ LPDHCP_POLICY pPolicy
);
DWORD DHCP_API_FUNCTION
DhcpV4GetPolicy (
        _In_opt_ LPWSTR ServerIpAddress,
        _In_ BOOL fGlobalPolicy,
        _In_ DHCP_IP_ADDRESS SubnetAddress,
        _In_ LPWSTR PolicyName,
        _Out_ LPDHCP_POLICY *Policy
);
DWORD DHCP_API_FUNCTION
DhcpV4SetPolicy (
        _In_opt_ LPWSTR ServerIpAddress,
        _In_ DWORD FieldsModified,
        _In_ BOOL fGlobalPolicy,
        _In_ DHCP_IP_ADDRESS SubnetAddress,
        _In_ LPWSTR PolicyName,
        _In_ LPDHCP_POLICY Policy
);
DWORD DHCP_API_FUNCTION
DhcpV4DeletePolicy (
        _In_opt_ LPWSTR ServerIpAddress,
        _In_ BOOL fGlobalPolicy,
        _In_ DHCP_IP_ADDRESS SubnetAddress,
        _In_ LPWSTR PolicyName
);
DWORD DHCP_API_FUNCTION
DhcpV4EnumPolicies (
        _In_opt_ LPWSTR ServerIpAddress,
        _Inout_ LPDWORD ResumeHandle,
        _In_ DWORD PreferredMaximum,
        _In_ BOOL fGlobalPolicy,
        _In_ DHCP_IP_ADDRESS SubnetAddress,
        _Out_ LPDHCP_POLICY_ARRAY *EnumInfo,
        _Out_ DWORD *ElementsRead,
        _Out_ DWORD *ElementsTotal
);
DWORD DHCP_API_FUNCTION
DhcpV4AddPolicyRange (
        _In_opt_ LPWSTR ServerIpAddress,
        _In_ DHCP_IP_ADDRESS SubnetAddress,
        _In_ LPWSTR PolicyName,
        _In_ LPDHCP_IP_RANGE Range
);
DWORD DHCP_API_FUNCTION
DhcpV4RemovePolicyRange (
        _In_opt_ LPWSTR ServerIpAddress,
        _In_ DHCP_IP_ADDRESS SubnetAddress,
        _In_ LPWSTR PolicyName,
        _In_ LPDHCP_IP_RANGE Range
);
DWORD DHCP_API_FUNCTION
DhcpV6SetStatelessStoreParams (
        _In_opt_ LPWSTR ServerIpAddress,
        _In_ BOOL fServerLevel,
        _In_ DHCP_IPV6_ADDRESS SubnetAddress,
        _In_ DWORD FieldModified,
        _In_ LPDHCPV6_STATELESS_PARAMS Params
);
DWORD DHCP_API_FUNCTION
DhcpV6GetStatelessStoreParams (
        _In_opt_ LPWSTR ServerIpAddress,
        _In_ BOOL fServerLevel,
        _In_ DHCP_IPV6_ADDRESS SubnetAddress,
        _Out_ LPDHCPV6_STATELESS_PARAMS *Params
);
DWORD DHCP_API_FUNCTION
DhcpV6GetStatelessStatistics (
        _In_opt_ LPWSTR ServerIpAddress,
        _Out_ LPDHCPV6_STATELESS_STATS *StatelessStats
);
DWORD DHCP_API_FUNCTION
DhcpV4CreateClientInfo(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    _In_ DHCP_CONST LPDHCP_CLIENT_INFO_PB ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpV4EnumSubnetClients(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    _In_ DHCP_IP_ADDRESS SubnetAddress,
    _Inout_ DHCP_RESUME_HANDLE *ResumeHandle,
    _In_ DWORD PreferredMaximum,
    _Out_ LPDHCP_CLIENT_INFO_PB_ARRAY *ClientInfo,
    _Out_ DWORD *ClientsRead,
    _Out_ DWORD *ClientsTotal
    );
DWORD DHCP_API_FUNCTION
DhcpV4GetClientInfo(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    _In_ DHCP_CONST DHCP_SEARCH_INFO *SearchInfo,
    _Out_ LPDHCP_CLIENT_INFO_PB *ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpV6CreateClientInfo(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    _In_ DHCP_CONST LPDHCP_CLIENT_INFO_V6 ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpV4GetFreeIPAddress (
        _In_opt_ LPWSTR ServerIpAddress,
        _In_ DHCP_IP_ADDRESS ScopeId,
        _In_ DHCP_IP_ADDRESS StartIP,
        _In_ DHCP_IP_ADDRESS EndIP,
        _In_ DWORD NumFreeAddrReq,
        _Out_ LPDHCP_IP_ARRAY *IPAddrList
);
DWORD DHCP_API_FUNCTION
DhcpV6GetFreeIPAddress (
        _In_opt_ LPWSTR ServerIpAddress,
        _In_ DHCP_IPV6_ADDRESS ScopeId,
        _In_ DHCP_IPV6_ADDRESS StartIP,
        _In_ DHCP_IPV6_ADDRESS EndIP,
        _In_ DWORD NumFreeAddrReq,
        _Out_ LPDHCPV6_IP_ARRAY *IPAddrList
);
DWORD DHCP_API_FUNCTION
DhcpV4CreateClientInfoEx(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    _In_ DHCP_CONST LPDHCP_CLIENT_INFO_EX ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpV4EnumSubnetClientsEx(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    _In_ DHCP_IP_ADDRESS SubnetAddress,
    _Inout_ DHCP_RESUME_HANDLE *ResumeHandle,
    _In_ DWORD PreferredMaximum,
    _Out_ LPDHCP_CLIENT_INFO_EX_ARRAY *ClientInfo,
    _Out_ DWORD *ClientsRead,
    _Out_ DWORD *ClientsTotal
    );
DWORD DHCP_API_FUNCTION
DhcpV4GetClientInfoEx(
    _In_opt_z_ DHCP_CONST WCHAR *ServerIpAddress,
    _In_ DHCP_CONST DHCP_SEARCH_INFO *SearchInfo,
    _Out_ LPDHCP_CLIENT_INFO_EX *ClientInfo
    );
DWORD DHCP_API_FUNCTION
DhcpV4CreatePolicyEx (
        _In_opt_ LPWSTR ServerIpAddress,
        _In_ LPDHCP_POLICY_EX PolicyEx
);
DWORD DHCP_API_FUNCTION
DhcpV4GetPolicyEx (
        _In_opt_ LPWSTR ServerIpAddress,
        _In_ BOOL GlobalPolicy,
        _In_ DHCP_IP_ADDRESS SubnetAddress,
        _In_ LPWSTR PolicyName,
        _Out_ LPDHCP_POLICY_EX *Policy
);
DWORD DHCP_API_FUNCTION
DhcpV4SetPolicyEx (
        _In_opt_ LPWSTR ServerIpAddress,
        _In_ DWORD FieldsModified,
        _In_ BOOL GlobalPolicy,
        _In_ DHCP_IP_ADDRESS SubnetAddress,
        _In_ LPWSTR PolicyName,
        _In_ LPDHCP_POLICY_EX Policy
);
DWORD DHCP_API_FUNCTION
DhcpV4EnumPoliciesEx (
        _In_opt_ LPWSTR ServerIpAddress,
        _Inout_ LPDWORD ResumeHandle,
        _In_ DWORD PreferredMaximum,
        _In_ BOOL GlobalPolicy,
        _In_ DHCP_IP_ADDRESS SubnetAddress,
        _Out_ LPDHCP_POLICY_EX_ARRAY *EnumInfo,
        _Out_ DWORD *ElementsRead,
        _Out_ DWORD *ElementsTotal
);
}
#endif
#pragma endregion
