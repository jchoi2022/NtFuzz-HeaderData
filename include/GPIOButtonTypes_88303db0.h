       
typedef enum
{
    GPIO_BUTTON_POWER = 0,
    GPIO_BUTTON_WINDOWS = 1,
    GPIO_BUTTON_VOLUME_UP = 2,
    GPIO_BUTTON_VOLUME_DOWN = 3,
    GPIO_BUTTON_ROTATION_LOCK = 4,
    GPIO_BUTTON_BACK = 5,
    GPIO_BUTTON_SEARCH = 6,
    GPIO_BUTTON_CAMERA_FOCUS = 7,
    GPIO_BUTTON_CAMERA_SHUTTER = 8,
    GPIO_BUTTON_RINGER_TOGGLE = 9,
    GPIO_BUTTON_HEADSET = 10,
    GPIO_BUTTON_HWKB_DEPLOY = 11,
    GPIO_BUTTON_CAMERA_LENS = 12,
    GPIO_BUTTON_OEM_CUSTOM = 13,
    GPIO_BUTTON_OEM_CUSTOM2 = 14,
    GPIO_BUTTON_OEM_CUSTOM3 = 15,
    GPIO_BUTTON_COUNT_MIN = 5,
    GPIO_BUTTON_COUNT = 16
} GPIOBUTTONS_BUTTON_TYPE;
    CTL_CODE(FILE_DEVICE_KEYBOARD, 170, METHOD_BUFFERED, FILE_ANY_ACCESS)
typedef struct _INPUT_BUTTON_ENABLE_INFO
{
    GPIOBUTTONS_BUTTON_TYPE ButtonType;
    BOOLEAN Enabled;
} INPUT_BUTTON_ENABLE_INFO, *PINPUT_BUTTON_ENABLE_INFO;
    CTL_CODE(FILE_DEVICE_KEYBOARD, 171, METHOD_BUFFERED, FILE_ANY_ACCESS)
