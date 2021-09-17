#include <windows.ui.composition.h>
#include <sdkddkver.h>
namespace ABI {
namespace Windows {
namespace UI {
namespace Internal {
namespace Input {
    interface IInputSite;
}}}}
namespace Windows {
namespace UI {
namespace Composition {
typedef interface ICompositionDrawingSurfaceInterop ICompositionDrawingSurfaceInterop;
typedef interface ICompositorInterop ICompositorInterop;
DECLARE_INTERFACE_IID_(ICompositionDrawingSurfaceInterop, IUnknown, "FD04E6E3-FE0C-4C3C-AB19-A07601A576EE")
{
    IFACEMETHOD(BeginDraw)(
        _In_opt_ const RECT * updateRect,
        _In_ REFIID iid,
        _COM_Outptr_ void ** updateObject,
        _Out_ POINT * updateOffset
        ) PURE;
    IFACEMETHOD(EndDraw)(
        ) PURE;
    IFACEMETHOD(Resize)(
        _In_ SIZE sizePixels
        ) PURE;
    IFACEMETHOD(Scroll)(
        _In_opt_ const RECT * scrollRect,
        _In_opt_ const RECT * clipRect,
        _In_ int offsetX,
        _In_ int offsetY
        ) PURE;
    IFACEMETHOD(ResumeDraw)(
        ) PURE;
    IFACEMETHOD(SuspendDraw)(
        ) PURE;
};
DECLARE_INTERFACE_IID_(ICompositionGraphicsDeviceInterop, IUnknown, "A116FF71-F8BF-4C8A-9C98-70779A32A9C8")
{
    IFACEMETHOD(GetRenderingDevice)(
        _COM_Outptr_ IUnknown ** value
        ) PURE;
    IFACEMETHOD(SetRenderingDevice)(
        _In_ IUnknown * value
        ) PURE;
};
DECLARE_INTERFACE_IID_(ICompositorInterop, IUnknown, "25297D5C-3AD4-4C9C-B5CF-E36A38512330")
{
    IFACEMETHOD(CreateCompositionSurfaceForHandle)(
        _In_ HANDLE swapChain,
        _COM_Outptr_ ICompositionSurface ** result
        ) PURE;
    IFACEMETHOD(CreateCompositionSurfaceForSwapChain)(
        _In_ IUnknown * swapChain,
        _COM_Outptr_ ICompositionSurface ** result
        ) PURE;
    IFACEMETHOD(CreateGraphicsDevice)(
        _In_ IUnknown * renderingDevice,
        _COM_Outptr_ ICompositionGraphicsDevice ** result
        ) PURE;
};
DECLARE_INTERFACE_IID_(ISwapChainInterop, IUnknown, "26f496a0-7f38-45fb-88f7-faaabe67dd59")
{
    IFACEMETHOD(SetSwapChain)(
        _In_ IUnknown * swapChain) PURE;
};
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
namespace Interactions
{
DECLARE_INTERFACE_IID_(IVisualInteractionSourceInterop, IUnknown, "11F62CD1-2F9D-42D3-B05F-D6790D9E9F8E")
{
    IFACEMETHOD(TryRedirectForManipulation)(
        _In_ const POINTER_INFO& pointerInfo
        ) PURE;
};
}
#endif
#pragma endregion
namespace Desktop {
    typedef interface IDesktopWindowTarget IDesktopWindowTarget;
DECLARE_INTERFACE_IID_(ICompositionCapabilitiesInteropFactory, IInspectable, "2C9DB356-E70D-4642-8298-BC4AA5B4865C")
{
    IFACEMETHOD(GetForWindow)(
        _In_ HWND hwnd,
        _COM_Outptr_ ICompositionCapabilities ** result
        ) PURE;
};
DECLARE_INTERFACE_IID_(ICompositorDesktopInterop, IUnknown, "29E691FA-4567-4DCA-B319-D0F207EB6807")
{
    IFACEMETHOD(CreateDesktopWindowTarget)(
        _In_ HWND hwndTarget,
        _In_ BOOL isTopmost,
        _COM_Outptr_ IDesktopWindowTarget ** result
        ) PURE;
    IFACEMETHOD(EnsureOnThread)(
        _In_ DWORD threadId
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDesktopWindowTargetInterop, IUnknown, "35DBF59E-E3F9-45B0-81E7-FE75F4145DC9")
{
    IFACEMETHOD(get_Hwnd)(
        _Outptr_ HWND * value
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDesktopWindowContentBridgeInterop, IUnknown, "37642806-F421-4FD0-9F82-23AE7C776182")
{
    IFACEMETHOD(Initialize)(
        _In_ Windows::UI::Composition::ICompositor* compositor, _In_ HWND parentHwnd) PURE;
    IFACEMETHOD(get_Hwnd)(
        _Outptr_ HWND * value
        ) PURE;
    IFACEMETHOD(get_AppliedScaleFactor)(
        _Out_ float* value
        ) PURE;
};
}
}
}
}
}
