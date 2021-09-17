#include <windows.graphics.h>
#include <sdkddkver.h>
interface ID2D1Geometry;
interface ID2D1Factory;
namespace Windows {
namespace Graphics {
DECLARE_INTERFACE_IID_(IGeometrySource2DInterop, IUnknown, "0657AF73-53FD-47CF-84FF-C8492D2A80A3")
{
    IFACEMETHOD(GetGeometry)(
        _COM_Outptr_ ID2D1Geometry** value
        ) PURE;
    IFACEMETHOD(TryGetGeometryUsingFactory)(
        _In_ ID2D1Factory* factory,
        _COM_Outptr_result_maybenull_ ID2D1Geometry** value
        ) PURE;
};
}
}
