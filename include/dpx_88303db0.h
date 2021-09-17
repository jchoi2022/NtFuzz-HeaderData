       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <dpx1.h>
EXTERN_C HRESULT WINAPI DpxNewJob( _In_ LPCWSTR TargetPath, _Outptr_ IDpxJob ** ppJob );
EXTERN_C HRESULT WINAPI DpxNewJobEx( _In_ LPCWSTR TargetPath, _In_opt_ GUID* ClientGuid, _Outptr_ IDpxJob ** ppJob );
EXTERN_C HRESULT WINAPI DpxRestoreJob( _In_ LPCWSTR TargetPath, _Outptr_ IDpxJob ** ppJob );
EXTERN_C HRESULT WINAPI DpxRestoreJobEx( _In_ LPCWSTR TargetPath, _In_opt_ GUID* ClientGuid, _Outptr_ IDpxJob ** ppJob );
EXTERN_C VOID WINAPI DpxFreeMemory( _In_ void* Allocation );
EXTERN_C HRESULT WINAPI DpxDeleteJob( _In_ LPCWSTR TargetPath );
EXTERN_C HRESULT WINAPI DpxDeleteJobEx( _In_ LPCWSTR TargetPath, _In_opt_ GUID* ClientGuid );
EXTERN_C HRESULT WINAPI DpxCheckJobExists( _In_ LPCWSTR TargetPath, _Out_ BOOL* pbExists );
EXTERN_C HRESULT WINAPI DpxCheckJobExistsEx( _In_ LPCWSTR TargetPath, _In_opt_ GUID* ClientGuid, _Out_ BOOL* pbExists );
enum class DPX_JOB_DISPOSITION
{
    Invalid = 0,
    New = 1,
    Restored = 2,
};
EXTERN_C HRESULT WINAPI DpxRestoreOrNewJob( _In_ LPCWSTR TargetPath, _Outptr_ IDpxJob ** ppJob, _Out_ DPX_JOB_DISPOSITION* pDisposition );
EXTERN_C HRESULT WINAPI DpxRestoreOrNewJobEx( _In_ LPCWSTR TargetPath, _In_opt_ GUID* ClientGuid, _Outptr_ IDpxJob ** ppJob , _Out_ DPX_JOB_DISPOSITION* pDisposition );
#endif
#pragma endregion
