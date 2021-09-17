#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef DWORD ARGB;
typedef DWORDLONG ARGB64;
typedef INT PixelFormat;
inline UINT
GetPixelFormatSize(PixelFormat pixfmt)
{
    return (pixfmt >> 8) & 0xff;
}
inline BOOL
IsIndexedPixelFormat(PixelFormat pixfmt)
{
    return (pixfmt & PixelFormatIndexed) != 0;
}
inline BOOL
IsAlphaPixelFormat(PixelFormat pixfmt)
{
   return (pixfmt & PixelFormatAlpha) != 0;
}
inline BOOL
IsExtendedPixelFormat(PixelFormat pixfmt)
{
   return (pixfmt & PixelFormatExtended) != 0;
}
inline BOOL
IsCanonicalPixelFormat(PixelFormat pixfmt)
{
   return (pixfmt & PixelFormatCanonical) != 0;
}
enum PaletteFlags
{
    PaletteFlagsHasAlpha = 0x0001,
    PaletteFlagsGrayScale = 0x0002,
    PaletteFlagsHalftone = 0x0004
};
struct ColorPalette
{
public:
    UINT Flags;
    UINT Count;
    ARGB Entries[1];
};
#endif
#pragma endregion
