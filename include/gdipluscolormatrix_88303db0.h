#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
struct ColorMatrix
{
    REAL m[5][5];
};
enum ColorMatrixFlags
{
    ColorMatrixFlagsDefault = 0,
    ColorMatrixFlagsSkipGrays = 1,
    ColorMatrixFlagsAltGray = 2
};
enum ColorAdjustType
{
    ColorAdjustTypeDefault,
    ColorAdjustTypeBitmap,
    ColorAdjustTypeBrush,
    ColorAdjustTypePen,
    ColorAdjustTypeText,
    ColorAdjustTypeCount,
    ColorAdjustTypeAny
};
struct ColorMap
{
    Color oldColor;
    Color newColor;
};
#endif
#pragma endregion
