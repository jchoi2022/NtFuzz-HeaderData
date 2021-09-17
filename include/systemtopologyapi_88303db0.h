       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
GetNumaHighestNodeNumber(
    _Out_ PULONG HighestNodeNumber
    );
WINBASEAPI
BOOL
WINAPI
GetNumaNodeProcessorMaskEx(
    _In_ USHORT Node,
    _Out_ PGROUP_AFFINITY ProcessorMask
    );
WINBASEAPI
BOOL
WINAPI
GetNumaProximityNodeEx(
    _In_ ULONG ProximityId,
    _Out_ PUSHORT NodeNumber
    );
#endif
#pragma endregion
}
