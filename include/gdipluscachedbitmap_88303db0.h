#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
inline
CachedBitmap::CachedBitmap(
    IN Bitmap *bitmap,
    IN Graphics *graphics)
{
    nativeCachedBitmap = NULL;
    lastResult = DllExports::GdipCreateCachedBitmap(
        (GpBitmap *)bitmap->nativeImage,
        graphics->nativeGraphics,
        &nativeCachedBitmap
    );
}
inline
CachedBitmap::~CachedBitmap()
{
    DllExports::GdipDeleteCachedBitmap(nativeCachedBitmap);
}
inline Status
CachedBitmap::GetLastStatus() const
{
    Status lastStatus = lastResult;
    lastResult = Ok;
    return (lastStatus);
}
#endif
#pragma endregion
