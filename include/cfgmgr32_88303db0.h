#include <winapifamily.h>
#pragma region Desktop Family, OneCore Family, or App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP)
#include <cfg.h>
#include <devpropdef.h>
#include <guiddef.h>
extern "C" {
typedef CONST VOID *PCVOID;
typedef unsigned __int64 DWORDLONG;
typedef DWORDLONG *PDWORDLONG;
typedef _Return_type_success_(return == 0) DWORD RETURN_TYPE;
typedef RETURN_TYPE CONFIGRET;
typedef DWORD DEVNODE, DEVINST;
typedef DEVNODE *PDEVNODE, *PDEVINST;
typedef _Null_terminated_ CHAR *DEVNODEID_A, *DEVINSTID_A;
typedef _Null_terminated_ WCHAR *DEVNODEID_W, *DEVINSTID_W;
typedef DEVNODEID_W DEVNODEID;
typedef DEVINSTID_W DEVINSTID;
typedef DWORD_PTR LOG_CONF;
typedef LOG_CONF *PLOG_CONF;
typedef DWORD_PTR RES_DES;
typedef RES_DES *PRES_DES;
typedef ULONG RESOURCEID;
typedef RESOURCEID *PRESOURCEID;
typedef ULONG PRIORITY;
typedef PRIORITY *PPRIORITY;
typedef DWORD_PTR RANGE_LIST;
typedef RANGE_LIST *PRANGE_LIST;
typedef DWORD_PTR RANGE_ELEMENT;
typedef RANGE_ELEMENT *PRANGE_ELEMENT;
typedef HANDLE HMACHINE;
typedef HMACHINE *PHMACHINE;
typedef ULONG_PTR CONFLICT_LIST;
typedef CONFLICT_LIST *PCONFLICT_LIST;
typedef struct _CONFLICT_DETAILS_A {
    ULONG CD_ulSize;
    ULONG CD_ulMask;
    DEVINST CD_dnDevInst;
    RES_DES CD_rdResDes;
    ULONG CD_ulFlags;
    CHAR CD_szDescription[MAX_PATH];
} CONFLICT_DETAILS_A , *PCONFLICT_DETAILS_A;
typedef struct _CONFLICT_DETAILS_W {
    ULONG CD_ulSize;
    ULONG CD_ulMask;
    DEVINST CD_dnDevInst;
    RES_DES CD_rdResDes;
    ULONG CD_ulFlags;
    WCHAR CD_szDescription[MAX_PATH];
} CONFLICT_DETAILS_W , *PCONFLICT_DETAILS_W;
typedef CONFLICT_DETAILS_W CONFLICT_DETAILS;
typedef PCONFLICT_DETAILS_W PCONFLICT_DETAILS;
typedef ULONG REGDISPOSITION;
#include "pshpack1.h"
typedef struct Mem_Range_s {
   DWORDLONG MR_Align;
   ULONG MR_nBytes;
   DWORDLONG MR_Min;
   DWORDLONG MR_Max;
   DWORD MR_Flags;
   DWORD MR_Reserved;
} MEM_RANGE, *PMEM_RANGE;
typedef struct Mem_Des_s {
   DWORD MD_Count;
   DWORD MD_Type;
   DWORDLONG MD_Alloc_Base;
   DWORDLONG MD_Alloc_End;
   DWORD MD_Flags;
   DWORD MD_Reserved;
} MEM_DES, *PMEM_DES;
typedef struct Mem_Resource_s {
   MEM_DES MEM_Header;
   MEM_RANGE MEM_Data[ANYSIZE_ARRAY];
} MEM_RESOURCE, *PMEM_RESOURCE;
typedef struct Mem_Large_Range_s {
   DWORDLONG MLR_Align;
   ULONGLONG MLR_nBytes;
   DWORDLONG MLR_Min;
   DWORDLONG MLR_Max;
   DWORD MLR_Flags;
   DWORD MLR_Reserved;
} MEM_LARGE_RANGE, *PMEM_LARGE_RANGE;
typedef struct Mem_Large_Des_s {
   DWORD MLD_Count;
   DWORD MLD_Type;
   DWORDLONG MLD_Alloc_Base;
   DWORDLONG MLD_Alloc_End;
   DWORD MLD_Flags;
   DWORD MLD_Reserved;
} MEM_LARGE_DES, *PMEM_LARGE_DES;
typedef struct Mem_Large_Resource_s {
   MEM_LARGE_DES MEM_LARGE_Header;
   MEM_LARGE_RANGE MEM_LARGE_Data[ANYSIZE_ARRAY];
} MEM_LARGE_RESOURCE, *PMEM_LARGE_RESOURCE;
typedef struct IO_Range_s {
   DWORDLONG IOR_Align;
   DWORD IOR_nPorts;
   DWORDLONG IOR_Min;
   DWORDLONG IOR_Max;
   DWORD IOR_RangeFlags;
   DWORDLONG IOR_Alias;
} IO_RANGE, *PIO_RANGE;
typedef struct IO_Des_s {
   DWORD IOD_Count;
   DWORD IOD_Type;
   DWORDLONG IOD_Alloc_Base;
   DWORDLONG IOD_Alloc_End;
   DWORD IOD_DesFlags;
} IO_DES, *PIO_DES;
typedef struct IO_Resource_s {
   IO_DES IO_Header;
   IO_RANGE IO_Data[ANYSIZE_ARRAY];
} IO_RESOURCE, *PIO_RESOURCE;
typedef struct DMA_Range_s {
   ULONG DR_Min;
   ULONG DR_Max;
   ULONG DR_Flags;
} DMA_RANGE, *PDMA_RANGE;
typedef struct DMA_Des_s {
   DWORD DD_Count;
   DWORD DD_Type;
   DWORD DD_Flags;
   ULONG DD_Alloc_Chan;
} DMA_DES, *PDMA_DES;
typedef struct DMA_Resource_s {
   DMA_DES DMA_Header;
   DMA_RANGE DMA_Data[ANYSIZE_ARRAY];
} DMA_RESOURCE, *PDMA_RESOURCE;
typedef struct IRQ_Range_s {
   ULONG IRQR_Min;
   ULONG IRQR_Max;
   ULONG IRQR_Flags;
} IRQ_RANGE, *PIRQ_RANGE;
typedef struct IRQ_Des_32_s {
   DWORD IRQD_Count;
   DWORD IRQD_Type;
   DWORD IRQD_Flags;
   ULONG IRQD_Alloc_Num;
   ULONG32 IRQD_Affinity;
} IRQ_DES_32, *PIRQ_DES_32;
typedef struct IRQ_Des_64_s {
   DWORD IRQD_Count;
   DWORD IRQD_Type;
   DWORD IRQD_Flags;
   ULONG IRQD_Alloc_Num;
   ULONG64 IRQD_Affinity;
} IRQ_DES_64, *PIRQ_DES_64;
typedef IRQ_DES_64 IRQ_DES;
typedef PIRQ_DES_64 PIRQ_DES;
typedef struct IRQ_Resource_32_s {
   IRQ_DES_32 IRQ_Header;
   IRQ_RANGE IRQ_Data[ANYSIZE_ARRAY];
} IRQ_RESOURCE_32, *PIRQ_RESOURCE_32;
typedef struct IRQ_Resource_64_s {
   IRQ_DES_64 IRQ_Header;
   IRQ_RANGE IRQ_Data[ANYSIZE_ARRAY];
} IRQ_RESOURCE_64, *PIRQ_RESOURCE_64;
typedef IRQ_RESOURCE_64 IRQ_RESOURCE;
typedef PIRQ_RESOURCE_64 PIRQ_RESOURCE;
typedef struct DevPrivate_Range_s {
   DWORD PR_Data1;
   DWORD PR_Data2;
   DWORD PR_Data3;
} DEVPRIVATE_RANGE, *PDEVPRIVATE_RANGE;
typedef struct DevPrivate_Des_s {
   DWORD PD_Count;
   DWORD PD_Type;
   DWORD PD_Data1;
   DWORD PD_Data2;
   DWORD PD_Data3;
   DWORD PD_Flags;
} DEVPRIVATE_DES, *PDEVPRIVATE_DES;
typedef struct DevPrivate_Resource_s {
   DEVPRIVATE_DES PRV_Header;
   DEVPRIVATE_RANGE PRV_Data[ANYSIZE_ARRAY];
} DEVPRIVATE_RESOURCE, *PDEVPRIVATE_RESOURCE;
typedef struct CS_Des_s {
   DWORD CSD_SignatureLength;
   DWORD CSD_LegacyDataOffset;
   DWORD CSD_LegacyDataSize;
   DWORD CSD_Flags;
   GUID CSD_ClassGuid;
   BYTE CSD_Signature[ANYSIZE_ARRAY];
} CS_DES, *PCS_DES;
typedef struct CS_Resource_s {
   CS_DES CS_Header;
} CS_RESOURCE, *PCS_RESOURCE;
typedef struct PcCard_Des_s {
    DWORD PCD_Count;
    DWORD PCD_Type;
    DWORD PCD_Flags;
    BYTE PCD_ConfigIndex;
    BYTE PCD_Reserved[3];
    DWORD PCD_MemoryCardBase1;
    DWORD PCD_MemoryCardBase2;
    DWORD PCD_MemoryCardBase[PCD_MAX_MEMORY];
    WORD PCD_MemoryFlags[PCD_MAX_MEMORY];
    BYTE PCD_IoFlags[PCD_MAX_IO];
} PCCARD_DES, *PPCCARD_DES;
typedef struct PcCard_Resource_s {
   PCCARD_DES PcCard_Header;
} PCCARD_RESOURCE, *PPCCARD_RESOURCE;
typedef struct MfCard_Des_s {
    DWORD PMF_Count;
    DWORD PMF_Type;
    DWORD PMF_Flags;
    BYTE PMF_ConfigOptions;
    BYTE PMF_IoResourceIndex;
    BYTE PMF_Reserved[2];
    DWORD PMF_ConfigRegisterBase;
} MFCARD_DES, *PMFCARD_DES;
typedef struct MfCard_Resource_s {
   MFCARD_DES MfCard_Header;
} MFCARD_RESOURCE, *PMFCARD_RESOURCE;
typedef struct BusNumber_Range_s {
   ULONG BUSR_Min;
   ULONG BUSR_Max;
   ULONG BUSR_nBusNumbers;
   ULONG BUSR_Flags;
} BUSNUMBER_RANGE, *PBUSNUMBER_RANGE;
typedef struct BusNumber_Des_s {
   DWORD BUSD_Count;
   DWORD BUSD_Type;
   DWORD BUSD_Flags;
   ULONG BUSD_Alloc_Base;
   ULONG BUSD_Alloc_End;
} BUSNUMBER_DES, *PBUSNUMBER_DES;
typedef struct BusNumber_Resource_s {
   BUSNUMBER_DES BusNumber_Header;
   BUSNUMBER_RANGE BusNumber_Data[ANYSIZE_ARRAY];
} BUSNUMBER_RESOURCE, *PBUSNUMBER_RESOURCE;
typedef struct Connection_Des_s {
    DWORD COND_Type;
    DWORD COND_Flags;
    BYTE COND_Class;
    BYTE COND_ClassType;
    BYTE COND_Reserved1;
    BYTE COND_Reserved2;
    LARGE_INTEGER COND_Id;
} CONNECTION_DES, *PCONNECTION_DES;
typedef struct Connection_Resource_s {
    CONNECTION_DES Connection_Header;
} CONNECTION_RESOURCE, *PCONNECTION_RESOURCE;
typedef struct HWProfileInfo_sA {
   ULONG HWPI_ulHWProfile;
   CHAR HWPI_szFriendlyName[MAX_PROFILE_LEN];
   DWORD HWPI_dwFlags;
} HWPROFILEINFO_A, *PHWPROFILEINFO_A;
typedef struct HWProfileInfo_sW {
   ULONG HWPI_ulHWProfile;
   WCHAR HWPI_szFriendlyName[MAX_PROFILE_LEN];
   DWORD HWPI_dwFlags;
} HWPROFILEINFO_W, *PHWPROFILEINFO_W;
typedef HWPROFILEINFO_W HWPROFILEINFO;
typedef PHWPROFILEINFO_W PHWPROFILEINFO;
#include "poppack.h"
DECLARE_HANDLE(HCMNOTIFICATION);
typedef HCMNOTIFICATION *PHCMNOTIFICATION;
                                         CM_NOTIFY_FILTER_FLAG_ALL_DEVICE_INSTANCES)
typedef enum _CM_NOTIFY_FILTER_TYPE {
    CM_NOTIFY_FILTER_TYPE_DEVICEINTERFACE = 0,
    CM_NOTIFY_FILTER_TYPE_DEVICEHANDLE,
    CM_NOTIFY_FILTER_TYPE_DEVICEINSTANCE,
    CM_NOTIFY_FILTER_TYPE_MAX
} CM_NOTIFY_FILTER_TYPE, *PCM_NOTIFY_FILTER_TYPE;
typedef struct _CM_NOTIFY_FILTER {
    DWORD cbSize;
    DWORD Flags;
    CM_NOTIFY_FILTER_TYPE FilterType;
    DWORD Reserved;
    union {
        struct {
            GUID ClassGuid;
        } DeviceInterface;
        struct {
            HANDLE hTarget;
        } DeviceHandle;
        struct {
            WCHAR InstanceId[MAX_DEVICE_ID_LEN];
        } DeviceInstance;
    } u;
} CM_NOTIFY_FILTER, *PCM_NOTIFY_FILTER;
typedef enum _CM_NOTIFY_ACTION {
    CM_NOTIFY_ACTION_DEVICEINTERFACEARRIVAL = 0,
    CM_NOTIFY_ACTION_DEVICEINTERFACEREMOVAL,
    CM_NOTIFY_ACTION_DEVICEQUERYREMOVE,
    CM_NOTIFY_ACTION_DEVICEQUERYREMOVEFAILED,
    CM_NOTIFY_ACTION_DEVICEREMOVEPENDING,
    CM_NOTIFY_ACTION_DEVICEREMOVECOMPLETE,
    CM_NOTIFY_ACTION_DEVICECUSTOMEVENT,
    CM_NOTIFY_ACTION_DEVICEINSTANCEENUMERATED,
    CM_NOTIFY_ACTION_DEVICEINSTANCESTARTED,
    CM_NOTIFY_ACTION_DEVICEINSTANCEREMOVED,
    CM_NOTIFY_ACTION_MAX
} CM_NOTIFY_ACTION, *PCM_NOTIFY_ACTION;
typedef struct _CM_NOTIFY_EVENT_DATA {
    CM_NOTIFY_FILTER_TYPE FilterType;
    DWORD Reserved;
    union {
        struct {
            GUID ClassGuid;
            WCHAR SymbolicLink[ANYSIZE_ARRAY];
        } DeviceInterface;
        struct {
            GUID EventGuid;
            LONG NameOffset;
            DWORD DataSize;
            BYTE Data[ANYSIZE_ARRAY];
        } DeviceHandle;
        struct {
            WCHAR InstanceId[ANYSIZE_ARRAY];
        } DeviceInstance;
    } u;
} CM_NOTIFY_EVENT_DATA, *PCM_NOTIFY_EVENT_DATA;
_Pre_satisfies_(EventDataSize >= sizeof(CM_NOTIFY_EVENT_DATA))
typedef __callback DWORD (CALLBACK *PCM_NOTIFY_CALLBACK)(
    _In_ HCMNOTIFICATION hNotify,
    _In_opt_ PVOID Context,
    _In_ CM_NOTIFY_ACTION Action,
    _In_reads_bytes_(EventDataSize) PCM_NOTIFY_EVENT_DATA EventData,
    _In_ DWORD EventDataSize
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Add_Empty_Log_Conf(
    _Out_ PLOG_CONF plcLogConf,
    _In_ DEVINST dnDevInst,
    _In_ PRIORITY Priority,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Add_Empty_Log_Conf_Ex(
    _Out_ PLOG_CONF plcLogConf,
    _In_ DEVINST dnDevInst,
    _In_ PRIORITY Priority,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Add_IDA(
    _In_ DEVINST dnDevInst,
    _In_ PSTR pszID,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Add_IDW(
    _In_ DEVINST dnDevInst,
    _In_ PWSTR pszID,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Add_ID_ExA(
    _In_ DEVINST dnDevInst,
    _In_ PSTR pszID,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Add_ID_ExW(
    _In_ DEVINST dnDevInst,
    _In_ PWSTR pszID,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Add_Range(
    _In_ DWORDLONG ullStartValue,
    _In_ DWORDLONG ullEndValue,
    _In_ RANGE_LIST rlh,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Add_Res_Des(
    _Out_opt_ PRES_DES prdResDes,
    _In_ LOG_CONF lcLogConf,
    _In_ RESOURCEID ResourceID,
    _In_reads_bytes_(ResourceLen) PCVOID ResourceData,
    _In_ ULONG ResourceLen,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Add_Res_Des_Ex(
    _Out_opt_ PRES_DES prdResDes,
    _In_ LOG_CONF lcLogConf,
    _In_ RESOURCEID ResourceID,
    _In_reads_bytes_(ResourceLen) PCVOID ResourceData,
    _In_ ULONG ResourceLen,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Connect_MachineA(
    _In_opt_ PCSTR UNCServerName,
    _Out_ PHMACHINE phMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Connect_MachineW(
    _In_opt_ PCWSTR UNCServerName,
    _Out_ PHMACHINE phMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Create_DevNodeA(
    _Out_ PDEVINST pdnDevInst,
    _In_ DEVINSTID_A pDeviceID,
    _In_ DEVINST dnParent,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Create_DevNodeW(
    _Out_ PDEVINST pdnDevInst,
    _In_ DEVINSTID_W pDeviceID,
    _In_ DEVINST dnParent,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Create_DevNode_ExA(
    _Out_ PDEVINST pdnDevInst,
    _In_ DEVINSTID_A pDeviceID,
    _In_ DEVINST dnParent,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Create_DevNode_ExW(
    _Out_ PDEVINST pdnDevInst,
    _In_ DEVINSTID_W pDeviceID,
    _In_ DEVINST dnParent,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Create_Range_List(
    _Out_ PRANGE_LIST prlh,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Delete_Class_Key(
    _In_ LPGUID ClassGuid,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Delete_Class_Key_Ex(
    _In_ LPGUID ClassGuid,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Delete_DevNode_Key(
    _In_ DEVNODE dnDevNode,
    _In_ ULONG ulHardwareProfile,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Delete_DevNode_Key_Ex(
    _In_ DEVNODE dnDevNode,
    _In_ ULONG ulHardwareProfile,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Delete_Range(
    _In_ DWORDLONG ullStartValue,
    _In_ DWORDLONG ullEndValue,
    _In_ RANGE_LIST rlh,
    _In_ ULONG ulFlags
    );
__drv_preferredFunction("CM_Query_Resource_Conflict_List", "Obsolete")
CMAPI
CONFIGRET
WINAPI
CM_Detect_Resource_Conflict(
    _In_ DEVINST dnDevInst,
    _In_ RESOURCEID ResourceID,
    _In_reads_bytes_(ResourceLen) PCVOID ResourceData,
    _In_ ULONG ResourceLen,
    _Out_ PBOOL pbConflictDetected,
    _In_ ULONG ulFlags
    );
__drv_preferredFunction("CM_Query_Resource_Conflict_List", "Obsolete")
CMAPI
CONFIGRET
WINAPI
CM_Detect_Resource_Conflict_Ex(
    _In_ DEVINST dnDevInst,
    _In_ RESOURCEID ResourceID,
    _In_reads_bytes_(ResourceLen) PCVOID ResourceData,
    _In_ ULONG ResourceLen,
    _Out_ PBOOL pbConflictDetected,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Disable_DevNode(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Disable_DevNode_Ex(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Disconnect_Machine(
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Dup_Range_List(
    _In_ RANGE_LIST rlhOld,
    _In_ RANGE_LIST rlhNew,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Enable_DevNode(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Enable_DevNode_Ex(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Enumerate_Classes(
    _In_ ULONG ulClassIndex,
    _Out_ LPGUID ClassGuid,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Enumerate_Classes_Ex(
    _In_ ULONG ulClassIndex,
    _Out_ LPGUID ClassGuid,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Enumerate_EnumeratorsA(
    _In_ ULONG ulEnumIndex,
    _Out_writes_(*pulLength) PSTR Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Enumerate_EnumeratorsW(
    _In_ ULONG ulEnumIndex,
    _Out_writes_(*pulLength) PWSTR Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Enumerate_Enumerators_ExA(
    _In_ ULONG ulEnumIndex,
    _Out_writes_(*pulLength) PSTR Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Enumerate_Enumerators_ExW(
    _In_ ULONG ulEnumIndex,
    _Out_writes_(*pulLength) PWSTR Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Find_Range(
    _Out_ PDWORDLONG pullStart,
    _In_ DWORDLONG ullStart,
    _In_ ULONG ulLength,
    _In_ DWORDLONG ullAlignment,
    _In_ DWORDLONG ullEnd,
    _In_ RANGE_LIST rlh,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_First_Range(
    _In_ RANGE_LIST rlh,
    _Out_ PDWORDLONG pullStart,
    _Out_ PDWORDLONG pullEnd,
    _Out_ PRANGE_ELEMENT preElement,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Free_Log_Conf(
    _In_ LOG_CONF lcLogConfToBeFreed,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Free_Log_Conf_Ex(
    _In_ LOG_CONF lcLogConfToBeFreed,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Free_Log_Conf_Handle(
    _In_ LOG_CONF lcLogConf
    );
CMAPI
CONFIGRET
WINAPI
CM_Free_Range_List(
    _In_ RANGE_LIST rlh,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Free_Res_Des(
    _Out_opt_ PRES_DES prdResDes,
    _In_ RES_DES rdResDes,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Free_Res_Des_Ex(
    _Out_opt_ PRES_DES prdResDes,
    _In_ RES_DES rdResDes,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Free_Res_Des_Handle(
    _In_ RES_DES rdResDes
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Get_Child(
    _Out_ PDEVINST pdnDevInst,
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_Child_Ex(
    _Out_ PDEVINST pdnDevInst,
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Class_NameA(
    _In_ LPGUID ClassGuid,
    _Out_writes_opt_(*pulLength) PSTR Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Class_NameW(
    _In_ LPGUID ClassGuid,
    _Out_writes_opt_(*pulLength) PWSTR Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Class_Name_ExA(
    _In_ LPGUID ClassGuid,
    _Out_writes_opt_(*pulLength) PSTR Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Class_Name_ExW(
    _In_ LPGUID ClassGuid,
    _Out_writes_opt_(*pulLength) PWSTR Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Class_Key_NameA(
    _In_ LPGUID ClassGuid,
    _Out_writes_opt_(*pulLength) LPSTR pszKeyName,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Class_Key_NameW(
    _In_ LPGUID ClassGuid,
    _Out_writes_opt_(*pulLength) LPWSTR pszKeyName,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Class_Key_Name_ExA(
    _In_ LPGUID ClassGuid,
    _Out_writes_opt_(*pulLength) LPSTR pszKeyName,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Class_Key_Name_ExW(
    _In_ LPGUID ClassGuid,
    _Out_writes_opt_(*pulLength) LPWSTR pszKeyName,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Get_Depth(
    _Out_ PULONG pulDepth,
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_Depth_Ex(
    _Out_ PULONG pulDepth,
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_IDA(
    _In_ DEVINST dnDevInst,
    _Out_writes_(BufferLen) PSTR Buffer,
    _In_ ULONG BufferLen,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_IDW(
    _In_ DEVINST dnDevInst,
    _Out_writes_(BufferLen) PWSTR Buffer,
    _In_ ULONG BufferLen,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_ID_ExA(
    _In_ DEVINST dnDevInst,
    _Out_writes_(BufferLen) PSTR Buffer,
    _In_ ULONG BufferLen,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_ID_ExW(
    _In_ DEVINST dnDevInst,
    _Out_writes_(BufferLen) PWSTR Buffer,
    _In_ ULONG BufferLen,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_ID_ListA(
    _In_opt_ PCSTR pszFilter,
    _Out_writes_(BufferLen) PZZSTR Buffer,
    _In_ ULONG BufferLen,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_ID_ListW(
    _In_opt_ PCWSTR pszFilter,
    _Out_writes_(BufferLen) PZZWSTR Buffer,
    _In_ ULONG BufferLen,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_ID_List_ExA(
    _In_opt_ PCSTR pszFilter,
    _Out_writes_(BufferLen) PZZSTR Buffer,
    _In_ ULONG BufferLen,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_ID_List_ExW(
    _In_opt_ PCWSTR pszFilter,
    _Out_writes_(BufferLen) PZZWSTR Buffer,
    _In_ ULONG BufferLen,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_ID_List_SizeA(
    _Out_ PULONG pulLen,
    _In_opt_ PCSTR pszFilter,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_ID_List_SizeW(
    _Out_ PULONG pulLen,
    _In_opt_ PCWSTR pszFilter,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_ID_List_Size_ExA(
    _Out_ PULONG pulLen,
    _In_opt_ PCSTR pszFilter,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_ID_List_Size_ExW(
    _Out_ PULONG pulLen,
    _In_opt_ PCWSTR pszFilter,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_ID_Size(
    _Out_ PULONG pulLen,
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_ID_Size_Ex(
    _Out_ PULONG pulLen,
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Get_DevNode_PropertyW(
    _In_ DEVINST dnDevInst,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _Out_ DEVPROPTYPE *PropertyType,
    _Out_writes_bytes_opt_(*PropertyBufferSize) PBYTE PropertyBuffer,
    _Inout_ PULONG PropertyBufferSize,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_DevNode_Property_ExW(
    _In_ DEVINST dnDevInst,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _Out_ DEVPROPTYPE *PropertyType,
    _Out_writes_bytes_opt_(*PropertyBufferSize) PBYTE PropertyBuffer,
    _Inout_ PULONG PropertyBufferSize,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Get_DevNode_Property_Keys(
    _In_ DEVINST dnDevInst,
    _Out_writes_opt_(*PropertyKeyCount) DEVPROPKEY *PropertyKeyArray,
    _Inout_ PULONG PropertyKeyCount,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_DevNode_Property_Keys_Ex(
    _In_ DEVINST dnDevInst,
    _Out_writes_opt_(*PropertyKeyCount) DEVPROPKEY *PropertyKeyArray,
    _Inout_ PULONG PropertyKeyCount,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Get_DevNode_Registry_PropertyA(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulProperty,
    _Out_opt_ PULONG pulRegDataType,
    _Out_writes_bytes_opt_(*pulLength) PVOID Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_DevNode_Registry_PropertyW(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulProperty,
    _Out_opt_ PULONG pulRegDataType,
    _Out_writes_bytes_opt_(*pulLength) PVOID Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_DevNode_Registry_Property_ExA(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulProperty,
    _Out_opt_ PULONG pulRegDataType,
    _Out_writes_bytes_opt_(*pulLength) PVOID Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_DevNode_Registry_Property_ExW(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulProperty,
    _Out_opt_ PULONG pulRegDataType,
    _Out_writes_bytes_opt_(*pulLength) PVOID Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_DevNode_Custom_PropertyA(
    _In_ DEVINST dnDevInst,
    _In_ PCSTR pszCustomPropertyName,
    _Out_opt_ PULONG pulRegDataType,
    _Out_writes_bytes_opt_(*pulLength) PVOID Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_DevNode_Custom_PropertyW(
    _In_ DEVINST dnDevInst,
    _In_ PCWSTR pszCustomPropertyName,
    _Out_opt_ PULONG pulRegDataType,
    _Out_writes_bytes_opt_(*pulLength) PVOID Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_DevNode_Custom_Property_ExA(
    _In_ DEVINST dnDevInst,
    _In_ PCSTR pszCustomPropertyName,
    _Out_opt_ PULONG pulRegDataType,
    _Out_writes_bytes_opt_(*pulLength) PVOID Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_DevNode_Custom_Property_ExW(
    _In_ DEVINST dnDevInst,
    _In_ PCWSTR pszCustomPropertyName,
    _Out_opt_ PULONG pulRegDataType,
    _Out_writes_bytes_opt_(*pulLength) PVOID Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Get_DevNode_Status(
    _Out_ PULONG pulStatus,
    _Out_ PULONG pulProblemNumber,
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_DevNode_Status_Ex(
    _Out_ PULONG pulStatus,
    _Out_ PULONG pulProblemNumber,
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_First_Log_Conf(
    _Out_opt_ PLOG_CONF plcLogConf,
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_First_Log_Conf_Ex(
    _Out_opt_ PLOG_CONF plcLogConf,
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Global_State(
    _Out_ PULONG pulState,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Global_State_Ex(
    _Out_ PULONG pulState,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Hardware_Profile_InfoA(
    _In_ ULONG ulIndex,
    _Out_ PHWPROFILEINFO_A pHWProfileInfo,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Hardware_Profile_Info_ExA(
    _In_ ULONG ulIndex,
    _Out_ PHWPROFILEINFO_A pHWProfileInfo,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Hardware_Profile_InfoW(
    _In_ ULONG ulIndex,
    _Out_ PHWPROFILEINFO_W pHWProfileInfo,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Hardware_Profile_Info_ExW(
    _In_ ULONG ulIndex,
    _Out_ PHWPROFILEINFO_W pHWProfileInfo,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_HW_Prof_FlagsA(
    _In_ DEVINSTID_A pDeviceID,
    _In_ ULONG ulHardwareProfile,
    _Out_ PULONG pulValue,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_HW_Prof_FlagsW(
    _In_ DEVINSTID_W pDeviceID,
    _In_ ULONG ulHardwareProfile,
    _Out_ PULONG pulValue,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_HW_Prof_Flags_ExA(
    _In_ DEVINSTID_A pDeviceID,
    _In_ ULONG ulHardwareProfile,
    _Out_ PULONG pulValue,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_HW_Prof_Flags_ExW(
    _In_ DEVINSTID_W pDeviceID,
    _In_ ULONG ulHardwareProfile,
    _Out_ PULONG pulValue,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_Interface_AliasA(
    _In_ LPCSTR pszDeviceInterface,
    _In_ LPGUID AliasInterfaceGuid,
    _Out_writes_(*pulLength) LPSTR pszAliasDeviceInterface,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_Interface_AliasW(
    _In_ LPCWSTR pszDeviceInterface,
    _In_ LPGUID AliasInterfaceGuid,
    _Out_writes_(*pulLength) LPWSTR pszAliasDeviceInterface,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_Interface_Alias_ExA(
    _In_ LPCSTR pszDeviceInterface,
    _In_ LPGUID AliasInterfaceGuid,
    _Out_writes_(*pulLength) LPSTR pszAliasDeviceInterface,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_Interface_Alias_ExW(
    _In_ LPCWSTR pszDeviceInterface,
    _In_ LPGUID AliasInterfaceGuid,
    _Out_writes_(*pulLength) LPWSTR pszAliasDeviceInterface,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family, OneCore Family, or App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP)
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_Interface_ListA(
    _In_ LPGUID InterfaceClassGuid,
    _In_opt_ DEVINSTID_A pDeviceID,
    _Out_writes_(BufferLen) PZZSTR Buffer,
    _In_ ULONG BufferLen,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_Interface_ListW(
    _In_ LPGUID InterfaceClassGuid,
    _In_opt_ DEVINSTID_W pDeviceID,
    _Out_writes_(BufferLen) PZZWSTR Buffer,
    _In_ ULONG BufferLen,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_Interface_List_ExA(
    _In_ LPGUID InterfaceClassGuid,
    _In_opt_ DEVINSTID_A pDeviceID,
    _Out_writes_(BufferLen) PZZSTR Buffer,
    _In_ ULONG BufferLen,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_Interface_List_ExW(
    _In_ LPGUID InterfaceClassGuid,
    _In_opt_ DEVINSTID_W pDeviceID,
    _Out_writes_(BufferLen) PZZWSTR Buffer,
    _In_ ULONG BufferLen,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family, OneCore Family, or App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP)
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_Interface_List_SizeA(
    _Out_ PULONG pulLen,
    _In_ LPGUID InterfaceClassGuid,
    _In_opt_ DEVINSTID_A pDeviceID,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_Interface_List_SizeW(
    _Out_ PULONG pulLen,
    _In_ LPGUID InterfaceClassGuid,
    _In_opt_ DEVINSTID_W pDeviceID,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_Interface_List_Size_ExA(
    _Out_ PULONG pulLen,
    _In_ LPGUID InterfaceClassGuid,
    _In_opt_ DEVINSTID_A pDeviceID,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_Interface_List_Size_ExW(
    _Out_ PULONG pulLen,
    _In_ LPGUID InterfaceClassGuid,
    _In_opt_ DEVINSTID_W pDeviceID,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_Interface_PropertyW(
    _In_ LPCWSTR pszDeviceInterface,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _Out_ DEVPROPTYPE *PropertyType,
    _Out_writes_bytes_opt_(*PropertyBufferSize) PBYTE PropertyBuffer,
    _Inout_ PULONG PropertyBufferSize,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_Interface_Property_ExW(
    _In_ LPCWSTR pszDeviceInterface,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _Out_ DEVPROPTYPE *PropertyType,
    _Out_writes_bytes_opt_(*PropertyBufferSize) PBYTE PropertyBuffer,
    _Inout_ PULONG PropertyBufferSize,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_Interface_Property_KeysW(
    _In_ LPCWSTR pszDeviceInterface,
    _Out_writes_opt_(*PropertyKeyCount) DEVPROPKEY *PropertyKeyArray,
    _Inout_ PULONG PropertyKeyCount,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_Device_Interface_Property_Keys_ExW(
    _In_ LPCWSTR pszDeviceInterface,
    _Out_writes_opt_(*PropertyKeyCount) DEVPROPKEY *PropertyKeyArray,
    _Inout_ PULONG PropertyKeyCount,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_Log_Conf_Priority(
    _In_ LOG_CONF lcLogConf,
    _Out_ PPRIORITY pPriority,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Log_Conf_Priority_Ex(
    _In_ LOG_CONF lcLogConf,
    _Out_ PPRIORITY pPriority,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Next_Log_Conf(
    _Out_opt_ PLOG_CONF plcLogConf,
    _In_ LOG_CONF lcLogConf,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Next_Log_Conf_Ex(
    _Out_opt_ PLOG_CONF plcLogConf,
    _In_ LOG_CONF lcLogConf,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Get_Parent(
    _Out_ PDEVINST pdnDevInst,
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_Parent_Ex(
    _Out_ PDEVINST pdnDevInst,
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Res_Des_Data(
    _In_ RES_DES rdResDes,
    _Out_writes_bytes_(BufferLen) PVOID Buffer,
    _In_ ULONG BufferLen,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Res_Des_Data_Ex(
    _In_ RES_DES rdResDes,
    _Out_writes_bytes_(BufferLen) PVOID Buffer,
    _In_ ULONG BufferLen,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Res_Des_Data_Size(
    _Out_ PULONG pulSize,
    _In_ RES_DES rdResDes,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Res_Des_Data_Size_Ex(
    _Out_ PULONG pulSize,
    _In_ RES_DES rdResDes,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Get_Sibling(
    _Out_ PDEVINST pdnDevInst,
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_Sibling_Ex(
    _Out_ PDEVINST pdnDevInst,
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
WORD
WINAPI
CM_Get_Version(
    VOID
    );
CMAPI
WORD
WINAPI
CM_Get_Version_Ex(
    _In_opt_ HMACHINE hMachine
    );
CMAPI
BOOL
WINAPI
CM_Is_Version_Available(
    _In_ WORD wVersion
    );
CMAPI
BOOL
WINAPI
CM_Is_Version_Available_Ex(
    _In_ WORD wVersion,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Intersect_Range_List(
    _In_ RANGE_LIST rlhOld1,
    _In_ RANGE_LIST rlhOld2,
    _In_ RANGE_LIST rlhNew,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Invert_Range_List(
    _In_ RANGE_LIST rlhOld,
    _In_ RANGE_LIST rlhNew,
    _In_ DWORDLONG ullMaxValue,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Locate_DevNodeA(
    _Out_ PDEVINST pdnDevInst,
    _In_opt_ DEVINSTID_A pDeviceID,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Locate_DevNodeW(
    _Out_ PDEVINST pdnDevInst,
    _In_opt_ DEVINSTID_W pDeviceID,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Locate_DevNode_ExA(
    _Out_ PDEVINST pdnDevInst,
    _In_opt_ DEVINSTID_A pDeviceID,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Locate_DevNode_ExW(
    _Out_ PDEVINST pdnDevInst,
    _In_opt_ DEVINSTID_W pDeviceID,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Merge_Range_List(
    _In_ RANGE_LIST rlhOld1,
    _In_ RANGE_LIST rlhOld2,
    _In_ RANGE_LIST rlhNew,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Modify_Res_Des(
    _Out_ PRES_DES prdResDes,
    _In_ RES_DES rdResDes,
    _In_ RESOURCEID ResourceID,
    _In_reads_bytes_(ResourceLen) PCVOID ResourceData,
    _In_ ULONG ResourceLen,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Modify_Res_Des_Ex(
    _Out_ PRES_DES prdResDes,
    _In_ RES_DES rdResDes,
    _In_ RESOURCEID ResourceID,
    _In_reads_bytes_(ResourceLen) PCVOID ResourceData,
    _In_ ULONG ResourceLen,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Move_DevNode(
    _In_ DEVINST dnFromDevInst,
    _In_ DEVINST dnToDevInst,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Move_DevNode_Ex(
    _In_ DEVINST dnFromDevInst,
    _In_ DEVINST dnToDevInst,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Next_Range(
    _Inout_ PRANGE_ELEMENT preElement,
    _Out_ PDWORDLONG pullStart,
    _Out_ PDWORDLONG pullEnd,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Next_Res_Des(
    _Out_ PRES_DES prdResDes,
    _In_ RES_DES rdResDes,
    _In_ RESOURCEID ForResource,
    _Out_opt_ PRESOURCEID pResourceID,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Next_Res_Des_Ex(
    _Out_ PRES_DES prdResDes,
    _In_ RES_DES rdResDes,
    _In_ RESOURCEID ForResource,
    _Out_opt_ PRESOURCEID pResourceID,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Open_Class_KeyA(
    _In_opt_ LPGUID ClassGuid,
    _In_opt_ LPCSTR pszClassName,
    _In_ REGSAM samDesired,
    _In_ REGDISPOSITION Disposition,
    _Out_ PHKEY phkClass,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Open_Class_KeyW(
    _In_opt_ LPGUID ClassGuid,
    _In_opt_ LPCWSTR pszClassName,
    _In_ REGSAM samDesired,
    _In_ REGDISPOSITION Disposition,
    _Out_ PHKEY phkClass,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Open_Class_Key_ExA(
    _In_opt_ LPGUID ClassGuid,
    _In_opt_ LPCSTR pszClassName,
    _In_ REGSAM samDesired,
    _In_ REGDISPOSITION Disposition,
    _Out_ PHKEY phkClass,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Open_Class_Key_ExW(
    _In_opt_ LPGUID ClassGuid,
    _In_opt_ LPCWSTR pszClassName,
    _In_ REGSAM samDesired,
    _In_ REGDISPOSITION Disposition,
    _Out_ PHKEY phkClass,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Open_DevNode_Key(
    _In_ DEVINST dnDevNode,
    _In_ REGSAM samDesired,
    _In_ ULONG ulHardwareProfile,
    _In_ REGDISPOSITION Disposition,
    _Out_ PHKEY phkDevice,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Open_DevNode_Key_Ex(
    _In_ DEVINST dnDevNode,
    _In_ REGSAM samDesired,
    _In_ ULONG ulHardwareProfile,
    _In_ REGDISPOSITION Disposition,
    _Out_ PHKEY phkDevice,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Open_Device_Interface_KeyA(
    _In_ LPCSTR pszDeviceInterface,
    _In_ REGSAM samDesired,
    _In_ REGDISPOSITION Disposition,
    _Out_ PHKEY phkDeviceInterface,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Open_Device_Interface_KeyW(
    _In_ LPCWSTR pszDeviceInterface,
    _In_ REGSAM samDesired,
    _In_ REGDISPOSITION Disposition,
    _Out_ PHKEY phkDeviceInterface,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Open_Device_Interface_Key_ExA(
    _In_ LPCSTR pszDeviceInterface,
    _In_ REGSAM samDesired,
    _In_ REGDISPOSITION Disposition,
    _Out_ PHKEY phkDeviceInterface,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Open_Device_Interface_Key_ExW(
    _In_ LPCWSTR pszDeviceInterface,
    _In_ REGSAM samDesired,
    _In_ REGDISPOSITION Disposition,
    _Out_ PHKEY phkDeviceInterface,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Delete_Device_Interface_KeyA(
    _In_ LPCSTR pszDeviceInterface,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Delete_Device_Interface_KeyW(
    _In_ LPCWSTR pszDeviceInterface,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Delete_Device_Interface_Key_ExA(
    _In_ LPCSTR pszDeviceInterface,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Delete_Device_Interface_Key_ExW(
    _In_ LPCWSTR pszDeviceInterface,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Query_Arbitrator_Free_Data(
    _Out_writes_bytes_(DataLen) PVOID pData,
    _In_ ULONG DataLen,
    _In_ DEVINST dnDevInst,
    _In_ RESOURCEID ResourceID,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Query_Arbitrator_Free_Data_Ex(
    _Out_writes_bytes_(DataLen) PVOID pData,
    _In_ ULONG DataLen,
    _In_ DEVINST dnDevInst,
    _In_ RESOURCEID ResourceID,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Query_Arbitrator_Free_Size(
    _Out_ PULONG pulSize,
    _In_ DEVINST dnDevInst,
    _In_ RESOURCEID ResourceID,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Query_Arbitrator_Free_Size_Ex(
    _Out_ PULONG pulSize,
    _In_ DEVINST dnDevInst,
    _In_ RESOURCEID ResourceID,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Query_Remove_SubTree(
    _In_ DEVINST dnAncestor,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Query_Remove_SubTree_Ex(
    _In_ DEVINST dnAncestor,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Query_And_Remove_SubTreeA(
    _In_ DEVINST dnAncestor,
    _Out_opt_ PPNP_VETO_TYPE pVetoType,
    _Out_writes_opt_(ulNameLength) LPSTR pszVetoName,
    _In_ ULONG ulNameLength,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Query_And_Remove_SubTreeW(
    _In_ DEVINST dnAncestor,
    _Out_opt_ PPNP_VETO_TYPE pVetoType,
    _Out_writes_opt_(ulNameLength) LPWSTR pszVetoName,
    _In_ ULONG ulNameLength,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Query_And_Remove_SubTree_ExA(
    _In_ DEVINST dnAncestor,
    _Out_opt_ PPNP_VETO_TYPE pVetoType,
    _Out_writes_opt_(ulNameLength) LPSTR pszVetoName,
    _In_ ULONG ulNameLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Query_And_Remove_SubTree_ExW(
    _In_ DEVINST dnAncestor,
    _Out_opt_ PPNP_VETO_TYPE pVetoType,
    _Out_writes_opt_(ulNameLength) LPWSTR pszVetoName,
    _In_ ULONG ulNameLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Request_Device_EjectA(
    _In_ DEVINST dnDevInst,
    _Out_opt_ PPNP_VETO_TYPE pVetoType,
    _Out_writes_opt_(ulNameLength) LPSTR pszVetoName,
    _In_ ULONG ulNameLength,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Request_Device_Eject_ExA(
    _In_ DEVINST dnDevInst,
    _Out_opt_ PPNP_VETO_TYPE pVetoType,
    _Out_writes_opt_(ulNameLength) LPSTR pszVetoName,
    _In_ ULONG ulNameLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Request_Device_EjectW(
    _In_ DEVINST dnDevInst,
    _Out_opt_ PPNP_VETO_TYPE pVetoType,
    _Out_writes_opt_(ulNameLength) LPWSTR pszVetoName,
    _In_ ULONG ulNameLength,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Request_Device_Eject_ExW(
    _In_ DEVINST dnDevInst,
    _Out_opt_ PPNP_VETO_TYPE pVetoType,
    _Out_writes_opt_(ulNameLength) LPWSTR pszVetoName,
    _In_ ULONG ulNameLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Reenumerate_DevNode(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Reenumerate_DevNode_Ex(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Register_Device_InterfaceA(
    _In_ DEVINST dnDevInst,
    _In_ LPGUID InterfaceClassGuid,
    _In_opt_ LPCSTR pszReference,
    _Out_writes_(*pulLength) LPSTR pszDeviceInterface,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Register_Device_InterfaceW(
    _In_ DEVINST dnDevInst,
    _In_ LPGUID InterfaceClassGuid,
    _In_opt_ LPCWSTR pszReference,
    _Out_writes_(*pulLength) LPWSTR pszDeviceInterface,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Register_Device_Interface_ExA(
    _In_ DEVINST dnDevInst,
    _In_ LPGUID InterfaceClassGuid,
    _In_opt_ LPCSTR pszReference,
    _Out_writes_(*pulLength) LPSTR pszDeviceInterface,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Register_Device_Interface_ExW(
    _In_ DEVINST dnDevInst,
    _In_ LPGUID InterfaceClassGuid,
    _In_opt_ LPCWSTR pszReference,
    _Out_writes_(*pulLength) LPWSTR pszDeviceInterface,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Set_DevNode_Problem_Ex(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulProblem,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Set_DevNode_Problem(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulProblem,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Unregister_Device_InterfaceA(
    _In_ LPCSTR pszDeviceInterface,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Unregister_Device_InterfaceW(
    _In_ LPCWSTR pszDeviceInterface,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Unregister_Device_Interface_ExA(
    _In_ LPCSTR pszDeviceInterface,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Unregister_Device_Interface_ExW(
    _In_ LPCWSTR pszDeviceInterface,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Register_Device_Driver(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Register_Device_Driver_Ex(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
__drv_preferredFunction("CM_Query_And_Remove_Subtree", "Obsolete")
CMAPI
CONFIGRET
WINAPI
CM_Remove_SubTree(
    _In_ DEVINST dnAncestor,
    _In_ ULONG ulFlags
    );
__drv_preferredFunction("CM_Query_And_Remove_Subtree_Ex", "Obsolete")
CMAPI
CONFIGRET
WINAPI
CM_Remove_SubTree_Ex(
    _In_ DEVINST dnAncestor,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Set_DevNode_PropertyW(
    _In_ DEVINST dnDevInst,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _In_ DEVPROPTYPE PropertyType,
    _In_reads_bytes_opt_(PropertyBufferSize) CONST PBYTE PropertyBuffer,
    _In_ ULONG PropertyBufferSize,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Set_DevNode_Property_ExW(
    _In_ DEVINST dnDevInst,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _In_ DEVPROPTYPE PropertyType,
    _In_reads_bytes_opt_(PropertyBufferSize) CONST PBYTE PropertyBuffer,
    _In_ ULONG PropertyBufferSize,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Set_DevNode_Registry_PropertyA(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulProperty,
    _In_reads_bytes_opt_(ulLength) PCVOID Buffer,
    _In_ ULONG ulLength,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Set_DevNode_Registry_PropertyW(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulProperty,
    _In_reads_bytes_opt_(ulLength) PCVOID Buffer,
    _In_ ULONG ulLength,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Set_DevNode_Registry_Property_ExA(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulProperty,
    _In_reads_bytes_opt_(ulLength) PCVOID Buffer,
    _In_ ULONG ulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Set_DevNode_Registry_Property_ExW(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulProperty,
    _In_reads_bytes_opt_(ulLength) PCVOID Buffer,
    _In_ ULONG ulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Set_Device_Interface_PropertyW(
    _In_ LPCWSTR pszDeviceInterface,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _In_ DEVPROPTYPE PropertyType,
    _In_reads_bytes_opt_(PropertyBufferSize) CONST PBYTE PropertyBuffer,
    _In_ ULONG PropertyBufferSize,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Set_Device_Interface_Property_ExW(
    _In_ LPCWSTR pszDeviceInterface,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _In_ DEVPROPTYPE PropertyType,
    _In_reads_bytes_opt_(PropertyBufferSize) CONST PBYTE PropertyBuffer,
    _In_ ULONG PropertyBufferSize,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Is_Dock_Station_Present(
    _Out_ PBOOL pbPresent
    );
CMAPI
CONFIGRET
WINAPI
CM_Is_Dock_Station_Present_Ex(
    _Out_ PBOOL pbPresent,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Request_Eject_PC(
    VOID
    );
CMAPI
CONFIGRET
WINAPI
CM_Request_Eject_PC_Ex(
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Set_HW_Prof_FlagsA(
    _In_ DEVINSTID_A pDeviceID,
    _In_ ULONG ulConfig,
    _In_ ULONG ulValue,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Set_HW_Prof_FlagsW(
    _In_ DEVINSTID_W pDeviceID,
    _In_ ULONG ulConfig,
    _In_ ULONG ulValue,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Set_HW_Prof_Flags_ExA(
    _In_ DEVINSTID_A pDeviceID,
    _In_ ULONG ulConfig,
    _In_ ULONG ulValue,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Set_HW_Prof_Flags_ExW(
    _In_ DEVINSTID_W pDeviceID,
    _In_ ULONG ulConfig,
    _In_ ULONG ulValue,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Setup_DevNode(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Setup_DevNode_Ex(
    _In_ DEVINST dnDevInst,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Test_Range_Available(
    _In_ DWORDLONG ullStartValue,
    _In_ DWORDLONG ullEndValue,
    _In_ RANGE_LIST rlh,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Uninstall_DevNode(
    _In_ DEVNODE dnDevInst,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Uninstall_DevNode_Ex(
    _In_ DEVNODE dnDevInst,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Run_Detection(
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Run_Detection_Ex(
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CONFIGRET
CM_Apply_PowerScheme(
    VOID
    );
CONFIGRET
CM_Write_UserPowerKey(
    _In_opt_ CONST GUID *SchemeGuid,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _In_ ULONG AccessFlags,
    _In_ ULONG Type,
    _In_reads_bytes_(BufferSize) UCHAR *Buffer,
    _In_ DWORD BufferSize,
    _Out_ PDWORD Error
    );
CONFIGRET
CM_Set_ActiveScheme(
    _In_ CONST GUID *SchemeGuid,
    _Out_ PDWORD Error
    );
CONFIGRET
CM_Restore_DefaultPowerScheme(
    _In_ CONST GUID *SchemeGuid,
    _Out_ PDWORD Error
    );
CONFIGRET
CM_RestoreAll_DefaultPowerSchemes(
    _Out_ PDWORD Error
    );
CONFIGRET
CM_Duplicate_PowerScheme (
    _In_ CONST GUID *SourceSchemeGuid,
    _Inout_ GUID **DestinationSchemeGuid,
    _Out_ PDWORD Error
    );
CONFIGRET
CM_Delete_PowerScheme (
    _In_ CONST GUID *SchemeGuid,
    _Out_ PDWORD Error
    );
CONFIGRET
CM_Import_PowerScheme (
    _In_ LPCWSTR ImportFileNamePath,
    _Inout_ GUID **DestinationSchemeGuid,
    _Out_ PDWORD Error
    );
CMAPI
CONFIGRET
WINAPI
CM_Set_HW_Prof(
    _In_ ULONG ulHardwareProfile,
    _In_ ULONG ulFlags
    );
CMAPI
CONFIGRET
WINAPI
CM_Set_HW_Prof_Ex(
    _In_ ULONG ulHardwareProfile,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Query_Resource_Conflict_List(
    _Out_ PCONFLICT_LIST pclConflictList,
    _In_ DEVINST dnDevInst,
    _In_ RESOURCEID ResourceID,
    _In_reads_bytes_(ResourceLen) PCVOID ResourceData,
    _In_ ULONG ResourceLen,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Free_Resource_Conflict_Handle(
    _In_ CONFLICT_LIST clConflictList
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Resource_Conflict_Count(
    _In_ CONFLICT_LIST clConflictList,
    _Out_ PULONG pulCount
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Resource_Conflict_DetailsA(
    _In_ CONFLICT_LIST clConflictList,
    _In_ ULONG ulIndex,
    _Inout_ PCONFLICT_DETAILS_A pConflictDetails
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Resource_Conflict_DetailsW(
    _In_ CONFLICT_LIST clConflictList,
    _In_ ULONG ulIndex,
    _Inout_ PCONFLICT_DETAILS_W pConflictDetails
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Get_Class_PropertyW(
    _In_ LPCGUID ClassGUID,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _Out_ DEVPROPTYPE *PropertyType,
    _Out_writes_bytes_opt_(*PropertyBufferSize) PBYTE PropertyBuffer,
    _Inout_ PULONG PropertyBufferSize,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_Class_Property_ExW(
    _In_ LPCGUID ClassGUID,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _Out_ DEVPROPTYPE *PropertyType,
    _Out_writes_bytes_opt_(*PropertyBufferSize) PBYTE PropertyBuffer,
    _Inout_ PULONG PropertyBufferSize,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Get_Class_Property_Keys(
    _In_ LPCGUID ClassGUID,
    _Out_writes_opt_(*PropertyKeyCount) DEVPROPKEY *PropertyKeyArray,
    _Inout_ PULONG PropertyKeyCount,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Get_Class_Property_Keys_Ex(
    _In_ LPCGUID ClassGUID,
    _Out_writes_opt_(*PropertyKeyCount) DEVPROPKEY *PropertyKeyArray,
    _Inout_ PULONG PropertyKeyCount,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Set_Class_PropertyW(
    _In_ LPCGUID ClassGUID,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _In_ DEVPROPTYPE PropertyType,
    _In_reads_bytes_opt_(PropertyBufferSize) CONST PBYTE PropertyBuffer,
    _In_ ULONG PropertyBufferSize,
    _In_ ULONG ulFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CMAPI
CONFIGRET
WINAPI
CM_Set_Class_Property_ExW(
    _In_ LPCGUID ClassGUID,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _In_ DEVPROPTYPE PropertyType,
    _In_reads_bytes_opt_(PropertyBufferSize) CONST PBYTE PropertyBuffer,
    _In_ ULONG PropertyBufferSize,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
CMAPI
CONFIGRET
WINAPI
CM_Get_Class_Registry_PropertyA(
    _In_ LPGUID ClassGuid,
    _In_ ULONG ulProperty,
    _Out_opt_ PULONG pulRegDataType,
    _Out_writes_bytes_opt_(*pulLength) PVOID Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Get_Class_Registry_PropertyW(
    _In_ LPGUID ClassGuid,
    _In_ ULONG ulProperty,
    _Out_opt_ PULONG pulRegDataType,
    _Out_writes_bytes_opt_(*pulLength) PVOID Buffer,
    _Inout_ PULONG pulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Set_Class_Registry_PropertyA(
    _In_ LPGUID ClassGuid,
    _In_ ULONG ulProperty,
    _In_reads_bytes_opt_(ulLength) PCVOID Buffer,
    _In_ ULONG ulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
CMAPI
CONFIGRET
WINAPI
CM_Set_Class_Registry_PropertyW(
    _In_ LPGUID ClassGuid,
    _In_ ULONG ulProperty,
    _In_reads_bytes_opt_(ulLength) PCVOID Buffer,
    _In_ ULONG ulLength,
    _In_ ULONG ulFlags,
    _In_opt_ HMACHINE hMachine
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DWORD
WINAPI
CM_WaitNoPendingInstallEvents(
    _In_ DWORD dwTimeout
    );
#endif
#pragma endregion
#pragma region Desktop Family, OneCore Family, or App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP)
CMAPI
CONFIGRET
WINAPI
CM_Register_Notification(
    _In_ PCM_NOTIFY_FILTER pFilter,
    _In_opt_ PVOID pContext,
    _In_ PCM_NOTIFY_CALLBACK pCallback,
    _Out_ PHCMNOTIFICATION pNotifyContext
    );
CMAPI
CONFIGRET
WINAPI
CM_Unregister_Notification(
    _In_ HCMNOTIFICATION NotifyContext
    );
CMAPI
DWORD
WINAPI
CM_MapCrToWin32Err(
    _In_ CONFIGRET CmReturnCode,
    _In_ DWORD DefaultErr
    );
}
#endif
#pragma endregion
