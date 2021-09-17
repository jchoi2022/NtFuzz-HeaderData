#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windows.h>
#include <specstrings.h>
extern "C" {
        MAKE_HRESULT(SEVERITY_ERROR,FACILITY_ITF,0x200)
typedef void *SCRIPT_CACHE;
_Check_return_ HRESULT WINAPI ScriptFreeCache(
    _Inout_updates_(1) _At_(*psc, _Post_null_) SCRIPT_CACHE *psc);
typedef struct tag_SCRIPT_CONTROL {
    DWORD uDefaultLanguage :16;
    DWORD fContextDigits :1;
    DWORD fInvertPreBoundDir :1;
    DWORD fInvertPostBoundDir :1;
    DWORD fLinkStringBefore :1;
    DWORD fLinkStringAfter :1;
    DWORD fNeutralOverride :1;
    DWORD fNumericOverride :1;
    DWORD fLegacyBidiClass :1;
    DWORD fMergeNeutralItems :1;
    DWORD fUseStandardBidi :1;
    DWORD fReserved :6;
} SCRIPT_CONTROL;
typedef struct tag_SCRIPT_STATE {
    WORD uBidiLevel :5;
    WORD fOverrideDirection :1;
    WORD fInhibitSymSwap :1;
    WORD fCharShape :1;
    WORD fDigitSubstitute :1;
    WORD fInhibitLigate :1;
    WORD fDisplayZWG :1;
    WORD fArabicNumContext :1;
    WORD fGcpClusters :1;
    WORD fReserved :1;
    WORD fEngineReserved :2;
} SCRIPT_STATE;
typedef struct tag_SCRIPT_ANALYSIS {
    WORD eScript :10;
    WORD fRTL :1;
    WORD fLayoutRTL :1;
    WORD fLinkBefore :1;
    WORD fLinkAfter :1;
    WORD fLogicalOrder :1;
    WORD fNoGlyphIndex :1;
    SCRIPT_STATE s;
} SCRIPT_ANALYSIS;
typedef struct tag_SCRIPT_ITEM {
    int iCharPos;
    SCRIPT_ANALYSIS a;
} SCRIPT_ITEM;
_Check_return_ HRESULT WINAPI ScriptItemize(
    _In_reads_(cInChars) const WCHAR *pwcInChars,
    int cInChars,
    int cMaxItems,
    _In_reads_opt_(1) const SCRIPT_CONTROL *psControl,
    _In_reads_opt_(1) const SCRIPT_STATE *psState,
    _Out_writes_to_(cMaxItems, *pcItems) SCRIPT_ITEM *pItems,
    _Out_writes_(1) int *pcItems);
_Check_return_ HRESULT WINAPI ScriptLayout(
    int cRuns,
    _In_reads_(cRuns) const BYTE *pbLevel,
    _Out_writes_all_opt_(cRuns) int *piVisualToLogical,
    _Out_writes_all_opt_(cRuns) int *piLogicalToVisual);
typedef enum tag_SCRIPT_JUSTIFY {
    SCRIPT_JUSTIFY_NONE = 0,
    SCRIPT_JUSTIFY_ARABIC_BLANK = 1,
    SCRIPT_JUSTIFY_CHARACTER = 2,
    SCRIPT_JUSTIFY_RESERVED1 = 3,
    SCRIPT_JUSTIFY_BLANK = 4,
    SCRIPT_JUSTIFY_RESERVED2 = 5,
    SCRIPT_JUSTIFY_RESERVED3 = 6,
    SCRIPT_JUSTIFY_ARABIC_NORMAL = 7,
    SCRIPT_JUSTIFY_ARABIC_KASHIDA = 8,
    SCRIPT_JUSTIFY_ARABIC_ALEF = 9,
    SCRIPT_JUSTIFY_ARABIC_HA = 10,
    SCRIPT_JUSTIFY_ARABIC_RA = 11,
    SCRIPT_JUSTIFY_ARABIC_BA = 12,
    SCRIPT_JUSTIFY_ARABIC_BARA = 13,
    SCRIPT_JUSTIFY_ARABIC_SEEN = 14,
    SCRIPT_JUSTIFY_ARABIC_SEEN_M = 15,
} SCRIPT_JUSTIFY;
typedef struct tag_SCRIPT_VISATTR {
    WORD uJustification :4;
    WORD fClusterStart :1;
    WORD fDiacritic :1;
    WORD fZeroWidth :1;
    WORD fReserved :1;
    WORD fShapeReserved :8;
} SCRIPT_VISATTR;
_Check_return_ HRESULT WINAPI ScriptShape(
    HDC hdc,
    _Inout_updates_(1) SCRIPT_CACHE *psc,
    _In_reads_(cChars) const WCHAR *pwcChars,
    int cChars,
    int cMaxGlyphs,
    _Inout_updates_(1) SCRIPT_ANALYSIS *psa,
    _Out_writes_to_(cMaxGlyphs, *pcGlyphs) WORD *pwOutGlyphs,
    _Out_writes_all_(cChars) WORD *pwLogClust,
    _Out_writes_to_(cMaxGlyphs, *pcGlyphs) SCRIPT_VISATTR *psva,
    _Out_writes_(1) int *pcGlyphs);
typedef struct tagGOFFSET {
    LONG du;
    LONG dv;
} GOFFSET;
_Check_return_ HRESULT WINAPI ScriptPlace(
    HDC hdc,
    _Inout_updates_(1) SCRIPT_CACHE *psc,
    _In_reads_(cGlyphs) const WORD *pwGlyphs,
    int cGlyphs,
    _In_reads_(cGlyphs) const SCRIPT_VISATTR *psva,
    _Inout_updates_(1) SCRIPT_ANALYSIS *psa,
    _Out_writes_all_(cGlyphs) int *piAdvance,
    _Out_writes_all_opt_(cGlyphs) GOFFSET *pGoffset,
    _Out_writes_(1) ABC *pABC);
_Check_return_ HRESULT WINAPI ScriptTextOut(
    const HDC hdc,
    _Inout_updates_(1) SCRIPT_CACHE *psc,
    int x,
    int y,
    UINT fuOptions,
    _In_reads_opt_(1) const RECT *lprc,
    _In_reads_(1) const SCRIPT_ANALYSIS *psa,
    _Reserved_ const WCHAR *pwcReserved,
    _Reserved_ int iReserved,
    _In_reads_(cGlyphs) const WORD *pwGlyphs,
    int cGlyphs,
    _In_reads_(cGlyphs) const int *piAdvance,
    _In_reads_opt_(cGlyphs) const int *piJustify,
    _In_reads_(cGlyphs) const GOFFSET *pGoffset);
_Check_return_ HRESULT WINAPI ScriptJustify(
    _In_reads_(cGlyphs) const SCRIPT_VISATTR *psva,
    _In_reads_(cGlyphs) const int *piAdvance,
    int cGlyphs,
    int iDx,
    int iMinKashida,
    _Out_writes_all_(cGlyphs) int *piJustify);
typedef struct tag_SCRIPT_LOGATTR {
    BYTE fSoftBreak :1;
    BYTE fWhiteSpace :1;
    BYTE fCharStop :1;
    BYTE fWordStop :1;
    BYTE fInvalid :1;
    BYTE fReserved :3;
} SCRIPT_LOGATTR;
_Check_return_ HRESULT WINAPI ScriptBreak(
    _In_reads_(cChars) const WCHAR *pwcChars,
    int cChars,
    _In_reads_(1) const SCRIPT_ANALYSIS *psa,
    _Out_writes_all_(cChars) SCRIPT_LOGATTR *psla);
_Check_return_ HRESULT WINAPI ScriptCPtoX(
    int iCP,
    BOOL fTrailing,
    int cChars,
    int cGlyphs,
    _In_reads_(cChars) const WORD *pwLogClust,
    _In_reads_(cGlyphs) const SCRIPT_VISATTR *psva,
    _In_reads_(cGlyphs) const int *piAdvance,
    _In_reads_(1) const SCRIPT_ANALYSIS *psa,
    int *piX);
_Check_return_ HRESULT WINAPI ScriptXtoCP(
    int iX,
    int cChars,
    int cGlyphs,
    _In_reads_(cChars) const WORD *pwLogClust,
    _In_reads_(cGlyphs) const SCRIPT_VISATTR *psva,
    _In_reads_(cGlyphs) const int *piAdvance,
    _In_reads_(1) const SCRIPT_ANALYSIS *psa,
    _Out_writes_(1) int *piCP,
    _Out_writes_(1) int *piTrailing);
_Check_return_ HRESULT WINAPI ScriptGetLogicalWidths(
    _In_reads_(1) const SCRIPT_ANALYSIS *psa,
    int cChars,
    int cGlyphs,
    _In_reads_(cGlyphs) const int *piGlyphWidth,
    _In_reads_(cChars) const WORD *pwLogClust,
    _In_reads_(cGlyphs) const SCRIPT_VISATTR *psva,
    _In_reads_(cChars) int *piDx);
_Check_return_ HRESULT WINAPI ScriptApplyLogicalWidth(
    _In_reads_(cChars) const int *piDx,
    int cChars,
    int cGlyphs,
    _In_reads_(cChars) const WORD *pwLogClust,
    _In_reads_(cGlyphs) const SCRIPT_VISATTR *psva,
    _In_reads_(cGlyphs) const int *piAdvance,
    _In_reads_(1) const SCRIPT_ANALYSIS *psa,
    _Inout_updates_opt_(1) ABC *pABC,
    _Out_writes_all_(cGlyphs) int *piJustify);
_Check_return_ HRESULT WINAPI ScriptGetCMap(
    HDC hdc,
    _Inout_updates_(1) SCRIPT_CACHE *psc,
    _In_reads_(cChars) const WCHAR *pwcInChars,
    int cChars,
    DWORD dwFlags,
    _Out_writes_(cChars) WORD *pwOutGlyphs);
_Check_return_ HRESULT WINAPI ScriptGetGlyphABCWidth(
    HDC hdc,
    _Inout_updates_(1) SCRIPT_CACHE *psc,
    WORD wGlyph,
    _Out_writes_(1) ABC *pABC);
typedef struct {
    DWORD langid :16;
    DWORD fNumeric :1;
    DWORD fComplex :1;
    DWORD fNeedsWordBreaking :1;
    DWORD fNeedsCaretInfo :1;
    DWORD bCharSet :8;
    DWORD fControl :1;
    DWORD fPrivateUseArea :1;
    DWORD fNeedsCharacterJustify :1;
    DWORD fInvalidGlyph :1;
    DWORD fInvalidLogAttr :1;
    DWORD fCDM :1;
    DWORD fAmbiguousCharSet :1;
    DWORD fClusterSizeVaries :1;
    DWORD fRejectInvalid :1;
} SCRIPT_PROPERTIES;
_Check_return_ HRESULT WINAPI ScriptGetProperties(
    _Outptr_result_buffer_(*piNumScripts) const SCRIPT_PROPERTIES ***ppSp,
    _Out_ int *piNumScripts);
typedef struct {
    int cBytes;
    WORD wgBlank;
    WORD wgDefault;
    WORD wgInvalid;
    WORD wgKashida;
    int iKashidaWidth;
} SCRIPT_FONTPROPERTIES;
_Check_return_ HRESULT WINAPI ScriptGetFontProperties(
    HDC hdc,
    _Inout_updates_(1) SCRIPT_CACHE *psc,
    _Out_writes_(1) SCRIPT_FONTPROPERTIES *sfp);
_Check_return_ HRESULT WINAPI ScriptCacheGetHeight(
    HDC hdc,
    _Inout_updates_(1) SCRIPT_CACHE *psc,
    _Out_writes_(1) long *tmHeight);
typedef struct tag_SCRIPT_TABDEF {
    int cTabStops;
    int iScale;
    int *pTabStops;
    int iTabOrigin;
} SCRIPT_TABDEF;
typedef void* SCRIPT_STRING_ANALYSIS;
_Check_return_ HRESULT WINAPI ScriptStringAnalyse(
    HDC hdc,
    const void *pString,
    int cString,
    int cGlyphs,
    int iCharset,
    DWORD dwFlags,
    int iReqWidth,
    _In_reads_opt_(1) SCRIPT_CONTROL *psControl,
    _In_reads_opt_(1) SCRIPT_STATE *psState,
    _In_reads_opt_(cString) const int *piDx,
    _In_reads_opt_(1) SCRIPT_TABDEF *pTabdef,
    const BYTE *pbInClass,
    _Outptr_result_buffer_(1) SCRIPT_STRING_ANALYSIS *pssa);
_Check_return_ HRESULT WINAPI ScriptStringFree(
    _Inout_updates_(1) SCRIPT_STRING_ANALYSIS *pssa);
const SIZE* WINAPI ScriptString_pSize(
    _In_reads_(1) SCRIPT_STRING_ANALYSIS ssa);
const int* WINAPI ScriptString_pcOutChars(
    _In_reads_(1) SCRIPT_STRING_ANALYSIS ssa);
const SCRIPT_LOGATTR* WINAPI ScriptString_pLogAttr(
    _In_reads_(1) SCRIPT_STRING_ANALYSIS ssa);
_Check_return_ HRESULT WINAPI ScriptStringGetOrder(
    _In_reads_(1) SCRIPT_STRING_ANALYSIS ssa,
    UINT *puOrder);
_Check_return_ HRESULT WINAPI ScriptStringCPtoX(
    _In_reads_(1) SCRIPT_STRING_ANALYSIS ssa,
    int icp,
    BOOL fTrailing,
    _Out_writes_(1) int *pX);
_Check_return_ HRESULT WINAPI ScriptStringXtoCP(
    _In_reads_(1) SCRIPT_STRING_ANALYSIS ssa,
    int iX,
    _Out_writes_(1) int *piCh,
    _Out_writes_(1) int *piTrailing);
_Check_return_ HRESULT WINAPI ScriptStringGetLogicalWidths(
    _In_reads_(1) SCRIPT_STRING_ANALYSIS ssa,
    int *piDx);
_Check_return_ HRESULT WINAPI ScriptStringValidate(
    _In_reads_(1) SCRIPT_STRING_ANALYSIS ssa);
_Check_return_ HRESULT WINAPI ScriptStringOut(
    _In_reads_(1) SCRIPT_STRING_ANALYSIS ssa,
    int iX,
    int iY,
    UINT uOptions,
    _In_reads_opt_(1) const RECT *prc,
    int iMinSel,
    int iMaxSel,
    BOOL fDisabled);
_Check_return_ HRESULT WINAPI ScriptIsComplex(
    _In_reads_(cInChars) const WCHAR *pwcInChars,
    int cInChars,
    DWORD dwFlags);
typedef struct tag_SCRIPT_DIGITSUBSTITUTE {
    DWORD NationalDigitLanguage :16;
    DWORD TraditionalDigitLanguage :16;
    DWORD DigitSubstitute :8;
    DWORD dwReserved;
} SCRIPT_DIGITSUBSTITUTE;
_Check_return_ HRESULT WINAPI ScriptRecordDigitSubstitution(
    LCID Locale,
    _Out_writes_(1) SCRIPT_DIGITSUBSTITUTE *psds);
_Check_return_ HRESULT WINAPI ScriptApplyDigitSubstitution(
    _In_reads_(1) const SCRIPT_DIGITSUBSTITUTE *psds,
    _Out_writes_(1) SCRIPT_CONTROL *psc,
    _Out_writes_(1) SCRIPT_STATE *pss);
typedef ULONG OPENTYPE_TAG;
typedef struct opentype_feature_record{
    OPENTYPE_TAG tagFeature;
    LONG lParameter;
} OPENTYPE_FEATURE_RECORD;
typedef struct textrange_properties{
    OPENTYPE_FEATURE_RECORD *potfRecords;
    int cotfRecords;
} TEXTRANGE_PROPERTIES;
typedef struct script_charprop{
    WORD fCanGlyphAlone : 1;
    WORD reserved : 15;
} SCRIPT_CHARPROP;
typedef struct script_glyphprop{
    SCRIPT_VISATTR sva;
    WORD reserved;
} SCRIPT_GLYPHPROP;
_Check_return_ HRESULT WINAPI ScriptShapeOpenType(
    _In_opt_ HDC hdc,
    _Inout_ SCRIPT_CACHE *psc,
    _Inout_ SCRIPT_ANALYSIS *psa,
    _In_ OPENTYPE_TAG tagScript,
    _In_ OPENTYPE_TAG tagLangSys,
    _In_reads_opt_(cRanges) int *rcRangeChars,
    _In_reads_opt_(cRanges) TEXTRANGE_PROPERTIES **rpRangeProperties,
    _In_ int cRanges,
    _In_reads_(cChars) const WCHAR *pwcChars,
    _In_ int cChars,
    _In_ int cMaxGlyphs,
    _Out_writes_all_(cChars) WORD *pwLogClust,
    _Out_writes_all_(cChars) SCRIPT_CHARPROP *pCharProps,
    _Out_writes_to_(cMaxGlyphs, *pcGlyphs) WORD *pwOutGlyphs,
    _Out_writes_to_(cMaxGlyphs, *pcGlyphs) SCRIPT_GLYPHPROP *pOutGlyphProps,
    _Out_ int *pcGlyphs);
_Check_return_ HRESULT WINAPI ScriptPlaceOpenType(
    _In_opt_ HDC hdc,
    _Inout_ SCRIPT_CACHE *psc,
    _Inout_ SCRIPT_ANALYSIS *psa,
    _In_ OPENTYPE_TAG tagScript,
    _In_ OPENTYPE_TAG tagLangSys,
    _In_reads_opt_(cRanges) int *rcRangeChars,
    _In_reads_opt_(cRanges) TEXTRANGE_PROPERTIES **rpRangeProperties,
    _In_ int cRanges,
    _In_reads_(cChars) const WCHAR *pwcChars,
    _In_reads_(cChars) WORD *pwLogClust,
    _In_reads_(cChars) SCRIPT_CHARPROP *pCharProps,
    _In_ int cChars,
    _In_reads_(cGlyphs) const WORD *pwGlyphs,
    _In_reads_(cGlyphs) const SCRIPT_GLYPHPROP *pGlyphProps,
    _In_ int cGlyphs,
    _Out_writes_all_(cGlyphs) int *piAdvance,
    _Out_writes_all_(cGlyphs) GOFFSET *pGoffset,
    _Out_opt_ ABC *pABC);
_Check_return_ HRESULT WINAPI ScriptItemizeOpenType(
    _In_reads_(cInChars) const WCHAR *pwcInChars,
    _In_ int cInChars,
    _In_ int cMaxItems,
    _In_opt_ const SCRIPT_CONTROL *psControl,
    _In_opt_ const SCRIPT_STATE *psState,
    _Out_writes_to_(cMaxItems, *pcItems) SCRIPT_ITEM *pItems,
    _Out_writes_to_(cMaxItems, *pcItems) OPENTYPE_TAG *pScriptTags,
    _Out_ int *pcItems);
_Check_return_ HRESULT WINAPI ScriptGetFontScriptTags(
    _In_opt_ HDC hdc,
    _Inout_ SCRIPT_CACHE *psc,
    _In_opt_ SCRIPT_ANALYSIS *psa,
    _In_ int cMaxTags,
    _Out_writes_to_(cMaxTags, *pcTags) OPENTYPE_TAG *pScriptTags,
    _Out_ int *pcTags
);
_Check_return_ HRESULT WINAPI ScriptGetFontLanguageTags(
    _In_opt_ HDC hdc,
    _Inout_ SCRIPT_CACHE *psc,
    _In_opt_ SCRIPT_ANALYSIS *psa,
    _In_ OPENTYPE_TAG tagScript,
    _In_ int cMaxTags,
    _Out_writes_to_(cMaxTags, *pcTags) OPENTYPE_TAG *pLangsysTags,
    _Out_ int *pcTags
);
_Check_return_ HRESULT WINAPI ScriptGetFontFeatureTags(
    _In_opt_ HDC hdc,
    _Inout_ SCRIPT_CACHE *psc,
    _In_opt_ SCRIPT_ANALYSIS *psa,
    _In_ OPENTYPE_TAG tagScript,
    _In_ OPENTYPE_TAG tagLangSys,
    _In_ int cMaxTags,
    _Out_writes_to_(cMaxTags, *pcTags) OPENTYPE_TAG *pFeatureTags,
    _Out_ int *pcTags
);
_Check_return_ HRESULT WINAPI ScriptGetFontAlternateGlyphs(
    _In_opt_ HDC hdc,
    _Inout_ SCRIPT_CACHE *psc,
    _In_opt_ SCRIPT_ANALYSIS *psa,
    _In_ OPENTYPE_TAG tagScript,
    _In_ OPENTYPE_TAG tagLangSys,
    _In_ OPENTYPE_TAG tagFeature,
    _In_ WORD wGlyphId,
    _In_ int cMaxAlternates,
    _Out_writes_to_(cMaxAlternates, *pcAlternates) WORD *pAlternateGlyphs,
    _Out_ int *pcAlternates
);
_Check_return_ HRESULT WINAPI ScriptSubstituteSingleGlyph(
    _In_opt_ HDC hdc,
    _Inout_ SCRIPT_CACHE *psc,
    _In_opt_ SCRIPT_ANALYSIS *psa,
    _In_ OPENTYPE_TAG tagScript,
    _In_ OPENTYPE_TAG tagLangSys,
    _In_ OPENTYPE_TAG tagFeature,
    _In_ LONG lParameter,
    _In_ WORD wGlyphId,
    _Out_ WORD *pwOutGlyphId
);
_Check_return_ HRESULT WINAPI ScriptPositionSingleGlyph(
    _In_opt_ HDC hdc,
    _Inout_ SCRIPT_CACHE *psc,
    _In_opt_ SCRIPT_ANALYSIS *psa,
    _In_ OPENTYPE_TAG tagScript,
    _In_ OPENTYPE_TAG tagLangSys,
    _In_ OPENTYPE_TAG tagFeature,
    _In_ LONG lParameter,
    _In_ WORD wGlyphId,
    _In_ int iAdvance,
    _In_ GOFFSET GOffset,
    _Out_ int *piOutAdvance,
    _Out_ GOFFSET *pOutGoffset
);
}
#endif
#pragma endregion
