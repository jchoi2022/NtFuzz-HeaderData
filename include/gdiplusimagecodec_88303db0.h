#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
inline Status
GetImageDecodersSize(
    _Out_ UINT *numDecoders,
    _Out_ _Out_range_(>=, (*numDecoders) * sizeof(ImageCodecInfo)) UINT *size)
{
    return DllExports::GdipGetImageDecodersSize(numDecoders, size);
}
inline Status
GetImageDecoders(
    _In_ UINT numDecoders,
    _In_ UINT size,
    _Out_writes_bytes_(size) ImageCodecInfo *decoders)
{
    return DllExports::GdipGetImageDecoders(numDecoders, size, decoders);
}
inline Status
GetImageEncodersSize(
    _Out_ UINT *numEncoders,
    _Out_ _Out_range_(>=, (*numEncoders) * sizeof(ImageCodecInfo)) UINT *size)
{
    return DllExports::GdipGetImageEncodersSize(numEncoders, size);
}
inline Status
GetImageEncoders(
    _In_ UINT numEncoders,
    _In_ IN UINT size,
    _Out_writes_bytes_(size) ImageCodecInfo *encoders)
{
    return DllExports::GdipGetImageEncoders(numEncoders, size, encoders);
}
#endif
#pragma endregion
