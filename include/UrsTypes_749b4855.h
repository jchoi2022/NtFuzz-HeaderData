    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef enum _URS_HOST_INTERFACE_TYPE {
    UrsHostInterfaceTypeEhci = 0,
    UrsHostInterfaceTypeXhci,
    UrsHostInterfaceTypeOther,
} URS_HOST_INTERFACE_TYPE;
typedef enum _URS_ROLE {
    UrsRoleNone = 0,
    UrsRoleHost,
    UrsRoleFunction,
} URS_ROLE, *PURS_ROLE;
typedef enum _URS_HARDWARE_EVENT {
    UrsHardwareEventNone = 0,
    UrsHardwareEventDetach,
    UrsHardwareEventIdGround,
    UrsHardwareEventIdFloat,
    UrsHardwareEventPortTypeDfp,
    UrsHardwareEventPortTypeUfp,
} URS_HARDWARE_EVENT, *PURS_HARDWARE_EVENT;
DECLARE_HANDLE(URSIORESLIST);
WDF_EXTERN_C_END
