       
#include <specstrings.h>
#include <unknwn.h>
#include <dcommon.h>
enum DWRITE_FONT_FILE_TYPE
{
    DWRITE_FONT_FILE_TYPE_UNKNOWN,
    DWRITE_FONT_FILE_TYPE_CFF,
    DWRITE_FONT_FILE_TYPE_TRUETYPE,
    DWRITE_FONT_FILE_TYPE_OPENTYPE_COLLECTION,
    DWRITE_FONT_FILE_TYPE_TYPE1_PFM,
    DWRITE_FONT_FILE_TYPE_TYPE1_PFB,
    DWRITE_FONT_FILE_TYPE_VECTOR,
    DWRITE_FONT_FILE_TYPE_BITMAP,
    DWRITE_FONT_FILE_TYPE_TRUETYPE_COLLECTION = DWRITE_FONT_FILE_TYPE_OPENTYPE_COLLECTION,
};
enum DWRITE_FONT_FACE_TYPE
{
    DWRITE_FONT_FACE_TYPE_CFF,
    DWRITE_FONT_FACE_TYPE_TRUETYPE,
    DWRITE_FONT_FACE_TYPE_OPENTYPE_COLLECTION,
    DWRITE_FONT_FACE_TYPE_TYPE1,
    DWRITE_FONT_FACE_TYPE_VECTOR,
    DWRITE_FONT_FACE_TYPE_BITMAP,
    DWRITE_FONT_FACE_TYPE_UNKNOWN,
    DWRITE_FONT_FACE_TYPE_RAW_CFF,
    DWRITE_FONT_FACE_TYPE_TRUETYPE_COLLECTION = DWRITE_FONT_FACE_TYPE_OPENTYPE_COLLECTION,
};
enum DWRITE_FONT_SIMULATIONS
{
    DWRITE_FONT_SIMULATIONS_NONE = 0x0000,
    DWRITE_FONT_SIMULATIONS_BOLD = 0x0001,
    DWRITE_FONT_SIMULATIONS_OBLIQUE = 0x0002
};
DEFINE_ENUM_FLAG_OPERATORS(DWRITE_FONT_SIMULATIONS);
enum DWRITE_FONT_WEIGHT
{
    DWRITE_FONT_WEIGHT_THIN = 100,
    DWRITE_FONT_WEIGHT_EXTRA_LIGHT = 200,
    DWRITE_FONT_WEIGHT_ULTRA_LIGHT = 200,
    DWRITE_FONT_WEIGHT_LIGHT = 300,
    DWRITE_FONT_WEIGHT_SEMI_LIGHT = 350,
    DWRITE_FONT_WEIGHT_NORMAL = 400,
    DWRITE_FONT_WEIGHT_REGULAR = 400,
    DWRITE_FONT_WEIGHT_MEDIUM = 500,
    DWRITE_FONT_WEIGHT_DEMI_BOLD = 600,
    DWRITE_FONT_WEIGHT_SEMI_BOLD = 600,
    DWRITE_FONT_WEIGHT_BOLD = 700,
    DWRITE_FONT_WEIGHT_EXTRA_BOLD = 800,
    DWRITE_FONT_WEIGHT_ULTRA_BOLD = 800,
    DWRITE_FONT_WEIGHT_BLACK = 900,
    DWRITE_FONT_WEIGHT_HEAVY = 900,
    DWRITE_FONT_WEIGHT_EXTRA_BLACK = 950,
    DWRITE_FONT_WEIGHT_ULTRA_BLACK = 950
};
enum DWRITE_FONT_STRETCH
{
    DWRITE_FONT_STRETCH_UNDEFINED = 0,
    DWRITE_FONT_STRETCH_ULTRA_CONDENSED = 1,
    DWRITE_FONT_STRETCH_EXTRA_CONDENSED = 2,
    DWRITE_FONT_STRETCH_CONDENSED = 3,
    DWRITE_FONT_STRETCH_SEMI_CONDENSED = 4,
    DWRITE_FONT_STRETCH_NORMAL = 5,
    DWRITE_FONT_STRETCH_MEDIUM = 5,
    DWRITE_FONT_STRETCH_SEMI_EXPANDED = 6,
    DWRITE_FONT_STRETCH_EXPANDED = 7,
    DWRITE_FONT_STRETCH_EXTRA_EXPANDED = 8,
    DWRITE_FONT_STRETCH_ULTRA_EXPANDED = 9
};
enum DWRITE_FONT_STYLE
{
    DWRITE_FONT_STYLE_NORMAL,
    DWRITE_FONT_STYLE_OBLIQUE,
    DWRITE_FONT_STYLE_ITALIC
};
enum DWRITE_INFORMATIONAL_STRING_ID
{
    DWRITE_INFORMATIONAL_STRING_NONE,
    DWRITE_INFORMATIONAL_STRING_COPYRIGHT_NOTICE,
    DWRITE_INFORMATIONAL_STRING_VERSION_STRINGS,
    DWRITE_INFORMATIONAL_STRING_TRADEMARK,
    DWRITE_INFORMATIONAL_STRING_MANUFACTURER,
    DWRITE_INFORMATIONAL_STRING_DESIGNER,
    DWRITE_INFORMATIONAL_STRING_DESIGNER_URL,
    DWRITE_INFORMATIONAL_STRING_DESCRIPTION,
    DWRITE_INFORMATIONAL_STRING_FONT_VENDOR_URL,
    DWRITE_INFORMATIONAL_STRING_LICENSE_DESCRIPTION,
    DWRITE_INFORMATIONAL_STRING_LICENSE_INFO_URL,
    DWRITE_INFORMATIONAL_STRING_WIN32_FAMILY_NAMES,
    DWRITE_INFORMATIONAL_STRING_WIN32_SUBFAMILY_NAMES,
    DWRITE_INFORMATIONAL_STRING_TYPOGRAPHIC_FAMILY_NAMES,
    DWRITE_INFORMATIONAL_STRING_TYPOGRAPHIC_SUBFAMILY_NAMES,
    DWRITE_INFORMATIONAL_STRING_SAMPLE_TEXT,
    DWRITE_INFORMATIONAL_STRING_FULL_NAME,
    DWRITE_INFORMATIONAL_STRING_POSTSCRIPT_NAME,
    DWRITE_INFORMATIONAL_STRING_POSTSCRIPT_CID_NAME,
    DWRITE_INFORMATIONAL_STRING_WEIGHT_STRETCH_STYLE_FAMILY_NAME,
    DWRITE_INFORMATIONAL_STRING_DESIGN_SCRIPT_LANGUAGE_TAG,
    DWRITE_INFORMATIONAL_STRING_SUPPORTED_SCRIPT_LANGUAGE_TAG,
    DWRITE_INFORMATIONAL_STRING_PREFERRED_FAMILY_NAMES = DWRITE_INFORMATIONAL_STRING_TYPOGRAPHIC_FAMILY_NAMES,
    DWRITE_INFORMATIONAL_STRING_PREFERRED_SUBFAMILY_NAMES = DWRITE_INFORMATIONAL_STRING_TYPOGRAPHIC_SUBFAMILY_NAMES,
    DWRITE_INFORMATIONAL_STRING_WWS_FAMILY_NAME = DWRITE_INFORMATIONAL_STRING_WEIGHT_STRETCH_STYLE_FAMILY_NAME,
};
struct DWRITE_FONT_METRICS
{
    UINT16 designUnitsPerEm;
    UINT16 ascent;
    UINT16 descent;
    INT16 lineGap;
    UINT16 capHeight;
    UINT16 xHeight;
    INT16 underlinePosition;
    UINT16 underlineThickness;
    INT16 strikethroughPosition;
    UINT16 strikethroughThickness;
};
struct DWRITE_GLYPH_METRICS
{
    INT32 leftSideBearing;
    UINT32 advanceWidth;
    INT32 rightSideBearing;
    INT32 topSideBearing;
    UINT32 advanceHeight;
    INT32 bottomSideBearing;
    INT32 verticalOriginY;
};
struct DWRITE_GLYPH_OFFSET
{
    FLOAT advanceOffset;
    FLOAT ascenderOffset;
};
enum DWRITE_FACTORY_TYPE
{
    DWRITE_FACTORY_TYPE_SHARED,
    DWRITE_FACTORY_TYPE_ISOLATED
};
    (static_cast<UINT32>(static_cast<UINT8>(d)) << 24) | \
    (static_cast<UINT32>(static_cast<UINT8>(c)) << 16) | \
    (static_cast<UINT32>(static_cast<UINT8>(b)) << 8) | \
     static_cast<UINT32>(static_cast<UINT8>(a)))
interface IDWriteFontFileStream;
interface DWRITE_DECLARE_INTERFACE("727cad4e-d6af-4c9e-8a08-d695b11caa49") IDWriteFontFileLoader : public IUnknown
{
    STDMETHOD(CreateStreamFromKey)(
        _In_reads_bytes_(fontFileReferenceKeySize) void const* fontFileReferenceKey,
        UINT32 fontFileReferenceKeySize,
        _COM_Outptr_ IDWriteFontFileStream** fontFileStream
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("b2d9f3ec-c9fe-4a11-a2ec-d86208f7c0a2") IDWriteLocalFontFileLoader : public IDWriteFontFileLoader
{
    STDMETHOD(GetFilePathLengthFromKey)(
        _In_reads_bytes_(fontFileReferenceKeySize) void const* fontFileReferenceKey,
        UINT32 fontFileReferenceKeySize,
        _Out_ UINT32* filePathLength
        ) PURE;
    STDMETHOD(GetFilePathFromKey)(
        _In_reads_bytes_(fontFileReferenceKeySize) void const* fontFileReferenceKey,
        UINT32 fontFileReferenceKeySize,
        _Out_writes_z_(filePathSize) WCHAR* filePath,
        UINT32 filePathSize
        ) PURE;
    STDMETHOD(GetLastWriteTimeFromKey)(
        _In_reads_bytes_(fontFileReferenceKeySize) void const* fontFileReferenceKey,
        UINT32 fontFileReferenceKeySize,
        _Out_ FILETIME* lastWriteTime
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("6d4865fe-0ab8-4d91-8f62-5dd6be34a3e0") IDWriteFontFileStream : public IUnknown
{
    STDMETHOD(ReadFileFragment)(
        _Outptr_result_bytebuffer_(fragmentSize) void const** fragmentStart,
        UINT64 fileOffset,
        UINT64 fragmentSize,
        _Out_ void** fragmentContext
        ) PURE;
    STDMETHOD_(void, ReleaseFileFragment)(
        void* fragmentContext
        ) PURE;
    STDMETHOD(GetFileSize)(
        _Out_ UINT64* fileSize
        ) PURE;
    STDMETHOD(GetLastWriteTime)(
        _Out_ UINT64* lastWriteTime
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("739d886a-cef5-47dc-8769-1a8b41bebbb0") IDWriteFontFile : public IUnknown
{
    STDMETHOD(GetReferenceKey)(
        _Outptr_result_bytebuffer_(*fontFileReferenceKeySize) void const** fontFileReferenceKey,
        _Out_ UINT32* fontFileReferenceKeySize
        ) PURE;
    STDMETHOD(GetLoader)(
        _COM_Outptr_ IDWriteFontFileLoader** fontFileLoader
        ) PURE;
    STDMETHOD(Analyze)(
        _Out_ BOOL* isSupportedFontType,
        _Out_ DWRITE_FONT_FILE_TYPE* fontFileType,
        _Out_opt_ DWRITE_FONT_FACE_TYPE* fontFaceType,
        _Out_ UINT32* numberOfFaces
        ) PURE;
};
enum DWRITE_PIXEL_GEOMETRY
{
    DWRITE_PIXEL_GEOMETRY_FLAT,
    DWRITE_PIXEL_GEOMETRY_RGB,
    DWRITE_PIXEL_GEOMETRY_BGR
};
enum DWRITE_RENDERING_MODE
{
    DWRITE_RENDERING_MODE_DEFAULT,
    DWRITE_RENDERING_MODE_ALIASED,
    DWRITE_RENDERING_MODE_GDI_CLASSIC,
    DWRITE_RENDERING_MODE_GDI_NATURAL,
    DWRITE_RENDERING_MODE_NATURAL,
    DWRITE_RENDERING_MODE_NATURAL_SYMMETRIC,
    DWRITE_RENDERING_MODE_OUTLINE,
    DWRITE_RENDERING_MODE_CLEARTYPE_GDI_CLASSIC = DWRITE_RENDERING_MODE_GDI_CLASSIC,
    DWRITE_RENDERING_MODE_CLEARTYPE_GDI_NATURAL = DWRITE_RENDERING_MODE_GDI_NATURAL,
    DWRITE_RENDERING_MODE_CLEARTYPE_NATURAL = DWRITE_RENDERING_MODE_NATURAL,
    DWRITE_RENDERING_MODE_CLEARTYPE_NATURAL_SYMMETRIC = DWRITE_RENDERING_MODE_NATURAL_SYMMETRIC
};
struct DWRITE_MATRIX
{
    FLOAT m11;
    FLOAT m12;
    FLOAT m21;
    FLOAT m22;
    FLOAT dx;
    FLOAT dy;
};
interface DWRITE_DECLARE_INTERFACE("2f0da53a-2add-47cd-82ee-d9ec34688e75") IDWriteRenderingParams : public IUnknown
{
    STDMETHOD_(FLOAT, GetGamma)() PURE;
    STDMETHOD_(FLOAT, GetEnhancedContrast)() PURE;
    STDMETHOD_(FLOAT, GetClearTypeLevel)() PURE;
    STDMETHOD_(DWRITE_PIXEL_GEOMETRY, GetPixelGeometry)() PURE;
    STDMETHOD_(DWRITE_RENDERING_MODE, GetRenderingMode)() PURE;
};
interface ID2D1SimplifiedGeometrySink;
typedef ID2D1SimplifiedGeometrySink IDWriteGeometrySink;
interface DWRITE_DECLARE_INTERFACE("5f49804d-7024-4d43-bfa9-d25984f53849") IDWriteFontFace : public IUnknown
{
    STDMETHOD_(DWRITE_FONT_FACE_TYPE, GetType)() PURE;
    STDMETHOD(GetFiles)(
        _Inout_ UINT32* numberOfFiles,
        _Out_writes_opt_(*numberOfFiles) IDWriteFontFile** fontFiles
        ) PURE;
    STDMETHOD_(UINT32, GetIndex)() PURE;
    STDMETHOD_(DWRITE_FONT_SIMULATIONS, GetSimulations)() PURE;
    STDMETHOD_(BOOL, IsSymbolFont)() PURE;
    STDMETHOD_(void, GetMetrics)(
        _Out_ DWRITE_FONT_METRICS* fontFaceMetrics
        ) PURE;
    STDMETHOD_(UINT16, GetGlyphCount)() PURE;
    STDMETHOD(GetDesignGlyphMetrics)(
        _In_reads_(glyphCount) UINT16 const* glyphIndices,
        UINT32 glyphCount,
        _Out_writes_(glyphCount) DWRITE_GLYPH_METRICS* glyphMetrics,
        BOOL isSideways = FALSE
        ) PURE;
    STDMETHOD(GetGlyphIndices)(
        _In_reads_(codePointCount) UINT32 const* codePoints,
        UINT32 codePointCount,
        _Out_writes_(codePointCount) UINT16* glyphIndices
        ) PURE;
    STDMETHOD(TryGetFontTable)(
        _In_ UINT32 openTypeTableTag,
        _Outptr_result_bytebuffer_(*tableSize) const void** tableData,
        _Out_ UINT32* tableSize,
        _Out_ void** tableContext,
        _Out_ BOOL* exists
        ) PURE;
    STDMETHOD_(void, ReleaseFontTable)(
        _In_ void* tableContext
        ) PURE;
    STDMETHOD(GetGlyphRunOutline)(
        FLOAT emSize,
        _In_reads_(glyphCount) UINT16 const* glyphIndices,
        _In_reads_opt_(glyphCount) FLOAT const* glyphAdvances,
        _In_reads_opt_(glyphCount) DWRITE_GLYPH_OFFSET const* glyphOffsets,
        UINT32 glyphCount,
        BOOL isSideways,
        BOOL isRightToLeft,
        _In_ IDWriteGeometrySink* geometrySink
        ) PURE;
    STDMETHOD(GetRecommendedRenderingMode)(
        FLOAT emSize,
        FLOAT pixelsPerDip,
        DWRITE_MEASURING_MODE measuringMode,
        IDWriteRenderingParams* renderingParams,
        _Out_ DWRITE_RENDERING_MODE* renderingMode
        ) PURE;
    STDMETHOD(GetGdiCompatibleMetrics)(
        FLOAT emSize,
        FLOAT pixelsPerDip,
        _In_opt_ DWRITE_MATRIX const* transform,
        _Out_ DWRITE_FONT_METRICS* fontFaceMetrics
        ) PURE;
    STDMETHOD(GetGdiCompatibleGlyphMetrics)(
        FLOAT emSize,
        FLOAT pixelsPerDip,
        _In_opt_ DWRITE_MATRIX const* transform,
        BOOL useGdiNatural,
        _In_reads_(glyphCount) UINT16 const* glyphIndices,
        UINT32 glyphCount,
        _Out_writes_(glyphCount) DWRITE_GLYPH_METRICS* glyphMetrics,
        BOOL isSideways = FALSE
        ) PURE;
};
interface IDWriteFactory;
interface IDWriteFontFileEnumerator;
interface DWRITE_DECLARE_INTERFACE("cca920e4-52f0-492b-bfa8-29c72ee0a468") IDWriteFontCollectionLoader : public IUnknown
{
    STDMETHOD(CreateEnumeratorFromKey)(
        _In_ IDWriteFactory* factory,
        _In_reads_bytes_(collectionKeySize) void const* collectionKey,
        UINT32 collectionKeySize,
        _COM_Outptr_ IDWriteFontFileEnumerator** fontFileEnumerator
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("72755049-5ff7-435d-8348-4be97cfa6c7c") IDWriteFontFileEnumerator : public IUnknown
{
    STDMETHOD(MoveNext)(
        _Out_ BOOL* hasCurrentFile
        ) PURE;
    STDMETHOD(GetCurrentFontFile)(
        _COM_Outptr_ IDWriteFontFile** fontFile
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("08256209-099a-4b34-b86d-c22b110e7771") IDWriteLocalizedStrings : public IUnknown
{
    STDMETHOD_(UINT32, GetCount)() PURE;
    STDMETHOD(FindLocaleName)(
        _In_z_ WCHAR const* localeName,
        _Out_ UINT32* index,
        _Out_ BOOL* exists
        ) PURE;
    STDMETHOD(GetLocaleNameLength)(
        UINT32 index,
        _Out_ UINT32* length
        ) PURE;
    STDMETHOD(GetLocaleName)(
        UINT32 index,
        _Out_writes_z_(size) WCHAR* localeName,
        UINT32 size
        ) PURE;
    STDMETHOD(GetStringLength)(
        UINT32 index,
        _Out_ UINT32* length
        ) PURE;
    STDMETHOD(GetString)(
        UINT32 index,
        _Out_writes_z_(size) WCHAR* stringBuffer,
        UINT32 size
        ) PURE;
};
interface IDWriteFontFamily;
interface IDWriteFont;
interface DWRITE_DECLARE_INTERFACE("a84cee02-3eea-4eee-a827-87c1a02a0fcc") IDWriteFontCollection : public IUnknown
{
    STDMETHOD_(UINT32, GetFontFamilyCount)() PURE;
    STDMETHOD(GetFontFamily)(
        UINT32 index,
        _COM_Outptr_ IDWriteFontFamily** fontFamily
        ) PURE;
    STDMETHOD(FindFamilyName)(
        _In_z_ WCHAR const* familyName,
        _Out_ UINT32* index,
        _Out_ BOOL* exists
        ) PURE;
    STDMETHOD(GetFontFromFontFace)(
        _In_ IDWriteFontFace* fontFace,
        _COM_Outptr_ IDWriteFont** font
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("1a0d8438-1d97-4ec1-aef9-a2fb86ed6acb") IDWriteFontList : public IUnknown
{
    STDMETHOD(GetFontCollection)(
        _COM_Outptr_ IDWriteFontCollection** fontCollection
        ) PURE;
    STDMETHOD_(UINT32, GetFontCount)() PURE;
    STDMETHOD(GetFont)(
        UINT32 index,
        _COM_Outptr_ IDWriteFont** font
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("da20d8ef-812a-4c43-9802-62ec4abd7add") IDWriteFontFamily : public IDWriteFontList
{
    STDMETHOD(GetFamilyNames)(
        _COM_Outptr_ IDWriteLocalizedStrings** names
        ) PURE;
    STDMETHOD(GetFirstMatchingFont)(
        DWRITE_FONT_WEIGHT weight,
        DWRITE_FONT_STRETCH stretch,
        DWRITE_FONT_STYLE style,
        _COM_Outptr_ IDWriteFont** matchingFont
        ) PURE;
    STDMETHOD(GetMatchingFonts)(
        DWRITE_FONT_WEIGHT weight,
        DWRITE_FONT_STRETCH stretch,
        DWRITE_FONT_STYLE style,
        _COM_Outptr_ IDWriteFontList** matchingFonts
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("acd16696-8c14-4f5d-877e-fe3fc1d32737") IDWriteFont : public IUnknown
{
    STDMETHOD(GetFontFamily)(
        _COM_Outptr_ IDWriteFontFamily** fontFamily
        ) PURE;
    STDMETHOD_(DWRITE_FONT_WEIGHT, GetWeight)() PURE;
    STDMETHOD_(DWRITE_FONT_STRETCH, GetStretch)() PURE;
    STDMETHOD_(DWRITE_FONT_STYLE, GetStyle)() PURE;
    STDMETHOD_(BOOL, IsSymbolFont)() PURE;
    STDMETHOD(GetFaceNames)(
        _COM_Outptr_ IDWriteLocalizedStrings** names
        ) PURE;
    STDMETHOD(GetInformationalStrings)(
        DWRITE_INFORMATIONAL_STRING_ID informationalStringID,
        _COM_Outptr_result_maybenull_ IDWriteLocalizedStrings** informationalStrings,
        _Out_ BOOL* exists
        ) PURE;
    STDMETHOD_(DWRITE_FONT_SIMULATIONS, GetSimulations)() PURE;
    STDMETHOD_(void, GetMetrics)(
        _Out_ DWRITE_FONT_METRICS* fontMetrics
        ) PURE;
    STDMETHOD(HasCharacter)(
        UINT32 unicodeValue,
        _Out_ BOOL* exists
        ) PURE;
    STDMETHOD(CreateFontFace)(
        _COM_Outptr_ IDWriteFontFace** fontFace
        ) PURE;
};
enum DWRITE_READING_DIRECTION
{
    DWRITE_READING_DIRECTION_LEFT_TO_RIGHT = 0,
    DWRITE_READING_DIRECTION_RIGHT_TO_LEFT = 1,
    DWRITE_READING_DIRECTION_TOP_TO_BOTTOM = 2,
    DWRITE_READING_DIRECTION_BOTTOM_TO_TOP = 3,
};
enum DWRITE_FLOW_DIRECTION
{
    DWRITE_FLOW_DIRECTION_TOP_TO_BOTTOM = 0,
    DWRITE_FLOW_DIRECTION_BOTTOM_TO_TOP = 1,
    DWRITE_FLOW_DIRECTION_LEFT_TO_RIGHT = 2,
    DWRITE_FLOW_DIRECTION_RIGHT_TO_LEFT = 3,
};
enum DWRITE_TEXT_ALIGNMENT
{
    DWRITE_TEXT_ALIGNMENT_LEADING,
    DWRITE_TEXT_ALIGNMENT_TRAILING,
    DWRITE_TEXT_ALIGNMENT_CENTER,
    DWRITE_TEXT_ALIGNMENT_JUSTIFIED
};
enum DWRITE_PARAGRAPH_ALIGNMENT
{
    DWRITE_PARAGRAPH_ALIGNMENT_NEAR,
    DWRITE_PARAGRAPH_ALIGNMENT_FAR,
    DWRITE_PARAGRAPH_ALIGNMENT_CENTER
};
enum DWRITE_WORD_WRAPPING
{
    DWRITE_WORD_WRAPPING_WRAP = 0,
    DWRITE_WORD_WRAPPING_NO_WRAP = 1,
    DWRITE_WORD_WRAPPING_EMERGENCY_BREAK = 2,
    DWRITE_WORD_WRAPPING_WHOLE_WORD = 3,
    DWRITE_WORD_WRAPPING_CHARACTER = 4,
};
enum DWRITE_LINE_SPACING_METHOD
{
    DWRITE_LINE_SPACING_METHOD_DEFAULT,
    DWRITE_LINE_SPACING_METHOD_UNIFORM,
    DWRITE_LINE_SPACING_METHOD_PROPORTIONAL
};
enum DWRITE_TRIMMING_GRANULARITY
{
    DWRITE_TRIMMING_GRANULARITY_NONE,
    DWRITE_TRIMMING_GRANULARITY_CHARACTER,
    DWRITE_TRIMMING_GRANULARITY_WORD
};
enum DWRITE_FONT_FEATURE_TAG
{
    DWRITE_FONT_FEATURE_TAG_ALTERNATIVE_FRACTIONS = DWRITE_MAKE_OPENTYPE_TAG('a','f','r','c'),
    DWRITE_FONT_FEATURE_TAG_PETITE_CAPITALS_FROM_CAPITALS = DWRITE_MAKE_OPENTYPE_TAG('c','2','p','c'),
    DWRITE_FONT_FEATURE_TAG_SMALL_CAPITALS_FROM_CAPITALS = DWRITE_MAKE_OPENTYPE_TAG('c','2','s','c'),
    DWRITE_FONT_FEATURE_TAG_CONTEXTUAL_ALTERNATES = DWRITE_MAKE_OPENTYPE_TAG('c','a','l','t'),
    DWRITE_FONT_FEATURE_TAG_CASE_SENSITIVE_FORMS = DWRITE_MAKE_OPENTYPE_TAG('c','a','s','e'),
    DWRITE_FONT_FEATURE_TAG_GLYPH_COMPOSITION_DECOMPOSITION = DWRITE_MAKE_OPENTYPE_TAG('c','c','m','p'),
    DWRITE_FONT_FEATURE_TAG_CONTEXTUAL_LIGATURES = DWRITE_MAKE_OPENTYPE_TAG('c','l','i','g'),
    DWRITE_FONT_FEATURE_TAG_CAPITAL_SPACING = DWRITE_MAKE_OPENTYPE_TAG('c','p','s','p'),
    DWRITE_FONT_FEATURE_TAG_CONTEXTUAL_SWASH = DWRITE_MAKE_OPENTYPE_TAG('c','s','w','h'),
    DWRITE_FONT_FEATURE_TAG_CURSIVE_POSITIONING = DWRITE_MAKE_OPENTYPE_TAG('c','u','r','s'),
    DWRITE_FONT_FEATURE_TAG_DEFAULT = DWRITE_MAKE_OPENTYPE_TAG('d','f','l','t'),
    DWRITE_FONT_FEATURE_TAG_DISCRETIONARY_LIGATURES = DWRITE_MAKE_OPENTYPE_TAG('d','l','i','g'),
    DWRITE_FONT_FEATURE_TAG_EXPERT_FORMS = DWRITE_MAKE_OPENTYPE_TAG('e','x','p','t'),
    DWRITE_FONT_FEATURE_TAG_FRACTIONS = DWRITE_MAKE_OPENTYPE_TAG('f','r','a','c'),
    DWRITE_FONT_FEATURE_TAG_FULL_WIDTH = DWRITE_MAKE_OPENTYPE_TAG('f','w','i','d'),
    DWRITE_FONT_FEATURE_TAG_HALF_FORMS = DWRITE_MAKE_OPENTYPE_TAG('h','a','l','f'),
    DWRITE_FONT_FEATURE_TAG_HALANT_FORMS = DWRITE_MAKE_OPENTYPE_TAG('h','a','l','n'),
    DWRITE_FONT_FEATURE_TAG_ALTERNATE_HALF_WIDTH = DWRITE_MAKE_OPENTYPE_TAG('h','a','l','t'),
    DWRITE_FONT_FEATURE_TAG_HISTORICAL_FORMS = DWRITE_MAKE_OPENTYPE_TAG('h','i','s','t'),
    DWRITE_FONT_FEATURE_TAG_HORIZONTAL_KANA_ALTERNATES = DWRITE_MAKE_OPENTYPE_TAG('h','k','n','a'),
    DWRITE_FONT_FEATURE_TAG_HISTORICAL_LIGATURES = DWRITE_MAKE_OPENTYPE_TAG('h','l','i','g'),
    DWRITE_FONT_FEATURE_TAG_HALF_WIDTH = DWRITE_MAKE_OPENTYPE_TAG('h','w','i','d'),
    DWRITE_FONT_FEATURE_TAG_HOJO_KANJI_FORMS = DWRITE_MAKE_OPENTYPE_TAG('h','o','j','o'),
    DWRITE_FONT_FEATURE_TAG_JIS04_FORMS = DWRITE_MAKE_OPENTYPE_TAG('j','p','0','4'),
    DWRITE_FONT_FEATURE_TAG_JIS78_FORMS = DWRITE_MAKE_OPENTYPE_TAG('j','p','7','8'),
    DWRITE_FONT_FEATURE_TAG_JIS83_FORMS = DWRITE_MAKE_OPENTYPE_TAG('j','p','8','3'),
    DWRITE_FONT_FEATURE_TAG_JIS90_FORMS = DWRITE_MAKE_OPENTYPE_TAG('j','p','9','0'),
    DWRITE_FONT_FEATURE_TAG_KERNING = DWRITE_MAKE_OPENTYPE_TAG('k','e','r','n'),
    DWRITE_FONT_FEATURE_TAG_STANDARD_LIGATURES = DWRITE_MAKE_OPENTYPE_TAG('l','i','g','a'),
    DWRITE_FONT_FEATURE_TAG_LINING_FIGURES = DWRITE_MAKE_OPENTYPE_TAG('l','n','u','m'),
    DWRITE_FONT_FEATURE_TAG_LOCALIZED_FORMS = DWRITE_MAKE_OPENTYPE_TAG('l','o','c','l'),
    DWRITE_FONT_FEATURE_TAG_MARK_POSITIONING = DWRITE_MAKE_OPENTYPE_TAG('m','a','r','k'),
    DWRITE_FONT_FEATURE_TAG_MATHEMATICAL_GREEK = DWRITE_MAKE_OPENTYPE_TAG('m','g','r','k'),
    DWRITE_FONT_FEATURE_TAG_MARK_TO_MARK_POSITIONING = DWRITE_MAKE_OPENTYPE_TAG('m','k','m','k'),
    DWRITE_FONT_FEATURE_TAG_ALTERNATE_ANNOTATION_FORMS = DWRITE_MAKE_OPENTYPE_TAG('n','a','l','t'),
    DWRITE_FONT_FEATURE_TAG_NLC_KANJI_FORMS = DWRITE_MAKE_OPENTYPE_TAG('n','l','c','k'),
    DWRITE_FONT_FEATURE_TAG_OLD_STYLE_FIGURES = DWRITE_MAKE_OPENTYPE_TAG('o','n','u','m'),
    DWRITE_FONT_FEATURE_TAG_ORDINALS = DWRITE_MAKE_OPENTYPE_TAG('o','r','d','n'),
    DWRITE_FONT_FEATURE_TAG_PROPORTIONAL_ALTERNATE_WIDTH = DWRITE_MAKE_OPENTYPE_TAG('p','a','l','t'),
    DWRITE_FONT_FEATURE_TAG_PETITE_CAPITALS = DWRITE_MAKE_OPENTYPE_TAG('p','c','a','p'),
    DWRITE_FONT_FEATURE_TAG_PROPORTIONAL_FIGURES = DWRITE_MAKE_OPENTYPE_TAG('p','n','u','m'),
    DWRITE_FONT_FEATURE_TAG_PROPORTIONAL_WIDTHS = DWRITE_MAKE_OPENTYPE_TAG('p','w','i','d'),
    DWRITE_FONT_FEATURE_TAG_QUARTER_WIDTHS = DWRITE_MAKE_OPENTYPE_TAG('q','w','i','d'),
    DWRITE_FONT_FEATURE_TAG_REQUIRED_LIGATURES = DWRITE_MAKE_OPENTYPE_TAG('r','l','i','g'),
    DWRITE_FONT_FEATURE_TAG_RUBY_NOTATION_FORMS = DWRITE_MAKE_OPENTYPE_TAG('r','u','b','y'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_ALTERNATES = DWRITE_MAKE_OPENTYPE_TAG('s','a','l','t'),
    DWRITE_FONT_FEATURE_TAG_SCIENTIFIC_INFERIORS = DWRITE_MAKE_OPENTYPE_TAG('s','i','n','f'),
    DWRITE_FONT_FEATURE_TAG_SMALL_CAPITALS = DWRITE_MAKE_OPENTYPE_TAG('s','m','c','p'),
    DWRITE_FONT_FEATURE_TAG_SIMPLIFIED_FORMS = DWRITE_MAKE_OPENTYPE_TAG('s','m','p','l'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_1 = DWRITE_MAKE_OPENTYPE_TAG('s','s','0','1'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_2 = DWRITE_MAKE_OPENTYPE_TAG('s','s','0','2'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_3 = DWRITE_MAKE_OPENTYPE_TAG('s','s','0','3'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_4 = DWRITE_MAKE_OPENTYPE_TAG('s','s','0','4'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_5 = DWRITE_MAKE_OPENTYPE_TAG('s','s','0','5'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_6 = DWRITE_MAKE_OPENTYPE_TAG('s','s','0','6'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_7 = DWRITE_MAKE_OPENTYPE_TAG('s','s','0','7'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_8 = DWRITE_MAKE_OPENTYPE_TAG('s','s','0','8'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_9 = DWRITE_MAKE_OPENTYPE_TAG('s','s','0','9'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_10 = DWRITE_MAKE_OPENTYPE_TAG('s','s','1','0'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_11 = DWRITE_MAKE_OPENTYPE_TAG('s','s','1','1'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_12 = DWRITE_MAKE_OPENTYPE_TAG('s','s','1','2'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_13 = DWRITE_MAKE_OPENTYPE_TAG('s','s','1','3'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_14 = DWRITE_MAKE_OPENTYPE_TAG('s','s','1','4'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_15 = DWRITE_MAKE_OPENTYPE_TAG('s','s','1','5'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_16 = DWRITE_MAKE_OPENTYPE_TAG('s','s','1','6'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_17 = DWRITE_MAKE_OPENTYPE_TAG('s','s','1','7'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_18 = DWRITE_MAKE_OPENTYPE_TAG('s','s','1','8'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_19 = DWRITE_MAKE_OPENTYPE_TAG('s','s','1','9'),
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_20 = DWRITE_MAKE_OPENTYPE_TAG('s','s','2','0'),
    DWRITE_FONT_FEATURE_TAG_SUBSCRIPT = DWRITE_MAKE_OPENTYPE_TAG('s','u','b','s'),
    DWRITE_FONT_FEATURE_TAG_SUPERSCRIPT = DWRITE_MAKE_OPENTYPE_TAG('s','u','p','s'),
    DWRITE_FONT_FEATURE_TAG_SWASH = DWRITE_MAKE_OPENTYPE_TAG('s','w','s','h'),
    DWRITE_FONT_FEATURE_TAG_TITLING = DWRITE_MAKE_OPENTYPE_TAG('t','i','t','l'),
    DWRITE_FONT_FEATURE_TAG_TRADITIONAL_NAME_FORMS = DWRITE_MAKE_OPENTYPE_TAG('t','n','a','m'),
    DWRITE_FONT_FEATURE_TAG_TABULAR_FIGURES = DWRITE_MAKE_OPENTYPE_TAG('t','n','u','m'),
    DWRITE_FONT_FEATURE_TAG_TRADITIONAL_FORMS = DWRITE_MAKE_OPENTYPE_TAG('t','r','a','d'),
    DWRITE_FONT_FEATURE_TAG_THIRD_WIDTHS = DWRITE_MAKE_OPENTYPE_TAG('t','w','i','d'),
    DWRITE_FONT_FEATURE_TAG_UNICASE = DWRITE_MAKE_OPENTYPE_TAG('u','n','i','c'),
    DWRITE_FONT_FEATURE_TAG_VERTICAL_WRITING = DWRITE_MAKE_OPENTYPE_TAG('v','e','r','t'),
    DWRITE_FONT_FEATURE_TAG_VERTICAL_ALTERNATES_AND_ROTATION = DWRITE_MAKE_OPENTYPE_TAG('v','r','t','2'),
    DWRITE_FONT_FEATURE_TAG_SLASHED_ZERO = DWRITE_MAKE_OPENTYPE_TAG('z','e','r','o'),
};
struct DWRITE_TEXT_RANGE
{
    UINT32 startPosition;
    UINT32 length;
};
struct DWRITE_FONT_FEATURE
{
    DWRITE_FONT_FEATURE_TAG nameTag;
    UINT32 parameter;
};
struct DWRITE_TYPOGRAPHIC_FEATURES
{
    _Field_size_(featureCount) DWRITE_FONT_FEATURE* features;
    UINT32 featureCount;
};
struct DWRITE_TRIMMING
{
    DWRITE_TRIMMING_GRANULARITY granularity;
    UINT32 delimiter;
    UINT32 delimiterCount;
};
interface IDWriteTypography;
interface IDWriteInlineObject;
interface DWRITE_DECLARE_INTERFACE("9c906818-31d7-4fd3-a151-7c5e225db55a") IDWriteTextFormat : public IUnknown
{
    STDMETHOD(SetTextAlignment)(
        DWRITE_TEXT_ALIGNMENT textAlignment
        ) PURE;
    STDMETHOD(SetParagraphAlignment)(
        DWRITE_PARAGRAPH_ALIGNMENT paragraphAlignment
        ) PURE;
    STDMETHOD(SetWordWrapping)(
        DWRITE_WORD_WRAPPING wordWrapping
        ) PURE;
    STDMETHOD(SetReadingDirection)(
        DWRITE_READING_DIRECTION readingDirection
        ) PURE;
    STDMETHOD(SetFlowDirection)(
        DWRITE_FLOW_DIRECTION flowDirection
        ) PURE;
    STDMETHOD(SetIncrementalTabStop)(
        FLOAT incrementalTabStop
        ) PURE;
    STDMETHOD(SetTrimming)(
        _In_ DWRITE_TRIMMING const* trimmingOptions,
        _In_opt_ IDWriteInlineObject* trimmingSign
        ) PURE;
    STDMETHOD(SetLineSpacing)(
        DWRITE_LINE_SPACING_METHOD lineSpacingMethod,
        FLOAT lineSpacing,
        FLOAT baseline
        ) PURE;
    STDMETHOD_(DWRITE_TEXT_ALIGNMENT, GetTextAlignment)() PURE;
    STDMETHOD_(DWRITE_PARAGRAPH_ALIGNMENT, GetParagraphAlignment)() PURE;
    STDMETHOD_(DWRITE_WORD_WRAPPING, GetWordWrapping)() PURE;
    STDMETHOD_(DWRITE_READING_DIRECTION, GetReadingDirection)() PURE;
    STDMETHOD_(DWRITE_FLOW_DIRECTION, GetFlowDirection)() PURE;
    STDMETHOD_(FLOAT, GetIncrementalTabStop)() PURE;
    STDMETHOD(GetTrimming)(
        _Out_ DWRITE_TRIMMING* trimmingOptions,
        _COM_Outptr_ IDWriteInlineObject** trimmingSign
        ) PURE;
    STDMETHOD(GetLineSpacing)(
        _Out_ DWRITE_LINE_SPACING_METHOD* lineSpacingMethod,
        _Out_ FLOAT* lineSpacing,
        _Out_ FLOAT* baseline
        ) PURE;
    STDMETHOD(GetFontCollection)(
        _COM_Outptr_ IDWriteFontCollection** fontCollection
        ) PURE;
    STDMETHOD_(UINT32, GetFontFamilyNameLength)() PURE;
    STDMETHOD(GetFontFamilyName)(
        _Out_writes_z_(nameSize) WCHAR* fontFamilyName,
        UINT32 nameSize
        ) PURE;
    STDMETHOD_(DWRITE_FONT_WEIGHT, GetFontWeight)() PURE;
    STDMETHOD_(DWRITE_FONT_STYLE, GetFontStyle)() PURE;
    STDMETHOD_(DWRITE_FONT_STRETCH, GetFontStretch)() PURE;
    STDMETHOD_(FLOAT, GetFontSize)() PURE;
    STDMETHOD_(UINT32, GetLocaleNameLength)() PURE;
    STDMETHOD(GetLocaleName)(
        _Out_writes_z_(nameSize) WCHAR* localeName,
        UINT32 nameSize
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("55f1112b-1dc2-4b3c-9541-f46894ed85b6") IDWriteTypography : public IUnknown
{
    STDMETHOD(AddFontFeature)(
        DWRITE_FONT_FEATURE fontFeature
        ) PURE;
    STDMETHOD_(UINT32, GetFontFeatureCount)() PURE;
    STDMETHOD(GetFontFeature)(
        UINT32 fontFeatureIndex,
        _Out_ DWRITE_FONT_FEATURE* fontFeature
        ) PURE;
};
enum DWRITE_SCRIPT_SHAPES
{
    DWRITE_SCRIPT_SHAPES_DEFAULT = 0,
    DWRITE_SCRIPT_SHAPES_NO_VISUAL = 1
};
DEFINE_ENUM_FLAG_OPERATORS(DWRITE_SCRIPT_SHAPES);
struct DWRITE_SCRIPT_ANALYSIS
{
    UINT16 script;
    DWRITE_SCRIPT_SHAPES shapes;
};
enum DWRITE_BREAK_CONDITION
{
    DWRITE_BREAK_CONDITION_NEUTRAL,
    DWRITE_BREAK_CONDITION_CAN_BREAK,
    DWRITE_BREAK_CONDITION_MAY_NOT_BREAK,
    DWRITE_BREAK_CONDITION_MUST_BREAK
};
struct DWRITE_LINE_BREAKPOINT
{
    UINT8 breakConditionBefore : 2;
    UINT8 breakConditionAfter : 2;
    UINT8 isWhitespace : 1;
    UINT8 isSoftHyphen : 1;
    UINT8 padding : 2;
};
enum DWRITE_NUMBER_SUBSTITUTION_METHOD
{
    DWRITE_NUMBER_SUBSTITUTION_METHOD_FROM_CULTURE,
    DWRITE_NUMBER_SUBSTITUTION_METHOD_CONTEXTUAL,
    DWRITE_NUMBER_SUBSTITUTION_METHOD_NONE,
    DWRITE_NUMBER_SUBSTITUTION_METHOD_NATIONAL,
    DWRITE_NUMBER_SUBSTITUTION_METHOD_TRADITIONAL
};
interface DWRITE_DECLARE_INTERFACE("14885CC9-BAB0-4f90-B6ED-5C366A2CD03D") IDWriteNumberSubstitution : public IUnknown
{
};
struct DWRITE_SHAPING_TEXT_PROPERTIES
{
    UINT16 isShapedAlone : 1;
    UINT16 reserved1 : 1;
    UINT16 canBreakShapingAfter : 1;
    UINT16 reserved : 13;
};
struct DWRITE_SHAPING_GLYPH_PROPERTIES
{
    UINT16 justification : 4;
    UINT16 isClusterStart : 1;
    UINT16 isDiacritic : 1;
    UINT16 isZeroWidthSpace : 1;
    UINT16 reserved : 9;
};
interface DWRITE_DECLARE_INTERFACE("688e1a58-5094-47c8-adc8-fbcea60ae92b") IDWriteTextAnalysisSource : public IUnknown
{
    STDMETHOD(GetTextAtPosition)(
        UINT32 textPosition,
        _Outptr_result_buffer_(*textLength) WCHAR const** textString,
        _Out_ UINT32* textLength
        ) PURE;
    STDMETHOD(GetTextBeforePosition)(
        UINT32 textPosition,
        _Outptr_result_buffer_(*textLength) WCHAR const** textString,
        _Out_ UINT32* textLength
        ) PURE;
    STDMETHOD_(DWRITE_READING_DIRECTION, GetParagraphReadingDirection)() PURE;
    STDMETHOD(GetLocaleName)(
        UINT32 textPosition,
        _Out_ UINT32* textLength,
        _Outptr_result_z_ WCHAR const** localeName
        ) PURE;
    STDMETHOD(GetNumberSubstitution)(
        UINT32 textPosition,
        _Out_ UINT32* textLength,
        _COM_Outptr_ IDWriteNumberSubstitution** numberSubstitution
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("5810cd44-0ca0-4701-b3fa-bec5182ae4f6") IDWriteTextAnalysisSink : public IUnknown
{
    STDMETHOD(SetScriptAnalysis)(
        UINT32 textPosition,
        UINT32 textLength,
        _In_ DWRITE_SCRIPT_ANALYSIS const* scriptAnalysis
        ) PURE;
    STDMETHOD(SetLineBreakpoints)(
        UINT32 textPosition,
        UINT32 textLength,
        _In_reads_(textLength) DWRITE_LINE_BREAKPOINT const* lineBreakpoints
        ) PURE;
    STDMETHOD(SetBidiLevel)(
        UINT32 textPosition,
        UINT32 textLength,
        UINT8 explicitLevel,
        UINT8 resolvedLevel
        ) PURE;
    STDMETHOD(SetNumberSubstitution)(
        UINT32 textPosition,
        UINT32 textLength,
        _In_ IDWriteNumberSubstitution* numberSubstitution
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("b7e6163e-7f46-43b4-84b3-e4e6249c365d") IDWriteTextAnalyzer : public IUnknown
{
    STDMETHOD(AnalyzeScript)(
        _In_ IDWriteTextAnalysisSource* analysisSource,
        UINT32 textPosition,
        UINT32 textLength,
        _In_ IDWriteTextAnalysisSink* analysisSink
        ) PURE;
    STDMETHOD(AnalyzeBidi)(
        _In_ IDWriteTextAnalysisSource* analysisSource,
        UINT32 textPosition,
        UINT32 textLength,
        _In_ IDWriteTextAnalysisSink* analysisSink
        ) PURE;
    STDMETHOD(AnalyzeNumberSubstitution)(
        _In_ IDWriteTextAnalysisSource* analysisSource,
        UINT32 textPosition,
        UINT32 textLength,
        _In_ IDWriteTextAnalysisSink* analysisSink
        ) PURE;
    STDMETHOD(AnalyzeLineBreakpoints)(
        _In_ IDWriteTextAnalysisSource* analysisSource,
        UINT32 textPosition,
        UINT32 textLength,
        _In_ IDWriteTextAnalysisSink* analysisSink
        ) PURE;
    STDMETHOD(GetGlyphs)(
        _In_reads_(textLength) WCHAR const* textString,
        UINT32 textLength,
        _In_ IDWriteFontFace* fontFace,
        BOOL isSideways,
        BOOL isRightToLeft,
        _In_ DWRITE_SCRIPT_ANALYSIS const* scriptAnalysis,
        _In_opt_z_ WCHAR const* localeName,
        _In_opt_ IDWriteNumberSubstitution* numberSubstitution,
        _In_reads_opt_(featureRanges) DWRITE_TYPOGRAPHIC_FEATURES const** features,
        _In_reads_opt_(featureRanges) UINT32 const* featureRangeLengths,
        UINT32 featureRanges,
        UINT32 maxGlyphCount,
        _Out_writes_(textLength) UINT16* clusterMap,
        _Out_writes_(textLength) DWRITE_SHAPING_TEXT_PROPERTIES* textProps,
        _Out_writes_(maxGlyphCount) UINT16* glyphIndices,
        _Out_writes_(maxGlyphCount) DWRITE_SHAPING_GLYPH_PROPERTIES* glyphProps,
        _Out_ UINT32* actualGlyphCount
        ) PURE;
    STDMETHOD(GetGlyphPlacements)(
        _In_reads_(textLength) WCHAR const* textString,
        _In_reads_(textLength) UINT16 const* clusterMap,
        _Inout_updates_(textLength) DWRITE_SHAPING_TEXT_PROPERTIES* textProps,
        UINT32 textLength,
        _In_reads_(glyphCount) UINT16 const* glyphIndices,
        _In_reads_(glyphCount) DWRITE_SHAPING_GLYPH_PROPERTIES const* glyphProps,
        UINT32 glyphCount,
        _In_ IDWriteFontFace* fontFace,
        FLOAT fontEmSize,
        BOOL isSideways,
        BOOL isRightToLeft,
        _In_ DWRITE_SCRIPT_ANALYSIS const* scriptAnalysis,
        _In_opt_z_ WCHAR const* localeName,
        _In_reads_opt_(featureRanges) DWRITE_TYPOGRAPHIC_FEATURES const** features,
        _In_reads_opt_(featureRanges) UINT32 const* featureRangeLengths,
        UINT32 featureRanges,
        _Out_writes_(glyphCount) FLOAT* glyphAdvances,
        _Out_writes_(glyphCount) DWRITE_GLYPH_OFFSET* glyphOffsets
        ) PURE;
    STDMETHOD(GetGdiCompatibleGlyphPlacements)(
        _In_reads_(textLength) WCHAR const* textString,
        _In_reads_(textLength) UINT16 const* clusterMap,
        _In_reads_(textLength) DWRITE_SHAPING_TEXT_PROPERTIES* textProps,
        UINT32 textLength,
        _In_reads_(glyphCount) UINT16 const* glyphIndices,
        _In_reads_(glyphCount) DWRITE_SHAPING_GLYPH_PROPERTIES const* glyphProps,
        UINT32 glyphCount,
        _In_ IDWriteFontFace * fontFace,
        FLOAT fontEmSize,
        FLOAT pixelsPerDip,
        _In_opt_ DWRITE_MATRIX const* transform,
        BOOL useGdiNatural,
        BOOL isSideways,
        BOOL isRightToLeft,
        _In_ DWRITE_SCRIPT_ANALYSIS const* scriptAnalysis,
        _In_opt_z_ WCHAR const* localeName,
        _In_reads_opt_(featureRanges) DWRITE_TYPOGRAPHIC_FEATURES const** features,
        _In_reads_opt_(featureRanges) UINT32 const* featureRangeLengths,
        UINT32 featureRanges,
        _Out_writes_(glyphCount) FLOAT* glyphAdvances,
        _Out_writes_(glyphCount) DWRITE_GLYPH_OFFSET* glyphOffsets
        ) PURE;
};
struct DWRITE_GLYPH_RUN
{
    _Notnull_ IDWriteFontFace* fontFace;
    FLOAT fontEmSize;
    UINT32 glyphCount;
    _Field_size_(glyphCount) UINT16 const* glyphIndices;
    _Field_size_opt_(glyphCount) FLOAT const* glyphAdvances;
    _Field_size_opt_(glyphCount) DWRITE_GLYPH_OFFSET const* glyphOffsets;
    BOOL isSideways;
    UINT32 bidiLevel;
};
struct DWRITE_GLYPH_RUN_DESCRIPTION
{
    _Field_z_ WCHAR const* localeName;
    _Field_size_(stringLength) WCHAR const* string;
    UINT32 stringLength;
    _Field_size_opt_(stringLength) UINT16 const* clusterMap;
    UINT32 textPosition;
};
struct DWRITE_UNDERLINE
{
    FLOAT width;
    FLOAT thickness;
    FLOAT offset;
    FLOAT runHeight;
    DWRITE_READING_DIRECTION readingDirection;
    DWRITE_FLOW_DIRECTION flowDirection;
    _Field_z_ WCHAR const* localeName;
    DWRITE_MEASURING_MODE measuringMode;
};
struct DWRITE_STRIKETHROUGH
{
    FLOAT width;
    FLOAT thickness;
    FLOAT offset;
    DWRITE_READING_DIRECTION readingDirection;
    DWRITE_FLOW_DIRECTION flowDirection;
    _Field_z_ WCHAR const* localeName;
    DWRITE_MEASURING_MODE measuringMode;
};
struct DWRITE_LINE_METRICS
{
    UINT32 length;
    UINT32 trailingWhitespaceLength;
    UINT32 newlineLength;
    FLOAT height;
    FLOAT baseline;
    BOOL isTrimmed;
};
struct DWRITE_CLUSTER_METRICS
{
    FLOAT width;
    UINT16 length;
    UINT16 canWrapLineAfter : 1;
    UINT16 isWhitespace : 1;
    UINT16 isNewline : 1;
    UINT16 isSoftHyphen : 1;
    UINT16 isRightToLeft : 1;
    UINT16 padding : 11;
};
struct DWRITE_TEXT_METRICS
{
    FLOAT left;
    FLOAT top;
    FLOAT width;
    FLOAT widthIncludingTrailingWhitespace;
    FLOAT height;
    FLOAT layoutWidth;
    FLOAT layoutHeight;
    UINT32 maxBidiReorderingDepth;
    UINT32 lineCount;
};
struct DWRITE_INLINE_OBJECT_METRICS
{
    FLOAT width;
    FLOAT height;
    FLOAT baseline;
    BOOL supportsSideways;
};
struct DWRITE_OVERHANG_METRICS
{
    FLOAT left;
    FLOAT top;
    FLOAT right;
    FLOAT bottom;
};
struct DWRITE_HIT_TEST_METRICS
{
    UINT32 textPosition;
    UINT32 length;
    FLOAT left;
    FLOAT top;
    FLOAT width;
    FLOAT height;
    UINT32 bidiLevel;
    BOOL isText;
    BOOL isTrimmed;
};
interface IDWriteTextRenderer;
interface DWRITE_DECLARE_INTERFACE("8339FDE3-106F-47ab-8373-1C6295EB10B3") IDWriteInlineObject : public IUnknown
{
    STDMETHOD(Draw)(
        _In_opt_ void* clientDrawingContext,
        _In_ IDWriteTextRenderer* renderer,
        FLOAT originX,
        FLOAT originY,
        BOOL isSideways,
        BOOL isRightToLeft,
        _In_opt_ IUnknown* clientDrawingEffect
        ) PURE;
    STDMETHOD(GetMetrics)(
        _Out_ DWRITE_INLINE_OBJECT_METRICS* metrics
        ) PURE;
    STDMETHOD(GetOverhangMetrics)(
        _Out_ DWRITE_OVERHANG_METRICS* overhangs
        ) PURE;
    STDMETHOD(GetBreakConditions)(
        _Out_ DWRITE_BREAK_CONDITION* breakConditionBefore,
        _Out_ DWRITE_BREAK_CONDITION* breakConditionAfter
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("eaf3a2da-ecf4-4d24-b644-b34f6842024b") IDWritePixelSnapping : public IUnknown
{
    STDMETHOD(IsPixelSnappingDisabled)(
        _In_opt_ void* clientDrawingContext,
        _Out_ BOOL* isDisabled
        ) PURE;
    STDMETHOD(GetCurrentTransform)(
        _In_opt_ void* clientDrawingContext,
        _Out_ DWRITE_MATRIX* transform
        ) PURE;
    STDMETHOD(GetPixelsPerDip)(
        _In_opt_ void* clientDrawingContext,
        _Out_ FLOAT* pixelsPerDip
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("ef8a8135-5cc6-45fe-8825-c5a0724eb819") IDWriteTextRenderer : public IDWritePixelSnapping
{
    STDMETHOD(DrawGlyphRun)(
        _In_opt_ void* clientDrawingContext,
        FLOAT baselineOriginX,
        FLOAT baselineOriginY,
        DWRITE_MEASURING_MODE measuringMode,
        _In_ DWRITE_GLYPH_RUN const* glyphRun,
        _In_ DWRITE_GLYPH_RUN_DESCRIPTION const* glyphRunDescription,
        _In_opt_ IUnknown* clientDrawingEffect
        ) PURE;
    STDMETHOD(DrawUnderline)(
        _In_opt_ void* clientDrawingContext,
        FLOAT baselineOriginX,
        FLOAT baselineOriginY,
        _In_ DWRITE_UNDERLINE const* underline,
        _In_opt_ IUnknown* clientDrawingEffect
        ) PURE;
    STDMETHOD(DrawStrikethrough)(
        _In_opt_ void* clientDrawingContext,
        FLOAT baselineOriginX,
        FLOAT baselineOriginY,
        _In_ DWRITE_STRIKETHROUGH const* strikethrough,
        _In_opt_ IUnknown* clientDrawingEffect
        ) PURE;
    STDMETHOD(DrawInlineObject)(
        _In_opt_ void* clientDrawingContext,
        FLOAT originX,
        FLOAT originY,
        _In_ IDWriteInlineObject* inlineObject,
        BOOL isSideways,
        BOOL isRightToLeft,
        _In_opt_ IUnknown* clientDrawingEffect
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("53737037-6d14-410b-9bfe-0b182bb70961") IDWriteTextLayout : public IDWriteTextFormat
{
    STDMETHOD(SetMaxWidth)(
        FLOAT maxWidth
        ) PURE;
    STDMETHOD(SetMaxHeight)(
        FLOAT maxHeight
        ) PURE;
    STDMETHOD(SetFontCollection)(
        _In_ IDWriteFontCollection* fontCollection,
        DWRITE_TEXT_RANGE textRange
        ) PURE;
    STDMETHOD(SetFontFamilyName)(
        _In_z_ WCHAR const* fontFamilyName,
        DWRITE_TEXT_RANGE textRange
        ) PURE;
    STDMETHOD(SetFontWeight)(
        DWRITE_FONT_WEIGHT fontWeight,
        DWRITE_TEXT_RANGE textRange
        ) PURE;
    STDMETHOD(SetFontStyle)(
        DWRITE_FONT_STYLE fontStyle,
        DWRITE_TEXT_RANGE textRange
        ) PURE;
    STDMETHOD(SetFontStretch)(
        DWRITE_FONT_STRETCH fontStretch,
        DWRITE_TEXT_RANGE textRange
        ) PURE;
    STDMETHOD(SetFontSize)(
        FLOAT fontSize,
        DWRITE_TEXT_RANGE textRange
        ) PURE;
    STDMETHOD(SetUnderline)(
        BOOL hasUnderline,
        DWRITE_TEXT_RANGE textRange
        ) PURE;
    STDMETHOD(SetStrikethrough)(
        BOOL hasStrikethrough,
        DWRITE_TEXT_RANGE textRange
        ) PURE;
    STDMETHOD(SetDrawingEffect)(
        IUnknown* drawingEffect,
        DWRITE_TEXT_RANGE textRange
        ) PURE;
    STDMETHOD(SetInlineObject)(
        _In_ IDWriteInlineObject* inlineObject,
        DWRITE_TEXT_RANGE textRange
        ) PURE;
    STDMETHOD(SetTypography)(
        _In_ IDWriteTypography* typography,
        DWRITE_TEXT_RANGE textRange
        ) PURE;
    STDMETHOD(SetLocaleName)(
        _In_z_ WCHAR const* localeName,
        DWRITE_TEXT_RANGE textRange
        ) PURE;
    STDMETHOD_(FLOAT, GetMaxWidth)() PURE;
    STDMETHOD_(FLOAT, GetMaxHeight)() PURE;
    STDMETHOD(GetFontCollection)(
        UINT32 currentPosition,
        _COM_Outptr_ IDWriteFontCollection** fontCollection,
        _Out_opt_ DWRITE_TEXT_RANGE* textRange = NULL
        ) PURE;
    STDMETHOD(GetFontFamilyNameLength)(
        UINT32 currentPosition,
        _Out_ UINT32* nameLength,
        _Out_opt_ DWRITE_TEXT_RANGE* textRange = NULL
        ) PURE;
    STDMETHOD(GetFontFamilyName)(
        UINT32 currentPosition,
        _Out_writes_z_(nameSize) WCHAR* fontFamilyName,
        UINT32 nameSize,
        _Out_opt_ DWRITE_TEXT_RANGE* textRange = NULL
        ) PURE;
    STDMETHOD(GetFontWeight)(
        UINT32 currentPosition,
        _Out_ DWRITE_FONT_WEIGHT* fontWeight,
        _Out_opt_ DWRITE_TEXT_RANGE* textRange = NULL
        ) PURE;
    STDMETHOD(GetFontStyle)(
        UINT32 currentPosition,
        _Out_ DWRITE_FONT_STYLE* fontStyle,
        _Out_opt_ DWRITE_TEXT_RANGE* textRange = NULL
        ) PURE;
    STDMETHOD(GetFontStretch)(
        UINT32 currentPosition,
        _Out_ DWRITE_FONT_STRETCH* fontStretch,
        _Out_opt_ DWRITE_TEXT_RANGE* textRange = NULL
        ) PURE;
    STDMETHOD(GetFontSize)(
        UINT32 currentPosition,
        _Out_ FLOAT* fontSize,
        _Out_opt_ DWRITE_TEXT_RANGE* textRange = NULL
        ) PURE;
    STDMETHOD(GetUnderline)(
        UINT32 currentPosition,
        _Out_ BOOL* hasUnderline,
        _Out_opt_ DWRITE_TEXT_RANGE* textRange = NULL
        ) PURE;
    STDMETHOD(GetStrikethrough)(
        UINT32 currentPosition,
        _Out_ BOOL* hasStrikethrough,
        _Out_opt_ DWRITE_TEXT_RANGE* textRange = NULL
        ) PURE;
    STDMETHOD(GetDrawingEffect)(
        UINT32 currentPosition,
        _COM_Outptr_ IUnknown** drawingEffect,
        _Out_opt_ DWRITE_TEXT_RANGE* textRange = NULL
        ) PURE;
    STDMETHOD(GetInlineObject)(
        UINT32 currentPosition,
        _COM_Outptr_ IDWriteInlineObject** inlineObject,
        _Out_opt_ DWRITE_TEXT_RANGE* textRange = NULL
        ) PURE;
    STDMETHOD(GetTypography)(
        UINT32 currentPosition,
        _COM_Outptr_ IDWriteTypography** typography,
        _Out_opt_ DWRITE_TEXT_RANGE* textRange = NULL
        ) PURE;
    STDMETHOD(GetLocaleNameLength)(
        UINT32 currentPosition,
        _Out_ UINT32* nameLength,
        _Out_opt_ DWRITE_TEXT_RANGE* textRange = NULL
        ) PURE;
    STDMETHOD(GetLocaleName)(
        UINT32 currentPosition,
        _Out_writes_z_(nameSize) WCHAR* localeName,
        UINT32 nameSize,
        _Out_opt_ DWRITE_TEXT_RANGE* textRange = NULL
        ) PURE;
    STDMETHOD(Draw)(
        _In_opt_ void* clientDrawingContext,
        _In_ IDWriteTextRenderer* renderer,
        FLOAT originX,
        FLOAT originY
        ) PURE;
    STDMETHOD(GetLineMetrics)(
        _Out_writes_opt_(maxLineCount) DWRITE_LINE_METRICS* lineMetrics,
        UINT32 maxLineCount,
        _Out_ UINT32* actualLineCount
        ) PURE;
    STDMETHOD(GetMetrics)(
        _Out_ DWRITE_TEXT_METRICS* textMetrics
        ) PURE;
    STDMETHOD(GetOverhangMetrics)(
        _Out_ DWRITE_OVERHANG_METRICS* overhangs
        ) PURE;
    STDMETHOD(GetClusterMetrics)(
        _Out_writes_opt_(maxClusterCount) DWRITE_CLUSTER_METRICS* clusterMetrics,
        UINT32 maxClusterCount,
        _Out_ UINT32* actualClusterCount
        ) PURE;
    STDMETHOD(DetermineMinWidth)(
        _Out_ FLOAT* minWidth
        ) PURE;
    STDMETHOD(HitTestPoint)(
        FLOAT pointX,
        FLOAT pointY,
        _Out_ BOOL* isTrailingHit,
        _Out_ BOOL* isInside,
        _Out_ DWRITE_HIT_TEST_METRICS* hitTestMetrics
        ) PURE;
    STDMETHOD(HitTestTextPosition)(
        UINT32 textPosition,
        BOOL isTrailingHit,
        _Out_ FLOAT* pointX,
        _Out_ FLOAT* pointY,
        _Out_ DWRITE_HIT_TEST_METRICS* hitTestMetrics
        ) PURE;
    STDMETHOD(HitTestTextRange)(
        UINT32 textPosition,
        UINT32 textLength,
        FLOAT originX,
        FLOAT originY,
        _Out_writes_opt_(maxHitTestMetricsCount) DWRITE_HIT_TEST_METRICS* hitTestMetrics,
        UINT32 maxHitTestMetricsCount,
        _Out_ UINT32* actualHitTestMetricsCount
        ) PURE;
    using IDWriteTextFormat::GetFontCollection;
    using IDWriteTextFormat::GetFontFamilyNameLength;
    using IDWriteTextFormat::GetFontFamilyName;
    using IDWriteTextFormat::GetFontWeight;
    using IDWriteTextFormat::GetFontStyle;
    using IDWriteTextFormat::GetFontStretch;
    using IDWriteTextFormat::GetFontSize;
    using IDWriteTextFormat::GetLocaleNameLength;
    using IDWriteTextFormat::GetLocaleName;
};
interface DWRITE_DECLARE_INTERFACE("5e5a32a3-8dff-4773-9ff6-0696eab77267") IDWriteBitmapRenderTarget : public IUnknown
{
    STDMETHOD(DrawGlyphRun)(
        FLOAT baselineOriginX,
        FLOAT baselineOriginY,
        DWRITE_MEASURING_MODE measuringMode,
        _In_ DWRITE_GLYPH_RUN const* glyphRun,
        _In_ IDWriteRenderingParams* renderingParams,
        COLORREF textColor,
        _Out_opt_ RECT* blackBoxRect = NULL
        ) PURE;
    STDMETHOD_(HDC, GetMemoryDC)() PURE;
    STDMETHOD_(FLOAT, GetPixelsPerDip)() PURE;
    STDMETHOD(SetPixelsPerDip)(
        FLOAT pixelsPerDip
        ) PURE;
    STDMETHOD(GetCurrentTransform)(
        _Out_ DWRITE_MATRIX* transform
        ) PURE;
    STDMETHOD(SetCurrentTransform)(
        _In_opt_ DWRITE_MATRIX const* transform
        ) PURE;
    STDMETHOD(GetSize)(
        _Out_ SIZE* size
        ) PURE;
    STDMETHOD(Resize)(
        UINT32 width,
        UINT32 height
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("1edd9491-9853-4299-898f-6432983b6f3a") IDWriteGdiInterop : public IUnknown
{
    STDMETHOD(CreateFontFromLOGFONT)(
        _In_ LOGFONTW const* logFont,
        _COM_Outptr_ IDWriteFont** font
        ) PURE;
    STDMETHOD(ConvertFontToLOGFONT)(
        _In_ IDWriteFont* font,
        _Out_ LOGFONTW* logFont,
        _Out_ BOOL* isSystemFont
        ) PURE;
    STDMETHOD(ConvertFontFaceToLOGFONT)(
        _In_ IDWriteFontFace* font,
        _Out_ LOGFONTW* logFont
        ) PURE;
    STDMETHOD(CreateFontFaceFromHdc)(
        HDC hdc,
        _COM_Outptr_ IDWriteFontFace** fontFace
        ) PURE;
    STDMETHOD(CreateBitmapRenderTarget)(
        _In_opt_ HDC hdc,
        UINT32 width,
        UINT32 height,
        _COM_Outptr_ IDWriteBitmapRenderTarget** renderTarget
        ) PURE;
};
enum DWRITE_TEXTURE_TYPE
{
    DWRITE_TEXTURE_ALIASED_1x1,
    DWRITE_TEXTURE_CLEARTYPE_3x1
};
interface DWRITE_DECLARE_INTERFACE("7d97dbf7-e085-42d4-81e3-6a883bded118") IDWriteGlyphRunAnalysis : public IUnknown
{
    STDMETHOD(GetAlphaTextureBounds)(
        DWRITE_TEXTURE_TYPE textureType,
        _Out_ RECT* textureBounds
        ) PURE;
    STDMETHOD(CreateAlphaTexture)(
        DWRITE_TEXTURE_TYPE textureType,
        _In_ RECT const* textureBounds,
        _Out_writes_bytes_(bufferSize) BYTE* alphaValues,
        UINT32 bufferSize
        ) PURE;
    STDMETHOD(GetAlphaBlendParams)(
        _In_ IDWriteRenderingParams* renderingParams,
        _Out_ FLOAT* blendGamma,
        _Out_ FLOAT* blendEnhancedContrast,
        _Out_ FLOAT* blendClearTypeLevel
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("b859ee5a-d838-4b5b-a2e8-1adc7d93db48") IDWriteFactory : public IUnknown
{
    STDMETHOD(GetSystemFontCollection)(
        _COM_Outptr_ IDWriteFontCollection** fontCollection,
        BOOL checkForUpdates = FALSE
        ) PURE;
    STDMETHOD(CreateCustomFontCollection)(
        _In_ IDWriteFontCollectionLoader* collectionLoader,
        _In_reads_bytes_(collectionKeySize) void const* collectionKey,
        UINT32 collectionKeySize,
        _COM_Outptr_ IDWriteFontCollection** fontCollection
        ) PURE;
    STDMETHOD(RegisterFontCollectionLoader)(
        _In_ IDWriteFontCollectionLoader* fontCollectionLoader
        ) PURE;
    STDMETHOD(UnregisterFontCollectionLoader)(
        _In_ IDWriteFontCollectionLoader* fontCollectionLoader
        ) PURE;
    STDMETHOD(CreateFontFileReference)(
        _In_z_ WCHAR const* filePath,
        _In_opt_ FILETIME const* lastWriteTime,
        _COM_Outptr_ IDWriteFontFile** fontFile
        ) PURE;
    STDMETHOD(CreateCustomFontFileReference)(
        _In_reads_bytes_(fontFileReferenceKeySize) void const* fontFileReferenceKey,
        UINT32 fontFileReferenceKeySize,
        _In_ IDWriteFontFileLoader* fontFileLoader,
        _COM_Outptr_ IDWriteFontFile** fontFile
        ) PURE;
    STDMETHOD(CreateFontFace)(
        DWRITE_FONT_FACE_TYPE fontFaceType,
        UINT32 numberOfFiles,
        _In_reads_(numberOfFiles) IDWriteFontFile* const* fontFiles,
        UINT32 faceIndex,
        DWRITE_FONT_SIMULATIONS fontFaceSimulationFlags,
        _COM_Outptr_ IDWriteFontFace** fontFace
        ) PURE;
    STDMETHOD(CreateRenderingParams)(
        _COM_Outptr_ IDWriteRenderingParams** renderingParams
        ) PURE;
    STDMETHOD(CreateMonitorRenderingParams)(
        HMONITOR monitor,
        _COM_Outptr_ IDWriteRenderingParams** renderingParams
        ) PURE;
    STDMETHOD(CreateCustomRenderingParams)(
        FLOAT gamma,
        FLOAT enhancedContrast,
        FLOAT clearTypeLevel,
        DWRITE_PIXEL_GEOMETRY pixelGeometry,
        DWRITE_RENDERING_MODE renderingMode,
        _COM_Outptr_ IDWriteRenderingParams** renderingParams
        ) PURE;
    STDMETHOD(RegisterFontFileLoader)(
        _In_ IDWriteFontFileLoader* fontFileLoader
        ) PURE;
    STDMETHOD(UnregisterFontFileLoader)(
        _In_ IDWriteFontFileLoader* fontFileLoader
        ) PURE;
    STDMETHOD(CreateTextFormat)(
        _In_z_ WCHAR const* fontFamilyName,
        _In_opt_ IDWriteFontCollection* fontCollection,
        DWRITE_FONT_WEIGHT fontWeight,
        DWRITE_FONT_STYLE fontStyle,
        DWRITE_FONT_STRETCH fontStretch,
        FLOAT fontSize,
        _In_z_ WCHAR const* localeName,
        _COM_Outptr_ IDWriteTextFormat** textFormat
        ) PURE;
    STDMETHOD(CreateTypography)(
        _COM_Outptr_ IDWriteTypography** typography
        ) PURE;
    STDMETHOD(GetGdiInterop)(
        _COM_Outptr_ IDWriteGdiInterop** gdiInterop
        ) PURE;
    STDMETHOD(CreateTextLayout)(
        _In_reads_(stringLength) WCHAR const* string,
        UINT32 stringLength,
        _In_ IDWriteTextFormat* textFormat,
        FLOAT maxWidth,
        FLOAT maxHeight,
        _COM_Outptr_ IDWriteTextLayout** textLayout
        ) PURE;
    STDMETHOD(CreateGdiCompatibleTextLayout)(
        _In_reads_(stringLength) WCHAR const* string,
        UINT32 stringLength,
        _In_ IDWriteTextFormat* textFormat,
        FLOAT layoutWidth,
        FLOAT layoutHeight,
        FLOAT pixelsPerDip,
        _In_opt_ DWRITE_MATRIX const* transform,
        BOOL useGdiNatural,
        _COM_Outptr_ IDWriteTextLayout** textLayout
        ) PURE;
    STDMETHOD(CreateEllipsisTrimmingSign)(
        _In_ IDWriteTextFormat* textFormat,
        _COM_Outptr_ IDWriteInlineObject** trimmingSign
        ) PURE;
    STDMETHOD(CreateTextAnalyzer)(
        _COM_Outptr_ IDWriteTextAnalyzer** textAnalyzer
        ) PURE;
    STDMETHOD(CreateNumberSubstitution)(
        _In_ DWRITE_NUMBER_SUBSTITUTION_METHOD substitutionMethod,
        _In_z_ WCHAR const* localeName,
        _In_ BOOL ignoreUserOverride,
        _COM_Outptr_ IDWriteNumberSubstitution** numberSubstitution
        ) PURE;
    STDMETHOD(CreateGlyphRunAnalysis)(
        _In_ DWRITE_GLYPH_RUN const* glyphRun,
        FLOAT pixelsPerDip,
        _In_opt_ DWRITE_MATRIX const* transform,
        DWRITE_RENDERING_MODE renderingMode,
        DWRITE_MEASURING_MODE measuringMode,
        FLOAT baselineOriginX,
        FLOAT baselineOriginY,
        _COM_Outptr_ IDWriteGlyphRunAnalysis** glyphRunAnalysis
        ) PURE;
};
EXTERN_C HRESULT DWRITE_EXPORT DWriteCreateFactory(
    _In_ DWRITE_FACTORY_TYPE factoryType,
    _In_ REFIID iid,
    _COM_Outptr_ IUnknown **factory
    );
