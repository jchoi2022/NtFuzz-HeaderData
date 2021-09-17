typedef enum {
    ISCSI_IP_ADDRESS_TEXT = 0,
    ISCSI_IP_ADDRESS_IPV4 = 1,
    ISCSI_IP_ADDRESS_IPV6 = 2,
    ISCSI_IP_ADDRESS_EMPTY = 3
} ISCSIIPADDRESSTYPE, *PISCSIIPADDRESSTYPE;
    { 0x9ac5d4a1,0x1a1a,0x48ec, { 0x8e,0x79,0x73,0x58,0x06,0xe9,0xa1,0xfa } }
DEFINE_GUID(ISCSI_IP_Address_GUID, \
            0x9ac5d4a1,0x1a1a,0x48ec,0x8e,0x79,0x73,0x58,0x06,0xe9,0xa1,0xfa);
typedef struct _ISCSI_IP_Address
{
    ULONG Type;
    #define ISCSI_IP_Address_Type_SIZE sizeof(ULONG)
    #define ISCSI_IP_Address_Type_ID 1
    ULONG IpV4Address;
    #define ISCSI_IP_Address_IpV4Address_SIZE sizeof(ULONG)
    #define ISCSI_IP_Address_IpV4Address_ID 2
    UCHAR IpV6Address[16];
    #define ISCSI_IP_Address_IpV6Address_SIZE sizeof(UCHAR[16])
    #define ISCSI_IP_Address_IpV6Address_ID 3
    ULONG IpV6FlowInfo;
    #define ISCSI_IP_Address_IpV6FlowInfo_SIZE sizeof(ULONG)
    #define ISCSI_IP_Address_IpV6FlowInfo_ID 4
    ULONG IpV6ScopeId;
    #define ISCSI_IP_Address_IpV6ScopeId_SIZE sizeof(ULONG)
    #define ISCSI_IP_Address_IpV6ScopeId_ID 5
    WCHAR TextAddress[256 + 1];
    #define ISCSI_IP_Address_TextAddress_ID 6
} ISCSI_IP_Address, *PISCSI_IP_Address;
    { 0xde5051a7,0xbf27,0x48f1, { 0xbd,0x12,0x07,0xca,0xde,0x92,0xae,0xfd } }
DEFINE_GUID(ISCSI_TargetPortal_GUID, \
            0xde5051a7,0xbf27,0x48f1,0xbd,0x12,0x07,0xca,0xde,0x92,0xae,0xfd);
typedef struct _ISCSI_TargetPortal
{
    ISCSI_IP_Address Address;
    #define ISCSI_TargetPortal_Address_SIZE sizeof(ISCSI_IP_Address)
    #define ISCSI_TargetPortal_Address_ID 1
    ULONG Reserved;
    #define ISCSI_TargetPortal_Reserved_SIZE sizeof(ULONG)
    #define ISCSI_TargetPortal_Reserved_ID 2
    USHORT Socket;
    #define ISCSI_TargetPortal_Socket_SIZE sizeof(USHORT)
    #define ISCSI_TargetPortal_Socket_ID 3
} ISCSI_TargetPortal, *PISCSI_TargetPortal;
    { 0x3081f2a5,0x95f5,0x4d2a, { 0x81,0x3d,0xee,0x59,0x86,0x4c,0x6f,0xc5 } }
DEFINE_GUID(ISCSI_TargetPortalGroup_GUID, \
            0x3081f2a5,0x95f5,0x4d2a,0x81,0x3d,0xee,0x59,0x86,0x4c,0x6f,0xc5);
typedef struct _ISCSI_TargetPortalGroup
{
    ULONG PortalCount;
    #define ISCSI_TargetPortalGroup_PortalCount_SIZE sizeof(ULONG)
    #define ISCSI_TargetPortalGroup_PortalCount_ID 1
    ISCSI_TargetPortal Portals[1];
    #define ISCSI_TargetPortalGroup_Portals_ID 2
} ISCSI_TargetPortalGroup, *PISCSI_TargetPortalGroup;
typedef enum
{
   ISCSI_DIGEST_TYPE_NONE = 0,
   ISCSI_DIGEST_TYPE_CRC32C = 1
} ISCSI_DIGEST_TYPES, *PISCSI_DIGEST_TYPES;
typedef enum
{
   ISCSI_NO_AUTH_TYPE = 0,
   ISCSI_CHAP_AUTH_TYPE = 1,
   ISCSI_MUTUAL_CHAP_AUTH_TYPE = 2
} ISCSI_AUTH_TYPES, *PISCSI_AUTH_TYPES;
    { 0x3011a7bd,0x0491,0x478e, { 0x8c,0x79,0x3c,0x76,0x42,0x4d,0x05,0xe2 } }
DEFINE_GUID(ISCSI_LoginOptions_GUID, \
            0x3011a7bd,0x0491,0x478e,0x8c,0x79,0x3c,0x76,0x42,0x4d,0x05,0xe2);
typedef struct _ISCSI_LoginOptions
{
    ULONG InformationSpecified;
    #define ISCSI_LoginOptions_InformationSpecified_SIZE sizeof(ULONG)
    #define ISCSI_LoginOptions_InformationSpecified_ID 1
    ULONG HeaderDigest;
    #define ISCSI_LoginOptions_HeaderDigest_SIZE sizeof(ULONG)
    #define ISCSI_LoginOptions_HeaderDigest_ID 2
    ULONG DataDigest;
    #define ISCSI_LoginOptions_DataDigest_SIZE sizeof(ULONG)
    #define ISCSI_LoginOptions_DataDigest_ID 3
    ULONG MaximumConnections;
    #define ISCSI_LoginOptions_MaximumConnections_SIZE sizeof(ULONG)
    #define ISCSI_LoginOptions_MaximumConnections_ID 4
    ULONG DefaultTime2Wait;
    #define ISCSI_LoginOptions_DefaultTime2Wait_SIZE sizeof(ULONG)
    #define ISCSI_LoginOptions_DefaultTime2Wait_ID 5
    ULONG DefaultTime2Retain;
    #define ISCSI_LoginOptions_DefaultTime2Retain_SIZE sizeof(ULONG)
    #define ISCSI_LoginOptions_DefaultTime2Retain_ID 6
    ULONG LoginFlags;
    #define ISCSI_LoginOptions_LoginFlags_SIZE sizeof(ULONG)
    #define ISCSI_LoginOptions_LoginFlags_ID 7
    ULONG AuthType;
    #define ISCSI_LoginOptions_AuthType_SIZE sizeof(ULONG)
    #define ISCSI_LoginOptions_AuthType_ID 8
} ISCSI_LoginOptions, *PISCSI_LoginOptions;
    { 0x994ff278,0x3512,0x4d9b, { 0xa2,0x41,0x54,0xce,0xf4,0x5f,0x5a,0x25 } }
DEFINE_GUID(ISCSI_LUNList_GUID, \
            0x994ff278,0x3512,0x4d9b,0xa2,0x41,0x54,0xce,0xf4,0x5f,0x5a,0x25);
typedef struct _ISCSI_LUNList
{
    ULONGLONG TargetLUN;
    #define ISCSI_LUNList_TargetLUN_SIZE sizeof(ULONGLONG)
    #define ISCSI_LUNList_TargetLUN_ID 1
    ULONG OSLUN;
    #define ISCSI_LUNList_OSLUN_SIZE sizeof(ULONG)
    #define ISCSI_LUNList_OSLUN_ID 2
    ULONG Reserved;
    #define ISCSI_LUNList_Reserved_SIZE sizeof(ULONG)
    #define ISCSI_LUNList_Reserved_ID 3
} ISCSI_LUNList, *PISCSI_LUNList;
    { 0x21a28820,0x3c4c,0x4944, { 0xac,0x4f,0xda,0x7f,0xeb,0xa2,0x11,0x68 } }
DEFINE_GUID(ISCSI_TargetMapping_GUID, \
            0x21a28820,0x3c4c,0x4944,0xac,0x4f,0xda,0x7f,0xeb,0xa2,0x11,0x68);
typedef struct _ISCSI_TargetMapping
{
    ULONG OSBus;
    #define ISCSI_TargetMapping_OSBus_SIZE sizeof(ULONG)
    #define ISCSI_TargetMapping_OSBus_ID 1
    ULONG OSTarget;
    #define ISCSI_TargetMapping_OSTarget_SIZE sizeof(ULONG)
    #define ISCSI_TargetMapping_OSTarget_ID 2
    ULONGLONG UniqueSessionId;
    #define ISCSI_TargetMapping_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define ISCSI_TargetMapping_UniqueSessionId_ID 3
    ULONG LUNCount;
    #define ISCSI_TargetMapping_LUNCount_SIZE sizeof(ULONG)
    #define ISCSI_TargetMapping_LUNCount_ID 4
    WCHAR TargetName[223 + 1];
    #define ISCSI_TargetMapping_TargetName_ID 5
    BOOLEAN FromPersistentLogin;
    #define ISCSI_TargetMapping_FromPersistentLogin_SIZE sizeof(BOOLEAN)
    #define ISCSI_TargetMapping_FromPersistentLogin_ID 6
    ULONGLONG Reserved;
    #define ISCSI_TargetMapping_Reserved_SIZE sizeof(ULONGLONG)
    #define ISCSI_TargetMapping_Reserved_ID 7
    ISCSI_LUNList LUNList[1];
    #define ISCSI_TargetMapping_LUNList_ID 8
} ISCSI_TargetMapping, *PISCSI_TargetMapping;
