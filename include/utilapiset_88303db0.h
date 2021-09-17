       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
extern "C" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
PVOID
WINAPI
EncodePointer(
    _In_opt_ PVOID Ptr
    );
WINBASEAPI
_Ret_maybenull_
PVOID
WINAPI
DecodePointer(
    _In_opt_ PVOID Ptr
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
PVOID
WINAPI
EncodeSystemPointer(
    _In_opt_ PVOID Ptr
    );
WINBASEAPI
_Ret_maybenull_
PVOID
WINAPI
DecodeSystemPointer(
    _In_opt_ PVOID Ptr
    );
WINBASEAPI
HRESULT
WINAPI
EncodeRemotePointer(
    _In_ HANDLE ProcessHandle,
    _In_opt_ PVOID Ptr,
    _Out_ PVOID* EncodedPtr
    );
WINBASEAPI
HRESULT
WINAPI
DecodeRemotePointer(
    _In_ HANDLE ProcessHandle,
    _In_opt_ PVOID Ptr,
    _Out_ PVOID* DecodedPtr
    );
#endif
#pragma endregion
#pragma region PC Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
Beep(
    _In_ DWORD dwFreq,
    _In_ DWORD dwDuration
    );
#endif
#pragma endregion
}
