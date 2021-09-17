#include <iscsidef.h>
    { 0x58515bf3,0x2f59,0x4f37, { 0xb7,0x4f,0x85,0xae,0xec,0x65,0x2a,0xd6 } }
DEFINE_GUID(MSiSCSI_HBAInformation_GUID, \
            0x58515bf3,0x2f59,0x4f37,0xb7,0x4f,0x85,0xae,0xec,0x65,0x2a,0xd6);
typedef struct _MSiSCSI_HBAInformation
{
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_HBAInformation_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_HBAInformation_UniqueAdapterId_ID 1
    BOOLEAN IntegratedTCPIP;
    #define MSiSCSI_HBAInformation_IntegratedTCPIP_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_HBAInformation_IntegratedTCPIP_ID 2
    BOOLEAN RequiresBinaryIpAddresses;
    #define MSiSCSI_HBAInformation_RequiresBinaryIpAddresses_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_HBAInformation_RequiresBinaryIpAddresses_ID 3
    UCHAR VersionMin;
    #define MSiSCSI_HBAInformation_VersionMin_SIZE sizeof(UCHAR)
    #define MSiSCSI_HBAInformation_VersionMin_ID 4
    UCHAR VersionMax;
    #define MSiSCSI_HBAInformation_VersionMax_SIZE sizeof(UCHAR)
    #define MSiSCSI_HBAInformation_VersionMax_ID 5
    BOOLEAN MultifunctionDevice;
    #define MSiSCSI_HBAInformation_MultifunctionDevice_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_HBAInformation_MultifunctionDevice_ID 6
    BOOLEAN CacheValid;
    #define MSiSCSI_HBAInformation_CacheValid_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_HBAInformation_CacheValid_ID 7
    ULONG NumberOfPorts;
    #define MSiSCSI_HBAInformation_NumberOfPorts_SIZE sizeof(ULONG)
    #define MSiSCSI_HBAInformation_NumberOfPorts_ID 8
    ULONG Status;
    #define MSiSCSI_HBAInformation_Status_SIZE sizeof(ULONG)
    #define MSiSCSI_HBAInformation_Status_ID 9
    ULONG FunctionalitySupported;
    #define MSiSCSI_HBAInformation_FunctionalitySupported_SIZE sizeof(ULONG)
    #define MSiSCSI_HBAInformation_FunctionalitySupported_ID 10
    UCHAR GenerationalGuid[16];
    #define MSiSCSI_HBAInformation_GenerationalGuid_SIZE sizeof(UCHAR[16])
    #define MSiSCSI_HBAInformation_GenerationalGuid_ID 11
    ULONG MaxCDBLength;
    #define MSiSCSI_HBAInformation_MaxCDBLength_SIZE sizeof(ULONG)
    #define MSiSCSI_HBAInformation_MaxCDBLength_ID 12
    BOOLEAN BiDiScsiCommands;
    #define MSiSCSI_HBAInformation_BiDiScsiCommands_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_HBAInformation_BiDiScsiCommands_ID 13
    WCHAR VendorID[255 + 1];
    #define MSiSCSI_HBAInformation_VendorID_ID 14
    WCHAR VendorModel[255 + 1];
    #define MSiSCSI_HBAInformation_VendorModel_ID 15
    WCHAR VendorVersion[255 + 1];
    #define MSiSCSI_HBAInformation_VendorVersion_ID 16
    WCHAR FirmwareVersion[255 + 1];
    #define MSiSCSI_HBAInformation_FirmwareVersion_ID 17
    WCHAR AsicVersion[255 + 1];
    #define MSiSCSI_HBAInformation_AsicVersion_ID 18
    WCHAR OptionRomVersion[255 + 1];
    #define MSiSCSI_HBAInformation_OptionRomVersion_ID 19
    WCHAR SerialNumber[255 + 1];
    #define MSiSCSI_HBAInformation_SerialNumber_ID 20
    WCHAR DriverName[255 + 1];
    #define MSiSCSI_HBAInformation_DriverName_ID 21
} MSiSCSI_HBAInformation, *PMSiSCSI_HBAInformation;
    { 0xb35694de,0xd323,0x49d2, { 0xab,0xb2,0x81,0x39,0x20,0x9a,0xd1,0x50 } }
DEFINE_GUID(MSiSCSI_HBASessionConfig_GUID, \
            0xb35694de,0xd323,0x49d2,0xab,0xb2,0x81,0x39,0x20,0x9a,0xd1,0x50);
typedef struct _MSiSCSI_HBASessionConfig
{
    BOOLEAN InitialR2T;
    #define MSiSCSI_HBASessionConfig_InitialR2T_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_HBASessionConfig_InitialR2T_ID 1
    BOOLEAN ImmediateData;
    #define MSiSCSI_HBASessionConfig_ImmediateData_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_HBASessionConfig_ImmediateData_ID 2
    ULONG MaxRecvDataSegmentLength;
    #define MSiSCSI_HBASessionConfig_MaxRecvDataSegmentLength_SIZE sizeof(ULONG)
    #define MSiSCSI_HBASessionConfig_MaxRecvDataSegmentLength_ID 3
    ULONG MaxBurstLength;
    #define MSiSCSI_HBASessionConfig_MaxBurstLength_SIZE sizeof(ULONG)
    #define MSiSCSI_HBASessionConfig_MaxBurstLength_ID 4
    ULONG FirstBurstLength;
    #define MSiSCSI_HBASessionConfig_FirstBurstLength_SIZE sizeof(ULONG)
    #define MSiSCSI_HBASessionConfig_FirstBurstLength_ID 5
    ULONG MaxOutstandingR2T;
    #define MSiSCSI_HBASessionConfig_MaxOutstandingR2T_SIZE sizeof(ULONG)
    #define MSiSCSI_HBASessionConfig_MaxOutstandingR2T_ID 6
} MSiSCSI_HBASessionConfig, *PMSiSCSI_HBASessionConfig;
    { 0x3ce2d6a0,0x7346,0x4826, { 0x97,0x2f,0xf2,0xc1,0x97,0x79,0xd1,0xd1 } }
DEFINE_GUID(ISCSI_ConnectionStaticInfo_GUID, \
            0x3ce2d6a0,0x7346,0x4826,0x97,0x2f,0xf2,0xc1,0x97,0x79,0xd1,0xd1);
typedef struct _ISCSI_ConnectionStaticInfo
{
    ULONGLONG UniqueConnectionId;
    #define ISCSI_ConnectionStaticInfo_UniqueConnectionId_SIZE sizeof(ULONGLONG)
    #define ISCSI_ConnectionStaticInfo_UniqueConnectionId_ID 1
    USHORT CID;
    #define ISCSI_ConnectionStaticInfo_CID_SIZE sizeof(USHORT)
    #define ISCSI_ConnectionStaticInfo_CID_ID 2
    UCHAR State;
    #define ISCSI_ConnectionStaticInfo_State_SIZE sizeof(UCHAR)
    #define ISCSI_ConnectionStaticInfo_State_ID 3
    UCHAR Protocol;
    #define ISCSI_ConnectionStaticInfo_Protocol_SIZE sizeof(UCHAR)
    #define ISCSI_ConnectionStaticInfo_Protocol_ID 4
    UCHAR HeaderIntegrity;
    #define ISCSI_ConnectionStaticInfo_HeaderIntegrity_SIZE sizeof(UCHAR)
    #define ISCSI_ConnectionStaticInfo_HeaderIntegrity_ID 5
    UCHAR DataIntegrity;
    #define ISCSI_ConnectionStaticInfo_DataIntegrity_SIZE sizeof(UCHAR)
    #define ISCSI_ConnectionStaticInfo_DataIntegrity_ID 6
    USHORT Reserved;
    #define ISCSI_ConnectionStaticInfo_Reserved_SIZE sizeof(USHORT)
    #define ISCSI_ConnectionStaticInfo_Reserved_ID 7
    ULONG MaxRecvDataSegmentLength;
    #define ISCSI_ConnectionStaticInfo_MaxRecvDataSegmentLength_SIZE sizeof(ULONG)
    #define ISCSI_ConnectionStaticInfo_MaxRecvDataSegmentLength_ID 8
    ULONG AuthType;
    #define ISCSI_ConnectionStaticInfo_AuthType_SIZE sizeof(ULONG)
    #define ISCSI_ConnectionStaticInfo_AuthType_ID 9
    ISCSI_IP_Address LocalAddr;
    #define ISCSI_ConnectionStaticInfo_LocalAddr_SIZE sizeof(ISCSI_IP_Address)
    #define ISCSI_ConnectionStaticInfo_LocalAddr_ID 10
    ULONG LocalPort;
    #define ISCSI_ConnectionStaticInfo_LocalPort_SIZE sizeof(ULONG)
    #define ISCSI_ConnectionStaticInfo_LocalPort_ID 11
    ISCSI_IP_Address RemoteAddr;
    #define ISCSI_ConnectionStaticInfo_RemoteAddr_SIZE sizeof(ISCSI_IP_Address)
    #define ISCSI_ConnectionStaticInfo_RemoteAddr_ID 12
    ULONG RemotePort;
    #define ISCSI_ConnectionStaticInfo_RemotePort_SIZE sizeof(ULONG)
    #define ISCSI_ConnectionStaticInfo_RemotePort_ID 13
    ULONGLONG EstimatedThroughput;
    #define ISCSI_ConnectionStaticInfo_EstimatedThroughput_SIZE sizeof(ULONGLONG)
    #define ISCSI_ConnectionStaticInfo_EstimatedThroughput_ID 14
    ULONG MaxDatagramSize;
    #define ISCSI_ConnectionStaticInfo_MaxDatagramSize_SIZE sizeof(ULONG)
    #define ISCSI_ConnectionStaticInfo_MaxDatagramSize_ID 15
} ISCSI_ConnectionStaticInfo, *PISCSI_ConnectionStaticInfo;
    { 0xb71d2538,0x57e2,0x4228, { 0x88,0x8b,0x1a,0xf9,0xb3,0xbd,0x01,0xcd } }
DEFINE_GUID(ISCSI_SessionStaticInfo_GUID, \
            0xb71d2538,0x57e2,0x4228,0x88,0x8b,0x1a,0xf9,0xb3,0xbd,0x01,0xcd);
typedef struct _ISCSI_SessionStaticInfo
{
    ULONGLONG UniqueSessionId;
    #define ISCSI_SessionStaticInfo_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define ISCSI_SessionStaticInfo_UniqueSessionId_ID 1
    WCHAR InitiatoriSCSIName[223 + 1];
    #define ISCSI_SessionStaticInfo_InitiatoriSCSIName_ID 2
    WCHAR TargetiSCSIName[223 + 1];
    #define ISCSI_SessionStaticInfo_TargetiSCSIName_ID 3
    USHORT TSID;
    #define ISCSI_SessionStaticInfo_TSID_SIZE sizeof(USHORT)
    #define ISCSI_SessionStaticInfo_TSID_ID 4
    UCHAR ISID[6];
    #define ISCSI_SessionStaticInfo_ISID_SIZE sizeof(UCHAR[6])
    #define ISCSI_SessionStaticInfo_ISID_ID 5
    BOOLEAN InitialR2t;
    #define ISCSI_SessionStaticInfo_InitialR2t_SIZE sizeof(BOOLEAN)
    #define ISCSI_SessionStaticInfo_InitialR2t_ID 6
    BOOLEAN ImmediateData;
    #define ISCSI_SessionStaticInfo_ImmediateData_SIZE sizeof(BOOLEAN)
    #define ISCSI_SessionStaticInfo_ImmediateData_ID 7
    UCHAR Type;
    #define ISCSI_SessionStaticInfo_Type_SIZE sizeof(UCHAR)
    #define ISCSI_SessionStaticInfo_Type_ID 8
    BOOLEAN DataSequenceInOrder;
    #define ISCSI_SessionStaticInfo_DataSequenceInOrder_SIZE sizeof(BOOLEAN)
    #define ISCSI_SessionStaticInfo_DataSequenceInOrder_ID 9
    BOOLEAN DataPduInOrder;
    #define ISCSI_SessionStaticInfo_DataPduInOrder_SIZE sizeof(BOOLEAN)
    #define ISCSI_SessionStaticInfo_DataPduInOrder_ID 10
    UCHAR ErrorRecoveryLevel;
    #define ISCSI_SessionStaticInfo_ErrorRecoveryLevel_SIZE sizeof(UCHAR)
    #define ISCSI_SessionStaticInfo_ErrorRecoveryLevel_ID 11
    ULONG MaxOutstandingR2t;
    #define ISCSI_SessionStaticInfo_MaxOutstandingR2t_SIZE sizeof(ULONG)
    #define ISCSI_SessionStaticInfo_MaxOutstandingR2t_ID 12
    ULONG FirstBurstLength;
    #define ISCSI_SessionStaticInfo_FirstBurstLength_SIZE sizeof(ULONG)
    #define ISCSI_SessionStaticInfo_FirstBurstLength_ID 13
    ULONG MaxBurstLength;
    #define ISCSI_SessionStaticInfo_MaxBurstLength_SIZE sizeof(ULONG)
    #define ISCSI_SessionStaticInfo_MaxBurstLength_ID 14
    ULONG MaxConnections;
    #define ISCSI_SessionStaticInfo_MaxConnections_SIZE sizeof(ULONG)
    #define ISCSI_SessionStaticInfo_MaxConnections_ID 15
    USHORT ConnectionCount;
    #define ISCSI_SessionStaticInfo_ConnectionCount_SIZE sizeof(USHORT)
    #define ISCSI_SessionStaticInfo_ConnectionCount_ID 16
    ISCSI_ConnectionStaticInfo ConnectionsList[1];
    #define ISCSI_SessionStaticInfo_ConnectionsList_ID 17
} ISCSI_SessionStaticInfo, *PISCSI_SessionStaticInfo;
    { 0x4fb9130e,0x1fef,0x4ae6, { 0x9e,0x48,0x77,0x83,0x92,0x04,0xd4,0x13 } }
DEFINE_GUID(ISCSI_PortalInfo_GUID, \
            0x4fb9130e,0x1fef,0x4ae6,0x9e,0x48,0x77,0x83,0x92,0x04,0xd4,0x13);
typedef struct _ISCSI_PortalInfo
{
    ULONG Index;
    #define ISCSI_PortalInfo_Index_SIZE sizeof(ULONG)
    #define ISCSI_PortalInfo_Index_ID 1
    UCHAR PortalType;
    #define ISCSI_PortalInfo_PortalType_SIZE sizeof(UCHAR)
    #define ISCSI_PortalInfo_PortalType_ID 2
    UCHAR Protocol;
    #define ISCSI_PortalInfo_Protocol_SIZE sizeof(UCHAR)
    #define ISCSI_PortalInfo_Protocol_ID 3
    UCHAR Reserved1;
    #define ISCSI_PortalInfo_Reserved1_SIZE sizeof(UCHAR)
    #define ISCSI_PortalInfo_Reserved1_ID 4
    UCHAR Reserved2;
    #define ISCSI_PortalInfo_Reserved2_SIZE sizeof(UCHAR)
    #define ISCSI_PortalInfo_Reserved2_ID 5
    ISCSI_IP_Address IPAddr;
    #define ISCSI_PortalInfo_IPAddr_SIZE sizeof(ISCSI_IP_Address)
    #define ISCSI_PortalInfo_IPAddr_ID 6
    ULONG Port;
    #define ISCSI_PortalInfo_Port_SIZE sizeof(ULONG)
    #define ISCSI_PortalInfo_Port_ID 7
    USHORT PortalTag;
    #define ISCSI_PortalInfo_PortalTag_SIZE sizeof(USHORT)
    #define ISCSI_PortalInfo_PortalTag_ID 8
} ISCSI_PortalInfo, *PISCSI_PortalInfo;
    { 0x84ca6fd6,0xb152,0x4e6a, { 0x88,0x69,0xfd,0xe5,0xe3,0x7b,0x61,0x57 } }
DEFINE_GUID(MSiSCSI_PortalInfoClass_GUID, \
            0x84ca6fd6,0xb152,0x4e6a,0x88,0x69,0xfd,0xe5,0xe3,0x7b,0x61,0x57);
typedef struct _MSiSCSI_PortalInfoClass
{
    ULONG PortalInfoCount;
    #define MSiSCSI_PortalInfoClass_PortalInfoCount_SIZE sizeof(ULONG)
    #define MSiSCSI_PortalInfoClass_PortalInfoCount_ID 1
    ISCSI_PortalInfo PortalInformation[1];
    #define MSiSCSI_PortalInfoClass_PortalInformation_ID 2
} MSiSCSI_PortalInfoClass, *PMSiSCSI_PortalInfoClass;
    { 0xd7931411,0x0376,0x4869, { 0xa4,0x91,0x8d,0x67,0x9b,0xfc,0x00,0x4a } }
DEFINE_GUID(MSiSCSI_InitiatorSessionInfo_GUID, \
            0xd7931411,0x0376,0x4869,0xa4,0x91,0x8d,0x67,0x9b,0xfc,0x00,0x4a);
typedef struct _MSiSCSI_InitiatorSessionInfo
{
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_InitiatorSessionInfo_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_InitiatorSessionInfo_UniqueAdapterId_ID 1
    ULONG SessionCount;
    #define MSiSCSI_InitiatorSessionInfo_SessionCount_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorSessionInfo_SessionCount_ID 2
    ISCSI_SessionStaticInfo SessionsList[1];
    #define MSiSCSI_InitiatorSessionInfo_SessionsList_ID 3
} MSiSCSI_InitiatorSessionInfo, *PMSiSCSI_InitiatorSessionInfo;
    { 0x1221948a,0x6332,0x4ac2, { 0xaa,0x04,0x26,0x8a,0xab,0xce,0xce,0x4f } }
DEFINE_GUID(MSiSCSI_InitiatorNodeFailureEvent_GUID, \
            0x1221948a,0x6332,0x4ac2,0xaa,0x04,0x26,0x8a,0xab,0xce,0xce,0x4f);
typedef struct _MSiSCSI_InitiatorNodeFailureEvent
{
    ULONGLONG FailureTime;
    #define MSiSCSI_InitiatorNodeFailureEvent_FailureTime_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_InitiatorNodeFailureEvent_FailureTime_ID 1
    UCHAR FailureType;
    #define MSiSCSI_InitiatorNodeFailureEvent_FailureType_SIZE sizeof(UCHAR)
    #define MSiSCSI_InitiatorNodeFailureEvent_FailureType_ID 2
    WCHAR TargetFailureName[223 + 1];
    #define MSiSCSI_InitiatorNodeFailureEvent_TargetFailureName_ID 3
    ISCSI_IP_Address TargetFailureAddr;
    #define MSiSCSI_InitiatorNodeFailureEvent_TargetFailureAddr_SIZE sizeof(ISCSI_IP_Address)
    #define MSiSCSI_InitiatorNodeFailureEvent_TargetFailureAddr_ID 4
} MSiSCSI_InitiatorNodeFailureEvent, *PMSiSCSI_InitiatorNodeFailureEvent;
    { 0xe67e1bdb,0xd130,0x4143, { 0x9e,0xb2,0x8b,0xee,0x18,0x99,0xfd,0x52 } }
DEFINE_GUID(MSiSCSI_InitiatorInstanceFailureEvent_GUID, \
            0xe67e1bdb,0xd130,0x4143,0x9e,0xb2,0x8b,0xee,0x18,0x99,0xfd,0x52);
typedef struct _MSiSCSI_InitiatorInstanceFailureEvent
{
    UCHAR FailureType;
    #define MSiSCSI_InitiatorInstanceFailureEvent_FailureType_SIZE sizeof(UCHAR)
    #define MSiSCSI_InitiatorInstanceFailureEvent_FailureType_ID 1
    WCHAR RemoteNodeName[223 + 1];
    #define MSiSCSI_InitiatorInstanceFailureEvent_RemoteNodeName_ID 2
} MSiSCSI_InitiatorInstanceFailureEvent, *PMSiSCSI_InitiatorInstanceFailureEvent;
    { 0xc8775641,0x5430,0x4220, { 0xba,0x25,0x7d,0xa5,0x61,0xcb,0x64,0xce } }
DEFINE_GUID(ISCSI_Path_GUID, \
            0xc8775641,0x5430,0x4220,0xba,0x25,0x7d,0xa5,0x61,0xcb,0x64,0xce);
typedef struct _ISCSI_Path
{
    ULONGLONG UniqueConnectionId;
    #define ISCSI_Path_UniqueConnectionId_SIZE sizeof(ULONGLONG)
    #define ISCSI_Path_UniqueConnectionId_ID 1
    ULONGLONG EstimatedLinkSpeed;
    #define ISCSI_Path_EstimatedLinkSpeed_SIZE sizeof(ULONGLONG)
    #define ISCSI_Path_EstimatedLinkSpeed_ID 2
    ULONG PathWeight;
    #define ISCSI_Path_PathWeight_SIZE sizeof(ULONG)
    #define ISCSI_Path_PathWeight_ID 3
    ULONG PrimaryPath;
    #define ISCSI_Path_PrimaryPath_SIZE sizeof(ULONG)
    #define ISCSI_Path_PrimaryPath_ID 4
    ULONG ConnectionStatus;
    #define ISCSI_Path_ConnectionStatus_SIZE sizeof(ULONG)
    #define ISCSI_Path_ConnectionStatus_ID 5
    ULONG TCPOffLoadAvailable;
    #define ISCSI_Path_TCPOffLoadAvailable_SIZE sizeof(ULONG)
    #define ISCSI_Path_TCPOffLoadAvailable_ID 6
} ISCSI_Path, *PISCSI_Path;
    { 0x749afe4d,0x804d,0x4662, { 0xa6,0x8b,0xdc,0x69,0x66,0x55,0xc7,0x9a } }
DEFINE_GUID(ISCSI_Supported_LB_Policies_GUID, \
            0x749afe4d,0x804d,0x4662,0xa6,0x8b,0xdc,0x69,0x66,0x55,0xc7,0x9a);
typedef struct _ISCSI_Supported_LB_Policies
{
    ULONGLONG UniqueSessionId;
    #define ISCSI_Supported_LB_Policies_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define ISCSI_Supported_LB_Policies_UniqueSessionId_ID 1
    ULONG LoadBalancePolicy;
    #define ISCSI_Supported_LB_Policies_LoadBalancePolicy_SIZE sizeof(ULONG)
    #define ISCSI_Supported_LB_Policies_LoadBalancePolicy_ID 2
    ULONG iSCSI_PathCount;
    #define ISCSI_Supported_LB_Policies_iSCSI_PathCount_SIZE sizeof(ULONG)
    #define ISCSI_Supported_LB_Policies_iSCSI_PathCount_ID 3
    ISCSI_Path iSCSI_Paths[1];
    #define ISCSI_Supported_LB_Policies_iSCSI_Paths_ID 4
} ISCSI_Supported_LB_Policies, *PISCSI_Supported_LB_Policies;
    { 0xa7dfe761,0xb6bc,0x4490, { 0x91,0xb0,0xd9,0xcf,0x4a,0x24,0xd3,0x7c } }
DEFINE_GUID(MSiSCSI_LB_Operations_GUID, \
            0xa7dfe761,0xb6bc,0x4490,0x91,0xb0,0xd9,0xcf,0x4a,0x24,0xd3,0x7c);
typedef struct _SetLoadBalancePolicy_IN
{
    ISCSI_Supported_LB_Policies LoadBalancePolicies;
    #define SetLoadBalancePolicy_IN_LoadBalancePolicies_SIZE sizeof(ISCSI_Supported_LB_Policies)
    #define SetLoadBalancePolicy_IN_LoadBalancePolicies_ID 1
} SetLoadBalancePolicy_IN, *PSetLoadBalancePolicy_IN;
typedef struct _SetLoadBalancePolicy_OUT
{
    ULONG Status;
    #define SetLoadBalancePolicy_OUT_Status_SIZE sizeof(ULONG)
    #define SetLoadBalancePolicy_OUT_Status_ID 2
} SetLoadBalancePolicy_OUT, *PSetLoadBalancePolicy_OUT;
    { 0xe0aecaee,0xb311,0x426f, { 0xb6,0x7a,0x18,0xd5,0xe5,0x5d,0x09,0x96 } }
DEFINE_GUID(MSiSCSI_QueryLBPolicy_GUID, \
            0xe0aecaee,0xb311,0x426f,0xb6,0x7a,0x18,0xd5,0xe5,0x5d,0x09,0x96);
typedef struct _MSiSCSI_QueryLBPolicy
{
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_QueryLBPolicy_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QueryLBPolicy_UniqueAdapterId_ID 1
    ULONG Reserved;
    #define MSiSCSI_QueryLBPolicy_Reserved_SIZE sizeof(ULONG)
    #define MSiSCSI_QueryLBPolicy_Reserved_ID 2
    ULONG SessionCount;
    #define MSiSCSI_QueryLBPolicy_SessionCount_SIZE sizeof(ULONG)
    #define MSiSCSI_QueryLBPolicy_SessionCount_ID 3
    ISCSI_Supported_LB_Policies LoadBalancePolicies[1];
    #define MSiSCSI_QueryLBPolicy_LoadBalancePolicies_ID 4
} MSiSCSI_QueryLBPolicy, *PMSiSCSI_QueryLBPolicy;
    { 0xe6b8552b,0x7c62,0x4c6e, { 0x99,0xeb,0x67,0xce,0x60,0x87,0x89,0x4c } }
DEFINE_GUID(MSiSCSI_Eventlog_GUID, \
            0xe6b8552b,0x7c62,0x4c6e,0x99,0xeb,0x67,0xce,0x60,0x87,0x89,0x4c);
typedef struct _MSiSCSI_Eventlog
{
    ULONG Type;
    #define MSiSCSI_Eventlog_Type_SIZE sizeof(ULONG)
    #define MSiSCSI_Eventlog_Type_ID 1
    ULONG LogToEventlog;
    #define MSiSCSI_Eventlog_LogToEventlog_SIZE sizeof(ULONG)
    #define MSiSCSI_Eventlog_LogToEventlog_ID 2
    ULONG Size;
    #define MSiSCSI_Eventlog_Size_SIZE sizeof(ULONG)
    #define MSiSCSI_Eventlog_Size_ID 3
    UCHAR AdditionalData[1];
    #define MSiSCSI_Eventlog_AdditionalData_ID 4
} MSiSCSI_Eventlog, *PMSiSCSI_Eventlog;
    { 0xf6004ce6,0x9507,0x4d86, { 0xae,0x1e,0xe9,0xd6,0x4f,0x16,0x6f,0x2f } }
DEFINE_GUID(ISCSI_RedirectPortalInfo_GUID, \
            0xf6004ce6,0x9507,0x4d86,0xae,0x1e,0xe9,0xd6,0x4f,0x16,0x6f,0x2f);
typedef struct _ISCSI_RedirectPortalInfo
{
    ULONGLONG UniqueConnectionId;
    #define ISCSI_RedirectPortalInfo_UniqueConnectionId_SIZE sizeof(ULONGLONG)
    #define ISCSI_RedirectPortalInfo_UniqueConnectionId_ID 1
    ISCSI_IP_Address OriginalIPAddr;
    #define ISCSI_RedirectPortalInfo_OriginalIPAddr_SIZE sizeof(ISCSI_IP_Address)
    #define ISCSI_RedirectPortalInfo_OriginalIPAddr_ID 2
    ULONG OriginalPort;
    #define ISCSI_RedirectPortalInfo_OriginalPort_SIZE sizeof(ULONG)
    #define ISCSI_RedirectPortalInfo_OriginalPort_ID 3
    ISCSI_IP_Address RedirectedIPAddr;
    #define ISCSI_RedirectPortalInfo_RedirectedIPAddr_SIZE sizeof(ISCSI_IP_Address)
    #define ISCSI_RedirectPortalInfo_RedirectedIPAddr_ID 4
    ULONG RedirectedPort;
    #define ISCSI_RedirectPortalInfo_RedirectedPort_SIZE sizeof(ULONG)
    #define ISCSI_RedirectPortalInfo_RedirectedPort_ID 5
    UCHAR Redirected;
    #define ISCSI_RedirectPortalInfo_Redirected_SIZE sizeof(UCHAR)
    #define ISCSI_RedirectPortalInfo_Redirected_ID 6
    UCHAR TemporaryRedirect;
    #define ISCSI_RedirectPortalInfo_TemporaryRedirect_SIZE sizeof(UCHAR)
    #define ISCSI_RedirectPortalInfo_TemporaryRedirect_ID 7
} ISCSI_RedirectPortalInfo, *PISCSI_RedirectPortalInfo;
    { 0xed60bc3f,0x3d56,0x42f0, { 0xb4,0xd0,0x81,0xdd,0x16,0xe2,0x85,0x15 } }
DEFINE_GUID(ISCSI_RedirectSessionInfo_GUID, \
            0xed60bc3f,0x3d56,0x42f0,0xb4,0xd0,0x81,0xdd,0x16,0xe2,0x85,0x15);
typedef struct _ISCSI_RedirectSessionInfo
{
    ULONGLONG UniqueSessionId;
    #define ISCSI_RedirectSessionInfo_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define ISCSI_RedirectSessionInfo_UniqueSessionId_ID 1
    ULONG TargetPortalGroupTag;
    #define ISCSI_RedirectSessionInfo_TargetPortalGroupTag_SIZE sizeof(ULONG)
    #define ISCSI_RedirectSessionInfo_TargetPortalGroupTag_ID 2
    ULONG ConnectionCount;
    #define ISCSI_RedirectSessionInfo_ConnectionCount_SIZE sizeof(ULONG)
    #define ISCSI_RedirectSessionInfo_ConnectionCount_ID 3
    ISCSI_RedirectPortalInfo RedirectPortalList[1];
    #define ISCSI_RedirectSessionInfo_RedirectPortalList_ID 4
} ISCSI_RedirectSessionInfo, *PISCSI_RedirectSessionInfo;
    { 0xdaf7f63a,0xf9ea,0x4869, { 0x87,0xe1,0xae,0x8a,0x7c,0x22,0x61,0xe2 } }
DEFINE_GUID(MSiSCSI_RedirectPortalInfoClass_GUID, \
            0xdaf7f63a,0xf9ea,0x4869,0x87,0xe1,0xae,0x8a,0x7c,0x22,0x61,0xe2);
typedef struct _MSiSCSI_RedirectPortalInfoClass
{
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_RedirectPortalInfoClass_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_RedirectPortalInfoClass_UniqueAdapterId_ID 1
    ULONG SessionCount;
    #define MSiSCSI_RedirectPortalInfoClass_SessionCount_SIZE sizeof(ULONG)
    #define MSiSCSI_RedirectPortalInfoClass_SessionCount_ID 2
    ISCSI_RedirectSessionInfo RedirectSessionList[1];
    #define MSiSCSI_RedirectPortalInfoClass_RedirectSessionList_ID 3
} MSiSCSI_RedirectPortalInfoClass, *PMSiSCSI_RedirectPortalInfoClass;
    { 0xb8d765f0,0x2d93,0x4da2, { 0x81,0x86,0xa1,0x87,0x62,0x2b,0x43,0x02 } }
DEFINE_GUID(MSiSCSI_ManagementOperations_GUID, \
            0xb8d765f0,0x2d93,0x4da2,0x81,0x86,0xa1,0x87,0x62,0x2b,0x43,0x02);
typedef struct _PingIPAddress_IN
{
    ULONG RequestCount;
    #define PingIPAddress_IN_RequestCount_SIZE sizeof(ULONG)
    #define PingIPAddress_IN_RequestCount_ID 1
    ULONG RequestSize;
    #define PingIPAddress_IN_RequestSize_SIZE sizeof(ULONG)
    #define PingIPAddress_IN_RequestSize_ID 2
    ULONG Timeout;
    #define PingIPAddress_IN_Timeout_SIZE sizeof(ULONG)
    #define PingIPAddress_IN_Timeout_ID 3
    ISCSI_IP_Address Address;
    #define PingIPAddress_IN_Address_SIZE sizeof(ISCSI_IP_Address)
    #define PingIPAddress_IN_Address_ID 4
} PingIPAddress_IN, *PPingIPAddress_IN;
typedef struct _PingIPAddress_OUT
{
    ULONG Status;
    #define PingIPAddress_OUT_Status_SIZE sizeof(ULONG)
    #define PingIPAddress_OUT_Status_ID 5
    ULONG ResponsesReceived;
    #define PingIPAddress_OUT_ResponsesReceived_SIZE sizeof(ULONG)
    #define PingIPAddress_OUT_ResponsesReceived_ID 6
} PingIPAddress_OUT, *PPingIPAddress_OUT;
