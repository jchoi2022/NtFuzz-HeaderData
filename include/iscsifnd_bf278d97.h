#include <iscsidef.h>
    { 0xfa218c5d,0xb306,0x4d5d, { 0xb2,0xdb,0x6b,0xba,0x05,0x0f,0xd8,0xfa } }
DEFINE_GUID(ISCSI_DiscoveredTargetPortal_GUID, \
            0xfa218c5d,0xb306,0x4d5d,0xb2,0xdb,0x6b,0xba,0x05,0x0f,0xd8,0xfa);
typedef struct _ISCSI_DiscoveredTargetPortal
{
    USHORT Socket;
    #define ISCSI_DiscoveredTargetPortal_Socket_SIZE sizeof(USHORT)
    #define ISCSI_DiscoveredTargetPortal_Socket_ID 1
    ISCSI_IP_Address Address;
    #define ISCSI_DiscoveredTargetPortal_Address_SIZE sizeof(ISCSI_IP_Address)
    #define ISCSI_DiscoveredTargetPortal_Address_ID 2
    WCHAR SymbolicName[256 + 1];
    #define ISCSI_DiscoveredTargetPortal_SymbolicName_ID 3
} ISCSI_DiscoveredTargetPortal, *PISCSI_DiscoveredTargetPortal;
    { 0x28c3af2c,0xa453,0x4a3d, { 0x8e,0x10,0x9e,0x09,0xd8,0x9e,0xf3,0x33 } }
DEFINE_GUID(ISCSI_DiscoveredTargetPortalGroup_GUID, \
            0x28c3af2c,0xa453,0x4a3d,0x8e,0x10,0x9e,0x09,0xd8,0x9e,0xf3,0x33);
typedef struct _ISCSI_DiscoveredTargetPortalGroup
{
    ULONG PortalCount;
    #define ISCSI_DiscoveredTargetPortalGroup_PortalCount_SIZE sizeof(ULONG)
    #define ISCSI_DiscoveredTargetPortalGroup_PortalCount_ID 1
    ISCSI_DiscoveredTargetPortal Portals[1];
    #define ISCSI_DiscoveredTargetPortalGroup_Portals_ID 2
} ISCSI_DiscoveredTargetPortalGroup, *PISCSI_DiscoveredTargetPortalGroup;
    { 0x08cdf465,0xe18d,0x42fe, { 0x8e,0xb2,0x56,0x8c,0xa9,0x6a,0x98,0x56 } }
DEFINE_GUID(ISCSI_DiscoveredTarget_GUID, \
            0x08cdf465,0xe18d,0x42fe,0x8e,0xb2,0x56,0x8c,0xa9,0x6a,0x98,0x56);
typedef struct _ISCSI_DiscoveredTarget
{
    ULONG TargetPortalGroupCount;
    #define ISCSI_DiscoveredTarget_TargetPortalGroupCount_SIZE sizeof(ULONG)
    #define ISCSI_DiscoveredTarget_TargetPortalGroupCount_ID 1
    WCHAR TargetName[223 + 1];
    #define ISCSI_DiscoveredTarget_TargetName_ID 2
    WCHAR TargetAlias[255 + 1];
    #define ISCSI_DiscoveredTarget_TargetAlias_ID 3
    ISCSI_DiscoveredTargetPortalGroup TargetDiscoveredPortalGroups[1];
    #define ISCSI_DiscoveredTarget_TargetDiscoveredPortalGroups_ID 4
} ISCSI_DiscoveredTarget, *PISCSI_DiscoveredTarget;
    { 0xe95162a2,0x8ee5,0x40f1, { 0xb0,0x5d,0xa5,0x32,0x1a,0x30,0xd0,0x3d } }
DEFINE_GUID(ISCSI_DiscoveredTargetPortal2_GUID, \
            0xe95162a2,0x8ee5,0x40f1,0xb0,0x5d,0xa5,0x32,0x1a,0x30,0xd0,0x3d);
typedef struct _ISCSI_DiscoveredTargetPortal2
{
    USHORT Socket;
    #define ISCSI_DiscoveredTargetPortal2_Socket_SIZE sizeof(USHORT)
    #define ISCSI_DiscoveredTargetPortal2_Socket_ID 1
    ISCSI_IP_Address Address;
    #define ISCSI_DiscoveredTargetPortal2_Address_SIZE sizeof(ISCSI_IP_Address)
    #define ISCSI_DiscoveredTargetPortal2_Address_ID 2
    ULONG SecurityBitmap;
    #define ISCSI_DiscoveredTargetPortal2_SecurityBitmap_SIZE sizeof(ULONG)
    #define ISCSI_DiscoveredTargetPortal2_SecurityBitmap_ID 3
    ULONG KeySize;
    #define ISCSI_DiscoveredTargetPortal2_KeySize_SIZE sizeof(ULONG)
    #define ISCSI_DiscoveredTargetPortal2_KeySize_ID 4
    UCHAR Key[1];
    #define ISCSI_DiscoveredTargetPortal2_Key_ID 5
    #define ISCSI_DiscoveredTargetPortal2_SymbolicName_ID 6
} ISCSI_DiscoveredTargetPortal2, *PISCSI_DiscoveredTargetPortal2;
    { 0x1732b30d,0xee08,0x4de7, { 0xbe,0xd1,0xde,0x16,0x5f,0x1d,0x7b,0x45 } }
DEFINE_GUID(ISCSI_DiscoveredTargetPortalGroup2_GUID, \
            0x1732b30d,0xee08,0x4de7,0xbe,0xd1,0xde,0x16,0x5f,0x1d,0x7b,0x45);
typedef struct _ISCSI_DiscoveredTargetPortalGroup2
{
    ULONG PortalCount;
    #define ISCSI_DiscoveredTargetPortalGroup2_PortalCount_SIZE sizeof(ULONG)
    #define ISCSI_DiscoveredTargetPortalGroup2_PortalCount_ID 1
    USHORT Tag;
    #define ISCSI_DiscoveredTargetPortalGroup2_Tag_SIZE sizeof(USHORT)
    #define ISCSI_DiscoveredTargetPortalGroup2_Tag_ID 2
    ISCSI_DiscoveredTargetPortal2 Portals[1];
    #define ISCSI_DiscoveredTargetPortalGroup2_Portals_ID 3
} ISCSI_DiscoveredTargetPortalGroup2, *PISCSI_DiscoveredTargetPortalGroup2;
    { 0xa71bcde9,0x5433,0x4b36, { 0xb9,0xc1,0x07,0x86,0x8e,0x18,0xb4,0x8a } }
DEFINE_GUID(ISCSI_DiscoveredTarget2_GUID, \
            0xa71bcde9,0x5433,0x4b36,0xb9,0xc1,0x07,0x86,0x8e,0x18,0xb4,0x8a);
typedef struct _ISCSI_DiscoveredTarget2
{
    ULONG TargetPortalGroupCount;
    #define ISCSI_DiscoveredTarget2_TargetPortalGroupCount_SIZE sizeof(ULONG)
    #define ISCSI_DiscoveredTarget2_TargetPortalGroupCount_ID 1
    WCHAR TargetName[223 + 1];
    #define ISCSI_DiscoveredTarget2_TargetName_ID 2
    WCHAR TargetAlias[255 + 1];
    #define ISCSI_DiscoveredTarget2_TargetAlias_ID 3
    ISCSI_DiscoveredTargetPortalGroup2 TargetDiscoveredPortalGroups[1];
    #define ISCSI_DiscoveredTarget2_TargetDiscoveredPortalGroups_ID 4
} ISCSI_DiscoveredTarget2, *PISCSI_DiscoveredTarget2;
    { 0x556bc0b0,0x0fb5,0x40f2, { 0x92,0x55,0xb7,0xd9,0xa6,0x69,0xda,0xec } }
DEFINE_GUID(MSiSCSI_DiscoveryOperations_GUID, \
            0x556bc0b0,0x0fb5,0x40f2,0x92,0x55,0xb7,0xd9,0xa6,0x69,0xda,0xec);
typedef struct _ReportDiscoveredTargets_OUT
{
    ULONG Status;
    #define ReportDiscoveredTargets_OUT_Status_SIZE sizeof(ULONG)
    #define ReportDiscoveredTargets_OUT_Status_ID 1
    ULONG TargetCount;
    #define ReportDiscoveredTargets_OUT_TargetCount_SIZE sizeof(ULONG)
    #define ReportDiscoveredTargets_OUT_TargetCount_ID 2
    ISCSI_DiscoveredTarget Targets[1];
    #define ReportDiscoveredTargets_OUT_Targets_ID 3
} ReportDiscoveredTargets_OUT, *PReportDiscoveredTargets_OUT;
typedef struct _ReportDiscoveredTargets2_OUT
{
    ULONG Status;
    #define ReportDiscoveredTargets2_OUT_Status_SIZE sizeof(ULONG)
    #define ReportDiscoveredTargets2_OUT_Status_ID 1
    ULONG TargetCount;
    #define ReportDiscoveredTargets2_OUT_TargetCount_SIZE sizeof(ULONG)
    #define ReportDiscoveredTargets2_OUT_TargetCount_ID 2
    ISCSI_DiscoveredTarget2 Targets[1];
    #define ReportDiscoveredTargets2_OUT_Targets_ID 3
} ReportDiscoveredTargets2_OUT, *PReportDiscoveredTargets2_OUT;
