#include <winapifamily.h>
       
#include <macwin32.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _DRAWPATRECT {
        POINT ptPosition;
        POINT ptSize;
        WORD wStyle;
        WORD wPattern;
} DRAWPATRECT, *PDRAWPATRECT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _PSINJECTDATA {
    DWORD DataBytes;
    WORD InjectionPoint;
    WORD PageNumber;
} PSINJECTDATA, *PPSINJECTDATA;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _PSFEATURE_OUTPUT {
    BOOL bPageIndependent;
    BOOL bSetPageDevice;
} PSFEATURE_OUTPUT, *PPSFEATURE_OUTPUT;
typedef struct _PSFEATURE_CUSTPAPER {
    LONG lOrientation;
    LONG lWidth;
    LONG lHeight;
    LONG lWidthOffset;
    LONG lHeightOffset;
} PSFEATURE_CUSTPAPER, *PPSFEATURE_CUSTPAPER;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagXFORM
  {
    FLOAT eM11;
    FLOAT eM12;
    FLOAT eM21;
    FLOAT eM22;
    FLOAT eDx;
    FLOAT eDy;
  } XFORM, *PXFORM, FAR *LPXFORM;
typedef struct tagBITMAP
  {
    LONG bmType;
    LONG bmWidth;
    LONG bmHeight;
    LONG bmWidthBytes;
    WORD bmPlanes;
    WORD bmBitsPixel;
    LPVOID bmBits;
  } BITMAP, *PBITMAP, NEAR *NPBITMAP, FAR *LPBITMAP;
#endif
#pragma endregion
#include <pshpack1.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagRGBTRIPLE {
        BYTE rgbtBlue;
        BYTE rgbtGreen;
        BYTE rgbtRed;
} RGBTRIPLE, *PRGBTRIPLE, NEAR *NPRGBTRIPLE, FAR *LPRGBTRIPLE;
#endif
#pragma endregion
#include <poppack.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagRGBQUAD {
        BYTE rgbBlue;
        BYTE rgbGreen;
        BYTE rgbRed;
        BYTE rgbReserved;
} RGBQUAD;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef RGBQUAD FAR* LPRGBQUAD;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef LONG LCSCSTYPE;
typedef LONG LCSGAMUTMATCH;
typedef long FXPT16DOT16, FAR *LPFXPT16DOT16;
typedef long FXPT2DOT30, FAR *LPFXPT2DOT30;
typedef struct tagCIEXYZ
{
        FXPT2DOT30 ciexyzX;
        FXPT2DOT30 ciexyzY;
        FXPT2DOT30 ciexyzZ;
} CIEXYZ;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef CIEXYZ FAR *LPCIEXYZ;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagICEXYZTRIPLE
{
        CIEXYZ ciexyzRed;
        CIEXYZ ciexyzGreen;
        CIEXYZ ciexyzBlue;
} CIEXYZTRIPLE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef CIEXYZTRIPLE FAR *LPCIEXYZTRIPLE;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagLOGCOLORSPACEA {
    DWORD lcsSignature;
    DWORD lcsVersion;
    DWORD lcsSize;
    LCSCSTYPE lcsCSType;
    LCSGAMUTMATCH lcsIntent;
    CIEXYZTRIPLE lcsEndpoints;
    DWORD lcsGammaRed;
    DWORD lcsGammaGreen;
    DWORD lcsGammaBlue;
    CHAR lcsFilename[MAX_PATH];
} LOGCOLORSPACEA, *LPLOGCOLORSPACEA;
typedef struct tagLOGCOLORSPACEW {
    DWORD lcsSignature;
    DWORD lcsVersion;
    DWORD lcsSize;
    LCSCSTYPE lcsCSType;
    LCSGAMUTMATCH lcsIntent;
    CIEXYZTRIPLE lcsEndpoints;
    DWORD lcsGammaRed;
    DWORD lcsGammaGreen;
    DWORD lcsGammaBlue;
    WCHAR lcsFilename[MAX_PATH];
} LOGCOLORSPACEW, *LPLOGCOLORSPACEW;
typedef LOGCOLORSPACEW LOGCOLORSPACE;
typedef LPLOGCOLORSPACEW LPLOGCOLORSPACE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagBITMAPCOREHEADER {
        DWORD bcSize;
        WORD bcWidth;
        WORD bcHeight;
        WORD bcPlanes;
        WORD bcBitCount;
} BITMAPCOREHEADER, FAR *LPBITMAPCOREHEADER, *PBITMAPCOREHEADER;
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef struct tagBITMAPINFOHEADER{
        DWORD biSize;
        LONG biWidth;
        LONG biHeight;
        WORD biPlanes;
        WORD biBitCount;
        DWORD biCompression;
        DWORD biSizeImage;
        LONG biXPelsPerMeter;
        LONG biYPelsPerMeter;
        DWORD biClrUsed;
        DWORD biClrImportant;
} BITMAPINFOHEADER, FAR *LPBITMAPINFOHEADER, *PBITMAPINFOHEADER;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct {
        DWORD bV4Size;
        LONG bV4Width;
        LONG bV4Height;
        WORD bV4Planes;
        WORD bV4BitCount;
        DWORD bV4V4Compression;
        DWORD bV4SizeImage;
        LONG bV4XPelsPerMeter;
        LONG bV4YPelsPerMeter;
        DWORD bV4ClrUsed;
        DWORD bV4ClrImportant;
        DWORD bV4RedMask;
        DWORD bV4GreenMask;
        DWORD bV4BlueMask;
        DWORD bV4AlphaMask;
        DWORD bV4CSType;
        CIEXYZTRIPLE bV4Endpoints;
        DWORD bV4GammaRed;
        DWORD bV4GammaGreen;
        DWORD bV4GammaBlue;
} BITMAPV4HEADER, FAR *LPBITMAPV4HEADER, *PBITMAPV4HEADER;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct {
        DWORD bV5Size;
        LONG bV5Width;
        LONG bV5Height;
        WORD bV5Planes;
        WORD bV5BitCount;
        DWORD bV5Compression;
        DWORD bV5SizeImage;
        LONG bV5XPelsPerMeter;
        LONG bV5YPelsPerMeter;
        DWORD bV5ClrUsed;
        DWORD bV5ClrImportant;
        DWORD bV5RedMask;
        DWORD bV5GreenMask;
        DWORD bV5BlueMask;
        DWORD bV5AlphaMask;
        DWORD bV5CSType;
        CIEXYZTRIPLE bV5Endpoints;
        DWORD bV5GammaRed;
        DWORD bV5GammaGreen;
        DWORD bV5GammaBlue;
        DWORD bV5Intent;
        DWORD bV5ProfileData;
        DWORD bV5ProfileSize;
        DWORD bV5Reserved;
} BITMAPV5HEADER, FAR *LPBITMAPV5HEADER, *PBITMAPV5HEADER;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
} BITMAPINFO, FAR *LPBITMAPINFO, *PBITMAPINFO;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagBITMAPCOREINFO {
    BITMAPCOREHEADER bmciHeader;
    RGBTRIPLE bmciColors[1];
} BITMAPCOREINFO, FAR *LPBITMAPCOREINFO, *PBITMAPCOREINFO;
#endif
#pragma endregion
#include <pshpack2.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagBITMAPFILEHEADER {
        WORD bfType;
        DWORD bfSize;
        WORD bfReserved1;
        WORD bfReserved2;
        DWORD bfOffBits;
} BITMAPFILEHEADER, FAR *LPBITMAPFILEHEADER, *PBITMAPFILEHEADER;
#endif
#pragma endregion
#include <poppack.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagFONTSIGNATURE
{
    DWORD fsUsb[4];
    DWORD fsCsb[2];
} FONTSIGNATURE, *PFONTSIGNATURE,FAR *LPFONTSIGNATURE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagCHARSETINFO
{
    UINT ciCharset;
    UINT ciACP;
    FONTSIGNATURE fs;
} CHARSETINFO, *PCHARSETINFO, NEAR *NPCHARSETINFO, FAR *LPCHARSETINFO;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagLOCALESIGNATURE
{
    DWORD lsUsb[4];
    DWORD lsCsbDefault[2];
    DWORD lsCsbSupported[2];
} LOCALESIGNATURE, *PLOCALESIGNATURE,FAR *LPLOCALESIGNATURE;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagHANDLETABLE
  {
    HGDIOBJ objectHandle[1];
  } HANDLETABLE, *PHANDLETABLE, FAR *LPHANDLETABLE;
typedef struct tagMETARECORD
  {
    DWORD rdSize;
    WORD rdFunction;
    WORD rdParm[1];
  } METARECORD;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagMETARECORD UNALIGNED *PMETARECORD;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagMETARECORD UNALIGNED FAR *LPMETARECORD;
typedef struct tagMETAFILEPICT
  {
    LONG mm;
    LONG xExt;
    LONG yExt;
    HMETAFILE hMF;
  } METAFILEPICT, FAR *LPMETAFILEPICT;
#endif
#pragma endregion
#include <pshpack2.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagMETAHEADER
{
    WORD mtType;
    WORD mtHeaderSize;
    WORD mtVersion;
    DWORD mtSize;
    WORD mtNoObjects;
    DWORD mtMaxRecord;
    WORD mtNoParameters;
} METAHEADER;
typedef struct tagMETAHEADER UNALIGNED *PMETAHEADER;
typedef struct tagMETAHEADER UNALIGNED FAR *LPMETAHEADER;
#endif
#pragma endregion
#include <poppack.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagENHMETARECORD
{
    DWORD iType;
    DWORD nSize;
    DWORD dParm[1];
} ENHMETARECORD, *PENHMETARECORD, *LPENHMETARECORD;
typedef struct tagENHMETAHEADER
{
    DWORD iType;
    DWORD nSize;
    RECTL rclBounds;
    RECTL rclFrame;
    DWORD dSignature;
    DWORD nVersion;
    DWORD nBytes;
    DWORD nRecords;
    WORD nHandles;
    WORD sReserved;
    DWORD nDescription;
    DWORD offDescription;
    DWORD nPalEntries;
    SIZEL szlDevice;
    SIZEL szlMillimeters;
    DWORD cbPixelFormat;
    DWORD offPixelFormat;
    DWORD bOpenGL;
    SIZEL szlMicrometers;
} ENHMETAHEADER, *PENHMETAHEADER, *LPENHMETAHEADER;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
    typedef WCHAR BCHAR;
#endif
#pragma endregion
#include <pshpack4.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagTEXTMETRICA
{
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    BYTE tmFirstChar;
    BYTE tmLastChar;
    BYTE tmDefaultChar;
    BYTE tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
} TEXTMETRICA, *PTEXTMETRICA, NEAR *NPTEXTMETRICA, FAR *LPTEXTMETRICA;
typedef struct tagTEXTMETRICW
{
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    WCHAR tmFirstChar;
    WCHAR tmLastChar;
    WCHAR tmDefaultChar;
    WCHAR tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
} TEXTMETRICW, *PTEXTMETRICW, NEAR *NPTEXTMETRICW, FAR *LPTEXTMETRICW;
typedef TEXTMETRICW TEXTMETRIC;
typedef PTEXTMETRICW PTEXTMETRIC;
typedef NPTEXTMETRICW NPTEXTMETRIC;
typedef LPTEXTMETRICW LPTEXTMETRIC;
#endif
#pragma endregion
#include <poppack.h>
#include <pshpack4.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagNEWTEXTMETRICA
{
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    BYTE tmFirstChar;
    BYTE tmLastChar;
    BYTE tmDefaultChar;
    BYTE tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
    DWORD ntmFlags;
    UINT ntmSizeEM;
    UINT ntmCellHeight;
    UINT ntmAvgWidth;
} NEWTEXTMETRICA, *PNEWTEXTMETRICA, NEAR *NPNEWTEXTMETRICA, FAR *LPNEWTEXTMETRICA;
typedef struct tagNEWTEXTMETRICW
{
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    WCHAR tmFirstChar;
    WCHAR tmLastChar;
    WCHAR tmDefaultChar;
    WCHAR tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
    DWORD ntmFlags;
    UINT ntmSizeEM;
    UINT ntmCellHeight;
    UINT ntmAvgWidth;
} NEWTEXTMETRICW, *PNEWTEXTMETRICW, NEAR *NPNEWTEXTMETRICW, FAR *LPNEWTEXTMETRICW;
typedef NEWTEXTMETRICW NEWTEXTMETRIC;
typedef PNEWTEXTMETRICW PNEWTEXTMETRIC;
typedef NPNEWTEXTMETRICW NPNEWTEXTMETRIC;
typedef LPNEWTEXTMETRICW LPNEWTEXTMETRIC;
#endif
#pragma endregion
#include <poppack.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagNEWTEXTMETRICEXA
{
    NEWTEXTMETRICA ntmTm;
    FONTSIGNATURE ntmFontSig;
}NEWTEXTMETRICEXA;
typedef struct tagNEWTEXTMETRICEXW
{
    NEWTEXTMETRICW ntmTm;
    FONTSIGNATURE ntmFontSig;
}NEWTEXTMETRICEXW;
typedef NEWTEXTMETRICEXW NEWTEXTMETRICEX;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagPELARRAY
  {
    LONG paXCount;
    LONG paYCount;
    LONG paXExt;
    LONG paYExt;
    BYTE paRGBs;
  } PELARRAY, *PPELARRAY, NEAR *NPPELARRAY, FAR *LPPELARRAY;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagLOGBRUSH
  {
    UINT lbStyle;
    COLORREF lbColor;
    ULONG_PTR lbHatch;
  } LOGBRUSH, *PLOGBRUSH, NEAR *NPLOGBRUSH, FAR *LPLOGBRUSH;
typedef struct tagLOGBRUSH32
  {
    UINT lbStyle;
    COLORREF lbColor;
    ULONG lbHatch;
  } LOGBRUSH32, *PLOGBRUSH32, NEAR *NPLOGBRUSH32, FAR *LPLOGBRUSH32;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef LOGBRUSH PATTERN;
typedef PATTERN *PPATTERN;
typedef PATTERN NEAR *NPPATTERN;
typedef PATTERN FAR *LPPATTERN;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagLOGPEN
  {
    UINT lopnStyle;
    POINT lopnWidth;
    COLORREF lopnColor;
  } LOGPEN, *PLOGPEN, NEAR *NPLOGPEN, FAR *LPLOGPEN;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagEXTLOGPEN {
    DWORD elpPenStyle;
    DWORD elpWidth;
    UINT elpBrushStyle;
    COLORREF elpColor;
    ULONG_PTR elpHatch;
    DWORD elpNumEntries;
    DWORD elpStyleEntry[1];
} EXTLOGPEN, *PEXTLOGPEN, NEAR *NPEXTLOGPEN, FAR *LPEXTLOGPEN;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagEXTLOGPEN32 {
    DWORD elpPenStyle;
    DWORD elpWidth;
    UINT elpBrushStyle;
    COLORREF elpColor;
    ULONG elpHatch;
    DWORD elpNumEntries;
    DWORD elpStyleEntry[1];
} EXTLOGPEN32, *PEXTLOGPEN32, NEAR *NPEXTLOGPEN32, FAR *LPEXTLOGPEN32;
typedef struct tagPALETTEENTRY {
    BYTE peRed;
    BYTE peGreen;
    BYTE peBlue;
    BYTE peFlags;
} PALETTEENTRY, *PPALETTEENTRY, FAR *LPPALETTEENTRY;
typedef struct tagLOGPALETTE {
    WORD palVersion;
    WORD palNumEntries;
    _Field_size_opt_(palNumEntries) PALETTEENTRY palPalEntry[1];
} LOGPALETTE, *PLOGPALETTE, NEAR *NPLOGPALETTE, FAR *LPLOGPALETTE;
typedef struct tagLOGFONTA
{
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    CHAR lfFaceName[LF_FACESIZE];
} LOGFONTA, *PLOGFONTA, NEAR *NPLOGFONTA, FAR *LPLOGFONTA;
typedef struct tagLOGFONTW
{
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    WCHAR lfFaceName[LF_FACESIZE];
} LOGFONTW, *PLOGFONTW, NEAR *NPLOGFONTW, FAR *LPLOGFONTW;
typedef LOGFONTW LOGFONT;
typedef PLOGFONTW PLOGFONT;
typedef NPLOGFONTW NPLOGFONT;
typedef LPLOGFONTW LPLOGFONT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagENUMLOGFONTA
{
    LOGFONTA elfLogFont;
    BYTE elfFullName[LF_FULLFACESIZE];
    BYTE elfStyle[LF_FACESIZE];
} ENUMLOGFONTA, FAR* LPENUMLOGFONTA;
typedef struct tagENUMLOGFONTW
{
    LOGFONTW elfLogFont;
    WCHAR elfFullName[LF_FULLFACESIZE];
    WCHAR elfStyle[LF_FACESIZE];
} ENUMLOGFONTW, FAR* LPENUMLOGFONTW;
typedef ENUMLOGFONTW ENUMLOGFONT;
typedef LPENUMLOGFONTW LPENUMLOGFONT;
typedef struct tagENUMLOGFONTEXA
{
    LOGFONTA elfLogFont;
    BYTE elfFullName[LF_FULLFACESIZE];
    BYTE elfStyle[LF_FACESIZE];
    BYTE elfScript[LF_FACESIZE];
} ENUMLOGFONTEXA, FAR *LPENUMLOGFONTEXA;
typedef struct tagENUMLOGFONTEXW
{
    LOGFONTW elfLogFont;
    WCHAR elfFullName[LF_FULLFACESIZE];
    WCHAR elfStyle[LF_FACESIZE];
    WCHAR elfScript[LF_FACESIZE];
} ENUMLOGFONTEXW, FAR *LPENUMLOGFONTEXW;
typedef ENUMLOGFONTEXW ENUMLOGFONTEX;
typedef LPENUMLOGFONTEXW LPENUMLOGFONTEX;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagPANOSE
{
    BYTE bFamilyType;
    BYTE bSerifStyle;
    BYTE bWeight;
    BYTE bProportion;
    BYTE bContrast;
    BYTE bStrokeVariation;
    BYTE bArmStyle;
    BYTE bLetterform;
    BYTE bMidline;
    BYTE bXHeight;
} PANOSE, * LPPANOSE;
typedef struct tagEXTLOGFONTA {
    LOGFONTA elfLogFont;
    BYTE elfFullName[LF_FULLFACESIZE];
    BYTE elfStyle[LF_FACESIZE];
    DWORD elfVersion;
    DWORD elfStyleSize;
    DWORD elfMatch;
    DWORD elfReserved;
    BYTE elfVendorId[ELF_VENDOR_SIZE];
    DWORD elfCulture;
    PANOSE elfPanose;
} EXTLOGFONTA, *PEXTLOGFONTA, NEAR *NPEXTLOGFONTA, FAR *LPEXTLOGFONTA;
typedef struct tagEXTLOGFONTW {
    LOGFONTW elfLogFont;
    WCHAR elfFullName[LF_FULLFACESIZE];
    WCHAR elfStyle[LF_FACESIZE];
    DWORD elfVersion;
    DWORD elfStyleSize;
    DWORD elfMatch;
    DWORD elfReserved;
    BYTE elfVendorId[ELF_VENDOR_SIZE];
    DWORD elfCulture;
    PANOSE elfPanose;
} EXTLOGFONTW, *PEXTLOGFONTW, NEAR *NPEXTLOGFONTW, FAR *LPEXTLOGFONTW;
typedef EXTLOGFONTW EXTLOGFONT;
typedef PEXTLOGFONTW PEXTLOGFONT;
typedef NPEXTLOGFONTW NPEXTLOGFONT;
typedef LPEXTLOGFONTW LPEXTLOGFONT;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#if (_WIN32_WINNT >= ((OSVER(NTDDI_WINXPSP2)) >> 16))
typedef struct _devicemodeA {
    BYTE dmDeviceName[CCHDEVICENAME];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union {
      struct {
        short dmOrientation;
        short dmPaperSize;
        short dmPaperLength;
        short dmPaperWidth;
        short dmScale;
        short dmCopies;
        short dmDefaultSource;
        short dmPrintQuality;
      } DUMMYSTRUCTNAME;
      struct {
        POINTL dmPosition;
        DWORD dmDisplayOrientation;
        DWORD dmDisplayFixedOutput;
      } DUMMYSTRUCTNAME2;
    } DUMMYUNIONNAME;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    BYTE dmFormName[CCHFORMNAME];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union {
        DWORD dmDisplayFlags;
        DWORD dmNup;
    } DUMMYUNIONNAME2;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
} DEVMODEA, *PDEVMODEA, *NPDEVMODEA, *LPDEVMODEA;
typedef struct _devicemodeW {
    WCHAR dmDeviceName[CCHDEVICENAME];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union {
      struct {
        short dmOrientation;
        short dmPaperSize;
        short dmPaperLength;
        short dmPaperWidth;
        short dmScale;
        short dmCopies;
        short dmDefaultSource;
        short dmPrintQuality;
      } DUMMYSTRUCTNAME;
      struct {
        POINTL dmPosition;
        DWORD dmDisplayOrientation;
        DWORD dmDisplayFixedOutput;
      } DUMMYSTRUCTNAME2;
    } DUMMYUNIONNAME;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    WCHAR dmFormName[CCHFORMNAME];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union {
        DWORD dmDisplayFlags;
        DWORD dmNup;
    } DUMMYUNIONNAME2;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
} DEVMODEW, *PDEVMODEW, *NPDEVMODEW, *LPDEVMODEW;
typedef DEVMODEW DEVMODE;
typedef PDEVMODEW PDEVMODE;
typedef NPDEVMODEW NPDEVMODE;
typedef LPDEVMODEW LPDEVMODE;
#else
typedef struct _devicemodeA {
    BYTE dmDeviceName[CCHDEVICENAME];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union {
      struct {
        short dmOrientation;
        short dmPaperSize;
        short dmPaperLength;
        short dmPaperWidth;
      } DUMMYSTRUCTNAME;
      POINTL dmPosition;
    } DUMMYUNIONNAME;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    BYTE dmFormName[CCHFORMNAME];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union {
        DWORD dmDisplayFlags;
        DWORD dmNup;
    } DUMMYUNIONNAME2;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
} DEVMODEA, *PDEVMODEA, *NPDEVMODEA, *LPDEVMODEA;
typedef struct _devicemodeW {
    WCHAR dmDeviceName[CCHDEVICENAME];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union {
      struct {
        short dmOrientation;
        short dmPaperSize;
        short dmPaperLength;
        short dmPaperWidth;
      } DUMMYSTRUCTNAME;
      POINTL dmPosition;
    } DUMMYUNIONNAME;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    WCHAR dmFormName[CCHFORMNAME];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union {
        DWORD dmDisplayFlags;
        DWORD dmNup;
    } DUMMYUNIONNAME2;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
} DEVMODEW, *PDEVMODEW, *NPDEVMODEW, *LPDEVMODEW;
typedef DEVMODEW DEVMODE;
typedef PDEVMODEW PDEVMODE;
typedef NPDEVMODEW NPDEVMODE;
typedef LPDEVMODEW LPDEVMODE;
#endif
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct _DISPLAY_DEVICEA {
    DWORD cb;
    CHAR DeviceName[32];
    CHAR DeviceString[128];
    DWORD StateFlags;
    CHAR DeviceID[128];
    CHAR DeviceKey[128];
} DISPLAY_DEVICEA, *PDISPLAY_DEVICEA, *LPDISPLAY_DEVICEA;
typedef struct _DISPLAY_DEVICEW {
    DWORD cb;
    WCHAR DeviceName[32];
    WCHAR DeviceString[128];
    DWORD StateFlags;
    WCHAR DeviceID[128];
    WCHAR DeviceKey[128];
} DISPLAY_DEVICEW, *PDISPLAY_DEVICEW, *LPDISPLAY_DEVICEW;
typedef DISPLAY_DEVICEW DISPLAY_DEVICE;
typedef PDISPLAY_DEVICEW PDISPLAY_DEVICE;
typedef LPDISPLAY_DEVICEW LPDISPLAY_DEVICE;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct DISPLAYCONFIG_RATIONAL
{
    UINT32 Numerator;
    UINT32 Denominator;
} DISPLAYCONFIG_RATIONAL;
typedef enum
{
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_OTHER = -1,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_HD15 = 0,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_SVIDEO = 1,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_COMPOSITE_VIDEO = 2,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_COMPONENT_VIDEO = 3,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_DVI = 4,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_HDMI = 5,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_LVDS = 6,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_D_JPN = 8,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_SDI = 9,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_DISPLAYPORT_EXTERNAL = 10,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_DISPLAYPORT_EMBEDDED = 11,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_UDI_EXTERNAL = 12,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_UDI_EMBEDDED = 13,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_SDTVDONGLE = 14,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_MIRACAST = 15,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_INDIRECT_WIRED = 16,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_INDIRECT_VIRTUAL = 17,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_INTERNAL = 0x80000000,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_FORCE_UINT32 = 0xFFFFFFFF
} DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY;
typedef enum
{
    DISPLAYCONFIG_SCANLINE_ORDERING_UNSPECIFIED = 0,
    DISPLAYCONFIG_SCANLINE_ORDERING_PROGRESSIVE = 1,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED = 2,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_UPPERFIELDFIRST = DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_LOWERFIELDFIRST = 3,
    DISPLAYCONFIG_SCANLINE_ORDERING_FORCE_UINT32 = 0xFFFFFFFF
} DISPLAYCONFIG_SCANLINE_ORDERING;
typedef struct DISPLAYCONFIG_2DREGION
{
    UINT32 cx;
    UINT32 cy;
} DISPLAYCONFIG_2DREGION;
typedef struct DISPLAYCONFIG_VIDEO_SIGNAL_INFO
{
    UINT64 pixelRate;
    DISPLAYCONFIG_RATIONAL hSyncFreq;
    DISPLAYCONFIG_RATIONAL vSyncFreq;
    DISPLAYCONFIG_2DREGION activeSize;
    DISPLAYCONFIG_2DREGION totalSize;
    union
    {
        struct
        {
            UINT32 videoStandard : 16;
            UINT32 vSyncFreqDivider : 6;
            UINT32 reserved : 10;
        } AdditionalSignalInfo;
        UINT32 videoStandard;
    } DUMMYUNIONNAME;
    DISPLAYCONFIG_SCANLINE_ORDERING scanLineOrdering;
} DISPLAYCONFIG_VIDEO_SIGNAL_INFO;
typedef enum
{
    DISPLAYCONFIG_SCALING_IDENTITY = 1,
    DISPLAYCONFIG_SCALING_CENTERED = 2,
    DISPLAYCONFIG_SCALING_STRETCHED = 3,
    DISPLAYCONFIG_SCALING_ASPECTRATIOCENTEREDMAX = 4,
    DISPLAYCONFIG_SCALING_CUSTOM = 5,
    DISPLAYCONFIG_SCALING_PREFERRED = 128,
    DISPLAYCONFIG_SCALING_FORCE_UINT32 = 0xFFFFFFFF
} DISPLAYCONFIG_SCALING;
typedef enum
{
    DISPLAYCONFIG_ROTATION_IDENTITY = 1,
    DISPLAYCONFIG_ROTATION_ROTATE90 = 2,
    DISPLAYCONFIG_ROTATION_ROTATE180 = 3,
    DISPLAYCONFIG_ROTATION_ROTATE270 = 4,
    DISPLAYCONFIG_ROTATION_FORCE_UINT32 = 0xFFFFFFFF
} DISPLAYCONFIG_ROTATION;
typedef enum
{
    DISPLAYCONFIG_MODE_INFO_TYPE_SOURCE = 1,
    DISPLAYCONFIG_MODE_INFO_TYPE_TARGET = 2,
    DISPLAYCONFIG_MODE_INFO_TYPE_DESKTOP_IMAGE = 3,
    DISPLAYCONFIG_MODE_INFO_TYPE_FORCE_UINT32 = 0xFFFFFFFF
} DISPLAYCONFIG_MODE_INFO_TYPE;
typedef enum
{
    DISPLAYCONFIG_PIXELFORMAT_8BPP = 1,
    DISPLAYCONFIG_PIXELFORMAT_16BPP = 2,
    DISPLAYCONFIG_PIXELFORMAT_24BPP = 3,
    DISPLAYCONFIG_PIXELFORMAT_32BPP = 4,
    DISPLAYCONFIG_PIXELFORMAT_NONGDI = 5,
    DISPLAYCONFIG_PIXELFORMAT_FORCE_UINT32 = 0xffffffff
} DISPLAYCONFIG_PIXELFORMAT;
typedef struct DISPLAYCONFIG_SOURCE_MODE
{
    UINT32 width;
    UINT32 height;
    DISPLAYCONFIG_PIXELFORMAT pixelFormat;
    POINTL position;
} DISPLAYCONFIG_SOURCE_MODE;
typedef struct DISPLAYCONFIG_TARGET_MODE
{
    DISPLAYCONFIG_VIDEO_SIGNAL_INFO targetVideoSignalInfo;
} DISPLAYCONFIG_TARGET_MODE;
typedef struct DISPLAYCONFIG_DESKTOP_IMAGE_INFO
{
    POINTL PathSourceSize;
    RECTL DesktopImageRegion;
    RECTL DesktopImageClip;
} DISPLAYCONFIG_DESKTOP_IMAGE_INFO;
typedef struct DISPLAYCONFIG_MODE_INFO
{
    DISPLAYCONFIG_MODE_INFO_TYPE infoType;
    UINT32 id;
    LUID adapterId;
    union
    {
        DISPLAYCONFIG_TARGET_MODE targetMode;
        DISPLAYCONFIG_SOURCE_MODE sourceMode;
        DISPLAYCONFIG_DESKTOP_IMAGE_INFO desktopImageInfo;
    } DUMMYUNIONNAME;
} DISPLAYCONFIG_MODE_INFO;
typedef struct DISPLAYCONFIG_PATH_SOURCE_INFO
{
    LUID adapterId;
    UINT32 id;
    union
    {
        UINT32 modeInfoIdx;
        struct
        {
            UINT32 cloneGroupId : 16;
            UINT32 sourceModeInfoIdx : 16;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
    UINT32 statusFlags;
} DISPLAYCONFIG_PATH_SOURCE_INFO;
typedef struct DISPLAYCONFIG_PATH_TARGET_INFO
{
    LUID adapterId;
    UINT32 id;
    union
    {
        UINT32 modeInfoIdx;
        struct
        {
            UINT32 desktopModeInfoIdx : 16;
            UINT32 targetModeInfoIdx : 16;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
    DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY outputTechnology;
    DISPLAYCONFIG_ROTATION rotation;
    DISPLAYCONFIG_SCALING scaling;
    DISPLAYCONFIG_RATIONAL refreshRate;
    DISPLAYCONFIG_SCANLINE_ORDERING scanLineOrdering;
    BOOL targetAvailable;
    UINT32 statusFlags;
} DISPLAYCONFIG_PATH_TARGET_INFO;
typedef struct DISPLAYCONFIG_PATH_INFO
{
    DISPLAYCONFIG_PATH_SOURCE_INFO sourceInfo;
    DISPLAYCONFIG_PATH_TARGET_INFO targetInfo;
    UINT32 flags;
} DISPLAYCONFIG_PATH_INFO;
typedef enum DISPLAYCONFIG_TOPOLOGY_ID
{
      DISPLAYCONFIG_TOPOLOGY_INTERNAL = 0x00000001,
      DISPLAYCONFIG_TOPOLOGY_CLONE = 0x00000002,
      DISPLAYCONFIG_TOPOLOGY_EXTEND = 0x00000004,
      DISPLAYCONFIG_TOPOLOGY_EXTERNAL = 0x00000008,
      DISPLAYCONFIG_TOPOLOGY_FORCE_UINT32 = 0xFFFFFFFF
} DISPLAYCONFIG_TOPOLOGY_ID;
typedef enum
{
      DISPLAYCONFIG_DEVICE_INFO_GET_SOURCE_NAME = 1,
      DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_NAME = 2,
      DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_PREFERRED_MODE = 3,
      DISPLAYCONFIG_DEVICE_INFO_GET_ADAPTER_NAME = 4,
      DISPLAYCONFIG_DEVICE_INFO_SET_TARGET_PERSISTENCE = 5,
      DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_BASE_TYPE = 6,
      DISPLAYCONFIG_DEVICE_INFO_GET_SUPPORT_VIRTUAL_RESOLUTION = 7,
      DISPLAYCONFIG_DEVICE_INFO_SET_SUPPORT_VIRTUAL_RESOLUTION = 8,
      DISPLAYCONFIG_DEVICE_INFO_GET_ADVANCED_COLOR_INFO = 9,
      DISPLAYCONFIG_DEVICE_INFO_SET_ADVANCED_COLOR_STATE = 10,
      DISPLAYCONFIG_DEVICE_INFO_GET_SDR_WHITE_LEVEL = 11,
      DISPLAYCONFIG_DEVICE_INFO_FORCE_UINT32 = 0xFFFFFFFF
} DISPLAYCONFIG_DEVICE_INFO_TYPE;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct DISPLAYCONFIG_DEVICE_INFO_HEADER
{
    DISPLAYCONFIG_DEVICE_INFO_TYPE type;
    UINT32 size;
    LUID adapterId;
    UINT32 id;
} DISPLAYCONFIG_DEVICE_INFO_HEADER;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct DISPLAYCONFIG_SOURCE_DEVICE_NAME
{
    DISPLAYCONFIG_DEVICE_INFO_HEADER header;
    WCHAR viewGdiDeviceName[CCHDEVICENAME];
} DISPLAYCONFIG_SOURCE_DEVICE_NAME;
typedef struct DISPLAYCONFIG_TARGET_DEVICE_NAME_FLAGS
{
    union
    {
        struct
        {
            UINT32 friendlyNameFromEdid : 1;
            UINT32 friendlyNameForced : 1;
            UINT32 edidIdsValid : 1;
            UINT32 reserved : 29;
        } DUMMYSTRUCTNAME;
        UINT32 value;
    } DUMMYUNIONNAME;
} DISPLAYCONFIG_TARGET_DEVICE_NAME_FLAGS;
typedef struct DISPLAYCONFIG_TARGET_DEVICE_NAME
{
    DISPLAYCONFIG_DEVICE_INFO_HEADER header;
    DISPLAYCONFIG_TARGET_DEVICE_NAME_FLAGS flags;
    DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY outputTechnology;
    UINT16 edidManufactureId;
    UINT16 edidProductCodeId;
    UINT32 connectorInstance;
    WCHAR monitorFriendlyDeviceName[64];
    WCHAR monitorDevicePath[128];
} DISPLAYCONFIG_TARGET_DEVICE_NAME;
typedef struct DISPLAYCONFIG_TARGET_PREFERRED_MODE
{
    DISPLAYCONFIG_DEVICE_INFO_HEADER header;
    UINT32 width;
    UINT32 height;
    DISPLAYCONFIG_TARGET_MODE targetMode;
} DISPLAYCONFIG_TARGET_PREFERRED_MODE;
typedef struct DISPLAYCONFIG_ADAPTER_NAME
{
    DISPLAYCONFIG_DEVICE_INFO_HEADER header;
    WCHAR adapterDevicePath[128];
} DISPLAYCONFIG_ADAPTER_NAME;
typedef struct DISPLAYCONFIG_TARGET_BASE_TYPE {
    DISPLAYCONFIG_DEVICE_INFO_HEADER header;
    DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY baseOutputTechnology;
} DISPLAYCONFIG_TARGET_BASE_TYPE;
typedef struct DISPLAYCONFIG_SET_TARGET_PERSISTENCE
{
    DISPLAYCONFIG_DEVICE_INFO_HEADER header;
    union
    {
        struct
        {
            UINT32 bootPersistenceOn : 1;
            UINT32 reserved : 31;
        } DUMMYSTRUCTNAME;
        UINT32 value;
    } DUMMYUNIONNAME;
} DISPLAYCONFIG_SET_TARGET_PERSISTENCE;
typedef struct DISPLAYCONFIG_SUPPORT_VIRTUAL_RESOLUTION
{
    DISPLAYCONFIG_DEVICE_INFO_HEADER header;
    union
    {
        struct
        {
            UINT32 disableMonitorVirtualResolution : 1;
            UINT32 reserved : 31;
        } DUMMYSTRUCTNAME;
        UINT32 value;
    } DUMMYSTRUCTNAME;
} DISPLAYCONFIG_SUPPORT_VIRTUAL_RESOLUTION;
typedef enum _DISPLAYCONFIG_COLOR_ENCODING
{
    DISPLAYCONFIG_COLOR_ENCODING_RGB = 0,
    DISPLAYCONFIG_COLOR_ENCODING_YCBCR444 = 1,
    DISPLAYCONFIG_COLOR_ENCODING_YCBCR422 = 2,
    DISPLAYCONFIG_COLOR_ENCODING_YCBCR420 = 3,
    DISPLAYCONFIG_COLOR_ENCODING_INTENSITY = 4,
    DISPLAYCONFIG_COLOR_ENCODING_FORCE_UINT32 = 0xFFFFFFFF
} DISPLAYCONFIG_COLOR_ENCODING;
typedef struct _DISPLAYCONFIG_GET_ADVANCED_COLOR_INFO
{
    DISPLAYCONFIG_DEVICE_INFO_HEADER header;
    union
    {
        struct
        {
          UINT32 advancedColorSupported :1;
          UINT32 advancedColorEnabled :1;
          UINT32 wideColorEnforced :1;
          UINT32 advancedColorForceDisabled :1;
          UINT32 reserved :28;
        } DUMMYSTRUCTNAME;
        UINT32 value;
    } DUMMYUNIONNAME;
    DISPLAYCONFIG_COLOR_ENCODING colorEncoding;
    UINT32 bitsPerColorChannel;
} DISPLAYCONFIG_GET_ADVANCED_COLOR_INFO;
typedef struct _DISPLAYCONFIG_SET_ADVANCED_COLOR_STATE
{
    DISPLAYCONFIG_DEVICE_INFO_HEADER header;
    union
    {
        struct
        {
          UINT32 enableAdvancedColor :1;
          UINT32 reserved :31;
        } DUMMYSTRUCTNAME;
        UINT32 value;
    }DUMMYUNIONNAME;
} DISPLAYCONFIG_SET_ADVANCED_COLOR_STATE;
typedef struct _DISPLAYCONFIG_SDR_WHITE_LEVEL
{
    DISPLAYCONFIG_DEVICE_INFO_HEADER header;
    ULONG SDRWhiteLevel;
} DISPLAYCONFIG_SDR_WHITE_LEVEL;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct _RGNDATAHEADER {
    DWORD dwSize;
    DWORD iType;
    DWORD nCount;
    DWORD nRgnSize;
    RECT rcBound;
} RGNDATAHEADER, *PRGNDATAHEADER;
typedef struct _RGNDATA {
    RGNDATAHEADER rdh;
    char Buffer[1];
} RGNDATA, *PRGNDATA, NEAR *NPRGNDATA, FAR *LPRGNDATA;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _ABC {
    int abcA;
    UINT abcB;
    int abcC;
} ABC, *PABC, NEAR *NPABC, FAR *LPABC;
typedef struct _ABCFLOAT {
    FLOAT abcfA;
    FLOAT abcfB;
    FLOAT abcfC;
} ABCFLOAT, *PABCFLOAT, NEAR *NPABCFLOAT, FAR *LPABCFLOAT;
#endif
#pragma endregion
#include "pshpack4.h"
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _OUTLINETEXTMETRICA {
    UINT otmSize;
    TEXTMETRICA otmTextMetrics;
    BYTE otmFiller;
    PANOSE otmPanoseNumber;
    UINT otmfsSelection;
    UINT otmfsType;
     int otmsCharSlopeRise;
     int otmsCharSlopeRun;
     int otmItalicAngle;
    UINT otmEMSquare;
     int otmAscent;
     int otmDescent;
    UINT otmLineGap;
    UINT otmsCapEmHeight;
    UINT otmsXHeight;
    RECT otmrcFontBox;
     int otmMacAscent;
     int otmMacDescent;
    UINT otmMacLineGap;
    UINT otmusMinimumPPEM;
    POINT otmptSubscriptSize;
    POINT otmptSubscriptOffset;
    POINT otmptSuperscriptSize;
    POINT otmptSuperscriptOffset;
    UINT otmsStrikeoutSize;
     int otmsStrikeoutPosition;
     int otmsUnderscoreSize;
     int otmsUnderscorePosition;
    PSTR otmpFamilyName;
    PSTR otmpFaceName;
    PSTR otmpStyleName;
    PSTR otmpFullName;
} OUTLINETEXTMETRICA, *POUTLINETEXTMETRICA, NEAR *NPOUTLINETEXTMETRICA, FAR *LPOUTLINETEXTMETRICA;
typedef struct _OUTLINETEXTMETRICW {
    UINT otmSize;
    TEXTMETRICW otmTextMetrics;
    BYTE otmFiller;
    PANOSE otmPanoseNumber;
    UINT otmfsSelection;
    UINT otmfsType;
     int otmsCharSlopeRise;
     int otmsCharSlopeRun;
     int otmItalicAngle;
    UINT otmEMSquare;
     int otmAscent;
     int otmDescent;
    UINT otmLineGap;
    UINT otmsCapEmHeight;
    UINT otmsXHeight;
    RECT otmrcFontBox;
     int otmMacAscent;
     int otmMacDescent;
    UINT otmMacLineGap;
    UINT otmusMinimumPPEM;
    POINT otmptSubscriptSize;
    POINT otmptSubscriptOffset;
    POINT otmptSuperscriptSize;
    POINT otmptSuperscriptOffset;
    UINT otmsStrikeoutSize;
     int otmsStrikeoutPosition;
     int otmsUnderscoreSize;
     int otmsUnderscorePosition;
    PSTR otmpFamilyName;
    PSTR otmpFaceName;
    PSTR otmpStyleName;
    PSTR otmpFullName;
} OUTLINETEXTMETRICW, *POUTLINETEXTMETRICW, NEAR *NPOUTLINETEXTMETRICW, FAR *LPOUTLINETEXTMETRICW;
typedef OUTLINETEXTMETRICW OUTLINETEXTMETRIC;
typedef POUTLINETEXTMETRICW POUTLINETEXTMETRIC;
typedef NPOUTLINETEXTMETRICW NPOUTLINETEXTMETRIC;
typedef LPOUTLINETEXTMETRICW LPOUTLINETEXTMETRIC;
#endif
#pragma endregion
#include "poppack.h"
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagPOLYTEXTA
{
    int x;
    int y;
    UINT n;
    LPCSTR lpstr;
    UINT uiFlags;
    RECT rcl;
    int *pdx;
} POLYTEXTA, *PPOLYTEXTA, NEAR *NPPOLYTEXTA, FAR *LPPOLYTEXTA;
typedef struct tagPOLYTEXTW
{
    int x;
    int y;
    UINT n;
    LPCWSTR lpstr;
    UINT uiFlags;
    RECT rcl;
    int *pdx;
} POLYTEXTW, *PPOLYTEXTW, NEAR *NPPOLYTEXTW, FAR *LPPOLYTEXTW;
typedef POLYTEXTW POLYTEXT;
typedef PPOLYTEXTW PPOLYTEXT;
typedef NPPOLYTEXTW NPPOLYTEXT;
typedef LPPOLYTEXTW LPPOLYTEXT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _FIXED {
    WORD fract;
    short value;
} FIXED;
typedef struct _MAT2 {
     FIXED eM11;
     FIXED eM12;
     FIXED eM21;
     FIXED eM22;
} MAT2, FAR *LPMAT2;
typedef struct _GLYPHMETRICS {
    UINT gmBlackBoxX;
    UINT gmBlackBoxY;
    POINT gmptGlyphOrigin;
    short gmCellIncX;
    short gmCellIncY;
} GLYPHMETRICS, FAR *LPGLYPHMETRICS;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagPOINTFX
{
    FIXED x;
    FIXED y;
} POINTFX, FAR* LPPOINTFX;
typedef struct tagTTPOLYCURVE
{
    WORD wType;
    WORD cpfx;
    POINTFX apfx[1];
} TTPOLYCURVE, FAR* LPTTPOLYCURVE;
typedef struct tagTTPOLYGONHEADER
{
    DWORD cb;
    DWORD dwType;
    POINTFX pfxStart;
} TTPOLYGONHEADER, FAR* LPTTPOLYGONHEADER;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagGCP_RESULTSA
    {
    DWORD lStructSize;
    LPSTR lpOutString;
    UINT FAR *lpOrder;
    int FAR *lpDx;
    int FAR *lpCaretPos;
    LPSTR lpClass;
    LPWSTR lpGlyphs;
    UINT nGlyphs;
    int nMaxFit;
    } GCP_RESULTSA, FAR* LPGCP_RESULTSA;
typedef struct tagGCP_RESULTSW
    {
    DWORD lStructSize;
    LPWSTR lpOutString;
    UINT FAR *lpOrder;
    int FAR *lpDx;
    int FAR *lpCaretPos;
    LPSTR lpClass;
    LPWSTR lpGlyphs;
    UINT nGlyphs;
    int nMaxFit;
    } GCP_RESULTSW, FAR* LPGCP_RESULTSW;
typedef GCP_RESULTSW GCP_RESULTS;
typedef LPGCP_RESULTSW LPGCP_RESULTS;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _RASTERIZER_STATUS {
    short nSize;
    short wFlags;
    short nLanguageID;
} RASTERIZER_STATUS, FAR *LPRASTERIZER_STATUS;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagPIXELFORMATDESCRIPTOR
{
    WORD nSize;
    WORD nVersion;
    DWORD dwFlags;
    BYTE iPixelType;
    BYTE cColorBits;
    BYTE cRedBits;
    BYTE cRedShift;
    BYTE cGreenBits;
    BYTE cGreenShift;
    BYTE cBlueBits;
    BYTE cBlueShift;
    BYTE cAlphaBits;
    BYTE cAlphaShift;
    BYTE cAccumBits;
    BYTE cAccumRedBits;
    BYTE cAccumGreenBits;
    BYTE cAccumBlueBits;
    BYTE cAccumAlphaBits;
    BYTE cDepthBits;
    BYTE cStencilBits;
    BYTE cAuxBuffers;
    BYTE iLayerType;
    BYTE bReserved;
    DWORD dwLayerMask;
    DWORD dwVisibleMask;
    DWORD dwDamageMask;
} PIXELFORMATDESCRIPTOR, *PPIXELFORMATDESCRIPTOR, FAR *LPPIXELFORMATDESCRIPTOR;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef int (CALLBACK* OLDFONTENUMPROCA)(CONST LOGFONTA *, CONST TEXTMETRICA *, DWORD, LPARAM);
typedef int (CALLBACK* OLDFONTENUMPROCW)(CONST LOGFONTW *, CONST TEXTMETRICW *, DWORD, LPARAM);
typedef OLDFONTENUMPROCA FONTENUMPROCA;
typedef OLDFONTENUMPROCW FONTENUMPROCW;
typedef FONTENUMPROCW FONTENUMPROC;
typedef int (CALLBACK* GOBJENUMPROC)(LPVOID, LPARAM);
typedef VOID (CALLBACK* LINEDDAPROC)(int, int, LPARAM);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINGDIAPI int WINAPI AddFontResourceA(_In_ LPCSTR);
WINGDIAPI int WINAPI AddFontResourceW(_In_ LPCWSTR);
 WINGDIAPI BOOL WINAPI AnimatePalette( _In_ HPALETTE hPal, _In_ UINT iStartIndex, _In_ UINT cEntries, _In_reads_(cEntries) CONST PALETTEENTRY * ppe);
 WINGDIAPI BOOL WINAPI Arc( _In_ HDC hdc, _In_ int x1, _In_ int y1, _In_ int x2, _In_ int y2, _In_ int x3, _In_ int y3, _In_ int x4, _In_ int y4);
 WINGDIAPI BOOL WINAPI BitBlt( _In_ HDC hdc, _In_ int x, _In_ int y, _In_ int cx, _In_ int cy, _In_opt_ HDC hdcSrc, _In_ int x1, _In_ int y1, _In_ DWORD rop);
WINGDIAPI BOOL WINAPI CancelDC( _In_ HDC hdc);
 WINGDIAPI BOOL WINAPI Chord( _In_ HDC hdc, _In_ int x1, _In_ int y1, _In_ int x2, _In_ int y2, _In_ int x3, _In_ int y3, _In_ int x4, _In_ int y4);
WINGDIAPI int WINAPI ChoosePixelFormat( _In_ HDC hdc, _In_ CONST PIXELFORMATDESCRIPTOR *ppfd);
WINGDIAPI HMETAFILE WINAPI CloseMetaFile( _In_ HDC hdc);
WINGDIAPI int WINAPI CombineRgn( _In_opt_ HRGN hrgnDst, _In_opt_ HRGN hrgnSrc1, _In_opt_ HRGN hrgnSrc2, _In_ int iMode);
WINGDIAPI HMETAFILE WINAPI CopyMetaFileA( _In_ HMETAFILE, _In_opt_ LPCSTR);
WINGDIAPI HMETAFILE WINAPI CopyMetaFileW( _In_ HMETAFILE, _In_opt_ LPCWSTR);
 WINGDIAPI HBITMAP WINAPI CreateBitmap( _In_ int nWidth, _In_ int nHeight, _In_ UINT nPlanes, _In_ UINT nBitCount, _In_opt_ CONST VOID *lpBits);
 WINGDIAPI HBITMAP WINAPI CreateBitmapIndirect( _In_ CONST BITMAP *pbm);
 WINGDIAPI HBRUSH WINAPI CreateBrushIndirect( _In_ CONST LOGBRUSH *plbrush);
WINGDIAPI HBITMAP WINAPI CreateCompatibleBitmap( _In_ HDC hdc, _In_ int cx, _In_ int cy);
WINGDIAPI HBITMAP WINAPI CreateDiscardableBitmap( _In_ HDC hdc, _In_ int cx, _In_ int cy);
WINGDIAPI HDC WINAPI CreateCompatibleDC( _In_opt_ HDC hdc);
WINGDIAPI HDC WINAPI CreateDCA( _In_opt_ LPCSTR pwszDriver, _In_opt_ LPCSTR pwszDevice, _In_opt_ LPCSTR pszPort, _In_opt_ CONST DEVMODEA * pdm);
WINGDIAPI HDC WINAPI CreateDCW( _In_opt_ LPCWSTR pwszDriver, _In_opt_ LPCWSTR pwszDevice, _In_opt_ LPCWSTR pszPort, _In_opt_ CONST DEVMODEW * pdm);
WINGDIAPI HBITMAP WINAPI CreateDIBitmap( _In_ HDC hdc, _In_opt_ CONST BITMAPINFOHEADER *pbmih, _In_ DWORD flInit, _In_opt_ CONST VOID *pjBits, _In_opt_ CONST BITMAPINFO *pbmi, _In_ UINT iUsage);
WINGDIAPI HBRUSH WINAPI CreateDIBPatternBrush( _In_ HGLOBAL h, _In_ UINT iUsage);
 WINGDIAPI HBRUSH WINAPI CreateDIBPatternBrushPt( _In_ CONST VOID *lpPackedDIB, _In_ UINT iUsage);
WINGDIAPI HRGN WINAPI CreateEllipticRgn( _In_ int x1, _In_ int y1, _In_ int x2, _In_ int y2);
WINGDIAPI HRGN WINAPI CreateEllipticRgnIndirect( _In_ CONST RECT *lprect);
 WINGDIAPI HFONT WINAPI CreateFontIndirectA( _In_ CONST LOGFONTA *lplf);
 WINGDIAPI HFONT WINAPI CreateFontIndirectW( _In_ CONST LOGFONTW *lplf);
WINGDIAPI HFONT WINAPI CreateFontA( _In_ int cHeight, _In_ int cWidth, _In_ int cEscapement, _In_ int cOrientation, _In_ int cWeight, _In_ DWORD bItalic,
                             _In_ DWORD bUnderline, _In_ DWORD bStrikeOut, _In_ DWORD iCharSet, _In_ DWORD iOutPrecision, _In_ DWORD iClipPrecision,
                             _In_ DWORD iQuality, _In_ DWORD iPitchAndFamily, _In_opt_ LPCSTR pszFaceName);
WINGDIAPI HFONT WINAPI CreateFontW( _In_ int cHeight, _In_ int cWidth, _In_ int cEscapement, _In_ int cOrientation, _In_ int cWeight, _In_ DWORD bItalic,
                             _In_ DWORD bUnderline, _In_ DWORD bStrikeOut, _In_ DWORD iCharSet, _In_ DWORD iOutPrecision, _In_ DWORD iClipPrecision,
                             _In_ DWORD iQuality, _In_ DWORD iPitchAndFamily, _In_opt_ LPCWSTR pszFaceName);
WINGDIAPI HBRUSH WINAPI CreateHatchBrush( _In_ int iHatch, _In_ COLORREF color);
WINGDIAPI HDC WINAPI CreateICA( _In_opt_ LPCSTR pszDriver, _In_opt_ LPCSTR pszDevice, _In_opt_ LPCSTR pszPort, _In_opt_ CONST DEVMODEA * pdm);
WINGDIAPI HDC WINAPI CreateICW( _In_opt_ LPCWSTR pszDriver, _In_opt_ LPCWSTR pszDevice, _In_opt_ LPCWSTR pszPort, _In_opt_ CONST DEVMODEW * pdm);
WINGDIAPI HDC WINAPI CreateMetaFileA( _In_opt_ LPCSTR pszFile);
WINGDIAPI HDC WINAPI CreateMetaFileW( _In_opt_ LPCWSTR pszFile);
 WINGDIAPI HPALETTE WINAPI CreatePalette( _In_reads_(_Inexpressible_(2*sizeof(WORD) + plpal->palNumEntries * sizeof(PALETTEENTRY))) CONST LOGPALETTE * plpal);
WINGDIAPI HPEN WINAPI CreatePen( _In_ int iStyle, _In_ int cWidth, _In_ COLORREF color);
 WINGDIAPI HPEN WINAPI CreatePenIndirect( _In_ CONST LOGPEN *plpen);
WINGDIAPI HRGN WINAPI CreatePolyPolygonRgn( _In_ CONST POINT *pptl,
                                                _In_reads_(cPoly) CONST INT *pc,
                                                _In_ int cPoly,
                                                _In_ int iMode);
 WINGDIAPI HBRUSH WINAPI CreatePatternBrush( _In_ HBITMAP hbm);
WINGDIAPI HRGN WINAPI CreateRectRgn( _In_ int x1, _In_ int y1, _In_ int x2, _In_ int y2);
WINGDIAPI HRGN WINAPI CreateRectRgnIndirect( _In_ CONST RECT *lprect);
WINGDIAPI HRGN WINAPI CreateRoundRectRgn( _In_ int x1, _In_ int y1, _In_ int x2, _In_ int y2, _In_ int w, _In_ int h);
WINGDIAPI BOOL WINAPI CreateScalableFontResourceA( _In_ DWORD fdwHidden, _In_ LPCSTR lpszFont, _In_ LPCSTR lpszFile, _In_opt_ LPCSTR lpszPath);
WINGDIAPI BOOL WINAPI CreateScalableFontResourceW( _In_ DWORD fdwHidden, _In_ LPCWSTR lpszFont, _In_ LPCWSTR lpszFile, _In_opt_ LPCWSTR lpszPath);
WINGDIAPI HBRUSH WINAPI CreateSolidBrush( _In_ COLORREF color);
WINGDIAPI BOOL WINAPI DeleteDC( _In_ HDC hdc);
WINGDIAPI BOOL WINAPI DeleteMetaFile( _In_ HMETAFILE hmf);
 WINGDIAPI BOOL WINAPI DeleteObject( _In_ HGDIOBJ ho);
WINGDIAPI int WINAPI DescribePixelFormat( _In_ HDC hdc,
                                            _In_ int iPixelFormat,
                                            _In_ UINT nBytes,
                                            _Out_writes_bytes_opt_(nBytes) LPPIXELFORMATDESCRIPTOR ppfd);
typedef UINT (CALLBACK* LPFNDEVMODE)(HWND, HMODULE, LPDEVMODE, LPSTR, LPSTR, LPDEVMODE, LPSTR, UINT);
typedef DWORD (CALLBACK* LPFNDEVCAPS)(LPSTR, LPSTR, UINT, LPSTR, LPDEVMODE);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINSPOOLAPI
int
WINAPI
DeviceCapabilitiesA(
    _In_ LPCSTR pDevice,
    _In_opt_ LPCSTR pPort,
    _In_ WORD fwCapability,
    _Out_writes_opt_(_Inexpressible_(1)) LPSTR pOutput,
    _In_opt_ CONST DEVMODEA *pDevMode
    );
WINSPOOLAPI
int
WINAPI
DeviceCapabilitiesW(
    _In_ LPCWSTR pDevice,
    _In_opt_ LPCWSTR pPort,
    _In_ WORD fwCapability,
    _Out_writes_opt_(_Inexpressible_(1)) LPWSTR pOutput,
    _In_opt_ CONST DEVMODEW *pDevMode
    );
WINGDIAPI int WINAPI DrawEscape( _In_ HDC hdc,
                                    _In_ int iEscape,
                                    _In_ int cjIn,
                                    _In_reads_bytes_opt_(cjIn) LPCSTR lpIn);
 WINGDIAPI BOOL WINAPI Ellipse( _In_ HDC hdc, _In_ int left, _In_ int top, _In_ int right, _In_ int bottom);
WINGDIAPI int WINAPI EnumFontFamiliesExA( _In_ HDC hdc, _In_ LPLOGFONTA lpLogfont, _In_ FONTENUMPROCA lpProc, _In_ LPARAM lParam, _In_ DWORD dwFlags);
WINGDIAPI int WINAPI EnumFontFamiliesExW( _In_ HDC hdc, _In_ LPLOGFONTW lpLogfont, _In_ FONTENUMPROCW lpProc, _In_ LPARAM lParam, _In_ DWORD dwFlags);
WINGDIAPI int WINAPI EnumFontFamiliesA( _In_ HDC hdc, _In_opt_ LPCSTR lpLogfont, _In_ FONTENUMPROCA lpProc, _In_ LPARAM lParam);
WINGDIAPI int WINAPI EnumFontFamiliesW( _In_ HDC hdc, _In_opt_ LPCWSTR lpLogfont, _In_ FONTENUMPROCW lpProc, _In_ LPARAM lParam);
WINGDIAPI int WINAPI EnumFontsA( _In_ HDC hdc, _In_opt_ LPCSTR lpLogfont, _In_ FONTENUMPROCA lpProc, _In_ LPARAM lParam);
WINGDIAPI int WINAPI EnumFontsW( _In_ HDC hdc, _In_opt_ LPCWSTR lpLogfont, _In_ FONTENUMPROCW lpProc, _In_ LPARAM lParam);
WINGDIAPI int WINAPI EnumObjects( _In_ HDC hdc, _In_ int nType, _In_ GOBJENUMPROC lpFunc, _In_ LPARAM lParam);
WINGDIAPI BOOL WINAPI EqualRgn( _In_ HRGN hrgn1, _In_ HRGN hrgn2);
 WINGDIAPI int WINAPI Escape( _In_ HDC hdc,
                                _In_ int iEscape,
                                _In_ int cjIn,
                                _In_reads_bytes_opt_(cjIn) LPCSTR pvIn,
                                _Out_opt_ LPVOID pvOut);
WINGDIAPI int WINAPI ExtEscape( _In_ HDC hdc,
                                    _In_ int iEscape,
                                    _In_ int cjInput,
                                    _In_reads_bytes_opt_(cjInput) LPCSTR lpInData,
                                    _In_ int cjOutput,
                                    _Out_writes_bytes_opt_(cjOutput) LPSTR lpOutData);
 WINGDIAPI int WINAPI ExcludeClipRect( _In_ HDC hdc, _In_ int left, _In_ int top, _In_ int right, _In_ int bottom);
 WINGDIAPI HRGN WINAPI ExtCreateRegion( _In_opt_ CONST XFORM * lpx, _In_ DWORD nCount, _In_reads_bytes_(nCount) CONST RGNDATA * lpData);
 WINGDIAPI BOOL WINAPI ExtFloodFill( _In_ HDC hdc, _In_ int x, _In_ int y, _In_ COLORREF color, _In_ UINT type);
 WINGDIAPI BOOL WINAPI FillRgn( _In_ HDC hdc, _In_ HRGN hrgn, _In_ HBRUSH hbr);
 WINGDIAPI BOOL WINAPI FloodFill( _In_ HDC hdc, _In_ int x, _In_ int y, _In_ COLORREF color);
 WINGDIAPI BOOL WINAPI FrameRgn( _In_ HDC hdc, _In_ HRGN hrgn, _In_ HBRUSH hbr, _In_ int w, _In_ int h);
WINGDIAPI int WINAPI GetROP2( _In_ HDC hdc);
WINGDIAPI BOOL WINAPI GetAspectRatioFilterEx( _In_ HDC hdc, _Out_ LPSIZE lpsize);
WINGDIAPI COLORREF WINAPI GetBkColor( _In_ HDC hdc);
WINGDIAPI COLORREF WINAPI GetDCBrushColor( _In_ HDC hdc);
WINGDIAPI COLORREF WINAPI GetDCPenColor( _In_ HDC hdc);
WINGDIAPI
int
WINAPI
GetBkMode(
    _In_ HDC hdc
    );
WINGDIAPI
LONG
WINAPI
GetBitmapBits(
    _In_ HBITMAP hbit,
    _In_ LONG cb,
    _Out_writes_bytes_(cb) LPVOID lpvBits
    );
WINGDIAPI BOOL WINAPI GetBitmapDimensionEx( _In_ HBITMAP hbit, _Out_ LPSIZE lpsize);
WINGDIAPI UINT WINAPI GetBoundsRect( _In_ HDC hdc, _Out_ LPRECT lprect, _In_ UINT flags);
WINGDIAPI BOOL WINAPI GetBrushOrgEx( _In_ HDC hdc, _Out_ LPPOINT lppt);
WINGDIAPI BOOL WINAPI GetCharWidthA( _In_ HDC hdc, _In_ UINT iFirst, _In_ UINT iLast, _Out_writes_(iLast + 1 - iFirst) LPINT lpBuffer);
WINGDIAPI BOOL WINAPI GetCharWidthW( _In_ HDC hdc, _In_ UINT iFirst, _In_ UINT iLast, _Out_writes_(iLast + 1 - iFirst) LPINT lpBuffer);
WINGDIAPI BOOL WINAPI GetCharWidth32A( _In_ HDC hdc, _In_ UINT iFirst, _In_ UINT iLast, _Out_writes_(iLast + 1 - iFirst) LPINT lpBuffer);
WINGDIAPI BOOL WINAPI GetCharWidth32W( _In_ HDC hdc, _In_ UINT iFirst, _In_ UINT iLast, _Out_writes_(iLast + 1 - iFirst) LPINT lpBuffer);
WINGDIAPI BOOL APIENTRY GetCharWidthFloatA( _In_ HDC hdc, _In_ UINT iFirst, _In_ UINT iLast, _Out_writes_(iLast + 1 - iFirst) PFLOAT lpBuffer);
WINGDIAPI BOOL APIENTRY GetCharWidthFloatW( _In_ HDC hdc, _In_ UINT iFirst, _In_ UINT iLast, _Out_writes_(iLast + 1 - iFirst) PFLOAT lpBuffer);
WINGDIAPI BOOL APIENTRY GetCharABCWidthsA( _In_ HDC hdc,
                                            _In_ UINT wFirst,
                                            _In_ UINT wLast,
                                            _Out_writes_(wLast - wFirst + 1) LPABC lpABC);
WINGDIAPI BOOL APIENTRY GetCharABCWidthsW( _In_ HDC hdc,
                                            _In_ UINT wFirst,
                                            _In_ UINT wLast,
                                            _Out_writes_(wLast - wFirst + 1) LPABC lpABC);
WINGDIAPI BOOL APIENTRY GetCharABCWidthsFloatA( _In_ HDC hdc, _In_ UINT iFirst, _In_ UINT iLast, _Out_writes_(iLast + 1 - iFirst) LPABCFLOAT lpABC);
WINGDIAPI BOOL APIENTRY GetCharABCWidthsFloatW( _In_ HDC hdc, _In_ UINT iFirst, _In_ UINT iLast, _Out_writes_(iLast + 1 - iFirst) LPABCFLOAT lpABC);
WINGDIAPI int WINAPI GetClipBox( _In_ HDC hdc, _Out_ LPRECT lprect);
WINGDIAPI int WINAPI GetClipRgn( _In_ HDC hdc, _In_ HRGN hrgn);
WINGDIAPI int WINAPI GetMetaRgn( _In_ HDC hdc, _In_ HRGN hrgn);
WINGDIAPI HGDIOBJ WINAPI GetCurrentObject( _In_ HDC hdc, _In_ UINT type);
WINGDIAPI BOOL WINAPI GetCurrentPositionEx( _In_ HDC hdc, _Out_ LPPOINT lppt);
WINGDIAPI int WINAPI GetDeviceCaps( _In_opt_ HDC hdc, _In_ int index);
WINGDIAPI int WINAPI GetDIBits( _In_ HDC hdc, _In_ HBITMAP hbm, _In_ UINT start, _In_ UINT cLines,
    _Out_opt_ LPVOID lpvBits, _At_((LPBITMAPINFOHEADER)lpbmi, _Inout_) LPBITMAPINFO lpbmi, _In_ UINT usage);
_Success_(return != GDI_ERROR)
WINGDIAPI DWORD WINAPI GetFontData ( _In_ HDC hdc,
                                        _In_ DWORD dwTable,
                                        _In_ DWORD dwOffset,
                                        _Out_writes_bytes_to_opt_(cjBuffer, return) PVOID pvBuffer,
                                        _In_ DWORD cjBuffer
                                        );
WINGDIAPI DWORD WINAPI GetGlyphOutlineA( _In_ HDC hdc,
                                            _In_ UINT uChar,
                                            _In_ UINT fuFormat,
                                            _Out_ LPGLYPHMETRICS lpgm,
                                            _In_ DWORD cjBuffer,
                                            _Out_writes_bytes_opt_(cjBuffer) LPVOID pvBuffer,
                                            _In_ CONST MAT2 *lpmat2
                                        );
WINGDIAPI DWORD WINAPI GetGlyphOutlineW( _In_ HDC hdc,
                                            _In_ UINT uChar,
                                            _In_ UINT fuFormat,
                                            _Out_ LPGLYPHMETRICS lpgm,
                                            _In_ DWORD cjBuffer,
                                            _Out_writes_bytes_opt_(cjBuffer) LPVOID pvBuffer,
                                            _In_ CONST MAT2 *lpmat2
                                        );
WINGDIAPI int WINAPI GetGraphicsMode( _In_ HDC hdc);
WINGDIAPI int WINAPI GetMapMode( _In_ HDC hdc);
WINGDIAPI UINT WINAPI GetMetaFileBitsEx(_In_ HMETAFILE hMF, _In_ UINT cbBuffer, _Out_writes_bytes_opt_(cbBuffer) LPVOID lpData);
WINGDIAPI HMETAFILE WINAPI GetMetaFileA( _In_ LPCSTR lpName);
WINGDIAPI HMETAFILE WINAPI GetMetaFileW( _In_ LPCWSTR lpName);
WINGDIAPI COLORREF WINAPI GetNearestColor( _In_ HDC hdc, _In_ COLORREF color);
WINGDIAPI UINT WINAPI GetNearestPaletteIndex( _In_ HPALETTE h, _In_ COLORREF color);
WINGDIAPI DWORD WINAPI GetObjectType( _In_ HGDIOBJ h);
WINGDIAPI UINT APIENTRY GetOutlineTextMetricsA( _In_ HDC hdc,
                                                _In_ UINT cjCopy,
                                                _Out_writes_bytes_opt_(cjCopy) LPOUTLINETEXTMETRICA potm);
WINGDIAPI UINT APIENTRY GetOutlineTextMetricsW( _In_ HDC hdc,
                                                _In_ UINT cjCopy,
                                                _Out_writes_bytes_opt_(cjCopy) LPOUTLINETEXTMETRICW potm);
_Ret_range_(0,cEntries)
WINGDIAPI UINT WINAPI GetPaletteEntries( _In_ HPALETTE hpal,
                                            _In_ UINT iStart,
                                            _In_ UINT cEntries,
                                            _Out_writes_to_opt_(cEntries,return) LPPALETTEENTRY pPalEntries);
WINGDIAPI COLORREF WINAPI GetPixel( _In_ HDC hdc, _In_ int x, _In_ int y);
WINGDIAPI int WINAPI GetPixelFormat( _In_ HDC hdc);
WINGDIAPI int WINAPI GetPolyFillMode( _In_ HDC hdc);
WINGDIAPI BOOL WINAPI GetRasterizerCaps( _Out_writes_bytes_(cjBytes) LPRASTERIZER_STATUS lpraststat,
                                            _In_ UINT cjBytes);
WINGDIAPI int WINAPI GetRandomRgn (_In_ HDC hdc, _In_ HRGN hrgn, _In_ INT i);
WINGDIAPI DWORD WINAPI GetRegionData( _In_ HRGN hrgn,
                                        _In_ DWORD nCount,
                                        _Out_writes_bytes_to_opt_(nCount, return) LPRGNDATA lpRgnData);
WINGDIAPI int WINAPI GetRgnBox( _In_ HRGN hrgn, _Out_ LPRECT lprc);
WINGDIAPI HGDIOBJ WINAPI GetStockObject( _In_ int i);
WINGDIAPI int WINAPI GetStretchBltMode(_In_ HDC hdc);
WINGDIAPI
UINT
WINAPI
GetSystemPaletteEntries(
    _In_ HDC hdc,
    _In_ UINT iStart,
    _In_ UINT cEntries,
    _Out_writes_opt_(cEntries) LPPALETTEENTRY pPalEntries
    );
WINGDIAPI UINT WINAPI GetSystemPaletteUse(_In_ HDC hdc);
WINGDIAPI int WINAPI GetTextCharacterExtra(_In_ HDC hdc);
WINGDIAPI UINT WINAPI GetTextAlign(_In_ HDC hdc);
WINGDIAPI COLORREF WINAPI GetTextColor(_In_ HDC hdc);
WINGDIAPI
BOOL
APIENTRY
GetTextExtentPointA(
    _In_ HDC hdc,
    _In_reads_(c) LPCSTR lpString,
    _In_ int c,
    _Out_ LPSIZE lpsz
    );
WINGDIAPI
BOOL
APIENTRY
GetTextExtentPointW(
    _In_ HDC hdc,
    _In_reads_(c) LPCWSTR lpString,
    _In_ int c,
    _Out_ LPSIZE lpsz
    );
WINGDIAPI
BOOL
APIENTRY
GetTextExtentPoint32A(
    _In_ HDC hdc,
    _In_reads_(c) LPCSTR lpString,
    _In_ int c,
    _Out_ LPSIZE psizl
    );
WINGDIAPI
BOOL
APIENTRY
GetTextExtentPoint32W(
    _In_ HDC hdc,
    _In_reads_(c) LPCWSTR lpString,
    _In_ int c,
    _Out_ LPSIZE psizl
    );
WINGDIAPI
BOOL
APIENTRY
GetTextExtentExPointA(
    _In_ HDC hdc,
    _In_reads_(cchString) LPCSTR lpszString,
    _In_ int cchString,
    _In_ int nMaxExtent,
    _Out_opt_ LPINT lpnFit,
    _Out_writes_to_opt_ (cchString, *lpnFit) LPINT lpnDx,
    _Out_ LPSIZE lpSize
    );
WINGDIAPI
BOOL
APIENTRY
GetTextExtentExPointW(
    _In_ HDC hdc,
    _In_reads_(cchString) LPCWSTR lpszString,
    _In_ int cchString,
    _In_ int nMaxExtent,
    _Out_opt_ LPINT lpnFit,
    _Out_writes_to_opt_ (cchString, *lpnFit) LPINT lpnDx,
    _Out_ LPSIZE lpSize
    );
WINGDIAPI int WINAPI GetTextCharset( _In_ HDC hdc);
WINGDIAPI int WINAPI GetTextCharsetInfo( _In_ HDC hdc, _Out_opt_ LPFONTSIGNATURE lpSig, _In_ DWORD dwFlags);
WINGDIAPI BOOL WINAPI TranslateCharsetInfo( _Inout_ DWORD FAR *lpSrc, _Out_ LPCHARSETINFO lpCs, _In_ DWORD dwFlags);
WINGDIAPI DWORD WINAPI GetFontLanguageInfo( _In_ HDC hdc);
WINGDIAPI DWORD WINAPI GetCharacterPlacementA( _In_ HDC hdc, _In_reads_(nCount) LPCSTR lpString, _In_ int nCount, _In_ int nMexExtent, _Inout_ LPGCP_RESULTSA lpResults, _In_ DWORD dwFlags);
WINGDIAPI DWORD WINAPI GetCharacterPlacementW( _In_ HDC hdc, _In_reads_(nCount) LPCWSTR lpString, _In_ int nCount, _In_ int nMexExtent, _Inout_ LPGCP_RESULTSW lpResults, _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagWCRANGE
{
    WCHAR wcLow;
    USHORT cGlyphs;
} WCRANGE, *PWCRANGE,FAR *LPWCRANGE;
typedef struct tagGLYPHSET
{
    DWORD cbThis;
    DWORD flAccel;
    DWORD cGlyphsSupported;
    DWORD cRanges;
    WCRANGE ranges[1];
} GLYPHSET, *PGLYPHSET, FAR *LPGLYPHSET;
WINGDIAPI DWORD WINAPI GetFontUnicodeRanges( _In_ HDC hdc, _Out_opt_ LPGLYPHSET lpgs);
WINGDIAPI DWORD WINAPI GetGlyphIndicesA( _In_ HDC hdc, _In_reads_(c) LPCSTR lpstr, _In_ int c, _Out_writes_(c) LPWORD pgi, _In_ DWORD fl);
WINGDIAPI DWORD WINAPI GetGlyphIndicesW( _In_ HDC hdc, _In_reads_(c) LPCWSTR lpstr, _In_ int c, _Out_writes_(c) LPWORD pgi, _In_ DWORD fl);
WINGDIAPI BOOL WINAPI GetTextExtentPointI(_In_ HDC hdc, _In_reads_(cgi) LPWORD pgiIn, _In_ int cgi, _Out_ LPSIZE psize);
WINGDIAPI BOOL WINAPI GetTextExtentExPointI ( _In_ HDC hdc,
                                                _In_reads_(cwchString) LPWORD lpwszString,
                                                _In_ int cwchString,
                                                _In_ int nMaxExtent,
                                                _Out_opt_ LPINT lpnFit,
                                                _Out_writes_to_opt_(cwchString, *lpnFit) LPINT lpnDx,
                                                _Out_ LPSIZE lpSize
                                                );
WINGDIAPI BOOL WINAPI GetCharWidthI( _In_ HDC hdc,
                                        _In_ UINT giFirst,
                                        _In_ UINT cgi,
                                        _In_reads_opt_(cgi) LPWORD pgi,
                                        _Out_writes_(cgi) LPINT piWidths
                                        );
WINGDIAPI BOOL WINAPI GetCharABCWidthsI( _In_ HDC hdc,
                                            _In_ UINT giFirst,
                                            _In_ UINT cgi,
                                            _In_reads_opt_(cgi) LPWORD pgi,
                                            _Out_writes_(cgi) LPABC pabc
                                        );
typedef struct tagDESIGNVECTOR
{
    DWORD dvReserved;
    DWORD dvNumAxes;
    LONG dvValues[MM_MAX_NUMAXES];
} DESIGNVECTOR, *PDESIGNVECTOR, FAR *LPDESIGNVECTOR;
WINGDIAPI int WINAPI AddFontResourceExA( _In_ LPCSTR name, _In_ DWORD fl, _Reserved_ PVOID res);
WINGDIAPI int WINAPI AddFontResourceExW( _In_ LPCWSTR name, _In_ DWORD fl, _Reserved_ PVOID res);
WINGDIAPI BOOL WINAPI RemoveFontResourceExA( _In_ LPCSTR name, _In_ DWORD fl, _Reserved_ PVOID pdv);
WINGDIAPI BOOL WINAPI RemoveFontResourceExW( _In_ LPCWSTR name, _In_ DWORD fl, _Reserved_ PVOID pdv);
WINGDIAPI HANDLE WINAPI AddFontMemResourceEx( _In_reads_bytes_(cjSize) PVOID pFileView,
                                                _In_ DWORD cjSize,
                                                _Reserved_ PVOID pvResrved,
                                                _In_ DWORD* pNumFonts);
WINGDIAPI BOOL WINAPI RemoveFontMemResourceEx( _In_ HANDLE h);
typedef struct tagAXISINFOA
{
    LONG axMinValue;
    LONG axMaxValue;
    BYTE axAxisName[MM_MAX_AXES_NAMELEN];
} AXISINFOA, *PAXISINFOA, FAR *LPAXISINFOA;
typedef struct tagAXISINFOW
{
    LONG axMinValue;
    LONG axMaxValue;
    WCHAR axAxisName[MM_MAX_AXES_NAMELEN];
} AXISINFOW, *PAXISINFOW, FAR *LPAXISINFOW;
typedef AXISINFOW AXISINFO;
typedef PAXISINFOW PAXISINFO;
typedef LPAXISINFOW LPAXISINFO;
typedef struct tagAXESLISTA
{
    DWORD axlReserved;
    DWORD axlNumAxes;
    AXISINFOA axlAxisInfo[MM_MAX_NUMAXES];
} AXESLISTA, *PAXESLISTA, FAR *LPAXESLISTA;
typedef struct tagAXESLISTW
{
    DWORD axlReserved;
    DWORD axlNumAxes;
    AXISINFOW axlAxisInfo[MM_MAX_NUMAXES];
} AXESLISTW, *PAXESLISTW, FAR *LPAXESLISTW;
typedef AXESLISTW AXESLIST;
typedef PAXESLISTW PAXESLIST;
typedef LPAXESLISTW LPAXESLIST;
typedef struct tagENUMLOGFONTEXDVA
{
    ENUMLOGFONTEXA elfEnumLogfontEx;
    DESIGNVECTOR elfDesignVector;
} ENUMLOGFONTEXDVA, *PENUMLOGFONTEXDVA, FAR *LPENUMLOGFONTEXDVA;
typedef struct tagENUMLOGFONTEXDVW
{
    ENUMLOGFONTEXW elfEnumLogfontEx;
    DESIGNVECTOR elfDesignVector;
} ENUMLOGFONTEXDVW, *PENUMLOGFONTEXDVW, FAR *LPENUMLOGFONTEXDVW;
typedef ENUMLOGFONTEXDVW ENUMLOGFONTEXDV;
typedef PENUMLOGFONTEXDVW PENUMLOGFONTEXDV;
typedef LPENUMLOGFONTEXDVW LPENUMLOGFONTEXDV;
WINGDIAPI HFONT WINAPI CreateFontIndirectExA( _In_ CONST ENUMLOGFONTEXDVA *);
WINGDIAPI HFONT WINAPI CreateFontIndirectExW( _In_ CONST ENUMLOGFONTEXDVW *);
typedef struct tagENUMTEXTMETRICA
{
    NEWTEXTMETRICEXA etmNewTextMetricEx;
    AXESLISTA etmAxesList;
} ENUMTEXTMETRICA, *PENUMTEXTMETRICA, FAR *LPENUMTEXTMETRICA;
typedef struct tagENUMTEXTMETRICW
{
    NEWTEXTMETRICEXW etmNewTextMetricEx;
    AXESLISTW etmAxesList;
} ENUMTEXTMETRICW, *PENUMTEXTMETRICW, FAR *LPENUMTEXTMETRICW;
typedef ENUMTEXTMETRICW ENUMTEXTMETRIC;
typedef PENUMTEXTMETRICW PENUMTEXTMETRIC;
typedef LPENUMTEXTMETRICW LPENUMTEXTMETRIC;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINGDIAPI BOOL WINAPI GetViewportExtEx( _In_ HDC hdc, _Out_ LPSIZE lpsize);
WINGDIAPI BOOL WINAPI GetViewportOrgEx( _In_ HDC hdc, _Out_ LPPOINT lppoint);
WINGDIAPI BOOL WINAPI GetWindowExtEx( _In_ HDC hdc, _Out_ LPSIZE lpsize);
WINGDIAPI BOOL WINAPI GetWindowOrgEx( _In_ HDC hdc, _Out_ LPPOINT lppoint);
 WINGDIAPI int WINAPI IntersectClipRect( _In_ HDC hdc, _In_ int left, _In_ int top, _In_ int right, _In_ int bottom);
 WINGDIAPI BOOL WINAPI InvertRgn( _In_ HDC hdc, _In_ HRGN hrgn);
WINGDIAPI BOOL WINAPI LineDDA( _In_ int xStart, _In_ int yStart, _In_ int xEnd, _In_ int yEnd, _In_ LINEDDAPROC lpProc, _In_opt_ LPARAM data);
 WINGDIAPI BOOL WINAPI LineTo( _In_ HDC hdc, _In_ int x, _In_ int y);
WINGDIAPI BOOL WINAPI MaskBlt( _In_ HDC hdcDest, _In_ int xDest, _In_ int yDest, _In_ int width, _In_ int height,
              _In_ HDC hdcSrc, _In_ int xSrc, _In_ int ySrc, _In_ HBITMAP hbmMask, _In_ int xMask, _In_ int yMask, _In_ DWORD rop);
WINGDIAPI BOOL WINAPI PlgBlt( _In_ HDC hdcDest, _In_reads_(3) CONST POINT * lpPoint, _In_ HDC hdcSrc, _In_ int xSrc, _In_ int ySrc, _In_ int width,
                     _In_ int height, _In_opt_ HBITMAP hbmMask, _In_ int xMask, _In_ int yMask);
 WINGDIAPI int WINAPI OffsetClipRgn(_In_ HDC hdc, _In_ int x, _In_ int y);
WINGDIAPI int WINAPI OffsetRgn(_In_ HRGN hrgn, _In_ int x, _In_ int y);
 WINGDIAPI BOOL WINAPI PatBlt(_In_ HDC hdc, _In_ int x, _In_ int y, _In_ int w, _In_ int h, _In_ DWORD rop);
 WINGDIAPI BOOL WINAPI Pie(_In_ HDC hdc, _In_ int left, _In_ int top, _In_ int right, _In_ int bottom, _In_ int xr1, _In_ int yr1, _In_ int xr2, _In_ int yr2);
WINGDIAPI BOOL WINAPI PlayMetaFile(_In_ HDC hdc, _In_ HMETAFILE hmf);
 WINGDIAPI BOOL WINAPI PaintRgn(_In_ HDC hdc, _In_ HRGN hrgn);
 WINGDIAPI BOOL WINAPI PolyPolygon(_In_ HDC hdc, _In_ CONST POINT *apt, _In_reads_(csz) CONST INT *asz, _In_ int csz);
WINGDIAPI BOOL WINAPI PtInRegion(_In_ HRGN hrgn, _In_ int x, _In_ int y);
WINGDIAPI BOOL WINAPI PtVisible(_In_ HDC hdc, _In_ int x, _In_ int y);
WINGDIAPI BOOL WINAPI RectInRegion(_In_ HRGN hrgn, _In_ CONST RECT * lprect);
WINGDIAPI BOOL WINAPI RectVisible(_In_ HDC hdc, _In_ CONST RECT * lprect);
 WINGDIAPI BOOL WINAPI Rectangle(_In_ HDC hdc, _In_ int left, _In_ int top, _In_ int right, _In_ int bottom);
 WINGDIAPI BOOL WINAPI RestoreDC(_In_ HDC hdc, _In_ int nSavedDC);
 WINGDIAPI HDC WINAPI ResetDCA(_In_ HDC hdc, _In_ CONST DEVMODEA * lpdm);
 WINGDIAPI HDC WINAPI ResetDCW(_In_ HDC hdc, _In_ CONST DEVMODEW * lpdm);
 WINGDIAPI UINT WINAPI RealizePalette(_In_ HDC hdc);
WINGDIAPI BOOL WINAPI RemoveFontResourceA(_In_ LPCSTR lpFileName);
WINGDIAPI BOOL WINAPI RemoveFontResourceW(_In_ LPCWSTR lpFileName);
 WINGDIAPI BOOL WINAPI RoundRect(_In_ HDC hdc, _In_ int left, _In_ int top, _In_ int right, _In_ int bottom, _In_ int width, _In_ int height);
 WINGDIAPI BOOL WINAPI ResizePalette(_In_ HPALETTE hpal, _In_ UINT n);
 WINGDIAPI int WINAPI SaveDC(_In_ HDC hdc);
 WINGDIAPI int WINAPI SelectClipRgn(_In_ HDC hdc, _In_opt_ HRGN hrgn);
WINGDIAPI int WINAPI ExtSelectClipRgn(_In_ HDC hdc, _In_opt_ HRGN hrgn, _In_ int mode);
WINGDIAPI int WINAPI SetMetaRgn(_In_ HDC hdc);
 WINGDIAPI HGDIOBJ WINAPI SelectObject(_In_ HDC hdc, _In_ HGDIOBJ h);
 WINGDIAPI HPALETTE WINAPI SelectPalette(_In_ HDC hdc, _In_ HPALETTE hPal, _In_ BOOL bForceBkgd);
 WINGDIAPI COLORREF WINAPI SetBkColor(_In_ HDC hdc, _In_ COLORREF color);
WINGDIAPI COLORREF WINAPI SetDCBrushColor(_In_ HDC hdc, _In_ COLORREF color);
WINGDIAPI COLORREF WINAPI SetDCPenColor(_In_ HDC hdc, _In_ COLORREF color);
 WINGDIAPI int WINAPI SetBkMode(_In_ HDC hdc, _In_ int mode);
WINGDIAPI
LONG WINAPI
SetBitmapBits(
    _In_ HBITMAP hbm,
    _In_ DWORD cb,
    _In_reads_bytes_(cb) CONST VOID *pvBits);
WINGDIAPI UINT WINAPI SetBoundsRect(_In_ HDC hdc, _In_opt_ CONST RECT * lprect, _In_ UINT flags);
WINGDIAPI int WINAPI SetDIBits(_In_opt_ HDC hdc, _In_ HBITMAP hbm, _In_ UINT start, _In_ UINT cLines, _In_ CONST VOID *lpBits, _In_ CONST BITMAPINFO * lpbmi, _In_ UINT ColorUse);
 WINGDIAPI int WINAPI SetDIBitsToDevice(_In_ HDC hdc, _In_ int xDest, _In_ int yDest, _In_ DWORD w, _In_ DWORD h, _In_ int xSrc,
        _In_ int ySrc, _In_ UINT StartScan, _In_ UINT cLines, _In_ CONST VOID * lpvBits, _In_ CONST BITMAPINFO * lpbmi, _In_ UINT ColorUse);
 WINGDIAPI DWORD WINAPI SetMapperFlags(_In_ HDC hdc, _In_ DWORD flags);
WINGDIAPI int WINAPI SetGraphicsMode(_In_ HDC hdc, _In_ int iMode);
 WINGDIAPI int WINAPI SetMapMode(_In_ HDC hdc, _In_ int iMode);
 WINGDIAPI DWORD WINAPI SetLayout(_In_ HDC hdc, _In_ DWORD l);
WINGDIAPI DWORD WINAPI GetLayout(_In_ HDC hdc);
WINGDIAPI HMETAFILE WINAPI SetMetaFileBitsEx(_In_ UINT cbBuffer, _In_reads_bytes_(cbBuffer) CONST BYTE *lpData);
 WINGDIAPI UINT WINAPI SetPaletteEntries( _In_ HPALETTE hpal,
                                            _In_ UINT iStart,
                                            _In_ UINT cEntries,
                                            _In_reads_(cEntries) CONST PALETTEENTRY *pPalEntries);
 WINGDIAPI COLORREF WINAPI SetPixel(_In_ HDC hdc, _In_ int x, _In_ int y, _In_ COLORREF color);
WINGDIAPI BOOL WINAPI SetPixelV(_In_ HDC hdc, _In_ int x, _In_ int y, _In_ COLORREF color);
WINGDIAPI BOOL WINAPI SetPixelFormat(_In_ HDC hdc, _In_ int format, _In_ CONST PIXELFORMATDESCRIPTOR * ppfd);
 WINGDIAPI int WINAPI SetPolyFillMode(_In_ HDC hdc, _In_ int mode);
 WINGDIAPI BOOL WINAPI StretchBlt(_In_ HDC hdcDest, _In_ int xDest, _In_ int yDest, _In_ int wDest, _In_ int hDest, _In_opt_ HDC hdcSrc, _In_ int xSrc, _In_ int ySrc, _In_ int wSrc, _In_ int hSrc, _In_ DWORD rop);
WINGDIAPI BOOL WINAPI SetRectRgn(_In_ HRGN hrgn, _In_ int left, _In_ int top, _In_ int right, _In_ int bottom);
 WINGDIAPI int WINAPI StretchDIBits(_In_ HDC hdc, _In_ int xDest, _In_ int yDest, _In_ int DestWidth, _In_ int DestHeight, _In_ int xSrc, _In_ int ySrc, _In_ int SrcWidth, _In_ int SrcHeight,
        _In_opt_ CONST VOID * lpBits, _In_ CONST BITMAPINFO * lpbmi, _In_ UINT iUsage, _In_ DWORD rop);
 WINGDIAPI int WINAPI SetROP2(_In_ HDC hdc, _In_ int rop2);
 WINGDIAPI int WINAPI SetStretchBltMode(_In_ HDC hdc, _In_ int mode);
WINGDIAPI UINT WINAPI SetSystemPaletteUse(_In_ HDC hdc, _In_ UINT use);
 WINGDIAPI int WINAPI SetTextCharacterExtra(_In_ HDC hdc, _In_ int extra);
 WINGDIAPI COLORREF WINAPI SetTextColor(_In_ HDC hdc, _In_ COLORREF color);
 WINGDIAPI UINT WINAPI SetTextAlign(_In_ HDC hdc, _In_ UINT align);
 WINGDIAPI BOOL WINAPI SetTextJustification(_In_ HDC hdc, _In_ int extra, _In_ int count);
WINGDIAPI BOOL WINAPI UpdateColors(_In_ HDC hdc);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef PVOID (WINAPI *GDIMARSHALLOC)(DWORD dwSize, _In_ LPVOID pGdiRef);
typedef HRESULT (WINAPI *DDRAWMARSHCALLBACKMARSHAL)(_In_ HGDIOBJ hGdiObj, _In_ LPVOID pGdiRef, _Out_ LPVOID *ppDDrawRef);
typedef HRESULT (WINAPI *DDRAWMARSHCALLBACKUNMARSHAL)(_In_ LPVOID pData, _Out_ HDC *phdc, _Out_ LPVOID *ppDDrawRef);
typedef HRESULT (WINAPI *DDRAWMARSHCALLBACKRELEASE)(_In_ LPVOID pDDrawRef);
typedef struct {
    DWORD dwSize;
    DWORD dwVersion;
    DDRAWMARSHCALLBACKMARSHAL pfnDdMarshal;
    DDRAWMARSHCALLBACKUNMARSHAL pfnDdUnmarshal;
    DDRAWMARSHCALLBACKRELEASE pfnDdRelease;
} GDIREGISTERDDRAWPACKET, *PGDIREGISTERDDRAWPACKET;
WINGDIAPI BOOL WINAPI GdiRegisterDdraw(_In_ PGDIREGISTERDDRAWPACKET pPacket, _Out_ GDIMARSHALLOC *ppfnGdiAlloc);
WINGDIAPI ULONG WINAPI GdiMarshalSize(VOID);
WINGDIAPI VOID WINAPI GdiMarshal(DWORD dwProcessIdTo, _In_ HGDIOBJ hGdiObj, _Inout_ PVOID pData, ULONG ulFlags);
WINGDIAPI HGDIOBJ WINAPI GdiUnmarshal(_In_ PVOID pData, ULONG ulFlags);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef USHORT COLOR16;
typedef struct _TRIVERTEX
{
    LONG x;
    LONG y;
    COLOR16 Red;
    COLOR16 Green;
    COLOR16 Blue;
    COLOR16 Alpha;
}TRIVERTEX,*PTRIVERTEX,*LPTRIVERTEX;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _GRADIENT_TRIANGLE
{
    ULONG Vertex1;
    ULONG Vertex2;
    ULONG Vertex3;
} GRADIENT_TRIANGLE,*PGRADIENT_TRIANGLE,*LPGRADIENT_TRIANGLE;
typedef struct _GRADIENT_RECT
{
    ULONG UpperLeft;
    ULONG LowerRight;
}GRADIENT_RECT,*PGRADIENT_RECT,*LPGRADIENT_RECT;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct _BLENDFUNCTION
{
    BYTE BlendOp;
    BYTE BlendFlags;
    BYTE SourceConstantAlpha;
    BYTE AlphaFormat;
}BLENDFUNCTION,*PBLENDFUNCTION;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINGDIAPI BOOL WINAPI AlphaBlend(
    _In_ HDC hdcDest,
    _In_ int xoriginDest,
    _In_ int yoriginDest,
    _In_ int wDest,
    _In_ int hDest,
    _In_ HDC hdcSrc,
    _In_ int xoriginSrc,
    _In_ int yoriginSrc,
    _In_ int wSrc,
    _In_ int hSrc,
    _In_ BLENDFUNCTION ftn);
WINGDIAPI BOOL WINAPI TransparentBlt(
    _In_ HDC hdcDest,
    _In_ int xoriginDest,
    _In_ int yoriginDest,
    _In_ int wDest,
    _In_ int hDest,
    _In_ HDC hdcSrc,
    _In_ int xoriginSrc,
    _In_ int yoriginSrc,
    _In_ int wSrc,
    _In_ int hSrc,
    _In_ UINT crTransparent);
WINGDIAPI
BOOL
WINAPI
GradientFill(
    _In_ HDC hdc,
    _In_reads_(nVertex) PTRIVERTEX pVertex,
    _In_ ULONG nVertex,
    _In_ PVOID pMesh,
    _In_ ULONG nMesh,
    _In_ ULONG ulMode
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINGDIAPI BOOL WINAPI GdiAlphaBlend(_In_ HDC hdcDest, _In_ int xoriginDest, _In_ int yoriginDest, _In_ int wDest, _In_ int hDest, _In_ HDC hdcSrc, _In_ int xoriginSrc, _In_ int yoriginSrc, _In_ int wSrc, _In_ int hSrc, _In_ BLENDFUNCTION ftn);
WINGDIAPI BOOL WINAPI GdiTransparentBlt(_In_ HDC hdcDest,_In_ int xoriginDest, _In_ int yoriginDest, _In_ int wDest, _In_ int hDest, _In_ HDC hdcSrc,
                                           _In_ int xoriginSrc, _In_ int yoriginSrc, _In_ int wSrc, _In_ int hSrc, _In_ UINT crTransparent);
WINGDIAPI BOOL WINAPI GdiGradientFill( _In_ HDC hdc,
                                        _In_reads_(nVertex) PTRIVERTEX pVertex,
                                        _In_ ULONG nVertex,
                                        _In_ PVOID pMesh,
                                        _In_ ULONG nCount,
                                        _In_ ULONG ulMode);
WINGDIAPI BOOL WINAPI PlayMetaFileRecord( _In_ HDC hdc,
                                            _In_reads_(noObjs) LPHANDLETABLE lpHandleTable,
                                            _In_ LPMETARECORD lpMR,
                                            _In_ UINT noObjs);
typedef int (CALLBACK* MFENUMPROC)( _In_ HDC hdc, _In_reads_(nObj) HANDLETABLE FAR* lpht, _In_ METARECORD FAR* lpMR, _In_ int nObj, _In_opt_ LPARAM param);
WINGDIAPI BOOL WINAPI EnumMetaFile( _In_ HDC hdc, _In_ HMETAFILE hmf, _In_ MFENUMPROC proc, _In_opt_ LPARAM param);
typedef int (CALLBACK* ENHMFENUMPROC)(_In_ HDC hdc, _In_reads_(nHandles) HANDLETABLE FAR* lpht, _In_ CONST ENHMETARECORD * lpmr, _In_ int nHandles, _In_opt_ LPARAM data);
WINGDIAPI HENHMETAFILE WINAPI CloseEnhMetaFile( _In_ HDC hdc);
WINGDIAPI HENHMETAFILE WINAPI CopyEnhMetaFileA( _In_ HENHMETAFILE hEnh, _In_opt_ LPCSTR lpFileName);
WINGDIAPI HENHMETAFILE WINAPI CopyEnhMetaFileW( _In_ HENHMETAFILE hEnh, _In_opt_ LPCWSTR lpFileName);
WINGDIAPI HDC WINAPI CreateEnhMetaFileA( _In_opt_ HDC hdc, _In_opt_ LPCSTR lpFilename, _In_opt_ CONST RECT *lprc, _In_opt_ LPCSTR lpDesc);
WINGDIAPI HDC WINAPI CreateEnhMetaFileW( _In_opt_ HDC hdc, _In_opt_ LPCWSTR lpFilename, _In_opt_ CONST RECT *lprc, _In_opt_ LPCWSTR lpDesc);
WINGDIAPI BOOL WINAPI DeleteEnhMetaFile( _In_opt_ HENHMETAFILE hmf);
WINGDIAPI BOOL WINAPI EnumEnhMetaFile( _In_opt_ HDC hdc, _In_ HENHMETAFILE hmf, _In_ ENHMFENUMPROC proc,
                                        _In_opt_ LPVOID param, _In_opt_ CONST RECT * lpRect);
WINGDIAPI HENHMETAFILE WINAPI GetEnhMetaFileA( _In_ LPCSTR lpName);
WINGDIAPI HENHMETAFILE WINAPI GetEnhMetaFileW( _In_ LPCWSTR lpName);
WINGDIAPI UINT WINAPI GetEnhMetaFileBits( _In_ HENHMETAFILE hEMF,
                                            _In_ UINT nSize,
                                            _Out_writes_bytes_opt_(nSize) LPBYTE lpData);
WINGDIAPI UINT WINAPI GetEnhMetaFileDescriptionA( _In_ HENHMETAFILE hemf,
                                                    _In_ UINT cchBuffer,
                                                    _Out_writes_opt_(cchBuffer) LPSTR lpDescription);
WINGDIAPI UINT WINAPI GetEnhMetaFileDescriptionW( _In_ HENHMETAFILE hemf,
                                                    _In_ UINT cchBuffer,
                                                    _Out_writes_opt_(cchBuffer) LPWSTR lpDescription);
WINGDIAPI UINT WINAPI GetEnhMetaFileHeader( _In_ HENHMETAFILE hemf,
                                                _In_ UINT nSize,
                                                _Out_writes_bytes_opt_(nSize) LPENHMETAHEADER lpEnhMetaHeader);
WINGDIAPI UINT WINAPI GetEnhMetaFilePaletteEntries(_In_ HENHMETAFILE hemf,
                                                    _In_ UINT nNumEntries,
                                                    _Out_writes_opt_(nNumEntries) LPPALETTEENTRY lpPaletteEntries);
WINGDIAPI UINT WINAPI GetEnhMetaFilePixelFormat( _In_ HENHMETAFILE hemf,
                                                    _In_ UINT cbBuffer,
                                                    _Out_writes_bytes_opt_(cbBuffer) PIXELFORMATDESCRIPTOR *ppfd);
WINGDIAPI UINT WINAPI GetWinMetaFileBits( _In_ HENHMETAFILE hemf,
                                            _In_ UINT cbData16,
                                            _Out_writes_bytes_opt_(cbData16) LPBYTE pData16,
                                            _In_ INT iMapMode,
                                            _In_ HDC hdcRef);
WINGDIAPI BOOL WINAPI PlayEnhMetaFile( _In_ HDC hdc, _In_ HENHMETAFILE hmf, _In_ CONST RECT * lprect);
WINGDIAPI BOOL WINAPI PlayEnhMetaFileRecord( _In_ HDC hdc,
                                                _In_reads_(cht) LPHANDLETABLE pht,
                                                _In_ CONST ENHMETARECORD *pmr,
                                                _In_ UINT cht);
WINGDIAPI HENHMETAFILE WINAPI SetEnhMetaFileBits( _In_ UINT nSize,
                                                    _In_reads_bytes_(nSize) CONST BYTE * pb);
WINGDIAPI HENHMETAFILE WINAPI SetWinMetaFileBits( _In_ UINT nSize,
                                                    _In_reads_bytes_(nSize) CONST BYTE *lpMeta16Data,
                                                    _In_opt_ HDC hdcRef,
                                                    _In_opt_ CONST METAFILEPICT *lpMFP);
WINGDIAPI BOOL WINAPI GdiComment(_In_ HDC hdc, _In_ UINT nSize, _In_reads_bytes_(nSize) CONST BYTE *lpData);
WINGDIAPI BOOL WINAPI GetTextMetricsA( _In_ HDC hdc, _Out_ LPTEXTMETRICA lptm);
WINGDIAPI BOOL WINAPI GetTextMetricsW( _In_ HDC hdc, _Out_ LPTEXTMETRICW lptm);
typedef struct tagDIBSECTION {
    BITMAP dsBm;
    BITMAPINFOHEADER dsBmih;
    DWORD dsBitfields[3];
    HANDLE dshSection;
    DWORD dsOffset;
} DIBSECTION, FAR *LPDIBSECTION, *PDIBSECTION;
WINGDIAPI BOOL WINAPI AngleArc( _In_ HDC hdc, _In_ int x, _In_ int y, _In_ DWORD r, _In_ FLOAT StartAngle, _In_ FLOAT SweepAngle);
WINGDIAPI BOOL WINAPI PolyPolyline(_In_ HDC hdc, _In_ CONST POINT *apt, _In_reads_(csz) CONST DWORD *asz, _In_ DWORD csz);
WINGDIAPI BOOL WINAPI GetWorldTransform( _In_ HDC hdc, _Out_ LPXFORM lpxf);
WINGDIAPI BOOL WINAPI SetWorldTransform( _In_ HDC hdc, _In_ CONST XFORM * lpxf);
WINGDIAPI BOOL WINAPI ModifyWorldTransform( _In_ HDC hdc, _In_opt_ CONST XFORM * lpxf, _In_ DWORD mode);
WINGDIAPI BOOL WINAPI CombineTransform( _Out_ LPXFORM lpxfOut, _In_ CONST XFORM *lpxf1, _In_ CONST XFORM *lpxf2);
WINGDIAPI _Success_(return != NULL) HBITMAP WINAPI CreateDIBSection(
    _In_opt_ HDC hdc,
    _In_ CONST BITMAPINFO *pbmi,
    _In_ UINT usage,
    _When_((pbmi->bmiHeader.biBitCount != 0), _Outptr_result_bytebuffer_(_Inexpressible_(GDI_DIBSIZE((pbmi->bmiHeader)))))
    _When_((pbmi->bmiHeader.biBitCount == 0), _Outptr_result_bytebuffer_((pbmi->bmiHeader).biSizeImage))
                    VOID **ppvBits,
    _In_opt_ HANDLE hSection,
    _In_ DWORD offset);
_Ret_range_(0,cEntries)
WINGDIAPI UINT WINAPI GetDIBColorTable( _In_ HDC hdc,
                                        _In_ UINT iStart,
                                        _In_ UINT cEntries,
                                        _Out_writes_to_(cEntries,return) RGBQUAD *prgbq);
WINGDIAPI UINT WINAPI SetDIBColorTable( _In_ HDC hdc,
                                        _In_ UINT iStart,
                                        _In_ UINT cEntries,
                                        _In_reads_(cEntries) CONST RGBQUAD *prgbq);
typedef struct tagCOLORADJUSTMENT {
    WORD caSize;
    WORD caFlags;
    WORD caIlluminantIndex;
    WORD caRedGamma;
    WORD caGreenGamma;
    WORD caBlueGamma;
    WORD caReferenceBlack;
    WORD caReferenceWhite;
    SHORT caContrast;
    SHORT caBrightness;
    SHORT caColorfulness;
    SHORT caRedGreenTint;
} COLORADJUSTMENT, *PCOLORADJUSTMENT, FAR *LPCOLORADJUSTMENT;
WINGDIAPI BOOL WINAPI SetColorAdjustment( _In_ HDC hdc, _In_ CONST COLORADJUSTMENT *lpca);
WINGDIAPI BOOL WINAPI GetColorAdjustment( _In_ HDC hdc, _Out_ LPCOLORADJUSTMENT lpca);
WINGDIAPI HPALETTE WINAPI CreateHalftonePalette( _In_opt_ HDC hdc);
typedef BOOL (CALLBACK* ABORTPROC)( _In_ HDC, _In_ int);
typedef struct _DOCINFOA {
    int cbSize;
    LPCSTR lpszDocName;
    LPCSTR lpszOutput;
    LPCSTR lpszDatatype;
    DWORD fwType;
} DOCINFOA, *LPDOCINFOA;
typedef struct _DOCINFOW {
    int cbSize;
    LPCWSTR lpszDocName;
    LPCWSTR lpszOutput;
    LPCWSTR lpszDatatype;
    DWORD fwType;
} DOCINFOW, *LPDOCINFOW;
typedef DOCINFOW DOCINFO;
typedef LPDOCINFOW LPDOCINFO;
 WINGDIAPI int WINAPI StartDocA(_In_ HDC hdc, _In_ CONST DOCINFOA *lpdi);
 WINGDIAPI int WINAPI StartDocW(_In_ HDC hdc, _In_ CONST DOCINFOW *lpdi);
 WINGDIAPI int WINAPI EndDoc(_In_ HDC hdc);
 WINGDIAPI int WINAPI StartPage(_In_ HDC hdc);
 WINGDIAPI int WINAPI EndPage(_In_ HDC hdc);
 WINGDIAPI int WINAPI AbortDoc(_In_ HDC hdc);
WINGDIAPI int WINAPI SetAbortProc(_In_ HDC hdc, _In_ ABORTPROC proc);
WINGDIAPI BOOL WINAPI AbortPath(_In_ HDC hdc);
WINGDIAPI BOOL WINAPI ArcTo(_In_ HDC hdc, _In_ int left, _In_ int top, _In_ int right, _In_ int bottom, _In_ int xr1, _In_ int yr1, _In_ int xr2, _In_ int yr2);
WINGDIAPI BOOL WINAPI BeginPath(_In_ HDC hdc);
WINGDIAPI BOOL WINAPI CloseFigure(_In_ HDC hdc);
WINGDIAPI BOOL WINAPI EndPath(_In_ HDC hdc);
WINGDIAPI BOOL WINAPI FillPath(_In_ HDC hdc);
WINGDIAPI BOOL WINAPI FlattenPath(_In_ HDC hdc);
WINGDIAPI int WINAPI GetPath(_In_ HDC hdc, _Out_writes_opt_(cpt) LPPOINT apt, _Out_writes_opt_(cpt) LPBYTE aj, int cpt);
WINGDIAPI HRGN WINAPI PathToRegion(_In_ HDC hdc);
WINGDIAPI BOOL WINAPI PolyDraw(_In_ HDC hdc, _In_reads_(cpt) CONST POINT * apt, _In_reads_(cpt) CONST BYTE * aj, _In_ int cpt);
WINGDIAPI BOOL WINAPI SelectClipPath(_In_ HDC hdc, _In_ int mode);
WINGDIAPI int WINAPI SetArcDirection(_In_ HDC hdc, _In_ int dir);
WINGDIAPI BOOL WINAPI SetMiterLimit(_In_ HDC hdc, _In_ FLOAT limit, _Out_opt_ PFLOAT old);
WINGDIAPI BOOL WINAPI StrokeAndFillPath(_In_ HDC hdc);
WINGDIAPI BOOL WINAPI StrokePath(_In_ HDC hdc);
WINGDIAPI BOOL WINAPI WidenPath(_In_ HDC hdc);
WINGDIAPI HPEN WINAPI ExtCreatePen( _In_ DWORD iPenStyle,
                                    _In_ DWORD cWidth,
                                    _In_ CONST LOGBRUSH *plbrush,
                                    _In_ DWORD cStyle,
                                    _In_reads_opt_(cStyle) CONST DWORD *pstyle);
WINGDIAPI BOOL WINAPI GetMiterLimit(_In_ HDC hdc, _Out_ PFLOAT plimit);
WINGDIAPI int WINAPI GetArcDirection(_In_ HDC hdc);
WINGDIAPI int WINAPI GetObjectA(_In_ HANDLE h, _In_ int c, _Out_writes_bytes_opt_(c) LPVOID pv);
WINGDIAPI int WINAPI GetObjectW(_In_ HANDLE h, _In_ int c, _Out_writes_bytes_opt_(c) LPVOID pv);
 WINGDIAPI BOOL WINAPI MoveToEx( _In_ HDC hdc, _In_ int x, _In_ int y, _Out_opt_ LPPOINT lppt);
 WINGDIAPI BOOL WINAPI TextOutA( _In_ HDC hdc, _In_ int x, _In_ int y, _In_reads_(c) LPCSTR lpString, _In_ int c);
 WINGDIAPI BOOL WINAPI TextOutW( _In_ HDC hdc, _In_ int x, _In_ int y, _In_reads_(c) LPCWSTR lpString, _In_ int c);
 WINGDIAPI BOOL WINAPI ExtTextOutA( _In_ HDC hdc, _In_ int x, _In_ int y, _In_ UINT options, _In_opt_ CONST RECT * lprect, _In_reads_opt_(c) LPCSTR lpString, _In_ UINT c, _In_reads_opt_(c) CONST INT * lpDx);
 WINGDIAPI BOOL WINAPI ExtTextOutW( _In_ HDC hdc, _In_ int x, _In_ int y, _In_ UINT options, _In_opt_ CONST RECT * lprect, _In_reads_opt_(c) LPCWSTR lpString, _In_ UINT c, _In_reads_opt_(c) CONST INT * lpDx);
WINGDIAPI BOOL WINAPI PolyTextOutA(_In_ HDC hdc, _In_reads_(nstrings) CONST POLYTEXTA * ppt, _In_ int nstrings);
WINGDIAPI BOOL WINAPI PolyTextOutW(_In_ HDC hdc, _In_reads_(nstrings) CONST POLYTEXTW * ppt, _In_ int nstrings);
WINGDIAPI HRGN WINAPI CreatePolygonRgn( _In_reads_(cPoint) CONST POINT *pptl,
                                            _In_ int cPoint,
                                            _In_ int iMode);
WINGDIAPI BOOL WINAPI DPtoLP( _In_ HDC hdc, _Inout_updates_(c) LPPOINT lppt, _In_ int c);
WINGDIAPI BOOL WINAPI LPtoDP( _In_ HDC hdc, _Inout_updates_(c) LPPOINT lppt, _In_ int c);
 WINGDIAPI BOOL WINAPI Polygon(_In_ HDC hdc, _In_reads_(cpt) CONST POINT *apt, _In_ int cpt);
 WINGDIAPI BOOL WINAPI Polyline(_In_ HDC hdc, _In_reads_(cpt) CONST POINT *apt, _In_ int cpt);
WINGDIAPI BOOL WINAPI PolyBezier(_In_ HDC hdc, _In_reads_(cpt) CONST POINT * apt, _In_ DWORD cpt);
WINGDIAPI BOOL WINAPI PolyBezierTo(_In_ HDC hdc, _In_reads_(cpt) CONST POINT * apt, _In_ DWORD cpt);
WINGDIAPI BOOL WINAPI PolylineTo(_In_ HDC hdc, _In_reads_(cpt) CONST POINT * apt, _In_ DWORD cpt);
 WINGDIAPI BOOL WINAPI SetViewportExtEx( _In_ HDC hdc, _In_ int x, _In_ int y, _Out_opt_ LPSIZE lpsz);
 WINGDIAPI BOOL WINAPI SetViewportOrgEx( _In_ HDC hdc, _In_ int x, _In_ int y, _Out_opt_ LPPOINT lppt);
 WINGDIAPI BOOL WINAPI SetWindowExtEx( _In_ HDC hdc, _In_ int x, _In_ int y, _Out_opt_ LPSIZE lpsz);
 WINGDIAPI BOOL WINAPI SetWindowOrgEx( _In_ HDC hdc, _In_ int x, _In_ int y, _Out_opt_ LPPOINT lppt);
 WINGDIAPI BOOL WINAPI OffsetViewportOrgEx( _In_ HDC hdc, _In_ int x, _In_ int y, _Out_opt_ LPPOINT lppt);
 WINGDIAPI BOOL WINAPI OffsetWindowOrgEx( _In_ HDC hdc, _In_ int x, _In_ int y, _Out_opt_ LPPOINT lppt);
 WINGDIAPI BOOL WINAPI ScaleViewportExtEx( _In_ HDC hdc, _In_ int xn, _In_ int dx, _In_ int yn, _In_ int yd, _Out_opt_ LPSIZE lpsz);
 WINGDIAPI BOOL WINAPI ScaleWindowExtEx( _In_ HDC hdc, _In_ int xn, _In_ int xd, _In_ int yn, _In_ int yd, _Out_opt_ LPSIZE lpsz);
WINGDIAPI BOOL WINAPI SetBitmapDimensionEx( _In_ HBITMAP hbm, _In_ int w, _In_ int h, _Out_opt_ LPSIZE lpsz);
WINGDIAPI BOOL WINAPI SetBrushOrgEx( _In_ HDC hdc, _In_ int x, _In_ int y, _Out_opt_ LPPOINT lppt);
WINGDIAPI int WINAPI GetTextFaceA( _In_ HDC hdc, _In_ int c, _Out_writes_to_opt_(c, return) LPSTR lpName);
WINGDIAPI int WINAPI GetTextFaceW( _In_ HDC hdc, _In_ int c, _Out_writes_to_opt_(c, return) LPWSTR lpName);
typedef struct tagKERNINGPAIR {
   WORD wFirst;
   WORD wSecond;
   int iKernAmount;
} KERNINGPAIR, *LPKERNINGPAIR;
WINGDIAPI DWORD WINAPI GetKerningPairsA( _In_ HDC hdc,
                                            _In_ DWORD nPairs,
                                            _Out_writes_to_opt_(nPairs, return) LPKERNINGPAIR lpKernPair);
WINGDIAPI DWORD WINAPI GetKerningPairsW( _In_ HDC hdc,
                                            _In_ DWORD nPairs,
                                            _Out_writes_to_opt_(nPairs, return) LPKERNINGPAIR lpKernPair);
WINGDIAPI BOOL WINAPI GetDCOrgEx( _In_ HDC hdc, _Out_ LPPOINT lppt);
WINGDIAPI BOOL WINAPI FixBrushOrgEx( _In_ HDC hdc, _In_ int x, _In_ int y, _In_opt_ LPPOINT ptl);
WINGDIAPI BOOL WINAPI UnrealizeObject( _In_ HGDIOBJ h);
WINGDIAPI BOOL WINAPI GdiFlush(void);
WINGDIAPI DWORD WINAPI GdiSetBatchLimit( _In_ DWORD dw);
WINGDIAPI DWORD WINAPI GdiGetBatchLimit(void);
typedef int (CALLBACK* ICMENUMPROCA)(LPSTR, LPARAM);
typedef int (CALLBACK* ICMENUMPROCW)(LPWSTR, LPARAM);
WINGDIAPI int WINAPI SetICMMode( _In_ HDC hdc, _In_ int mode);
WINGDIAPI BOOL WINAPI CheckColorsInGamut( _In_ HDC hdc,
                                                    _In_reads_(nCount) LPRGBTRIPLE lpRGBTriple,
                                                    _Out_writes_bytes_(nCount) LPVOID dlpBuffer,
                                                    _In_ DWORD nCount);
WINGDIAPI HCOLORSPACE WINAPI GetColorSpace( _In_ HDC hdc);
WINGDIAPI BOOL WINAPI GetLogColorSpaceA( _In_ HCOLORSPACE hColorSpace,
                                                _Out_writes_bytes_(nSize) LPLOGCOLORSPACEA lpBuffer,
                                                _In_ DWORD nSize);
WINGDIAPI BOOL WINAPI GetLogColorSpaceW( _In_ HCOLORSPACE hColorSpace,
                                                _Out_writes_bytes_(nSize) LPLOGCOLORSPACEW lpBuffer,
                                                _In_ DWORD nSize);
WINGDIAPI HCOLORSPACE WINAPI CreateColorSpaceA( _In_ LPLOGCOLORSPACEA lplcs);
WINGDIAPI HCOLORSPACE WINAPI CreateColorSpaceW( _In_ LPLOGCOLORSPACEW lplcs);
WINGDIAPI HCOLORSPACE WINAPI SetColorSpace( _In_ HDC hdc, _In_ HCOLORSPACE hcs);
WINGDIAPI BOOL WINAPI DeleteColorSpace( _In_ HCOLORSPACE hcs);
WINGDIAPI BOOL WINAPI GetICMProfileA( _In_ HDC hdc,
                                                _Inout_ LPDWORD pBufSize,
                                                _Out_writes_opt_(*pBufSize) LPSTR pszFilename);
WINGDIAPI BOOL WINAPI GetICMProfileW( _In_ HDC hdc,
                                                _Inout_ LPDWORD pBufSize,
                                                _Out_writes_opt_(*pBufSize) LPWSTR pszFilename);
WINGDIAPI BOOL WINAPI SetICMProfileA( _In_ HDC hdc, _In_ LPSTR lpFileName);
WINGDIAPI BOOL WINAPI SetICMProfileW( _In_ HDC hdc, _In_ LPWSTR lpFileName);
WINGDIAPI BOOL WINAPI GetDeviceGammaRamp( _In_ HDC hdc, _Out_writes_bytes_(3*256*2) LPVOID lpRamp);
WINGDIAPI BOOL WINAPI SetDeviceGammaRamp( _In_ HDC hdc, _In_reads_bytes_(3*256*2) LPVOID lpRamp);
WINGDIAPI BOOL WINAPI ColorMatchToTarget( _In_ HDC hdc, _In_ HDC hdcTarget, _In_ DWORD action);
WINGDIAPI int WINAPI EnumICMProfilesA( _In_ HDC hdc, _In_ ICMENUMPROCA proc, _In_opt_ LPARAM param);
WINGDIAPI int WINAPI EnumICMProfilesW( _In_ HDC hdc, _In_ ICMENUMPROCW proc, _In_opt_ LPARAM param);
WINGDIAPI BOOL WINAPI UpdateICMRegKeyA( _Reserved_ DWORD reserved, _In_ LPSTR lpszCMID, _In_ LPSTR lpszFileName, _In_ UINT command);
WINGDIAPI BOOL WINAPI UpdateICMRegKeyW( _Reserved_ DWORD reserved, _In_ LPWSTR lpszCMID, _In_ LPWSTR lpszFileName, _In_ UINT command);
#pragma deprecated (UpdateICMRegKeyW)
#pragma deprecated (UpdateICMRegKeyA)
WINGDIAPI BOOL WINAPI ColorCorrectPalette( _In_ HDC hdc, _In_ HPALETTE hPal, _In_ DWORD deFirst, _In_ DWORD num);
typedef struct tagEMR
{
    DWORD iType;
    DWORD nSize;
} EMR, *PEMR;
typedef struct tagEMRTEXT
{
    POINTL ptlReference;
    DWORD nChars;
    DWORD offString;
    DWORD fOptions;
    RECTL rcl;
    DWORD offDx;
} EMRTEXT, *PEMRTEXT;
typedef struct tagABORTPATH
{
    EMR emr;
} EMRABORTPATH, *PEMRABORTPATH,
  EMRBEGINPATH, *PEMRBEGINPATH,
  EMRENDPATH, *PEMRENDPATH,
  EMRCLOSEFIGURE, *PEMRCLOSEFIGURE,
  EMRFLATTENPATH, *PEMRFLATTENPATH,
  EMRWIDENPATH, *PEMRWIDENPATH,
  EMRSETMETARGN, *PEMRSETMETARGN,
  EMRSAVEDC, *PEMRSAVEDC,
  EMRREALIZEPALETTE, *PEMRREALIZEPALETTE;
typedef struct tagEMRSELECTCLIPPATH
{
    EMR emr;
    DWORD iMode;
} EMRSELECTCLIPPATH, *PEMRSELECTCLIPPATH,
  EMRSETBKMODE, *PEMRSETBKMODE,
  EMRSETMAPMODE, *PEMRSETMAPMODE,
  EMRSETLAYOUT, *PEMRSETLAYOUT,
  EMRSETPOLYFILLMODE, *PEMRSETPOLYFILLMODE,
  EMRSETROP2, *PEMRSETROP2,
  EMRSETSTRETCHBLTMODE, *PEMRSETSTRETCHBLTMODE,
  EMRSETICMMODE, *PEMRSETICMMODE,
  EMRSETTEXTALIGN, *PEMRSETTEXTALIGN;
typedef struct tagEMRSETMITERLIMIT
{
    EMR emr;
    FLOAT eMiterLimit;
} EMRSETMITERLIMIT, *PEMRSETMITERLIMIT;
typedef struct tagEMRRESTOREDC
{
    EMR emr;
    LONG iRelative;
} EMRRESTOREDC, *PEMRRESTOREDC;
typedef struct tagEMRSETARCDIRECTION
{
    EMR emr;
    DWORD iArcDirection;
} EMRSETARCDIRECTION, *PEMRSETARCDIRECTION;
typedef struct tagEMRSETMAPPERFLAGS
{
    EMR emr;
    DWORD dwFlags;
} EMRSETMAPPERFLAGS, *PEMRSETMAPPERFLAGS;
typedef struct tagEMRSETTEXTCOLOR
{
    EMR emr;
    COLORREF crColor;
} EMRSETBKCOLOR, *PEMRSETBKCOLOR,
  EMRSETTEXTCOLOR, *PEMRSETTEXTCOLOR;
typedef struct tagEMRSELECTOBJECT
{
    EMR emr;
    DWORD ihObject;
} EMRSELECTOBJECT, *PEMRSELECTOBJECT,
  EMRDELETEOBJECT, *PEMRDELETEOBJECT;
typedef struct tagEMRSELECTPALETTE
{
    EMR emr;
    DWORD ihPal;
} EMRSELECTPALETTE, *PEMRSELECTPALETTE;
typedef struct tagEMRRESIZEPALETTE
{
    EMR emr;
    DWORD ihPal;
    DWORD cEntries;
} EMRRESIZEPALETTE, *PEMRRESIZEPALETTE;
typedef struct tagEMRSETPALETTEENTRIES
{
    EMR emr;
    DWORD ihPal;
    DWORD iStart;
    DWORD cEntries;
    PALETTEENTRY aPalEntries[1];
} EMRSETPALETTEENTRIES, *PEMRSETPALETTEENTRIES;
typedef struct tagEMRSETCOLORADJUSTMENT
{
    EMR emr;
    COLORADJUSTMENT ColorAdjustment;
} EMRSETCOLORADJUSTMENT, *PEMRSETCOLORADJUSTMENT;
typedef struct tagEMRGDICOMMENT
{
    EMR emr;
    DWORD cbData;
    BYTE Data[1];
} EMRGDICOMMENT, *PEMRGDICOMMENT;
typedef struct tagEMREOF
{
    EMR emr;
    DWORD nPalEntries;
    DWORD offPalEntries;
    DWORD nSizeLast;
} EMREOF, *PEMREOF;
typedef struct tagEMRLINETO
{
    EMR emr;
    POINTL ptl;
} EMRLINETO, *PEMRLINETO,
  EMRMOVETOEX, *PEMRMOVETOEX;
typedef struct tagEMROFFSETCLIPRGN
{
    EMR emr;
    POINTL ptlOffset;
} EMROFFSETCLIPRGN, *PEMROFFSETCLIPRGN;
typedef struct tagEMRFILLPATH
{
    EMR emr;
    RECTL rclBounds;
} EMRFILLPATH, *PEMRFILLPATH,
  EMRSTROKEANDFILLPATH, *PEMRSTROKEANDFILLPATH,
  EMRSTROKEPATH, *PEMRSTROKEPATH;
typedef struct tagEMREXCLUDECLIPRECT
{
    EMR emr;
    RECTL rclClip;
} EMREXCLUDECLIPRECT, *PEMREXCLUDECLIPRECT,
  EMRINTERSECTCLIPRECT, *PEMRINTERSECTCLIPRECT;
typedef struct tagEMRSETVIEWPORTORGEX
{
    EMR emr;
    POINTL ptlOrigin;
} EMRSETVIEWPORTORGEX, *PEMRSETVIEWPORTORGEX,
  EMRSETWINDOWORGEX, *PEMRSETWINDOWORGEX,
  EMRSETBRUSHORGEX, *PEMRSETBRUSHORGEX;
typedef struct tagEMRSETVIEWPORTEXTEX
{
    EMR emr;
    SIZEL szlExtent;
} EMRSETVIEWPORTEXTEX, *PEMRSETVIEWPORTEXTEX,
  EMRSETWINDOWEXTEX, *PEMRSETWINDOWEXTEX;
typedef struct tagEMRSCALEVIEWPORTEXTEX
{
    EMR emr;
    LONG xNum;
    LONG xDenom;
    LONG yNum;
    LONG yDenom;
} EMRSCALEVIEWPORTEXTEX, *PEMRSCALEVIEWPORTEXTEX,
  EMRSCALEWINDOWEXTEX, *PEMRSCALEWINDOWEXTEX;
typedef struct tagEMRSETWORLDTRANSFORM
{
    EMR emr;
    XFORM xform;
} EMRSETWORLDTRANSFORM, *PEMRSETWORLDTRANSFORM;
typedef struct tagEMRMODIFYWORLDTRANSFORM
{
    EMR emr;
    XFORM xform;
    DWORD iMode;
} EMRMODIFYWORLDTRANSFORM, *PEMRMODIFYWORLDTRANSFORM;
typedef struct tagEMRSETPIXELV
{
    EMR emr;
    POINTL ptlPixel;
    COLORREF crColor;
} EMRSETPIXELV, *PEMRSETPIXELV;
typedef struct tagEMREXTFLOODFILL
{
    EMR emr;
    POINTL ptlStart;
    COLORREF crColor;
    DWORD iMode;
} EMREXTFLOODFILL, *PEMREXTFLOODFILL;
typedef struct tagEMRELLIPSE
{
    EMR emr;
    RECTL rclBox;
} EMRELLIPSE, *PEMRELLIPSE,
  EMRRECTANGLE, *PEMRRECTANGLE;
typedef struct tagEMRROUNDRECT
{
    EMR emr;
    RECTL rclBox;
    SIZEL szlCorner;
} EMRROUNDRECT, *PEMRROUNDRECT;
typedef struct tagEMRARC
{
    EMR emr;
    RECTL rclBox;
    POINTL ptlStart;
    POINTL ptlEnd;
} EMRARC, *PEMRARC,
  EMRARCTO, *PEMRARCTO,
  EMRCHORD, *PEMRCHORD,
  EMRPIE, *PEMRPIE;
typedef struct tagEMRANGLEARC
{
    EMR emr;
    POINTL ptlCenter;
    DWORD nRadius;
    FLOAT eStartAngle;
    FLOAT eSweepAngle;
} EMRANGLEARC, *PEMRANGLEARC;
typedef struct tagEMRPOLYLINE
{
    EMR emr;
    RECTL rclBounds;
    DWORD cptl;
    POINTL aptl[1];
} EMRPOLYLINE, *PEMRPOLYLINE,
  EMRPOLYBEZIER, *PEMRPOLYBEZIER,
  EMRPOLYGON, *PEMRPOLYGON,
  EMRPOLYBEZIERTO, *PEMRPOLYBEZIERTO,
  EMRPOLYLINETO, *PEMRPOLYLINETO;
typedef struct tagEMRPOLYLINE16
{
    EMR emr;
    RECTL rclBounds;
    DWORD cpts;
    POINTS apts[1];
} EMRPOLYLINE16, *PEMRPOLYLINE16,
  EMRPOLYBEZIER16, *PEMRPOLYBEZIER16,
  EMRPOLYGON16, *PEMRPOLYGON16,
  EMRPOLYBEZIERTO16, *PEMRPOLYBEZIERTO16,
  EMRPOLYLINETO16, *PEMRPOLYLINETO16;
typedef struct tagEMRPOLYDRAW
{
    EMR emr;
    RECTL rclBounds;
    DWORD cptl;
    POINTL aptl[1];
    BYTE abTypes[1];
} EMRPOLYDRAW, *PEMRPOLYDRAW;
typedef struct tagEMRPOLYDRAW16
{
    EMR emr;
    RECTL rclBounds;
    DWORD cpts;
    POINTS apts[1];
    BYTE abTypes[1];
} EMRPOLYDRAW16, *PEMRPOLYDRAW16;
typedef struct tagEMRPOLYPOLYLINE
{
    EMR emr;
    RECTL rclBounds;
    DWORD nPolys;
    DWORD cptl;
    DWORD aPolyCounts[1];
    POINTL aptl[1];
} EMRPOLYPOLYLINE, *PEMRPOLYPOLYLINE,
  EMRPOLYPOLYGON, *PEMRPOLYPOLYGON;
typedef struct tagEMRPOLYPOLYLINE16
{
    EMR emr;
    RECTL rclBounds;
    DWORD nPolys;
    DWORD cpts;
    DWORD aPolyCounts[1];
    POINTS apts[1];
} EMRPOLYPOLYLINE16, *PEMRPOLYPOLYLINE16,
  EMRPOLYPOLYGON16, *PEMRPOLYPOLYGON16;
typedef struct tagEMRINVERTRGN
{
    EMR emr;
    RECTL rclBounds;
    DWORD cbRgnData;
    BYTE RgnData[1];
} EMRINVERTRGN, *PEMRINVERTRGN,
  EMRPAINTRGN, *PEMRPAINTRGN;
typedef struct tagEMRFILLRGN
{
    EMR emr;
    RECTL rclBounds;
    DWORD cbRgnData;
    DWORD ihBrush;
    BYTE RgnData[1];
} EMRFILLRGN, *PEMRFILLRGN;
typedef struct tagEMRFRAMERGN
{
    EMR emr;
    RECTL rclBounds;
    DWORD cbRgnData;
    DWORD ihBrush;
    SIZEL szlStroke;
    BYTE RgnData[1];
} EMRFRAMERGN, *PEMRFRAMERGN;
typedef struct tagEMREXTSELECTCLIPRGN
{
    EMR emr;
    DWORD cbRgnData;
    DWORD iMode;
    BYTE RgnData[1];
} EMREXTSELECTCLIPRGN, *PEMREXTSELECTCLIPRGN;
typedef struct tagEMREXTTEXTOUTA
{
    EMR emr;
    RECTL rclBounds;
    DWORD iGraphicsMode;
    FLOAT exScale;
    FLOAT eyScale;
    EMRTEXT emrtext;
} EMREXTTEXTOUTA, *PEMREXTTEXTOUTA,
  EMREXTTEXTOUTW, *PEMREXTTEXTOUTW;
typedef struct tagEMRPOLYTEXTOUTA
{
    EMR emr;
    RECTL rclBounds;
    DWORD iGraphicsMode;
    FLOAT exScale;
    FLOAT eyScale;
    LONG cStrings;
    EMRTEXT aemrtext[1];
} EMRPOLYTEXTOUTA, *PEMRPOLYTEXTOUTA,
  EMRPOLYTEXTOUTW, *PEMRPOLYTEXTOUTW;
typedef struct tagEMRBITBLT
{
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG cxDest;
    LONG cyDest;
    DWORD dwRop;
    LONG xSrc;
    LONG ySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
} EMRBITBLT, *PEMRBITBLT;
typedef struct tagEMRSTRETCHBLT
{
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG cxDest;
    LONG cyDest;
    DWORD dwRop;
    LONG xSrc;
    LONG ySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    LONG cxSrc;
    LONG cySrc;
} EMRSTRETCHBLT, *PEMRSTRETCHBLT;
typedef struct tagEMRMASKBLT
{
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG cxDest;
    LONG cyDest;
    DWORD dwRop;
    LONG xSrc;
    LONG ySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    LONG xMask;
    LONG yMask;
    DWORD iUsageMask;
    DWORD offBmiMask;
    DWORD cbBmiMask;
    DWORD offBitsMask;
    DWORD cbBitsMask;
} EMRMASKBLT, *PEMRMASKBLT;
typedef struct tagEMRPLGBLT
{
    EMR emr;
    RECTL rclBounds;
    POINTL aptlDest[3];
    LONG xSrc;
    LONG ySrc;
    LONG cxSrc;
    LONG cySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    LONG xMask;
    LONG yMask;
    DWORD iUsageMask;
    DWORD offBmiMask;
    DWORD cbBmiMask;
    DWORD offBitsMask;
    DWORD cbBitsMask;
} EMRPLGBLT, *PEMRPLGBLT;
typedef struct tagEMRSETDIBITSTODEVICE
{
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG xSrc;
    LONG ySrc;
    LONG cxSrc;
    LONG cySrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    DWORD iUsageSrc;
    DWORD iStartScan;
    DWORD cScans;
} EMRSETDIBITSTODEVICE, *PEMRSETDIBITSTODEVICE;
typedef struct tagEMRSTRETCHDIBITS
{
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG xSrc;
    LONG ySrc;
    LONG cxSrc;
    LONG cySrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    DWORD iUsageSrc;
    DWORD dwRop;
    LONG cxDest;
    LONG cyDest;
} EMRSTRETCHDIBITS, *PEMRSTRETCHDIBITS;
typedef struct tagEMREXTCREATEFONTINDIRECTW
{
    EMR emr;
    DWORD ihFont;
    EXTLOGFONTW elfw;
} EMREXTCREATEFONTINDIRECTW, *PEMREXTCREATEFONTINDIRECTW;
typedef struct tagEMRCREATEPALETTE
{
    EMR emr;
    DWORD ihPal;
    LOGPALETTE lgpl;
} EMRCREATEPALETTE, *PEMRCREATEPALETTE;
typedef struct tagEMRCREATEPEN
{
    EMR emr;
    DWORD ihPen;
    LOGPEN lopn;
} EMRCREATEPEN, *PEMRCREATEPEN;
typedef struct tagEMREXTCREATEPEN
{
    EMR emr;
    DWORD ihPen;
    DWORD offBmi;
    DWORD cbBmi;
    DWORD offBits;
    DWORD cbBits;
    EXTLOGPEN32 elp;
} EMREXTCREATEPEN, *PEMREXTCREATEPEN;
typedef struct tagEMRCREATEBRUSHINDIRECT
{
    EMR emr;
    DWORD ihBrush;
    LOGBRUSH32 lb;
} EMRCREATEBRUSHINDIRECT, *PEMRCREATEBRUSHINDIRECT;
typedef struct tagEMRCREATEMONOBRUSH
{
    EMR emr;
    DWORD ihBrush;
    DWORD iUsage;
    DWORD offBmi;
    DWORD cbBmi;
    DWORD offBits;
    DWORD cbBits;
} EMRCREATEMONOBRUSH, *PEMRCREATEMONOBRUSH;
typedef struct tagEMRCREATEDIBPATTERNBRUSHPT
{
    EMR emr;
    DWORD ihBrush;
    DWORD iUsage;
    DWORD offBmi;
    DWORD cbBmi;
    DWORD offBits;
    DWORD cbBits;
} EMRCREATEDIBPATTERNBRUSHPT, *PEMRCREATEDIBPATTERNBRUSHPT;
typedef struct tagEMRFORMAT
{
    DWORD dSignature;
    DWORD nVersion;
    DWORD cbData;
    DWORD offData;
} EMRFORMAT, *PEMRFORMAT;
typedef struct tagEMRGLSRECORD
{
    EMR emr;
    DWORD cbData;
    BYTE Data[1];
} EMRGLSRECORD, *PEMRGLSRECORD;
typedef struct tagEMRGLSBOUNDEDRECORD
{
    EMR emr;
    RECTL rclBounds;
    DWORD cbData;
    BYTE Data[1];
} EMRGLSBOUNDEDRECORD, *PEMRGLSBOUNDEDRECORD;
typedef struct tagEMRPIXELFORMAT
{
    EMR emr;
    PIXELFORMATDESCRIPTOR pfd;
} EMRPIXELFORMAT, *PEMRPIXELFORMAT;
typedef struct tagEMRCREATECOLORSPACE
{
    EMR emr;
    DWORD ihCS;
    LOGCOLORSPACEA lcs;
} EMRCREATECOLORSPACE, *PEMRCREATECOLORSPACE;
typedef struct tagEMRSETCOLORSPACE
{
    EMR emr;
    DWORD ihCS;
} EMRSETCOLORSPACE, *PEMRSETCOLORSPACE,
  EMRSELECTCOLORSPACE, *PEMRSELECTCOLORSPACE,
  EMRDELETECOLORSPACE, *PEMRDELETECOLORSPACE;
typedef struct tagEMREXTESCAPE
{
    EMR emr;
    INT iEscape;
    INT cbEscData;
    BYTE EscData[1];
} EMREXTESCAPE, *PEMREXTESCAPE,
  EMRDRAWESCAPE, *PEMRDRAWESCAPE;
typedef struct tagEMRNAMEDESCAPE
{
    EMR emr;
    INT iEscape;
    INT cbDriver;
    INT cbEscData;
    BYTE EscData[1];
} EMRNAMEDESCAPE, *PEMRNAMEDESCAPE;
typedef struct tagEMRSETICMPROFILE
{
    EMR emr;
    DWORD dwFlags;
    DWORD cbName;
    DWORD cbData;
    BYTE Data[1];
} EMRSETICMPROFILE, *PEMRSETICMPROFILE,
  EMRSETICMPROFILEA, *PEMRSETICMPROFILEA,
  EMRSETICMPROFILEW, *PEMRSETICMPROFILEW;
typedef struct tagEMRCREATECOLORSPACEW
{
    EMR emr;
    DWORD ihCS;
    LOGCOLORSPACEW lcs;
    DWORD dwFlags;
    DWORD cbData;
    BYTE Data[1];
} EMRCREATECOLORSPACEW, *PEMRCREATECOLORSPACEW;
typedef struct tagCOLORMATCHTOTARGET
{
    EMR emr;
    DWORD dwAction;
    DWORD dwFlags;
    DWORD cbName;
    DWORD cbData;
    BYTE Data[1];
} EMRCOLORMATCHTOTARGET, *PEMRCOLORMATCHTOTARGET;
typedef struct tagCOLORCORRECTPALETTE
{
    EMR emr;
    DWORD ihPalette;
    DWORD nFirstEntry;
    DWORD nPalEntries;
    DWORD nReserved;
} EMRCOLORCORRECTPALETTE, *PEMRCOLORCORRECTPALETTE;
typedef struct tagEMRALPHABLEND
{
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG cxDest;
    LONG cyDest;
    DWORD dwRop;
    LONG xSrc;
    LONG ySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    LONG cxSrc;
    LONG cySrc;
} EMRALPHABLEND, *PEMRALPHABLEND;
typedef struct tagEMRGRADIENTFILL
{
    EMR emr;
    RECTL rclBounds;
    DWORD nVer;
    DWORD nTri;
    ULONG ulMode;
    TRIVERTEX Ver[1];
}EMRGRADIENTFILL,*PEMRGRADIENTFILL;
typedef struct tagEMRTRANSPARENTBLT
{
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG cxDest;
    LONG cyDest;
    DWORD dwRop;
    LONG xSrc;
    LONG ySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    LONG cxSrc;
    LONG cySrc;
} EMRTRANSPARENTBLT, *PEMRTRANSPARENTBLT;
WINGDIAPI BOOL WINAPI wglCopyContext(HGLRC, HGLRC, UINT);
WINGDIAPI HGLRC WINAPI wglCreateContext(HDC);
WINGDIAPI HGLRC WINAPI wglCreateLayerContext(HDC, int);
WINGDIAPI BOOL WINAPI wglDeleteContext(HGLRC);
WINGDIAPI HGLRC WINAPI wglGetCurrentContext(VOID);
WINGDIAPI HDC WINAPI wglGetCurrentDC(VOID);
WINGDIAPI PROC WINAPI wglGetProcAddress(LPCSTR);
WINGDIAPI BOOL WINAPI wglMakeCurrent(HDC, HGLRC);
WINGDIAPI BOOL WINAPI wglShareLists(HGLRC, HGLRC);
WINGDIAPI BOOL WINAPI wglUseFontBitmapsA(HDC, DWORD, DWORD, DWORD);
WINGDIAPI BOOL WINAPI wglUseFontBitmapsW(HDC, DWORD, DWORD, DWORD);
WINGDIAPI BOOL WINAPI SwapBuffers(HDC);
typedef struct _POINTFLOAT {
    FLOAT x;
    FLOAT y;
} POINTFLOAT, *PPOINTFLOAT;
typedef struct _GLYPHMETRICSFLOAT {
    FLOAT gmfBlackBoxX;
    FLOAT gmfBlackBoxY;
    POINTFLOAT gmfptGlyphOrigin;
    FLOAT gmfCellIncX;
    FLOAT gmfCellIncY;
} GLYPHMETRICSFLOAT, *PGLYPHMETRICSFLOAT, FAR *LPGLYPHMETRICSFLOAT;
WINGDIAPI BOOL WINAPI wglUseFontOutlinesA(HDC, DWORD, DWORD, DWORD, FLOAT,
                                           FLOAT, int, LPGLYPHMETRICSFLOAT);
WINGDIAPI BOOL WINAPI wglUseFontOutlinesW(HDC, DWORD, DWORD, DWORD, FLOAT,
                                           FLOAT, int, LPGLYPHMETRICSFLOAT);
typedef struct tagLAYERPLANEDESCRIPTOR {
    WORD nSize;
    WORD nVersion;
    DWORD dwFlags;
    BYTE iPixelType;
    BYTE cColorBits;
    BYTE cRedBits;
    BYTE cRedShift;
    BYTE cGreenBits;
    BYTE cGreenShift;
    BYTE cBlueBits;
    BYTE cBlueShift;
    BYTE cAlphaBits;
    BYTE cAlphaShift;
    BYTE cAccumBits;
    BYTE cAccumRedBits;
    BYTE cAccumGreenBits;
    BYTE cAccumBlueBits;
    BYTE cAccumAlphaBits;
    BYTE cDepthBits;
    BYTE cStencilBits;
    BYTE cAuxBuffers;
    BYTE iLayerPlane;
    BYTE bReserved;
    COLORREF crTransparent;
} LAYERPLANEDESCRIPTOR, *PLAYERPLANEDESCRIPTOR, FAR *LPLAYERPLANEDESCRIPTOR;
WINGDIAPI BOOL WINAPI wglDescribeLayerPlane(HDC, int, int, UINT,
                                             LPLAYERPLANEDESCRIPTOR);
WINGDIAPI int WINAPI wglSetLayerPaletteEntries(HDC, int, int, int,
                                                 CONST COLORREF *);
WINGDIAPI int WINAPI wglGetLayerPaletteEntries(HDC, int, int, int,
                                                 COLORREF *);
WINGDIAPI BOOL WINAPI wglRealizeLayerPalette(HDC, int, BOOL);
WINGDIAPI BOOL WINAPI wglSwapLayerBuffers(HDC, UINT);
typedef struct _WGLSWAP
{
    HDC hdc;
    UINT uiFlags;
} WGLSWAP, *PWGLSWAP, FAR *LPWGLSWAP;
WINGDIAPI DWORD WINAPI wglSwapMultipleBuffers(UINT, CONST WGLSWAP *);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
}
