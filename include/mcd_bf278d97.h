#pragma warning(disable:4201)
#pragma warning(disable:4214)
#include "scsi.h"
#include "ntddchgr.h"
#include <classpnp.h>
#include <wmidata.h>
#include <wmistr.h>
typedef
NTSTATUS
(*CHANGER_COMMAND_ROUTINE)(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
typedef
ULONG
(*CHANGER_EXTENSION_SIZE)(
    _In_ VOID
    );
typedef
NTSTATUS
(*CHANGER_INITIALIZE)(
    _In_ PDEVICE_OBJECT DeviceObject
    );
typedef
NTSTATUS
(*CHANGER_PERFORM_DIAGNOSTICS)(
    _In_ PDEVICE_OBJECT DeviceObject,
    _Out_ PWMI_CHANGER_PROBLEM_DEVICE_ERROR changerDeviceError
    );
typedef
VOID
(*CHANGER_ERROR_ROUTINE)(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _In_ NTSTATUS *Status,
    _In_ BOOLEAN *Retry
    );
typedef struct _MCD_INIT_DATA {
    ULONG InitDataSize;
    CHANGER_EXTENSION_SIZE ChangerAdditionalExtensionSize;
    CHANGER_INITIALIZE ChangerInitialize;
    CHANGER_ERROR_ROUTINE ChangerError;
    CHANGER_PERFORM_DIAGNOSTICS ChangerPerformDiagnostics;
    CHANGER_COMMAND_ROUTINE ChangerGetParameters;
    CHANGER_COMMAND_ROUTINE ChangerGetStatus;
    CHANGER_COMMAND_ROUTINE ChangerGetProductData;
    CHANGER_COMMAND_ROUTINE ChangerSetAccess;
    CHANGER_COMMAND_ROUTINE ChangerGetElementStatus;
    CHANGER_COMMAND_ROUTINE ChangerInitializeElementStatus;
    CHANGER_COMMAND_ROUTINE ChangerSetPosition;
    CHANGER_COMMAND_ROUTINE ChangerExchangeMedium;
    CHANGER_COMMAND_ROUTINE ChangerMoveMedium;
    CHANGER_COMMAND_ROUTINE ChangerReinitializeUnit;
    CHANGER_COMMAND_ROUTINE ChangerQueryVolumeTags;
} MCD_INIT_DATA, *PMCD_INIT_DATA;
typedef struct _MODE_ELEMENT_ADDRESS_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved1 : 1;
    UCHAR PS : 1;
    UCHAR PageLength;
    UCHAR MediumTransportElementAddress[2];
    UCHAR NumberTransportElements[2];
    UCHAR FirstStorageElementAddress[2];
    UCHAR NumberStorageElements[2];
    UCHAR FirstIEPortElementAddress[2];
    UCHAR NumberIEPortElements[2];
    UCHAR FirstDataXFerElementAddress[2];
    UCHAR NumberDataXFerElements[2];
    UCHAR Reserved2[2];
} MODE_ELEMENT_ADDRESS_PAGE, *PMODE_ELEMENT_ADDRESS_PAGE;
typedef struct _MODE_TRANSPORT_GEOMETRY_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved1 : 1;
    UCHAR PS : 1;
    UCHAR PageLength;
    UCHAR Flip : 1;
    UCHAR Reserved2: 7;
    UCHAR TransportElementNumber;
} MODE_TRANSPORT_GEOMETRY_PAGE, *PMODE_TRANSPORT_GEOMETRY_PAGE;
typedef struct _MODE_DEVICE_CAPABILITIES_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved1 : 1;
    UCHAR PS : 1;
    UCHAR PageLength;
    UCHAR MediumTransport : 1;
    UCHAR StorageLocation : 1;
    UCHAR IEPort : 1;
    UCHAR DataXFer : 1;
    UCHAR Reserved2 : 4;
    UCHAR Reserved3;
    UCHAR MTtoMT : 1;
    UCHAR MTtoST : 1;
    UCHAR MTtoIE : 1;
    UCHAR MTtoDT : 1;
    UCHAR Reserved4 : 4;
    UCHAR STtoMT : 1;
    UCHAR STtoST : 1;
    UCHAR STtoIE : 1;
    UCHAR STtoDT : 1;
    UCHAR Reserved5 : 4;
    UCHAR IEtoMT : 1;
    UCHAR IEtoST : 1;
    UCHAR IEtoIE : 1;
    UCHAR IEtoDT : 1;
    UCHAR Reserved6 : 4;
    UCHAR DTtoMT : 1;
    UCHAR DTtoST : 1;
    UCHAR DTtoIE : 1;
    UCHAR DTtoDT : 1;
    UCHAR Reserved7 : 4;
    UCHAR Reserved8[4];
    UCHAR XMTtoMT : 1;
    UCHAR XMTtoST : 1;
    UCHAR XMTtoIE : 1;
    UCHAR XMTtoDT : 1;
    UCHAR Reserved9 : 4;
    UCHAR XSTtoMT : 1;
    UCHAR XSTtoST : 1;
    UCHAR XSTtoIE : 1;
    UCHAR XSTtoDT : 1;
    UCHAR Reserved10 : 4;
    UCHAR XIEtoMT : 1;
    UCHAR XIEtoST : 1;
    UCHAR XIEtoIE : 1;
    UCHAR XIEtoDT : 1;
    UCHAR Reserved11 : 4;
    UCHAR XDTtoMT : 1;
    UCHAR XDTtoST : 1;
    UCHAR XDTtoIE : 1;
    UCHAR XDTtoDT : 1;
    UCHAR Reserved12 : 4;
} MODE_DEVICE_CAPABILITIES_PAGE, *PMODE_DEVICE_CAPABILITIES_PAGE;
typedef struct _ELEMENT_STATUS_HEADER {
    UCHAR FirstElementAddress[2];
    UCHAR NumberOfElements[2];
    UCHAR Reserved1;
    UCHAR ReportByteCount[3];
} ELEMENT_STATUS_HEADER, *PELEMENT_STATUS_HEADER;
typedef struct _ELEMENT_STATUS_PAGE {
    UCHAR ElementType;
    UCHAR Reserved1 : 6;
    UCHAR AVolTag : 1;
    UCHAR PVolTag : 1;
    UCHAR ElementDescriptorLength[2];
    UCHAR Reserved2;
    UCHAR DescriptorByteCount[3];
} ELEMENT_STATUS_PAGE, *PELEMENT_STATUS_PAGE;
typedef struct _ELEMENT_DESCRIPTOR {
        UCHAR ElementAddress[2];
        UCHAR Full : 1;
        UCHAR Reserved1 : 1;
        UCHAR Exception : 1;
        UCHAR Accessible : 1;
        UCHAR Reserved2 : 4;
        UCHAR Reserved3;
        UCHAR AdditionalSenseCode;
        UCHAR AddSenseCodeQualifier;
        UCHAR Lun : 3;
        UCHAR Reserved4 : 1;
        UCHAR LunValid : 1;
        UCHAR IdValid : 1;
        UCHAR Reserved5 : 1;
        UCHAR NotThisBus : 1;
        UCHAR BusAddress;
        UCHAR Reserved6;
        UCHAR Reserved7 : 6;
        UCHAR Invert : 1;
        UCHAR SValid : 1;
        UCHAR SourceStorageElementAddress[2];
} ELEMENT_DESCRIPTOR, *PELEMENT_DESCRIPTOR;
NTSTATUS
DriverEntry(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PUNICODE_STRING RegistryPath
    );
PVOID
ChangerClassAllocatePool(
    _In_ POOL_TYPE PoolType,
    _In_ ULONG NumberOfBytes
    );
VOID
ChangerClassFreePool(
    _In_ PVOID PoolToFree
    );
ULONG
ChangerAdditionalExtensionSize(
    VOID
    );
NTSTATUS
ChangerInitialize(
    _In_ PDEVICE_OBJECT DeviceObject
    );
VOID
ChangerError(
    PDEVICE_OBJECT DeviceObject,
    PSCSI_REQUEST_BLOCK Srb,
    NTSTATUS *Status,
    BOOLEAN *Retry
    );
NTSTATUS
ChangerGetParameters(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
NTSTATUS
ChangerGetStatus(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
NTSTATUS
ChangerGetProductData(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
NTSTATUS
ChangerSetAccess(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
NTSTATUS
ChangerGetElementStatus(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
NTSTATUS
ChangerInitializeElementStatus(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
NTSTATUS
ChangerSetPosition(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
NTSTATUS
ChangerExchangeMedium(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
NTSTATUS
ChangerMoveMedium(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
NTSTATUS
ChangerReinitializeUnit(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
NTSTATUS
ChangerQueryVolumeTags(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
NTSTATUS
ChangerClassInitialize(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PUNICODE_STRING RegistryPath,
    _In_ PMCD_INIT_DATA ChangerInitData
    );
NTSTATUS
ChangerPerformDiagnostics(
    _In_ PDEVICE_OBJECT DeviceObject,
    _Out_ PWMI_CHANGER_PROBLEM_DEVICE_ERROR changerDeviceError
    );
NTSTATUS
ChangerClassSendSrbSynchronous(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _In_ PVOID Buffer,
    _In_ ULONG BufferSize,
    _In_ BOOLEAN WriteToDevice
    );
VOID
ChangerClassDebugPrint(
    ULONG DebugPrintLevel,
    PCCHAR DebugMessage,
    ...
    );
