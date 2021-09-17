       
#include <d2dbasetypes.h>
#include <d3d9types.h>
#include <d2d1_1.h>
#include <winapifamily.h>
#include <dcomptypes.h>
#include <dcompanimation.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef interface IDCompositionAffineTransform2DEffect IDCompositionAffineTransform2DEffect;
typedef interface IDCompositionAnimation IDCompositionAnimation;
typedef interface IDCompositionArithmeticCompositeEffect IDCompositionArithmeticCompositeEffect;
typedef interface IDCompositionBlendEffect IDCompositionBlendEffect;
typedef interface IDCompositionBrightnessEffect IDCompositionBrightnessEffect;
typedef interface IDCompositionClip IDCompositionClip;
typedef interface IDCompositionColorMatrixEffect IDCompositionColorMatrixEffect;
typedef interface IDCompositionCompositeEffect IDCompositionCompositeEffect;
typedef interface IDCompositionDevice IDCompositionDevice;
typedef interface IDCompositionEffect IDCompositionEffect;
typedef interface IDCompositionEffectGroup IDCompositionEffectGroup;
typedef interface IDCompositionFilterEffect IDCompositionFilterEffect;
typedef interface IDCompositionGaussianBlurEffect IDCompositionGaussianBlurEffect;
typedef interface IDCompositionHueRotationEffect IDCompositionHueRotationEffect;
typedef interface IDCompositionLinearTransferEffect IDCompositionLinearTransferEffect;
typedef interface IDCompositionMatrixTransform IDCompositionMatrixTransform;
typedef interface IDCompositionMatrixTransform3D IDCompositionMatrixTransform3D;
typedef interface IDCompositionRectangleClip IDCompositionRectangleClip;
typedef interface IDCompositionRotateTransform IDCompositionRotateTransform;
typedef interface IDCompositionRotateTransform3D IDCompositionRotateTransform3D;
typedef interface IDCompositionSaturationEffect IDCompositionSaturationEffect;
typedef interface IDCompositionScaleTransform IDCompositionScaleTransform;
typedef interface IDCompositionScaleTransform3D IDCompositionScaleTransform3D;
typedef interface IDCompositionShadowEffect IDCompositionShadowEffect;
typedef interface IDCompositionSkewTransform IDCompositionSkewTransform;
typedef interface IDCompositionSurface IDCompositionSurface;
typedef interface IDCompositionTableTransferEffect IDCompositionTableTransferEffect;
typedef interface IDCompositionTarget IDCompositionTarget;
typedef interface IDCompositionTransform IDCompositionTransform;
typedef interface IDCompositionTransform3D IDCompositionTransform3D;
typedef interface IDCompositionTranslateTransform IDCompositionTranslateTransform;
typedef interface IDCompositionTranslateTransform3D IDCompositionTranslateTransform3D;
typedef interface IDCompositionTurbulenceEffect IDCompositionTurbulenceEffect;
typedef interface IDCompositionVirtualSurface IDCompositionVirtualSurface;
typedef interface IDCompositionVisual IDCompositionVisual;
STDAPI DCompositionCreateDevice(
    _In_opt_ IDXGIDevice *dxgiDevice,
    _In_ REFIID iid,
    _Outptr_ void **dcompositionDevice
    );
STDAPI DCompositionCreateDevice2(
    _In_opt_ IUnknown *renderingDevice,
    _In_ REFIID iid,
    _Outptr_ void **dcompositionDevice
    );
STDAPI DCompositionCreateDevice3(
    _In_opt_ IUnknown *renderingDevice,
    _In_ REFIID iid,
    _Outptr_ void **dcompositionDevice
    );
STDAPI DCompositionCreateSurfaceHandle(
    _In_ DWORD desiredAccess,
    _In_opt_ SECURITY_ATTRIBUTES *securityAttributes,
    _Out_ HANDLE *surfaceHandle
    );
STDAPI DCompositionAttachMouseWheelToHwnd(
    _In_ IDCompositionVisual* visual,
    _In_ HWND hwnd,
    _In_ BOOL enable
    );
STDAPI DCompositionAttachMouseDragToHwnd(
    _In_ IDCompositionVisual* visual,
    _In_ HWND hwnd,
    _In_ BOOL enable
    );
DECLARE_INTERFACE_IID_(IDCompositionDevice, IUnknown, "C37EA93A-E7AA-450D-B16F-9746CB0407F3")
{
    STDMETHOD(Commit)(THIS
        ) PURE;
    STDMETHOD(WaitForCommitCompletion)(THIS
        ) PURE;
    STDMETHOD(GetFrameStatistics)(THIS_
        _Out_ DCOMPOSITION_FRAME_STATISTICS *statistics
        ) PURE;
    STDMETHOD(CreateTargetForHwnd)(THIS_
        _In_ HWND hwnd,
        BOOL topmost,
        _Outptr_ IDCompositionTarget **target
        ) PURE;
    STDMETHOD(CreateVisual)(THIS_
        _Outptr_ IDCompositionVisual **visual
        ) PURE;
    STDMETHOD(CreateSurface)(THIS_
        _In_ UINT width,
        _In_ UINT height,
        _In_ DXGI_FORMAT pixelFormat,
        _In_ DXGI_ALPHA_MODE alphaMode,
        _Outptr_ IDCompositionSurface **surface
        ) PURE;
    STDMETHOD(CreateVirtualSurface)(THIS_
        _In_ UINT initialWidth,
        _In_ UINT initialHeight,
        _In_ DXGI_FORMAT pixelFormat,
        _In_ DXGI_ALPHA_MODE alphaMode,
        _Outptr_ IDCompositionVirtualSurface **virtualSurface
        ) PURE;
    STDMETHOD(CreateSurfaceFromHandle)(THIS_
        _In_ HANDLE handle,
        _Outptr_ IUnknown **surface
        ) PURE;
    STDMETHOD(CreateSurfaceFromHwnd)(THIS_
        _In_ HWND hwnd,
        _Outptr_ IUnknown **surface
        ) PURE;
    STDMETHOD(CreateTranslateTransform)(THIS_
        _Outptr_ IDCompositionTranslateTransform **translateTransform
        ) PURE;
    STDMETHOD(CreateScaleTransform)(THIS_
        _Outptr_ IDCompositionScaleTransform **scaleTransform
        ) PURE;
    STDMETHOD(CreateRotateTransform)(THIS_
        _Outptr_ IDCompositionRotateTransform **rotateTransform
        ) PURE;
    STDMETHOD(CreateSkewTransform)(THIS_
        _Outptr_ IDCompositionSkewTransform **skewTransform
        ) PURE;
    STDMETHOD(CreateMatrixTransform)(THIS_
        _Outptr_ IDCompositionMatrixTransform **matrixTransform
        ) PURE;
    STDMETHOD(CreateTransformGroup)(THIS_
        _In_reads_(elements) IDCompositionTransform **transforms,
        UINT elements,
        _Outptr_ IDCompositionTransform **transformGroup
        ) PURE;
    STDMETHOD(CreateTranslateTransform3D)(THIS_
        _Outptr_ IDCompositionTranslateTransform3D **translateTransform3D
        ) PURE;
    STDMETHOD(CreateScaleTransform3D)(THIS_
        _Outptr_ IDCompositionScaleTransform3D **scaleTransform3D
        ) PURE;
    STDMETHOD(CreateRotateTransform3D)(THIS_
        _Outptr_ IDCompositionRotateTransform3D **rotateTransform3D
        ) PURE;
    STDMETHOD(CreateMatrixTransform3D)(THIS_
        _Outptr_ IDCompositionMatrixTransform3D **matrixTransform3D
        ) PURE;
    STDMETHOD(CreateTransform3DGroup)(THIS_
        _In_reads_(elements) IDCompositionTransform3D **transforms3D,
        UINT elements,
        _Outptr_ IDCompositionTransform3D **transform3DGroup
        ) PURE;
    STDMETHOD(CreateEffectGroup)(THIS_
        _Outptr_ IDCompositionEffectGroup **effectGroup
        ) PURE;
    STDMETHOD(CreateRectangleClip)(THIS_
        _Outptr_ IDCompositionRectangleClip **clip
        ) PURE;
    STDMETHOD(CreateAnimation)(THIS_
        _Outptr_ IDCompositionAnimation **animation
        ) PURE;
    STDMETHOD(CheckDeviceState)(THIS_
        _Out_ BOOL *pfValid
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionTarget, IUnknown, "eacdd04c-117e-4e17-88f4-d1b12b0e3d89")
{
    STDMETHOD(SetRoot)(THIS_
        _In_opt_ IDCompositionVisual* visual
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionVisual, IUnknown, "4d93059d-097b-4651-9a60-f0f25116e2f3")
{
    STDMETHOD(SetOffsetX)(THIS_
        float offsetX
        ) PURE;
    STDMETHOD(SetOffsetX)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetOffsetY)(THIS_
        float offsetY
        ) PURE;
    STDMETHOD(SetOffsetY)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetTransform)(THIS_
        const D2D_MATRIX_3X2_F& matrix
        ) PURE;
    STDMETHOD(SetTransform)(THIS_
        _In_opt_ IDCompositionTransform* transform
        ) PURE;
    STDMETHOD(SetTransformParent)(THIS_
        _In_opt_ IDCompositionVisual *visual
        ) PURE;
    STDMETHOD(SetEffect)(THIS_
        _In_opt_ IDCompositionEffect *effect
        ) PURE;
    STDMETHOD(SetBitmapInterpolationMode)(THIS_
        _In_ DCOMPOSITION_BITMAP_INTERPOLATION_MODE interpolationMode
        ) PURE;
    STDMETHOD(SetBorderMode)(THIS_
        _In_ DCOMPOSITION_BORDER_MODE borderMode
        ) PURE;
    STDMETHOD(SetClip)(THIS_
        const D2D_RECT_F& rect
        ) PURE;
    STDMETHOD(SetClip)(THIS_
        _In_opt_ IDCompositionClip* clip
        ) PURE;
    STDMETHOD(SetContent)(THIS_
        _In_opt_ IUnknown *content
        ) PURE;
    STDMETHOD(AddVisual)(THIS_
        _In_ IDCompositionVisual* visual,
        BOOL insertAbove,
        _In_opt_ IDCompositionVisual* referenceVisual
        ) PURE;
    STDMETHOD(RemoveVisual)(THIS_
        _In_ IDCompositionVisual* visual
        ) PURE;
    STDMETHOD(RemoveAllVisuals)(THIS_
        ) PURE;
    STDMETHOD(SetCompositeMode)(THIS_
        _In_ DCOMPOSITION_COMPOSITE_MODE compositeMode
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionEffect, IUnknown, "EC81B08F-BFCB-4e8d-B193-A915587999E8")
{
};
DECLARE_INTERFACE_IID_(IDCompositionTransform3D, IDCompositionEffect, "71185722-246B-41f2-AAD1-0443F7F4BFC2")
{
};
DECLARE_INTERFACE_IID_(IDCompositionTransform, IDCompositionTransform3D, "FD55FAA7-37E0-4c20-95D2-9BE45BC33F55")
{
};
DECLARE_INTERFACE_IID_(IDCompositionTranslateTransform, IDCompositionTransform, "06791122-C6F0-417d-8323-269E987F5954")
{
    STDMETHOD(SetOffsetX)(THIS_
        float offsetX
        ) PURE;
    STDMETHOD(SetOffsetX)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetOffsetY)(THIS_
        float offsetY
        ) PURE;
    STDMETHOD(SetOffsetY)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionScaleTransform, IDCompositionTransform, "71FDE914-40EF-45ef-BD51-68B037C339F9")
{
    STDMETHOD(SetScaleX)(THIS_
        float scaleX
        ) PURE;
    STDMETHOD(SetScaleX)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetScaleY)(THIS_
        float scaleY
        ) PURE;
    STDMETHOD(SetScaleY)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetCenterX)(THIS_
        float centerX
        ) PURE;
    STDMETHOD(SetCenterX)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetCenterY)(THIS_
        float centerY
        ) PURE;
    STDMETHOD(SetCenterY)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionRotateTransform, IDCompositionTransform, "641ED83C-AE96-46c5-90DC-32774CC5C6D5")
{
    STDMETHOD(SetAngle)(THIS_
        float angle
        ) PURE;
    STDMETHOD(SetAngle)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetCenterX)(THIS_
        float centerX
        ) PURE;
    STDMETHOD(SetCenterX)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetCenterY)(THIS_
        float centerY
        ) PURE;
    STDMETHOD(SetCenterY)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionSkewTransform, IDCompositionTransform, "E57AA735-DCDB-4c72-9C61-0591F58889EE")
{
    STDMETHOD(SetAngleX)(THIS_
        float angleX
        ) PURE;
    STDMETHOD(SetAngleX)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetAngleY)(THIS_
        float angleY
        ) PURE;
    STDMETHOD(SetAngleY)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetCenterX)(THIS_
        float centerX
        ) PURE;
    STDMETHOD(SetCenterX)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetCenterY)(THIS_
        float centerY
        ) PURE;
    STDMETHOD(SetCenterY)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionMatrixTransform, IDCompositionTransform, "16CDFF07-C503-419c-83F2-0965C7AF1FA6")
{
    STDMETHOD(SetMatrix)(THIS_
        const D2D_MATRIX_3X2_F& matrix
        ) PURE;
    STDMETHOD(SetMatrixElement)(THIS_
        _In_ int row,
        _In_ int column,
        _In_ float value
        ) PURE;
    STDMETHOD(SetMatrixElement)(THIS_
        _In_ int row,
        _In_ int column,
        _In_ IDCompositionAnimation *animation
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionEffectGroup, IDCompositionEffect, "A7929A74-E6B2-4bd6-8B95-4040119CA34D")
{
    STDMETHOD(SetOpacity)(THIS_
        float opacity
        ) PURE;
    STDMETHOD(SetOpacity)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetTransform3D)(THIS_
        _In_opt_ IDCompositionTransform3D* transform3D
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionTranslateTransform3D, IDCompositionTransform3D, "91636D4B-9BA1-4532-AAF7-E3344994D788")
{
    STDMETHOD(SetOffsetX)(THIS_
        float offsetX
        ) PURE;
    STDMETHOD(SetOffsetX)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetOffsetY)(THIS_
        float offsetY
        ) PURE;
    STDMETHOD(SetOffsetY)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetOffsetZ)(THIS_
        float offsetZ
        ) PURE;
    STDMETHOD(SetOffsetZ)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionScaleTransform3D, IDCompositionTransform3D, "2A9E9EAD-364B-4b15-A7C4-A1997F78B389")
{
    STDMETHOD(SetScaleX)(THIS_
        float scaleX
        ) PURE;
    STDMETHOD(SetScaleX)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetScaleY)(THIS_
        float scaleY
        ) PURE;
    STDMETHOD(SetScaleY)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetScaleZ)(THIS_
        float scaleZ
        ) PURE;
    STDMETHOD(SetScaleZ)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetCenterX)(THIS_
        float centerX
        ) PURE;
    STDMETHOD(SetCenterX)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetCenterY)(THIS_
        float centerY
        ) PURE;
    STDMETHOD(SetCenterY)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetCenterZ)(THIS_
        float centerZ
        ) PURE;
    STDMETHOD(SetCenterZ)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionRotateTransform3D, IDCompositionTransform3D, "D8F5B23F-D429-4a91-B55A-D2F45FD75B18")
{
    STDMETHOD(SetAngle)(THIS_
        float angle
        ) PURE;
    STDMETHOD(SetAngle)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetAxisX)(THIS_
        float axisX
        ) PURE;
    STDMETHOD(SetAxisX)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetAxisY)(THIS_
        float axisY
        ) PURE;
    STDMETHOD(SetAxisY)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetAxisZ)(THIS_
        float axisZ
        ) PURE;
    STDMETHOD(SetAxisZ)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetCenterX)(THIS_
        float centerX
        ) PURE;
    STDMETHOD(SetCenterX)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetCenterY)(THIS_
        float centerY
        ) PURE;
    STDMETHOD(SetCenterY)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetCenterZ)(THIS_
        float centerZ
        ) PURE;
    STDMETHOD(SetCenterZ)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
};
#pragma warning(push)
#pragma warning(disable : 4995)
DECLARE_INTERFACE_IID_(IDCompositionMatrixTransform3D, IDCompositionTransform3D, "4B3363F0-643B-41b7-B6E0-CCF22D34467C")
{
    STDMETHOD(SetMatrix)(THIS_
        const D3DMATRIX& matrix
        ) PURE;
    STDMETHOD(SetMatrixElement)(THIS_
        _In_ int row,
        _In_ int column,
        _In_ float value
        ) PURE;
    STDMETHOD(SetMatrixElement)(THIS_
        _In_ int row,
        _In_ int column,
        _In_ IDCompositionAnimation *animation
        ) PURE;
};
#pragma warning(pop)
DECLARE_INTERFACE_IID_(IDCompositionClip, IUnknown, "64AC3703-9D3F-45ec-A109-7CAC0E7A13A7")
{
};
DECLARE_INTERFACE_IID_(IDCompositionRectangleClip, IDCompositionClip, "9842AD7D-D9CF-4908-AED7-48B51DA5E7C2")
{
    STDMETHOD(SetLeft)(THIS_
        float left
        ) PURE;
    STDMETHOD(SetLeft)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetTop)(THIS_
        float top
        ) PURE;
    STDMETHOD(SetTop)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetRight)(THIS_
        float right
        ) PURE;
    STDMETHOD(SetRight)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetBottom)(THIS_
        float bottom
        ) PURE;
    STDMETHOD(SetBottom)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetTopLeftRadiusX)(THIS_
        float radius
        ) PURE;
    STDMETHOD(SetTopLeftRadiusX)(THIS_
        _In_ IDCompositionAnimation *animation
        ) PURE;
    STDMETHOD(SetTopLeftRadiusY)(THIS_
        float radius
        ) PURE;
    STDMETHOD(SetTopLeftRadiusY)(THIS_
        _In_ IDCompositionAnimation *animation
        ) PURE;
    STDMETHOD(SetTopRightRadiusX)(THIS_
        float radius
        ) PURE;
    STDMETHOD(SetTopRightRadiusX)(THIS_
        _In_ IDCompositionAnimation *animation
        ) PURE;
    STDMETHOD(SetTopRightRadiusY)(THIS_
        float radius
        ) PURE;
    STDMETHOD(SetTopRightRadiusY)(THIS_
        _In_ IDCompositionAnimation *animation
        ) PURE;
    STDMETHOD(SetBottomLeftRadiusX)(THIS_
        float radius
        ) PURE;
    STDMETHOD(SetBottomLeftRadiusX)(THIS_
        _In_ IDCompositionAnimation *animation
        ) PURE;
    STDMETHOD(SetBottomLeftRadiusY)(THIS_
        float radius
        ) PURE;
    STDMETHOD(SetBottomLeftRadiusY)(THIS_
        _In_ IDCompositionAnimation *animation
        ) PURE;
    STDMETHOD(SetBottomRightRadiusX)(THIS_
        float radius
        ) PURE;
    STDMETHOD(SetBottomRightRadiusX)(THIS_
        _In_ IDCompositionAnimation *animation
        ) PURE;
    STDMETHOD(SetBottomRightRadiusY)(THIS_
        float radius
        ) PURE;
    STDMETHOD(SetBottomRightRadiusY)(THIS_
        _In_ IDCompositionAnimation *animation
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionSurface, IUnknown, "BB8A4953-2C99-4F5A-96F5-4819027FA3AC")
{
    STDMETHOD(BeginDraw)(THIS_
        _In_opt_ const RECT *updateRect,
        _In_ REFIID iid,
        _Outptr_ void **updateObject,
        _Out_ POINT *updateOffset
        ) PURE;
    STDMETHOD(EndDraw)(THIS
        ) PURE;
    STDMETHOD(SuspendDraw)(THIS
        ) PURE;
    STDMETHOD(ResumeDraw)(THIS
        ) PURE;
    STDMETHOD(Scroll)(THIS_
        _In_opt_ const RECT *scrollRect,
        _In_opt_ const RECT *clipRect,
        _In_ int offsetX,
        _In_ int offsetY
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionVirtualSurface, IDCompositionSurface, "AE471C51-5F53-4A24-8D3E-D0C39C30B3F0")
{
    STDMETHOD(Resize)(THIS_
        _In_ UINT width,
        _In_ UINT height
        ) PURE;
    STDMETHOD(Trim)(THIS_
        _In_reads_opt_(count) const RECT *rectangles,
        _In_ UINT count
        ) PURE;
};
typedef interface IDCompositionDesktopDevice IDCompositionDesktopDevice;
typedef interface IDCompositionDevice2 IDCompositionDevice2;
typedef interface IDCompositionDeviceDebug IDCompositionDeviceDebug;
typedef interface IDCompositionSurfaceFactory IDCompositionSurfaceFactory;
typedef interface IDCompositionVisual2 IDCompositionVisual2;
typedef interface IDCompositionVisualDebug IDCompositionVisualDebug;
DECLARE_INTERFACE_IID_(IDCompositionDevice2, IUnknown, "75F6468D-1B8E-447C-9BC6-75FEA80B5B25")
{
    STDMETHOD(Commit)(THIS
        ) PURE;
    STDMETHOD(WaitForCommitCompletion)(THIS
        ) PURE;
    STDMETHOD(GetFrameStatistics)(THIS_
        _Out_ DCOMPOSITION_FRAME_STATISTICS *statistics
        ) PURE;
    STDMETHOD(CreateVisual)(THIS_
        _Outptr_ IDCompositionVisual2 **visual
        ) PURE;
    STDMETHOD(CreateSurfaceFactory)(THIS_
        _In_ IUnknown *renderingDevice,
        _Outptr_ IDCompositionSurfaceFactory **surfaceFactory
        ) PURE;
    STDMETHOD(CreateSurface)(THIS_
        _In_ UINT width,
        _In_ UINT height,
        _In_ DXGI_FORMAT pixelFormat,
        _In_ DXGI_ALPHA_MODE alphaMode,
        _Outptr_ IDCompositionSurface **surface
        ) PURE;
    STDMETHOD(CreateVirtualSurface)(THIS_
        _In_ UINT initialWidth,
        _In_ UINT initialHeight,
        _In_ DXGI_FORMAT pixelFormat,
        _In_ DXGI_ALPHA_MODE alphaMode,
        _Outptr_ IDCompositionVirtualSurface **virtualSurface
        ) PURE;
    STDMETHOD(CreateTranslateTransform)(THIS_
        _Outptr_ IDCompositionTranslateTransform **translateTransform
        ) PURE;
    STDMETHOD(CreateScaleTransform)(THIS_
        _Outptr_ IDCompositionScaleTransform **scaleTransform
        ) PURE;
    STDMETHOD(CreateRotateTransform)(THIS_
        _Outptr_ IDCompositionRotateTransform **rotateTransform
        ) PURE;
    STDMETHOD(CreateSkewTransform)(THIS_
        _Outptr_ IDCompositionSkewTransform **skewTransform
        ) PURE;
    STDMETHOD(CreateMatrixTransform)(THIS_
        _Outptr_ IDCompositionMatrixTransform **matrixTransform
        ) PURE;
    STDMETHOD(CreateTransformGroup)(THIS_
        _In_reads_(elements) IDCompositionTransform **transforms,
        UINT elements,
        _Outptr_ IDCompositionTransform **transformGroup
        ) PURE;
    STDMETHOD(CreateTranslateTransform3D)(THIS_
        _Outptr_ IDCompositionTranslateTransform3D **translateTransform3D
        ) PURE;
    STDMETHOD(CreateScaleTransform3D)(THIS_
        _Outptr_ IDCompositionScaleTransform3D **scaleTransform3D
        ) PURE;
    STDMETHOD(CreateRotateTransform3D)(THIS_
        _Outptr_ IDCompositionRotateTransform3D **rotateTransform3D
        ) PURE;
    STDMETHOD(CreateMatrixTransform3D)(THIS_
        _Outptr_ IDCompositionMatrixTransform3D **matrixTransform3D
        ) PURE;
    STDMETHOD(CreateTransform3DGroup)(THIS_
        _In_reads_(elements) IDCompositionTransform3D **transforms3D,
        UINT elements,
        _Outptr_ IDCompositionTransform3D **transform3DGroup
        ) PURE;
    STDMETHOD(CreateEffectGroup)(THIS_
        _Outptr_ IDCompositionEffectGroup **effectGroup
        ) PURE;
    STDMETHOD(CreateRectangleClip)(THIS_
        _Outptr_ IDCompositionRectangleClip **clip
        ) PURE;
    STDMETHOD(CreateAnimation)(THIS_
        _Outptr_ IDCompositionAnimation **animation
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionDesktopDevice, IDCompositionDevice2, "5F4633FE-1E08-4CB8-8C75-CE24333F5602")
{
    STDMETHOD(CreateTargetForHwnd)(THIS_
        _In_ HWND hwnd,
        BOOL topmost,
        _Outptr_ IDCompositionTarget **target
        ) PURE;
    STDMETHOD(CreateSurfaceFromHandle)(THIS_
        _In_ HANDLE handle,
        _Outptr_ IUnknown **surface
        ) PURE;
    STDMETHOD(CreateSurfaceFromHwnd)(THIS_
        _In_ HWND hwnd,
        _Outptr_ IUnknown **surface
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionDeviceDebug, IUnknown, "A1A3C64A-224F-4A81-9773-4F03A89D3C6C")
{
    STDMETHOD(EnableDebugCounters)(THIS_
        ) PURE;
    STDMETHOD(DisableDebugCounters)(THIS_
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionSurfaceFactory, IUnknown, "E334BC12-3937-4E02-85EB-FCF4EB30D2C8")
{
    STDMETHOD(CreateSurface)(THIS_
        _In_ UINT width,
        _In_ UINT height,
        _In_ DXGI_FORMAT pixelFormat,
        _In_ DXGI_ALPHA_MODE alphaMode,
        _Outptr_ IDCompositionSurface **surface
        ) PURE;
    STDMETHOD(CreateVirtualSurface)(THIS_
        _In_ UINT initialWidth,
        _In_ UINT initialHeight,
        _In_ DXGI_FORMAT pixelFormat,
        _In_ DXGI_ALPHA_MODE alphaMode,
        _Outptr_ IDCompositionVirtualSurface **virtualSurface
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionVisual2, IDCompositionVisual, "E8DE1639-4331-4B26-BC5F-6A321D347A85")
{
    STDMETHOD(SetOpacityMode)(THIS_
        _In_ DCOMPOSITION_OPACITY_MODE mode
        ) PURE;
    STDMETHOD(SetBackFaceVisibility)(THIS_
        _In_ DCOMPOSITION_BACKFACE_VISIBILITY visibility
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionVisualDebug, IDCompositionVisual2, "FED2B808-5EB4-43A0-AEA3-35F65280F91B")
{
    STDMETHOD(EnableHeatMap)(THIS_
        _In_ const D2D1_COLOR_F &color
        ) PURE;
    STDMETHOD(DisableHeatMap)(THIS_
        ) PURE;
    STDMETHOD(EnableRedrawRegions)(THIS_
        ) PURE;
    STDMETHOD(DisableRedrawRegions)(THIS_
        ) PURE;
};
typedef interface IDCompositionDevice3 IDCompositionDevice3;
typedef interface IDCompositionVisual3 IDCompositionVisual3;
DECLARE_INTERFACE_IID_(IDCompositionVisual3, IDCompositionVisualDebug, "2775F462-B6C1-4015-B0BE-B3E7D6A4976D")
{
    STDMETHOD(SetDepthMode)(THIS_
        _In_ DCOMPOSITION_DEPTH_MODE mode
        ) PURE;
    STDMETHOD(SetOffsetZ)(THIS_
        float offsetZ
        ) PURE;
    STDMETHOD(SetOffsetZ)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetOpacity)(THIS_
        float opacity
        ) PURE;
    STDMETHOD(SetOpacity)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetTransform)(THIS_
        const D2D_MATRIX_4X4_F& matrix
        ) PURE;
    STDMETHOD(SetTransform)(THIS_
        _In_opt_ IDCompositionTransform3D* transform
        ) PURE;
    STDMETHOD(SetVisible)(THIS_
        BOOL visible
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionDevice3, IDCompositionDevice2, "0987CB06-F916-48BF-8D35-CE7641781BD9")
{
    STDMETHOD(CreateGaussianBlurEffect)(THIS_
        _Outptr_ IDCompositionGaussianBlurEffect **gaussianBlurEffect
        ) PURE;
    STDMETHOD(CreateBrightnessEffect)(THIS_
        _Outptr_ IDCompositionBrightnessEffect **brightnessEffect
        ) PURE;
    STDMETHOD(CreateColorMatrixEffect)(THIS_
        _Outptr_ IDCompositionColorMatrixEffect **colorMatrixEffect
        ) PURE;
    STDMETHOD(CreateShadowEffect)(THIS_
        _Outptr_ IDCompositionShadowEffect **shadowEffect
        ) PURE;
    STDMETHOD(CreateHueRotationEffect)(THIS_
        _Outptr_ IDCompositionHueRotationEffect **hueRotationEffect
        ) PURE;
    STDMETHOD(CreateSaturationEffect)(THIS_
        _Outptr_ IDCompositionSaturationEffect **saturationEffect
        ) PURE;
    STDMETHOD(CreateTurbulenceEffect)(THIS_
        _Outptr_ IDCompositionTurbulenceEffect **turbulenceEffect
        ) PURE;
    STDMETHOD(CreateLinearTransferEffect)(THIS_
        _Outptr_ IDCompositionLinearTransferEffect **linearTransferEffect
        ) PURE;
    STDMETHOD(CreateTableTransferEffect)(THIS_
        _Outptr_ IDCompositionTableTransferEffect **tableTransferEffect
        ) PURE;
    STDMETHOD(CreateCompositeEffect)(THIS_
        _Outptr_ IDCompositionCompositeEffect **compositeEffect
        ) PURE;
    STDMETHOD(CreateBlendEffect)(THIS_
        _Outptr_ IDCompositionBlendEffect **blendEffect
        ) PURE;
    STDMETHOD(CreateArithmeticCompositeEffect)(THIS_
        _Outptr_ IDCompositionArithmeticCompositeEffect **arithmeticCompositeEffect
        ) PURE;
    STDMETHOD(CreateAffineTransform2DEffect)(THIS_
        _Outptr_ IDCompositionAffineTransform2DEffect **affineTransform2dEffect
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionFilterEffect, IDCompositionEffect, "30C421D5-8CB2-4E9F-B133-37BE270D4AC2")
{
    STDMETHOD(SetInput)(THIS_
        _In_ UINT index,
        _In_opt_ IUnknown *input,
        _In_ UINT flags
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionGaussianBlurEffect, IDCompositionFilterEffect, "45D4D0B7-1BD4-454E-8894-2BFA68443033")
{
    STDMETHOD(SetStandardDeviation)(THIS_
        _In_ float amount
        ) PURE;
    STDMETHOD(SetStandardDeviation)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetBorderMode)(THIS_
        _In_ D2D1_BORDER_MODE mode
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionBrightnessEffect, IDCompositionFilterEffect, "6027496E-CB3A-49AB-934F-D798DA4F7DA6")
{
    STDMETHOD(SetWhitePoint)(THIS_
        _In_ const D2D1_VECTOR_2F& whitePoint
        ) PURE;
    STDMETHOD(SetBlackPoint)(THIS_
        _In_ const D2D1_VECTOR_2F& blackPoint
        ) PURE;
    STDMETHOD(SetWhitePointX)(THIS_
        _In_ float whitePointX
        ) PURE;
    STDMETHOD(SetWhitePointX)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetWhitePointY)(THIS_
        _In_ float whitePointY
        ) PURE;
    STDMETHOD(SetWhitePointY)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetBlackPointX)(THIS_
        _In_ float blackPointX
        ) PURE;
    STDMETHOD(SetBlackPointX)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetBlackPointY)(THIS_
        _In_ float blackPointY
        ) PURE;
    STDMETHOD(SetBlackPointY)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionColorMatrixEffect, IDCompositionFilterEffect, "C1170A22-3CE2-4966-90D4-55408BFC84C4")
{
    STDMETHOD(SetMatrix)(THIS_
        _In_ const D2D1_MATRIX_5X4_F& matrix
        ) PURE;
    STDMETHOD(SetMatrixElement)(THIS_
        _In_ int row,
        _In_ int column,
        _In_ float value
        ) PURE;
    STDMETHOD(SetMatrixElement)(THIS_
        _In_ int row,
        _In_ int column,
        _In_ IDCompositionAnimation *animation
        ) PURE;
    STDMETHOD(SetAlphaMode)(THIS_
        _In_ D2D1_COLORMATRIX_ALPHA_MODE mode
        ) PURE;
    STDMETHOD(SetClampOutput)(THIS_
        _In_ BOOL clamp
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionShadowEffect, IDCompositionFilterEffect, "4AD18AC0-CFD2-4C2F-BB62-96E54FDB6879")
{
    STDMETHOD(SetStandardDeviation)(THIS_
        _In_ float amount
        ) PURE;
    STDMETHOD(SetStandardDeviation)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetColor)(THIS_
        _In_ const D2D1_VECTOR_4F &color
        ) PURE;
    STDMETHOD(SetRed)(THIS_
        _In_ float amount
        ) PURE;
    STDMETHOD(SetRed)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetGreen)(THIS_
        _In_ float amount
        ) PURE;
    STDMETHOD(SetGreen)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetBlue)(THIS_
        _In_ float amount
        ) PURE;
    STDMETHOD(SetBlue)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetAlpha)(THIS_
        _In_ float amount
        ) PURE;
    STDMETHOD(SetAlpha)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionHueRotationEffect, IDCompositionFilterEffect, "6DB9F920-0770-4781-B0C6-381912F9D167")
{
    STDMETHOD(SetAngle)(THIS_
        _In_ float amountDegrees
        ) PURE;
    STDMETHOD(SetAngle)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionSaturationEffect, IDCompositionFilterEffect, "A08DEBDA-3258-4FA4-9F16-9174D3FE93B1")
{
    STDMETHOD(SetSaturation)(THIS_
        _In_ float ratio
        ) PURE;
    STDMETHOD(SetSaturation)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionTurbulenceEffect, IDCompositionFilterEffect, "A6A55BDA-C09C-49F3-9193-A41922C89715")
{
    STDMETHOD(SetOffset)(THIS_
        _In_ const D2D1_VECTOR_2F& offset
        ) PURE;
    STDMETHOD(SetBaseFrequency)(THIS_
        _In_ const D2D1_VECTOR_2F& frequency
        ) PURE;
    STDMETHOD(SetSize)(THIS_
        _In_ const D2D1_VECTOR_2F& size
        ) PURE;
    STDMETHOD(SetNumOctaves)(THIS_
        _In_ UINT numOctaves
        ) PURE;
    STDMETHOD(SetSeed)(THIS_
        _In_ UINT seed
        ) PURE;
    STDMETHOD(SetNoise)(THIS_
        _In_ D2D1_TURBULENCE_NOISE noise
        ) PURE;
    STDMETHOD(SetStitchable)(THIS_
        _In_ BOOL stitchable
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionLinearTransferEffect, IDCompositionFilterEffect, "4305EE5B-C4A0-4C88-9385-67124E017683")
{
    STDMETHOD(SetRedYIntercept)(THIS_
        _In_ float redYIntercept
        ) PURE;
    STDMETHOD(SetRedYIntercept)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetRedSlope)(THIS_
        _In_ float redSlope
        ) PURE;
    STDMETHOD(SetRedSlope)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetRedDisable)(THIS_
        _In_ BOOL redDisable
        ) PURE;
    STDMETHOD(SetGreenYIntercept)(THIS_
        _In_ float greenYIntercept
        ) PURE;
    STDMETHOD(SetGreenYIntercept)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetGreenSlope)(THIS_
        _In_ float greenSlope
        ) PURE;
    STDMETHOD(SetGreenSlope)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetGreenDisable)(THIS_
        _In_ BOOL greenDisable
        ) PURE;
    STDMETHOD(SetBlueYIntercept)(THIS_
        _In_ float blueYIntercept
        ) PURE;
    STDMETHOD(SetBlueYIntercept)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetBlueSlope)(THIS_
        _In_ float blueSlope
        ) PURE;
    STDMETHOD(SetBlueSlope)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetBlueDisable)(THIS_
        _In_ BOOL blueDisable
        ) PURE;
    STDMETHOD(SetAlphaYIntercept)(THIS_
        _In_ float alphaYIntercept
        ) PURE;
    STDMETHOD(SetAlphaYIntercept)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetAlphaSlope)(THIS_
        _In_ float alphaSlope
        ) PURE;
    STDMETHOD(SetAlphaSlope)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetAlphaDisable)(THIS_
        _In_ BOOL alphaDisable
        ) PURE;
    STDMETHOD(SetClampOutput)(THIS_
        _In_ BOOL clampOutput
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionTableTransferEffect, IDCompositionFilterEffect, "9B7E82E2-69C5-4EB4-A5F5-A7033F5132CD")
{
    STDMETHOD(SetRedTable)(THIS_
        _In_count_(count) const float *tableValues,
        _In_ UINT count
        ) PURE;
    STDMETHOD(SetGreenTable)(THIS_
        _In_count_(count) const float *tableValues,
        _In_ UINT count
        ) PURE;
    STDMETHOD(SetBlueTable)(THIS_
        _In_count_(count) const float *tableValues,
        _In_ UINT count
        ) PURE;
    STDMETHOD(SetAlphaTable)(THIS_
        _In_count_(count) const float *tableValues,
        _In_ UINT count
        ) PURE;
    STDMETHOD(SetRedDisable)(THIS_
        _In_ BOOL redDisable
        ) PURE;
    STDMETHOD(SetGreenDisable)(THIS_
        _In_ BOOL greenDisable
        ) PURE;
    STDMETHOD(SetBlueDisable)(THIS_
        _In_ BOOL blueDisable
        ) PURE;
    STDMETHOD(SetAlphaDisable)(THIS_
        _In_ BOOL alphaDisable
        ) PURE;
    STDMETHOD(SetClampOutput)(THIS_
        _In_ BOOL clampOutput
        ) PURE;
    STDMETHOD(SetRedTableValue)(THIS_
        _In_ UINT index,
        _In_ float value
        ) PURE;
    STDMETHOD(SetRedTableValue)(THIS_
        _In_ UINT index,
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetGreenTableValue)(THIS_
        _In_ UINT index,
        _In_ float value
        ) PURE;
    STDMETHOD(SetGreenTableValue)(THIS_
        _In_ UINT index,
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetBlueTableValue)(THIS_
        _In_ UINT index,
        _In_ float value
        ) PURE;
    STDMETHOD(SetBlueTableValue)(THIS_
        _In_ UINT index,
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetAlphaTableValue)(THIS_
        _In_ UINT index,
        _In_ float value
        ) PURE;
    STDMETHOD(SetAlphaTableValue)(THIS_
        _In_ UINT index,
        _In_ IDCompositionAnimation* animation
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionCompositeEffect, IDCompositionFilterEffect, "576616C0-A231-494D-A38D-00FD5EC4DB46")
{
    STDMETHOD(SetMode)(THIS_
        _In_ D2D1_COMPOSITE_MODE mode
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionBlendEffect, IDCompositionFilterEffect, "33ECDC0A-578A-4A11-9C14-0CB90517F9C5")
{
    STDMETHOD(SetMode)(THIS_
        _In_ D2D1_BLEND_MODE mode
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionArithmeticCompositeEffect, IDCompositionFilterEffect, "3B67DFA8-E3DD-4E61-B640-46C2F3D739DC")
{
    STDMETHOD(SetCoefficients)(THIS_
        _In_ const D2D1_VECTOR_4F &coefficients
        ) PURE;
    STDMETHOD(SetClampOutput)(THIS_
        _In_ BOOL clampoutput
        ) PURE;
    STDMETHOD(SetCoefficient1)(THIS_
        _In_ float Coeffcient1
        ) PURE;
    STDMETHOD(SetCoefficient1)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetCoefficient2)(THIS_
        _In_ float Coefficient2
        ) PURE;
    STDMETHOD(SetCoefficient2)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetCoefficient3)(THIS_
        _In_ float Coefficient3
        ) PURE;
    STDMETHOD(SetCoefficient3)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
    STDMETHOD(SetCoefficient4)(THIS_
        _In_ float Coefficient4
        ) PURE;
    STDMETHOD(SetCoefficient4)(THIS_
        _In_ IDCompositionAnimation* animation
        ) PURE;
};
DECLARE_INTERFACE_IID_(IDCompositionAffineTransform2DEffect, IDCompositionFilterEffect, "0B74B9E8-CDD6-492F-BBBC-5ED32157026D")
{
    STDMETHOD(SetInterpolationMode)(THIS_
        _In_ D2D1_2DAFFINETRANSFORM_INTERPOLATION_MODE interpolationMode
        ) PURE;
    STDMETHOD(SetBorderMode)(THIS_
        _In_ D2D1_BORDER_MODE borderMode
        ) PURE;
    STDMETHOD(SetTransformMatrix)(THIS_
        _In_ const D2D1_MATRIX_3X2_F &transformMatrix
        ) PURE;
    STDMETHOD(SetTransformMatrixElement)(THIS_
        _In_ int row,
        _In_ int column,
        _In_ float value
        ) PURE;
    STDMETHOD(SetTransformMatrixElement)(THIS_
        _In_ int row,
        _In_ int column,
        _In_ IDCompositionAnimation *animation
        ) PURE;
    STDMETHOD(SetSharpness)(THIS_
        _In_ float sharpness
        ) PURE;
    STDMETHOD(SetSharpness)(THIS_
        _In_ IDCompositionAnimation *animation
        ) PURE;
};
#endif
#pragma endregion
