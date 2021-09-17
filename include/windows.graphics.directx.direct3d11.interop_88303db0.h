#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#include <inspectable.h>
#include <dxgi.h>
STDAPI CreateDirect3D11DeviceFromDXGIDevice(
    _In_ IDXGIDevice* dxgiDevice,
    _COM_Outptr_ IInspectable** graphicsDevice);
STDAPI CreateDirect3D11SurfaceFromDXGISurface(
    _In_ IDXGISurface* dgxiSurface,
    _COM_Outptr_ IInspectable** graphicsSurface);
#endif
#pragma endregion
