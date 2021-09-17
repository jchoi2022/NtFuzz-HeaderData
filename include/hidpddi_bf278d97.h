#include "hidusage.h"
#include "hidpi.h"
typedef struct _HIDP_COLLECTION_DESC
{
   USAGE UsagePage;
   USAGE Usage;
   UCHAR CollectionNumber;
   UCHAR Reserved [15];
   USHORT InputLength;
   USHORT OutputLength;
   USHORT FeatureLength;
   USHORT PreparsedDataLength;
   PHIDP_PREPARSED_DATA PreparsedData;
} HIDP_COLLECTION_DESC, *PHIDP_COLLECTION_DESC;
typedef struct _HIDP_REPORT_IDS
{
   UCHAR ReportID;
   UCHAR CollectionNumber;
   USHORT InputLength;
   USHORT OutputLength;
   USHORT FeatureLength;
} HIDP_REPORT_IDS, *PHIDP_REPORT_IDS;
typedef struct _HIDP_GETCOLDESC_DBG
{
   ULONG BreakOffset;
   ULONG ErrorCode;
   ULONG Args[6];
} HIDP_GETCOLDESC_DBG, *PHIDP_GETCOLDESC_DBG;
typedef struct _HIDP_DEVICE_DESC
{
   PHIDP_COLLECTION_DESC CollectionDesc;
   ULONG CollectionDescLength;
   PHIDP_REPORT_IDS ReportIDs;
   ULONG ReportIDsLength;
   HIDP_GETCOLDESC_DBG Dbg;
} HIDP_DEVICE_DESC, *PHIDP_DEVICE_DESC;
_Must_inspect_result_
_At_(DeviceDescription->CollectionDesc, _When_(return==0, __drv_allocatesMem(Mem)))
_At_(DeviceDescription->ReportIDs, _When_(return==0, __drv_allocatesMem(Mem)))
NTSTATUS
HidP_GetCollectionDescription (
   _In_reads_bytes_(DescLength) PHIDP_REPORT_DESCRIPTOR ReportDesc,
   _In_ ULONG DescLength,
   _In_ POOL_TYPE PoolType,
   _Out_ PHIDP_DEVICE_DESC DeviceDescription
   );
_At_(DeviceDescription->CollectionDesc, __drv_freesMem(Mem))
_At_(DeviceDescription->ReportIDs, __drv_freesMem(Mem))
VOID
HidP_FreeCollectionDescription (
    _In_ PHIDP_DEVICE_DESC DeviceDescription
    );
_Must_inspect_result_
NTSTATUS
HidP_SysPowerEvent (
    _In_reads_bytes_(HidPacketLength) PCHAR HidPacket,
    _In_ USHORT HidPacketLength,
    _In_ PHIDP_PREPARSED_DATA Ppd,
    _Out_ PULONG OutputBuffer
    );
_Must_inspect_result_
NTSTATUS
HidP_SysPowerCaps (
    _In_ PHIDP_PREPARSED_DATA Ppd,
    _Out_ PULONG OutputBuffer
    );
