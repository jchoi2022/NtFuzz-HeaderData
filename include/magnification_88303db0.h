#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <wincodec.h>
extern "C" {
typedef struct tagMAGTRANSFORM
{
    float v[3][3];
} MAGTRANSFORM, *PMAGTRANSFORM;
typedef struct tagMAGIMAGEHEADER
{
    UINT width;
    UINT height;
    WICPixelFormatGUID format;
    UINT stride;
    UINT offset;
    SIZE_T cbSize;
} MAGIMAGEHEADER, *PMAGIMAGEHEADER;
typedef struct tagMAGCOLOREFFECT
{
    float transform[5][5];
} MAGCOLOREFFECT, *PMAGCOLOREFFECT;
typedef BOOL (CALLBACK* MagImageScalingCallback)(HWND hwnd, void * srcdata, MAGIMAGEHEADER srcheader, void * destdata, MAGIMAGEHEADER destheader, RECT unclipped, RECT clipped, HRGN dirty );
BOOL WINAPI MagInitialize();
BOOL WINAPI MagUninitialize();
BOOL WINAPI MagSetWindowSource(HWND hwnd, RECT rect);
BOOL WINAPI MagGetWindowSource(HWND hwnd, RECT *pRect);
BOOL WINAPI MagSetWindowTransform(HWND hwnd, PMAGTRANSFORM pTransform);
BOOL WINAPI MagGetWindowTransform(HWND hwnd, PMAGTRANSFORM pTransform);
BOOL WINAPI MagSetWindowFilterList(HWND hwnd, DWORD dwFilterMode, int count, HWND *pHWND );
int WINAPI MagGetWindowFilterList(HWND hwnd, DWORD *pdwFilterMode, int count, HWND *pHWND );
BOOL WINAPI MagSetImageScalingCallback(HWND hwnd, MagImageScalingCallback callback );
MagImageScalingCallback WINAPI MagGetImageScalingCallback(HWND hwnd );
BOOL WINAPI MagSetColorEffect(HWND hwnd, PMAGCOLOREFFECT pEffect);
BOOL WINAPI MagGetColorEffect(HWND hwnd, PMAGCOLOREFFECT pEffect);
BOOL WINAPI MagSetFullscreenTransform(_In_ float magLevel, _In_ int xOffset, _In_ int yOffset);
BOOL WINAPI MagGetFullscreenTransform(_Out_ float *pMagLevel, _Out_ int *pxOffset, _Out_ int *pyOffset);
BOOL WINAPI MagSetFullscreenColorEffect(_In_ PMAGCOLOREFFECT pEffect);
BOOL WINAPI MagGetFullscreenColorEffect(_Out_ PMAGCOLOREFFECT pEffect);
BOOL WINAPI MagSetInputTransform(_In_ BOOL fEnabled, _In_ const LPRECT pRectSource, _In_ const LPRECT pRectDest);
BOOL WINAPI MagGetInputTransform(_Out_ BOOL *pfEnabled, _Out_ LPRECT pRectSource, _Out_ LPRECT pRectDest);
BOOL WINAPI MagShowSystemCursor(_In_ BOOL fShowCursor);
}
#endif
#pragma endregion
