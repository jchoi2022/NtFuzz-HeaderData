#include <iscsidef.h>
    { 0x7a2c6c2b,0xe5a5,0x49ad, { 0xad,0x68,0x13,0x30,0x89,0xac,0xd7,0x4d } }
DEFINE_GUID(MSiSCSI_TCPIPConfig_GUID, \
            0x7a2c6c2b,0xe5a5,0x49ad,0xad,0x68,0x13,0x30,0x89,0xac,0xd7,0x4d);
typedef struct _MSiSCSI_TCPIPConfig
{
    BOOLEAN UseLinkLocalAddress;
    #define MSiSCSI_TCPIPConfig_UseLinkLocalAddress_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_TCPIPConfig_UseLinkLocalAddress_ID 1
    BOOLEAN EnableDHCP;
    #define MSiSCSI_TCPIPConfig_EnableDHCP_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_TCPIPConfig_EnableDHCP_ID 2
    BOOLEAN UseDHCPForDNS;
    #define MSiSCSI_TCPIPConfig_UseDHCPForDNS_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_TCPIPConfig_UseDHCPForDNS_ID 3
    ULONG IPVersions;
    #define MSiSCSI_TCPIPConfig_IPVersions_SIZE sizeof(ULONG)
    #define MSiSCSI_TCPIPConfig_IPVersions_ID 4
    ISCSI_IP_Address IpAddress;
    #define MSiSCSI_TCPIPConfig_IpAddress_SIZE sizeof(ISCSI_IP_Address)
    #define MSiSCSI_TCPIPConfig_IpAddress_ID 5
    ISCSI_IP_Address DefaultGateway;
    #define MSiSCSI_TCPIPConfig_DefaultGateway_SIZE sizeof(ISCSI_IP_Address)
    #define MSiSCSI_TCPIPConfig_DefaultGateway_ID 6
    ISCSI_IP_Address SubnetMask;
    #define MSiSCSI_TCPIPConfig_SubnetMask_SIZE sizeof(ISCSI_IP_Address)
    #define MSiSCSI_TCPIPConfig_SubnetMask_ID 7
    ISCSI_IP_Address PreferredDNSServer;
    #define MSiSCSI_TCPIPConfig_PreferredDNSServer_SIZE sizeof(ISCSI_IP_Address)
    #define MSiSCSI_TCPIPConfig_PreferredDNSServer_ID 8
    ISCSI_IP_Address AlternateDNSServer;
    #define MSiSCSI_TCPIPConfig_AlternateDNSServer_SIZE sizeof(ISCSI_IP_Address)
    #define MSiSCSI_TCPIPConfig_AlternateDNSServer_ID 9
} MSiSCSI_TCPIPConfig, *PMSiSCSI_TCPIPConfig;
typedef enum
{
    ISCSI_NIC_LINKSTATE_DISCONNECTED = 0,
    ISCSI_NIC_LINKSTATE_CONNECTED = 1
} ISCSI_NIC_LINKSTATE, *PISCSI_NIC_LINKSTATE;
    { 0xc75258e9,0xbe79,0x4a48, { 0xa2,0x3d,0xee,0xb6,0xf8,0xfb,0x94,0x0c } }
DEFINE_GUID(MSiSCSI_NICConfig_GUID, \
            0xc75258e9,0xbe79,0x4a48,0xa2,0x3d,0xee,0xb6,0xf8,0xfb,0x94,0x0c);
typedef struct _MSiSCSI_NICConfig
{
    ULONG LinkSpeed;
    #define MSiSCSI_NICConfig_LinkSpeed_SIZE sizeof(ULONG)
    #define MSiSCSI_NICConfig_LinkSpeed_ID 1
    ULONG MaxLinkSpeed;
    #define MSiSCSI_NICConfig_MaxLinkSpeed_SIZE sizeof(ULONG)
    #define MSiSCSI_NICConfig_MaxLinkSpeed_ID 2
    ULONG LinkState;
    #define MSiSCSI_NICConfig_LinkState_SIZE sizeof(ULONG)
    #define MSiSCSI_NICConfig_LinkState_ID 3
    ULONG MaxFrameSize;
    #define MSiSCSI_NICConfig_MaxFrameSize_SIZE sizeof(ULONG)
    #define MSiSCSI_NICConfig_MaxFrameSize_ID 4
    UCHAR MacAddress[6];
    #define MSiSCSI_NICConfig_MacAddress_SIZE sizeof(UCHAR[6])
    #define MSiSCSI_NICConfig_MacAddress_ID 5
} MSiSCSI_NICConfig, *PMSiSCSI_NICConfig;
    { 0x53ef8d5f,0x36f3,0x4124, { 0x8b,0x76,0xc6,0xad,0x52,0x1a,0x10,0x21 } }
DEFINE_GUID(MSiSCSI_BootConfiguration_GUID, \
            0x53ef8d5f,0x36f3,0x4124,0x8b,0x76,0xc6,0xad,0x52,0x1a,0x10,0x21);
typedef struct _MSiSCSI_BootConfiguration
{
    ULONGLONG LUN;
    #define MSiSCSI_BootConfiguration_LUN_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_BootConfiguration_LUN_ID 1
    ULONGLONG SecurityFlags;
    #define MSiSCSI_BootConfiguration_SecurityFlags_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_BootConfiguration_SecurityFlags_ID 2
    ULONG UsernameSize;
    #define MSiSCSI_BootConfiguration_UsernameSize_SIZE sizeof(ULONG)
    #define MSiSCSI_BootConfiguration_UsernameSize_ID 3
    ULONG PasswordSize;
    #define MSiSCSI_BootConfiguration_PasswordSize_SIZE sizeof(ULONG)
    #define MSiSCSI_BootConfiguration_PasswordSize_ID 4
    BOOLEAN DiscoverBootDevice;
    #define MSiSCSI_BootConfiguration_DiscoverBootDevice_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_BootConfiguration_DiscoverBootDevice_ID 5
    WCHAR InitiatorNode[223 + 1];
    #define MSiSCSI_BootConfiguration_InitiatorNode_ID 6
    WCHAR TargetName[223 + 1];
    #define MSiSCSI_BootConfiguration_TargetName_ID 7
    ISCSI_TargetPortal TargetPortal;
    #define MSiSCSI_BootConfiguration_TargetPortal_SIZE sizeof(ISCSI_TargetPortal)
    #define MSiSCSI_BootConfiguration_TargetPortal_ID 8
    ISCSI_LoginOptions LoginOptions;
    #define MSiSCSI_BootConfiguration_LoginOptions_SIZE sizeof(ISCSI_LoginOptions)
    #define MSiSCSI_BootConfiguration_LoginOptions_ID 9
    UCHAR Username[1];
    #define MSiSCSI_BootConfiguration_Username_ID 10
    #define MSiSCSI_BootConfiguration_Password_ID 11
} MSiSCSI_BootConfiguration, *PMSiSCSI_BootConfiguration;
typedef enum {
    ISCSI_ENCRYPT_NONE = 0,
    ISCSI_ENCRYPT_3DES_HMAC_SHA1 = 1,
    ISCSI_ENCRYPT_AES_CTR = 2
} ISCSI_ENCRYPTION_TYPES, *PISCSI_ENCRYPTION_TYPES;
    { 0x225b9d64,0x47a9,0x41c8, { 0x81,0xcd,0x69,0xbc,0x02,0x65,0x2d,0x87 } }
DEFINE_GUID(MSiSCSI_SecurityCapabilities_GUID, \
            0x225b9d64,0x47a9,0x41c8,0x81,0xcd,0x69,0xbc,0x02,0x65,0x2d,0x87);
typedef struct _MSiSCSI_SecurityCapabilities
{
    BOOLEAN ProtectiScsiTraffic;
    #define MSiSCSI_SecurityCapabilities_ProtectiScsiTraffic_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_SecurityCapabilities_ProtectiScsiTraffic_ID 1
    BOOLEAN ProtectiSNSTraffic;
    #define MSiSCSI_SecurityCapabilities_ProtectiSNSTraffic_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_SecurityCapabilities_ProtectiSNSTraffic_ID 2
    BOOLEAN CertificatesSupported;
    #define MSiSCSI_SecurityCapabilities_CertificatesSupported_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_SecurityCapabilities_CertificatesSupported_ID 3
    ULONG EncryptionAvailableCount;
    #define MSiSCSI_SecurityCapabilities_EncryptionAvailableCount_SIZE sizeof(ULONG)
    #define MSiSCSI_SecurityCapabilities_EncryptionAvailableCount_ID 4
    ULONG EncryptionAvailable[1];
    #define MSiSCSI_SecurityCapabilities_EncryptionAvailable_ID 5
} MSiSCSI_SecurityCapabilities, *PMSiSCSI_SecurityCapabilities;
    { 0x45755098,0x4291,0x43df, { 0x97,0x20,0xb5,0x86,0x42,0xdd,0x63,0xdf } }
DEFINE_GUID(MSiSCSI_DiscoveryConfig_GUID, \
            0x45755098,0x4291,0x43df,0x97,0x20,0xb5,0x86,0x42,0xdd,0x63,0xdf);
typedef struct _MSiSCSI_DiscoveryConfig
{
    BOOLEAN PerformiSNSDiscovery;
    #define MSiSCSI_DiscoveryConfig_PerformiSNSDiscovery_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_DiscoveryConfig_PerformiSNSDiscovery_ID 1
    BOOLEAN PerformSLPDiscovery;
    #define MSiSCSI_DiscoveryConfig_PerformSLPDiscovery_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_DiscoveryConfig_PerformSLPDiscovery_ID 2
    BOOLEAN AutomaticiSNSDiscovery;
    #define MSiSCSI_DiscoveryConfig_AutomaticiSNSDiscovery_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_DiscoveryConfig_AutomaticiSNSDiscovery_ID 3
    WCHAR InitiatorName[256 + 1];
    #define MSiSCSI_DiscoveryConfig_InitiatorName_ID 4
    ISCSI_IP_Address iSNSServer;
    #define MSiSCSI_DiscoveryConfig_iSNSServer_SIZE sizeof(ISCSI_IP_Address)
    #define MSiSCSI_DiscoveryConfig_iSNSServer_ID 5
} MSiSCSI_DiscoveryConfig, *PMSiSCSI_DiscoveryConfig;
    { 0x8eaef9d8,0xc053,0x49d3, { 0x92,0x05,0x65,0xc7,0x03,0xc2,0xec,0xc1 } }
DEFINE_GUID(MSiSCSI_RADIUSConfig_GUID, \
            0x8eaef9d8,0xc053,0x49d3,0x92,0x05,0x65,0xc7,0x03,0xc2,0xec,0xc1);
typedef struct _MSiSCSI_RADIUSConfig
{
    BOOLEAN UseRADIUSForCHAP;
    #define MSiSCSI_RADIUSConfig_UseRADIUSForCHAP_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_RADIUSConfig_UseRADIUSForCHAP_ID 1
    ULONG SharedSecretSizeInBytes;
    #define MSiSCSI_RADIUSConfig_SharedSecretSizeInBytes_SIZE sizeof(ULONG)
    #define MSiSCSI_RADIUSConfig_SharedSecretSizeInBytes_ID 2
    ISCSI_IP_Address RADIUSServer;
    #define MSiSCSI_RADIUSConfig_RADIUSServer_SIZE sizeof(ISCSI_IP_Address)
    #define MSiSCSI_RADIUSConfig_RADIUSServer_ID 3
    ISCSI_IP_Address BackupRADIUSServer;
    #define MSiSCSI_RADIUSConfig_BackupRADIUSServer_SIZE sizeof(ISCSI_IP_Address)
    #define MSiSCSI_RADIUSConfig_BackupRADIUSServer_ID 4
    ULONG Reserved;
    #define MSiSCSI_RADIUSConfig_Reserved_SIZE sizeof(ULONG)
    #define MSiSCSI_RADIUSConfig_Reserved_ID 5
    UCHAR SharedSecret[1];
    #define MSiSCSI_RADIUSConfig_SharedSecret_ID 6
} MSiSCSI_RADIUSConfig, *PMSiSCSI_RADIUSConfig;
