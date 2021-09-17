       
#include <DWrite_1.h>
interface IDWriteFontFallback;
enum DWRITE_OPTICAL_ALIGNMENT
{
    DWRITE_OPTICAL_ALIGNMENT_NONE,
    DWRITE_OPTICAL_ALIGNMENT_NO_SIDE_BEARINGS,
};
enum DWRITE_GRID_FIT_MODE
{
    DWRITE_GRID_FIT_MODE_DEFAULT,
    DWRITE_GRID_FIT_MODE_DISABLED,
    DWRITE_GRID_FIT_MODE_ENABLED
};
struct DWRITE_TEXT_METRICS1 : DWRITE_TEXT_METRICS
{
    FLOAT heightIncludingTrailingWhitespace;
};
interface DWRITE_DECLARE_INTERFACE("D3E0E934-22A0-427E-AAE4-7D9574B59DB1") IDWriteTextRenderer1 : public IDWriteTextRenderer
{
    STDMETHOD(DrawGlyphRun)(
        _In_opt_ void* clientDrawingContext,
        FLOAT baselineOriginX,
        FLOAT baselineOriginY,
        DWRITE_GLYPH_ORIENTATION_ANGLE orientationAngle,
        DWRITE_MEASURING_MODE measuringMode,
        _In_ DWRITE_GLYPH_RUN const* glyphRun,
        _In_ DWRITE_GLYPH_RUN_DESCRIPTION const* glyphRunDescription,
        _In_opt_ IUnknown* clientDrawingEffect
        ) PURE;
    STDMETHOD(DrawUnderline)(
        _In_opt_ void* clientDrawingContext,
        FLOAT baselineOriginX,
        FLOAT baselineOriginY,
        DWRITE_GLYPH_ORIENTATION_ANGLE orientationAngle,
        _In_ DWRITE_UNDERLINE const* underline,
        _In_opt_ IUnknown* clientDrawingEffect
        ) PURE;
    STDMETHOD(DrawStrikethrough)(
        _In_opt_ void* clientDrawingContext,
        FLOAT baselineOriginX,
        FLOAT baselineOriginY,
        DWRITE_GLYPH_ORIENTATION_ANGLE orientationAngle,
        _In_ DWRITE_STRIKETHROUGH const* strikethrough,
        _In_opt_ IUnknown* clientDrawingEffect
        ) PURE;
    STDMETHOD(DrawInlineObject)(
        _In_opt_ void* clientDrawingContext,
        FLOAT originX,
        FLOAT originY,
        DWRITE_GLYPH_ORIENTATION_ANGLE orientationAngle,
        _In_ IDWriteInlineObject* inlineObject,
        BOOL isSideways,
        BOOL isRightToLeft,
        _In_opt_ IUnknown* clientDrawingEffect
        ) PURE;
    using IDWriteTextRenderer::DrawGlyphRun;
    using IDWriteTextRenderer::DrawUnderline;
    using IDWriteTextRenderer::DrawStrikethrough;
    using IDWriteTextRenderer::DrawInlineObject;
};
interface DWRITE_DECLARE_INTERFACE("5F174B49-0D8B-4CFB-8BCA-F1CCE9D06C67") IDWriteTextFormat1 : public IDWriteTextFormat
{
    STDMETHOD(SetVerticalGlyphOrientation)(
        DWRITE_VERTICAL_GLYPH_ORIENTATION glyphOrientation
        ) PURE;
    STDMETHOD_(DWRITE_VERTICAL_GLYPH_ORIENTATION, GetVerticalGlyphOrientation)() PURE;
    STDMETHOD(SetLastLineWrapping)(
        BOOL isLastLineWrappingEnabled
        ) PURE;
    STDMETHOD_(BOOL, GetLastLineWrapping)() PURE;
    STDMETHOD(SetOpticalAlignment)(
        DWRITE_OPTICAL_ALIGNMENT opticalAlignment
        ) PURE;
    STDMETHOD_(DWRITE_OPTICAL_ALIGNMENT, GetOpticalAlignment)() PURE;
    STDMETHOD(SetFontFallback)(
        IDWriteFontFallback* fontFallback
        ) PURE;
    STDMETHOD(GetFontFallback)(
        __out IDWriteFontFallback** fontFallback
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("1093C18F-8D5E-43F0-B064-0917311B525E") IDWriteTextLayout2 : public IDWriteTextLayout1
{
    STDMETHOD(GetMetrics)(
        _Out_ DWRITE_TEXT_METRICS1* textMetrics
        ) PURE;
    using IDWriteTextLayout::GetMetrics;
    STDMETHOD(SetVerticalGlyphOrientation)(
        DWRITE_VERTICAL_GLYPH_ORIENTATION glyphOrientation
        ) PURE;
    STDMETHOD_(DWRITE_VERTICAL_GLYPH_ORIENTATION, GetVerticalGlyphOrientation)() PURE;
    STDMETHOD(SetLastLineWrapping)(
        BOOL isLastLineWrappingEnabled
        ) PURE;
    STDMETHOD_(BOOL, GetLastLineWrapping)() PURE;
    STDMETHOD(SetOpticalAlignment)(
        DWRITE_OPTICAL_ALIGNMENT opticalAlignment
        ) PURE;
    STDMETHOD_(DWRITE_OPTICAL_ALIGNMENT, GetOpticalAlignment)() PURE;
    STDMETHOD(SetFontFallback)(
        IDWriteFontFallback* fontFallback
        ) PURE;
    STDMETHOD(GetFontFallback)(
        __out IDWriteFontFallback** fontFallback
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("553A9FF3-5693-4DF7-B52B-74806F7F2EB9") IDWriteTextAnalyzer2 : public IDWriteTextAnalyzer1
{
    STDMETHOD(GetGlyphOrientationTransform)(
        DWRITE_GLYPH_ORIENTATION_ANGLE glyphOrientationAngle,
        BOOL isSideways,
        FLOAT originX,
        FLOAT originY,
        _Out_ DWRITE_MATRIX* transform
        ) PURE;
    STDMETHOD(GetTypographicFeatures)(
        IDWriteFontFace* fontFace,
        DWRITE_SCRIPT_ANALYSIS scriptAnalysis,
        _In_opt_z_ WCHAR const* localeName,
        UINT32 maxTagCount,
        _Out_ UINT32* actualTagCount,
        _Out_writes_(maxTagCount) DWRITE_FONT_FEATURE_TAG* tags
        ) PURE;
    STDMETHOD(CheckTypographicFeature)(
        IDWriteFontFace* fontFace,
        DWRITE_SCRIPT_ANALYSIS scriptAnalysis,
        _In_opt_z_ WCHAR const* localeName,
        DWRITE_FONT_FEATURE_TAG featureTag,
        UINT32 glyphCount,
        _In_reads_(glyphCount) UINT16 const* glyphIndices,
        _Out_writes_(glyphCount) UINT8* featureApplies
        ) PURE;
    using IDWriteTextAnalyzer1::GetGlyphOrientationTransform;
};
interface DWRITE_DECLARE_INTERFACE("EFA008F9-F7A1-48BF-B05C-F224713CC0FF") IDWriteFontFallback : public IUnknown
{
    STDMETHOD(MapCharacters)(
        IDWriteTextAnalysisSource* analysisSource,
        UINT32 textPosition,
        UINT32 textLength,
        _In_opt_ IDWriteFontCollection* baseFontCollection,
        _In_opt_z_ wchar_t const* baseFamilyName,
        DWRITE_FONT_WEIGHT baseWeight,
        DWRITE_FONT_STYLE baseStyle,
        DWRITE_FONT_STRETCH baseStretch,
        _Out_range_(0, textLength) UINT32* mappedLength,
        _COM_Outptr_result_maybenull_ IDWriteFont** mappedFont,
        _Out_ FLOAT* scale
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("FD882D06-8ABA-4FB8-B849-8BE8B73E14DE") IDWriteFontFallbackBuilder : public IUnknown
{
    STDMETHOD(AddMapping)(
        _In_reads_(rangesCount) DWRITE_UNICODE_RANGE const* ranges,
        UINT32 rangesCount,
        _In_reads_(targetFamilyNamesCount) WCHAR const** targetFamilyNames,
        UINT32 targetFamilyNamesCount,
        _In_opt_ IDWriteFontCollection* fontCollection = NULL,
        _In_opt_z_ WCHAR const* localeName = NULL,
        _In_opt_z_ WCHAR const* baseFamilyName = NULL,
        FLOAT scale = 1.0f
        ) PURE;
    STDMETHOD(AddMappings)(
        IDWriteFontFallback* fontFallback
        ) PURE;
   STDMETHOD(CreateFontFallback)(
        _COM_Outptr_ IDWriteFontFallback** fontFallback
        ) PURE;
};
typedef struct _D3DCOLORVALUE {
    union {
    FLOAT r;
    FLOAT dvR;
    };
    union {
    FLOAT g;
    FLOAT dvG;
    };
    union {
    FLOAT b;
    FLOAT dvB;
    };
    union {
    FLOAT a;
    FLOAT dvA;
    };
} D3DCOLORVALUE;
typedef D3DCOLORVALUE DWRITE_COLOR_F;
interface DWRITE_DECLARE_INTERFACE("29748ed6-8c9c-4a6a-be0b-d912e8538944") IDWriteFont2 : public IDWriteFont1
{
    STDMETHOD_(BOOL, IsColorFont)() PURE;
};
interface DWRITE_DECLARE_INTERFACE("d8b768ff-64bc-4e66-982b-ec8e87f693f7") IDWriteFontFace2 : public IDWriteFontFace1
{
    STDMETHOD_(BOOL, IsColorFont)() PURE;
    STDMETHOD_(UINT32, GetColorPaletteCount)() PURE;
    STDMETHOD_(UINT32, GetPaletteEntryCount)() PURE;
    STDMETHOD(GetPaletteEntries)(
        UINT32 colorPaletteIndex,
        UINT32 firstEntryIndex,
        UINT32 entryCount,
        _Out_writes_(entryCount) DWRITE_COLOR_F* paletteEntries
        ) PURE;
    STDMETHOD(GetRecommendedRenderingMode)(
        FLOAT fontEmSize,
        FLOAT dpiX,
        FLOAT dpiY,
        _In_opt_ DWRITE_MATRIX const* transform,
        BOOL isSideways,
        DWRITE_OUTLINE_THRESHOLD outlineThreshold,
        DWRITE_MEASURING_MODE measuringMode,
        _In_opt_ IDWriteRenderingParams* renderingParams,
        _Out_ DWRITE_RENDERING_MODE* renderingMode,
        _Out_ DWRITE_GRID_FIT_MODE* gridFitMode
        ) PURE;
    using IDWriteFontFace1::GetRecommendedRenderingMode;
};
struct DWRITE_COLOR_GLYPH_RUN
{
    DWRITE_GLYPH_RUN glyphRun;
    _Maybenull_ DWRITE_GLYPH_RUN_DESCRIPTION* glyphRunDescription;
    FLOAT baselineOriginX;
    FLOAT baselineOriginY;
    DWRITE_COLOR_F runColor;
    UINT16 paletteIndex;
};
interface DWRITE_DECLARE_INTERFACE("d31fbe17-f157-41a2-8d24-cb779e0560e8") IDWriteColorGlyphRunEnumerator : public IUnknown
{
    STDMETHOD(MoveNext)(
        _Out_ BOOL* hasRun
        ) PURE;
    STDMETHOD(GetCurrentRun)(
        _Outptr_ DWRITE_COLOR_GLYPH_RUN const** colorGlyphRun
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("F9D711C3-9777-40AE-87E8-3E5AF9BF0948") IDWriteRenderingParams2 : public IDWriteRenderingParams1
{
    STDMETHOD_(DWRITE_GRID_FIT_MODE, GetGridFitMode)() PURE;
};
interface DWRITE_DECLARE_INTERFACE("0439fc60-ca44-4994-8dee-3a9af7b732ec") IDWriteFactory2 : public IDWriteFactory1
{
    STDMETHOD(GetSystemFontFallback)(
        _COM_Outptr_ IDWriteFontFallback** fontFallback
        ) PURE;
    STDMETHOD(CreateFontFallbackBuilder)(
        _COM_Outptr_ IDWriteFontFallbackBuilder** fontFallbackBuilder
        ) PURE;
    STDMETHOD(TranslateColorGlyphRun)(
        FLOAT baselineOriginX,
        FLOAT baselineOriginY,
        _In_ DWRITE_GLYPH_RUN const* glyphRun,
        _In_opt_ DWRITE_GLYPH_RUN_DESCRIPTION const* glyphRunDescription,
        DWRITE_MEASURING_MODE measuringMode,
        _In_opt_ DWRITE_MATRIX const* worldToDeviceTransform,
        UINT32 colorPaletteIndex,
        _COM_Outptr_ IDWriteColorGlyphRunEnumerator** colorLayers
        ) PURE;
    STDMETHOD(CreateCustomRenderingParams)(
        FLOAT gamma,
        FLOAT enhancedContrast,
        FLOAT grayscaleEnhancedContrast,
        FLOAT clearTypeLevel,
        DWRITE_PIXEL_GEOMETRY pixelGeometry,
        DWRITE_RENDERING_MODE renderingMode,
        DWRITE_GRID_FIT_MODE gridFitMode,
        _COM_Outptr_ IDWriteRenderingParams2** renderingParams
        ) PURE;
    using IDWriteFactory::CreateCustomRenderingParams;
    using IDWriteFactory1::CreateCustomRenderingParams;
    STDMETHOD(CreateGlyphRunAnalysis)(
        _In_ DWRITE_GLYPH_RUN const* glyphRun,
        _In_opt_ DWRITE_MATRIX const* transform,
        DWRITE_RENDERING_MODE renderingMode,
        DWRITE_MEASURING_MODE measuringMode,
        DWRITE_GRID_FIT_MODE gridFitMode,
        DWRITE_TEXT_ANTIALIAS_MODE antialiasMode,
        FLOAT baselineOriginX,
        FLOAT baselineOriginY,
        _COM_Outptr_ IDWriteGlyphRunAnalysis** glyphRunAnalysis
        ) PURE;
    using IDWriteFactory::CreateGlyphRunAnalysis;
};
