#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Success_( return == 0 )
NET_API_STATUS NET_API_FUNCTION
NetApiBufferAllocate(
    _In_ DWORD ByteCount,
    _Outptr_result_bytebuffer_(ByteCount) LPVOID * Buffer
    );
_Success_( return == 0 )
NET_API_STATUS NET_API_FUNCTION
NetApiBufferFree (
    _Frees_ptr_opt_ LPVOID Buffer
    );
_Success_( return == 0 )
NET_API_STATUS NET_API_FUNCTION
NetApiBufferReallocate(
    _Frees_ptr_opt_ LPVOID OldBuffer,
    _In_ DWORD NewByteCount,
    _Outptr_result_bytebuffer_(NewByteCount) LPVOID * NewBuffer
    );
_Success_( return == 0 )
NET_API_STATUS NET_API_FUNCTION
NetApiBufferSize(
    _In_ LPVOID Buffer,
    _Out_ LPDWORD ByteCount
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
_Success_( return == 0 )
NET_API_STATUS NET_API_FUNCTION
NetapipBufferAllocate (
    _In_ DWORD ByteCount,
    _Outptr_result_bytebuffer_(ByteCount) LPVOID * Buffer
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family Or Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP)
_Success_( return == 0 )
NET_API_STATUS NET_API_FUNCTION
NetApiBufferFree (
    _Frees_ptr_opt_ LPVOID Buffer
    );
#endif
#pragma endregion
}
