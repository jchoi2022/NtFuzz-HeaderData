#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef unsigned short wchar_t;
#include <guiddef.h>
struct _DEV_BROADCAST_HDR {
    DWORD dbch_size;
    DWORD dbch_devicetype;
    DWORD dbch_reserved;
};
typedef struct _DEV_BROADCAST_HDR DEV_BROADCAST_HDR;
typedef DEV_BROADCAST_HDR DBTFAR *PDEV_BROADCAST_HDR;
typedef struct VolLockBroadcast VolLockBroadcast;
typedef VolLockBroadcast *pVolLockBroadcast;
struct VolLockBroadcast {
        struct _DEV_BROADCAST_HDR vlb_dbh;
        DWORD vlb_owner;
        BYTE vlb_perms;
        BYTE vlb_lockType;
        BYTE vlb_drive;
        BYTE vlb_flags;
};
struct _DEV_BROADCAST_HEADER {
    DWORD dbcd_size;
    DWORD dbcd_devicetype;
    DWORD dbcd_reserved;
};
struct _DEV_BROADCAST_OEM {
    DWORD dbco_size;
    DWORD dbco_devicetype;
    DWORD dbco_reserved;
    DWORD dbco_identifier;
    DWORD dbco_suppfunc;
};
typedef struct _DEV_BROADCAST_OEM DEV_BROADCAST_OEM;
typedef DEV_BROADCAST_OEM DBTFAR *PDEV_BROADCAST_OEM;
struct _DEV_BROADCAST_DEVNODE {
    DWORD dbcd_size;
    DWORD dbcd_devicetype;
    DWORD dbcd_reserved;
    DWORD dbcd_devnode;
};
typedef struct _DEV_BROADCAST_DEVNODE DEV_BROADCAST_DEVNODE;
typedef DEV_BROADCAST_DEVNODE DBTFAR *PDEV_BROADCAST_DEVNODE;
struct _DEV_BROADCAST_VOLUME {
    DWORD dbcv_size;
    DWORD dbcv_devicetype;
    DWORD dbcv_reserved;
    DWORD dbcv_unitmask;
    WORD dbcv_flags;
};
typedef struct _DEV_BROADCAST_VOLUME DEV_BROADCAST_VOLUME;
typedef DEV_BROADCAST_VOLUME DBTFAR *PDEV_BROADCAST_VOLUME;
typedef struct _DEV_BROADCAST_PORT_A {
    DWORD dbcp_size;
    DWORD dbcp_devicetype;
    DWORD dbcp_reserved;
    char dbcp_name[1];
} DEV_BROADCAST_PORT_A, *PDEV_BROADCAST_PORT_A;
typedef struct _DEV_BROADCAST_PORT_W {
    DWORD dbcp_size;
    DWORD dbcp_devicetype;
    DWORD dbcp_reserved;
    wchar_t dbcp_name[1];
} DEV_BROADCAST_PORT_W, DBTFAR *PDEV_BROADCAST_PORT_W;
typedef DEV_BROADCAST_PORT_W DEV_BROADCAST_PORT;
typedef PDEV_BROADCAST_PORT_W PDEV_BROADCAST_PORT;
struct _DEV_BROADCAST_NET {
    DWORD dbcn_size;
    DWORD dbcn_devicetype;
    DWORD dbcn_reserved;
    DWORD dbcn_resource;
    DWORD dbcn_flags;
};
typedef struct _DEV_BROADCAST_NET DEV_BROADCAST_NET;
typedef DEV_BROADCAST_NET DBTFAR *PDEV_BROADCAST_NET;
typedef struct _DEV_BROADCAST_DEVICEINTERFACE_A {
    DWORD dbcc_size;
    DWORD dbcc_devicetype;
    DWORD dbcc_reserved;
    GUID dbcc_classguid;
    char dbcc_name[1];
} DEV_BROADCAST_DEVICEINTERFACE_A, *PDEV_BROADCAST_DEVICEINTERFACE_A;
typedef struct _DEV_BROADCAST_DEVICEINTERFACE_W {
    DWORD dbcc_size;
    DWORD dbcc_devicetype;
    DWORD dbcc_reserved;
    GUID dbcc_classguid;
    wchar_t dbcc_name[1];
} DEV_BROADCAST_DEVICEINTERFACE_W, *PDEV_BROADCAST_DEVICEINTERFACE_W;
typedef DEV_BROADCAST_DEVICEINTERFACE_W DEV_BROADCAST_DEVICEINTERFACE;
typedef PDEV_BROADCAST_DEVICEINTERFACE_W PDEV_BROADCAST_DEVICEINTERFACE;
typedef struct _DEV_BROADCAST_HANDLE {
    DWORD dbch_size;
    DWORD dbch_devicetype;
    DWORD dbch_reserved;
    HANDLE dbch_handle;
    HDEVNOTIFY dbch_hdevnotify;
    GUID dbch_eventguid;
    LONG dbch_nameoffset;
    BYTE dbch_data[1];
} DEV_BROADCAST_HANDLE, *PDEV_BROADCAST_HANDLE;
typedef struct _DEV_BROADCAST_HANDLE32 {
    DWORD dbch_size;
    DWORD dbch_devicetype;
    DWORD dbch_reserved;
    ULONG32 dbch_handle;
    ULONG32 dbch_hdevnotify;
    GUID dbch_eventguid;
    LONG dbch_nameoffset;
    BYTE dbch_data[1];
} DEV_BROADCAST_HANDLE32, *PDEV_BROADCAST_HANDLE32;
typedef struct _DEV_BROADCAST_HANDLE64 {
    DWORD dbch_size;
    DWORD dbch_devicetype;
    DWORD dbch_reserved;
    ULONG64 dbch_handle;
    ULONG64 dbch_hdevnotify;
    GUID dbch_eventguid;
    LONG dbch_nameoffset;
    BYTE dbch_data[1];
} DEV_BROADCAST_HANDLE64, *PDEV_BROADCAST_HANDLE64;
struct _DEV_BROADCAST_USERDEFINED {
    struct _DEV_BROADCAST_HDR dbud_dbh;
    char dbud_szName[1];
};
#endif
#pragma endregion
