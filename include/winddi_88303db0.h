       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
        #define EXTERN_C extern "C"
    EXTERN_C const GUID FAR name
    #define DEFINE_GUIDEX(name) EXTERN_C const CDECL GUID name
    #define STATICGUIDOF(guid) STATIC_##guid
    #define GUID_DEFINED
    typedef struct _GUID {
        ULONG Data1;
        USHORT Data2;
        USHORT Data3;
        UCHAR Data4[8];
    } GUID;
    #define IsEqualGUID(guid1, guid2) \
        (!memcmp((guid1), (guid2), sizeof(GUID)))
    #define IsEqualIID IsEqualGUID
typedef _Return_type_success_(return >= 0) long NTSTATUS;
#include <ddrawint.h>
#include <d3dnthal.h>
extern "C" {
typedef FLOAT FLOATL;
typedef LONG PTRDIFF;
typedef PTRDIFF *PPTRDIFF;
typedef LONG FIX;
typedef FIX *PFIX;
typedef ULONG ROP4;
typedef ULONG MIX;
typedef ULONG HGLYPH;
typedef HGLYPH *PHGLYPH;
typedef ULONG IDENT;
typedef ULONG_PTR HFF;
typedef ULONG_PTR HFC;
typedef struct _POINTE
{
    FLOATL x;
    FLOATL y;
} POINTE, *PPOINTE;
typedef union _FLOAT_LONG
{
    FLOATL e;
    LONG l;
} FLOAT_LONG, *PFLOAT_LONG;
typedef struct _POINTFIX
{
    FIX x;
    FIX y;
} POINTFIX, *PPOINTFIX;
typedef struct _RECTFX
{
    FIX xLeft;
    FIX yTop;
    FIX xRight;
    FIX yBottom;
} RECTFX, *PRECTFX;
DECLARE_HANDLE(HBM);
DECLARE_HANDLE(HDEV);
DECLARE_HANDLE(HSURF);
DECLARE_HANDLE(DHSURF);
DECLARE_HANDLE(DHPDEV);
DECLARE_HANDLE(HDRVOBJ);
typedef struct _FD_XFORM {
    FLOATL eXX;
    FLOATL eXY;
    FLOATL eYX;
    FLOATL eYY;
} FD_XFORM, *PFD_XFORM;
typedef struct _FD_DEVICEMETRICS {
    FLONG flRealizedType;
    POINTE pteBase;
    POINTE pteSide;
    LONG lD;
    FIX fxMaxAscender;
    FIX fxMaxDescender;
    POINTL ptlUnderline1;
    POINTL ptlStrikeOut;
    POINTL ptlULThickness;
    POINTL ptlSOThickness;
    ULONG cxMax;
    ULONG cyMax;
    ULONG cjGlyphMax;
    FD_XFORM fdxQuantized;
    LONG lNonLinearExtLeading;
    LONG lNonLinearIntLeading;
    LONG lNonLinearMaxCharWidth;
    LONG lNonLinearAvgCharWidth;
    LONG lMinA;
    LONG lMinC;
    LONG lMinD;
    LONG alReserved[1];
} FD_DEVICEMETRICS, *PFD_DEVICEMETRICS;
typedef struct _LIGATURE {
        ULONG culSize;
        LPWSTR pwsz;
        ULONG chglyph;
        HGLYPH ahglyph[1];
} LIGATURE, *PLIGATURE;
typedef struct _FD_LIGATURE {
        ULONG culThis;
        ULONG ulType;
        ULONG cLigatures;
        LIGATURE alig[1];
} FD_LIGATURE;
typedef SHORT FWORD;
typedef struct _POINTQF
{
    LARGE_INTEGER x;
    LARGE_INTEGER y;
} POINTQF, *PPOINTQF;
typedef struct _WCRUN {
    WCHAR wcLow;
    USHORT cGlyphs;
    HGLYPH *phg;
} WCRUN, *PWCRUN;
typedef struct _FD_GLYPHSET {
                    ULONG cjThis;
                    FLONG flAccel;
                    ULONG cGlyphsSupported;
                    ULONG cRuns;
    _Field_size_(cRuns) WCRUN awcrun[1];
} FD_GLYPHSET, *PFD_GLYPHSET;
typedef struct _FD_GLYPHATTR {
    ULONG cjThis;
    ULONG cGlyphs;
    ULONG iMode;
    BYTE aGlyphAttr[1];
} FD_GLYPHATTR, *PFD_GLYPHATTR;
typedef struct _FD_KERNINGPAIR {
    WCHAR wcFirst;
    WCHAR wcSecond;
    FWORD fwdKern;
} FD_KERNINGPAIR;
typedef struct _FONTDIFF {
    BYTE jReserved1;
    BYTE jReserved2;
    BYTE jReserved3;
    BYTE bWeight;
    USHORT usWinWeight;
    FSHORT fsSelection;
    FWORD fwdAveCharWidth;
    FWORD fwdMaxCharInc;
    POINTL ptlCaret;
} FONTDIFF;
typedef struct _FONTSIM {
    PTRDIFF dpBold;
    PTRDIFF dpItalic;
    PTRDIFF dpBoldItalic;
} FONTSIM;
typedef struct _IFIMETRICS {
    ULONG cjThis;
    ULONG cjIfiExtra;
    PTRDIFF dpwszFamilyName;
    PTRDIFF dpwszStyleName;
    PTRDIFF dpwszFaceName;
    PTRDIFF dpwszUniqueName;
    PTRDIFF dpFontSim;
    LONG lEmbedId;
    LONG lItalicAngle;
    LONG lCharBias;
    PTRDIFF dpCharSets;
    BYTE jWinCharSet;
    BYTE jWinPitchAndFamily;
    USHORT usWinWeight;
    ULONG flInfo;
    USHORT fsSelection;
    USHORT fsType;
    FWORD fwdUnitsPerEm;
    FWORD fwdLowestPPEm;
    FWORD fwdWinAscender;
    FWORD fwdWinDescender;
    FWORD fwdMacAscender;
    FWORD fwdMacDescender;
    FWORD fwdMacLineGap;
    FWORD fwdTypoAscender;
    FWORD fwdTypoDescender;
    FWORD fwdTypoLineGap;
    FWORD fwdAveCharWidth;
    FWORD fwdMaxCharInc;
    FWORD fwdCapHeight;
    FWORD fwdXHeight;
    FWORD fwdSubscriptXSize;
    FWORD fwdSubscriptYSize;
    FWORD fwdSubscriptXOffset;
    FWORD fwdSubscriptYOffset;
    FWORD fwdSuperscriptXSize;
    FWORD fwdSuperscriptYSize;
    FWORD fwdSuperscriptXOffset;
    FWORD fwdSuperscriptYOffset;
    FWORD fwdUnderscoreSize;
    FWORD fwdUnderscorePosition;
    FWORD fwdStrikeoutSize;
    FWORD fwdStrikeoutPosition;
    BYTE chFirstChar;
    BYTE chLastChar;
    BYTE chDefaultChar;
    BYTE chBreakChar;
    WCHAR wcFirstChar;
    WCHAR wcLastChar;
    WCHAR wcDefaultChar;
    WCHAR wcBreakChar;
    POINTL ptlBaseline;
    POINTL ptlAspect;
    POINTL ptlCaret;
    RECTL rclFontBox;
    BYTE achVendId[4];
    ULONG cKerningPairs;
    ULONG ulPanoseCulture;
    PANOSE panose;
    PVOID Align;
} IFIMETRICS, *PIFIMETRICS;
typedef struct _IFIEXTRA
{
    ULONG ulIdentifier;
    PTRDIFF dpFontSig;
    ULONG cig;
    PTRDIFF dpDesignVector;
    PTRDIFF dpAxesInfoW;
    ULONG aulReserved[1];
} IFIEXTRA, *PIFIEXTRA;
typedef LONG_PTR (APIENTRY *PFN)();
typedef struct _DRVFN
{
    ULONG iFunc;
    PFN pfn;
} DRVFN, *PDRVFN;
typedef struct tagDRVENABLEDATA
{
    ULONG iDriverVersion;
    ULONG c;
    DRVFN *pdrvfn;
} DRVENABLEDATA, *PDRVENABLEDATA;
typedef struct tagDEVINFO
{
    FLONG flGraphicsCaps;
    LOGFONTW lfDefaultFont;
    LOGFONTW lfAnsiVarFont;
    LOGFONTW lfAnsiFixFont;
    ULONG cFonts;
    ULONG iDitherFormat;
    USHORT cxDither;
    USHORT cyDither;
    HPALETTE hpalDefault;
    FLONG flGraphicsCaps2;
} DEVINFO, *PDEVINFO;
typedef struct _LINEATTRS
{
    FLONG fl;
    ULONG iJoin;
    ULONG iEndCap;
    FLOAT_LONG elWidth;
    FLOATL eMiterLimit;
    ULONG cstyle;
    PFLOAT_LONG pstyle;
    FLOAT_LONG elStyleState;
} LINEATTRS, *PLINEATTRS;
typedef LONG LDECI4;
typedef struct _XFORML {
    FLOATL eM11;
    FLOATL eM12;
    FLOATL eM21;
    FLOATL eM22;
    FLOATL eDx;
    FLOATL eDy;
} XFORML, *PXFORML;
typedef struct _CIECHROMA
{
    LDECI4 x;
    LDECI4 y;
    LDECI4 Y;
}CIECHROMA;
typedef struct _COLORINFO
{
    CIECHROMA Red;
    CIECHROMA Green;
    CIECHROMA Blue;
    CIECHROMA Cyan;
    CIECHROMA Magenta;
    CIECHROMA Yellow;
    CIECHROMA AlignmentWhite;
    LDECI4 RedGamma;
    LDECI4 GreenGamma;
    LDECI4 BlueGamma;
    LDECI4 MagentaInCyanDye;
    LDECI4 YellowInCyanDye;
    LDECI4 CyanInMagentaDye;
    LDECI4 YellowInMagentaDye;
    LDECI4 CyanInYellowDye;
    LDECI4 MagentaInYellowDye;
}COLORINFO, *PCOLORINFO;
typedef struct tagCDDDXGK_REDIRBITMAPPRESENTINFO
{
    UINT NumDirtyRects;
    RECT* DirtyRect;
    UINT NumContexts;
    HANDLE hContext[WINDDI_MAX_BROADCAST_CONTEXT+1];
    BOOLEAN bDoNotSynchronizeWithDxContent;
} CDDDXGK_REDIRBITMAPPRESENTINFO;
                                     (BYTE)(((BYTE)(m) & 0x07) << 2) | \
                                     (BYTE)((BYTE)(y) & 0x03))
                                     (DWORD)(((DWORD)(m) & 0x07) << 26) | \
                                     (DWORD)(((DWORD)(y) & 0x03) << 24))
                                         HT_FLAG_INK_ABSORPTION_IDX3)
                                         HT_FLAG_INK_ABSORPTION_IDX2)
                                         HT_FLAG_INK_ABSORPTION_IDX1)
typedef struct _GDIINFO
{
    ULONG ulVersion;
    ULONG ulTechnology;
    ULONG ulHorzSize;
    ULONG ulVertSize;
    ULONG ulHorzRes;
    ULONG ulVertRes;
    ULONG cBitsPixel;
    ULONG cPlanes;
    ULONG ulNumColors;
    ULONG flRaster;
    ULONG ulLogPixelsX;
    ULONG ulLogPixelsY;
    ULONG flTextCaps;
    ULONG ulDACRed;
    ULONG ulDACGreen;
    ULONG ulDACBlue;
    ULONG ulAspectX;
    ULONG ulAspectY;
    ULONG ulAspectXY;
    LONG xStyleStep;
    LONG yStyleStep;
    LONG denStyleStep;
    POINTL ptlPhysOffset;
    SIZEL szlPhysSize;
    ULONG ulNumPalReg;
    COLORINFO ciDevice;
    ULONG ulDevicePelsDPI;
    ULONG ulPrimaryOrder;
    ULONG ulHTPatternSize;
    ULONG ulHTOutputFormat;
    ULONG flHTFlags;
    ULONG ulVRefresh;
    ULONG ulBltAlignment;
    ULONG ulPanningHorzRes;
    ULONG ulPanningVertRes;
    ULONG xPanningAlignment;
    ULONG yPanningAlignment;
    ULONG cxHTPat;
    ULONG cyHTPat;
    LPBYTE pHTPatA;
    LPBYTE pHTPatB;
    LPBYTE pHTPatC;
    ULONG flShadeBlend;
    ULONG ulPhysicalPixelCharacteristics;
    ULONG ulPhysicalPixelGamma;
} GDIINFO, *PGDIINFO;
typedef struct _BRUSHOBJ
{
    ULONG iSolidColor;
    PVOID pvRbrush;
    FLONG flColorType;
} BRUSHOBJ;
typedef struct _CLIPOBJ
{
    ULONG iUniq;
    RECTL rclBounds;
    BYTE iDComplexity;
    BYTE iFComplexity;
    BYTE iMode;
    BYTE fjOptions;
} CLIPOBJ;
typedef struct _DRIVEROBJ DRIVEROBJ;
typedef BOOL (CALLBACK * FREEOBJPROC)(DRIVEROBJ *pDriverObj);
typedef struct _DRIVEROBJ
{
    PVOID pvObj;
    FREEOBJPROC pFreeProc;
    HDEV hdev;
    DHPDEV dhpdev;
} DRIVEROBJ;
typedef struct _FONTOBJ
{
    ULONG iUniq;
    ULONG iFace;
    ULONG cxMax;
    FLONG flFontType;
    ULONG_PTR iTTUniq;
    ULONG_PTR iFile;
    SIZE sizLogResPpi;
    ULONG ulStyleSize;
    PVOID pvConsumer;
    PVOID pvProducer;
} FONTOBJ;
typedef struct _BLENDOBJ
{
    BLENDFUNCTION BlendFunction;
}BLENDOBJ,*PBLENDOBJ;
typedef BYTE GAMMA_TABLES[2][256];
typedef struct _PALOBJ
{
    ULONG ulReserved;
} PALOBJ;
typedef struct _PATHOBJ
{
    FLONG fl;
    ULONG cCurves;
} PATHOBJ;
typedef struct _SURFOBJ
{
    DHSURF dhsurf;
    HSURF hsurf;
    DHPDEV dhpdev;
    HDEV hdev;
    SIZEL sizlBitmap;
    ULONG cjBits;
    _Field_size_bytes_(cjBits) PVOID pvBits;
    PVOID pvScan0;
    LONG lDelta;
    ULONG iUniq;
    ULONG iBitmapFormat;
    USHORT iType;
    USHORT fjBitmap;
} SURFOBJ;
typedef struct _WNDOBJ
{
    CLIPOBJ coClient;
    PVOID pvConsumer;
    RECTL rclClient;
    SURFOBJ *psoOwner;
} WNDOBJ, *PWNDOBJ;
typedef struct _XFORMOBJ
{
    ULONG ulReserved;
} XFORMOBJ;
typedef struct _XLATEOBJ
{
    ULONG iUniq;
    FLONG flXlate;
    USHORT iSrcType;
    USHORT iDstType;
    ULONG cEntries;
    ULONG *pulXlate;
} XLATEOBJ;
ENGAPI
PVOID APIENTRY BRUSHOBJ_pvAllocRbrush(
    BRUSHOBJ *pbo,
    ULONG cj
    );
ENGAPI
PVOID APIENTRY BRUSHOBJ_pvGetRbrush(
    BRUSHOBJ *pbo
    );
ENGAPI
ULONG APIENTRY BRUSHOBJ_ulGetBrushColor(
    BRUSHOBJ *pbo
    );
ENGAPI
HANDLE APIENTRY BRUSHOBJ_hGetColorTransform(
    BRUSHOBJ *pbo
    );
typedef struct _ENUMRECTS
{
    ULONG c;
    RECTL arcl[1];
} ENUMRECTS;
ENGAPI
ULONG APIENTRY CLIPOBJ_cEnumStart(
    CLIPOBJ *pco,
    BOOL bAll,
    __in_data_source(USER_MODE) ULONG iType,
    __in_data_source(USER_MODE) ULONG iDirection,
    __in_data_source(USER_MODE) ULONG cLimit
    );
ENGAPI
BOOL APIENTRY CLIPOBJ_bEnum(
    CLIPOBJ *pco,
    ULONG cj,
    ULONG *pul
    );
PATHOBJ* APIENTRY CLIPOBJ_ppoGetPath(
    CLIPOBJ* pco
    );
HANDLE APIENTRY CLIPOBJ_GetRgn(
    CLIPOBJ* pco
    );
typedef struct _GLYPHBITS
{
    POINTL ptlOrigin;
    SIZEL sizlBitmap;
    BYTE aj[1];
} GLYPHBITS;
typedef union _GLYPHDEF
{
    GLYPHBITS *pgb;
    PATHOBJ *ppo;
} GLYPHDEF;
typedef struct _GLYPHPOS
{
    HGLYPH hg;
    GLYPHDEF *pgdf;
    POINTL ptl;
} GLYPHPOS,*PGLYPHPOS;
typedef struct _GLYPHDATA {
        GLYPHDEF gdf;
        HGLYPH hg;
        FIX fxD;
        FIX fxA;
        FIX fxAB;
        FIX fxInkTop;
        FIX fxInkBottom;
        RECTL rclInk;
        POINTQF ptqD;
} GLYPHDATA;
typedef struct _STROBJ
{
    ULONG cGlyphs;
    FLONG flAccel;
    ULONG ulCharInc;
    RECTL rclBkGround;
    GLYPHPOS *pgp;
    LPWSTR pwszOrg;
} STROBJ;
typedef struct _FONTINFO
{
    ULONG cjThis;
    FLONG flCaps;
    ULONG cGlyphsSupported;
    ULONG cjMaxGlyph1;
    ULONG cjMaxGlyph4;
    ULONG cjMaxGlyph8;
    ULONG cjMaxGlyph32;
} FONTINFO, *PFONTINFO;
ULONG APIENTRY FONTOBJ_cGetAllGlyphHandles(
    FONTOBJ *pfo,
    HGLYPH *phg
    );
VOID APIENTRY FONTOBJ_vGetInfo(
    FONTOBJ *pfo,
    __in_data_source(USER_MODE) ULONG cjSize,
    FONTINFO *pfi
    );
ULONG APIENTRY FONTOBJ_cGetGlyphs(
    FONTOBJ *pfo,
    __in_data_source(USER_MODE) ULONG iMode,
    ULONG cGlyph,
    HGLYPH *phg,
    PVOID *ppvGlyph
    );
GAMMA_TABLES* APIENTRY FONTOBJ_pGetGammaTables(
    FONTOBJ *pfo);
XFORMOBJ * APIENTRY FONTOBJ_pxoGetXform(
    _In_ FONTOBJ *pfo
    );
IFIMETRICS * APIENTRY FONTOBJ_pifi(
    _In_ FONTOBJ *pfo
    );
FD_GLYPHSET * APIENTRY FONTOBJ_pfdg(
    FONTOBJ *pfo
    );
PVOID APIENTRY FONTOBJ_pvTrueTypeFontFile(
    FONTOBJ *pfo,
    ULONG *pcjFile
    );
PBYTE APIENTRY FONTOBJ_pjOpenTypeTablePointer (
    FONTOBJ *pfo,
    ULONG ulTag,
    ULONG *pcjTable
    );
LPWSTR APIENTRY FONTOBJ_pwszFontFilePaths (
    FONTOBJ *pfo,
    ULONG *pcwc
    );
PFD_GLYPHATTR APIENTRY FONTOBJ_pQueryGlyphAttrs(
    FONTOBJ *pfo,
    __in_data_source(USER_MODE) ULONG iMode
    );
ULONG APIENTRY PALOBJ_cGetColors(
    PALOBJ *ppalo,
    ULONG iStart,
    ULONG cColors,
    ULONG *pulColors
    );
                          PD_ENDSUBPATH | \
                          PD_RESETSTYLE | \
                          PD_CLOSEFIGURE | \
                          PD_BEZIERS)
typedef struct _PATHDATA
{
    FLONG flags;
    ULONG count;
    POINTFIX *pptfx;
} PATHDATA, *PPATHDATA;
typedef struct _RUN
{
    LONG iStart;
    LONG iStop;
} RUN, *PRUN;
typedef struct _CLIPLINE
{
    POINTFIX ptfxA;
    POINTFIX ptfxB;
    LONG lStyleState;
    ULONG c;
    RUN arun[1];
} CLIPLINE, *PCLIPLINE;
ENGAPI
VOID APIENTRY PATHOBJ_vEnumStart(
    PATHOBJ *ppo
    );
ENGAPI
BOOL APIENTRY PATHOBJ_bEnum(
    PATHOBJ *ppo,
    PATHDATA *ppd
    );
ENGAPI
VOID APIENTRY PATHOBJ_vEnumStartClipLines(
    PATHOBJ *ppo,
    CLIPOBJ *pco,
    SURFOBJ *pso,
    LINEATTRS *pla
    );
ENGAPI
BOOL APIENTRY PATHOBJ_bEnumClipLines(
    PATHOBJ *ppo,
    ULONG cb,
    CLIPLINE *pcl
    );
ENGAPI
BOOL APIENTRY PATHOBJ_bMoveTo(
    _In_ PATHOBJ *ppo,
    _In_ POINTFIX ptfx
    );
ENGAPI
BOOL APIENTRY PATHOBJ_bPolyLineTo(
    _In_ PATHOBJ *ppo,
    _In_reads_(cptfx) POINTFIX *pptfx,
    _In_ ULONG cptfx
    );
ENGAPI
BOOL APIENTRY PATHOBJ_bPolyBezierTo(
    _In_ PATHOBJ *ppo,
    _In_reads_(cptfx) POINTFIX *pptfx,
    _In_ ULONG cptfx
    );
ENGAPI
BOOL APIENTRY PATHOBJ_bCloseFigure(
    _In_ PATHOBJ *ppo
    );
ENGAPI
VOID APIENTRY PATHOBJ_vGetBounds(
    PATHOBJ *ppo,
    PRECTFX prectfx
    );
ENGAPI
VOID APIENTRY STROBJ_vEnumStart(
    STROBJ *pstro
    );
ENGAPI
BOOL APIENTRY STROBJ_bEnum(
    STROBJ *pstro,
    ULONG *pc,
    PGLYPHPOS *ppgpos
    );
ENGAPI
BOOL APIENTRY STROBJ_bEnumPositionsOnly(
    STROBJ *pstro,
    ULONG *pc,
    PGLYPHPOS *ppgpos
    );
ENGAPI
DWORD APIENTRY STROBJ_dwGetCodePage(
    STROBJ *pstro
    );
ENGAPI
FIX APIENTRY STROBJ_fxCharacterExtra(
    STROBJ *pstro
    );
ENGAPI
FIX APIENTRY STROBJ_fxBreakExtra(
    STROBJ *pstro
    );
ENGAPI
BOOL APIENTRY STROBJ_bGetAdvanceWidths(
    STROBJ *pso,
    __in_data_source(USER_MODE) ULONG iFirst,
    ULONG c,
    POINTQF *pptqD
    );
#if 1
#else
#endif
ENGAPI
ULONG APIENTRY XFORMOBJ_iGetXform(
    _In_ XFORMOBJ *pxo,
    _Out_opt_ XFORML *pxform
    );
ENGAPI
BOOL APIENTRY XFORMOBJ_bApplyXform(
    XFORMOBJ *pxo,
    __in_data_source(USER_MODE) __out_validated(GRAPHIC) ULONG iMode,
    ULONG cPoints,
    PVOID pvIn,
    PVOID pvOut
    );
DECLSPEC_DEPRECATED_DDK
ENGAPI
HANDLE APIENTRY XFORMOBJ_cmGetTransform(
    XFORMOBJ *pxo
    );
ENGAPI
ULONG APIENTRY XLATEOBJ_iXlate(
    XLATEOBJ *pxlo,
    ULONG iColor
    );
ENGAPI
ULONG * APIENTRY XLATEOBJ_piVector(
    XLATEOBJ *pxlo
    );
ENGAPI
ULONG APIENTRY XLATEOBJ_cGetPalette(
    XLATEOBJ *pxlo,
    __in_data_source(USER_MODE) ULONG iPal,
    ULONG cPal,
    ULONG *pPal
    );
ENGAPI
HANDLE APIENTRY XLATEOBJ_hGetColorTransform(
    XLATEOBJ *pxlo
    );
ENGAPI
HBITMAP APIENTRY EngCreateBitmap(
    SIZEL sizl,
    LONG lWidth,
    __in_data_source(USER_MODE) ULONG iFormat,
    __in_data_source(USER_MODE) FLONG fl,
    __in_data_source(USER_MODE) PVOID pvBits
    );
ENGAPI
HSURF APIENTRY EngCreateDeviceSurface(
    __in_data_source(USER_MODE) DHSURF dhsurf,
    __in_data_source(USER_MODE) SIZEL sizl,
    ULONG iFormatCompat
    );
ENGAPI
HBITMAP APIENTRY EngCreateDeviceBitmap(
    __in_data_source(USER_MODE) DHSURF dhsurf,
    __in_data_source(USER_MODE) SIZEL sizl,
    ULONG iFormatCompat
    );
ENGAPI
HBITMAP APIENTRY EngCreateRedirectionDeviceBitmap(
    __in_data_source(USER_MODE) DHSURF dhsurf,
    __in_data_source(USER_MODE) SIZEL sizl,
    ULONG iFormatCompat
    );
ENGAPI
BOOL APIENTRY EngDeleteSurface(
    __in_data_source(USER_MODE) HSURF hsurf
    );
ENGAPI
SURFOBJ * APIENTRY EngLockSurface(
    HSURF hsurf
    );
ENGAPI
VOID APIENTRY EngUnlockSurface(
    __in_data_source(USER_MODE) SURFOBJ *pso
    );
ENGAPI
BOOL APIENTRY EngEraseSurface(
    SURFOBJ *pso,
    RECTL *prcl,
    __in_data_source(USER_MODE) ULONG iColor
    );
ENGAPI
BOOL APIENTRY EngAssociateSurface(
    HSURF hsurf,
    HDEV hdev,
    FLONG flHooks
    );
ENGAPI
BOOL APIENTRY EngModifySurface(
    HSURF hsurf,
    HDEV hdev,
    FLONG flHooks,
    FLONG flSurface,
    DHSURF dhsurf,
    VOID* pvScan0,
    LONG lDelta,
    VOID* pvReserved
    );
ENGAPI
BOOL APIENTRY EngMarkBandingSurface(
    __in_data_source(USER_MODE) HSURF hsurf
    );
ENGAPI
BOOL APIENTRY EngCheckAbort(
    SURFOBJ *pso
    );
ENGAPI
PATHOBJ * APIENTRY EngCreatePath();
ENGAPI
VOID APIENTRY EngDeletePath(
    PATHOBJ *ppo
    );
ENGAPI
HPALETTE APIENTRY EngCreatePalette(
    __in_data_source(USER_MODE) ULONG iMode,
    __in_data_source(USER_MODE) ULONG cColors,
    __in_data_source(USER_MODE) ULONG *pulColors,
    __in_data_source(USER_MODE) FLONG flRed,
    __in_data_source(USER_MODE) FLONG flGreen,
    __in_data_source(USER_MODE) FLONG flBlue
    );
ENGAPI
ULONG APIENTRY EngQueryPalette(
    HPALETTE hpal,
    ULONG *piMode,
    ULONG cColors,
    ULONG *pulColors);
ENGAPI
BOOL APIENTRY EngDeletePalette(
    __in_data_source(USER_MODE) HPALETTE hpal
    );
ENGAPI
CLIPOBJ * APIENTRY EngCreateClip();
ENGAPI
VOID APIENTRY EngDeleteClip(
    CLIPOBJ *pco
    );
BOOL APIENTRY
APIENTRY
DrvQueryDriverInfo(
    DWORD dwMode,
    _Out_writes_bytes_(cbBuf) PVOID pBuffer,
    DWORD cbBuf,
    _Out_writes_(1) PDWORD pcbNeeded
    );
BOOL APIENTRY DrvEnableDriver(
    ULONG iEngineVersion,
    ULONG cj,
    _In_reads_bytes_(cj) DRVENABLEDATA *pded
    );
VOID APIENTRY DrvDisableDriver();
DHPDEV APIENTRY DrvEnablePDEV(
    _In_ DEVMODEW *pdm,
    _In_ LPWSTR pwszLogAddress,
    ULONG cPat,
    _In_reads_opt_(cPat) HSURF *phsurfPatterns,
    ULONG cjCaps,
    _Out_writes_bytes_(cjCaps) ULONG *pdevcaps,
    ULONG cjDevInfo,
    _Out_writes_bytes_(cjDevInfo) DEVINFO *pdi,
    HDEV hdev,
    _In_ LPWSTR pwszDeviceName,
    HANDLE hDriver
    );
LONG APIENTRY DrvRenderHint(
    DHPDEV dhpdev,
    ULONG NotifyCode,
    SIZE_T Length,
    _In_reads_bytes_opt_(Length) PVOID Data
    );
ULONG APIENTRY DrvResetDevice(
    DHPDEV dhpdev,
    PVOID Reserved
    );
BOOL APIENTRY DrvResetPDEV(
    DHPDEV dhpdevOld,
    DHPDEV dhpdevNew
    );
VOID APIENTRY DrvCompletePDEV(
    DHPDEV dhpdev,
    HDEV hdev
    );
__drv_preferredFunction("(see documentation)", "Obsolete")
BOOL APIENTRY DrvOffset(
    SURFOBJ* pso,
    LONG x,
    LONG y,
    FLONG flReserved
    );
HSURF APIENTRY DrvEnableSurface(
    DHPDEV dhpdev
    );
VOID APIENTRY DrvSynchronize(
    DHPDEV dhpdev,
    RECTL *prcl
    );
VOID APIENTRY DrvDisableSurface(
    DHPDEV dhpdev
    );
VOID APIENTRY DrvDisablePDEV(
    DHPDEV dhpdev
    );
ULONG_PTR APIENTRY DrvSaveScreenBits(
    SURFOBJ *pso,
    ULONG iMode,
    ULONG_PTR ident,
    RECTL *prcl
    );
BOOL APIENTRY DrvAssertMode(
    DHPDEV dhpdev,
    BOOL bEnable
    );
ULONG APIENTRY DrvGetModes(
    _In_ HANDLE hDriver,
    ULONG cjSize,
    _Out_writes_bytes_opt_(cjSize) DEVMODEW *pdm
    );
DECLSPEC_DEPRECATED_DDK
VOID APIENTRY DrvMovePanning(
    LONG x,
    LONG y,
    FLONG fl
    );
BOOL APIENTRY DrvPlgBlt(
    _Inout_ SURFOBJ *psoTrg,
    _Inout_ SURFOBJ *psoSrc,
    _In_opt_ SURFOBJ *psoMsk,
    _In_ CLIPOBJ *pco,
    _In_opt_ XLATEOBJ *pxlo,
    _In_opt_ COLORADJUSTMENT *pca,
    _In_opt_ POINTL *pptlBrushOrg,
    _In_ POINTFIX *pptfx,
    _In_ RECTL *prcl,
    _In_opt_ POINTL *pptl,
    _In_ ULONG iMode
    );
HBITMAP APIENTRY DrvCreateDeviceBitmap(
    DHPDEV dhpdev,
    SIZEL sizl,
    ULONG iFormat
    );
VOID APIENTRY DrvDeleteDeviceBitmap(
    DHSURF dhsurf
    );
HBITMAP APIENTRY DrvCreateDeviceBitmapEx(
    DHPDEV dhpdev,
    SIZEL sizl,
    ULONG iFormat,
    DWORD Flags,
    DHSURF dhsurfGroup,
    DWORD DxFormat,
    DWORD SubresourceIndex,
    HANDLE* phSharedSurface
    );
VOID APIENTRY DrvDeleteDeviceBitmapEx(
    DHSURF dhsurf
    );
BOOL APIENTRY DrvAssociateSharedSurface(
    _In_ SURFOBJ* psoSurf,
    _In_ HANDLE hPhysicalSurface,
    _In_ HANDLE hLogicalSurface,
    _In_ SIZEL sizl
    );
LONG APIENTRY DrvSynchronizeRedirectionBitmaps(
    _In_ DHPDEV dhpdev,
    _Out_ UINT64* puiFenceID
    );
BOOL APIENTRY DrvAccumulateD3DDirtyRect(
    _In_ SURFOBJ* psoSurf,
    _In_ CDDDXGK_REDIRBITMAPPRESENTINFO* pDirty
    );
BOOL APIENTRY DrvStartDxInterop(
    _In_ SURFOBJ* psoSurf,
    _In_ BOOL bDiscard,
    _In_ PVOID KernelModeDeviceHandle
    );
BOOL APIENTRY DrvEndDxInterop(
    _In_ SURFOBJ* psoSurf,
    _In_ BOOL bDiscard,
    _Out_ BOOL* bDeviceLost,
    _In_ PVOID KernelModeDeviceHandle
    );
VOID APIENTRY DrvLockDisplayArea(
    _In_ DHPDEV dhpdev,
    _In_opt_ RECTL *prcl
    );
VOID APIENTRY DrvUnlockDisplayArea(
    _In_ DHPDEV dhpdev,
    _In_opt_ RECTL *prcl
    );
BOOL APIENTRY DrvSurfaceComplete(
    _In_ DHPDEV dhpdev,
    _In_ HANDLE hLogicalSurface
    );
BOOL APIENTRY DrvSetPalette(
    DHPDEV dhpdev,
    PALOBJ *ppalo,
    FLONG fl,
    _In_range_(0, WINDDI_MAXSETPALETTECOLORINDEX) ULONG iStart,
    _In_range_(0, WINDDI_MAXSETPALETTECOLORS - iStart) ULONG cColors
    );
ULONG APIENTRY DrvDitherColor(
    _In_ DHPDEV dhpdev,
    _In_ ULONG iMode,
    _In_ ULONG rgb,
    _Inout_updates_(8 * 8) ULONG *pul
    );
BOOL APIENTRY DrvRealizeBrush(
    _In_ BRUSHOBJ *pbo,
    _Inout_ SURFOBJ *psoTarget,
    _In_ SURFOBJ *psoPattern,
    _In_opt_ SURFOBJ *psoMask,
    _In_ XLATEOBJ *pxlo,
    _In_ ULONG iHatch
    );
PIFIMETRICS APIENTRY DrvQueryFont(
    DHPDEV dhpdev,
    ULONG_PTR iFile,
    ULONG iFace,
    ULONG_PTR *pid
    );
PVOID APIENTRY DrvQueryFontTree(
    DHPDEV dhpdev,
    ULONG_PTR iFile,
    ULONG iFace,
    ULONG iMode,
    ULONG_PTR *pid
    );
LONG APIENTRY DrvQueryFontData(
    DHPDEV dhpdev,
    FONTOBJ *pfo,
    ULONG iMode,
    HGLYPH hg,
    GLYPHDATA *pgd,
    _Out_writes_bytes_(cjSize) PVOID pv,
    ULONG cjSize
    );
VOID APIENTRY DrvFree(
PVOID pv,
ULONG_PTR id);
VOID APIENTRY DrvDestroyFont(
FONTOBJ *pfo);
LONG APIENTRY DrvQueryFontCaps(
    ULONG culCaps,
    ULONG *pulCaps
    );
ULONG_PTR APIENTRY DrvLoadFontFile(
    ULONG cFiles,
    ULONG_PTR *piFile,
    PVOID *ppvView,
    ULONG *pcjView,
    DESIGNVECTOR *pdv,
    ULONG ulLangID,
    ULONG ulFastCheckSum
    );
BOOL APIENTRY DrvUnloadFontFile(
    ULONG_PTR iFile
    );
LONG APIENTRY DrvQueryTrueTypeTable(
    ULONG_PTR iFile,
    ULONG ulFont,
    ULONG ulTag,
    PTRDIFF dpStart,
    ULONG cjBuf,
    _Out_writes_opt_(cjBuf) BYTE *pjBuf,
    _Outptr_opt_result_buffer_(*pcjTable) PBYTE *ppjTable,
    _Out_opt_ ULONG *pcjTable
    );
BOOL APIENTRY DrvQueryAdvanceWidths(
    DHPDEV dhpdev,
    FONTOBJ *pfo,
    ULONG iMode,
    _In_reads_(cGlyphs) HGLYPH *phg,
    _Out_writes_bytes_(cGlyphs*sizeof(USHORT)) PVOID pvWidths,
    ULONG cGlyphs
    );
LONG APIENTRY DrvQueryTrueTypeOutline(
    DHPDEV dhpdev,
    FONTOBJ *pfo,
    HGLYPH hglyph,
    BOOL bMetricsOnly,
    GLYPHDATA *pgldt,
    ULONG cjBuf,
    TTPOLYGONHEADER *ppoly
    );
PVOID APIENTRY DrvGetTrueTypeFile (
    ULONG_PTR iFile,
    ULONG *pcj
    );
LONG APIENTRY DrvQueryFontFile(
    ULONG_PTR iFile,
    ULONG ulMode,
    ULONG cjBuf,
    ULONG *pulBuf
    );
BOOL APIENTRY DrvBitBlt(
    _Inout_ SURFOBJ *psoTrg,
    _In_opt_ SURFOBJ *psoSrc,
    _In_opt_ SURFOBJ *psoMask,
    _In_ CLIPOBJ *pco,
    _In_opt_ XLATEOBJ *pxlo,
    _In_ RECTL *prclTrg,
    _In_opt_ POINTL *pptlSrc,
    _In_opt_ POINTL *pptlMask,
    _In_opt_ BRUSHOBJ *pbo,
    _In_opt_ POINTL *pptlBrush,
    _In_ ROP4 rop4
    );
BOOL APIENTRY DrvStretchBlt(
    _Inout_ SURFOBJ *psoDest,
    _Inout_ SURFOBJ *psoSrc,
    _In_opt_ SURFOBJ *psoMask,
    _In_ CLIPOBJ *pco,
    _In_opt_ XLATEOBJ *pxlo,
    _In_opt_ COLORADJUSTMENT *pca,
    _In_ POINTL *pptlHTOrg,
    _In_ RECTL *prclDest,
    _In_ RECTL *prclSrc,
    _In_opt_ POINTL *pptlMask,
    _In_ ULONG iMode
    );
BOOL APIENTRY DrvStretchBltROP(
    _Inout_ SURFOBJ *psoDest,
    _Inout_ SURFOBJ *psoSrc,
    _In_opt_ SURFOBJ *psoMask,
    _In_ CLIPOBJ *pco,
    _In_opt_ XLATEOBJ *pxlo,
    _In_opt_ COLORADJUSTMENT *pca,
    _In_ POINTL *pptlHTOrg,
    _In_ RECTL *prclDest,
    _In_ RECTL *prclSrc,
    _In_opt_ POINTL *pptlMask,
    _In_ ULONG iMode,
    _In_ BRUSHOBJ *pbo,
    _In_ DWORD rop4
    );
BOOL APIENTRY DrvAlphaBlend(
    _Inout_ SURFOBJ *psoDest,
    _In_ SURFOBJ *psoSrc,
    _In_ CLIPOBJ *pco,
    _In_opt_ XLATEOBJ *pxlo,
    _In_ RECTL *prclDest,
    _In_ RECTL *prclSrc,
    _In_ BLENDOBJ *pBlendObj
    );
BOOL APIENTRY DrvGradientFill(
    _Inout_ SURFOBJ *psoDest,
    _In_ CLIPOBJ *pco,
    _In_opt_ XLATEOBJ *pxlo,
    _In_ TRIVERTEX *pVertex,
    _In_ ULONG nVertex,
    _In_ PVOID pMesh,
    _In_ ULONG nMesh,
    _In_ RECTL *prclExtents,
    _In_ POINTL *pptlDitherOrg,
    _In_ ULONG ulMode
    );
BOOL APIENTRY DrvTransparentBlt(
    _Inout_ SURFOBJ *psoDst,
    _In_ SURFOBJ *psoSrc,
    _In_ CLIPOBJ *pco,
    _In_opt_ XLATEOBJ *pxlo,
    _In_ RECTL *prclDst,
    _In_ RECTL *prclSrc,
    _In_ ULONG iTransColor,
    _In_ ULONG ulReserved
);
BOOL APIENTRY DrvCopyBits(
    SURFOBJ *psoDest,
    SURFOBJ *psoSrc,
    CLIPOBJ *pco,
    XLATEOBJ *pxlo,
    RECTL *prclDest,
    POINTL *pptlSrc
    );
BOOL APIENTRY DrvTextOut(
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
BOOL APIENTRY DrvLineTo(
    _Inout_ SURFOBJ *pso,
    _In_ CLIPOBJ *pco,
    _In_ BRUSHOBJ *pbo,
    _In_ LONG x1,
    _In_ LONG y1,
    _In_ LONG x2,
    _In_ LONG y2,
    _In_opt_ RECTL *prclBounds,
    _In_ MIX mix
    );
BOOL APIENTRY DrvStrokePath(
    _Inout_ SURFOBJ *pso,
    _In_ PATHOBJ *ppo,
    _In_ CLIPOBJ *pco,
    _In_opt_ XFORMOBJ *pxo,
    _In_ BRUSHOBJ *pbo,
    _In_ POINTL *pptlBrushOrg,
    _In_ LINEATTRS *plineattrs,
    _In_ MIX mix
    );
BOOL APIENTRY DrvFillPath(
    _Inout_ SURFOBJ *pso,
    _In_ PATHOBJ *ppo,
    _In_ CLIPOBJ *pco,
    _In_ BRUSHOBJ *pbo,
    _In_ POINTL *pptlBrushOrg,
    _In_ MIX mix,
    _In_ FLONG flOptions
    );
BOOL APIENTRY DrvStrokeAndFillPath(
    _Inout_ SURFOBJ *pso,
    _Inout_ PATHOBJ *ppo,
    _In_ CLIPOBJ *pco,
    _In_opt_ XFORMOBJ *pxo,
    _In_ BRUSHOBJ *pboStroke,
    _In_ LINEATTRS *plineattrs,
    _In_ BRUSHOBJ *pboFill,
    _In_ POINTL *pptlBrushOrg,
    _In_ MIX mixFill,
    _In_ FLONG flOptions
    );
BOOL APIENTRY DrvPaint(
    _Inout_ SURFOBJ *pso,
    _In_ CLIPOBJ *pco,
    _In_ BRUSHOBJ *pbo,
    _In_ POINTL *pptlBrushOrg,
    _In_ MIX mix
    );
ULONG APIENTRY DrvSetPointerShape(
    SURFOBJ *pso,
    SURFOBJ *psoMask,
    SURFOBJ *psoColor,
    XLATEOBJ *pxlo,
    LONG xHot,
    LONG yHot,
    LONG x,
    LONG y,
    RECTL *prcl,
    FLONG fl
    );
VOID APIENTRY DrvMovePointer(
    SURFOBJ *pso,
    LONG x,
    LONG y,
    RECTL *prcl
    );
BOOL APIENTRY DrvSendPage(
    _In_ SURFOBJ *pso
    );
BOOL APIENTRY DrvStartPage(
    _In_ SURFOBJ *pso
    );
ULONG APIENTRY DrvEscape(
    _In_ SURFOBJ *pso,
    _In_ ULONG iEsc,
    _In_ ULONG cjIn,
    _In_reads_bytes_(cjIn) PVOID pvIn,
    _In_ ULONG cjOut,
    _Out_writes_bytes_(cjOut) PVOID pvOut
    );
BOOL APIENTRY DrvStartDoc(
    _In_ SURFOBJ *pso,
    _In_ LPWSTR pwszDocName,
    _In_ DWORD dwJobId
    );
BOOL APIENTRY DrvEndDoc(
    _In_ SURFOBJ *pso,
    _In_ FLONG fl
    );
DECLSPEC_DEPRECATED_DDK
BOOL APIENTRY DrvQuerySpoolType(
    _In_ DHPDEV,
    _In_ LPWSTR
    );
ULONG APIENTRY DrvDrawEscape(
    _In_ SURFOBJ *pso,
    _In_ ULONG iEsc,
    _In_ CLIPOBJ *pco,
    _In_ RECTL *prcl,
    _In_ ULONG cjIn,
    _In_reads_bytes_(cjIn) PVOID pvIn
    );
ULONG APIENTRY DrvGetGlyphMode(
    _In_ DHPDEV,
    _In_ FONTOBJ *
    );
ULONG APIENTRY DrvFontManagement(
    _In_ SURFOBJ *pso,
    _In_opt_ FONTOBJ *pfo,
    _In_ ULONG iMode,
    _In_ ULONG cjIn,
    _In_reads_bytes_(cjIn) PVOID pvIn,
    _In_ ULONG cjOut,
    _Out_writes_bytes_(cjOut) PVOID pvOut
    );
BOOL APIENTRY DrvStartBanding(
    _In_ SURFOBJ *pso,
    _In_ POINTL *pptl
    );
BOOL APIENTRY DrvNextBand(
    _In_ SURFOBJ *pso,
    _In_ POINTL *pptl
    );
typedef struct _PERBANDINFO
{
    BOOL bRepeatThisBand;
    SIZEL szlBand;
    ULONG ulHorzRes;
    ULONG ulVertRes;
} PERBANDINFO, *PPERBANDINFO;
ULONG APIENTRY DrvQueryPerBandInfo(
    _In_ SURFOBJ *pso,
    _Inout_ PERBANDINFO *pbi
    );
BOOL APIENTRY DrvEnableDirectDraw(
    DHPDEV dhpdev,
    DD_CALLBACKS *pCallBacks,
    DD_SURFACECALLBACKS *pSurfaceCallBacks,
    DD_PALETTECALLBACKS *pPaletteCallBacks
    );
VOID APIENTRY DrvDisableDirectDraw(
    DHPDEV dhpdev
    );
BOOL APIENTRY DrvGetDirectDrawInfo(
    DHPDEV dhpdev,
    DD_HALINFO *pHalInfo,
    DWORD *pdwNumHeaps,
    VIDEOMEMORY *pvmList,
    DWORD *pdwNumFourCCCodes,
    DWORD *pdwFourCC
    );
HBITMAP APIENTRY DrvDeriveSurface(
    DD_DIRECTDRAW_GLOBAL *pDirectDraw,
    DD_SURFACE_LOCAL *pSurface
    );
HANDLE APIENTRY DrvIcmCreateColorTransform(
    _In_ DHPDEV dhpdev,
    _In_ LPLOGCOLORSPACEW pLogColorSpace,
    _In_reads_bytes_opt_(cjSourceProfile) PVOID pvSourceProfile,
    _In_ ULONG cjSourceProfile,
    _In_reads_bytes_(cjDestProfile) PVOID pvDestProfile,
    _In_ ULONG cjDestProfile,
    _In_reads_bytes_opt_(cjTargetProfile) PVOID pvTargetProfile,
    _In_ ULONG cjTargetProfile,
    _In_ DWORD dwReserved
    );
BOOL APIENTRY DrvIcmDeleteColorTransform(
    _In_ DHPDEV dhpdev,
    _In_ HANDLE hcmXform
    );
BOOL APIENTRY DrvIcmCheckBitmapBits(
    DHPDEV dhpdev,
    HANDLE hColorTransform,
    SURFOBJ *pso,
    _Out_writes_(_Inexpressible_("GDI allocated")) PBYTE paResults
    );
typedef struct _GAMMARAMP {
    WORD Red[256];
    WORD Green[256];
    WORD Blue[256];
} GAMMARAMP, *PGAMMARAMP;
BOOL APIENTRY DrvIcmSetDeviceGammaRamp(
    DHPDEV dhpdev,
    ULONG iFormat,
    LPVOID lpRamp
    );
BOOL APIENTRY DrvQueryDeviceSupport(
    SURFOBJ *pso,
    XLATEOBJ *pxlo,
    XFORMOBJ *pxo,
    ULONG iType,
    ULONG cjIn,
    _In_reads_bytes_(cjIn) PVOID pvIn,
    ULONG cjOut,
    _Out_writes_bytes_(cjOut) PVOID pvOut);
VOID APIENTRY DrvSynchronizeSurface(
    SURFOBJ *pso,
    RECTL *prcl,
    FLONG fl
);
VOID APIENTRY DrvNotify(
    SURFOBJ *pso,
    ULONG iType,
    PVOID pvData);
#if 1
#endif
typedef VOID (CALLBACK * WNDOBJCHANGEPROC)(WNDOBJ *pwo, FLONG fl);
ENGAPI
WNDOBJ * APIENTRY EngCreateWnd(
    SURFOBJ *pso,
    HWND hwnd,
    WNDOBJCHANGEPROC pfn,
    FLONG fl,
    int iPixelFormat
    );
ENGAPI
VOID APIENTRY EngDeleteWnd(
    WNDOBJ *pwo
    );
ENGAPI
ULONG APIENTRY WNDOBJ_cEnumStart(
    WNDOBJ *pwo,
    ULONG iType,
    ULONG iDirection,
    ULONG cLimit
    );
ENGAPI
BOOL APIENTRY WNDOBJ_bEnum(
    WNDOBJ *pwo,
    ULONG cj,
    ULONG *pul
    );
ENGAPI
VOID APIENTRY WNDOBJ_vSetConsumer(
    WNDOBJ *pwo,
    PVOID pvConsumer
    );
HANDLE APIENTRY EngCreateRectRgn(INT left, INT top, INT right, INT bottom);
VOID APIENTRY EngDeleteRgn(
    HANDLE hrgn
    );
INT APIENTRY EngCombineRgn(
    HANDLE hrgnTrg,
    HANDLE hrgnSrc1,
    HANDLE hrgnSrc2,
    int imode
    );
INT APIENTRY EngCopyRgn(
    HANDLE hrgnDst,
    HANDLE hrgnSrc
    );
INT APIENTRY EngIntersectRgn(
    HANDLE hrgnResult,
    HANDLE hRgnA,
    HANDLE hRgnB
    );
INT APIENTRY EngSubtractRgn(
    HANDLE hrgnResult,
    HANDLE hRgnA,
    HANDLE hRgnB
    );
INT APIENTRY EngUnionRgn(
    HANDLE hrgnResult,
    HANDLE hRgnA,
    HANDLE hRgnB
    );
INT APIENTRY EngXorRgn(
    HANDLE hrgnResult,
    HANDLE hRgnA,
    HANDLE hRgnB
    );
BOOL APIENTRY EngRectInRgn(
    HANDLE hrgn,
    LPRECT prcl
    );
BOOL APIENTRY EngEqualRgn(
    HANDLE hrgn1,
    HANDLE hrgn2
    );
DWORD APIENTRY EngGetRgnData(
    HANDLE hrgn,
    DWORD nCount,
    LPRGNDATA lpRgnData
    );
BOOL APIENTRY EngSetRectRgn(
    HANDLE hrgn,
    INT left,
    INT top,
    INT right,
    INT bottom
    );
INT APIENTRY EngGetRgnBox(
    HANDLE hrgn,
    LPRECT prcl
    );
INT APIENTRY EngOffsetRgn(
    HANDLE hrgn,
    INT x,
    INT y
    );
VOID APIENTRY EngRenderHint(
    DHPDEV dhpdev,
    ULONG NotifyCode,
    SIZE_T Length,
    _In_reads_bytes_opt_(Length) PVOID Data
    );
ENGAPI
ULONG APIENTRY EngHangNotification(
    HDEV hdev,
    PVOID Reserved
    );
ENGAPI
HDRVOBJ APIENTRY EngCreateDriverObj(
    PVOID pvObj,
    FREEOBJPROC pFreeObjProc,
    HDEV hdev
    );
ENGAPI
BOOL APIENTRY EngDeleteDriverObj(
    HDRVOBJ hdo,
    BOOL bCallBack,
    BOOL bLocked
    );
ENGAPI
DRIVEROBJ* APIENTRY EngLockDriverObj(
    HDRVOBJ hdo
    );
ENGAPI
BOOL APIENTRY EngUnlockDriverObj(
    HDRVOBJ hdo
    );
ENGAPI
HANDLE APIENTRY EngGetProcessHandle();
ENGAPI
HANDLE APIENTRY EngGetCurrentThreadId();
ENGAPI
HANDLE APIENTRY EngGetCurrentProcessId();
BOOL APIENTRY DrvSetPixelFormat(
    SURFOBJ *pso,
    LONG iPixelFormat,
    HWND hwnd
    );
LONG APIENTRY DrvDescribePixelFormat(
    DHPDEV dhpdev,
    LONG iPixelFormat,
    ULONG cjpfd,
    PIXELFORMATDESCRIPTOR *ppfd
    );
BOOL APIENTRY DrvSwapBuffers(
    SURFOBJ *pso,
    WNDOBJ *pwo
    );
ENGAPI
BOOL APIENTRY EngBitBlt(
    _In_ SURFOBJ *psoTrg,
    _In_ SURFOBJ *psoSrc,
    _In_ SURFOBJ *psoMask,
    _In_ CLIPOBJ *pco,
    _In_ XLATEOBJ *pxlo,
    _In_ RECTL *prclTrg,
    _In_ POINTL *pptlSrc,
    _In_ POINTL *pptlMask,
    _In_ BRUSHOBJ *pbo,
    _In_ POINTL *pptlBrush,
    __in_data_source(USER_MODE) ROP4 rop4
    );
ENGAPI
BOOL APIENTRY EngLineTo(
    SURFOBJ *pso,
    CLIPOBJ *pco,
    BRUSHOBJ *pbo,
    __in_data_source(USER_MODE) LONG x1,
    __in_data_source(USER_MODE) LONG y1,
    __in_data_source(USER_MODE) LONG x2,
    __in_data_source(USER_MODE) LONG y2,
    RECTL *prclBounds,
    __in_data_source(USER_MODE) MIX mix
    );
ENGAPI
BOOL APIENTRY EngStretchBlt(
    SURFOBJ *psoDest,
    SURFOBJ *psoSrc,
    SURFOBJ *psoMask,
    CLIPOBJ *pco,
    XLATEOBJ *pxlo,
    __in_data_source(USER_MODE) COLORADJUSTMENT *pca,
    __in_data_source(USER_MODE) POINTL *pptlHTOrg,
    __in_data_source(USER_MODE) RECTL *prclDest,
    __in_data_source(USER_MODE) RECTL *prclSrc,
    POINTL *pptlMask,
    __in_data_source(USER_MODE) ULONG iMode
    );
ENGAPI
BOOL APIENTRY EngStretchBltROP(
    SURFOBJ *psoDest,
    SURFOBJ *psoSrc,
    SURFOBJ *psoMask,
    CLIPOBJ *pco,
    XLATEOBJ *pxlo,
    COLORADJUSTMENT *pca,
    POINTL *pptlHTOrg,
    __in_data_source(USER_MODE) RECTL *prclDest,
    __in_data_source(USER_MODE) RECTL *prclSrc,
    POINTL *pptlMask,
    __in_data_source(USER_MODE) ULONG iMode,
    BRUSHOBJ *pbo,
    __in_data_source(USER_MODE) DWORD rop4
    );
ENGAPI
BOOL APIENTRY EngAlphaBlend(
    SURFOBJ *psoDest,
    SURFOBJ *psoSrc,
    CLIPOBJ *pco,
    XLATEOBJ *pxlo,
    RECTL *prclDest,
    RECTL *prclSrc,
    BLENDOBJ *pBlendObj
    );
ENGAPI
BOOL APIENTRY EngGradientFill(
    SURFOBJ *psoDest,
    CLIPOBJ *pco,
    XLATEOBJ *pxlo,
    TRIVERTEX *pVertex,
    ULONG nVertex,
    PVOID pMesh,
    ULONG nMesh,
    RECTL *prclExtents,
    POINTL *pptlDitherOrg,
    __in_data_source(USER_MODE) ULONG ulMode
    );
ENGAPI
BOOL APIENTRY EngTransparentBlt(
    _In_ SURFOBJ *psoDst,
    _In_ SURFOBJ *psoSrc,
    _In_opt_ CLIPOBJ *pco,
    _In_opt_ XLATEOBJ *pxlo,
    _In_ RECTL *prclDst,
    _In_ RECTL *prclSrc,
    __in_data_source(USER_MODE) ULONG TransColor,
    __in_data_source(USER_MODE) ULONG bCalledFromBitBlt
    );
ENGAPI
BOOL APIENTRY EngTextOut(
    SURFOBJ *pso,
    STROBJ *pstro,
    FONTOBJ *pfo,
    CLIPOBJ *pco,
    RECTL *prclExtra,
    RECTL *prclOpaque,
    BRUSHOBJ *pboFore,
    BRUSHOBJ *pboOpaque,
    POINTL *pptlOrg,
    __in_data_source(USER_MODE) MIX mix
    );
ENGAPI
BOOL APIENTRY EngStrokePath(
    SURFOBJ *pso,
    PATHOBJ *ppo,
    CLIPOBJ *pco,
    XFORMOBJ *pxo,
    BRUSHOBJ *pbo,
    POINTL *pptlBrushOrg,
    __in_data_source(USER_MODE) LINEATTRS *plineattrs,
    __in_data_source(USER_MODE) MIX mix
    );
ENGAPI
BOOL APIENTRY EngFillPath(
    SURFOBJ *pso,
    PATHOBJ *ppo,
    CLIPOBJ *pco,
    BRUSHOBJ *pbo,
    POINTL *pptlBrushOrg,
    __in_data_source(USER_MODE) MIX mix,
    __in_data_source(USER_MODE) FLONG flOptions
    );
ENGAPI
BOOL APIENTRY EngStrokeAndFillPath(
    SURFOBJ *pso,
    PATHOBJ *ppo,
    CLIPOBJ *pco,
    XFORMOBJ *pxo,
    BRUSHOBJ *pboStroke,
    LINEATTRS *plineattrs,
    BRUSHOBJ *pboFill,
    POINTL *pptlBrushOrg,
    __in_data_source(USER_MODE) MIX mixFill,
    __in_data_source(USER_MODE) FLONG flOptions
    );
ENGAPI
BOOL APIENTRY EngPaint(
    SURFOBJ *pso,
    CLIPOBJ *pco,
    BRUSHOBJ *pbo,
    POINTL *pptlBrushOrg,
    __in_data_source(USER_MODE) MIX mix
    );
ENGAPI
BOOL APIENTRY EngCopyBits(
    SURFOBJ *psoDest,
    SURFOBJ *psoSrc,
    CLIPOBJ *pco,
    XLATEOBJ *pxlo,
    __in_data_source(USER_MODE) RECTL *prclDest,
    __in_data_source(USER_MODE) POINTL *pptlSrc
    );
ENGAPI
ULONG APIENTRY EngSetPointerShape(
    SURFOBJ *pso,
    SURFOBJ *psoMask,
    SURFOBJ *psoColor,
    XLATEOBJ *pxlo,
    LONG xHot,
    LONG yHot,
    LONG x,
    LONG y,
    RECTL *prcl,
    FLONG fl
    );
ENGAPI
VOID APIENTRY EngMovePointer(
    SURFOBJ *pso,
    LONG x,
    LONG y,
    RECTL *prcl
    );
ENGAPI
BOOL APIENTRY EngPlgBlt(
    SURFOBJ *psoTrg,
    SURFOBJ *psoSrc,
    SURFOBJ *psoMsk,
    CLIPOBJ *pco,
    XLATEOBJ *pxlo,
    COLORADJUSTMENT *pca,
    POINTL *pptlBrushOrg,
    POINTFIX *pptfx,
    RECTL *prcl,
    POINTL *pptl,
    __in_data_source(USER_MODE) ULONG iMode
    );
ENGAPI
ULONG APIENTRY EngDitherColor(
    HDEV hdev,
    ULONG iMode,
    ULONG rgb,
    ULONG *pul
    );
VOID APIENTRY EngCTGetGammaTable(
    ULONG ulGamma,
    CONST BYTE** pGammaTable,
    CONST BYTE** pInverseGammaTable
    );
ULONG APIENTRY EngCTGetCurrentGamma(
    HDEV hdev
    );
ENGAPI
BOOL APIENTRY EngControlSprites(
    WNDOBJ *pwo,
    FLONG fl
    );
LONG APIENTRY HT_ComputeRGBGammaTable(
    _In_ USHORT GammaTableEntries,
    _In_ USHORT GammaTableType,
    _In_ USHORT RedGamma,
    _In_ USHORT GreenGamma,
    _In_ USHORT BlueGamma,
    _Out_writes_bytes_(GammaTableEntries * 3) LPBYTE pGammaTable
    );
LONG APIENTRY HT_Get8BPPFormatPalette(
    _Out_opt_ LPPALETTEENTRY pPaletteEntry,
    _In_ USHORT RedGamma,
    _In_ USHORT GreenGamma,
    _In_ USHORT BlueGamma
    );
LONG APIENTRY HT_Get8BPPMaskPalette(
    _Out_opt_ LPPALETTEENTRY pPaletteEntry,
    _In_ BOOL Use8BPPMaskPal,
    _In_ BYTE CMYMask,
    _In_ USHORT RedGamma,
    _In_ USHORT GreenGamma,
    _In_ USHORT BlueGamma
    );
typedef struct _DEVHTINFO {
    DWORD HTFlags;
    DWORD HTPatternSize;
    DWORD DevPelsDPI;
    COLORINFO ColorInfo;
    } DEVHTINFO, *PDEVHTINFO;
typedef struct _DEVHTADJDATA {
    DWORD DeviceFlags;
    DWORD DeviceXDPI;
    DWORD DeviceYDPI;
    PDEVHTINFO pDefHTInfo;
    PDEVHTINFO pAdjHTInfo;
    } DEVHTADJDATA, *PDEVHTADJDATA;
LONG
APIENTRY
HTUI_DeviceColorAdjustment(
    _In_opt_ LPSTR pDeviceName,
    _In_ PDEVHTADJDATA pDevHTAdjData
    );
__analysis_noreturn
ENGAPI
VOID APIENTRY EngDebugBreak(
    VOID
    );
ENGAPI
VOID APIENTRY EngBugCheckEx(
    _In_ ULONG BugCheckCode,
    _In_ ULONG_PTR P1,
    _In_ ULONG_PTR P2,
    _In_ ULONG_PTR P3,
    _In_ ULONG_PTR P4
    );
ENGAPI
VOID APIENTRY EngDebugPrint(
    _In_z_ PCHAR StandardPrefix,
    _In_z_ PCHAR DebugMessage,
    _In_ va_list ap
    );
ENGAPI
VOID APIENTRY EngQueryPerformanceCounter(
    _Out_ LONGLONG *pPerformanceCount
    );
ENGAPI
VOID APIENTRY EngQueryPerformanceFrequency(
    _Out_ LONGLONG *pFrequency
    );
__drv_preferredFunction("(see documentation)", "Obsolete, always returns false. ")
ENGAPI
BOOL APIENTRY EngSetPointerTag(
    _In_ HDEV hdev,
    _In_ SURFOBJ *psoMask,
    _In_ SURFOBJ *psoColor,
    _In_ XLATEOBJ *pxlo,
    _In_ FLONG fl
    );
ENGAPI
VOID APIENTRY EngProbeForRead(
    _In_reads_bytes_(Length) PVOID Address,
    _In_ ULONG Length,
    _In_ ULONG Alignment
    );
ENGAPI
VOID APIENTRY EngProbeForReadAndWrite(
    _Inout_updates_bytes_(Length) PVOID Address,
    _In_ ULONG Length,
    _In_ ULONG Alignment
    );
ENGAPI
HANDLE APIENTRY EngSecureMem(
    _In_reads_bytes_(Length) PVOID Address,
    _In_ ULONG Length
    );
ENGAPI
VOID APIENTRY EngUnsecureMem(
    _In_ HANDLE hSecure
    );
ENGAPI
DWORD APIENTRY EngDeviceIoControl(
    _In_ HANDLE hDevice,
    _In_ DWORD dwIoControlCode,
    _In_reads_bytes_opt_(nInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_writes_bytes_opt_(nOutBufferSize) LPVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_ LPDWORD lpBytesReturned
    );
ENGAPI
LPWSTR APIENTRY EngGetPrinterDataFileName(
    _In_ HDEV hdev
    );
ENGAPI
LPWSTR APIENTRY EngGetDriverName(
    _In_ HDEV hdev
    );
typedef struct _TYPE1_FONT
{
    HANDLE hPFM;
    HANDLE hPFB;
    ULONG ulIdentifier;
} TYPE1_FONT;
ENGAPI
BOOL APIENTRY EngGetType1FontList(
    _In_ HDEV hdev,
    _Out_writes_bytes_opt_(cjType1Buffer) TYPE1_FONT *pType1Buffer,
    _In_ ULONG cjType1Buffer,
    _Out_ PULONG pulLocalFonts,
    _Out_ PULONG pulRemoteFonts,
    _Out_ LARGE_INTEGER *pLastModified
    );
ENGAPI
HANDLE APIENTRY EngLoadModule(
    _In_ LPWSTR pwsz
    );
ENGAPI
PVOID APIENTRY EngFindResource(
    _In_ HANDLE h,
    _In_ int iName,
    _In_ int iType,
    _Out_ PULONG pulSize
    );
ENGAPI
VOID APIENTRY EngFreeModule(
    _In_ HANDLE h
    );
ENGAPI
BOOL
APIENTRY
EngDeleteFile (
    _In_ LPWSTR pwszFileName
    );
ENGAPI
_Success_(return != 0)
_When_(cjSize != 0, _At_(return, _Out_writes_bytes_(cjSize)))
PVOID
APIENTRY
EngMapFile(
    _In_ LPWSTR pwsz,
    _In_ ULONG cjSize,
    _Out_ ULONG_PTR *piFile
    );
ENGAPI
BOOL
APIENTRY
EngUnmapFile (
     _In_ ULONG_PTR iFile
     );
__drv_preferredFunction("EngUnmapFontFileFD", "Obsolete")
ENGAPI
VOID APIENTRY EngUnmapFontFile(
    _In_ ULONG_PTR iFile
    );
__drv_preferredFunction("EngMapFontFileFD", "Obsolete")
ENGAPI
BOOL APIENTRY EngMapFontFile(
    _In_ ULONG_PTR iFile,
    _Outptr_result_bytebuffer_(*pcjBuf) PULONG *ppjBuf,
    _Out_ ULONG *pcjBuf
    );
ENGAPI
VOID APIENTRY EngUnmapFontFileFD(
    _In_ ULONG_PTR iFile
    );
ENGAPI
BOOL APIENTRY EngMapFontFileFD(
    _In_ ULONG_PTR iFile,
    _Outptr_result_bytebuffer_(*pcjBuf) PULONG *ppjBuf,
    _Out_ ULONG *pcjBuf
    );
ENGAPI
BOOL APIENTRY EngLpkInstalled();
DECLARE_HANDLE(HSEMAPHORE);
ENGAPI
HSEMAPHORE APIENTRY EngCreateSemaphore(
    VOID
    );
ENGAPI
VOID APIENTRY EngAcquireSemaphore(
    _In_ HSEMAPHORE hsem
    );
ENGAPI
VOID APIENTRY EngReleaseSemaphore(
    _In_ HSEMAPHORE hsem
    );
ENGAPI
VOID APIENTRY EngDeleteSemaphore(
    _In_ HSEMAPHORE hsem
    );
ENGAPI
VOID APIENTRY EngAcquireSemaphoreShared(
    _In_ HSEMAPHORE hsem
    );
ENGAPI
BOOL APIENTRY EngAcquireSemaphoreNoWait(
    _In_ HSEMAPHORE hsem
    );
ENGAPI
BOOL APIENTRY EngAcquireSemaphoreSharedNoWait(
    _In_ HSEMAPHORE hsem
    );
ENGAPI
BOOL APIENTRY EngIsSemaphoreOwned(
    _In_ HSEMAPHORE hsem
    );
ENGAPI
BOOL APIENTRY EngIsSemaphoreOwnedByCurrentThread(
    _In_ HSEMAPHORE hsem
    );
ENGAPI
BOOL APIENTRY EngIsSemaphoreSharedByCurrentThread(
    _In_ HSEMAPHORE hsem
    );
DECLARE_HANDLE(HFASTMUTEX);
ENGAPI
HFASTMUTEX APIENTRY EngCreateFastMutex();
ENGAPI
VOID APIENTRY EngDeleteFastMutex(HFASTMUTEX hfm);
ENGAPI
VOID APIENTRY EngAcquireFastMutex(HFASTMUTEX hfm);
ENGAPI
VOID APIENTRY EngReleaseFastMutex(HFASTMUTEX hfm);
ENGAPI
BOOL APIENTRY EngUpdateDeviceSurface(_In_ SURFOBJ *pso, _Inout_ CLIPOBJ **ppco);
typedef struct _ENGSAFESEMAPHORE
{
    HSEMAPHORE hsem;
    LONG lCount;
} ENGSAFESEMAPHORE;
ENGAPI
BOOL APIENTRY EngInitializeSafeSemaphore(
    _Out_ ENGSAFESEMAPHORE *pssem
    );
ENGAPI
VOID APIENTRY EngDeleteSafeSemaphore(
    _Inout_ ENGSAFESEMAPHORE *pssem
    );
ENGAPI
VOID APIENTRY EngMultiByteToUnicodeN(
    _Out_writes_bytes_to_(MaxBytesInUnicodeString, *BytesInUnicodeString) LPWSTR UnicodeString,
    _In_ ULONG MaxBytesInUnicodeString,
    _Out_opt_ PULONG BytesInUnicodeString,
    _In_reads_bytes_(BytesInMultiByteString) PCHAR MultiByteString,
    _In_ ULONG BytesInMultiByteString
    );
ENGAPI
VOID APIENTRY EngUnicodeToMultiByteN(
    _Out_writes_bytes_to_(MaxBytesInMultiByteString, *BytesInMultiByteString) PCHAR MultiByteString,
    _In_ ULONG MaxBytesInMultiByteString,
    _Out_opt_ PULONG BytesInMultiByteString,
    _In_reads_bytes_(BytesInUnicodeString) PWSTR UnicodeString,
    _In_ ULONG BytesInUnicodeString
    );
    typedef FLOAT FLOATOBJ;
    typedef FLOAT *PFLOATOBJ;
    #define FLOATOBJ_SetFloat(pf,f) {*(pf) = (f); }
    #define FLOATOBJ_SetLong(pf,l) {*(pf) = (FLOAT)(l); }
    #define FLOATOBJ_GetFloat(pf) *((PULONG)pf)
    #define FLOATOBJ_GetLong(pf) (LONG)*(pf)
    #define FLOATOBJ_AddFloat(pf,f) {*(pf) += f; }
    #define FLOATOBJ_AddLong(pf,l) {*(pf) += (LONG)(l); }
    #define FLOATOBJ_Add(pf,pf1) {*(pf) += *(pf1); }
    #define FLOATOBJ_SubFloat(pf,f) {*(pf) -= f; }
    #define FLOATOBJ_SubLong(pf,l) {*(pf) -= (LONG)(l); }
    #define FLOATOBJ_Sub(pf,pf1) {*(pf) -= *(pf1); }
    #define FLOATOBJ_MulFloat(pf,f) {*(pf) *= f; }
    #define FLOATOBJ_MulLong(pf,l) {*(pf) *= (LONG)(l); }
    #define FLOATOBJ_Mul(pf,pf1) {*(pf) *= *(pf1); }
    #define FLOATOBJ_DivFloat(pf,f) {*(pf) /= f; }
    #define FLOATOBJ_DivLong(pf,l) {*(pf) /= (LONG)(l); }
    #define FLOATOBJ_Div(pf,pf1) {*(pf) /= *(pf1); }
    #define FLOATOBJ_Neg(pf) {*(pf) = -*(pf); }
    #define FLOATOBJ_EqualLong(pf,l) (*(pf) == (FLOAT)(l))
    #define FLOATOBJ_GreaterThanLong(pf,l) (*(pf) > (FLOAT)(l))
    #define FLOATOBJ_LessThanLong(pf,l) (*(pf) < (FLOAT)(l))
    #define FLOATOBJ_Equal(pf,pf1) (*(pf) == *(pf1))
    #define FLOATOBJ_GreaterThan(pf,pf1) (*(pf) > *(pf1))
    #define FLOATOBJ_LessThan(pf,pf1) (*(pf) < *(pf1))
typedef struct tagFLOATOBJ_XFORM
{
    FLOATOBJ eM11;
    FLOATOBJ eM12;
    FLOATOBJ eM21;
    FLOATOBJ eM22;
    FLOATOBJ eDx;
    FLOATOBJ eDy;
} FLOATOBJ_XFORM, *PFLOATOBJ_XFORM, FAR *LPFLOATOBJ_XFORM;
ULONG APIENTRY XFORMOBJ_iGetFloatObjXform(
    XFORMOBJ *pxo,
    FLOATOBJ_XFORM * pfxo
    );
typedef int (__cdecl *SORTCOMP)(const void *pv1, const void *pv2);
ENGAPI
VOID APIENTRY EngSort(
    _Inout_updates_bytes_(c * cjElem) PBYTE pjBuf,
    _In_ ULONG c,
    _In_ ULONG cjElem,
    _In_ SORTCOMP pfnComp
    );
typedef struct _ENG_TIME_FIELDS {
    USHORT usYear;
    USHORT usMonth;
    USHORT usDay;
    USHORT usHour;
    USHORT usMinute;
    USHORT usSecond;
    USHORT usMilliseconds;
    USHORT usWeekday;
} ENG_TIME_FIELDS, *PENG_TIME_FIELDS;
ENGAPI
VOID APIENTRY EngQueryLocalTime(
    _Out_ PENG_TIME_FIELDS
    );
_Success_(return != 0)
ENGAPI
FD_GLYPHSET* APIENTRY EngComputeGlyphSet(
    _In_ INT nCodePage,
    _In_ INT nFirstChar,
    _In_ INT cChars
    );
ENGAPI
INT APIENTRY EngMultiByteToWideChar(
    _In_ UINT CodePage,
    _Out_writes_bytes_opt_(BytesInWideCharString) _Null_terminated_ LPWSTR WideCharString,
    _In_ INT BytesInWideCharString,
    _In_reads_bytes_opt_(BytesInMultiByteString) _Null_terminated_ LPSTR MultiByteString,
    _In_ INT BytesInMultiByteString
    );
ENGAPI
INT APIENTRY EngWideCharToMultiByte(
    _In_ UINT CodePage,
    _In_reads_bytes_opt_(BytesInWideCharString) _Null_terminated_ LPWSTR WideCharString,
    _In_ INT BytesInWideCharString,
    _Out_writes_bytes_opt_(BytesInMultiByteString) _Null_terminated_ LPSTR MultiByteString,
    _In_ INT BytesInMultiByteString
    );
ENGAPI
VOID APIENTRY EngGetCurrentCodePage(
    _Out_ PUSHORT OemCodePage,
    _Out_ PUSHORT AnsiCodePage
    );
ENGAPI
HANDLE APIENTRY EngLoadModuleForWrite(
    _In_ LPWSTR pwsz,
    _In_ ULONG cjSizeOfModule
    );
ENGAPI
LARGE_INTEGER APIENTRY EngQueryFileTimeStamp (
    _In_ LPWSTR pwsz
    );
_Success_(return)
ENGAPI
BOOL APIENTRY EngGetFileChangeTime(
    _In_ HANDLE h,
    _Out_ LARGE_INTEGER *pChangeTime
    );
_Success_(return)
ENGAPI
BOOL APIENTRY EngGetFilePath(
    _In_ HANDLE h ,
    _At_((PWSTR)pDest, _Out_writes_(MAX_PATH+1))
            WCHAR (*pDest)[MAX_PATH+1]
    );
_Check_return_
_Success_(((pBuffer != NULL && cjBufferSize != 0) && return == 1) ||
          ((pBuffer == NULL || cjBufferSize == 0) && return > 0))
_When_(pBuffer != NULL && cjBufferSize != 0 && return == 1,
    _Kernel_float_saved_
    _At_(*pBuffer, _Post_valid_ _Kernel_acquires_resource_(EngFloatState)))
_On_failure_(_Post_satisfies_(return == 0))
ENGAPI
ULONG APIENTRY EngSaveFloatingPointState(
    _At_(*pBuffer, _Kernel_requires_resource_not_held_(EngFloatState))
    _Out_writes_bytes_opt_(cjBufferSize)
                VOID *pBuffer,
    _Inout_ ULONG cjBufferSize
    );
_Check_return_
_Success_(return)
_Kernel_float_restored_
_At_(*pBuffer, _Kernel_requires_resource_held_(EngFloatState)
               _Kernel_releases_resource_(EngFloatState))
ENGAPI
BOOL APIENTRY EngRestoreFloatingPointState(
    _In_reads_(_Inexpressible_(statesize))
    VOID *pBuffer
    );
ENGAPI
PDD_SURFACE_LOCAL APIENTRY EngLockDirectDrawSurface(
        _In_ HANDLE hSurface
        );
ENGAPI
BOOL APIENTRY EngUnlockDirectDrawSurface(
        _In_ PDD_SURFACE_LOCAL pSurface
        );
typedef struct _ENG_EVENT *PEVENT;
ENGAPI
BOOL APIENTRY EngDeleteEvent(
    _In_ PEVENT pEvent
    );
ENGAPI
BOOL APIENTRY EngCreateEvent(
    _Out_ PEVENT *ppEvent
    );
ENGAPI
BOOL APIENTRY EngUnmapEvent(
    _In_ PEVENT pEvent
    );
ENGAPI
PEVENT APIENTRY EngMapEvent(
    _In_ HDEV hDev,
    _In_ HANDLE hUserObject,
    _Reserved_ PVOID Reserved1,
    _Reserved_ PVOID Reserved2,
    _Reserved_ PVOID Reserved3
    );
ENGAPI
BOOL APIENTRY EngWaitForSingleObject(
    _In_ PEVENT pEvent,
    _In_ PLARGE_INTEGER pTimeOut
    );
ENGAPI
LONG APIENTRY EngSetEvent(
    _In_ PEVENT pEvent
    );
ENGAPI
VOID APIENTRY
EngClearEvent (
    _In_ PEVENT pEvent
);
ENGAPI
LONG APIENTRY
EngReadStateEvent (
    _In_ PEVENT pEvent
);
typedef enum _ENG_SYSTEM_ATTRIBUTE {
    EngProcessorFeature = 1,
    EngNumberOfProcessors,
    EngOptimumAvailableUserMemory,
    EngOptimumAvailableSystemMemory,
} ENG_SYSTEM_ATTRIBUTE;
ENGAPI
BOOL APIENTRY
EngQuerySystemAttribute(
    _In_ ENG_SYSTEM_ATTRIBUTE CapNum,
    _Out_ PDWORD pCapability);
ENGAPI
_Post_writable_byte_size_(*pulSize)
PVOID APIENTRY EngFntCacheLookUp(
    _In_ ULONG FastCheckSum,
    _Out_ ULONG * pulSize);
ENGAPI
BOOL WINAPI EngFntCacheFlush(
    _In_ PVOID OffsetBuffer,
    _In_ BOOL DiscardContent);
ENGAPI
_Post_writable_byte_size_(ulSize)
PVOID APIENTRY EngFntCacheAlloc(
    _In_ ULONG FastCheckSum,
    _In_ ULONG ulSize);
ENGAPI
VOID APIENTRY EngFntCacheFault(
    _In_ ULONG ulFastCheckSum,
    _In_ ULONG iFaultMode);
typedef enum _ENG_DEVICE_ATTRIBUTE {
    QDA_RESERVED = 0,
    QDA_ACCELERATION_LEVEL = 1
} ENG_DEVICE_ATTRIBUTE;
ENGAPI
BOOL APIENTRY
EngQueryDeviceAttribute(
    _In_ HDEV hdev,
    _In_ ENG_DEVICE_ATTRIBUTE devAttr,
    _In_reads_bytes_(ulInSize) VOID * pvIn,
    _In_ ULONG ulInSize,
    _Out_ VOID * pvOut,
    _Out_writes_bytes_(ulOutSize) ULONG ulOutSize);
typedef struct
{
   DWORD nSize;
   HDC hdc;
   PBYTE pvEMF;
   PBYTE pvCurrentRecord;
} EMFINFO, *PEMFINFO;
DECLSPEC_DEPRECATED_DDK
BOOL APIENTRY
EngQueryEMFInfo(
    _In_ HDEV hdev,
    _Out_ EMFINFO *pEMFInfo);
typedef BOOL (APIENTRY *PFN_DrvEnableDriver)(ULONG,ULONG,PDRVENABLEDATA);
typedef DHPDEV (APIENTRY *PFN_DrvEnablePDEV) (PDEVMODEW,LPWSTR,ULONG,HSURF*,ULONG,GDIINFO*,ULONG,PDEVINFO,HDEV,LPWSTR,HANDLE);
typedef VOID (APIENTRY *PFN_DrvCompletePDEV)(DHPDEV,HDEV);
typedef ULONG (APIENTRY *PFN_DrvResetDevice)(DHPDEV,PVOID);
typedef VOID (APIENTRY *PFN_DrvDisablePDEV)(DHPDEV);
typedef VOID (APIENTRY *PFN_DrvSynchronize)(DHPDEV,RECTL *);
typedef HSURF (APIENTRY *PFN_DrvEnableSurface)(DHPDEV);
typedef VOID (APIENTRY *PFN_DrvDisableDriver)(VOID);
typedef VOID (APIENTRY *PFN_DrvDisableSurface)(DHPDEV);
typedef BOOL (APIENTRY *PFN_DrvAssertMode)(DHPDEV, BOOL);
typedef BOOL (APIENTRY *PFN_DrvTextOut)(SURFOBJ *,STROBJ *,FONTOBJ *,CLIPOBJ *,RECTL *,RECTL *,BRUSHOBJ *,BRUSHOBJ *,POINTL *,MIX);
typedef BOOL (APIENTRY *PFN_DrvStretchBlt)(SURFOBJ *,SURFOBJ *,SURFOBJ *,CLIPOBJ *,XLATEOBJ *,COLORADJUSTMENT *,POINTL *,RECTL *,RECTL *,POINTL *,ULONG);
typedef BOOL (APIENTRY *PFN_DrvStretchBltROP)(SURFOBJ *,SURFOBJ *,SURFOBJ *,CLIPOBJ *,XLATEOBJ *,COLORADJUSTMENT *,POINTL *,RECTL *,RECTL *,POINTL *,ULONG, BRUSHOBJ *,ROP4);
typedef BOOL (APIENTRY *PFN_DrvTransparentBlt)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG);
typedef BOOL (APIENTRY *PFN_DrvPlgBlt)(SURFOBJ *,SURFOBJ *,SURFOBJ *,CLIPOBJ *,XLATEOBJ *,COLORADJUSTMENT *,POINTL *,POINTFIX *,RECTL *,POINTL *,ULONG);
typedef BOOL (APIENTRY *PFN_DrvBitBlt)(SURFOBJ *,SURFOBJ *,SURFOBJ *,CLIPOBJ *,XLATEOBJ *,RECTL *,POINTL *,POINTL *,BRUSHOBJ *,POINTL *,ROP4);
typedef BOOL (APIENTRY *PFN_DrvRealizeBrush)(BRUSHOBJ *,SURFOBJ *,SURFOBJ *,SURFOBJ *,XLATEOBJ *,ULONG);
typedef BOOL (APIENTRY *PFN_DrvCopyBits)(SURFOBJ *,SURFOBJ *,CLIPOBJ *,XLATEOBJ *,RECTL *,POINTL *);
typedef ULONG (APIENTRY *PFN_DrvDitherColor)(DHPDEV, ULONG, ULONG, ULONG *);
typedef HBITMAP (APIENTRY *PFN_DrvCreateDeviceBitmap)(DHPDEV, SIZEL, ULONG);
typedef VOID (APIENTRY *PFN_DrvDeleteDeviceBitmap)(DHSURF);
typedef BOOL (APIENTRY *PFN_DrvSetPalette)(DHPDEV, PALOBJ *, FLONG, ULONG, ULONG);
typedef ULONG (APIENTRY *PFN_DrvEscape)(SURFOBJ *, ULONG, ULONG, PVOID, ULONG, PVOID);
typedef ULONG (APIENTRY *PFN_DrvDrawEscape)(SURFOBJ *, ULONG, CLIPOBJ *, RECTL *, ULONG, PVOID);
typedef PIFIMETRICS (APIENTRY *PFN_DrvQueryFont)(DHPDEV, ULONG_PTR, ULONG, ULONG_PTR *);
typedef PVOID (APIENTRY *PFN_DrvQueryFontTree)(DHPDEV, ULONG_PTR, ULONG, ULONG, ULONG_PTR *);
typedef LONG (APIENTRY *PFN_DrvQueryFontData)(DHPDEV, FONTOBJ *, ULONG, HGLYPH, GLYPHDATA *, PVOID, ULONG);
typedef VOID (APIENTRY *PFN_DrvFree)(PVOID, ULONG_PTR);
typedef VOID (APIENTRY *PFN_DrvDestroyFont)(FONTOBJ *);
typedef LONG (APIENTRY *PFN_DrvQueryFontCaps)(ULONG, ULONG *);
typedef HFF (APIENTRY *PFN_DrvLoadFontFile)(ULONG, ULONG_PTR *, PVOID *, ULONG *, DESIGNVECTOR *, ULONG, ULONG);
typedef BOOL (APIENTRY *PFN_DrvUnloadFontFile)(ULONG_PTR);
typedef ULONG (APIENTRY *PFN_DrvSetPointerShape)(SURFOBJ *, SURFOBJ *, SURFOBJ *,XLATEOBJ *,LONG,LONG,LONG,LONG,RECTL *,FLONG);
typedef VOID (APIENTRY *PFN_DrvMovePointer)(SURFOBJ *pso,LONG x,LONG y,RECTL *prcl);
typedef BOOL (APIENTRY *PFN_DrvSendPage)(SURFOBJ *);
typedef BOOL (APIENTRY *PFN_DrvStartPage)(SURFOBJ *pso);
typedef BOOL (APIENTRY *PFN_DrvStartDoc)(SURFOBJ *pso, LPWSTR pwszDocName, DWORD dwJobId);
typedef BOOL (APIENTRY *PFN_DrvEndDoc)(SURFOBJ *pso, FLONG fl);
typedef BOOL (APIENTRY *PFN_DrvQuerySpoolType)(DHPDEV dhpdev, LPWSTR pwchType);
typedef BOOL (APIENTRY *PFN_DrvLineTo)(SURFOBJ *,CLIPOBJ *,BRUSHOBJ *,LONG,LONG,LONG,LONG,RECTL *,MIX);
typedef BOOL (APIENTRY *PFN_DrvStrokePath)(SURFOBJ *,PATHOBJ *,CLIPOBJ *,XFORMOBJ *,BRUSHOBJ *,POINTL *,LINEATTRS *,MIX);
typedef BOOL (APIENTRY *PFN_DrvFillPath)(SURFOBJ *,PATHOBJ *,CLIPOBJ *,BRUSHOBJ *,POINTL *,MIX,FLONG);
typedef BOOL (APIENTRY *PFN_DrvStrokeAndFillPath)(SURFOBJ *,PATHOBJ *,CLIPOBJ *,XFORMOBJ *,BRUSHOBJ *,LINEATTRS *,BRUSHOBJ *,POINTL *,MIX,FLONG);
typedef BOOL (APIENTRY *PFN_DrvPaint)(SURFOBJ *,CLIPOBJ *,BRUSHOBJ *,POINTL *,MIX);
typedef ULONG (APIENTRY *PFN_DrvGetGlyphMode)(DHPDEV dhpdev,FONTOBJ *pfo);
typedef BOOL (APIENTRY *PFN_DrvResetPDEV)(DHPDEV dhpdevOld, DHPDEV dhpdevNew);
typedef ULONG_PTR (APIENTRY *PFN_DrvSaveScreenBits)(SURFOBJ *, ULONG, ULONG_PTR, RECTL *);
typedef ULONG (APIENTRY *PFN_DrvGetModes)(HANDLE, ULONG, DEVMODEW *);
typedef LONG (APIENTRY *PFN_DrvQueryTrueTypeTable)(ULONG_PTR, ULONG, ULONG, PTRDIFF, ULONG, BYTE *, PBYTE *, ULONG *);
typedef LONG (APIENTRY *PFN_DrvQueryTrueTypeSection)(ULONG, ULONG, ULONG, HANDLE *, PTRDIFF *);
typedef LONG (APIENTRY *PFN_DrvQueryTrueTypeOutline)(DHPDEV, FONTOBJ *, HGLYPH, BOOL, GLYPHDATA *, ULONG, TTPOLYGONHEADER *);
typedef PVOID (APIENTRY *PFN_DrvGetTrueTypeFile)(ULONG_PTR, ULONG *);
typedef LONG (APIENTRY *PFN_DrvQueryFontFile)(ULONG_PTR, ULONG, ULONG, ULONG *);
typedef PFD_GLYPHATTR (APIENTRY *PFN_DrvQueryGlyphAttrs)(FONTOBJ *, ULONG );
typedef BOOL (APIENTRY *PFN_DrvQueryAdvanceWidths)(DHPDEV,FONTOBJ *,ULONG,HGLYPH *,PVOID,ULONG);
typedef ULONG (APIENTRY *PFN_DrvFontManagement)(SURFOBJ *,FONTOBJ *,ULONG,ULONG,PVOID,ULONG,PVOID);
typedef BOOL (APIENTRY *PFN_DrvSetPixelFormat)(SURFOBJ *,LONG,HWND);
typedef LONG (APIENTRY *PFN_DrvDescribePixelFormat)(DHPDEV,LONG,ULONG,PIXELFORMATDESCRIPTOR *);
typedef BOOL (APIENTRY *PFN_DrvSwapBuffers)(SURFOBJ *, WNDOBJ *);
typedef BOOL (APIENTRY *PFN_DrvStartBanding)(SURFOBJ *, POINTL *ppointl);
typedef BOOL (APIENTRY *PFN_DrvNextBand)(SURFOBJ *, POINTL *ppointl);
typedef BOOL (APIENTRY *PFN_DrvQueryPerBandInfo)(SURFOBJ *,PERBANDINFO *);
typedef BOOL (APIENTRY *PFN_DrvEnableDirectDraw)(DHPDEV, DD_CALLBACKS *,DD_SURFACECALLBACKS *, DD_PALETTECALLBACKS *);
typedef VOID (APIENTRY *PFN_DrvDisableDirectDraw)(DHPDEV);
typedef BOOL (APIENTRY *PFN_DrvGetDirectDrawInfo)(DHPDEV, DD_HALINFO *, DWORD *, VIDEOMEMORY *, DWORD *, DWORD *);
typedef HANDLE (APIENTRY *PFN_DrvIcmCreateColorTransform)(DHPDEV,LPLOGCOLORSPACEW,LPVOID,ULONG,LPVOID,ULONG,LPVOID,ULONG,DWORD);
typedef BOOL (APIENTRY *PFN_DrvIcmDeleteColorTransform)(DHPDEV,HANDLE);
typedef BOOL (APIENTRY *PFN_DrvIcmCheckBitmapBits)(DHPDEV,HANDLE,SURFOBJ *,PBYTE);
typedef BOOL (APIENTRY *PFN_DrvIcmSetDeviceGammaRamp)(DHPDEV,ULONG,LPVOID);
typedef BOOL (APIENTRY *PFN_DrvAlphaBlend)(SURFOBJ*,SURFOBJ*,CLIPOBJ*,XLATEOBJ*,PRECTL,PRECTL,BLENDOBJ *);
typedef BOOL (APIENTRY *PFN_DrvGradientFill)(SURFOBJ*,CLIPOBJ*,XLATEOBJ*,TRIVERTEX*,ULONG,PVOID,ULONG,RECTL *,POINTL *,ULONG);
typedef BOOL (APIENTRY *PFN_DrvQueryDeviceSupport)(SURFOBJ*,XLATEOBJ*,XFORMOBJ*,ULONG,ULONG,PVOID,ULONG,PVOID);
typedef HBITMAP (APIENTRY *PFN_DrvDeriveSurface)(DD_DIRECTDRAW_GLOBAL*,DD_SURFACE_LOCAL*);
typedef VOID (APIENTRY *PFN_DrvSynchronizeSurface)(SURFOBJ*, RECTL*, FLONG);
typedef VOID (APIENTRY *PFN_DrvNotify)(SURFOBJ*, ULONG, PVOID);
typedef LONG (APIENTRY *PFN_DrvRenderHint)(
    DHPDEV dhpdev,
    ULONG NotifyCode,
    SIZE_T Length,
    _In_reads_bytes_opt_(Length) PVOID Data
    );
typedef struct _DRH_APIBITMAPDATA
{
    SURFOBJ *pso;
    BOOL b;
} DRH_APIBITMAPDATA, *PDRH_APIBITMAPDATA;
typedef HANDLE (APIENTRY *PFN_EngCreateRectRgn)(INT left, INT top, INT right, INT bottom);
typedef VOID (APIENTRY *PFN_EngDeleteRgn)(
    HANDLE hrgn
    );
typedef INT (APIENTRY *PFN_EngCombineRgn)(
    HANDLE hrgnTrg,
    HANDLE hrgnSrc1,
    HANDLE hrgnSrc2,
    int imode
    );
typedef INT (APIENTRY *PFN_EngCopyRgn)(
    HANDLE hrgnDst,
    HANDLE hrgnSrc
    );
typedef INT (APIENTRY *PFN_EngIntersectRgn)(
    HANDLE hrgnResult,
    HANDLE hRgnA,
    HANDLE hRgnB
    );
typedef INT (APIENTRY *PFN_EngSubtractRgn)(
    HANDLE hrgnResult,
    HANDLE hRgnA,
    HANDLE hRgnB
    );
typedef INT (APIENTRY *PFN_EngUnionRgn)(
    HANDLE hrgnResult,
    HANDLE hRgnA,
    HANDLE hRgnB
    );
typedef INT (APIENTRY *PFN_EngXorRgn)(
    HANDLE hrgnResult,
    HANDLE hRgnA,
    HANDLE hRgnB
    );
typedef HBITMAP (APIENTRY *PFN_DrvCreateDeviceBitmapEx)(DHPDEV, SIZEL, ULONG, DWORD, DHSURF, DWORD, DWORD, HANDLE*);
typedef VOID (APIENTRY *PFN_DrvDeleteDeviceBitmapEx)(DHSURF);
typedef BOOL (APIENTRY *PFN_DrvAssociateSharedSurface)(SURFOBJ*, HANDLE, HANDLE, SIZEL);
typedef NTSTATUS (APIENTRY *PFN_DrvSynchronizeRedirectionBitmaps)(DHPDEV, UINT64*);
typedef BOOL (APIENTRY *PFN_DrvAccumulateD3DDirtyRect)(SURFOBJ*, CDDDXGK_REDIRBITMAPPRESENTINFO*);
typedef BOOL (APIENTRY *PFN_DrvStartDxInterop)(SURFOBJ*, BOOL, PVOID KernelModeDeviceHandle);
typedef BOOL (APIENTRY *PFN_DrvEndDxInterop)(SURFOBJ*, BOOL, BOOL*, PVOID KernelModeDeviceHandle);
typedef VOID (APIENTRY *PFN_DrvLockDisplayArea)(DHPDEV, RECTL*);
typedef VOID (APIENTRY *PFN_DrvUnlockDisplayArea)(DHPDEV, RECTL*);
typedef BOOL (APIENTRY *PFN_DrvSurfaceComplete)(DHPDEV, HANDLE);
}
#endif
#pragma endregion
