       
#include <apiset.h>
#include <apisetcconv.h>
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <windows.h>
HRESULT
WINAPI
HasExpandedResources(
    _Out_ BOOL* hasExpandedResources
    );
HRESULT
WINAPI
GetExpandedResourceExclusiveCpuCount(
    _Out_ ULONG* exclusiveCpuCount
    );
HRESULT
WINAPI
ReleaseExclusiveCpuSets(
    );
