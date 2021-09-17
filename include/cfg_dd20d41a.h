#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef enum _PNP_VETO_TYPE {
    PNP_VetoTypeUnknown,
    PNP_VetoLegacyDevice,
    PNP_VetoPendingClose,
    PNP_VetoWindowsApp,
    PNP_VetoWindowsService,
    PNP_VetoOutstandingOpen,
    PNP_VetoDevice,
    PNP_VetoDriver,
    PNP_VetoIllegalDeviceRequest,
    PNP_VetoInsufficientPower,
    PNP_VetoNonDisableable,
    PNP_VetoLegacyDriver,
    PNP_VetoInsufficientRights,
    PNP_VetoAlreadyRemoved,
} PNP_VETO_TYPE, *PPNP_VETO_TYPE;
                DN_HARDWARE_ENUM+\
                DN_HAS_MARK+\
                DN_DISABLEABLE+\
                DN_REMOVABLE+\
                DN_MF_CHILD+\
                DN_MF_PARENT+\
                DN_NOT_FIRST_TIMEE+\
                DN_STOP_FREE_RES+\
                DN_REBAL_CANDIDATE+\
                DN_NT_ENUMERATOR+\
                DN_NT_DRIVER+\
                DN_SILENT_INSTALL+\
                DN_NO_SHOW_IN_DM)
#endif
#pragma endregion
