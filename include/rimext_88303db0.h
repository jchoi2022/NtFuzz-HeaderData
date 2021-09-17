       
#include <apiset.h>
#include <apisetcconv.h>
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <windows.h>
#pragma warning (disable : 4201)
extern "C" {
                            RIM_INPUT_TYPE_HID_PTP |\
                            RIM_INPUT_TYPE_HID_TCH)
                            RIM_INPUT_TYPE_KEYBOARD |\
                            RIM_INPUT_TYPE_HID |\
                            RIM_INPUT_TYPE_HID_GEN)
typedef struct _RIM_USAGE_ANDPAGE
{
    USHORT Usage;
    USHORT UsagePage;
} RIM_USAGE_AND_PAGE, *PRIM_USAGE_AND_PAGE;
typedef BOOL (CALLBACK* RIMDEVCHANGECALLBACKPROC)(
    HANDLE hRim,
    HANDLE hRimDev,
    DWORD dwDeviceIdentity,
    DWORD dwCode,
    DWORD dwDeviceType,
    DWORD dwRimInputType,
    USHORT usage,
    USHORT usagePage,
    PVOID pvContext);
typedef struct tagRIMDEVCHANGECALLBACK
{
    HANDLE hRim;
    HANDLE hRimDev;
    DWORD dwCode;
    DWORD dwDeviceType;
    DWORD dwRimInputType;
    USHORT usage;
    USHORT usagePage;
    PVOID pContext;
} RIMDEVCHANGECALLBACK;
typedef enum tagRIMOBSERVERMESSAGETYPE {
    RIMMSG_DATA,
    RIMMSG_ERR,
    RIMMSG_MAX = RIMMSG_ERR
} RIMOBSERVERMESSAGETYPE, *PRIMOBSERVERMESSAGETYPE;
typedef enum tagRIMOBSERVERERRORCODE {
    RIMERR_BUFFER_TOO_SMALL,
    RIMERR_INPUT_INTERCEPTED,
    RIMERR_DROPPED_INPUT,
    RIMERR_MAX = RIMERR_DROPPED_INPUT
} RIMOBSERVERERRORCODE, *PRIMOBSERVERERRORCODE;
typedef struct tagRIMOBSERVERMESSAGE {
    RIMOBSERVERMESSAGETYPE type;
    union {
        struct {
            HANDLE hRimDev;
            IO_STATUS_BLOCK iosb;
            DWORD dwInputType;
            PVOID pInputData;
        } data;
        struct {
            RIMOBSERVERERRORCODE code;
            DWORD dwInformation;
        } err;
    };
} RIMOBSERVERMESSAGE, *PRIMOBSERVERMESSAGE;
typedef struct _RIM_KEYBOARD_TYPEMATIC_PARAMETERS {
    USHORT UnitId;
    USHORT Rate;
    USHORT Delay;
} RIM_KEYBOARD_TYPEMATIC_PARAMETERS, *PRIM_KEYBOARD_TYPEMATIC_PARAMETERS;
typedef struct _RIM_KEYBOARD_ID {
    UCHAR Type;
    UCHAR Subtype;
} RIM_KEYBOARD_ID, *PRIM_KEYBOARD_ID;
typedef struct _RIM_KEYBOARD_ATTRIBUTES {
    RIM_KEYBOARD_ID KeyboardIdentifier;
    USHORT KeyboardMode;
    USHORT NumberOfFunctionKeys;
    USHORT NumberOfIndicators;
    USHORT NumberOfKeysTotal;
    ULONG InputDataQueueLength;
    RIM_KEYBOARD_TYPEMATIC_PARAMETERS KeyRepeatMinimum;
    RIM_KEYBOARD_TYPEMATIC_PARAMETERS KeyRepeatMaximum;
} RIM_KEYBOARD_ATTRIBUTES, *PRIM_KEYBOARD_ATTRIBUTES;
typedef struct _RIM_MOUSE_ATTRIBUTES
{
    USHORT MouseIdentifier;
    USHORT NumberOfButtons;
    USHORT SampleRate;
    ULONG InputDataQueueLength;
} RIM_MOUSE_ATTRIBUTES, *PRIM_MOUSE_ATTRIBUTES;
typedef struct _RIM_HID_ATTRIBUTES
{
    USHORT VendorID;
    USHORT ProductID;
    USHORT VersionNumber;
    LUID AdapterLuid;
    DWORD VidPnTargetId;
} RIM_HID_ATTRIBUTES, *PRIM_HID_ATTRIBUTES;
typedef struct _RIM_PNP_INSTANCE_PATH
{
    ULONG cbBufferSize;
    LPVOID pData;
} RIM_PNP_INSTANCE_PATH;
typedef struct RIM_DEVICE_PROPERTIES
{
    DWORD dwDevicePropType;
    union
    {
        RIM_KEYBOARD_ATTRIBUTES keyboard;
        RIM_MOUSE_ATTRIBUTES mouse;
        RIM_HID_ATTRIBUTES hid;
        RIM_PNP_INSTANCE_PATH pnpInstancePath;
    };
} RIMDEVICEPROPERTIES, *PRIMDEVICEPROPERTIES;
typedef union
{
    POINTER_INFO PointerInfo;
    POINTER_TOUCH_INFO TouchInfo;
    POINTER_PEN_INFO PenInfo;
} POINTERINFOUNION;
typedef struct tagPOINTEREVENTINT
{
    WORD wCursorId;
    USHORT usLinkCollectionIndex;
    POINTERINFOUNION Info;
    BOOL bMobileTestSyncFlag;
    BOOL bMobileTestInjectFlag;
    GUID ProprietaryId;
    BOOL bSkipActivation;
} POINTEREVENTINT, *PPOINTEREVENTINT;
typedef struct tagRIMPOINTERINFONODE {
    DWORD dwRawDataIndex;
    POINTEREVENTINT PointerEventInt;
} RIMPOINTERINFONODE;
typedef struct tagRIMPOINTERRAWDATA {
    DWORD dwIndex;
    DWORD cbRawData;
    PBYTE pRawData;
    struct tagRIMPOINTERRAWDATA* pNextRawData;
} RIMPOINTERRAWDATA;
typedef struct tagTELEMETRY_POINTER_FRAME_TIMES {
    UINT64 qpcKernelInputRead;
    UINT64 qpcHostInputSend;
    UINT64 qpcContainerInputReceive;
    UINT64 hostPerformanceFrequency;
}TELEMETRY_POINTER_FRAME_TIMES, *PTELEMETRY_POINTER_FRAME_TIMES;
struct RIMCOMPLETEFRAME {
    DWORD cbSize;
    LIST_ENTRY nextFrame;
    DWORD cPointers;
    DWORD cRawDataBlocks;
    HANDLE hRimDev;
    TELEMETRY_POINTER_FRAME_TIMES frameTimes;
    BOOL bDevInjection;
    BOOL bButtonOnly;
    BOOL bAutoRepeatFrame;
    DWORD dwRimTickCount;
    ULONGLONG ullRimQpc;
    RIMPOINTERINFONODE *pPrimaryPointerInfoNode;
    RIMPOINTERRAWDATA* pRawDataList;
    __field_ecount(cPointers) RIMPOINTERINFONODE* pPointerInfoList;
};
typedef struct _RIMIDE_GENERIC_HID_DEVICE_PROPERTIES {
    USHORT VendorID;
    USHORT ProductID;
    USHORT VersionNumber;
    GUID ContainerID;
    HANDLE DeviceParent;
    _Field_size_bytes_full_(ReportDescriptorLength)
    PUCHAR ReportDescriptor;
    USHORT ReportDescriptorLength;
    _Field_size_bytes_full_(FeatureReportLength)
    PUCHAR FeatureReport;
    USHORT FeatureReportLength;
} RIMIDE_GENERIC_HID_DEVICE_PROPERTIES, *PRIMIDE_GENERIC_HID_DEVICE_PROPERTIES;
WINUSERAPI
NTSTATUS
WINAPI
RIMRegisterForInput(
    _In_ DWORD dwInputType,
    _In_opt_ PUNICODE_STRING pusDeviceName,
    _In_opt_ DWORD cRimUsages,
    _In_opt_ RIM_USAGE_AND_PAGE* pRimUsages,
    _In_ HANDLE hPnpNotificationEvent,
    _In_ HANDLE hTimer,
    _In_ HANDLE hAutoRepeatTimer,
    _In_ PVOID pContext,
    _In_opt_ RIMDEVCHANGECALLBACKPROC pfnRimDevChangeCbProc,
    _Out_ PHANDLE phRimHandle
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMReadInput(
    _In_ HANDLE hRimHandle,
    _Inout_ PVOID* ppBuffer,
    _In_ ULONG ulLengthToRead,
    _In_ HANDLE hReadCompletionEvent,
    _Out_ PHANDLE phRimDevice,
    _Out_ PDWORD pdwInputTypeRead,
    _Inout_ PIO_STATUS_BLOCK pioSb
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMAddInputObserver(
    _In_reads_bytes_(dwBufferSize) PVOID pBuffer,
    _In_ DWORD dwBufferSize,
    _In_ HANDLE hInputReadyEvent,
    _In_ DWORD dwInputType,
    _In_ DWORD dwUsagePage,
    _In_ DWORD dwUsage,
    _In_ DWORD dwFlags,
    _Out_ PHANDLE phInputObserver
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMUpdateInputObserverRegistration(
    _In_ HANDLE hInputObserver,
    _In_ DWORD dwFlags,
    _In_reads_bytes_opt_(dwBufferSize) PVOID pBuffer,
    _In_opt_ DWORD dwBufferSize
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMRemoveInputObserver(
    _In_ HANDLE hInputObserver
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMObserveNextInput(
    _In_ HANDLE hInputObserver
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMGetDevicePreparsedDataLockfree(
    _In_ HANDLE hRimDev,
    _Out_writes_bytes_opt_(*pdwBufferSize) PVOID pBuffer,
    _Inout_ PDWORD pdwBufferSize
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMGetDevicePreparsedData(
    _In_ HANDLE hRimHandle,
    _In_ HANDLE hRimDev,
    _Out_writes_bytes_opt_(*pdwBufferSize) PVOID pBuffer,
    _Inout_ PDWORD pdwBufferSize
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMGetDevicePropertiesLockfree(
    _In_ HANDLE hRimDev,
    _Out_ PRIMDEVICEPROPERTIES pRimDevProps
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMGetDeviceProperties(
    _In_ HANDLE hRimHandle,
    _In_ HANDLE hRimDev,
    _Out_ PRIMDEVICEPROPERTIES pRimDevProps
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMAreSiblingDevices(
    _In_ HANDLE hRimDev1,
    _In_ HANDLE hRimDev2,
    _Out_ PBOOL pbRet
    );
WINUSERAPI
VOID
WINAPI
RIMFreeInputBuffer(
    _In_ HANDLE hRimHandle,
    _In_ PVOID pvInputBuffer
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMOnPnpNotification(
    _In_ HANDLE hRimHandle
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMOnTimerNotification(
    _In_ HANDLE hRimHandle,
    _In_ BOOL bAutoRepeatTimer
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMDeviceIoControl(
    _In_ HANDLE hRimHandle,
    _In_ HANDLE hRimDev,
    _In_ DWORD dwIoControlCode,
    _In_opt_ PVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_opt_ PVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_ LPDWORD lpBytesReturned,
    _In_ BOOL bInternal
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMUnregisterForInput(
    _In_ HANDLE hRimHandle
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMSetTestModeStatus(
    _In_ BOOL bTestModeOn
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMGetPhysicalDeviceRect(
    _In_ HANDLE hRimHandle,
    _In_ HANDLE hRimDev,
    _Out_ RECT* pPhysicalDeviceRect
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMGetSourceProcessId(
    _In_ HANDLE hRimHandle,
    _In_ HANDLE hRimDev,
    _Out_ PDWORD pdwProcessId
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMEnableMonitorMappingForDevice(
    _In_ HANDLE hRimHandle,
    _In_ HANDLE hRimDev,
    _Out_opt_ HMONITOR* phMonitor
    );
enum tagPOINTER_INPUT_TYPE {
    PT_POINTER = 0x00000001,
    PT_TOUCH = 0x00000002,
    PT_PEN = 0x00000003,
    PT_MOUSE = 0x00000004,
    PT_TOUCHPAD = 0x00000005,
};
typedef enum tagPOINTER_BUTTON_CHANGE_TYPE {
    POINTER_CHANGE_NONE,
    POINTER_CHANGE_FIRSTBUTTON_DOWN,
    POINTER_CHANGE_FIRSTBUTTON_UP,
    POINTER_CHANGE_SECONDBUTTON_DOWN,
    POINTER_CHANGE_SECONDBUTTON_UP,
    POINTER_CHANGE_THIRDBUTTON_DOWN,
    POINTER_CHANGE_THIRDBUTTON_UP,
    POINTER_CHANGE_FOURTHBUTTON_DOWN,
    POINTER_CHANGE_FOURTHBUTTON_UP,
    POINTER_CHANGE_FIFTHBUTTON_DOWN,
    POINTER_CHANGE_FIFTHBUTTON_UP,
} POINTER_BUTTON_CHANGE_TYPE;
typedef struct tagPOINTER_INFO {
    POINTER_INPUT_TYPE pointerType;
    UINT32 pointerId;
    UINT32 frameId;
    POINTER_FLAGS pointerFlags;
    HANDLE sourceDevice;
    HWND hwndTarget;
    POINT ptPixelLocation;
    POINT ptHimetricLocation;
    POINT ptPixelLocationRaw;
    POINT ptHimetricLocationRaw;
    DWORD dwTime;
    UINT32 historyCount;
    INT32 InputData;
    DWORD dwKeyStates;
    UINT64 PerformanceCount;
    POINTER_BUTTON_CHANGE_TYPE ButtonChangeType;
} POINTER_INFO;
typedef UINT32 TOUCH_FLAGS;
typedef UINT32 TOUCH_MASK;
typedef struct tagPOINTER_TOUCH_INFO {
    POINTER_INFO pointerInfo;
    TOUCH_FLAGS touchFlags;
    TOUCH_MASK touchMask;
    RECT rcContact;
    RECT rcContactRaw;
    UINT32 orientation;
    UINT32 pressure;
} POINTER_TOUCH_INFO;
typedef UINT32 PEN_FLAGS;
typedef UINT32 PEN_MASK;
typedef struct tagPOINTER_PEN_INFO {
    POINTER_INFO pointerInfo;
    PEN_FLAGS penFlags;
    PEN_MASK penMask;
    UINT32 pressure;
    UINT32 rotation;
    INT32 tiltX;
    INT32 tiltY;
} POINTER_PEN_INFO;
typedef struct tagUSAGE_PROPERTIES {
    USHORT level;
    USHORT page;
    USHORT usage;
    INT32 logicalMinimum;
    INT32 logicalMaximum;
    USHORT unit;
    USHORT exponent;
    BYTE count;
    INT32 physicalMinimum;
    INT32 physicalMaximum;
}USAGE_PROPERTIES, *PUSAGE_PROPERTIES;
typedef struct tagPOINTER_TYPE_INFO {
    POINTER_INPUT_TYPE type;
    union{
        POINTER_TOUCH_INFO touchInfo;
        POINTER_PEN_INFO penInfo;
    }POINTER_CATEGORY;
}POINTER_TYPE_INFO, *PPOINTER_TYPE_INFO;
typedef struct tagINPUT_INJECTION_VALUE {
    USHORT page;
    USHORT usage;
    INT32 value;
    USHORT index;
}INPUT_INJECTION_VALUE, *PINPUT_INJECTION_VALUE;
WINUSERAPI
BOOL
WINAPI
InitializeInputDeviceInjection(
    _In_ USHORT page,
    _In_ USHORT caUsage,
    _In_reads_(cUsages) CONST PUSAGE_PROPERTIES usages,
    _In_ ULONG cUsages,
    _In_ HMONITOR monitor,
    _In_ DWORD visualMode,
    _Out_writes_(1) HANDLE* device
    );
WINUSERAPI
BOOL
WINAPI
InitializePointerDeviceInjection(
    _In_ POINTER_INPUT_TYPE type,
    _In_ ULONG contactCount,
    _In_ HMONITOR monitor,
    _In_ DWORD visualMode,
    _Out_writes_(1) HANDLE* device
    );
WINUSERAPI
BOOL
WINAPI
RemoveInjectionDevice(
    _In_ HANDLE hDevice
    );
WINUSERAPI
BOOL
WINAPI
SetFeatureReportResponse(
    _In_ HANDLE device,
    _In_reads_(count) CONST PINPUT_INJECTION_VALUE values,
    _In_ UINT32 count
    );
WINUSERAPI
BOOL
WINAPI
InjectDeviceInput(
    _In_ HANDLE device,
    _In_reads_(count) CONST PINPUT_INJECTION_VALUE values,
    _In_ UINT32 count
    );
WINUSERAPI
BOOL
WINAPI
InjectMouseInput(
    _In_reads_(count) CONST PMOUSEINPUT pMouseInput,
    _In_ UINT32 count
    );
WINUSERAPI
BOOL
WINAPI
InjectKeyboardInput(
    _In_reads_(count) CONST PKEYBDINPUT pKeyboardInput,
    _In_ UINT32 count
    );
WINUSERAPI
BOOL
WINAPI
InjectPointerInput(
    _In_ HANDLE device,
    _In_reads_(count) CONST POINTER_TYPE_INFO* pointerInfo,
    _In_ UINT32 count
    );
WINUSERAPI
BOOL
WINAPI
InitializePointerDeviceInjectionEx(
    _In_ POINTER_INPUT_TYPE type,
    _In_ ULONG contactCount,
    _In_ HMONITOR monitor,
    _In_ DWORD visualMode,
    _In_ DWORD workspaceId,
    _Out_writes_(1) HANDLE* device
    );
WINUSERAPI
BOOL
WINAPI
InitializeGenericHidInjection(
    _In_ PRIMIDE_GENERIC_HID_DEVICE_PROPERTIES pDeviceProperties,
    _Out_writes_(1) HANDLE* phDevice
    );
WINUSERAPI
BOOL
WINAPI
InjectGenericHidInput(
    _In_ HANDLE hDevice,
    _In_reads_(ulInputReportLength) CONST PUCHAR pInputReport,
    _In_ ULONG ulInputReportLength
    );
WINUSERAPI
NTSTATUS
WINAPI
RIMSetExtendedDeviceProperty(
    _In_ HANDLE hRimDev,
    _In_reads_bytes_(dwPropSize) PVOID pProperty,
    _In_ DWORD dwPropSize
    );
}
extern "C" {
BOOLEAN
__stdcall
IsRIMRegisterForInputPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMReadInputPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMAddInputObserverPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMUpdateInputObserverRegistrationPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMRemoveInputObserverPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMObserveNextInputPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMGetDevicePreparsedDataLockfreePresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMGetDevicePreparsedDataPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMGetDevicePropertiesLockfreePresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMGetDevicePropertiesPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMAreSiblingDevicesPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMFreeInputBufferPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMOnPnpNotificationPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMOnTimerNotificationPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMDeviceIoControlPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMUnregisterForInputPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMSetTestModeStatusPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMGetPhysicalDeviceRectPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMGetSourceProcessIdPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMEnableMonitorMappingForDevicePresent(
    VOID
    );
BOOLEAN
__stdcall
IsInitializeInputDeviceInjectionPresent(
    VOID
    );
BOOLEAN
__stdcall
IsInitializePointerDeviceInjectionPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRemoveInjectionDevicePresent(
    VOID
    );
BOOLEAN
__stdcall
IsSetFeatureReportResponsePresent(
    VOID
    );
BOOLEAN
__stdcall
IsInjectDeviceInputPresent(
    VOID
    );
BOOLEAN
__stdcall
IsInjectMouseInputPresent(
    VOID
    );
BOOLEAN
__stdcall
IsInjectKeyboardInputPresent(
    VOID
    );
BOOLEAN
__stdcall
IsInjectPointerInputPresent(
    VOID
    );
BOOLEAN
__stdcall
IsInitializePointerDeviceInjectionExPresent(
    VOID
    );
BOOLEAN
__stdcall
IsInitializeGenericHidInjectionPresent(
    VOID
    );
BOOLEAN
__stdcall
IsInjectGenericHidInputPresent(
    VOID
    );
BOOLEAN
__stdcall
IsRIMSetExtendedDevicePropertyPresent(
    VOID
    );
}
