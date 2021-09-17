#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct _PSCRIPT5_PRIVATE_DEVMODE {
    WORD wReserved[57];
    WORD wSize;
} PSCRIPT5_PRIVATE_DEVMODE, *PPSCRIPT5_PRIVATE_DEVMODE;
        ( ( (pdm)->dmDriverExtra > (FIELD_OFFSET(PSCRIPT5_PRIVATE_DEVMODE, wSize) + sizeof(WORD)) ) ? \
          ((PPSCRIPT5_PRIVATE_DEVMODE)((PBYTE)(pdm) + (pdm)->dmSize))->wSize : 0 )
typedef struct _UNIDRV_PRIVATE_DEVMODE {
    WORD wReserved[4];
    WORD wSize;
} UNIDRV_PRIVATE_DEVMODE, *PUNIDRV_PRIVATE_DEVMODE;
        ( ( (pdm)->dmDriverExtra > (FIELD_OFFSET(UNIDRV_PRIVATE_DEVMODE, wSize) + sizeof(WORD)) ) ? \
          ((PUNIDRV_PRIVATE_DEVMODE)((PBYTE)(pdm) + (pdm)->dmSize))->wSize : 0 )
typedef struct _PUBLISHERINFO {
    DWORD dwMode;
    WORD wMinoutlinePPEM;
    WORD wMaxbitmapPPEM;
} PUBLISHERINFO, *PPUBLISHERINFO;
__drv_preferredFunction("IPrintOemUI", "Obsolete")
BOOL APIENTRY
OEMGetInfo(
    DWORD dwMode,
    _Out_writes_bytes_(cbSize) PVOID pBuffer,
    DWORD cbSize,
    _Out_ PDWORD pcbNeeded
    );
__drv_preferredFunction("IPrintOemUni", "Obsolete")
BOOL APIENTRY
OEMDriverDMS(
    PVOID pDevObj,
    _Out_writes_bytes_(cbSize) PVOID pBuffer,
    DWORD cbSize,
    _Out_ PDWORD pcbNeeded
    );
typedef struct _OEMDMPARAM {
    DWORD cbSize;
    PVOID pdriverobj;
    HANDLE hPrinter;
    HANDLE hModule;
    PDEVMODE pPublicDMIn;
    PDEVMODE pPublicDMOut;
    PVOID pOEMDMIn;
    PVOID pOEMDMOut;
    DWORD cbBufSize;
} OEMDMPARAM, *POEMDMPARAM;
typedef struct _OEM_DMEXTRAHEADER {
    DWORD dwSize;
    DWORD dwSignature;
    DWORD dwVersion;
} OEM_DMEXTRAHEADER, *POEM_DMEXTRAHEADER;
typedef struct _USERDATA {
    DWORD dwSize;
    ULONG_PTR dwItemID;
    PSTR pKeyWordName;
    DWORD dwReserved[8];
} USERDATA, *PUSERDATA;
__drv_preferredFunction("IPrintOemUI", "Obsolete")
BOOL APIENTRY
OEMDevMode(
    DWORD dwMode,
    POEMDMPARAM pOemDMParam
    );
typedef BOOL (APIENTRY *PFN_DrvGetDriverSetting)(
        PVOID pdriverobj,
        PCSTR Feature,
        _Out_writes_bytes_opt_(cbSize) PVOID pOutput,
        DWORD cbSize,
        _Out_opt_ PDWORD pcbNeeded,
        _Out_opt_ PDWORD pdwOptionsReturned
        );
typedef BOOL (APIENTRY *PFN_DrvUpgradeRegistrySetting)(
        HANDLE hPrinter,
        PCSTR pFeature,
        PCSTR pOption
        );
typedef BOOL (APIENTRY *PFN_DrvUpdateUISetting)(
        PVOID pdriverobj,
        PVOID pOptItem,
        DWORD dwPreviousSelection,
        DWORD dwMode
        );
__drv_preferredFunction("IPrintOemPS or IPrintOemUni", "Obsolete")
BOOL APIENTRY
OEMEnableDriver(
    DWORD dwOemIntfVersion,
    DWORD cbSize,
    _Out_writes_bytes_(cbSize) PDRVENABLEDATA pded
    );
typedef struct _DEVOBJ *PDEVOBJ;
typedef PVOID PDEVOEM;
typedef DWORD (APIENTRY *PFN_DrvWriteSpoolBuf)(
    PDEVOBJ pdevobj,
    _In_reads_bytes_(cbSize) PVOID pBuffer,
    DWORD cbSize
    );
typedef DWORD (APIENTRY *PFN_DrvWriteAbortBuf)(
    PDEVOBJ pdevobj,
    _In_reads_bytes_(cbSize) PVOID pBuffer,
    DWORD cbSize,
    DWORD dwWait
    );
typedef INT (APIENTRY *PFN_DrvXMoveTo)(
    PDEVOBJ pdevobj,
    INT x,
    DWORD dwFlags
    );
typedef INT (APIENTRY *PFN_DrvYMoveTo)(
    PDEVOBJ pdevobj,
    INT y,
    DWORD dwFlags
    );
typedef BOOL (APIENTRY *PFN_DrvGetStandardVariable)(
    PDEVOBJ pdevobj,
    DWORD dwIndex,
    _Out_writes_bytes_opt_(cbSize) PVOID pBuffer,
    DWORD cbSize,
    _Out_ PDWORD pcbNeeded
    );
typedef enum _STDVARIABLEINDEX{
        SVI_NUMDATABYTES,
        SVI_WIDTHINBYTES,
        SVI_HEIGHTINPIXELS,
        SVI_COPIES,
        SVI_PRINTDIRECTION,
        SVI_DESTX,
        SVI_DESTY,
        SVI_DESTXREL,
        SVI_DESTYREL,
        SVI_LINEFEEDSPACING,
        SVI_RECTXSIZE,
        SVI_RECTYSIZE,
        SVI_GRAYPERCENT,
        SVI_NEXTFONTID,
        SVI_NEXTGLYPH,
        SVI_PHYSPAPERLENGTH,
        SVI_PHYSPAPERWIDTH,
        SVI_FONTHEIGHT,
        SVI_FONTWIDTH,
        SVI_FONTMAXWIDTH,
        SVI_FONTBOLD,
        SVI_FONTITALIC,
        SVI_FONTUNDERLINE,
        SVI_FONTSTRIKETHRU,
        SVI_CURRENTFONTID,
        SVI_TEXTYRES,
        SVI_TEXTXRES,
        SVI_GRAPHICSYRES,
        SVI_GRAPHICSXRES,
        SVI_ROP3,
        SVI_REDVALUE,
        SVI_GREENVALUE,
        SVI_BLUEVALUE,
        SVI_PALETTEINDEXTOPROGRAM,
        SVI_CURRENTPALETTEINDEX,
        SVI_PATTERNBRUSH_TYPE,
        SVI_PATTERNBRUSH_ID,
        SVI_PATTERNBRUSH_SIZE,
        SVI_CURSORORIGINX,
        SVI_CURSORORIGINY,
        SVI_PAGENUMBER,
        SVI_MAX
}STDVARIABLEINDEX;
typedef BOOL (APIENTRY *PFN_DrvUnidriverTextOut)(
    SURFOBJ *pso,
    STROBJ *pstro,
    FONTOBJ *pfo,
    CLIPOBJ *pco,
    RECTL *prclExtra,
    RECTL *prclOpaque,
    BRUSHOBJ *pboFore,
    BRUSHOBJ *pboOpaque,
    POINTL *pptlBrushOrg,
    MIX mix
    );
typedef struct _DRVPROCS {
    PFN_DrvWriteSpoolBuf DrvWriteSpoolBuf;
    PFN_DrvXMoveTo DrvXMoveTo;
    PFN_DrvYMoveTo DrvYMoveTo;
    PFN_DrvGetDriverSetting DrvGetDriverSetting;
    PFN_DrvGetStandardVariable BGetStandardVariable;
    PFN_DrvUnidriverTextOut DrvUnidriverTextOut;
    PFN_DrvWriteAbortBuf DrvWriteAbortBuf;
} DRVPROCS, *PDRVPROCS;
typedef struct _DEVOBJ {
    DWORD dwSize;
    PDEVOEM pdevOEM;
    HANDLE hEngine;
    HANDLE hPrinter;
    HANDLE hOEM;
    PDEVMODE pPublicDM;
    PVOID pOEMDM;
    PDRVPROCS pDrvProcs;
} DEVOBJ;
__drv_preferredFunction("IPrintOemPS or IPrintOemUni", "Obsolete")
VOID APIENTRY
OEMDisableDriver(
    VOID
    );
__drv_preferredFunction("IPrintOemPS or IPrintOemUni", "Obsolete")
PDEVOEM APIENTRY
OEMEnablePDEV(
    PDEVOBJ pdevobj,
    _In_ PWSTR pPrinterName,
    ULONG cPatterns,
    _Inout_updates_(cPatterns) HSURF *phsurfPatterns,
    ULONG cjGdiInfo,
    _Inout_updates_bytes_(cjGdiInfo) GDIINFO *pGdiInfo,
    ULONG cjDevInfo,
    _Inout_updates_bytes_(cjDevInfo) DEVINFO *pDevInfo,
    _In_ DRVENABLEDATA *pded
    );
__drv_preferredFunction("IPrintOemPS or IPrintOemUni", "Obsolete")
VOID APIENTRY
OEMDisablePDEV(
    PDEVOBJ pdevobj
    );
__drv_preferredFunction("IPrintOemPS or IPrintOemUni", "Obsolete")
BOOL APIENTRY
OEMResetPDEV(
    PDEVOBJ pdevobjOld,
    PDEVOBJ pdevobjNew
    );
__drv_preferredFunction("IPrintOemPS", "Obsolete")
DWORD APIENTRY
OEMCommand(
    PDEVOBJ pdevobj,
    DWORD dwIndex,
    _In_reads_bytes_opt_(cbSize) PVOID pData,
    DWORD cbSize
    );
__drv_preferredFunction("IPrintOemUni", "Obsolete")
INT APIENTRY
OEMCommandCallback(
    PDEVOBJ pdevobj,
    DWORD dwCallbackID,
    DWORD dwCount,
    _In_reads_opt_(dwCount) PDWORD pdwParams
    );
typedef struct {
    DWORD dwSize;
    POINT ptOffset;
    PSTR pHalftoneOption;
    BOOL bBanding;
    BOOL bBlankBand;
} IPPARAMS, *PIPPARAMS;
__drv_preferredFunction("IPrintOemUni", "Obsolete")
PBYTE APIENTRY
OEMImageProcessing(
    PDEVOBJ pdevobj,
    PBYTE pSrcBitmap,
    PBITMAPINFOHEADER pBitmapInfoHeader,
    PBYTE pColorTable,
    DWORD dwCallbackID,
    PIPPARAMS pIPParams
    );
__drv_preferredFunction("IPrintOemUni", "Obsolete")
BOOL APIENTRY
OEMFilterGraphics(
    PDEVOBJ pdevobj,
    _In_reads_bytes_(dwLen) PBYTE pBuf,
    DWORD dwLen
    );
__drv_preferredFunction("IPrintOemUni", "Obsolete")
INT APIENTRY
OEMCompression(
    PDEVOBJ pdevobj,
    _In_reads_bytes_(dwInLen) PBYTE pInBuf,
    _Out_writes_bytes_(dwOutLen) PBYTE pOutBuf,
    DWORD dwInLen,
    DWORD dwOutLen
    );
__drv_preferredFunction("IPrintOemUni", "Obsolete")
BOOL APIENTRY
OEMHalftonePattern(
    PDEVOBJ pdevobj,
    PBYTE pHTPattern,
    DWORD dwHTPatternX,
    DWORD dwHTPatternY,
    DWORD dwHTNumPatterns,
    DWORD dwCallbackID,
    _In_reads_bytes_opt_(dwResourceSize) PBYTE pResource,
    DWORD dwResourceSize
    );
typedef struct {
    DWORD dwFixedMemoryUsage;
    DWORD dwPercentMemoryUsage;
    DWORD dwMaxBandSize;
} OEMMEMORYUSAGE, *POEMMEMORYUSAGE;
VOID APIENTRY
OEMMemoryUsage(
    PDEVOBJ pdevobj,
    _Inout_ POEMMEMORYUSAGE pMemoryUsage
    );
__drv_preferredFunction("IPrintOemUni", "Obsolete")
INT APIENTRY
OEMTTYGetInfo(
    PDEVOBJ pdevobj,
    DWORD dwInfoIndex,
    _Out_writes_bytes_(dwSize) PVOID pOutputBuf,
    DWORD dwSize,
    _Out_ DWORD *pcbcNeeded
    );
typedef BOOL (*PFNGETINFO)(struct _UNIFONTOBJ*, DWORD, PVOID, DWORD, PDWORD);
typedef struct _UNIFONTOBJ {
    ULONG ulFontID;
    DWORD dwFlags;
    IFIMETRICS *pIFIMetrics;
    PFNGETINFO pfnGetInfo;
} UNIFONTOBJ, *PUNIFONTOBJ;
typedef struct _GETINFO_FONTOBJ {
    DWORD dwSize;
    FONTOBJ *pFontObj;
} GETINFO_FONTOBJ, *PGETINFO_FONTOBJ;
typedef struct _GETINFO_GLYPHSTRING {
    DWORD dwSize;
    DWORD dwCount;
    DWORD dwTypeIn;
    PVOID pGlyphIn;
    DWORD dwTypeOut;
    PVOID pGlyphOut;
    DWORD dwGlyphOutSize;
} GETINFO_GLYPHSTRING, *PGETINFO_GLYPHSTRING;
typedef struct _GETINFO_GLYPHBITMAP {
    DWORD dwSize;
    HGLYPH hGlyph;
    GLYPHDATA *pGlyphData;
} GETINFO_GLYPHBITMAP, *PGETINFO_GLYPHBITMAP;
typedef struct _GETINFO_GLYPHWIDTH {
    DWORD dwSize;
    DWORD dwType;
    DWORD dwCount;
    PVOID pGlyph;
    PLONG plWidth;
} GETINFO_GLYPHWIDTH, *PGETINFO_GLYPHWIDTH;
typedef struct _GETINFO_MEMORY {
    DWORD dwSize;
    DWORD dwRemainingMemory;
} GETINFO_MEMORY, PGETINFO_MEMROY;
typedef struct _GETINFO_STDVAR {
    DWORD dwSize;
    DWORD dwNumOfVariable;
    struct {
        DWORD dwStdVarID;
        LONG lStdVariable;
    } StdVar[1];
} GETINFO_STDVAR, *PGETINFO_STDVAR;
__drv_preferredFunction("IPrintOemUni", "Obsolete")
DWORD APIENTRY
OEMDownloadFontHeader(
    PDEVOBJ pdevobj,
    PUNIFONTOBJ pUFObj
    );
__drv_preferredFunction("IPrintOemUni", "Obsolete")
DWORD APIENTRY
OEMDownloadCharGlyph(
    PDEVOBJ pdevobj,
    PUNIFONTOBJ pUFObj,
    HGLYPH hGlyph,
    _Out_ PDWORD pdwWidth
    );
__drv_preferredFunction("IPrintOemUni", "Obsolete")
DWORD APIENTRY
OEMTTDownloadMethod(
    PDEVOBJ pdevobj,
    PUNIFONTOBJ pUFObj
    );
__drv_preferredFunction("IPrintOemUni", "Obsolete")
VOID APIENTRY
OEMOutputCharStr(
    PDEVOBJ pdevobj,
    PUNIFONTOBJ pUFObj,
    DWORD dwType,
    DWORD dwCount,
    _In_reads_(dwCount) PVOID pGlyph
    );
typedef struct _FINVOCATION {
    DWORD dwCount;
    PBYTE pubCommand;
} FINVOCATION, *PFINVOCATION;
__drv_preferredFunction("IPrintOemUni", "Obsolete")
VOID APIENTRY
OEMSendFontCmd(
    PDEVOBJ pdevobj,
    PUNIFONTOBJ pUFObj,
    PFINVOCATION pFInv
    );
__drv_preferredFunction("IPrintOemUni", "Obsolete")
BOOL APIENTRY
OEMTextOutAsBitmap(
    SURFOBJ *pso,
    STROBJ *pstro,
    FONTOBJ *pfo,
    CLIPOBJ *pco,
    RECTL *prclExtra,
    RECTL *prclOpaque,
    BRUSHOBJ *pboFore,
    BRUSHOBJ *pboOpaque,
    POINTL *pptlOrg,
    MIX mix
    );
BOOL APIENTRY
OEMBitBlt(
    SURFOBJ *psoTrg,
    SURFOBJ *psoSrc,
    SURFOBJ *psoMask,
    CLIPOBJ *pco,
    XLATEOBJ *pxlo,
    RECTL *prclTrg,
    POINTL *pptlSrc,
    POINTL *pptlMask,
    BRUSHOBJ *pbo,
    POINTL *pptlBrush,
    ROP4 rop4
    );
BOOL APIENTRY
OEMStretchBlt(
    SURFOBJ *psoDest,
    SURFOBJ *psoSrc,
    SURFOBJ *psoMask,
    CLIPOBJ *pco,
    XLATEOBJ *pxlo,
    COLORADJUSTMENT *pca,
    POINTL *pptlHTOrg,
    RECTL *prclDest,
    RECTL *prclSrc,
    POINTL *pptlMask,
    ULONG iMode
    );
BOOL APIENTRY
OEMCopyBits(
    SURFOBJ *psoDest,
    SURFOBJ *psoSrc,
    CLIPOBJ *pco,
    XLATEOBJ *pxlo,
    RECTL *prclDest,
    POINTL *pptlSrc
    );
BOOL APIENTRY
OEMTextOut(
    SURFOBJ *pso,
    STROBJ *pstro,
    FONTOBJ *pfo,
    CLIPOBJ *pco,
    RECTL *prclExtra,
    RECTL *prclOpaque,
    BRUSHOBJ *pboFore,
    BRUSHOBJ *pboOpaque,
    POINTL *pptlOrg,
    MIX mix
    );
BOOL APIENTRY
OEMStrokePath(
    SURFOBJ *pso,
    PATHOBJ *ppo,
    CLIPOBJ *pco,
    XFORMOBJ *pxo,
    BRUSHOBJ *pbo,
    POINTL *pptlBrushOrg,
    LINEATTRS *plineattrs,
    MIX mix
    );
BOOL APIENTRY
OEMFillPath(
    SURFOBJ *pso,
    PATHOBJ *ppo,
    CLIPOBJ *pco,
    BRUSHOBJ *pbo,
    POINTL *pptlBrushOrg,
    MIX mix,
    FLONG flOptions
    );
BOOL APIENTRY
OEMStrokeAndFillPath(
    SURFOBJ *pso,
    PATHOBJ *ppo,
    CLIPOBJ *pco,
    XFORMOBJ *pxo,
    BRUSHOBJ *pboStroke,
    LINEATTRS *plineattrs,
    BRUSHOBJ *pboFill,
    POINTL *pptlBrushOrg,
    MIX mixFill,
    FLONG flOptions
    );
BOOL APIENTRY
OEMRealizeBrush(
    BRUSHOBJ *pbo,
    SURFOBJ *psoTarget,
    SURFOBJ *psoPattern,
    SURFOBJ *psoMask,
    XLATEOBJ *pxlo,
    ULONG iHatch
    );
BOOL APIENTRY
OEMStartPage(
    SURFOBJ *pso
    );
BOOL APIENTRY
OEMSendPage(
    SURFOBJ *pso
    );
ULONG APIENTRY
OEMEscape(
    SURFOBJ *pso,
    ULONG iEsc,
    ULONG cjIn,
    _In_reads_bytes_(cjIn) PVOID pvIn,
    ULONG cjOut,
    _Out_writes_bytes_(cjOut) PVOID pvOut
    );
BOOL APIENTRY
OEMStartDoc(
    SURFOBJ *pso,
    _In_ PWSTR pwszDocName,
    DWORD dwJobId
    );
BOOL APIENTRY
OEMEndDoc(
    SURFOBJ *pso,
    FLONG fl
    );
PIFIMETRICS APIENTRY
OEMQueryFont(
    DHPDEV dhpdev,
    ULONG_PTR iFile,
    ULONG iFace,
    ULONG_PTR *pid
    );
PVOID APIENTRY
OEMQueryFontTree(
    DHPDEV dhpdev,
    ULONG_PTR iFile,
    ULONG iFace,
    ULONG iMode,
    ULONG_PTR *pid
    );
LONG APIENTRY
OEMQueryFontData(
    DHPDEV dhpdev,
    FONTOBJ *pfo,
    ULONG iMode,
    HGLYPH hg,
    GLYPHDATA *pgd,
    _Out_writes_bytes_(cjSize) PVOID pv,
    ULONG cjSize
    );
BOOL APIENTRY
OEMQueryAdvanceWidths(
    DHPDEV dhpdev,
    FONTOBJ *pfo,
    ULONG iMode,
    _In_reads_(cGlyphs) HGLYPH *phg,
    _Out_writes_bytes_(cGlyphs*sizeof(USHORT)) PVOID pvWidths,
    ULONG cGlyphs
    );
ULONG APIENTRY
OEMFontManagement(
    SURFOBJ *pso,
    FONTOBJ *pfo,
    ULONG iMode,
    ULONG cjIn,
    _In_reads_bytes_(cjIn) PVOID pvIn,
    ULONG cjOut,
    _Out_writes_bytes_(cjOut) PVOID pvOut
    );
ULONG APIENTRY
OEMGetGlyphMode(
    DHPDEV dhpdev,
    FONTOBJ *pfo
    );
BOOL APIENTRY
OEMNextBand(
    SURFOBJ *pso,
    POINTL *pptl
    );
BOOL APIENTRY
OEMStartBanding(
    SURFOBJ *pso,
    POINTL *pptl
    );
ULONG APIENTRY
OEMDitherColor(
    DHPDEV dhpdev,
    ULONG iMode,
    ULONG rgbColor,
    ULONG *pulDither
    );
BOOL APIENTRY
OEMPaint(
    SURFOBJ *pso,
    CLIPOBJ *pco,
    BRUSHOBJ *pbo,
    POINTL *pptlBrushOrg,
    MIX mix
    );
BOOL APIENTRY
OEMLineTo(
    SURFOBJ *pso,
    CLIPOBJ *pco,
    BRUSHOBJ *pbo,
    LONG x1,
    LONG y1,
    LONG x2,
    LONG y2,
    RECTL *prclBounds,
    MIX mix
    );
BOOL APIENTRY
OEMStretchBltROP(
    SURFOBJ *psoDest,
    SURFOBJ *psoSrc,
    SURFOBJ *psoMask,
    CLIPOBJ *pco,
    XLATEOBJ *pxlo,
    COLORADJUSTMENT *pca,
    POINTL *pptlHTOrg,
    RECTL *prclDest,
    RECTL *prclSrc,
    POINTL *pptlMask,
    ULONG iMode,
    BRUSHOBJ *pbo,
    ROP4 rop4
    );
BOOL APIENTRY
OEMPlgBlt(
    SURFOBJ *psoDst,
    SURFOBJ *psoSrc,
    SURFOBJ *psoMask,
    CLIPOBJ *pco,
    XLATEOBJ *pxlo,
    COLORADJUSTMENT *pca,
    POINTL *pptlBrushOrg,
    POINTFIX *pptfixDest,
    RECTL *prclSrc,
    POINTL *pptlMask,
    ULONG iMode
    );
BOOL APIENTRY
OEMAlphaBlend(
    SURFOBJ *psoDest,
    SURFOBJ *psoSrc,
    CLIPOBJ *pco,
    XLATEOBJ *pxlo,
    RECTL *prclDest,
    RECTL *prclSrc,
    BLENDOBJ *pBlendObj
    );
BOOL APIENTRY
OEMGradientFill(
    SURFOBJ *psoDest,
    CLIPOBJ *pco,
    XLATEOBJ *pxlo,
    TRIVERTEX *pVertex,
    ULONG nVertex,
    PVOID pMesh,
    ULONG nMesh,
    RECTL *prclExtents,
    POINTL *pptlDitherOrg,
    ULONG ulMode
    );
HANDLE APIENTRY
OEMIcmCreateColorTransform(
    DHPDEV dhpdev,
    LPLOGCOLORSPACEW pLogColorSpace,
    _In_reads_bytes_opt_(cjSourceProfile) PVOID pvSourceProfile,
    ULONG cjSourceProfile,
    _In_reads_bytes_(cjDestProfile) PVOID pvDestProfile,
    ULONG cjDestProfile,
    _In_reads_bytes_opt_(cjTargetProfile) PVOID pvTargetProfile,
    ULONG cjTargetProfile,
    DWORD dwReserved
    );
BOOL APIENTRY
OEMIcmDeleteColorTransform(
    DHPDEV dhpdev,
    HANDLE hcmXform
    );
BOOL APIENTRY
OEMQueryDeviceSupport(
    SURFOBJ *pso,
    XLATEOBJ *pxlo,
    XFORMOBJ *pxo,
    ULONG iType,
    ULONG cjIn,
    _In_reads_bytes_(cjIn) PVOID pvIn,
    ULONG cjOut,
    _Out_writes_bytes_(cjOut) PVOID pvOut
    );
BOOL APIENTRY
OEMTransparentBlt(
    SURFOBJ *psoDst,
    SURFOBJ *psoSrc,
    CLIPOBJ *pco,
    XLATEOBJ *pxlo,
    RECTL *prclDst,
    RECTL *prclSrc,
    ULONG iTransColor,
    ULONG ulReserved
    );
typedef struct _PDEV_ADJUST_PAPER_MARGIN {
    RECTL rcImageableArea;
} PDEV_ADJUST_PAPER_MARGIN;
typedef struct _PDEV_HOSTFONT_ENABLED {
    BOOL bHostfontEnabled;
} PDEV_HOSTFONT_ENABLED;
typedef struct _PDEV_USE_TRUE_COLOR {
    BOOL bUseTrueColor;
} PDEV_USE_TRUE_COLOR;
typedef struct _PDEV_ADJUST_IMAGEABLE_ORIGIN_AREA {
    POINT ptImageOrigin;
    SIZEL szlImageableArea;
} PDEV_ADJUST_IMAGEABLE_ORIGIN_AREA, *PPDEV_ADJUST_IMAGEABLE_ORIGIN_AREA;
typedef struct _PDEV_ADJUST_PHYSICAL_PAPER_SIZE {
    SIZEL szlPhysicalPaperSize;
} PDEV_ADJUST_PHYSICAL_PAPER_SIZE, *PPDEV_ADJUST_PHYSICAL_PAPER_SIZE;
typedef struct _PDEV_ADJUST_GRAPHICS_RESOLUTION {
    POINT ptGraphicsResolution;
} PDEV_ADJUST_GRAPHICS_RESOLUTION, *PPDEV_ADJUST_GRAPHICS_RESOLUTION;
typedef struct _SIMULATE_CAPS_1 {
    DWORD dwLevel;
    DWORD dwPageOrderFlags;
    DWORD dwNumberOfCopies;
    DWORD dwCollate;
    DWORD dwNupOptions;
} SIMULATE_CAPS_1, *PSIMULATE_CAPS_1;
typedef struct _OEMUIPROCS {
    PFN_DrvGetDriverSetting DrvGetDriverSetting;
    PFN_DrvUpdateUISetting DrvUpdateUISetting;
} OEMUIPROCS, *POEMUIPROCS;
typedef struct _OEMUIOBJ {
    DWORD cbSize;
    POEMUIPROCS pOemUIProcs;
} OEMUIOBJ, *POEMUIOBJ;
typedef struct _OEMCUIPPARAM *POEMCUIPPARAM;
typedef LONG (APIENTRY *OEMCUIPCALLBACK)(PCPSUICBPARAM, POEMCUIPPARAM);
typedef struct _OEMCUIPPARAM {
    DWORD cbSize;
    POEMUIOBJ poemuiobj;
    HANDLE hPrinter;
    PWSTR pPrinterName;
    HANDLE hModule;
    HANDLE hOEMHeap;
    PDEVMODE pPublicDM;
    PVOID pOEMDM;
    DWORD dwFlags;
    POPTITEM pDrvOptItems;
    DWORD cDrvOptItems;
    POPTITEM pOEMOptItems;
    DWORD cOEMOptItems;
    PVOID pOEMUserData;
    OEMCUIPCALLBACK OEMCUIPCallback;
} OEMCUIPPARAM;
__drv_preferredFunction("IPrintOemUI", "Obsolete")
BOOL APIENTRY
OEMCommonUIProp(
    DWORD dwMode,
    POEMCUIPPARAM pOemCUIPParam
    );
__drv_preferredFunction("IPrintOemUI", "Obsolete")
LRESULT APIENTRY
OEMDocumentPropertySheets(
    _In_ PPROPSHEETUI_INFO pPSUIInfo,
    LPARAM lParam
    );
__drv_preferredFunction("IPrintOemUI", "Obsolete")
LRESULT APIENTRY
OEMDevicePropertySheets(
    _In_ PPROPSHEETUI_INFO pPSUIInfo,
    LPARAM lParam
    );
typedef struct _OEMUIPSPARAM {
    DWORD cbSize;
    POEMUIOBJ poemuiobj;
    HANDLE hPrinter;
    PWSTR pPrinterName;
    HANDLE hModule;
    HANDLE hOEMHeap;
    PDEVMODE pPublicDM;
    PVOID pOEMDM;
    PVOID pOEMUserData;
    DWORD dwFlags;
    PVOID pOemEntry;
} OEMUIPSPARAM, *POEMUIPSPARAM;
#pragma warning(push)
#pragma warning(disable:28718 28740)
__drv_preferredFunction("IPrintOemUI", "Obsolete")
BOOL APIENTRY
OEMDevQueryPrintEx(
    POEMUIOBJ poemuiobj,
    PDEVQUERYPRINT_INFO pDQPInfo,
    PDEVMODE pPublicDM,
    PVOID pOEMDM
    );
__drv_preferredFunction("IPrintOemUI", "Obsolete")
DWORD APIENTRY
OEMDeviceCapabilities(
    POEMUIOBJ poemuiobj,
    HANDLE hPrinter,
    PWSTR pDeviceName,
    WORD wCapability,
    PVOID pOutput,
    PDEVMODE pPublicDM,
    PVOID pOEMDM,
    DWORD dwLastResult
    );
__drv_preferredFunction("IPrintOemUI", "Obsolete")
BOOL APIENTRY
OEMUpgradePrinter(
    DWORD dwLevel,
    PBYTE pDriverUpgradeInfo
    );
__drv_preferredFunction("(see documentation)", "Obsolete")
BOOL APIENTRY
OEMUpgradeRegistry(
    DWORD dwLevel,
    PBYTE pDriverUpgradeInfo,
    PFN_DrvUpgradeRegistrySetting pfnUpgrade
    );
__drv_preferredFunction("IPrintOemUI", "Obsolete")
BOOL APIENTRY
OEMPrinterEvent(
    PWSTR pPrinterName,
    INT iDriverEvent,
    DWORD dwFlags,
    LPARAM lParam
    );
__drv_preferredFunction("IPrintOemUI", "Obsolete")
BOOL APIENTRY
OEMPDriverEvent(
    DWORD dwDriverEvent,
    DWORD dwLevel,
    LPBYTE pDriverInfo,
    LPARAM lParam
    );
__drv_preferredFunction("IPrintOemUI", "Obsolete")
BOOL APIENTRY
OEMQueryColorProfile(
    HANDLE hPrinter,
    POEMUIOBJ poemuiobj,
    PDEVMODE pPublicDM,
    PVOID pOEMDM,
    ULONG ulQueryMode,
    _Out_writes_bytes_(*pcbProfileData) VOID *pvProfileData,
    _Out_ ULONG *pcbProfileData,
    _Out_ FLONG *pflProfileData
    );
__drv_preferredFunction("IPrintOemUI", "Obsolete")
INT_PTR CALLBACK
OEMFontInstallerDlgProc(
    HWND hWnd,
    UINT usMsg,
    WPARAM wParam,
    LPARAM lParam
    );
__drv_preferredFunction("IPrintOemUI", "Obsolete")
BOOL CALLBACK
OEMUpdateExternalFonts(
    HANDLE hPrinter,
    HANDLE hHeap,
    PWSTR pwstrCartridges
   );
#pragma warning(pop)
typedef enum _EATTRIBUTE_DATATYPE {
    kADT_UNKNOWN,
    kADT_BOOL,
    kADT_INT,
    kADT_LONG,
    kADT_DWORD,
    kADT_ASCII,
    kADT_UNICODE,
    kADT_BINARY,
    kADT_SIZE,
    kADT_RECT,
    kADT_CUSTOMSIZEPARAMS,
} EATTRIBUTE_DATATYPE;
typedef struct _CUSTOMSIZEPARAM {
    LONG dwOrder;
    LONG lMinVal;
    LONG lMaxVal;
} CUSTOMSIZEPARAM, *PCUSTOMSIZEPARAM;
}
#endif
#pragma endregion
