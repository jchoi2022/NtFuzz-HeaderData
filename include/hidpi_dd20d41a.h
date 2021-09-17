#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
#pragma warning(disable:4115)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#include <pshpack4.h>
typedef enum _HIDP_REPORT_TYPE
{
    HidP_Input,
    HidP_Output,
    HidP_Feature
} HIDP_REPORT_TYPE;
typedef struct _USAGE_AND_PAGE
{
    USAGE Usage;
    USAGE UsagePage;
} USAGE_AND_PAGE, *PUSAGE_AND_PAGE;
typedef struct _HIDP_BUTTON_CAPS
{
    USAGE UsagePage;
    UCHAR ReportID;
    BOOLEAN IsAlias;
    USHORT BitField;
    USHORT LinkCollection;
    USAGE LinkUsage;
    USAGE LinkUsagePage;
    BOOLEAN IsRange;
    BOOLEAN IsStringRange;
    BOOLEAN IsDesignatorRange;
    BOOLEAN IsAbsolute;
    ULONG Reserved[10];
    union {
        struct {
            USAGE UsageMin, UsageMax;
            USHORT StringMin, StringMax;
            USHORT DesignatorMin, DesignatorMax;
            USHORT DataIndexMin, DataIndexMax;
        } Range;
        struct {
            USAGE Usage, Reserved1;
            USHORT StringIndex, Reserved2;
            USHORT DesignatorIndex, Reserved3;
            USHORT DataIndex, Reserved4;
        } NotRange;
    };
} HIDP_BUTTON_CAPS, *PHIDP_BUTTON_CAPS;
typedef struct _HIDP_VALUE_CAPS
{
    USAGE UsagePage;
    UCHAR ReportID;
    BOOLEAN IsAlias;
    USHORT BitField;
    USHORT LinkCollection;
    USAGE LinkUsage;
    USAGE LinkUsagePage;
    BOOLEAN IsRange;
    BOOLEAN IsStringRange;
    BOOLEAN IsDesignatorRange;
    BOOLEAN IsAbsolute;
    BOOLEAN HasNull;
    UCHAR Reserved;
    USHORT BitSize;
    USHORT ReportCount;
    USHORT Reserved2[5];
    ULONG UnitsExp;
    ULONG Units;
    LONG LogicalMin, LogicalMax;
    LONG PhysicalMin, PhysicalMax;
    union {
        struct {
            USAGE UsageMin, UsageMax;
            USHORT StringMin, StringMax;
            USHORT DesignatorMin, DesignatorMax;
            USHORT DataIndexMin, DataIndexMax;
        } Range;
        struct {
            USAGE Usage, Reserved1;
            USHORT StringIndex, Reserved2;
            USHORT DesignatorIndex, Reserved3;
            USHORT DataIndex, Reserved4;
        } NotRange;
    };
} HIDP_VALUE_CAPS, *PHIDP_VALUE_CAPS;
typedef struct _HIDP_LINK_COLLECTION_NODE
{
    USAGE LinkUsage;
    USAGE LinkUsagePage;
    USHORT Parent;
    USHORT NumberOfChildren;
    USHORT NextSibling;
    USHORT FirstChild;
    ULONG CollectionType: 8;
    ULONG IsAlias : 1;
    ULONG Reserved: 23;
    PVOID UserContext;
} HIDP_LINK_COLLECTION_NODE, *PHIDP_LINK_COLLECTION_NODE;
typedef PUCHAR PHIDP_REPORT_DESCRIPTOR;
typedef struct _HIDP_PREPARSED_DATA * PHIDP_PREPARSED_DATA;
typedef struct _HIDP_CAPS
{
    USAGE Usage;
    USAGE UsagePage;
    USHORT InputReportByteLength;
    USHORT OutputReportByteLength;
    USHORT FeatureReportByteLength;
    USHORT Reserved[17];
    USHORT NumberLinkCollectionNodes;
    USHORT NumberInputButtonCaps;
    USHORT NumberInputValueCaps;
    USHORT NumberInputDataIndices;
    USHORT NumberOutputButtonCaps;
    USHORT NumberOutputValueCaps;
    USHORT NumberOutputDataIndices;
    USHORT NumberFeatureButtonCaps;
    USHORT NumberFeatureValueCaps;
    USHORT NumberFeatureDataIndices;
} HIDP_CAPS, *PHIDP_CAPS;
typedef struct _HIDP_DATA
{
    USHORT DataIndex;
    USHORT Reserved;
    union {
        ULONG RawValue;
        BOOLEAN On;
    };
} HIDP_DATA, *PHIDP_DATA;
typedef struct _HIDP_UNKNOWN_TOKEN
{
    UCHAR Token;
    UCHAR Reserved[3];
    ULONG BitField;
} HIDP_UNKNOWN_TOKEN, *PHIDP_UNKNOWN_TOKEN;
typedef struct _HIDP_EXTENDED_ATTRIBUTES
{
    UCHAR NumGlobalUnknowns;
    UCHAR Reserved [3];
    PHIDP_UNKNOWN_TOKEN GlobalUnknowns;
    ULONG Data [1];
} HIDP_EXTENDED_ATTRIBUTES, *PHIDP_EXTENDED_ATTRIBUTES;
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS __stdcall
HidP_GetCaps (
   _In_ PHIDP_PREPARSED_DATA PreparsedData,
   _Out_ PHIDP_CAPS Capabilities
   );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS __stdcall
HidP_GetLinkCollectionNodes (
   _Out_writes_to_(*LinkCollectionNodesLength, *LinkCollectionNodesLength) PHIDP_LINK_COLLECTION_NODE LinkCollectionNodes,
   _Inout_ PULONG LinkCollectionNodesLength,
   _In_ PHIDP_PREPARSED_DATA PreparsedData
   );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS __stdcall
HidP_GetSpecificButtonCaps (
   _In_ HIDP_REPORT_TYPE ReportType,
   _In_opt_ USAGE UsagePage,
   _In_opt_ USHORT LinkCollection,
   _In_opt_ USAGE Usage,
   _Out_writes_to_(*ButtonCapsLength, *ButtonCapsLength) PHIDP_BUTTON_CAPS ButtonCaps,
   _Inout_ PUSHORT ButtonCapsLength,
   _In_ PHIDP_PREPARSED_DATA PreparsedData
   );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS __stdcall
HidP_GetButtonCaps (
   _In_ HIDP_REPORT_TYPE ReportType,
   _Out_writes_to_(*ButtonCapsLength, *ButtonCapsLength) PHIDP_BUTTON_CAPS ButtonCaps,
   _Inout_ PUSHORT ButtonCapsLength,
   _In_ PHIDP_PREPARSED_DATA PreparsedData
);
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS __stdcall
HidP_GetSpecificValueCaps (
   _In_ HIDP_REPORT_TYPE ReportType,
   _In_opt_ USAGE UsagePage,
   _In_opt_ USHORT LinkCollection,
   _In_opt_ USAGE Usage,
   _Out_writes_to_(*ValueCapsLength, *ValueCapsLength) PHIDP_VALUE_CAPS ValueCaps,
   _Inout_ PUSHORT ValueCapsLength,
   _In_ PHIDP_PREPARSED_DATA PreparsedData
   );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS __stdcall
HidP_GetValueCaps (
   _In_ HIDP_REPORT_TYPE ReportType,
   _Out_writes_to_(*ValueCapsLength, *ValueCapsLength) PHIDP_VALUE_CAPS ValueCaps,
   _Inout_ PUSHORT ValueCapsLength,
   _In_ PHIDP_PREPARSED_DATA PreparsedData
);
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS __stdcall
HidP_GetExtendedAttributes (
    _In_ HIDP_REPORT_TYPE ReportType,
    _In_ USHORT DataIndex,
    _In_ PHIDP_PREPARSED_DATA PreparsedData,
    _Out_writes_to_(*LengthAttributes, *LengthAttributes) PHIDP_EXTENDED_ATTRIBUTES Attributes,
    _Inout_ PULONG LengthAttributes
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS __stdcall
HidP_InitializeReportForID (
   _In_ HIDP_REPORT_TYPE ReportType,
   _In_ UCHAR ReportID,
   _In_ PHIDP_PREPARSED_DATA PreparsedData,
   _Out_writes_bytes_(ReportLength) PCHAR Report,
   _In_ ULONG ReportLength
   );
_Must_inspect_result_
NTSTATUS __stdcall
HidP_SetData (
    _In_ HIDP_REPORT_TYPE ReportType,
    _Inout_updates_to_(*DataLength,*DataLength) PHIDP_DATA DataList,
    _Inout_ PULONG DataLength,
    _In_ PHIDP_PREPARSED_DATA PreparsedData,
    _In_reads_bytes_(ReportLength) PCHAR Report,
    _In_ ULONG ReportLength
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS __stdcall
HidP_GetData (
    _In_ HIDP_REPORT_TYPE ReportType,
    _Out_writes_to_(*DataLength,*DataLength) PHIDP_DATA DataList,
    _Inout_ PULONG DataLength,
    _In_ PHIDP_PREPARSED_DATA PreparsedData,
    _Out_writes_bytes_(ReportLength) PCHAR Report,
    _In_ ULONG ReportLength
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG __stdcall
HidP_MaxDataListLength (
   _In_ HIDP_REPORT_TYPE ReportType,
   _In_ PHIDP_PREPARSED_DATA PreparsedData
   );
        HidP_SetUsages(Rty, Up, Lco, ULi, ULe, Ppd, Rep, Rle)
_Must_inspect_result_
NTSTATUS __stdcall
HidP_SetUsages (
   _In_ HIDP_REPORT_TYPE ReportType,
   _In_ USAGE UsagePage,
   _In_opt_ USHORT LinkCollection,
   _Inout_updates_to_(*UsageLength,*UsageLength) PUSAGE UsageList,
   _Inout_ PULONG UsageLength,
   _In_ PHIDP_PREPARSED_DATA PreparsedData,
   _In_reads_bytes_(ReportLength) PCHAR Report,
   _In_ ULONG ReportLength
   );
        HidP_UnsetUsages(Rty, Up, Lco, ULi, ULe, Ppd, Rep, Rle)
_Must_inspect_result_
NTSTATUS __stdcall
HidP_UnsetUsages (
   _In_ HIDP_REPORT_TYPE ReportType,
   _In_ USAGE UsagePage,
   _In_opt_ USHORT LinkCollection,
   _Inout_updates_to_(*UsageLength,*UsageLength) PUSAGE UsageList,
   _Inout_ PULONG UsageLength,
   _In_ PHIDP_PREPARSED_DATA PreparsedData,
   _In_reads_bytes_(ReportLength) PCHAR Report,
   _In_ ULONG ReportLength
   );
        HidP_GetUsages(Rty, UPa, LCo, ULi, ULe, Ppd, Rep, RLe)
_Must_inspect_result_
NTSTATUS __stdcall
HidP_GetUsages (
   _In_ HIDP_REPORT_TYPE ReportType,
   _In_ USAGE UsagePage,
   _In_opt_ USHORT LinkCollection,
   _Out_writes_to_(*UsageLength, *UsageLength) PUSAGE UsageList,
   _Inout_ PULONG UsageLength,
   _In_ PHIDP_PREPARSED_DATA PreparsedData,
   _Out_writes_bytes_(ReportLength) PCHAR Report,
   _In_ ULONG ReportLength
   );
         HidP_GetUsagesEx(Rty, LCo, BLi, ULe, Ppd, Rep, RLe)
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS __stdcall
HidP_GetUsagesEx (
    _In_ HIDP_REPORT_TYPE ReportType,
    _In_opt_ USHORT LinkCollection,
    _Inout_updates_to_(*UsageLength,*UsageLength) PUSAGE_AND_PAGE ButtonList,
    _Inout_ ULONG * UsageLength,
    _In_ PHIDP_PREPARSED_DATA PreparsedData,
    _In_reads_bytes_(ReportLength) PCHAR Report,
    _In_ ULONG ReportLength
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
ULONG __stdcall
HidP_MaxUsageListLength (
   _In_ HIDP_REPORT_TYPE ReportType,
   _In_opt_ USAGE UsagePage,
   _In_ PHIDP_PREPARSED_DATA PreparsedData
   );
_Must_inspect_result_
NTSTATUS __stdcall
HidP_SetUsageValue (
    _In_ HIDP_REPORT_TYPE ReportType,
    _In_ USAGE UsagePage,
    _In_opt_ USHORT LinkCollection,
    _In_ USAGE Usage,
    _In_ ULONG UsageValue,
    _In_ PHIDP_PREPARSED_DATA PreparsedData,
    _Inout_updates_bytes_(ReportLength) PCHAR Report,
    _In_ ULONG ReportLength
    );
_Must_inspect_result_
NTSTATUS __stdcall
HidP_SetScaledUsageValue (
    _In_ HIDP_REPORT_TYPE ReportType,
    _In_ USAGE UsagePage,
    _In_opt_ USHORT LinkCollection,
    _In_ USAGE Usage,
    _In_ LONG UsageValue,
    _In_ PHIDP_PREPARSED_DATA PreparsedData,
    _Inout_updates_bytes_(ReportLength) PCHAR Report,
    _In_ ULONG ReportLength
    );
_Must_inspect_result_
NTSTATUS __stdcall
HidP_SetUsageValueArray (
    _In_ HIDP_REPORT_TYPE ReportType,
    _In_ USAGE UsagePage,
    _In_opt_ USHORT LinkCollection,
    _In_ USAGE Usage,
    _In_reads_bytes_(UsageValueByteLength) PCHAR UsageValue,
    _In_ USHORT UsageValueByteLength,
    _In_ PHIDP_PREPARSED_DATA PreparsedData,
    _Inout_updates_bytes_(ReportLength) PCHAR Report,
    _In_ ULONG ReportLength
    );
_Must_inspect_result_
NTSTATUS __stdcall
HidP_GetUsageValue (
    _In_ HIDP_REPORT_TYPE ReportType,
    _In_ USAGE UsagePage,
    _In_opt_ USHORT LinkCollection,
    _In_ USAGE Usage,
    _Out_ PULONG UsageValue,
    _In_ PHIDP_PREPARSED_DATA PreparsedData,
    _In_reads_bytes_(ReportLength) PCHAR Report,
    _In_ ULONG ReportLength
    );
_Must_inspect_result_
NTSTATUS __stdcall
HidP_GetScaledUsageValue (
    _In_ HIDP_REPORT_TYPE ReportType,
    _In_ USAGE UsagePage,
    _In_opt_ USHORT LinkCollection,
    _In_ USAGE Usage,
    _Out_ PLONG UsageValue,
    _In_ PHIDP_PREPARSED_DATA PreparsedData,
    _In_reads_bytes_(ReportLength) PCHAR Report,
    _In_ ULONG ReportLength
    );
_Must_inspect_result_
NTSTATUS __stdcall
HidP_GetUsageValueArray (
    _In_ HIDP_REPORT_TYPE ReportType,
    _In_ USAGE UsagePage,
    _In_opt_ USHORT LinkCollection,
    _In_ USAGE Usage,
    _Inout_updates_bytes_(UsageValueByteLength) PCHAR UsageValue,
    _In_ USHORT UsageValueByteLength,
    _In_ PHIDP_PREPARSED_DATA PreparsedData,
    _In_reads_bytes_(ReportLength) PCHAR Report,
    _In_ ULONG ReportLength
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS __stdcall
HidP_UsageListDifference (
   _In_reads_(UsageListLength) PUSAGE PreviousUsageList,
   _In_reads_(UsageListLength) PUSAGE CurrentUsageList,
   _Out_writes_(UsageListLength) PUSAGE BreakUsageList,
   _Out_writes_(UsageListLength) PUSAGE MakeUsageList,
   _In_ ULONG UsageListLength
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS __stdcall
HidP_UsageAndPageListDifference (
   _In_reads_(UsageListLength) PUSAGE_AND_PAGE PreviousUsageList,
   _In_reads_(UsageListLength) PUSAGE_AND_PAGE CurrentUsageList,
   _Out_writes_(UsageListLength) PUSAGE_AND_PAGE BreakUsageList,
   _Out_writes_(UsageListLength) PUSAGE_AND_PAGE MakeUsageList,
   _In_ ULONG UsageListLength
   );
typedef enum _HIDP_KEYBOARD_DIRECTION {
    HidP_Keyboard_Break,
    HidP_Keyboard_Make
} HIDP_KEYBOARD_DIRECTION;
typedef struct _HIDP_KEYBOARD_MODIFIER_STATE {
   union {
      struct {
         ULONG LeftControl: 1;
         ULONG LeftShift: 1;
         ULONG LeftAlt: 1;
         ULONG LeftGUI: 1;
         ULONG RightControl: 1;
         ULONG RightShift: 1;
         ULONG RightAlt: 1;
         ULONG RigthGUI: 1;
         ULONG CapsLock: 1;
         ULONG ScollLock: 1;
         ULONG NumLock: 1;
         ULONG Reserved: 21;
      };
      ULONG ul;
   };
} HIDP_KEYBOARD_MODIFIER_STATE, * PHIDP_KEYBOARD_MODIFIER_STATE;
typedef BOOLEAN (* PHIDP_INSERT_SCANCODES) (
                  _In_opt_ PVOID Context,
                  _In_reads_bytes_(Length) PCHAR NewScanCodes,
                  _In_ ULONG Length
                  );
_Must_inspect_result_
NTSTATUS __stdcall
HidP_TranslateUsageAndPagesToI8042ScanCodes (
    _In_reads_(UsageListLength) PUSAGE_AND_PAGE ChangedUsageList,
    _In_ ULONG UsageListLength,
    _In_ HIDP_KEYBOARD_DIRECTION KeyAction,
    _Inout_ PHIDP_KEYBOARD_MODIFIER_STATE ModifierState,
    _In_ PHIDP_INSERT_SCANCODES InsertCodesProcedure,
    _In_opt_ PVOID InsertCodesContext
    );
_Must_inspect_result_
NTSTATUS __stdcall
HidP_TranslateUsagesToI8042ScanCodes (
    _In_reads_(UsageListLength) PUSAGE ChangedUsageList,
    _In_ ULONG UsageListLength,
    _In_ HIDP_KEYBOARD_DIRECTION KeyAction,
    _Inout_ PHIDP_KEYBOARD_MODIFIER_STATE ModifierState,
    _In_ PHIDP_INSERT_SCANCODES InsertCodesProcedure,
    _In_opt_ PVOID InsertCodesContext
    );
        ((NTSTATUS) (((SEV) << 28) | (FACILITY_HID_ERROR_CODE << 16) | (CODE)))
#include <poppack.h>
#pragma warning(default:4115)
#pragma warning(default:4201)
#pragma warning(default:4214)
}
#endif
#pragma endregion
