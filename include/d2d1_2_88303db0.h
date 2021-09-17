       
#include <d2d1_1.h>
#include <d2d1effects_1.h>
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
interface ID2D1Device1;
typedef enum D2D1_RENDERING_PRIORITY
{
    D2D1_RENDERING_PRIORITY_NORMAL = 0,
    D2D1_RENDERING_PRIORITY_LOW = 1,
    D2D1_RENDERING_PRIORITY_FORCE_DWORD = 0xffffffff
} D2D1_RENDERING_PRIORITY;
EXTERN_C CONST IID IID_ID2D1GeometryRealization;
EXTERN_C CONST IID IID_ID2D1DeviceContext1;
EXTERN_C CONST IID IID_ID2D1Device1;
EXTERN_C CONST IID IID_ID2D1Factory2;
EXTERN_C CONST IID IID_ID2D1CommandSink1;
interface DX_DECLARE_INTERFACE("a16907d7-bc02-4801-99e8-8cf7f485f774") ID2D1GeometryRealization : public ID2D1Resource
{
};
interface DX_DECLARE_INTERFACE("d37f57e4-6908-459f-a199-e72f24f79987") ID2D1DeviceContext1 : public ID2D1DeviceContext
{
    STDMETHOD(CreateFilledGeometryRealization)(
        _In_ ID2D1Geometry *geometry,
        FLOAT flatteningTolerance,
        _COM_Outptr_ ID2D1GeometryRealization **geometryRealization
        ) PURE;
    STDMETHOD(CreateStrokedGeometryRealization)(
        _In_ ID2D1Geometry *geometry,
        FLOAT flatteningTolerance,
        FLOAT strokeWidth,
        _In_opt_ ID2D1StrokeStyle *strokeStyle,
        _COM_Outptr_ ID2D1GeometryRealization **geometryRealization
        ) PURE;
    STDMETHOD_(void, DrawGeometryRealization)(
        _In_ ID2D1GeometryRealization *geometryRealization,
        _In_ ID2D1Brush *brush
        ) PURE;
};
interface DX_DECLARE_INTERFACE("d21768e1-23a4-4823-a14b-7c3eba85d658") ID2D1Device1 : public ID2D1Device
{
    STDMETHOD_(D2D1_RENDERING_PRIORITY, GetRenderingPriority)(
        ) PURE;
    STDMETHOD_(void, SetRenderingPriority)(
        D2D1_RENDERING_PRIORITY renderingPriority
        ) PURE;
    STDMETHOD(CreateDeviceContext)(
        D2D1_DEVICE_CONTEXT_OPTIONS options,
        _COM_Outptr_ ID2D1DeviceContext1 **deviceContext1
        ) PURE;
    using ID2D1Device::CreateDeviceContext;
};
interface DX_DECLARE_INTERFACE("94f81a73-9212-4376-9c58-b16a3a0d3992") ID2D1Factory2 : public ID2D1Factory1
{
    STDMETHOD(CreateDevice)(
        _In_ IDXGIDevice *dxgiDevice,
        _COM_Outptr_ ID2D1Device1 **d2dDevice1
        ) PURE;
    using ID2D1Factory1::CreateDevice;
};
interface DX_DECLARE_INTERFACE("9eb767fd-4269-4467-b8c2-eb30cb305743") ID2D1CommandSink1 : public ID2D1CommandSink
{
    STDMETHOD(SetPrimitiveBlend1)(
        D2D1_PRIMITIVE_BLEND primitiveBlend
        ) PURE;
};
typedef interface ID2D1GeometryRealization ID2D1GeometryRealization;
typedef interface ID2D1DeviceContext1 ID2D1DeviceContext1;
typedef interface ID2D1Device1 ID2D1Device1;
typedef interface ID2D1Factory2 ID2D1Factory2;
typedef interface ID2D1CommandSink1 ID2D1CommandSink1;
extern "C"
{
    FLOAT WINAPI
    D2D1ComputeMaximumScaleFactor(
        _In_ CONST D2D1_MATRIX_3X2_F *matrix
        );
}
#endif
#pragma endregion
#include <d2d1_2helper.h>
