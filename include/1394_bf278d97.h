extern "C" {
typedef struct _NODE_ADDRESS {
    USHORT NA_Node_Number:6;
    USHORT NA_Bus_Number:10;
} NODE_ADDRESS, *PNODE_ADDRESS;
typedef struct _ADDRESS_OFFSET {
    USHORT Off_High;
    ULONG Off_Low;
} ADDRESS_OFFSET, *PADDRESS_OFFSET;
typedef struct _IO_ADDRESS {
    NODE_ADDRESS IA_Destination_ID;
    ADDRESS_OFFSET IA_Destination_Offset;
} IO_ADDRESS, *PIO_ADDRESS;
typedef struct _ADDRESS_RANGE {
    USHORT AR_Off_High;
    USHORT AR_Length;
    ULONG AR_Off_Low;
} ADDRESS_RANGE, *PADDRESS_RANGE;
typedef struct _SELF_ID {
    ULONG SID_Phys_ID:6;
    ULONG SID_Packet_ID:2;
    ULONG SID_Gap_Count:6;
    ULONG SID_Link_Active:1;
    ULONG SID_Zero:1;
    ULONG SID_Power_Class:3;
    ULONG SID_Contender:1;
    ULONG SID_Delay:2;
    ULONG SID_Speed:2;
    ULONG SID_More_Packets:1;
    ULONG SID_Initiated_Rst:1;
    ULONG SID_Port3:2;
    ULONG SID_Port2:2;
    ULONG SID_Port1:2;
} SELF_ID, *PSELF_ID;
typedef struct _SELF_ID_MORE {
    ULONG SID_Phys_ID:6;
    ULONG SID_Packet_ID:2;
    ULONG SID_PortA:2;
    ULONG SID_Reserved2:2;
    ULONG SID_Sequence:3;
    ULONG SID_One:1;
    ULONG SID_PortE:2;
    ULONG SID_PortD:2;
    ULONG SID_PortC:2;
    ULONG SID_PortB:2;
    ULONG SID_More_Packets:1;
    ULONG SID_Reserved3:1;
    ULONG SID_PortH:2;
    ULONG SID_PortG:2;
    ULONG SID_PortF:2;
} SELF_ID_MORE, *PSELF_ID_MORE;
typedef struct _PHY_CONFIGURATION_PACKET {
    ULONG PCP_Phys_ID:6;
    ULONG PCP_Packet_ID:2;
    ULONG PCP_Gap_Count:6;
    ULONG PCP_Set_Gap_Count:1;
    ULONG PCP_Force_Root:1;
    ULONG PCP_Reserved1:8;
    ULONG PCP_Reserved2:8;
    ULONG PCP_Inverse;
} PHY_CONFIGURATION_PACKET, *PPHY_CONFIGURATION_PACKET;
typedef struct _ASYNC_PACKET {
    USHORT AP_Priority:4;
    USHORT AP_tCode:4;
    USHORT AP_rt:2;
    USHORT AP_tLabel:6;
    NODE_ADDRESS AP_Destination_ID;
    union {
        struct {
            USHORT AP_Reserved:12;
            USHORT AP_Rcode:4;
        } Response;
        USHORT AP_Offset_High;
    } u;
    NODE_ADDRESS AP_Source_ID;
    ULONG AP_Offset_Low;
    union {
        struct {
            USHORT AP_Extended_tCode;
            USHORT AP_Data_Length;
        } Block;
        ULONG AP_Quadlet_Data;
    } u1;
} ASYNC_PACKET, *PASYNC_PACKET;
typedef struct _ISOCH_HEADER {
    ULONG IH_Sy:4;
    ULONG IH_tCode:4;
    ULONG IH_Channel:6;
    ULONG IH_Tag:2;
    ULONG IH_Data_Length:16;
} ISOCH_HEADER, *PISOCH_HEADER;
typedef struct _SPEED_MAP {
    USHORT SPD_Length;
    USHORT SPD_CRC;
    ULONG SPD_Generation;
    UCHAR SPD_Speed_Code[4032];
} SPEED_MAP, *PSPEED_MAP;
typedef struct _TOPOLOGY_MAP {
    USHORT TOP_Length;
    USHORT TOP_CRC;
    ULONG TOP_Generation;
    USHORT TOP_Node_Count;
    USHORT TOP_Self_ID_Count;
    SELF_ID TOP_Self_ID_Array[1];
} TOPOLOGY_MAP, *PTOPOLOGY_MAP;
typedef struct _CONFIG_ROM {
    ULONG CR_Info;
    ULONG CR_Signiture;
    ULONG CR_BusInfoBlockCaps;
    ULONG CR_Node_UniqueID[2];
    ULONG CR_Root_Info;
} CONFIG_ROM, *PCONFIG_ROM;
typedef struct _TEXTUAL_LEAF {
    USHORT TL_CRC;
    USHORT TL_Length;
    ULONG TL_Spec_Id;
    ULONG TL_Language_Id;
    UCHAR TL_Data;
} TEXTUAL_LEAF, *PTEXTUAL_LEAF;
typedef struct _CYCLE_TIME {
    ULONG CL_CycleOffset:12;
    ULONG CL_CycleCount:13;
    ULONG CL_SecondCount:7;
} CYCLE_TIME, *PCYCLE_TIME;
typedef struct _ADDRESS_FIFO {
    SLIST_ENTRY FifoList;
    PMDL FifoMdl;
} ADDRESS_FIFO, *PADDRESS_FIFO;
typedef struct _NOTIFICATION_INFO_W2K {
    PMDL Mdl;
    ULONG ulOffset;
    ULONG nLength;
    ULONG fulNotificationOptions;
    PVOID Context;
    PADDRESS_FIFO Fifo;
    PVOID RequestPacket;
    PMDL ResponseMdl;
    PVOID * ResponsePacket;
    PULONG ResponseLength;
    PKEVENT * ResponseEvent;
} NOTIFICATION_INFO_W2K, *PNOTIFICATION_INFO_W2K;
typedef struct _NOTIFICATION_INFO_WXP {
    PMDL Mdl;
    ULONG ulOffset;
    ULONG nLength;
    ULONG fulNotificationOptions;
    PVOID Context;
    PADDRESS_FIFO Fifo;
    PVOID RequestPacket;
    PMDL ResponseMdl;
    PVOID * ResponsePacket;
    PULONG ResponseLength;
    PKEVENT * ResponseEvent;
    RCODE ResponseCode;
} NOTIFICATION_INFO_WXP, *PNOTIFICATION_INFO_WXP;
typedef NOTIFICATION_INFO_WXP NOTIFICATION_INFO, *PNOTIFICATION_INFO;
typedef struct _CONFIG_ROM_HEADER {
    ULONG Crc:16;
    ULONG CrcLength:8;
    ULONG InfoLength:8;
} CONFIG_ROM_HEADER, *PCONFIG_ROM_HEADER;
typedef struct _BUS_INFO_CAPABILITIES {
    ULONG LinkSpeed:3;
    ULONG Reserved0:1;
    ULONG Generation:4;
    ULONG MaxRom:2;
    ULONG Reserved1:2;
    ULONG MaxRec:4;
    ULONG CycleClockAccuracy:8;
    ULONG Reserved2:3;
    ULONG PowerManagementCapable:1;
    ULONG BusManagerCapable:1;
    ULONG IsochCapable:1;
    ULONG CycleMasterCapable:1;
    ULONG IsochResourceManagerCapable:1;
} BUS_INFO_CAPABILITIES, *PBUS_INFO_CAPABILITIES;
typedef struct _BUS_INFO_IDS {
    ULONG ChipIdHigh:8;
    ULONG NodeVendorId:24;
} BUS_INFO_IDS, *PBUS_INFO_IDS;
typedef struct _DIRECTORY_HEADER {
    ULONG Crc:16;
    ULONG Length:16;
} DIRECTORY_HEADER, *PDIRECTORY_HEADER;
typedef struct _DIRECTORY_ENTRY {
    ULONG Value:24;
    ULONG KeyId:6;
    ULONG KeyType:2;
} DIRECTORY_ENTRY, *PDIRECTORY_ENTRY;
typedef struct _LEAF_FORMAT {
    ULONG SpecifierId:24;
    ULONG DescriptorType:8;
} LEAF_FORMAT, *PLEAF_FORMAT;
typedef struct _TEXTUAL_LEAF_FORMAT {
    ULONG Language:16;
    ULONG CharacterSet:12;
    ULONG Width:4;
} TEXTUAL_LEAF_FORMAT, *PTEXTUAL_LEAF_FORMAT;
typedef union _DIRECTORY_ENTRIES {
    ULONG Quadlet;
    DIRECTORY_HEADER Header;
    DIRECTORY_ENTRY Entry;
    LEAF_FORMAT LeafFormat;
    TEXTUAL_LEAF_FORMAT TextualLeafFormat;
} DIRECTORY_ENTRIES, *PDIRECTORY_ENTRIES;
typedef struct _CROM {
    CONFIG_ROM_HEADER ConfigRomHeader;
    ULONG Signature;
    BUS_INFO_CAPABILITIES BusInfoCaps;
    BUS_INFO_IDS BusInfoIds;
    ULONG ChipIdLow;
    DIRECTORY_HEADER RootDirectoryHeader;
    DIRECTORY_ENTRIES Entries[250];
} CROM, *PCROM;
#include <initguid.h>
DEFINE_GUID( BUS1394_CLASS_GUID, 0x6BDD1FC1, 0x810F, 0x11d0, 0xBE, 0xC7, 0x08, 0x00, 0x2B, 0xE2, 0x09, 0x2F);
                                                FILE_DEVICE_UNKNOWN, \
                                                0x87, \
                                                METHOD_IN_DIRECT, \
                                                FILE_ANY_ACCESS \
                                                )
typedef
_IRQL_requires_(DISPATCH_LEVEL)
void
(*PBUS_NOTIFICATION_ROUTINE) (
    _In_ PNOTIFICATION_INFO NotificationInfo
    );
typedef
_IRQL_requires_(DISPATCH_LEVEL)
void
(*PBUS_ISOCH_DESCRIPTOR_ROUTINE) (
    _In_ PVOID Context1,
    _In_ PVOID Context2
    );
typedef struct _BUS_RESET_DATA {
    PVOID ResetContext;
    ULONG GenerationCount;
    NODE_ADDRESS DeviceNodeId;
    NODE_ADDRESS LocalNodeId;
    UCHAR SpeedToNode;
} BUS_RESET_DATA, *PBUS_RESET_DATA;
typedef
_IRQL_requires_(DISPATCH_LEVEL)
void
(*PBUS_BUS_RESET_NOTIFICATION)(
    _In_ PVOID Context
    );
typedef struct _ISOCH_DESCRIPTOR {
    ULONG fulFlags;
    PMDL Mdl;
    ULONG ulLength;
    ULONG nMaxBytesPerFrame;
    ULONG ulSynch;
    ULONG ulTag;
    CYCLE_TIME CycleTime;
    PBUS_ISOCH_DESCRIPTOR_ROUTINE Callback;
    PVOID Context1;
    PVOID Context2;
    NTSTATUS status;
    ULONG_PTR DeviceReserved[8];
    ULONG_PTR BusReserved[8];
    ULONG_PTR PortReserved[16];
} ISOCH_DESCRIPTOR, *PISOCH_DESCRIPTOR;
typedef struct _IEEE1394_SCATTER_GATHER_HEADER{
    USHORT HeaderLength;
    USHORT DataLength;
    UCHAR HeaderData;
} IEEE1394_SCATTER_GATHER_HEADER, *PIEEE1394_SCATTER_GATHER_HEADER;
typedef struct _IRB_REQ_ASYNC_READ {
    IO_ADDRESS DestinationAddress;
    ULONG nNumberOfBytesToRead;
    ULONG nBlockSize;
    ULONG fulFlags;
    PMDL Mdl;
    ULONG ulGeneration;
    UCHAR chPriority;
    UCHAR nSpeed;
    UCHAR tCode;
    UCHAR Reserved;
    ULONG ElapsedTime;
} IRB_REQ_ASYNC_READ;
typedef struct _IRB_REQ_ASYNC_WRITE {
    IO_ADDRESS DestinationAddress;
    ULONG nNumberOfBytesToWrite;
    ULONG nBlockSize;
    ULONG fulFlags;
    PMDL Mdl;
    ULONG ulGeneration;
    UCHAR chPriority;
    UCHAR nSpeed;
    UCHAR tCode;
    UCHAR Reserved;
    ULONG ElapsedTime;
} IRB_REQ_ASYNC_WRITE;
typedef struct _IRB_REQ_ASYNC_LOCK {
    IO_ADDRESS DestinationAddress;
    ULONG nNumberOfArgBytes;
    ULONG nNumberOfDataBytes;
    ULONG fulTransactionType;
    ULONG fulFlags;
    ULONG Arguments[2];
    ULONG DataValues[2];
    PVOID pBuffer;
    ULONG ulGeneration;
    UCHAR chPriority;
    UCHAR nSpeed;
    UCHAR tCode;
    UCHAR Reserved;
} IRB_REQ_ASYNC_LOCK;
typedef struct _IRB_REQ_ISOCH_ALLOCATE_BANDWIDTH {
    ULONG nMaxBytesPerFrameRequested;
    ULONG fulSpeed;
    HANDLE hBandwidth;
    ULONG BytesPerFrameAvailable;
    ULONG SpeedSelected;
    ULONG nBandwidthUnitsRequired;
} IRB_REQ_ISOCH_ALLOCATE_BANDWIDTH;
typedef struct _IRB_REQ_ISOCH_ALLOCATE_CHANNEL {
    ULONG nRequestedChannel;
    ULONG Channel;
    LARGE_INTEGER ChannelsAvailable;
} IRB_REQ_ISOCH_ALLOCATE_CHANNEL;
typedef struct _IRB_REQ_ISOCH_ALLOCATE_RESOURCES_W2K {
    ULONG fulSpeed;
    ULONG fulFlags;
    ULONG nChannel;
    ULONG nMaxBytesPerFrame;
    ULONG nNumberOfBuffers;
    ULONG nMaxBufferSize;
    ULONG nQuadletsToStrip;
    HANDLE hResource;
} IRB_REQ_ISOCH_ALLOCATE_RESOURCES_W2K;
typedef struct _IRB_REQ_ISOCH_ALLOCATE_RESOURCES_WXP {
    ULONG fulSpeed;
    ULONG fulFlags;
    ULONG nChannel;
    ULONG nMaxBytesPerFrame;
    ULONG nNumberOfBuffers;
    ULONG nMaxBufferSize;
    ULONG nQuadletsToStrip;
    HANDLE hResource;
    ULARGE_INTEGER ChannelMask;
} IRB_REQ_ISOCH_ALLOCATE_RESOURCES_WXP;
typedef IRB_REQ_ISOCH_ALLOCATE_RESOURCES_WXP IRB_REQ_ISOCH_ALLOCATE_RESOURCES;
typedef struct _IRB_REQ_ISOCH_ATTACH_BUFFERS {
    HANDLE hResource;
    ULONG nNumberOfDescriptors;
    PISOCH_DESCRIPTOR pIsochDescriptor;
} IRB_REQ_ISOCH_ATTACH_BUFFERS;
typedef struct _IRB_REQ_ISOCH_DETACH_BUFFERS {
    HANDLE hResource;
    ULONG nNumberOfDescriptors;
    PISOCH_DESCRIPTOR pIsochDescriptor;
} IRB_REQ_ISOCH_DETACH_BUFFERS;
typedef struct _IRB_REQ_ISOCH_FREE_BANDWIDTH {
    HANDLE hBandwidth;
    ULONG nMaxBytesPerFrameRequested;
    ULONG fulSpeed;
    ULONG BytesPerFrameAvailable;
    ULONG SpeedSelected;
    ULONG nBandwidthUnitsRequired;
} IRB_REQ_ISOCH_FREE_BANDWIDTH;
typedef struct _IRB_REQ_ISOCH_FREE_CHANNEL {
    ULONG nChannel;
} IRB_REQ_ISOCH_FREE_CHANNEL;
typedef struct _IRB_REQ_ISOCH_FREE_RESOURCES {
    HANDLE hResource;
} IRB_REQ_ISOCH_FREE_RESOURCES;
typedef struct _IRB_REQ_ISOCH_LISTEN {
    HANDLE hResource;
    ULONG fulFlags;
    CYCLE_TIME StartTime;
} IRB_REQ_ISOCH_LISTEN;
typedef struct _IRB_REQ_ISOCH_QUERY_CURRENT_CYCLE_TIME {
    CYCLE_TIME CycleTime;
} IRB_REQ_ISOCH_QUERY_CURRENT_CYCLE_TIME;
typedef struct _IRB_REQ_ISOCH_QUERY_RESOURCES {
    ULONG fulSpeed;
    ULONG BytesPerFrameAvailable;
    LARGE_INTEGER ChannelsAvailable;
} IRB_REQ_ISOCH_QUERY_RESOURCES;
typedef struct _IRB_REQ_ISOCH_SET_CHANNEL_BANDWIDTH {
    HANDLE hBandwidth;
    ULONG nMaxBytesPerFrame;
    ULONG nBandwidthUnitsRequired;
} IRB_REQ_ISOCH_SET_CHANNEL_BANDWIDTH;
typedef struct _IRB_REQ_ISOCH_STOP {
    HANDLE hResource;
    ULONG fulFlags;
} IRB_REQ_ISOCH_STOP;
typedef struct _IRB_REQ_ISOCH_TALK {
    HANDLE hResource;
    ULONG fulFlags;
    CYCLE_TIME StartTime;
} IRB_REQ_ISOCH_TALK;
typedef struct _IRB_REQ_ISOCH_MODIFY_STREAM_PROPERTIES {
    HANDLE hResource;
    ULARGE_INTEGER ChannelMask;
    ULONG fulSpeed;
} IRB_REQ_ISOCH_MODIFY_STREAM_PROPERTIES;
typedef struct _IRB_REQ_ALLOCATE_ADDRESS_RANGE {
    PMDL Mdl;
    ULONG fulFlags;
    ULONG nLength;
    ULONG MaxSegmentSize;
    ULONG fulAccessType;
    ULONG fulNotificationOptions;
    PVOID Callback;
    PVOID Context;
    ADDRESS_OFFSET Required1394Offset;
    PSLIST_HEADER FifoSListHead;
    PKSPIN_LOCK FifoSpinLock;
    ULONG AddressesReturned;
    PADDRESS_RANGE p1394AddressRange;
    HANDLE hAddressRange;
    PVOID DeviceExtension;
} IRB_REQ_ALLOCATE_ADDRESS_RANGE;
typedef struct _IRB_REQ_FREE_ADDRESS_RANGE {
    ULONG nAddressesToFree;
    PADDRESS_RANGE p1394AddressRange;
    PHANDLE pAddressRange;
    PVOID DeviceExtension;
} IRB_REQ_FREE_ADDRESS_RANGE;
typedef struct _IRB_REQ_GET_LOCAL_HOST_INFORMATION {
    ULONG nLevel;
    PVOID Information;
} IRB_REQ_GET_LOCAL_HOST_INFORMATION;
typedef struct _IRB_REQ_GET_1394_ADDRESS_FROM_DEVICE_OBJECT {
    ULONG fulFlags;
    NODE_ADDRESS NodeAddress;
} IRB_REQ_GET_1394_ADDRESS_FROM_DEVICE_OBJECT;
typedef struct _IRB_REQ_CONTROL {
    ULONG ulIoControlCode;
    PMDL pInBuffer;
    ULONG ulInBufferLength;
    PMDL pOutBuffer;
    ULONG ulOutBufferLength;
    ULONG BytesReturned;
} IRB_REQ_CONTROL;
typedef struct _IRB_REQ_GET_MAX_SPEED_BETWEEN_DEVICES {
    ULONG fulFlags;
    ULONG ulNumberOfDestinations;
    PDEVICE_OBJECT hDestinationDeviceObjects[64];
    ULONG fulSpeed;
} IRB_REQ_GET_MAX_SPEED_BETWEEN_DEVICES;
typedef struct _IRB_REQ_SET_DEVICE_XMIT_PROPERTIES {
    ULONG fulSpeed;
    ULONG fulPriority;
} IRB_REQ_SET_DEVICE_XMIT_PROPERTIES;
typedef struct _IRB_REQ_SET_LOCAL_HOST_PROPERTIES {
    ULONG nLevel;
    PVOID Information;
} IRB_REQ_SET_LOCAL_HOST_PROPERTIES;
typedef struct _IRB_REQ_GET_CONFIGURATION_INFORMATION {
    PCONFIG_ROM ConfigRom;
    ULONG UnitDirectoryBufferSize;
    PVOID UnitDirectory;
    IO_ADDRESS UnitDirectoryLocation;
    ULONG UnitDependentDirectoryBufferSize;
    PVOID UnitDependentDirectory;
    IO_ADDRESS UnitDependentDirectoryLocation;
    ULONG VendorLeafBufferSize;
    PTEXTUAL_LEAF VendorLeaf;
    ULONG ModelLeafBufferSize;
    PTEXTUAL_LEAF ModelLeaf;
} IRB_REQ_GET_CONFIGURATION_INFORMATION;
typedef struct _IRB_REQ_GET_CONFIG_ROM {
    ULONG GenerationCount;
    PCROM ConfigRom;
    ULONG UnitDirectoryIndex;
    ULONG UnitDependentDirectoryIndex;
    ULONG VendorLeafIndex;
    ULONG ModelLeafIndex;
} IRB_REQ_GET_CONFIG_ROM;
typedef struct _IRB_REQ_BUS_RESET {
    ULONG fulFlags;
} IRB_REQ_BUS_RESET;
typedef struct _IRB_REQ_GET_GENERATION_COUNT {
    ULONG GenerationCount;
} IRB_REQ_GET_GENERATION_COUNT;
typedef struct _IRB_REQ_SEND_PHY_CONFIGURATION_PACKET {
    PHY_CONFIGURATION_PACKET PhyConfigurationPacket;
} IRB_REQ_SEND_PHY_CONFIGURATION_PACKET;
typedef struct _IRB_REQ_SEND_PHY_PACKET {
    ULONG Flags;
    ULONG GenerationCount;
    ULARGE_INTEGER PhyPacket;
} IRB_REQ_SEND_PHY_PACKET;
typedef
_IRQL_requires_(DISPATCH_LEVEL)
void
(*PBUS_PHY_PACKET_NOTIFICATION)(
    _In_ PVOID Context,
    _In_ ULONG GenerationCount,
    _In_ ULARGE_INTEGER PhyPacket
    );
typedef struct _IRB_RECEIVE_PHY_PACKETS {
    ULONG Flags;
    PBUS_PHY_PACKET_NOTIFICATION PhyPacketRoutine;
    PVOID PhyPacketContext;
} IRB_REQ_RECEIVE_PHY_PACKETS;
typedef struct _IRB_REQ_GET_SPEED_TOPOLOGY_MAPS {
    PSPEED_MAP SpeedMap;
    PTOPOLOGY_MAP TopologyMap;
} IRB_REQ_GET_SPEED_TOPOLOGY_MAPS;
typedef struct _IRB_REQ_BUS_RESET_NOTIFICATION {
    ULONG fulFlags;
    PBUS_BUS_RESET_NOTIFICATION ResetRoutine;
    PVOID ResetContext;
} IRB_REQ_BUS_RESET_NOTIFICATION;
typedef struct _IRB_REQ_ASYNC_STREAM {
    ULONG nNumberOfBytesToStream;
    ULONG fulFlags;
    PMDL Mdl;
    ULONG ulTag;
    ULONG nChannel;
    ULONG ulSynch;
    ULONG Reserved;
    UCHAR nSpeed;
} IRB_REQ_ASYNC_STREAM;
typedef struct _IRB {
    ULONG FunctionNumber;
    ULONG Flags;
    ULONG_PTR BusReserved[IRB_BUS_RESERVED_SZ];
    ULONG_PTR PortReserved[IRB_PORT_RESERVED_SZ];
    union {
        IRB_REQ_ASYNC_READ AsyncRead;
        IRB_REQ_ASYNC_WRITE AsyncWrite;
        IRB_REQ_ASYNC_LOCK AsyncLock;
        IRB_REQ_ISOCH_ALLOCATE_BANDWIDTH IsochAllocateBandwidth;
        IRB_REQ_ISOCH_ALLOCATE_CHANNEL IsochAllocateChannel;
        IRB_REQ_ISOCH_ALLOCATE_RESOURCES IsochAllocateResources;
        IRB_REQ_ISOCH_ATTACH_BUFFERS IsochAttachBuffers;
        IRB_REQ_ISOCH_DETACH_BUFFERS IsochDetachBuffers;
        IRB_REQ_ISOCH_FREE_BANDWIDTH IsochFreeBandwidth;
        IRB_REQ_ISOCH_FREE_CHANNEL IsochFreeChannel;
        IRB_REQ_ISOCH_FREE_RESOURCES IsochFreeResources;
        IRB_REQ_ISOCH_LISTEN IsochListen;
        IRB_REQ_ISOCH_QUERY_CURRENT_CYCLE_TIME IsochQueryCurrentCycleTime;
        IRB_REQ_ISOCH_QUERY_RESOURCES IsochQueryResources;
        IRB_REQ_ISOCH_SET_CHANNEL_BANDWIDTH IsochSetChannelBandwidth;
        IRB_REQ_ISOCH_STOP IsochStop;
        IRB_REQ_ISOCH_TALK IsochTalk;
        IRB_REQ_ISOCH_MODIFY_STREAM_PROPERTIES IsochModifyStreamProperties;
        IRB_REQ_ALLOCATE_ADDRESS_RANGE AllocateAddressRange;
        IRB_REQ_FREE_ADDRESS_RANGE FreeAddressRange;
        IRB_REQ_GET_LOCAL_HOST_INFORMATION GetLocalHostInformation;
        IRB_REQ_GET_1394_ADDRESS_FROM_DEVICE_OBJECT Get1394AddressFromDeviceObject;
        IRB_REQ_CONTROL Control;
        IRB_REQ_GET_MAX_SPEED_BETWEEN_DEVICES GetMaxSpeedBetweenDevices;
        IRB_REQ_SET_DEVICE_XMIT_PROPERTIES SetDeviceXmitProperties;
        IRB_REQ_SET_LOCAL_HOST_PROPERTIES SetLocalHostProperties;
        IRB_REQ_GET_CONFIGURATION_INFORMATION GetConfigurationInformation;
        IRB_REQ_GET_CONFIG_ROM GetConfigRom;
        IRB_REQ_BUS_RESET BusReset;
        IRB_REQ_GET_GENERATION_COUNT GetGenerationCount;
        IRB_REQ_SEND_PHY_CONFIGURATION_PACKET SendPhyConfigurationPacket;
        IRB_REQ_SEND_PHY_PACKET SendPhyPacket;
        IRB_REQ_RECEIVE_PHY_PACKETS ReceivePhyPackets;
        IRB_REQ_GET_SPEED_TOPOLOGY_MAPS GetSpeedTopologyMaps;
        IRB_REQ_BUS_RESET_NOTIFICATION BusResetNotification;
        IRB_REQ_ASYNC_STREAM AsyncStream;
    } u;
} IRB, *PIRB;
typedef struct _SET_LOCAL_HOST_PROPS1 {
    ULONG fulFlags;
} SET_LOCAL_HOST_PROPS1, *PSET_LOCAL_HOST_PROPS1;
typedef struct _SET_LOCAL_HOST_PROPS2 {
    ULONG GapCountLowerBound;
} SET_LOCAL_HOST_PROPS2, *PSET_LOCAL_HOST_PROPS2;
typedef struct _SET_LOCAL_HOST_PROPS3 {
    ULONG fulFlags;
    HANDLE hCromData;
    ULONG nLength;
    PMDL Mdl;
} SET_LOCAL_HOST_PROPS3, *PSET_LOCAL_HOST_PROPS3;
typedef struct _SET_LOCAL_HOST_PROPS4 {
    ULONG MaxAsyncPayloadRequested;
    ULONG MaxAsyncPayloadResult;
} SET_LOCAL_HOST_PROPS4, *PSET_LOCAL_HOST_PROPS4;
typedef struct _SET_LOCAL_HOST_PROPS5 {
    ULONG DebugAddress;
} SET_LOCAL_HOST_PROPS5, *PSET_LOCAL_HOST_PROPS5;
typedef struct _GET_LOCAL_HOST_INFO1 {
    LARGE_INTEGER UniqueId;
} GET_LOCAL_HOST_INFO1, *PGET_LOCAL_HOST_INFO1;
typedef struct _GET_LOCAL_HOST_INFO2 {
    ULONG HostCapabilities;
    ULONG MaxAsyncReadRequest;
    ULONG MaxAsyncWriteRequest;
} GET_LOCAL_HOST_INFO2, *PGET_LOCAL_HOST_INFO2;
typedef struct _GET_LOCAL_HOST_INFO3 {
    ULONG deciWattsSupplied;
    ULONG Voltage;
} GET_LOCAL_HOST_INFO3, *PGET_LOCAL_HOST_INFO3;
typedef
_Must_inspect_result_
_IRQL_requires_(DISPATCH_LEVEL)
NTSTATUS
(*PPORT_PHYS_ADDR_ROUTINE) (
    _In_ PVOID Context,
    _Inout_ PIRB Irb
    );
typedef
_IRQL_requires_(DISPATCH_LEVEL)
void
(*PPORT_ALLOC_COMPLETE_NOTIFICATION) (
    _In_ PVOID Context
    );
typedef struct _GET_LOCAL_HOST_INFO4 {
    PPORT_PHYS_ADDR_ROUTINE PhysAddrMappingRoutine;
    PVOID Context;
} GET_LOCAL_HOST_INFO4, *PGET_LOCAL_HOST_INFO4;
typedef struct _GET_LOCAL_HOST_INFO5 {
    PVOID ConfigRom;
    ULONG ConfigRomLength;
} GET_LOCAL_HOST_INFO5, *PGET_LOCAL_HOST_INFO5;
typedef struct _GET_LOCAL_HOST_INFO6 {
    ADDRESS_OFFSET CsrBaseAddress;
    ULONG CsrDataLength;
    PVOID CsrDataBuffer;
} GET_LOCAL_HOST_INFO6, *PGET_LOCAL_HOST_INFO6;
typedef struct _GET_LOCAL_HOST_INFO7_W2K {
    ULONG HostDmaCapabilities;
    ULARGE_INTEGER MaxDmaBufferSize;
    ULONG MaxOutstandingXmitRequests;
    ULONG MaxOutstandingXmitResponses;
} GET_LOCAL_HOST_INFO7_W2K, *PGET_LOCAL_HOST_INFO7_W2K;
typedef struct _GET_LOCAL_HOST_INFO7_WXP {
    ULONG HostDmaCapabilities;
    ULARGE_INTEGER MaxDmaBufferSize;
} GET_LOCAL_HOST_INFO7_WXP, *PGET_LOCAL_HOST_INFO7_WXP;
typedef GET_LOCAL_HOST_INFO7_WXP GET_LOCAL_HOST_INFO7, *PGET_LOCAL_HOST_INFO7;
typedef struct _GET_LOCAL_HOST_INFO8 {
    USHORT MajorVersion;
    USHORT MinorVersion;
} GET_LOCAL_HOST_INFO8, *PGET_LOCAL_HOST_INFO8;
typedef struct _NETWORK_CHANNELS {
    ULONG NC_Channel:6;
    ULONG NC_Reserved:18;
    ULONG NC_Npm_ID:6;
    ULONG NC_Valid:1;
    ULONG NC_One:1;
} NETWORK_CHANNELSR, *PNETWORK_CHANNELS;
                                                FILE_DEVICE_UNKNOWN, \
                                                0x88, \
                                                METHOD_BUFFERED, \
                                                FILE_ANY_ACCESS \
                                                )
                                                FILE_DEVICE_UNKNOWN, \
                                                0x89, \
                                                METHOD_BUFFERED, \
                                                FILE_ANY_ACCESS \
                                                )
typedef struct _NODE_DEVICE_EXTENSION {
    ULONG Tag;
    BOOLEAN bConfigurationInformationValid;
    PCONFIG_ROM ConfigRom;
    ULONG UnitDirectoryLength;
    PVOID UnitDirectory;
    IO_ADDRESS UnitDirectoryLocation;
    ULONG UnitDependentDirectoryLength;
    PVOID UnitDependentDirectory;
    IO_ADDRESS UnitDependentDirectoryLocation;
    ULONG VendorLeafLength;
    PTEXTUAL_LEAF VendorLeaf;
    ULONG ModelLeafLength;
    PTEXTUAL_LEAF ModelLeaf;
    NODE_ADDRESS NodeAddress;
    UCHAR Speed;
    UCHAR Priority;
    PIRP Irp;
    PDEVICE_OBJECT DeviceObject;
    PDEVICE_OBJECT PortDeviceObject;
    PVOID DeviceInformation;
    PBUS_BUS_RESET_NOTIFICATION ResetRoutine;
    PVOID ResetContext;
} NODE_DEVICE_EXTENSION, *PNODE_DEVICE_EXTENSION;
typedef struct _BANDWIDTH_ALLOCATION {
    LIST_ENTRY AllocationList;
    ULONG Tag;
    ULONG OwnedUnits;
    ULONG fulSpeed;
    BOOLEAN bRemoteAllocation;
    ULONG Generation;
    PNODE_DEVICE_EXTENSION DeviceExtension;
} BANDWIDTH_ALLOCATION, *PBANDWIDTH_ALLOCATION;
}
