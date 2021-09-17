#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITextDocument ITextDocument;
typedef interface ITextRange ITextRange;
typedef interface ITextSelection ITextSelection;
typedef interface ITextFont ITextFont;
typedef interface ITextPara ITextPara;
typedef interface ITextStoryRanges ITextStoryRanges;
typedef interface ITextDocument2 ITextDocument2;
typedef interface ITextRange2 ITextRange2;
typedef interface ITextSelection2 ITextSelection2;
typedef interface ITextFont2 ITextFont2;
typedef interface ITextPara2 ITextPara2;
typedef interface ITextStoryRanges2 ITextStoryRanges2;
typedef interface ITextStory ITextStory;
typedef interface ITextStrings ITextStrings;
typedef interface ITextRow ITextRow;
typedef interface ITextDisplays ITextDisplays;
typedef interface ITextDocument2Old ITextDocument2Old;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
typedef
enum __MIDL___MIDL_itf_tom_0000_0000_0001
    {
        tomFalse = 0,
        tomTrue = -1,
        tomUndefined = -9999999,
        tomToggle = -9999998,
        tomAutoColor = -9999997,
        tomDefault = -9999996,
        tomSuspend = -9999995,
        tomResume = -9999994,
        tomApplyNow = 0,
        tomApplyLater = 1,
        tomTrackParms = 2,
        tomCacheParms = 3,
        tomApplyTmp = 4,
        tomDisableSmartFont = 8,
        tomEnableSmartFont = 9,
        tomUsePoints = 10,
        tomUseTwips = 11,
        tomBackward = 0xc0000001,
        tomForward = 0x3fffffff,
        tomMove = 0,
        tomExtend = 1,
        tomNoSelection = 0,
        tomSelectionIP = 1,
        tomSelectionNormal = 2,
        tomSelectionFrame = 3,
        tomSelectionColumn = 4,
        tomSelectionRow = 5,
        tomSelectionBlock = 6,
        tomSelectionInlineShape = 7,
        tomSelectionShape = 8,
        tomSelStartActive = 1,
        tomSelAtEOL = 2,
        tomSelOvertype = 4,
        tomSelActive = 8,
        tomSelReplace = 16,
        tomEnd = 0,
        tomStart = 32,
        tomCollapseEnd = 0,
        tomCollapseStart = 1,
        tomClientCoord = 256,
        tomAllowOffClient = 512,
        tomTransform = 1024,
        tomObjectArg = 2048,
        tomAtEnd = 4096,
        tomNone = 0,
        tomSingle = 1,
        tomWords = 2,
        tomDouble = 3,
        tomDotted = 4,
        tomDash = 5,
        tomDashDot = 6,
        tomDashDotDot = 7,
        tomWave = 8,
        tomThick = 9,
        tomHair = 10,
        tomDoubleWave = 11,
        tomHeavyWave = 12,
        tomLongDash = 13,
        tomThickDash = 14,
        tomThickDashDot = 15,
        tomThickDashDotDot = 16,
        tomThickDotted = 17,
        tomThickLongDash = 18,
        tomLineSpaceSingle = 0,
        tomLineSpace1pt5 = 1,
        tomLineSpaceDouble = 2,
        tomLineSpaceAtLeast = 3,
        tomLineSpaceExactly = 4,
        tomLineSpaceMultiple = 5,
        tomLineSpacePercent = 6,
        tomAlignLeft = 0,
        tomAlignCenter = 1,
        tomAlignRight = 2,
        tomAlignJustify = 3,
        tomAlignDecimal = 3,
        tomAlignBar = 4,
        tomDefaultTab = 5,
        tomAlignInterWord = 3,
        tomAlignNewspaper = 4,
        tomAlignInterLetter = 5,
        tomAlignScaled = 6,
        tomSpaces = 0,
        tomDots = 1,
        tomDashes = 2,
        tomLines = 3,
        tomThickLines = 4,
        tomEquals = 5,
        tomTabBack = -3,
        tomTabNext = -2,
        tomTabHere = -1,
        tomListNone = 0,
        tomListBullet = 1,
        tomListNumberAsArabic = 2,
        tomListNumberAsLCLetter = 3,
        tomListNumberAsUCLetter = 4,
        tomListNumberAsLCRoman = 5,
        tomListNumberAsUCRoman = 6,
        tomListNumberAsSequence = 7,
        tomListNumberedCircle = 8,
        tomListNumberedBlackCircleWingding = 9,
        tomListNumberedWhiteCircleWingding = 10,
        tomListNumberedArabicWide = 11,
        tomListNumberedChS = 12,
        tomListNumberedChT = 13,
        tomListNumberedJpnChS = 14,
        tomListNumberedJpnKor = 15,
        tomListNumberedArabic1 = 16,
        tomListNumberedArabic2 = 17,
        tomListNumberedHebrew = 18,
        tomListNumberedThaiAlpha = 19,
        tomListNumberedThaiNum = 20,
        tomListNumberedHindiAlpha = 21,
        tomListNumberedHindiAlpha1 = 22,
        tomListNumberedHindiNum = 23,
        tomListParentheses = 0x10000,
        tomListPeriod = 0x20000,
        tomListPlain = 0x30000,
        tomListNoNumber = 0x40000,
        tomListMinus = 0x80000,
        tomIgnoreNumberStyle = 0x1000000,
        tomParaStyleNormal = -1,
        tomParaStyleHeading1 = -2,
        tomParaStyleHeading2 = -3,
        tomParaStyleHeading3 = -4,
        tomParaStyleHeading4 = -5,
        tomParaStyleHeading5 = -6,
        tomParaStyleHeading6 = -7,
        tomParaStyleHeading7 = -8,
        tomParaStyleHeading8 = -9,
        tomParaStyleHeading9 = -10,
        tomCharacter = 1,
        tomWord = 2,
        tomSentence = 3,
        tomParagraph = 4,
        tomLine = 5,
        tomStory = 6,
        tomScreen = 7,
        tomSection = 8,
        tomTableColumn = 9,
        tomColumn = 9,
        tomRow = 10,
        tomWindow = 11,
        tomCell = 12,
        tomCharFormat = 13,
        tomParaFormat = 14,
        tomTable = 15,
        tomObject = 16,
        tomPage = 17,
        tomHardParagraph = 18,
        tomCluster = 19,
        tomInlineObject = 20,
        tomInlineObjectArg = 21,
        tomLeafLine = 22,
        tomLayoutColumn = 23,
        tomProcessId = 0x40000001,
        tomMatchWord = 2,
        tomMatchCase = 4,
        tomMatchPattern = 8,
        tomUnknownStory = 0,
        tomMainTextStory = 1,
        tomFootnotesStory = 2,
        tomEndnotesStory = 3,
        tomCommentsStory = 4,
        tomTextFrameStory = 5,
        tomEvenPagesHeaderStory = 6,
        tomPrimaryHeaderStory = 7,
        tomEvenPagesFooterStory = 8,
        tomPrimaryFooterStory = 9,
        tomFirstPageHeaderStory = 10,
        tomFirstPageFooterStory = 11,
        tomScratchStory = 127,
        tomFindStory = 128,
        tomReplaceStory = 129,
        tomStoryInactive = 0,
        tomStoryActiveDisplay = 1,
        tomStoryActiveUI = 2,
        tomStoryActiveDisplayUI = 3,
        tomNoAnimation = 0,
        tomLasVegasLights = 1,
        tomBlinkingBackground = 2,
        tomSparkleText = 3,
        tomMarchingBlackAnts = 4,
        tomMarchingRedAnts = 5,
        tomShimmer = 6,
        tomWipeDown = 7,
        tomWipeRight = 8,
        tomAnimationMax = 8,
        tomLowerCase = 0,
        tomUpperCase = 1,
        tomTitleCase = 2,
        tomSentenceCase = 4,
        tomToggleCase = 5,
        tomReadOnly = 0x100,
        tomShareDenyRead = 0x200,
        tomShareDenyWrite = 0x400,
        tomPasteFile = 0x1000,
        tomCreateNew = 0x10,
        tomCreateAlways = 0x20,
        tomOpenExisting = 0x30,
        tomOpenAlways = 0x40,
        tomTruncateExisting = 0x50,
        tomRTF = 0x1,
        tomText = 0x2,
        tomHTML = 0x3,
        tomWordDocument = 0x4,
        tomBold = 0x80000001,
        tomItalic = 0x80000002,
        tomUnderline = 0x80000004,
        tomStrikeout = 0x80000008,
        tomProtected = 0x80000010,
        tomLink = 0x80000020,
        tomSmallCaps = 0x80000040,
        tomAllCaps = 0x80000080,
        tomHidden = 0x80000100,
        tomOutline = 0x80000200,
        tomShadow = 0x80000400,
        tomEmboss = 0x80000800,
        tomImprint = 0x80001000,
        tomDisabled = 0x80002000,
        tomRevised = 0x80004000,
        tomSubscriptCF = 0x80010000,
        tomSuperscriptCF = 0x80020000,
        tomFontBound = 0x80100000,
        tomLinkProtected = 0x80800000,
        tomInlineObjectStart = 0x81000000,
        tomExtendedChar = 0x82000000,
        tomAutoBackColor = 0x84000000,
        tomMathZoneNoBuildUp = 0x88000000,
        tomMathZone = 0x90000000,
        tomMathZoneOrdinary = 0xa0000000,
        tomAutoTextColor = 0xc0000000,
        tomMathZoneDisplay = 0x40000,
        tomParaEffectRTL = 0x1,
        tomParaEffectKeep = 0x2,
        tomParaEffectKeepNext = 0x4,
        tomParaEffectPageBreakBefore = 0x8,
        tomParaEffectNoLineNumber = 0x10,
        tomParaEffectNoWidowControl = 0x20,
        tomParaEffectDoNotHyphen = 0x40,
        tomParaEffectSideBySide = 0x80,
        tomParaEffectCollapsed = 0x100,
        tomParaEffectOutlineLevel = 0x200,
        tomParaEffectBox = 0x400,
        tomParaEffectTableRowDelimiter = 0x1000,
        tomParaEffectTable = 0x4000,
        tomModWidthPairs = 0x1,
        tomModWidthSpace = 0x2,
        tomAutoSpaceAlpha = 0x4,
        tomAutoSpaceNumeric = 0x8,
        tomAutoSpaceParens = 0x10,
        tomEmbeddedFont = 0x20,
        tomDoublestrike = 0x40,
        tomOverlapping = 0x80,
        tomNormalCaret = 0,
        tomKoreanBlockCaret = 0x1,
        tomNullCaret = 0x2,
        tomIncludeInset = 0x1,
        tomUnicodeBiDi = 0x1,
        tomMathCFCheck = 0x4,
        tomUnlink = 0x8,
        tomUnhide = 0x10,
        tomCheckTextLimit = 0x20,
        tomIgnoreCurrentFont = 0,
        tomMatchCharRep = 0x1,
        tomMatchFontSignature = 0x2,
        tomMatchAscii = 0x4,
        tomGetHeightOnly = 0x8,
        tomMatchMathFont = 0x10,
        tomCharset = 0x80000000,
        tomCharRepFromLcid = 0x40000000,
        tomAnsi = 0,
        tomEastEurope = 1,
        tomCyrillic = 2,
        tomGreek = 3,
        tomTurkish = 4,
        tomHebrew = 5,
        tomArabic = 6,
        tomBaltic = 7,
        tomVietnamese = 8,
        tomDefaultCharRep = 9,
        tomSymbol = 10,
        tomThai = 11,
        tomShiftJIS = 12,
        tomGB2312 = 13,
        tomHangul = 14,
        tomBIG5 = 15,
        tomPC437 = 16,
        tomOEM = 17,
        tomMac = 18,
        tomArmenian = 19,
        tomSyriac = 20,
        tomThaana = 21,
        tomDevanagari = 22,
        tomBengali = 23,
        tomGurmukhi = 24,
        tomGujarati = 25,
        tomOriya = 26,
        tomTamil = 27,
        tomTelugu = 28,
        tomKannada = 29,
        tomMalayalam = 30,
        tomSinhala = 31,
        tomLao = 32,
        tomTibetan = 33,
        tomMyanmar = 34,
        tomGeorgian = 35,
        tomJamo = 36,
        tomEthiopic = 37,
        tomCherokee = 38,
        tomAboriginal = 39,
        tomOgham = 40,
        tomRunic = 41,
        tomKhmer = 42,
        tomMongolian = 43,
        tomBraille = 44,
        tomYi = 45,
        tomLimbu = 46,
        tomTaiLe = 47,
        tomNewTaiLue = 48,
        tomSylotiNagri = 49,
        tomKharoshthi = 50,
        tomKayahli = 51,
        tomUsymbol = 52,
        tomEmoji = 53,
        tomGlagolitic = 54,
        tomLisu = 55,
        tomVai = 56,
        tomNKo = 57,
        tomOsmanya = 58,
        tomPhagsPa = 59,
        tomGothic = 60,
        tomDeseret = 61,
        tomTifinagh = 62,
        tomCharRepMax = 63,
        tomRE10Mode = 0x1,
        tomUseAtFont = 0x2,
        tomTextFlowMask = 0xc,
        tomTextFlowES = 0,
        tomTextFlowSW = 0x4,
        tomTextFlowWN = 0x8,
        tomTextFlowNE = 0xc,
        tomNoIME = 0x80000,
        tomSelfIME = 0x40000,
        tomNoUpScroll = 0x10000,
        tomNoVpScroll = 0x40000,
        tomNoLink = 0,
        tomClientLink = 1,
        tomFriendlyLinkName = 2,
        tomFriendlyLinkAddress = 3,
        tomAutoLinkURL = 4,
        tomAutoLinkEmail = 5,
        tomAutoLinkPhone = 6,
        tomAutoLinkPath = 7,
        tomCompressNone = 0,
        tomCompressPunctuation = 1,
        tomCompressPunctuationAndKana = 2,
        tomCompressMax = 2,
        tomUnderlinePositionAuto = 0,
        tomUnderlinePositionBelow = 1,
        tomUnderlinePositionAbove = 2,
        tomUnderlinePositionMax = 2,
        tomFontAlignmentAuto = 0,
        tomFontAlignmentTop = 1,
        tomFontAlignmentBaseline = 2,
        tomFontAlignmentBottom = 3,
        tomFontAlignmentCenter = 4,
        tomFontAlignmentMax = 4,
        tomRubyBelow = 0x80,
        tomRubyAlignCenter = 0,
        tomRubyAlign010 = 1,
        tomRubyAlign121 = 2,
        tomRubyAlignLeft = 3,
        tomRubyAlignRight = 4,
        tomLimitsDefault = 0,
        tomLimitsUnderOver = 1,
        tomLimitsSubSup = 2,
        tomUpperLimitAsSuperScript = 3,
        tomLimitsOpposite = 4,
        tomShowLLimPlaceHldr = 8,
        tomShowULimPlaceHldr = 16,
        tomDontGrowWithContent = 64,
        tomGrowWithContent = 128,
        tomSubSupAlign = 1,
        tomLimitAlignMask = 3,
        tomLimitAlignCenter = 0,
        tomLimitAlignLeft = 1,
        tomLimitAlignRight = 2,
        tomShowDegPlaceHldr = 8,
        tomAlignDefault = 0,
        tomAlignMatchAscentDescent = 2,
        tomMathVariant = 0x20,
        tomStyleDefault = 0,
        tomStyleScriptScriptCramped = 1,
        tomStyleScriptScript = 2,
        tomStyleScriptCramped = 3,
        tomStyleScript = 4,
        tomStyleTextCramped = 5,
        tomStyleText = 6,
        tomStyleDisplayCramped = 7,
        tomStyleDisplay = 8,
        tomMathRelSize = 0x40,
        tomDecDecSize = 0xfe,
        tomDecSize = 0xff,
        tomIncSize = ( 1 | tomMathRelSize ) ,
        tomIncIncSize = ( 2 | tomMathRelSize ) ,
        tomGravityUI = 0,
        tomGravityBack = 1,
        tomGravityFore = 2,
        tomGravityIn = 3,
        tomGravityOut = 4,
        tomGravityBackward = 0x20000000,
        tomGravityForward = 0x40000000,
        tomAdjustCRLF = 1,
        tomUseCRLF = 2,
        tomTextize = 4,
        tomAllowFinalEOP = 8,
        tomFoldMathAlpha = 16,
        tomNoHidden = 32,
        tomIncludeNumbering = 64,
        tomTranslateTableCell = 128,
        tomNoMathZoneBrackets = 0x100,
        tomConvertMathChar = 0x200,
        tomNoUCGreekItalic = 0x400,
        tomAllowMathBold = 0x800,
        tomLanguageTag = 0x1000,
        tomConvertRTF = 0x2000,
        tomApplyRtfDocProps = 0x4000,
        tomPhantomShow = 1,
        tomPhantomZeroWidth = 2,
        tomPhantomZeroAscent = 4,
        tomPhantomZeroDescent = 8,
        tomPhantomTransparent = 16,
        tomPhantomASmash = ( tomPhantomShow | tomPhantomZeroAscent ) ,
        tomPhantomDSmash = ( tomPhantomShow | tomPhantomZeroDescent ) ,
        tomPhantomHSmash = ( tomPhantomShow | tomPhantomZeroWidth ) ,
        tomPhantomSmash = ( ( tomPhantomShow | tomPhantomZeroAscent ) | tomPhantomZeroDescent ) ,
        tomPhantomHorz = ( tomPhantomZeroAscent | tomPhantomZeroDescent ) ,
        tomPhantomVert = tomPhantomZeroWidth,
        tomBoxHideTop = 1,
        tomBoxHideBottom = 2,
        tomBoxHideLeft = 4,
        tomBoxHideRight = 8,
        tomBoxStrikeH = 16,
        tomBoxStrikeV = 32,
        tomBoxStrikeTLBR = 64,
        tomBoxStrikeBLTR = 128,
        tomBoxAlignCenter = 1,
        tomSpaceMask = 0x1c,
        tomSpaceDefault = 0,
        tomSpaceUnary = 4,
        tomSpaceBinary = 8,
        tomSpaceRelational = 12,
        tomSpaceSkip = 16,
        tomSpaceOrd = 20,
        tomSpaceDifferential = 24,
        tomSizeText = 32,
        tomSizeScript = 64,
        tomSizeScriptScript = 96,
        tomNoBreak = 128,
        tomTransparentForPositioning = 256,
        tomTransparentForSpacing = 512,
        tomStretchCharBelow = 0,
        tomStretchCharAbove = 1,
        tomStretchBaseBelow = 2,
        tomStretchBaseAbove = 3,
        tomMatrixAlignMask = 3,
        tomMatrixAlignCenter = 0,
        tomMatrixAlignTopRow = 1,
        tomMatrixAlignBottomRow = 3,
        tomShowMatPlaceHldr = 8,
        tomEqArrayLayoutWidth = 1,
        tomEqArrayAlignMask = 0xc,
        tomEqArrayAlignCenter = 0,
        tomEqArrayAlignTopRow = 4,
        tomEqArrayAlignBottomRow = 0xc,
        tomMathManualBreakMask = 0x7f,
        tomMathBreakLeft = 0x7d,
        tomMathBreakCenter = 0x7e,
        tomMathBreakRight = 0x7f,
        tomMathEqAlign = 0x80,
        tomMathArgShadingStart = 0x251,
        tomMathArgShadingEnd = 0x252,
        tomMathObjShadingStart = 0x253,
        tomMathObjShadingEnd = 0x254,
        tomFunctionTypeNone = 0,
        tomFunctionTypeTakesArg = 1,
        tomFunctionTypeTakesLim = 2,
        tomFunctionTypeTakesLim2 = 3,
        tomFunctionTypeIsLim = 4,
        tomMathParaAlignDefault = 0,
        tomMathParaAlignCenterGroup = 1,
        tomMathParaAlignCenter = 2,
        tomMathParaAlignLeft = 3,
        tomMathParaAlignRight = 4,
        tomMathDispAlignMask = 3,
        tomMathDispAlignCenterGroup = 0,
        tomMathDispAlignCenter = 1,
        tomMathDispAlignLeft = 2,
        tomMathDispAlignRight = 3,
        tomMathDispIntUnderOver = 4,
        tomMathDispFracTeX = 8,
        tomMathDispNaryGrow = 0x10,
        tomMathDocEmptyArgMask = 0x60,
        tomMathDocEmptyArgAuto = 0,
        tomMathDocEmptyArgAlways = 0x20,
        tomMathDocEmptyArgNever = 0x40,
        tomMathDocSbSpOpUnchanged = 0x80,
        tomMathDocDiffMask = 0x300,
        tomMathDocDiffDefault = 0,
        tomMathDocDiffUpright = 0x100,
        tomMathDocDiffItalic = 0x200,
        tomMathDocDiffOpenItalic = 0x300,
        tomMathDispNarySubSup = 0x400,
        tomMathDispDef = 0x800,
        tomMathEnableRtl = 0x1000,
        tomMathBrkBinMask = 0x30000,
        tomMathBrkBinBefore = 0,
        tomMathBrkBinAfter = 0x10000,
        tomMathBrkBinDup = 0x20000,
        tomMathBrkBinSubMask = 0xc0000,
        tomMathBrkBinSubMM = 0,
        tomMathBrkBinSubPM = 0x40000,
        tomMathBrkBinSubMP = 0x80000,
        tomSelRange = 0x255,
        tomHstring = 0x254,
        tomFontPropTeXStyle = 0x33c,
        tomFontPropAlign = 0x33d,
        tomFontStretch = 0x33e,
        tomFontStyle = 0x33f,
        tomFontStyleUpright = 0,
        tomFontStyleOblique = 1,
        tomFontStyleItalic = 2,
        tomFontStretchDefault = 0,
        tomFontStretchUltraCondensed = 1,
        tomFontStretchExtraCondensed = 2,
        tomFontStretchCondensed = 3,
        tomFontStretchSemiCondensed = 4,
        tomFontStretchNormal = 5,
        tomFontStretchSemiExpanded = 6,
        tomFontStretchExpanded = 7,
        tomFontStretchExtraExpanded = 8,
        tomFontStretchUltraExpanded = 9,
        tomFontWeightDefault = 0,
        tomFontWeightThin = 100,
        tomFontWeightExtraLight = 200,
        tomFontWeightLight = 300,
        tomFontWeightNormal = 400,
        tomFontWeightRegular = 400,
        tomFontWeightMedium = 500,
        tomFontWeightSemiBold = 600,
        tomFontWeightBold = 700,
        tomFontWeightExtraBold = 800,
        tomFontWeightBlack = 900,
        tomFontWeightHeavy = 900,
        tomFontWeightExtraBlack = 950,
        tomParaPropMathAlign = 0x437,
        tomDocMathBuild = 0x80,
        tomMathLMargin = 0x81,
        tomMathRMargin = 0x82,
        tomMathWrapIndent = 0x83,
        tomMathWrapRight = 0x84,
        tomMathPostSpace = 0x86,
        tomMathPreSpace = 0x85,
        tomMathInterSpace = 0x87,
        tomMathIntraSpace = 0x88,
        tomCanCopy = 0x89,
        tomCanRedo = 0x8a,
        tomCanUndo = 0x8b,
        tomUndoLimit = 0x8c,
        tomDocAutoLink = 0x8d,
        tomEllipsisMode = 0x8e,
        tomEllipsisState = 0x8f,
        tomEllipsisNone = 0,
        tomEllipsisEnd = 1,
        tomEllipsisWord = 3,
        tomEllipsisPresent = 1,
        tomVTopCell = 1,
        tomVLowCell = 2,
        tomHStartCell = 4,
        tomHContCell = 8,
        tomRowUpdate = 1,
        tomRowApplyDefault = 0,
        tomCellStructureChangeOnly = 1,
        tomRowHeightActual = 0x80b
    } tomConstants;
typedef
enum __MIDL___MIDL_itf_tom_0000_0000_0002
    {
        tomSimpleText = 0,
        tomRuby = ( tomSimpleText + 1 ) ,
        tomHorzVert = ( tomRuby + 1 ) ,
        tomWarichu = ( tomHorzVert + 1 ) ,
        tomEq = 9,
        tomMath = 10,
        tomAccent = tomMath,
        tomBox = ( tomAccent + 1 ) ,
        tomBoxedFormula = ( tomBox + 1 ) ,
        tomBrackets = ( tomBoxedFormula + 1 ) ,
        tomBracketsWithSeps = ( tomBrackets + 1 ) ,
        tomEquationArray = ( tomBracketsWithSeps + 1 ) ,
        tomFraction = ( tomEquationArray + 1 ) ,
        tomFunctionApply = ( tomFraction + 1 ) ,
        tomLeftSubSup = ( tomFunctionApply + 1 ) ,
        tomLowerLimit = ( tomLeftSubSup + 1 ) ,
        tomMatrix = ( tomLowerLimit + 1 ) ,
        tomNary = ( tomMatrix + 1 ) ,
        tomOpChar = ( tomNary + 1 ) ,
        tomOverbar = ( tomOpChar + 1 ) ,
        tomPhantom = ( tomOverbar + 1 ) ,
        tomRadical = ( tomPhantom + 1 ) ,
        tomSlashedFraction = ( tomRadical + 1 ) ,
        tomStack = ( tomSlashedFraction + 1 ) ,
        tomStretchStack = ( tomStack + 1 ) ,
        tomSubscript = ( tomStretchStack + 1 ) ,
        tomSubSup = ( tomSubscript + 1 ) ,
        tomSuperscript = ( tomSubSup + 1 ) ,
        tomUnderbar = ( tomSuperscript + 1 ) ,
        tomUpperLimit = ( tomUnderbar + 1 ) ,
        tomObjectMax = tomUpperLimit
    } OBJECTTYPE;
typedef
enum __MIDL___MIDL_itf_tom_0000_0000_0003
    {
        MBOLD = 0x10,
        MITAL = 0x20,
        MGREEK = 0x40,
        MROMN = 0,
        MSCRP = 1,
        MFRAK = 2,
        MOPEN = 3,
        MSANS = 4,
        MMONO = 5,
        MMATH = 6,
        MISOL = 7,
        MINIT = 8,
        MTAIL = 9,
        MSTRCH = 10,
        MLOOP = 11,
        MOPENA = 12
    } MANCODE;
EXTERN_C const IID LIBID_tom;
EXTERN_C const IID IID_ITextDocument;
    typedef struct ITextDocumentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextDocument * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextDocument * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextDocument * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITextDocument * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITextDocument * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITextDocument * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITextDocument * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in ITextDocument * This,
                                __RPC__deref_out_opt BSTR *pName);
                            HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            __RPC__in ITextDocument * This,
                                __RPC__deref_out_opt ITextSelection **ppSel);
                            HRESULT ( STDMETHODCALLTYPE *GetStoryCount )(
            __RPC__in ITextDocument * This,
                                __RPC__out long *pCount);
                            HRESULT ( STDMETHODCALLTYPE *GetStoryRanges )(
            __RPC__in ITextDocument * This,
                                __RPC__deref_out_opt ITextStoryRanges **ppStories);
                            HRESULT ( STDMETHODCALLTYPE *GetSaved )(
            __RPC__in ITextDocument * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSaved )(
            __RPC__in ITextDocument * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetDefaultTabStop )(
            __RPC__in ITextDocument * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetDefaultTabStop )(
            __RPC__in ITextDocument * This,
                       float Value);
                   HRESULT ( STDMETHODCALLTYPE *New )(
            __RPC__in ITextDocument * This);
                   HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in ITextDocument * This,
                       __RPC__in VARIANT *pVar,
                       long Flags,
                       long CodePage);
                   HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in ITextDocument * This,
                       __RPC__in VARIANT *pVar,
                       long Flags,
                       long CodePage);
                   HRESULT ( STDMETHODCALLTYPE *Freeze )(
            __RPC__in ITextDocument * This,
                                __RPC__out long *pCount);
                   HRESULT ( STDMETHODCALLTYPE *Unfreeze )(
            __RPC__in ITextDocument * This,
                                __RPC__out long *pCount);
                   HRESULT ( STDMETHODCALLTYPE *BeginEditCollection )(
            __RPC__in ITextDocument * This);
                   HRESULT ( STDMETHODCALLTYPE *EndEditCollection )(
            __RPC__in ITextDocument * This);
                   HRESULT ( STDMETHODCALLTYPE *Undo )(
            __RPC__in ITextDocument * This,
                       long Count,
                                __RPC__out long *pCount);
                   HRESULT ( STDMETHODCALLTYPE *Redo )(
            __RPC__in ITextDocument * This,
                       long Count,
                                __RPC__out long *pCount);
                   HRESULT ( STDMETHODCALLTYPE *Range )(
            __RPC__in ITextDocument * This,
                       long cpActive,
                       long cpAnchor,
                                __RPC__deref_out_opt ITextRange **ppRange);
                   HRESULT ( STDMETHODCALLTYPE *RangeFromPoint )(
            __RPC__in ITextDocument * This,
                       long x,
                       long y,
                                __RPC__deref_out_opt ITextRange **ppRange);
        END_INTERFACE
    } ITextDocumentVtbl;
    interface ITextDocument
    {
        CONST_VTBL struct ITextDocumentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetName(This,pName) )
    ( (This)->lpVtbl -> GetSelection(This,ppSel) )
    ( (This)->lpVtbl -> GetStoryCount(This,pCount) )
    ( (This)->lpVtbl -> GetStoryRanges(This,ppStories) )
    ( (This)->lpVtbl -> GetSaved(This,pValue) )
    ( (This)->lpVtbl -> SetSaved(This,Value) )
    ( (This)->lpVtbl -> GetDefaultTabStop(This,pValue) )
    ( (This)->lpVtbl -> SetDefaultTabStop(This,Value) )
    ( (This)->lpVtbl -> New(This) )
    ( (This)->lpVtbl -> Open(This,pVar,Flags,CodePage) )
    ( (This)->lpVtbl -> Save(This,pVar,Flags,CodePage) )
    ( (This)->lpVtbl -> Freeze(This,pCount) )
    ( (This)->lpVtbl -> Unfreeze(This,pCount) )
    ( (This)->lpVtbl -> BeginEditCollection(This) )
    ( (This)->lpVtbl -> EndEditCollection(This) )
    ( (This)->lpVtbl -> Undo(This,Count,pCount) )
    ( (This)->lpVtbl -> Redo(This,Count,pCount) )
    ( (This)->lpVtbl -> Range(This,cpActive,cpAnchor,ppRange) )
    ( (This)->lpVtbl -> RangeFromPoint(This,x,y,ppRange) )
EXTERN_C const IID IID_ITextRange;
    typedef struct ITextRangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextRange * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextRange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextRange * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITextRange * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITextRange * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITextRange * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITextRange * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in ITextRange * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                            HRESULT ( STDMETHODCALLTYPE *SetText )(
            __RPC__in ITextRange * This,
                       __RPC__in BSTR bstr);
                            HRESULT ( STDMETHODCALLTYPE *GetChar )(
            __RPC__in ITextRange * This,
                                __RPC__out long *pChar);
                            HRESULT ( STDMETHODCALLTYPE *SetChar )(
            __RPC__in ITextRange * This,
                       long Char);
                            HRESULT ( STDMETHODCALLTYPE *GetDuplicate )(
            __RPC__in ITextRange * This,
                                __RPC__deref_out_opt ITextRange **ppRange);
                            HRESULT ( STDMETHODCALLTYPE *GetFormattedText )(
            __RPC__in ITextRange * This,
                                __RPC__deref_out_opt ITextRange **ppRange);
                            HRESULT ( STDMETHODCALLTYPE *SetFormattedText )(
            __RPC__in ITextRange * This,
                       __RPC__in_opt ITextRange *pRange);
                            HRESULT ( STDMETHODCALLTYPE *GetStart )(
            __RPC__in ITextRange * This,
                                __RPC__out long *pcpFirst);
                            HRESULT ( STDMETHODCALLTYPE *SetStart )(
            __RPC__in ITextRange * This,
                       long cpFirst);
                            HRESULT ( STDMETHODCALLTYPE *GetEnd )(
            __RPC__in ITextRange * This,
                                __RPC__out long *pcpLim);
                            HRESULT ( STDMETHODCALLTYPE *SetEnd )(
            __RPC__in ITextRange * This,
                       long cpLim);
                            HRESULT ( STDMETHODCALLTYPE *GetFont )(
            __RPC__in ITextRange * This,
                                __RPC__deref_out_opt ITextFont **ppFont);
                            HRESULT ( STDMETHODCALLTYPE *SetFont )(
            __RPC__in ITextRange * This,
                       __RPC__in_opt ITextFont *pFont);
                            HRESULT ( STDMETHODCALLTYPE *GetPara )(
            __RPC__in ITextRange * This,
                                __RPC__deref_out_opt ITextPara **ppPara);
                            HRESULT ( STDMETHODCALLTYPE *SetPara )(
            __RPC__in ITextRange * This,
                       __RPC__in_opt ITextPara *pPara);
                            HRESULT ( STDMETHODCALLTYPE *GetStoryLength )(
            __RPC__in ITextRange * This,
                                __RPC__out long *pCount);
                            HRESULT ( STDMETHODCALLTYPE *GetStoryType )(
            __RPC__in ITextRange * This,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *Collapse )(
            __RPC__in ITextRange * This,
                       long bStart);
                   HRESULT ( STDMETHODCALLTYPE *Expand )(
            __RPC__in ITextRange * This,
                       long Unit,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *GetIndex )(
            __RPC__in ITextRange * This,
                       long Unit,
                                __RPC__out long *pIndex);
                   HRESULT ( STDMETHODCALLTYPE *SetIndex )(
            __RPC__in ITextRange * This,
                       long Unit,
                       long Index,
                       long Extend);
                   HRESULT ( STDMETHODCALLTYPE *SetRange )(
            __RPC__in ITextRange * This,
                       long cpAnchor,
                       long cpActive);
                   HRESULT ( STDMETHODCALLTYPE *InRange )(
            __RPC__in ITextRange * This,
                       __RPC__in_opt ITextRange *pRange,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *InStory )(
            __RPC__in ITextRange * This,
                       __RPC__in_opt ITextRange *pRange,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            __RPC__in ITextRange * This,
                       __RPC__in_opt ITextRange *pRange,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *Select )(
            __RPC__in ITextRange * This);
                   HRESULT ( STDMETHODCALLTYPE *StartOf )(
            __RPC__in ITextRange * This,
                       long Unit,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *EndOf )(
            __RPC__in ITextRange * This,
                       long Unit,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in ITextRange * This,
                       long Unit,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveStart )(
            __RPC__in ITextRange * This,
                       long Unit,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveEnd )(
            __RPC__in ITextRange * This,
                       long Unit,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveWhile )(
            __RPC__in ITextRange * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveStartWhile )(
            __RPC__in ITextRange * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveEndWhile )(
            __RPC__in ITextRange * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveUntil )(
            __RPC__in ITextRange * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveStartUntil )(
            __RPC__in ITextRange * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveEndUntil )(
            __RPC__in ITextRange * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *FindText )(
            __RPC__in ITextRange * This,
                       __RPC__in BSTR bstr,
                       long Count,
                       long Flags,
                                __RPC__out long *pLength);
                   HRESULT ( STDMETHODCALLTYPE *FindTextStart )(
            __RPC__in ITextRange * This,
                       __RPC__in BSTR bstr,
                       long Count,
                       long Flags,
                                __RPC__out long *pLength);
                   HRESULT ( STDMETHODCALLTYPE *FindTextEnd )(
            __RPC__in ITextRange * This,
                       __RPC__in BSTR bstr,
                       long Count,
                       long Flags,
                                __RPC__out long *pLength);
                   HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ITextRange * This,
                       long Unit,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *Cut )(
            __RPC__in ITextRange * This,
                        __RPC__out VARIANT *pVar);
                   HRESULT ( STDMETHODCALLTYPE *Copy )(
            __RPC__in ITextRange * This,
                        __RPC__out VARIANT *pVar);
                   HRESULT ( STDMETHODCALLTYPE *Paste )(
            __RPC__in ITextRange * This,
                       __RPC__in VARIANT *pVar,
                       long Format);
                   HRESULT ( STDMETHODCALLTYPE *CanPaste )(
            __RPC__in ITextRange * This,
                       __RPC__in VARIANT *pVar,
                       long Format,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *CanEdit )(
            __RPC__in ITextRange * This,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *ChangeCase )(
            __RPC__in ITextRange * This,
                       long Type);
                   HRESULT ( STDMETHODCALLTYPE *GetPoint )(
            __RPC__in ITextRange * This,
                       long Type,
                        __RPC__out long *px,
                        __RPC__out long *py);
                   HRESULT ( STDMETHODCALLTYPE *SetPoint )(
            __RPC__in ITextRange * This,
                       long x,
                       long y,
                       long Type,
                       long Extend);
                   HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )(
            __RPC__in ITextRange * This,
                       long Value);
                   HRESULT ( STDMETHODCALLTYPE *GetEmbeddedObject )(
            __RPC__in ITextRange * This,
                                __RPC__deref_out_opt IUnknown **ppObject);
        END_INTERFACE
    } ITextRangeVtbl;
    interface ITextRange
    {
        CONST_VTBL struct ITextRangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetText(This,pbstr) )
    ( (This)->lpVtbl -> SetText(This,bstr) )
    ( (This)->lpVtbl -> GetChar(This,pChar) )
    ( (This)->lpVtbl -> SetChar(This,Char) )
    ( (This)->lpVtbl -> GetDuplicate(This,ppRange) )
    ( (This)->lpVtbl -> GetFormattedText(This,ppRange) )
    ( (This)->lpVtbl -> SetFormattedText(This,pRange) )
    ( (This)->lpVtbl -> GetStart(This,pcpFirst) )
    ( (This)->lpVtbl -> SetStart(This,cpFirst) )
    ( (This)->lpVtbl -> GetEnd(This,pcpLim) )
    ( (This)->lpVtbl -> SetEnd(This,cpLim) )
    ( (This)->lpVtbl -> GetFont(This,ppFont) )
    ( (This)->lpVtbl -> SetFont(This,pFont) )
    ( (This)->lpVtbl -> GetPara(This,ppPara) )
    ( (This)->lpVtbl -> SetPara(This,pPara) )
    ( (This)->lpVtbl -> GetStoryLength(This,pCount) )
    ( (This)->lpVtbl -> GetStoryType(This,pValue) )
    ( (This)->lpVtbl -> Collapse(This,bStart) )
    ( (This)->lpVtbl -> Expand(This,Unit,pDelta) )
    ( (This)->lpVtbl -> GetIndex(This,Unit,pIndex) )
    ( (This)->lpVtbl -> SetIndex(This,Unit,Index,Extend) )
    ( (This)->lpVtbl -> SetRange(This,cpAnchor,cpActive) )
    ( (This)->lpVtbl -> InRange(This,pRange,pValue) )
    ( (This)->lpVtbl -> InStory(This,pRange,pValue) )
    ( (This)->lpVtbl -> IsEqual(This,pRange,pValue) )
    ( (This)->lpVtbl -> Select(This) )
    ( (This)->lpVtbl -> StartOf(This,Unit,Extend,pDelta) )
    ( (This)->lpVtbl -> EndOf(This,Unit,Extend,pDelta) )
    ( (This)->lpVtbl -> Move(This,Unit,Count,pDelta) )
    ( (This)->lpVtbl -> MoveStart(This,Unit,Count,pDelta) )
    ( (This)->lpVtbl -> MoveEnd(This,Unit,Count,pDelta) )
    ( (This)->lpVtbl -> MoveWhile(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveStartWhile(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveEndWhile(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveUntil(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveStartUntil(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveEndUntil(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> FindText(This,bstr,Count,Flags,pLength) )
    ( (This)->lpVtbl -> FindTextStart(This,bstr,Count,Flags,pLength) )
    ( (This)->lpVtbl -> FindTextEnd(This,bstr,Count,Flags,pLength) )
    ( (This)->lpVtbl -> Delete(This,Unit,Count,pDelta) )
    ( (This)->lpVtbl -> Cut(This,pVar) )
    ( (This)->lpVtbl -> Copy(This,pVar) )
    ( (This)->lpVtbl -> Paste(This,pVar,Format) )
    ( (This)->lpVtbl -> CanPaste(This,pVar,Format,pValue) )
    ( (This)->lpVtbl -> CanEdit(This,pValue) )
    ( (This)->lpVtbl -> ChangeCase(This,Type) )
    ( (This)->lpVtbl -> GetPoint(This,Type,px,py) )
    ( (This)->lpVtbl -> SetPoint(This,x,y,Type,Extend) )
    ( (This)->lpVtbl -> ScrollIntoView(This,Value) )
    ( (This)->lpVtbl -> GetEmbeddedObject(This,ppObject) )
EXTERN_C const IID IID_ITextSelection;
    typedef struct ITextSelectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextSelection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextSelection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextSelection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITextSelection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITextSelection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITextSelection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITextSelection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in ITextSelection * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                            HRESULT ( STDMETHODCALLTYPE *SetText )(
            __RPC__in ITextSelection * This,
                       __RPC__in BSTR bstr);
                            HRESULT ( STDMETHODCALLTYPE *GetChar )(
            __RPC__in ITextSelection * This,
                                __RPC__out long *pChar);
                            HRESULT ( STDMETHODCALLTYPE *SetChar )(
            __RPC__in ITextSelection * This,
                       long Char);
                            HRESULT ( STDMETHODCALLTYPE *GetDuplicate )(
            __RPC__in ITextSelection * This,
                                __RPC__deref_out_opt ITextRange **ppRange);
                            HRESULT ( STDMETHODCALLTYPE *GetFormattedText )(
            __RPC__in ITextSelection * This,
                                __RPC__deref_out_opt ITextRange **ppRange);
                            HRESULT ( STDMETHODCALLTYPE *SetFormattedText )(
            __RPC__in ITextSelection * This,
                       __RPC__in_opt ITextRange *pRange);
                            HRESULT ( STDMETHODCALLTYPE *GetStart )(
            __RPC__in ITextSelection * This,
                                __RPC__out long *pcpFirst);
                            HRESULT ( STDMETHODCALLTYPE *SetStart )(
            __RPC__in ITextSelection * This,
                       long cpFirst);
                            HRESULT ( STDMETHODCALLTYPE *GetEnd )(
            __RPC__in ITextSelection * This,
                                __RPC__out long *pcpLim);
                            HRESULT ( STDMETHODCALLTYPE *SetEnd )(
            __RPC__in ITextSelection * This,
                       long cpLim);
                            HRESULT ( STDMETHODCALLTYPE *GetFont )(
            __RPC__in ITextSelection * This,
                                __RPC__deref_out_opt ITextFont **ppFont);
                            HRESULT ( STDMETHODCALLTYPE *SetFont )(
            __RPC__in ITextSelection * This,
                       __RPC__in_opt ITextFont *pFont);
                            HRESULT ( STDMETHODCALLTYPE *GetPara )(
            __RPC__in ITextSelection * This,
                                __RPC__deref_out_opt ITextPara **ppPara);
                            HRESULT ( STDMETHODCALLTYPE *SetPara )(
            __RPC__in ITextSelection * This,
                       __RPC__in_opt ITextPara *pPara);
                            HRESULT ( STDMETHODCALLTYPE *GetStoryLength )(
            __RPC__in ITextSelection * This,
                                __RPC__out long *pCount);
                            HRESULT ( STDMETHODCALLTYPE *GetStoryType )(
            __RPC__in ITextSelection * This,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *Collapse )(
            __RPC__in ITextSelection * This,
                       long bStart);
                   HRESULT ( STDMETHODCALLTYPE *Expand )(
            __RPC__in ITextSelection * This,
                       long Unit,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *GetIndex )(
            __RPC__in ITextSelection * This,
                       long Unit,
                                __RPC__out long *pIndex);
                   HRESULT ( STDMETHODCALLTYPE *SetIndex )(
            __RPC__in ITextSelection * This,
                       long Unit,
                       long Index,
                       long Extend);
                   HRESULT ( STDMETHODCALLTYPE *SetRange )(
            __RPC__in ITextSelection * This,
                       long cpAnchor,
                       long cpActive);
                   HRESULT ( STDMETHODCALLTYPE *InRange )(
            __RPC__in ITextSelection * This,
                       __RPC__in_opt ITextRange *pRange,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *InStory )(
            __RPC__in ITextSelection * This,
                       __RPC__in_opt ITextRange *pRange,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            __RPC__in ITextSelection * This,
                       __RPC__in_opt ITextRange *pRange,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *Select )(
            __RPC__in ITextSelection * This);
                   HRESULT ( STDMETHODCALLTYPE *StartOf )(
            __RPC__in ITextSelection * This,
                       long Unit,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *EndOf )(
            __RPC__in ITextSelection * This,
                       long Unit,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in ITextSelection * This,
                       long Unit,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveStart )(
            __RPC__in ITextSelection * This,
                       long Unit,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveEnd )(
            __RPC__in ITextSelection * This,
                       long Unit,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveWhile )(
            __RPC__in ITextSelection * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveStartWhile )(
            __RPC__in ITextSelection * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveEndWhile )(
            __RPC__in ITextSelection * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveUntil )(
            __RPC__in ITextSelection * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveStartUntil )(
            __RPC__in ITextSelection * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveEndUntil )(
            __RPC__in ITextSelection * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *FindText )(
            __RPC__in ITextSelection * This,
                       __RPC__in BSTR bstr,
                       long Count,
                       long Flags,
                                __RPC__out long *pLength);
                   HRESULT ( STDMETHODCALLTYPE *FindTextStart )(
            __RPC__in ITextSelection * This,
                       __RPC__in BSTR bstr,
                       long Count,
                       long Flags,
                                __RPC__out long *pLength);
                   HRESULT ( STDMETHODCALLTYPE *FindTextEnd )(
            __RPC__in ITextSelection * This,
                       __RPC__in BSTR bstr,
                       long Count,
                       long Flags,
                                __RPC__out long *pLength);
                   HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ITextSelection * This,
                       long Unit,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *Cut )(
            __RPC__in ITextSelection * This,
                        __RPC__out VARIANT *pVar);
                   HRESULT ( STDMETHODCALLTYPE *Copy )(
            __RPC__in ITextSelection * This,
                        __RPC__out VARIANT *pVar);
                   HRESULT ( STDMETHODCALLTYPE *Paste )(
            __RPC__in ITextSelection * This,
                       __RPC__in VARIANT *pVar,
                       long Format);
                   HRESULT ( STDMETHODCALLTYPE *CanPaste )(
            __RPC__in ITextSelection * This,
                       __RPC__in VARIANT *pVar,
                       long Format,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *CanEdit )(
            __RPC__in ITextSelection * This,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *ChangeCase )(
            __RPC__in ITextSelection * This,
                       long Type);
                   HRESULT ( STDMETHODCALLTYPE *GetPoint )(
            __RPC__in ITextSelection * This,
                       long Type,
                        __RPC__out long *px,
                        __RPC__out long *py);
                   HRESULT ( STDMETHODCALLTYPE *SetPoint )(
            __RPC__in ITextSelection * This,
                       long x,
                       long y,
                       long Type,
                       long Extend);
                   HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )(
            __RPC__in ITextSelection * This,
                       long Value);
                   HRESULT ( STDMETHODCALLTYPE *GetEmbeddedObject )(
            __RPC__in ITextSelection * This,
                                __RPC__deref_out_opt IUnknown **ppObject);
                            HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            __RPC__in ITextSelection * This,
                                __RPC__out long *pFlags);
                            HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            __RPC__in ITextSelection * This,
                       long Flags);
                            HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in ITextSelection * This,
                                __RPC__out long *pType);
                   HRESULT ( STDMETHODCALLTYPE *MoveLeft )(
            __RPC__in ITextSelection * This,
                       long Unit,
                       long Count,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveRight )(
            __RPC__in ITextSelection * This,
                       long Unit,
                       long Count,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveUp )(
            __RPC__in ITextSelection * This,
                       long Unit,
                       long Count,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveDown )(
            __RPC__in ITextSelection * This,
                       long Unit,
                       long Count,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *HomeKey )(
            __RPC__in ITextSelection * This,
                       long Unit,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *EndKey )(
            __RPC__in ITextSelection * This,
                       long Unit,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *TypeText )(
            __RPC__in ITextSelection * This,
                       __RPC__in BSTR bstr);
        END_INTERFACE
    } ITextSelectionVtbl;
    interface ITextSelection
    {
        CONST_VTBL struct ITextSelectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetText(This,pbstr) )
    ( (This)->lpVtbl -> SetText(This,bstr) )
    ( (This)->lpVtbl -> GetChar(This,pChar) )
    ( (This)->lpVtbl -> SetChar(This,Char) )
    ( (This)->lpVtbl -> GetDuplicate(This,ppRange) )
    ( (This)->lpVtbl -> GetFormattedText(This,ppRange) )
    ( (This)->lpVtbl -> SetFormattedText(This,pRange) )
    ( (This)->lpVtbl -> GetStart(This,pcpFirst) )
    ( (This)->lpVtbl -> SetStart(This,cpFirst) )
    ( (This)->lpVtbl -> GetEnd(This,pcpLim) )
    ( (This)->lpVtbl -> SetEnd(This,cpLim) )
    ( (This)->lpVtbl -> GetFont(This,ppFont) )
    ( (This)->lpVtbl -> SetFont(This,pFont) )
    ( (This)->lpVtbl -> GetPara(This,ppPara) )
    ( (This)->lpVtbl -> SetPara(This,pPara) )
    ( (This)->lpVtbl -> GetStoryLength(This,pCount) )
    ( (This)->lpVtbl -> GetStoryType(This,pValue) )
    ( (This)->lpVtbl -> Collapse(This,bStart) )
    ( (This)->lpVtbl -> Expand(This,Unit,pDelta) )
    ( (This)->lpVtbl -> GetIndex(This,Unit,pIndex) )
    ( (This)->lpVtbl -> SetIndex(This,Unit,Index,Extend) )
    ( (This)->lpVtbl -> SetRange(This,cpAnchor,cpActive) )
    ( (This)->lpVtbl -> InRange(This,pRange,pValue) )
    ( (This)->lpVtbl -> InStory(This,pRange,pValue) )
    ( (This)->lpVtbl -> IsEqual(This,pRange,pValue) )
    ( (This)->lpVtbl -> Select(This) )
    ( (This)->lpVtbl -> StartOf(This,Unit,Extend,pDelta) )
    ( (This)->lpVtbl -> EndOf(This,Unit,Extend,pDelta) )
    ( (This)->lpVtbl -> Move(This,Unit,Count,pDelta) )
    ( (This)->lpVtbl -> MoveStart(This,Unit,Count,pDelta) )
    ( (This)->lpVtbl -> MoveEnd(This,Unit,Count,pDelta) )
    ( (This)->lpVtbl -> MoveWhile(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveStartWhile(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveEndWhile(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveUntil(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveStartUntil(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveEndUntil(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> FindText(This,bstr,Count,Flags,pLength) )
    ( (This)->lpVtbl -> FindTextStart(This,bstr,Count,Flags,pLength) )
    ( (This)->lpVtbl -> FindTextEnd(This,bstr,Count,Flags,pLength) )
    ( (This)->lpVtbl -> Delete(This,Unit,Count,pDelta) )
    ( (This)->lpVtbl -> Cut(This,pVar) )
    ( (This)->lpVtbl -> Copy(This,pVar) )
    ( (This)->lpVtbl -> Paste(This,pVar,Format) )
    ( (This)->lpVtbl -> CanPaste(This,pVar,Format,pValue) )
    ( (This)->lpVtbl -> CanEdit(This,pValue) )
    ( (This)->lpVtbl -> ChangeCase(This,Type) )
    ( (This)->lpVtbl -> GetPoint(This,Type,px,py) )
    ( (This)->lpVtbl -> SetPoint(This,x,y,Type,Extend) )
    ( (This)->lpVtbl -> ScrollIntoView(This,Value) )
    ( (This)->lpVtbl -> GetEmbeddedObject(This,ppObject) )
    ( (This)->lpVtbl -> GetFlags(This,pFlags) )
    ( (This)->lpVtbl -> SetFlags(This,Flags) )
    ( (This)->lpVtbl -> GetType(This,pType) )
    ( (This)->lpVtbl -> MoveLeft(This,Unit,Count,Extend,pDelta) )
    ( (This)->lpVtbl -> MoveRight(This,Unit,Count,Extend,pDelta) )
    ( (This)->lpVtbl -> MoveUp(This,Unit,Count,Extend,pDelta) )
    ( (This)->lpVtbl -> MoveDown(This,Unit,Count,Extend,pDelta) )
    ( (This)->lpVtbl -> HomeKey(This,Unit,Extend,pDelta) )
    ( (This)->lpVtbl -> EndKey(This,Unit,Extend,pDelta) )
    ( (This)->lpVtbl -> TypeText(This,bstr) )
EXTERN_C const IID IID_ITextFont;
    typedef struct ITextFontVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextFont * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextFont * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextFont * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITextFont * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITextFont * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITextFont * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITextFont * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *GetDuplicate )(
            __RPC__in ITextFont * This,
                                __RPC__deref_out_opt ITextFont **ppFont);
                            HRESULT ( STDMETHODCALLTYPE *SetDuplicate )(
            __RPC__in ITextFont * This,
                       __RPC__in_opt ITextFont *pFont);
                   HRESULT ( STDMETHODCALLTYPE *CanChange )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            __RPC__in ITextFont * This,
                       __RPC__in_opt ITextFont *pFont,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetStyle )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetStyle )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetAllCaps )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetAllCaps )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetAnimation )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetAnimation )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetBackColor )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetBackColor )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetBold )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetBold )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetEmboss )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetEmboss )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetForeColor )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetForeColor )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetHidden )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetHidden )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetEngrave )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetEngrave )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetItalic )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetItalic )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetKerning )(
            __RPC__in ITextFont * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetKerning )(
            __RPC__in ITextFont * This,
                       float Value);
                            HRESULT ( STDMETHODCALLTYPE *GetLanguageID )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetLanguageID )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in ITextFont * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                            HRESULT ( STDMETHODCALLTYPE *SetName )(
            __RPC__in ITextFont * This,
                       __RPC__in BSTR bstr);
                            HRESULT ( STDMETHODCALLTYPE *GetOutline )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetOutline )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetPosition )(
            __RPC__in ITextFont * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetPosition )(
            __RPC__in ITextFont * This,
                       float Value);
                            HRESULT ( STDMETHODCALLTYPE *GetProtected )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetProtected )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetShadow )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetShadow )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in ITextFont * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSize )(
            __RPC__in ITextFont * This,
                       float Value);
                            HRESULT ( STDMETHODCALLTYPE *GetSmallCaps )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSmallCaps )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetSpacing )(
            __RPC__in ITextFont * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSpacing )(
            __RPC__in ITextFont * This,
                       float Value);
                            HRESULT ( STDMETHODCALLTYPE *GetStrikeThrough )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetStrikeThrough )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetSubscript )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSubscript )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetSuperscript )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSuperscript )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetUnderline )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetUnderline )(
            __RPC__in ITextFont * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetWeight )(
            __RPC__in ITextFont * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetWeight )(
            __RPC__in ITextFont * This,
                       long Value);
        END_INTERFACE
    } ITextFontVtbl;
    interface ITextFont
    {
        CONST_VTBL struct ITextFontVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetDuplicate(This,ppFont) )
    ( (This)->lpVtbl -> SetDuplicate(This,pFont) )
    ( (This)->lpVtbl -> CanChange(This,pValue) )
    ( (This)->lpVtbl -> IsEqual(This,pFont,pValue) )
    ( (This)->lpVtbl -> Reset(This,Value) )
    ( (This)->lpVtbl -> GetStyle(This,pValue) )
    ( (This)->lpVtbl -> SetStyle(This,Value) )
    ( (This)->lpVtbl -> GetAllCaps(This,pValue) )
    ( (This)->lpVtbl -> SetAllCaps(This,Value) )
    ( (This)->lpVtbl -> GetAnimation(This,pValue) )
    ( (This)->lpVtbl -> SetAnimation(This,Value) )
    ( (This)->lpVtbl -> GetBackColor(This,pValue) )
    ( (This)->lpVtbl -> SetBackColor(This,Value) )
    ( (This)->lpVtbl -> GetBold(This,pValue) )
    ( (This)->lpVtbl -> SetBold(This,Value) )
    ( (This)->lpVtbl -> GetEmboss(This,pValue) )
    ( (This)->lpVtbl -> SetEmboss(This,Value) )
    ( (This)->lpVtbl -> GetForeColor(This,pValue) )
    ( (This)->lpVtbl -> SetForeColor(This,Value) )
    ( (This)->lpVtbl -> GetHidden(This,pValue) )
    ( (This)->lpVtbl -> SetHidden(This,Value) )
    ( (This)->lpVtbl -> GetEngrave(This,pValue) )
    ( (This)->lpVtbl -> SetEngrave(This,Value) )
    ( (This)->lpVtbl -> GetItalic(This,pValue) )
    ( (This)->lpVtbl -> SetItalic(This,Value) )
    ( (This)->lpVtbl -> GetKerning(This,pValue) )
    ( (This)->lpVtbl -> SetKerning(This,Value) )
    ( (This)->lpVtbl -> GetLanguageID(This,pValue) )
    ( (This)->lpVtbl -> SetLanguageID(This,Value) )
    ( (This)->lpVtbl -> GetName(This,pbstr) )
    ( (This)->lpVtbl -> SetName(This,bstr) )
    ( (This)->lpVtbl -> GetOutline(This,pValue) )
    ( (This)->lpVtbl -> SetOutline(This,Value) )
    ( (This)->lpVtbl -> GetPosition(This,pValue) )
    ( (This)->lpVtbl -> SetPosition(This,Value) )
    ( (This)->lpVtbl -> GetProtected(This,pValue) )
    ( (This)->lpVtbl -> SetProtected(This,Value) )
    ( (This)->lpVtbl -> GetShadow(This,pValue) )
    ( (This)->lpVtbl -> SetShadow(This,Value) )
    ( (This)->lpVtbl -> GetSize(This,pValue) )
    ( (This)->lpVtbl -> SetSize(This,Value) )
    ( (This)->lpVtbl -> GetSmallCaps(This,pValue) )
    ( (This)->lpVtbl -> SetSmallCaps(This,Value) )
    ( (This)->lpVtbl -> GetSpacing(This,pValue) )
    ( (This)->lpVtbl -> SetSpacing(This,Value) )
    ( (This)->lpVtbl -> GetStrikeThrough(This,pValue) )
    ( (This)->lpVtbl -> SetStrikeThrough(This,Value) )
    ( (This)->lpVtbl -> GetSubscript(This,pValue) )
    ( (This)->lpVtbl -> SetSubscript(This,Value) )
    ( (This)->lpVtbl -> GetSuperscript(This,pValue) )
    ( (This)->lpVtbl -> SetSuperscript(This,Value) )
    ( (This)->lpVtbl -> GetUnderline(This,pValue) )
    ( (This)->lpVtbl -> SetUnderline(This,Value) )
    ( (This)->lpVtbl -> GetWeight(This,pValue) )
    ( (This)->lpVtbl -> SetWeight(This,Value) )
EXTERN_C const IID IID_ITextPara;
    typedef struct ITextParaVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextPara * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextPara * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextPara * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITextPara * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITextPara * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITextPara * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITextPara * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *GetDuplicate )(
            __RPC__in ITextPara * This,
                                __RPC__deref_out_opt ITextPara **ppPara);
                            HRESULT ( STDMETHODCALLTYPE *SetDuplicate )(
            __RPC__in ITextPara * This,
                       __RPC__in_opt ITextPara *pPara);
                   HRESULT ( STDMETHODCALLTYPE *CanChange )(
            __RPC__in ITextPara * This,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            __RPC__in ITextPara * This,
                       __RPC__in_opt ITextPara *pPara,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ITextPara * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetStyle )(
            __RPC__in ITextPara * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetStyle )(
            __RPC__in ITextPara * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetAlignment )(
            __RPC__in ITextPara * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetAlignment )(
            __RPC__in ITextPara * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetHyphenation )(
            __RPC__in ITextPara * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetHyphenation )(
            __RPC__in ITextPara * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetFirstLineIndent )(
            __RPC__in ITextPara * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *GetKeepTogether )(
            __RPC__in ITextPara * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetKeepTogether )(
            __RPC__in ITextPara * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetKeepWithNext )(
            __RPC__in ITextPara * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetKeepWithNext )(
            __RPC__in ITextPara * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetLeftIndent )(
            __RPC__in ITextPara * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *GetLineSpacing )(
            __RPC__in ITextPara * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *GetLineSpacingRule )(
            __RPC__in ITextPara * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *GetListAlignment )(
            __RPC__in ITextPara * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetListAlignment )(
            __RPC__in ITextPara * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetListLevelIndex )(
            __RPC__in ITextPara * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetListLevelIndex )(
            __RPC__in ITextPara * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetListStart )(
            __RPC__in ITextPara * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetListStart )(
            __RPC__in ITextPara * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetListTab )(
            __RPC__in ITextPara * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetListTab )(
            __RPC__in ITextPara * This,
                       float Value);
                            HRESULT ( STDMETHODCALLTYPE *GetListType )(
            __RPC__in ITextPara * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetListType )(
            __RPC__in ITextPara * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetNoLineNumber )(
            __RPC__in ITextPara * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetNoLineNumber )(
            __RPC__in ITextPara * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetPageBreakBefore )(
            __RPC__in ITextPara * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetPageBreakBefore )(
            __RPC__in ITextPara * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetRightIndent )(
            __RPC__in ITextPara * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetRightIndent )(
            __RPC__in ITextPara * This,
                       float Value);
                   HRESULT ( STDMETHODCALLTYPE *SetIndents )(
            __RPC__in ITextPara * This,
                       float First,
                       float Left,
                       float Right);
                   HRESULT ( STDMETHODCALLTYPE *SetLineSpacing )(
            __RPC__in ITextPara * This,
                       long Rule,
                       float Spacing);
                            HRESULT ( STDMETHODCALLTYPE *GetSpaceAfter )(
            __RPC__in ITextPara * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSpaceAfter )(
            __RPC__in ITextPara * This,
                       float Value);
                            HRESULT ( STDMETHODCALLTYPE *GetSpaceBefore )(
            __RPC__in ITextPara * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSpaceBefore )(
            __RPC__in ITextPara * This,
                       float Value);
                            HRESULT ( STDMETHODCALLTYPE *GetWidowControl )(
            __RPC__in ITextPara * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetWidowControl )(
            __RPC__in ITextPara * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetTabCount )(
            __RPC__in ITextPara * This,
                                __RPC__out long *pCount);
                   HRESULT ( STDMETHODCALLTYPE *AddTab )(
            __RPC__in ITextPara * This,
                       float tbPos,
                       long tbAlign,
                       long tbLeader);
                   HRESULT ( STDMETHODCALLTYPE *ClearAllTabs )(
            __RPC__in ITextPara * This);
                   HRESULT ( STDMETHODCALLTYPE *DeleteTab )(
            __RPC__in ITextPara * This,
                       float tbPos);
                   HRESULT ( STDMETHODCALLTYPE *GetTab )(
            __RPC__in ITextPara * This,
                       long iTab,
                        __RPC__out float *ptbPos,
                        __RPC__out long *ptbAlign,
                        __RPC__out long *ptbLeader);
        END_INTERFACE
    } ITextParaVtbl;
    interface ITextPara
    {
        CONST_VTBL struct ITextParaVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetDuplicate(This,ppPara) )
    ( (This)->lpVtbl -> SetDuplicate(This,pPara) )
    ( (This)->lpVtbl -> CanChange(This,pValue) )
    ( (This)->lpVtbl -> IsEqual(This,pPara,pValue) )
    ( (This)->lpVtbl -> Reset(This,Value) )
    ( (This)->lpVtbl -> GetStyle(This,pValue) )
    ( (This)->lpVtbl -> SetStyle(This,Value) )
    ( (This)->lpVtbl -> GetAlignment(This,pValue) )
    ( (This)->lpVtbl -> SetAlignment(This,Value) )
    ( (This)->lpVtbl -> GetHyphenation(This,pValue) )
    ( (This)->lpVtbl -> SetHyphenation(This,Value) )
    ( (This)->lpVtbl -> GetFirstLineIndent(This,pValue) )
    ( (This)->lpVtbl -> GetKeepTogether(This,pValue) )
    ( (This)->lpVtbl -> SetKeepTogether(This,Value) )
    ( (This)->lpVtbl -> GetKeepWithNext(This,pValue) )
    ( (This)->lpVtbl -> SetKeepWithNext(This,Value) )
    ( (This)->lpVtbl -> GetLeftIndent(This,pValue) )
    ( (This)->lpVtbl -> GetLineSpacing(This,pValue) )
    ( (This)->lpVtbl -> GetLineSpacingRule(This,pValue) )
    ( (This)->lpVtbl -> GetListAlignment(This,pValue) )
    ( (This)->lpVtbl -> SetListAlignment(This,Value) )
    ( (This)->lpVtbl -> GetListLevelIndex(This,pValue) )
    ( (This)->lpVtbl -> SetListLevelIndex(This,Value) )
    ( (This)->lpVtbl -> GetListStart(This,pValue) )
    ( (This)->lpVtbl -> SetListStart(This,Value) )
    ( (This)->lpVtbl -> GetListTab(This,pValue) )
    ( (This)->lpVtbl -> SetListTab(This,Value) )
    ( (This)->lpVtbl -> GetListType(This,pValue) )
    ( (This)->lpVtbl -> SetListType(This,Value) )
    ( (This)->lpVtbl -> GetNoLineNumber(This,pValue) )
    ( (This)->lpVtbl -> SetNoLineNumber(This,Value) )
    ( (This)->lpVtbl -> GetPageBreakBefore(This,pValue) )
    ( (This)->lpVtbl -> SetPageBreakBefore(This,Value) )
    ( (This)->lpVtbl -> GetRightIndent(This,pValue) )
    ( (This)->lpVtbl -> SetRightIndent(This,Value) )
    ( (This)->lpVtbl -> SetIndents(This,First,Left,Right) )
    ( (This)->lpVtbl -> SetLineSpacing(This,Rule,Spacing) )
    ( (This)->lpVtbl -> GetSpaceAfter(This,pValue) )
    ( (This)->lpVtbl -> SetSpaceAfter(This,Value) )
    ( (This)->lpVtbl -> GetSpaceBefore(This,pValue) )
    ( (This)->lpVtbl -> SetSpaceBefore(This,Value) )
    ( (This)->lpVtbl -> GetWidowControl(This,pValue) )
    ( (This)->lpVtbl -> SetWidowControl(This,Value) )
    ( (This)->lpVtbl -> GetTabCount(This,pCount) )
    ( (This)->lpVtbl -> AddTab(This,tbPos,tbAlign,tbLeader) )
    ( (This)->lpVtbl -> ClearAllTabs(This) )
    ( (This)->lpVtbl -> DeleteTab(This,tbPos) )
    ( (This)->lpVtbl -> GetTab(This,iTab,ptbPos,ptbAlign,ptbLeader) )
EXTERN_C const IID IID_ITextStoryRanges;
    typedef struct ITextStoryRangesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextStoryRanges * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextStoryRanges * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextStoryRanges * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITextStoryRanges * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITextStoryRanges * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITextStoryRanges * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITextStoryRanges * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in ITextStoryRanges * This,
                                __RPC__deref_out_opt IUnknown **ppunkEnum);
                   HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in ITextStoryRanges * This,
                       long Index,
                                __RPC__deref_out_opt ITextRange **ppRange);
                            HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ITextStoryRanges * This,
                                __RPC__out long *pCount);
        END_INTERFACE
    } ITextStoryRangesVtbl;
    interface ITextStoryRanges
    {
        CONST_VTBL struct ITextStoryRangesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> _NewEnum(This,ppunkEnum) )
    ( (This)->lpVtbl -> Item(This,Index,ppRange) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
EXTERN_C const IID IID_ITextDocument2;
    typedef struct ITextDocument2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextDocument2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextDocument2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextDocument2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITextDocument2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITextDocument2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITextDocument2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITextDocument2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in ITextDocument2 * This,
                                __RPC__deref_out_opt BSTR *pName);
                            HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            __RPC__in ITextDocument2 * This,
                                __RPC__deref_out_opt ITextSelection **ppSel);
                            HRESULT ( STDMETHODCALLTYPE *GetStoryCount )(
            __RPC__in ITextDocument2 * This,
                                __RPC__out long *pCount);
                            HRESULT ( STDMETHODCALLTYPE *GetStoryRanges )(
            __RPC__in ITextDocument2 * This,
                                __RPC__deref_out_opt ITextStoryRanges **ppStories);
                            HRESULT ( STDMETHODCALLTYPE *GetSaved )(
            __RPC__in ITextDocument2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSaved )(
            __RPC__in ITextDocument2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetDefaultTabStop )(
            __RPC__in ITextDocument2 * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetDefaultTabStop )(
            __RPC__in ITextDocument2 * This,
                       float Value);
                   HRESULT ( STDMETHODCALLTYPE *New )(
            __RPC__in ITextDocument2 * This);
                   HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in ITextDocument2 * This,
                       __RPC__in VARIANT *pVar,
                       long Flags,
                       long CodePage);
                   HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in ITextDocument2 * This,
                       __RPC__in VARIANT *pVar,
                       long Flags,
                       long CodePage);
                   HRESULT ( STDMETHODCALLTYPE *Freeze )(
            __RPC__in ITextDocument2 * This,
                                __RPC__out long *pCount);
                   HRESULT ( STDMETHODCALLTYPE *Unfreeze )(
            __RPC__in ITextDocument2 * This,
                                __RPC__out long *pCount);
                   HRESULT ( STDMETHODCALLTYPE *BeginEditCollection )(
            __RPC__in ITextDocument2 * This);
                   HRESULT ( STDMETHODCALLTYPE *EndEditCollection )(
            __RPC__in ITextDocument2 * This);
                   HRESULT ( STDMETHODCALLTYPE *Undo )(
            __RPC__in ITextDocument2 * This,
                       long Count,
                                __RPC__out long *pCount);
                   HRESULT ( STDMETHODCALLTYPE *Redo )(
            __RPC__in ITextDocument2 * This,
                       long Count,
                                __RPC__out long *pCount);
                   HRESULT ( STDMETHODCALLTYPE *Range )(
            __RPC__in ITextDocument2 * This,
                       long cpActive,
                       long cpAnchor,
                                __RPC__deref_out_opt ITextRange **ppRange);
                   HRESULT ( STDMETHODCALLTYPE *RangeFromPoint )(
            __RPC__in ITextDocument2 * This,
                       long x,
                       long y,
                                __RPC__deref_out_opt ITextRange **ppRange);
                                        HRESULT ( STDMETHODCALLTYPE *GetCaretType )(
            __RPC__in ITextDocument2 * This,
                                __RPC__out long *pValue);
                                        HRESULT ( STDMETHODCALLTYPE *SetCaretType )(
            __RPC__in ITextDocument2 * This,
                       long Value);
                                        HRESULT ( STDMETHODCALLTYPE *GetDisplays )(
            __RPC__in ITextDocument2 * This,
                                __RPC__deref_out_opt ITextDisplays **ppDisplays);
                                        HRESULT ( STDMETHODCALLTYPE *GetDocumentFont )(
            __RPC__in ITextDocument2 * This,
                                __RPC__deref_out_opt ITextFont2 **ppFont);
                                        HRESULT ( STDMETHODCALLTYPE *SetDocumentFont )(
            __RPC__in ITextDocument2 * This,
                       __RPC__in_opt ITextFont2 *pFont);
                                        HRESULT ( STDMETHODCALLTYPE *GetDocumentPara )(
            __RPC__in ITextDocument2 * This,
                                __RPC__deref_out_opt ITextPara2 **ppPara);
                                        HRESULT ( STDMETHODCALLTYPE *SetDocumentPara )(
            __RPC__in ITextDocument2 * This,
                       __RPC__in_opt ITextPara2 *pPara);
                                        HRESULT ( STDMETHODCALLTYPE *GetEastAsianFlags )(
            __RPC__in ITextDocument2 * This,
                                __RPC__out long *pFlags);
                                        HRESULT ( STDMETHODCALLTYPE *GetGenerator )(
            __RPC__in ITextDocument2 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                        HRESULT ( STDMETHODCALLTYPE *SetIMEInProgress )(
            __RPC__in ITextDocument2 * This,
                       long Value);
                                        HRESULT ( STDMETHODCALLTYPE *GetNotificationMode )(
            __RPC__in ITextDocument2 * This,
                                __RPC__out long *pValue);
                                        HRESULT ( STDMETHODCALLTYPE *SetNotificationMode )(
            __RPC__in ITextDocument2 * This,
                       long Value);
                                        HRESULT ( STDMETHODCALLTYPE *GetSelection2 )(
            __RPC__in ITextDocument2 * This,
                                __RPC__deref_out_opt ITextSelection2 **ppSel);
                                        HRESULT ( STDMETHODCALLTYPE *GetStoryRanges2 )(
            __RPC__in ITextDocument2 * This,
                                __RPC__deref_out_opt ITextStoryRanges2 **ppStories);
                                        HRESULT ( STDMETHODCALLTYPE *GetTypographyOptions )(
            __RPC__in ITextDocument2 * This,
                                __RPC__out long *pOptions);
                                        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in ITextDocument2 * This,
                                __RPC__out long *pValue);
                                        HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            __RPC__in ITextDocument2 * This,
                                __RPC__out __int64 *pHwnd);
                               HRESULT ( STDMETHODCALLTYPE *AttachMsgFilter )(
            __RPC__in ITextDocument2 * This,
                       __RPC__in_opt IUnknown *pFilter);
                               HRESULT ( STDMETHODCALLTYPE *CheckTextLimit )(
            __RPC__in ITextDocument2 * This,
            long cch,
            __RPC__in long *pcch);
                               HRESULT ( STDMETHODCALLTYPE *GetCallManager )(
            __RPC__in ITextDocument2 * This,
                                __RPC__deref_out_opt IUnknown **ppVoid);
                               HRESULT ( STDMETHODCALLTYPE *GetClientRect )(
            __RPC__in ITextDocument2 * This,
                       long Type,
                        __RPC__out long *pLeft,
                        __RPC__out long *pTop,
                        __RPC__out long *pRight,
                        __RPC__out long *pBottom);
                               HRESULT ( STDMETHODCALLTYPE *GetEffectColor )(
            __RPC__in ITextDocument2 * This,
                       long Index,
                        __RPC__out long *pValue);
                               HRESULT ( STDMETHODCALLTYPE *GetImmContext )(
            __RPC__in ITextDocument2 * This,
                                __RPC__out __int64 *pContext);
                               HRESULT ( STDMETHODCALLTYPE *GetPreferredFont )(
            __RPC__in ITextDocument2 * This,
                       long cp,
                       long CharRep,
                       long Options,
                       long curCharRep,
                       long curFontSize,
                        __RPC__deref_out_opt BSTR *pbstr,
                        __RPC__out long *pPitchAndFamily,
                        __RPC__out long *pNewFontSize);
                               HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in ITextDocument2 * This,
                       long Type,
                        __RPC__out long *pValue);
                               HRESULT ( STDMETHODCALLTYPE *GetStrings )(
            __RPC__in ITextDocument2 * This,
                        __RPC__deref_out_opt ITextStrings **ppStrs);
                               HRESULT ( STDMETHODCALLTYPE *Notify )(
            __RPC__in ITextDocument2 * This,
                       long Notify);
                               HRESULT ( STDMETHODCALLTYPE *Range2 )(
            __RPC__in ITextDocument2 * This,
                       long cpActive,
                       long cpAnchor,
                                __RPC__deref_out_opt ITextRange2 **ppRange);
                               HRESULT ( STDMETHODCALLTYPE *RangeFromPoint2 )(
            __RPC__in ITextDocument2 * This,
                       long x,
                       long y,
                       long Type,
                                __RPC__deref_out_opt ITextRange2 **ppRange);
                               HRESULT ( STDMETHODCALLTYPE *ReleaseCallManager )(
            __RPC__in ITextDocument2 * This,
                       __RPC__in_opt IUnknown *pVoid);
                               HRESULT ( STDMETHODCALLTYPE *ReleaseImmContext )(
            __RPC__in ITextDocument2 * This,
                       __int64 Context);
                               HRESULT ( STDMETHODCALLTYPE *SetEffectColor )(
            __RPC__in ITextDocument2 * This,
                       long Index,
                       long Value);
                               HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in ITextDocument2 * This,
                       long Type,
                       long Value);
                               HRESULT ( STDMETHODCALLTYPE *SetTypographyOptions )(
            __RPC__in ITextDocument2 * This,
                       long Options,
                       long Mask);
                               HRESULT ( STDMETHODCALLTYPE *SysBeep )(
            __RPC__in ITextDocument2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in ITextDocument2 * This,
                       long Value);
                               HRESULT ( STDMETHODCALLTYPE *UpdateWindow )(
            __RPC__in ITextDocument2 * This);
                               HRESULT ( STDMETHODCALLTYPE *GetMathProperties )(
            __RPC__in ITextDocument2 * This,
                        __RPC__out long *pOptions);
                               HRESULT ( STDMETHODCALLTYPE *SetMathProperties )(
            __RPC__in ITextDocument2 * This,
                       long Options,
                       long Mask);
                            HRESULT ( STDMETHODCALLTYPE *GetActiveStory )(
            __RPC__in ITextDocument2 * This,
                                __RPC__deref_out_opt ITextStory **ppStory);
                            HRESULT ( STDMETHODCALLTYPE *SetActiveStory )(
            __RPC__in ITextDocument2 * This,
                       __RPC__in_opt ITextStory *pStory);
                            HRESULT ( STDMETHODCALLTYPE *GetMainStory )(
            __RPC__in ITextDocument2 * This,
                                __RPC__deref_out_opt ITextStory **ppStory);
                            HRESULT ( STDMETHODCALLTYPE *GetNewStory )(
            __RPC__in ITextDocument2 * This,
                                __RPC__deref_out_opt ITextStory **ppStory);
                   HRESULT ( STDMETHODCALLTYPE *GetStory )(
            __RPC__in ITextDocument2 * This,
                       long Index,
                                __RPC__deref_out_opt ITextStory **ppStory);
        END_INTERFACE
    } ITextDocument2Vtbl;
    interface ITextDocument2
    {
        CONST_VTBL struct ITextDocument2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetName(This,pName) )
    ( (This)->lpVtbl -> GetSelection(This,ppSel) )
    ( (This)->lpVtbl -> GetStoryCount(This,pCount) )
    ( (This)->lpVtbl -> GetStoryRanges(This,ppStories) )
    ( (This)->lpVtbl -> GetSaved(This,pValue) )
    ( (This)->lpVtbl -> SetSaved(This,Value) )
    ( (This)->lpVtbl -> GetDefaultTabStop(This,pValue) )
    ( (This)->lpVtbl -> SetDefaultTabStop(This,Value) )
    ( (This)->lpVtbl -> New(This) )
    ( (This)->lpVtbl -> Open(This,pVar,Flags,CodePage) )
    ( (This)->lpVtbl -> Save(This,pVar,Flags,CodePage) )
    ( (This)->lpVtbl -> Freeze(This,pCount) )
    ( (This)->lpVtbl -> Unfreeze(This,pCount) )
    ( (This)->lpVtbl -> BeginEditCollection(This) )
    ( (This)->lpVtbl -> EndEditCollection(This) )
    ( (This)->lpVtbl -> Undo(This,Count,pCount) )
    ( (This)->lpVtbl -> Redo(This,Count,pCount) )
    ( (This)->lpVtbl -> Range(This,cpActive,cpAnchor,ppRange) )
    ( (This)->lpVtbl -> RangeFromPoint(This,x,y,ppRange) )
    ( (This)->lpVtbl -> GetCaretType(This,pValue) )
    ( (This)->lpVtbl -> SetCaretType(This,Value) )
    ( (This)->lpVtbl -> GetDisplays(This,ppDisplays) )
    ( (This)->lpVtbl -> GetDocumentFont(This,ppFont) )
    ( (This)->lpVtbl -> SetDocumentFont(This,pFont) )
    ( (This)->lpVtbl -> GetDocumentPara(This,ppPara) )
    ( (This)->lpVtbl -> SetDocumentPara(This,pPara) )
    ( (This)->lpVtbl -> GetEastAsianFlags(This,pFlags) )
    ( (This)->lpVtbl -> GetGenerator(This,pbstr) )
    ( (This)->lpVtbl -> SetIMEInProgress(This,Value) )
    ( (This)->lpVtbl -> GetNotificationMode(This,pValue) )
    ( (This)->lpVtbl -> SetNotificationMode(This,Value) )
    ( (This)->lpVtbl -> GetSelection2(This,ppSel) )
    ( (This)->lpVtbl -> GetStoryRanges2(This,ppStories) )
    ( (This)->lpVtbl -> GetTypographyOptions(This,pOptions) )
    ( (This)->lpVtbl -> GetVersion(This,pValue) )
    ( (This)->lpVtbl -> GetWindow(This,pHwnd) )
    ( (This)->lpVtbl -> AttachMsgFilter(This,pFilter) )
    ( (This)->lpVtbl -> CheckTextLimit(This,cch,pcch) )
    ( (This)->lpVtbl -> GetCallManager(This,ppVoid) )
    ( (This)->lpVtbl -> GetClientRect(This,Type,pLeft,pTop,pRight,pBottom) )
    ( (This)->lpVtbl -> GetEffectColor(This,Index,pValue) )
    ( (This)->lpVtbl -> GetImmContext(This,pContext) )
    ( (This)->lpVtbl -> GetPreferredFont(This,cp,CharRep,Options,curCharRep,curFontSize,pbstr,pPitchAndFamily,pNewFontSize) )
    ( (This)->lpVtbl -> GetProperty(This,Type,pValue) )
    ( (This)->lpVtbl -> GetStrings(This,ppStrs) )
    ( (This)->lpVtbl -> Notify(This,Notify) )
    ( (This)->lpVtbl -> Range2(This,cpActive,cpAnchor,ppRange) )
    ( (This)->lpVtbl -> RangeFromPoint2(This,x,y,Type,ppRange) )
    ( (This)->lpVtbl -> ReleaseCallManager(This,pVoid) )
    ( (This)->lpVtbl -> ReleaseImmContext(This,Context) )
    ( (This)->lpVtbl -> SetEffectColor(This,Index,Value) )
    ( (This)->lpVtbl -> SetProperty(This,Type,Value) )
    ( (This)->lpVtbl -> SetTypographyOptions(This,Options,Mask) )
    ( (This)->lpVtbl -> SysBeep(This) )
    ( (This)->lpVtbl -> Update(This,Value) )
    ( (This)->lpVtbl -> UpdateWindow(This) )
    ( (This)->lpVtbl -> GetMathProperties(This,pOptions) )
    ( (This)->lpVtbl -> SetMathProperties(This,Options,Mask) )
    ( (This)->lpVtbl -> GetActiveStory(This,ppStory) )
    ( (This)->lpVtbl -> SetActiveStory(This,pStory) )
    ( (This)->lpVtbl -> GetMainStory(This,ppStory) )
    ( (This)->lpVtbl -> GetNewStory(This,ppStory) )
    ( (This)->lpVtbl -> GetStory(This,Index,ppStory) )
EXTERN_C const IID IID_ITextRange2;
    typedef struct ITextRange2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextRange2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextRange2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextRange2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITextRange2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITextRange2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITextRange2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITextRange2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in ITextRange2 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                            HRESULT ( STDMETHODCALLTYPE *SetText )(
            __RPC__in ITextRange2 * This,
                       __RPC__in BSTR bstr);
                            HRESULT ( STDMETHODCALLTYPE *GetChar )(
            __RPC__in ITextRange2 * This,
                                __RPC__out long *pChar);
                            HRESULT ( STDMETHODCALLTYPE *SetChar )(
            __RPC__in ITextRange2 * This,
                       long Char);
                            HRESULT ( STDMETHODCALLTYPE *GetDuplicate )(
            __RPC__in ITextRange2 * This,
                                __RPC__deref_out_opt ITextRange **ppRange);
                            HRESULT ( STDMETHODCALLTYPE *GetFormattedText )(
            __RPC__in ITextRange2 * This,
                                __RPC__deref_out_opt ITextRange **ppRange);
                            HRESULT ( STDMETHODCALLTYPE *SetFormattedText )(
            __RPC__in ITextRange2 * This,
                       __RPC__in_opt ITextRange *pRange);
                            HRESULT ( STDMETHODCALLTYPE *GetStart )(
            __RPC__in ITextRange2 * This,
                                __RPC__out long *pcpFirst);
                            HRESULT ( STDMETHODCALLTYPE *SetStart )(
            __RPC__in ITextRange2 * This,
                       long cpFirst);
                            HRESULT ( STDMETHODCALLTYPE *GetEnd )(
            __RPC__in ITextRange2 * This,
                                __RPC__out long *pcpLim);
                            HRESULT ( STDMETHODCALLTYPE *SetEnd )(
            __RPC__in ITextRange2 * This,
                       long cpLim);
                            HRESULT ( STDMETHODCALLTYPE *GetFont )(
            __RPC__in ITextRange2 * This,
                                __RPC__deref_out_opt ITextFont **ppFont);
                            HRESULT ( STDMETHODCALLTYPE *SetFont )(
            __RPC__in ITextRange2 * This,
                       __RPC__in_opt ITextFont *pFont);
                            HRESULT ( STDMETHODCALLTYPE *GetPara )(
            __RPC__in ITextRange2 * This,
                                __RPC__deref_out_opt ITextPara **ppPara);
                            HRESULT ( STDMETHODCALLTYPE *SetPara )(
            __RPC__in ITextRange2 * This,
                       __RPC__in_opt ITextPara *pPara);
                            HRESULT ( STDMETHODCALLTYPE *GetStoryLength )(
            __RPC__in ITextRange2 * This,
                                __RPC__out long *pCount);
                            HRESULT ( STDMETHODCALLTYPE *GetStoryType )(
            __RPC__in ITextRange2 * This,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *Collapse )(
            __RPC__in ITextRange2 * This,
                       long bStart);
                   HRESULT ( STDMETHODCALLTYPE *Expand )(
            __RPC__in ITextRange2 * This,
                       long Unit,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *GetIndex )(
            __RPC__in ITextRange2 * This,
                       long Unit,
                                __RPC__out long *pIndex);
                   HRESULT ( STDMETHODCALLTYPE *SetIndex )(
            __RPC__in ITextRange2 * This,
                       long Unit,
                       long Index,
                       long Extend);
                   HRESULT ( STDMETHODCALLTYPE *SetRange )(
            __RPC__in ITextRange2 * This,
                       long cpAnchor,
                       long cpActive);
                   HRESULT ( STDMETHODCALLTYPE *InRange )(
            __RPC__in ITextRange2 * This,
                       __RPC__in_opt ITextRange *pRange,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *InStory )(
            __RPC__in ITextRange2 * This,
                       __RPC__in_opt ITextRange *pRange,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            __RPC__in ITextRange2 * This,
                       __RPC__in_opt ITextRange *pRange,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *Select )(
            __RPC__in ITextRange2 * This);
                   HRESULT ( STDMETHODCALLTYPE *StartOf )(
            __RPC__in ITextRange2 * This,
                       long Unit,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *EndOf )(
            __RPC__in ITextRange2 * This,
                       long Unit,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in ITextRange2 * This,
                       long Unit,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveStart )(
            __RPC__in ITextRange2 * This,
                       long Unit,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveEnd )(
            __RPC__in ITextRange2 * This,
                       long Unit,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveWhile )(
            __RPC__in ITextRange2 * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveStartWhile )(
            __RPC__in ITextRange2 * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveEndWhile )(
            __RPC__in ITextRange2 * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveUntil )(
            __RPC__in ITextRange2 * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveStartUntil )(
            __RPC__in ITextRange2 * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveEndUntil )(
            __RPC__in ITextRange2 * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *FindText )(
            __RPC__in ITextRange2 * This,
                       __RPC__in BSTR bstr,
                       long Count,
                       long Flags,
                                __RPC__out long *pLength);
                   HRESULT ( STDMETHODCALLTYPE *FindTextStart )(
            __RPC__in ITextRange2 * This,
                       __RPC__in BSTR bstr,
                       long Count,
                       long Flags,
                                __RPC__out long *pLength);
                   HRESULT ( STDMETHODCALLTYPE *FindTextEnd )(
            __RPC__in ITextRange2 * This,
                       __RPC__in BSTR bstr,
                       long Count,
                       long Flags,
                                __RPC__out long *pLength);
                   HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ITextRange2 * This,
                       long Unit,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *Cut )(
            __RPC__in ITextRange2 * This,
                        __RPC__out VARIANT *pVar);
                   HRESULT ( STDMETHODCALLTYPE *Copy )(
            __RPC__in ITextRange2 * This,
                        __RPC__out VARIANT *pVar);
                   HRESULT ( STDMETHODCALLTYPE *Paste )(
            __RPC__in ITextRange2 * This,
                       __RPC__in VARIANT *pVar,
                       long Format);
                   HRESULT ( STDMETHODCALLTYPE *CanPaste )(
            __RPC__in ITextRange2 * This,
                       __RPC__in VARIANT *pVar,
                       long Format,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *CanEdit )(
            __RPC__in ITextRange2 * This,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *ChangeCase )(
            __RPC__in ITextRange2 * This,
                       long Type);
                   HRESULT ( STDMETHODCALLTYPE *GetPoint )(
            __RPC__in ITextRange2 * This,
                       long Type,
                        __RPC__out long *px,
                        __RPC__out long *py);
                   HRESULT ( STDMETHODCALLTYPE *SetPoint )(
            __RPC__in ITextRange2 * This,
                       long x,
                       long y,
                       long Type,
                       long Extend);
                   HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )(
            __RPC__in ITextRange2 * This,
                       long Value);
                   HRESULT ( STDMETHODCALLTYPE *GetEmbeddedObject )(
            __RPC__in ITextRange2 * This,
                                __RPC__deref_out_opt IUnknown **ppObject);
                            HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            __RPC__in ITextRange2 * This,
                                __RPC__out long *pFlags);
                            HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            __RPC__in ITextRange2 * This,
                       long Flags);
                            HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in ITextRange2 * This,
                                __RPC__out long *pType);
                   HRESULT ( STDMETHODCALLTYPE *MoveLeft )(
            __RPC__in ITextRange2 * This,
                       long Unit,
                       long Count,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveRight )(
            __RPC__in ITextRange2 * This,
                       long Unit,
                       long Count,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveUp )(
            __RPC__in ITextRange2 * This,
                       long Unit,
                       long Count,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveDown )(
            __RPC__in ITextRange2 * This,
                       long Unit,
                       long Count,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *HomeKey )(
            __RPC__in ITextRange2 * This,
                       long Unit,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *EndKey )(
            __RPC__in ITextRange2 * This,
                       long Unit,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *TypeText )(
            __RPC__in ITextRange2 * This,
                       __RPC__in BSTR bstr);
                            HRESULT ( STDMETHODCALLTYPE *GetCch )(
            __RPC__in ITextRange2 * This,
                                __RPC__out long *pcch);
                            HRESULT ( STDMETHODCALLTYPE *GetCells )(
            __RPC__in ITextRange2 * This,
                                __RPC__deref_out_opt IUnknown **ppCells);
                            HRESULT ( STDMETHODCALLTYPE *GetColumn )(
            __RPC__in ITextRange2 * This,
                                __RPC__deref_out_opt IUnknown **ppColumn);
                            HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ITextRange2 * This,
                                __RPC__out long *pCount);
                            HRESULT ( STDMETHODCALLTYPE *GetDuplicate2 )(
            __RPC__in ITextRange2 * This,
                                __RPC__deref_out_opt ITextRange2 **ppRange);
                            HRESULT ( STDMETHODCALLTYPE *GetFont2 )(
            __RPC__in ITextRange2 * This,
                                __RPC__deref_out_opt ITextFont2 **ppFont);
                            HRESULT ( STDMETHODCALLTYPE *SetFont2 )(
            __RPC__in ITextRange2 * This,
                       __RPC__in_opt ITextFont2 *pFont);
                            HRESULT ( STDMETHODCALLTYPE *GetFormattedText2 )(
            __RPC__in ITextRange2 * This,
                                __RPC__deref_out_opt ITextRange2 **ppRange);
                            HRESULT ( STDMETHODCALLTYPE *SetFormattedText2 )(
            __RPC__in ITextRange2 * This,
                       __RPC__in_opt ITextRange2 *pRange);
                            HRESULT ( STDMETHODCALLTYPE *GetGravity )(
            __RPC__in ITextRange2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetGravity )(
            __RPC__in ITextRange2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetPara2 )(
            __RPC__in ITextRange2 * This,
                                __RPC__deref_out_opt ITextPara2 **ppPara);
                            HRESULT ( STDMETHODCALLTYPE *SetPara2 )(
            __RPC__in ITextRange2 * This,
                       __RPC__in_opt ITextPara2 *pPara);
                            HRESULT ( STDMETHODCALLTYPE *GetRow )(
            __RPC__in ITextRange2 * This,
                                __RPC__deref_out_opt ITextRow **ppRow);
                            HRESULT ( STDMETHODCALLTYPE *GetStartPara )(
            __RPC__in ITextRange2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *GetTable )(
            __RPC__in ITextRange2 * This,
                                __RPC__deref_out_opt IUnknown **ppTable);
                            HRESULT ( STDMETHODCALLTYPE *GetURL )(
            __RPC__in ITextRange2 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                            HRESULT ( STDMETHODCALLTYPE *SetURL )(
            __RPC__in ITextRange2 * This,
                       __RPC__in BSTR bstr);
                   HRESULT ( STDMETHODCALLTYPE *AddSubrange )(
            __RPC__in ITextRange2 * This,
                       long cp1,
                       long cp2,
                       long Activate);
                   HRESULT ( STDMETHODCALLTYPE *BuildUpMath )(
            __RPC__in ITextRange2 * This,
                       long Flags);
                   HRESULT ( STDMETHODCALLTYPE *DeleteSubrange )(
            __RPC__in ITextRange2 * This,
                       long cpFirst,
                       long cpLim);
                   HRESULT ( STDMETHODCALLTYPE *Find )(
            __RPC__in ITextRange2 * This,
                       __RPC__in_opt ITextRange2 *pRange,
                       long Count,
                       long Flags,
                        __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *GetChar2 )(
            __RPC__in ITextRange2 * This,
                        __RPC__out long *pChar,
                       long Offset);
                   HRESULT ( STDMETHODCALLTYPE *GetDropCap )(
            __RPC__in ITextRange2 * This,
                        __RPC__out long *pcLine,
                        __RPC__out long *pPosition);
                   HRESULT ( STDMETHODCALLTYPE *GetInlineObject )(
            __RPC__in ITextRange2 * This,
                        __RPC__out long *pType,
                        __RPC__out long *pAlign,
                        __RPC__out long *pChar,
                        __RPC__out long *pChar1,
                        __RPC__out long *pChar2,
                        __RPC__out long *pCount,
                        __RPC__out long *pTeXStyle,
                        __RPC__out long *pcCol,
                        __RPC__out long *pLevel);
                   HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in ITextRange2 * This,
                       long Type,
                        __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *GetRect )(
            __RPC__in ITextRange2 * This,
                       long Type,
                        __RPC__out long *pLeft,
                        __RPC__out long *pTop,
                        __RPC__out long *pRight,
                        __RPC__out long *pBottom,
                        __RPC__out long *pHit);
                   HRESULT ( STDMETHODCALLTYPE *GetSubrange )(
            __RPC__in ITextRange2 * This,
                       long iSubrange,
                        __RPC__out long *pcpFirst,
                        __RPC__out long *pcpLim);
                   HRESULT ( STDMETHODCALLTYPE *GetText2 )(
            __RPC__in ITextRange2 * This,
                       long Flags,
                        __RPC__deref_out_opt BSTR *pbstr);
                   HRESULT ( STDMETHODCALLTYPE *HexToUnicode )(
            __RPC__in ITextRange2 * This);
                   HRESULT ( STDMETHODCALLTYPE *InsertTable )(
            __RPC__in ITextRange2 * This,
                       long cCol,
                       long cRow,
                       long AutoFit);
                   HRESULT ( STDMETHODCALLTYPE *Linearize )(
            __RPC__in ITextRange2 * This,
                       long Flags);
                   HRESULT ( STDMETHODCALLTYPE *SetActiveSubrange )(
            __RPC__in ITextRange2 * This,
                       long cpAnchor,
                       long cpActive);
                   HRESULT ( STDMETHODCALLTYPE *SetDropCap )(
            __RPC__in ITextRange2 * This,
                       long cLine,
                       long Position);
                   HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in ITextRange2 * This,
                       long Type,
                       long Value);
                   HRESULT ( STDMETHODCALLTYPE *SetText2 )(
            __RPC__in ITextRange2 * This,
                       long Flags,
                       __RPC__in BSTR bstr);
                   HRESULT ( STDMETHODCALLTYPE *UnicodeToHex )(
            __RPC__in ITextRange2 * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInlineObject )(
            __RPC__in ITextRange2 * This,
                       long Type,
                       long Align,
                       long Char,
                       long Char1,
                       long Char2,
                       long Count,
                       long TeXStyle,
                       long cCol);
                   HRESULT ( STDMETHODCALLTYPE *GetMathFunctionType )(
            __RPC__in ITextRange2 * This,
                       __RPC__in BSTR bstr,
                        __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *InsertImage )(
            __RPC__in ITextRange2 * This,
                       long width,
                       long height,
                       long ascent,
                       long Type,
                       __RPC__in BSTR bstrAltText,
                       __RPC__in_opt IStream *pStream);
        END_INTERFACE
    } ITextRange2Vtbl;
    interface ITextRange2
    {
        CONST_VTBL struct ITextRange2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetText(This,pbstr) )
    ( (This)->lpVtbl -> SetText(This,bstr) )
    ( (This)->lpVtbl -> GetChar(This,pChar) )
    ( (This)->lpVtbl -> SetChar(This,Char) )
    ( (This)->lpVtbl -> GetDuplicate(This,ppRange) )
    ( (This)->lpVtbl -> GetFormattedText(This,ppRange) )
    ( (This)->lpVtbl -> SetFormattedText(This,pRange) )
    ( (This)->lpVtbl -> GetStart(This,pcpFirst) )
    ( (This)->lpVtbl -> SetStart(This,cpFirst) )
    ( (This)->lpVtbl -> GetEnd(This,pcpLim) )
    ( (This)->lpVtbl -> SetEnd(This,cpLim) )
    ( (This)->lpVtbl -> GetFont(This,ppFont) )
    ( (This)->lpVtbl -> SetFont(This,pFont) )
    ( (This)->lpVtbl -> GetPara(This,ppPara) )
    ( (This)->lpVtbl -> SetPara(This,pPara) )
    ( (This)->lpVtbl -> GetStoryLength(This,pCount) )
    ( (This)->lpVtbl -> GetStoryType(This,pValue) )
    ( (This)->lpVtbl -> Collapse(This,bStart) )
    ( (This)->lpVtbl -> Expand(This,Unit,pDelta) )
    ( (This)->lpVtbl -> GetIndex(This,Unit,pIndex) )
    ( (This)->lpVtbl -> SetIndex(This,Unit,Index,Extend) )
    ( (This)->lpVtbl -> SetRange(This,cpAnchor,cpActive) )
    ( (This)->lpVtbl -> InRange(This,pRange,pValue) )
    ( (This)->lpVtbl -> InStory(This,pRange,pValue) )
    ( (This)->lpVtbl -> IsEqual(This,pRange,pValue) )
    ( (This)->lpVtbl -> Select(This) )
    ( (This)->lpVtbl -> StartOf(This,Unit,Extend,pDelta) )
    ( (This)->lpVtbl -> EndOf(This,Unit,Extend,pDelta) )
    ( (This)->lpVtbl -> Move(This,Unit,Count,pDelta) )
    ( (This)->lpVtbl -> MoveStart(This,Unit,Count,pDelta) )
    ( (This)->lpVtbl -> MoveEnd(This,Unit,Count,pDelta) )
    ( (This)->lpVtbl -> MoveWhile(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveStartWhile(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveEndWhile(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveUntil(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveStartUntil(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveEndUntil(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> FindText(This,bstr,Count,Flags,pLength) )
    ( (This)->lpVtbl -> FindTextStart(This,bstr,Count,Flags,pLength) )
    ( (This)->lpVtbl -> FindTextEnd(This,bstr,Count,Flags,pLength) )
    ( (This)->lpVtbl -> Delete(This,Unit,Count,pDelta) )
    ( (This)->lpVtbl -> Cut(This,pVar) )
    ( (This)->lpVtbl -> Copy(This,pVar) )
    ( (This)->lpVtbl -> Paste(This,pVar,Format) )
    ( (This)->lpVtbl -> CanPaste(This,pVar,Format,pValue) )
    ( (This)->lpVtbl -> CanEdit(This,pValue) )
    ( (This)->lpVtbl -> ChangeCase(This,Type) )
    ( (This)->lpVtbl -> GetPoint(This,Type,px,py) )
    ( (This)->lpVtbl -> SetPoint(This,x,y,Type,Extend) )
    ( (This)->lpVtbl -> ScrollIntoView(This,Value) )
    ( (This)->lpVtbl -> GetEmbeddedObject(This,ppObject) )
    ( (This)->lpVtbl -> GetFlags(This,pFlags) )
    ( (This)->lpVtbl -> SetFlags(This,Flags) )
    ( (This)->lpVtbl -> GetType(This,pType) )
    ( (This)->lpVtbl -> MoveLeft(This,Unit,Count,Extend,pDelta) )
    ( (This)->lpVtbl -> MoveRight(This,Unit,Count,Extend,pDelta) )
    ( (This)->lpVtbl -> MoveUp(This,Unit,Count,Extend,pDelta) )
    ( (This)->lpVtbl -> MoveDown(This,Unit,Count,Extend,pDelta) )
    ( (This)->lpVtbl -> HomeKey(This,Unit,Extend,pDelta) )
    ( (This)->lpVtbl -> EndKey(This,Unit,Extend,pDelta) )
    ( (This)->lpVtbl -> TypeText(This,bstr) )
    ( (This)->lpVtbl -> GetCch(This,pcch) )
    ( (This)->lpVtbl -> GetCells(This,ppCells) )
    ( (This)->lpVtbl -> GetColumn(This,ppColumn) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
    ( (This)->lpVtbl -> GetDuplicate2(This,ppRange) )
    ( (This)->lpVtbl -> GetFont2(This,ppFont) )
    ( (This)->lpVtbl -> SetFont2(This,pFont) )
    ( (This)->lpVtbl -> GetFormattedText2(This,ppRange) )
    ( (This)->lpVtbl -> SetFormattedText2(This,pRange) )
    ( (This)->lpVtbl -> GetGravity(This,pValue) )
    ( (This)->lpVtbl -> SetGravity(This,Value) )
    ( (This)->lpVtbl -> GetPara2(This,ppPara) )
    ( (This)->lpVtbl -> SetPara2(This,pPara) )
    ( (This)->lpVtbl -> GetRow(This,ppRow) )
    ( (This)->lpVtbl -> GetStartPara(This,pValue) )
    ( (This)->lpVtbl -> GetTable(This,ppTable) )
    ( (This)->lpVtbl -> GetURL(This,pbstr) )
    ( (This)->lpVtbl -> SetURL(This,bstr) )
    ( (This)->lpVtbl -> AddSubrange(This,cp1,cp2,Activate) )
    ( (This)->lpVtbl -> BuildUpMath(This,Flags) )
    ( (This)->lpVtbl -> DeleteSubrange(This,cpFirst,cpLim) )
    ( (This)->lpVtbl -> Find(This,pRange,Count,Flags,pDelta) )
    ( (This)->lpVtbl -> GetChar2(This,pChar,Offset) )
    ( (This)->lpVtbl -> GetDropCap(This,pcLine,pPosition) )
    ( (This)->lpVtbl -> GetInlineObject(This,pType,pAlign,pChar,pChar1,pChar2,pCount,pTeXStyle,pcCol,pLevel) )
    ( (This)->lpVtbl -> GetProperty(This,Type,pValue) )
    ( (This)->lpVtbl -> GetRect(This,Type,pLeft,pTop,pRight,pBottom,pHit) )
    ( (This)->lpVtbl -> GetSubrange(This,iSubrange,pcpFirst,pcpLim) )
    ( (This)->lpVtbl -> GetText2(This,Flags,pbstr) )
    ( (This)->lpVtbl -> HexToUnicode(This) )
    ( (This)->lpVtbl -> InsertTable(This,cCol,cRow,AutoFit) )
    ( (This)->lpVtbl -> Linearize(This,Flags) )
    ( (This)->lpVtbl -> SetActiveSubrange(This,cpAnchor,cpActive) )
    ( (This)->lpVtbl -> SetDropCap(This,cLine,Position) )
    ( (This)->lpVtbl -> SetProperty(This,Type,Value) )
    ( (This)->lpVtbl -> SetText2(This,Flags,bstr) )
    ( (This)->lpVtbl -> UnicodeToHex(This) )
    ( (This)->lpVtbl -> SetInlineObject(This,Type,Align,Char,Char1,Char2,Count,TeXStyle,cCol) )
    ( (This)->lpVtbl -> GetMathFunctionType(This,bstr,pValue) )
    ( (This)->lpVtbl -> InsertImage(This,width,height,ascent,Type,bstrAltText,pStream) )
EXTERN_C const IID IID_ITextSelection2;
    typedef struct ITextSelection2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextSelection2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextSelection2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITextSelection2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITextSelection2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITextSelection2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in ITextSelection2 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                            HRESULT ( STDMETHODCALLTYPE *SetText )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in BSTR bstr);
                            HRESULT ( STDMETHODCALLTYPE *GetChar )(
            __RPC__in ITextSelection2 * This,
                                __RPC__out long *pChar);
                            HRESULT ( STDMETHODCALLTYPE *SetChar )(
            __RPC__in ITextSelection2 * This,
                       long Char);
                            HRESULT ( STDMETHODCALLTYPE *GetDuplicate )(
            __RPC__in ITextSelection2 * This,
                                __RPC__deref_out_opt ITextRange **ppRange);
                            HRESULT ( STDMETHODCALLTYPE *GetFormattedText )(
            __RPC__in ITextSelection2 * This,
                                __RPC__deref_out_opt ITextRange **ppRange);
                            HRESULT ( STDMETHODCALLTYPE *SetFormattedText )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in_opt ITextRange *pRange);
                            HRESULT ( STDMETHODCALLTYPE *GetStart )(
            __RPC__in ITextSelection2 * This,
                                __RPC__out long *pcpFirst);
                            HRESULT ( STDMETHODCALLTYPE *SetStart )(
            __RPC__in ITextSelection2 * This,
                       long cpFirst);
                            HRESULT ( STDMETHODCALLTYPE *GetEnd )(
            __RPC__in ITextSelection2 * This,
                                __RPC__out long *pcpLim);
                            HRESULT ( STDMETHODCALLTYPE *SetEnd )(
            __RPC__in ITextSelection2 * This,
                       long cpLim);
                            HRESULT ( STDMETHODCALLTYPE *GetFont )(
            __RPC__in ITextSelection2 * This,
                                __RPC__deref_out_opt ITextFont **ppFont);
                            HRESULT ( STDMETHODCALLTYPE *SetFont )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in_opt ITextFont *pFont);
                            HRESULT ( STDMETHODCALLTYPE *GetPara )(
            __RPC__in ITextSelection2 * This,
                                __RPC__deref_out_opt ITextPara **ppPara);
                            HRESULT ( STDMETHODCALLTYPE *SetPara )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in_opt ITextPara *pPara);
                            HRESULT ( STDMETHODCALLTYPE *GetStoryLength )(
            __RPC__in ITextSelection2 * This,
                                __RPC__out long *pCount);
                            HRESULT ( STDMETHODCALLTYPE *GetStoryType )(
            __RPC__in ITextSelection2 * This,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *Collapse )(
            __RPC__in ITextSelection2 * This,
                       long bStart);
                   HRESULT ( STDMETHODCALLTYPE *Expand )(
            __RPC__in ITextSelection2 * This,
                       long Unit,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *GetIndex )(
            __RPC__in ITextSelection2 * This,
                       long Unit,
                                __RPC__out long *pIndex);
                   HRESULT ( STDMETHODCALLTYPE *SetIndex )(
            __RPC__in ITextSelection2 * This,
                       long Unit,
                       long Index,
                       long Extend);
                   HRESULT ( STDMETHODCALLTYPE *SetRange )(
            __RPC__in ITextSelection2 * This,
                       long cpAnchor,
                       long cpActive);
                   HRESULT ( STDMETHODCALLTYPE *InRange )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in_opt ITextRange *pRange,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *InStory )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in_opt ITextRange *pRange,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in_opt ITextRange *pRange,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *Select )(
            __RPC__in ITextSelection2 * This);
                   HRESULT ( STDMETHODCALLTYPE *StartOf )(
            __RPC__in ITextSelection2 * This,
                       long Unit,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *EndOf )(
            __RPC__in ITextSelection2 * This,
                       long Unit,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in ITextSelection2 * This,
                       long Unit,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveStart )(
            __RPC__in ITextSelection2 * This,
                       long Unit,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveEnd )(
            __RPC__in ITextSelection2 * This,
                       long Unit,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveWhile )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveStartWhile )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveEndWhile )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveUntil )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveStartUntil )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveEndUntil )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in VARIANT *Cset,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *FindText )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in BSTR bstr,
                       long Count,
                       long Flags,
                                __RPC__out long *pLength);
                   HRESULT ( STDMETHODCALLTYPE *FindTextStart )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in BSTR bstr,
                       long Count,
                       long Flags,
                                __RPC__out long *pLength);
                   HRESULT ( STDMETHODCALLTYPE *FindTextEnd )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in BSTR bstr,
                       long Count,
                       long Flags,
                                __RPC__out long *pLength);
                   HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ITextSelection2 * This,
                       long Unit,
                       long Count,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *Cut )(
            __RPC__in ITextSelection2 * This,
                        __RPC__out VARIANT *pVar);
                   HRESULT ( STDMETHODCALLTYPE *Copy )(
            __RPC__in ITextSelection2 * This,
                        __RPC__out VARIANT *pVar);
                   HRESULT ( STDMETHODCALLTYPE *Paste )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in VARIANT *pVar,
                       long Format);
                   HRESULT ( STDMETHODCALLTYPE *CanPaste )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in VARIANT *pVar,
                       long Format,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *CanEdit )(
            __RPC__in ITextSelection2 * This,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *ChangeCase )(
            __RPC__in ITextSelection2 * This,
                       long Type);
                   HRESULT ( STDMETHODCALLTYPE *GetPoint )(
            __RPC__in ITextSelection2 * This,
                       long Type,
                        __RPC__out long *px,
                        __RPC__out long *py);
                   HRESULT ( STDMETHODCALLTYPE *SetPoint )(
            __RPC__in ITextSelection2 * This,
                       long x,
                       long y,
                       long Type,
                       long Extend);
                   HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )(
            __RPC__in ITextSelection2 * This,
                       long Value);
                   HRESULT ( STDMETHODCALLTYPE *GetEmbeddedObject )(
            __RPC__in ITextSelection2 * This,
                                __RPC__deref_out_opt IUnknown **ppObject);
                            HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            __RPC__in ITextSelection2 * This,
                                __RPC__out long *pFlags);
                            HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            __RPC__in ITextSelection2 * This,
                       long Flags);
                            HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in ITextSelection2 * This,
                                __RPC__out long *pType);
                   HRESULT ( STDMETHODCALLTYPE *MoveLeft )(
            __RPC__in ITextSelection2 * This,
                       long Unit,
                       long Count,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveRight )(
            __RPC__in ITextSelection2 * This,
                       long Unit,
                       long Count,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveUp )(
            __RPC__in ITextSelection2 * This,
                       long Unit,
                       long Count,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *MoveDown )(
            __RPC__in ITextSelection2 * This,
                       long Unit,
                       long Count,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *HomeKey )(
            __RPC__in ITextSelection2 * This,
                       long Unit,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *EndKey )(
            __RPC__in ITextSelection2 * This,
                       long Unit,
                       long Extend,
                                __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *TypeText )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in BSTR bstr);
                            HRESULT ( STDMETHODCALLTYPE *GetCch )(
            __RPC__in ITextSelection2 * This,
                                __RPC__out long *pcch);
                            HRESULT ( STDMETHODCALLTYPE *GetCells )(
            __RPC__in ITextSelection2 * This,
                                __RPC__deref_out_opt IUnknown **ppCells);
                            HRESULT ( STDMETHODCALLTYPE *GetColumn )(
            __RPC__in ITextSelection2 * This,
                                __RPC__deref_out_opt IUnknown **ppColumn);
                            HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ITextSelection2 * This,
                                __RPC__out long *pCount);
                            HRESULT ( STDMETHODCALLTYPE *GetDuplicate2 )(
            __RPC__in ITextSelection2 * This,
                                __RPC__deref_out_opt ITextRange2 **ppRange);
                            HRESULT ( STDMETHODCALLTYPE *GetFont2 )(
            __RPC__in ITextSelection2 * This,
                                __RPC__deref_out_opt ITextFont2 **ppFont);
                            HRESULT ( STDMETHODCALLTYPE *SetFont2 )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in_opt ITextFont2 *pFont);
                            HRESULT ( STDMETHODCALLTYPE *GetFormattedText2 )(
            __RPC__in ITextSelection2 * This,
                                __RPC__deref_out_opt ITextRange2 **ppRange);
                            HRESULT ( STDMETHODCALLTYPE *SetFormattedText2 )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in_opt ITextRange2 *pRange);
                            HRESULT ( STDMETHODCALLTYPE *GetGravity )(
            __RPC__in ITextSelection2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetGravity )(
            __RPC__in ITextSelection2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetPara2 )(
            __RPC__in ITextSelection2 * This,
                                __RPC__deref_out_opt ITextPara2 **ppPara);
                            HRESULT ( STDMETHODCALLTYPE *SetPara2 )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in_opt ITextPara2 *pPara);
                            HRESULT ( STDMETHODCALLTYPE *GetRow )(
            __RPC__in ITextSelection2 * This,
                                __RPC__deref_out_opt ITextRow **ppRow);
                            HRESULT ( STDMETHODCALLTYPE *GetStartPara )(
            __RPC__in ITextSelection2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *GetTable )(
            __RPC__in ITextSelection2 * This,
                                __RPC__deref_out_opt IUnknown **ppTable);
                            HRESULT ( STDMETHODCALLTYPE *GetURL )(
            __RPC__in ITextSelection2 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                            HRESULT ( STDMETHODCALLTYPE *SetURL )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in BSTR bstr);
                   HRESULT ( STDMETHODCALLTYPE *AddSubrange )(
            __RPC__in ITextSelection2 * This,
                       long cp1,
                       long cp2,
                       long Activate);
                   HRESULT ( STDMETHODCALLTYPE *BuildUpMath )(
            __RPC__in ITextSelection2 * This,
                       long Flags);
                   HRESULT ( STDMETHODCALLTYPE *DeleteSubrange )(
            __RPC__in ITextSelection2 * This,
                       long cpFirst,
                       long cpLim);
                   HRESULT ( STDMETHODCALLTYPE *Find )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in_opt ITextRange2 *pRange,
                       long Count,
                       long Flags,
                        __RPC__out long *pDelta);
                   HRESULT ( STDMETHODCALLTYPE *GetChar2 )(
            __RPC__in ITextSelection2 * This,
                        __RPC__out long *pChar,
                       long Offset);
                   HRESULT ( STDMETHODCALLTYPE *GetDropCap )(
            __RPC__in ITextSelection2 * This,
                        __RPC__out long *pcLine,
                        __RPC__out long *pPosition);
                   HRESULT ( STDMETHODCALLTYPE *GetInlineObject )(
            __RPC__in ITextSelection2 * This,
                        __RPC__out long *pType,
                        __RPC__out long *pAlign,
                        __RPC__out long *pChar,
                        __RPC__out long *pChar1,
                        __RPC__out long *pChar2,
                        __RPC__out long *pCount,
                        __RPC__out long *pTeXStyle,
                        __RPC__out long *pcCol,
                        __RPC__out long *pLevel);
                   HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in ITextSelection2 * This,
                       long Type,
                        __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *GetRect )(
            __RPC__in ITextSelection2 * This,
                       long Type,
                        __RPC__out long *pLeft,
                        __RPC__out long *pTop,
                        __RPC__out long *pRight,
                        __RPC__out long *pBottom,
                        __RPC__out long *pHit);
                   HRESULT ( STDMETHODCALLTYPE *GetSubrange )(
            __RPC__in ITextSelection2 * This,
                       long iSubrange,
                        __RPC__out long *pcpFirst,
                        __RPC__out long *pcpLim);
                   HRESULT ( STDMETHODCALLTYPE *GetText2 )(
            __RPC__in ITextSelection2 * This,
                       long Flags,
                        __RPC__deref_out_opt BSTR *pbstr);
                   HRESULT ( STDMETHODCALLTYPE *HexToUnicode )(
            __RPC__in ITextSelection2 * This);
                   HRESULT ( STDMETHODCALLTYPE *InsertTable )(
            __RPC__in ITextSelection2 * This,
                       long cCol,
                       long cRow,
                       long AutoFit);
                   HRESULT ( STDMETHODCALLTYPE *Linearize )(
            __RPC__in ITextSelection2 * This,
                       long Flags);
                   HRESULT ( STDMETHODCALLTYPE *SetActiveSubrange )(
            __RPC__in ITextSelection2 * This,
                       long cpAnchor,
                       long cpActive);
                   HRESULT ( STDMETHODCALLTYPE *SetDropCap )(
            __RPC__in ITextSelection2 * This,
                       long cLine,
                       long Position);
                   HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in ITextSelection2 * This,
                       long Type,
                       long Value);
                   HRESULT ( STDMETHODCALLTYPE *SetText2 )(
            __RPC__in ITextSelection2 * This,
                       long Flags,
                       __RPC__in BSTR bstr);
                   HRESULT ( STDMETHODCALLTYPE *UnicodeToHex )(
            __RPC__in ITextSelection2 * This);
                   HRESULT ( STDMETHODCALLTYPE *SetInlineObject )(
            __RPC__in ITextSelection2 * This,
                       long Type,
                       long Align,
                       long Char,
                       long Char1,
                       long Char2,
                       long Count,
                       long TeXStyle,
                       long cCol);
                   HRESULT ( STDMETHODCALLTYPE *GetMathFunctionType )(
            __RPC__in ITextSelection2 * This,
                       __RPC__in BSTR bstr,
                        __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *InsertImage )(
            __RPC__in ITextSelection2 * This,
                       long width,
                       long height,
                       long ascent,
                       long Type,
                       __RPC__in BSTR bstrAltText,
                       __RPC__in_opt IStream *pStream);
        END_INTERFACE
    } ITextSelection2Vtbl;
    interface ITextSelection2
    {
        CONST_VTBL struct ITextSelection2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetText(This,pbstr) )
    ( (This)->lpVtbl -> SetText(This,bstr) )
    ( (This)->lpVtbl -> GetChar(This,pChar) )
    ( (This)->lpVtbl -> SetChar(This,Char) )
    ( (This)->lpVtbl -> GetDuplicate(This,ppRange) )
    ( (This)->lpVtbl -> GetFormattedText(This,ppRange) )
    ( (This)->lpVtbl -> SetFormattedText(This,pRange) )
    ( (This)->lpVtbl -> GetStart(This,pcpFirst) )
    ( (This)->lpVtbl -> SetStart(This,cpFirst) )
    ( (This)->lpVtbl -> GetEnd(This,pcpLim) )
    ( (This)->lpVtbl -> SetEnd(This,cpLim) )
    ( (This)->lpVtbl -> GetFont(This,ppFont) )
    ( (This)->lpVtbl -> SetFont(This,pFont) )
    ( (This)->lpVtbl -> GetPara(This,ppPara) )
    ( (This)->lpVtbl -> SetPara(This,pPara) )
    ( (This)->lpVtbl -> GetStoryLength(This,pCount) )
    ( (This)->lpVtbl -> GetStoryType(This,pValue) )
    ( (This)->lpVtbl -> Collapse(This,bStart) )
    ( (This)->lpVtbl -> Expand(This,Unit,pDelta) )
    ( (This)->lpVtbl -> GetIndex(This,Unit,pIndex) )
    ( (This)->lpVtbl -> SetIndex(This,Unit,Index,Extend) )
    ( (This)->lpVtbl -> SetRange(This,cpAnchor,cpActive) )
    ( (This)->lpVtbl -> InRange(This,pRange,pValue) )
    ( (This)->lpVtbl -> InStory(This,pRange,pValue) )
    ( (This)->lpVtbl -> IsEqual(This,pRange,pValue) )
    ( (This)->lpVtbl -> Select(This) )
    ( (This)->lpVtbl -> StartOf(This,Unit,Extend,pDelta) )
    ( (This)->lpVtbl -> EndOf(This,Unit,Extend,pDelta) )
    ( (This)->lpVtbl -> Move(This,Unit,Count,pDelta) )
    ( (This)->lpVtbl -> MoveStart(This,Unit,Count,pDelta) )
    ( (This)->lpVtbl -> MoveEnd(This,Unit,Count,pDelta) )
    ( (This)->lpVtbl -> MoveWhile(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveStartWhile(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveEndWhile(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveUntil(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveStartUntil(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> MoveEndUntil(This,Cset,Count,pDelta) )
    ( (This)->lpVtbl -> FindText(This,bstr,Count,Flags,pLength) )
    ( (This)->lpVtbl -> FindTextStart(This,bstr,Count,Flags,pLength) )
    ( (This)->lpVtbl -> FindTextEnd(This,bstr,Count,Flags,pLength) )
    ( (This)->lpVtbl -> Delete(This,Unit,Count,pDelta) )
    ( (This)->lpVtbl -> Cut(This,pVar) )
    ( (This)->lpVtbl -> Copy(This,pVar) )
    ( (This)->lpVtbl -> Paste(This,pVar,Format) )
    ( (This)->lpVtbl -> CanPaste(This,pVar,Format,pValue) )
    ( (This)->lpVtbl -> CanEdit(This,pValue) )
    ( (This)->lpVtbl -> ChangeCase(This,Type) )
    ( (This)->lpVtbl -> GetPoint(This,Type,px,py) )
    ( (This)->lpVtbl -> SetPoint(This,x,y,Type,Extend) )
    ( (This)->lpVtbl -> ScrollIntoView(This,Value) )
    ( (This)->lpVtbl -> GetEmbeddedObject(This,ppObject) )
    ( (This)->lpVtbl -> GetFlags(This,pFlags) )
    ( (This)->lpVtbl -> SetFlags(This,Flags) )
    ( (This)->lpVtbl -> GetType(This,pType) )
    ( (This)->lpVtbl -> MoveLeft(This,Unit,Count,Extend,pDelta) )
    ( (This)->lpVtbl -> MoveRight(This,Unit,Count,Extend,pDelta) )
    ( (This)->lpVtbl -> MoveUp(This,Unit,Count,Extend,pDelta) )
    ( (This)->lpVtbl -> MoveDown(This,Unit,Count,Extend,pDelta) )
    ( (This)->lpVtbl -> HomeKey(This,Unit,Extend,pDelta) )
    ( (This)->lpVtbl -> EndKey(This,Unit,Extend,pDelta) )
    ( (This)->lpVtbl -> TypeText(This,bstr) )
    ( (This)->lpVtbl -> GetCch(This,pcch) )
    ( (This)->lpVtbl -> GetCells(This,ppCells) )
    ( (This)->lpVtbl -> GetColumn(This,ppColumn) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
    ( (This)->lpVtbl -> GetDuplicate2(This,ppRange) )
    ( (This)->lpVtbl -> GetFont2(This,ppFont) )
    ( (This)->lpVtbl -> SetFont2(This,pFont) )
    ( (This)->lpVtbl -> GetFormattedText2(This,ppRange) )
    ( (This)->lpVtbl -> SetFormattedText2(This,pRange) )
    ( (This)->lpVtbl -> GetGravity(This,pValue) )
    ( (This)->lpVtbl -> SetGravity(This,Value) )
    ( (This)->lpVtbl -> GetPara2(This,ppPara) )
    ( (This)->lpVtbl -> SetPara2(This,pPara) )
    ( (This)->lpVtbl -> GetRow(This,ppRow) )
    ( (This)->lpVtbl -> GetStartPara(This,pValue) )
    ( (This)->lpVtbl -> GetTable(This,ppTable) )
    ( (This)->lpVtbl -> GetURL(This,pbstr) )
    ( (This)->lpVtbl -> SetURL(This,bstr) )
    ( (This)->lpVtbl -> AddSubrange(This,cp1,cp2,Activate) )
    ( (This)->lpVtbl -> BuildUpMath(This,Flags) )
    ( (This)->lpVtbl -> DeleteSubrange(This,cpFirst,cpLim) )
    ( (This)->lpVtbl -> Find(This,pRange,Count,Flags,pDelta) )
    ( (This)->lpVtbl -> GetChar2(This,pChar,Offset) )
    ( (This)->lpVtbl -> GetDropCap(This,pcLine,pPosition) )
    ( (This)->lpVtbl -> GetInlineObject(This,pType,pAlign,pChar,pChar1,pChar2,pCount,pTeXStyle,pcCol,pLevel) )
    ( (This)->lpVtbl -> GetProperty(This,Type,pValue) )
    ( (This)->lpVtbl -> GetRect(This,Type,pLeft,pTop,pRight,pBottom,pHit) )
    ( (This)->lpVtbl -> GetSubrange(This,iSubrange,pcpFirst,pcpLim) )
    ( (This)->lpVtbl -> GetText2(This,Flags,pbstr) )
    ( (This)->lpVtbl -> HexToUnicode(This) )
    ( (This)->lpVtbl -> InsertTable(This,cCol,cRow,AutoFit) )
    ( (This)->lpVtbl -> Linearize(This,Flags) )
    ( (This)->lpVtbl -> SetActiveSubrange(This,cpAnchor,cpActive) )
    ( (This)->lpVtbl -> SetDropCap(This,cLine,Position) )
    ( (This)->lpVtbl -> SetProperty(This,Type,Value) )
    ( (This)->lpVtbl -> SetText2(This,Flags,bstr) )
    ( (This)->lpVtbl -> UnicodeToHex(This) )
    ( (This)->lpVtbl -> SetInlineObject(This,Type,Align,Char,Char1,Char2,Count,TeXStyle,cCol) )
    ( (This)->lpVtbl -> GetMathFunctionType(This,bstr,pValue) )
    ( (This)->lpVtbl -> InsertImage(This,width,height,ascent,Type,bstrAltText,pStream) )
EXTERN_C const IID IID_ITextFont2;
    typedef struct ITextFont2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextFont2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextFont2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextFont2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITextFont2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITextFont2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITextFont2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITextFont2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *GetDuplicate )(
            __RPC__in ITextFont2 * This,
                                __RPC__deref_out_opt ITextFont **ppFont);
                            HRESULT ( STDMETHODCALLTYPE *SetDuplicate )(
            __RPC__in ITextFont2 * This,
                       __RPC__in_opt ITextFont *pFont);
                   HRESULT ( STDMETHODCALLTYPE *CanChange )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            __RPC__in ITextFont2 * This,
                       __RPC__in_opt ITextFont *pFont,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetStyle )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetStyle )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetAllCaps )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetAllCaps )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetAnimation )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetAnimation )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetBackColor )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetBackColor )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetBold )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetBold )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetEmboss )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetEmboss )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetForeColor )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetForeColor )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetHidden )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetHidden )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetEngrave )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetEngrave )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetItalic )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetItalic )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetKerning )(
            __RPC__in ITextFont2 * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetKerning )(
            __RPC__in ITextFont2 * This,
                       float Value);
                            HRESULT ( STDMETHODCALLTYPE *GetLanguageID )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetLanguageID )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in ITextFont2 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                            HRESULT ( STDMETHODCALLTYPE *SetName )(
            __RPC__in ITextFont2 * This,
                       __RPC__in BSTR bstr);
                            HRESULT ( STDMETHODCALLTYPE *GetOutline )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetOutline )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetPosition )(
            __RPC__in ITextFont2 * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetPosition )(
            __RPC__in ITextFont2 * This,
                       float Value);
                            HRESULT ( STDMETHODCALLTYPE *GetProtected )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetProtected )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetShadow )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetShadow )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in ITextFont2 * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSize )(
            __RPC__in ITextFont2 * This,
                       float Value);
                            HRESULT ( STDMETHODCALLTYPE *GetSmallCaps )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSmallCaps )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetSpacing )(
            __RPC__in ITextFont2 * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSpacing )(
            __RPC__in ITextFont2 * This,
                       float Value);
                            HRESULT ( STDMETHODCALLTYPE *GetStrikeThrough )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetStrikeThrough )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetSubscript )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSubscript )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetSuperscript )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSuperscript )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetUnderline )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetUnderline )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetWeight )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetWeight )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pCount);
                            HRESULT ( STDMETHODCALLTYPE *GetAutoLigatures )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetAutoLigatures )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetAutospaceAlpha )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetAutospaceAlpha )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetAutospaceNumeric )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetAutospaceNumeric )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetAutospaceParens )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetAutospaceParens )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetCharRep )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetCharRep )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetCompressionMode )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetCompressionMode )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetCookie )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetCookie )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetDoubleStrike )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetDoubleStrike )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetDuplicate2 )(
            __RPC__in ITextFont2 * This,
                                __RPC__deref_out_opt ITextFont2 **ppFont);
                            HRESULT ( STDMETHODCALLTYPE *SetDuplicate2 )(
            __RPC__in ITextFont2 * This,
                       __RPC__in_opt ITextFont2 *pFont);
                            HRESULT ( STDMETHODCALLTYPE *GetLinkType )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *GetMathZone )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetMathZone )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetModWidthPairs )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetModWidthPairs )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetModWidthSpace )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetModWidthSpace )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetOldNumbers )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetOldNumbers )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetOverlapping )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetOverlapping )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetPositionSubSuper )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetPositionSubSuper )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetScaling )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetScaling )(
            __RPC__in ITextFont2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetSpaceExtension )(
            __RPC__in ITextFont2 * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSpaceExtension )(
            __RPC__in ITextFont2 * This,
                       float Value);
                            HRESULT ( STDMETHODCALLTYPE *GetUnderlinePositionMode )(
            __RPC__in ITextFont2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetUnderlinePositionMode )(
            __RPC__in ITextFont2 * This,
                       long Value);
                   HRESULT ( STDMETHODCALLTYPE *GetEffects )(
            __RPC__in ITextFont2 * This,
                        __RPC__out long *pValue,
                        __RPC__out long *pMask);
                   HRESULT ( STDMETHODCALLTYPE *GetEffects2 )(
            __RPC__in ITextFont2 * This,
                        __RPC__out long *pValue,
                        __RPC__out long *pMask);
                   HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in ITextFont2 * This,
                       long Type,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *GetPropertyInfo )(
            __RPC__in ITextFont2 * This,
                       long Index,
                        __RPC__out long *pType,
                        __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *IsEqual2 )(
            __RPC__in ITextFont2 * This,
                       __RPC__in_opt ITextFont2 *pFont,
                                __RPC__out long *pB);
                   HRESULT ( STDMETHODCALLTYPE *SetEffects )(
            __RPC__in ITextFont2 * This,
                       long Value,
                       long Mask);
                   HRESULT ( STDMETHODCALLTYPE *SetEffects2 )(
            __RPC__in ITextFont2 * This,
                       long Value,
                       long Mask);
                   HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in ITextFont2 * This,
                       long Type,
                       long Value);
        END_INTERFACE
    } ITextFont2Vtbl;
    interface ITextFont2
    {
        CONST_VTBL struct ITextFont2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetDuplicate(This,ppFont) )
    ( (This)->lpVtbl -> SetDuplicate(This,pFont) )
    ( (This)->lpVtbl -> CanChange(This,pValue) )
    ( (This)->lpVtbl -> IsEqual(This,pFont,pValue) )
    ( (This)->lpVtbl -> Reset(This,Value) )
    ( (This)->lpVtbl -> GetStyle(This,pValue) )
    ( (This)->lpVtbl -> SetStyle(This,Value) )
    ( (This)->lpVtbl -> GetAllCaps(This,pValue) )
    ( (This)->lpVtbl -> SetAllCaps(This,Value) )
    ( (This)->lpVtbl -> GetAnimation(This,pValue) )
    ( (This)->lpVtbl -> SetAnimation(This,Value) )
    ( (This)->lpVtbl -> GetBackColor(This,pValue) )
    ( (This)->lpVtbl -> SetBackColor(This,Value) )
    ( (This)->lpVtbl -> GetBold(This,pValue) )
    ( (This)->lpVtbl -> SetBold(This,Value) )
    ( (This)->lpVtbl -> GetEmboss(This,pValue) )
    ( (This)->lpVtbl -> SetEmboss(This,Value) )
    ( (This)->lpVtbl -> GetForeColor(This,pValue) )
    ( (This)->lpVtbl -> SetForeColor(This,Value) )
    ( (This)->lpVtbl -> GetHidden(This,pValue) )
    ( (This)->lpVtbl -> SetHidden(This,Value) )
    ( (This)->lpVtbl -> GetEngrave(This,pValue) )
    ( (This)->lpVtbl -> SetEngrave(This,Value) )
    ( (This)->lpVtbl -> GetItalic(This,pValue) )
    ( (This)->lpVtbl -> SetItalic(This,Value) )
    ( (This)->lpVtbl -> GetKerning(This,pValue) )
    ( (This)->lpVtbl -> SetKerning(This,Value) )
    ( (This)->lpVtbl -> GetLanguageID(This,pValue) )
    ( (This)->lpVtbl -> SetLanguageID(This,Value) )
    ( (This)->lpVtbl -> GetName(This,pbstr) )
    ( (This)->lpVtbl -> SetName(This,bstr) )
    ( (This)->lpVtbl -> GetOutline(This,pValue) )
    ( (This)->lpVtbl -> SetOutline(This,Value) )
    ( (This)->lpVtbl -> GetPosition(This,pValue) )
    ( (This)->lpVtbl -> SetPosition(This,Value) )
    ( (This)->lpVtbl -> GetProtected(This,pValue) )
    ( (This)->lpVtbl -> SetProtected(This,Value) )
    ( (This)->lpVtbl -> GetShadow(This,pValue) )
    ( (This)->lpVtbl -> SetShadow(This,Value) )
    ( (This)->lpVtbl -> GetSize(This,pValue) )
    ( (This)->lpVtbl -> SetSize(This,Value) )
    ( (This)->lpVtbl -> GetSmallCaps(This,pValue) )
    ( (This)->lpVtbl -> SetSmallCaps(This,Value) )
    ( (This)->lpVtbl -> GetSpacing(This,pValue) )
    ( (This)->lpVtbl -> SetSpacing(This,Value) )
    ( (This)->lpVtbl -> GetStrikeThrough(This,pValue) )
    ( (This)->lpVtbl -> SetStrikeThrough(This,Value) )
    ( (This)->lpVtbl -> GetSubscript(This,pValue) )
    ( (This)->lpVtbl -> SetSubscript(This,Value) )
    ( (This)->lpVtbl -> GetSuperscript(This,pValue) )
    ( (This)->lpVtbl -> SetSuperscript(This,Value) )
    ( (This)->lpVtbl -> GetUnderline(This,pValue) )
    ( (This)->lpVtbl -> SetUnderline(This,Value) )
    ( (This)->lpVtbl -> GetWeight(This,pValue) )
    ( (This)->lpVtbl -> SetWeight(This,Value) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
    ( (This)->lpVtbl -> GetAutoLigatures(This,pValue) )
    ( (This)->lpVtbl -> SetAutoLigatures(This,Value) )
    ( (This)->lpVtbl -> GetAutospaceAlpha(This,pValue) )
    ( (This)->lpVtbl -> SetAutospaceAlpha(This,Value) )
    ( (This)->lpVtbl -> GetAutospaceNumeric(This,pValue) )
    ( (This)->lpVtbl -> SetAutospaceNumeric(This,Value) )
    ( (This)->lpVtbl -> GetAutospaceParens(This,pValue) )
    ( (This)->lpVtbl -> SetAutospaceParens(This,Value) )
    ( (This)->lpVtbl -> GetCharRep(This,pValue) )
    ( (This)->lpVtbl -> SetCharRep(This,Value) )
    ( (This)->lpVtbl -> GetCompressionMode(This,pValue) )
    ( (This)->lpVtbl -> SetCompressionMode(This,Value) )
    ( (This)->lpVtbl -> GetCookie(This,pValue) )
    ( (This)->lpVtbl -> SetCookie(This,Value) )
    ( (This)->lpVtbl -> GetDoubleStrike(This,pValue) )
    ( (This)->lpVtbl -> SetDoubleStrike(This,Value) )
    ( (This)->lpVtbl -> GetDuplicate2(This,ppFont) )
    ( (This)->lpVtbl -> SetDuplicate2(This,pFont) )
    ( (This)->lpVtbl -> GetLinkType(This,pValue) )
    ( (This)->lpVtbl -> GetMathZone(This,pValue) )
    ( (This)->lpVtbl -> SetMathZone(This,Value) )
    ( (This)->lpVtbl -> GetModWidthPairs(This,pValue) )
    ( (This)->lpVtbl -> SetModWidthPairs(This,Value) )
    ( (This)->lpVtbl -> GetModWidthSpace(This,pValue) )
    ( (This)->lpVtbl -> SetModWidthSpace(This,Value) )
    ( (This)->lpVtbl -> GetOldNumbers(This,pValue) )
    ( (This)->lpVtbl -> SetOldNumbers(This,Value) )
    ( (This)->lpVtbl -> GetOverlapping(This,pValue) )
    ( (This)->lpVtbl -> SetOverlapping(This,Value) )
    ( (This)->lpVtbl -> GetPositionSubSuper(This,pValue) )
    ( (This)->lpVtbl -> SetPositionSubSuper(This,Value) )
    ( (This)->lpVtbl -> GetScaling(This,pValue) )
    ( (This)->lpVtbl -> SetScaling(This,Value) )
    ( (This)->lpVtbl -> GetSpaceExtension(This,pValue) )
    ( (This)->lpVtbl -> SetSpaceExtension(This,Value) )
    ( (This)->lpVtbl -> GetUnderlinePositionMode(This,pValue) )
    ( (This)->lpVtbl -> SetUnderlinePositionMode(This,Value) )
    ( (This)->lpVtbl -> GetEffects(This,pValue,pMask) )
    ( (This)->lpVtbl -> GetEffects2(This,pValue,pMask) )
    ( (This)->lpVtbl -> GetProperty(This,Type,pValue) )
    ( (This)->lpVtbl -> GetPropertyInfo(This,Index,pType,pValue) )
    ( (This)->lpVtbl -> IsEqual2(This,pFont,pB) )
    ( (This)->lpVtbl -> SetEffects(This,Value,Mask) )
    ( (This)->lpVtbl -> SetEffects2(This,Value,Mask) )
    ( (This)->lpVtbl -> SetProperty(This,Type,Value) )
EXTERN_C const IID IID_ITextPara2;
    typedef struct ITextPara2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextPara2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextPara2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextPara2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITextPara2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITextPara2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITextPara2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITextPara2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *GetDuplicate )(
            __RPC__in ITextPara2 * This,
                                __RPC__deref_out_opt ITextPara **ppPara);
                            HRESULT ( STDMETHODCALLTYPE *SetDuplicate )(
            __RPC__in ITextPara2 * This,
                       __RPC__in_opt ITextPara *pPara);
                   HRESULT ( STDMETHODCALLTYPE *CanChange )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            __RPC__in ITextPara2 * This,
                       __RPC__in_opt ITextPara *pPara,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ITextPara2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetStyle )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetStyle )(
            __RPC__in ITextPara2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetAlignment )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetAlignment )(
            __RPC__in ITextPara2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetHyphenation )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetHyphenation )(
            __RPC__in ITextPara2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetFirstLineIndent )(
            __RPC__in ITextPara2 * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *GetKeepTogether )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetKeepTogether )(
            __RPC__in ITextPara2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetKeepWithNext )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetKeepWithNext )(
            __RPC__in ITextPara2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetLeftIndent )(
            __RPC__in ITextPara2 * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *GetLineSpacing )(
            __RPC__in ITextPara2 * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *GetLineSpacingRule )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *GetListAlignment )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetListAlignment )(
            __RPC__in ITextPara2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetListLevelIndex )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetListLevelIndex )(
            __RPC__in ITextPara2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetListStart )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetListStart )(
            __RPC__in ITextPara2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetListTab )(
            __RPC__in ITextPara2 * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetListTab )(
            __RPC__in ITextPara2 * This,
                       float Value);
                            HRESULT ( STDMETHODCALLTYPE *GetListType )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetListType )(
            __RPC__in ITextPara2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetNoLineNumber )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetNoLineNumber )(
            __RPC__in ITextPara2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetPageBreakBefore )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetPageBreakBefore )(
            __RPC__in ITextPara2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetRightIndent )(
            __RPC__in ITextPara2 * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetRightIndent )(
            __RPC__in ITextPara2 * This,
                       float Value);
                   HRESULT ( STDMETHODCALLTYPE *SetIndents )(
            __RPC__in ITextPara2 * This,
                       float First,
                       float Left,
                       float Right);
                   HRESULT ( STDMETHODCALLTYPE *SetLineSpacing )(
            __RPC__in ITextPara2 * This,
                       long Rule,
                       float Spacing);
                            HRESULT ( STDMETHODCALLTYPE *GetSpaceAfter )(
            __RPC__in ITextPara2 * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSpaceAfter )(
            __RPC__in ITextPara2 * This,
                       float Value);
                            HRESULT ( STDMETHODCALLTYPE *GetSpaceBefore )(
            __RPC__in ITextPara2 * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSpaceBefore )(
            __RPC__in ITextPara2 * This,
                       float Value);
                            HRESULT ( STDMETHODCALLTYPE *GetWidowControl )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetWidowControl )(
            __RPC__in ITextPara2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetTabCount )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pCount);
                   HRESULT ( STDMETHODCALLTYPE *AddTab )(
            __RPC__in ITextPara2 * This,
                       float tbPos,
                       long tbAlign,
                       long tbLeader);
                   HRESULT ( STDMETHODCALLTYPE *ClearAllTabs )(
            __RPC__in ITextPara2 * This);
                   HRESULT ( STDMETHODCALLTYPE *DeleteTab )(
            __RPC__in ITextPara2 * This,
                       float tbPos);
                   HRESULT ( STDMETHODCALLTYPE *GetTab )(
            __RPC__in ITextPara2 * This,
                       long iTab,
                        __RPC__out float *ptbPos,
                        __RPC__out long *ptbAlign,
                        __RPC__out long *ptbLeader);
                            HRESULT ( STDMETHODCALLTYPE *GetBorders )(
            __RPC__in ITextPara2 * This,
                                __RPC__deref_out_opt IUnknown **ppBorders);
                            HRESULT ( STDMETHODCALLTYPE *GetDuplicate2 )(
            __RPC__in ITextPara2 * This,
                                __RPC__deref_out_opt ITextPara2 **ppPara);
                            HRESULT ( STDMETHODCALLTYPE *SetDuplicate2 )(
            __RPC__in ITextPara2 * This,
                       __RPC__in_opt ITextPara2 *pPara);
                            HRESULT ( STDMETHODCALLTYPE *GetFontAlignment )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetFontAlignment )(
            __RPC__in ITextPara2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetHangingPunctuation )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetHangingPunctuation )(
            __RPC__in ITextPara2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetSnapToGrid )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSnapToGrid )(
            __RPC__in ITextPara2 * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetTrimPunctuationAtStart )(
            __RPC__in ITextPara2 * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetTrimPunctuationAtStart )(
            __RPC__in ITextPara2 * This,
                       long Value);
                   HRESULT ( STDMETHODCALLTYPE *GetEffects )(
            __RPC__in ITextPara2 * This,
                        __RPC__out long *pValue,
                        __RPC__out long *pMask);
                   HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in ITextPara2 * This,
                       long Type,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *IsEqual2 )(
            __RPC__in ITextPara2 * This,
                       __RPC__in_opt ITextPara2 *pPara,
                                __RPC__out long *pB);
                   HRESULT ( STDMETHODCALLTYPE *SetEffects )(
            __RPC__in ITextPara2 * This,
                       long Value,
                       long Mask);
                   HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in ITextPara2 * This,
                       long Type,
                       long Value);
        END_INTERFACE
    } ITextPara2Vtbl;
    interface ITextPara2
    {
        CONST_VTBL struct ITextPara2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetDuplicate(This,ppPara) )
    ( (This)->lpVtbl -> SetDuplicate(This,pPara) )
    ( (This)->lpVtbl -> CanChange(This,pValue) )
    ( (This)->lpVtbl -> IsEqual(This,pPara,pValue) )
    ( (This)->lpVtbl -> Reset(This,Value) )
    ( (This)->lpVtbl -> GetStyle(This,pValue) )
    ( (This)->lpVtbl -> SetStyle(This,Value) )
    ( (This)->lpVtbl -> GetAlignment(This,pValue) )
    ( (This)->lpVtbl -> SetAlignment(This,Value) )
    ( (This)->lpVtbl -> GetHyphenation(This,pValue) )
    ( (This)->lpVtbl -> SetHyphenation(This,Value) )
    ( (This)->lpVtbl -> GetFirstLineIndent(This,pValue) )
    ( (This)->lpVtbl -> GetKeepTogether(This,pValue) )
    ( (This)->lpVtbl -> SetKeepTogether(This,Value) )
    ( (This)->lpVtbl -> GetKeepWithNext(This,pValue) )
    ( (This)->lpVtbl -> SetKeepWithNext(This,Value) )
    ( (This)->lpVtbl -> GetLeftIndent(This,pValue) )
    ( (This)->lpVtbl -> GetLineSpacing(This,pValue) )
    ( (This)->lpVtbl -> GetLineSpacingRule(This,pValue) )
    ( (This)->lpVtbl -> GetListAlignment(This,pValue) )
    ( (This)->lpVtbl -> SetListAlignment(This,Value) )
    ( (This)->lpVtbl -> GetListLevelIndex(This,pValue) )
    ( (This)->lpVtbl -> SetListLevelIndex(This,Value) )
    ( (This)->lpVtbl -> GetListStart(This,pValue) )
    ( (This)->lpVtbl -> SetListStart(This,Value) )
    ( (This)->lpVtbl -> GetListTab(This,pValue) )
    ( (This)->lpVtbl -> SetListTab(This,Value) )
    ( (This)->lpVtbl -> GetListType(This,pValue) )
    ( (This)->lpVtbl -> SetListType(This,Value) )
    ( (This)->lpVtbl -> GetNoLineNumber(This,pValue) )
    ( (This)->lpVtbl -> SetNoLineNumber(This,Value) )
    ( (This)->lpVtbl -> GetPageBreakBefore(This,pValue) )
    ( (This)->lpVtbl -> SetPageBreakBefore(This,Value) )
    ( (This)->lpVtbl -> GetRightIndent(This,pValue) )
    ( (This)->lpVtbl -> SetRightIndent(This,Value) )
    ( (This)->lpVtbl -> SetIndents(This,First,Left,Right) )
    ( (This)->lpVtbl -> SetLineSpacing(This,Rule,Spacing) )
    ( (This)->lpVtbl -> GetSpaceAfter(This,pValue) )
    ( (This)->lpVtbl -> SetSpaceAfter(This,Value) )
    ( (This)->lpVtbl -> GetSpaceBefore(This,pValue) )
    ( (This)->lpVtbl -> SetSpaceBefore(This,Value) )
    ( (This)->lpVtbl -> GetWidowControl(This,pValue) )
    ( (This)->lpVtbl -> SetWidowControl(This,Value) )
    ( (This)->lpVtbl -> GetTabCount(This,pCount) )
    ( (This)->lpVtbl -> AddTab(This,tbPos,tbAlign,tbLeader) )
    ( (This)->lpVtbl -> ClearAllTabs(This) )
    ( (This)->lpVtbl -> DeleteTab(This,tbPos) )
    ( (This)->lpVtbl -> GetTab(This,iTab,ptbPos,ptbAlign,ptbLeader) )
    ( (This)->lpVtbl -> GetBorders(This,ppBorders) )
    ( (This)->lpVtbl -> GetDuplicate2(This,ppPara) )
    ( (This)->lpVtbl -> SetDuplicate2(This,pPara) )
    ( (This)->lpVtbl -> GetFontAlignment(This,pValue) )
    ( (This)->lpVtbl -> SetFontAlignment(This,Value) )
    ( (This)->lpVtbl -> GetHangingPunctuation(This,pValue) )
    ( (This)->lpVtbl -> SetHangingPunctuation(This,Value) )
    ( (This)->lpVtbl -> GetSnapToGrid(This,pValue) )
    ( (This)->lpVtbl -> SetSnapToGrid(This,Value) )
    ( (This)->lpVtbl -> GetTrimPunctuationAtStart(This,pValue) )
    ( (This)->lpVtbl -> SetTrimPunctuationAtStart(This,Value) )
    ( (This)->lpVtbl -> GetEffects(This,pValue,pMask) )
    ( (This)->lpVtbl -> GetProperty(This,Type,pValue) )
    ( (This)->lpVtbl -> IsEqual2(This,pPara,pB) )
    ( (This)->lpVtbl -> SetEffects(This,Value,Mask) )
    ( (This)->lpVtbl -> SetProperty(This,Type,Value) )
EXTERN_C const IID IID_ITextStoryRanges2;
    typedef struct ITextStoryRanges2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextStoryRanges2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextStoryRanges2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextStoryRanges2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITextStoryRanges2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITextStoryRanges2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITextStoryRanges2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITextStoryRanges2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in ITextStoryRanges2 * This,
                                __RPC__deref_out_opt IUnknown **ppunkEnum);
                   HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in ITextStoryRanges2 * This,
                       long Index,
                                __RPC__deref_out_opt ITextRange **ppRange);
                            HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ITextStoryRanges2 * This,
                                __RPC__out long *pCount);
                   HRESULT ( STDMETHODCALLTYPE *Item2 )(
            __RPC__in ITextStoryRanges2 * This,
                       long Index,
                                __RPC__deref_out_opt ITextRange2 **ppRange);
        END_INTERFACE
    } ITextStoryRanges2Vtbl;
    interface ITextStoryRanges2
    {
        CONST_VTBL struct ITextStoryRanges2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> _NewEnum(This,ppunkEnum) )
    ( (This)->lpVtbl -> Item(This,Index,ppRange) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
    ( (This)->lpVtbl -> Item2(This,Index,ppRange) )
EXTERN_C const IID IID_ITextStory;
    typedef struct ITextStoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextStory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextStory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextStory * This);
                            HRESULT ( STDMETHODCALLTYPE *GetActive )(
            __RPC__in ITextStory * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetActive )(
            __RPC__in ITextStory * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetDisplay )(
            __RPC__in ITextStory * This,
                                __RPC__deref_out_opt IUnknown **ppDisplay);
                            HRESULT ( STDMETHODCALLTYPE *GetIndex )(
            __RPC__in ITextStory * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in ITextStory * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetType )(
            __RPC__in ITextStory * This,
                       long Value);
                   HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in ITextStory * This,
                       long Type,
                        __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *GetRange )(
            __RPC__in ITextStory * This,
                       long cpActive,
                       long cpAnchor,
                                __RPC__deref_out_opt ITextRange2 **ppRange);
                   HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in ITextStory * This,
                       long Flags,
                                __RPC__deref_out_opt BSTR *pbstr);
                   HRESULT ( STDMETHODCALLTYPE *SetFormattedText )(
            __RPC__in ITextStory * This,
                       __RPC__in_opt IUnknown *pUnk);
                   HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in ITextStory * This,
                       long Type,
                       long Value);
                   HRESULT ( STDMETHODCALLTYPE *SetText )(
            __RPC__in ITextStory * This,
                       long Flags,
                       __RPC__in BSTR bstr);
        END_INTERFACE
    } ITextStoryVtbl;
    interface ITextStory
    {
        CONST_VTBL struct ITextStoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetActive(This,pValue) )
    ( (This)->lpVtbl -> SetActive(This,Value) )
    ( (This)->lpVtbl -> GetDisplay(This,ppDisplay) )
    ( (This)->lpVtbl -> GetIndex(This,pValue) )
    ( (This)->lpVtbl -> GetType(This,pValue) )
    ( (This)->lpVtbl -> SetType(This,Value) )
    ( (This)->lpVtbl -> GetProperty(This,Type,pValue) )
    ( (This)->lpVtbl -> GetRange(This,cpActive,cpAnchor,ppRange) )
    ( (This)->lpVtbl -> GetText(This,Flags,pbstr) )
    ( (This)->lpVtbl -> SetFormattedText(This,pUnk) )
    ( (This)->lpVtbl -> SetProperty(This,Type,Value) )
    ( (This)->lpVtbl -> SetText(This,Flags,bstr) )
EXTERN_C const IID IID_ITextStrings;
    typedef struct ITextStringsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextStrings * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextStrings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextStrings * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITextStrings * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITextStrings * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITextStrings * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITextStrings * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in ITextStrings * This,
                       long Index,
                                __RPC__deref_out_opt ITextRange2 **ppRange);
                            HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ITextStrings * This,
                                __RPC__out long *pCount);
                   HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ITextStrings * This,
                       __RPC__in BSTR bstr);
                   HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in ITextStrings * This,
                       __RPC__in_opt ITextRange2 *pRange,
                       long iString);
                   HRESULT ( STDMETHODCALLTYPE *Cat2 )(
            __RPC__in ITextStrings * This,
                       long iString);
                   HRESULT ( STDMETHODCALLTYPE *CatTop2 )(
            __RPC__in ITextStrings * This,
                       __RPC__in BSTR bstr);
                   HRESULT ( STDMETHODCALLTYPE *DeleteRange )(
            __RPC__in ITextStrings * This,
                       __RPC__in_opt ITextRange2 *pRange);
                   HRESULT ( STDMETHODCALLTYPE *EncodeFunction )(
            __RPC__in ITextStrings * This,
                       long Type,
                       long Align,
                       long Char,
                       long Char1,
                       long Char2,
                       long Count,
                       long TeXStyle,
                       long cCol,
                       __RPC__in_opt ITextRange2 *pRange);
                   HRESULT ( STDMETHODCALLTYPE *GetCch )(
            __RPC__in ITextStrings * This,
                       long iString,
                        __RPC__out long *pcch);
                   HRESULT ( STDMETHODCALLTYPE *InsertNullStr )(
            __RPC__in ITextStrings * This,
                       long iString);
                   HRESULT ( STDMETHODCALLTYPE *MoveBoundary )(
            __RPC__in ITextStrings * This,
                       long iString,
                       long cch);
                   HRESULT ( STDMETHODCALLTYPE *PrefixTop )(
            __RPC__in ITextStrings * This,
                       __RPC__in BSTR bstr);
                   HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ITextStrings * This,
                       long iString,
                       long cString);
                   HRESULT ( STDMETHODCALLTYPE *SetFormattedText )(
            __RPC__in ITextStrings * This,
                       __RPC__in_opt ITextRange2 *pRangeD,
                       __RPC__in_opt ITextRange2 *pRangeS);
                   HRESULT ( STDMETHODCALLTYPE *SetOpCp )(
            __RPC__in ITextStrings * This,
                       long iString,
                       long cp);
                   HRESULT ( STDMETHODCALLTYPE *SuffixTop )(
            __RPC__in ITextStrings * This,
                       __RPC__in BSTR bstr,
                       __RPC__in_opt ITextRange2 *pRange);
                   HRESULT ( STDMETHODCALLTYPE *Swap )(
            __RPC__in ITextStrings * This);
        END_INTERFACE
    } ITextStringsVtbl;
    interface ITextStrings
    {
        CONST_VTBL struct ITextStringsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Item(This,Index,ppRange) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
    ( (This)->lpVtbl -> Add(This,bstr) )
    ( (This)->lpVtbl -> Append(This,pRange,iString) )
    ( (This)->lpVtbl -> Cat2(This,iString) )
    ( (This)->lpVtbl -> CatTop2(This,bstr) )
    ( (This)->lpVtbl -> DeleteRange(This,pRange) )
    ( (This)->lpVtbl -> EncodeFunction(This,Type,Align,Char,Char1,Char2,Count,TeXStyle,cCol,pRange) )
    ( (This)->lpVtbl -> GetCch(This,iString,pcch) )
    ( (This)->lpVtbl -> InsertNullStr(This,iString) )
    ( (This)->lpVtbl -> MoveBoundary(This,iString,cch) )
    ( (This)->lpVtbl -> PrefixTop(This,bstr) )
    ( (This)->lpVtbl -> Remove(This,iString,cString) )
    ( (This)->lpVtbl -> SetFormattedText(This,pRangeD,pRangeS) )
    ( (This)->lpVtbl -> SetOpCp(This,iString,cp) )
    ( (This)->lpVtbl -> SuffixTop(This,bstr,pRange) )
    ( (This)->lpVtbl -> Swap(This) )
EXTERN_C const IID IID_ITextRow;
    typedef struct ITextRowVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextRow * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextRow * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextRow * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITextRow * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITextRow * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITextRow * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITextRow * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *GetAlignment )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetAlignment )(
            __RPC__in ITextRow * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetCellCount )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetCellCount )(
            __RPC__in ITextRow * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetCellCountCache )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetCellCountCache )(
            __RPC__in ITextRow * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetCellIndex )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetCellIndex )(
            __RPC__in ITextRow * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetCellMargin )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetCellMargin )(
            __RPC__in ITextRow * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetHeight )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetHeight )(
            __RPC__in ITextRow * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetIndent )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetIndent )(
            __RPC__in ITextRow * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetKeepTogether )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetKeepTogether )(
            __RPC__in ITextRow * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetKeepWithNext )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetKeepWithNext )(
            __RPC__in ITextRow * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetNestLevel )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *GetRTL )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetRTL )(
            __RPC__in ITextRow * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetCellAlignment )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetCellAlignment )(
            __RPC__in ITextRow * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetCellColorBack )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetCellColorBack )(
            __RPC__in ITextRow * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetCellColorFore )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetCellColorFore )(
            __RPC__in ITextRow * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetCellMergeFlags )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetCellMergeFlags )(
            __RPC__in ITextRow * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetCellShading )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetCellShading )(
            __RPC__in ITextRow * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetCellVerticalText )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetCellVerticalText )(
            __RPC__in ITextRow * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetCellWidth )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetCellWidth )(
            __RPC__in ITextRow * This,
                       long Value);
                   HRESULT ( STDMETHODCALLTYPE *GetCellBorderColors )(
            __RPC__in ITextRow * This,
                        __RPC__out long *pcrLeft,
                        __RPC__out long *pcrTop,
                        __RPC__out long *pcrRight,
                        __RPC__out long *pcrBottom);
                   HRESULT ( STDMETHODCALLTYPE *GetCellBorderWidths )(
            __RPC__in ITextRow * This,
                        __RPC__out long *pduLeft,
                        __RPC__out long *pduTop,
                        __RPC__out long *pduRight,
                        __RPC__out long *pduBottom);
                   HRESULT ( STDMETHODCALLTYPE *SetCellBorderColors )(
            __RPC__in ITextRow * This,
                       long crLeft,
                       long crTop,
                       long crRight,
                       long crBottom);
                   HRESULT ( STDMETHODCALLTYPE *SetCellBorderWidths )(
            __RPC__in ITextRow * This,
                       long duLeft,
                       long duTop,
                       long duRight,
                       long duBottom);
                   HRESULT ( STDMETHODCALLTYPE *Apply )(
            __RPC__in ITextRow * This,
                       long cRow,
                       long Flags);
                   HRESULT ( STDMETHODCALLTYPE *CanChange )(
            __RPC__in ITextRow * This,
                                __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in ITextRow * This,
                       long Type,
                        __RPC__out long *pValue);
                   HRESULT ( STDMETHODCALLTYPE *Insert )(
            __RPC__in ITextRow * This,
                       long cRow);
                   HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            __RPC__in ITextRow * This,
                       __RPC__in_opt ITextRow *pRow,
                                __RPC__out long *pB);
                   HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ITextRow * This,
                       long Value);
                   HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in ITextRow * This,
                       long Type,
                       long Value);
        END_INTERFACE
    } ITextRowVtbl;
    interface ITextRow
    {
        CONST_VTBL struct ITextRowVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetAlignment(This,pValue) )
    ( (This)->lpVtbl -> SetAlignment(This,Value) )
    ( (This)->lpVtbl -> GetCellCount(This,pValue) )
    ( (This)->lpVtbl -> SetCellCount(This,Value) )
    ( (This)->lpVtbl -> GetCellCountCache(This,pValue) )
    ( (This)->lpVtbl -> SetCellCountCache(This,Value) )
    ( (This)->lpVtbl -> GetCellIndex(This,pValue) )
    ( (This)->lpVtbl -> SetCellIndex(This,Value) )
    ( (This)->lpVtbl -> GetCellMargin(This,pValue) )
    ( (This)->lpVtbl -> SetCellMargin(This,Value) )
    ( (This)->lpVtbl -> GetHeight(This,pValue) )
    ( (This)->lpVtbl -> SetHeight(This,Value) )
    ( (This)->lpVtbl -> GetIndent(This,pValue) )
    ( (This)->lpVtbl -> SetIndent(This,Value) )
    ( (This)->lpVtbl -> GetKeepTogether(This,pValue) )
    ( (This)->lpVtbl -> SetKeepTogether(This,Value) )
    ( (This)->lpVtbl -> GetKeepWithNext(This,pValue) )
    ( (This)->lpVtbl -> SetKeepWithNext(This,Value) )
    ( (This)->lpVtbl -> GetNestLevel(This,pValue) )
    ( (This)->lpVtbl -> GetRTL(This,pValue) )
    ( (This)->lpVtbl -> SetRTL(This,Value) )
    ( (This)->lpVtbl -> GetCellAlignment(This,pValue) )
    ( (This)->lpVtbl -> SetCellAlignment(This,Value) )
    ( (This)->lpVtbl -> GetCellColorBack(This,pValue) )
    ( (This)->lpVtbl -> SetCellColorBack(This,Value) )
    ( (This)->lpVtbl -> GetCellColorFore(This,pValue) )
    ( (This)->lpVtbl -> SetCellColorFore(This,Value) )
    ( (This)->lpVtbl -> GetCellMergeFlags(This,pValue) )
    ( (This)->lpVtbl -> SetCellMergeFlags(This,Value) )
    ( (This)->lpVtbl -> GetCellShading(This,pValue) )
    ( (This)->lpVtbl -> SetCellShading(This,Value) )
    ( (This)->lpVtbl -> GetCellVerticalText(This,pValue) )
    ( (This)->lpVtbl -> SetCellVerticalText(This,Value) )
    ( (This)->lpVtbl -> GetCellWidth(This,pValue) )
    ( (This)->lpVtbl -> SetCellWidth(This,Value) )
    ( (This)->lpVtbl -> GetCellBorderColors(This,pcrLeft,pcrTop,pcrRight,pcrBottom) )
    ( (This)->lpVtbl -> GetCellBorderWidths(This,pduLeft,pduTop,pduRight,pduBottom) )
    ( (This)->lpVtbl -> SetCellBorderColors(This,crLeft,crTop,crRight,crBottom) )
    ( (This)->lpVtbl -> SetCellBorderWidths(This,duLeft,duTop,duRight,duBottom) )
    ( (This)->lpVtbl -> Apply(This,cRow,Flags) )
    ( (This)->lpVtbl -> CanChange(This,pValue) )
    ( (This)->lpVtbl -> GetProperty(This,Type,pValue) )
    ( (This)->lpVtbl -> Insert(This,cRow) )
    ( (This)->lpVtbl -> IsEqual(This,pRow,pB) )
    ( (This)->lpVtbl -> Reset(This,Value) )
    ( (This)->lpVtbl -> SetProperty(This,Type,Value) )
EXTERN_C const IID IID_ITextDisplays;
    typedef struct ITextDisplaysVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextDisplays * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextDisplays * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextDisplays * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITextDisplays * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITextDisplays * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITextDisplays * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITextDisplays * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } ITextDisplaysVtbl;
    interface ITextDisplays
    {
        CONST_VTBL struct ITextDisplaysVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_ITextDocument2Old;
    typedef struct ITextDocument2OldVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextDocument2Old * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextDocument2Old * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextDocument2Old * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITextDocument2Old * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITextDocument2Old * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITextDocument2Old * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITextDocument2Old * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in ITextDocument2Old * This,
                                __RPC__deref_out_opt BSTR *pName);
                            HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            __RPC__in ITextDocument2Old * This,
                                __RPC__deref_out_opt ITextSelection **ppSel);
                            HRESULT ( STDMETHODCALLTYPE *GetStoryCount )(
            __RPC__in ITextDocument2Old * This,
                                __RPC__out long *pCount);
                            HRESULT ( STDMETHODCALLTYPE *GetStoryRanges )(
            __RPC__in ITextDocument2Old * This,
                                __RPC__deref_out_opt ITextStoryRanges **ppStories);
                            HRESULT ( STDMETHODCALLTYPE *GetSaved )(
            __RPC__in ITextDocument2Old * This,
                                __RPC__out long *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetSaved )(
            __RPC__in ITextDocument2Old * This,
                       long Value);
                            HRESULT ( STDMETHODCALLTYPE *GetDefaultTabStop )(
            __RPC__in ITextDocument2Old * This,
                                __RPC__out float *pValue);
                            HRESULT ( STDMETHODCALLTYPE *SetDefaultTabStop )(
            __RPC__in ITextDocument2Old * This,
                       float Value);
                   HRESULT ( STDMETHODCALLTYPE *New )(
            __RPC__in ITextDocument2Old * This);
                   HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in ITextDocument2Old * This,
                       __RPC__in VARIANT *pVar,
                       long Flags,
                       long CodePage);
                   HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in ITextDocument2Old * This,
                       __RPC__in VARIANT *pVar,
                       long Flags,
                       long CodePage);
                   HRESULT ( STDMETHODCALLTYPE *Freeze )(
            __RPC__in ITextDocument2Old * This,
                                __RPC__out long *pCount);
                   HRESULT ( STDMETHODCALLTYPE *Unfreeze )(
            __RPC__in ITextDocument2Old * This,
                                __RPC__out long *pCount);
                   HRESULT ( STDMETHODCALLTYPE *BeginEditCollection )(
            __RPC__in ITextDocument2Old * This);
                   HRESULT ( STDMETHODCALLTYPE *EndEditCollection )(
            __RPC__in ITextDocument2Old * This);
                   HRESULT ( STDMETHODCALLTYPE *Undo )(
            __RPC__in ITextDocument2Old * This,
                       long Count,
                                __RPC__out long *pCount);
                   HRESULT ( STDMETHODCALLTYPE *Redo )(
            __RPC__in ITextDocument2Old * This,
                       long Count,
                                __RPC__out long *pCount);
                   HRESULT ( STDMETHODCALLTYPE *Range )(
            __RPC__in ITextDocument2Old * This,
                       long cpActive,
                       long cpAnchor,
                                __RPC__deref_out_opt ITextRange **ppRange);
                   HRESULT ( STDMETHODCALLTYPE *RangeFromPoint )(
            __RPC__in ITextDocument2Old * This,
                       long x,
                       long y,
                                __RPC__deref_out_opt ITextRange **ppRange);
                               HRESULT ( STDMETHODCALLTYPE *AttachMsgFilter )(
            __RPC__in ITextDocument2Old * This,
                       __RPC__in_opt IUnknown *pFilter);
                               HRESULT ( STDMETHODCALLTYPE *SetEffectColor )(
            __RPC__in ITextDocument2Old * This,
                       long Index,
                       COLORREF cr);
                               HRESULT ( STDMETHODCALLTYPE *GetEffectColor )(
            __RPC__in ITextDocument2Old * This,
                       long Index,
                        __RPC__out COLORREF *pcr);
                                        HRESULT ( STDMETHODCALLTYPE *GetCaretType )(
            __RPC__in ITextDocument2Old * This,
                                __RPC__out long *pCaretType);
                                        HRESULT ( STDMETHODCALLTYPE *SetCaretType )(
            __RPC__in ITextDocument2Old * This,
                       long CaretType);
                               HRESULT ( STDMETHODCALLTYPE *GetImmContext )(
            __RPC__in ITextDocument2Old * This,
                                __RPC__out __int64 *pContext);
                               HRESULT ( STDMETHODCALLTYPE *ReleaseImmContext )(
            __RPC__in ITextDocument2Old * This,
                       __int64 Context);
                               HRESULT ( STDMETHODCALLTYPE *GetPreferredFont )(
            __RPC__in ITextDocument2Old * This,
                       long cp,
                       long CharRep,
                       long Option,
                       long CharRepCur,
                       long curFontSize,
                        __RPC__deref_out_opt BSTR *pbstr,
                        __RPC__out long *pPitchAndFamily,
                        __RPC__out long *pNewFontSize);
                                        HRESULT ( STDMETHODCALLTYPE *GetNotificationMode )(
            __RPC__in ITextDocument2Old * This,
                                __RPC__out long *pMode);
                                        HRESULT ( STDMETHODCALLTYPE *SetNotificationMode )(
            __RPC__in ITextDocument2Old * This,
                       long Mode);
                               HRESULT ( STDMETHODCALLTYPE *GetClientRect )(
            __RPC__in ITextDocument2Old * This,
                       long Type,
                        __RPC__out long *pLeft,
                        __RPC__out long *pTop,
                        __RPC__out long *pRight,
                        __RPC__out long *pBottom);
                                        HRESULT ( STDMETHODCALLTYPE *GetSelection2 )(
            __RPC__in ITextDocument2Old * This,
                                __RPC__deref_out_opt ITextSelection **ppSel);
                               HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            __RPC__in ITextDocument2Old * This,
                        __RPC__out long *phWnd);
                               HRESULT ( STDMETHODCALLTYPE *GetFEFlags )(
            __RPC__in ITextDocument2Old * This,
                        __RPC__out long *pFlags);
                               HRESULT ( STDMETHODCALLTYPE *UpdateWindow )(
            __RPC__in ITextDocument2Old * This);
                               HRESULT ( STDMETHODCALLTYPE *CheckTextLimit )(
            __RPC__in ITextDocument2Old * This,
            long cch,
            __RPC__in long *pcch);
                               HRESULT ( STDMETHODCALLTYPE *IMEInProgress )(
            __RPC__in ITextDocument2Old * This,
            long Value);
                               HRESULT ( STDMETHODCALLTYPE *SysBeep )(
            __RPC__in ITextDocument2Old * This);
                               HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in ITextDocument2Old * This,
                       long Mode);
                               HRESULT ( STDMETHODCALLTYPE *Notify )(
            __RPC__in ITextDocument2Old * This,
                       long Notify);
                               HRESULT ( STDMETHODCALLTYPE *GetDocumentFont )(
            __RPC__in ITextDocument2Old * This,
                                __RPC__deref_out_opt ITextFont **ppITextFont);
                               HRESULT ( STDMETHODCALLTYPE *GetDocumentPara )(
            __RPC__in ITextDocument2Old * This,
                                __RPC__deref_out_opt ITextPara **ppITextPara);
                               HRESULT ( STDMETHODCALLTYPE *GetCallManager )(
            __RPC__in ITextDocument2Old * This,
                                __RPC__deref_out_opt IUnknown **ppVoid);
                               HRESULT ( STDMETHODCALLTYPE *ReleaseCallManager )(
            __RPC__in ITextDocument2Old * This,
            __RPC__in_opt IUnknown *pVoid);
        END_INTERFACE
    } ITextDocument2OldVtbl;
    interface ITextDocument2Old
    {
        CONST_VTBL struct ITextDocument2OldVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetName(This,pName) )
    ( (This)->lpVtbl -> GetSelection(This,ppSel) )
    ( (This)->lpVtbl -> GetStoryCount(This,pCount) )
    ( (This)->lpVtbl -> GetStoryRanges(This,ppStories) )
    ( (This)->lpVtbl -> GetSaved(This,pValue) )
    ( (This)->lpVtbl -> SetSaved(This,Value) )
    ( (This)->lpVtbl -> GetDefaultTabStop(This,pValue) )
    ( (This)->lpVtbl -> SetDefaultTabStop(This,Value) )
    ( (This)->lpVtbl -> New(This) )
    ( (This)->lpVtbl -> Open(This,pVar,Flags,CodePage) )
    ( (This)->lpVtbl -> Save(This,pVar,Flags,CodePage) )
    ( (This)->lpVtbl -> Freeze(This,pCount) )
    ( (This)->lpVtbl -> Unfreeze(This,pCount) )
    ( (This)->lpVtbl -> BeginEditCollection(This) )
    ( (This)->lpVtbl -> EndEditCollection(This) )
    ( (This)->lpVtbl -> Undo(This,Count,pCount) )
    ( (This)->lpVtbl -> Redo(This,Count,pCount) )
    ( (This)->lpVtbl -> Range(This,cpActive,cpAnchor,ppRange) )
    ( (This)->lpVtbl -> RangeFromPoint(This,x,y,ppRange) )
    ( (This)->lpVtbl -> AttachMsgFilter(This,pFilter) )
    ( (This)->lpVtbl -> SetEffectColor(This,Index,cr) )
    ( (This)->lpVtbl -> GetEffectColor(This,Index,pcr) )
    ( (This)->lpVtbl -> GetCaretType(This,pCaretType) )
    ( (This)->lpVtbl -> SetCaretType(This,CaretType) )
    ( (This)->lpVtbl -> GetImmContext(This,pContext) )
    ( (This)->lpVtbl -> ReleaseImmContext(This,Context) )
    ( (This)->lpVtbl -> GetPreferredFont(This,cp,CharRep,Option,CharRepCur,curFontSize,pbstr,pPitchAndFamily,pNewFontSize) )
    ( (This)->lpVtbl -> GetNotificationMode(This,pMode) )
    ( (This)->lpVtbl -> SetNotificationMode(This,Mode) )
    ( (This)->lpVtbl -> GetClientRect(This,Type,pLeft,pTop,pRight,pBottom) )
    ( (This)->lpVtbl -> GetSelection2(This,ppSel) )
    ( (This)->lpVtbl -> GetWindow(This,phWnd) )
    ( (This)->lpVtbl -> GetFEFlags(This,pFlags) )
    ( (This)->lpVtbl -> UpdateWindow(This) )
    ( (This)->lpVtbl -> CheckTextLimit(This,cch,pcch) )
    ( (This)->lpVtbl -> IMEInProgress(This,Value) )
    ( (This)->lpVtbl -> SysBeep(This) )
    ( (This)->lpVtbl -> Update(This,Mode) )
    ( (This)->lpVtbl -> Notify(This,Notify) )
    ( (This)->lpVtbl -> GetDocumentFont(This,ppITextFont) )
    ( (This)->lpVtbl -> GetDocumentPara(This,ppITextPara) )
    ( (This)->lpVtbl -> GetCallManager(This,ppVoid) )
    ( (This)->lpVtbl -> ReleaseCallManager(This,pVoid) )
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
