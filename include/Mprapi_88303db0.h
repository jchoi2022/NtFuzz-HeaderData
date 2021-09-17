#include <winapifamily.h>
#pragma region Desktop Family or CmdLineTools Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_CMDTOOLS)
#include <lmcons.h>
#include <ras.h>
#include <in6addr.h>
#include <wincrypt.h>
extern "C" {
#include <mprapidef.h>
typedef enum _ROUTER_INTERFACE_TYPE
{
    ROUTER_IF_TYPE_CLIENT,
    ROUTER_IF_TYPE_HOME_ROUTER,
    ROUTER_IF_TYPE_FULL_ROUTER,
    ROUTER_IF_TYPE_DEDICATED,
    ROUTER_IF_TYPE_INTERNAL,
    ROUTER_IF_TYPE_LOOPBACK,
    ROUTER_IF_TYPE_TUNNEL1,
    ROUTER_IF_TYPE_DIALOUT,
    ROUTER_IF_TYPE_MAX
}
ROUTER_INTERFACE_TYPE;
typedef enum _ROUTER_CONNECTION_STATE
{
    ROUTER_IF_STATE_UNREACHABLE,
    ROUTER_IF_STATE_DISCONNECTED,
    ROUTER_IF_STATE_CONNECTING,
    ROUTER_IF_STATE_CONNECTED
}
ROUTER_CONNECTION_STATE;
typedef struct _MPR_INTERFACE_0
{
    IN OUT _Field_z_ WCHAR wszInterfaceName[MAX_INTERFACE_NAME_LEN+1];
    OUT HANDLE hInterface;
    IN OUT BOOL fEnabled;
    IN OUT ROUTER_INTERFACE_TYPE dwIfType;
    OUT ROUTER_CONNECTION_STATE dwConnectionState;
    OUT DWORD fUnReachabilityReasons;
    OUT DWORD dwLastError;
}
MPR_INTERFACE_0, *PMPR_INTERFACE_0;
typedef struct _MPR_IPINIP_INTERFACE_0
{
    WCHAR wszFriendlyName[MAX_INTERFACE_NAME_LEN+1];
    GUID Guid;
}MPR_IPINIP_INTERFACE_0, *PMPR_IPINIP_INTERFACE_0;
typedef struct _MPR_INTERFACE_1
{
    IN OUT WCHAR wszInterfaceName[MAX_INTERFACE_NAME_LEN+1];
    OUT HANDLE hInterface;
    IN OUT BOOL fEnabled;
    IN OUT ROUTER_INTERFACE_TYPE dwIfType;
    OUT ROUTER_CONNECTION_STATE dwConnectionState;
    OUT DWORD fUnReachabilityReasons;
    OUT DWORD dwLastError;
    OUT LPWSTR lpwsDialoutHoursRestriction;
}
MPR_INTERFACE_1, *PMPR_INTERFACE_1;
typedef struct _MPR_INTERFACE_2
{
    IN OUT WCHAR wszInterfaceName[MAX_INTERFACE_NAME_LEN+1];
    OUT HANDLE hInterface;
    IN OUT BOOL fEnabled;
    IN OUT ROUTER_INTERFACE_TYPE dwIfType;
    OUT ROUTER_CONNECTION_STATE dwConnectionState;
    OUT DWORD fUnReachabilityReasons;
    OUT DWORD dwLastError;
    DWORD dwfOptions;
    WCHAR szLocalPhoneNumber[ RAS_MaxPhoneNumber + 1 ];
    PWCHAR szAlternates;
    DWORD ipaddr;
    DWORD ipaddrDns;
    DWORD ipaddrDnsAlt;
    DWORD ipaddrWins;
    DWORD ipaddrWinsAlt;
    DWORD dwfNetProtocols;
    WCHAR szDeviceType[ MPR_MaxDeviceType + 1 ];
    WCHAR szDeviceName[ MPR_MaxDeviceName + 1 ];
    WCHAR szX25PadType[ MPR_MaxPadType + 1 ];
    WCHAR szX25Address[ MPR_MaxX25Address + 1 ];
    WCHAR szX25Facilities[ MPR_MaxFacilities + 1 ];
    WCHAR szX25UserData[ MPR_MaxUserData + 1 ];
    DWORD dwChannels;
    DWORD dwSubEntries;
    DWORD dwDialMode;
    DWORD dwDialExtraPercent;
    DWORD dwDialExtraSampleSeconds;
    DWORD dwHangUpExtraPercent;
    DWORD dwHangUpExtraSampleSeconds;
    DWORD dwIdleDisconnectSeconds;
    DWORD dwType;
    DWORD dwEncryptionType;
    DWORD dwCustomAuthKey;
    DWORD dwCustomAuthDataSize;
    LPBYTE lpbCustomAuthData;
    GUID guidId;
    DWORD dwVpnStrategy;
} MPR_INTERFACE_2, *PMPR_INTERFACE_2;
typedef struct _MPR_INTERFACE_3
{
    IN OUT WCHAR wszInterfaceName[MAX_INTERFACE_NAME_LEN+1];
    OUT HANDLE hInterface;
    IN OUT BOOL fEnabled;
    IN OUT ROUTER_INTERFACE_TYPE dwIfType;
    OUT ROUTER_CONNECTION_STATE dwConnectionState;
    OUT DWORD fUnReachabilityReasons;
    OUT DWORD dwLastError;
    DWORD dwfOptions;
    WCHAR szLocalPhoneNumber[ RAS_MaxPhoneNumber + 1 ];
    PWCHAR szAlternates;
    DWORD ipaddr;
    DWORD ipaddrDns;
    DWORD ipaddrDnsAlt;
    DWORD ipaddrWins;
    DWORD ipaddrWinsAlt;
    DWORD dwfNetProtocols;
    WCHAR szDeviceType[ MPR_MaxDeviceType + 1 ];
    WCHAR szDeviceName[ MPR_MaxDeviceName + 1 ];
    WCHAR szX25PadType[ MPR_MaxPadType + 1 ];
    WCHAR szX25Address[ MPR_MaxX25Address + 1 ];
    WCHAR szX25Facilities[ MPR_MaxFacilities + 1 ];
    WCHAR szX25UserData[ MPR_MaxUserData + 1 ];
    DWORD dwChannels;
    DWORD dwSubEntries;
    DWORD dwDialMode;
    DWORD dwDialExtraPercent;
    DWORD dwDialExtraSampleSeconds;
    DWORD dwHangUpExtraPercent;
    DWORD dwHangUpExtraSampleSeconds;
    DWORD dwIdleDisconnectSeconds;
    DWORD dwType;
    DWORD dwEncryptionType;
    DWORD dwCustomAuthKey;
    DWORD dwCustomAuthDataSize;
    LPBYTE lpbCustomAuthData;
    GUID guidId;
    DWORD dwVpnStrategy;
    ULONG AddressCount;
    IN6_ADDR ipv6addrDns;
    IN6_ADDR ipv6addrDnsAlt;
    IN6_ADDR *ipv6addr;
} MPR_INTERFACE_3, *PMPR_INTERFACE_3;
typedef struct _MPR_DEVICE_0
{
    WCHAR szDeviceType[ MPR_MaxDeviceType + 1 ];
    WCHAR szDeviceName[ MPR_MaxDeviceName + 1 ];
}
MPR_DEVICE_0, *PMPR_DEVICE_0;
typedef struct _MPR_DEVICE_1
{
    WCHAR szDeviceType[ MPR_MaxDeviceType + 1 ];
    WCHAR szDeviceName[ MPR_MaxDeviceName + 1 ];
    WCHAR szLocalPhoneNumber[ MPR_MaxPhoneNumber + 1 ];
    PWCHAR szAlternates;
}
MPR_DEVICE_1, *PMPR_DEVICE_1;
typedef _Struct_size_bytes_(dwSize + sizeof(MPR_CREDENTIALSEX_0)) struct _MPR_CREDENTIALSEX_0
{
    DWORD dwSize;
    LPBYTE lpbCredentialsInfo;
}
MPR_CREDENTIALSEX_0, *PMPR_CREDENTIALSEX_0;
typedef _Struct_size_bytes_(dwSize + sizeof(MPR_CREDENTIALSEX_1)) struct _MPR_CREDENTIALSEX_1
{
    DWORD dwSize;
    LPBYTE lpbCredentialsInfo;
}
MPR_CREDENTIALSEX_1, *PMPR_CREDENTIALSEX_1;
typedef struct _MPR_TRANSPORT_0
{
    OUT DWORD dwTransportId;
    OUT HANDLE hTransport;
    OUT WCHAR wszTransportName[MAX_TRANSPORT_NAME_LEN+1];
}
MPR_TRANSPORT_0, *PMPR_TRANSPORT_0;
typedef struct _MPR_IFTRANSPORT_0
{
    OUT DWORD dwTransportId;
    OUT HANDLE hIfTransport;
    OUT WCHAR wszIfTransportName[MAX_TRANSPORT_NAME_LEN+1];
}
MPR_IFTRANSPORT_0, *PMPR_IFTRANSPORT_0;
typedef struct _MPR_SERVER_0
{
    OUT BOOL fLanOnlyMode;
    OUT DWORD dwUpTime;
    OUT DWORD dwTotalPorts;
    OUT DWORD dwPortsInUse;
}
MPR_SERVER_0, *PMPR_SERVER_0;
typedef struct _MPR_SERVER_1
{
    IN OUT DWORD dwNumPptpPorts;
    IN OUT DWORD dwPptpPortFlags;
    IN OUT DWORD dwNumL2tpPorts;
    IN OUT DWORD dwL2tpPortFlags;
}
MPR_SERVER_1, *PMPR_SERVER_1;
typedef struct _MPR_SERVER_2
{
    IN OUT DWORD dwNumPptpPorts;
    IN OUT DWORD dwPptpPortFlags;
    IN OUT DWORD dwNumL2tpPorts;
    IN OUT DWORD dwL2tpPortFlags;
    IN OUT DWORD dwNumSstpPorts;
    IN OUT DWORD dwSstpPortFlags;
}
MPR_SERVER_2, *PMPR_SERVER_2;
typedef enum _RAS_PORT_CONDITION
{
    RAS_PORT_NON_OPERATIONAL,
    RAS_PORT_DISCONNECTED,
    RAS_PORT_CALLING_BACK,
    RAS_PORT_LISTENING,
    RAS_PORT_AUTHENTICATING,
    RAS_PORT_AUTHENTICATED,
    RAS_PORT_INITIALIZING
}
RAS_PORT_CONDITION;
typedef enum _RAS_HARDWARE_CONDITION
{
    RAS_HARDWARE_OPERATIONAL,
    RAS_HARDWARE_FAILURE
}
RAS_HARDWARE_CONDITION;
typedef struct _RAS_PORT_0
{
    OUT HANDLE hPort;
    OUT HANDLE hConnection;
    OUT RAS_PORT_CONDITION dwPortCondition;
    OUT DWORD dwTotalNumberOfCalls;
    OUT DWORD dwConnectDuration;
    OUT WCHAR wszPortName[ MAX_PORT_NAME + 1 ];
    OUT WCHAR wszMediaName[ MAX_MEDIA_NAME + 1 ];
    OUT WCHAR wszDeviceName[ MAX_DEVICE_NAME + 1 ];
    OUT WCHAR wszDeviceType[ MAX_DEVICETYPE_NAME + 1 ];
}
RAS_PORT_0, *PRAS_PORT_0;
typedef struct _RAS_PORT_1
{
    OUT HANDLE hPort;
    OUT HANDLE hConnection;
    OUT RAS_HARDWARE_CONDITION dwHardwareCondition;
    OUT DWORD dwLineSpeed;
    OUT DWORD dwBytesXmited;
    OUT DWORD dwBytesRcved;
    OUT DWORD dwFramesXmited;
    OUT DWORD dwFramesRcved;
    OUT DWORD dwCrcErr;
    OUT DWORD dwTimeoutErr;
    OUT DWORD dwAlignmentErr;
    OUT DWORD dwHardwareOverrunErr;
    OUT DWORD dwFramingErr;
    OUT DWORD dwBufferOverrunErr;
    OUT DWORD dwCompressionRatioIn;
    OUT DWORD dwCompressionRatioOut;
}
RAS_PORT_1, *PRAS_PORT_1;
typedef struct _RAS_PORT_2
{
    OUT HANDLE hPort;
    OUT HANDLE hConnection;
    OUT DWORD dwConn_State;
    OUT WCHAR wszPortName[ MAX_PORT_NAME + 1 ];
    OUT WCHAR wszMediaName[ MAX_MEDIA_NAME + 1 ];
    OUT WCHAR wszDeviceName[ MAX_DEVICE_NAME + 1 ];
    OUT WCHAR wszDeviceType[ MAX_DEVICETYPE_NAME + 1 ];
    OUT RAS_HARDWARE_CONDITION dwHardwareCondition;
    OUT DWORD dwLineSpeed;
    OUT DWORD dwCrcErr;
    OUT DWORD dwSerialOverRunErrs;
    OUT DWORD dwTimeoutErr;
    OUT DWORD dwAlignmentErr;
    OUT DWORD dwHardwareOverrunErr;
    OUT DWORD dwFramingErr;
    OUT DWORD dwBufferOverrunErr;
    OUT DWORD dwCompressionRatioIn;
    OUT DWORD dwCompressionRatioOut;
    OUT DWORD dwTotalErrors;
    OUT ULONGLONG ullBytesXmited;
    OUT ULONGLONG ullBytesRcved;
    OUT ULONGLONG ullFramesXmited;
    OUT ULONGLONG ullFramesRcved;
    OUT ULONGLONG ullBytesTxUncompressed;
    OUT ULONGLONG ullBytesTxCompressed;
    OUT ULONGLONG ullBytesRcvUncompressed;
    OUT ULONGLONG ullBytesRcvCompressed;
}
RAS_PORT_2, *PRAS_PORT_2;
typedef struct _PPP_NBFCP_INFO
{
    OUT DWORD dwError;
    OUT WCHAR wszWksta[ NETBIOS_NAME_LEN + 1 ];
}
PPP_NBFCP_INFO;
typedef struct _PPP_IPCP_INFO
{
    OUT DWORD dwError;
    OUT WCHAR wszAddress[ IPADDRESSLEN + 1 ];
    OUT WCHAR wszRemoteAddress[ IPADDRESSLEN + 1 ];
}
PPP_IPCP_INFO;
typedef struct _PPP_IPCP_INFO2
{
    OUT DWORD dwError;
    OUT WCHAR wszAddress[ IPADDRESSLEN + 1 ];
    OUT WCHAR wszRemoteAddress[ IPADDRESSLEN + 1 ];
    OUT DWORD dwOptions;
    OUT DWORD dwRemoteOptions;
}
PPP_IPCP_INFO2;
typedef struct _PPP_IPXCP_INFO
{
    OUT DWORD dwError;
    OUT WCHAR wszAddress[ IPXADDRESSLEN + 1 ];
}
PPP_IPXCP_INFO;
typedef struct _PPP_ATCP_INFO
{
    OUT DWORD dwError;
    OUT WCHAR wszAddress[ ATADDRESSLEN + 1 ];
}
PPP_ATCP_INFO;
typedef struct _PPP_IPV6_CP_INFO
{
    OUT DWORD dwVersion;
    OUT DWORD dwSize;
    OUT DWORD dwError;
    OUT BYTE bInterfaceIdentifier[8];
    OUT BYTE bRemoteInterfaceIdentifier[8];
    OUT DWORD dwOptions;
    OUT DWORD dwRemoteOptions;
    OUT BYTE bPrefix[8];
    OUT DWORD dwPrefixLength;
}
PPP_IPV6_CP_INFO;
typedef struct _PPP_INFO
{
    OUT PPP_NBFCP_INFO nbf;
    OUT PPP_IPCP_INFO ip;
    OUT PPP_IPXCP_INFO ipx;
    OUT PPP_ATCP_INFO at;
} PPP_INFO;
typedef struct _PPP_CCP_INFO
{
    OUT DWORD dwError;
    OUT DWORD dwCompressionAlgorithm;
    OUT DWORD dwOptions;
    OUT DWORD dwRemoteCompressionAlgorithm;
    OUT DWORD dwRemoteOptions;
}
PPP_CCP_INFO;
typedef struct _PPP_LCP_INFO
{
    OUT DWORD dwError;
    OUT DWORD dwAuthenticationProtocol;
    OUT DWORD dwAuthenticationData;
    OUT DWORD dwRemoteAuthenticationProtocol;
    OUT DWORD dwRemoteAuthenticationData;
    OUT DWORD dwTerminateReason;
    OUT DWORD dwRemoteTerminateReason;
    OUT DWORD dwOptions;
    OUT DWORD dwRemoteOptions;
    OUT DWORD dwEapTypeId;
    OUT DWORD dwRemoteEapTypeId;
}
PPP_LCP_INFO;
typedef struct _PPP_INFO_2
{
    OUT PPP_NBFCP_INFO nbf;
    OUT PPP_IPCP_INFO2 ip;
    OUT PPP_IPXCP_INFO ipx;
    OUT PPP_ATCP_INFO at;
    OUT PPP_CCP_INFO ccp;
    OUT PPP_LCP_INFO lcp;
}
PPP_INFO_2;
typedef struct _PPP_INFO_3
{
    OUT PPP_NBFCP_INFO nbf;
    OUT PPP_IPCP_INFO2 ip;
    OUT PPP_IPV6_CP_INFO ipv6;
    OUT PPP_CCP_INFO ccp;
    OUT PPP_LCP_INFO lcp;
}
PPP_INFO_3;
typedef struct _RAS_CONNECTION_0
{
    OUT HANDLE hConnection;
    OUT HANDLE hInterface;
    OUT DWORD dwConnectDuration;
    OUT ROUTER_INTERFACE_TYPE dwInterfaceType;
    OUT DWORD dwConnectionFlags;
    OUT WCHAR wszInterfaceName[ MAX_INTERFACE_NAME_LEN + 1 ];
    OUT WCHAR wszUserName[ UNLEN + 1 ];
    OUT WCHAR wszLogonDomain[ DNLEN + 1 ];
    OUT WCHAR wszRemoteComputer[ NETBIOS_NAME_LEN + 1 ];
}
RAS_CONNECTION_0, *PRAS_CONNECTION_0;
typedef struct _RAS_CONNECTION_1
{
    OUT HANDLE hConnection;
    OUT HANDLE hInterface;
    OUT PPP_INFO PppInfo;
    OUT DWORD dwBytesXmited;
    OUT DWORD dwBytesRcved;
    OUT DWORD dwFramesXmited;
    OUT DWORD dwFramesRcved;
    OUT DWORD dwCrcErr;
    OUT DWORD dwTimeoutErr;
    OUT DWORD dwAlignmentErr;
    OUT DWORD dwHardwareOverrunErr;
    OUT DWORD dwFramingErr;
    OUT DWORD dwBufferOverrunErr;
    OUT DWORD dwCompressionRatioIn;
    OUT DWORD dwCompressionRatioOut;
}
RAS_CONNECTION_1, *PRAS_CONNECTION_1;
typedef struct _RAS_CONNECTION_2
{
    OUT HANDLE hConnection;
    OUT WCHAR wszUserName[ UNLEN + 1 ];
    OUT ROUTER_INTERFACE_TYPE dwInterfaceType;
    OUT GUID guid;
    OUT PPP_INFO_2 PppInfo2;
}
RAS_CONNECTION_2, *PRAS_CONNECTION_2;
typedef enum _RAS_QUARANTINE_STATE
{
      RAS_QUAR_STATE_NORMAL = 0,
      RAS_QUAR_STATE_QUARANTINE = 1,
      RAS_QUAR_STATE_PROBATION = 2,
      RAS_QUAR_STATE_NOT_CAPABLE = 3
}RAS_QUARANTINE_STATE;
typedef struct _RAS_CONNECTION_3
{
       OUT DWORD dwVersion;
       OUT DWORD dwSize;
 OUT HANDLE hConnection;
 WCHAR wszUserName[ UNLEN + 1 ];
       ROUTER_INTERFACE_TYPE dwInterfaceType;
       GUID guid;
       PPP_INFO_3 PppInfo3;
 OUT RAS_QUARANTINE_STATE rasQuarState;
 OUT FILETIME timer;
}RAS_CONNECTION_3, *PRAS_CONNECTION_3;
                              | RASPRIV_CallerSetCallback \
                              | RASPRIV_NoCallback)
typedef struct _RAS_USER_0
{
    OUT BYTE bfPrivilege;
    OUT WCHAR wszPhoneNumber[ MAX_PHONE_NUMBER_LEN + 1];
}
RAS_USER_0, *PRAS_USER_0;
typedef struct _RAS_USER_1
{
    OUT BYTE bfPrivilege;
    OUT WCHAR wszPhoneNumber[ MAX_PHONE_NUMBER_LEN + 1];
    OUT BYTE bfPrivilege2;
}
RAS_USER_1, *PRAS_USER_1;
typedef struct _MPR_FILTER_0
{
    IN BOOL fEnable;
}
MPR_FILTER_0, *PMPR_FILTER_0;
typedef HANDLE RAS_SERVER_HANDLE;
typedef HANDLE MPR_SERVER_HANDLE;
typedef HANDLE MIB_SERVER_HANDLE;
typedef struct _MPRAPI_OBJECT_HEADER {
    UCHAR revision;
    UCHAR type;
    USHORT size;
} MPRAPI_OBJECT_HEADER, *PMPRAPI_OBJECT_HEADER ;
typedef enum _MPRAPI_OBJECT_TYPE
{
    MPRAPI_OBJECT_TYPE_RAS_CONNECTION_OBJECT = 1,
    MPRAPI_OBJECT_TYPE_MPR_SERVER_OBJECT = 2,
    MPRAPI_OBJECT_TYPE_MPR_SERVER_SET_CONFIG_OBJECT = 3,
    MPRAPI_OBJECT_TYPE_AUTH_VALIDATION_OBJECT = 4,
    MPRAPI_OBJECT_TYPE_UPDATE_CONNECTION_OBJECT = 5,
    MPRAPI_OBJECT_TYPE_IF_CUSTOM_CONFIG_OBJECT = 6
}MPRAPI_OBJECT_TYPE, *PMPRAPI_OBJECT_TYPE;
typedef struct _PPP_PROJECTION_INFO {
    DWORD dwIPv4NegotiationError;
    WCHAR wszAddress[IPADDRESSLEN + 1];
    WCHAR wszRemoteAddress[IPADDRESSLEN + 1];
    DWORD dwIPv4Options;
    DWORD dwIPv4RemoteOptions;
    ULONG64 IPv4SubInterfaceIndex;
    DWORD dwIPv6NegotiationError;
    BYTE bInterfaceIdentifier[8];
    BYTE bRemoteInterfaceIdentifier[8];
    BYTE bPrefix[8];
    DWORD dwPrefixLength;
    ULONG64 IPv6SubInterfaceIndex;
    DWORD dwLcpError;
    DWORD dwAuthenticationProtocol;
    DWORD dwAuthenticationData;
    DWORD dwRemoteAuthenticationProtocol;
    DWORD dwRemoteAuthenticationData;
    DWORD dwLcpTerminateReason;
    DWORD dwLcpRemoteTerminateReason;
    DWORD dwLcpOptions;
    DWORD dwLcpRemoteOptions;
    DWORD dwEapTypeId;
    DWORD dwRemoteEapTypeId;
    DWORD dwCcpError;
    DWORD dwCompressionAlgorithm;
    DWORD dwCcpOptions;
    DWORD dwRemoteCompressionAlgorithm;
    DWORD dwCcpRemoteOptions;
}PPP_PROJECTION_INFO, *PPPP_PROJECTION_INFO;
typedef struct _PPP_PROJECTION_INFO2 {
    DWORD dwIPv4NegotiationError;
    WCHAR wszAddress[IPADDRESSLEN + 1];
    WCHAR wszRemoteAddress[IPADDRESSLEN + 1];
    DWORD dwIPv4Options;
    DWORD dwIPv4RemoteOptions;
    ULONG64 IPv4SubInterfaceIndex;
    DWORD dwIPv6NegotiationError;
    BYTE bInterfaceIdentifier[8];
    BYTE bRemoteInterfaceIdentifier[8];
    BYTE bPrefix[8];
    DWORD dwPrefixLength;
    ULONG64 IPv6SubInterfaceIndex;
    DWORD dwLcpError;
    DWORD dwAuthenticationProtocol;
    DWORD dwAuthenticationData;
    DWORD dwRemoteAuthenticationProtocol;
    DWORD dwRemoteAuthenticationData;
    DWORD dwLcpTerminateReason;
    DWORD dwLcpRemoteTerminateReason;
    DWORD dwLcpOptions;
    DWORD dwLcpRemoteOptions;
    DWORD dwEapTypeId;
    DWORD dwEmbeddedEAPTypeId;
    DWORD dwRemoteEapTypeId;
    DWORD dwCcpError;
    DWORD dwCompressionAlgorithm;
    DWORD dwCcpOptions;
    DWORD dwRemoteCompressionAlgorithm;
    DWORD dwCcpRemoteOptions;
}PPP_PROJECTION_INFO2, *PPPP_PROJECTION_INFO2;
typedef struct _IKEV2_PROJECTION_INFO {
    DWORD dwIPv4NegotiationError;
    WCHAR wszAddress[IPADDRESSLEN + 1];
    WCHAR wszRemoteAddress[IPADDRESSLEN + 1];
    ULONG64 IPv4SubInterfaceIndex;
    DWORD dwIPv6NegotiationError;
    BYTE bInterfaceIdentifier[8];
    BYTE bRemoteInterfaceIdentifier[8];
    BYTE bPrefix[8];
    DWORD dwPrefixLength;
    ULONG64 IPv6SubInterfaceIndex;
    DWORD dwOptions;
    DWORD dwAuthenticationProtocol;
    DWORD dwEapTypeId;
    DWORD dwCompressionAlgorithm;
    DWORD dwEncryptionMethod;
}IKEV2_PROJECTION_INFO, *PIKEV2_PROJECTION_INFO;
typedef struct _IKEV2_PROJECTION_INFO2 {
    DWORD dwIPv4NegotiationError;
    WCHAR wszAddress[IPADDRESSLEN + 1];
    WCHAR wszRemoteAddress[IPADDRESSLEN + 1];
    ULONG64 IPv4SubInterfaceIndex;
    DWORD dwIPv6NegotiationError;
    BYTE bInterfaceIdentifier[8];
    BYTE bRemoteInterfaceIdentifier[8];
    BYTE bPrefix[8];
    DWORD dwPrefixLength;
    ULONG64 IPv6SubInterfaceIndex;
    DWORD dwOptions;
    DWORD dwAuthenticationProtocol;
    DWORD dwEapTypeId;
    DWORD dwEmbeddedEAPTypeId;
    DWORD dwCompressionAlgorithm;
    DWORD dwEncryptionMethod;
}IKEV2_PROJECTION_INFO2, *PIKEV2_PROJECTION_INFO2;
typedef struct _PROJECTION_INFO {
    UCHAR projectionInfoType;
    union {
        PPP_PROJECTION_INFO PppProjectionInfo;
        IKEV2_PROJECTION_INFO Ikev2ProjectionInfo;
    };
}PROJECTION_INFO, *PPROJECTION_INFO;
typedef struct _PROJECTION_INFO2 {
    UCHAR projectionInfoType;
    union {
        PPP_PROJECTION_INFO2 PppProjectionInfo;
        IKEV2_PROJECTION_INFO2 Ikev2ProjectionInfo;
    };
}PROJECTION_INFO2, *PPROJECTION_INFO2;
typedef struct _RAS_CONNECTION_EX {
    MPRAPI_OBJECT_HEADER Header;
    DWORD dwConnectDuration;
    ROUTER_INTERFACE_TYPE dwInterfaceType;
    DWORD dwConnectionFlags;
    WCHAR wszInterfaceName[MAX_INTERFACE_NAME_LEN + 1];
    WCHAR wszUserName[UNLEN + 1];
    WCHAR wszLogonDomain[DNLEN + 1];
    WCHAR wszRemoteComputer[NETBIOS_NAME_LEN + 1];
    GUID guid;
    RAS_QUARANTINE_STATE rasQuarState;
    FILETIME probationTime;
    DWORD dwBytesXmited;
    DWORD dwBytesRcved;
    DWORD dwFramesXmited;
    DWORD dwFramesRcved;
    DWORD dwCrcErr;
    DWORD dwTimeoutErr;
    DWORD dwAlignmentErr;
    DWORD dwHardwareOverrunErr;
    DWORD dwFramingErr;
    DWORD dwBufferOverrunErr;
    DWORD dwCompressionRatioIn;
    DWORD dwCompressionRatioOut;
    DWORD dwNumSwitchOvers;
    WCHAR wszRemoteEndpointAddress[MAXIPADRESSLEN+1];
    WCHAR wszLocalEndpointAddress[MAXIPADRESSLEN+1];
    PROJECTION_INFO ProjectionInfo;
    HANDLE hConnection;
    HANDLE hInterface;
}RAS_CONNECTION_EX, *PRAS_CONNECTION_EX;
typedef struct _RAS_CONNECTION_4 {
    DWORD dwConnectDuration;
    ROUTER_INTERFACE_TYPE dwInterfaceType;
    DWORD dwConnectionFlags;
    WCHAR wszInterfaceName[MAX_INTERFACE_NAME_LEN + 1];
    WCHAR wszUserName[UNLEN + 1];
    WCHAR wszLogonDomain[DNLEN + 1];
    WCHAR wszRemoteComputer[NETBIOS_NAME_LEN + 1];
    GUID guid;
    RAS_QUARANTINE_STATE rasQuarState;
    FILETIME probationTime;
    FILETIME connectionStartTime;
    ULONGLONG ullBytesXmited;
    ULONGLONG ullBytesRcved;
    DWORD dwFramesXmited;
    DWORD dwFramesRcved;
    DWORD dwCrcErr;
    DWORD dwTimeoutErr;
    DWORD dwAlignmentErr;
    DWORD dwHardwareOverrunErr;
    DWORD dwFramingErr;
    DWORD dwBufferOverrunErr;
    DWORD dwCompressionRatioIn;
    DWORD dwCompressionRatioOut;
    DWORD dwNumSwitchOvers;
    WCHAR wszRemoteEndpointAddress[MAXIPADRESSLEN+1];
    WCHAR wszLocalEndpointAddress[MAXIPADRESSLEN+1];
    PROJECTION_INFO2 ProjectionInfo;
    HANDLE hConnection;
    HANDLE hInterface;
    DWORD dwDeviceType;
}RAS_CONNECTION_4, *PRAS_CONNECTION_4;
typedef struct _ROUTER_CUSTOM_IKEv2_POLICY0
{
    DWORD dwIntegrityMethod;
   DWORD dwEncryptionMethod;
    DWORD dwCipherTransformConstant;
    DWORD dwAuthTransformConstant;
    DWORD dwPfsGroup;
    DWORD dwDhGroup;
}ROUTER_CUSTOM_IKEv2_POLICY0, *PROUTER_CUSTOM_IKEv2_POLICY0, ROUTER_CUSTOM_L2TP_POLICY0, *PROUTER_CUSTOM_L2TP_POLICY0;
typedef struct _ROUTER_IKEv2_IF_CUSTOM_CONFIG0
{
    DWORD dwSaLifeTime;
    DWORD dwSaDataSize;
   CERT_NAME_BLOB certificateName;
    ROUTER_CUSTOM_IKEv2_POLICY0* customPolicy;
}ROUTER_IKEv2_IF_CUSTOM_CONFIG0, *PROUTER_IKEv2_IF_CUSTOM_CONFIG0;
typedef struct _MPR_IF_CUSTOMINFOEX0 {
    MPRAPI_OBJECT_HEADER Header;
    DWORD dwFlags;
    ROUTER_IKEv2_IF_CUSTOM_CONFIG0 customIkev2Config;
}MPR_IF_CUSTOMINFOEX0, *PMPR_IF_CUSTOMINFOEX0;
typedef struct _MPR_CERT_EKU
{
    DWORD dwSize;
    BOOL IsEKUOID;
    WCHAR *pwszEKU;
}MPR_CERT_EKU,*PMPR_CERT_EKU;
typedef struct _VPN_TS_IP_ADDRESS
{
    USHORT Type;
    union
    {
        IN_ADDR v4;
        IN6_ADDR v6;
    };
}VPN_TS_IP_ADDRESS, *PVPN_TS_IP_ADDRESS;
typedef enum _MPR_VPN_TS_TYPE
{
    MPR_VPN_TS_IPv4_ADDR_RANGE = 7,
    MPR_VPN_TS_IPv6_ADDR_RANGE = 8
}MPR_VPN_TS_TYPE;
typedef struct _MPR_VPN_SELECTOR
{
    MPR_VPN_TS_TYPE type;
    UINT8 protocolId;
    UINT16 portStart;
    UINT16 portEnd;
    UINT16 tsPayloadId;
    VPN_TS_IP_ADDRESS addrStart;
    VPN_TS_IP_ADDRESS addrEnd;
}MPR_VPN_TRAFFIC_SELECTOR, *PMPR_VPN_TRAFFIC_SELECTOR;
typedef struct _MPR_VPN_TRAFFIC_SELECTORS
{
    DWORD numTsi;
    DWORD numTsr;
    PMPR_VPN_TRAFFIC_SELECTOR tsI;
    PMPR_VPN_TRAFFIC_SELECTOR tsR;
}MPR_VPN_TRAFFIC_SELECTORS, *PMPR_VPN_TRAFFIC_SELECTORS;
typedef struct _ROUTER_IKEv2_IF_CUSTOM_CONFIG2
{
    DWORD dwSaLifeTime;
    DWORD dwSaDataSize;
   CERT_NAME_BLOB certificateName;
    ROUTER_CUSTOM_IKEv2_POLICY0* customPolicy;
    CRYPT_HASH_BLOB certificateHash;
    DWORD dwMmSaLifeTime;
    MPR_VPN_TRAFFIC_SELECTORS vpnTrafficSelectors;
}ROUTER_IKEv2_IF_CUSTOM_CONFIG2, *PROUTER_IKEv2_IF_CUSTOM_CONFIG2;
typedef struct _MPR_IF_CUSTOMINFOEX2 {
    MPRAPI_OBJECT_HEADER Header;
    DWORD dwFlags;
    ROUTER_IKEv2_IF_CUSTOM_CONFIG2 customIkev2Config;
}MPR_IF_CUSTOMINFOEX2, *PMPR_IF_CUSTOMINFOEX2;
typedef struct _IKEV2_TUNNEL_CONFIG_PARAMS4 {
    DWORD dwIdleTimeout;
    DWORD dwNetworkBlackoutTime;
    DWORD dwSaLifeTime;
    DWORD dwSaDataSizeForRenegotiation;
    DWORD dwConfigOptions;
    DWORD dwTotalCertificates;
    CERT_NAME_BLOB* certificateNames;
    CERT_NAME_BLOB machineCertificateName;
    DWORD dwEncryptionType;
    PROUTER_CUSTOM_IKEv2_POLICY0 customPolicy;
    DWORD dwTotalEkus;
    PMPR_CERT_EKU certificateEKUs;
    CRYPT_HASH_BLOB machineCertificateHash;
    DWORD dwMmSaLifeTime;
}IKEV2_TUNNEL_CONFIG_PARAMS4, *PIKEV2_TUNNEL_CONFIG_PARAMS4;
typedef struct _ROUTER_IKEv2_IF_CUSTOM_CONFIG1
{
    DWORD dwSaLifeTime;
    DWORD dwSaDataSize;
   CERT_NAME_BLOB certificateName;
    ROUTER_CUSTOM_IKEv2_POLICY0* customPolicy;
    CRYPT_HASH_BLOB certificateHash;
}ROUTER_IKEv2_IF_CUSTOM_CONFIG1, *PROUTER_IKEv2_IF_CUSTOM_CONFIG1;
typedef struct _MPR_IF_CUSTOMINFOEX1 {
    MPRAPI_OBJECT_HEADER Header;
    DWORD dwFlags;
    ROUTER_IKEv2_IF_CUSTOM_CONFIG1 customIkev2Config;
}MPR_IF_CUSTOMINFOEX1, *PMPR_IF_CUSTOMINFOEX1;
typedef struct _IKEV2_TUNNEL_CONFIG_PARAMS3 {
    DWORD dwIdleTimeout;
    DWORD dwNetworkBlackoutTime;
    DWORD dwSaLifeTime;
    DWORD dwSaDataSizeForRenegotiation;
    DWORD dwConfigOptions;
    DWORD dwTotalCertificates;
    CERT_NAME_BLOB* certificateNames;
    CERT_NAME_BLOB machineCertificateName;
    DWORD dwEncryptionType;
    PROUTER_CUSTOM_IKEv2_POLICY0 customPolicy;
    DWORD dwTotalEkus;
    PMPR_CERT_EKU certificateEKUs;
    CRYPT_HASH_BLOB machineCertificateHash;
}IKEV2_TUNNEL_CONFIG_PARAMS3, *PIKEV2_TUNNEL_CONFIG_PARAMS3;
typedef struct _IKEV2_TUNNEL_CONFIG_PARAMS2 {
    DWORD dwIdleTimeout;
    DWORD dwNetworkBlackoutTime;
    DWORD dwSaLifeTime;
    DWORD dwSaDataSizeForRenegotiation;
    DWORD dwConfigOptions;
    DWORD dwTotalCertificates;
    CERT_NAME_BLOB* certificateNames;
    CERT_NAME_BLOB machineCertificateName;
    DWORD dwEncryptionType;
    PROUTER_CUSTOM_IKEv2_POLICY0 customPolicy;
}IKEV2_TUNNEL_CONFIG_PARAMS2, *PIKEV2_TUNNEL_CONFIG_PARAMS2;
typedef struct _L2TP_TUNNEL_CONFIG_PARAMS2 {
    DWORD dwIdleTimeout;
    DWORD dwEncryptionType;
    DWORD dwSaLifeTime;
    DWORD dwSaDataSizeForRenegotiation;
    PROUTER_CUSTOM_L2TP_POLICY0 customPolicy;
    DWORD dwMmSaLifeTime;
}L2TP_TUNNEL_CONFIG_PARAMS2, *PL2TP_TUNNEL_CONFIG_PARAMS2;
typedef struct _L2TP_TUNNEL_CONFIG_PARAMS1 {
    DWORD dwIdleTimeout;
    DWORD dwEncryptionType;
    DWORD dwSaLifeTime;
    DWORD dwSaDataSizeForRenegotiation;
    PROUTER_CUSTOM_L2TP_POLICY0 customPolicy;
}L2TP_TUNNEL_CONFIG_PARAMS1, *PL2TP_TUNNEL_CONFIG_PARAMS1;
typedef struct _IKEV2_CONFIG_PARAMS {
    DWORD dwNumPorts;
    DWORD dwPortFlags;
    DWORD dwTunnelConfigParamFlags;
    IKEV2_TUNNEL_CONFIG_PARAMS TunnelConfigParams;
}IKEV2_CONFIG_PARAMS, *PIKEV2_CONFIG_PARAMS;
typedef struct _PPTP_CONFIG_PARAMS {
    DWORD dwNumPorts;
    DWORD dwPortFlags;
}PPTP_CONFIG_PARAMS, *PPPTP_CONFIG_PARAMS;
typedef struct _L2TP_CONFIG_PARAMS1 {
    DWORD dwNumPorts;
    DWORD dwPortFlags;
    DWORD dwTunnelConfigParamFlags;
    L2TP_TUNNEL_CONFIG_PARAMS TunnelConfigParams;
}L2TP_CONFIG_PARAMS1, *PL2TP_CONFIG_PARAMS1;
typedef struct _GRE_CONFIG_PARAMS0 {
    DWORD dwNumPorts;
    DWORD dwPortFlags;
}GRE_CONFIG_PARAMS0, *PGRE_CONFIG_PARAMS0;
typedef struct _L2TP_CONFIG_PARAMS0 {
    DWORD dwNumPorts;
    DWORD dwPortFlags;
}L2TP_CONFIG_PARAMS0, *PL2TP_CONFIG_PARAMS0;
typedef struct _SSTP_CERT_INFO
{
    BOOL isDefault;
    CRYPT_HASH_BLOB certBlob;
}SSTP_CERT_INFO, *PSSTP_CERT_INFO;
typedef struct _SSTP_CONFIG_PARAMS {
    DWORD dwNumPorts;
    DWORD dwPortFlags;
    BOOL isUseHttps;
    DWORD certAlgorithm;
    SSTP_CERT_INFO sstpCertDetails;
}SSTP_CONFIG_PARAMS, *PSSTP_CONFIG_PARAMS;
typedef struct _MPRAPI_TUNNEL_CONFIG_PARAMS0 {
    IKEV2_CONFIG_PARAMS IkeConfigParams;
    PPTP_CONFIG_PARAMS PptpConfigParams;
    L2TP_CONFIG_PARAMS L2tpConfigParams;
    SSTP_CONFIG_PARAMS SstpConfigParams;
}MPRAPI_TUNNEL_CONFIG_PARAMS0, *PMPRAPI_TUNNEL_CONFIG_PARAMS0;
typedef struct _MPRAPI_TUNNEL_CONFIG_PARAMS1 {
    IKEV2_CONFIG_PARAMS IkeConfigParams;
    PPTP_CONFIG_PARAMS PptpConfigParams;
    L2TP_CONFIG_PARAMS L2tpConfigParams;
    SSTP_CONFIG_PARAMS SstpConfigParams;
    GRE_CONFIG_PARAMS GREConfigParams;
}MPRAPI_TUNNEL_CONFIG_PARAMS1, *PMPRAPI_TUNNEL_CONFIG_PARAMS1;
typedef struct _MPR_SERVER_EX0 {
    MPRAPI_OBJECT_HEADER Header;
    DWORD fLanOnlyMode;
    DWORD dwUpTime;
    DWORD dwTotalPorts;
    DWORD dwPortsInUse;
    DWORD Reserved;
    MPRAPI_TUNNEL_CONFIG_PARAMS0 ConfigParams;
}MPR_SERVER_EX0, *PMPR_SERVER_EX0;
typedef struct _MPR_SERVER_EX1 {
    MPRAPI_OBJECT_HEADER Header;
    DWORD fLanOnlyMode;
    DWORD dwUpTime;
    DWORD dwTotalPorts;
    DWORD dwPortsInUse;
    DWORD Reserved;
    MPRAPI_TUNNEL_CONFIG_PARAMS1 ConfigParams;
}MPR_SERVER_EX1, *PMPR_SERVER_EX1;
typedef struct _MPR_SERVER_SET_CONFIG_EX0 {
    MPRAPI_OBJECT_HEADER Header;
    DWORD setConfigForProtocols;
    MPRAPI_TUNNEL_CONFIG_PARAMS0 ConfigParams;
}MPR_SERVER_SET_CONFIG_EX0, *PMPR_SERVER_SET_CONFIG_EX0;
typedef struct _MPR_SERVER_SET_CONFIG_EX1 {
    MPRAPI_OBJECT_HEADER Header;
    DWORD setConfigForProtocols;
    MPRAPI_TUNNEL_CONFIG_PARAMS1 ConfigParams;
}MPR_SERVER_SET_CONFIG_EX1, *PMPR_SERVER_SET_CONFIG_EX1;
typedef struct _AUTH_VALIDATION_EX {
    MPRAPI_OBJECT_HEADER Header;
    HANDLE hRasConnection;
    WCHAR wszUserName[UNLEN + 1 ];
    WCHAR wszLogonDomain[DNLEN + 1 ];
    DWORD AuthInfoSize;
    BYTE AuthInfo[1];
} AUTH_VALIDATION_EX;
typedef struct RAS_UPDATE_CONNECTION_
{
    MPRAPI_OBJECT_HEADER Header;
    DWORD dwIfIndex;
    WCHAR wszLocalEndpointAddress[MAXIPADRESSLEN+1];
    WCHAR wszRemoteEndpointAddress[MAXIPADRESSLEN+1];
}
RAS_UPDATE_CONNECTION,*PRAS_UPDATE_CONNECTION;
DWORD APIENTRY
MprAdminConnectionEnumEx(
     _In_ RAS_SERVER_HANDLE hRasServer,
     _In_ PMPRAPI_OBJECT_HEADER pObjectHeader,
     _In_ DWORD dwPreferedMaxLen,
     _Out_ LPDWORD lpdwEntriesRead,
     _Out_ LPDWORD lpdwTotalEntries,
     _Out_ PRAS_CONNECTION_EX *ppRasConn,
     _In_ LPDWORD lpdwResumeHandle);
DWORD APIENTRY MprAdminConnectionGetInfoEx(
   _In_ RAS_SERVER_HANDLE hRasServer,
   _In_ HANDLE hRasConnection,
   _Out_ PRAS_CONNECTION_EX pRasConnection
);
DWORD APIENTRY MprAdminServerGetInfoEx(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _Out_ MPR_SERVER_EX* pServerInfo);
DWORD APIENTRY MprAdminServerSetInfoEx(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ MPR_SERVER_SET_CONFIG_EX* pServerInfo);
DWORD APIENTRY MprConfigServerGetInfoEx(
    _In_ HANDLE hMprConfig,
    _Out_ MPR_SERVER_EX* pServerInfo);
DWORD APIENTRY MprConfigServerSetInfoEx(
    _In_ HANDLE hMprConfig,
    _In_ MPR_SERVER_SET_CONFIG_EX* pSetServerConfig);
DWORD APIENTRY MprAdminUpdateConnection(
    _In_ RAS_SERVER_HANDLE hRasServer,
    _In_ HANDLE hRasConnection,
    _In_ PRAS_UPDATE_CONNECTION pRasUpdateConnection);
typedef DWORD (APIENTRY * PMPRADMINGETIPADDRESSFORUSER)(WCHAR *, WCHAR *, DWORD *, BOOL *);
typedef VOID (APIENTRY * PMPRADMINRELEASEIPADRESS)(WCHAR *, WCHAR *, DWORD *);
typedef DWORD (APIENTRY * PMPRADMINGETIPV6ADDRESSFORUSER)(WCHAR *, WCHAR *, IN6_ADDR *, BOOL *);
typedef VOID (APIENTRY * PMPRADMINRELEASEIPV6ADDRESSFORUSER)(WCHAR *, WCHAR *, IN6_ADDR *);
typedef BOOL (APIENTRY * PMPRADMINACCEPTNEWCONNECTION)(RAS_CONNECTION_0 *, RAS_CONNECTION_1 *);
typedef BOOL (APIENTRY * PMPRADMINACCEPTNEWCONNECTION2)(RAS_CONNECTION_0 *, RAS_CONNECTION_1 *, RAS_CONNECTION_2 *);
typedef BOOL (APIENTRY * PMPRADMINACCEPTNEWCONNECTION3)(RAS_CONNECTION_0 *, RAS_CONNECTION_1 *, RAS_CONNECTION_2 *, RAS_CONNECTION_3 *);
typedef BOOL (APIENTRY * PMPRADMINACCEPTNEWLINK)(RAS_PORT_0 *, RAS_PORT_1 *);
typedef VOID (APIENTRY * PMPRADMINCONNECTIONHANGUPNOTIFICATION)(RAS_CONNECTION_0 *, RAS_CONNECTION_1 *);
typedef VOID (APIENTRY * PMPRADMINCONNECTIONHANGUPNOTIFICATION2)(RAS_CONNECTION_0 *, RAS_CONNECTION_1 *, RAS_CONNECTION_2 *);
typedef VOID (APIENTRY * PMPRADMINCONNECTIONHANGUPNOTIFICATION3)(RAS_CONNECTION_0 *, RAS_CONNECTION_1 *, RAS_CONNECTION_2 *, RAS_CONNECTION_3);
typedef VOID (APIENTRY * PMPRADMINLINKHANGUPNOTIFICATION)(RAS_PORT_0 *, RAS_PORT_1 *);
typedef DWORD (APIENTRY * PMPRADMINTERMINATEDLL)();
typedef BOOL (APIENTRY * PMPRADMINACCEPTREAUTHENTICATION)(RAS_CONNECTION_0 *, RAS_CONNECTION_1 *, RAS_CONNECTION_2 *, RAS_CONNECTION_3 *);
typedef BOOL (APIENTRY *PMPRADMINACCEPTNEWCONNECTIONEX)(RAS_CONNECTION_EX*);
typedef BOOL (APIENTRY *PMPRADMINACCEPTREAUTHENTICATIONEX)(RAS_CONNECTION_EX*);
typedef BOOL (APIENTRY *PMPRADMINACCEPTTUNNELENDPOINTCHANGEEX)(RAS_CONNECTION_EX*);
typedef VOID (APIENTRY *PMPRADMINCONNECTIONHANGUPNOTIFICATIONEX)(RAS_CONNECTION_EX*);
typedef DWORD (APIENTRY *PMPRADMINRASVALIDATEPREAUTHENTICATEDCONNECTIONEX) (AUTH_VALIDATION_EX *);
typedef struct _MPRAPI_ADMIN_DLL_CALLBACKS
{
    UCHAR revision;
    PMPRADMINGETIPADDRESSFORUSER lpfnMprAdminGetIpAddressForUser;
    PMPRADMINRELEASEIPADRESS lpfnMprAdminReleaseIpAddress;
    PMPRADMINGETIPV6ADDRESSFORUSER lpfnMprAdminGetIpv6AddressForUser;
    PMPRADMINRELEASEIPV6ADDRESSFORUSER lpfnMprAdminReleaseIpV6AddressForUser;
    PMPRADMINACCEPTNEWLINK lpfnRasAdminAcceptNewLink;
    PMPRADMINLINKHANGUPNOTIFICATION lpfnRasAdminLinkHangupNotification;
    PMPRADMINTERMINATEDLL lpfnRasAdminTerminateDll;
    PMPRADMINACCEPTNEWCONNECTIONEX lpfnRasAdminAcceptNewConnectionEx;
    PMPRADMINACCEPTTUNNELENDPOINTCHANGEEX lpfnRasAdminAcceptEndpointChangeEx;
    PMPRADMINACCEPTREAUTHENTICATIONEX lpfnRasAdminAcceptReauthenticationEx;
    PMPRADMINCONNECTIONHANGUPNOTIFICATIONEX lpfnRasAdminConnectionHangupNotificationEx;
    PMPRADMINRASVALIDATEPREAUTHENTICATEDCONNECTIONEX lpfnRASValidatePreAuthenticatedConnectionEx;
} MPRAPI_ADMIN_DLL_CALLBACKS, *PMPRAPI_ADMIN_DLL_CALLBACKS;
BOOL APIENTRY MprAdminAcceptNewConnectionEx(
    RAS_CONNECTION_EX* pRasConn
);
BOOL APIENTRY MprAdminAcceptReauthenticationEx(
    RAS_CONNECTION_EX* pRasConn
);
void APIENTRY MprAdminConnectionHangupNotificationEx(
    RAS_CONNECTION_EX* pRasConn
);
DWORD APIENTRY MprAdminInitializeDllEx(
    PMPRAPI_ADMIN_DLL_CALLBACKS pAdminCallbacks
);
DWORD APIENTRY MprAdminIsServiceInitialized(
    _In_ LPWSTR lpwsServerName,
    _In_ BOOL *fIsServiceInitialized
);
DWORD APIENTRY
MprAdminInterfaceSetCustomInfoEx(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface,
    _In_ PMPR_IF_CUSTOMINFOEX pCustomInfo
);
DWORD APIENTRY
MprAdminInterfaceGetCustomInfoEx(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface,
    _Out_ PMPR_IF_CUSTOMINFOEX pCustomInfo
);
DWORD APIENTRY
MprConfigInterfaceGetCustomInfoEx(
    _In_ HANDLE hMprConfig,
    _In_ HANDLE hRouterInterface,
    _Out_ PMPR_IF_CUSTOMINFOEX pCustomInfo
);
DWORD APIENTRY
MprConfigInterfaceSetCustomInfoEx(
    _In_ HANDLE hMprConfig,
    _In_ HANDLE hRouterInterface,
    _In_ PMPR_IF_CUSTOMINFOEX pCustomInfo
);
DWORD APIENTRY
MprAdminConnectionEnum(
    _In_ RAS_SERVER_HANDLE hRasServer,
    _In_ DWORD dwLevel,
    _Outptr_result_bytebuffer_((*lpdwEntriesRead)*(dwLevel==0?
    sizeof(RAS_CONNECTION_0):(dwLevel==1?
    sizeof(RAS_CONNECTION_1):(dwLevel==2?
    sizeof(RAS_CONNECTION_2):sizeof(RAS_CONNECTION_3))))) LPBYTE * lplpbBuffer,
    _In_ DWORD dwPrefMaxLen,
    _Out_ LPDWORD lpdwEntriesRead,
    _Out_ LPDWORD lpdwTotalEntries,
    _In_opt_ LPDWORD lpdwResumeHandle
);
DWORD APIENTRY
MprAdminPortEnum(
    _In_ RAS_SERVER_HANDLE hRasServer,
    _In_ DWORD dwLevel,
    _In_ HANDLE hRasConnection,
    _Outptr_result_bytebuffer_((*lpdwEntriesRead)*sizeof(RAS_PORT_0)) LPBYTE * lplpbBuffer,
    _In_ DWORD dwPrefMaxLen,
    _Out_ LPDWORD lpdwEntriesRead,
    _Out_ LPDWORD lpdwTotalEntries,
    _In_opt_ LPDWORD lpdwResumeHandle
);
DWORD APIENTRY
MprAdminConnectionGetInfo(
    _In_ RAS_SERVER_HANDLE hRasServer,
    _In_ DWORD dwLevel,
    _In_ HANDLE hRasConnection,
    _Out_ LPBYTE * lplpbBuffer
);
DWORD APIENTRY
MprAdminPortGetInfo(
    _In_ RAS_SERVER_HANDLE hRasServer,
    _In_ DWORD dwLevel,
    _In_ HANDLE hPort,
    _Out_ LPBYTE * lplpbBuffer
);
DWORD APIENTRY
MprAdminConnectionClearStats(
    _In_ RAS_SERVER_HANDLE hRasServer,
    _In_ HANDLE hRasConnection
);
DWORD APIENTRY
MprAdminPortClearStats(
    _In_ RAS_SERVER_HANDLE hRasServer,
    _In_ HANDLE hPort
);
DWORD APIENTRY
MprAdminPortReset(
    _In_ RAS_SERVER_HANDLE hRasServer,
    _In_ HANDLE hPort
);
DWORD APIENTRY
MprAdminPortDisconnect(
    _In_ RAS_SERVER_HANDLE hRasServer,
    _In_ HANDLE hPort
);
BOOL APIENTRY
MprAdminAcceptNewConnection(
    _In_ RAS_CONNECTION_0 * pRasConnection0,
    _In_ RAS_CONNECTION_1 * pRasConnection1
    );
BOOL APIENTRY
MprAdminAcceptNewConnection2(
    _In_ RAS_CONNECTION_0 * pRasConnection0,
    _In_ RAS_CONNECTION_1 * pRasConnection1,
    _In_ RAS_CONNECTION_2 * pRasConnection2
    );
BOOL APIENTRY
MprAdminAcceptNewConnection3(
    _In_ RAS_CONNECTION_0 * pRasConnection0,
    _In_ RAS_CONNECTION_1 * pRasConnection1,
    _In_ RAS_CONNECTION_2 * pRasConnection2,
    _In_ RAS_CONNECTION_3 * pRasConnection3
    );
BOOL APIENTRY
MprAdminAcceptReauthentication(
    _In_ RAS_CONNECTION_0 * pRasConnection0,
    _In_ RAS_CONNECTION_1 * pRasConnection1,
    _In_ RAS_CONNECTION_2 * pRasConnection2,
    _In_ RAS_CONNECTION_3 * pRasConnection3
    );
BOOL APIENTRY
MprAdminAcceptNewLink (
    _In_ RAS_PORT_0 * pRasPort0,
    _In_ RAS_PORT_1 * pRasPort1
    );
VOID APIENTRY
MprAdminConnectionHangupNotification(
    _In_ RAS_CONNECTION_0 * pRasConnection0,
    _In_ RAS_CONNECTION_1 * pRasConnection1
    );
VOID APIENTRY
MprAdminConnectionHangupNotification2(
    _In_ RAS_CONNECTION_0 * pRasConnection0,
    _In_ RAS_CONNECTION_1 * pRasConnection1,
    _In_ RAS_CONNECTION_2 * pRasConnection2
    );
VOID APIENTRY
MprAdminConnectionHangupNotification3(
    _In_ RAS_CONNECTION_0 * pRasConnection0,
    _In_ RAS_CONNECTION_1 * pRasConnection1,
    _In_ RAS_CONNECTION_2 * pRasConnection2,
    _In_ RAS_CONNECTION_3 * pRasConnection3
    );
DWORD APIENTRY
MprAdminConnectionRemoveQuarantine(
    _In_ HANDLE hRasServer,
    _In_ HANDLE hRasConnection,
    _In_ BOOL fIsIpAddress
    );
VOID APIENTRY
MprAdminLinkHangupNotification (
    _In_ RAS_PORT_0 * pRasPort0,
    _In_ RAS_PORT_1 * pRasPort1
    );
DWORD APIENTRY
MprAdminGetIpAddressForUser (
    _In_ WCHAR * lpwszUserName,
    _In_ WCHAR * lpwszPortName,
    _Inout_ DWORD * lpdwIpAddress,
    _Out_ BOOL * bNotifyRelease
    );
VOID APIENTRY
MprAdminReleaseIpAddress (
    _In_ WCHAR * lpszUserName,
    _In_ WCHAR * lpszPortName,
    _In_ DWORD * lpdwIpAddress
    );
DWORD APIENTRY
MprAdminGetIpv6AddressForUser (
    _In_ WCHAR * lpwszUserName,
    _In_ WCHAR * lpwszPortName,
    _Inout_ IN6_ADDR * lpdwIpv6Address,
    _Out_ BOOL * bNotifyRelease
    );
VOID MprAdminReleaseIpv6AddressForUser (
    _In_ WCHAR * lpszUserName,
    _In_ WCHAR * lpszPortName,
    _In_ IN6_ADDR * lpdwIpv6Address
    );
DWORD APIENTRY
MprAdminInitializeDll(
    VOID
);
DWORD APIENTRY
MprAdminTerminateDll(
    VOID
);
DWORD APIENTRY
MprAdminUserGetInfo(
    _In_ LPCWSTR lpszServer,
    _In_ LPCWSTR lpszUser,
    _In_ DWORD dwLevel,
    _Out_writes_bytes_(dwLevel==1?sizeof(RAS_USER_1):sizeof(RAS_USER_0)) LPBYTE lpbBuffer
);
DWORD APIENTRY
MprAdminUserSetInfo(
    _In_ LPCWSTR lpszServer,
    _In_ LPCWSTR lpszUser,
    _In_ DWORD dwLevel,
    _In_reads_bytes_(dwLevel==1?sizeof(RAS_USER_1):sizeof(RAS_USER_0)) const LPBYTE lpbBuffer
);
DWORD APIENTRY
MprAdminSendUserMessage(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hConnection,
    _In_ LPWSTR lpwszMessage
);
DWORD APIENTRY
MprAdminGetPDCServer(
    _In_ LPCWSTR lpszDomain,
    _In_ LPCWSTR lpszServer,
    _Out_writes_(UNCLEN+1) LPWSTR lpszPDCServer
);
BOOL APIENTRY
MprAdminIsServiceRunning(
    _In_ LPWSTR lpwsServerName
);
DWORD APIENTRY
MprAdminServerConnect(
    _In_opt_ LPWSTR lpwsServerName,
    _Out_ MPR_SERVER_HANDLE * phMprServer
);
VOID APIENTRY
MprAdminServerDisconnect(
    _In_ MPR_SERVER_HANDLE hMprServer
);
DWORD APIENTRY
MprAdminServerGetCredentials(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ DWORD dwLevel,
    _In_ LPBYTE * lplpbBuffer
);
DWORD APIENTRY
MprAdminServerSetCredentials(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ DWORD dwLevel,
    _In_ LPBYTE lpbBuffer
);
DWORD APIENTRY
MprAdminBufferFree(
    _In_ LPVOID pBuffer
);
DWORD APIENTRY
MprAdminGetErrorString(
    _In_ DWORD dwError,
    _Out_ LPWSTR * lplpwsErrorString
);
DWORD APIENTRY
MprAdminServerGetInfo(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ DWORD dwLevel,
    _Out_ LPBYTE * lplpbBuffer
);
DWORD APIENTRY
MprAdminServerSetInfo(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ DWORD dwLevel,
    _In_reads_bytes_(dwLevel==1?sizeof(MPR_SERVER_1):sizeof(MPR_SERVER_2)) LPBYTE lpbBuffer
);
DWORD APIENTRY
MprAdminEstablishDomainRasServer (
    _In_ LPWSTR pszDomain,
    _In_ LPWSTR pszMachine,
    _In_ BOOL bEnable
);
DWORD APIENTRY
MprAdminIsDomainRasServer (
    _In_ LPWSTR pszDomain,
    _In_ LPWSTR pszMachine,
    _Out_ PBOOL pbIsRasServer
);
DWORD APIENTRY
MprAdminTransportCreate(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ DWORD dwTransportId,
    _In_opt_ LPWSTR lpwsTransportName,
    _In_ LPBYTE pGlobalInfo,
    _In_ DWORD dwGlobalInfoSize,
    _In_opt_ LPBYTE pClientInterfaceInfo,
    _In_opt_ DWORD dwClientInterfaceInfoSize,
    _In_ LPWSTR lpwsDLLPath
);
DWORD APIENTRY
MprAdminTransportSetInfo(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ DWORD dwTransportId,
    _In_opt_ LPBYTE pGlobalInfo,
    _In_ DWORD dwGlobalInfoSize,
    _In_opt_ LPBYTE pClientInterfaceInfo,
    _In_ DWORD dwClientInterfaceInfoSize
);
DWORD APIENTRY
MprAdminTransportGetInfo(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ DWORD dwTransportId,
    _Out_opt_ LPBYTE * ppGlobalInfo,
    _Out_opt_ LPDWORD lpdwGlobalInfoSize,
    _Out_opt_ LPBYTE * ppClientInterfaceInfo,
    _Out_opt_ LPDWORD lpdwClientInterfaceInfoSize
);
DWORD APIENTRY
MprAdminDeviceEnum(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ DWORD dwLevel,
    _Out_ LPBYTE* lplpbBuffer,
    _Out_ LPDWORD lpdwTotalEntries);
DWORD APIENTRY
MprAdminInterfaceGetHandle(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ LPWSTR lpwsInterfaceName,
    _Out_ HANDLE * phInterface,
    _In_ BOOL fIncludeClientInterfaces
);
DWORD APIENTRY
MprAdminInterfaceCreate(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ DWORD dwLevel,
    _In_ LPBYTE lpbBuffer,
    _Out_ HANDLE * phInterface
);
DWORD APIENTRY
MprAdminInterfaceGetInfo(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface,
    _In_ DWORD dwLevel,
    _In_ LPBYTE * lplpbBuffer
);
DWORD APIENTRY
MprAdminInterfaceSetInfo(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface,
    _In_ DWORD dwLevel,
    _In_ LPBYTE lpbBuffer
);
DWORD APIENTRY
MprAdminInterfaceDelete(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface
);
DWORD APIENTRY
MprAdminInterfaceDeviceGetInfo(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface,
    _In_ DWORD dwIndex,
    _In_ DWORD dwLevel,
    _Out_ LPBYTE* lplpBuffer
);
DWORD APIENTRY
MprAdminInterfaceDeviceSetInfo(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface,
    _In_ DWORD dwIndex,
    _In_ DWORD dwLevel,
    _In_reads_bytes_(dwLevel==1?sizeof(MPR_DEVICE_1):sizeof(MPR_DEVICE_0)) LPBYTE lpbBuffer
);
DWORD APIENTRY
MprAdminInterfaceTransportRemove(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface,
    _In_ DWORD dwTransportId
);
DWORD APIENTRY
MprAdminInterfaceTransportAdd(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface,
    _In_ DWORD dwTransportId,
    _In_ LPBYTE pInterfaceInfo,
    _In_ DWORD dwInterfaceInfoSize
);
DWORD APIENTRY
MprAdminInterfaceTransportGetInfo(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface,
    _In_ DWORD dwTransportId,
    _Out_ LPBYTE * ppInterfaceInfo,
    _Out_opt_ LPDWORD lpdwInterfaceInfoSize
);
DWORD APIENTRY
MprAdminInterfaceTransportSetInfo(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface,
    _In_ DWORD dwTransportId,
    _In_ LPBYTE pInterfaceInfo,
    _In_ DWORD dwInterfaceInfoSize
);
DWORD APIENTRY
MprAdminInterfaceEnum(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ DWORD dwLevel,
    _Outptr_result_bytebuffer_(dwLevel==1?(sizeof(MPR_INTERFACE_1) * (*lpdwEntriesRead)):(sizeof(MPR_INTERFACE_0) * (*lpdwEntriesRead))) LPBYTE * lplpbBuffer,
    _In_ DWORD dwPrefMaxLen,
    _Out_ LPDWORD lpdwEntriesRead,
    _Out_ LPDWORD lpdwTotalEntries,
    _In_opt_ LPDWORD lpdwResumeHandle
);
DWORD APIENTRY
MprSetupIpInIpInterfaceFriendlyNameEnum(
    _In_ PWCHAR pwszMachineName,
    _Out_ LPBYTE* lplpBuffer,
    _Out_ LPDWORD lpdwEntriesRead
    );
DWORD APIENTRY
MprSetupIpInIpInterfaceFriendlyNameFree(
    _In_ LPVOID lpBuffer
    );
DWORD APIENTRY
MprSetupIpInIpInterfaceFriendlyNameCreate(
    _In_ PWCHAR pwszMachineName,
    _In_ PMPR_IPINIP_INTERFACE_0 pNameInformation
    );
DWORD APIENTRY
MprSetupIpInIpInterfaceFriendlyNameDelete(
    _In_ PWCHAR pwszMachineName,
    _In_ GUID *pGuid
    );
DWORD APIENTRY
MprAdminInterfaceSetCredentials(
    _In_opt_ LPWSTR lpwsServer,
    _In_ LPWSTR lpwsInterfaceName,
    _In_opt_ LPWSTR lpwsUserName,
    _In_opt_ LPWSTR lpwsDomainName,
    _In_opt_ LPWSTR lpwsPassword
);
DWORD APIENTRY
MprAdminInterfaceGetCredentials(
    _In_opt_ LPWSTR lpwsServer,
    _In_ LPWSTR lpwsInterfaceName,
    _Out_writes_opt_(UNLEN+1) LPWSTR lpwsUserName,
    _Out_writes_opt_(PWLEN+1) LPWSTR lpwsPassword,
    _Out_writes_opt_(DNLEN+1) LPWSTR lpwsDomainName
);
DWORD APIENTRY
MprAdminInterfaceSetCredentialsEx(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface,
    _In_ DWORD dwLevel,
    _In_ LPBYTE lpbBuffer
);
DWORD APIENTRY
MprAdminInterfaceGetCredentialsEx(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface,
    _In_ DWORD dwLevel,
    _Out_ LPBYTE * lplpbBuffer
);
DWORD APIENTRY
MprAdminInterfaceConnect(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface,
    _In_ HANDLE hEvent,
    _In_ BOOL fSynchronous
);
DWORD APIENTRY
MprAdminInterfaceDisconnect(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface
);
DWORD APIENTRY
MprAdminInterfaceUpdateRoutes(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface,
    _In_ DWORD dwProtocolId,
    _In_ HANDLE hEvent
);
DWORD APIENTRY
MprAdminInterfaceQueryUpdateResult(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface,
    _In_ DWORD dwProtocolId,
    _Out_ LPDWORD lpdwUpdateResult
);
DWORD APIENTRY
MprAdminInterfaceUpdatePhonebookInfo(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hInterface
);
DWORD APIENTRY
MprAdminRegisterConnectionNotification(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hEventNotification
);
DWORD APIENTRY
MprAdminDeregisterConnectionNotification(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ HANDLE hEventNotification
);
DWORD APIENTRY
MprAdminMIBServerConnect(
    _In_opt_ LPWSTR lpwsServerName,
    _Out_ MIB_SERVER_HANDLE * phMibServer
);
VOID APIENTRY
MprAdminMIBServerDisconnect(
    _In_ MIB_SERVER_HANDLE hMibServer
);
DWORD APIENTRY
MprAdminMIBEntryCreate(
    _In_ MIB_SERVER_HANDLE hMibServer,
    _In_ DWORD dwPid,
    _In_ DWORD dwRoutingPid,
    _In_ LPVOID lpEntry,
    _In_ DWORD dwEntrySize
);
DWORD APIENTRY
MprAdminMIBEntryDelete(
    _In_ MIB_SERVER_HANDLE hMibServer,
    _In_ DWORD dwProtocolId,
    _In_ DWORD dwRoutingPid,
    _In_ LPVOID lpEntry,
    _In_ DWORD dwEntrySize
);
DWORD APIENTRY
MprAdminMIBEntrySet(
    _In_ MIB_SERVER_HANDLE hMibServer,
    _In_ DWORD dwProtocolId,
    _In_ DWORD dwRoutingPid,
    _In_ LPVOID lpEntry,
    _In_ DWORD dwEntrySize
);
DWORD APIENTRY
MprAdminMIBEntryGet(
    _In_ MIB_SERVER_HANDLE hMibServer,
    _In_ DWORD dwProtocolId,
    _In_ DWORD dwRoutingPid,
    _In_ LPVOID lpInEntry,
    _In_ DWORD dwInEntrySize,
    _Out_ LPVOID* lplpOutEntry,
    _Out_ LPDWORD lpOutEntrySize
);
DWORD APIENTRY
MprAdminMIBEntryGetFirst(
    _In_ MIB_SERVER_HANDLE hMibServer,
    _In_ DWORD dwProtocolId,
    _In_ DWORD dwRoutingPid,
    _In_ LPVOID lpInEntry,
    _In_ DWORD dwInEntrySize,
    _Out_ LPVOID* lplpOutEntry,
    _Out_ LPDWORD lpOutEntrySize
);
DWORD APIENTRY
MprAdminMIBEntryGetNext(
    _In_ MIB_SERVER_HANDLE hMibServer,
    _In_ DWORD dwProtocolId,
    _In_ DWORD dwRoutingPid,
    _In_ LPVOID lpInEntry,
    _In_ DWORD dwInEntrySize,
    _Out_ LPVOID* lplpOutEntry,
    _Out_ LPDWORD lpOutEntrySize
);
DWORD APIENTRY
MprAdminMIBGetTrapInfo(
    _In_ MIB_SERVER_HANDLE hMibServer,
    _In_ DWORD dwProtocolId,
    _In_ DWORD dwRoutingPid,
    _In_ LPVOID lpInData,
    _In_ DWORD dwInDataSize,
    _Out_ LPVOID* lplpOutData,
    _Inout_ LPDWORD lpOutDataSize
);
DWORD APIENTRY
MprAdminMIBSetTrapInfo(
    _In_ DWORD dwProtocolId,
    _In_ DWORD dwRoutingPid,
    _In_ HANDLE hEvent,
    _In_ LPVOID lpInData,
    _In_ DWORD dwInDataSize,
    _Out_ LPVOID* lplpOutData,
    _Inout_ LPDWORD lpOutDataSize
);
DWORD APIENTRY
MprAdminMIBBufferFree(
    _In_ LPVOID pBuffer
);
DWORD APIENTRY
MprConfigServerInstall(
    _In_ DWORD dwLevel,
    _In_ PVOID pBuffer
);
DWORD APIENTRY
MprConfigServerConnect(
    _In_opt_ LPWSTR lpwsServerName,
    _Out_ HANDLE* phMprConfig
);
VOID APIENTRY
MprConfigServerDisconnect(
    _In_ HANDLE hMprConfig
);
DWORD APIENTRY
MprConfigServerRefresh(
    _In_ HANDLE hMprConfig
    );
DWORD APIENTRY
MprConfigBufferFree(
    _In_ LPVOID pBuffer
);
DWORD APIENTRY
MprConfigServerGetInfo(
    _In_ HANDLE hMprConfig,
    _In_ DWORD dwLevel,
    _Out_ LPBYTE * lplpbBuffer
);
DWORD APIENTRY
MprConfigServerSetInfo(
    _In_ MPR_SERVER_HANDLE hMprServer,
    _In_ DWORD dwLevel,
    _In_reads_bytes_(dwLevel==1?sizeof(MPR_SERVER_1):sizeof(MPR_SERVER_2)) LPBYTE lpbBuffer
);
DWORD APIENTRY
MprConfigServerBackup(
    _In_ HANDLE hMprConfig,
    _In_ LPWSTR lpwsPath
);
DWORD APIENTRY
MprConfigServerRestore(
    _In_ HANDLE hMprConfig,
    _In_ IN LPWSTR lpwsPath
);
DWORD APIENTRY
MprConfigTransportCreate(
    _In_ HANDLE hMprConfig,
    _In_ DWORD dwTransportId,
    _In_opt_ LPWSTR lpwsTransportName,
    _In_reads_bytes_(dwGlobalInfoSize) LPBYTE pGlobalInfo,
    _In_ DWORD dwGlobalInfoSize,
    _In_reads_bytes_opt_(dwClientInterfaceInfoSize) LPBYTE pClientInterfaceInfo,
    _In_opt_ DWORD dwClientInterfaceInfoSize,
    _In_opt_ LPWSTR lpwsDLLPath,
    _Out_ HANDLE* phRouterTransport
);
DWORD APIENTRY
MprConfigTransportDelete(
    _In_ HANDLE hMprConfig,
    _In_ HANDLE hRouterTransport
);
DWORD APIENTRY
MprConfigTransportGetHandle(
    _In_ HANDLE hMprConfig,
    _In_ DWORD dwTransportId,
    _Out_ HANDLE* phRouterTransport
);
DWORD APIENTRY
MprConfigTransportSetInfo(
    _In_ HANDLE hMprConfig,
    _In_ HANDLE hRouterTransport,
    _In_reads_bytes_opt_(dwGlobalInfoSize) LPBYTE pGlobalInfo,
    _In_opt_ DWORD dwGlobalInfoSize,
    _In_reads_bytes_opt_(dwClientInterfaceInfoSize) LPBYTE pClientInterfaceInfo,
    _In_opt_ DWORD dwClientInterfaceInfoSize,
    _In_opt_ LPWSTR lpwsDLLPath
);
DWORD APIENTRY
MprConfigTransportGetInfo(
    _In_ HANDLE hMprConfig,
    _In_ HANDLE hRouterTransport,
    _Inout_opt_ LPBYTE* ppGlobalInfo,
    _Out_opt_ LPDWORD lpdwGlobalInfoSize,
    _Inout_opt_ LPBYTE* ppClientInterfaceInfo,
    _Out_opt_ LPDWORD lpdwClientInterfaceInfoSize,
    _Outptr_opt_ _Inout_ LPWSTR* lplpwsDLLPath
);
DWORD APIENTRY
MprConfigTransportEnum(
    _In_ HANDLE hMprConfig,
    _In_ DWORD dwLevel,
    _Outptr_result_bytebuffer_maybenull_((*lpdwEntriesRead)*sizeof(MPR_TRANSPORT_0)) LPBYTE* lplpBuffer,
    _In_ DWORD dwPrefMaxLen,
    _Out_ LPDWORD lpdwEntriesRead,
    _Out_ LPDWORD lpdwTotalEntries,
    _Inout_opt_ LPDWORD lpdwResumeHandle
);
DWORD APIENTRY
MprConfigInterfaceCreate(
    _In_ HANDLE hMprConfig,
    _In_ DWORD dwLevel,
    _In_reads_bytes_(dwLevel==1?sizeof(MPR_INTERFACE_1):sizeof(MPR_INTERFACE_0)) LPBYTE lpbBuffer,
    _Out_ HANDLE* phRouterInterface
);
DWORD APIENTRY
MprConfigInterfaceDelete(
    _In_ HANDLE hMprConfig,
    _In_ HANDLE hRouterInterface
);
DWORD APIENTRY
MprConfigInterfaceGetHandle(
    _In_ HANDLE hMprConfig,
    _In_ LPWSTR lpwsInterfaceName,
    _Out_ HANDLE* phRouterInterface
);
DWORD APIENTRY
MprConfigInterfaceGetInfo(
    _In_ HANDLE hMprConfig,
    _In_ HANDLE hRouterInterface,
    _In_ DWORD dwLevel,
    _Inout_ LPBYTE* lplpBuffer,
    _Out_ LPDWORD lpdwBufferSize
);
DWORD APIENTRY
MprConfigInterfaceSetInfo(
    _In_ HANDLE hMprConfig,
    _In_ HANDLE hRouterInterface,
    _In_ DWORD dwLevel,
    _In_reads_bytes_(dwLevel==1?sizeof(MPR_INTERFACE_1):sizeof(MPR_INTERFACE_0)) LPBYTE lpbBuffer
);
DWORD APIENTRY
MprConfigInterfaceEnum(
    _In_ HANDLE hMprConfig,
    _In_ DWORD dwLevel,
    _Outptr_result_bytebuffer_maybenull_((*lpdwEntriesRead)*sizeof( MPR_INTERFACE_0)) LPBYTE* lplpBuffer,
    _In_ DWORD dwPrefMaxLen,
    _Out_ LPDWORD lpdwEntriesRead,
    _Out_ LPDWORD lpdwTotalEntries,
    _Inout_opt_ LPDWORD lpdwResumeHandle
);
DWORD APIENTRY
MprConfigInterfaceTransportAdd(
    _In_ HANDLE hMprConfig,
    _In_ HANDLE hRouterInterface,
    _In_ DWORD dwTransportId,
    _In_opt_ LPWSTR lpwsTransportName,
    _In_reads_bytes_(dwInterfaceInfoSize) LPBYTE pInterfaceInfo,
    _In_ DWORD dwInterfaceInfoSize,
    _Out_ HANDLE* phRouterIfTransport
);
DWORD APIENTRY
MprConfigInterfaceTransportRemove(
    _In_ HANDLE hMprConfig,
    _In_ HANDLE hRouterInterface,
    _In_ HANDLE hRouterIfTransport
);
DWORD APIENTRY
MprConfigInterfaceTransportGetHandle(
    _In_ HANDLE hMprConfig,
    _In_ HANDLE hRouterInterface,
    _In_ DWORD dwTransportId,
    _Out_ HANDLE* phRouterIfTransport
);
DWORD APIENTRY
MprConfigInterfaceTransportGetInfo(
    _In_ HANDLE hMprConfig,
    _In_ HANDLE hRouterInterface,
    _In_ HANDLE hRouterIfTransport,
    _Outptr_opt_result_bytebuffer_(*lpdwInterfaceInfoSize) LPBYTE* ppInterfaceInfo,
    _Out_opt_ LPDWORD lpdwInterfaceInfoSize
);
DWORD APIENTRY
MprConfigInterfaceTransportSetInfo(
    _In_ HANDLE hMprConfig,
    _In_ HANDLE hRouterInterface,
    _In_ HANDLE hRouterIfTransport,
    _In_reads_bytes_opt_(dwInterfaceInfoSize) LPBYTE pInterfaceInfo,
   _In_ DWORD dwInterfaceInfoSize
);
DWORD APIENTRY
MprConfigInterfaceTransportEnum(
    _In_ HANDLE hMprConfig,
    _In_ HANDLE hRouterInterface,
    _In_ DWORD dwLevel,
    _Outptr_result_bytebuffer_maybenull_((*lpdwEntriesRead)*sizeof(MPR_IFTRANSPORT_0)) LPBYTE* lplpBuffer,
    _In_ DWORD dwPrefMaxLen,
    _Out_ LPDWORD lpdwEntriesRead,
    _Out_ LPDWORD lpdwTotalEntries,
    _Inout_opt_ LPDWORD lpdwResumeHandle
);
DWORD APIENTRY
MprConfigGetFriendlyName(
    _In_ HANDLE hMprConfig,
    _In_ PWSTR pszGuidName,
    _Out_writes_bytes_(dwBufferSize) PWCHAR pszBuffer,
    _In_ DWORD dwBufferSize);
DWORD APIENTRY
MprConfigGetGuidName(
    _In_ HANDLE hMprConfig,
    _In_ PWSTR pszFriendlyName,
    _Out_writes_bytes_(dwBufferSize) PWCHAR pszBuffer,
    _In_ DWORD dwBufferSize);
DWORD APIENTRY
MprConfigFilterGetInfo(
    _In_ HANDLE hMprConfig,
    _In_ DWORD dwLevel,
    _In_ DWORD dwTransportId,
    _Inout_updates_bytes_(sizeof(MPR_FILTER_0)) LPBYTE lpBuffer);
DWORD APIENTRY
MprConfigFilterSetInfo(
    _In_ HANDLE hMprConfig,
    _In_ DWORD dwLevel,
    _In_ DWORD dwTransportId,
    _In_ LPBYTE lpBuffer);
DWORD APIENTRY
MprInfoCreate(
    _In_ DWORD dwVersion,
    _Out_ LPVOID* lplpNewHeader
);
DWORD APIENTRY
MprInfoDelete(
   _In_ LPVOID lpHeader
);
DWORD APIENTRY
MprInfoRemoveAll(
    _In_ LPVOID lpHeader,
    _Out_ LPVOID* lplpNewHeader
);
DWORD APIENTRY
MprInfoDuplicate(
    _In_ LPVOID lpHeader,
    _Out_ LPVOID* lplpNewHeader
);
DWORD APIENTRY
MprInfoBlockAdd(
    _In_ LPVOID lpHeader,
    _In_ DWORD dwInfoType,
    _In_ DWORD dwItemSize,
    _In_ DWORD dwItemCount,
    _In_reads_bytes_(dwItemSize*dwItemCount) LPBYTE lpItemData,
    _Out_ LPVOID* lplpNewHeader
);
DWORD APIENTRY
MprInfoBlockRemove(
    _In_ LPVOID lpHeader,
    _In_ DWORD dwInfoType,
    _Out_ LPVOID* lplpNewHeader
);
DWORD APIENTRY
MprInfoBlockSet(
    _In_ LPVOID lpHeader,
    _In_ DWORD dwInfoType,
    _In_ DWORD dwItemSize,
    _In_ DWORD dwItemCount,
    _In_reads_bytes_(dwItemSize*dwItemCount) LPBYTE lpItemData,
    _Out_ LPVOID* lplpNewHeader
);
DWORD APIENTRY
MprInfoBlockFind(
    _In_ LPVOID lpHeader,
    _In_ DWORD dwInfoType,
    _Out_ LPDWORD lpdwItemSize,
    _Out_ LPDWORD lpdwItemCount,
    _Outptr_result_bytebuffer_((*lpdwItemSize)*(*lpdwItemCount)) LPBYTE* lplpItemData
);
DWORD APIENTRY
MprInfoBlockQuerySize(
    _In_ LPVOID lpHeader
);
    (MprInfoBlockFind((h),(t),NULL,NULL,NULL) == NO_ERROR)
}
#endif
#pragma endregion
