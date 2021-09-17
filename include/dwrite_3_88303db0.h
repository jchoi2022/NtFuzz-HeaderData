       
#include <DWrite_2.h>
interface IDWriteFontFaceReference;
interface IDWriteFont3;
interface IDWriteFontFace3;
interface IDWriteFontSet;
interface IDWriteFontSetBuilder;
interface IDWriteFontCollection1;
interface IDWriteFontFamily1;
interface IDWriteStringList;
interface IDWriteFontDownloadQueue;
enum DWRITE_FONT_PROPERTY_ID
{
    DWRITE_FONT_PROPERTY_ID_NONE,
    DWRITE_FONT_PROPERTY_ID_WEIGHT_STRETCH_STYLE_FAMILY_NAME,
    DWRITE_FONT_PROPERTY_ID_TYPOGRAPHIC_FAMILY_NAME,
    DWRITE_FONT_PROPERTY_ID_WEIGHT_STRETCH_STYLE_FACE_NAME,
    DWRITE_FONT_PROPERTY_ID_FULL_NAME,
    DWRITE_FONT_PROPERTY_ID_WIN32_FAMILY_NAME,
    DWRITE_FONT_PROPERTY_ID_POSTSCRIPT_NAME,
    DWRITE_FONT_PROPERTY_ID_DESIGN_SCRIPT_LANGUAGE_TAG,
    DWRITE_FONT_PROPERTY_ID_SUPPORTED_SCRIPT_LANGUAGE_TAG,
    DWRITE_FONT_PROPERTY_ID_SEMANTIC_TAG,
    DWRITE_FONT_PROPERTY_ID_WEIGHT,
    DWRITE_FONT_PROPERTY_ID_STRETCH,
    DWRITE_FONT_PROPERTY_ID_STYLE,
    DWRITE_FONT_PROPERTY_ID_TYPOGRAPHIC_FACE_NAME,
    DWRITE_FONT_PROPERTY_ID_TOTAL = DWRITE_FONT_PROPERTY_ID_STYLE + 1,
    DWRITE_FONT_PROPERTY_ID_TOTAL_RS3 = DWRITE_FONT_PROPERTY_ID_TYPOGRAPHIC_FACE_NAME + 1,
    DWRITE_FONT_PROPERTY_ID_PREFERRED_FAMILY_NAME = DWRITE_FONT_PROPERTY_ID_TYPOGRAPHIC_FAMILY_NAME,
    DWRITE_FONT_PROPERTY_ID_FAMILY_NAME = DWRITE_FONT_PROPERTY_ID_WEIGHT_STRETCH_STYLE_FAMILY_NAME,
    DWRITE_FONT_PROPERTY_ID_FACE_NAME = DWRITE_FONT_PROPERTY_ID_WEIGHT_STRETCH_STYLE_FACE_NAME,
};
struct DWRITE_FONT_PROPERTY
{
    DWRITE_FONT_PROPERTY_ID propertyId;
    _Field_z_ WCHAR const* propertyValue;
    _Field_z_ _Maybenull_ WCHAR const* localeName;
};
enum DWRITE_LOCALITY
{
    DWRITE_LOCALITY_REMOTE,
    DWRITE_LOCALITY_PARTIAL,
    DWRITE_LOCALITY_LOCAL,
};
enum DWRITE_RENDERING_MODE1
{
    DWRITE_RENDERING_MODE1_DEFAULT = DWRITE_RENDERING_MODE_DEFAULT,
    DWRITE_RENDERING_MODE1_ALIASED = DWRITE_RENDERING_MODE_ALIASED,
    DWRITE_RENDERING_MODE1_GDI_CLASSIC = DWRITE_RENDERING_MODE_GDI_CLASSIC,
    DWRITE_RENDERING_MODE1_GDI_NATURAL = DWRITE_RENDERING_MODE_GDI_NATURAL,
    DWRITE_RENDERING_MODE1_NATURAL = DWRITE_RENDERING_MODE_NATURAL,
    DWRITE_RENDERING_MODE1_NATURAL_SYMMETRIC = DWRITE_RENDERING_MODE_NATURAL_SYMMETRIC,
    DWRITE_RENDERING_MODE1_OUTLINE = DWRITE_RENDERING_MODE_OUTLINE,
    DWRITE_RENDERING_MODE1_NATURAL_SYMMETRIC_DOWNSAMPLED,
};
interface DWRITE_DECLARE_INTERFACE("B7924BAA-391B-412A-8C5C-E44CC2D867DC") IDWriteRenderingParams3 : public IDWriteRenderingParams2
{
    STDMETHOD_(DWRITE_RENDERING_MODE1, GetRenderingMode1)() PURE;
};
interface DWRITE_DECLARE_INTERFACE("9A1B41C3-D3BB-466A-87FC-FE67556A3B65") IDWriteFactory3 : public IDWriteFactory2
{
    STDMETHOD(CreateGlyphRunAnalysis)(
        _In_ DWRITE_GLYPH_RUN const* glyphRun,
        _In_opt_ DWRITE_MATRIX const* transform,
        DWRITE_RENDERING_MODE1 renderingMode,
        DWRITE_MEASURING_MODE measuringMode,
        DWRITE_GRID_FIT_MODE gridFitMode,
        DWRITE_TEXT_ANTIALIAS_MODE antialiasMode,
        FLOAT baselineOriginX,
        FLOAT baselineOriginY,
        _COM_Outptr_ IDWriteGlyphRunAnalysis** glyphRunAnalysis
        ) PURE;
    using IDWriteFactory::CreateGlyphRunAnalysis;
    using IDWriteFactory2::CreateGlyphRunAnalysis;
    STDMETHOD(CreateCustomRenderingParams)(
        FLOAT gamma,
        FLOAT enhancedContrast,
        FLOAT grayscaleEnhancedContrast,
        FLOAT clearTypeLevel,
        DWRITE_PIXEL_GEOMETRY pixelGeometry,
        DWRITE_RENDERING_MODE1 renderingMode,
        DWRITE_GRID_FIT_MODE gridFitMode,
        _COM_Outptr_ IDWriteRenderingParams3** renderingParams
        ) PURE;
    using IDWriteFactory::CreateCustomRenderingParams;
    using IDWriteFactory1::CreateCustomRenderingParams;
    using IDWriteFactory2::CreateCustomRenderingParams;
    STDMETHOD(CreateFontFaceReference)(
        _In_z_ WCHAR const* filePath,
        _In_opt_ FILETIME const* lastWriteTime,
        UINT32 faceIndex,
        DWRITE_FONT_SIMULATIONS fontSimulations,
        _COM_Outptr_ IDWriteFontFaceReference** fontFaceReference
        ) PURE;
    STDMETHOD(CreateFontFaceReference)(
        _In_ IDWriteFontFile* fontFile,
        UINT32 faceIndex,
        DWRITE_FONT_SIMULATIONS fontSimulations,
        _COM_Outptr_ IDWriteFontFaceReference** fontFaceReference
        ) PURE;
    STDMETHOD(GetSystemFontSet)(
        _COM_Outptr_ IDWriteFontSet** fontSet
        ) PURE;
    STDMETHOD(CreateFontSetBuilder)(
        _COM_Outptr_ IDWriteFontSetBuilder** fontSetBuilder
        ) PURE;
    STDMETHOD(CreateFontCollectionFromFontSet)(
        IDWriteFontSet* fontSet,
        _COM_Outptr_ IDWriteFontCollection1** fontCollection
        ) PURE;
    STDMETHOD(GetSystemFontCollection)(
        BOOL includeDownloadableFonts,
        _COM_Outptr_ IDWriteFontCollection1** fontCollection,
        BOOL checkForUpdates = FALSE
        ) PURE;
    using IDWriteFactory::GetSystemFontCollection;
    STDMETHOD(GetFontDownloadQueue)(
        _COM_Outptr_ IDWriteFontDownloadQueue** fontDownloadQueue
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("53585141-D9F8-4095-8321-D73CF6BD116B") IDWriteFontSet : public IUnknown
{
    STDMETHOD_(UINT32, GetFontCount)() PURE;
    STDMETHOD(GetFontFaceReference)(
        UINT32 listIndex,
        _COM_Outptr_ IDWriteFontFaceReference** fontFaceReference
        ) PURE;
    STDMETHOD(FindFontFaceReference)(
        IDWriteFontFaceReference* fontFaceReference,
        _Out_ UINT32* listIndex,
        _Out_ BOOL* exists
        ) PURE;
    STDMETHOD(FindFontFace)(
        IDWriteFontFace* fontFace,
        _Out_ UINT32* listIndex,
        _Out_ BOOL* exists
        ) PURE;
    STDMETHOD(GetPropertyValues)(
        UINT32 listIndex,
        DWRITE_FONT_PROPERTY_ID propertyId,
        _Out_ BOOL* exists,
        _COM_Outptr_result_maybenull_ IDWriteLocalizedStrings** values
        ) PURE;
    STDMETHOD(GetPropertyValues)(
        DWRITE_FONT_PROPERTY_ID propertyID,
        _In_z_ WCHAR const* preferredLocaleNames,
        _COM_Outptr_ IDWriteStringList** values
        ) PURE;
    STDMETHOD(GetPropertyValues)(
        DWRITE_FONT_PROPERTY_ID propertyID,
        _COM_Outptr_ IDWriteStringList** values
        ) PURE;
    STDMETHOD(GetPropertyOccurrenceCount)(
        _In_ DWRITE_FONT_PROPERTY const* property,
        _Out_ UINT32* propertyOccurrenceCount
        ) PURE;
    STDMETHOD(GetMatchingFonts)(
        _In_reads_(propertyCount) DWRITE_FONT_PROPERTY const* properties,
        UINT32 propertyCount,
        _COM_Outptr_ IDWriteFontSet** filteredSet
        ) PURE;
    STDMETHOD(GetMatchingFonts)(
        _In_z_ WCHAR const* familyName,
        DWRITE_FONT_WEIGHT fontWeight,
        DWRITE_FONT_STRETCH fontStretch,
        DWRITE_FONT_STYLE fontStyle,
        _COM_Outptr_ IDWriteFontSet** filteredSet
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("2F642AFE-9C68-4F40-B8BE-457401AFCB3D") IDWriteFontSetBuilder : public IUnknown
{
    STDMETHOD(AddFontFaceReference)(
        _In_ IDWriteFontFaceReference* fontFaceReference
        ) PURE;
    STDMETHOD(AddFontFaceReference)(
        _In_ IDWriteFontFaceReference* fontFaceReference,
        _In_reads_(propertyCount) DWRITE_FONT_PROPERTY const* properties,
        UINT32 propertyCount
        ) PURE;
    STDMETHOD(AddFontSet)(
        _In_ IDWriteFontSet* fontSet
        ) PURE;
    STDMETHOD(CreateFontSet)(
        _COM_Outptr_ IDWriteFontSet** fontSet
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("53585141-D9F8-4095-8321-D73CF6BD116C") IDWriteFontCollection1 : public IDWriteFontCollection
{
    STDMETHOD(GetFontSet)(
        _COM_Outptr_ IDWriteFontSet** fontSet
        ) PURE;
    STDMETHOD(GetFontFamily)(
        UINT32 index,
        _COM_Outptr_ IDWriteFontFamily1** fontFamily
        ) PURE;
    using IDWriteFontCollection::GetFontFamily;
};
interface DWRITE_DECLARE_INTERFACE("DA20D8EF-812A-4C43-9802-62EC4ABD7ADF") IDWriteFontFamily1 : public IDWriteFontFamily
{
    STDMETHOD_(DWRITE_LOCALITY, GetFontLocality)(UINT32 listIndex) PURE;
    STDMETHOD(GetFont)(
        UINT32 listIndex,
        _COM_Outptr_ IDWriteFont3** font
        ) PURE;
    using IDWriteFontFamily::GetFont;
    STDMETHOD(GetFontFaceReference)(
        UINT32 listIndex,
        _COM_Outptr_ IDWriteFontFaceReference** fontFaceReference
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("DA20D8EF-812A-4C43-9802-62EC4ABD7ADE") IDWriteFontList1 : public IDWriteFontList
{
    STDMETHOD_(DWRITE_LOCALITY, GetFontLocality)(UINT32 listIndex) PURE;
    STDMETHOD(GetFont)(
        UINT32 listIndex,
        _COM_Outptr_ IDWriteFont3** font
        ) PURE;
    using IDWriteFontList::GetFont;
    STDMETHOD(GetFontFaceReference)(
        UINT32 listIndex,
        _COM_Outptr_ IDWriteFontFaceReference** fontFaceReference
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("5E7FA7CA-DDE3-424C-89F0-9FCD6FED58CD") IDWriteFontFaceReference : public IUnknown
{
    STDMETHOD(CreateFontFace)(
        _COM_Outptr_ IDWriteFontFace3** fontFace
        ) PURE;
    STDMETHOD(CreateFontFaceWithSimulations)(
        DWRITE_FONT_SIMULATIONS fontFaceSimulationFlags,
        _COM_Outptr_ IDWriteFontFace3** fontFace
        ) PURE;
    STDMETHOD_(BOOL, Equals)(IDWriteFontFaceReference* fontFaceReference) PURE;
    STDMETHOD_(UINT32, GetFontFaceIndex)() PURE;
    STDMETHOD_(DWRITE_FONT_SIMULATIONS, GetSimulations)() PURE;
    STDMETHOD(GetFontFile)(
        _COM_Outptr_ IDWriteFontFile** fontFile
        ) PURE;
    STDMETHOD_(UINT64, GetLocalFileSize)() PURE;
    STDMETHOD_(UINT64, GetFileSize)() PURE;
    STDMETHOD(GetFileTime)(_Out_ FILETIME* lastWriteTime) PURE;
    STDMETHOD_(DWRITE_LOCALITY, GetLocality)() PURE;
    STDMETHOD(EnqueueFontDownloadRequest)() PURE;
    STDMETHOD(EnqueueCharacterDownloadRequest)(
        _In_reads_(characterCount) WCHAR const* characters,
        UINT32 characterCount
        ) PURE;
    STDMETHOD(EnqueueGlyphDownloadRequest)(
        _In_reads_(glyphCount) UINT16 const* glyphIndices,
        UINT32 glyphCount
        ) PURE;
    STDMETHOD(EnqueueFileFragmentDownloadRequest)(
        UINT64 fileOffset,
        UINT64 fragmentSize
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("29748ED6-8C9C-4A6A-BE0B-D912E8538944") IDWriteFont3 : public IDWriteFont2
{
    STDMETHOD(CreateFontFace)(
        _COM_Outptr_ IDWriteFontFace3** fontFace
        ) PURE;
    using IDWriteFont::CreateFontFace;
    STDMETHOD_(BOOL, Equals)(IDWriteFont* font) PURE;
    STDMETHOD(GetFontFaceReference)(
        _COM_Outptr_ IDWriteFontFaceReference** fontFaceReference
        ) PURE;
    STDMETHOD_(BOOL, HasCharacter)(
        UINT32 unicodeValue
        ) PURE;
    using IDWriteFont::HasCharacter;
    STDMETHOD_(DWRITE_LOCALITY, GetLocality)() PURE;
};
interface DWRITE_DECLARE_INTERFACE("D37D7598-09BE-4222-A236-2081341CC1F2") IDWriteFontFace3 : public IDWriteFontFace2
{
    STDMETHOD(GetFontFaceReference)(
        _COM_Outptr_ IDWriteFontFaceReference** fontFaceReference
        ) PURE;
    STDMETHOD_(void, GetPanose)(
        _Out_ DWRITE_PANOSE* panose
        ) PURE;
    STDMETHOD_(DWRITE_FONT_WEIGHT, GetWeight)() PURE;
    STDMETHOD_(DWRITE_FONT_STRETCH, GetStretch)() PURE;
    STDMETHOD_(DWRITE_FONT_STYLE, GetStyle)() PURE;
    STDMETHOD(GetFamilyNames)(
        _COM_Outptr_ IDWriteLocalizedStrings** names
        ) PURE;
    STDMETHOD(GetFaceNames)(
        _COM_Outptr_ IDWriteLocalizedStrings** names
        ) PURE;
    STDMETHOD(GetInformationalStrings)(
        DWRITE_INFORMATIONAL_STRING_ID informationalStringID,
        _COM_Outptr_result_maybenull_ IDWriteLocalizedStrings** informationalStrings,
        _Out_ BOOL* exists
        ) PURE;
    STDMETHOD_(BOOL, HasCharacter)(
        UINT32 unicodeValue
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
        _Out_ DWRITE_RENDERING_MODE1* renderingMode,
        _Out_ DWRITE_GRID_FIT_MODE* gridFitMode
        ) PURE;
    using IDWriteFontFace2::GetRecommendedRenderingMode;
    STDMETHOD_(BOOL, IsCharacterLocal)(
        UINT32 unicodeValue
        ) PURE;
    STDMETHOD_(BOOL, IsGlyphLocal)(
        UINT16 glyphId
        ) PURE;
    STDMETHOD(AreCharactersLocal)(
        _In_reads_(characterCount) WCHAR const* characters,
        UINT32 characterCount,
        BOOL enqueueIfNotLocal,
        _Out_ BOOL* isLocal
        ) PURE;
    STDMETHOD(AreGlyphsLocal)(
        _In_reads_(glyphCount) UINT16 const* glyphIndices,
        UINT32 glyphCount,
        BOOL enqueueIfNotLocal,
        _Out_ BOOL* isLocal
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("CFEE3140-1157-47CA-8B85-31BFCF3F2D0E") IDWriteStringList : public IUnknown
{
    STDMETHOD_(UINT32, GetCount)() PURE;
    STDMETHOD(GetLocaleNameLength)(
        UINT32 listIndex,
        _Out_ UINT32* length
        ) PURE;
    STDMETHOD(GetLocaleName)(
        UINT32 listIndex,
        _Out_writes_z_(size) WCHAR* localeName,
        UINT32 size
        ) PURE;
    STDMETHOD(GetStringLength)(
        UINT32 listIndex,
        _Out_ UINT32* length
        ) PURE;
    STDMETHOD(GetString)(
        UINT32 listIndex,
        _Out_writes_z_(stringBufferSize) WCHAR* stringBuffer,
        UINT32 stringBufferSize
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("B06FE5B9-43EC-4393-881B-DBE4DC72FDA7") IDWriteFontDownloadListener : public IUnknown
{
    STDMETHOD_(void, DownloadCompleted)(
        _In_ IDWriteFontDownloadQueue* downloadQueue,
        _In_opt_ IUnknown* context,
        HRESULT downloadResult
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("B71E6052-5AEA-4FA3-832E-F60D431F7E91") IDWriteFontDownloadQueue : public IUnknown
{
    STDMETHOD(AddListener)(
        IDWriteFontDownloadListener* listener,
        _Out_ UINT32* token
        ) PURE;
    STDMETHOD(RemoveListener)(
        UINT32 token
        ) PURE;
    STDMETHOD_(BOOL, IsEmpty)() PURE;
    STDMETHOD(BeginDownload)(
        _In_opt_ IUnknown* context = nullptr
        ) PURE;
    STDMETHOD(CancelDownload)() PURE;
    STDMETHOD_(UINT64, GetGenerationCount)() PURE;
};
interface DWRITE_DECLARE_INTERFACE("4556BE70-3ABD-4F70-90BE-421780A6F515") IDWriteGdiInterop1 : public IDWriteGdiInterop
{
    STDMETHOD(CreateFontFromLOGFONT)(
        _In_ LOGFONTW const* logFont,
        _In_opt_ IDWriteFontCollection* fontCollection,
        _COM_Outptr_ IDWriteFont** font
        ) PURE;
    STDMETHOD(GetFontSignature)(
        _In_ IDWriteFont* font,
        _Out_ FONTSIGNATURE* fontSignature
        ) PURE;
    STDMETHOD(GetFontSignature)(
        _In_ IDWriteFontFace* fontFace,
        _Out_ FONTSIGNATURE* fontSignature
        ) PURE;
    STDMETHOD(GetMatchingFontsByLOGFONT)(
        _In_ LOGFONT const* logFont,
        _In_ IDWriteFontSet* fontSet,
        _COM_Outptr_ IDWriteFontSet** filteredSet
        ) PURE;
    using IDWriteGdiInterop::CreateFontFromLOGFONT;
};
struct DWRITE_LINE_METRICS1 : DWRITE_LINE_METRICS
{
    FLOAT leadingBefore;
    FLOAT leadingAfter;
};
enum DWRITE_FONT_LINE_GAP_USAGE
{
    DWRITE_FONT_LINE_GAP_USAGE_DEFAULT,
    DWRITE_FONT_LINE_GAP_USAGE_DISABLED,
    DWRITE_FONT_LINE_GAP_USAGE_ENABLED
};
struct DWRITE_LINE_SPACING
{
    DWRITE_LINE_SPACING_METHOD method;
    FLOAT height;
    FLOAT baseline;
    FLOAT leadingBefore;
    DWRITE_FONT_LINE_GAP_USAGE fontLineGapUsage;
};
interface DWRITE_DECLARE_INTERFACE("F67E0EDD-9E3D-4ECC-8C32-4183253DFE70") IDWriteTextFormat2 : public IDWriteTextFormat1
{
    STDMETHOD(SetLineSpacing)(_In_ DWRITE_LINE_SPACING const* lineSpacingOptions) PURE;
    STDMETHOD(GetLineSpacing)(_Out_ DWRITE_LINE_SPACING* lineSpacingOptions) PURE;
    using IDWriteTextFormat1::SetLineSpacing;
    using IDWriteTextFormat1::GetLineSpacing;
};
interface DWRITE_DECLARE_INTERFACE("07DDCD52-020E-4DE8-AC33-6C953D83F92D") IDWriteTextLayout3 : public IDWriteTextLayout2
{
    STDMETHOD(InvalidateLayout)() PURE;
    STDMETHOD(SetLineSpacing)(_In_ DWRITE_LINE_SPACING const* lineSpacingOptions) PURE;
    STDMETHOD(GetLineSpacing)(_Out_ DWRITE_LINE_SPACING* lineSpacingOptions) PURE;
    STDMETHOD(GetLineMetrics)(
        _Out_writes_to_opt_(maxLineCount, *actualLineCount) DWRITE_LINE_METRICS1* lineMetrics,
        UINT32 maxLineCount,
        _Out_ UINT32* actualLineCount
        ) PURE;
    using IDWriteTextLayout2::SetLineSpacing;
    using IDWriteTextLayout2::GetLineSpacing;
    using IDWriteTextLayout2::GetLineMetrics;
};
struct DWRITE_COLOR_GLYPH_RUN1 : DWRITE_COLOR_GLYPH_RUN
{
    DWRITE_GLYPH_IMAGE_FORMATS glyphImageFormat;
    DWRITE_MEASURING_MODE measuringMode;
};
struct DWRITE_GLYPH_IMAGE_DATA
{
    _Field_size_bytes_(imageDataSize) void const* imageData;
    UINT32 imageDataSize;
    UINT32 uniqueDataId;
    UINT32 pixelsPerEm;
    D2D1_SIZE_U pixelSize;
    D2D1_POINT_2L horizontalLeftOrigin;
    D2D1_POINT_2L horizontalRightOrigin;
    D2D1_POINT_2L verticalTopOrigin;
    D2D1_POINT_2L verticalBottomOrigin;
};
interface DWRITE_DECLARE_INTERFACE("7C5F86DA-C7A1-4F05-B8E1-55A179FE5A35") IDWriteColorGlyphRunEnumerator1 : public IDWriteColorGlyphRunEnumerator
{
    STDMETHOD(GetCurrentRun)(
        _Outptr_ DWRITE_COLOR_GLYPH_RUN1 const** colorGlyphRun
        ) PURE;
    using IDWriteColorGlyphRunEnumerator::GetCurrentRun;
};
interface DWRITE_DECLARE_INTERFACE("27F2A904-4EB8-441D-9678-0563F53E3E2F") IDWriteFontFace4 : public IDWriteFontFace3
{
    STDMETHOD_(DWRITE_GLYPH_IMAGE_FORMATS, GetGlyphImageFormats)() PURE;
    STDMETHOD(GetGlyphImageFormats)(
        UINT16 glyphId,
        UINT32 pixelsPerEmFirst,
        UINT32 pixelsPerEmLast,
        _Out_ DWRITE_GLYPH_IMAGE_FORMATS* glyphImageFormats
        ) PURE;
    STDMETHOD(GetGlyphImageData)(
        _In_ UINT16 glyphId,
        UINT32 pixelsPerEm,
        DWRITE_GLYPH_IMAGE_FORMATS glyphImageFormat,
        _Out_ DWRITE_GLYPH_IMAGE_DATA* glyphData,
        _Outptr_result_maybenull_ void** glyphDataContext
        ) PURE;
    STDMETHOD_(void, ReleaseGlyphImageData)(
        void* glyphDataContext
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("4B0B5BD3-0797-4549-8AC5-FE915CC53856") IDWriteFactory4 : public IDWriteFactory3
{
    STDMETHOD(TranslateColorGlyphRun)(
        D2D1_POINT_2F baselineOrigin,
        _In_ DWRITE_GLYPH_RUN const* glyphRun,
        _In_opt_ DWRITE_GLYPH_RUN_DESCRIPTION const* glyphRunDescription,
        DWRITE_GLYPH_IMAGE_FORMATS desiredGlyphImageFormats,
        DWRITE_MEASURING_MODE measuringMode,
        _In_opt_ DWRITE_MATRIX const* worldAndDpiTransform,
        UINT32 colorPaletteIndex,
        _COM_Outptr_ IDWriteColorGlyphRunEnumerator1** colorLayers
        ) PURE;
    using IDWriteFactory2::TranslateColorGlyphRun;
    STDMETHOD(ComputeGlyphOrigins)(
        DWRITE_GLYPH_RUN const* glyphRun,
        DWRITE_MEASURING_MODE measuringMode,
        D2D1_POINT_2F baselineOrigin,
        _In_opt_ DWRITE_MATRIX const* worldAndDpiTransform,
        _Out_writes_(glyphRun->glyphCount) D2D1_POINT_2F* glyphOrigins
        ) PURE;
    STDMETHOD(ComputeGlyphOrigins)(
        DWRITE_GLYPH_RUN const* glyphRun,
        D2D1_POINT_2F baselineOrigin,
        _Out_writes_(glyphRun->glyphCount) D2D1_POINT_2F* glyphOrigins
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("3FF7715F-3CDC-4DC6-9B72-EC5621DCCAFD") IDWriteFontSetBuilder1 : public IDWriteFontSetBuilder
{
    STDMETHOD(AddFontFile)(
        _In_ IDWriteFontFile* fontFile
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("CE25F8FD-863B-4D13-9651-C1F88DC73FE2") IDWriteAsyncResult : public IUnknown
{
    STDMETHOD_(HANDLE, GetWaitHandle)() PURE;
    STDMETHOD(GetResult)() PURE;
};
struct DWRITE_FILE_FRAGMENT
{
    UINT64 fileOffset;
    UINT64 fragmentSize;
};
interface DWRITE_DECLARE_INTERFACE("4DB3757A-2C72-4ED9-B2B6-1ABABE1AFF9C") IDWriteRemoteFontFileStream : public IDWriteFontFileStream
{
    STDMETHOD(GetLocalFileSize)(
        _Out_ UINT64* localFileSize
        ) PURE;
    STDMETHOD(GetFileFragmentLocality)(
        UINT64 fileOffset,
        UINT64 fragmentSize,
        _Out_ BOOL* isLocal,
        _Out_range_(0, fragmentSize) UINT64* partialSize
        ) PURE;
    STDMETHOD_(DWRITE_LOCALITY, GetLocality)() PURE;
    STDMETHOD(BeginDownload)(
        _In_ UUID const* downloadOperationID,
        _In_reads_(fragmentCount) DWRITE_FILE_FRAGMENT const* fileFragments,
        UINT32 fragmentCount,
        _COM_Outptr_result_maybenull_ IDWriteAsyncResult** asyncResult
        ) PURE;
};
enum DWRITE_CONTAINER_TYPE
{
    DWRITE_CONTAINER_TYPE_UNKNOWN,
    DWRITE_CONTAINER_TYPE_WOFF,
    DWRITE_CONTAINER_TYPE_WOFF2
};
interface DWRITE_DECLARE_INTERFACE("68648C83-6EDE-46C0-AB46-20083A887FDE") IDWriteRemoteFontFileLoader : public IDWriteFontFileLoader
{
    STDMETHOD(CreateRemoteStreamFromKey)(
        _In_reads_bytes_(fontFileReferenceKeySize) void const* fontFileReferenceKey,
        UINT32 fontFileReferenceKeySize,
        _COM_Outptr_ IDWriteRemoteFontFileStream** fontFileStream
        ) PURE;
    STDMETHOD(GetLocalityFromKey)(
        _In_reads_bytes_(fontFileReferenceKeySize) void const* fontFileReferenceKey,
        UINT32 fontFileReferenceKeySize,
        _Out_ DWRITE_LOCALITY* locality
        ) PURE;
    STDMETHOD(CreateFontFileReferenceFromUrl)(
        IDWriteFactory* factory,
        _In_opt_z_ WCHAR const* baseUrl,
        _In_z_ WCHAR const* fontFileUrl,
        _COM_Outptr_ IDWriteFontFile** fontFile
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("DC102F47-A12D-4B1C-822D-9E117E33043F") IDWriteInMemoryFontFileLoader : public IDWriteFontFileLoader
{
    STDMETHOD(CreateInMemoryFontFileReference)(
        IDWriteFactory* factory,
        _In_reads_bytes_(fontDataSize) void const* fontData,
        UINT32 fontDataSize,
        _In_opt_ IUnknown* ownerObject,
        _COM_Outptr_ IDWriteFontFile** fontFile
        ) PURE;
    STDMETHOD_(UINT32, GetFileCount)() PURE;
};
interface DWRITE_DECLARE_INTERFACE("958DB99A-BE2A-4F09-AF7D-65189803D1D3") IDWriteFactory5 : public IDWriteFactory4
{
    STDMETHOD(CreateFontSetBuilder)(
        _COM_Outptr_ IDWriteFontSetBuilder1** fontSetBuilder
        ) PURE;
    using IDWriteFactory3::CreateFontSetBuilder;
    STDMETHOD(CreateInMemoryFontFileLoader)(
        _COM_Outptr_ IDWriteInMemoryFontFileLoader** newLoader
        ) PURE;
    STDMETHOD(CreateHttpFontFileLoader)(
        _In_opt_z_ wchar_t const* referrerUrl,
        _In_opt_z_ wchar_t const* extraHeaders,
        _COM_Outptr_ IDWriteRemoteFontFileLoader** newLoader
        ) PURE;
    STDMETHOD_(DWRITE_CONTAINER_TYPE, AnalyzeContainerType)(
        _In_reads_bytes_(fileDataSize) void const* fileData,
        UINT32 fileDataSize
        ) PURE;
    STDMETHOD(UnpackFontFile)(
        DWRITE_CONTAINER_TYPE containerType,
        _In_reads_bytes_(fileDataSize) void const* fileData,
        UINT32 fileDataSize,
        _COM_Outptr_ IDWriteFontFileStream** unpackedFontStream
        ) PURE;
};
interface IDWriteFontResource;
interface IDWriteFontFace5;
interface IDWriteFontFaceReference1;
interface IDWriteFontSet1;
interface IDWriteFontCollection2;
interface IDWriteTextFormat3;
interface IDWriteFontSetBuilder2;
enum DWRITE_FONT_AXIS_TAG : UINT32
{
    DWRITE_FONT_AXIS_TAG_WEIGHT = DWRITE_MAKE_FONT_AXIS_TAG('w','g','h','t'),
    DWRITE_FONT_AXIS_TAG_WIDTH = DWRITE_MAKE_FONT_AXIS_TAG('w','d','t','h'),
    DWRITE_FONT_AXIS_TAG_SLANT = DWRITE_MAKE_FONT_AXIS_TAG('s','l','n','t'),
    DWRITE_FONT_AXIS_TAG_OPTICAL_SIZE = DWRITE_MAKE_FONT_AXIS_TAG('o','p','s','z'),
    DWRITE_FONT_AXIS_TAG_ITALIC = DWRITE_MAKE_FONT_AXIS_TAG('i','t','a','l'),
};
struct DWRITE_FONT_AXIS_VALUE
{
    DWRITE_FONT_AXIS_TAG axisTag;
    FLOAT value;
};
struct DWRITE_FONT_AXIS_RANGE
{
    DWRITE_FONT_AXIS_TAG axisTag;
    FLOAT minValue;
    FLOAT maxValue;
};
enum DWRITE_FONT_FAMILY_MODEL
{
    DWRITE_FONT_FAMILY_MODEL_TYPOGRAPHIC,
    DWRITE_FONT_FAMILY_MODEL_WEIGHT_STRETCH_STYLE,
};
enum DWRITE_AUTOMATIC_FONT_AXES
{
    DWRITE_AUTOMATIC_FONT_AXES_NONE = 0x0000,
    DWRITE_AUTOMATIC_FONT_AXES_OPTICAL_SIZE = 0x0001,
};
DEFINE_ENUM_FLAG_OPERATORS(DWRITE_AUTOMATIC_FONT_AXES);
enum DWRITE_FONT_AXIS_ATTRIBUTES
{
    DWRITE_FONT_AXIS_ATTRIBUTES_NONE = 0x0000,
    DWRITE_FONT_AXIS_ATTRIBUTES_VARIABLE = 0x0001,
    DWRITE_FONT_AXIS_ATTRIBUTES_HIDDEN = 0x0002,
};
DEFINE_ENUM_FLAG_OPERATORS(DWRITE_FONT_AXIS_ATTRIBUTES);
interface DWRITE_DECLARE_INTERFACE("F3744D80-21F7-42EB-B35D-995BC72FC223") IDWriteFactory6 : public IDWriteFactory5
{
    STDMETHOD(CreateFontFaceReference)(
        _In_ IDWriteFontFile* fontFile,
        UINT32 faceIndex,
        DWRITE_FONT_SIMULATIONS fontSimulations,
        _In_reads_(fontAxisValueCount) DWRITE_FONT_AXIS_VALUE const* fontAxisValues,
        UINT32 fontAxisValueCount,
        _COM_Outptr_ IDWriteFontFaceReference1** fontFaceReference
        ) PURE;
    using IDWriteFactory5::CreateFontFaceReference;
    STDMETHOD(CreateFontResource)(
        _In_ IDWriteFontFile* fontFile,
        UINT32 faceIndex,
        _COM_Outptr_ IDWriteFontResource** fontResource
        ) PURE;
    STDMETHOD(GetSystemFontSet)(
        BOOL includeDownloadableFonts,
        _COM_Outptr_ IDWriteFontSet1** fontSet
        ) PURE;
    using IDWriteFactory3::GetSystemFontSet;
    STDMETHOD(GetSystemFontCollection)(
        BOOL includeDownloadableFonts,
        DWRITE_FONT_FAMILY_MODEL fontFamilyModel,
        _COM_Outptr_ IDWriteFontCollection2** fontCollection
        ) PURE;
    using IDWriteFactory3::GetSystemFontCollection;
    STDMETHOD(CreateFontCollectionFromFontSet)(
        IDWriteFontSet* fontSet,
        DWRITE_FONT_FAMILY_MODEL fontFamilyModel,
        _COM_Outptr_ IDWriteFontCollection2** fontCollection
        ) PURE;
    using IDWriteFactory5::CreateFontCollectionFromFontSet;
    STDMETHOD(CreateFontSetBuilder)(
        _COM_Outptr_ IDWriteFontSetBuilder2** fontSetBuilder
        ) PURE;
    using IDWriteFactory3::CreateFontSetBuilder;
    using IDWriteFactory5::CreateFontSetBuilder;
    STDMETHOD(CreateTextFormat)(
        _In_z_ WCHAR const* fontFamilyName,
        _In_opt_ IDWriteFontCollection* fontCollection,
        _In_reads_(fontAxisValueCount) DWRITE_FONT_AXIS_VALUE const* fontAxisValues,
        UINT32 fontAxisValueCount,
        FLOAT fontSize,
        _In_z_ WCHAR const* localeName,
        _COM_Outptr_ IDWriteTextFormat3** textFormat
        ) PURE;
    using IDWriteFactory::CreateTextFormat;
};
interface DWRITE_DECLARE_INTERFACE("98EFF3A5-B667-479A-B145-E2FA5B9FDC29") IDWriteFontFace5 : public IDWriteFontFace4
{
    STDMETHOD_(UINT32, GetFontAxisValueCount)() PURE;
    STDMETHOD(GetFontAxisValues)(
        _Out_writes_(fontAxisValueCount) DWRITE_FONT_AXIS_VALUE* fontAxisValues,
        UINT32 fontAxisValueCount
        ) PURE;
    STDMETHOD_(BOOL, HasVariations)() PURE;
    STDMETHOD(GetFontResource)(
        _COM_Outptr_ IDWriteFontResource** fontResource
        ) PURE;
    STDMETHOD_(BOOL, Equals)(IDWriteFontFace* fontFace) PURE;
};
interface DWRITE_DECLARE_INTERFACE("1F803A76-6871-48E8-987F-B975551C50F2") IDWriteFontResource : public IUnknown
{
    STDMETHOD(GetFontFile)(
        _COM_Outptr_ IDWriteFontFile** fontFile
        ) PURE;
    STDMETHOD_(UINT32, GetFontFaceIndex)() PURE;
    STDMETHOD_(UINT32, GetFontAxisCount)() PURE;
    STDMETHOD(GetDefaultFontAxisValues)(
        _Out_writes_(fontAxisValueCount) DWRITE_FONT_AXIS_VALUE* fontAxisValues,
        UINT32 fontAxisValueCount
        ) PURE;
    STDMETHOD(GetFontAxisRanges)(
        _Out_writes_(fontAxisRangeCount) DWRITE_FONT_AXIS_RANGE* fontAxisRanges,
        UINT32 fontAxisRangeCount
        ) PURE;
    STDMETHOD_(DWRITE_FONT_AXIS_ATTRIBUTES, GetFontAxisAttributes)(
        UINT32 axisIndex
        ) PURE;
    STDMETHOD(GetAxisNames)(
        UINT32 axisIndex,
        _COM_Outptr_ IDWriteLocalizedStrings** names
        ) PURE;
    STDMETHOD_(UINT32, GetAxisValueNameCount)(
        UINT32 axisIndex
        ) PURE;
    STDMETHOD(GetAxisValueNames)(
        UINT32 axisIndex,
        UINT32 axisValueIndex,
        _Out_ DWRITE_FONT_AXIS_RANGE* fontAxisRange,
        _COM_Outptr_ IDWriteLocalizedStrings** names
        ) PURE;
    STDMETHOD_(BOOL, HasVariations)() PURE;
    STDMETHOD(CreateFontFace)(
        DWRITE_FONT_SIMULATIONS fontSimulations,
        _In_reads_(fontAxisValueCount) DWRITE_FONT_AXIS_VALUE const* fontAxisValues,
        UINT32 fontAxisValueCount,
        _COM_Outptr_ IDWriteFontFace5** fontFace
        ) PURE;
    STDMETHOD(CreateFontFaceReference)(
        DWRITE_FONT_SIMULATIONS fontSimulations,
        _In_reads_(fontAxisValueCount) DWRITE_FONT_AXIS_VALUE const* fontAxisValues,
        UINT32 fontAxisValueCount,
        _COM_Outptr_ IDWriteFontFaceReference1** fontFaceReference
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("C081FE77-2FD1-41AC-A5A3-34983C4BA61A") IDWriteFontFaceReference1 : public IDWriteFontFaceReference
{
    STDMETHOD(CreateFontFace)(
        _COM_Outptr_ IDWriteFontFace5** fontFace
        ) PURE;
    using IDWriteFontFaceReference::CreateFontFace;
    STDMETHOD_(UINT32, GetFontAxisValueCount)() PURE;
    STDMETHOD(GetFontAxisValues)(
        _Out_writes_(fontAxisValueCount) DWRITE_FONT_AXIS_VALUE* fontAxisValues,
        UINT32 fontAxisValueCount
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("EE5BA612-B131-463C-8F4F-3189B9401E45") IDWriteFontSetBuilder2 : public IDWriteFontSetBuilder1
{
    STDMETHOD(AddFont)(
        _In_ IDWriteFontFile* fontFile,
        UINT32 fontFaceIndex,
        DWRITE_FONT_SIMULATIONS fontSimulations,
        _In_reads_(fontAxisValueCount) DWRITE_FONT_AXIS_VALUE const* fontAxisValues,
        UINT32 fontAxisValueCount,
        _In_reads_(fontAxisRangeCount) DWRITE_FONT_AXIS_RANGE const* fontAxisRanges,
        UINT32 fontAxisRangeCount,
        _In_reads_(propertyCount) DWRITE_FONT_PROPERTY const* properties,
        UINT32 propertyCount
        ) PURE;
    STDMETHOD(AddFontFile)(
        _In_z_ WCHAR const* filePath
        ) PURE;
    using IDWriteFontSetBuilder1::AddFontFile;
};
interface DWRITE_DECLARE_INTERFACE("7E9FDA85-6C92-4053-BC47-7AE3530DB4D3") IDWriteFontSet1 : public IDWriteFontSet
{
    STDMETHOD(GetMatchingFonts)(
        _In_opt_ DWRITE_FONT_PROPERTY const* fontProperty,
        _In_reads_(fontAxisValueCount) DWRITE_FONT_AXIS_VALUE const* fontAxisValues,
        UINT32 fontAxisValueCount,
        _COM_Outptr_ IDWriteFontSet1** matchingFonts
        ) PURE;
    STDMETHOD(GetFirstFontResources)(
        _COM_Outptr_ IDWriteFontSet1** filteredFontSet
        ) PURE;
    STDMETHOD(GetFilteredFonts)(
        _In_reads_opt_(propertyCount) DWRITE_FONT_PROPERTY const* properties,
        UINT32 propertyCount,
        BOOL selectAnyProperty,
        _COM_Outptr_ IDWriteFontSet1** filteredFontSet
        ) PURE;
    STDMETHOD(GetFilteredFonts)(
        _In_reads_(fontAxisRangeCount) DWRITE_FONT_AXIS_RANGE const* fontAxisRanges,
        UINT32 fontAxisRangeCount,
        BOOL selectAnyRange,
        _COM_Outptr_ IDWriteFontSet1** filteredFontSet
        ) PURE;
    STDMETHOD(GetFilteredFonts)(
        _In_reads_(indexCount) UINT32 const* indices,
        UINT32 indexCount,
        _COM_Outptr_ IDWriteFontSet1** filteredFontSet
        ) PURE;
    STDMETHOD(GetFilteredFontIndices)(
        _In_reads_(propertyCount) DWRITE_FONT_PROPERTY const* properties,
        UINT32 propertyCount,
        BOOL selectAnyProperty,
        _Out_writes_(maxIndexCount) UINT32* indices,
        UINT32 maxIndexCount,
        _Out_ UINT32* actualIndexCount
        ) PURE;
    STDMETHOD(GetFilteredFontIndices)(
        _In_reads_(fontAxisRangeCount) DWRITE_FONT_AXIS_RANGE const* fontAxisRanges,
        UINT32 fontAxisRangeCount,
        BOOL selectAnyRange,
        _Out_writes_(maxIndexCount) UINT32* indices,
        UINT32 maxIndexCount,
        _Out_ UINT32* actualIndexCount
        ) PURE;
    STDMETHOD(GetFontAxisRanges)(
        _Out_writes_(maxFontAxisRangeCount) DWRITE_FONT_AXIS_RANGE* fontAxisRanges,
        UINT32 maxFontAxisRangeCount,
        _Out_ UINT32* actualFontAxisRangeCount
        ) PURE;
    STDMETHOD(GetFontAxisRanges)(
        UINT32 listIndex,
        _Out_writes_(maxFontAxisRangeCount) DWRITE_FONT_AXIS_RANGE* fontAxisRanges,
        UINT32 maxFontAxisRangeCount,
        _Out_ UINT32* actualFontAxisRangeCount
        ) PURE;
    STDMETHOD(GetFontFaceReference)(
        UINT32 listIndex,
        _COM_Outptr_ IDWriteFontFaceReference1** fontFaceReference
        ) PURE;
    using IDWriteFontSet::GetFontFaceReference;
    STDMETHOD(CreateFontResource)(
        UINT32 listIndex,
        _COM_Outptr_ IDWriteFontResource** fontResource
        ) PURE;
    STDMETHOD(CreateFontFace)(
        UINT32 listIndex,
        _COM_Outptr_ IDWriteFontFace5** fontFace
        ) PURE;
    STDMETHOD_(DWRITE_LOCALITY, GetFontLocality)(UINT32 listIndex) PURE;
};
interface DWRITE_DECLARE_INTERFACE("C0763A34-77AF-445A-B735-08C37B0A5BF5") IDWriteFontList2 : public IDWriteFontList1
{
    STDMETHOD(GetFontSet)(
        _COM_Outptr_ IDWriteFontSet1** fontSet
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("3ED49E77-A398-4261-B9CF-C126C2131EF3") IDWriteFontFamily2 : public IDWriteFontFamily1
{
    STDMETHOD(GetMatchingFonts)(
        _In_reads_(fontAxisValueCount) DWRITE_FONT_AXIS_VALUE const* fontAxisValues,
        UINT32 fontAxisValueCount,
        _COM_Outptr_ IDWriteFontList2** matchingFonts
        ) PURE;
    using IDWriteFontFamily::GetMatchingFonts;
    STDMETHOD(GetFontSet)(
        _COM_Outptr_ IDWriteFontSet1** fontSet
        ) PURE;
};
interface DWRITE_DECLARE_INTERFACE("514039C6-4617-4064-BF8B-92EA83E506E0") IDWriteFontCollection2 : public IDWriteFontCollection1
{
    STDMETHOD(GetFontFamily)(
        UINT32 index,
        _COM_Outptr_ IDWriteFontFamily2** fontFamily
        ) PURE;
    STDMETHOD(GetMatchingFonts)(
        _In_z_ WCHAR const* familyName,
        _In_reads_(fontAxisValueCount) DWRITE_FONT_AXIS_VALUE const* fontAxisValues,
        UINT32 fontAxisValueCount,
        _COM_Outptr_ IDWriteFontList2** fontList
        ) PURE;
    STDMETHOD_(DWRITE_FONT_FAMILY_MODEL, GetFontFamilyModel)() PURE;
    STDMETHOD(GetFontSet)(
        _COM_Outptr_ IDWriteFontSet1** fontSet
        ) PURE;
    using IDWriteFontCollection::GetFontFamily;
    using IDWriteFontCollection1::GetFontFamily;
    using IDWriteFontCollection1::GetFontSet;
};
interface DWRITE_DECLARE_INTERFACE("05A9BF42-223F-4441-B5FB-8263685F55E9") IDWriteTextLayout4 : public IDWriteTextLayout3
{
    STDMETHOD(SetFontAxisValues)(
        _In_reads_(fontAxisValueCount) DWRITE_FONT_AXIS_VALUE const* fontAxisValues,
        UINT32 fontAxisValueCount,
        DWRITE_TEXT_RANGE textRange
        ) PURE;
    STDMETHOD_(UINT32, GetFontAxisValueCount)(
        UINT32 currentPosition
        ) PURE;
    STDMETHOD(GetFontAxisValues)(
        UINT32 currentPosition,
        _Out_writes_(fontAxisValueCount) DWRITE_FONT_AXIS_VALUE* fontAxisValues,
        UINT32 fontAxisValueCount,
        _Out_opt_ DWRITE_TEXT_RANGE* textRange = nullptr
        ) PURE;
    STDMETHOD_(DWRITE_AUTOMATIC_FONT_AXES, GetAutomaticFontAxes)() PURE;
    STDMETHOD(SetAutomaticFontAxes)(DWRITE_AUTOMATIC_FONT_AXES automaticFontAxes) PURE;
};
interface DWRITE_DECLARE_INTERFACE("6D3B5641-E550-430D-A85B-B7BF48A93427") IDWriteTextFormat3 : public IDWriteTextFormat2
{
    STDMETHOD(SetFontAxisValues)(
        _In_reads_(fontAxisValueCount) DWRITE_FONT_AXIS_VALUE const* fontAxisValues,
        UINT32 fontAxisValueCount
        ) PURE;
    STDMETHOD_(UINT32, GetFontAxisValueCount)() PURE;
    STDMETHOD(GetFontAxisValues)(
        _Out_writes_(fontAxisValueCount) DWRITE_FONT_AXIS_VALUE* fontAxisValues,
        UINT32 fontAxisValueCount
        ) PURE;
    STDMETHOD_(DWRITE_AUTOMATIC_FONT_AXES, GetAutomaticFontAxes)() PURE;
    STDMETHOD(SetAutomaticFontAxes)(DWRITE_AUTOMATIC_FONT_AXES automaticFontAxes) PURE;
};
interface DWRITE_DECLARE_INTERFACE("2397599D-DD0D-4681-BD6A-F4F31EAADE77") IDWriteFontFallback1 : public IDWriteFontFallback
{
    STDMETHOD(MapCharacters)(
        IDWriteTextAnalysisSource* analysisSource,
        UINT32 textPosition,
        UINT32 textLength,
        _In_opt_ IDWriteFontCollection* baseFontCollection,
        _In_opt_z_ WCHAR const* baseFamilyName,
        _In_reads_(fontAxisValueCount) DWRITE_FONT_AXIS_VALUE const* fontAxisValues,
        UINT32 fontAxisValueCount,
        _Deref_out_range_(0, textLength) UINT32* mappedLength,
        _Out_ FLOAT* scale,
        _COM_Outptr_ IDWriteFontFace5** mappedFontFace
        ) PURE;
    using IDWriteFontFallback::MapCharacters;
};
interface DWRITE_DECLARE_INTERFACE("DC7EAD19-E54C-43AF-B2DA-4E2B79BA3F7F") IDWriteFontSet2 : public IDWriteFontSet1
{
    STDMETHOD_(HANDLE, GetExpirationEvent)() PURE;
};
interface DWRITE_DECLARE_INTERFACE("A4D055A6-F9E3-4E25-93B7-9E309F3AF8E9") IDWriteFontCollection3 : public IDWriteFontCollection2
{
    STDMETHOD_(HANDLE, GetExpirationEvent)() PURE;
};
interface DWRITE_DECLARE_INTERFACE("35D0E0B3-9076-4D2E-A016-A91B568A06B4") IDWriteFactory7 : public IDWriteFactory6
{
    STDMETHOD(GetSystemFontSet)(
        BOOL includeDownloadableFonts,
        _COM_Outptr_ IDWriteFontSet2** fontSet
        ) PURE;
    using IDWriteFactory6::GetSystemFontSet;
    STDMETHOD(GetSystemFontCollection)(
        BOOL includeDownloadableFonts,
        DWRITE_FONT_FAMILY_MODEL fontFamilyModel,
        _COM_Outptr_ IDWriteFontCollection3** fontCollection
        ) PURE;
    using IDWriteFactory6::GetSystemFontCollection;
};
enum DWRITE_FONT_SOURCE_TYPE
{
    DWRITE_FONT_SOURCE_TYPE_UNKNOWN,
    DWRITE_FONT_SOURCE_TYPE_PER_MACHINE,
    DWRITE_FONT_SOURCE_TYPE_PER_USER,
    DWRITE_FONT_SOURCE_TYPE_APPX_PACKAGE,
    DWRITE_FONT_SOURCE_TYPE_REMOTE_FONT_PROVIDER
};
interface DWRITE_DECLARE_INTERFACE("7C073EF2-A7F4-4045-8C32-8AB8AE640F90") IDWriteFontSet3 : public IDWriteFontSet2
{
    STDMETHOD_(DWRITE_FONT_SOURCE_TYPE, GetFontSourceType)(UINT32 fontIndex) PURE;
    STDMETHOD_(UINT32, GetFontSourceNameLength)(UINT32 listIndex) PURE;
    STDMETHOD(GetFontSourceName)(
        UINT32 listIndex,
        _Out_writes_z_(stringBufferSize) WCHAR* stringBuffer,
        UINT32 stringBufferSize
        ) PURE;
};
