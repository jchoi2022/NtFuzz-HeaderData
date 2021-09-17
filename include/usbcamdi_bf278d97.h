#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _pipe_config_descriptor {
    CHAR StreamAssociation ;
    UCHAR PipeConfigFlags;
} USBCAMD_Pipe_Config_Descriptor, *PUSBCAMD_Pipe_Config_Descriptor;
typedef enum {
    USBCAMD_CamControlFlag_NoVideoRawProcessing = 0x0001,
    USBCAMD_CamControlFlag_NoStillRawProcessing = 0x0002,
    USBCAMD_CamControlFlag_AssociatedFormat = 0x0004,
    USBCAMD_CamControlFlag_EnableDeviceEvents = 0x0008,
} USBCAMD_CamControlFlags;
typedef _Must_inspect_result_
NTSTATUS
(*PCOMMAND_COMPLETE_FUNCTION)(
    _In_ PVOID DeviceContext,
    _Inout_ PVOID CommandContext,
    _In_ NTSTATUS NtStatus
    );
typedef
VOID
(*PSTREAM_RECEIVE_PACKET) (
    _In_ PVOID Srb,
    _In_ PVOID DeviceContext,
    _In_ PBOOLEAN Completed
    );
typedef _Must_inspect_result_
NTSTATUS
(*PCAM_INITIALIZE_ROUTINE)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext
    );
typedef
NTSTATUS _Must_inspect_result_
(*PCAM_CONFIGURE_ROUTINE)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ PUSBD_INTERFACE_INFORMATION Interface,
    _In_ PUSB_CONFIGURATION_DESCRIPTOR ConfigurationDescriptor,
    _In_ PLONG DataPipeIndex,
    _In_ PLONG SyncPipeIndex
    );
typedef
NTSTATUS _Must_inspect_result_
(*PCAM_CONFIGURE_ROUTINE_EX)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ PUSBD_INTERFACE_INFORMATION Interface,
    _In_ PUSB_CONFIGURATION_DESCRIPTOR ConfigurationDescriptor,
    _In_ ULONG PipeConfigListSize,
    _In_ PUSBCAMD_Pipe_Config_Descriptor PipeConfig,
    _In_ PUSB_DEVICE_DESCRIPTOR DeviceDescriptor
    );
typedef
NTSTATUS _Must_inspect_result_
(*PCAM_START_CAPTURE_ROUTINE)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext
    );
typedef
NTSTATUS _Must_inspect_result_
(*PCAM_START_CAPTURE_ROUTINE_EX)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ ULONG StreamNumber
    );
typedef
NTSTATUS _Must_inspect_result_
(*PCAM_ALLOCATE_BW_ROUTINE)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ PULONG RawFrameLength,
    _In_ PVOID Format
    );
typedef
NTSTATUS _Must_inspect_result_
(*PCAM_ALLOCATE_BW_ROUTINE_EX)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ PULONG RawFrameLength,
    _In_ PVOID Format,
    _In_ ULONG StreamNumber
    );
typedef
NTSTATUS _Must_inspect_result_
(*PCAM_FREE_BW_ROUTINE)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext
    );
typedef
NTSTATUS _Must_inspect_result_
(*PCAM_FREE_BW_ROUTINE_EX)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ ULONG STreamNumber
    );
typedef
VOID
(*PADAPTER_RECEIVE_PACKET_ROUTINE)(
    _Inout_ PHW_STREAM_REQUEST_BLOCK Srb
    );
typedef
NTSTATUS _Must_inspect_result_
(*PCAM_STOP_CAPTURE_ROUTINE)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext
    );
typedef
NTSTATUS _Must_inspect_result_
(*PCAM_STOP_CAPTURE_ROUTINE_EX)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ ULONG StreamNumber
    );
typedef
ULONG
(*PCAM_PROCESS_PACKET_ROUTINE) (
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ PVOID CurrentFrameContext,
    _In_opt_ PUSBD_ISO_PACKET_DESCRIPTOR SyncPacket,
    _In_opt_ PVOID SyncBuffer,
    _In_opt_ PUSBD_ISO_PACKET_DESCRIPTOR DataPacket,
    _Inout_ PVOID DataBuffer,
    _Out_ PBOOLEAN FrameComplete,
    _Out_ PBOOLEAN NextFrameIsStill
    );
typedef
ULONG
(*PCAM_PROCESS_PACKET_ROUTINE_EX) (
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ PVOID CurrentFrameContext,
    _In_opt_ PUSBD_ISO_PACKET_DESCRIPTOR SyncPacket,
    _In_opt_ PVOID SyncBuffer,
    _In_opt_ PUSBD_ISO_PACKET_DESCRIPTOR DataPacket,
    _Inout_ PVOID DataBuffer,
    _Out_ PBOOLEAN FrameComplete,
    _Out_ PULONG PacketFlag,
    _Out_ PULONG ValidDataOffset
    );
typedef
VOID
(*PCAM_NEW_FRAME_ROUTINE) (
    _In_ PVOID DeviceContext,
    _In_ PVOID FrameContext
    );
typedef
VOID
(*PCAM_NEW_FRAME_ROUTINE_EX) (
    _In_ PVOID DeviceContext,
    _In_ PVOID FrameContext,
    _In_ ULONG StreamNumber,
    _Out_ PULONG FrameLength
    );
typedef _Must_inspect_result_
NTSTATUS
(*PCAM_PROCESS_RAW_FRAME_ROUTINE) (
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ PVOID FrameContext,
    _In_ PVOID FrameBuffer,
    _In_ ULONG FrameLength,
    _Out_ PVOID RawFrameBuffer,
    _In_ ULONG RawFrameLength,
    _In_ ULONG NumberOfPackets,
    _Out_ PULONG BytesReturned
    );
typedef _Must_inspect_result_
NTSTATUS
(*PCAM_PROCESS_RAW_FRAME_ROUTINE_EX) (
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ PVOID FrameContext,
    _In_ PVOID FrameBuffer,
    _In_ ULONG FrameLength,
    _Out_ PVOID RawFrameBuffer,
    _In_ ULONG RawFrameLength,
    _In_ ULONG NumberOfPackets,
    _Out_ PULONG BytesReturned,
    _In_ ULONG ActualRawFrameLength,
    _In_ ULONG StreamNumber
    );
typedef _Must_inspect_result_
NTSTATUS
(*PCAM_STATE_ROUTINE) (
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext
    );
VOID
USBCAMD_Debug_LogEntry(
    _In_ CHAR *Name,
    _In_ ULONG Info1,
    _In_ ULONG Info2,
    _In_ ULONG Info3
    );
    USBCAMD_Debug_LogEntry(sig, (ULONG)info1, (ULONG)info2, (ULONG)info3)
typedef struct _USBCAMD_DEVICE_DATA {
    ULONG Sig;
    PCAM_INITIALIZE_ROUTINE CamInitialize;
    PCAM_INITIALIZE_ROUTINE CamUnInitialize;
    PCAM_PROCESS_PACKET_ROUTINE CamProcessUSBPacket;
    PCAM_NEW_FRAME_ROUTINE CamNewVideoFrame;
    PCAM_PROCESS_RAW_FRAME_ROUTINE CamProcessRawVideoFrame;
    PCAM_START_CAPTURE_ROUTINE CamStartCapture;
    PCAM_STOP_CAPTURE_ROUTINE CamStopCapture;
    PCAM_CONFIGURE_ROUTINE CamConfigure;
    PCAM_STATE_ROUTINE CamSaveState;
    PCAM_STATE_ROUTINE CamRestoreState;
    PCAM_ALLOCATE_BW_ROUTINE CamAllocateBandwidth;
    PCAM_FREE_BW_ROUTINE CamFreeBandwidth;
} USBCAMD_DEVICE_DATA, *PUSBCAMD_DEVICE_DATA;
typedef struct _USBCAMD_DEVICE_DATA2 {
    ULONG Sig;
    PCAM_INITIALIZE_ROUTINE CamInitialize;
    PCAM_INITIALIZE_ROUTINE CamUnInitialize;
    PCAM_PROCESS_PACKET_ROUTINE_EX CamProcessUSBPacketEx;
    PCAM_NEW_FRAME_ROUTINE_EX CamNewVideoFrameEx;
    PCAM_PROCESS_RAW_FRAME_ROUTINE_EX CamProcessRawVideoFrameEx;
    PCAM_START_CAPTURE_ROUTINE_EX CamStartCaptureEx;
    PCAM_STOP_CAPTURE_ROUTINE_EX CamStopCaptureEx;
    PCAM_CONFIGURE_ROUTINE_EX CamConfigureEx;
    PCAM_STATE_ROUTINE CamSaveState;
    PCAM_STATE_ROUTINE CamRestoreState;
    PCAM_ALLOCATE_BW_ROUTINE_EX CamAllocateBandwidthEx;
    PCAM_FREE_BW_ROUTINE_EX CamFreeBandwidthEx;
} USBCAMD_DEVICE_DATA2, *PUSBCAMD_DEVICE_DATA2;
    ULONG
    USBCAMD_DriverEntry(
    _In_ PVOID Context1,
    _In_ PVOID Context2,
    _In_ ULONG DeviceContextSize,
    _In_ ULONG FrameCOntextSize,
    _In_ PADAPTER_RECEIVE_PACKET_ROUTINE ReceivePacket
    );
PVOID
USBCAMD_AdapterReceivePacket(
    _In_ PHW_STREAM_REQUEST_BLOCK Srb,
    _In_ PUSBCAMD_DEVICE_DATA DeviceData,
    _In_ PDEVICE_OBJECT *DeviceObject,
    _In_ BOOLEAN NeedsCompletion
    );
_Must_inspect_result_ NTSTATUS
USBCAMD_ControlVendorCommand(
    _In_ PVOID DeviceContext,
    _In_ UCHAR Request,
    _In_ USHORT Value,
    _In_ USHORT Index,
    _Inout_updates_bytes_opt_( *BufferLength )PVOID Buffer,
    _Inout_ PULONG BufferLength,
    _In_ BOOLEAN GetData,
    _In_opt_ PCOMMAND_COMPLETE_FUNCTION CommandComplete,
    _In_opt_ PVOID CommandContext
    );
_Must_inspect_result_ NTSTATUS
USBCAMD_SelectAlternateInterface(
    _In_ PVOID DeviceContext,
    _Inout_ PUSBD_INTERFACE_INFORMATION RequestInterface
    );
_Must_inspect_result_ NTSTATUS
USBCAMD_GetRegistryKeyValue (
    _In_ HANDLE Handle,
    _In_reads_bytes_(KeyNameStringLength) PWCHAR KeyNameString,
    _In_ ULONG KeyNameStringLength,
    _In_reads_bytes_(DataLength) PVOID Data,
    _In_ ULONG DataLength
    );
ULONG
USBCAMD_InitializeNewInterface(
    _In_ PVOID DeviceContext,
    _In_ PVOID DeviceData,
    _In_ ULONG Version,
    _In_ ULONG CamControlFlag
    );
DEFINE_GUID( GUID_USBCAMD_INTERFACE ,
     0x2bcb75c0, 0xb27f, 0x11d1, 0xba, 0x41, 0x0, 0xa0, 0xc9, 0xd, 0x2b, 0x5);
typedef _Must_inspect_result_
NTSTATUS
(*PFNUSBCAMD_SetVideoFormat)(
    _In_ PVOID DeviceContext,
    _In_ PHW_STREAM_REQUEST_BLOCK pSrb
    );
typedef _Must_inspect_result_
NTSTATUS
(*PFNUSBCAMD_WaitOnDeviceEvent)(
    _In_ PVOID DeviceContext,
    _In_ ULONG PipeIndex,
    _In_reads_bytes_(BufferLength) PVOID Buffer,
    _In_ ULONG BufferLength,
    _In_ PCOMMAND_COMPLETE_FUNCTION EventComplete,
    _In_ PVOID EventContext,
    _In_ BOOLEAN LoopBack
    );
typedef _Must_inspect_result_
NTSTATUS
(*PFNUSBCAMD_CancelBulkReadWrite)(
    _In_ PVOID DeviceContext,
    _In_ ULONG PipeIndex
    );
typedef _Must_inspect_result_
NTSTATUS
(*PFNUSBCAMD_SetIsoPipeState)(
    _In_ PVOID DeviceContext,
    _In_ ULONG PipeStateFlags
    );
typedef _Must_inspect_result_
NTSTATUS
(*PFNUSBCAMD_BulkReadWrite)(
    _In_ PVOID DeviceContext,
    _In_ USHORT PipeIndex,
    _In_reads_bytes_(BufferLength) PVOID Buffer,
    _In_ ULONG BufferLength,
    _In_ PCOMMAND_COMPLETE_FUNCTION CommandComplete,
    _In_ PVOID CommandContext
    );
typedef struct {
    INTERFACE Interface;
    PFNUSBCAMD_WaitOnDeviceEvent USBCAMD_WaitOnDeviceEvent;
    PFNUSBCAMD_BulkReadWrite USBCAMD_BulkReadWrite;
    PFNUSBCAMD_SetVideoFormat USBCAMD_SetVideoFormat;
    PFNUSBCAMD_SetIsoPipeState USBCAMD_SetIsoPipeState;
    PFNUSBCAMD_CancelBulkReadWrite USBCAMD_CancelBulkReadWrite;
} USBCAMD_INTERFACE, *PUSBCAMD_INTERFACE;
#endif
#pragma endregion
