#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
       
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CText_CIContentLinkInfo __x_ABI_CWindows_CUI_CText_CIContentLinkInfo;
typedef interface __x_ABI_CWindows_CUI_CText_CIFontWeights __x_ABI_CWindows_CUI_CText_CIFontWeights;
typedef interface __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics;
typedef interface __x_ABI_CWindows_CUI_CText_CIRichEditTextRange __x_ABI_CWindows_CUI_CText_CIRichEditTextRange;
typedef interface __x_ABI_CWindows_CUI_CText_CITextCharacterFormat __x_ABI_CWindows_CUI_CText_CITextCharacterFormat;
typedef interface __x_ABI_CWindows_CUI_CText_CITextConstantsStatics __x_ABI_CWindows_CUI_CText_CITextConstantsStatics;
typedef interface __x_ABI_CWindows_CUI_CText_CITextDocument __x_ABI_CWindows_CUI_CText_CITextDocument;
typedef interface __x_ABI_CWindows_CUI_CText_CITextDocument2 __x_ABI_CWindows_CUI_CText_CITextDocument2;
typedef interface __x_ABI_CWindows_CUI_CText_CITextDocument3 __x_ABI_CWindows_CUI_CText_CITextDocument3;
typedef interface __x_ABI_CWindows_CUI_CText_CITextParagraphFormat __x_ABI_CWindows_CUI_CText_CITextParagraphFormat;
typedef interface __x_ABI_CWindows_CUI_CText_CITextRange __x_ABI_CWindows_CUI_CText_CITextRange;
typedef interface __x_ABI_CWindows_CUI_CText_CITextSelection __x_ABI_CWindows_CUI_CText_CITextSelection;
enum __x_ABI_CWindows_CUI_CText_CUnderlineType;
typedef interface __FIReference_1_Windows__CUI__CText__CUnderlineType __FIReference_1_Windows__CUI__CText__CUnderlineType;
EXTERN_C const IID IID___FIReference_1_Windows__CUI__CText__CUnderlineType;
typedef struct __FIReference_1_Windows__CUI__CText__CUnderlineTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This, __RPC__out enum __x_ABI_CWindows_CUI_CText_CUnderlineType *value);
    END_INTERFACE
} __FIReference_1_Windows__CUI__CText__CUnderlineTypeVtbl;
interface __FIReference_1_Windows__CUI__CText__CUnderlineType
{
    CONST_VTBL struct __FIReference_1_Windows__CUI__CText__CUnderlineTypeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CUI_CText_CCaretType __x_ABI_CWindows_CUI_CText_CCaretType;
typedef enum __x_ABI_CWindows_CUI_CText_CFindOptions __x_ABI_CWindows_CUI_CText_CFindOptions;
typedef enum __x_ABI_CWindows_CUI_CText_CFontStretch __x_ABI_CWindows_CUI_CText_CFontStretch;
typedef enum __x_ABI_CWindows_CUI_CText_CFontStyle __x_ABI_CWindows_CUI_CText_CFontStyle;
typedef enum __x_ABI_CWindows_CUI_CText_CFormatEffect __x_ABI_CWindows_CUI_CText_CFormatEffect;
typedef enum __x_ABI_CWindows_CUI_CText_CHorizontalCharacterAlignment __x_ABI_CWindows_CUI_CText_CHorizontalCharacterAlignment;
typedef enum __x_ABI_CWindows_CUI_CText_CLetterCase __x_ABI_CWindows_CUI_CText_CLetterCase;
typedef enum __x_ABI_CWindows_CUI_CText_CLineSpacingRule __x_ABI_CWindows_CUI_CText_CLineSpacingRule;
typedef enum __x_ABI_CWindows_CUI_CText_CLinkType __x_ABI_CWindows_CUI_CText_CLinkType;
typedef enum __x_ABI_CWindows_CUI_CText_CMarkerAlignment __x_ABI_CWindows_CUI_CText_CMarkerAlignment;
typedef enum __x_ABI_CWindows_CUI_CText_CMarkerStyle __x_ABI_CWindows_CUI_CText_CMarkerStyle;
typedef enum __x_ABI_CWindows_CUI_CText_CMarkerType __x_ABI_CWindows_CUI_CText_CMarkerType;
typedef enum __x_ABI_CWindows_CUI_CText_CParagraphAlignment __x_ABI_CWindows_CUI_CText_CParagraphAlignment;
typedef enum __x_ABI_CWindows_CUI_CText_CParagraphStyle __x_ABI_CWindows_CUI_CText_CParagraphStyle;
typedef enum __x_ABI_CWindows_CUI_CText_CPointOptions __x_ABI_CWindows_CUI_CText_CPointOptions;
typedef enum __x_ABI_CWindows_CUI_CText_CRangeGravity __x_ABI_CWindows_CUI_CText_CRangeGravity;
typedef enum __x_ABI_CWindows_CUI_CText_CSelectionOptions __x_ABI_CWindows_CUI_CText_CSelectionOptions;
typedef enum __x_ABI_CWindows_CUI_CText_CSelectionType __x_ABI_CWindows_CUI_CText_CSelectionType;
typedef enum __x_ABI_CWindows_CUI_CText_CTabAlignment __x_ABI_CWindows_CUI_CText_CTabAlignment;
typedef enum __x_ABI_CWindows_CUI_CText_CTabLeader __x_ABI_CWindows_CUI_CText_CTabLeader;
typedef enum __x_ABI_CWindows_CUI_CText_CTextDecorations __x_ABI_CWindows_CUI_CText_CTextDecorations;
typedef enum __x_ABI_CWindows_CUI_CText_CTextGetOptions __x_ABI_CWindows_CUI_CText_CTextGetOptions;
typedef enum __x_ABI_CWindows_CUI_CText_CTextRangeUnit __x_ABI_CWindows_CUI_CText_CTextRangeUnit;
typedef enum __x_ABI_CWindows_CUI_CText_CTextScript __x_ABI_CWindows_CUI_CText_CTextScript;
typedef enum __x_ABI_CWindows_CUI_CText_CTextSetOptions __x_ABI_CWindows_CUI_CText_CTextSetOptions;
typedef enum __x_ABI_CWindows_CUI_CText_CUnderlineType __x_ABI_CWindows_CUI_CText_CUnderlineType;
typedef enum __x_ABI_CWindows_CUI_CText_CVerticalCharacterAlignment __x_ABI_CWindows_CUI_CText_CVerticalCharacterAlignment;
typedef struct __x_ABI_CWindows_CUI_CText_CFontWeight __x_ABI_CWindows_CUI_CText_CFontWeight;
enum __x_ABI_CWindows_CUI_CText_CCaretType
{
    CaretType_Normal = 0,
    CaretType_Null = 1,
};
enum __x_ABI_CWindows_CUI_CText_CFindOptions
{
    FindOptions_None = 0,
    FindOptions_Word = 0x2,
    FindOptions_Case = 0x4,
};
enum __x_ABI_CWindows_CUI_CText_CFontStretch
{
    FontStretch_Undefined = 0,
    FontStretch_UltraCondensed = 1,
    FontStretch_ExtraCondensed = 2,
    FontStretch_Condensed = 3,
    FontStretch_SemiCondensed = 4,
    FontStretch_Normal = 5,
    FontStretch_SemiExpanded = 6,
    FontStretch_Expanded = 7,
    FontStretch_ExtraExpanded = 8,
    FontStretch_UltraExpanded = 9,
};
enum __x_ABI_CWindows_CUI_CText_CFontStyle
{
    FontStyle_Normal = 0,
    FontStyle_Oblique = 1,
    FontStyle_Italic = 2,
};
enum __x_ABI_CWindows_CUI_CText_CFormatEffect
{
    FormatEffect_Off = 0,
    FormatEffect_On = 1,
    FormatEffect_Toggle = 2,
    FormatEffect_Undefined = 3,
};
enum __x_ABI_CWindows_CUI_CText_CHorizontalCharacterAlignment
{
    HorizontalCharacterAlignment_Left = 0,
    HorizontalCharacterAlignment_Right = 1,
    HorizontalCharacterAlignment_Center = 2,
};
enum __x_ABI_CWindows_CUI_CText_CLetterCase
{
    LetterCase_Lower = 0,
    LetterCase_Upper = 1,
};
enum __x_ABI_CWindows_CUI_CText_CLineSpacingRule
{
    LineSpacingRule_Undefined = 0,
    LineSpacingRule_Single = 1,
    LineSpacingRule_OneAndHalf = 2,
    LineSpacingRule_Double = 3,
    LineSpacingRule_AtLeast = 4,
    LineSpacingRule_Exactly = 5,
    LineSpacingRule_Multiple = 6,
    LineSpacingRule_Percent = 7,
};
enum __x_ABI_CWindows_CUI_CText_CLinkType
{
    LinkType_Undefined = 0,
    LinkType_NotALink = 1,
    LinkType_ClientLink = 2,
    LinkType_FriendlyLinkName = 3,
    LinkType_FriendlyLinkAddress = 4,
    LinkType_AutoLink = 5,
    LinkType_AutoLinkEmail = 6,
    LinkType_AutoLinkPhone = 7,
    LinkType_AutoLinkPath = 8,
};
enum __x_ABI_CWindows_CUI_CText_CMarkerAlignment
{
    MarkerAlignment_Undefined = 0,
    MarkerAlignment_Left = 1,
    MarkerAlignment_Center = 2,
    MarkerAlignment_Right = 3,
};
enum __x_ABI_CWindows_CUI_CText_CMarkerStyle
{
    MarkerStyle_Undefined = 0,
    MarkerStyle_Parenthesis = 1,
    MarkerStyle_Parentheses = 2,
    MarkerStyle_Period = 3,
    MarkerStyle_Plain = 4,
    MarkerStyle_Minus = 5,
    MarkerStyle_NoNumber = 6,
};
enum __x_ABI_CWindows_CUI_CText_CMarkerType
{
    MarkerType_Undefined = 0,
    MarkerType_None = 1,
    MarkerType_Bullet = 2,
    MarkerType_Arabic = 3,
    MarkerType_LowercaseEnglishLetter = 4,
    MarkerType_UppercaseEnglishLetter = 5,
    MarkerType_LowercaseRoman = 6,
    MarkerType_UppercaseRoman = 7,
    MarkerType_UnicodeSequence = 8,
    MarkerType_CircledNumber = 9,
    MarkerType_BlackCircleWingding = 10,
    MarkerType_WhiteCircleWingding = 11,
    MarkerType_ArabicWide = 12,
    MarkerType_SimplifiedChinese = 13,
    MarkerType_TraditionalChinese = 14,
    MarkerType_JapanSimplifiedChinese = 15,
    MarkerType_JapanKorea = 16,
    MarkerType_ArabicDictionary = 17,
    MarkerType_ArabicAbjad = 18,
    MarkerType_Hebrew = 19,
    MarkerType_ThaiAlphabetic = 20,
    MarkerType_ThaiNumeric = 21,
    MarkerType_DevanagariVowel = 22,
    MarkerType_DevanagariConsonant = 23,
    MarkerType_DevanagariNumeric = 24,
};
enum __x_ABI_CWindows_CUI_CText_CParagraphAlignment
{
    ParagraphAlignment_Undefined = 0,
    ParagraphAlignment_Left = 1,
    ParagraphAlignment_Center = 2,
    ParagraphAlignment_Right = 3,
    ParagraphAlignment_Justify = 4,
};
enum __x_ABI_CWindows_CUI_CText_CParagraphStyle
{
    ParagraphStyle_Undefined = 0,
    ParagraphStyle_None = 1,
    ParagraphStyle_Normal = 2,
    ParagraphStyle_Heading1 = 3,
    ParagraphStyle_Heading2 = 4,
    ParagraphStyle_Heading3 = 5,
    ParagraphStyle_Heading4 = 6,
    ParagraphStyle_Heading5 = 7,
    ParagraphStyle_Heading6 = 8,
    ParagraphStyle_Heading7 = 9,
    ParagraphStyle_Heading8 = 10,
    ParagraphStyle_Heading9 = 11,
};
enum __x_ABI_CWindows_CUI_CText_CPointOptions
{
    PointOptions_None = 0,
    PointOptions_IncludeInset = 0x1,
    PointOptions_Start = 0x20,
    PointOptions_ClientCoordinates = 0x100,
    PointOptions_AllowOffClient = 0x200,
    PointOptions_Transform = 0x400,
    PointOptions_NoHorizontalScroll = 0x10000,
    PointOptions_NoVerticalScroll = 0x40000,
};
enum __x_ABI_CWindows_CUI_CText_CRangeGravity
{
    RangeGravity_UIBehavior = 0,
    RangeGravity_Backward = 1,
    RangeGravity_Forward = 2,
    RangeGravity_Inward = 3,
    RangeGravity_Outward = 4,
};
enum __x_ABI_CWindows_CUI_CText_CSelectionOptions
{
    SelectionOptions_StartActive = 0x1,
    SelectionOptions_AtEndOfLine = 0x2,
    SelectionOptions_Overtype = 0x4,
    SelectionOptions_Active = 0x8,
    SelectionOptions_Replace = 0x10,
};
enum __x_ABI_CWindows_CUI_CText_CSelectionType
{
    SelectionType_None = 0,
    SelectionType_InsertionPoint = 1,
    SelectionType_Normal = 2,
    SelectionType_InlineShape = 7,
    SelectionType_Shape = 8,
};
enum __x_ABI_CWindows_CUI_CText_CTabAlignment
{
    TabAlignment_Left = 0,
    TabAlignment_Center = 1,
    TabAlignment_Right = 2,
    TabAlignment_Decimal = 3,
    TabAlignment_Bar = 4,
};
enum __x_ABI_CWindows_CUI_CText_CTabLeader
{
    TabLeader_Spaces = 0,
    TabLeader_Dots = 1,
    TabLeader_Dashes = 2,
    TabLeader_Lines = 3,
    TabLeader_ThickLines = 4,
    TabLeader_Equals = 5,
};
enum __x_ABI_CWindows_CUI_CText_CTextDecorations
{
    TextDecorations_None = 0,
    TextDecorations_Underline = 0x1,
    TextDecorations_Strikethrough = 0x2,
};
enum __x_ABI_CWindows_CUI_CText_CTextGetOptions
{
    TextGetOptions_None = 0,
    TextGetOptions_AdjustCrlf = 0x1,
    TextGetOptions_UseCrlf = 0x2,
    TextGetOptions_UseObjectText = 0x4,
    TextGetOptions_AllowFinalEop = 0x8,
    TextGetOptions_NoHidden = 0x20,
    TextGetOptions_IncludeNumbering = 0x40,
    TextGetOptions_FormatRtf = 0x2000,
    TextGetOptions_UseLf = 0x1000000,
};
enum __x_ABI_CWindows_CUI_CText_CTextRangeUnit
{
    TextRangeUnit_Character = 0,
    TextRangeUnit_Word = 1,
    TextRangeUnit_Sentence = 2,
    TextRangeUnit_Paragraph = 3,
    TextRangeUnit_Line = 4,
    TextRangeUnit_Story = 5,
    TextRangeUnit_Screen = 6,
    TextRangeUnit_Section = 7,
    TextRangeUnit_Window = 8,
    TextRangeUnit_CharacterFormat = 9,
    TextRangeUnit_ParagraphFormat = 10,
    TextRangeUnit_Object = 11,
    TextRangeUnit_HardParagraph = 12,
    TextRangeUnit_Cluster = 13,
    TextRangeUnit_Bold = 14,
    TextRangeUnit_Italic = 15,
    TextRangeUnit_Underline = 16,
    TextRangeUnit_Strikethrough = 17,
    TextRangeUnit_ProtectedText = 18,
    TextRangeUnit_Link = 19,
    TextRangeUnit_SmallCaps = 20,
    TextRangeUnit_AllCaps = 21,
    TextRangeUnit_Hidden = 22,
    TextRangeUnit_Outline = 23,
    TextRangeUnit_Shadow = 24,
    TextRangeUnit_Imprint = 25,
    TextRangeUnit_Disabled = 26,
    TextRangeUnit_Revised = 27,
    TextRangeUnit_Subscript = 28,
    TextRangeUnit_Superscript = 29,
    TextRangeUnit_FontBound = 30,
    TextRangeUnit_LinkProtected = 31,
    TextRangeUnit_ContentLink = 32,
};
enum __x_ABI_CWindows_CUI_CText_CTextScript
{
    TextScript_Undefined = 0,
    TextScript_Ansi = 1,
    TextScript_EastEurope = 2,
    TextScript_Cyrillic = 3,
    TextScript_Greek = 4,
    TextScript_Turkish = 5,
    TextScript_Hebrew = 6,
    TextScript_Arabic = 7,
    TextScript_Baltic = 8,
    TextScript_Vietnamese = 9,
    TextScript_Default = 10,
    TextScript_Symbol = 11,
    TextScript_Thai = 12,
    TextScript_ShiftJis = 13,
    TextScript_GB2312 = 14,
    TextScript_Hangul = 15,
    TextScript_Big5 = 16,
    TextScript_PC437 = 17,
    TextScript_Oem = 18,
    TextScript_Mac = 19,
    TextScript_Armenian = 20,
    TextScript_Syriac = 21,
    TextScript_Thaana = 22,
    TextScript_Devanagari = 23,
    TextScript_Bengali = 24,
    TextScript_Gurmukhi = 25,
    TextScript_Gujarati = 26,
    TextScript_Oriya = 27,
    TextScript_Tamil = 28,
    TextScript_Telugu = 29,
    TextScript_Kannada = 30,
    TextScript_Malayalam = 31,
    TextScript_Sinhala = 32,
    TextScript_Lao = 33,
    TextScript_Tibetan = 34,
    TextScript_Myanmar = 35,
    TextScript_Georgian = 36,
    TextScript_Jamo = 37,
    TextScript_Ethiopic = 38,
    TextScript_Cherokee = 39,
    TextScript_Aboriginal = 40,
    TextScript_Ogham = 41,
    TextScript_Runic = 42,
    TextScript_Khmer = 43,
    TextScript_Mongolian = 44,
    TextScript_Braille = 45,
    TextScript_Yi = 46,
    TextScript_Limbu = 47,
    TextScript_TaiLe = 48,
    TextScript_NewTaiLue = 49,
    TextScript_SylotiNagri = 50,
    TextScript_Kharoshthi = 51,
    TextScript_Kayahli = 52,
    TextScript_UnicodeSymbol = 53,
    TextScript_Emoji = 54,
    TextScript_Glagolitic = 55,
    TextScript_Lisu = 56,
    TextScript_Vai = 57,
    TextScript_NKo = 58,
    TextScript_Osmanya = 59,
    TextScript_PhagsPa = 60,
    TextScript_Gothic = 61,
    TextScript_Deseret = 62,
    TextScript_Tifinagh = 63,
};
enum __x_ABI_CWindows_CUI_CText_CTextSetOptions
{
    TextSetOptions_None = 0,
    TextSetOptions_UnicodeBidi = 0x1,
    TextSetOptions_Unlink = 0x8,
    TextSetOptions_Unhide = 0x10,
    TextSetOptions_CheckTextLimit = 0x20,
    TextSetOptions_FormatRtf = 0x2000,
    TextSetOptions_ApplyRtfDocumentDefaults = 0x4000,
};
enum __x_ABI_CWindows_CUI_CText_CUnderlineType
{
    UnderlineType_Undefined = 0,
    UnderlineType_None = 1,
    UnderlineType_Single = 2,
    UnderlineType_Words = 3,
    UnderlineType_Double = 4,
    UnderlineType_Dotted = 5,
    UnderlineType_Dash = 6,
    UnderlineType_DashDot = 7,
    UnderlineType_DashDotDot = 8,
    UnderlineType_Wave = 9,
    UnderlineType_Thick = 10,
    UnderlineType_Thin = 11,
    UnderlineType_DoubleWave = 12,
    UnderlineType_HeavyWave = 13,
    UnderlineType_LongDash = 14,
    UnderlineType_ThickDash = 15,
    UnderlineType_ThickDashDot = 16,
    UnderlineType_ThickDashDotDot = 17,
    UnderlineType_ThickDotted = 18,
    UnderlineType_ThickLongDash = 19,
};
enum __x_ABI_CWindows_CUI_CText_CVerticalCharacterAlignment
{
    VerticalCharacterAlignment_Top = 0,
    VerticalCharacterAlignment_Baseline = 1,
    VerticalCharacterAlignment_Bottom = 2,
};
struct __x_ABI_CWindows_CUI_CText_CFontWeight
{
    UINT16 Weight;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_IContentLinkInfo[] = L"Windows.UI.Text.IContentLinkInfo";
typedef struct __x_ABI_CWindows_CUI_CText_CIContentLinkInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayText )(
        __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayText )(
        __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SecondaryText )(
        __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SecondaryText )(
        __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LinkContentKind )(
        __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LinkContentKind )(
        __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CIContentLinkInfoVtbl;
interface __x_ABI_CWindows_CUI_CText_CIContentLinkInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CIContentLinkInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->put_Id(This,value) )
    ( (This)->lpVtbl->get_DisplayText(This,value) )
    ( (This)->lpVtbl->put_DisplayText(This,value) )
    ( (This)->lpVtbl->get_SecondaryText(This,value) )
    ( (This)->lpVtbl->put_SecondaryText(This,value) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->put_Uri(This,value) )
    ( (This)->lpVtbl->get_LinkContentKind(This,value) )
    ( (This)->lpVtbl->put_LinkContentKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CIContentLinkInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_IFontWeights[] = L"Windows.UI.Text.IFontWeights";
typedef struct __x_ABI_CWindows_CUI_CText_CIFontWeightsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeights * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeights * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeights * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeights * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeights * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeights * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CIFontWeightsVtbl;
interface __x_ABI_CWindows_CUI_CText_CIFontWeights
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CIFontWeightsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CIFontWeights;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_IFontWeightsStatics[] = L"Windows.UI.Text.IFontWeightsStatics";
typedef struct __x_ABI_CWindows_CUI_CText_CIFontWeightsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Black )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bold )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtraBlack )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtraBold )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtraLight )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Light )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Medium )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Normal )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SemiBold )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SemiLight )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thin )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CIFontWeightsStaticsVtbl;
interface __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CIFontWeightsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Black(This,value) )
    ( (This)->lpVtbl->get_Bold(This,value) )
    ( (This)->lpVtbl->get_ExtraBlack(This,value) )
    ( (This)->lpVtbl->get_ExtraBold(This,value) )
    ( (This)->lpVtbl->get_ExtraLight(This,value) )
    ( (This)->lpVtbl->get_Light(This,value) )
    ( (This)->lpVtbl->get_Medium(This,value) )
    ( (This)->lpVtbl->get_Normal(This,value) )
    ( (This)->lpVtbl->get_SemiBold(This,value) )
    ( (This)->lpVtbl->get_SemiLight(This,value) )
    ( (This)->lpVtbl->get_Thin(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CIFontWeightsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_IRichEditTextRange[] = L"Windows.UI.Text.IRichEditTextRange";
typedef struct __x_ABI_CWindows_CUI_CText_CIRichEditTextRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIRichEditTextRange * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIRichEditTextRange * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIRichEditTextRange * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIRichEditTextRange * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIRichEditTextRange * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIRichEditTextRange * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContentLinkInfo )(
        __x_ABI_CWindows_CUI_CText_CIRichEditTextRange * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentLinkInfo )(
        __x_ABI_CWindows_CUI_CText_CIRichEditTextRange * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CIRichEditTextRangeVtbl;
interface __x_ABI_CWindows_CUI_CText_CIRichEditTextRange
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CIRichEditTextRangeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContentLinkInfo(This,value) )
    ( (This)->lpVtbl->put_ContentLinkInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CIRichEditTextRange;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextCharacterFormat[] = L"Windows.UI.Text.ITextCharacterFormat";
typedef struct __x_ABI_CWindows_CUI_CText_CITextCharacterFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllCaps )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllCaps )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bold )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Bold )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontStretch )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontStretch * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FontStretch )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFontStretch value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontStyle )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontStyle * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FontStyle )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFontStyle value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ForegroundColor )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ForegroundColor )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Hidden )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Hidden )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Italic )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Italic )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kerning )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Kerning )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LanguageTag )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LanguageTag )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LinkType )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CLinkType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Outline )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Outline )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtectedText )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProtectedText )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Size )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SmallCaps )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SmallCaps )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Spacing )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Spacing )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Strikethrough )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Strikethrough )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subscript )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Subscript )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Superscript )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Superscript )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TextScript )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CTextScript * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TextScript )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __x_ABI_CWindows_CUI_CText_CTextScript value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Underline )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CUnderlineType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Underline )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __x_ABI_CWindows_CUI_CText_CUnderlineType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Weight )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Weight )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *SetClone )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetClone )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsEqual )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * format,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CITextCharacterFormatVtbl;
interface __x_ABI_CWindows_CUI_CText_CITextCharacterFormat
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CITextCharacterFormatVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllCaps(This,value) )
    ( (This)->lpVtbl->put_AllCaps(This,value) )
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )
    ( (This)->lpVtbl->get_Bold(This,value) )
    ( (This)->lpVtbl->put_Bold(This,value) )
    ( (This)->lpVtbl->get_FontStretch(This,value) )
    ( (This)->lpVtbl->put_FontStretch(This,value) )
    ( (This)->lpVtbl->get_FontStyle(This,value) )
    ( (This)->lpVtbl->put_FontStyle(This,value) )
    ( (This)->lpVtbl->get_ForegroundColor(This,value) )
    ( (This)->lpVtbl->put_ForegroundColor(This,value) )
    ( (This)->lpVtbl->get_Hidden(This,value) )
    ( (This)->lpVtbl->put_Hidden(This,value) )
    ( (This)->lpVtbl->get_Italic(This,value) )
    ( (This)->lpVtbl->put_Italic(This,value) )
    ( (This)->lpVtbl->get_Kerning(This,value) )
    ( (This)->lpVtbl->put_Kerning(This,value) )
    ( (This)->lpVtbl->get_LanguageTag(This,value) )
    ( (This)->lpVtbl->put_LanguageTag(This,value) )
    ( (This)->lpVtbl->get_LinkType(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_Outline(This,value) )
    ( (This)->lpVtbl->put_Outline(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->put_Position(This,value) )
    ( (This)->lpVtbl->get_ProtectedText(This,value) )
    ( (This)->lpVtbl->put_ProtectedText(This,value) )
    ( (This)->lpVtbl->get_Size(This,value) )
    ( (This)->lpVtbl->put_Size(This,value) )
    ( (This)->lpVtbl->get_SmallCaps(This,value) )
    ( (This)->lpVtbl->put_SmallCaps(This,value) )
    ( (This)->lpVtbl->get_Spacing(This,value) )
    ( (This)->lpVtbl->put_Spacing(This,value) )
    ( (This)->lpVtbl->get_Strikethrough(This,value) )
    ( (This)->lpVtbl->put_Strikethrough(This,value) )
    ( (This)->lpVtbl->get_Subscript(This,value) )
    ( (This)->lpVtbl->put_Subscript(This,value) )
    ( (This)->lpVtbl->get_Superscript(This,value) )
    ( (This)->lpVtbl->put_Superscript(This,value) )
    ( (This)->lpVtbl->get_TextScript(This,value) )
    ( (This)->lpVtbl->put_TextScript(This,value) )
    ( (This)->lpVtbl->get_Underline(This,value) )
    ( (This)->lpVtbl->put_Underline(This,value) )
    ( (This)->lpVtbl->get_Weight(This,value) )
    ( (This)->lpVtbl->put_Weight(This,value) )
    ( (This)->lpVtbl->SetClone(This,value) )
    ( (This)->lpVtbl->GetClone(This,result) )
    ( (This)->lpVtbl->IsEqual(This,format,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextCharacterFormat;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextConstantsStatics[] = L"Windows.UI.Text.ITextConstantsStatics";
typedef struct __x_ABI_CWindows_CUI_CText_CITextConstantsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AutoColor )(
        __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinUnitCount )(
        __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxUnitCount )(
        __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UndefinedColor )(
        __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UndefinedFloatValue )(
        __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UndefinedInt32Value )(
        __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UndefinedFontStretch )(
        __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontStretch * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UndefinedFontStyle )(
        __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontStyle * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CITextConstantsStaticsVtbl;
interface __x_ABI_CWindows_CUI_CText_CITextConstantsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CITextConstantsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AutoColor(This,value) )
    ( (This)->lpVtbl->get_MinUnitCount(This,value) )
    ( (This)->lpVtbl->get_MaxUnitCount(This,value) )
    ( (This)->lpVtbl->get_UndefinedColor(This,value) )
    ( (This)->lpVtbl->get_UndefinedFloatValue(This,value) )
    ( (This)->lpVtbl->get_UndefinedInt32Value(This,value) )
    ( (This)->lpVtbl->get_UndefinedFontStretch(This,value) )
    ( (This)->lpVtbl->get_UndefinedFontStyle(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextConstantsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextDocument[] = L"Windows.UI.Text.ITextDocument";
typedef struct __x_ABI_CWindows_CUI_CText_CITextDocumentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CaretType )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CCaretType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CaretType )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                  __x_ABI_CWindows_CUI_CText_CCaretType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultTabStop )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DefaultTabStop )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Selection )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextSelection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UndoLimit )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UndoLimit )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                  UINT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *CanCopy )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *CanPaste )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *CanRedo )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *CanUndo )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *ApplyDisplayUpdates )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *BatchDisplayUpdates )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *BeginUndoGroup )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This
        );
    HRESULT ( STDMETHODCALLTYPE *EndUndoGroup )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultCharacterFormat )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultParagraphFormat )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetRange )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                  INT32 startPosition,
                  INT32 endPosition,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextRange * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetRangeFromPoint )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                  __x_ABI_CWindows_CFoundation_CPoint point,
                  __x_ABI_CWindows_CUI_CText_CPointOptions options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextRange * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetText )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                  __x_ABI_CWindows_CUI_CText_CTextGetOptions options,
                   __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *LoadFromStream )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                  __x_ABI_CWindows_CUI_CText_CTextSetOptions options,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value
        );
    HRESULT ( STDMETHODCALLTYPE *Redo )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This
        );
    HRESULT ( STDMETHODCALLTYPE *SaveToStream )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                  __x_ABI_CWindows_CUI_CText_CTextGetOptions options,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDefaultCharacterFormat )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDefaultParagraphFormat )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetText )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
                  __x_ABI_CWindows_CUI_CText_CTextSetOptions options,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *Undo )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CITextDocumentVtbl;
interface __x_ABI_CWindows_CUI_CText_CITextDocument
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CITextDocumentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CaretType(This,value) )
    ( (This)->lpVtbl->put_CaretType(This,value) )
    ( (This)->lpVtbl->get_DefaultTabStop(This,value) )
    ( (This)->lpVtbl->put_DefaultTabStop(This,value) )
    ( (This)->lpVtbl->get_Selection(This,value) )
    ( (This)->lpVtbl->get_UndoLimit(This,value) )
    ( (This)->lpVtbl->put_UndoLimit(This,value) )
    ( (This)->lpVtbl->CanCopy(This,result) )
    ( (This)->lpVtbl->CanPaste(This,result) )
    ( (This)->lpVtbl->CanRedo(This,result) )
    ( (This)->lpVtbl->CanUndo(This,result) )
    ( (This)->lpVtbl->ApplyDisplayUpdates(This,result) )
    ( (This)->lpVtbl->BatchDisplayUpdates(This,result) )
    ( (This)->lpVtbl->BeginUndoGroup(This) )
    ( (This)->lpVtbl->EndUndoGroup(This) )
    ( (This)->lpVtbl->GetDefaultCharacterFormat(This,result) )
    ( (This)->lpVtbl->GetDefaultParagraphFormat(This,result) )
    ( (This)->lpVtbl->GetRange(This,startPosition,endPosition,result) )
    ( (This)->lpVtbl->GetRangeFromPoint(This,point,options,result) )
    ( (This)->lpVtbl->GetText(This,options,value) )
    ( (This)->lpVtbl->LoadFromStream(This,options,value) )
    ( (This)->lpVtbl->Redo(This) )
    ( (This)->lpVtbl->SaveToStream(This,options,value) )
    ( (This)->lpVtbl->SetDefaultCharacterFormat(This,value) )
    ( (This)->lpVtbl->SetDefaultParagraphFormat(This,value) )
    ( (This)->lpVtbl->SetText(This,options,value) )
    ( (This)->lpVtbl->Undo(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextDocument;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextDocument2[] = L"Windows.UI.Text.ITextDocument2";
typedef struct __x_ABI_CWindows_CUI_CText_CITextDocument2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AlignmentIncludesTrailingWhitespace )(
        __x_ABI_CWindows_CUI_CText_CITextDocument2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AlignmentIncludesTrailingWhitespace )(
        __x_ABI_CWindows_CUI_CText_CITextDocument2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IgnoreTrailingCharacterSpacing )(
        __x_ABI_CWindows_CUI_CText_CITextDocument2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IgnoreTrailingCharacterSpacing )(
        __x_ABI_CWindows_CUI_CText_CITextDocument2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CITextDocument2Vtbl;
interface __x_ABI_CWindows_CUI_CText_CITextDocument2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CITextDocument2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AlignmentIncludesTrailingWhitespace(This,value) )
    ( (This)->lpVtbl->put_AlignmentIncludesTrailingWhitespace(This,value) )
    ( (This)->lpVtbl->get_IgnoreTrailingCharacterSpacing(This,value) )
    ( (This)->lpVtbl->put_IgnoreTrailingCharacterSpacing(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextDocument2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextDocument3[] = L"Windows.UI.Text.ITextDocument3";
typedef struct __x_ABI_CWindows_CUI_CText_CITextDocument3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ClearUndoRedoHistory )(
        __x_ABI_CWindows_CUI_CText_CITextDocument3 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CITextDocument3Vtbl;
interface __x_ABI_CWindows_CUI_CText_CITextDocument3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CITextDocument3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ClearUndoRedoHistory(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextDocument3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextParagraphFormat[] = L"Windows.UI.Text.ITextParagraphFormat";
typedef struct __x_ABI_CWindows_CUI_CText_CITextParagraphFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Alignment )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CParagraphAlignment * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Alignment )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  __x_ABI_CWindows_CUI_CText_CParagraphAlignment value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirstLineIndent )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeepTogether )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeepTogether )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeepWithNext )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeepWithNext )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LeftIndent )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LineSpacing )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LineSpacingRule )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CLineSpacingRule * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ListAlignment )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CMarkerAlignment * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ListAlignment )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  __x_ABI_CWindows_CUI_CText_CMarkerAlignment value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ListLevelIndex )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ListLevelIndex )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ListStart )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ListStart )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ListStyle )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CMarkerStyle * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ListStyle )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  __x_ABI_CWindows_CUI_CText_CMarkerStyle value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ListTab )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ListTab )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ListType )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CMarkerType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ListType )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  __x_ABI_CWindows_CUI_CText_CMarkerType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NoLineNumber )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NoLineNumber )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageBreakBefore )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PageBreakBefore )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RightIndent )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RightIndent )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RightToLeft )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RightToLeft )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Style )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CParagraphStyle * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Style )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  __x_ABI_CWindows_CUI_CText_CParagraphStyle value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SpaceAfter )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SpaceAfter )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SpaceBefore )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SpaceBefore )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WidowControl )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WidowControl )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  __x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TabCount )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *AddTab )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  FLOAT position,
                  __x_ABI_CWindows_CUI_CText_CTabAlignment align,
                  __x_ABI_CWindows_CUI_CText_CTabLeader leader
        );
    HRESULT ( STDMETHODCALLTYPE *ClearAllTabs )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteTab )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  FLOAT position
        );
    HRESULT ( STDMETHODCALLTYPE *GetClone )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetTab )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  INT32 index,
                   __RPC__out FLOAT * position,
                   __RPC__out __x_ABI_CWindows_CUI_CText_CTabAlignment * align,
                   __RPC__out __x_ABI_CWindows_CUI_CText_CTabLeader * leader
        );
    HRESULT ( STDMETHODCALLTYPE *IsEqual )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * format,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetClone )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * format
        );
    HRESULT ( STDMETHODCALLTYPE *SetIndents )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  FLOAT start,
                  FLOAT left,
                  FLOAT right
        );
    HRESULT ( STDMETHODCALLTYPE *SetLineSpacing )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
                  __x_ABI_CWindows_CUI_CText_CLineSpacingRule rule,
                  FLOAT spacing
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CITextParagraphFormatVtbl;
interface __x_ABI_CWindows_CUI_CText_CITextParagraphFormat
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CITextParagraphFormatVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Alignment(This,value) )
    ( (This)->lpVtbl->put_Alignment(This,value) )
    ( (This)->lpVtbl->get_FirstLineIndent(This,value) )
    ( (This)->lpVtbl->get_KeepTogether(This,value) )
    ( (This)->lpVtbl->put_KeepTogether(This,value) )
    ( (This)->lpVtbl->get_KeepWithNext(This,value) )
    ( (This)->lpVtbl->put_KeepWithNext(This,value) )
    ( (This)->lpVtbl->get_LeftIndent(This,value) )
    ( (This)->lpVtbl->get_LineSpacing(This,value) )
    ( (This)->lpVtbl->get_LineSpacingRule(This,value) )
    ( (This)->lpVtbl->get_ListAlignment(This,value) )
    ( (This)->lpVtbl->put_ListAlignment(This,value) )
    ( (This)->lpVtbl->get_ListLevelIndex(This,value) )
    ( (This)->lpVtbl->put_ListLevelIndex(This,value) )
    ( (This)->lpVtbl->get_ListStart(This,value) )
    ( (This)->lpVtbl->put_ListStart(This,value) )
    ( (This)->lpVtbl->get_ListStyle(This,value) )
    ( (This)->lpVtbl->put_ListStyle(This,value) )
    ( (This)->lpVtbl->get_ListTab(This,value) )
    ( (This)->lpVtbl->put_ListTab(This,value) )
    ( (This)->lpVtbl->get_ListType(This,value) )
    ( (This)->lpVtbl->put_ListType(This,value) )
    ( (This)->lpVtbl->get_NoLineNumber(This,value) )
    ( (This)->lpVtbl->put_NoLineNumber(This,value) )
    ( (This)->lpVtbl->get_PageBreakBefore(This,value) )
    ( (This)->lpVtbl->put_PageBreakBefore(This,value) )
    ( (This)->lpVtbl->get_RightIndent(This,value) )
    ( (This)->lpVtbl->put_RightIndent(This,value) )
    ( (This)->lpVtbl->get_RightToLeft(This,value) )
    ( (This)->lpVtbl->put_RightToLeft(This,value) )
    ( (This)->lpVtbl->get_Style(This,value) )
    ( (This)->lpVtbl->put_Style(This,value) )
    ( (This)->lpVtbl->get_SpaceAfter(This,value) )
    ( (This)->lpVtbl->put_SpaceAfter(This,value) )
    ( (This)->lpVtbl->get_SpaceBefore(This,value) )
    ( (This)->lpVtbl->put_SpaceBefore(This,value) )
    ( (This)->lpVtbl->get_WidowControl(This,value) )
    ( (This)->lpVtbl->put_WidowControl(This,value) )
    ( (This)->lpVtbl->get_TabCount(This,value) )
    ( (This)->lpVtbl->AddTab(This,position,align,leader) )
    ( (This)->lpVtbl->ClearAllTabs(This) )
    ( (This)->lpVtbl->DeleteTab(This,position) )
    ( (This)->lpVtbl->GetClone(This,result) )
    ( (This)->lpVtbl->GetTab(This,index,position,align,leader) )
    ( (This)->lpVtbl->IsEqual(This,format,result) )
    ( (This)->lpVtbl->SetClone(This,format) )
    ( (This)->lpVtbl->SetIndents(This,start,left,right) )
    ( (This)->lpVtbl->SetLineSpacing(This,rule,spacing) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextParagraphFormat;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextRange[] = L"Windows.UI.Text.ITextRange";
typedef struct __x_ABI_CWindows_CUI_CText_CITextRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextRange * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextRange * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextRange * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextRange * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextRange * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextRange * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Character )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                           __RPC__out WCHAR * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Character )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  WCHAR value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CharacterFormat )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CharacterFormat )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FormattedText )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextRange * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FormattedText )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextRange * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndPosition )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EndPosition )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gravity )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CRangeGravity * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Gravity )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CRangeGravity value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Link )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Link )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ParagraphFormat )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ParagraphFormat )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartPosition )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartPosition )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StoryLength )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *CanPaste )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  INT32 format,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *ChangeCase )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CLetterCase value
        );
    HRESULT ( STDMETHODCALLTYPE *Collapse )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *Copy )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This
        );
    HRESULT ( STDMETHODCALLTYPE *Cut )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This
        );
    HRESULT ( STDMETHODCALLTYPE *Delete )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
                  INT32 count,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *EndOf )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
                  boolean extend,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *Expand )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindText )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __RPC__in HSTRING value,
                  INT32 scanLength,
                  __x_ABI_CWindows_CUI_CText_CFindOptions options,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetCharacterUtf32 )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                   __RPC__out UINT32 * value,
                  INT32 offset
        );
    HRESULT ( STDMETHODCALLTYPE *GetClone )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextRange * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetIndex )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetPoint )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CHorizontalCharacterAlignment horizontalAlign,
                  __x_ABI_CWindows_CUI_CText_CVerticalCharacterAlignment verticalAlign,
                  __x_ABI_CWindows_CUI_CText_CPointOptions options,
                   __RPC__out __x_ABI_CWindows_CFoundation_CPoint * point
        );
    HRESULT ( STDMETHODCALLTYPE *GetRect )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CPointOptions options,
                   __RPC__out __x_ABI_CWindows_CFoundation_CRect * rect,
                   __RPC__out INT32 * hit
        );
    HRESULT ( STDMETHODCALLTYPE *GetText )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CTextGetOptions options,
                   __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTextViaStream )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CTextGetOptions options,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value
        );
    HRESULT ( STDMETHODCALLTYPE *InRange )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextRange * range,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *InsertImage )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  INT32 width,
                  INT32 height,
                  INT32 ascent,
                  __x_ABI_CWindows_CUI_CText_CVerticalCharacterAlignment verticalAlign,
                  __RPC__in HSTRING alternateText,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value
        );
    HRESULT ( STDMETHODCALLTYPE *InStory )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextRange * range,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsEqual )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextRange * range,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *Move )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
                  INT32 count,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *MoveEnd )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
                  INT32 count,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *MoveStart )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
                  INT32 count,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *Paste )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  INT32 format
        );
    HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CPointOptions value
        );
    HRESULT ( STDMETHODCALLTYPE *MatchSelection )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetIndex )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
                  INT32 index,
                  boolean extend
        );
    HRESULT ( STDMETHODCALLTYPE *SetPoint )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CFoundation_CPoint point,
                  __x_ABI_CWindows_CUI_CText_CPointOptions options,
                  boolean extend
        );
    HRESULT ( STDMETHODCALLTYPE *SetRange )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  INT32 startPosition,
                  INT32 endPosition
        );
    HRESULT ( STDMETHODCALLTYPE *SetText )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CTextSetOptions options,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *SetTextViaStream )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CTextSetOptions options,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value
        );
    HRESULT ( STDMETHODCALLTYPE *StartOf )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
                  __x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
                  boolean extend,
                           __RPC__out INT32 * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CITextRangeVtbl;
interface __x_ABI_CWindows_CUI_CText_CITextRange
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CITextRangeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Character(This,value) )
    ( (This)->lpVtbl->put_Character(This,value) )
    ( (This)->lpVtbl->get_CharacterFormat(This,value) )
    ( (This)->lpVtbl->put_CharacterFormat(This,value) )
    ( (This)->lpVtbl->get_FormattedText(This,value) )
    ( (This)->lpVtbl->put_FormattedText(This,value) )
    ( (This)->lpVtbl->get_EndPosition(This,value) )
    ( (This)->lpVtbl->put_EndPosition(This,value) )
    ( (This)->lpVtbl->get_Gravity(This,value) )
    ( (This)->lpVtbl->put_Gravity(This,value) )
    ( (This)->lpVtbl->get_Length(This,value) )
    ( (This)->lpVtbl->get_Link(This,value) )
    ( (This)->lpVtbl->put_Link(This,value) )
    ( (This)->lpVtbl->get_ParagraphFormat(This,value) )
    ( (This)->lpVtbl->put_ParagraphFormat(This,value) )
    ( (This)->lpVtbl->get_StartPosition(This,value) )
    ( (This)->lpVtbl->put_StartPosition(This,value) )
    ( (This)->lpVtbl->get_StoryLength(This,value) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->put_Text(This,value) )
    ( (This)->lpVtbl->CanPaste(This,format,result) )
    ( (This)->lpVtbl->ChangeCase(This,value) )
    ( (This)->lpVtbl->Collapse(This,value) )
    ( (This)->lpVtbl->Copy(This) )
    ( (This)->lpVtbl->Cut(This) )
    ( (This)->lpVtbl->Delete(This,unit,count,result) )
    ( (This)->lpVtbl->EndOf(This,unit,extend,result) )
    ( (This)->lpVtbl->Expand(This,unit,result) )
    ( (This)->lpVtbl->FindText(This,value,scanLength,options,result) )
    ( (This)->lpVtbl->GetCharacterUtf32(This,value,offset) )
    ( (This)->lpVtbl->GetClone(This,result) )
    ( (This)->lpVtbl->GetIndex(This,unit,result) )
    ( (This)->lpVtbl->GetPoint(This,horizontalAlign,verticalAlign,options,point) )
    ( (This)->lpVtbl->GetRect(This,options,rect,hit) )
    ( (This)->lpVtbl->GetText(This,options,value) )
    ( (This)->lpVtbl->GetTextViaStream(This,options,value) )
    ( (This)->lpVtbl->InRange(This,range,result) )
    ( (This)->lpVtbl->InsertImage(This,width,height,ascent,verticalAlign,alternateText,value) )
    ( (This)->lpVtbl->InStory(This,range,result) )
    ( (This)->lpVtbl->IsEqual(This,range,result) )
    ( (This)->lpVtbl->Move(This,unit,count,result) )
    ( (This)->lpVtbl->MoveEnd(This,unit,count,result) )
    ( (This)->lpVtbl->MoveStart(This,unit,count,result) )
    ( (This)->lpVtbl->Paste(This,format) )
    ( (This)->lpVtbl->ScrollIntoView(This,value) )
    ( (This)->lpVtbl->MatchSelection(This) )
    ( (This)->lpVtbl->SetIndex(This,unit,index,extend) )
    ( (This)->lpVtbl->SetPoint(This,point,options,extend) )
    ( (This)->lpVtbl->SetRange(This,startPosition,endPosition) )
    ( (This)->lpVtbl->SetText(This,options,value) )
    ( (This)->lpVtbl->SetTextViaStream(This,options,value) )
    ( (This)->lpVtbl->StartOf(This,unit,extend,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextRange;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextSelection[] = L"Windows.UI.Text.ITextSelection";
typedef struct __x_ABI_CWindows_CUI_CText_CITextSelectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextSelection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextSelection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextSelection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextSelection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextSelection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextSelection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CSelectionOptions * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Options )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
                  __x_ABI_CWindows_CUI_CText_CSelectionOptions value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CSelectionType * value
        );
    HRESULT ( STDMETHODCALLTYPE *EndKey )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
                  __x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
                  boolean extend,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *HomeKey )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
                  __x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
                  boolean extend,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *MoveDown )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
                  __x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
                  INT32 count,
                  boolean extend,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *MoveLeft )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
                  __x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
                  INT32 count,
                  boolean extend,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *MoveRight )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
                  __x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
                  INT32 count,
                  boolean extend,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *MoveUp )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
                  __x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
                  INT32 count,
                  boolean extend,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *TypeText )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CITextSelectionVtbl;
interface __x_ABI_CWindows_CUI_CText_CITextSelection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CITextSelectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Options(This,value) )
    ( (This)->lpVtbl->put_Options(This,value) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->EndKey(This,unit,extend,result) )
    ( (This)->lpVtbl->HomeKey(This,unit,extend,result) )
    ( (This)->lpVtbl->MoveDown(This,unit,count,extend,result) )
    ( (This)->lpVtbl->MoveLeft(This,unit,count,extend,result) )
    ( (This)->lpVtbl->MoveRight(This,unit,count,extend,result) )
    ( (This)->lpVtbl->MoveUp(This,unit,count,extend,result) )
    ( (This)->lpVtbl->TypeText(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextSelection;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_ContentLinkInfo[] = L"Windows.UI.Text.ContentLinkInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_FontWeights[] = L"Windows.UI.Text.FontWeights";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_RichEditTextDocument[] = L"Windows.UI.Text.RichEditTextDocument";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_RichEditTextRange[] = L"Windows.UI.Text.RichEditTextRange";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_TextConstants[] = L"Windows.UI.Text.TextConstants";
       
       
#pragma clang diagnostic pop
