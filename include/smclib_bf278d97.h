extern "C" {
#include "smcnt.h"
#include "winsmcrd.h"
typedef LONG NTSTATUS;
typedef UCHAR BOOLEAN;
#include <ntstatus.h>
    ((DeviceType) << 16) | ((Access) << 14) | ((Function) << 2) | (Method) \
)
typedef union _LENGTH {
 struct {
  ULONG l0;
 } l;
 struct {
  UCHAR b0;
  UCHAR b1;
  UCHAR b2;
  UCHAR b3;
 } b;
} LENGTH, *PLENGTH;
typedef struct _T0_DATA {
 ULONG Lc;
 ULONG Le;
} T0_DATA, *PT0_DATA;
typedef struct _T1_DATA {
 UCHAR IFSC;
    UCHAR IFSD;
 ULONG BytesReceived;
 ULONG BytesSent;
 ULONG BytesToSend;
 UCHAR LastError;
 BOOLEAN MoreData;
 UCHAR NAD;
 ULONG OriginalState;
 UCHAR Resend;
 UCHAR Resynch;
 UCHAR RSN;
 UCHAR SSN;
 ULONG State;
 UCHAR Wtx;
    PUCHAR ReplyData;
    BOOLEAN WaitForReply;
    UCHAR InfBytesSent;
} T1_DATA, *PT1_DATA;
typedef struct _T1_BLOCK_FRAME {
    UCHAR Nad;
    UCHAR Pcb;
    UCHAR Len;
    PUCHAR Inf;
} T1_BLOCK_FRAME, *PT1_BLOCK_FRAME;
typedef struct _SMARTCARD_REQUEST {
 PUCHAR Buffer;
 ULONG BufferSize;
 ULONG BufferLength;
} SMARTCARD_REQUEST, *PSMARTCARD_REQUEST;
typedef struct _SMARTCARD_REPLY {
 PUCHAR Buffer;
 ULONG BufferSize;
 ULONG BufferLength;
} SMARTCARD_REPLY, *PSMARTCARD_REPLY;
typedef struct _CLOCK_RATE_CONVERSION {
 const ULONG F;
 const ULONG fs;
} CLOCK_RATE_CONVERSION, *PCLOCK_RATE_CONVERSION;
typedef struct _BIT_RATE_ADJUSTMENT {
 const ULONG DNumerator;
 const ULONG DDivisor;
} BIT_RATE_ADJUSTMENT, *PBIT_RATE_ADJUSTMENT;
static CLOCK_RATE_CONVERSION ClockRateConversion[] = {
  { 372, 4 MHZ },
  { 372, 5 MHZ },
  { 558, 6 MHZ },
  { 744, 8 MHZ },
  { 1116, 12 MHZ },
  { 1488, 16 MHZ },
  { 1860, 20 MHZ },
  { 0, 0 },
  { 0, 0 },
  { 512, 5 MHZ },
  { 768, 7500000 },
  { 1024, 10 MHZ },
  { 1536, 15 MHZ },
  { 2048, 20 MHZ },
  { 0, 0 },
  { 0, 0 }
};
static BIT_RATE_ADJUSTMENT BitRateAdjustment[] = {
 { 0, 0 },
 { 1, 1 },
 { 2, 1 },
 { 4, 1 },
 { 8, 1 },
 { 16, 1 },
 { 32, 1 },
 { 64, 1 },
 { 12, 1 },
 { 20, 1 },
 { 0, 0 },
 { 0, 0 },
 { 0, 0 },
 { 0, 0 },
 { 0, 0 },
 { 0, 0 }
};
typedef struct _PTS_DATA {
    UCHAR Type;
    UCHAR Fl;
    UCHAR Dl;
    ULONG CLKFrequency;
    ULONG DataRate;
    UCHAR StopBits;
} PTS_DATA, *PPTS_DATA;
typedef struct _SCARD_CARD_CAPABILITIES{
 BOOLEAN InversConvention;
 ULONG etu;
 struct {
  UCHAR Buffer[64];
  UCHAR Length;
 } ATR;
 struct {
  UCHAR Buffer[16];
  UCHAR Length;
 } HistoricalChars;
 PCLOCK_RATE_CONVERSION ClockRateConversion;
 PBIT_RATE_ADJUSTMENT BitRateAdjustment;
 UCHAR Fl;
 UCHAR Dl;
 UCHAR II;
 UCHAR P;
 UCHAR N;
 ULONG GT;
 struct {
  ULONG Supported;
  ULONG Selected;
 } Protocol;
 struct {
  UCHAR WI;
  ULONG WT;
 } T0;
 struct {
  UCHAR IFSC;
  UCHAR CWI;
  UCHAR BWI;
  UCHAR EDC;
  ULONG CWT;
  ULONG BWT;
  ULONG BGT;
 } T1;
    PTS_DATA PtsData;
    UCHAR Reserved[100 - sizeof(PTS_DATA)];
} SCARD_CARD_CAPABILITIES, *PSCARD_CARD_CAPABILITIES;
typedef struct _SCARD_READER_CAPABILITIES {
    ULONG SupportedProtocols;
    ULONG Reserved;
 ULONG ReaderType;
 ULONG MechProperties;
    ULONG CurrentState;
 ULONG Channel;
    struct {
        ULONG Default;
        ULONG Max;
    } CLKFrequency;
    struct {
        ULONG Default;
        ULONG Max;
    } DataRate;
    ULONG MaxIFSD;
    ULONG PowerMgmtSupport;
    ULONG CardConfiscated;
    struct _DataRatesSupported {
        PULONG List;
        UCHAR Entries;
    } DataRatesSupported;
    struct _CLKFrequenciesSupported {
        PULONG List;
        UCHAR Entries;
    } CLKFrequenciesSupported;
    UCHAR Reserved1[
        100 -
        sizeof(ULONG) -
        sizeof(struct _DataRatesSupported) -
        sizeof(struct _CLKFrequenciesSupported)
        ];
} SCARD_READER_CAPABILITIES, *PSCARD_READER_CAPABILITIES;
typedef struct _VENDOR_ATTR {
 struct {
  USHORT Length;
  UCHAR Buffer[MAXIMUM_ATTR_STRING_LENGTH];
 } VendorName;
 struct {
  USHORT Length;
  UCHAR Buffer[MAXIMUM_ATTR_STRING_LENGTH];
 } IfdType;
 ULONG UnitNo;
    struct {
        USHORT BuildNumber;
        UCHAR VersionMinor;
        UCHAR VersionMajor;
    } IfdVersion;
 struct {
  USHORT Length;
  UCHAR Buffer[MAXIMUM_ATTR_STRING_LENGTH];
 } IfdSerialNo;
    ULONG Reserved[25];
} VENDOR_ATTR, *PVENDOR_ATTR;
typedef struct _READER_EXTENSION *PREADER_EXTENSION;
typedef struct _OS_DEP_DATA *POS_DEP_DATA;
typedef struct _SMARTCARD_EXTENSION *PSMARTCARD_EXTENSION;
typedef struct _SMARTCARD_EXTENSION {
    ULONG Version;
 VENDOR_ATTR VendorAttr;
 NTSTATUS (*ReaderFunction[16])(PSMARTCARD_EXTENSION);
 SCARD_CARD_CAPABILITIES CardCapabilities;
 ULONG LastError;
 struct {
  PULONG Information;
  PUCHAR RequestBuffer;
  ULONG RequestBufferLength;
  PUCHAR ReplyBuffer;
  ULONG ReplyBufferLength;
 } IoRequest;
 ULONG MajorIoControlCode;
 ULONG MinorIoControlCode;
 POS_DEP_DATA OsData;
 SCARD_READER_CAPABILITIES ReaderCapabilities;
 PREADER_EXTENSION ReaderExtension;
 SMARTCARD_REPLY SmartcardReply;
 SMARTCARD_REQUEST SmartcardRequest;
 T0_DATA T0;
 T1_DATA T1;
    ULONG Reserved[
        25
        ];
} SMARTCARD_EXTENSION, *PSMARTCARD_EXTENSION;
#pragma warning(disable:4003)
Begin_Service_Table(SMCLIB)
SMCLIB_Service(SMCLIB_Get_Version)
SMCLIB_Service(SMCLIB_SmartcardCreateLink)
SMCLIB_Service(SMCLIB_SmartcardDeleteLink)
SMCLIB_Service(SMCLIB_SmartcardDeviceControl)
SMCLIB_Service(SMCLIB_SmartcardExit)
SMCLIB_Service(SMCLIB_SmartcardInitialize)
SMCLIB_Service(SMCLIB_SmartcardLogError)
SMCLIB_Service(SMCLIB_SmartcardRawReply)
SMCLIB_Service(SMCLIB_SmartcardRawRequest)
SMCLIB_Service(SMCLIB_SmartcardT0Reply)
SMCLIB_Service(SMCLIB_SmartcardT0Request)
SMCLIB_Service(SMCLIB_SmartcardT1Reply)
SMCLIB_Service(SMCLIB_SmartcardT1Request)
SMCLIB_Service(SMCLIB_SmartcardUpdateCardCapabilities)
SMCLIB_Service(SMCLIB_SmartcardGetDebugLevel)
SMCLIB_Service(SMCLIB_SmartcardSetDebugLevel)
SMCLIB_Service(SMCLIB_MapNtStatusToWinError)
SMCLIB_Service(SMCLIB_Assert)
SMCLIB_Service(SMCLIB_VxD_CreateDevice)
SMCLIB_Service(SMCLIB_VxD_DeleteDevice)
SMCLIB_Service(SMCLIB_SmartcardCompleteCardTracking)
SMCLIB_Service(SMCLIB_SmartcardCompleteRequest)
End_Service_Table(SMCLIB)
PVMMDDB
VXDINLINE
VxD_CreateDevice(
    char *Device,
    void (*ControlProc)(void)
 )
{
    _asm push ControlProc
    _asm push Device
    VxDCall(SMCLIB_VxD_CreateDevice);
    _asm add sp, 8
}
BOOL
VXDINLINE
VxD_DeleteDevice(
    PVMMDDB pDDB
 )
{
    _asm push pDDB
    VxDCall(SMCLIB_VxD_DeleteDevice);
    _asm add sp, 4
}
NTSTATUS
VXDINLINE
SmartcardCreateLink(
 PUCHAR LinkName,
 PUCHAR DeviceName
 )
{
    _asm push DeviceName
    _asm push LinkName
    VxDCall(SMCLIB_SmartcardCreateLink);
    _asm add sp, 8
}
NTSTATUS
VXDINLINE
SmartcardDeleteLink(
 PUCHAR LinkName
 )
{
    _asm push LinkName
    VxDCall(SMCLIB_SmartcardDeleteLink);
    _asm add sp, 4
}
NTSTATUS
VXDINLINE
SmartcardDeviceControl(
    PSMARTCARD_EXTENSION SmartcardExtension,
    DIOCPARAMETERS *lpDIOCParmas
    )
{
    _asm push lpDIOCParmas
    _asm push SmartcardExtension
    VxDCall(SMCLIB_SmartcardDeviceControl);
    _asm add sp, 8
}
VOID
VXDINLINE
SmartcardExit(
    PSMARTCARD_EXTENSION SmartcardExtension
    )
{
    _asm push SmartcardExtension
    VxDCall(SMCLIB_SmartcardExit);
    _asm add sp, 4
}
NTSTATUS
VXDINLINE
SmartcardInitialize(
    PSMARTCARD_EXTENSION SmartcardExtension
    )
{
    _asm push SmartcardExtension
    VxDCall(SMCLIB_SmartcardInitialize);
    _asm add sp, 4
}
VOID
VXDINLINE
SmartcardLogError(
    )
{
    VxDCall(SMCLIB_SmartcardLogError);
}
NTSTATUS
VXDINLINE
SmartcardRawReply(
 PSMARTCARD_EXTENSION SmartcardExtension
 )
{
    _asm push SmartcardExtension
    VxDCall(SMCLIB_SmartcardRawReply);
    _asm add sp, 4
}
NTSTATUS
VXDINLINE
SmartcardRawRequest(
 PSMARTCARD_EXTENSION SmartcardExtension
 )
{
    _asm push SmartcardExtension
    VxDCall(SMCLIB_SmartcardRawRequest);
    _asm add sp, 4
}
NTSTATUS
VXDINLINE
SmartcardT0Reply(
 PSMARTCARD_EXTENSION SmartcardExtension
 )
{
    _asm push SmartcardExtension
    VxDCall(SMCLIB_SmartcardT0Reply);
    _asm add sp, 4
}
NTSTATUS
VXDINLINE
SmartcardT0Request(
 PSMARTCARD_EXTENSION SmartcardExtension
 )
{
    _asm push SmartcardExtension
    VxDCall(SMCLIB_SmartcardT0Request);
    _asm add sp, 4
}
NTSTATUS
VXDINLINE
SmartcardT1Reply(
 PSMARTCARD_EXTENSION SmartcardExtension
 )
{
    _asm push SmartcardExtension
    VxDCall(SMCLIB_SmartcardT1Reply);
    _asm add sp, 4
}
NTSTATUS
VXDINLINE
SmartcardT1Request(
 PSMARTCARD_EXTENSION SmartcardExtension
 )
{
    _asm push SmartcardExtension
    VxDCall(SMCLIB_SmartcardT1Request);
    _asm add sp, 4
}
NTSTATUS
VXDINLINE
SmartcardUpdateCardCapabilities(
    PSMARTCARD_EXTENSION SmartcardExtension
    )
{
    _asm push SmartcardExtension
    VxDCall(SMCLIB_SmartcardUpdateCardCapabilities);
    _asm add sp, 4
}
ULONG
VXDINLINE
SmartcardGetDebugLevel(
 void
 )
{
    VxDCall(SMCLIB_SmartcardGetDebugLevel);
}
void
VXDINLINE
SmartcardSetDebugLevel(
 ULONG Level
 )
{
    _asm push Level
    VxDCall(SMCLIB_SmartcardSetDebugLevel);
    _asm add sp, 4
}
void
VXDINLINE
SmartcardCompleteCardTracking(
 PSMARTCARD_EXTENSION SmartcardExtension
 )
{
    _asm push SmartcardExtension
    VxDCall(SMCLIB_SmartcardCompleteCardTracking);
    _asm add sp, 4
}
void
VXDINLINE
SmartcardCompleteRequest(
 PSMARTCARD_EXTENSION SmartcardExtension
 )
{
    _asm push SmartcardExtension
    VxDCall(SMCLIB_SmartcardCompleteRequest);
    _asm add sp, 4
}
ULONG
VXDINLINE
MapNtStatusToWinError(
 NTSTATUS status
 )
{
    _asm push status
    VxDCall(SMCLIB_MapNtStatusToWinError);
    _asm add sp, 4
}
VOID
SmartcardInvertData(
 PUCHAR Buffer,
 ULONG Length
    );
}
