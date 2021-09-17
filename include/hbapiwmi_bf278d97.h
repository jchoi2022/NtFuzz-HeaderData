    { 0x3ce7904f,0x459f,0x480d, { 0x9a,0x3c,0x01,0x3e,0xde,0x3b,0xdd,0xe8 } }
DEFINE_GUID(MSFC_HBAPortStatistics_GUID, \
            0x3ce7904f,0x459f,0x480d,0x9a,0x3c,0x01,0x3e,0xde,0x3b,0xdd,0xe8);
typedef struct _MSFC_HBAPortStatistics
{
    LONGLONG SecondsSinceLastReset;
    #define MSFC_HBAPortStatistics_SecondsSinceLastReset_SIZE sizeof(LONGLONG)
    #define MSFC_HBAPortStatistics_SecondsSinceLastReset_ID 1
    LONGLONG TxFrames;
    #define MSFC_HBAPortStatistics_TxFrames_SIZE sizeof(LONGLONG)
    #define MSFC_HBAPortStatistics_TxFrames_ID 2
    LONGLONG TxWords;
    #define MSFC_HBAPortStatistics_TxWords_SIZE sizeof(LONGLONG)
    #define MSFC_HBAPortStatistics_TxWords_ID 3
    LONGLONG RxFrames;
    #define MSFC_HBAPortStatistics_RxFrames_SIZE sizeof(LONGLONG)
    #define MSFC_HBAPortStatistics_RxFrames_ID 4
    LONGLONG RxWords;
    #define MSFC_HBAPortStatistics_RxWords_SIZE sizeof(LONGLONG)
    #define MSFC_HBAPortStatistics_RxWords_ID 5
    LONGLONG LIPCount;
    #define MSFC_HBAPortStatistics_LIPCount_SIZE sizeof(LONGLONG)
    #define MSFC_HBAPortStatistics_LIPCount_ID 6
    LONGLONG NOSCount;
    #define MSFC_HBAPortStatistics_NOSCount_SIZE sizeof(LONGLONG)
    #define MSFC_HBAPortStatistics_NOSCount_ID 7
    LONGLONG ErrorFrames;
    #define MSFC_HBAPortStatistics_ErrorFrames_SIZE sizeof(LONGLONG)
    #define MSFC_HBAPortStatistics_ErrorFrames_ID 8
    LONGLONG DumpedFrames;
    #define MSFC_HBAPortStatistics_DumpedFrames_SIZE sizeof(LONGLONG)
    #define MSFC_HBAPortStatistics_DumpedFrames_ID 9
    LONGLONG LinkFailureCount;
    #define MSFC_HBAPortStatistics_LinkFailureCount_SIZE sizeof(LONGLONG)
    #define MSFC_HBAPortStatistics_LinkFailureCount_ID 10
    LONGLONG LossOfSyncCount;
    #define MSFC_HBAPortStatistics_LossOfSyncCount_SIZE sizeof(LONGLONG)
    #define MSFC_HBAPortStatistics_LossOfSyncCount_ID 11
    LONGLONG LossOfSignalCount;
    #define MSFC_HBAPortStatistics_LossOfSignalCount_SIZE sizeof(LONGLONG)
    #define MSFC_HBAPortStatistics_LossOfSignalCount_ID 12
    LONGLONG PrimitiveSeqProtocolErrCount;
    #define MSFC_HBAPortStatistics_PrimitiveSeqProtocolErrCount_SIZE sizeof(LONGLONG)
    #define MSFC_HBAPortStatistics_PrimitiveSeqProtocolErrCount_ID 13
    LONGLONG InvalidTxWordCount;
    #define MSFC_HBAPortStatistics_InvalidTxWordCount_SIZE sizeof(LONGLONG)
    #define MSFC_HBAPortStatistics_InvalidTxWordCount_ID 14
    LONGLONG InvalidCRCCount;
    #define MSFC_HBAPortStatistics_InvalidCRCCount_SIZE sizeof(LONGLONG)
    #define MSFC_HBAPortStatistics_InvalidCRCCount_ID 15
} MSFC_HBAPortStatistics, *PMSFC_HBAPortStatistics;
    { 0x5966a24f,0x6aa5,0x418e, { 0xb7,0x5c,0x2f,0x21,0x4d,0xfb,0x4b,0x18 } }
DEFINE_GUID(HBAFC3MgmtInfo_GUID, \
            0x5966a24f,0x6aa5,0x418e,0xb7,0x5c,0x2f,0x21,0x4d,0xfb,0x4b,0x18);
typedef struct _HBAFC3MgmtInfo
{
    ULONGLONG UniqueAdapterId;
    #define HBAFC3MgmtInfo_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define HBAFC3MgmtInfo_UniqueAdapterId_ID 1
    UCHAR wwn[8];
    #define HBAFC3MgmtInfo_wwn_SIZE sizeof(UCHAR[8])
    #define HBAFC3MgmtInfo_wwn_ID 2
    ULONG unittype;
    #define HBAFC3MgmtInfo_unittype_SIZE sizeof(ULONG)
    #define HBAFC3MgmtInfo_unittype_ID 3
    ULONG PortId;
    #define HBAFC3MgmtInfo_PortId_SIZE sizeof(ULONG)
    #define HBAFC3MgmtInfo_PortId_ID 4
    ULONG NumberOfAttachedNodes;
    #define HBAFC3MgmtInfo_NumberOfAttachedNodes_SIZE sizeof(ULONG)
    #define HBAFC3MgmtInfo_NumberOfAttachedNodes_ID 5
    USHORT IPVersion;
    #define HBAFC3MgmtInfo_IPVersion_SIZE sizeof(USHORT)
    #define HBAFC3MgmtInfo_IPVersion_ID 6
    USHORT UDPPort;
    #define HBAFC3MgmtInfo_UDPPort_SIZE sizeof(USHORT)
    #define HBAFC3MgmtInfo_UDPPort_ID 7
    UCHAR IPAddress[16];
    #define HBAFC3MgmtInfo_IPAddress_SIZE sizeof(UCHAR[16])
    #define HBAFC3MgmtInfo_IPAddress_ID 8
    USHORT reserved;
    #define HBAFC3MgmtInfo_reserved_SIZE sizeof(USHORT)
    #define HBAFC3MgmtInfo_reserved_ID 9
    USHORT TopologyDiscoveryFlags;
    #define HBAFC3MgmtInfo_TopologyDiscoveryFlags_SIZE sizeof(USHORT)
    #define HBAFC3MgmtInfo_TopologyDiscoveryFlags_ID 10
    ULONG reserved1;
    #define HBAFC3MgmtInfo_reserved1_SIZE sizeof(ULONG)
    #define HBAFC3MgmtInfo_reserved1_ID 11
} HBAFC3MgmtInfo, *PHBAFC3MgmtInfo;
    { 0xa76f5058,0xb1f0,0x4622, { 0x9e,0x88,0x5c,0xc4,0x1e,0x34,0x45,0x4a } }
DEFINE_GUID(HBAScsiID_GUID, \
            0xa76f5058,0xb1f0,0x4622,0x9e,0x88,0x5c,0xc4,0x1e,0x34,0x45,0x4a);
typedef struct _HBAScsiID
{
    ULONG ScsiBusNumber;
    #define HBAScsiID_ScsiBusNumber_SIZE sizeof(ULONG)
    #define HBAScsiID_ScsiBusNumber_ID 1
    ULONG ScsiTargetNumber;
    #define HBAScsiID_ScsiTargetNumber_SIZE sizeof(ULONG)
    #define HBAScsiID_ScsiTargetNumber_ID 2
    ULONG ScsiOSLun;
    #define HBAScsiID_ScsiOSLun_SIZE sizeof(ULONG)
    #define HBAScsiID_ScsiOSLun_ID 3
    USHORT OSDeviceName[257];
    #define HBAScsiID_OSDeviceName_SIZE sizeof(USHORT[257])
    #define HBAScsiID_OSDeviceName_ID 4
} HBAScsiID, *PHBAScsiID;
    { 0xc66015ee,0x014b,0x498a, { 0x94,0x51,0x99,0xfe,0xad,0x0a,0xb4,0x51 } }
DEFINE_GUID(MSFC_LinkEvent_GUID, \
            0xc66015ee,0x014b,0x498a,0x94,0x51,0x99,0xfe,0xad,0x0a,0xb4,0x51);
typedef struct _MSFC_LinkEvent
{
    ULONG EventType;
    #define MSFC_LinkEvent_EventType_SIZE sizeof(ULONG)
    #define MSFC_LinkEvent_EventType_ID 1
    UCHAR AdapterWWN[8];
    #define MSFC_LinkEvent_AdapterWWN_SIZE sizeof(UCHAR[8])
    #define MSFC_LinkEvent_AdapterWWN_ID 2
    ULONG RLIRBufferSize;
    #define MSFC_LinkEvent_RLIRBufferSize_SIZE sizeof(ULONG)
    #define MSFC_LinkEvent_RLIRBufferSize_ID 3
    UCHAR RLIRBuffer[1];
    #define MSFC_LinkEvent_RLIRBuffer_ID 4
} MSFC_LinkEvent, *PMSFC_LinkEvent;
    { 0xf8f3ea26,0xab2c,0x4593, { 0x8b,0x84,0xc5,0x64,0x28,0xe6,0xbe,0xdb } }
DEFINE_GUID(MSFC_FCAdapterHBAAttributes_GUID, \
            0xf8f3ea26,0xab2c,0x4593,0x8b,0x84,0xc5,0x64,0x28,0xe6,0xbe,0xdb);
typedef struct _MSFC_FCAdapterHBAAttributes
{
    ULONGLONG UniqueAdapterId;
    #define MSFC_FCAdapterHBAAttributes_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSFC_FCAdapterHBAAttributes_UniqueAdapterId_ID 1
    ULONG HBAStatus;
    #define MSFC_FCAdapterHBAAttributes_HBAStatus_SIZE sizeof(ULONG)
    #define MSFC_FCAdapterHBAAttributes_HBAStatus_ID 2
    UCHAR NodeWWN[8];
    #define MSFC_FCAdapterHBAAttributes_NodeWWN_SIZE sizeof(UCHAR[8])
    #define MSFC_FCAdapterHBAAttributes_NodeWWN_ID 3
    ULONG VendorSpecificID;
    #define MSFC_FCAdapterHBAAttributes_VendorSpecificID_SIZE sizeof(ULONG)
    #define MSFC_FCAdapterHBAAttributes_VendorSpecificID_ID 4
    ULONG NumberOfPorts;
    #define MSFC_FCAdapterHBAAttributes_NumberOfPorts_SIZE sizeof(ULONG)
    #define MSFC_FCAdapterHBAAttributes_NumberOfPorts_ID 5
    WCHAR Manufacturer[64 + 1];
    #define MSFC_FCAdapterHBAAttributes_Manufacturer_ID 6
    WCHAR SerialNumber[64 + 1];
    #define MSFC_FCAdapterHBAAttributes_SerialNumber_ID 7
    WCHAR Model[256 + 1];
    #define MSFC_FCAdapterHBAAttributes_Model_ID 8
    WCHAR ModelDescription[256 + 1];
    #define MSFC_FCAdapterHBAAttributes_ModelDescription_ID 9
    WCHAR NodeSymbolicName[256 + 1];
    #define MSFC_FCAdapterHBAAttributes_NodeSymbolicName_ID 10
    WCHAR HardwareVersion[256 + 1];
    #define MSFC_FCAdapterHBAAttributes_HardwareVersion_ID 11
    WCHAR DriverVersion[256 + 1];
    #define MSFC_FCAdapterHBAAttributes_DriverVersion_ID 12
    WCHAR OptionROMVersion[256 + 1];
    #define MSFC_FCAdapterHBAAttributes_OptionROMVersion_ID 13
    WCHAR FirmwareVersion[256 + 1];
    #define MSFC_FCAdapterHBAAttributes_FirmwareVersion_ID 14
    WCHAR DriverName[256 + 1];
    #define MSFC_FCAdapterHBAAttributes_DriverName_ID 15
    WCHAR MfgDomain[256 + 1];
    #define MSFC_FCAdapterHBAAttributes_MfgDomain_ID 16
} MSFC_FCAdapterHBAAttributes, *PMSFC_FCAdapterHBAAttributes;
    { 0xa76bd4e3,0x9961,0x4d9b, { 0xb6,0xbe,0x86,0xe6,0x98,0x26,0x0f,0x68 } }
DEFINE_GUID(MSFC_HBAPortAttributesResults_GUID, \
            0xa76bd4e3,0x9961,0x4d9b,0xb6,0xbe,0x86,0xe6,0x98,0x26,0x0f,0x68);
typedef struct _MSFC_HBAPortAttributesResults
{
    UCHAR NodeWWN[8];
    #define MSFC_HBAPortAttributesResults_NodeWWN_SIZE sizeof(UCHAR[8])
    #define MSFC_HBAPortAttributesResults_NodeWWN_ID 1
    UCHAR PortWWN[8];
    #define MSFC_HBAPortAttributesResults_PortWWN_SIZE sizeof(UCHAR[8])
    #define MSFC_HBAPortAttributesResults_PortWWN_ID 2
    ULONG PortFcId;
    #define MSFC_HBAPortAttributesResults_PortFcId_SIZE sizeof(ULONG)
    #define MSFC_HBAPortAttributesResults_PortFcId_ID 3
    ULONG PortType;
    #define MSFC_HBAPortAttributesResults_PortType_SIZE sizeof(ULONG)
    #define MSFC_HBAPortAttributesResults_PortType_ID 4
    ULONG PortState;
    #define MSFC_HBAPortAttributesResults_PortState_SIZE sizeof(ULONG)
    #define MSFC_HBAPortAttributesResults_PortState_ID 5
    ULONG PortSupportedClassofService;
    #define MSFC_HBAPortAttributesResults_PortSupportedClassofService_SIZE sizeof(ULONG)
    #define MSFC_HBAPortAttributesResults_PortSupportedClassofService_ID 6
    UCHAR PortSupportedFc4Types[32];
    #define MSFC_HBAPortAttributesResults_PortSupportedFc4Types_SIZE sizeof(UCHAR[32])
    #define MSFC_HBAPortAttributesResults_PortSupportedFc4Types_ID 7
    UCHAR PortActiveFc4Types[32];
    #define MSFC_HBAPortAttributesResults_PortActiveFc4Types_SIZE sizeof(UCHAR[32])
    #define MSFC_HBAPortAttributesResults_PortActiveFc4Types_ID 8
    ULONG PortSupportedSpeed;
    #define MSFC_HBAPortAttributesResults_PortSupportedSpeed_SIZE sizeof(ULONG)
    #define MSFC_HBAPortAttributesResults_PortSupportedSpeed_ID 9
    ULONG PortSpeed;
    #define MSFC_HBAPortAttributesResults_PortSpeed_SIZE sizeof(ULONG)
    #define MSFC_HBAPortAttributesResults_PortSpeed_ID 10
    ULONG PortMaxFrameSize;
    #define MSFC_HBAPortAttributesResults_PortMaxFrameSize_SIZE sizeof(ULONG)
    #define MSFC_HBAPortAttributesResults_PortMaxFrameSize_ID 11
    UCHAR FabricName[8];
    #define MSFC_HBAPortAttributesResults_FabricName_SIZE sizeof(UCHAR[8])
    #define MSFC_HBAPortAttributesResults_FabricName_ID 12
    ULONG NumberofDiscoveredPorts;
    #define MSFC_HBAPortAttributesResults_NumberofDiscoveredPorts_SIZE sizeof(ULONG)
    #define MSFC_HBAPortAttributesResults_NumberofDiscoveredPorts_ID 13
} MSFC_HBAPortAttributesResults, *PMSFC_HBAPortAttributesResults;
    { 0x61b397fd,0xf5ae,0x4950, { 0x97,0x58,0x0e,0xe5,0x98,0xe3,0xc6,0xe6 } }
DEFINE_GUID(MSFC_FibrePortHBAAttributes_GUID, \
            0x61b397fd,0xf5ae,0x4950,0x97,0x58,0x0e,0xe5,0x98,0xe3,0xc6,0xe6);
typedef struct _MSFC_FibrePortHBAAttributes
{
    ULONGLONG UniquePortId;
    #define MSFC_FibrePortHBAAttributes_UniquePortId_SIZE sizeof(ULONGLONG)
    #define MSFC_FibrePortHBAAttributes_UniquePortId_ID 1
    ULONG HBAStatus;
    #define MSFC_FibrePortHBAAttributes_HBAStatus_SIZE sizeof(ULONG)
    #define MSFC_FibrePortHBAAttributes_HBAStatus_ID 2
    MSFC_HBAPortAttributesResults Attributes;
    #define MSFC_FibrePortHBAAttributes_Attributes_SIZE sizeof(MSFC_HBAPortAttributesResults)
    #define MSFC_FibrePortHBAAttributes_Attributes_ID 3
} MSFC_FibrePortHBAAttributes, *PMSFC_FibrePortHBAAttributes;
    { 0x27efaba4,0x362a,0x4f20, { 0x92,0x0b,0xed,0x66,0xe2,0x80,0xfc,0xf5 } }
DEFINE_GUID(MSFC_FibrePortHBAStatistics_GUID, \
            0x27efaba4,0x362a,0x4f20,0x92,0x0b,0xed,0x66,0xe2,0x80,0xfc,0xf5);
typedef struct _MSFC_FibrePortHBAStatistics
{
    ULONGLONG UniquePortId;
    #define MSFC_FibrePortHBAStatistics_UniquePortId_SIZE sizeof(ULONGLONG)
    #define MSFC_FibrePortHBAStatistics_UniquePortId_ID 1
    ULONG HBAStatus;
    #define MSFC_FibrePortHBAStatistics_HBAStatus_SIZE sizeof(ULONG)
    #define MSFC_FibrePortHBAStatistics_HBAStatus_ID 2
    MSFC_HBAPortStatistics Statistics;
    #define MSFC_FibrePortHBAStatistics_Statistics_SIZE sizeof(MSFC_HBAPortStatistics)
    #define MSFC_FibrePortHBAStatistics_Statistics_ID 3
} MSFC_FibrePortHBAStatistics, *PMSFC_FibrePortHBAStatistics;
    { 0xe693553e,0xedf6,0x4d57, { 0xbf,0x08,0xef,0xca,0xae,0x1a,0x2e,0x1c } }
DEFINE_GUID(MSFC_FibrePortHBAMethods_GUID, \
            0xe693553e,0xedf6,0x4d57,0xbf,0x08,0xef,0xca,0xae,0x1a,0x2e,0x1c);
    { 0xca8e7fe6,0xb85e,0x497f, { 0x88,0x58,0x9b,0x5d,0x93,0xa6,0x6f,0xe1 } }
DEFINE_GUID(MSFC_FC4STATISTICS_GUID, \
            0xca8e7fe6,0xb85e,0x497f,0x88,0x58,0x9b,0x5d,0x93,0xa6,0x6f,0xe1);
typedef struct _MSFC_FC4STATISTICS
{
    ULONGLONG InputRequests;
    #define MSFC_FC4STATISTICS_InputRequests_SIZE sizeof(ULONGLONG)
    #define MSFC_FC4STATISTICS_InputRequests_ID 1
    ULONGLONG OutputRequests;
    #define MSFC_FC4STATISTICS_OutputRequests_SIZE sizeof(ULONGLONG)
    #define MSFC_FC4STATISTICS_OutputRequests_ID 2
    ULONGLONG ControlRequests;
    #define MSFC_FC4STATISTICS_ControlRequests_SIZE sizeof(ULONGLONG)
    #define MSFC_FC4STATISTICS_ControlRequests_ID 3
    ULONGLONG InputMegabytes;
    #define MSFC_FC4STATISTICS_InputMegabytes_SIZE sizeof(ULONGLONG)
    #define MSFC_FC4STATISTICS_InputMegabytes_ID 4
    ULONGLONG OutputMegabytes;
    #define MSFC_FC4STATISTICS_OutputMegabytes_SIZE sizeof(ULONGLONG)
    #define MSFC_FC4STATISTICS_OutputMegabytes_ID 5
} MSFC_FC4STATISTICS, *PMSFC_FC4STATISTICS;
    { 0x623f4588,0xcf01,0x4f0e, { 0xb1,0x97,0xab,0xbe,0xe5,0xe0,0xcf,0xf3 } }
DEFINE_GUID(MSFC_EventBuffer_GUID, \
            0x623f4588,0xcf01,0x4f0e,0xb1,0x97,0xab,0xbe,0xe5,0xe0,0xcf,0xf3);
typedef struct _MSFC_EventBuffer
{
    ULONG EventType;
    #define MSFC_EventBuffer_EventType_SIZE sizeof(ULONG)
    #define MSFC_EventBuffer_EventType_ID 1
    ULONG EventInfo[4];
    #define MSFC_EventBuffer_EventInfo_SIZE sizeof(ULONG[4])
    #define MSFC_EventBuffer_EventInfo_ID 2
} MSFC_EventBuffer, *PMSFC_EventBuffer;
    { 0xdf87d4ed,0x4612,0x4d12, { 0x85,0xfb,0x83,0x57,0x4e,0xc3,0x4b,0x7c } }
DEFINE_GUID(MSFC_HBAAdapterMethods_GUID, \
            0xdf87d4ed,0x4612,0x4d12,0x85,0xfb,0x83,0x57,0x4e,0xc3,0x4b,0x7c);
typedef struct _GetDiscoveredPortAttributes_IN
{
    ULONG PortIndex;
    #define GetDiscoveredPortAttributes_IN_PortIndex_SIZE sizeof(ULONG)
    #define GetDiscoveredPortAttributes_IN_PortIndex_ID 1
    ULONG DiscoveredPortIndex;
    #define GetDiscoveredPortAttributes_IN_DiscoveredPortIndex_SIZE sizeof(ULONG)
    #define GetDiscoveredPortAttributes_IN_DiscoveredPortIndex_ID 2
} GetDiscoveredPortAttributes_IN, *PGetDiscoveredPortAttributes_IN;
typedef struct _GetDiscoveredPortAttributes_OUT
{
    ULONG HBAStatus;
    #define GetDiscoveredPortAttributes_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define GetDiscoveredPortAttributes_OUT_HBAStatus_ID 3
    MSFC_HBAPortAttributesResults PortAttributes;
    #define GetDiscoveredPortAttributes_OUT_PortAttributes_SIZE sizeof(MSFC_HBAPortAttributesResults)
    #define GetDiscoveredPortAttributes_OUT_PortAttributes_ID 4
} GetDiscoveredPortAttributes_OUT, *PGetDiscoveredPortAttributes_OUT;
typedef struct _GetPortAttributesByWWN_IN
{
    UCHAR wwn[8];
    #define GetPortAttributesByWWN_IN_wwn_SIZE sizeof(UCHAR[8])
    #define GetPortAttributesByWWN_IN_wwn_ID 1
} GetPortAttributesByWWN_IN, *PGetPortAttributesByWWN_IN;
typedef struct _GetPortAttributesByWWN_OUT
{
    ULONG HBAStatus;
    #define GetPortAttributesByWWN_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define GetPortAttributesByWWN_OUT_HBAStatus_ID 2
    MSFC_HBAPortAttributesResults PortAttributes;
    #define GetPortAttributesByWWN_OUT_PortAttributes_SIZE sizeof(MSFC_HBAPortAttributesResults)
    #define GetPortAttributesByWWN_OUT_PortAttributes_ID 3
} GetPortAttributesByWWN_OUT, *PGetPortAttributesByWWN_OUT;
typedef struct _SendCTPassThru_IN
{
    UCHAR PortWWN[8];
    #define SendCTPassThru_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define SendCTPassThru_IN_PortWWN_ID 1
    ULONG RequestBufferCount;
    #define SendCTPassThru_IN_RequestBufferCount_SIZE sizeof(ULONG)
    #define SendCTPassThru_IN_RequestBufferCount_ID 2
    UCHAR RequestBuffer[1];
    #define SendCTPassThru_IN_RequestBuffer_ID 3
} SendCTPassThru_IN, *PSendCTPassThru_IN;
typedef struct _SendCTPassThru_OUT
{
    ULONG HBAStatus;
    #define SendCTPassThru_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SendCTPassThru_OUT_HBAStatus_ID 4
    ULONG TotalResponseBufferCount;
    #define SendCTPassThru_OUT_TotalResponseBufferCount_SIZE sizeof(ULONG)
    #define SendCTPassThru_OUT_TotalResponseBufferCount_ID 5
    ULONG ActualResponseBufferCount;
    #define SendCTPassThru_OUT_ActualResponseBufferCount_SIZE sizeof(ULONG)
    #define SendCTPassThru_OUT_ActualResponseBufferCount_ID 6
    UCHAR ResponseBuffer[1];
    #define SendCTPassThru_OUT_ResponseBuffer_ID 7
} SendCTPassThru_OUT, *PSendCTPassThru_OUT;
typedef struct _SendRNID_IN
{
    UCHAR wwn[8];
    #define SendRNID_IN_wwn_SIZE sizeof(UCHAR[8])
    #define SendRNID_IN_wwn_ID 1
    ULONG wwntype;
    #define SendRNID_IN_wwntype_SIZE sizeof(ULONG)
    #define SendRNID_IN_wwntype_ID 2
} SendRNID_IN, *PSendRNID_IN;
typedef struct _SendRNID_OUT
{
    ULONG HBAStatus;
    #define SendRNID_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SendRNID_OUT_HBAStatus_ID 3
    ULONG ResponseBufferCount;
    #define SendRNID_OUT_ResponseBufferCount_SIZE sizeof(ULONG)
    #define SendRNID_OUT_ResponseBufferCount_ID 4
    UCHAR ResponseBuffer[1];
    #define SendRNID_OUT_ResponseBuffer_ID 5
} SendRNID_OUT, *PSendRNID_OUT;
typedef struct _SendRNIDV2_IN
{
    UCHAR PortWWN[8];
    #define SendRNIDV2_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define SendRNIDV2_IN_PortWWN_ID 1
    UCHAR DestWWN[8];
    #define SendRNIDV2_IN_DestWWN_SIZE sizeof(UCHAR[8])
    #define SendRNIDV2_IN_DestWWN_ID 2
    ULONG DestFCID;
    #define SendRNIDV2_IN_DestFCID_SIZE sizeof(ULONG)
    #define SendRNIDV2_IN_DestFCID_ID 3
    ULONG NodeIdDataFormat;
    #define SendRNIDV2_IN_NodeIdDataFormat_SIZE sizeof(ULONG)
    #define SendRNIDV2_IN_NodeIdDataFormat_ID 4
} SendRNIDV2_IN, *PSendRNIDV2_IN;
typedef struct _SendRNIDV2_OUT
{
    ULONG HBAStatus;
    #define SendRNIDV2_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SendRNIDV2_OUT_HBAStatus_ID 5
    ULONG TotalRspBufferSize;
    #define SendRNIDV2_OUT_TotalRspBufferSize_SIZE sizeof(ULONG)
    #define SendRNIDV2_OUT_TotalRspBufferSize_ID 6
    ULONG ActualRspBufferSize;
    #define SendRNIDV2_OUT_ActualRspBufferSize_SIZE sizeof(ULONG)
    #define SendRNIDV2_OUT_ActualRspBufferSize_ID 7
    UCHAR RspBuffer[1];
    #define SendRNIDV2_OUT_RspBuffer_ID 8
} SendRNIDV2_OUT, *PSendRNIDV2_OUT;
typedef struct _GetFC3MgmtInfo_OUT
{
    ULONG HBAStatus;
    #define GetFC3MgmtInfo_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define GetFC3MgmtInfo_OUT_HBAStatus_ID 1
    HBAFC3MgmtInfo MgmtInfo;
    #define GetFC3MgmtInfo_OUT_MgmtInfo_SIZE sizeof(HBAFC3MgmtInfo)
    #define GetFC3MgmtInfo_OUT_MgmtInfo_ID 2
} GetFC3MgmtInfo_OUT, *PGetFC3MgmtInfo_OUT;
typedef struct _SetFC3MgmtInfo_IN
{
    HBAFC3MgmtInfo MgmtInfo;
    #define SetFC3MgmtInfo_IN_MgmtInfo_SIZE sizeof(HBAFC3MgmtInfo)
    #define SetFC3MgmtInfo_IN_MgmtInfo_ID 1
} SetFC3MgmtInfo_IN, *PSetFC3MgmtInfo_IN;
typedef struct _SetFC3MgmtInfo_OUT
{
    ULONG HBAStatus;
    #define SetFC3MgmtInfo_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SetFC3MgmtInfo_OUT_HBAStatus_ID 2
} SetFC3MgmtInfo_OUT, *PSetFC3MgmtInfo_OUT;
typedef struct _SendRPL_IN
{
    UCHAR PortWWN[8];
    #define SendRPL_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define SendRPL_IN_PortWWN_ID 1
    UCHAR AgentWWN[8];
    #define SendRPL_IN_AgentWWN_SIZE sizeof(UCHAR[8])
    #define SendRPL_IN_AgentWWN_ID 2
    ULONG agent_domain;
    #define SendRPL_IN_agent_domain_SIZE sizeof(ULONG)
    #define SendRPL_IN_agent_domain_ID 3
    ULONG portIndex;
    #define SendRPL_IN_portIndex_SIZE sizeof(ULONG)
    #define SendRPL_IN_portIndex_ID 4
} SendRPL_IN, *PSendRPL_IN;
typedef struct _SendRPL_OUT
{
    ULONG HBAStatus;
    #define SendRPL_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SendRPL_OUT_HBAStatus_ID 5
    ULONG TotalRspBufferSize;
    #define SendRPL_OUT_TotalRspBufferSize_SIZE sizeof(ULONG)
    #define SendRPL_OUT_TotalRspBufferSize_ID 6
    ULONG ActualRspBufferSize;
    #define SendRPL_OUT_ActualRspBufferSize_SIZE sizeof(ULONG)
    #define SendRPL_OUT_ActualRspBufferSize_ID 7
    UCHAR RspBuffer[1];
    #define SendRPL_OUT_RspBuffer_ID 8
} SendRPL_OUT, *PSendRPL_OUT;
typedef struct _SendRPS_IN
{
    UCHAR PortWWN[8];
    #define SendRPS_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define SendRPS_IN_PortWWN_ID 1
    UCHAR AgentWWN[8];
    #define SendRPS_IN_AgentWWN_SIZE sizeof(UCHAR[8])
    #define SendRPS_IN_AgentWWN_ID 2
    UCHAR ObjectWWN[8];
    #define SendRPS_IN_ObjectWWN_SIZE sizeof(UCHAR[8])
    #define SendRPS_IN_ObjectWWN_ID 3
    ULONG AgentDomain;
    #define SendRPS_IN_AgentDomain_SIZE sizeof(ULONG)
    #define SendRPS_IN_AgentDomain_ID 4
    ULONG ObjectPortNumber;
    #define SendRPS_IN_ObjectPortNumber_SIZE sizeof(ULONG)
    #define SendRPS_IN_ObjectPortNumber_ID 5
} SendRPS_IN, *PSendRPS_IN;
typedef struct _SendRPS_OUT
{
    ULONG HBAStatus;
    #define SendRPS_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SendRPS_OUT_HBAStatus_ID 6
    ULONG TotalRspBufferSize;
    #define SendRPS_OUT_TotalRspBufferSize_SIZE sizeof(ULONG)
    #define SendRPS_OUT_TotalRspBufferSize_ID 7
    ULONG ActualRspBufferSize;
    #define SendRPS_OUT_ActualRspBufferSize_SIZE sizeof(ULONG)
    #define SendRPS_OUT_ActualRspBufferSize_ID 8
    UCHAR RspBuffer[1];
    #define SendRPS_OUT_RspBuffer_ID 9
} SendRPS_OUT, *PSendRPS_OUT;
typedef struct _SendSRL_IN
{
    UCHAR PortWWN[8];
    #define SendSRL_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define SendSRL_IN_PortWWN_ID 1
    UCHAR WWN[8];
    #define SendSRL_IN_WWN_SIZE sizeof(UCHAR[8])
    #define SendSRL_IN_WWN_ID 2
    ULONG Domain;
    #define SendSRL_IN_Domain_SIZE sizeof(ULONG)
    #define SendSRL_IN_Domain_ID 3
} SendSRL_IN, *PSendSRL_IN;
typedef struct _SendSRL_OUT
{
    ULONG HBAStatus;
    #define SendSRL_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SendSRL_OUT_HBAStatus_ID 4
    ULONG TotalRspBufferSize;
    #define SendSRL_OUT_TotalRspBufferSize_SIZE sizeof(ULONG)
    #define SendSRL_OUT_TotalRspBufferSize_ID 5
    ULONG ActualRspBufferSize;
    #define SendSRL_OUT_ActualRspBufferSize_SIZE sizeof(ULONG)
    #define SendSRL_OUT_ActualRspBufferSize_ID 6
    UCHAR RspBuffer[1];
    #define SendSRL_OUT_RspBuffer_ID 7
} SendSRL_OUT, *PSendSRL_OUT;
typedef struct _SendLIRR_IN
{
    UCHAR SourceWWN[8];
    #define SendLIRR_IN_SourceWWN_SIZE sizeof(UCHAR[8])
    #define SendLIRR_IN_SourceWWN_ID 1
    UCHAR DestWWN[8];
    #define SendLIRR_IN_DestWWN_SIZE sizeof(UCHAR[8])
    #define SendLIRR_IN_DestWWN_ID 2
    UCHAR Function;
    #define SendLIRR_IN_Function_SIZE sizeof(UCHAR)
    #define SendLIRR_IN_Function_ID 3
    UCHAR Type;
    #define SendLIRR_IN_Type_SIZE sizeof(UCHAR)
    #define SendLIRR_IN_Type_ID 4
} SendLIRR_IN, *PSendLIRR_IN;
typedef struct _SendLIRR_OUT
{
    ULONG HBAStatus;
    #define SendLIRR_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SendLIRR_OUT_HBAStatus_ID 5
    ULONG TotalRspBufferSize;
    #define SendLIRR_OUT_TotalRspBufferSize_SIZE sizeof(ULONG)
    #define SendLIRR_OUT_TotalRspBufferSize_ID 6
    ULONG ActualRspBufferSize;
    #define SendLIRR_OUT_ActualRspBufferSize_SIZE sizeof(ULONG)
    #define SendLIRR_OUT_ActualRspBufferSize_ID 7
    UCHAR RspBuffer[1];
    #define SendLIRR_OUT_RspBuffer_ID 8
} SendLIRR_OUT, *PSendLIRR_OUT;
typedef struct _GetFC4Statistics_IN
{
    UCHAR PortWWN[8];
    #define GetFC4Statistics_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define GetFC4Statistics_IN_PortWWN_ID 1
    UCHAR FC4Type;
    #define GetFC4Statistics_IN_FC4Type_SIZE sizeof(UCHAR)
    #define GetFC4Statistics_IN_FC4Type_ID 2
} GetFC4Statistics_IN, *PGetFC4Statistics_IN;
typedef struct _GetFC4Statistics_OUT
{
    ULONG HBAStatus;
    #define GetFC4Statistics_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define GetFC4Statistics_OUT_HBAStatus_ID 3
    MSFC_FC4STATISTICS FC4Statistics;
    #define GetFC4Statistics_OUT_FC4Statistics_SIZE sizeof(MSFC_FC4STATISTICS)
    #define GetFC4Statistics_OUT_FC4Statistics_ID 4
} GetFC4Statistics_OUT, *PGetFC4Statistics_OUT;
typedef struct _GetFCPStatistics_IN
{
    HBAScsiID ScsiId;
    #define GetFCPStatistics_IN_ScsiId_SIZE sizeof(HBAScsiID)
    #define GetFCPStatistics_IN_ScsiId_ID 1
} GetFCPStatistics_IN, *PGetFCPStatistics_IN;
typedef struct _GetFCPStatistics_OUT
{
    ULONG HBAStatus;
    #define GetFCPStatistics_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define GetFCPStatistics_OUT_HBAStatus_ID 2
    MSFC_FC4STATISTICS FC4Statistics;
    #define GetFCPStatistics_OUT_FC4Statistics_SIZE sizeof(MSFC_FC4STATISTICS)
    #define GetFCPStatistics_OUT_FC4Statistics_ID 3
} GetFCPStatistics_OUT, *PGetFCPStatistics_OUT;
typedef struct _ScsiInquiry_IN
{
    UCHAR Cdb[6];
    #define ScsiInquiry_IN_Cdb_SIZE sizeof(UCHAR[6])
    #define ScsiInquiry_IN_Cdb_ID 1
    UCHAR HbaPortWWN[8];
    #define ScsiInquiry_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define ScsiInquiry_IN_HbaPortWWN_ID 2
    UCHAR DiscoveredPortWWN[8];
    #define ScsiInquiry_IN_DiscoveredPortWWN_SIZE sizeof(UCHAR[8])
    #define ScsiInquiry_IN_DiscoveredPortWWN_ID 3
    ULONGLONG FcLun;
    #define ScsiInquiry_IN_FcLun_SIZE sizeof(ULONGLONG)
    #define ScsiInquiry_IN_FcLun_ID 4
} ScsiInquiry_IN, *PScsiInquiry_IN;
typedef struct _ScsiInquiry_OUT
{
    ULONG HBAStatus;
    #define ScsiInquiry_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define ScsiInquiry_OUT_HBAStatus_ID 5
    ULONG ResponseBufferSize;
    #define ScsiInquiry_OUT_ResponseBufferSize_SIZE sizeof(ULONG)
    #define ScsiInquiry_OUT_ResponseBufferSize_ID 6
    ULONG SenseBufferSize;
    #define ScsiInquiry_OUT_SenseBufferSize_SIZE sizeof(ULONG)
    #define ScsiInquiry_OUT_SenseBufferSize_ID 7
    UCHAR ScsiStatus;
    #define ScsiInquiry_OUT_ScsiStatus_SIZE sizeof(UCHAR)
    #define ScsiInquiry_OUT_ScsiStatus_ID 8
    UCHAR ResponseBuffer[1];
    #define ScsiInquiry_OUT_ResponseBuffer_ID 9
    #define ScsiInquiry_OUT_SenseBuffer_ID 10
} ScsiInquiry_OUT, *PScsiInquiry_OUT;
typedef struct _ScsiReadCapacity_IN
{
    UCHAR Cdb[10];
    #define ScsiReadCapacity_IN_Cdb_SIZE sizeof(UCHAR[10])
    #define ScsiReadCapacity_IN_Cdb_ID 1
    UCHAR HbaPortWWN[8];
    #define ScsiReadCapacity_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define ScsiReadCapacity_IN_HbaPortWWN_ID 2
    UCHAR DiscoveredPortWWN[8];
    #define ScsiReadCapacity_IN_DiscoveredPortWWN_SIZE sizeof(UCHAR[8])
    #define ScsiReadCapacity_IN_DiscoveredPortWWN_ID 3
    ULONGLONG FcLun;
    #define ScsiReadCapacity_IN_FcLun_SIZE sizeof(ULONGLONG)
    #define ScsiReadCapacity_IN_FcLun_ID 4
} ScsiReadCapacity_IN, *PScsiReadCapacity_IN;
typedef struct _ScsiReadCapacity_OUT
{
    ULONG HBAStatus;
    #define ScsiReadCapacity_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define ScsiReadCapacity_OUT_HBAStatus_ID 5
    ULONG ResponseBufferSize;
    #define ScsiReadCapacity_OUT_ResponseBufferSize_SIZE sizeof(ULONG)
    #define ScsiReadCapacity_OUT_ResponseBufferSize_ID 6
    ULONG SenseBufferSize;
    #define ScsiReadCapacity_OUT_SenseBufferSize_SIZE sizeof(ULONG)
    #define ScsiReadCapacity_OUT_SenseBufferSize_ID 7
    UCHAR ScsiStatus;
    #define ScsiReadCapacity_OUT_ScsiStatus_SIZE sizeof(UCHAR)
    #define ScsiReadCapacity_OUT_ScsiStatus_ID 8
    UCHAR ResponseBuffer[1];
    #define ScsiReadCapacity_OUT_ResponseBuffer_ID 9
    #define ScsiReadCapacity_OUT_SenseBuffer_ID 10
} ScsiReadCapacity_OUT, *PScsiReadCapacity_OUT;
typedef struct _ScsiReportLuns_IN
{
    UCHAR Cdb[12];
    #define ScsiReportLuns_IN_Cdb_SIZE sizeof(UCHAR[12])
    #define ScsiReportLuns_IN_Cdb_ID 1
    UCHAR HbaPortWWN[8];
    #define ScsiReportLuns_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define ScsiReportLuns_IN_HbaPortWWN_ID 2
    UCHAR DiscoveredPortWWN[8];
    #define ScsiReportLuns_IN_DiscoveredPortWWN_SIZE sizeof(UCHAR[8])
    #define ScsiReportLuns_IN_DiscoveredPortWWN_ID 3
} ScsiReportLuns_IN, *PScsiReportLuns_IN;
typedef struct _ScsiReportLuns_OUT
{
    ULONG HBAStatus;
    #define ScsiReportLuns_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define ScsiReportLuns_OUT_HBAStatus_ID 4
    ULONG ResponseBufferSize;
    #define ScsiReportLuns_OUT_ResponseBufferSize_SIZE sizeof(ULONG)
    #define ScsiReportLuns_OUT_ResponseBufferSize_ID 5
    ULONG SenseBufferSize;
    #define ScsiReportLuns_OUT_SenseBufferSize_SIZE sizeof(ULONG)
    #define ScsiReportLuns_OUT_SenseBufferSize_ID 6
    UCHAR ScsiStatus;
    #define ScsiReportLuns_OUT_ScsiStatus_SIZE sizeof(UCHAR)
    #define ScsiReportLuns_OUT_ScsiStatus_ID 7
    UCHAR ResponseBuffer[1];
    #define ScsiReportLuns_OUT_ResponseBuffer_ID 8
    #define ScsiReportLuns_OUT_SenseBuffer_ID 9
} ScsiReportLuns_OUT, *PScsiReportLuns_OUT;
typedef struct _GetEventBuffer_OUT
{
    ULONG HBAStatus;
    #define GetEventBuffer_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define GetEventBuffer_OUT_HBAStatus_ID 1
    ULONG EventCount;
    #define GetEventBuffer_OUT_EventCount_SIZE sizeof(ULONG)
    #define GetEventBuffer_OUT_EventCount_ID 2
    MSFC_EventBuffer Events[1];
    #define GetEventBuffer_OUT_Events_ID 3
} GetEventBuffer_OUT, *PGetEventBuffer_OUT;
typedef struct _SendRLS_IN
{
    UCHAR PortWWN[8];
    #define SendRLS_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define SendRLS_IN_PortWWN_ID 1
    UCHAR DestWWN[8];
    #define SendRLS_IN_DestWWN_SIZE sizeof(UCHAR[8])
    #define SendRLS_IN_DestWWN_ID 2
} SendRLS_IN, *PSendRLS_IN;
typedef struct _SendRLS_OUT
{
    ULONG HBAStatus;
    #define SendRLS_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SendRLS_OUT_HBAStatus_ID 3
    ULONG TotalRspBufferSize;
    #define SendRLS_OUT_TotalRspBufferSize_SIZE sizeof(ULONG)
    #define SendRLS_OUT_TotalRspBufferSize_ID 4
    ULONG ActualRspBufferSize;
    #define SendRLS_OUT_ActualRspBufferSize_SIZE sizeof(ULONG)
    #define SendRLS_OUT_ActualRspBufferSize_ID 5
    UCHAR RspBuffer[1];
    #define SendRLS_OUT_RspBuffer_ID 6
} SendRLS_OUT, *PSendRLS_OUT;
    { 0xff02bc96,0x7fb0,0x4bac, { 0x8f,0x97,0xc7,0x1e,0x49,0x5f,0xa6,0x98 } }
DEFINE_GUID(HBAFCPID_GUID, \
            0xff02bc96,0x7fb0,0x4bac,0x8f,0x97,0xc7,0x1e,0x49,0x5f,0xa6,0x98);
typedef struct _HBAFCPID
{
    ULONG Fcid;
    #define HBAFCPID_Fcid_SIZE sizeof(ULONG)
    #define HBAFCPID_Fcid_ID 1
    UCHAR NodeWWN[8];
    #define HBAFCPID_NodeWWN_SIZE sizeof(UCHAR[8])
    #define HBAFCPID_NodeWWN_ID 2
    UCHAR PortWWN[8];
    #define HBAFCPID_PortWWN_SIZE sizeof(UCHAR[8])
    #define HBAFCPID_PortWWN_ID 3
    ULONGLONG FcpLun;
    #define HBAFCPID_FcpLun_SIZE sizeof(ULONGLONG)
    #define HBAFCPID_FcpLun_ID 4
} HBAFCPID, *PHBAFCPID;
    { 0x77ca1248,0x1505,0x4221, { 0x8e,0xb6,0xbb,0xb6,0xec,0x77,0x1a,0x87 } }
DEFINE_GUID(HBAFCPScsiEntry_GUID, \
            0x77ca1248,0x1505,0x4221,0x8e,0xb6,0xbb,0xb6,0xec,0x77,0x1a,0x87);
typedef struct _HBAFCPScsiEntry
{
    HBAFCPID FCPId;
    #define HBAFCPScsiEntry_FCPId_SIZE sizeof(HBAFCPID)
    #define HBAFCPScsiEntry_FCPId_ID 1
    UCHAR Luid[256];
    #define HBAFCPScsiEntry_Luid_SIZE sizeof(UCHAR[256])
    #define HBAFCPScsiEntry_Luid_ID 2
    HBAScsiID ScsiId;
    #define HBAFCPScsiEntry_ScsiId_SIZE sizeof(HBAScsiID)
    #define HBAFCPScsiEntry_ScsiId_ID 3
} HBAFCPScsiEntry, *PHBAFCPScsiEntry;
    { 0xfceff8b7,0x9d6b,0x4115, { 0x84,0x22,0x05,0x99,0x24,0x51,0xa6,0x29 } }
DEFINE_GUID(HBAFCPBindingEntry_GUID, \
            0xfceff8b7,0x9d6b,0x4115,0x84,0x22,0x05,0x99,0x24,0x51,0xa6,0x29);
typedef struct _HBAFCPBindingEntry
{
    ULONG Type;
    #define HBAFCPBindingEntry_Type_SIZE sizeof(ULONG)
    #define HBAFCPBindingEntry_Type_ID 1
    HBAFCPID FCPId;
    #define HBAFCPBindingEntry_FCPId_SIZE sizeof(HBAFCPID)
    #define HBAFCPBindingEntry_FCPId_ID 2
    HBAScsiID ScsiId;
    #define HBAFCPBindingEntry_ScsiId_SIZE sizeof(HBAScsiID)
    #define HBAFCPBindingEntry_ScsiId_ID 3
} HBAFCPBindingEntry, *PHBAFCPBindingEntry;
    { 0x3a1e7679,0x4b1f,0x4f31, { 0xa8,0xae,0xfe,0x92,0x78,0x73,0x09,0x24 } }
DEFINE_GUID(HBAFCPBindingEntry2_GUID, \
            0x3a1e7679,0x4b1f,0x4f31,0xa8,0xae,0xfe,0x92,0x78,0x73,0x09,0x24);
typedef struct _HBAFCPBindingEntry2
{
    ULONG Type;
    #define HBAFCPBindingEntry2_Type_SIZE sizeof(ULONG)
    #define HBAFCPBindingEntry2_Type_ID 1
    HBAFCPID FCPId;
    #define HBAFCPBindingEntry2_FCPId_SIZE sizeof(HBAFCPID)
    #define HBAFCPBindingEntry2_FCPId_ID 2
    UCHAR Luid[256];
    #define HBAFCPBindingEntry2_Luid_SIZE sizeof(UCHAR[256])
    #define HBAFCPBindingEntry2_Luid_ID 3
    HBAScsiID ScsiId;
    #define HBAFCPBindingEntry2_ScsiId_SIZE sizeof(HBAScsiID)
    #define HBAFCPBindingEntry2_ScsiId_ID 4
} HBAFCPBindingEntry2, *PHBAFCPBindingEntry2;
    { 0x7a1fc391,0x5b23,0x4c19, { 0xb0,0xeb,0xb1,0xae,0xf5,0x90,0x50,0xc3 } }
DEFINE_GUID(MSFC_HBAFCPInfo_GUID, \
            0x7a1fc391,0x5b23,0x4c19,0xb0,0xeb,0xb1,0xae,0xf5,0x90,0x50,0xc3);
typedef struct _GetFcpTargetMapping_IN
{
    UCHAR HbaPortWWN[8];
    #define GetFcpTargetMapping_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define GetFcpTargetMapping_IN_HbaPortWWN_ID 1
    ULONG InEntryCount;
    #define GetFcpTargetMapping_IN_InEntryCount_SIZE sizeof(ULONG)
    #define GetFcpTargetMapping_IN_InEntryCount_ID 2
} GetFcpTargetMapping_IN, *PGetFcpTargetMapping_IN;
typedef struct _GetFcpTargetMapping_OUT
{
    ULONG HBAStatus;
    #define GetFcpTargetMapping_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define GetFcpTargetMapping_OUT_HBAStatus_ID 3
    ULONG TotalEntryCount;
    #define GetFcpTargetMapping_OUT_TotalEntryCount_SIZE sizeof(ULONG)
    #define GetFcpTargetMapping_OUT_TotalEntryCount_ID 4
    ULONG OutEntryCount;
    #define GetFcpTargetMapping_OUT_OutEntryCount_SIZE sizeof(ULONG)
    #define GetFcpTargetMapping_OUT_OutEntryCount_ID 5
    HBAFCPScsiEntry Entry[1];
    #define GetFcpTargetMapping_OUT_Entry_ID 6
} GetFcpTargetMapping_OUT, *PGetFcpTargetMapping_OUT;
typedef struct _GetFcpPersistentBinding_IN
{
    ULONG InEntryCount;
    #define GetFcpPersistentBinding_IN_InEntryCount_SIZE sizeof(ULONG)
    #define GetFcpPersistentBinding_IN_InEntryCount_ID 1
} GetFcpPersistentBinding_IN, *PGetFcpPersistentBinding_IN;
typedef struct _GetFcpPersistentBinding_OUT
{
    ULONG HBAStatus;
    #define GetFcpPersistentBinding_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define GetFcpPersistentBinding_OUT_HBAStatus_ID 2
    ULONG TotalEntryCount;
    #define GetFcpPersistentBinding_OUT_TotalEntryCount_SIZE sizeof(ULONG)
    #define GetFcpPersistentBinding_OUT_TotalEntryCount_ID 3
    ULONG OutEntryCount;
    #define GetFcpPersistentBinding_OUT_OutEntryCount_SIZE sizeof(ULONG)
    #define GetFcpPersistentBinding_OUT_OutEntryCount_ID 4
    HBAFCPBindingEntry Entry[1];
    #define GetFcpPersistentBinding_OUT_Entry_ID 5
} GetFcpPersistentBinding_OUT, *PGetFcpPersistentBinding_OUT;
typedef struct _GetBindingCapability_IN
{
    UCHAR PortWWN[8];
    #define GetBindingCapability_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define GetBindingCapability_IN_PortWWN_ID 1
} GetBindingCapability_IN, *PGetBindingCapability_IN;
typedef struct _GetBindingCapability_OUT
{
    ULONG HBAStatus;
    #define GetBindingCapability_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define GetBindingCapability_OUT_HBAStatus_ID 2
    ULONG BindType;
    #define GetBindingCapability_OUT_BindType_SIZE sizeof(ULONG)
    #define GetBindingCapability_OUT_BindType_ID 3
} GetBindingCapability_OUT, *PGetBindingCapability_OUT;
typedef struct _GetBindingSupport_IN
{
    UCHAR PortWWN[8];
    #define GetBindingSupport_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define GetBindingSupport_IN_PortWWN_ID 1
} GetBindingSupport_IN, *PGetBindingSupport_IN;
typedef struct _GetBindingSupport_OUT
{
    ULONG HBAStatus;
    #define GetBindingSupport_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define GetBindingSupport_OUT_HBAStatus_ID 2
    ULONG BindType;
    #define GetBindingSupport_OUT_BindType_SIZE sizeof(ULONG)
    #define GetBindingSupport_OUT_BindType_ID 3
} GetBindingSupport_OUT, *PGetBindingSupport_OUT;
typedef struct _SetBindingSupport_IN
{
    UCHAR PortWWN[8];
    #define SetBindingSupport_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define SetBindingSupport_IN_PortWWN_ID 1
    ULONG BindType;
    #define SetBindingSupport_IN_BindType_SIZE sizeof(ULONG)
    #define SetBindingSupport_IN_BindType_ID 2
} SetBindingSupport_IN, *PSetBindingSupport_IN;
typedef struct _SetBindingSupport_OUT
{
    ULONG HBAStatus;
    #define SetBindingSupport_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SetBindingSupport_OUT_HBAStatus_ID 3
} SetBindingSupport_OUT, *PSetBindingSupport_OUT;
typedef struct _GetPersistentBinding2_IN
{
    UCHAR PortWWN[8];
    #define GetPersistentBinding2_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define GetPersistentBinding2_IN_PortWWN_ID 1
    ULONG InEntryCount;
    #define GetPersistentBinding2_IN_InEntryCount_SIZE sizeof(ULONG)
    #define GetPersistentBinding2_IN_InEntryCount_ID 2
} GetPersistentBinding2_IN, *PGetPersistentBinding2_IN;
typedef struct _GetPersistentBinding2_OUT
{
    ULONG HBAStatus;
    #define GetPersistentBinding2_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define GetPersistentBinding2_OUT_HBAStatus_ID 3
    ULONG TotalEntryCount;
    #define GetPersistentBinding2_OUT_TotalEntryCount_SIZE sizeof(ULONG)
    #define GetPersistentBinding2_OUT_TotalEntryCount_ID 4
    ULONG OutEntryCount;
    #define GetPersistentBinding2_OUT_OutEntryCount_SIZE sizeof(ULONG)
    #define GetPersistentBinding2_OUT_OutEntryCount_ID 5
    HBAFCPBindingEntry2 Bindings[1];
    #define GetPersistentBinding2_OUT_Bindings_ID 6
} GetPersistentBinding2_OUT, *PGetPersistentBinding2_OUT;
typedef struct _SetPersistentEntry_IN
{
    UCHAR PortWWN[8];
    #define SetPersistentEntry_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define SetPersistentEntry_IN_PortWWN_ID 1
    HBAFCPBindingEntry2 Binding;
    #define SetPersistentEntry_IN_Binding_SIZE sizeof(HBAFCPBindingEntry2)
    #define SetPersistentEntry_IN_Binding_ID 2
} SetPersistentEntry_IN, *PSetPersistentEntry_IN;
typedef struct _SetPersistentEntry_OUT
{
    ULONG HBAStatus;
    #define SetPersistentEntry_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SetPersistentEntry_OUT_HBAStatus_ID 3
} SetPersistentEntry_OUT, *PSetPersistentEntry_OUT;
typedef struct _RemovePersistentEntry_IN
{
    UCHAR PortWWN[8];
    #define RemovePersistentEntry_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define RemovePersistentEntry_IN_PortWWN_ID 1
    HBAFCPBindingEntry2 Binding;
    #define RemovePersistentEntry_IN_Binding_SIZE sizeof(HBAFCPBindingEntry2)
    #define RemovePersistentEntry_IN_Binding_ID 2
} RemovePersistentEntry_IN, *PRemovePersistentEntry_IN;
typedef struct _RemovePersistentEntry_OUT
{
    ULONG HBAStatus;
    #define RemovePersistentEntry_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define RemovePersistentEntry_OUT_HBAStatus_ID 3
} RemovePersistentEntry_OUT, *PRemovePersistentEntry_OUT;
    { 0xe9e47403,0xd1d7,0x43f8, { 0x8e,0xe3,0x53,0xcd,0xbf,0xff,0x56,0x46 } }
DEFINE_GUID(MSFC_AdapterEvent_GUID, \
            0xe9e47403,0xd1d7,0x43f8,0x8e,0xe3,0x53,0xcd,0xbf,0xff,0x56,0x46);
typedef struct _MSFC_AdapterEvent
{
    ULONG EventType;
    #define MSFC_AdapterEvent_EventType_SIZE sizeof(ULONG)
    #define MSFC_AdapterEvent_EventType_ID 1
    UCHAR PortWWN[8];
    #define MSFC_AdapterEvent_PortWWN_SIZE sizeof(UCHAR[8])
    #define MSFC_AdapterEvent_PortWWN_ID 2
} MSFC_AdapterEvent, *PMSFC_AdapterEvent;
    { 0x095fbe97,0x3876,0x48ef, { 0x8a,0x04,0x1c,0x55,0x93,0x5d,0x0d,0xf5 } }
DEFINE_GUID(MSFC_PortEvent_GUID, \
            0x095fbe97,0x3876,0x48ef,0x8a,0x04,0x1c,0x55,0x93,0x5d,0x0d,0xf5);
typedef struct _MSFC_PortEvent
{
    ULONG EventType;
    #define MSFC_PortEvent_EventType_SIZE sizeof(ULONG)
    #define MSFC_PortEvent_EventType_ID 1
    ULONG FabricPortId;
    #define MSFC_PortEvent_FabricPortId_SIZE sizeof(ULONG)
    #define MSFC_PortEvent_FabricPortId_ID 2
    UCHAR PortWWN[8];
    #define MSFC_PortEvent_PortWWN_SIZE sizeof(UCHAR[8])
    #define MSFC_PortEvent_PortWWN_ID 3
} MSFC_PortEvent, *PMSFC_PortEvent;
    { 0xcfa6ef26,0x8675,0x4e27, { 0x9a,0x0b,0xb4,0xa8,0x60,0xdd,0xd0,0xf3 } }
DEFINE_GUID(MSFC_TargetEvent_GUID, \
            0xcfa6ef26,0x8675,0x4e27,0x9a,0x0b,0xb4,0xa8,0x60,0xdd,0xd0,0xf3);
typedef struct _MSFC_TargetEvent
{
    ULONG EventType;
    #define MSFC_TargetEvent_EventType_SIZE sizeof(ULONG)
    #define MSFC_TargetEvent_EventType_ID 1
    UCHAR PortWWN[8];
    #define MSFC_TargetEvent_PortWWN_SIZE sizeof(UCHAR[8])
    #define MSFC_TargetEvent_PortWWN_ID 2
    UCHAR DiscoveredPortWWN[8];
    #define MSFC_TargetEvent_DiscoveredPortWWN_SIZE sizeof(UCHAR[8])
    #define MSFC_TargetEvent_DiscoveredPortWWN_ID 3
} MSFC_TargetEvent, *PMSFC_TargetEvent;
    { 0xa251ccb3,0x5ab0,0x411b, { 0x87,0x71,0x54,0x30,0xef,0x53,0xa2,0x6c } }
DEFINE_GUID(MSFC_EventControl_GUID, \
            0xa251ccb3,0x5ab0,0x411b,0x87,0x71,0x54,0x30,0xef,0x53,0xa2,0x6c);
typedef struct _AddTarget_IN
{
    UCHAR HbaPortWWN[8];
    #define AddTarget_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define AddTarget_IN_HbaPortWWN_ID 1
    UCHAR DiscoveredPortWWN[8];
    #define AddTarget_IN_DiscoveredPortWWN_SIZE sizeof(UCHAR[8])
    #define AddTarget_IN_DiscoveredPortWWN_ID 2
    ULONG AllTargets;
    #define AddTarget_IN_AllTargets_SIZE sizeof(ULONG)
    #define AddTarget_IN_AllTargets_ID 3
} AddTarget_IN, *PAddTarget_IN;
typedef struct _AddTarget_OUT
{
    ULONG HBAStatus;
    #define AddTarget_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define AddTarget_OUT_HBAStatus_ID 4
} AddTarget_OUT, *PAddTarget_OUT;
typedef struct _RemoveTarget_IN
{
    UCHAR HbaPortWWN[8];
    #define RemoveTarget_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define RemoveTarget_IN_HbaPortWWN_ID 1
    UCHAR DiscoveredPortWWN[8];
    #define RemoveTarget_IN_DiscoveredPortWWN_SIZE sizeof(UCHAR[8])
    #define RemoveTarget_IN_DiscoveredPortWWN_ID 2
    ULONG AllTargets;
    #define RemoveTarget_IN_AllTargets_SIZE sizeof(ULONG)
    #define RemoveTarget_IN_AllTargets_ID 3
} RemoveTarget_IN, *PRemoveTarget_IN;
typedef struct _RemoveTarget_OUT
{
    ULONG HBAStatus;
    #define RemoveTarget_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define RemoveTarget_OUT_HBAStatus_ID 4
} RemoveTarget_OUT, *PRemoveTarget_OUT;
typedef struct _AddPort_IN
{
    UCHAR PortWWN[8];
    #define AddPort_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define AddPort_IN_PortWWN_ID 1
} AddPort_IN, *PAddPort_IN;
typedef struct _AddPort_OUT
{
    ULONG HBAStatus;
    #define AddPort_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define AddPort_OUT_HBAStatus_ID 2
} AddPort_OUT, *PAddPort_OUT;
typedef struct _RemovePort_IN
{
    UCHAR PortWWN[8];
    #define RemovePort_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define RemovePort_IN_PortWWN_ID 1
} RemovePort_IN, *PRemovePort_IN;
typedef struct _RemovePort_OUT
{
    ULONG HBAStatus;
    #define RemovePort_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define RemovePort_OUT_HBAStatus_ID 2
} RemovePort_OUT, *PRemovePort_OUT;
typedef struct _AddLink_OUT
{
    ULONG HBAStatus;
    #define AddLink_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define AddLink_OUT_HBAStatus_ID 1
} AddLink_OUT, *PAddLink_OUT;
typedef struct _RemoveLink_OUT
{
    ULONG HBAStatus;
    #define RemoveLink_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define RemoveLink_OUT_HBAStatus_ID 1
} RemoveLink_OUT, *PRemoveLink_OUT;
    { 0xbdc67efa,0xe5e7,0x4777, { 0xb1,0x3c,0x62,0x14,0x59,0x65,0x70,0x99 } }
DEFINE_GUID(MS_SM_AdapterInformationQuery_GUID, \
            0xbdc67efa,0xe5e7,0x4777,0xb1,0x3c,0x62,0x14,0x59,0x65,0x70,0x99);
typedef struct _MS_SM_AdapterInformationQuery
{
    ULONGLONG UniqueAdapterId;
    #define MS_SM_AdapterInformationQuery_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MS_SM_AdapterInformationQuery_UniqueAdapterId_ID 1
    ULONG HBAStatus;
    #define MS_SM_AdapterInformationQuery_HBAStatus_SIZE sizeof(ULONG)
    #define MS_SM_AdapterInformationQuery_HBAStatus_ID 2
    ULONG NumberOfPorts;
    #define MS_SM_AdapterInformationQuery_NumberOfPorts_SIZE sizeof(ULONG)
    #define MS_SM_AdapterInformationQuery_NumberOfPorts_ID 3
    ULONG VendorSpecificID;
    #define MS_SM_AdapterInformationQuery_VendorSpecificID_SIZE sizeof(ULONG)
    #define MS_SM_AdapterInformationQuery_VendorSpecificID_ID 4
    WCHAR Manufacturer[64 + 1];
    #define MS_SM_AdapterInformationQuery_Manufacturer_ID 5
    WCHAR SerialNumber[64 + 1];
    #define MS_SM_AdapterInformationQuery_SerialNumber_ID 6
    WCHAR Model[256 + 1];
    #define MS_SM_AdapterInformationQuery_Model_ID 7
    WCHAR ModelDescription[256 + 1];
    #define MS_SM_AdapterInformationQuery_ModelDescription_ID 8
    WCHAR HardwareVersion[256 + 1];
    #define MS_SM_AdapterInformationQuery_HardwareVersion_ID 9
    WCHAR DriverVersion[256 + 1];
    #define MS_SM_AdapterInformationQuery_DriverVersion_ID 10
    WCHAR OptionROMVersion[256 + 1];
    #define MS_SM_AdapterInformationQuery_OptionROMVersion_ID 11
    WCHAR FirmwareVersion[256 + 1];
    #define MS_SM_AdapterInformationQuery_FirmwareVersion_ID 12
    WCHAR DriverName[256 + 1];
    #define MS_SM_AdapterInformationQuery_DriverName_ID 13
    WCHAR HBASymbolicName[256 + 1];
    #define MS_SM_AdapterInformationQuery_HBASymbolicName_ID 14
    WCHAR RedundantOptionROMVersion[256 + 1];
    #define MS_SM_AdapterInformationQuery_RedundantOptionROMVersion_ID 15
    WCHAR RedundantFirmwareVersion[256 + 1];
    #define MS_SM_AdapterInformationQuery_RedundantFirmwareVersion_ID 16
    WCHAR MfgDomain[256 + 1];
    #define MS_SM_AdapterInformationQuery_MfgDomain_ID 17
} MS_SM_AdapterInformationQuery, *PMS_SM_AdapterInformationQuery;
    { 0x96b827a7,0x2b4a,0x49c8, { 0x90,0x97,0x07,0x82,0x00,0xc5,0xa5,0xcd } }
DEFINE_GUID(MS_SMHBA_FC_Port_GUID, \
            0x96b827a7,0x2b4a,0x49c8,0x90,0x97,0x07,0x82,0x00,0xc5,0xa5,0xcd);
typedef struct _MS_SMHBA_FC_Port
{
    UCHAR NodeWWN[8];
    #define MS_SMHBA_FC_Port_NodeWWN_SIZE sizeof(UCHAR[8])
    #define MS_SMHBA_FC_Port_NodeWWN_ID 1
    UCHAR PortWWN[8];
    #define MS_SMHBA_FC_Port_PortWWN_SIZE sizeof(UCHAR[8])
    #define MS_SMHBA_FC_Port_PortWWN_ID 2
    ULONG FcId;
    #define MS_SMHBA_FC_Port_FcId_SIZE sizeof(ULONG)
    #define MS_SMHBA_FC_Port_FcId_ID 3
    ULONG PortSupportedClassofService;
    #define MS_SMHBA_FC_Port_PortSupportedClassofService_SIZE sizeof(ULONG)
    #define MS_SMHBA_FC_Port_PortSupportedClassofService_ID 4
    UCHAR PortSupportedFc4Types[32];
    #define MS_SMHBA_FC_Port_PortSupportedFc4Types_SIZE sizeof(UCHAR[32])
    #define MS_SMHBA_FC_Port_PortSupportedFc4Types_ID 5
    UCHAR PortActiveFc4Types[32];
    #define MS_SMHBA_FC_Port_PortActiveFc4Types_SIZE sizeof(UCHAR[32])
    #define MS_SMHBA_FC_Port_PortActiveFc4Types_ID 6
    UCHAR FabricName[8];
    #define MS_SMHBA_FC_Port_FabricName_SIZE sizeof(UCHAR[8])
    #define MS_SMHBA_FC_Port_FabricName_ID 7
    ULONG NumberofDiscoveredPorts;
    #define MS_SMHBA_FC_Port_NumberofDiscoveredPorts_SIZE sizeof(ULONG)
    #define MS_SMHBA_FC_Port_NumberofDiscoveredPorts_ID 8
    UCHAR NumberofPhys;
    #define MS_SMHBA_FC_Port_NumberofPhys_SIZE sizeof(UCHAR)
    #define MS_SMHBA_FC_Port_NumberofPhys_ID 9
    WCHAR PortSymbolicName[256 + 1];
    #define MS_SMHBA_FC_Port_PortSymbolicName_ID 10
} MS_SMHBA_FC_Port, *PMS_SMHBA_FC_Port;
    { 0xb914e34f,0x7b80,0x46b0, { 0x80,0x34,0x6d,0x9b,0x68,0x9e,0x1d,0xdd } }
DEFINE_GUID(MS_SMHBA_SAS_Port_GUID, \
            0xb914e34f,0x7b80,0x46b0,0x80,0x34,0x6d,0x9b,0x68,0x9e,0x1d,0xdd);
typedef struct _MS_SMHBA_SAS_Port
{
    ULONG PortProtocol;
    #define MS_SMHBA_SAS_Port_PortProtocol_SIZE sizeof(ULONG)
    #define MS_SMHBA_SAS_Port_PortProtocol_ID 1
    UCHAR LocalSASAddress[8];
    #define MS_SMHBA_SAS_Port_LocalSASAddress_SIZE sizeof(UCHAR[8])
    #define MS_SMHBA_SAS_Port_LocalSASAddress_ID 2
    UCHAR AttachedSASAddress[8];
    #define MS_SMHBA_SAS_Port_AttachedSASAddress_SIZE sizeof(UCHAR[8])
    #define MS_SMHBA_SAS_Port_AttachedSASAddress_ID 3
    ULONG NumberofDiscoveredPorts;
    #define MS_SMHBA_SAS_Port_NumberofDiscoveredPorts_SIZE sizeof(ULONG)
    #define MS_SMHBA_SAS_Port_NumberofDiscoveredPorts_ID 4
    ULONG NumberofPhys;
    #define MS_SMHBA_SAS_Port_NumberofPhys_SIZE sizeof(ULONG)
    #define MS_SMHBA_SAS_Port_NumberofPhys_ID 5
} MS_SMHBA_SAS_Port, *PMS_SMHBA_SAS_Port;
    { 0x50a97b2d,0x99ad,0x4cf9, { 0x84,0x37,0xb4,0xea,0x0c,0x07,0xbe,0x4c } }
DEFINE_GUID(MS_SMHBA_PORTATTRIBUTES_GUID, \
            0x50a97b2d,0x99ad,0x4cf9,0x84,0x37,0xb4,0xea,0x0c,0x07,0xbe,0x4c);
typedef struct _MS_SMHBA_PORTATTRIBUTES
{
    ULONG PortType;
    #define MS_SMHBA_PORTATTRIBUTES_PortType_SIZE sizeof(ULONG)
    #define MS_SMHBA_PORTATTRIBUTES_PortType_ID 1
    ULONG PortState;
    #define MS_SMHBA_PORTATTRIBUTES_PortState_SIZE sizeof(ULONG)
    #define MS_SMHBA_PORTATTRIBUTES_PortState_ID 2
    ULONG PortSpecificAttributesSize;
    #define MS_SMHBA_PORTATTRIBUTES_PortSpecificAttributesSize_SIZE sizeof(ULONG)
    #define MS_SMHBA_PORTATTRIBUTES_PortSpecificAttributesSize_ID 3
    WCHAR OSDeviceName[256 + 1];
    #define MS_SMHBA_PORTATTRIBUTES_OSDeviceName_ID 4
    ULONGLONG Reserved;
    #define MS_SMHBA_PORTATTRIBUTES_Reserved_SIZE sizeof(ULONGLONG)
    #define MS_SMHBA_PORTATTRIBUTES_Reserved_ID 5
    UCHAR PortSpecificAttributes[1];
    #define MS_SMHBA_PORTATTRIBUTES_PortSpecificAttributes_ID 6
} MS_SMHBA_PORTATTRIBUTES, *PMS_SMHBA_PORTATTRIBUTES;
    { 0xb557bd86,0x4128,0x4d5c, { 0xb6,0xe6,0xb6,0x5f,0x9b,0xd6,0x87,0x22 } }
DEFINE_GUID(MS_SMHBA_PROTOCOLSTATISTICS_GUID, \
            0xb557bd86,0x4128,0x4d5c,0xb6,0xe6,0xb6,0x5f,0x9b,0xd6,0x87,0x22);
typedef struct _MS_SMHBA_PROTOCOLSTATISTICS
{
    LONGLONG SecondsSinceLastReset;
    #define MS_SMHBA_PROTOCOLSTATISTICS_SecondsSinceLastReset_SIZE sizeof(LONGLONG)
    #define MS_SMHBA_PROTOCOLSTATISTICS_SecondsSinceLastReset_ID 1
    LONGLONG InputRequests;
    #define MS_SMHBA_PROTOCOLSTATISTICS_InputRequests_SIZE sizeof(LONGLONG)
    #define MS_SMHBA_PROTOCOLSTATISTICS_InputRequests_ID 2
    LONGLONG OutputRequests;
    #define MS_SMHBA_PROTOCOLSTATISTICS_OutputRequests_SIZE sizeof(LONGLONG)
    #define MS_SMHBA_PROTOCOLSTATISTICS_OutputRequests_ID 3
    LONGLONG ControlRequests;
    #define MS_SMHBA_PROTOCOLSTATISTICS_ControlRequests_SIZE sizeof(LONGLONG)
    #define MS_SMHBA_PROTOCOLSTATISTICS_ControlRequests_ID 4
    LONGLONG InputMegabytes;
    #define MS_SMHBA_PROTOCOLSTATISTICS_InputMegabytes_SIZE sizeof(LONGLONG)
    #define MS_SMHBA_PROTOCOLSTATISTICS_InputMegabytes_ID 5
    LONGLONG OutputMegabytes;
    #define MS_SMHBA_PROTOCOLSTATISTICS_OutputMegabytes_SIZE sizeof(LONGLONG)
    #define MS_SMHBA_PROTOCOLSTATISTICS_OutputMegabytes_ID 6
} MS_SMHBA_PROTOCOLSTATISTICS, *PMS_SMHBA_PROTOCOLSTATISTICS;
    { 0xbd458e7d,0xc40a,0x4401, { 0xa1,0x79,0x11,0x91,0x9c,0xbc,0xc5,0xc6 } }
DEFINE_GUID(MS_SMHBA_SASPHYSTATISTICS_GUID, \
            0xbd458e7d,0xc40a,0x4401,0xa1,0x79,0x11,0x91,0x9c,0xbc,0xc5,0xc6);
typedef struct _MS_SMHBA_SASPHYSTATISTICS
{
    LONGLONG SecondsSinceLastReset;
    #define MS_SMHBA_SASPHYSTATISTICS_SecondsSinceLastReset_SIZE sizeof(LONGLONG)
    #define MS_SMHBA_SASPHYSTATISTICS_SecondsSinceLastReset_ID 1
    LONGLONG TxFrames;
    #define MS_SMHBA_SASPHYSTATISTICS_TxFrames_SIZE sizeof(LONGLONG)
    #define MS_SMHBA_SASPHYSTATISTICS_TxFrames_ID 2
    LONGLONG TxWords;
    #define MS_SMHBA_SASPHYSTATISTICS_TxWords_SIZE sizeof(LONGLONG)
    #define MS_SMHBA_SASPHYSTATISTICS_TxWords_ID 3
    LONGLONG RxFrames;
    #define MS_SMHBA_SASPHYSTATISTICS_RxFrames_SIZE sizeof(LONGLONG)
    #define MS_SMHBA_SASPHYSTATISTICS_RxFrames_ID 4
    LONGLONG RxWords;
    #define MS_SMHBA_SASPHYSTATISTICS_RxWords_SIZE sizeof(LONGLONG)
    #define MS_SMHBA_SASPHYSTATISTICS_RxWords_ID 5
    LONGLONG InvalidDwordCount;
    #define MS_SMHBA_SASPHYSTATISTICS_InvalidDwordCount_SIZE sizeof(LONGLONG)
    #define MS_SMHBA_SASPHYSTATISTICS_InvalidDwordCount_ID 6
    LONGLONG RunningDisparityErrorCount;
    #define MS_SMHBA_SASPHYSTATISTICS_RunningDisparityErrorCount_SIZE sizeof(LONGLONG)
    #define MS_SMHBA_SASPHYSTATISTICS_RunningDisparityErrorCount_ID 7
    LONGLONG LossofDwordSyncCount;
    #define MS_SMHBA_SASPHYSTATISTICS_LossofDwordSyncCount_SIZE sizeof(LONGLONG)
    #define MS_SMHBA_SASPHYSTATISTICS_LossofDwordSyncCount_ID 8
    LONGLONG PhyResetProblemCount;
    #define MS_SMHBA_SASPHYSTATISTICS_PhyResetProblemCount_SIZE sizeof(LONGLONG)
    #define MS_SMHBA_SASPHYSTATISTICS_PhyResetProblemCount_ID 9
} MS_SMHBA_SASPHYSTATISTICS, *PMS_SMHBA_SASPHYSTATISTICS;
    { 0xfb66c8fe,0x1da0,0x48a2, { 0x92,0xdb,0x02,0xc3,0x41,0x14,0x3c,0x46 } }
DEFINE_GUID(MS_SMHBA_FC_PHY_GUID, \
            0xfb66c8fe,0x1da0,0x48a2,0x92,0xdb,0x02,0xc3,0x41,0x14,0x3c,0x46);
typedef struct _MS_SMHBA_FC_PHY
{
    ULONG PhySupportSpeed;
    #define MS_SMHBA_FC_PHY_PhySupportSpeed_SIZE sizeof(ULONG)
    #define MS_SMHBA_FC_PHY_PhySupportSpeed_ID 1
    ULONG PhySpeed;
    #define MS_SMHBA_FC_PHY_PhySpeed_SIZE sizeof(ULONG)
    #define MS_SMHBA_FC_PHY_PhySpeed_ID 2
    UCHAR PhyType;
    #define MS_SMHBA_FC_PHY_PhyType_SIZE sizeof(UCHAR)
    #define MS_SMHBA_FC_PHY_PhyType_ID 3
    ULONG MaxFrameSize;
    #define MS_SMHBA_FC_PHY_MaxFrameSize_SIZE sizeof(ULONG)
    #define MS_SMHBA_FC_PHY_MaxFrameSize_ID 4
} MS_SMHBA_FC_PHY, *PMS_SMHBA_FC_PHY;
    { 0xdde0a090,0x96bc,0x452b, { 0x9a,0x64,0x6f,0xbb,0x6a,0x19,0xc4,0x7d } }
DEFINE_GUID(MS_SMHBA_SAS_PHY_GUID, \
            0xdde0a090,0x96bc,0x452b,0x9a,0x64,0x6f,0xbb,0x6a,0x19,0xc4,0x7d);
typedef struct _MS_SMHBA_SAS_PHY
{
    UCHAR PhyIdentifier;
    #define MS_SMHBA_SAS_PHY_PhyIdentifier_SIZE sizeof(UCHAR)
    #define MS_SMHBA_SAS_PHY_PhyIdentifier_ID 1
    ULONG NegotiatedLinkRate;
    #define MS_SMHBA_SAS_PHY_NegotiatedLinkRate_SIZE sizeof(ULONG)
    #define MS_SMHBA_SAS_PHY_NegotiatedLinkRate_ID 2
    ULONG ProgrammedMinLinkRate;
    #define MS_SMHBA_SAS_PHY_ProgrammedMinLinkRate_SIZE sizeof(ULONG)
    #define MS_SMHBA_SAS_PHY_ProgrammedMinLinkRate_ID 3
    ULONG HardwareMinLinkRate;
    #define MS_SMHBA_SAS_PHY_HardwareMinLinkRate_SIZE sizeof(ULONG)
    #define MS_SMHBA_SAS_PHY_HardwareMinLinkRate_ID 4
    ULONG ProgrammedMaxLinkRate;
    #define MS_SMHBA_SAS_PHY_ProgrammedMaxLinkRate_SIZE sizeof(ULONG)
    #define MS_SMHBA_SAS_PHY_ProgrammedMaxLinkRate_ID 5
    ULONG HardwareMaxLinkRate;
    #define MS_SMHBA_SAS_PHY_HardwareMaxLinkRate_SIZE sizeof(ULONG)
    #define MS_SMHBA_SAS_PHY_HardwareMaxLinkRate_ID 6
    UCHAR domainPortWWN[8];
    #define MS_SMHBA_SAS_PHY_domainPortWWN_SIZE sizeof(UCHAR[8])
    #define MS_SMHBA_SAS_PHY_domainPortWWN_ID 7
} MS_SMHBA_SAS_PHY, *PMS_SMHBA_SAS_PHY;
    { 0x5b6a8b86,0x708d,0x4ec6, { 0x82,0xa6,0x39,0xad,0xcf,0x6f,0x64,0x33 } }
DEFINE_GUID(MS_SM_PortInformationMethods_GUID, \
            0x5b6a8b86,0x708d,0x4ec6,0x82,0xa6,0x39,0xad,0xcf,0x6f,0x64,0x33);
typedef struct _SM_GetPortType_IN
{
    ULONG PortIndex;
    #define SM_GetPortType_IN_PortIndex_SIZE sizeof(ULONG)
    #define SM_GetPortType_IN_PortIndex_ID 1
} SM_GetPortType_IN, *PSM_GetPortType_IN;
typedef struct _SM_GetPortType_OUT
{
    ULONG HBAStatus;
    #define SM_GetPortType_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_GetPortType_OUT_HBAStatus_ID 2
    ULONG PortType;
    #define SM_GetPortType_OUT_PortType_SIZE sizeof(ULONG)
    #define SM_GetPortType_OUT_PortType_ID 3
} SM_GetPortType_OUT, *PSM_GetPortType_OUT;
typedef struct _SM_GetAdapterPortAttributes_IN
{
    ULONG PortIndex;
    #define SM_GetAdapterPortAttributes_IN_PortIndex_SIZE sizeof(ULONG)
    #define SM_GetAdapterPortAttributes_IN_PortIndex_ID 1
    ULONG PortSpecificAttributesMaxSize;
    #define SM_GetAdapterPortAttributes_IN_PortSpecificAttributesMaxSize_SIZE sizeof(ULONG)
    #define SM_GetAdapterPortAttributes_IN_PortSpecificAttributesMaxSize_ID 2
} SM_GetAdapterPortAttributes_IN, *PSM_GetAdapterPortAttributes_IN;
typedef struct _SM_GetAdapterPortAttributes_OUT
{
    ULONG HBAStatus;
    #define SM_GetAdapterPortAttributes_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_GetAdapterPortAttributes_OUT_HBAStatus_ID 3
    MS_SMHBA_PORTATTRIBUTES PortAttributes;
    #define SM_GetAdapterPortAttributes_OUT_PortAttributes_SIZE sizeof(MS_SMHBA_PORTATTRIBUTES)
    #define SM_GetAdapterPortAttributes_OUT_PortAttributes_ID 4
} SM_GetAdapterPortAttributes_OUT, *PSM_GetAdapterPortAttributes_OUT;
typedef struct _SM_GetDiscoveredPortAttributes_IN
{
    ULONG PortIndex;
    #define SM_GetDiscoveredPortAttributes_IN_PortIndex_SIZE sizeof(ULONG)
    #define SM_GetDiscoveredPortAttributes_IN_PortIndex_ID 1
    ULONG DiscoveredPortIndex;
    #define SM_GetDiscoveredPortAttributes_IN_DiscoveredPortIndex_SIZE sizeof(ULONG)
    #define SM_GetDiscoveredPortAttributes_IN_DiscoveredPortIndex_ID 2
    ULONG PortSpecificAttributesMaxSize;
    #define SM_GetDiscoveredPortAttributes_IN_PortSpecificAttributesMaxSize_SIZE sizeof(ULONG)
    #define SM_GetDiscoveredPortAttributes_IN_PortSpecificAttributesMaxSize_ID 3
} SM_GetDiscoveredPortAttributes_IN, *PSM_GetDiscoveredPortAttributes_IN;
typedef struct _SM_GetDiscoveredPortAttributes_OUT
{
    ULONG HBAStatus;
    #define SM_GetDiscoveredPortAttributes_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_GetDiscoveredPortAttributes_OUT_HBAStatus_ID 4
    MS_SMHBA_PORTATTRIBUTES PortAttributes;
    #define SM_GetDiscoveredPortAttributes_OUT_PortAttributes_SIZE sizeof(MS_SMHBA_PORTATTRIBUTES)
    #define SM_GetDiscoveredPortAttributes_OUT_PortAttributes_ID 5
} SM_GetDiscoveredPortAttributes_OUT, *PSM_GetDiscoveredPortAttributes_OUT;
typedef struct _SM_GetPortAttributesByWWN_IN
{
    UCHAR PortWWN[8];
    #define SM_GetPortAttributesByWWN_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define SM_GetPortAttributesByWWN_IN_PortWWN_ID 1
    UCHAR DomainPortWWN[8];
    #define SM_GetPortAttributesByWWN_IN_DomainPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_GetPortAttributesByWWN_IN_DomainPortWWN_ID 2
    ULONG PortSpecificAttributesMaxSize;
    #define SM_GetPortAttributesByWWN_IN_PortSpecificAttributesMaxSize_SIZE sizeof(ULONG)
    #define SM_GetPortAttributesByWWN_IN_PortSpecificAttributesMaxSize_ID 3
} SM_GetPortAttributesByWWN_IN, *PSM_GetPortAttributesByWWN_IN;
typedef struct _SM_GetPortAttributesByWWN_OUT
{
    ULONG HBAStatus;
    #define SM_GetPortAttributesByWWN_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_GetPortAttributesByWWN_OUT_HBAStatus_ID 4
    MS_SMHBA_PORTATTRIBUTES PortAttributes;
    #define SM_GetPortAttributesByWWN_OUT_PortAttributes_SIZE sizeof(MS_SMHBA_PORTATTRIBUTES)
    #define SM_GetPortAttributesByWWN_OUT_PortAttributes_ID 5
} SM_GetPortAttributesByWWN_OUT, *PSM_GetPortAttributesByWWN_OUT;
typedef struct _SM_GetProtocolStatistics_IN
{
    ULONG PortIndex;
    #define SM_GetProtocolStatistics_IN_PortIndex_SIZE sizeof(ULONG)
    #define SM_GetProtocolStatistics_IN_PortIndex_ID 1
    ULONG ProtocolType;
    #define SM_GetProtocolStatistics_IN_ProtocolType_SIZE sizeof(ULONG)
    #define SM_GetProtocolStatistics_IN_ProtocolType_ID 2
} SM_GetProtocolStatistics_IN, *PSM_GetProtocolStatistics_IN;
typedef struct _SM_GetProtocolStatistics_OUT
{
    ULONG HBAStatus;
    #define SM_GetProtocolStatistics_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_GetProtocolStatistics_OUT_HBAStatus_ID 3
    MS_SMHBA_PROTOCOLSTATISTICS ProtocolStatistics;
    #define SM_GetProtocolStatistics_OUT_ProtocolStatistics_SIZE sizeof(MS_SMHBA_PROTOCOLSTATISTICS)
    #define SM_GetProtocolStatistics_OUT_ProtocolStatistics_ID 4
} SM_GetProtocolStatistics_OUT, *PSM_GetProtocolStatistics_OUT;
typedef struct _SM_GetPhyStatistics_IN
{
    ULONG PortIndex;
    #define SM_GetPhyStatistics_IN_PortIndex_SIZE sizeof(ULONG)
    #define SM_GetPhyStatistics_IN_PortIndex_ID 1
    ULONG PhyIndex;
    #define SM_GetPhyStatistics_IN_PhyIndex_SIZE sizeof(ULONG)
    #define SM_GetPhyStatistics_IN_PhyIndex_ID 2
    ULONG InNumOfPhyCounters;
    #define SM_GetPhyStatistics_IN_InNumOfPhyCounters_SIZE sizeof(ULONG)
    #define SM_GetPhyStatistics_IN_InNumOfPhyCounters_ID 3
} SM_GetPhyStatistics_IN, *PSM_GetPhyStatistics_IN;
typedef struct _SM_GetPhyStatistics_OUT
{
    ULONG HBAStatus;
    #define SM_GetPhyStatistics_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_GetPhyStatistics_OUT_HBAStatus_ID 4
    ULONG TotalNumOfPhyCounters;
    #define SM_GetPhyStatistics_OUT_TotalNumOfPhyCounters_SIZE sizeof(ULONG)
    #define SM_GetPhyStatistics_OUT_TotalNumOfPhyCounters_ID 5
    ULONG OutNumOfPhyCounters;
    #define SM_GetPhyStatistics_OUT_OutNumOfPhyCounters_SIZE sizeof(ULONG)
    #define SM_GetPhyStatistics_OUT_OutNumOfPhyCounters_ID 6
    LONGLONG PhyCounter[1];
    #define SM_GetPhyStatistics_OUT_PhyCounter_ID 7
} SM_GetPhyStatistics_OUT, *PSM_GetPhyStatistics_OUT;
typedef struct _SM_GetFCPhyAttributes_IN
{
    ULONG PortIndex;
    #define SM_GetFCPhyAttributes_IN_PortIndex_SIZE sizeof(ULONG)
    #define SM_GetFCPhyAttributes_IN_PortIndex_ID 1
    ULONG PhyIndex;
    #define SM_GetFCPhyAttributes_IN_PhyIndex_SIZE sizeof(ULONG)
    #define SM_GetFCPhyAttributes_IN_PhyIndex_ID 2
} SM_GetFCPhyAttributes_IN, *PSM_GetFCPhyAttributes_IN;
typedef struct _SM_GetFCPhyAttributes_OUT
{
    ULONG HBAStatus;
    #define SM_GetFCPhyAttributes_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_GetFCPhyAttributes_OUT_HBAStatus_ID 3
    MS_SMHBA_FC_PHY PhyType;
    #define SM_GetFCPhyAttributes_OUT_PhyType_SIZE sizeof(MS_SMHBA_FC_PHY)
    #define SM_GetFCPhyAttributes_OUT_PhyType_ID 4
} SM_GetFCPhyAttributes_OUT, *PSM_GetFCPhyAttributes_OUT;
typedef struct _SM_GetSASPhyAttributes_IN
{
    ULONG PortIndex;
    #define SM_GetSASPhyAttributes_IN_PortIndex_SIZE sizeof(ULONG)
    #define SM_GetSASPhyAttributes_IN_PortIndex_ID 1
    ULONG PhyIndex;
    #define SM_GetSASPhyAttributes_IN_PhyIndex_SIZE sizeof(ULONG)
    #define SM_GetSASPhyAttributes_IN_PhyIndex_ID 2
} SM_GetSASPhyAttributes_IN, *PSM_GetSASPhyAttributes_IN;
typedef struct _SM_GetSASPhyAttributes_OUT
{
    ULONG HBAStatus;
    #define SM_GetSASPhyAttributes_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_GetSASPhyAttributes_OUT_HBAStatus_ID 3
    MS_SMHBA_SAS_PHY PhyType;
    #define SM_GetSASPhyAttributes_OUT_PhyType_SIZE sizeof(MS_SMHBA_SAS_PHY)
    #define SM_GetSASPhyAttributes_OUT_PhyType_ID 4
} SM_GetSASPhyAttributes_OUT, *PSM_GetSASPhyAttributes_OUT;
    { 0x0669d100,0x066e,0x4e49, { 0xa6,0x8c,0xe0,0x51,0x99,0x59,0x61,0x32 } }
DEFINE_GUID(MS_SMHBA_PORTLUN_GUID, \
            0x0669d100,0x066e,0x4e49,0xa6,0x8c,0xe0,0x51,0x99,0x59,0x61,0x32);
typedef struct _MS_SMHBA_PORTLUN
{
    UCHAR PortWWN[8];
    #define MS_SMHBA_PORTLUN_PortWWN_SIZE sizeof(UCHAR[8])
    #define MS_SMHBA_PORTLUN_PortWWN_ID 1
    UCHAR domainPortWWN[8];
    #define MS_SMHBA_PORTLUN_domainPortWWN_SIZE sizeof(UCHAR[8])
    #define MS_SMHBA_PORTLUN_domainPortWWN_ID 2
    ULONGLONG TargetLun;
    #define MS_SMHBA_PORTLUN_TargetLun_SIZE sizeof(ULONGLONG)
    #define MS_SMHBA_PORTLUN_TargetLun_ID 3
} MS_SMHBA_PORTLUN, *PMS_SMHBA_PORTLUN;
    { 0x125d41bc,0x7643,0x4155, { 0xb8,0x1c,0xe2,0xf1,0x28,0xad,0x1f,0xb4 } }
DEFINE_GUID(MS_SMHBA_SCSIENTRY_GUID, \
            0x125d41bc,0x7643,0x4155,0xb8,0x1c,0xe2,0xf1,0x28,0xad,0x1f,0xb4);
typedef struct _MS_SMHBA_SCSIENTRY
{
    MS_SMHBA_PORTLUN PortLun;
    #define MS_SMHBA_SCSIENTRY_PortLun_SIZE sizeof(MS_SMHBA_PORTLUN)
    #define MS_SMHBA_SCSIENTRY_PortLun_ID 1
    UCHAR LUID[256];
    #define MS_SMHBA_SCSIENTRY_LUID_SIZE sizeof(UCHAR[256])
    #define MS_SMHBA_SCSIENTRY_LUID_ID 2
    HBAScsiID ScsiId;
    #define MS_SMHBA_SCSIENTRY_ScsiId_SIZE sizeof(HBAScsiID)
    #define MS_SMHBA_SCSIENTRY_ScsiId_ID 3
} MS_SMHBA_SCSIENTRY, *PMS_SMHBA_SCSIENTRY;
    { 0x65bfb548,0xd00a,0x4d4c, { 0xa3,0x57,0x7d,0xaa,0x23,0xbc,0x2e,0x3d } }
DEFINE_GUID(MS_SMHBA_BINDINGENTRY_GUID, \
            0x65bfb548,0xd00a,0x4d4c,0xa3,0x57,0x7d,0xaa,0x23,0xbc,0x2e,0x3d);
typedef struct _MS_SMHBA_BINDINGENTRY
{
    ULONG type;
    #define MS_SMHBA_BINDINGENTRY_type_SIZE sizeof(ULONG)
    #define MS_SMHBA_BINDINGENTRY_type_ID 1
    MS_SMHBA_PORTLUN PortLun;
    #define MS_SMHBA_BINDINGENTRY_PortLun_SIZE sizeof(MS_SMHBA_PORTLUN)
    #define MS_SMHBA_BINDINGENTRY_PortLun_ID 2
    UCHAR LUID[256];
    #define MS_SMHBA_BINDINGENTRY_LUID_SIZE sizeof(UCHAR[256])
    #define MS_SMHBA_BINDINGENTRY_LUID_ID 3
    ULONG Status;
    #define MS_SMHBA_BINDINGENTRY_Status_SIZE sizeof(ULONG)
    #define MS_SMHBA_BINDINGENTRY_Status_ID 4
    HBAScsiID ScsiId;
    #define MS_SMHBA_BINDINGENTRY_ScsiId_SIZE sizeof(HBAScsiID)
    #define MS_SMHBA_BINDINGENTRY_ScsiId_ID 5
} MS_SMHBA_BINDINGENTRY, *PMS_SMHBA_BINDINGENTRY;
    { 0x93545055,0xab4c,0x4e80, { 0x84,0xae,0x6a,0x86,0xa2,0xdc,0x4b,0x84 } }
DEFINE_GUID(MS_SM_TargetInformationMethods_GUID, \
            0x93545055,0xab4c,0x4e80,0x84,0xae,0x6a,0x86,0xa2,0xdc,0x4b,0x84);
typedef struct _SM_GetTargetMapping_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_GetTargetMapping_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_GetTargetMapping_IN_HbaPortWWN_ID 1
    UCHAR DomainPortWWN[8];
    #define SM_GetTargetMapping_IN_DomainPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_GetTargetMapping_IN_DomainPortWWN_ID 2
    ULONG InEntryCount;
    #define SM_GetTargetMapping_IN_InEntryCount_SIZE sizeof(ULONG)
    #define SM_GetTargetMapping_IN_InEntryCount_ID 3
} SM_GetTargetMapping_IN, *PSM_GetTargetMapping_IN;
typedef struct _SM_GetTargetMapping_OUT
{
    ULONG HBAStatus;
    #define SM_GetTargetMapping_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_GetTargetMapping_OUT_HBAStatus_ID 4
    ULONG TotalEntryCount;
    #define SM_GetTargetMapping_OUT_TotalEntryCount_SIZE sizeof(ULONG)
    #define SM_GetTargetMapping_OUT_TotalEntryCount_ID 5
    ULONG OutEntryCount;
    #define SM_GetTargetMapping_OUT_OutEntryCount_SIZE sizeof(ULONG)
    #define SM_GetTargetMapping_OUT_OutEntryCount_ID 6
    MS_SMHBA_SCSIENTRY Entry[1];
    #define SM_GetTargetMapping_OUT_Entry_ID 7
} SM_GetTargetMapping_OUT, *PSM_GetTargetMapping_OUT;
typedef struct _SM_GetBindingCapability_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_GetBindingCapability_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_GetBindingCapability_IN_HbaPortWWN_ID 1
    UCHAR DomainPortWWN[8];
    #define SM_GetBindingCapability_IN_DomainPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_GetBindingCapability_IN_DomainPortWWN_ID 2
} SM_GetBindingCapability_IN, *PSM_GetBindingCapability_IN;
typedef struct _SM_GetBindingCapability_OUT
{
    ULONG HBAStatus;
    #define SM_GetBindingCapability_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_GetBindingCapability_OUT_HBAStatus_ID 3
    ULONG Flags;
    #define SM_GetBindingCapability_OUT_Flags_SIZE sizeof(ULONG)
    #define SM_GetBindingCapability_OUT_Flags_ID 4
} SM_GetBindingCapability_OUT, *PSM_GetBindingCapability_OUT;
typedef struct _SM_GetBindingSupport_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_GetBindingSupport_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_GetBindingSupport_IN_HbaPortWWN_ID 1
    UCHAR DomainPortWWN[8];
    #define SM_GetBindingSupport_IN_DomainPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_GetBindingSupport_IN_DomainPortWWN_ID 2
} SM_GetBindingSupport_IN, *PSM_GetBindingSupport_IN;
typedef struct _SM_GetBindingSupport_OUT
{
    ULONG HBAStatus;
    #define SM_GetBindingSupport_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_GetBindingSupport_OUT_HBAStatus_ID 3
    ULONG Flags;
    #define SM_GetBindingSupport_OUT_Flags_SIZE sizeof(ULONG)
    #define SM_GetBindingSupport_OUT_Flags_ID 4
} SM_GetBindingSupport_OUT, *PSM_GetBindingSupport_OUT;
typedef struct _SM_SetBindingSupport_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_SetBindingSupport_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_SetBindingSupport_IN_HbaPortWWN_ID 1
    UCHAR DomainPortWWN[8];
    #define SM_SetBindingSupport_IN_DomainPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_SetBindingSupport_IN_DomainPortWWN_ID 2
    ULONG Flags;
    #define SM_SetBindingSupport_IN_Flags_SIZE sizeof(ULONG)
    #define SM_SetBindingSupport_IN_Flags_ID 3
} SM_SetBindingSupport_IN, *PSM_SetBindingSupport_IN;
typedef struct _SM_SetBindingSupport_OUT
{
    ULONG HBAStatus;
    #define SM_SetBindingSupport_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_SetBindingSupport_OUT_HBAStatus_ID 4
} SM_SetBindingSupport_OUT, *PSM_SetBindingSupport_OUT;
typedef struct _SM_GetPersistentBinding_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_GetPersistentBinding_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_GetPersistentBinding_IN_HbaPortWWN_ID 1
    UCHAR DomainPortWWN[8];
    #define SM_GetPersistentBinding_IN_DomainPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_GetPersistentBinding_IN_DomainPortWWN_ID 2
    ULONG InEntryCount;
    #define SM_GetPersistentBinding_IN_InEntryCount_SIZE sizeof(ULONG)
    #define SM_GetPersistentBinding_IN_InEntryCount_ID 3
} SM_GetPersistentBinding_IN, *PSM_GetPersistentBinding_IN;
typedef struct _SM_GetPersistentBinding_OUT
{
    ULONG HBAStatus;
    #define SM_GetPersistentBinding_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_GetPersistentBinding_OUT_HBAStatus_ID 4
    ULONG TotalEntryCount;
    #define SM_GetPersistentBinding_OUT_TotalEntryCount_SIZE sizeof(ULONG)
    #define SM_GetPersistentBinding_OUT_TotalEntryCount_ID 5
    ULONG OutEntryCount;
    #define SM_GetPersistentBinding_OUT_OutEntryCount_SIZE sizeof(ULONG)
    #define SM_GetPersistentBinding_OUT_OutEntryCount_ID 6
    MS_SMHBA_BINDINGENTRY Entry[1];
    #define SM_GetPersistentBinding_OUT_Entry_ID 7
} SM_GetPersistentBinding_OUT, *PSM_GetPersistentBinding_OUT;
typedef struct _SM_SetPersistentBinding_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_SetPersistentBinding_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_SetPersistentBinding_IN_HbaPortWWN_ID 1
    UCHAR DomainPortWWN[8];
    #define SM_SetPersistentBinding_IN_DomainPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_SetPersistentBinding_IN_DomainPortWWN_ID 2
    ULONG InEntryCount;
    #define SM_SetPersistentBinding_IN_InEntryCount_SIZE sizeof(ULONG)
    #define SM_SetPersistentBinding_IN_InEntryCount_ID 3
    MS_SMHBA_BINDINGENTRY Entry[1];
    #define SM_SetPersistentBinding_IN_Entry_ID 4
} SM_SetPersistentBinding_IN, *PSM_SetPersistentBinding_IN;
typedef struct _SM_SetPersistentBinding_OUT
{
    ULONG HBAStatus;
    #define SM_SetPersistentBinding_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_SetPersistentBinding_OUT_HBAStatus_ID 5
    ULONG OutStatusCount;
    #define SM_SetPersistentBinding_OUT_OutStatusCount_SIZE sizeof(ULONG)
    #define SM_SetPersistentBinding_OUT_OutStatusCount_ID 6
    ULONG EntryStatus[1];
    #define SM_SetPersistentBinding_OUT_EntryStatus_ID 7
} SM_SetPersistentBinding_OUT, *PSM_SetPersistentBinding_OUT;
typedef struct _SM_RemovePersistentBinding_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_RemovePersistentBinding_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_RemovePersistentBinding_IN_HbaPortWWN_ID 1
    UCHAR DomainPortWWN[8];
    #define SM_RemovePersistentBinding_IN_DomainPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_RemovePersistentBinding_IN_DomainPortWWN_ID 2
    ULONG EntryCount;
    #define SM_RemovePersistentBinding_IN_EntryCount_SIZE sizeof(ULONG)
    #define SM_RemovePersistentBinding_IN_EntryCount_ID 3
    MS_SMHBA_BINDINGENTRY Entry[1];
    #define SM_RemovePersistentBinding_IN_Entry_ID 4
} SM_RemovePersistentBinding_IN, *PSM_RemovePersistentBinding_IN;
typedef struct _SM_RemovePersistentBinding_OUT
{
    ULONG HBAStatus;
    #define SM_RemovePersistentBinding_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_RemovePersistentBinding_OUT_HBAStatus_ID 5
} SM_RemovePersistentBinding_OUT, *PSM_RemovePersistentBinding_OUT;
typedef struct _SM_GetLUNStatistics_IN
{
    HBAScsiID Lunit;
    #define SM_GetLUNStatistics_IN_Lunit_SIZE sizeof(HBAScsiID)
    #define SM_GetLUNStatistics_IN_Lunit_ID 1
} SM_GetLUNStatistics_IN, *PSM_GetLUNStatistics_IN;
typedef struct _SM_GetLUNStatistics_OUT
{
    ULONG HBAStatus;
    #define SM_GetLUNStatistics_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_GetLUNStatistics_OUT_HBAStatus_ID 2
    MS_SMHBA_PROTOCOLSTATISTICS ProtocolStatistics;
    #define SM_GetLUNStatistics_OUT_ProtocolStatistics_SIZE sizeof(MS_SMHBA_PROTOCOLSTATISTICS)
    #define SM_GetLUNStatistics_OUT_ProtocolStatistics_ID 3
} SM_GetLUNStatistics_OUT, *PSM_GetLUNStatistics_OUT;
    { 0xb6661e6f,0x075e,0x4209, { 0xae,0x20,0xfe,0x81,0xdb,0x03,0xd9,0x79 } }
DEFINE_GUID(MS_SM_ScsiInformationMethods_GUID, \
            0xb6661e6f,0x075e,0x4209,0xae,0x20,0xfe,0x81,0xdb,0x03,0xd9,0x79);
typedef struct _SM_ScsiInquiry_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_ScsiInquiry_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_ScsiInquiry_IN_HbaPortWWN_ID 1
    UCHAR DiscoveredPortWWN[8];
    #define SM_ScsiInquiry_IN_DiscoveredPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_ScsiInquiry_IN_DiscoveredPortWWN_ID 2
    UCHAR DomainPortWWN[8];
    #define SM_ScsiInquiry_IN_DomainPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_ScsiInquiry_IN_DomainPortWWN_ID 3
    ULONGLONG SmhbaLUN;
    #define SM_ScsiInquiry_IN_SmhbaLUN_SIZE sizeof(ULONGLONG)
    #define SM_ScsiInquiry_IN_SmhbaLUN_ID 4
    UCHAR Cdb[6];
    #define SM_ScsiInquiry_IN_Cdb_SIZE sizeof(UCHAR[6])
    #define SM_ScsiInquiry_IN_Cdb_ID 5
    ULONG InRespBufferMaxSize;
    #define SM_ScsiInquiry_IN_InRespBufferMaxSize_SIZE sizeof(ULONG)
    #define SM_ScsiInquiry_IN_InRespBufferMaxSize_ID 6
    ULONG InSenseBufferMaxSize;
    #define SM_ScsiInquiry_IN_InSenseBufferMaxSize_SIZE sizeof(ULONG)
    #define SM_ScsiInquiry_IN_InSenseBufferMaxSize_ID 7
} SM_ScsiInquiry_IN, *PSM_ScsiInquiry_IN;
typedef struct _SM_ScsiInquiry_OUT
{
    ULONG HBAStatus;
    #define SM_ScsiInquiry_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_ScsiInquiry_OUT_HBAStatus_ID 8
    UCHAR ScsiStatus;
    #define SM_ScsiInquiry_OUT_ScsiStatus_SIZE sizeof(UCHAR)
    #define SM_ScsiInquiry_OUT_ScsiStatus_ID 9
    ULONG OutRespBufferSize;
    #define SM_ScsiInquiry_OUT_OutRespBufferSize_SIZE sizeof(ULONG)
    #define SM_ScsiInquiry_OUT_OutRespBufferSize_ID 10
    ULONG OutSenseBufferSize;
    #define SM_ScsiInquiry_OUT_OutSenseBufferSize_SIZE sizeof(ULONG)
    #define SM_ScsiInquiry_OUT_OutSenseBufferSize_ID 11
    UCHAR RespBuffer[1];
    #define SM_ScsiInquiry_OUT_RespBuffer_ID 12
    #define SM_ScsiInquiry_OUT_SenseBuffer_ID 13
} SM_ScsiInquiry_OUT, *PSM_ScsiInquiry_OUT;
typedef struct _SM_ScsiReportLuns_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_ScsiReportLuns_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_ScsiReportLuns_IN_HbaPortWWN_ID 1
    UCHAR DiscoveredPortWWN[8];
    #define SM_ScsiReportLuns_IN_DiscoveredPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_ScsiReportLuns_IN_DiscoveredPortWWN_ID 2
    UCHAR DomainPortWWN[8];
    #define SM_ScsiReportLuns_IN_DomainPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_ScsiReportLuns_IN_DomainPortWWN_ID 3
    UCHAR Cdb[12];
    #define SM_ScsiReportLuns_IN_Cdb_SIZE sizeof(UCHAR[12])
    #define SM_ScsiReportLuns_IN_Cdb_ID 4
    ULONG InRespBufferMaxSize;
    #define SM_ScsiReportLuns_IN_InRespBufferMaxSize_SIZE sizeof(ULONG)
    #define SM_ScsiReportLuns_IN_InRespBufferMaxSize_ID 5
    ULONG InSenseBufferMaxSize;
    #define SM_ScsiReportLuns_IN_InSenseBufferMaxSize_SIZE sizeof(ULONG)
    #define SM_ScsiReportLuns_IN_InSenseBufferMaxSize_ID 6
} SM_ScsiReportLuns_IN, *PSM_ScsiReportLuns_IN;
typedef struct _SM_ScsiReportLuns_OUT
{
    ULONG HBAStatus;
    #define SM_ScsiReportLuns_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_ScsiReportLuns_OUT_HBAStatus_ID 7
    UCHAR ScsiStatus;
    #define SM_ScsiReportLuns_OUT_ScsiStatus_SIZE sizeof(UCHAR)
    #define SM_ScsiReportLuns_OUT_ScsiStatus_ID 8
    ULONG TotalRespBufferSize;
    #define SM_ScsiReportLuns_OUT_TotalRespBufferSize_SIZE sizeof(ULONG)
    #define SM_ScsiReportLuns_OUT_TotalRespBufferSize_ID 9
    ULONG OutRespBufferSize;
    #define SM_ScsiReportLuns_OUT_OutRespBufferSize_SIZE sizeof(ULONG)
    #define SM_ScsiReportLuns_OUT_OutRespBufferSize_ID 10
    ULONG OutSenseBufferSize;
    #define SM_ScsiReportLuns_OUT_OutSenseBufferSize_SIZE sizeof(ULONG)
    #define SM_ScsiReportLuns_OUT_OutSenseBufferSize_ID 11
    UCHAR RespBuffer[1];
    #define SM_ScsiReportLuns_OUT_RespBuffer_ID 12
    #define SM_ScsiReportLuns_OUT_SenseBuffer_ID 13
} SM_ScsiReportLuns_OUT, *PSM_ScsiReportLuns_OUT;
typedef struct _SM_ScsiReadCapacity_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_ScsiReadCapacity_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_ScsiReadCapacity_IN_HbaPortWWN_ID 1
    UCHAR DiscoveredPortWWN[8];
    #define SM_ScsiReadCapacity_IN_DiscoveredPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_ScsiReadCapacity_IN_DiscoveredPortWWN_ID 2
    UCHAR DomainPortWWN[8];
    #define SM_ScsiReadCapacity_IN_DomainPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_ScsiReadCapacity_IN_DomainPortWWN_ID 3
    ULONGLONG SmhbaLUN;
    #define SM_ScsiReadCapacity_IN_SmhbaLUN_SIZE sizeof(ULONGLONG)
    #define SM_ScsiReadCapacity_IN_SmhbaLUN_ID 4
    UCHAR Cdb[16];
    #define SM_ScsiReadCapacity_IN_Cdb_SIZE sizeof(UCHAR[16])
    #define SM_ScsiReadCapacity_IN_Cdb_ID 5
    ULONG InRespBufferMaxSize;
    #define SM_ScsiReadCapacity_IN_InRespBufferMaxSize_SIZE sizeof(ULONG)
    #define SM_ScsiReadCapacity_IN_InRespBufferMaxSize_ID 6
    ULONG InSenseBufferMaxSize;
    #define SM_ScsiReadCapacity_IN_InSenseBufferMaxSize_SIZE sizeof(ULONG)
    #define SM_ScsiReadCapacity_IN_InSenseBufferMaxSize_ID 7
} SM_ScsiReadCapacity_IN, *PSM_ScsiReadCapacity_IN;
typedef struct _SM_ScsiReadCapacity_OUT
{
    ULONG HBAStatus;
    #define SM_ScsiReadCapacity_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_ScsiReadCapacity_OUT_HBAStatus_ID 8
    UCHAR ScsiStatus;
    #define SM_ScsiReadCapacity_OUT_ScsiStatus_SIZE sizeof(UCHAR)
    #define SM_ScsiReadCapacity_OUT_ScsiStatus_ID 9
    ULONG OutRespBufferSize;
    #define SM_ScsiReadCapacity_OUT_OutRespBufferSize_SIZE sizeof(ULONG)
    #define SM_ScsiReadCapacity_OUT_OutRespBufferSize_ID 10
    ULONG OutSenseBufferSize;
    #define SM_ScsiReadCapacity_OUT_OutSenseBufferSize_SIZE sizeof(ULONG)
    #define SM_ScsiReadCapacity_OUT_OutSenseBufferSize_ID 11
    UCHAR RespBuffer[1];
    #define SM_ScsiReadCapacity_OUT_RespBuffer_ID 12
    #define SM_ScsiReadCapacity_OUT_SenseBuffer_ID 13
} SM_ScsiReadCapacity_OUT, *PSM_ScsiReadCapacity_OUT;
    { 0x467fea10,0x701b,0x4388, { 0x91,0x7f,0x73,0x06,0x20,0xce,0xa3,0x28 } }
DEFINE_GUID(MS_SM_FabricAndDomainManagementMethods_GUID, \
            0x467fea10,0x701b,0x4388,0x91,0x7f,0x73,0x06,0x20,0xce,0xa3,0x28);
typedef struct _SM_SendTEST_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_SendTEST_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendTEST_IN_HbaPortWWN_ID 1
    UCHAR DestWWN[8];
    #define SM_SendTEST_IN_DestWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendTEST_IN_DestWWN_ID 2
    ULONG DestFCID;
    #define SM_SendTEST_IN_DestFCID_SIZE sizeof(ULONG)
    #define SM_SendTEST_IN_DestFCID_ID 3
    ULONG ReqBufferSize;
    #define SM_SendTEST_IN_ReqBufferSize_SIZE sizeof(ULONG)
    #define SM_SendTEST_IN_ReqBufferSize_ID 4
    UCHAR ReqBuffer[1];
    #define SM_SendTEST_IN_ReqBuffer_ID 5
} SM_SendTEST_IN, *PSM_SendTEST_IN;
typedef struct _SM_SendTEST_OUT
{
    ULONG HBAStatus;
    #define SM_SendTEST_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_SendTEST_OUT_HBAStatus_ID 6
} SM_SendTEST_OUT, *PSM_SendTEST_OUT;
typedef struct _SM_SendECHO_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_SendECHO_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendECHO_IN_HbaPortWWN_ID 1
    UCHAR DestWWN[8];
    #define SM_SendECHO_IN_DestWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendECHO_IN_DestWWN_ID 2
    ULONG DestFCID;
    #define SM_SendECHO_IN_DestFCID_SIZE sizeof(ULONG)
    #define SM_SendECHO_IN_DestFCID_ID 3
    ULONG InRespBufferMaxSize;
    #define SM_SendECHO_IN_InRespBufferMaxSize_SIZE sizeof(ULONG)
    #define SM_SendECHO_IN_InRespBufferMaxSize_ID 4
    ULONG ReqBufferSize;
    #define SM_SendECHO_IN_ReqBufferSize_SIZE sizeof(ULONG)
    #define SM_SendECHO_IN_ReqBufferSize_ID 5
    UCHAR ReqBuffer[1];
    #define SM_SendECHO_IN_ReqBuffer_ID 6
} SM_SendECHO_IN, *PSM_SendECHO_IN;
typedef struct _SM_SendECHO_OUT
{
    ULONG HBAStatus;
    #define SM_SendECHO_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_SendECHO_OUT_HBAStatus_ID 7
    ULONG OutRespBufferSize;
    #define SM_SendECHO_OUT_OutRespBufferSize_SIZE sizeof(ULONG)
    #define SM_SendECHO_OUT_OutRespBufferSize_ID 8
    UCHAR RespBuffer[1];
    #define SM_SendECHO_OUT_RespBuffer_ID 9
} SM_SendECHO_OUT, *PSM_SendECHO_OUT;
typedef struct _SM_SendSMPPassThru_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_SendSMPPassThru_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendSMPPassThru_IN_HbaPortWWN_ID 1
    UCHAR DestPortWWN[8];
    #define SM_SendSMPPassThru_IN_DestPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendSMPPassThru_IN_DestPortWWN_ID 2
    UCHAR DomainPortWWN[8];
    #define SM_SendSMPPassThru_IN_DomainPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendSMPPassThru_IN_DomainPortWWN_ID 3
    ULONG InRespBufferMaxSize;
    #define SM_SendSMPPassThru_IN_InRespBufferMaxSize_SIZE sizeof(ULONG)
    #define SM_SendSMPPassThru_IN_InRespBufferMaxSize_ID 4
    ULONG ReqBufferSize;
    #define SM_SendSMPPassThru_IN_ReqBufferSize_SIZE sizeof(ULONG)
    #define SM_SendSMPPassThru_IN_ReqBufferSize_ID 5
    UCHAR ReqBuffer[1];
    #define SM_SendSMPPassThru_IN_ReqBuffer_ID 6
} SM_SendSMPPassThru_IN, *PSM_SendSMPPassThru_IN;
typedef struct _SM_SendSMPPassThru_OUT
{
    ULONG HBAStatus;
    #define SM_SendSMPPassThru_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_SendSMPPassThru_OUT_HBAStatus_ID 7
    ULONG TotalRespBufferSize;
    #define SM_SendSMPPassThru_OUT_TotalRespBufferSize_SIZE sizeof(ULONG)
    #define SM_SendSMPPassThru_OUT_TotalRespBufferSize_ID 8
    ULONG OutRespBufferSize;
    #define SM_SendSMPPassThru_OUT_OutRespBufferSize_SIZE sizeof(ULONG)
    #define SM_SendSMPPassThru_OUT_OutRespBufferSize_ID 9
    UCHAR RespBuffer[1];
    #define SM_SendSMPPassThru_OUT_RespBuffer_ID 10
} SM_SendSMPPassThru_OUT, *PSM_SendSMPPassThru_OUT;
typedef struct _SM_SendCTPassThru_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_SendCTPassThru_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendCTPassThru_IN_HbaPortWWN_ID 1
    ULONG InRespBufferMaxSize;
    #define SM_SendCTPassThru_IN_InRespBufferMaxSize_SIZE sizeof(ULONG)
    #define SM_SendCTPassThru_IN_InRespBufferMaxSize_ID 2
    ULONG ReqBufferSize;
    #define SM_SendCTPassThru_IN_ReqBufferSize_SIZE sizeof(ULONG)
    #define SM_SendCTPassThru_IN_ReqBufferSize_ID 3
    UCHAR ReqBuffer[1];
    #define SM_SendCTPassThru_IN_ReqBuffer_ID 4
} SM_SendCTPassThru_IN, *PSM_SendCTPassThru_IN;
typedef struct _SM_SendCTPassThru_OUT
{
    ULONG HBAStatus;
    #define SM_SendCTPassThru_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_SendCTPassThru_OUT_HBAStatus_ID 5
    ULONG TotalRespBufferSize;
    #define SM_SendCTPassThru_OUT_TotalRespBufferSize_SIZE sizeof(ULONG)
    #define SM_SendCTPassThru_OUT_TotalRespBufferSize_ID 6
    ULONG OutRespBufferSize;
    #define SM_SendCTPassThru_OUT_OutRespBufferSize_SIZE sizeof(ULONG)
    #define SM_SendCTPassThru_OUT_OutRespBufferSize_ID 7
    UCHAR RespBuffer[1];
    #define SM_SendCTPassThru_OUT_RespBuffer_ID 8
} SM_SendCTPassThru_OUT, *PSM_SendCTPassThru_OUT;
typedef struct _SM_GetRNIDMgmtInfo_OUT
{
    ULONG HBAStatus;
    #define SM_GetRNIDMgmtInfo_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_GetRNIDMgmtInfo_OUT_HBAStatus_ID 1
    HBAFC3MgmtInfo MgmtInfo;
    #define SM_GetRNIDMgmtInfo_OUT_MgmtInfo_SIZE sizeof(HBAFC3MgmtInfo)
    #define SM_GetRNIDMgmtInfo_OUT_MgmtInfo_ID 2
} SM_GetRNIDMgmtInfo_OUT, *PSM_GetRNIDMgmtInfo_OUT;
typedef struct _SM_SetRNIDMgmtInfo_IN
{
    HBAFC3MgmtInfo MgmtInfo;
    #define SM_SetRNIDMgmtInfo_IN_MgmtInfo_SIZE sizeof(HBAFC3MgmtInfo)
    #define SM_SetRNIDMgmtInfo_IN_MgmtInfo_ID 1
} SM_SetRNIDMgmtInfo_IN, *PSM_SetRNIDMgmtInfo_IN;
typedef struct _SM_SetRNIDMgmtInfo_OUT
{
    ULONG HBAStatus;
    #define SM_SetRNIDMgmtInfo_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_SetRNIDMgmtInfo_OUT_HBAStatus_ID 2
} SM_SetRNIDMgmtInfo_OUT, *PSM_SetRNIDMgmtInfo_OUT;
typedef struct _SM_SendRNID_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_SendRNID_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendRNID_IN_HbaPortWWN_ID 1
    UCHAR DestWWN[8];
    #define SM_SendRNID_IN_DestWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendRNID_IN_DestWWN_ID 2
    ULONG DestFCID;
    #define SM_SendRNID_IN_DestFCID_SIZE sizeof(ULONG)
    #define SM_SendRNID_IN_DestFCID_ID 3
    ULONG NodeIdDataFormat;
    #define SM_SendRNID_IN_NodeIdDataFormat_SIZE sizeof(ULONG)
    #define SM_SendRNID_IN_NodeIdDataFormat_ID 4
    ULONG InRespBufferMaxSize;
    #define SM_SendRNID_IN_InRespBufferMaxSize_SIZE sizeof(ULONG)
    #define SM_SendRNID_IN_InRespBufferMaxSize_ID 5
} SM_SendRNID_IN, *PSM_SendRNID_IN;
typedef struct _SM_SendRNID_OUT
{
    ULONG HBAStatus;
    #define SM_SendRNID_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_SendRNID_OUT_HBAStatus_ID 6
    ULONG TotalRespBufferSize;
    #define SM_SendRNID_OUT_TotalRespBufferSize_SIZE sizeof(ULONG)
    #define SM_SendRNID_OUT_TotalRespBufferSize_ID 7
    ULONG OutRespBufferSize;
    #define SM_SendRNID_OUT_OutRespBufferSize_SIZE sizeof(ULONG)
    #define SM_SendRNID_OUT_OutRespBufferSize_ID 8
    UCHAR RespBuffer[1];
    #define SM_SendRNID_OUT_RespBuffer_ID 9
} SM_SendRNID_OUT, *PSM_SendRNID_OUT;
typedef struct _SM_SendRPL_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_SendRPL_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendRPL_IN_HbaPortWWN_ID 1
    UCHAR AgentWWN[8];
    #define SM_SendRPL_IN_AgentWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendRPL_IN_AgentWWN_ID 2
    ULONG AgentDomain;
    #define SM_SendRPL_IN_AgentDomain_SIZE sizeof(ULONG)
    #define SM_SendRPL_IN_AgentDomain_ID 3
    ULONG PortIndex;
    #define SM_SendRPL_IN_PortIndex_SIZE sizeof(ULONG)
    #define SM_SendRPL_IN_PortIndex_ID 4
    ULONG InRespBufferMaxSize;
    #define SM_SendRPL_IN_InRespBufferMaxSize_SIZE sizeof(ULONG)
    #define SM_SendRPL_IN_InRespBufferMaxSize_ID 5
} SM_SendRPL_IN, *PSM_SendRPL_IN;
typedef struct _SM_SendRPL_OUT
{
    ULONG HBAStatus;
    #define SM_SendRPL_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_SendRPL_OUT_HBAStatus_ID 6
    ULONG TotalRespBufferSize;
    #define SM_SendRPL_OUT_TotalRespBufferSize_SIZE sizeof(ULONG)
    #define SM_SendRPL_OUT_TotalRespBufferSize_ID 7
    ULONG OutRespBufferSize;
    #define SM_SendRPL_OUT_OutRespBufferSize_SIZE sizeof(ULONG)
    #define SM_SendRPL_OUT_OutRespBufferSize_ID 8
    UCHAR RespBuffer[1];
    #define SM_SendRPL_OUT_RespBuffer_ID 9
} SM_SendRPL_OUT, *PSM_SendRPL_OUT;
typedef struct _SM_SendRPS_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_SendRPS_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendRPS_IN_HbaPortWWN_ID 1
    UCHAR AgentWWN[8];
    #define SM_SendRPS_IN_AgentWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendRPS_IN_AgentWWN_ID 2
    UCHAR ObjectWWN[8];
    #define SM_SendRPS_IN_ObjectWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendRPS_IN_ObjectWWN_ID 3
    ULONG AgentDomain;
    #define SM_SendRPS_IN_AgentDomain_SIZE sizeof(ULONG)
    #define SM_SendRPS_IN_AgentDomain_ID 4
    ULONG ObjectPortNumber;
    #define SM_SendRPS_IN_ObjectPortNumber_SIZE sizeof(ULONG)
    #define SM_SendRPS_IN_ObjectPortNumber_ID 5
    ULONG InRespBufferMaxSize;
    #define SM_SendRPS_IN_InRespBufferMaxSize_SIZE sizeof(ULONG)
    #define SM_SendRPS_IN_InRespBufferMaxSize_ID 6
} SM_SendRPS_IN, *PSM_SendRPS_IN;
typedef struct _SM_SendRPS_OUT
{
    ULONG HBAStatus;
    #define SM_SendRPS_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_SendRPS_OUT_HBAStatus_ID 7
    ULONG TotalRespBufferSize;
    #define SM_SendRPS_OUT_TotalRespBufferSize_SIZE sizeof(ULONG)
    #define SM_SendRPS_OUT_TotalRespBufferSize_ID 8
    ULONG OutRespBufferSize;
    #define SM_SendRPS_OUT_OutRespBufferSize_SIZE sizeof(ULONG)
    #define SM_SendRPS_OUT_OutRespBufferSize_ID 9
    UCHAR RespBuffer[1];
    #define SM_SendRPS_OUT_RespBuffer_ID 10
} SM_SendRPS_OUT, *PSM_SendRPS_OUT;
typedef struct _SM_SendSRL_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_SendSRL_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendSRL_IN_HbaPortWWN_ID 1
    UCHAR WWN[8];
    #define SM_SendSRL_IN_WWN_SIZE sizeof(UCHAR[8])
    #define SM_SendSRL_IN_WWN_ID 2
    ULONG Domain;
    #define SM_SendSRL_IN_Domain_SIZE sizeof(ULONG)
    #define SM_SendSRL_IN_Domain_ID 3
    ULONG InRespBufferMaxSize;
    #define SM_SendSRL_IN_InRespBufferMaxSize_SIZE sizeof(ULONG)
    #define SM_SendSRL_IN_InRespBufferMaxSize_ID 4
} SM_SendSRL_IN, *PSM_SendSRL_IN;
typedef struct _SM_SendSRL_OUT
{
    ULONG HBAStatus;
    #define SM_SendSRL_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_SendSRL_OUT_HBAStatus_ID 5
    ULONG TotalRespBufferSize;
    #define SM_SendSRL_OUT_TotalRespBufferSize_SIZE sizeof(ULONG)
    #define SM_SendSRL_OUT_TotalRespBufferSize_ID 6
    ULONG OutRespBufferSize;
    #define SM_SendSRL_OUT_OutRespBufferSize_SIZE sizeof(ULONG)
    #define SM_SendSRL_OUT_OutRespBufferSize_ID 7
    UCHAR RespBuffer[1];
    #define SM_SendSRL_OUT_RespBuffer_ID 8
} SM_SendSRL_OUT, *PSM_SendSRL_OUT;
typedef struct _SM_SendLIRR_IN
{
    UCHAR SourceWWN[8];
    #define SM_SendLIRR_IN_SourceWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendLIRR_IN_SourceWWN_ID 1
    UCHAR DestWWN[8];
    #define SM_SendLIRR_IN_DestWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendLIRR_IN_DestWWN_ID 2
    UCHAR Function;
    #define SM_SendLIRR_IN_Function_SIZE sizeof(UCHAR)
    #define SM_SendLIRR_IN_Function_ID 3
    UCHAR Type;
    #define SM_SendLIRR_IN_Type_SIZE sizeof(UCHAR)
    #define SM_SendLIRR_IN_Type_ID 4
    ULONG InRespBufferMaxSize;
    #define SM_SendLIRR_IN_InRespBufferMaxSize_SIZE sizeof(ULONG)
    #define SM_SendLIRR_IN_InRespBufferMaxSize_ID 5
} SM_SendLIRR_IN, *PSM_SendLIRR_IN;
typedef struct _SM_SendLIRR_OUT
{
    ULONG HBAStatus;
    #define SM_SendLIRR_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_SendLIRR_OUT_HBAStatus_ID 6
    ULONG TotalRespBufferSize;
    #define SM_SendLIRR_OUT_TotalRespBufferSize_SIZE sizeof(ULONG)
    #define SM_SendLIRR_OUT_TotalRespBufferSize_ID 7
    ULONG OutRespBufferSize;
    #define SM_SendLIRR_OUT_OutRespBufferSize_SIZE sizeof(ULONG)
    #define SM_SendLIRR_OUT_OutRespBufferSize_ID 8
    UCHAR RespBuffer[1];
    #define SM_SendLIRR_OUT_RespBuffer_ID 9
} SM_SendLIRR_OUT, *PSM_SendLIRR_OUT;
typedef struct _SM_SendRLS_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_SendRLS_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendRLS_IN_HbaPortWWN_ID 1
    UCHAR DestWWN[8];
    #define SM_SendRLS_IN_DestWWN_SIZE sizeof(UCHAR[8])
    #define SM_SendRLS_IN_DestWWN_ID 2
    ULONG InRespBufferMaxSize;
    #define SM_SendRLS_IN_InRespBufferMaxSize_SIZE sizeof(ULONG)
    #define SM_SendRLS_IN_InRespBufferMaxSize_ID 3
} SM_SendRLS_IN, *PSM_SendRLS_IN;
typedef struct _SM_SendRLS_OUT
{
    ULONG HBAStatus;
    #define SM_SendRLS_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_SendRLS_OUT_HBAStatus_ID 4
    ULONG TotalRespBufferSize;
    #define SM_SendRLS_OUT_TotalRespBufferSize_SIZE sizeof(ULONG)
    #define SM_SendRLS_OUT_TotalRespBufferSize_ID 5
    ULONG OutRespBufferSize;
    #define SM_SendRLS_OUT_OutRespBufferSize_SIZE sizeof(ULONG)
    #define SM_SendRLS_OUT_OutRespBufferSize_ID 6
    UCHAR RespBuffer[1];
    #define SM_SendRLS_OUT_RespBuffer_ID 7
} SM_SendRLS_OUT, *PSM_SendRLS_OUT;
    { 0x7944cf67,0x697b,0x4432, { 0x95,0x3e,0x1f,0xda,0xda,0x88,0x43,0x61 } }
DEFINE_GUID(MS_SM_AdapterEvent_GUID, \
            0x7944cf67,0x697b,0x4432,0x95,0x3e,0x1f,0xda,0xda,0x88,0x43,0x61);
typedef struct _MS_SM_AdapterEvent
{
    ULONG EventType;
    #define MS_SM_AdapterEvent_EventType_SIZE sizeof(ULONG)
    #define MS_SM_AdapterEvent_EventType_ID 1
    UCHAR PortWWN[8];
    #define MS_SM_AdapterEvent_PortWWN_SIZE sizeof(UCHAR[8])
    #define MS_SM_AdapterEvent_PortWWN_ID 2
} MS_SM_AdapterEvent, *PMS_SM_AdapterEvent;
    { 0x0f760256,0x8fc6,0x47ad, { 0x9d,0x2e,0xf0,0xd6,0x98,0x01,0xde,0x7c } }
DEFINE_GUID(MS_SM_PortEvent_GUID, \
            0x0f760256,0x8fc6,0x47ad,0x9d,0x2e,0xf0,0xd6,0x98,0x01,0xde,0x7c);
typedef struct _MS_SM_PortEvent
{
    ULONG EventType;
    #define MS_SM_PortEvent_EventType_SIZE sizeof(ULONG)
    #define MS_SM_PortEvent_EventType_ID 1
    ULONG FabricPortId;
    #define MS_SM_PortEvent_FabricPortId_SIZE sizeof(ULONG)
    #define MS_SM_PortEvent_FabricPortId_ID 2
    UCHAR PortWWN[8];
    #define MS_SM_PortEvent_PortWWN_SIZE sizeof(UCHAR[8])
    #define MS_SM_PortEvent_PortWWN_ID 3
} MS_SM_PortEvent, *PMS_SM_PortEvent;
    { 0x6e2d8b73,0xf928,0x4da9, { 0xbd,0xa1,0xae,0x54,0x18,0x9a,0x38,0x25 } }
DEFINE_GUID(MS_SM_TargetEvent_GUID, \
            0x6e2d8b73,0xf928,0x4da9,0xbd,0xa1,0xae,0x54,0x18,0x9a,0x38,0x25);
typedef struct _MS_SM_TargetEvent
{
    ULONG EventType;
    #define MS_SM_TargetEvent_EventType_SIZE sizeof(ULONG)
    #define MS_SM_TargetEvent_EventType_ID 1
    UCHAR PortWWN[8];
    #define MS_SM_TargetEvent_PortWWN_SIZE sizeof(UCHAR[8])
    #define MS_SM_TargetEvent_PortWWN_ID 2
    UCHAR DiscoveredPortWWN[8];
    #define MS_SM_TargetEvent_DiscoveredPortWWN_SIZE sizeof(UCHAR[8])
    #define MS_SM_TargetEvent_DiscoveredPortWWN_ID 3
    UCHAR DomainPortWWN[8];
    #define MS_SM_TargetEvent_DomainPortWWN_SIZE sizeof(UCHAR[8])
    #define MS_SM_TargetEvent_DomainPortWWN_ID 4
} MS_SM_TargetEvent, *PMS_SM_TargetEvent;
    { 0xd6145693,0x5988,0x457f, { 0x85,0x81,0x9a,0x01,0x57,0xb5,0x86,0x90 } }
DEFINE_GUID(MS_SM_EventControl_GUID, \
            0xd6145693,0x5988,0x457f,0x85,0x81,0x9a,0x01,0x57,0xb5,0x86,0x90);
typedef struct _SM_AddTarget_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_AddTarget_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_AddTarget_IN_HbaPortWWN_ID 1
    UCHAR DiscoveredPortWWN[8];
    #define SM_AddTarget_IN_DiscoveredPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_AddTarget_IN_DiscoveredPortWWN_ID 2
    UCHAR DomainPortWWN[8];
    #define SM_AddTarget_IN_DomainPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_AddTarget_IN_DomainPortWWN_ID 3
    ULONG AllTargets;
    #define SM_AddTarget_IN_AllTargets_SIZE sizeof(ULONG)
    #define SM_AddTarget_IN_AllTargets_ID 4
} SM_AddTarget_IN, *PSM_AddTarget_IN;
typedef struct _SM_AddTarget_OUT
{
    ULONG HBAStatus;
    #define SM_AddTarget_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_AddTarget_OUT_HBAStatus_ID 5
} SM_AddTarget_OUT, *PSM_AddTarget_OUT;
typedef struct _SM_RemoveTarget_IN
{
    UCHAR HbaPortWWN[8];
    #define SM_RemoveTarget_IN_HbaPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_RemoveTarget_IN_HbaPortWWN_ID 1
    UCHAR DiscoveredPortWWN[8];
    #define SM_RemoveTarget_IN_DiscoveredPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_RemoveTarget_IN_DiscoveredPortWWN_ID 2
    UCHAR DomainPortWWN[8];
    #define SM_RemoveTarget_IN_DomainPortWWN_SIZE sizeof(UCHAR[8])
    #define SM_RemoveTarget_IN_DomainPortWWN_ID 3
    ULONG AllTargets;
    #define SM_RemoveTarget_IN_AllTargets_SIZE sizeof(ULONG)
    #define SM_RemoveTarget_IN_AllTargets_ID 4
} SM_RemoveTarget_IN, *PSM_RemoveTarget_IN;
typedef struct _SM_RemoveTarget_OUT
{
    ULONG HBAStatus;
    #define SM_RemoveTarget_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_RemoveTarget_OUT_HBAStatus_ID 5
} SM_RemoveTarget_OUT, *PSM_RemoveTarget_OUT;
typedef struct _SM_AddPort_IN
{
    UCHAR PortWWN[8];
    #define SM_AddPort_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define SM_AddPort_IN_PortWWN_ID 1
    ULONG EventType;
    #define SM_AddPort_IN_EventType_SIZE sizeof(ULONG)
    #define SM_AddPort_IN_EventType_ID 2
} SM_AddPort_IN, *PSM_AddPort_IN;
typedef struct _SM_AddPort_OUT
{
    ULONG HBAStatus;
    #define SM_AddPort_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_AddPort_OUT_HBAStatus_ID 3
} SM_AddPort_OUT, *PSM_AddPort_OUT;
typedef struct _SM_RemovePort_IN
{
    UCHAR PortWWN[8];
    #define SM_RemovePort_IN_PortWWN_SIZE sizeof(UCHAR[8])
    #define SM_RemovePort_IN_PortWWN_ID 1
    ULONG EventType;
    #define SM_RemovePort_IN_EventType_SIZE sizeof(ULONG)
    #define SM_RemovePort_IN_EventType_ID 2
} SM_RemovePort_IN, *PSM_RemovePort_IN;
typedef struct _SM_RemovePort_OUT
{
    ULONG HBAStatus;
    #define SM_RemovePort_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_RemovePort_OUT_HBAStatus_ID 3
} SM_RemovePort_OUT, *PSM_RemovePort_OUT;
typedef struct _SM_AddLink_OUT
{
    ULONG HBAStatus;
    #define SM_AddLink_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_AddLink_OUT_HBAStatus_ID 1
} SM_AddLink_OUT, *PSM_AddLink_OUT;
typedef struct _SM_RemoveLink_OUT
{
    ULONG HBAStatus;
    #define SM_RemoveLink_OUT_HBAStatus_SIZE sizeof(ULONG)
    #define SM_RemoveLink_OUT_HBAStatus_ID 1
} SM_RemoveLink_OUT, *PSM_RemoveLink_OUT;
    { 0x8cf4c7eb,0xa286,0x409d, { 0x9e,0xb9,0x29,0xd7,0xe0,0xe9,0xf4,0xfa } }
DEFINE_GUID(MSFC_TM_GUID, \
            0x8cf4c7eb,0xa286,0x409d,0x9e,0xb9,0x29,0xd7,0xe0,0xe9,0xf4,0xfa);
typedef struct _MSFC_TM
{
    ULONG tm_sec;
    #define MSFC_TM_tm_sec_SIZE sizeof(ULONG)
    #define MSFC_TM_tm_sec_ID 1
    ULONG tm_min;
    #define MSFC_TM_tm_min_SIZE sizeof(ULONG)
    #define MSFC_TM_tm_min_ID 2
    ULONG tm_hour;
    #define MSFC_TM_tm_hour_SIZE sizeof(ULONG)
    #define MSFC_TM_tm_hour_ID 3
    ULONG tm_mday;
    #define MSFC_TM_tm_mday_SIZE sizeof(ULONG)
    #define MSFC_TM_tm_mday_ID 4
    ULONG tm_mon;
    #define MSFC_TM_tm_mon_SIZE sizeof(ULONG)
    #define MSFC_TM_tm_mon_ID 5
    ULONG tm_year;
    #define MSFC_TM_tm_year_SIZE sizeof(ULONG)
    #define MSFC_TM_tm_year_ID 6
    ULONG tm_wday;
    #define MSFC_TM_tm_wday_SIZE sizeof(ULONG)
    #define MSFC_TM_tm_wday_ID 7
    ULONG tm_yday;
    #define MSFC_TM_tm_yday_SIZE sizeof(ULONG)
    #define MSFC_TM_tm_yday_ID 8
    ULONG tm_isdst;
    #define MSFC_TM_tm_isdst_SIZE sizeof(ULONG)
    #define MSFC_TM_tm_isdst_ID 9
} MSFC_TM, *PMSFC_TM;
