#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
#include <propidl.h>
HRESULT WINAPI WTSSetRenderHint(
  _Inout_ UINT64* pRenderHintID,
  _In_ HWND hwndOwner,
  _In_ DWORD renderHintType,
  _In_ DWORD cbHintDataLength,
  _In_reads_bytes_opt_(cbHintDataLength) BYTE* pHintData
);
}
#endif
#pragma endregion
