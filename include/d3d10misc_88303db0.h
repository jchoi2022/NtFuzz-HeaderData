#include "d3d10.h"
extern "C" {
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum D3D10_DRIVER_TYPE
{
    D3D10_DRIVER_TYPE_HARDWARE = 0,
    D3D10_DRIVER_TYPE_REFERENCE = 1,
    D3D10_DRIVER_TYPE_NULL = 2,
    D3D10_DRIVER_TYPE_SOFTWARE = 3,
    D3D10_DRIVER_TYPE_WARP = 5,
} D3D10_DRIVER_TYPE;
DEFINE_GUID(GUID_DeviceType,
0xd722fb4d, 0x7a68, 0x437a, 0xb2, 0x0c, 0x58, 0x04, 0xee, 0x24, 0x94, 0xa6);
HRESULT WINAPI D3D10CreateDevice(
    _In_opt_ IDXGIAdapter *pAdapter,
    D3D10_DRIVER_TYPE DriverType,
    HMODULE Software,
    UINT Flags,
    UINT SDKVersion,
    _Out_opt_ ID3D10Device **ppDevice);
HRESULT WINAPI D3D10CreateDeviceAndSwapChain(
    _In_opt_ IDXGIAdapter *pAdapter,
    D3D10_DRIVER_TYPE DriverType,
    HMODULE Software,
    UINT Flags,
    UINT SDKVersion,
    _In_opt_ DXGI_SWAP_CHAIN_DESC *pSwapChainDesc,
    _Out_opt_ IDXGISwapChain **ppSwapChain,
    _Out_opt_ ID3D10Device **ppDevice);
HRESULT WINAPI D3D10CreateBlob(SIZE_T NumBytes, _Out_ LPD3D10BLOB *ppBuffer);
#endif
#pragma endregion
}
