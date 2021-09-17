#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
struct IDirectDrawSurface7;
typedef signed short INT16;
typedef unsigned short UINT16;
#include <pshpack8.h>
namespace Gdiplus
{
    namespace DllExports
    {
        #include "GdiplusMem.h"
    };
    #include "GdiplusBase.h"
    #include "GdiplusEnums.h"
    #include "GdiplusTypes.h"
    #include "GdiplusInit.h"
    #include "GdiplusPixelFormats.h"
    #include "GdiplusColor.h"
    #include "GdiplusMetaHeader.h"
    #include "GdiplusImaging.h"
    #include "GdiplusColorMatrix.h"
    #include "GdiplusGpStubs.h"
    #include "GdiplusHeaders.h"
    namespace DllExports
    {
        #include "GdiplusFlat.h"
    };
    #include "GdiplusImageAttributes.h"
    #include "GdiplusMatrix.h"
    #include "GdiplusBrush.h"
    #include "GdiplusPen.h"
    #include "GdiplusStringFormat.h"
    #include "GdiplusPath.h"
    #include "GdiplusLineCaps.h"
    #include "GdiplusGraphics.h"
    #include "GdiplusMetafile.h"
    #include "GdiplusCachedBitmap.h"
    #include "GdiplusRegion.h"
    #include "GdiplusFontCollection.h"
    #include "GdiplusFontFamily.h"
    #include "GdiplusFont.h"
    #include "GdiplusBitmap.h"
    #include "GdiplusImageCodec.h"
};
#include <poppack.h>
#endif
#pragma endregion
