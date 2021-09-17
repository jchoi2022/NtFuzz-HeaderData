#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _UNIFM_HDR
{
    DWORD dwSize;
    DWORD dwVersion;
    ULONG ulDefaultCodepage;
    LONG lGlyphSetDataRCID;
    DWORD loUnidrvInfo;
    DWORD loIFIMetrics;
    DWORD loExtTextMetric;
    DWORD loWidthTable;
    DWORD loKernPair;
    DWORD dwReserved[2];
} UNIFM_HDR, *PUNIFM_HDR;
        ((PUNIDRVINFO)((PBYTE)(pUFM) + (pUFM)->loUnidrvInfo))
        ((PPRINTIFI32)((PBYTE)(pUFM) + (pUFM)->loIFIMetrics))
        ((EXTTEXTMETRIC*)((PBYTE)(pUFM) + (pUFM)->loExtTextMetric))
        ((PWIDTHTABLE)((PBYTE)(pUFM) + (pUFM)->loWidthTable))
        ((PKERNDATA)((PBYTE)(pUFM) + (pUFM)->loKernPair))
        ((IFIMETRICS*)((PBYTE)(pUFM) + (pUFM)->loIFIMetrics))
typedef struct _INVOC {
        DWORD dwCount;
        DWORD loOffset;
} INVOC, *PINVOC;
typedef struct _UNIDRVINFO
{
    DWORD dwSize;
    DWORD flGenFlags;
    WORD wType;
    WORD fCaps;
    WORD wXRes;
    WORD wYRes;
    short sYAdjust;
    short sYMoved;
    WORD wPrivateData;
    short sShift;
    INVOC SelectFont;
    INVOC UnSelectFont;
    WORD wReserved[4];
} UNIDRVINFO, *PUNIDRVINFO;
        ((PCHAR)(pUni) + (pUni)->SelectFont.loOffset)
        ((PCHAR)(pUni) + (pUni)->UnSelectFont.loOffset)
typedef struct _PRINTIFI32 {
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
} PRINTIFI32, *PPRINTIFI32;
typedef struct _EXTTEXTMETRIC
    {
    short emSize;
    short emPointSize;
    short emOrientation;
    short emMasterHeight;
    short emMinScale;
    short emMaxScale;
    short emMasterUnits;
    short emCapHeight;
    short emXHeight;
    short emLowerCaseAscent;
    short emLowerCaseDescent;
    short emSlant;
    short emSuperScript;
    short emSubScript;
    short emSuperScriptSize;
    short emSubScriptSize;
    short emUnderlineOffset;
    short emUnderlineWidth;
    short emDoubleUpperUnderlineOffset;
    short emDoubleLowerUnderlineOffset;
    short emDoubleUpperUnderlineWidth;
    short emDoubleLowerUnderlineWidth;
    short emStrikeOutOffset;
    short emStrikeOutWidth;
    WORD emKernPairs;
    WORD emKernTracks;
} EXTTEXTMETRIC, *PEXTTEXTMETRIC;
typedef struct _WIDTHRUN
{
    WORD wStartGlyph;
    WORD wGlyphCount;
    DWORD loCharWidthOffset;
} WIDTHRUN, *PWIDTHRUN;
typedef struct _WIDTHTABLE
{
    DWORD dwSize;
    DWORD dwRunNum;
    WIDTHRUN WidthRun[1];
} WIDTHTABLE, *PWIDTHTABLE;
typedef struct _KERNDATA
{
    DWORD dwSize;
    DWORD dwKernPairNum;
    FD_KERNINGPAIR KernPair[1];
} KERNDATA, *PKERNDATA;
typedef struct _UNI_GLYPHSETDATA {
        DWORD dwSize;
        DWORD dwVersion;
        DWORD dwFlags;
        LONG lPredefinedID;
        DWORD dwGlyphCount;
        DWORD dwRunCount;
        DWORD loRunOffset;
        DWORD dwCodePageCount;
        DWORD loCodePageOffset;
        DWORD loMapTableOffset;
        DWORD dwReserved[2];
} UNI_GLYPHSETDATA, *PUNI_GLYPHSETDATA;
    ((PGLYPHRUN) ((PBYTE)(pGTT) + ((PUNI_GLYPHSETDATA)pGTT)->loRunOffset))
    ((PUNI_CODEPAGEINFO) ((PBYTE)(pGTT) + ((PUNI_GLYPHSETDATA)pGTT)->loCodePageOffset))
    ((PMAPTABLE) ((PBYTE)(pGTT) + ((PUNI_GLYPHSETDATA)pGTT)->loMapTableOffset))
typedef struct _UNI_CODEPAGEINFO {
    DWORD dwCodePage;
    INVOC SelectSymbolSet;
    INVOC UnSelectSymbolSet;
} UNI_CODEPAGEINFO, *PUNI_CODEPAGEINFO;
typedef struct _GLYPHRUN {
    WCHAR wcLow;
    WORD wGlyphCount;
} GLYPHRUN, *PGLYPHRUN;
typedef struct _TRANSDATA {
    BYTE ubCodePageID;
    BYTE ubType;
    union
    {
        SHORT sCode;
        BYTE ubCode;
        BYTE ubPairs[2];
    } uCode;
} TRANSDATA, *PTRANSDATA;
typedef struct _MAPTABLE {
    DWORD dwSize;
    DWORD dwGlyphNum;
    TRANSDATA Trans[1];
} MAPTABLE, *PMAPTABLE;
typedef struct _UFF_FILEHEADER {
    DWORD dwSignature;
    DWORD dwVersion;
    DWORD dwSize;
    DWORD nFonts;
    DWORD nGlyphSets;
    DWORD nVarData;
    DWORD offFontDir;
    DWORD dwFlags;
    DWORD dwReserved[4];
} UFF_FILEHEADER, *PUFF_FILEHEADER;
typedef struct _UFF_FONTDIRECTORY {
    DWORD dwSignature;
    WORD wSize;
    WORD wFontID;
    SHORT sGlyphID;
    WORD wFlags;
    DWORD dwInstallerSig;
    DWORD offFontName;
    DWORD offCartridgeName;
    DWORD offFontData;
    DWORD offGlyphData;
    DWORD offVarData;
} UFF_FONTDIRECTORY, *PUFF_FONTDIRECTORY;
typedef struct _DATA_HEADER {
    DWORD dwSignature;
    WORD wSize;
    WORD wDataID;
    DWORD dwDataSize;
    DWORD dwReserved;
} DATA_HEADER, *PDATA_HEADER;
typedef struct _OEMFONTINSTPARAM {
    DWORD cbSize;
    HANDLE hPrinter;
    HANDLE hModule;
    HANDLE hHeap;
    DWORD dwFlags;
    PWSTR pFontInstallerName;
} OEMFONTINSTPARAM, *POEMFONTINSTPARAM;
#endif
#pragma endregion
