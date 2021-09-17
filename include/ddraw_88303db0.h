#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(disable:4201)
        #define CO_E_NOTINITIALIZED 0x800401F0L
extern "C" {
    #define MAKEFOURCC(ch0, ch1, ch2, ch3) \
                ((DWORD)(BYTE)(ch0) | ((DWORD)(BYTE)(ch1) << 8) | \
                ((DWORD)(BYTE)(ch2) << 16) | ((DWORD)(BYTE)(ch3) << 24 ))
struct IDirectDraw;
struct IDirectDrawSurface;
struct IDirectDrawPalette;
struct IDirectDrawClipper;
typedef struct IDirectDraw FAR *LPDIRECTDRAW;
typedef struct IDirectDraw2 FAR *LPDIRECTDRAW2;
typedef struct IDirectDraw4 FAR *LPDIRECTDRAW4;
typedef struct IDirectDraw7 FAR *LPDIRECTDRAW7;
typedef struct IDirectDrawSurface FAR *LPDIRECTDRAWSURFACE;
typedef struct IDirectDrawSurface2 FAR *LPDIRECTDRAWSURFACE2;
typedef struct IDirectDrawSurface3 FAR *LPDIRECTDRAWSURFACE3;
typedef struct IDirectDrawSurface4 FAR *LPDIRECTDRAWSURFACE4;
typedef struct IDirectDrawSurface7 FAR *LPDIRECTDRAWSURFACE7;
typedef struct IDirectDrawPalette FAR *LPDIRECTDRAWPALETTE;
typedef struct IDirectDrawClipper FAR *LPDIRECTDRAWCLIPPER;
typedef struct IDirectDrawColorControl FAR *LPDIRECTDRAWCOLORCONTROL;
typedef struct IDirectDrawGammaControl FAR *LPDIRECTDRAWGAMMACONTROL;
typedef struct _DDFXROP FAR *LPDDFXROP;
typedef struct _DDSURFACEDESC FAR *LPDDSURFACEDESC;
typedef struct _DDSURFACEDESC2 FAR *LPDDSURFACEDESC2;
typedef struct _DDCOLORCONTROL FAR *LPDDCOLORCONTROL;
typedef _Return_type_success_(return >= 0) long HRESULT;
typedef HRESULT (FAR PASCAL * LPDDENUMMODESCALLBACK)(LPDDSURFACEDESC, LPVOID);
typedef HRESULT (FAR PASCAL * LPDDENUMMODESCALLBACK2)(LPDDSURFACEDESC2, LPVOID);
typedef HRESULT (FAR PASCAL * LPDDENUMSURFACESCALLBACK)(LPDIRECTDRAWSURFACE, LPDDSURFACEDESC, LPVOID);
typedef HRESULT (FAR PASCAL * LPDDENUMSURFACESCALLBACK2)(LPDIRECTDRAWSURFACE4, LPDDSURFACEDESC2, LPVOID);
typedef HRESULT (FAR PASCAL * LPDDENUMSURFACESCALLBACK7)(LPDIRECTDRAWSURFACE7, LPDDSURFACEDESC2, LPVOID);
typedef struct _DDARGB
{
    BYTE blue;
    BYTE green;
    BYTE red;
    BYTE alpha;
} DDARGB;
typedef DDARGB FAR *LPDDARGB;
typedef struct _DDRGBA
{
    BYTE red;
    BYTE green;
    BYTE blue;
    BYTE alpha;
} DDRGBA;
typedef DDRGBA FAR *LPDDRGBA;
typedef struct _DDCOLORKEY
{
    DWORD dwColorSpaceLowValue;
    DWORD dwColorSpaceHighValue;
} DDCOLORKEY;
typedef DDCOLORKEY FAR* LPDDCOLORKEY;
typedef struct _DDBLTFX
{
    DWORD dwSize;
    DWORD dwDDFX;
    DWORD dwROP;
    DWORD dwDDROP;
    DWORD dwRotationAngle;
    DWORD dwZBufferOpCode;
    DWORD dwZBufferLow;
    DWORD dwZBufferHigh;
    DWORD dwZBufferBaseDest;
    DWORD dwZDestConstBitDepth;
    union
    {
        DWORD dwZDestConst;
        LPDIRECTDRAWSURFACE lpDDSZBufferDest;
    } DUMMYUNIONNAMEN(1);
    DWORD dwZSrcConstBitDepth;
    union
    {
        DWORD dwZSrcConst;
        LPDIRECTDRAWSURFACE lpDDSZBufferSrc;
    } DUMMYUNIONNAMEN(2);
    DWORD dwAlphaEdgeBlendBitDepth;
    DWORD dwAlphaEdgeBlend;
    DWORD dwReserved;
    DWORD dwAlphaDestConstBitDepth;
    union
    {
        DWORD dwAlphaDestConst;
        LPDIRECTDRAWSURFACE lpDDSAlphaDest;
    } DUMMYUNIONNAMEN(3);
    DWORD dwAlphaSrcConstBitDepth;
    union
    {
        DWORD dwAlphaSrcConst;
        LPDIRECTDRAWSURFACE lpDDSAlphaSrc;
    } DUMMYUNIONNAMEN(4);
    union
    {
        DWORD dwFillColor;
        DWORD dwFillDepth;
        DWORD dwFillPixel;
        LPDIRECTDRAWSURFACE lpDDSPattern;
    } DUMMYUNIONNAMEN(5);
    DDCOLORKEY ddckDestColorkey;
    DDCOLORKEY ddckSrcColorkey;
} DDBLTFX;
typedef DDBLTFX FAR* LPDDBLTFX;
typedef struct _DDSCAPS
{
    DWORD dwCaps;
} DDSCAPS;
typedef DDSCAPS FAR* LPDDSCAPS;
typedef struct _DDOSCAPS
{
    DWORD dwCaps;
} DDOSCAPS;
typedef DDOSCAPS FAR* LPDDOSCAPS;
typedef struct _DDSCAPSEX
{
    DWORD dwCaps2;
    DWORD dwCaps3;
    union
    {
        DWORD dwCaps4;
        DWORD dwVolumeDepth;
    } DUMMYUNIONNAMEN(1);
} DDSCAPSEX, FAR * LPDDSCAPSEX;
typedef struct _DDSCAPS2
{
    DWORD dwCaps;
    DWORD dwCaps2;
    DWORD dwCaps3;
    union
    {
        DWORD dwCaps4;
        DWORD dwVolumeDepth;
    } DUMMYUNIONNAMEN(1);
} DDSCAPS2;
typedef DDSCAPS2 FAR* LPDDSCAPS2;
typedef struct _DDCAPS_DX1
{
    DWORD dwSize;
    DWORD dwCaps;
    DWORD dwCaps2;
    DWORD dwCKeyCaps;
    DWORD dwFXCaps;
    DWORD dwFXAlphaCaps;
    DWORD dwPalCaps;
    DWORD dwSVCaps;
    DWORD dwAlphaBltConstBitDepths;
    DWORD dwAlphaBltPixelBitDepths;
    DWORD dwAlphaBltSurfaceBitDepths;
    DWORD dwAlphaOverlayConstBitDepths;
    DWORD dwAlphaOverlayPixelBitDepths;
    DWORD dwAlphaOverlaySurfaceBitDepths;
    DWORD dwZBufferBitDepths;
    DWORD dwVidMemTotal;
    DWORD dwVidMemFree;
    DWORD dwMaxVisibleOverlays;
    DWORD dwCurrVisibleOverlays;
    DWORD dwNumFourCCCodes;
    DWORD dwAlignBoundarySrc;
    DWORD dwAlignSizeSrc;
    DWORD dwAlignBoundaryDest;
    DWORD dwAlignSizeDest;
    DWORD dwAlignStrideAlign;
    DWORD dwRops[DD_ROP_SPACE];
    DDSCAPS ddsCaps;
    DWORD dwMinOverlayStretch;
    DWORD dwMaxOverlayStretch;
    DWORD dwMinLiveVideoStretch;
    DWORD dwMaxLiveVideoStretch;
    DWORD dwMinHwCodecStretch;
    DWORD dwMaxHwCodecStretch;
    DWORD dwReserved1;
    DWORD dwReserved2;
    DWORD dwReserved3;
} DDCAPS_DX1;
typedef DDCAPS_DX1 FAR* LPDDCAPS_DX1;
typedef struct _DDCAPS_DX3
{
    DWORD dwSize;
    DWORD dwCaps;
    DWORD dwCaps2;
    DWORD dwCKeyCaps;
    DWORD dwFXCaps;
    DWORD dwFXAlphaCaps;
    DWORD dwPalCaps;
    DWORD dwSVCaps;
    DWORD dwAlphaBltConstBitDepths;
    DWORD dwAlphaBltPixelBitDepths;
    DWORD dwAlphaBltSurfaceBitDepths;
    DWORD dwAlphaOverlayConstBitDepths;
    DWORD dwAlphaOverlayPixelBitDepths;
    DWORD dwAlphaOverlaySurfaceBitDepths;
    DWORD dwZBufferBitDepths;
    DWORD dwVidMemTotal;
    DWORD dwVidMemFree;
    DWORD dwMaxVisibleOverlays;
    DWORD dwCurrVisibleOverlays;
    DWORD dwNumFourCCCodes;
    DWORD dwAlignBoundarySrc;
    DWORD dwAlignSizeSrc;
    DWORD dwAlignBoundaryDest;
    DWORD dwAlignSizeDest;
    DWORD dwAlignStrideAlign;
    DWORD dwRops[DD_ROP_SPACE];
    DDSCAPS ddsCaps;
    DWORD dwMinOverlayStretch;
    DWORD dwMaxOverlayStretch;
    DWORD dwMinLiveVideoStretch;
    DWORD dwMaxLiveVideoStretch;
    DWORD dwMinHwCodecStretch;
    DWORD dwMaxHwCodecStretch;
    DWORD dwReserved1;
    DWORD dwReserved2;
    DWORD dwReserved3;
    DWORD dwSVBCaps;
    DWORD dwSVBCKeyCaps;
    DWORD dwSVBFXCaps;
    DWORD dwSVBRops[DD_ROP_SPACE];
    DWORD dwVSBCaps;
    DWORD dwVSBCKeyCaps;
    DWORD dwVSBFXCaps;
    DWORD dwVSBRops[DD_ROP_SPACE];
    DWORD dwSSBCaps;
    DWORD dwSSBCKeyCaps;
    DWORD dwSSBFXCaps;
    DWORD dwSSBRops[DD_ROP_SPACE];
    DWORD dwReserved4;
    DWORD dwReserved5;
    DWORD dwReserved6;
} DDCAPS_DX3;
typedef DDCAPS_DX3 FAR* LPDDCAPS_DX3;
typedef struct _DDCAPS_DX5
{
        DWORD dwSize;
        DWORD dwCaps;
        DWORD dwCaps2;
        DWORD dwCKeyCaps;
        DWORD dwFXCaps;
        DWORD dwFXAlphaCaps;
        DWORD dwPalCaps;
        DWORD dwSVCaps;
        DWORD dwAlphaBltConstBitDepths;
        DWORD dwAlphaBltPixelBitDepths;
        DWORD dwAlphaBltSurfaceBitDepths;
        DWORD dwAlphaOverlayConstBitDepths;
        DWORD dwAlphaOverlayPixelBitDepths;
        DWORD dwAlphaOverlaySurfaceBitDepths;
        DWORD dwZBufferBitDepths;
        DWORD dwVidMemTotal;
        DWORD dwVidMemFree;
        DWORD dwMaxVisibleOverlays;
        DWORD dwCurrVisibleOverlays;
        DWORD dwNumFourCCCodes;
        DWORD dwAlignBoundarySrc;
        DWORD dwAlignSizeSrc;
        DWORD dwAlignBoundaryDest;
        DWORD dwAlignSizeDest;
        DWORD dwAlignStrideAlign;
        DWORD dwRops[DD_ROP_SPACE];
        DDSCAPS ddsCaps;
        DWORD dwMinOverlayStretch;
        DWORD dwMaxOverlayStretch;
        DWORD dwMinLiveVideoStretch;
        DWORD dwMaxLiveVideoStretch;
        DWORD dwMinHwCodecStretch;
        DWORD dwMaxHwCodecStretch;
        DWORD dwReserved1;
        DWORD dwReserved2;
        DWORD dwReserved3;
        DWORD dwSVBCaps;
        DWORD dwSVBCKeyCaps;
        DWORD dwSVBFXCaps;
        DWORD dwSVBRops[DD_ROP_SPACE];
        DWORD dwVSBCaps;
        DWORD dwVSBCKeyCaps;
        DWORD dwVSBFXCaps;
        DWORD dwVSBRops[DD_ROP_SPACE];
        DWORD dwSSBCaps;
        DWORD dwSSBCKeyCaps;
        DWORD dwSSBFXCaps;
        DWORD dwSSBRops[DD_ROP_SPACE];
        DWORD dwMaxVideoPorts;
        DWORD dwCurrVideoPorts;
        DWORD dwSVBCaps2;
        DWORD dwNLVBCaps;
        DWORD dwNLVBCaps2;
        DWORD dwNLVBCKeyCaps;
        DWORD dwNLVBFXCaps;
        DWORD dwNLVBRops[DD_ROP_SPACE];
} DDCAPS_DX5;
typedef DDCAPS_DX5 FAR* LPDDCAPS_DX5;
typedef struct _DDCAPS_DX6
{
        DWORD dwSize;
        DWORD dwCaps;
        DWORD dwCaps2;
        DWORD dwCKeyCaps;
        DWORD dwFXCaps;
        DWORD dwFXAlphaCaps;
        DWORD dwPalCaps;
        DWORD dwSVCaps;
        DWORD dwAlphaBltConstBitDepths;
        DWORD dwAlphaBltPixelBitDepths;
        DWORD dwAlphaBltSurfaceBitDepths;
        DWORD dwAlphaOverlayConstBitDepths;
        DWORD dwAlphaOverlayPixelBitDepths;
        DWORD dwAlphaOverlaySurfaceBitDepths;
        DWORD dwZBufferBitDepths;
        DWORD dwVidMemTotal;
        DWORD dwVidMemFree;
        DWORD dwMaxVisibleOverlays;
        DWORD dwCurrVisibleOverlays;
        DWORD dwNumFourCCCodes;
        DWORD dwAlignBoundarySrc;
        DWORD dwAlignSizeSrc;
        DWORD dwAlignBoundaryDest;
        DWORD dwAlignSizeDest;
        DWORD dwAlignStrideAlign;
        DWORD dwRops[DD_ROP_SPACE];
        DDSCAPS ddsOldCaps;
        DWORD dwMinOverlayStretch;
        DWORD dwMaxOverlayStretch;
        DWORD dwMinLiveVideoStretch;
        DWORD dwMaxLiveVideoStretch;
        DWORD dwMinHwCodecStretch;
        DWORD dwMaxHwCodecStretch;
        DWORD dwReserved1;
        DWORD dwReserved2;
        DWORD dwReserved3;
        DWORD dwSVBCaps;
        DWORD dwSVBCKeyCaps;
        DWORD dwSVBFXCaps;
        DWORD dwSVBRops[DD_ROP_SPACE];
        DWORD dwVSBCaps;
        DWORD dwVSBCKeyCaps;
        DWORD dwVSBFXCaps;
        DWORD dwVSBRops[DD_ROP_SPACE];
        DWORD dwSSBCaps;
        DWORD dwSSBCKeyCaps;
        DWORD dwSSBFXCaps;
        DWORD dwSSBRops[DD_ROP_SPACE];
        DWORD dwMaxVideoPorts;
        DWORD dwCurrVideoPorts;
        DWORD dwSVBCaps2;
        DWORD dwNLVBCaps;
        DWORD dwNLVBCaps2;
        DWORD dwNLVBCKeyCaps;
        DWORD dwNLVBFXCaps;
        DWORD dwNLVBRops[DD_ROP_SPACE];
        DDSCAPS2 ddsCaps;
} DDCAPS_DX6;
typedef DDCAPS_DX6 FAR* LPDDCAPS_DX6;
typedef struct _DDCAPS_DX7
{
        DWORD dwSize;
        DWORD dwCaps;
        DWORD dwCaps2;
        DWORD dwCKeyCaps;
        DWORD dwFXCaps;
        DWORD dwFXAlphaCaps;
        DWORD dwPalCaps;
        DWORD dwSVCaps;
        DWORD dwAlphaBltConstBitDepths;
        DWORD dwAlphaBltPixelBitDepths;
        DWORD dwAlphaBltSurfaceBitDepths;
        DWORD dwAlphaOverlayConstBitDepths;
        DWORD dwAlphaOverlayPixelBitDepths;
        DWORD dwAlphaOverlaySurfaceBitDepths;
        DWORD dwZBufferBitDepths;
        DWORD dwVidMemTotal;
        DWORD dwVidMemFree;
        DWORD dwMaxVisibleOverlays;
        DWORD dwCurrVisibleOverlays;
        DWORD dwNumFourCCCodes;
        DWORD dwAlignBoundarySrc;
        DWORD dwAlignSizeSrc;
        DWORD dwAlignBoundaryDest;
        DWORD dwAlignSizeDest;
        DWORD dwAlignStrideAlign;
        DWORD dwRops[DD_ROP_SPACE];
        DDSCAPS ddsOldCaps;
        DWORD dwMinOverlayStretch;
        DWORD dwMaxOverlayStretch;
        DWORD dwMinLiveVideoStretch;
        DWORD dwMaxLiveVideoStretch;
        DWORD dwMinHwCodecStretch;
        DWORD dwMaxHwCodecStretch;
        DWORD dwReserved1;
        DWORD dwReserved2;
        DWORD dwReserved3;
        DWORD dwSVBCaps;
        DWORD dwSVBCKeyCaps;
        DWORD dwSVBFXCaps;
        DWORD dwSVBRops[DD_ROP_SPACE];
        DWORD dwVSBCaps;
        DWORD dwVSBCKeyCaps;
        DWORD dwVSBFXCaps;
        DWORD dwVSBRops[DD_ROP_SPACE];
        DWORD dwSSBCaps;
        DWORD dwSSBCKeyCaps;
        DWORD dwSSBFXCaps;
        DWORD dwSSBRops[DD_ROP_SPACE];
        DWORD dwMaxVideoPorts;
        DWORD dwCurrVideoPorts;
        DWORD dwSVBCaps2;
        DWORD dwNLVBCaps;
        DWORD dwNLVBCaps2;
        DWORD dwNLVBCKeyCaps;
        DWORD dwNLVBFXCaps;
        DWORD dwNLVBRops[DD_ROP_SPACE];
        DDSCAPS2 ddsCaps;
} DDCAPS_DX7;
typedef DDCAPS_DX7 FAR* LPDDCAPS_DX7;
    typedef DDCAPS_DX7 DDCAPS;
typedef DDCAPS FAR* LPDDCAPS;
typedef struct _DDPIXELFORMAT
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwFourCC;
    union
    {
        DWORD dwRGBBitCount;
        DWORD dwYUVBitCount;
        DWORD dwZBufferBitDepth;
        DWORD dwAlphaBitDepth;
        DWORD dwLuminanceBitCount;
        DWORD dwBumpBitCount;
        DWORD dwPrivateFormatBitCount;
    } DUMMYUNIONNAMEN(1);
    union
    {
        DWORD dwRBitMask;
        DWORD dwYBitMask;
        DWORD dwStencilBitDepth;
        DWORD dwLuminanceBitMask;
        DWORD dwBumpDuBitMask;
        DWORD dwOperations;
    } DUMMYUNIONNAMEN(2);
    union
    {
        DWORD dwGBitMask;
        DWORD dwUBitMask;
        DWORD dwZBitMask;
        DWORD dwBumpDvBitMask;
        struct
        {
            WORD wFlipMSTypes;
            WORD wBltMSTypes;
        } MultiSampleCaps;
    } DUMMYUNIONNAMEN(3);
    union
    {
        DWORD dwBBitMask;
        DWORD dwVBitMask;
        DWORD dwStencilBitMask;
        DWORD dwBumpLuminanceBitMask;
    } DUMMYUNIONNAMEN(4);
    union
    {
        DWORD dwRGBAlphaBitMask;
        DWORD dwYUVAlphaBitMask;
        DWORD dwLuminanceAlphaBitMask;
        DWORD dwRGBZBitMask;
        DWORD dwYUVZBitMask;
    } DUMMYUNIONNAMEN(5);
} DDPIXELFORMAT;
typedef DDPIXELFORMAT FAR* LPDDPIXELFORMAT;
typedef struct _DDOVERLAYFX
{
    DWORD dwSize;
    DWORD dwAlphaEdgeBlendBitDepth;
    DWORD dwAlphaEdgeBlend;
    DWORD dwReserved;
    DWORD dwAlphaDestConstBitDepth;
    union
    {
        DWORD dwAlphaDestConst;
        LPDIRECTDRAWSURFACE lpDDSAlphaDest;
    } DUMMYUNIONNAMEN(1);
    DWORD dwAlphaSrcConstBitDepth;
    union
    {
        DWORD dwAlphaSrcConst;
        LPDIRECTDRAWSURFACE lpDDSAlphaSrc;
    } DUMMYUNIONNAMEN(2);
    DDCOLORKEY dckDestColorkey;
    DDCOLORKEY dckSrcColorkey;
    DWORD dwDDFX;
    DWORD dwFlags;
} DDOVERLAYFX;
typedef DDOVERLAYFX FAR *LPDDOVERLAYFX;
typedef struct _DDBLTBATCH
{
    LPRECT lprDest;
    LPDIRECTDRAWSURFACE lpDDSSrc;
    LPRECT lprSrc;
    DWORD dwFlags;
    LPDDBLTFX lpDDBltFx;
} DDBLTBATCH;
typedef DDBLTBATCH FAR * LPDDBLTBATCH;
typedef struct _DDGAMMARAMP
{
    WORD red[256];
    WORD green[256];
    WORD blue[256];
} DDGAMMARAMP;
typedef DDGAMMARAMP FAR * LPDDGAMMARAMP;
typedef struct tagDDDEVICEIDENTIFIER
{
    char szDriver[MAX_DDDEVICEID_STRING];
    char szDescription[MAX_DDDEVICEID_STRING];
    LARGE_INTEGER liDriverVersion;
    DWORD dwVendorId;
    DWORD dwDeviceId;
    DWORD dwSubSysId;
    DWORD dwRevision;
    GUID guidDeviceIdentifier;
} DDDEVICEIDENTIFIER, * LPDDDEVICEIDENTIFIER;
typedef struct tagDDDEVICEIDENTIFIER2
{
    char szDriver[MAX_DDDEVICEID_STRING];
    char szDescription[MAX_DDDEVICEID_STRING];
    LARGE_INTEGER liDriverVersion;
    DWORD dwVendorId;
    DWORD dwDeviceId;
    DWORD dwSubSysId;
    DWORD dwRevision;
    GUID guidDeviceIdentifier;
    DWORD dwWHQLLevel;
} DDDEVICEIDENTIFIER2, * LPDDDEVICEIDENTIFIER2;
    ( (dwWHQLLevel) / 0x10000 )
    ( ( (dwWHQLLevel) / 0x100 ) & 0x00ff )
    ( (dwWHQLLevel) & 0xff )
typedef DWORD (FAR PASCAL *LPCLIPPERCALLBACK)(LPDIRECTDRAWCLIPPER lpDDClipper, HWND hWnd, DWORD code, LPVOID lpContext );
typedef DWORD (FAR PASCAL *LPSURFACESTREAMINGCALLBACK)(DWORD);
typedef struct _DDSURFACEDESC
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwHeight;
    DWORD dwWidth;
    union
    {
        LONG lPitch;
        DWORD dwLinearSize;
    } DUMMYUNIONNAMEN(1);
    DWORD dwBackBufferCount;
    union
    {
        DWORD dwMipMapCount;
        DWORD dwZBufferBitDepth;
        DWORD dwRefreshRate;
    } DUMMYUNIONNAMEN(2);
    DWORD dwAlphaBitDepth;
    DWORD dwReserved;
    LPVOID lpSurface;
    DDCOLORKEY ddckCKDestOverlay;
    DDCOLORKEY ddckCKDestBlt;
    DDCOLORKEY ddckCKSrcOverlay;
    DDCOLORKEY ddckCKSrcBlt;
    DDPIXELFORMAT ddpfPixelFormat;
    DDSCAPS ddsCaps;
} DDSURFACEDESC;
typedef struct _DDSURFACEDESC2
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwHeight;
    DWORD dwWidth;
    union
    {
        LONG lPitch;
        DWORD dwLinearSize;
    } DUMMYUNIONNAMEN(1);
    union
    {
        DWORD dwBackBufferCount;
        DWORD dwDepth;
    } DUMMYUNIONNAMEN(5);
    union
    {
        DWORD dwMipMapCount;
        DWORD dwRefreshRate;
        DWORD dwSrcVBHandle;
    } DUMMYUNIONNAMEN(2);
    DWORD dwAlphaBitDepth;
    DWORD dwReserved;
    LPVOID lpSurface;
    union
    {
        DDCOLORKEY ddckCKDestOverlay;
        DWORD dwEmptyFaceColor;
    } DUMMYUNIONNAMEN(3);
    DDCOLORKEY ddckCKDestBlt;
    DDCOLORKEY ddckCKSrcOverlay;
    DDCOLORKEY ddckCKSrcBlt;
    union
    {
        DDPIXELFORMAT ddpfPixelFormat;
        DWORD dwFVF;
    } DUMMYUNIONNAMEN(4);
    DDSCAPS2 ddsCaps;
    DWORD dwTextureStage;
} DDSURFACEDESC2;
typedef struct _DDOPTSURFACEDESC
{
    DWORD dwSize;
    DWORD dwFlags;
    DDSCAPS2 ddSCaps;
    DDOSCAPS ddOSCaps;
    GUID guid;
    DWORD dwCompressionRatio;
} DDOPTSURFACEDESC;
typedef struct _DDCOLORCONTROL
{
    DWORD dwSize;
    DWORD dwFlags;
    LONG lBrightness;
    LONG lContrast;
    LONG lHue;
    LONG lSaturation;
    LONG lSharpness;
    LONG lGamma;
    LONG lColorEnable;
    DWORD dwReserved1;
} DDCOLORCONTROL;
                                    DDSCAPS2_CUBEMAP_NEGATIVEX |\
                                    DDSCAPS2_CUBEMAP_POSITIVEY |\
                                    DDSCAPS2_CUBEMAP_NEGATIVEY |\
                                    DDSCAPS2_CUBEMAP_POSITIVEZ |\
                                    DDSCAPS2_CUBEMAP_NEGATIVEZ )
};
#pragma warning(default:4201)
#endif
#pragma endregion
