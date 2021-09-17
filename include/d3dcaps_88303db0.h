#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "ddraw.h"
typedef struct _D3DTRANSFORMCAPS {
    DWORD dwSize;
    DWORD dwCaps;
} D3DTRANSFORMCAPS, *LPD3DTRANSFORMCAPS;
typedef struct _D3DLIGHTINGCAPS {
    DWORD dwSize;
    DWORD dwCaps;
    DWORD dwLightingModel;
    DWORD dwNumLights;
} D3DLIGHTINGCAPS, *LPD3DLIGHTINGCAPS;
typedef struct _D3DPrimCaps {
    DWORD dwSize;
    DWORD dwMiscCaps;
    DWORD dwRasterCaps;
    DWORD dwZCmpCaps;
    DWORD dwSrcBlendCaps;
    DWORD dwDestBlendCaps;
    DWORD dwAlphaCmpCaps;
    DWORD dwShadeCaps;
    DWORD dwTextureCaps;
    DWORD dwTextureFilterCaps;
    DWORD dwTextureBlendCaps;
    DWORD dwTextureAddressCaps;
    DWORD dwStippleWidth;
    DWORD dwStippleHeight;
} D3DPRIMCAPS, *LPD3DPRIMCAPS;
typedef struct _D3DDeviceDesc {
    DWORD dwSize;
    DWORD dwFlags;
    D3DCOLORMODEL dcmColorModel;
    DWORD dwDevCaps;
    D3DTRANSFORMCAPS dtcTransformCaps;
    BOOL bClipping;
    D3DLIGHTINGCAPS dlcLightingCaps;
    D3DPRIMCAPS dpcLineCaps;
    D3DPRIMCAPS dpcTriCaps;
    DWORD dwDeviceRenderBitDepth;
    DWORD dwDeviceZBufferBitDepth;
    DWORD dwMaxBufferSize;
    DWORD dwMaxVertexCount;
    DWORD dwMinTextureWidth, dwMinTextureHeight;
    DWORD dwMaxTextureWidth, dwMaxTextureHeight;
    DWORD dwMinStippleWidth, dwMaxStippleWidth;
    DWORD dwMinStippleHeight, dwMaxStippleHeight;
    DWORD dwMaxTextureRepeat;
    DWORD dwMaxTextureAspectRatio;
    DWORD dwMaxAnisotropy;
    D3DVALUE dvGuardBandLeft;
    D3DVALUE dvGuardBandTop;
    D3DVALUE dvGuardBandRight;
    D3DVALUE dvGuardBandBottom;
    D3DVALUE dvExtentsAdjust;
    DWORD dwStencilCaps;
    DWORD dwFVFCaps;
    DWORD dwTextureOpCaps;
    WORD wMaxTextureBlendStages;
    WORD wMaxSimultaneousTextures;
} D3DDEVICEDESC, *LPD3DDEVICEDESC;
typedef struct _D3DDeviceDesc7 {
    DWORD dwDevCaps;
    D3DPRIMCAPS dpcLineCaps;
    D3DPRIMCAPS dpcTriCaps;
    DWORD dwDeviceRenderBitDepth;
    DWORD dwDeviceZBufferBitDepth;
    DWORD dwMinTextureWidth, dwMinTextureHeight;
    DWORD dwMaxTextureWidth, dwMaxTextureHeight;
    DWORD dwMaxTextureRepeat;
    DWORD dwMaxTextureAspectRatio;
    DWORD dwMaxAnisotropy;
    D3DVALUE dvGuardBandLeft;
    D3DVALUE dvGuardBandTop;
    D3DVALUE dvGuardBandRight;
    D3DVALUE dvGuardBandBottom;
    D3DVALUE dvExtentsAdjust;
    DWORD dwStencilCaps;
    DWORD dwFVFCaps;
    DWORD dwTextureOpCaps;
    WORD wMaxTextureBlendStages;
    WORD wMaxSimultaneousTextures;
    DWORD dwMaxActiveLights;
    D3DVALUE dvMaxVertexW;
    GUID deviceGUID;
    WORD wMaxUserClipPlanes;
    WORD wMaxVertexBlendMatrices;
    DWORD dwVertexProcessingCaps;
    DWORD dwReserved1;
    DWORD dwReserved2;
    DWORD dwReserved3;
    DWORD dwReserved4;
} D3DDEVICEDESC7, *LPD3DDEVICEDESC7;
typedef HRESULT (CALLBACK * LPD3DENUMDEVICESCALLBACK)(GUID FAR *lpGuid, LPSTR lpDeviceDescription, LPSTR lpDeviceName, LPD3DDEVICEDESC, LPD3DDEVICEDESC, LPVOID);
typedef HRESULT (CALLBACK * LPD3DENUMDEVICESCALLBACK7)(LPSTR lpDeviceDescription, LPSTR lpDeviceName, LPD3DDEVICEDESC7, LPVOID);
typedef struct _D3DFINDDEVICESEARCH {
    DWORD dwSize;
    DWORD dwFlags;
    BOOL bHardware;
    D3DCOLORMODEL dcmColorModel;
    GUID guid;
    DWORD dwCaps;
    D3DPRIMCAPS dpcPrimCaps;
} D3DFINDDEVICESEARCH, *LPD3DFINDDEVICESEARCH;
typedef struct _D3DFINDDEVICERESULT {
    DWORD dwSize;
    GUID guid;
    D3DDEVICEDESC ddHwDesc;
    D3DDEVICEDESC ddSwDesc;
} D3DFINDDEVICERESULT, *LPD3DFINDDEVICERESULT;
typedef struct _D3DExecuteBufferDesc {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwCaps;
    DWORD dwBufferSize;
    LPVOID lpData;
} D3DEXECUTEBUFFERDESC, *LPD3DEXECUTEBUFFERDESC;
typedef struct _D3DDEVINFO_TEXTUREMANAGER {
    BOOL bThrashing;
    DWORD dwApproxBytesDownloaded;
    DWORD dwNumEvicts;
    DWORD dwNumVidCreates;
    DWORD dwNumTexturesUsed;
    DWORD dwNumUsedTexInVid;
    DWORD dwWorkingSet;
    DWORD dwWorkingSetBytes;
    DWORD dwTotalManaged;
    DWORD dwTotalBytes;
    DWORD dwLastPri;
} D3DDEVINFO_TEXTUREMANAGER, *LPD3DDEVINFO_TEXTUREMANAGER;
typedef struct _D3DDEVINFO_TEXTURING {
    DWORD dwNumLoads;
    DWORD dwApproxBytesLoaded;
    DWORD dwNumPreLoads;
    DWORD dwNumSet;
    DWORD dwNumCreates;
    DWORD dwNumDestroys;
    DWORD dwNumSetPriorities;
    DWORD dwNumSetLODs;
    DWORD dwNumLocks;
    DWORD dwNumGetDCs;
} D3DDEVINFO_TEXTURING, *LPD3DDEVINFO_TEXTURING;
#pragma pack()
#endif
#pragma endregion
