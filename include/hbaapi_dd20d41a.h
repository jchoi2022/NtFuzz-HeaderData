#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
#include <time.h>
typedef ULONGLONG HBA_UINT64;
typedef LONGLONG HBA_INT64;
typedef ULONG HBA_UINT32;
typedef USHORT HBA_UINT16;
typedef UCHAR HBA_UINT8;
typedef signed char HBA_INT8;
typedef HBA_UINT32 HBA_HANDLE;
typedef HBA_UINT32 HBA_STATUS;
typedef HBA_UINT8 HBA_BOOLEAN;
typedef HBA_UINT32 HBA_PORTTYPE;
typedef HBA_UINT32 HBA_PORTSTATE;
typedef HBA_UINT32 HBA_PORTSPEED;
typedef HBA_UINT32 HBA_FCPHYSPEED, HBA_SASPHYSPEED, HBA_PHYSPEED;
typedef HBA_UINT8 HBA_FCPHYTYPE;
typedef struct HBA_wwn {
    HBA_UINT8 wwn[8];
} HBA_WWN, *PHBA_WWN;
typedef struct SMHBA_FC_Phy {
    HBA_FCPHYSPEED PhySupportSpeed;
    HBA_FCPHYSPEED PhySpeed;
    HBA_FCPHYTYPE PhyType;
    HBA_UINT32 MaxFrameSize;
} SMHBA_FC_PHY, *PSMHBA_FC_PHY;
typedef struct SMHBA_SAS_Phy {
    HBA_UINT8 PhyIdentifier;
    HBA_SASPHYSPEED NegotiatedLinkRate;
    HBA_SASPHYSPEED ProgrammedMinLinkRate;
    HBA_SASPHYSPEED HardwareMinLinkRate;
    HBA_SASPHYSPEED ProgrammedMaxLinkRate;
    HBA_SASPHYSPEED HardwareMaxLinkRate;
    HBA_WWN domainPortWWN;
} SMHBA_SAS_PHY, *PSMHBA_SAS_PHY;
typedef HBA_UINT32 HBA_COS;
typedef struct HBA_fc4types {
    HBA_UINT8 bits[32];
} HBA_FC4TYPES, *PHBA_FC4TYPES;
typedef struct HBA_ipaddress {
    int ipversion;
    union
    {
        unsigned char ipv4address[4];
        unsigned char ipv6address[16];
    } ipaddress;
} HBA_IPADDRESS, *PHBA_IPADDRESS;
typedef struct HBA_AdapterAttributes {
    char Manufacturer[64];
    char SerialNumber[64];
    char Model[256];
    char ModelDescription[256];
    HBA_WWN NodeWWN;
    char NodeSymbolicName[256];
    char HardwareVersion[256];
    char DriverVersion[256];
    char OptionROMVersion[256];
    char FirmwareVersion[256];
    HBA_UINT32 VendorSpecificID;
    HBA_UINT32 NumberOfPorts;
    char DriverName[256];
} HBA_ADAPTERATTRIBUTES, *PHBA_ADAPTERATTRIBUTES;
typedef struct SMHBA_AdapterAttributes {
    char Manufacturer[64];
    char SerialNumber[64];
    char Model[256];
    char ModelDescription[256];
    char HardwareVersion[256];
    char DriverVersion[256];
    char OptionROMVersion[256];
    char FirmwareVersion[256];
    HBA_UINT32 VendorSpecificID;
    char DriverName[256];
    char HBASymbolicName[256];
    char RedundantOptionROMVersion[256];
    char RedundantFirmwareVersion[256];
} SMHBA_ADAPTERATTRIBUTES, *PSMHBA_ADAPTERATTRIBUTES;
typedef struct HBA_PortAttributes {
    HBA_WWN NodeWWN;
    HBA_WWN PortWWN;
    HBA_UINT32 PortFcId;
    HBA_PORTTYPE PortType;
    HBA_PORTSTATE PortState;
    HBA_COS PortSupportedClassofService;
    HBA_FC4TYPES PortSupportedFc4Types;
    HBA_FC4TYPES PortActiveFc4Types;
    char PortSymbolicName[256];
    char OSDeviceName[256];
    HBA_PORTSPEED PortSupportedSpeed;
    HBA_PORTSPEED PortSpeed;
    HBA_UINT32 PortMaxFrameSize;
    HBA_WWN FabricName;
    HBA_UINT32 NumberofDiscoveredPorts;
} HBA_PORTATTRIBUTES, *PHBA_PORTATTRIBUTES;
typedef HBA_UINT32 HBA_SASPORTPROTOCOL;
typedef struct SMHBA_FC_Port {
    HBA_WWN NodeWWN;
    HBA_WWN PortWWN;
    HBA_UINT32 FcId;
    HBA_COS PortSupportedClassofService;
    HBA_FC4TYPES PortSupportedFc4Types;
    HBA_FC4TYPES PortActiveFc4Types;
    HBA_WWN FabricName;
    char PortSymbolicName[256];
    HBA_UINT32 NumberofDiscoveredPorts;
    HBA_UINT8 NumberofPhys;
} SMHBA_FC_PORT, *PSMHBA_FC_PORT;
typedef struct SMHBA_SAS_Port {
    HBA_SASPORTPROTOCOL PortProtocol;
    HBA_WWN LocalSASAddress;
    HBA_WWN AttachedSASAddress;
    HBA_UINT32 NumberofDiscoveredPorts;
    HBA_UINT32 NumberofPhys;
} SMHBA_SAS_PORT, *PSMHBA_SAS_PORT;
typedef union SMHBA_Port {
    SMHBA_FC_PORT *FCPort;
    SMHBA_SAS_PORT *SASPort;
} SMHBA_PORT, *PSMHBA_PORT;
typedef struct SMHBA_PortAttributes {
    HBA_PORTTYPE PortType;
    HBA_PORTSTATE PortState;
    char OSDeviceName[256];
    SMHBA_PORT PortSpecificAttribute;
} SMHBA_PORTATTRIBUTES, *PSMHBA_PORTATTRIBUTES;
typedef struct HBA_PortStatistics {
    HBA_INT64 SecondsSinceLastReset;
    HBA_INT64 TxFrames;
    HBA_INT64 TxWords;
    HBA_INT64 RxFrames;
    HBA_INT64 RxWords;
    HBA_INT64 LIPCount;
    HBA_INT64 NOSCount;
    HBA_INT64 ErrorFrames;
    HBA_INT64 DumpedFrames;
    HBA_INT64 LinkFailureCount;
    HBA_INT64 LossOfSyncCount;
    HBA_INT64 LossOfSignalCount;
    HBA_INT64 PrimitiveSeqProtocolErrCount;
    HBA_INT64 InvalidTxWordCount;
    HBA_INT64 InvalidCRCCount;
} HBA_PORTSTATISTICS, *PHBA_PORTSTATISTICS;
typedef struct HBA_FC4Statistics {
    HBA_INT64 InputRequests;
    HBA_INT64 OutputRequests;
    HBA_INT64 ControlRequests;
    HBA_INT64 InputMegabytes;
    HBA_INT64 OutputMegabytes;
} HBA_FC4STATISTICS, *PHBA_FC4STATISTICS;
typedef struct SMHBA_ProtocolStatistics {
    HBA_INT64 SecondsSinceLastReset;
    HBA_INT64 InputRequests;
    HBA_INT64 OutputRequests;
    HBA_INT64 ControlRequests;
    HBA_INT64 InputMegabytes;
    HBA_INT64 OutputMegabytes;
} SMHBA_PROTOCOLSTATISTICS, *PSMHBA_PROTOCOLSTATISTICS;
typedef struct SMHBA_SASPhyStatistics {
    HBA_INT64 SecondsSinceLastReset;
    HBA_INT64 TxFrames;
    HBA_INT64 TxWords;
    HBA_INT64 RxFrames;
    HBA_INT64 RxWords;
    HBA_INT64 InvalidDwordCount;
    HBA_INT64 RunningDisparityErrorCount;
    HBA_INT64 LossofDwordSyncCount;
    HBA_INT64 PhyResetProblemCount;
} SMHBA_SASPHYSTATISTICS, *PSMHBA_SASPHYSTATISTICS;
typedef HBA_PORTSTATISTICS SMHBA_FCPHYSTATISTICS, *PSMHBA_FCPHYSTATISTICS;
typedef union SMHBA_PhyStatistics {
    SMHBA_SASPHYSTATISTICS *SASPhyStatistics;
    SMHBA_FCPHYSTATISTICS *FCPhyStatistics;
} SMHBA_PHYSTATISTICS, *PSMHBA_PHYSTATISTICS;
typedef enum HBA_fcpbindingtype { TO_D_ID, TO_WWN, TO_OTHER } HBA_FCPBINDINGTYPE;
typedef HBA_UINT32 HBA_BIND_CAPABILITY;
typedef HBA_UINT32 HBA_BIND_TYPE;
typedef struct HBA_LUID {
    char buffer[256];
} HBA_LUID, *PHBA_LUID;
typedef struct HBA_ScsiId {
    char OSDeviceName[256];
    HBA_UINT32 ScsiBusNumber;
    HBA_UINT32 ScsiTargetNumber;
    HBA_UINT32 ScsiOSLun;
} HBA_SCSIID, *PHBA_SCSIID;
typedef struct HBA_FcpId {
    HBA_UINT32 FcId;
    HBA_WWN NodeWWN;
    HBA_WWN PortWWN;
    HBA_UINT64 FcpLun;
} HBA_FCPID, *PHBA_FCPID;
typedef struct HBA_FcpScsiEntry {
    HBA_SCSIID ScsiId;
    HBA_FCPID FcpId;
} HBA_FCPSCSIENTRY, *PHBA_FCPSCSIENTRY;
typedef struct HBA_FcpScsiEntryV2 {
    HBA_SCSIID ScsiId;
    HBA_FCPID FcpId;
    HBA_LUID LUID;
} HBA_FCPSCSIENTRYV2, *PHBA_FCPSCSIENTRYV2;
typedef struct HBA_FCPTargetMapping {
    HBA_UINT32 NumberOfEntries;
    HBA_FCPSCSIENTRY entry[1];
} HBA_FCPTARGETMAPPING, *PHBA_FCPTARGETMAPPING;
typedef struct HBA_FCPTargetMappingV2 {
    HBA_UINT32 NumberOfEntries;
    HBA_FCPSCSIENTRYV2 entry[1];
} HBA_FCPTARGETMAPPINGV2, *PHBA_FCPTARGETMAPPINGV2;
typedef struct HBA_FCPBindingEntry {
    HBA_FCPBINDINGTYPE type;
    HBA_SCSIID ScsiId;
    HBA_FCPID FcpId;
    HBA_UINT32 FcId;
} HBA_FCPBINDINGENTRY, *PHBA_FCPBINDINGENTRY;
typedef struct HBA_FCPBinding {
    HBA_UINT32 NumberOfEntries;
    HBA_FCPBINDINGENTRY entry[1];
} HBA_FCPBINDING, *PHBA_FCPBINDING;
typedef struct HBA_FCPBindingEntry2 {
    HBA_BIND_TYPE type;
    HBA_SCSIID ScsiId;
    HBA_FCPID FcpId;
    HBA_LUID LUID;
    HBA_STATUS Status;
} HBA_FCPBINDINGENTRY2, *PHBA_FCPBINDINGENTRY2;
typedef struct HBA_FCPBinding2 {
    HBA_UINT32 NumberOfEntries;
    HBA_FCPBINDINGENTRY2 entry[1];
} HBA_FCPBINDING2, *PHBA_FCPBINDING2;
typedef HBA_UINT32 SMHBA_BIND_CAPABILITY;
typedef HBA_UINT32 SMHBA_BIND_TYPE;
typedef struct SMHBA_ScsiId {
    char OSDeviceName[256];
    HBA_UINT32 ScsiBusNumber;
    HBA_UINT32 ScsiTargetNumber;
    HBA_UINT32 ScsiOSLun;
} SMHBA_SCSIID, *PSMHBA_SCSIID;
typedef struct SMHBA_LUID {
    char buffer[256];
} SMHBA_LUID, *PSMHBA_LUID;
typedef HBA_UINT64 HBA_SCSILUN;
typedef struct SMHBA_SCSILUN {
    HBA_UINT8 lun[8];
} SMHBA_SCSILUN;
typedef struct SMHBA_PORTLUN {
    HBA_WWN PortWWN;
    HBA_WWN domainPortWWN;
    HBA_SCSILUN TargetLun;
} SMHBA_PORTLUN, *PSMHBA_PORTLUN;
typedef struct SMHBA_ScsiEntry {
    SMHBA_SCSIID ScsiId;
    SMHBA_PORTLUN PortLun;
    SMHBA_LUID LUID;
} SMHBA_SCSIENTRY, *PSMHBA_SCSIENTRY;
typedef struct SMHBA_TargetMapping {
    HBA_UINT32 NumberOfEntries;
    SMHBA_SCSIENTRY entry[1];
} SMHBA_TARGETMAPPING, *PSMHBA_TARGETMAPPING;
typedef struct SMHBA_BindingEntry {
    SMHBA_BIND_TYPE type;
    SMHBA_SCSIID ScsiId;
    SMHBA_PORTLUN PortLun;
    SMHBA_LUID LUID;
    HBA_STATUS Status;
} SMHBA_BINDINGENTRY, *PSMHBA_BINDINGENTRY;
typedef struct SMHBA_Binding {
    HBA_UINT32 NumberOfEntries;
    SMHBA_BINDINGENTRY entry[1];
} SMHBA_BINDING, *PSMHBA_BINDING;
typedef enum HBA_wwntype { NODE_WWN, PORT_WWN } HBA_WWNTYPE;
typedef struct HBA_MgmtInfo {
    HBA_WWN wwn;
    HBA_UINT32 unittype;
    HBA_UINT32 PortId;
    HBA_UINT32 NumberOfAttachedNodes;
    HBA_UINT16 IPVersion;
    HBA_UINT16 UDPPort;
    HBA_UINT8 IPAddress[16];
    HBA_UINT16 reserved;
    HBA_UINT16 TopologyDiscoveryFlags;
} HBA_MGMTINFO, *PHBA_MGMTINFO;
typedef struct HBA_Link_EventInfo {
    HBA_UINT32 PortFcId;
    HBA_UINT32 Reserved[3];
} HBA_LINK_EVENTINFO, *PHBA_LINK_EVENTINFO;
typedef struct HBA_RSCN_EventInfo {
    HBA_UINT32 PortFcId;
    HBA_UINT32 NPortPage;
    HBA_UINT32 Reserved[2];
} HBA_RSCN_EVENTINFO, *PHBA_RSCN_EVENTINFO;
typedef struct HBA_Pty_EventInfo {
    HBA_UINT32 PtyData[4];
} HBA_PTY_EVENTINFO, *PHBA_PTY_EVENTINFO;
typedef struct HBA_EventInfo {
    HBA_UINT32 EventCode;
    union {
        HBA_LINK_EVENTINFO Link_EventInfo;
        HBA_RSCN_EVENTINFO RSCN_EventInfo;
        HBA_PTY_EVENTINFO Pty_EventInfo;
    } Event;
} HBA_EVENTINFO, *PHBA_EVENTINFO;
typedef PVOID PHBA_ENTRYPOINTS;
typedef PVOID PHBA_ENTRYPOINTSV2;
typedef PVOID PSMHBA_ENTRYPOINTS;
HBA_STATUS HBA_API HBA_RegisterLibrary(PHBA_ENTRYPOINTS entrypoints);
HBA_STATUS HBA_API HBA_RegisterLibraryV2(PHBA_ENTRYPOINTSV2 entrypoints);
HBA_UINT32 HBA_API HBA_GetVersion();
HBA_STATUS HBA_API HBA_LoadLibrary();
HBA_STATUS HBA_API HBA_FreeLibrary();
HBA_UINT32 HBA_API HBA_GetNumberOfAdapters();
HBA_STATUS HBA_API
HBA_GetAdapterName(
    _In_ HBA_UINT32 AdapterIndex,
    _Inout_updates_(MAX_NAME) PSTR AdapterName
    );
HBA_HANDLE HBA_API
HBA_OpenAdapter(
    _In_ PSTR AdapterName
    );
void HBA_API
HBA_CloseAdapter(
    IN HBA_HANDLE handle
    );
HBA_STATUS HBA_API
HBA_GetAdapterAttributes(
    IN HBA_HANDLE Handle,
    OUT HBA_ADAPTERATTRIBUTES *HbaAttributes
    );
HBA_STATUS HBA_API
HBA_GetAdapterPortAttributes(
    IN HBA_HANDLE Handle,
    IN HBA_UINT32 PortIndex,
    OUT HBA_PORTATTRIBUTES *PortAttributes
    );
HBA_STATUS HBA_API
HBA_GetPortStatistics(
    IN HBA_HANDLE Handle,
    IN HBA_UINT32 PortIndex,
    OUT HBA_PORTSTATISTICS *PortStatistics
    );
HBA_STATUS HBA_API
HBA_GetDiscoveredPortAttributes(
    IN HBA_HANDLE Handle,
    IN HBA_UINT32 PortIndex,
    IN HBA_UINT32 DiscoveredPortIndex,
    OUT HBA_PORTATTRIBUTES *PortAttributes
    );
HBA_STATUS HBA_API
HBA_GetPortAttributesByWWN(
    IN HBA_HANDLE Handle,
    IN HBA_WWN PortWWN,
    OUT HBA_PORTATTRIBUTES *PortAttributes
    );
HBA_STATUS HBA_API
HBA_SendCTPassThru(
    IN HBA_HANDLE Handle,
    IN void *pReqBuffer,
    IN HBA_UINT32 ReqBufferSize,
    OUT void *pRspBuffer,
    IN HBA_UINT32 RspBufferSize
    );
HBA_STATUS HBA_API
HBA_GetEventBuffer(
    IN HBA_HANDLE Handle,
    OUT PHBA_EVENTINFO EventBuffer,
    IN OUT HBA_UINT32 *EventCount
    );
HBA_STATUS HBA_API
HBA_SetRNIDMgmtInfo(
    IN HBA_HANDLE Handle,
    IN HBA_MGMTINFO *pInfo
    );
HBA_STATUS HBA_API
HBA_GetRNIDMgmtInfo(
    IN HBA_HANDLE Handle,
    OUT HBA_MGMTINFO *pInfo
    );
HBA_STATUS HBA_API
HBA_SendRNID(
    IN HBA_HANDLE Handle,
    IN HBA_WWN Wwn,
    IN HBA_WWNTYPE WnnType,
    OUT void *pRspBuffer,
    IN OUT HBA_UINT32 *RspBufferSize
    );
HBA_STATUS HBA_API
HBA_GetFcpTargetMapping(
    IN HBA_HANDLE Handle,
    IN OUT PHBA_FCPTARGETMAPPING Mapping
    );
HBA_STATUS HBA_API
HBA_GetFcpPersistentBinding(
    IN HBA_HANDLE Handle,
    IN OUT PHBA_FCPBINDING Binding
    );
HBA_STATUS HBA_API
HBA_SendScsiInquiry(
    IN HBA_HANDLE Handle,
    IN HBA_WWN PortWWN,
    IN HBA_UINT64 FcLUN,
    IN HBA_UINT8 EVPD,
    IN HBA_UINT32 PageCode,
    OUT void *pRspBuffer,
    IN HBA_UINT32 RspBufferSize,
    OUT void *pSenseBuffer,
    IN HBA_UINT32 SenseBufferSize
    );
HBA_STATUS HBA_API
HBA_SendReportLUNs(
    IN HBA_HANDLE Handle,
    IN HBA_WWN PortWWN,
    OUT void *pRspBuffer,
    IN HBA_UINT32 RspBufferSize,
    OUT void *pSenseBuffer,
    IN HBA_UINT32 SenseBufferSize
    );
HBA_STATUS HBA_API
HBA_SendReadCapacity(
    IN HBA_HANDLE Handle,
    IN HBA_WWN PortWWN,
    IN HBA_UINT64 FcLUN,
    OUT void *pRspBuffer,
    IN HBA_UINT32 RspBufferSize,
    OUT void *pSenseBuffer,
    IN HBA_UINT32 SenseBufferSize
    );
void HBA_API
HBA_RefreshInformation(
    IN HBA_HANDLE Handle
    );
void HBA_API
HBA_ResetStatistics(
    IN HBA_HANDLE Handle,
    IN HBA_UINT32 PortIndex
    );
typedef void *HBA_CALLBACKHANDLE;
typedef HBA_CALLBACKHANDLE *PHBA_CALLBACKHANDLE;
HBA_STATUS HBA_API
HBA_RemoveCallback(
    IN HBA_CALLBACKHANDLE callbackHandle
    );
HBA_STATUS HBA_API
HBA_RegisterForAdapterAddEvents(
    IN void (*callback) (void *pData, HBA_WWN PortWWN, HBA_UINT32 eventType),
    IN void *pUserData,
    OUT HBA_CALLBACKHANDLE *pCallbackHandle
    );
HBA_STATUS HBA_API
HBA_RegisterForAdapterEvents(
    IN void (*callback) (void *pData, HBA_WWN PortWWN, HBA_UINT32 eventType),
    IN void *pUserData,
    IN HBA_HANDLE Handle,
    OUT HBA_CALLBACKHANDLE *pCallbackHandle
    );
HBA_STATUS HBA_API
HBA_RegisterForAdapterPortEvents(
    IN void (*callback) (void *pData,
                          HBA_WWN PortWWN,
                          HBA_UINT32 eventType,
                          HBA_UINT32 fabricPortID),
    IN void *UserData,
    IN HBA_HANDLE Handle,
    IN HBA_WWN PortWWN,
    OUT HBA_CALLBACKHANDLE *pCallbackHandle
    );
HBA_STATUS HBA_API
HBA_RegisterForAdapterPortStatEvents(
    IN void (*callback)(void *pData,
                         HBA_WWN PortWWN,
                         HBA_UINT32 eventType),
    IN void *pUserData,
    IN HBA_HANDLE Handle,
    IN HBA_WWN PortWWN,
    IN HBA_PORTSTATISTICS stats,
    IN HBA_UINT32 statType,
    OUT HBA_CALLBACKHANDLE *pCallbackHandle
    );
HBA_STATUS HBA_API
HBA_RegisterForTargetEvents(
    IN void (*callback)(void *pData,
                         HBA_WWN hbaPortWWN,
                         HBA_WWN discoveredPortWWN,
                         HBA_UINT32 eventType),
    IN void *pUserData,
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DiscoveredPortWWN,
    OUT HBA_CALLBACKHANDLE *pCallbackHandle,
    IN HBA_UINT32 AllTargets
    );
HBA_STATUS HBA_API
HBA_RegisterForLinkEvents(
    IN void (*callback)(void *data, HBA_WWN adapterWWN, HBA_UINT32 eventType,
                     void *pRLIRBuffer, HBA_UINT32 RLIRBufferSize),
    IN void *userData,
    IN void *pRLIRBuffer,
    IN HBA_UINT32 RLIRBufferSize,
    IN HBA_HANDLE Handle,
    OUT HBA_CALLBACKHANDLE *pCallbackHandle
    );
HBA_STATUS HBA_API
HBA_OpenAdapterByWWN(
    OUT HBA_HANDLE *HbaHandle,
    IN HBA_WWN Wwn
    );
void HBA_API
HBA_RefreshAdapterConfiguration(
    );
HBA_STATUS HBA_API
HBA_SendCTPassThruV2(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN void *pReqBuffer,
    IN HBA_UINT32 ReqBufferSize,
    OUT void *pRspBuffer,
    IN OUT HBA_UINT32 *pRspBufferSize
    );
HBA_STATUS HBA_API
HBA_SendRNIDV2(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DestWWN,
    IN HBA_UINT32 DestFCID,
    IN HBA_UINT32 NodeIdDataFormat,
    OUT void *pRspBuffer,
    IN OUT HBA_UINT32 *pRspBufferSize
    );
HBA_STATUS HBA_API
HBA_SendRPL(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN Agent_wwn,
    IN HBA_UINT32 Agent_domain,
    IN HBA_UINT32 PortIndex,
    OUT void *pRspBuffer,
    IN OUT HBA_UINT32 *pRspBufferSize
    );
HBA_STATUS HBA_API
HBA_SendRPS(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN Agent_wwn,
    IN HBA_UINT32 Agent_domain,
    IN HBA_WWN Object_wwn,
    IN HBA_UINT32 Object_port_number,
    OUT void *pRspBuffer,
    IN OUT HBA_UINT32 *pRspBufferSize
    );
HBA_STATUS HBA_API
HBA_SendSRL(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN Wwn,
    IN HBA_UINT32 Domain,
    OUT void *pRspBuffer,
    IN OUT HBA_UINT32 *pRspBufferSize
    );
HBA_STATUS HBA_API
HBA_SendLIRR(
    IN HBA_HANDLE Handle,
    IN HBA_WWN SourceWWN,
    IN HBA_WWN DestWWN,
    IN HBA_UINT8 Function,
    IN HBA_UINT8 Type,
    OUT void *pRspBuffer,
    IN OUT HBA_UINT32 *pRspBufferSize
    );
HBA_STATUS HBA_API
HBA_SendRLS(
    IN HBA_HANDLE HbaHandle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DestWWN,
    OUT void *pRspBuffer,
    IN OUT HBA_UINT32 *pRspBufferSize
    );
HBA_STATUS HBA_API
HBA_GetFC4Statistics(
    IN HBA_HANDLE Handle,
    IN HBA_WWN PortWWN,
    IN HBA_UINT8 FC4type,
    OUT HBA_FC4STATISTICS *Statistics
    );
HBA_STATUS HBA_API
HBA_GetFCPStatistics(
    IN HBA_HANDLE Handle,
    IN const HBA_SCSIID *Lunit,
    OUT HBA_FC4STATISTICS *Statistics
    );
typedef struct HBA_LibraryAttributes {
    HBA_BOOLEAN final;
    char LibPath[256];
    char VName[256];
    char VVersion[256];
    struct tm build_date;
} HBA_LIBRARYATTRIBUTES, *PHBA_LIBRARYATTRIBUTES;
typedef struct SMHBA_LibraryAttributes {
    char LibPath[256];
    char VName[256];
    char VVersion[256];
    struct {
        int tm_mday;
        int tm_mon;
        int tm_year;
    } build_date;
} SMHBA_LIBRARYATTRIBUTES, *PSMHBA_LIBRARYATTRIBUTES;
HBA_UINT32 HBA_API
HBA_GetWrapperLibraryAttributes(
    OUT HBA_LIBRARYATTRIBUTES *Attributes
    );
HBA_UINT32 HBA_API
HBA_GetVendorLibraryAttributes(
    IN HBA_UINT32 AdapterIndex,
    OUT HBA_LIBRARYATTRIBUTES *Attributes
    );
HBA_STATUS HBA_API
HBA_ScsiReadCapacityV2(
    IN HBA_HANDLE HbaHandle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DiscoveredPortWWN,
    IN HBA_UINT64 FcLUN,
    OUT void *pRespBuffer,
    IN OUT HBA_UINT32 *pRespBufferSize,
    OUT HBA_UINT8 *pScsiStatus,
    OUT void *pSenseBuffer,
    IN OUT HBA_UINT32 *pSenseBufferSize
    );
HBA_STATUS HBA_API
HBA_ScsiReportLUNsV2(
    IN HBA_HANDLE Hbahandle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DiscoveredPortWWN,
    OUT void *pRespBuffer,
    IN OUT HBA_UINT32 *pRespBufferSize,
    OUT HBA_UINT8 *pScsiStatus,
    OUT void *pSenseBuffer,
    IN OUT HBA_UINT32 *pSenseBufferSize
    );
HBA_STATUS HBA_API
HBA_ScsiInquiryV2 (
    IN HBA_HANDLE HbaHandle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DiscoveredPortWWN,
    IN HBA_UINT64 FcLUN,
    IN HBA_UINT8 CDB_Byte1,
    IN HBA_UINT8 CDB_Byte2,
    OUT void *pRespBuffer,
    IN OUT HBA_UINT32 *pRespBufferSize,
    OUT HBA_UINT8 *pScsiStatus,
    OUT void *pSenseBuffer,
    IN OUT HBA_UINT32 *pSenseBufferSize
    );
HBA_STATUS HBA_API
HBA_GetFcpTargetMappingV2(
    IN HBA_HANDLE HbaHandle,
    IN HBA_WWN HbaPortWWN,
    IN OUT HBA_FCPTARGETMAPPINGV2 *Mapping
    );
HBA_STATUS HBA_API
HBA_GetBindingCapability(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    OUT HBA_BIND_CAPABILITY *Flags
    );
HBA_STATUS HBA_API
HBA_GetBindingSupport(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    OUT HBA_BIND_CAPABILITY *Flags
    );
HBA_STATUS HBA_API
HBA_SetBindingSupport(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_BIND_CAPABILITY Flags
    );
HBA_STATUS HBA_API
HBA_GetPersistentBindingV2(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN OUT PHBA_FCPBINDING2 Binding
    );
HBA_STATUS HBA_API
HBA_SetPersistentBindingV2(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN PHBA_FCPBINDING2 Binding
    );
HBA_STATUS HBA_API
HBA_RemovePersistentBinding(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN PHBA_FCPBINDING2 Binding
    );
HBA_STATUS HBA_API
HBA_RemoveAllPersistentBindings(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN
    );
#if 0
typedef PVOID PHBA_SBTARGETMAPPING;
typedef struct HBA_SBDevId {
    char OSDeviceName[256];
} HBA_SBDEVID, *PHBA_SBDEVID;
typedef struct HBA_Ned {
    HBA_UINT32 NEDWord0;
    HBA_UINT32 NelId[7];
} HBA_NED, *PHBA_NED;
typedef struct HBA_DeviceSelfDesc {
    HBA_NED TokenNED;
    HBA_NED DeviceNED;
} HBA_DEVICESELFDESC, *PHBA_DEVICESELFDESC;
typedef PVOID PHBA_SBSTATISTICS;
typedef struct HBA_SBDskCapacity {
    HBA_INT32 SCSIFormatLBA;
    HBA_INT32 SCSIFormatBlkLen;
    HBA_INT32 SBDskNumberOfCylinders;
    HBA_INT32 SBDskTracksPerCylinder;
    HBA_INT32 SBDskMaxUsableTrackLen;
} HBA_SBDSKCAPACITY, *PHBA_SBDSKCAPACITY;
HBA_STATUS HBA_API
HBA_GetSBTargetMapping(
    IN HBA_HANDLE HbaHandle,
    IN HBA_WWN HbaPortWWN,
    OUT PHBA_SBTARGETMAPPING Mapping
    );
HBA_STATUS HBA_API
HBA_GetSBStatistics(
    IN HBA_HANDLE HbaHandle,
    IN const HBA_SBDEVID *Device,
    OUT PHBA_SBSTATISTICS Statistics
    );
HBA_STATUS HBA_API
HBA_SBDskGetCapacity(
    IN HBA_DEVICESELFDESC DeviceSelfDesc,
    OUT PHBA_SBDSKCAPACITY PSbDskCapacity
    );
#endif
HBA_UINT32 HBA_API SMHBA_GetVersion();
HBA_STATUS HBA_API SMHBA_RegisterLibrary(PSMHBA_ENTRYPOINTS entrypoints);
HBA_UINT32 HBA_API
SMHBA_GetWrapperLibraryAttributes(
    OUT SMHBA_LIBRARYATTRIBUTES *Attributes
    );
HBA_UINT32 HBA_API
SMHBA_GetVendorLibraryAttributes(
    IN HBA_UINT32 AdapterIndex,
    OUT SMHBA_LIBRARYATTRIBUTES *Attributes
    );
HBA_STATUS HBA_API
SMHBA_GetProtocolStatistics(
    IN HBA_HANDLE Handle,
    IN HBA_UINT32 PortIndex,
    IN HBA_UINT32 ProtocolType,
    OUT SMHBA_PROTOCOLSTATISTICS *ProtocolStatistics
    );
HBA_STATUS HBA_API
SMHBA_GetNumberOfPorts(
    IN HBA_HANDLE Handle,
    OUT HBA_UINT32 *NumberOfPorts
    );
HBA_STATUS HBA_API
SMHBA_GetAdapterAttributes(
    IN HBA_HANDLE Handle,
    OUT SMHBA_ADAPTERATTRIBUTES *AdapterAttributes
    );
HBA_STATUS HBA_API
SMHBA_GetPhyStatistics(
    IN HBA_HANDLE Handle,
    IN HBA_UINT32 PortIndex,
    IN HBA_UINT32 PhyIndex,
    OUT SMHBA_PHYSTATISTICS *PhyStatistics
    );
HBA_STATUS HBA_API
SMHBA_GetDiscoveredPortAttributes(
    IN HBA_HANDLE Handle,
    IN HBA_UINT32 PortIndex,
    IN HBA_UINT32 DiscoveredPortIndex,
    OUT SMHBA_PORTATTRIBUTES *PortAttributes
    );
HBA_STATUS HBA_API
SMHBA_GetPortAttributesByWWN(
    IN HBA_HANDLE Handle,
    IN HBA_WWN PortWWN,
    IN HBA_WWN DomainPortWWN,
    OUT SMHBA_PORTATTRIBUTES *PortAttributes
    );
HBA_STATUS HBA_API
SMHBA_GetPortType(
    IN HBA_HANDLE Handle,
    IN HBA_UINT32 PortIndex,
    OUT HBA_PORTTYPE *PortType
    );
HBA_STATUS HBA_API
SMHBA_GetAdapterPortAttributes(
    IN HBA_HANDLE Handle,
    IN HBA_UINT32 PortIndex,
    OUT SMHBA_PORTATTRIBUTES *PortAttributes
    );
HBA_STATUS HBA_API
SMHBA_GetFCPhyAttributes(
    IN HBA_HANDLE Handle,
    IN HBA_UINT32 PortIndex,
    IN HBA_UINT32 PhyIndex,
    OUT SMHBA_FC_PHY *PhyType
    );
HBA_STATUS HBA_API
SMHBA_GetSASPhyAttributes(
    IN HBA_HANDLE Handle,
    IN HBA_UINT32 PortIndex,
    IN HBA_UINT32 PhyIndex,
    OUT SMHBA_SAS_PHY *PhyType
    );
HBA_STATUS HBA_API
SMHBA_GetLUNStatistics(
    IN HBA_HANDLE Handle,
    IN const HBA_SCSIID *Lunit,
    OUT SMHBA_PROTOCOLSTATISTICS *ProtocolStatistics
    );
HBA_STATUS HBA_API
SMHBA_GetTargetMapping(
    IN HBA_HANDLE HbaHandle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DomainPortWWN,
    IN OUT SMHBA_TARGETMAPPING *Mapping
    );
HBA_STATUS HBA_API
SMHBA_GetBindingCapability(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DomainPortWWN,
    OUT SMHBA_BIND_CAPABILITY *Flags
    );
HBA_STATUS HBA_API
SMHBA_GetBindingSupport(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DomainPortWWN,
    OUT SMHBA_BIND_CAPABILITY *Flags
    );
HBA_STATUS HBA_API
SMHBA_SetBindingSupport(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DomainPortWWN,
    IN SMHBA_BIND_CAPABILITY Flags
    );
HBA_STATUS HBA_API
SMHBA_GetPersistentBinding(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DomainPortWWN,
    IN OUT SMHBA_BINDING *Binding
    );
HBA_STATUS HBA_API
SMHBA_SetPersistentBinding(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DomainPortWWN,
    IN OUT SMHBA_BINDING *Binding
    );
HBA_STATUS HBA_API
SMHBA_RemovePersistentBinding(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DomainPortWWN,
    IN const SMHBA_BINDING *Binding
    );
HBA_STATUS HBA_API
SMHBA_RemoveAllPersistentBindings(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DomainPortWWN
    );
HBA_STATUS HBA_API
SMHBA_ScsiInquiry(
    IN HBA_HANDLE HbaHandle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DiscoveredPortWWN,
    IN HBA_WWN DomainPortWWN,
    IN HBA_SCSILUN SmhbaLUN,
    IN HBA_UINT8 CDB_Byte1,
    IN HBA_UINT8 CDB_Byte2,
    OUT void *pRespBuffer,
    IN OUT HBA_UINT32 *pRespBufferSize,
    OUT HBA_UINT8 *pScsiStatus,
    OUT void *pSenseBuffer,
    IN OUT HBA_UINT32 *pSenseBufferSize
    );
HBA_STATUS HBA_API
SMHBA_ScsiReportLuns(
    IN HBA_HANDLE Hbahandle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DiscoveredPortWWN,
    IN HBA_WWN DomainPortWWN,
    OUT void *pRespBuffer,
    IN OUT HBA_UINT32 *pRespBufferSize,
    OUT HBA_UINT8 *pScsiStatus,
    OUT void *pSenseBuffer,
    IN OUT HBA_UINT32 *pSenseBufferSize
    );
HBA_STATUS HBA_API
SMHBA_ScsiReadCapacity(
    IN HBA_HANDLE HbaHandle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DiscoveredPortWWN,
    IN HBA_WWN DomainPortWWN,
    IN HBA_SCSILUN SmhbaLUN,
    OUT void *pRespBuffer,
    IN OUT HBA_UINT32 *pRespBufferSize,
    OUT HBA_UINT8 *pScsiStatus,
    OUT void *pSenseBuffer,
    IN OUT HBA_UINT32 *pSenseBufferSize
    );
HBA_STATUS HBA_API
SMHBA_SendTEST(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DestWWN,
    IN HBA_UINT32 DestFCID,
    IN void *ReqBuffer,
    IN HBA_UINT32 ReqBufferSize
    );
HBA_STATUS HBA_API
SMHBA_SendECHO(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DestWWN,
    IN HBA_UINT32 DestFCID,
    IN void *ReqBuffer,
    IN HBA_UINT32 ReqBufferSize,
    OUT void *RspBuffer,
    IN OUT HBA_UINT32 *RspBufferSize
    );
HBA_STATUS HBA_API
SMHBA_SendSMPPassThru(
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DestPortWWN,
    IN HBA_WWN DomainPortWWN,
    IN void *ReqBuffer,
    IN HBA_UINT32 ReqBufferSize,
    OUT void *RspBuffer,
    IN OUT HBA_UINT32 *RspBufferSize
    );
HBA_STATUS HBA_API
SMHBA_RegisterForAdapterAddEvents(
    IN void (*callback)(void *pData, HBA_WWN PortWWN, HBA_UINT32 eventType),
    IN void *pUserData,
    OUT HBA_CALLBACKHANDLE *pCallbackHandle
    );
HBA_STATUS HBA_API
SMHBA_RegisterForAdapterEvents(
    IN void (*callback)(void *pData, HBA_WWN PortWWN, HBA_UINT32 eventType),
    IN void *pUserData,
    IN HBA_HANDLE Handle,
    OUT HBA_CALLBACKHANDLE *pCallbackHandle
    );
HBA_STATUS HBA_API
SMHBA_RegisterForAdapterPortEvents(
    IN void (*callback)(void *pData,
                         HBA_WWN PortWWN,
                         HBA_UINT32 eventType,
                         HBA_UINT32 fabricPortID),
    IN void *pUserData,
    IN HBA_HANDLE Handle,
    IN HBA_WWN PortWWN,
    IN HBA_UINT32 SpecificEventType,
    OUT HBA_CALLBACKHANDLE *pCallbackHandle
    );
HBA_STATUS HBA_API
SMHBA_RegisterForAdapterPortStatEvents(
    IN void (*callback)(void *pData,
                         HBA_WWN PortWWN,
                         HBA_UINT32 ProtocolType,
                         HBA_UINT32 EventType),
    IN void *pUserData,
    IN HBA_HANDLE Handle,
    IN HBA_WWN PortWWN,
    IN HBA_UINT32 ProtocolType,
    IN SMHBA_PROTOCOLSTATISTICS Stats,
    IN HBA_UINT32 StatType,
    OUT HBA_CALLBACKHANDLE *pCallbackHandle
    );
HBA_STATUS HBA_API
SMHBA_RegisterForAdapterPhyStatEvents(
    IN void (*callback)(void *pData,
                         HBA_WWN PortWWN,
                         HBA_UINT32 PhyIndex,
                         HBA_UINT32 EventType),
    IN void *pUserData,
    IN HBA_HANDLE Handle,
    IN HBA_WWN PortWWN,
    IN HBA_UINT32 PhyIndex,
    IN SMHBA_PHYSTATISTICS Stats,
    IN HBA_UINT32 StatType,
    OUT HBA_CALLBACKHANDLE *pCallbackHandle
    );
HBA_STATUS HBA_API
SMHBA_RegisterForTargetEvents(
    IN void (*callback)(void *pData,
                         HBA_WWN HbaPortWWN,
                         HBA_WWN DiscoveredPortWWN,
                         HBA_WWN DomainPortWWN,
                         HBA_UINT32 EventType),
    IN void *pUserData,
    IN HBA_HANDLE Handle,
    IN HBA_WWN HbaPortWWN,
    IN HBA_WWN DiscoveredPortWWN,
    IN HBA_WWN DomainPortWWN,
    OUT HBA_CALLBACKHANDLE *pCallbackHandle,
    IN HBA_UINT32 AllTargets
    );
};
#endif
#pragma endregion
