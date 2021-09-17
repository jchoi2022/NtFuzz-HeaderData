#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef enum _DXVA2_SampleFlags
{
    DXVA2_SampleFlag_Palette_Changed = 0x00000001,
    DXVA2_SampleFlag_SrcRect_Changed = 0x00000002,
    DXVA2_SampleFlag_DstRect_Changed = 0x00000004,
    DXVA2_SampleFlag_ColorData_Changed = 0x00000008,
    DXVA2_SampleFlag_PlanarAlpha_Changed = 0x00000010,
    DXVA2_SampleFlag_RFF = 0x00010000,
    DXVA2_SampleFlag_TFF = 0x00020000,
    DXVA2_SampleFlag_RFF_TFF_Present = 0x00040000,
    DXVA2_SampleFlagsMask = 0xFFFF001F
} DXVA2_SampleFlags;
typedef enum _DXVA2_DestinationFlags
{
    DXVA2_DestinationFlag_Background_Changed = 0x00000001,
    DXVA2_DestinationFlag_TargetRect_Changed = 0x00000002,
    DXVA2_DestinationFlag_ColorData_Changed = 0x00000004,
    DXVA2_DestinationFlag_Alpha_Changed = 0x00000008,
    DXVA2_DestinationFlag_RFF = 0x00010000,
    DXVA2_DestinationFlag_TFF = 0x00020000,
    DXVA2_DestinationFlag_RFF_TFF_Present = 0x00040000,
    DXVA2_DestinationFlagMask = 0xFFFF000F
} DXVA2_DestinationFlags;
typedef struct _DXVA2_VIDEOSAMPLE
{
    REFERENCE_TIME Start;
    REFERENCE_TIME End;
    DXVA2_ExtendedFormat SampleFormat;
    UINT SampleFlags;
    VOID* SrcResource;
    RECT SrcRect;
    RECT DstRect;
    DXVA2_AYUVSample8 Pal[16];
    DXVA2_Fixed32 PlanarAlpha;
} DXVA2_VIDEOSAMPLE;
typedef struct _DXVA2_VIDEOPROCESSBLT
{
    REFERENCE_TIME TargetFrame;
    RECT TargetRect;
    SIZE ConstrictionSize;
    UINT StreamingFlags;
    DXVA2_AYUVSample16 BackgroundColor;
    DXVA2_ExtendedFormat DestFormat;
    UINT DestFlags;
    DXVA2_ProcAmpValues ProcAmpValues;
    DXVA2_Fixed32 Alpha;
    DXVA2_FilterValues NoiseFilterLuma;
    DXVA2_FilterValues NoiseFilterChroma;
    DXVA2_FilterValues DetailFilterLuma;
    DXVA2_FilterValues DetailFilterChroma;
    DXVA2_VIDEOSAMPLE* pSrcSurfaces;
    UINT NumSrcSurfaces;
} DXVA2_VIDEOPROCESSBLT;
}
#endif
#pragma endregion
