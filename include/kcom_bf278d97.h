#error KS.H must be included before KCOM.H
    0x72CF721CL, 0x525A, 0x11D1, 0x9A, 0xA1, 0x00, 0xa0, 0xc9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("72CF721C-525A-11D1-9AA1-00A0C9223196", KoCreateObject);
#pragma warning(push)
#pragma warning(disable:4595)
typedef
NTSTATUS
(*KoCreateObjectHandler)(
    _In_ REFCLSID ClassId,
    _In_opt_ IUnknown* UnkOuter,
    _In_ REFIID InterfaceId,
    _Outptr_ PVOID* Interface
    );
DECLARE_INTERFACE(INonDelegatedUnknown) {
    STDMETHOD(NonDelegatedQueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Outptr_result_maybenull_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG,NonDelegatedAddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG,NonDelegatedRelease)(
        THIS
        ) PURE;
};
DECLARE_INTERFACE(IIndirectedUnknown) {
    STDMETHOD(IndirectedQueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Outptr_result_maybenull_ PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG,IndirectedAddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG,IndirectedRelease)(
        THIS
        ) PURE;
};
    0x21B36996L, 0x8DE3, 0x11D1, 0x8A, 0xE0, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDEX(IID_IKoInitializeParentDeviceObject);
DECLARE_INTERFACE_(IKoInitializeParentDeviceObject, IUnknown) {
    STDMETHOD(SetParentDeviceObject)(
        THIS_
        _In_ PDEVICE_OBJECT ParentDeviceObject
        ) PURE;
};
_IRQL_requires_max_(PASSIVE_LEVEL)
COMDDKAPI
void
NTAPI
KoRelease(
    _In_ REFCLSID ClassId
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
COMDDKAPI
NTSTATUS
NTAPI
KoCreateInstance(
    _In_ REFCLSID ClassId,
    _In_opt_ IUnknown* UnkOuter,
    _In_ ULONG ClsContext,
    _In_ REFIID InterfaceId,
    _Outptr_ PVOID* Interface
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
COMDDKAPI
NTSTATUS
NTAPI
KoDriverInitialize(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PUNICODE_STRING RegistryPathName,
    _In_ KoCreateObjectHandler CreateObjectHandler
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
COMDDKAPI
NTSTATUS
NTAPI
KoDeviceInitialize(
    _In_ PDEVICE_OBJECT DeviceObject
    );
        
#pragma message(__FILE__ " WARNING: operator new and operator delete will be removed soon")
inline PVOID operator new
(
    size_t iSize,
    _When_((poolType & NonPagedPoolMustSucceed) != 0,
       __drv_reportError("Must succeed pool allocations are forbidden. "
    "Allocation failures cause a system crash"))
    POOL_TYPE poolType
)
{
    PVOID result = ExAllocatePoolWithTag(poolType,iSize,'wNCK');
    if (result) {
        RtlZeroMemory(result,iSize);
    }
    return result;
}
inline PVOID operator new
(
    size_t iSize,
    _When_((poolType & NonPagedPoolMustSucceed) != 0,
       __drv_reportError("Must succeed pool allocations are forbidden. "
    "Allocation failures cause a system crash"))
    POOL_TYPE poolType,
    ULONG tag
)
{
    PVOID result = ExAllocatePoolWithTag(poolType,iSize,tag);
    if (result) {
        RtlZeroMemory(result,iSize);
    }
    return result;
}
inline void __cdecl operator delete
(
    PVOID pVoid
)
{
    if (pVoid) {
        ExFreePool(pVoid);
    }
}
__inline BOOL operator==(const GUID& guidOne, const GUID& guidOther)
{
    return IsEqualGUIDAligned(guidOne,guidOther);
}
__inline BOOL operator!=(const GUID& guidOne, const GUID& guidOther)
{
    return !(guidOne == guidOther);
}
#pragma warning(pop)
