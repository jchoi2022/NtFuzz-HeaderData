       
#include <InputEventFlags.h>
DEFINE_GUID( GUID_WP_DEVINTERFACE_TCH, 0x2c05ce1a, 0x75e8, 0x4ea7, 0xa7, 0xa, 0xe3, 0x23, 0xb0, 0x72, 0x25, 0x8c);
enum InputSessionFlag
{
    InputSessionFlag_None = 0x0000,
    InputSessionFlag_Begin = 0x0001,
    InputSessionFlag_End = 0x0004,
    InputSessionFlag_Hover = 0x0100,
    InputSessionFlag_EdgeGesture = 0x0200,
    InputSessionFlag_CapacitiveButton = 0x0400,
    InputSessionFlag_Mouse = 0x0800,
    InputSessionFlag_Cancel = 0x8000
};
enum ModifierKeyStateFlag
{
    ModifierKeyStateFlag_None = 0x0000,
    ModifierKeyStateFlag_Shift = 0x0001,
    ModifierKeyStateFlag_ShiftLeft = 0x0003,
    ModifierKeyStateFlag_ShiftRight = 0x0005,
    ModifierKeyStateFlag_ShiftMask = 0x0007,
    ModifierKeyStateFlag_Control = 0x0008,
    ModifierKeyStateFlag_ControlLeft = 0x0018,
    ModifierKeyStateFlag_ControlRight = 0x0028,
    ModifierKeyStateFlag_ControlMask = 0x0038,
    ModifierKeyStateFlag_Alt = 0x0040,
    ModifierKeyStateFlag_AltLeft = 0x00C0,
    ModifierKeyStateFlag_AltRight = 0x0140,
    ModifierKeyStateFlag_AltMask = 0x01C0,
    ModifierKeyStateFlag_Function = 0x0200,
    ModifierKeyStateFlag_FunctionLeft = 0x0600,
    ModifierKeyStateFlag_FunctionRight = 0x0A00,
    ModifierKeyStateFlag_FunctionMask = 0x0E00,
    ModifierKeyStateFlag_LockShift = 0x1000,
    ModifierKeyStateFlag_LockNum = 0x2000,
    ModifierKeyStateFlag_LockFunction = 0x4000,
    ModifierKeyStateFlag_LockMask = 0xF000,
    ModifierKeyStateFlag_RefreshModifier = 0x10000
};
struct MouseInfo
{
    DWORD dwFlags;
    DWORD dwTimeStamp;
    HANDLE hSource;
    SHORT xScreen;
    SHORT yScreen;
    SHORT xWindow;
    SHORT yWindow;
};
struct TouchContact
{
    WORD wContactID;
    WORD wFlags;
    SHORT xScreen;
    SHORT yScreen;
    SHORT xWindow;
    SHORT yWindow;
    SHORT xArea;
    SHORT yArea;
    SHORT zDistance;
    SHORT reserved;
    SHORT xTilt;
    SHORT yTilt;
    ULONG64 inputSink;
    FLOAT inputTransform[6];
};
static const DWORD c_cTouchContactsMaximum = 10;
struct TouchInfo
{
    WORD cbSize;
    WORD wFlags;
    DWORD dwTimeStamp;
    ULONG64 hSource;
    DWORD dwSessionID;
    BYTE reserved;
    BYTE cInRangeContacts;
    BYTE cInContactContacts;
    BYTE cContacts;
    TouchContact rgContacts[1];
};
static const DWORD c_cbTouchInfoMinimum = (sizeof(TouchInfo));
static const DWORD c_cbTouchInfoMaximum =
        (c_cbTouchInfoMinimum + (sizeof(TouchContact) * (c_cTouchContactsMaximum - 1)));
struct TouchInfoBuffer
{
    TouchInfo ti;
    TouchContact rgAdditionalContacts[c_cTouchContactsMaximum - 1];
};
static const DWORD c_cKeyEventCharacterMaximum = 16;
static const DWORD c_cKeyNameTextMaximum = 32;
struct ButtonEventInfo
{
    DWORD ButtonType;
    DWORD EventFlags;
    UINT64 DeviceId;
};
enum InputDeviceType
{
    InputDeviceType_Mouse = 0x0001,
    InputDeviceType_Touch = 0x0002,
    InputDeviceType_Keyboard = 0x0004,
    InputDeviceType_AllDevicesMask =
            InputDeviceType_Mouse |
            InputDeviceType_Touch |
            InputDeviceType_Keyboard
};
typedef struct _USAGE_INFO
{
    LONG LogMin;
    LONG LogMax;
    LONG PhyMin;
    LONG PhyMax;
    ULONG Units;
    ULONG UnitsExp;
    USHORT UsagePageId;
    USHORT UsageId;
} USAGE_INFO, *PUSAGE_INFO;
typedef struct _TOUCH_MAX_INPUTS
{
    UCHAR MaxContactCount;
    UCHAR MaxHoverCount;
} TOUCH_MAX_INPUTS, *PTOUCH_MAX_INPUTS;
inline DWORD
CalculateTouchInfoSize(
    DWORD cContacts)
{
    if ((cContacts > c_cTouchContactsMaximum) || (cContacts <= 0))
    {
        return 0;
    }
    else if (cContacts == 1)
    {
        return c_cbTouchInfoMinimum;
    }
    return (c_cbTouchInfoMinimum + (sizeof(TouchContact) * (cContacts - 1)));
}
