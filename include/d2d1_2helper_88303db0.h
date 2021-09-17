       
#include <d2d1_2.h>
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
namespace D2D1
{
    COM_DECLSPEC_NOTHROW
    D2D1FORCEINLINE
    FLOAT
    ComputeFlatteningTolerance(
        _In_ CONST D2D1_MATRIX_3X2_F &matrix,
        FLOAT dpiX = 96.0f,
        FLOAT dpiY = 96.0f,
        FLOAT maxZoomFactor = 1.0f
        )
    {
        D2D1_MATRIX_3X2_F dpiDependentTransform =
            matrix * D2D1::Matrix3x2F::Scale(dpiX / 96.0f, dpiY / 96.0f);
        FLOAT absMaxZoomFactor = (maxZoomFactor > 0) ? maxZoomFactor : -maxZoomFactor;
        return D2D1_DEFAULT_FLATTENING_TOLERANCE /
            (absMaxZoomFactor * D2D1ComputeMaximumScaleFactor(&dpiDependentTransform));
    }
}
#endif
#pragma endregion
