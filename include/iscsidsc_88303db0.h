#include <ntddscsi.h>
#include <winioctl.h>
#include <winapifamily.h>
extern "C" {
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_ISCSI)
     description("Security flags") : amended, \
     BitMap{ \
            ISCSI_SECURITY_FLAG_TUNNEL_MODE_PREFERRED, \
            ISCSI_SECURITY_FLAG_TRANSPORT_MODE_PREFERRED, \
            ISCSI_SECURITY_FLAG_PFS_ENABLED, \
            ISCSI_SECURITY_FLAG_AGGRESSIVE_MODE_ENABLED, \
            ISCSI_SECURITY_FLAG_MAIN_MODE_ENABLED, \
            ISCSI_SECURITY_FLAG_IKE_IPSEC_ENABLED, \
            ISCSI_SECURITY_FLAG_VALID \
           }, \
     BitValues{ \
            "Tunnel mode preferred", \
            "Transport mode preferred", \
            "PFS Enabled", \
            "Aggressive mode enabled", \
            "Main Mode Enabled", \
            "IKE/IPSec Enabled", \
            "ISCSI_SECURITY_FLAGS are valid" \
              } : amended
"//\n" \
"// Definitions for iscsi security flags. These flags provide\n" \
"// information about the security expectations of a target portal and\n" \
"// are needed to insure a successful IKE/IPSEC negotiation. Note that\n" \
"// the flags and values are taken directly from the iSNS spec\n" \
"//\n" \
"\n" \
"    // 1 = Tunnel Mode Preferred; 0 = No Preference\n" \
"#define ISCSI_SECURITY_FLAG_TUNNEL_MODE_PREFERRED    0x00000040\n" \
"\n" \
"    // 1 = Transport Mode Preferred; 0 = No Preference\n" \
"#define ISCSI_SECURITY_FLAG_TRANSPORT_MODE_PREFERRED 0x00000020\n" \
"               \n" \
"    // 1 = PFS Enabled; 0 = PFS Disabled\n" \
"#define ISCSI_SECURITY_FLAG_PFS_ENABLED              0x00000010\n" \
"               \n" \
"    // 1 = Aggressive Mode Enabled; 0 = Disabled\n" \
"#define ISCSI_SECURITY_FLAG_AGGRESSIVE_MODE_ENABLED  0x00000008\n" \
"               \n" \
"    // 1 = Main Mode Enabled; 0 = MM Disabled\n" \
"#define ISCSI_SECURITY_FLAG_MAIN_MODE_ENABLED        0x00000004\n" \
"               \n" \
"    // 1 = IKE/IPSec Enabled; 0 = IKE/IPSec Disabled\n" \
"#define ISCSI_SECURITY_FLAG_IKE_IPSEC_ENABLED        0x00000002\n" \
"\n" \
"    // If set then all other ISCSI_SECURITY_FLAGS are valid                \n" \
"#define ISCSI_SECURITY_FLAG_VALID                    0x00000001                \n" \
"\n"
"#ifndef _ISCSI_ISCSIDSC_\n" \
"typedef enum\n" \
"{\n" \
"   ISCSI_DIGEST_TYPE_NONE = 0,\n" \
"   ISCSI_DIGEST_TYPE_CRC32C = 1\n" \
"} ISCSI_DIGEST_TYPES, *PISCSI_DIGEST_TYPES;\n" \
"\n" \
"typedef enum\n" \
"{\n" \
"   ISCSI_NO_AUTH_TYPE = 0,\n" \
"   ISCSI_CHAP_AUTH_TYPE = 1,\n" \
"   ISCSI_MUTUAL_CHAP_AUTH_TYPE = 2 \n" \
"} ISCSI_AUTH_TYPES, *PISCSI_AUTH_TYPES;\n" \
"#endif\n"
"//\n" \
"// bit flags for ISCSI_LOGIN_FLAGS\n" \
"//\n" \
"#ifndef _ISCSI_ISCSIDSC_\n" \
"#define ISCSI_LOGIN_FLAGS ULONG\n\n" \
"#define ISCSI_LOGIN_FLAG_REQUIRE_IPSEC                0x00000001\n" \
"#define ISCSI_LOGIN_FLAG_MULTIPATH_ENABLED            0x00000002\n" \
"#define ISCSI_LOGIN_FLAG_RESERVED1                    0x00000004\n" \
"#define ISCSI_LOGIN_FLAG_ALLOW_PORTAL_HOPPING         0x00000008\n" \
"#define ISCSI_LOGIN_FLAG_USE_RADIUS_RESPONSE          0x00000010\n" \
"#define ISCSI_LOGIN_FLAG_USE_RADIUS_VERIFICATION          0x00000020\n" \
"\n" \
"#endif\n"
    BitValues{"Require IPSEC", "Multipath Enabled", "Reserved1", "Allow Portal Hopping"}, \
    BitMap{ "0x00000001", "0x00000002", "0x00000004", "0x00000008" }
    Values{"No Authentication", \
           "CHAP", \
           "Mutual CHAP" \
          } : amended, \
    ValueMap{"0", "1", "2"}
"//\n" \
"// Bit flags for InformationSpecifies\n" \
"//\n" \
"#define ISCSI_LOGIN_OPTIONS_HEADER_DIGEST               0x00000001\n" \
"#define ISCSI_LOGIN_OPTIONS_DATA_DIGEST                 0x00000002\n" \
"#define ISCSI_LOGIN_OPTIONS_MAXIMUM_CONNECTIONS         0x00000004\n" \
"#define ISCSI_LOGIN_OPTIONS_DEFAULT_TIME_2_WAIT         0x00000008\n" \
"#define ISCSI_LOGIN_OPTIONS_DEFAULT_TIME_2_RETAIN       0x00000010\n" \
"#define ISCSI_LOGIN_OPTIONS_USERNAME                    0x00000020\n" \
"#define ISCSI_LOGIN_OPTIONS_PASSWORD                    0x00000040\n" \
"#define ISCSI_LOGIN_OPTIONS_AUTH_TYPE                   0x00000080\n" \
"\n"
     BitMap{ ISCSI_LOGIN_OPTIONS_HEADER_DIGEST, \
             ISCSI_LOGIN_OPTIONS_DATA_DIGEST, \
             ISCSI_LOGIN_OPTIONS_MAXIMUM_CONNECTIONS, \
             ISCSI_LOGIN_OPTIONS_DEFAULT_TIME_2_WAIT, \
             ISCSI_LOGIN_OPTIONS_DEFAULT_TIME_2_RETAIN \
           }, \
     BitValues{"HeaderDigest", "DataDigest", "MaxConnections", \
               "DefaultTime2Wait", "DefaultTime2Retain" } : amended
             ValueMap{ ID_IPV4_ADDR, \
                       ID_FQDN, \
                       ID_USER_FQDN, \
                       ID_IPV6_ADDR \
                       }, \
              Values{ "ID_IPV4_ADDR", \
                       "ID_FQDN", \
                       "ID_USER_FQDN", \
                       "ID_IPV6_ADDR" \
                        }
"//\n" \
"// IKE Identification payload types (from RFC 2407)\n" \
"//\n" \
"#define       ID_IPV4_ADDR                        1\n" \
"#define       ID_FQDN                             2\n" \
"#define       ID_USER_FQDN                        3\n" \
"#define       ID_IPV6_ADDR                        5\n" \
"\n"
typedef struct _ISCSI_UNIQUE_SESSION_ID
{
   ULONGLONG AdapterUnique;
   ULONGLONG AdapterSpecific;
} ISCSI_UNIQUE_SESSION_ID, *PISCSI_UNIQUE_SESSION_ID,
  ISCSI_UNIQUE_CONNECTION_ID, *PISCSI_UNIQUE_CONNECTION_ID;
typedef struct
{
    ULONG OSLUN;
    ULONGLONG TargetLUN;
} SCSI_LUN_LIST, *PSCSI_LUN_LIST;
typedef struct
{
    WCHAR InitiatorName[MAX_ISCSI_HBANAME_LEN];
    WCHAR TargetName[MAX_ISCSI_NAME_LEN + 1];
    WCHAR OSDeviceName[MAX_PATH];
    ISCSI_UNIQUE_SESSION_ID SessionId;
    ULONG OSBusNumber;
    ULONG OSTargetNumber;
    ULONG LUNCount;
    [size_is(LUNCount)]
    PSCSI_LUN_LIST LUNList;
} ISCSI_TARGET_MAPPINGW, *PISCSI_TARGET_MAPPINGW;
typedef struct
{
    CHAR InitiatorName[MAX_ISCSI_HBANAME_LEN];
    CHAR TargetName[MAX_ISCSI_NAME_LEN + 1];
    CHAR OSDeviceName[MAX_PATH];
    ISCSI_UNIQUE_SESSION_ID SessionId;
    ULONG OSBusNumber;
    ULONG OSTargetNumber;
    ULONG LUNCount;
    [size_is(LUNCount)]
    PSCSI_LUN_LIST LUNList;
} ISCSI_TARGET_MAPPINGA, *PISCSI_TARGET_MAPPINGA;
typedef ISCSI_TARGET_MAPPINGW ISCSI_TARGET_MAPPING;
typedef PISCSI_TARGET_MAPPINGW PISCSI_TARGET_MAPPING;
typedef struct
{
    WCHAR SymbolicName[MAX_ISCSI_PORTAL_NAME_LEN];
    WCHAR Address[MAX_ISCSI_PORTAL_ADDRESS_LEN];
    USHORT Socket;
} ISCSI_TARGET_PORTALW, *PISCSI_TARGET_PORTALW;
typedef struct
{
    CHAR SymbolicName[MAX_ISCSI_PORTAL_NAME_LEN];
    CHAR Address[MAX_ISCSI_PORTAL_ADDRESS_LEN];
    USHORT Socket;
} ISCSI_TARGET_PORTALA, *PISCSI_TARGET_PORTALA;
typedef ISCSI_TARGET_PORTALW ISCSI_TARGET_PORTAL;
typedef PISCSI_TARGET_PORTALW PISCSI_TARGET_PORTAL;
typedef struct
{
    WCHAR InitiatorName[MAX_ISCSI_HBANAME_LEN];
    ULONG InitiatorPortNumber;
    WCHAR SymbolicName[MAX_ISCSI_PORTAL_NAME_LEN];
    WCHAR Address[MAX_ISCSI_PORTAL_ADDRESS_LEN];
    USHORT Socket;
} ISCSI_TARGET_PORTAL_INFOW, *PISCSI_TARGET_PORTAL_INFOW;
typedef struct
{
    CHAR InitiatorName[MAX_ISCSI_HBANAME_LEN];
    ULONG InitiatorPortNumber;
    CHAR SymbolicName[MAX_ISCSI_PORTAL_NAME_LEN];
    CHAR Address[MAX_ISCSI_PORTAL_ADDRESS_LEN];
    USHORT Socket;
} ISCSI_TARGET_PORTAL_INFOA, *PISCSI_TARGET_PORTAL_INFOA;
typedef ISCSI_TARGET_PORTAL_INFOW ISCSI_TARGET_PORTAL_INFO;
typedef PISCSI_TARGET_PORTAL_INFOW PISCSI_TARGET_PORTAL_INFO;
typedef struct
{
    WCHAR InitiatorName[MAX_ISCSI_HBANAME_LEN];
    ULONG InitiatorPortNumber;
    WCHAR SymbolicName[MAX_ISCSI_PORTAL_NAME_LEN];
    WCHAR Address[MAX_ISCSI_PORTAL_ADDRESS_LEN];
    USHORT Socket;
    ISCSI_SECURITY_FLAGS SecurityFlags;
    ISCSI_LOGIN_OPTIONS LoginOptions;
} ISCSI_TARGET_PORTAL_INFO_EXW, *PISCSI_TARGET_PORTAL_INFO_EXW;
typedef struct
{
    CHAR InitiatorName[MAX_ISCSI_HBANAME_LEN];
    ULONG InitiatorPortNumber;
    CHAR SymbolicName[MAX_ISCSI_PORTAL_NAME_LEN];
    CHAR Address[MAX_ISCSI_PORTAL_ADDRESS_LEN];
    USHORT Socket;
    ISCSI_SECURITY_FLAGS SecurityFlags;
    ISCSI_LOGIN_OPTIONS LoginOptions;
} ISCSI_TARGET_PORTAL_INFO_EXA, *PISCSI_TARGET_PORTAL_INFO_EXA;
typedef ISCSI_TARGET_PORTAL_INFO_EXW ISCSI_TARGET_PORTAL_INFO_EX;
typedef PISCSI_TARGET_PORTAL_INFO_EXW PISCSI_TARGET_PORTAL_INFO_EX;
typedef struct
{
    ULONG Count;
    ISCSI_TARGET_PORTALW Portals[1];
} ISCSI_TARGET_PORTAL_GROUPW, *PISCSI_TARGET_PORTAL_GROUPW;
typedef struct
{
    ULONG Count;
    ISCSI_TARGET_PORTALA Portals[1];
} ISCSI_TARGET_PORTAL_GROUPA, *PISCSI_TARGET_PORTAL_GROUPA;
typedef ISCSI_TARGET_PORTAL_GROUPW ISCSI_TARGET_PORTAL_GROUP;
typedef PISCSI_TARGET_PORTAL_GROUPW PISCSI_TARGET_PORTAL_GROUP;
typedef struct
{
    ISCSI_UNIQUE_CONNECTION_ID ConnectionId;
    PWCHAR InitiatorAddress;
    PWCHAR TargetAddress;
    USHORT InitiatorSocket;
    USHORT TargetSocket;
    UCHAR CID[2];
} ISCSI_CONNECTION_INFOW, *PISCSI_CONNECTION_INFOW;
typedef struct
{
    ISCSI_UNIQUE_SESSION_ID SessionId;
    PWCHAR InitiatorName;
    PWCHAR TargetNodeName;
    PWCHAR TargetName;
    UCHAR ISID[6];
    UCHAR TSID[2];
    ULONG ConnectionCount;
    PISCSI_CONNECTION_INFOW Connections;
} ISCSI_SESSION_INFOW, *PISCSI_SESSION_INFOW;
typedef struct
{
    ISCSI_UNIQUE_CONNECTION_ID ConnectionId;
    PCHAR InitiatorAddress;
    PCHAR TargetAddress;
    USHORT InitiatorSocket;
    USHORT TargetSocket;
    UCHAR CID[2];
} ISCSI_CONNECTION_INFOA, *PISCSI_CONNECTION_INFOA;
typedef struct
{
    ISCSI_UNIQUE_SESSION_ID SessionId;
    PCHAR InitiatorName;
    PCHAR TargetNodeName;
    PCHAR TargetName;
    UCHAR ISID[6];
    UCHAR TSID[2];
    ULONG ConnectionCount;
    PISCSI_CONNECTION_INFOA Connections;
} ISCSI_SESSION_INFOA, *PISCSI_SESSION_INFOA;
typedef ISCSI_SESSION_INFOW ISCSI_SESSION_INFO;
typedef PISCSI_SESSION_INFOW PISCSI_SESSION_INFO;
typedef ISCSI_CONNECTION_INFOW ISCSI_CONNECTION_INFO;
typedef PISCSI_CONNECTION_INFOW PISCSI_CONNECTION_INFO;
typedef struct
{
    ISCSI_UNIQUE_CONNECTION_ID ConnectionId;
    UCHAR State;
    UCHAR Protocol;
    UCHAR HeaderDigest;
    UCHAR DataDigest;
    ULONG MaxRecvDataSegmentLength;
    ISCSI_AUTH_TYPES AuthType;
    ULONGLONG EstimatedThroughput;
    ULONG MaxDatagramSize;
} ISCSI_CONNECTION_INFO_EX, *PISCSI_CONNECTION_INFO_EX;
typedef struct
{
    ISCSI_UNIQUE_SESSION_ID SessionId;
    BOOLEAN InitialR2t;
    BOOLEAN ImmediateData;
    UCHAR Type;
    BOOLEAN DataSequenceInOrder;
    BOOLEAN DataPduInOrder;
    UCHAR ErrorRecoveryLevel;
    ULONG MaxOutstandingR2t;
    ULONG FirstBurstLength;
    ULONG MaxBurstLength;
    ULONG MaximumConnections;
    ULONG ConnectionCount;
    PISCSI_CONNECTION_INFO_EX Connections;
} ISCSI_SESSION_INFO_EX, *PISCSI_SESSION_INFO_EX;
typedef struct
{
    WCHAR InitiatorName[MAX_ISCSI_HBANAME_LEN];
    WCHAR TargetName[MAX_ISCSI_NAME_LEN + 1];
    SCSI_ADDRESS ScsiAddress;
    GUID DeviceInterfaceType;
    WCHAR DeviceInterfaceName[MAX_PATH];
    WCHAR LegacyName[MAX_PATH];
    STORAGE_DEVICE_NUMBER StorageDeviceNumber;
    DWORD DeviceInstance;
} ISCSI_DEVICE_ON_SESSIONW, *PISCSI_DEVICE_ON_SESSIONW;
typedef struct
{
    CHAR InitiatorName[MAX_ISCSI_HBANAME_LEN];
    CHAR TargetName[MAX_ISCSI_NAME_LEN + 1];
    SCSI_ADDRESS ScsiAddress;
    GUID DeviceInterfaceType;
    CHAR DeviceInterfaceName[MAX_PATH];
    CHAR LegacyName[MAX_PATH];
    STORAGE_DEVICE_NUMBER StorageDeviceNumber;
    DWORD DeviceInstance;
} ISCSI_DEVICE_ON_SESSIONA, *PISCSI_DEVICE_ON_SESSIONA;
typedef ISCSI_DEVICE_ON_SESSIONW ISCSI_DEVICE_ON_SESSION;
typedef PISCSI_DEVICE_ON_SESSIONW PISCSI_DEVICE_ON_SESSION;
typedef struct
{
    WCHAR TargetName[MAX_ISCSI_NAME_LEN + 1];
    BOOLEAN IsInformationalSession;
    WCHAR InitiatorInstance[MAX_ISCSI_HBANAME_LEN];
    ULONG InitiatorPortNumber;
    ISCSI_TARGET_PORTALW TargetPortal;
    ISCSI_SECURITY_FLAGS SecurityFlags;
    PISCSI_TARGET_MAPPINGW Mappings;
    ISCSI_LOGIN_OPTIONS LoginOptions;
} PERSISTENT_ISCSI_LOGIN_INFOW, *PPERSISTENT_ISCSI_LOGIN_INFOW;
typedef struct
{
    CHAR TargetName[MAX_ISCSI_NAME_LEN + 1];
    BOOLEAN IsInformationalSession;
    CHAR InitiatorInstance[MAX_ISCSI_HBANAME_LEN];
    ULONG InitiatorPortNumber;
    ISCSI_TARGET_PORTALA TargetPortal;
    ISCSI_SECURITY_FLAGS SecurityFlags;
    PISCSI_TARGET_MAPPINGA Mappings;
    ISCSI_LOGIN_OPTIONS LoginOptions;
} PERSISTENT_ISCSI_LOGIN_INFOA, *PPERSISTENT_ISCSI_LOGIN_INFOA;
typedef PERSISTENT_ISCSI_LOGIN_INFOW PERSISTENT_ISCSI_LOGIN_INFO;
typedef PPERSISTENT_ISCSI_LOGIN_INFOW PPERSISTENT_ISCSI_LOGIN_INFO;
typedef enum
{
    ISCSI_TCP_PROTOCOL_TYPE
} TARGETPROTOCOLTYPE, *PTARGETPROTOCOLTYPE;
typedef enum
{
    ProtocolType,
    TargetAlias,
    DiscoveryMechanisms,
    PortalGroups,
    PersistentTargetMappings,
    InitiatorName,
    TargetFlags,
    LoginOptions
} TARGET_INFORMATION_CLASS, *PTARGET_INFORMATION_CLASS;
typedef struct
{
    ULONG MajorVersion;
    ULONG MinorVersion;
    ULONG BuildNumber;
} ISCSI_VERSION_INFO, *PISCSI_VERSION_INFO;
ISDSC_STATUS ISDSC_API GetIScsiVersionInformation(
    PISCSI_VERSION_INFO VersionInfo
    );
ISDSC_STATUS ISDSC_API GetIScsiTargetInformationW(
    IN _In_ PWSTR TargetName,
    IN _In_opt_ PWSTR DiscoveryMechanism,
    IN TARGET_INFORMATION_CLASS InfoClass,
    IN OUT PULONG BufferSize,
    OUT PVOID Buffer
    );
ISDSC_STATUS ISDSC_API GetIScsiTargetInformationA(
    IN _In_ PSTR TargetName,
    IN _In_opt_ PSTR DiscoveryMechanism,
    IN TARGET_INFORMATION_CLASS InfoClass,
    IN OUT PULONG BufferSize,
    OUT PVOID Buffer
    );
ISDSC_STATUS ISDSC_API AddIScsiConnectionW(
    IN PISCSI_UNIQUE_SESSION_ID UniqueSessionId,
    IN PVOID Reserved,
    IN ULONG InitiatorPortNumber,
    IN PISCSI_TARGET_PORTALW TargetPortal,
    IN OPTIONAL ISCSI_SECURITY_FLAGS SecurityFlags,
    IN OPTIONAL PISCSI_LOGIN_OPTIONS LoginOptions,
    IN OPTIONAL ULONG KeySize,
    IN OPTIONAL _In_reads_opt_(KeySize) PCHAR Key,
    OUT OPTIONAL PISCSI_UNIQUE_CONNECTION_ID ConnectionId
    );
ISDSC_STATUS ISDSC_API AddIScsiConnectionA(
    IN PISCSI_UNIQUE_SESSION_ID UniqueSessionId,
    IN PVOID Reserved,
    IN ULONG InitiatorPortNumber,
    IN PISCSI_TARGET_PORTALA TargetPortal,
    IN OPTIONAL ISCSI_SECURITY_FLAGS SecurityFlags,
    IN OPTIONAL PISCSI_LOGIN_OPTIONS LoginOptions,
    IN OPTIONAL ULONG KeySize,
    IN OPTIONAL _In_reads_opt_(KeySize) PCHAR Key,
    OUT OPTIONAL PISCSI_UNIQUE_CONNECTION_ID ConnectionId
    );
ISDSC_STATUS ISDSC_API RemoveIScsiConnection(
    IN PISCSI_UNIQUE_SESSION_ID UniqueSessionId,
    IN PISCSI_UNIQUE_CONNECTION_ID ConnectionId
    );
ISDSC_STATUS ISDSC_API ReportIScsiTargetsW(
    IN BOOLEAN ForceUpdate,
    IN OUT PULONG BufferSize,
    OUT _Inout_updates_opt_(*BufferSize) PWCHAR Buffer
    );
ISDSC_STATUS ISDSC_API ReportIScsiTargetsA(
    IN BOOLEAN ForceUpdate,
    IN OUT PULONG BufferSize,
    OUT _Inout_updates_opt_(*BufferSize) PCHAR Buffer
    );
ISDSC_STATUS ISDSC_API AddIScsiStaticTargetW(
    IN _In_ PWSTR TargetName,
    IN OPTIONAL _In_opt_ PWSTR TargetAlias,
    IN ISCSI_TARGET_FLAGS TargetFlags,
    IN BOOLEAN Persist,
    IN OPTIONAL PISCSI_TARGET_MAPPINGW Mappings,
    IN OPTIONAL PISCSI_LOGIN_OPTIONS LoginOptions,
    IN OPTIONAL PISCSI_TARGET_PORTAL_GROUPW PortalGroup
    );
ISDSC_STATUS ISDSC_API AddIScsiStaticTargetA(
    IN _In_ PSTR TargetName,
    IN OPTIONAL _In_opt_ PSTR TargetAlias,
    IN ISCSI_TARGET_FLAGS TargetFlags,
    IN BOOLEAN Persist,
    IN OPTIONAL PISCSI_TARGET_MAPPINGA Mappings,
    IN OPTIONAL PISCSI_LOGIN_OPTIONS LoginOptions,
    IN OPTIONAL PISCSI_TARGET_PORTAL_GROUPA PortalGroup
    );
ISDSC_STATUS ISDSC_API RemoveIScsiStaticTargetW(
    IN _In_ PWSTR TargetName
    );
ISDSC_STATUS ISDSC_API RemoveIScsiStaticTargetA(
    IN _In_ PSTR TargetName
    );
ISDSC_STATUS ISDSC_API AddIScsiSendTargetPortalW(
    IN OPTIONAL _In_opt_ PWSTR InitiatorInstance,
    IN OPTIONAL ULONG InitiatorPortNumber,
    IN OPTIONAL PISCSI_LOGIN_OPTIONS LoginOptions,
    IN OPTIONAL ISCSI_SECURITY_FLAGS SecurityFlags,
    IN PISCSI_TARGET_PORTALW Portal
    );
ISDSC_STATUS ISDSC_API AddIScsiSendTargetPortalA(
    IN OPTIONAL _In_opt_ PSTR InitiatorInstance,
    IN OPTIONAL ULONG InitiatorPortNumber,
    IN OPTIONAL PISCSI_LOGIN_OPTIONS LoginOptions,
    IN OPTIONAL ISCSI_SECURITY_FLAGS SecurityFlags,
    IN PISCSI_TARGET_PORTALA Portal
    );
ISDSC_STATUS ISDSC_API RemoveIScsiSendTargetPortalW(
    IN OPTIONAL PWSTR _In_opt_ InitiatorInstance,
    IN OPTIONAL ULONG InitiatorPortNumber,
    IN PISCSI_TARGET_PORTALW Portal
    );
ISDSC_STATUS ISDSC_API RemoveIScsiSendTargetPortalA(
    IN OPTIONAL PSTR _In_opt_ InitiatorInstance,
    IN OPTIONAL ULONG InitiatorPortNumber,
    IN PISCSI_TARGET_PORTALA Portal
    );
ISDSC_STATUS ISDSC_API RefreshIScsiSendTargetPortalW(
    IN OPTIONAL PWSTR _In_opt_ InitiatorInstance,
    IN OPTIONAL ULONG InitiatorPortNumber,
    IN PISCSI_TARGET_PORTALW Portal
    );
ISDSC_STATUS ISDSC_API RefreshIScsiSendTargetPortalA(
    IN OPTIONAL PSTR _In_opt_ InitiatorInstance,
    IN OPTIONAL ULONG InitiatorPortNumber,
    IN PISCSI_TARGET_PORTALA Portal
    );
ISDSC_STATUS ISDSC_API ReportIScsiSendTargetPortalsW(
    IN OUT PULONG PortalCount,
    IN OUT PISCSI_TARGET_PORTAL_INFOW PortalInfo
    );
ISDSC_STATUS ISDSC_API ReportIScsiSendTargetPortalsA(
    IN OUT PULONG PortalCount,
    IN OUT PISCSI_TARGET_PORTAL_INFOA PortalInfo
    );
ISDSC_STATUS ISDSC_API ReportIScsiSendTargetPortalsExW(
    OUT PULONG PortalCount,
    IN OUT PULONG PortalInfoSize,
    IN OUT PISCSI_TARGET_PORTAL_INFO_EXW PortalInfo
    );
ISDSC_STATUS ISDSC_API ReportIScsiSendTargetPortalsExA(
    OUT PULONG PortalCount,
    IN OUT PULONG PortalInfoSize,
    IN OUT PISCSI_TARGET_PORTAL_INFO_EXA PortalInfo
    );
ISDSC_STATUS ISDSC_API LoginIScsiTargetW(
    IN _In_ PWSTR TargetName,
    IN BOOLEAN IsInformationalSession,
    IN OPTIONAL _In_opt_ PWSTR InitiatorInstance,
    IN OPTIONAL ULONG InitiatorPortNumber,
    IN OPTIONAL PISCSI_TARGET_PORTALW TargetPortal,
    IN OPTIONAL ISCSI_SECURITY_FLAGS SecurityFlags,
    IN OPTIONAL PISCSI_TARGET_MAPPINGW Mappings,
    IN OPTIONAL PISCSI_LOGIN_OPTIONS LoginOptions,
    IN OPTIONAL ULONG KeySize,
    IN OPTIONAL _In_reads_opt_(KeySize) PCHAR Key,
    IN BOOLEAN IsPersistent,
    OUT PISCSI_UNIQUE_SESSION_ID UniqueSessionId,
    OUT PISCSI_UNIQUE_CONNECTION_ID UniqueConnectionId
    );
ISDSC_STATUS ISDSC_API LoginIScsiTargetA(
    IN PSTR _In_ TargetName,
    IN BOOLEAN IsInformationalSession,
    IN OPTIONAL _In_opt_ PSTR InitiatorInstance,
    IN OPTIONAL ULONG InitiatorPortNumber,
    IN OPTIONAL PISCSI_TARGET_PORTALA TargetPortal,
    IN OPTIONAL ISCSI_SECURITY_FLAGS SecurityFlags,
    IN OPTIONAL PISCSI_TARGET_MAPPINGA Mappings,
    IN OPTIONAL PISCSI_LOGIN_OPTIONS LoginOptions,
    IN OPTIONAL ULONG KeySize,
    IN OPTIONAL _In_reads_opt_(KeySize) PCHAR Key,
    IN BOOLEAN IsPersistent,
    OUT PISCSI_UNIQUE_SESSION_ID UniqueSessionId,
    OUT PISCSI_UNIQUE_CONNECTION_ID UniqueConnectionId
    );
ISDSC_STATUS ISDSC_API ReportIScsiPersistentLoginsW(
    OUT ULONG *Count,
    IN OUT PPERSISTENT_ISCSI_LOGIN_INFOW PersistentLoginInfo,
    IN OUT PULONG BufferSizeInBytes
    );
ISDSC_STATUS ISDSC_API ReportIScsiPersistentLoginsA(
    OUT ULONG *Count,
    IN OUT PPERSISTENT_ISCSI_LOGIN_INFOA PersistentLoginInfo,
    IN OUT PULONG BufferSizeInBytes
    );
ISDSC_STATUS ISDSC_API LogoutIScsiTarget(
    IN PISCSI_UNIQUE_SESSION_ID UniqueSessionId
    );
ISDSC_STATUS ISDSC_API RemoveIScsiPersistentTargetW(
    IN PWSTR _In_ InitiatorInstance,
    IN OPTIONAL ULONG InitiatorPortNumber,
    IN PWSTR _In_ TargetName,
    IN PISCSI_TARGET_PORTALW Portal
    );
ISDSC_STATUS ISDSC_API RemoveIScsiPersistentTargetA(
    IN PSTR _In_ InitiatorInstance,
    IN OPTIONAL ULONG InitiatorPortNumber,
    IN PSTR _In_ TargetName,
    IN PISCSI_TARGET_PORTALA Portal
    );
ISDSC_STATUS ISDSC_API SendScsiInquiry(
    IN PISCSI_UNIQUE_SESSION_ID UniqueSessionId,
    IN ULONGLONG Lun,
    IN UCHAR EvpdCmddt,
    IN UCHAR PageCode,
    OUT PUCHAR ScsiStatus,
    IN OUT PULONG ResponseSize,
    OUT PUCHAR ResponseBuffer,
    IN OUT PULONG SenseSize,
    OUT PUCHAR SenseBuffer
    );
ISDSC_STATUS ISDSC_API SendScsiReadCapacity(
    IN PISCSI_UNIQUE_SESSION_ID UniqueSessionId,
    IN ULONGLONG Lun,
    OUT PUCHAR ScsiStatus,
    IN OUT PULONG ResponseSize,
    OUT PUCHAR ResponseBuffer,
    IN OUT PULONG SenseSize,
    OUT PUCHAR SenseBuffer
    );
ISDSC_STATUS ISDSC_API SendScsiReportLuns(
    IN PISCSI_UNIQUE_SESSION_ID UniqueSessionId,
    OUT PUCHAR ScsiStatus,
    IN OUT PULONG ResponseSize,
    OUT PUCHAR ResponseBuffer,
    IN OUT PULONG SenseSize,
    OUT PUCHAR SenseBuffer
    );
ISDSC_STATUS ISDSC_API ReportIScsiInitiatorListW(
    IN OUT ULONG *BufferSize,
    OUT _Inout_updates_opt_(*BufferSize) PWCHAR Buffer
    );
ISDSC_STATUS ISDSC_API ReportIScsiInitiatorListA(
    IN OUT PULONG BufferSize,
    OUT _Inout_updates_opt_(*BufferSize) PCHAR Buffer
    );
ISDSC_STATUS ISDSC_API ReportActiveIScsiTargetMappingsW(
    IN OUT PULONG BufferSize,
    OUT PULONG MappingCount,
    OUT PISCSI_TARGET_MAPPINGW Mappings
    );
ISDSC_STATUS ISDSC_API ReportActiveIScsiTargetMappingsA(
    IN OUT PULONG BufferSize,
    OUT PULONG MappingCount,
    OUT PISCSI_TARGET_MAPPINGA Mappings
    );
ISDSC_STATUS ISDSC_API SetIScsiTunnelModeOuterAddressW(
    IN OPTIONAL _In_opt_ PWSTR InitiatorName,
    IN ULONG InitiatorPortNumber,
    IN PWSTR _In_opt_ DestinationAddress,
    IN PWSTR _In_opt_ OuterModeAddress,
    IN BOOLEAN Persist
    );
ISDSC_STATUS ISDSC_API SetIScsiTunnelModeOuterAddressA(
    IN OPTIONAL _In_opt_ PSTR InitiatorName,
    IN ULONG InitiatorPortNumber,
    IN PSTR _In_opt_ DestinationAddress,
    IN PSTR _In_opt_ OuterModeAddress,
    IN BOOLEAN Persist
    );
ISDSC_STATUS ISDSC_API SetIScsiIKEInfoW(
    IN OPTIONAL _In_opt_ PWSTR InitiatorName,
    IN ULONG InitiatorPortNumber,
    IN PIKE_AUTHENTICATION_INFORMATION AuthInfo,
    IN BOOLEAN Persist
    );
ISDSC_STATUS ISDSC_API SetIScsiIKEInfoA(
    IN OPTIONAL _In_opt_ PSTR InitiatorName,
    IN ULONG InitiatorPortNumber,
    IN PIKE_AUTHENTICATION_INFORMATION AuthInfo,
    IN BOOLEAN Persist
    );
ISDSC_STATUS ISDSC_API GetIScsiIKEInfoW(
    IN OPTIONAL _In_opt_ PWSTR InitiatorName,
    IN ULONG InitiatorPortNumber,
    IN PULONG Reserved,
    IN OUT PIKE_AUTHENTICATION_INFORMATION AuthInfo
    );
ISDSC_STATUS ISDSC_API GetIScsiIKEInfoA(
    IN OPTIONAL _In_opt_ PSTR InitiatorName,
    IN ULONG InitiatorPortNumber,
    IN PULONG Reserved,
    IN OUT PIKE_AUTHENTICATION_INFORMATION AuthInfo
    );
ISDSC_STATUS ISDSC_API SetIScsiGroupPresharedKey(
    IN ULONG KeyLength,
    IN PUCHAR Key,
    BOOLEAN Persist
    );
ISDSC_STATUS ISDSC_API SetIScsiInitiatorCHAPSharedSecret(
    IN ULONG SharedSecretLength,
    IN PUCHAR SharedSecret
    );
ISDSC_STATUS ISDSC_API SetIScsiInitiatorRADIUSSharedSecret(
    IN ULONG SharedSecretLength,
    IN PUCHAR SharedSecret
    );
ISDSC_STATUS ISDSC_API SetIScsiInitiatorNodeNameW(
    IN OPTIONAL _In_opt_ PWSTR InitiatorNodeName
    );
ISDSC_STATUS ISDSC_API SetIScsiInitiatorNodeNameA(
    IN OPTIONAL _In_opt_ PSTR InitiatorNodeName
    );
ISDSC_STATUS ISDSC_API GetIScsiInitiatorNodeNameW(
     _Out_writes_(MAX_ISCSI_NAME_LEN+1) PWCHAR InitiatorNodeName
    );
ISDSC_STATUS ISDSC_API GetIScsiInitiatorNodeNameA(
     _Out_writes_(MAX_ISCSI_NAME_LEN+1) PCHAR InitiatorNodeName
    );
ISDSC_STATUS ISDSC_API AddISNSServerW(
    IN _In_ PWSTR Address
    );
ISDSC_STATUS ISDSC_API AddISNSServerA(
    IN _In_ PSTR Address
    );
ISDSC_STATUS ISDSC_API RemoveISNSServerW(
    IN _In_ PWSTR Address
    );
ISDSC_STATUS ISDSC_API RemoveISNSServerA(
    IN _In_ PSTR Address
    );
ISDSC_STATUS ISDSC_API RefreshISNSServerW(
    IN _In_ PWSTR Address
    );
ISDSC_STATUS ISDSC_API RefreshISNSServerA(
    IN _In_ PSTR Address
    );
ISDSC_STATUS ISDSC_API ReportISNSServerListW(
    IN OUT PULONG BufferSizeInChar,
    OUT _Out_writes_opt_(*BufferSizeInChar) PWCHAR Buffer
    );
ISDSC_STATUS ISDSC_API ReportISNSServerListA(
    IN OUT PULONG BufferSizeInChar,
    OUT _Out_writes_opt_(*BufferSizeInChar) PCHAR Buffer
    );
ISDSC_STATUS ISDSC_API GetIScsiSessionListW(
    IN OUT ULONG *BufferSize,
    OUT ULONG *SessionCount,
    OUT OPTIONAL PISCSI_SESSION_INFOW SessionInfo
    );
ISDSC_STATUS ISDSC_API GetIScsiSessionListA(
    IN OUT ULONG *BufferSize,
    OUT ULONG *SessionCount,
    OUT OPTIONAL PISCSI_SESSION_INFOA SessionInfo
    );
ISDSC_STATUS ISDSC_API GetIScsiSessionListEx (
    IN OUT ULONG *BufferSize,
    OUT ULONG *SessionCountPtr,
    OUT OPTIONAL PISCSI_SESSION_INFO_EX SessionInfo
);
ISDSC_STATUS ISDSC_API GetDevicesForIScsiSessionW(
    IN PISCSI_UNIQUE_SESSION_ID UniqueSessionId,
    IN OUT ULONG *DeviceCount,
    OUT PISCSI_DEVICE_ON_SESSIONW Devices
);
ISDSC_STATUS ISDSC_API GetDevicesForIScsiSessionA(
    IN PISCSI_UNIQUE_SESSION_ID UniqueSessionId,
    IN OUT ULONG *DeviceCount,
    OUT PISCSI_DEVICE_ON_SESSIONA Devices
);
ISDSC_STATUS ISDSC_API SetupPersistentIScsiVolumes(
    );
ISDSC_STATUS ISDSC_API SetupPersistentIScsiDevices(
    );
ISDSC_STATUS ISDSC_API AddPersistentIScsiDeviceW(
    IN _In_ PWSTR DevicePath
);
ISDSC_STATUS ISDSC_API AddPersistentIScsiDeviceA(
    IN _In_ PSTR DevicePath
);
ISDSC_STATUS ISDSC_API RemovePersistentIScsiDeviceW(
    IN _In_ PWSTR DevicePath
);
ISDSC_STATUS ISDSC_API RemovePersistentIScsiDeviceA(
    IN _In_ PSTR DevicePath
);
ISDSC_STATUS ISDSC_API ClearPersistentIScsiDevices(
);
ISDSC_STATUS ISDSC_API ReportPersistentIScsiDevicesW(
    IN OUT PULONG BufferSizeInChar,
    OUT _Out_writes_opt_(*BufferSizeInChar) PWCHAR Buffer
);
ISDSC_STATUS ISDSC_API ReportPersistentIScsiDevicesA(
    IN OUT PULONG BufferSizeInChar,
    OUT _Out_writes_opt_(*BufferSizeInChar) PCHAR Buffer
);
ISDSC_STATUS ISDSC_API ReportIScsiTargetPortalsW(
    IN OPTIONAL _In_opt_ PWSTR InitiatorName,
    IN PWSTR _In_ TargetName,
    IN OPTIONAL PUSHORT TargetPortalTag,
    IN OUT PULONG ElementCount,
    OUT PISCSI_TARGET_PORTALW Portals
    );
ISDSC_STATUS ISDSC_API ReportIScsiTargetPortalsA(
    IN OPTIONAL _In_opt_ PSTR InitiatorName,
    IN PSTR _In_ TargetName,
    IN OPTIONAL PUSHORT TargetPortalTag,
    IN OUT PULONG ElementCount,
    OUT PISCSI_TARGET_PORTALA Portals
    );
ISDSC_STATUS ISDSC_API AddRadiusServerW(
    IN _In_ PWSTR Address
    );
ISDSC_STATUS ISDSC_API AddRadiusServerA(
    IN _In_ PSTR Address
    );
ISDSC_STATUS ISDSC_API RemoveRadiusServerW(
    IN _In_ PWSTR Address
    );
ISDSC_STATUS ISDSC_API RemoveRadiusServerA(
    IN _In_ PSTR Address
    );
ISDSC_STATUS ISDSC_API ReportRadiusServerListW(
    IN OUT PULONG BufferSizeInChar,
    OUT _Out_writes_opt_(*BufferSizeInChar) PWCHAR Buffer
    );
ISDSC_STATUS ISDSC_API ReportRadiusServerListA(
    IN OUT PULONG BufferSizeInChar,
    OUT _Out_writes_opt_(*BufferSizeInChar) PCHAR Buffer
    );
#endif
}
