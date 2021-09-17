typedef struct _MF_RESOURCE_MAP {
    ULONG Count;
    UCHAR Resources[ANYSIZE_ARRAY];
} MF_RESOURCE_MAP, *PMF_RESOURCE_MAP;
typedef struct _MF_VARYING_RESOURCE_ENTRY {
    UCHAR ResourceIndex;
    UCHAR Reserved[3];
    ULONG Offset;
    ULONG Size;
    ULONG MaxCount;
} MF_VARYING_RESOURCE_ENTRY, *PMF_VARYING_RESOURCE_ENTRY;
typedef struct _MF_VARYING_RESOURCE_MAP {
    ULONG Count;
    MF_VARYING_RESOURCE_ENTRY Resources[ANYSIZE_ARRAY];
} MF_VARYING_RESOURCE_MAP, *PMF_VARYING_RESOURCE_MAP;
typedef struct _MF_DEVICE_INFO *PMF_DEVICE_INFO;
typedef struct _MF_DEVICE_INFO {
    UNICODE_STRING Name;
    UNICODE_STRING HardwareID;
    UNICODE_STRING CompatibleID;
    PMF_RESOURCE_MAP ResourceMap;
    PMF_VARYING_RESOURCE_MAP VaryingResourceMap;
    ULONG MfFlags;
} MF_DEVICE_INFO;
typedef
_Function_class_(MF_ENUMERATE_CHILD)
NTSTATUS
MF_ENUMERATE_CHILD(
    _In_opt_ PVOID Context,
    _In_ ULONG Index,
    _Out_
        _At_(ChildInfo->Name.Buffer, __drv_allocatesMem(Mem))
        _At_(ChildInfo->HardwareID.Buffer, __drv_allocatesMem(Mem))
        _At_(ChildInfo->CompatibleID.Buffer, __drv_allocatesMem(Mem))
        _At_(ChildInfo->ResourceMap, __drv_allocatesMem(Mem))
        _At_(ChildInfo->VaryingResourceMap, __drv_allocatesMem(Mem))
        PMF_DEVICE_INFO ChildInfo
    );
typedef MF_ENUMERATE_CHILD *PMF_ENUMERATE_CHILD;
typedef struct _MF_ENUMERATION_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PMF_ENUMERATE_CHILD EnumerateChild;
} MF_ENUMERATION_INTERFACE, *PMF_ENUMERATION_INTERFACE;
