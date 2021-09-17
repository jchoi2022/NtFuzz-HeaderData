#include "wdm.h"
  #undef EXPORT
_Function_class_(ACPI_OP_REGION_CALLBACK)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
VOID
EXPORT
ACPI_OP_REGION_CALLBACK (
    PVOID Context
    );
typedef ACPI_OP_REGION_CALLBACK *PACPI_OP_REGION_CALLBACK;
_Function_class_(ACPI_OP_REGION_HANDLER)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
typedef
NTSTATUS
EXPORT
ACPI_OP_REGION_HANDLER (
    ULONG AccessType,
    PVOID OperationRegionObject,
    ULONG Address,
    ULONG Size,
    PULONG Data,
    ULONG_PTR Context,
    PACPI_OP_REGION_CALLBACK CompletionHandler,
    PVOID CompletionContext
    );
typedef ACPI_OP_REGION_HANDLER *PACPI_OP_REGION_HANDLER;
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS
RegisterOpRegionHandler (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG AccessType,
    _In_ ULONG RegionSpace,
    _In_ PACPI_OP_REGION_HANDLER Handler,
    _In_ PVOID Context,
    _In_ ULONG Flags,
    _Out_ PVOID *OperationRegionObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS
DeRegisterOpRegionHandler (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PVOID OperationRegionObject
    );
