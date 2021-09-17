#include <winapifamily.h>
#pragma region Desktop Family or CmdLineTools Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_CMDTOOLS)
extern "C" {
#pragma warning(push)
#pragma warning(disable:4201)
#include <lmcons.h>
#include <naptypes.h>
typedef struct _tagRasNapState
{
    DWORD dwSize;
    DWORD dwFlags;
    IsolationState isolationState;
    ProbationTime probationTime;
} RASNAPSTATE, *LPRASNAPSTATE;
#include <pshpack4.h>
#include <inaddr.h>
#include <in6addr.h>
RASAPIVERSION
{
    RASAPIVERSION_500 = 1,
    RASAPIVERSION_501,
    RASAPIVERSION_600,
    RASAPIVERSION_601,
};
RASIPADDR
{
    BYTE a;
    BYTE b;
    BYTE c;
    BYTE d;
};
typedef struct in_addr RASIPV4ADDR;
typedef struct in6_addr RASIPV6ADDR;
RASTUNNELENDPOINT
{
    DWORD dwType;
    union {
        RASIPV4ADDR ipv4;
        RASIPV6ADDR ipv6;
    };
};
DECLARE_HANDLE( HRASCONN );
RASCONNW
{
    DWORD dwSize;
    HRASCONN hrasconn;
    WCHAR szEntryName[ RAS_MaxEntryName + 1 ];
    WCHAR szDeviceType[ RAS_MaxDeviceType + 1 ];
    WCHAR szDeviceName[ RAS_MaxDeviceName + 1 ];
    WCHAR szPhonebook [ MAX_PATH ];
    DWORD dwSubEntry;
    GUID guidEntry;
    DWORD dwFlags;
    LUID luid;
    GUID guidCorrelationId;
};
RASCONNA
{
    DWORD dwSize;
    HRASCONN hrasconn;
    CHAR szEntryName[ RAS_MaxEntryName + 1 ];
    CHAR szDeviceType[ RAS_MaxDeviceType + 1 ];
    CHAR szDeviceName[ RAS_MaxDeviceName + 1 ];
    CHAR szPhonebook [ MAX_PATH ];
    DWORD dwSubEntry;
    GUID guidEntry;
    DWORD dwFlags;
    LUID luid;
    GUID guidCorrelationId;
};
RASCONNSTATE
{
    RASCS_OpenPort = 0,
    RASCS_PortOpened,
    RASCS_ConnectDevice,
    RASCS_DeviceConnected,
    RASCS_AllDevicesConnected,
    RASCS_Authenticate,
    RASCS_AuthNotify,
    RASCS_AuthRetry,
    RASCS_AuthCallback,
    RASCS_AuthChangePassword,
    RASCS_AuthProject,
    RASCS_AuthLinkSpeed,
    RASCS_AuthAck,
    RASCS_ReAuthenticate,
    RASCS_Authenticated,
    RASCS_PrepareForCallback,
    RASCS_WaitForModemReset,
    RASCS_WaitForCallback,
    RASCS_Projected,
    RASCS_StartAuthentication,
    RASCS_CallbackComplete,
    RASCS_LogonNetwork,
    RASCS_SubEntryConnected,
    RASCS_SubEntryDisconnected,
    RASCS_ApplySettings,
    RASCS_Interactive = RASCS_PAUSED,
    RASCS_RetryAuthentication,
    RASCS_CallbackSetByCaller,
    RASCS_PasswordExpired,
    RASCS_InvokeEapUI,
    RASCS_Connected = RASCS_DONE,
    RASCS_Disconnected
};
RASCONNSUBSTATE
{
    RASCSS_None = 0,
    RASCSS_Dormant,
    RASCSS_Reconnecting,
    RASCSS_Reconnected = RASCSS_DONE,
};
RASCONNSTATUSW
{
    DWORD dwSize;
    RASCONNSTATE rasconnstate;
    DWORD dwError;
    WCHAR szDeviceType[ RAS_MaxDeviceType + 1 ];
    WCHAR szDeviceName[ RAS_MaxDeviceName + 1 ];
    WCHAR szPhoneNumber[ RAS_MaxPhoneNumber + 1 ];
    RASTUNNELENDPOINT localEndPoint;
    RASTUNNELENDPOINT remoteEndPoint;
    RASCONNSUBSTATE rasconnsubstate;
};
RASCONNSTATUSA
{
    DWORD dwSize;
    RASCONNSTATE rasconnstate;
    DWORD dwError;
    CHAR szDeviceType[ RAS_MaxDeviceType + 1 ];
    CHAR szDeviceName[ RAS_MaxDeviceName + 1 ];
    CHAR szPhoneNumber[ RAS_MaxPhoneNumber + 1 ];
    RASTUNNELENDPOINT localEndPoint;
    RASTUNNELENDPOINT remoteEndPoint;
    RASCONNSUBSTATE rasconnsubstate;
};
RASDIALPARAMSW
{
    DWORD dwSize;
    WCHAR szEntryName[ RAS_MaxEntryName + 1 ];
    WCHAR szPhoneNumber[ RAS_MaxPhoneNumber + 1 ];
    WCHAR szCallbackNumber[ RAS_MaxCallbackNumber + 1 ];
    WCHAR szUserName[ UNLEN + 1 ];
    WCHAR szPassword[ PWLEN + 1 ];
    WCHAR szDomain[ DNLEN + 1 ];
    DWORD dwSubEntry;
    ULONG_PTR dwCallbackId;
    DWORD dwIfIndex;
    LPWSTR szEncPassword;
};
RASDIALPARAMSA
{
    DWORD dwSize;
    CHAR szEntryName[ RAS_MaxEntryName + 1 ];
    CHAR szPhoneNumber[ RAS_MaxPhoneNumber + 1 ];
    CHAR szCallbackNumber[ RAS_MaxCallbackNumber + 1 ];
    CHAR szUserName[ UNLEN + 1 ];
    CHAR szPassword[ PWLEN + 1 ];
    CHAR szDomain[ DNLEN + 1 ];
    DWORD dwSubEntry;
    ULONG_PTR dwCallbackId;
    DWORD dwIfIndex;
    LPSTR szEncPassword;
};
RASEAPINFO
{
    DWORD dwSizeofEapInfo;
    BYTE *pbEapInfo;
};
typedef struct tagRASDEVSPECIFICINFO
{
    DWORD dwSize;
    BYTE *pbDevSpecificInfo;
} RASDEVSPECIFICINFO, *PRASDEVSPECIFICINFO;
RASDIALEXTENSIONS
{
    DWORD dwSize;
    DWORD dwfOptions;
    HWND hwndParent;
    ULONG_PTR reserved;
    ULONG_PTR reserved1;
    RASEAPINFO RasEapInfo;
    BOOL fSkipPppAuth;
    RASDEVSPECIFICINFO RasDevSpecificInfo;
};
RASENTRYNAMEW
{
    DWORD dwSize;
    WCHAR szEntryName[ RAS_MaxEntryName + 1 ];
    DWORD dwFlags;
    WCHAR szPhonebookPath[MAX_PATH + 1];
};
RASENTRYNAMEA
{
    DWORD dwSize;
    CHAR szEntryName[ RAS_MaxEntryName + 1 ];
    DWORD dwFlags;
    CHAR szPhonebookPath[MAX_PATH + 1];
};
RASPROJECTION
{
    RASP_Amb = 0x10000,
    RASP_PppNbf = 0x803F,
    RASP_PppIpx = 0x802B,
    RASP_PppIp = 0x8021,
    RASP_PppCcp = 0x80FD,
    RASP_PppLcp = 0xC021,
    RASP_PppIpv6 = 0x8057,
};
RASAMBW
{
    DWORD dwSize;
    DWORD dwError;
    WCHAR szNetBiosError[ NETBIOS_NAME_LEN + 1 ];
    BYTE bLana;
};
RASAMBA
{
    DWORD dwSize;
    DWORD dwError;
    CHAR szNetBiosError[ NETBIOS_NAME_LEN + 1 ];
    BYTE bLana;
};
RASPPPNBFW
{
    DWORD dwSize;
    DWORD dwError;
    DWORD dwNetBiosError;
    WCHAR szNetBiosError[ NETBIOS_NAME_LEN + 1 ];
    WCHAR szWorkstationName[ NETBIOS_NAME_LEN + 1 ];
    BYTE bLana;
};
RASPPPNBFA
{
    DWORD dwSize;
    DWORD dwError;
    DWORD dwNetBiosError;
    CHAR szNetBiosError[ NETBIOS_NAME_LEN + 1 ];
    CHAR szWorkstationName[ NETBIOS_NAME_LEN + 1 ];
    BYTE bLana;
};
RASPPPIPXW
{
    DWORD dwSize;
    DWORD dwError;
    WCHAR szIpxAddress[ RAS_MaxIpxAddress + 1 ];
};
RASPPPIPXA
{
    DWORD dwSize;
    DWORD dwError;
    CHAR szIpxAddress[ RAS_MaxIpxAddress + 1 ];
};
RASPPPIPW
{
    DWORD dwSize;
    DWORD dwError;
    WCHAR szIpAddress[ RAS_MaxIpAddress + 1 ];
    WCHAR szServerIpAddress[ RAS_MaxIpAddress + 1 ];
    DWORD dwOptions;
    DWORD dwServerOptions;
};
RASPPPIPA
{
    DWORD dwSize;
    DWORD dwError;
    CHAR szIpAddress[ RAS_MaxIpAddress + 1 ];
    CHAR szServerIpAddress[ RAS_MaxIpAddress + 1 ];
    DWORD dwOptions;
    DWORD dwServerOptions;
};
RASPPPIPV6
{
    DWORD dwSize;
    DWORD dwError;
    BYTE bLocalInterfaceIdentifier[8];
    BYTE bPeerInterfaceIdentifier[8];
    BYTE bLocalCompressionProtocol[2];
    BYTE bPeerCompressionProtocol[2];
};
RASPPPLCPW
{
    DWORD dwSize;
    BOOL fBundled;
    DWORD dwError;
    DWORD dwAuthenticationProtocol;
    DWORD dwAuthenticationData;
    DWORD dwEapTypeId;
    DWORD dwServerAuthenticationProtocol;
    DWORD dwServerAuthenticationData;
    DWORD dwServerEapTypeId;
    BOOL fMultilink;
    DWORD dwTerminateReason;
    DWORD dwServerTerminateReason;
    WCHAR szReplyMessage[RAS_MaxReplyMessage];
    DWORD dwOptions;
    DWORD dwServerOptions;
};
RASPPPLCPA
{
    DWORD dwSize;
    BOOL fBundled;
    DWORD dwError;
    DWORD dwAuthenticationProtocol;
    DWORD dwAuthenticationData;
    DWORD dwEapTypeId;
    DWORD dwServerAuthenticationProtocol;
    DWORD dwServerAuthenticationData;
    DWORD dwServerEapTypeId;
    BOOL fMultilink;
    DWORD dwTerminateReason;
    DWORD dwServerTerminateReason;
    CHAR szReplyMessage[RAS_MaxReplyMessage];
    DWORD dwOptions;
    DWORD dwServerOptions;
};
RASPPPCCP
{
    DWORD dwSize;
    DWORD dwError;
    DWORD dwCompressionAlgorithm;
    DWORD dwOptions;
    DWORD dwServerCompressionAlgorithm;
    DWORD dwServerOptions;
};
typedef struct _RASPPP_PROJECTION_INFO {
    DWORD dwIPv4NegotiationError;
    RASIPV4ADDR ipv4Address;
    RASIPV4ADDR ipv4ServerAddress;
    DWORD dwIPv4Options;
    DWORD dwIPv4ServerOptions;
    DWORD dwIPv6NegotiationError;
    BYTE bInterfaceIdentifier[8];
    BYTE bServerInterfaceIdentifier[8];
    BOOL fBundled;
    BOOL fMultilink;
    DWORD dwAuthenticationProtocol;
    DWORD dwAuthenticationData;
    DWORD dwServerAuthenticationProtocol;
    DWORD dwServerAuthenticationData;
    DWORD dwEapTypeId;
    DWORD dwServerEapTypeId;
    DWORD dwLcpOptions;
    DWORD dwLcpServerOptions;
    DWORD dwCcpError;
    DWORD dwCcpCompressionAlgorithm;
    DWORD dwCcpServerCompressionAlgorithm;
    DWORD dwCcpOptions;
    DWORD dwCcpServerOptions;
}
RASPPP_PROJECTION_INFO, *PRASPPP_PROJECTION_INFO;
typedef struct _RASIKEV2_PROJECTION_INFO {
    DWORD dwIPv4NegotiationError;
    RASIPV4ADDR ipv4Address;
    RASIPV4ADDR ipv4ServerAddress;
    DWORD dwIPv6NegotiationError;
    RASIPV6ADDR ipv6Address;
    RASIPV6ADDR ipv6ServerAddress;
    DWORD dwPrefixLength;
    DWORD dwAuthenticationProtocol;
    DWORD dwEapTypeId;
    DWORD dwFlags;
    DWORD dwEncryptionMethod;
    DWORD numIPv4ServerAddresses;
    RASIPV4ADDR* ipv4ServerAddresses;
    DWORD numIPv6ServerAddresses;
    RASIPV6ADDR* ipv6ServerAddresses;
}
RASIKEV2_PROJECTION_INFO, *PRASIKEV2_PROJECTION_INFO;
typedef enum _RASPROJECTION_INFO_TYPE {
    PROJECTION_INFO_TYPE_PPP = 1,
    PROJECTION_INFO_TYPE_IKEv2,
}
RASPROJECTION_INFO_TYPE;
typedef enum _IKEV2_ID_PAYLOAD_TYPE
{
    IKEV2_ID_PAYLOAD_TYPE_INVALID = 0,
    IKEV2_ID_PAYLOAD_TYPE_IPV4_ADDR = 1,
    IKEV2_ID_PAYLOAD_TYPE_FQDN = 2,
    IKEV2_ID_PAYLOAD_TYPE_RFC822_ADDR = 3,
    IKEV2_ID_PAYLOAD_TYPE_RESERVED1 = 4,
    IKEV2_ID_PAYLOAD_TYPE_ID_IPV6_ADDR = 5,
    IKEV2_ID_PAYLOAD_TYPE_RESERVED2 = 6,
    IKEV2_ID_PAYLOAD_TYPE_RESERVED3 = 7,
    IKEV2_ID_PAYLOAD_TYPE_RESERVED4 = 8,
    IKEV2_ID_PAYLOAD_TYPE_DER_ASN1_DN = 9,
    IKEV2_ID_PAYLOAD_TYPE_DER_ASN1_GN = 10,
    IKEV2_ID_PAYLOAD_TYPE_KEY_ID = 11,
    IKEV2_ID_PAYLOAD_TYPE_MAX
} IKEV2_ID_PAYLOAD_TYPE;
typedef struct _RAS_PROJECTION_INFO {
    RASAPIVERSION version;
    RASPROJECTION_INFO_TYPE type;
    union {
        RASPPP_PROJECTION_INFO ppp;
        RASIKEV2_PROJECTION_INFO ikev2;
    };
}
RAS_PROJECTION_INFO, *PRAS_PROJECTION_INFO;
typedef VOID (WINAPI *RASDIALFUNC)( UINT, RASCONNSTATE, DWORD );
typedef VOID (WINAPI *RASDIALFUNC1)( HRASCONN, UINT, RASCONNSTATE, DWORD, DWORD );
typedef DWORD (WINAPI *RASDIALFUNC2)( ULONG_PTR, DWORD, HRASCONN, UINT, RASCONNSTATE, DWORD, DWORD );
RASDEVINFOW
{
    DWORD dwSize;
    WCHAR szDeviceType[ RAS_MaxDeviceType + 1 ];
    WCHAR szDeviceName[ RAS_MaxDeviceName + 1 ];
};
RASDEVINFOA
{
    DWORD dwSize;
    CHAR szDeviceType[ RAS_MaxDeviceType + 1 ];
    CHAR szDeviceName[ RAS_MaxDeviceName + 1 ];
};
RASCTRYINFO
{
    DWORD dwSize;
    DWORD dwCountryID;
    DWORD dwNextCountryID;
    DWORD dwCountryCode;
    DWORD dwCountryNameOffset;
};
RASENTRYA
{
    DWORD dwSize;
    DWORD dwfOptions;
    DWORD dwCountryID;
    DWORD dwCountryCode;
    CHAR szAreaCode[ RAS_MaxAreaCode + 1 ];
    CHAR szLocalPhoneNumber[ RAS_MaxPhoneNumber + 1 ];
    DWORD dwAlternateOffset;
    RASIPADDR ipaddr;
    RASIPADDR ipaddrDns;
    RASIPADDR ipaddrDnsAlt;
    RASIPADDR ipaddrWins;
    RASIPADDR ipaddrWinsAlt;
    DWORD dwFrameSize;
    DWORD dwfNetProtocols;
    DWORD dwFramingProtocol;
    CHAR szScript[ MAX_PATH ];
    CHAR szAutodialDll[ MAX_PATH ];
    CHAR szAutodialFunc[ MAX_PATH ];
    CHAR szDeviceType[ RAS_MaxDeviceType + 1 ];
    CHAR szDeviceName[ RAS_MaxDeviceName + 1 ];
    CHAR szX25PadType[ RAS_MaxPadType + 1 ];
    CHAR szX25Address[ RAS_MaxX25Address + 1 ];
    CHAR szX25Facilities[ RAS_MaxFacilities + 1 ];
    CHAR szX25UserData[ RAS_MaxUserData + 1 ];
    DWORD dwChannels;
    DWORD dwReserved1;
    DWORD dwReserved2;
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
    GUID guidId;
    CHAR szCustomDialDll[MAX_PATH];
    DWORD dwVpnStrategy;
    DWORD dwfOptions2;
    DWORD dwfOptions3;
    CHAR szDnsSuffix[RAS_MaxDnsSuffix];
    DWORD dwTcpWindowSize;
    CHAR szPrerequisitePbk[MAX_PATH];
    CHAR szPrerequisiteEntry[RAS_MaxEntryName + 1];
    DWORD dwRedialCount;
    DWORD dwRedialPause;
    RASIPV6ADDR ipv6addrDns;
    RASIPV6ADDR ipv6addrDnsAlt;
    DWORD dwIPv4InterfaceMetric;
    DWORD dwIPv6InterfaceMetric;
    RASIPV6ADDR ipv6addr;
    DWORD dwIPv6PrefixLength;
    DWORD dwNetworkOutageTime;
    CHAR szIDi[RAS_MaxIDSize + 1];
    CHAR szIDr[RAS_MaxIDSize + 1];
    BOOL fIsImsConfig;
    IKEV2_ID_PAYLOAD_TYPE IdiType;
    IKEV2_ID_PAYLOAD_TYPE IdrType;
    BOOL fDisableIKEv2Fragmentation;
};
RASENTRYW
{
    DWORD dwSize;
    DWORD dwfOptions;
    DWORD dwCountryID;
    DWORD dwCountryCode;
    WCHAR szAreaCode[ RAS_MaxAreaCode + 1 ];
    WCHAR szLocalPhoneNumber[ RAS_MaxPhoneNumber + 1 ];
    DWORD dwAlternateOffset;
    RASIPADDR ipaddr;
    RASIPADDR ipaddrDns;
    RASIPADDR ipaddrDnsAlt;
    RASIPADDR ipaddrWins;
    RASIPADDR ipaddrWinsAlt;
    DWORD dwFrameSize;
    DWORD dwfNetProtocols;
    DWORD dwFramingProtocol;
    WCHAR szScript[ MAX_PATH ];
    WCHAR szAutodialDll[ MAX_PATH ];
    WCHAR szAutodialFunc[ MAX_PATH ];
    WCHAR szDeviceType[ RAS_MaxDeviceType + 1 ];
    WCHAR szDeviceName[ RAS_MaxDeviceName + 1 ];
    WCHAR szX25PadType[ RAS_MaxPadType + 1 ];
    WCHAR szX25Address[ RAS_MaxX25Address + 1 ];
    WCHAR szX25Facilities[ RAS_MaxFacilities + 1 ];
    WCHAR szX25UserData[ RAS_MaxUserData + 1 ];
    DWORD dwChannels;
    DWORD dwReserved1;
    DWORD dwReserved2;
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
    GUID guidId;
    WCHAR szCustomDialDll[MAX_PATH];
    DWORD dwVpnStrategy;
    DWORD dwfOptions2;
    DWORD dwfOptions3;
    WCHAR szDnsSuffix[RAS_MaxDnsSuffix];
    DWORD dwTcpWindowSize;
    WCHAR szPrerequisitePbk[MAX_PATH];
    WCHAR szPrerequisiteEntry[RAS_MaxEntryName + 1];
    DWORD dwRedialCount;
    DWORD dwRedialPause;
    RASIPV6ADDR ipv6addrDns;
    RASIPV6ADDR ipv6addrDnsAlt;
    DWORD dwIPv4InterfaceMetric;
    DWORD dwIPv6InterfaceMetric;
    RASIPV6ADDR ipv6addr;
    DWORD dwIPv6PrefixLength;
    DWORD dwNetworkOutageTime;
    WCHAR szIDi[RAS_MaxIDSize + 1];
    WCHAR szIDr[RAS_MaxIDSize + 1];
    BOOL fIsImsConfig;
    IKEV2_ID_PAYLOAD_TYPE IdiType;
    IKEV2_ID_PAYLOAD_TYPE IdrType;
    BOOL fDisableIKEv2Fragmentation;
};
typedef BOOL (WINAPI *ORASADFUNC)( HWND, LPSTR, DWORD, LPDWORD );
RASADPARAMS
{
    DWORD dwSize;
    HWND hwndOwner;
    DWORD dwFlags;
    LONG xDlg;
    LONG yDlg;
};
typedef BOOL (WINAPI *RASADFUNCA)( LPSTR, LPSTR, LPRASADPARAMS, LPDWORD );
typedef BOOL (WINAPI *RASADFUNCW)( LPWSTR, LPWSTR, LPRASADPARAMS, LPDWORD );
RASSUBENTRYA
{
    DWORD dwSize;
    DWORD dwfFlags;
    CHAR szDeviceType[ RAS_MaxDeviceType + 1 ];
    CHAR szDeviceName[ RAS_MaxDeviceName + 1 ];
    CHAR szLocalPhoneNumber[ RAS_MaxPhoneNumber + 1 ];
    DWORD dwAlternateOffset;
};
RASSUBENTRYW
{
    DWORD dwSize;
    DWORD dwfFlags;
    WCHAR szDeviceType[ RAS_MaxDeviceType + 1 ];
    WCHAR szDeviceName[ RAS_MaxDeviceName + 1 ];
    WCHAR szLocalPhoneNumber[ RAS_MaxPhoneNumber + 1 ];
    DWORD dwAlternateOffset;
};
RASCREDENTIALSA
{
    DWORD dwSize;
    DWORD dwMask;
    CHAR szUserName[ UNLEN + 1 ];
    CHAR szPassword[ PWLEN + 1 ];
    CHAR szDomain[ DNLEN + 1 ];
};
RASCREDENTIALSW
{
    DWORD dwSize;
    DWORD dwMask;
    WCHAR szUserName[ UNLEN + 1 ];
    WCHAR szPassword[ PWLEN + 1 ];
    WCHAR szDomain[ DNLEN + 1 ];
};
RASAUTODIALENTRYA
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwDialingLocation;
    CHAR szEntry[ RAS_MaxEntryName + 1 ];
};
RASAUTODIALENTRYW
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwDialingLocation;
    WCHAR szEntry[ RAS_MaxEntryName + 1 ];
};
RASEAPUSERIDENTITYA
{
    CHAR szUserName[ UNLEN + 1 ];
    DWORD dwSizeofEapInfo;
    BYTE pbEapInfo[ 1 ];
};
RASEAPUSERIDENTITYW
{
    WCHAR szUserName[ UNLEN + 1 ];
    DWORD dwSizeofEapInfo;
    BYTE pbEapInfo[ 1 ];
};
typedef DWORD (WINAPI *PFNRASGETBUFFER) (
                            PBYTE *ppBuffer,
                            PDWORD pdwSize
                            );
typedef DWORD (WINAPI *PFNRASFREEBUFFER) (
                            PBYTE pBufer);
typedef DWORD (WINAPI *PFNRASSENDBUFFER) (
                            HANDLE hPort,
                            PBYTE pBuffer,
                            DWORD dwSize
                            );
typedef DWORD (WINAPI *PFNRASRECEIVEBUFFER) (
                            HANDLE hPort,
                            PBYTE pBuffer,
                            PDWORD pdwSize,
                            DWORD dwTimeOut,
                            HANDLE hEvent
                            );
typedef DWORD (WINAPI *PFNRASRETRIEVEBUFFER) (
                            HANDLE hPort,
                            PBYTE pBuffer,
                            PDWORD pdwSize
                            );
typedef DWORD (WINAPI *RasCustomScriptExecuteFn) (
                            HANDLE hPort,
                            LPCWSTR lpszPhonebook,
                            LPCWSTR lpszEntryName,
                            PFNRASGETBUFFER pfnRasGetBuffer,
                            PFNRASFREEBUFFER pfnRasFreeBuffer,
                            PFNRASSENDBUFFER pfnRasSendBuffer,
                            PFNRASRECEIVEBUFFER pfnRasReceiveBuffer,
                            PFNRASRETRIEVEBUFFER pfnRasRetrieveBuffer,
                            HWND hWnd,
                            RASDIALPARAMS *pRasDialParams,
                            PVOID pvReserved
                            );
RASCOMMSETTINGS
{
    DWORD dwSize;
    BYTE bParity;
    BYTE bStop;
    BYTE bByteSize;
    BYTE bAlign;
};
typedef DWORD (WINAPI *PFNRASSETCOMMSETTINGS) (
                            HANDLE hPort,
                            RASCOMMSETTINGS *pRasCommSettings,
                            PVOID pvReserved
                            );
RASCUSTOMSCRIPTEXTENSIONS
{
    DWORD dwSize;
    PFNRASSETCOMMSETTINGS pfnRasSetCommSettings;
};
DWORD APIENTRY RasDialA( _In_opt_ LPRASDIALEXTENSIONS, _In_opt_ LPCSTR, _In_ LPRASDIALPARAMSA, _In_ DWORD,
                         _In_opt_ LPVOID, _Out_ LPHRASCONN );
DWORD APIENTRY RasDialW( _In_opt_ LPRASDIALEXTENSIONS, _In_opt_ LPCWSTR, _In_ LPRASDIALPARAMSW, _In_ DWORD,
                         _In_opt_ LPVOID, _Out_ LPHRASCONN );
DWORD APIENTRY RasEnumConnectionsA( _Inout_opt_ LPRASCONNA, _Inout_ LPDWORD, _Out_ LPDWORD );
DWORD APIENTRY RasEnumConnectionsW( _Inout_opt_ LPRASCONNW, _Inout_ LPDWORD, _Out_ LPDWORD );
DWORD APIENTRY RasEnumEntriesA( _In_opt_ LPCSTR, _In_opt_ LPCSTR, _Inout_opt_ LPRASENTRYNAMEA, _Inout_ LPDWORD,
                                _Out_ LPDWORD );
DWORD APIENTRY RasEnumEntriesW( _In_opt_ LPCWSTR, _In_opt_ LPCWSTR, _Inout_opt_ LPRASENTRYNAMEW, _Inout_ LPDWORD,
                                _Out_ LPDWORD );
DWORD APIENTRY RasGetConnectStatusA( _In_ HRASCONN, _Inout_ LPRASCONNSTATUSA );
DWORD APIENTRY RasGetConnectStatusW( _In_ HRASCONN, _Inout_ LPRASCONNSTATUSW );
DWORD APIENTRY RasGetErrorStringA( _In_ UINT ResourceId, _Out_writes_(InBufSize) LPSTR lpszString, _In_ DWORD InBufSize);
DWORD APIENTRY RasGetErrorStringW( _In_ UINT ResourceId, _Out_writes_(InBufSize) LPWSTR lpszString, _In_ DWORD InBufSize);
DWORD APIENTRY RasHangUpA( _In_ HRASCONN );
DWORD APIENTRY RasHangUpW( _In_ HRASCONN );
DWORD APIENTRY RasGetProjectionInfoA( _In_ HRASCONN, _In_ RASPROJECTION, _Out_ LPVOID, _Inout_ LPDWORD );
DWORD APIENTRY RasGetProjectionInfoW( _In_ HRASCONN, _In_ RASPROJECTION, _Out_ LPVOID, _Inout_ LPDWORD );
DWORD APIENTRY RasCreatePhonebookEntryA( _In_ HWND, _In_opt_ LPCSTR );
DWORD APIENTRY RasCreatePhonebookEntryW( _In_ HWND, _In_opt_ LPCWSTR );
DWORD APIENTRY RasEditPhonebookEntryA( _In_ HWND, _In_opt_ LPCSTR, _In_ LPCSTR );
DWORD APIENTRY RasEditPhonebookEntryW( _In_ HWND, _In_opt_ LPCWSTR, _In_ LPCWSTR );
DWORD APIENTRY RasSetEntryDialParamsA( _In_opt_ LPCSTR, _In_ LPRASDIALPARAMSA, _In_ BOOL );
DWORD APIENTRY RasSetEntryDialParamsW( _In_opt_ LPCWSTR, _In_ LPRASDIALPARAMSW, _In_ BOOL );
DWORD APIENTRY RasGetEntryDialParamsA( _In_opt_ LPCSTR, _Inout_ LPRASDIALPARAMSA, _Out_ LPBOOL );
DWORD APIENTRY RasGetEntryDialParamsW( _In_opt_ LPCWSTR, _Inout_ LPRASDIALPARAMSW, _Out_ LPBOOL );
DWORD APIENTRY RasEnumDevicesA( _Inout_opt_ LPRASDEVINFOA, _Inout_ LPDWORD, _Out_ LPDWORD );
DWORD APIENTRY RasEnumDevicesW( _Inout_opt_ LPRASDEVINFOW, _Inout_ LPDWORD, _Out_ LPDWORD );
DWORD APIENTRY RasGetCountryInfoA( _Inout_opt_ LPRASCTRYINFOA, _Inout_ LPDWORD );
DWORD APIENTRY RasGetCountryInfoW( _Inout_opt_ LPRASCTRYINFOW, _Inout_ LPDWORD );
DWORD APIENTRY RasGetEntryPropertiesA( _In_opt_ LPCSTR, _In_ LPCSTR, _Inout_opt_ LPRASENTRYA, _Inout_ LPDWORD, _Out_opt_ LPBYTE, _Inout_opt_ LPDWORD );
DWORD APIENTRY RasGetEntryPropertiesW( _In_opt_ LPCWSTR, _In_ LPCWSTR, _Inout_opt_ LPRASENTRYW, _Inout_ LPDWORD, _Out_opt_ LPBYTE, _Inout_opt_ LPDWORD );
DWORD APIENTRY RasSetEntryPropertiesA( _In_opt_ LPCSTR, _In_ LPCSTR, _In_ LPRASENTRYA, _In_ DWORD, _In_opt_ LPBYTE, _In_ DWORD );
DWORD APIENTRY RasSetEntryPropertiesW( _In_opt_ LPCWSTR, _In_ LPCWSTR, _In_ LPRASENTRYW, _In_ DWORD, _In_opt_ LPBYTE, _In_ DWORD );
DWORD APIENTRY RasRenameEntryA( _In_opt_ LPCSTR, _In_ LPCSTR, _In_ LPCSTR );
DWORD APIENTRY RasRenameEntryW( _In_opt_ LPCWSTR, _In_ LPCWSTR, _In_ LPCWSTR );
DWORD APIENTRY RasDeleteEntryA( _In_opt_ LPCSTR, _In_ LPCSTR );
DWORD APIENTRY RasDeleteEntryW( _In_opt_ LPCWSTR, _In_ LPCWSTR );
DWORD APIENTRY RasValidateEntryNameA( _In_opt_ LPCSTR, _In_ LPCSTR );
DWORD APIENTRY RasValidateEntryNameW( _In_opt_ LPCWSTR, _In_ LPCWSTR );
DWORD APIENTRY RasConnectionNotificationA( _In_ HRASCONN, _In_ HANDLE, _In_ DWORD );
DWORD APIENTRY RasConnectionNotificationW( _In_ HRASCONN, _In_ HANDLE, _In_ DWORD );
DWORD APIENTRY RasGetSubEntryHandleA( _In_ HRASCONN, _In_ DWORD, _Out_ LPHRASCONN );
DWORD APIENTRY RasGetSubEntryHandleW( _In_ HRASCONN, _In_ DWORD, _Out_ LPHRASCONN );
DWORD APIENTRY RasGetCredentialsA( _In_opt_ LPCSTR, _In_ LPCSTR, _Inout_ LPRASCREDENTIALSA );
DWORD APIENTRY RasGetCredentialsW( _In_opt_ LPCWSTR, _In_ LPCWSTR, _Inout_ LPRASCREDENTIALSW );
DWORD APIENTRY RasSetCredentialsA( _In_opt_ LPCSTR, _In_ LPCSTR, _In_ LPRASCREDENTIALSA, _In_ BOOL );
DWORD APIENTRY RasSetCredentialsW( _In_opt_ LPCWSTR, _In_ LPCWSTR, _In_ LPRASCREDENTIALSW, _In_ BOOL );
DWORD APIENTRY RasGetSubEntryPropertiesA( _In_opt_ LPCSTR, _In_ LPCSTR, _In_ DWORD,
                    _Inout_opt_ LPRASSUBENTRYA, _Inout_opt_ LPDWORD, _Out_opt_ LPBYTE, _Inout_opt_ LPDWORD );
DWORD APIENTRY RasGetSubEntryPropertiesW( _In_opt_ LPCWSTR, _In_ LPCWSTR, _In_ DWORD,
                    _Inout_opt_ LPRASSUBENTRYW, _Inout_opt_ LPDWORD, _Out_opt_ LPBYTE, _Inout_opt_ LPDWORD );
DWORD APIENTRY RasSetSubEntryPropertiesA( _In_opt_ LPCSTR, _In_ LPCSTR, _In_ DWORD,
                    _In_ LPRASSUBENTRYA, _In_ DWORD, _In_opt_ LPBYTE, _In_ DWORD );
DWORD APIENTRY RasSetSubEntryPropertiesW( _In_opt_ LPCWSTR, _In_ LPCWSTR, _In_ DWORD,
                    _In_ LPRASSUBENTRYW, _In_ DWORD, _In_opt_ LPBYTE, _In_ DWORD );
DWORD APIENTRY RasGetAutodialAddressA( _In_opt_ LPCSTR, _In_opt_ LPDWORD, _Inout_opt_ LPRASAUTODIALENTRYA,
                                       _Inout_ LPDWORD, _Out_ LPDWORD );
DWORD APIENTRY RasGetAutodialAddressW( _In_opt_ LPCWSTR, _In_opt_ LPDWORD, _Inout_opt_ LPRASAUTODIALENTRYW,
                                       _Inout_ LPDWORD, _Out_ LPDWORD );
DWORD APIENTRY RasSetAutodialAddressA( _In_opt_ LPCSTR, _In_ DWORD, _In_opt_ LPRASAUTODIALENTRYA,
                                       _In_ DWORD, _In_ DWORD );
DWORD APIENTRY RasSetAutodialAddressW( _In_opt_ LPCWSTR, _In_ DWORD, _In_opt_ LPRASAUTODIALENTRYW,
                                       _In_ DWORD, _In_ DWORD );
DWORD APIENTRY RasEnumAutodialAddressesA(
    _Inout_updates_bytes_opt_(*lpdwcbRasAutodialAddresses) LPSTR *lppRasAutodialAddresses,
    _Inout_ LPDWORD lpdwcbRasAutodialAddresses,
    _Out_ LPDWORD lpdwcRasAutodialAddresses);
DWORD APIENTRY RasEnumAutodialAddressesW(
    _Inout_updates_bytes_opt_(*lpdwcbRasAutodialAddresses) LPWSTR *lppRasAutodialAddresses,
    _Inout_ LPDWORD lpdwcbRasAutodialAddresses,
    _Out_ LPDWORD lpdwcRasAutodialAddresses);
DWORD APIENTRY RasGetAutodialEnableA( _In_ DWORD, _Out_ LPBOOL );
DWORD APIENTRY RasGetAutodialEnableW( _In_ DWORD, _Out_ LPBOOL );
DWORD APIENTRY RasSetAutodialEnableA( _In_ DWORD, _In_ BOOL );
DWORD APIENTRY RasSetAutodialEnableW( _In_ DWORD, _In_ BOOL );
DWORD APIENTRY RasGetAutodialParamA( _In_ DWORD, _Out_ LPVOID, _Inout_ LPDWORD );
DWORD APIENTRY RasGetAutodialParamW( _In_ DWORD, _Out_ LPVOID, _Inout_ LPDWORD );
DWORD APIENTRY RasSetAutodialParamA( _In_ DWORD, _In_ LPVOID, _In_ DWORD );
DWORD APIENTRY RasSetAutodialParamW( _In_ DWORD, _In_ LPVOID, _In_ DWORD );
DWORD APIENTRY RasGetPCscf(_Out_ LPWSTR lpszPCscf);
typedef struct _RAS_STATS
{
    DWORD dwSize;
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
    DWORD dwBps;
    DWORD dwConnectDuration;
} RAS_STATS, *PRAS_STATS;
typedef DWORD (WINAPI *RasCustomHangUpFn) (
                            HRASCONN hRasConn
                            );
typedef DWORD (WINAPI *RasCustomDialFn) (
        HINSTANCE hInstDll,
        LPRASDIALEXTENSIONS lpRasDialExtensions,
        LPCWSTR lpszPhonebook,
        LPRASDIALPARAMS lpRasDialParams,
        DWORD dwNotifierType,
        LPVOID lpvNotifier,
        LPHRASCONN lphRasConn,
        DWORD dwFlags
        );
typedef DWORD (WINAPI *RasCustomDeleteEntryNotifyFn) (
        LPCWSTR lpszPhonebook,
        LPCWSTR lpszEntry,
        DWORD dwFlags );
DWORD APIENTRY RasInvokeEapUI( _In_ HRASCONN, _In_ DWORD, _In_ LPRASDIALEXTENSIONS, _In_ HWND);
DWORD APIENTRY RasGetLinkStatistics(_In_ HRASCONN hRasConn,
                                    _In_ DWORD dwSubEntry,
                                    _Inout_ RAS_STATS *lpStatistics );
DWORD APIENTRY RasGetConnectionStatistics( _In_ HRASCONN hRasConn,
                                           _Inout_ RAS_STATS *lpStatistics );
DWORD APIENTRY RasClearLinkStatistics(_In_ HRASCONN hRasConn,
                                      _In_ DWORD dwSubEntry);
DWORD APIENTRY RasClearConnectionStatistics( _In_ HRASCONN hRasConn );
DWORD APIENTRY RasGetEapUserDataA(
                   _In_opt_ HANDLE hToken,
                   _In_opt_ LPCSTR pszPhonebook,
                   _In_ LPCSTR pszEntry,
                   _Out_opt_ BYTE *pbEapData,
                   _Inout_ DWORD *pdwSizeofEapData );
DWORD APIENTRY RasGetEapUserDataW(
                   _In_opt_ HANDLE hToken,
                   _In_opt_ LPCWSTR pszPhonebook,
                   _In_ LPCWSTR pszEntry,
                   _Out_opt_ BYTE *pbEapData,
                   _Inout_ DWORD *pdwSizeofEapData );
DWORD APIENTRY RasSetEapUserDataA(
                   _In_opt_ HANDLE hToken,
                   _In_opt_ LPCSTR pszPhonebook,
                   _In_ LPCSTR pszEntry,
                   _In_ BYTE *pbEapData,
                   _In_ DWORD dwSizeofEapData );
DWORD APIENTRY RasSetEapUserDataW(
                   _In_opt_ HANDLE hToken,
                   _In_opt_ LPCWSTR pszPhonebook,
                   _In_ LPCWSTR pszEntry,
                   _In_ BYTE *pbEapData,
                   _In_ DWORD dwSizeofEapData );
DWORD APIENTRY RasGetCustomAuthDataA(
                   _In_opt_ LPCSTR pszPhonebook,
                   _In_ LPCSTR pszEntry,
                   _Out_writes_bytes_opt_(*pdwSizeofCustomAuthData) BYTE *pbCustomAuthData,
                   _Inout_ DWORD *pdwSizeofCustomAuthData );
DWORD APIENTRY RasGetCustomAuthDataW(
                   _In_opt_ LPCWSTR pszPhonebook,
                   _In_ LPCWSTR pszEntry,
                   _Out_writes_bytes_opt_(*pdwSizeofCustomAuthData) BYTE *pbCustomAuthData,
                   _Inout_ DWORD *pdwSizeofCustomAuthData );
DWORD APIENTRY RasSetCustomAuthDataA(
                   _In_opt_ LPCSTR pszPhonebook,
                   _In_ LPCSTR pszEntry,
                   _In_reads_bytes_(dwSizeofCustomAuthData) BYTE *pbCustomAuthData,
                   _In_ DWORD dwSizeofCustomAuthData
                   );
DWORD APIENTRY RasSetCustomAuthDataW(
                   _In_opt_ LPCWSTR pszPhonebook,
                   _In_ LPCWSTR pszEntry,
                   _In_reads_bytes_(dwSizeofCustomAuthData) BYTE *pbCustomAuthData,
                   _In_ DWORD dwSizeofCustomAuthData
                   );
DWORD APIENTRY RasGetEapUserIdentityW(
                   _In_opt_ LPCWSTR pszPhonebook,
                   _In_ LPCWSTR pszEntry,
                   _In_ DWORD dwFlags,
                   _In_ HWND hwnd,
                   _Out_ LPRASEAPUSERIDENTITYW* ppRasEapUserIdentity
);
DWORD APIENTRY RasGetEapUserIdentityA(
                   _In_opt_ LPCSTR pszPhonebook,
                   _In_ LPCSTR pszEntry,
                   _In_ DWORD dwFlags,
                   _In_ HWND hwnd,
                   _Out_ LPRASEAPUSERIDENTITYA* ppRasEapUserIdentity
);
VOID APIENTRY RasFreeEapUserIdentityW(
                   _In_ LPRASEAPUSERIDENTITYW pRasEapUserIdentity
);
VOID APIENTRY RasFreeEapUserIdentityA(
                   _In_ LPRASEAPUSERIDENTITYA pRasEapUserIdentity
);
DWORD APIENTRY RasDeleteSubEntryA(
                _In_opt_ LPCSTR pszPhonebook,
                _In_ LPCSTR pszEntry,
                _In_ DWORD dwSubentryId );
DWORD APIENTRY RasDeleteSubEntryW(
                _In_opt_ LPCWSTR pszPhonebook,
                _In_ LPCWSTR pszEntry,
                _In_ DWORD dwSubEntryId );
DWORD APIENTRY
RasGetNapStatus(
        _In_ HRASCONN hRasconn,
        _Out_ LPRASNAPSTATE pRasNapState);
RASUPDATECONN
{
    RASAPIVERSION version;
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwIfIndex;
    RASTUNNELENDPOINT localEndPoint;
    RASTUNNELENDPOINT remoteEndPoint;
};
DWORD APIENTRY
RasUpdateConnection(
        _In_ HRASCONN hrasconn,
        _In_ LPRASUPDATECONN lprasupdateconn);
DWORD APIENTRY
RasGetProjectionInfoEx(
        _In_ HRASCONN hrasconn,
        _Inout_opt_ PRAS_PROJECTION_INFO pRasProjection,
        _Inout_ LPDWORD lpdwSize);
#pragma warning(pop)
}
#include <poppack.h>
#endif
#pragma endregion
