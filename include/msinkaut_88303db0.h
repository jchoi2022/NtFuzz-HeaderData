#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IInkRectangle IInkRectangle;
typedef interface IInkExtendedProperty IInkExtendedProperty;
typedef interface IInkExtendedProperties IInkExtendedProperties;
typedef interface IInkDrawingAttributes IInkDrawingAttributes;
typedef interface IInkTransform IInkTransform;
typedef interface IInkGesture IInkGesture;
typedef interface IInkCursor IInkCursor;
typedef interface IInkCursors IInkCursors;
typedef interface IInkCursorButton IInkCursorButton;
typedef interface IInkCursorButtons IInkCursorButtons;
typedef interface IInkTablet IInkTablet;
typedef interface IInkTablet2 IInkTablet2;
typedef interface IInkTablet3 IInkTablet3;
typedef interface IInkTablets IInkTablets;
typedef interface IInkStrokeDisp IInkStrokeDisp;
typedef interface IInkStrokes IInkStrokes;
typedef interface IInkCustomStrokes IInkCustomStrokes;
typedef interface _IInkStrokesEvents _IInkStrokesEvents;
typedef interface IInkDisp IInkDisp;
typedef interface _IInkEvents _IInkEvents;
typedef interface IInkRenderer IInkRenderer;
typedef interface IInkCollector IInkCollector;
typedef interface _IInkCollectorEvents _IInkCollectorEvents;
typedef interface IInkOverlay IInkOverlay;
typedef interface _IInkOverlayEvents _IInkOverlayEvents;
typedef interface IInkPicture IInkPicture;
typedef interface _IInkPictureEvents _IInkPictureEvents;
typedef interface IInkRecognizer IInkRecognizer;
typedef interface IInkRecognizer2 IInkRecognizer2;
typedef interface IInkRecognizers IInkRecognizers;
typedef interface _IInkRecognitionEvents _IInkRecognitionEvents;
typedef interface IInkRecognizerContext IInkRecognizerContext;
typedef interface IInkRecognizerContext2 IInkRecognizerContext2;
typedef interface IInkRecognitionResult IInkRecognitionResult;
typedef interface IInkRecognitionAlternate IInkRecognitionAlternate;
typedef interface IInkRecognitionAlternates IInkRecognitionAlternates;
typedef interface IInkRecognizerGuide IInkRecognizerGuide;
typedef interface IInkWordList IInkWordList;
typedef interface IInkWordList2 IInkWordList2;
typedef class InkDisp InkDisp;
typedef class InkOverlay InkOverlay;
typedef class InkPicture InkPicture;
typedef class InkCollector InkCollector;
typedef class InkDrawingAttributes InkDrawingAttributes;
typedef class InkRectangle InkRectangle;
typedef class InkRenderer InkRenderer;
typedef class InkTransform InkTransform;
typedef class InkRecognizers InkRecognizers;
typedef class InkRecognizerContext InkRecognizerContext;
typedef class InkRecognizerGuide InkRecognizerGuide;
typedef class InkTablets InkTablets;
typedef class InkWordList InkWordList;
typedef class InkStrokes InkStrokes;
typedef interface IInk IInk;
typedef interface IInkLineInfo IInkLineInfo;
typedef interface ISketchInk ISketchInk;
typedef class Ink Ink;
typedef class SketchInk SketchInk;
#include "oaidl.h"
#include "ocidl.h"
#include "tpcshrd.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <TPCError.h>
typedef
enum enumINKMETRIC_FLAGS
    {
        IMF_FONT_SELECTED_IN_HDC = 0x1,
        IMF_ITALIC = 0x2,
        IMF_BOLD = 0x4
    } INK_METRIC_FLAGS;
typedef
enum enumGetCandidateFlags
    {
        TCF_ALLOW_RECOGNITION = 0x1,
        TCF_FORCE_RECOGNITION = 0x2
    } GET_DANDIDATE_FLAGS;
typedef struct tagINKMETRIC
    {
    INT iHeight;
    INT iFontAscent;
    INT iFontDescent;
    DWORD dwFlags;
    COLORREF color;
    } INKMETRIC;
typedef struct tagINKMETRIC *PINKMETRIC;
extern RPC_IF_HANDLE __MIDL_itf_msinkaut_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msinkaut_0000_0000_v0_0_s_ifspec;
typedef
enum ItemSelectionConstants
    {
        ISC_FirstElement = 0,
        ISC_AllElements = -1
    } InkSelectionConstants;
const GUID GUID_PACKETPROPERTY_GUID_X = { 0x598a6a8f, 0x52c0, 0x4ba0, { 0x93, 0xaf, 0xaf, 0x35, 0x74, 0x11, 0xa5, 0x61} };
const GUID GUID_PACKETPROPERTY_GUID_Y = { 0xb53f9f75, 0x04e0, 0x4498, { 0xa7, 0xee, 0xc3, 0x0d, 0xbb, 0x5a, 0x90, 0x11} };
const GUID GUID_PACKETPROPERTY_GUID_Z = { 0x735adb30, 0x0ebb, 0x4788, { 0xa0, 0xe4, 0x0f, 0x31, 0x64, 0x90, 0x05, 0x5d} };
const GUID GUID_PACKETPROPERTY_GUID_PACKET_STATUS = { 0x6e0e07bf, 0xafe7, 0x4cf7, { 0x87, 0xd1, 0xaf, 0x64, 0x46, 0x20, 0x84, 0x18} };
const GUID GUID_PACKETPROPERTY_GUID_TIMER_TICK = { 0x436510c5, 0xfed3, 0x45d1, { 0x8b, 0x76, 0x71, 0xd3, 0xea, 0x7a, 0x82, 0x9d} };
const GUID GUID_PACKETPROPERTY_GUID_SERIAL_NUMBER = { 0x78a81b56, 0x0935, 0x4493, { 0xba, 0xae, 0x00, 0x54, 0x1a, 0x8a, 0x16, 0xc4} };
const GUID GUID_PACKETPROPERTY_GUID_NORMAL_PRESSURE = { 0x7307502d, 0xf9f4, 0x4e18, { 0xb3, 0xf2, 0x2c, 0xe1, 0xb1, 0xa3, 0x61, 0x0c} };
const GUID GUID_PACKETPROPERTY_GUID_TANGENT_PRESSURE = { 0x6da4488b, 0x5244, 0x41ec, { 0x90, 0x5b, 0x32, 0xd8, 0x9a, 0xb8, 0x08, 0x09} };
const GUID GUID_PACKETPROPERTY_GUID_BUTTON_PRESSURE = { 0x8b7fefc4, 0x96aa, 0x4bfe, { 0xac, 0x26, 0x8a, 0x5f, 0x0b, 0xe0, 0x7b, 0xf5} };
const GUID GUID_PACKETPROPERTY_GUID_X_TILT_ORIENTATION = { 0xa8d07b3a, 0x8bf0, 0x40b0, { 0x95, 0xa9, 0xb8, 0x0a, 0x6b, 0xb7, 0x87, 0xbf} };
const GUID GUID_PACKETPROPERTY_GUID_Y_TILT_ORIENTATION = { 0x0e932389, 0x1d77, 0x43af, { 0xac, 0x00, 0x5b, 0x95, 0x0d, 0x6d, 0x4b, 0x2d} };
const GUID GUID_PACKETPROPERTY_GUID_AZIMUTH_ORIENTATION = { 0x029123b4, 0x8828, 0x410b, { 0xb2, 0x50, 0xa0, 0x53, 0x65, 0x95, 0xe5, 0xdc} };
const GUID GUID_PACKETPROPERTY_GUID_ALTITUDE_ORIENTATION = { 0x82dec5c7, 0xf6ba, 0x4906, { 0x89, 0x4f, 0x66, 0xd6, 0x8d, 0xfc, 0x45, 0x6c} };
const GUID GUID_PACKETPROPERTY_GUID_TWIST_ORIENTATION = { 0x0d324960, 0x13b2, 0x41e4, { 0xac, 0xe6, 0x7a, 0xe9, 0xd4, 0x3d, 0x2d, 0x3b} };
const GUID GUID_PACKETPROPERTY_GUID_PITCH_ROTATION = { 0x7f7e57b7, 0xbe37, 0x4be1, { 0xa3, 0x56, 0x7a, 0x84, 0x16, 0x0e, 0x18, 0x93} };
const GUID GUID_PACKETPROPERTY_GUID_ROLL_ROTATION = { 0x5d5d5e56, 0x6ba9, 0x4c5b, { 0x9f, 0xb0, 0x85, 0x1c, 0x91, 0x71, 0x4e, 0x56} };
const GUID GUID_PACKETPROPERTY_GUID_YAW_ROTATION = { 0x6a849980, 0x7c3a, 0x45b7, { 0xaa, 0x82, 0x90, 0xa2, 0x62, 0x95, 0x0e, 0x89} };
const GUID GUID_PACKETPROPERTY_GUID_WIDTH = { 0xbaabe94d, 0x2712, 0x48f5, { 0xbe, 0x9d, 0x8f, 0x8b, 0x5e, 0xa0, 0x71, 0x1a} };
const GUID GUID_PACKETPROPERTY_GUID_HEIGHT = { 0xe61858d2, 0xe447, 0x4218, { 0x9d, 0x3f, 0x18, 0x86, 0x5c, 0x20, 0x3d, 0xf4} };
const GUID GUID_PACKETPROPERTY_GUID_FINGERCONTACTCONFIDENCE = { 0xe706c804, 0x57f0, 0x4f00, { 0x8a, 0x0c, 0x85, 0x3d, 0x57, 0x78, 0x9b, 0xe9} };
const GUID GUID_PACKETPROPERTY_GUID_DEVICE_CONTACT_ID = { 0x02585b91, 0x049b, 0x4750, { 0x96, 0x15, 0xdf, 0x89, 0x48, 0xab, 0x3c, 0x9c} };
typedef
enum InkBoundingBoxMode
    {
        IBBM_Default = 0,
        IBBM_NoCurveFit = 1,
        IBBM_CurveFit = 2,
        IBBM_PointsOnly = 3,
        IBBM_Union = 4
    } InkBoundingBoxMode;
typedef
enum InkExtractFlags
    {
        IEF_CopyFromOriginal = 0,
        IEF_RemoveFromOriginal = 0x1,
        IEF_Default = IEF_RemoveFromOriginal
    } InkExtractFlags;
typedef
enum InkPersistenceFormat
    {
        IPF_InkSerializedFormat = 0,
        IPF_Base64InkSerializedFormat = 1,
        IPF_GIF = 2,
        IPF_Base64GIF = 3
    } InkPersistenceFormat;
typedef
enum InkPersistenceCompressionMode
    {
        IPCM_Default = 0,
        IPCM_MaximumCompression = 1,
        IPCM_NoCompression = 2
    } InkPersistenceCompressionMode;
typedef
enum InkPenTip
    {
        IPT_Ball = 0,
        IPT_Rectangle = 1
    } InkPenTip;
typedef
enum InkRasterOperation
    {
        IRO_Black = 1,
        IRO_NotMergePen = 2,
        IRO_MaskNotPen = 3,
        IRO_NotCopyPen = 4,
        IRO_MaskPenNot = 5,
        IRO_Not = 6,
        IRO_XOrPen = 7,
        IRO_NotMaskPen = 8,
        IRO_MaskPen = 9,
        IRO_NotXOrPen = 10,
        IRO_NoOperation = 11,
        IRO_MergeNotPen = 12,
        IRO_CopyPen = 13,
        IRO_MergePenNot = 14,
        IRO_MergePen = 15,
        IRO_White = 16
    } InkRasterOperation;
typedef
enum InkMousePointer
    {
        IMP_Default = 0,
        IMP_Arrow = 1,
        IMP_Crosshair = 2,
        IMP_Ibeam = 3,
        IMP_SizeNESW = 4,
        IMP_SizeNS = 5,
        IMP_SizeNWSE = 6,
        IMP_SizeWE = 7,
        IMP_UpArrow = 8,
        IMP_Hourglass = 9,
        IMP_NoDrop = 10,
        IMP_ArrowHourglass = 11,
        IMP_ArrowQuestion = 12,
        IMP_SizeAll = 13,
        IMP_Hand = 14,
        IMP_Custom = 99
    } InkMousePointer;
typedef
enum InkClipboardModes
    {
        ICB_Copy = 0,
        ICB_Cut = 0x1,
        ICB_ExtractOnly = 0x30,
        ICB_DelayedCopy = 0x20,
        ICB_Default = ICB_Copy
    } InkClipboardModes;
typedef
enum InkClipboardFormats
    {
        ICF_None = 0,
        ICF_InkSerializedFormat = 0x1,
        ICF_SketchInk = 0x2,
        ICF_TextInk = 0x6,
        ICF_EnhancedMetafile = 0x8,
        ICF_Metafile = 0x20,
        ICF_Bitmap = 0x40,
        ICF_PasteMask = 0x7,
        ICF_CopyMask = 0x7f,
        ICF_Default = ICF_CopyMask
    } InkClipboardFormats;
typedef
enum SelectionHitResult
    {
        SHR_None = 0,
        SHR_NW = ( SHR_None + 1 ) ,
        SHR_SE = ( SHR_NW + 1 ) ,
        SHR_NE = ( SHR_SE + 1 ) ,
        SHR_SW = ( SHR_NE + 1 ) ,
        SHR_E = ( SHR_SW + 1 ) ,
        SHR_W = ( SHR_E + 1 ) ,
        SHR_N = ( SHR_W + 1 ) ,
        SHR_S = ( SHR_N + 1 ) ,
        SHR_Selection = ( SHR_S + 1 )
    } SelectionHitResult;
typedef
enum InkRecognitionStatus
    {
        IRS_NoError = 0,
        IRS_Interrupted = 0x1,
        IRS_ProcessFailed = 0x2,
        IRS_InkAddedFailed = 0x4,
        IRS_SetAutoCompletionModeFailed = 0x8,
        IRS_SetStrokesFailed = 0x10,
        IRS_SetGuideFailed = 0x20,
        IRS_SetFlagsFailed = 0x40,
        IRS_SetFactoidFailed = 0x80,
        IRS_SetPrefixSuffixFailed = 0x100,
        IRS_SetWordListFailed = 0x200
    } InkRecognitionStatus;
typedef
enum DISPID_InkRectangle
    {
        DISPID_IRTop = 1,
        DISPID_IRLeft = ( DISPID_IRTop + 1 ) ,
        DISPID_IRBottom = ( DISPID_IRLeft + 1 ) ,
        DISPID_IRRight = ( DISPID_IRBottom + 1 ) ,
        DISPID_IRGetRectangle = ( DISPID_IRRight + 1 ) ,
        DISPID_IRSetRectangle = ( DISPID_IRGetRectangle + 1 ) ,
        DISPID_IRData = ( DISPID_IRSetRectangle + 1 )
    } DISPID_InkRectangle;
typedef
enum DISPID_InkExtendedProperty
    {
        DISPID_IEPGuid = 1,
        DISPID_IEPData = ( DISPID_IEPGuid + 1 )
    } DISPID_InkExtendedProperty;
typedef
enum DISPID_InkExtendedProperties
    {
        DISPID_IEPs_NewEnum = DISPID_NEWENUM,
        DISPID_IEPsItem = DISPID_VALUE,
        DISPID_IEPsCount = 1,
        DISPID_IEPsAdd = ( DISPID_IEPsCount + 1 ) ,
        DISPID_IEPsRemove = ( DISPID_IEPsAdd + 1 ) ,
        DISPID_IEPsClear = ( DISPID_IEPsRemove + 1 ) ,
        DISPID_IEPsDoesPropertyExist = ( DISPID_IEPsClear + 1 )
    } DISPID_InkExtendedProperties;
typedef
enum DISPID_InkDrawingAttributes
    {
        DISPID_DAHeight = 1,
        DISPID_DAColor = ( DISPID_DAHeight + 1 ) ,
        DISPID_DAWidth = ( DISPID_DAColor + 1 ) ,
        DISPID_DAFitToCurve = ( DISPID_DAWidth + 1 ) ,
        DISPID_DAIgnorePressure = ( DISPID_DAFitToCurve + 1 ) ,
        DISPID_DAAntiAliased = ( DISPID_DAIgnorePressure + 1 ) ,
        DISPID_DATransparency = ( DISPID_DAAntiAliased + 1 ) ,
        DISPID_DARasterOperation = ( DISPID_DATransparency + 1 ) ,
        DISPID_DAPenTip = ( DISPID_DARasterOperation + 1 ) ,
        DISPID_DAClone = ( DISPID_DAPenTip + 1 ) ,
        DISPID_DAExtendedProperties = ( DISPID_DAClone + 1 )
    } DISPID_InkDrawingAttributes;
typedef
enum DISPID_InkTransform
    {
        DISPID_ITReset = 1,
        DISPID_ITTranslate = ( DISPID_ITReset + 1 ) ,
        DISPID_ITRotate = ( DISPID_ITTranslate + 1 ) ,
        DISPID_ITReflect = ( DISPID_ITRotate + 1 ) ,
        DISPID_ITShear = ( DISPID_ITReflect + 1 ) ,
        DISPID_ITScale = ( DISPID_ITShear + 1 ) ,
        DISPID_ITeM11 = ( DISPID_ITScale + 1 ) ,
        DISPID_ITeM12 = ( DISPID_ITeM11 + 1 ) ,
        DISPID_ITeM21 = ( DISPID_ITeM12 + 1 ) ,
        DISPID_ITeM22 = ( DISPID_ITeM21 + 1 ) ,
        DISPID_ITeDx = ( DISPID_ITeM22 + 1 ) ,
        DISPID_ITeDy = ( DISPID_ITeDx + 1 ) ,
        DISPID_ITGetTransform = ( DISPID_ITeDy + 1 ) ,
        DISPID_ITSetTransform = ( DISPID_ITGetTransform + 1 ) ,
        DISPID_ITData = ( DISPID_ITSetTransform + 1 )
    } DISPID_InkTransform;
typedef
enum InkApplicationGesture
    {
        IAG_AllGestures = 0,
        IAG_NoGesture = 0xf000,
        IAG_Scratchout = 0xf001,
        IAG_Triangle = 0xf002,
        IAG_Square = 0xf003,
        IAG_Star = 0xf004,
        IAG_Check = 0xf005,
        IAG_Curlicue = 0xf010,
        IAG_DoubleCurlicue = 0xf011,
        IAG_Circle = 0xf020,
        IAG_DoubleCircle = 0xf021,
        IAG_SemiCircleLeft = 0xf028,
        IAG_SemiCircleRight = 0xf029,
        IAG_ChevronUp = 0xf030,
        IAG_ChevronDown = 0xf031,
        IAG_ChevronLeft = 0xf032,
        IAG_ChevronRight = 0xf033,
        IAG_ArrowUp = 0xf038,
        IAG_ArrowDown = 0xf039,
        IAG_ArrowLeft = 0xf03a,
        IAG_ArrowRight = 0xf03b,
        IAG_Up = 0xf058,
        IAG_Down = 0xf059,
        IAG_Left = 0xf05a,
        IAG_Right = 0xf05b,
        IAG_UpDown = 0xf060,
        IAG_DownUp = 0xf061,
        IAG_LeftRight = 0xf062,
        IAG_RightLeft = 0xf063,
        IAG_UpLeftLong = 0xf064,
        IAG_UpRightLong = 0xf065,
        IAG_DownLeftLong = 0xf066,
        IAG_DownRightLong = 0xf067,
        IAG_UpLeft = 0xf068,
        IAG_UpRight = 0xf069,
        IAG_DownLeft = 0xf06a,
        IAG_DownRight = 0xf06b,
        IAG_LeftUp = 0xf06c,
        IAG_LeftDown = 0xf06d,
        IAG_RightUp = 0xf06e,
        IAG_RightDown = 0xf06f,
        IAG_Exclamation = 0xf0a4,
        IAG_Tap = 0xf0f0,
        IAG_DoubleTap = 0xf0f1
    } InkApplicationGesture;
typedef
enum InkSystemGesture
    {
        ISG_Tap = 0x10,
        ISG_DoubleTap = 0x11,
        ISG_RightTap = 0x12,
        ISG_Drag = 0x13,
        ISG_RightDrag = 0x14,
        ISG_HoldEnter = 0x15,
        ISG_HoldLeave = 0x16,
        ISG_HoverEnter = 0x17,
        ISG_HoverLeave = 0x18,
        ISG_Flick = 0x1f
    } InkSystemGesture;
typedef
enum InkRecognitionConfidence
    {
        IRC_Strong = 0,
        IRC_Intermediate = 1,
        IRC_Poor = 2
    } InkRecognitionConfidence;
typedef
enum DISPID_InkGesture
    {
        DISPID_IGId = DISPID_VALUE,
        DISPID_IGGetHotPoint = ( DISPID_IGId + 1 ) ,
        DISPID_IGConfidence = ( DISPID_IGGetHotPoint + 1 )
    } DISPID_InkGesture;
typedef
enum DISPID_InkCursor
    {
        DISPID_ICsrName = DISPID_VALUE,
        DISPID_ICsrId = 1,
        DISPID_ICsrDrawingAttributes = ( DISPID_ICsrId + 1 ) ,
        DISPID_ICsrButtons = ( DISPID_ICsrDrawingAttributes + 1 ) ,
        DISPID_ICsrInverted = ( DISPID_ICsrButtons + 1 ) ,
        DISPID_ICsrTablet = ( DISPID_ICsrInverted + 1 )
    } DISPID_InkCursor;
typedef
enum DISPID_InkCursors
    {
        DISPID_ICs_NewEnum = DISPID_NEWENUM,
        DISPID_ICsItem = DISPID_VALUE,
        DISPID_ICsCount = 1
    } DISPID_InkCursors;
typedef
enum InkCursorButtonState
    {
        ICBS_Unavailable = 0,
        ICBS_Up = ( ICBS_Unavailable + 1 ) ,
        ICBS_Down = ( ICBS_Up + 1 )
    } InkCursorButtonState;
typedef
enum DISPID_InkCursorButton
    {
        DISPID_ICBName = DISPID_VALUE,
        DISPID_ICBId = 1,
        DISPID_ICBState = ( DISPID_ICBId + 1 )
    } DISPID_InkCursorButton;
typedef
enum DISPID_InkCursorButtons
    {
        DISPID_ICBs_NewEnum = DISPID_NEWENUM,
        DISPID_ICBsItem = DISPID_VALUE,
        DISPID_ICBsCount = 1
    } DISPID_InkCursorButtons;
typedef
enum TabletHardwareCapabilities
    {
        THWC_Integrated = 0x1,
        THWC_CursorMustTouch = 0x2,
        THWC_HardProximity = 0x4,
        THWC_CursorsHavePhysicalIds = 0x8
    } TabletHardwareCapabilities;
typedef
enum TabletPropertyMetricUnit
    {
        TPMU_Default = 0,
        TPMU_Inches = ( TPMU_Default + 1 ) ,
        TPMU_Centimeters = ( TPMU_Inches + 1 ) ,
        TPMU_Degrees = ( TPMU_Centimeters + 1 ) ,
        TPMU_Radians = ( TPMU_Degrees + 1 ) ,
        TPMU_Seconds = ( TPMU_Radians + 1 ) ,
        TPMU_Pounds = ( TPMU_Seconds + 1 ) ,
        TPMU_Grams = ( TPMU_Pounds + 1 )
    } TabletPropertyMetricUnit;
typedef
enum DISPID_InkTablet
    {
        DISPID_ITName = DISPID_VALUE,
        DISPID_ITPlugAndPlayId = 1,
        DISPID_ITPropertyMetrics = ( DISPID_ITPlugAndPlayId + 1 ) ,
        DISPID_ITIsPacketPropertySupported = ( DISPID_ITPropertyMetrics + 1 ) ,
        DISPID_ITMaximumInputRectangle = ( DISPID_ITIsPacketPropertySupported + 1 ) ,
        DISPID_ITHardwareCapabilities = ( DISPID_ITMaximumInputRectangle + 1 )
    } DISPID_InkTablet;
typedef
enum TabletDeviceKind
    {
        TDK_Mouse = 0,
        TDK_Pen = ( TDK_Mouse + 1 ) ,
        TDK_Touch = ( TDK_Pen + 1 )
    } TabletDeviceKind;
typedef
enum DISPID_InkTablet2
    {
        DISPID_IT2DeviceKind = DISPID_VALUE
    } DISPID_InkTablet2;
typedef
enum DISPID_InkTablet3
    {
        DISPID_IT3IsMultiTouch = DISPID_VALUE,
        DISPID_IT3MaximumCursors = ( DISPID_IT3IsMultiTouch + 1 )
    } DISPID_InkTablet3;
typedef
enum DISPID_InkTablets
    {
        DISPID_ITs_NewEnum = DISPID_NEWENUM,
        DISPID_ITsItem = DISPID_VALUE,
        DISPID_ITsDefaultTablet = 1,
        DISPID_ITsCount = ( DISPID_ITsDefaultTablet + 1 ) ,
        DISPID_ITsIsPacketPropertySupported = ( DISPID_ITsCount + 1 )
    } DISPID_InkTablets;
typedef
enum DISPID_InkStrokeDisp
    {
        DISPID_ISDInkIndex = 1,
        DISPID_ISDID = ( DISPID_ISDInkIndex + 1 ) ,
        DISPID_ISDGetBoundingBox = ( DISPID_ISDID + 1 ) ,
        DISPID_ISDDrawingAttributes = ( DISPID_ISDGetBoundingBox + 1 ) ,
        DISPID_ISDFindIntersections = ( DISPID_ISDDrawingAttributes + 1 ) ,
        DISPID_ISDGetRectangleIntersections = ( DISPID_ISDFindIntersections + 1 ) ,
        DISPID_ISDClip = ( DISPID_ISDGetRectangleIntersections + 1 ) ,
        DISPID_ISDHitTestCircle = ( DISPID_ISDClip + 1 ) ,
        DISPID_ISDNearestPoint = ( DISPID_ISDHitTestCircle + 1 ) ,
        DISPID_ISDSplit = ( DISPID_ISDNearestPoint + 1 ) ,
        DISPID_ISDExtendedProperties = ( DISPID_ISDSplit + 1 ) ,
        DISPID_ISDInk = ( DISPID_ISDExtendedProperties + 1 ) ,
        DISPID_ISDBezierPoints = ( DISPID_ISDInk + 1 ) ,
        DISPID_ISDPolylineCusps = ( DISPID_ISDBezierPoints + 1 ) ,
        DISPID_ISDBezierCusps = ( DISPID_ISDPolylineCusps + 1 ) ,
        DISPID_ISDSelfIntersections = ( DISPID_ISDBezierCusps + 1 ) ,
        DISPID_ISDPacketCount = ( DISPID_ISDSelfIntersections + 1 ) ,
        DISPID_ISDPacketSize = ( DISPID_ISDPacketCount + 1 ) ,
        DISPID_ISDPacketDescription = ( DISPID_ISDPacketSize + 1 ) ,
        DISPID_ISDDeleted = ( DISPID_ISDPacketDescription + 1 ) ,
        DISPID_ISDGetPacketDescriptionPropertyMetrics = ( DISPID_ISDDeleted + 1 ) ,
        DISPID_ISDGetPoints = ( DISPID_ISDGetPacketDescriptionPropertyMetrics + 1 ) ,
        DISPID_ISDSetPoints = ( DISPID_ISDGetPoints + 1 ) ,
        DISPID_ISDGetPacketData = ( DISPID_ISDSetPoints + 1 ) ,
        DISPID_ISDGetPacketValuesByProperty = ( DISPID_ISDGetPacketData + 1 ) ,
        DISPID_ISDSetPacketValuesByProperty = ( DISPID_ISDGetPacketValuesByProperty + 1 ) ,
        DISPID_ISDGetFlattenedBezierPoints = ( DISPID_ISDSetPacketValuesByProperty + 1 ) ,
        DISPID_ISDScaleToRectangle = ( DISPID_ISDGetFlattenedBezierPoints + 1 ) ,
        DISPID_ISDTransform = ( DISPID_ISDScaleToRectangle + 1 ) ,
        DISPID_ISDMove = ( DISPID_ISDTransform + 1 ) ,
        DISPID_ISDRotate = ( DISPID_ISDMove + 1 ) ,
        DISPID_ISDShear = ( DISPID_ISDRotate + 1 ) ,
        DISPID_ISDScale = ( DISPID_ISDShear + 1 )
    } DISPID_InkStrokeDisp;
typedef
enum DISPID_InkStrokes
    {
        DISPID_ISs_NewEnum = DISPID_NEWENUM,
        DISPID_ISsItem = DISPID_VALUE,
        DISPID_ISsCount = 1,
        DISPID_ISsValid = ( DISPID_ISsCount + 1 ) ,
        DISPID_ISsInk = ( DISPID_ISsValid + 1 ) ,
        DISPID_ISsAdd = ( DISPID_ISsInk + 1 ) ,
        DISPID_ISsAddStrokes = ( DISPID_ISsAdd + 1 ) ,
        DISPID_ISsRemove = ( DISPID_ISsAddStrokes + 1 ) ,
        DISPID_ISsRemoveStrokes = ( DISPID_ISsRemove + 1 ) ,
        DISPID_ISsToString = ( DISPID_ISsRemoveStrokes + 1 ) ,
        DISPID_ISsModifyDrawingAttributes = ( DISPID_ISsToString + 1 ) ,
        DISPID_ISsGetBoundingBox = ( DISPID_ISsModifyDrawingAttributes + 1 ) ,
        DISPID_ISsScaleToRectangle = ( DISPID_ISsGetBoundingBox + 1 ) ,
        DISPID_ISsTransform = ( DISPID_ISsScaleToRectangle + 1 ) ,
        DISPID_ISsMove = ( DISPID_ISsTransform + 1 ) ,
        DISPID_ISsRotate = ( DISPID_ISsMove + 1 ) ,
        DISPID_ISsShear = ( DISPID_ISsRotate + 1 ) ,
        DISPID_ISsScale = ( DISPID_ISsShear + 1 ) ,
        DISPID_ISsClip = ( DISPID_ISsScale + 1 ) ,
        DISPID_ISsRecognitionResult = ( DISPID_ISsClip + 1 ) ,
        DISPID_ISsRemoveRecognitionResult = ( DISPID_ISsRecognitionResult + 1 )
    } DISPID_InkStrokes;
typedef
enum DISPID_InkCustomStrokes
    {
        DISPID_ICSs_NewEnum = DISPID_NEWENUM,
        DISPID_ICSsItem = DISPID_VALUE,
        DISPID_ICSsCount = 1,
        DISPID_ICSsAdd = ( DISPID_ICSsCount + 1 ) ,
        DISPID_ICSsRemove = ( DISPID_ICSsAdd + 1 ) ,
        DISPID_ICSsClear = ( DISPID_ICSsRemove + 1 )
    } DISPID_InkCustomStrokes;
typedef
enum DISPID_StrokeEvent
    {
        DISPID_SEStrokesAdded = 1,
        DISPID_SEStrokesRemoved = ( DISPID_SEStrokesAdded + 1 )
    } DISPID_StrokeEvent;
typedef
enum DISPID_Ink
    {
        DISPID_IStrokes = 1,
        DISPID_IExtendedProperties = ( DISPID_IStrokes + 1 ) ,
        DISPID_IGetBoundingBox = ( DISPID_IExtendedProperties + 1 ) ,
        DISPID_IDeleteStrokes = ( DISPID_IGetBoundingBox + 1 ) ,
        DISPID_IDeleteStroke = ( DISPID_IDeleteStrokes + 1 ) ,
        DISPID_IExtractStrokes = ( DISPID_IDeleteStroke + 1 ) ,
        DISPID_IExtractWithRectangle = ( DISPID_IExtractStrokes + 1 ) ,
        DISPID_IDirty = ( DISPID_IExtractWithRectangle + 1 ) ,
        DISPID_ICustomStrokes = ( DISPID_IDirty + 1 ) ,
        DISPID_IClone = ( DISPID_ICustomStrokes + 1 ) ,
        DISPID_IHitTestCircle = ( DISPID_IClone + 1 ) ,
        DISPID_IHitTestWithRectangle = ( DISPID_IHitTestCircle + 1 ) ,
        DISPID_IHitTestWithLasso = ( DISPID_IHitTestWithRectangle + 1 ) ,
        DISPID_INearestPoint = ( DISPID_IHitTestWithLasso + 1 ) ,
        DISPID_ICreateStrokes = ( DISPID_INearestPoint + 1 ) ,
        DISPID_ICreateStroke = ( DISPID_ICreateStrokes + 1 ) ,
        DISPID_IAddStrokesAtRectangle = ( DISPID_ICreateStroke + 1 ) ,
        DISPID_IClip = ( DISPID_IAddStrokesAtRectangle + 1 ) ,
        DISPID_ISave = ( DISPID_IClip + 1 ) ,
        DISPID_ILoad = ( DISPID_ISave + 1 ) ,
        DISPID_ICreateStrokeFromPoints = ( DISPID_ILoad + 1 ) ,
        DISPID_IClipboardCopyWithRectangle = ( DISPID_ICreateStrokeFromPoints + 1 ) ,
        DISPID_IClipboardCopy = ( DISPID_IClipboardCopyWithRectangle + 1 ) ,
        DISPID_ICanPaste = ( DISPID_IClipboardCopy + 1 ) ,
        DISPID_IClipboardPaste = ( DISPID_ICanPaste + 1 )
    } DISPID_Ink;
typedef
enum DISPID_InkEvent
    {
        DISPID_IEInkAdded = 1,
        DISPID_IEInkDeleted = ( DISPID_IEInkAdded + 1 )
    } DISPID_InkEvent;
typedef
enum DISPID_InkRenderer
    {
        DISPID_IRGetViewTransform = 1,
        DISPID_IRSetViewTransform = ( DISPID_IRGetViewTransform + 1 ) ,
        DISPID_IRGetObjectTransform = ( DISPID_IRSetViewTransform + 1 ) ,
        DISPID_IRSetObjectTransform = ( DISPID_IRGetObjectTransform + 1 ) ,
        DISPID_IRDraw = ( DISPID_IRSetObjectTransform + 1 ) ,
        DISPID_IRDrawStroke = ( DISPID_IRDraw + 1 ) ,
        DISPID_IRPixelToInkSpace = ( DISPID_IRDrawStroke + 1 ) ,
        DISPID_IRInkSpaceToPixel = ( DISPID_IRPixelToInkSpace + 1 ) ,
        DISPID_IRPixelToInkSpaceFromPoints = ( DISPID_IRInkSpaceToPixel + 1 ) ,
        DISPID_IRInkSpaceToPixelFromPoints = ( DISPID_IRPixelToInkSpaceFromPoints + 1 ) ,
        DISPID_IRMeasure = ( DISPID_IRInkSpaceToPixelFromPoints + 1 ) ,
        DISPID_IRMeasureStroke = ( DISPID_IRMeasure + 1 ) ,
        DISPID_IRMove = ( DISPID_IRMeasureStroke + 1 ) ,
        DISPID_IRRotate = ( DISPID_IRMove + 1 ) ,
        DISPID_IRScale = ( DISPID_IRRotate + 1 )
    } DISPID_InkRenderer;
typedef
enum InkCollectorEventInterest
    {
        ICEI_DefaultEvents = -1,
        ICEI_CursorDown = ( ICEI_DefaultEvents + 1 ) ,
        ICEI_Stroke = ( ICEI_CursorDown + 1 ) ,
        ICEI_NewPackets = ( ICEI_Stroke + 1 ) ,
        ICEI_NewInAirPackets = ( ICEI_NewPackets + 1 ) ,
        ICEI_CursorButtonDown = ( ICEI_NewInAirPackets + 1 ) ,
        ICEI_CursorButtonUp = ( ICEI_CursorButtonDown + 1 ) ,
        ICEI_CursorInRange = ( ICEI_CursorButtonUp + 1 ) ,
        ICEI_CursorOutOfRange = ( ICEI_CursorInRange + 1 ) ,
        ICEI_SystemGesture = ( ICEI_CursorOutOfRange + 1 ) ,
        ICEI_TabletAdded = ( ICEI_SystemGesture + 1 ) ,
        ICEI_TabletRemoved = ( ICEI_TabletAdded + 1 ) ,
        ICEI_MouseDown = ( ICEI_TabletRemoved + 1 ) ,
        ICEI_MouseMove = ( ICEI_MouseDown + 1 ) ,
        ICEI_MouseUp = ( ICEI_MouseMove + 1 ) ,
        ICEI_MouseWheel = ( ICEI_MouseUp + 1 ) ,
        ICEI_DblClick = ( ICEI_MouseWheel + 1 ) ,
        ICEI_AllEvents = ( ICEI_DblClick + 1 )
    } InkCollectorEventInterest;
typedef
enum InkMouseButton
    {
        IMF_Left = 1,
        IMF_Right = 2,
        IMF_Middle = 4
    } InkMouseButton;
typedef
enum InkShiftKeyModifierFlags
    {
        IKM_Shift = 0x1,
        IKM_Control = 0x2,
        IKM_Alt = 0x4
    } InkShiftKeyModifierFlags;
typedef
enum DISPID_InkCollectorEvent
    {
        DISPID_ICEStroke = 1,
        DISPID_ICECursorDown = ( DISPID_ICEStroke + 1 ) ,
        DISPID_ICENewPackets = ( DISPID_ICECursorDown + 1 ) ,
        DISPID_ICENewInAirPackets = ( DISPID_ICENewPackets + 1 ) ,
        DISPID_ICECursorButtonDown = ( DISPID_ICENewInAirPackets + 1 ) ,
        DISPID_ICECursorButtonUp = ( DISPID_ICECursorButtonDown + 1 ) ,
        DISPID_ICECursorInRange = ( DISPID_ICECursorButtonUp + 1 ) ,
        DISPID_ICECursorOutOfRange = ( DISPID_ICECursorInRange + 1 ) ,
        DISPID_ICESystemGesture = ( DISPID_ICECursorOutOfRange + 1 ) ,
        DISPID_ICEGesture = ( DISPID_ICESystemGesture + 1 ) ,
        DISPID_ICETabletAdded = ( DISPID_ICEGesture + 1 ) ,
        DISPID_ICETabletRemoved = ( DISPID_ICETabletAdded + 1 ) ,
        DISPID_IOEPainting = ( DISPID_ICETabletRemoved + 1 ) ,
        DISPID_IOEPainted = ( DISPID_IOEPainting + 1 ) ,
        DISPID_IOESelectionChanging = ( DISPID_IOEPainted + 1 ) ,
        DISPID_IOESelectionChanged = ( DISPID_IOESelectionChanging + 1 ) ,
        DISPID_IOESelectionMoving = ( DISPID_IOESelectionChanged + 1 ) ,
        DISPID_IOESelectionMoved = ( DISPID_IOESelectionMoving + 1 ) ,
        DISPID_IOESelectionResizing = ( DISPID_IOESelectionMoved + 1 ) ,
        DISPID_IOESelectionResized = ( DISPID_IOESelectionResizing + 1 ) ,
        DISPID_IOEStrokesDeleting = ( DISPID_IOESelectionResized + 1 ) ,
        DISPID_IOEStrokesDeleted = ( DISPID_IOEStrokesDeleting + 1 ) ,
        DISPID_IPEChangeUICues = ( DISPID_IOEStrokesDeleted + 1 ) ,
        DISPID_IPEClick = ( DISPID_IPEChangeUICues + 1 ) ,
        DISPID_IPEDblClick = ( DISPID_IPEClick + 1 ) ,
        DISPID_IPEInvalidated = ( DISPID_IPEDblClick + 1 ) ,
        DISPID_IPEMouseDown = ( DISPID_IPEInvalidated + 1 ) ,
        DISPID_IPEMouseEnter = ( DISPID_IPEMouseDown + 1 ) ,
        DISPID_IPEMouseHover = ( DISPID_IPEMouseEnter + 1 ) ,
        DISPID_IPEMouseLeave = ( DISPID_IPEMouseHover + 1 ) ,
        DISPID_IPEMouseMove = ( DISPID_IPEMouseLeave + 1 ) ,
        DISPID_IPEMouseUp = ( DISPID_IPEMouseMove + 1 ) ,
        DISPID_IPEMouseWheel = ( DISPID_IPEMouseUp + 1 ) ,
        DISPID_IPESizeModeChanged = ( DISPID_IPEMouseWheel + 1 ) ,
        DISPID_IPEStyleChanged = ( DISPID_IPESizeModeChanged + 1 ) ,
        DISPID_IPESystemColorsChanged = ( DISPID_IPEStyleChanged + 1 ) ,
        DISPID_IPEKeyDown = ( DISPID_IPESystemColorsChanged + 1 ) ,
        DISPID_IPEKeyPress = ( DISPID_IPEKeyDown + 1 ) ,
        DISPID_IPEKeyUp = ( DISPID_IPEKeyPress + 1 ) ,
        DISPID_IPEResize = ( DISPID_IPEKeyUp + 1 ) ,
        DISPID_IPESizeChanged = ( DISPID_IPEResize + 1 )
    } DISPID_InkCollectorEvent;
typedef
enum InkOverlayEditingMode
    {
        IOEM_Ink = 0,
        IOEM_Delete = 1,
        IOEM_Select = 2
    } InkOverlayEditingMode;
typedef
enum InkOverlayAttachMode
    {
        IOAM_Behind = 0,
        IOAM_InFront = 1
    } InkOverlayAttachMode;
typedef
enum InkPictureSizeMode
    {
        IPSM_AutoSize = 0,
        IPSM_CenterImage = 1,
        IPSM_Normal = 2,
        IPSM_StretchImage = 3
    } InkPictureSizeMode;
typedef
enum InkOverlayEraserMode
    {
        IOERM_StrokeErase = 0,
        IOERM_PointErase = 1
    } InkOverlayEraserMode;
typedef
enum InkCollectionMode
    {
        ICM_InkOnly = 0,
        ICM_GestureOnly = ( ICM_InkOnly + 1 ) ,
        ICM_InkAndGesture = ( ICM_GestureOnly + 1 )
    } InkCollectionMode;
typedef
enum DISPID_InkCollector
    {
        DISPID_ICEnabled = 1,
        DISPID_ICHwnd = ( DISPID_ICEnabled + 1 ) ,
        DISPID_ICPaint = ( DISPID_ICHwnd + 1 ) ,
        DISPID_ICText = ( DISPID_ICPaint + 1 ) ,
        DISPID_ICDefaultDrawingAttributes = ( DISPID_ICText + 1 ) ,
        DISPID_ICRenderer = ( DISPID_ICDefaultDrawingAttributes + 1 ) ,
        DISPID_ICInk = ( DISPID_ICRenderer + 1 ) ,
        DISPID_ICAutoRedraw = ( DISPID_ICInk + 1 ) ,
        DISPID_ICCollectingInk = ( DISPID_ICAutoRedraw + 1 ) ,
        DISPID_ICSetEventInterest = ( DISPID_ICCollectingInk + 1 ) ,
        DISPID_ICGetEventInterest = ( DISPID_ICSetEventInterest + 1 ) ,
        DISPID_IOEditingMode = ( DISPID_ICGetEventInterest + 1 ) ,
        DISPID_IOSelection = ( DISPID_IOEditingMode + 1 ) ,
        DISPID_IOAttachMode = ( DISPID_IOSelection + 1 ) ,
        DISPID_IOHitTestSelection = ( DISPID_IOAttachMode + 1 ) ,
        DISPID_IODraw = ( DISPID_IOHitTestSelection + 1 ) ,
        DISPID_IPPicture = ( DISPID_IODraw + 1 ) ,
        DISPID_IPSizeMode = ( DISPID_IPPicture + 1 ) ,
        DISPID_IPBackColor = ( DISPID_IPSizeMode + 1 ) ,
        DISPID_ICCursors = ( DISPID_IPBackColor + 1 ) ,
        DISPID_ICMarginX = ( DISPID_ICCursors + 1 ) ,
        DISPID_ICMarginY = ( DISPID_ICMarginX + 1 ) ,
        DISPID_ICSetWindowInputRectangle = ( DISPID_ICMarginY + 1 ) ,
        DISPID_ICGetWindowInputRectangle = ( DISPID_ICSetWindowInputRectangle + 1 ) ,
        DISPID_ICTablet = ( DISPID_ICGetWindowInputRectangle + 1 ) ,
        DISPID_ICSetAllTabletsMode = ( DISPID_ICTablet + 1 ) ,
        DISPID_ICSetSingleTabletIntegratedMode = ( DISPID_ICSetAllTabletsMode + 1 ) ,
        DISPID_ICCollectionMode = ( DISPID_ICSetSingleTabletIntegratedMode + 1 ) ,
        DISPID_ICSetGestureStatus = ( DISPID_ICCollectionMode + 1 ) ,
        DISPID_ICGetGestureStatus = ( DISPID_ICSetGestureStatus + 1 ) ,
        DISPID_ICDynamicRendering = ( DISPID_ICGetGestureStatus + 1 ) ,
        DISPID_ICDesiredPacketDescription = ( DISPID_ICDynamicRendering + 1 ) ,
        DISPID_IOEraserMode = ( DISPID_ICDesiredPacketDescription + 1 ) ,
        DISPID_IOEraserWidth = ( DISPID_IOEraserMode + 1 ) ,
        DISPID_ICMouseIcon = ( DISPID_IOEraserWidth + 1 ) ,
        DISPID_ICMousePointer = ( DISPID_ICMouseIcon + 1 ) ,
        DISPID_IPInkEnabled = ( DISPID_ICMousePointer + 1 ) ,
        DISPID_ICSupportHighContrastInk = ( DISPID_IPInkEnabled + 1 ) ,
        DISPID_IOSupportHighContrastSelectionUI = ( DISPID_ICSupportHighContrastInk + 1 )
    } DISPID_InkCollector;
typedef
enum DISPID_InkRecognizer
    {
        DISPID_RecoClsid = 1,
        DISPID_RecoName = ( DISPID_RecoClsid + 1 ) ,
        DISPID_RecoVendor = ( DISPID_RecoName + 1 ) ,
        DISPID_RecoCapabilities = ( DISPID_RecoVendor + 1 ) ,
        DISPID_RecoLanguageID = ( DISPID_RecoCapabilities + 1 ) ,
        DISPID_RecoPreferredPacketDescription = ( DISPID_RecoLanguageID + 1 ) ,
        DISPID_RecoCreateRecognizerContext = ( DISPID_RecoPreferredPacketDescription + 1 ) ,
        DISPID_RecoSupportedProperties = ( DISPID_RecoCreateRecognizerContext + 1 )
    } DISPID_InkRecognizer;
typedef
enum InkRecognizerCapabilities
    {
        IRC_DontCare = 1,
        IRC_Object = 2,
        IRC_FreeInput = 4,
        IRC_LinedInput = 8,
        IRC_BoxedInput = 16,
        IRC_CharacterAutoCompletionInput = 32,
        IRC_RightAndDown = 64,
        IRC_LeftAndDown = 128,
        IRC_DownAndLeft = 256,
        IRC_DownAndRight = 512,
        IRC_ArbitraryAngle = 1024,
        IRC_Lattice = 2048,
        IRC_AdviseInkChange = 4096,
        IRC_StrokeReorder = 8192,
        IRC_Personalizable = 16384,
        IRC_PrefersArbitraryAngle = 32768,
        IRC_PrefersParagraphBreaking = 65536,
        IRC_PrefersSegmentation = 131072,
        IRC_Cursive = 262144,
        IRC_TextPrediction = 524288,
        IRC_Alpha = 1048576,
        IRC_Beta = 2097152
    } InkRecognizerCapabilities;
typedef
enum DISPID_InkRecognizer2
    {
        DISPID_RecoId = DISPID_VALUE,
        DISPID_RecoUnicodeRanges = 1
    } DISPID_InkRecognizer2;
typedef
enum DISPID_InkRecognizers
    {
        DISPID_IRecos_NewEnum = DISPID_NEWENUM,
        DISPID_IRecosItem = DISPID_VALUE,
        DISPID_IRecosCount = 1,
        DISPID_IRecosGetDefaultRecognizer = ( DISPID_IRecosCount + 1 )
    } DISPID_InkRecognizers;
typedef
enum InkRecognizerCharacterAutoCompletionMode
    {
        IRCACM_Full = 0,
        IRCACM_Prefix = ( IRCACM_Full + 1 ) ,
        IRCACM_Random = ( IRCACM_Prefix + 1 )
    } InkRecognizerCharacterAutoCompletionMode;
typedef
enum InkRecognitionModes
    {
        IRM_None = 0,
        IRM_WordModeOnly = 0x1,
        IRM_Coerce = 0x2,
        IRM_TopInkBreaksOnly = 0x4,
        IRM_PrefixOk = 0x8,
        IRM_LineMode = 0x10,
        IRM_DisablePersonalization = 0x20,
        IRM_AutoSpace = 0x40,
        IRM_Max = 0x80
    } InkRecognitionModes;
typedef
enum DISPID_InkRecognitionEvent
    {
        DISPID_IRERecognitionWithAlternates = 1,
        DISPID_IRERecognition = ( DISPID_IRERecognitionWithAlternates + 1 )
    } DISPID_InkRecognitionEvent;
typedef
enum DISPID_InkRecoContext
    {
        DISPID_IRecoCtx_Strokes = 1,
        DISPID_IRecoCtx_CharacterAutoCompletionMode = ( DISPID_IRecoCtx_Strokes + 1 ) ,
        DISPID_IRecoCtx_Factoid = ( DISPID_IRecoCtx_CharacterAutoCompletionMode + 1 ) ,
        DISPID_IRecoCtx_WordList = ( DISPID_IRecoCtx_Factoid + 1 ) ,
        DISPID_IRecoCtx_Recognizer = ( DISPID_IRecoCtx_WordList + 1 ) ,
        DISPID_IRecoCtx_Guide = ( DISPID_IRecoCtx_Recognizer + 1 ) ,
        DISPID_IRecoCtx_Flags = ( DISPID_IRecoCtx_Guide + 1 ) ,
        DISPID_IRecoCtx_PrefixText = ( DISPID_IRecoCtx_Flags + 1 ) ,
        DISPID_IRecoCtx_SuffixText = ( DISPID_IRecoCtx_PrefixText + 1 ) ,
        DISPID_IRecoCtx_StopRecognition = ( DISPID_IRecoCtx_SuffixText + 1 ) ,
        DISPID_IRecoCtx_Clone = ( DISPID_IRecoCtx_StopRecognition + 1 ) ,
        DISPID_IRecoCtx_Recognize = ( DISPID_IRecoCtx_Clone + 1 ) ,
        DISPID_IRecoCtx_StopBackgroundRecognition = ( DISPID_IRecoCtx_Recognize + 1 ) ,
        DISPID_IRecoCtx_EndInkInput = ( DISPID_IRecoCtx_StopBackgroundRecognition + 1 ) ,
        DISPID_IRecoCtx_BackgroundRecognize = ( DISPID_IRecoCtx_EndInkInput + 1 ) ,
        DISPID_IRecoCtx_BackgroundRecognizeWithAlternates = ( DISPID_IRecoCtx_BackgroundRecognize + 1 ) ,
        DISPID_IRecoCtx_IsStringSupported = ( DISPID_IRecoCtx_BackgroundRecognizeWithAlternates + 1 )
    } DISPID_InkRecoContext;
typedef
enum DISPID_InkRecoContext2
    {
        DISPID_IRecoCtx2_EnabledUnicodeRanges = DISPID_VALUE
    } DISPID_InkRecoContext2;
typedef
enum InkRecognitionAlternatesSelection
    {
        IRAS_Start = 0,
        IRAS_DefaultCount = 10,
        IRAS_All = -1
    } InkRecognitionAlternatesSelection;
typedef
enum DISPID_InkRecognitionResult
    {
        DISPID_InkRecognitionResult_TopString = 1,
        DISPID_InkRecognitionResult_TopAlternate = ( DISPID_InkRecognitionResult_TopString + 1 ) ,
        DISPID_InkRecognitionResult_Strokes = ( DISPID_InkRecognitionResult_TopAlternate + 1 ) ,
        DISPID_InkRecognitionResult_TopConfidence = ( DISPID_InkRecognitionResult_Strokes + 1 ) ,
        DISPID_InkRecognitionResult_AlternatesFromSelection = ( DISPID_InkRecognitionResult_TopConfidence + 1 ) ,
        DISPID_InkRecognitionResult_ModifyTopAlternate = ( DISPID_InkRecognitionResult_AlternatesFromSelection + 1 ) ,
        DISPID_InkRecognitionResult_SetResultOnStrokes = ( DISPID_InkRecognitionResult_ModifyTopAlternate + 1 )
    } DISPID_InkRecognitionResult;
typedef
enum DISPID_InkRecoAlternate
    {
        DISPID_InkRecoAlternate_String = 1,
        DISPID_InkRecoAlternate_LineNumber = ( DISPID_InkRecoAlternate_String + 1 ) ,
        DISPID_InkRecoAlternate_Baseline = ( DISPID_InkRecoAlternate_LineNumber + 1 ) ,
        DISPID_InkRecoAlternate_Midline = ( DISPID_InkRecoAlternate_Baseline + 1 ) ,
        DISPID_InkRecoAlternate_Ascender = ( DISPID_InkRecoAlternate_Midline + 1 ) ,
        DISPID_InkRecoAlternate_Descender = ( DISPID_InkRecoAlternate_Ascender + 1 ) ,
        DISPID_InkRecoAlternate_Confidence = ( DISPID_InkRecoAlternate_Descender + 1 ) ,
        DISPID_InkRecoAlternate_Strokes = ( DISPID_InkRecoAlternate_Confidence + 1 ) ,
        DISPID_InkRecoAlternate_GetStrokesFromStrokeRanges = ( DISPID_InkRecoAlternate_Strokes + 1 ) ,
        DISPID_InkRecoAlternate_GetStrokesFromTextRange = ( DISPID_InkRecoAlternate_GetStrokesFromStrokeRanges + 1 ) ,
        DISPID_InkRecoAlternate_GetTextRangeFromStrokes = ( DISPID_InkRecoAlternate_GetStrokesFromTextRange + 1 ) ,
        DISPID_InkRecoAlternate_GetPropertyValue = ( DISPID_InkRecoAlternate_GetTextRangeFromStrokes + 1 ) ,
        DISPID_InkRecoAlternate_LineAlternates = ( DISPID_InkRecoAlternate_GetPropertyValue + 1 ) ,
        DISPID_InkRecoAlternate_ConfidenceAlternates = ( DISPID_InkRecoAlternate_LineAlternates + 1 ) ,
        DISPID_InkRecoAlternate_AlternatesWithConstantPropertyValues = ( DISPID_InkRecoAlternate_ConfidenceAlternates + 1 )
    } DISPID_InkRecoAlternate;
typedef
enum DISPID_InkRecognitionAlternates
    {
        DISPID_InkRecognitionAlternates_NewEnum = DISPID_NEWENUM,
        DISPID_InkRecognitionAlternates_Item = DISPID_VALUE,
        DISPID_InkRecognitionAlternates_Count = 1,
        DISPID_InkRecognitionAlternates_Strokes = ( DISPID_InkRecognitionAlternates_Count + 1 )
    } DISPID_InkRecognitionAlternates;
typedef struct _InkRecoGuide
    {
    RECT rectWritingBox;
    RECT rectDrawnBox;
    long cRows;
    long cColumns;
    long midline;
    } InkRecoGuide;
typedef
enum DISPID_InkRecognizerGuide
    {
        DISPID_IRGWritingBox = 1,
        DISPID_IRGDrawnBox = ( DISPID_IRGWritingBox + 1 ) ,
        DISPID_IRGRows = ( DISPID_IRGDrawnBox + 1 ) ,
        DISPID_IRGColumns = ( DISPID_IRGRows + 1 ) ,
        DISPID_IRGMidline = ( DISPID_IRGColumns + 1 ) ,
        DISPID_IRGGuideData = ( DISPID_IRGMidline + 1 )
    } DISPID_InkRecognizerGuide;
typedef
enum DISPID_InkWordList
    {
        DISPID_InkWordList_AddWord = 0,
        DISPID_InkWordList_RemoveWord = ( DISPID_InkWordList_AddWord + 1 ) ,
        DISPID_InkWordList_Merge = ( DISPID_InkWordList_RemoveWord + 1 )
    } DISPID_InkWordList;
typedef
enum DISPID_InkWordList2
    {
        DISPID_InkWordList2_AddWords = ( DISPID_InkWordList_Merge + 1 )
    } DISPID_InkWordList2;
EXTERN_C const IID LIBID_MSINKAUTLib;
const LONG InkMinTransparencyValue = 0;
const LONG InkMaxTransparencyValue = 255;
const LONG InkCollectorClipInkToMargin = 0;
const LONG InkCollectorDefaultMargin = ( -2147483647L - 1 ) ;
EXTERN_C const IID IID_IInkRectangle;
    typedef struct IInkRectangleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkRectangle * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkRectangle * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkRectangle * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkRectangle * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkRectangle * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkRectangle * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkRectangle * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Top )(
            __RPC__in IInkRectangle * This,
                                __RPC__out long *Units);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Top )(
            __RPC__in IInkRectangle * This,
                       long Units);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Left )(
            __RPC__in IInkRectangle * This,
                                __RPC__out long *Units);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Left )(
            __RPC__in IInkRectangle * This,
                       long Units);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Bottom )(
            __RPC__in IInkRectangle * This,
                                __RPC__out long *Units);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Bottom )(
            __RPC__in IInkRectangle * This,
                       long Units);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Right )(
            __RPC__in IInkRectangle * This,
                                __RPC__out long *Units);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Right )(
            __RPC__in IInkRectangle * This,
                       long Units);
                                                             HRESULT ( STDMETHODCALLTYPE *get_Data )(
            __RPC__in IInkRectangle * This,
                                __RPC__out RECT *Rect);
                                                             HRESULT ( STDMETHODCALLTYPE *put_Data )(
            __RPC__in IInkRectangle * This,
                       RECT Rect);
                                            HRESULT ( STDMETHODCALLTYPE *GetRectangle )(
            __RPC__in IInkRectangle * This,
                        __RPC__out long *Top,
                        __RPC__out long *Left,
                        __RPC__out long *Bottom,
                        __RPC__out long *Right);
                                            HRESULT ( STDMETHODCALLTYPE *SetRectangle )(
            __RPC__in IInkRectangle * This,
                       long Top,
                       long Left,
                       long Bottom,
                       long Right);
        END_INTERFACE
    } IInkRectangleVtbl;
    interface IInkRectangle
    {
        CONST_VTBL struct IInkRectangleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Top(This,Units) )
    ( (This)->lpVtbl -> put_Top(This,Units) )
    ( (This)->lpVtbl -> get_Left(This,Units) )
    ( (This)->lpVtbl -> put_Left(This,Units) )
    ( (This)->lpVtbl -> get_Bottom(This,Units) )
    ( (This)->lpVtbl -> put_Bottom(This,Units) )
    ( (This)->lpVtbl -> get_Right(This,Units) )
    ( (This)->lpVtbl -> put_Right(This,Units) )
    ( (This)->lpVtbl -> get_Data(This,Rect) )
    ( (This)->lpVtbl -> put_Data(This,Rect) )
    ( (This)->lpVtbl -> GetRectangle(This,Top,Left,Bottom,Right) )
    ( (This)->lpVtbl -> SetRectangle(This,Top,Left,Bottom,Right) )
EXTERN_C const IID IID_IInkExtendedProperty;
    typedef struct IInkExtendedPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkExtendedProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkExtendedProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkExtendedProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkExtendedProperty * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkExtendedProperty * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkExtendedProperty * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkExtendedProperty * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Guid )(
            __RPC__in IInkExtendedProperty * This,
                                __RPC__deref_out_opt BSTR *Guid);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Data )(
            __RPC__in IInkExtendedProperty * This,
                                __RPC__out VARIANT *Data);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Data )(
            __RPC__in IInkExtendedProperty * This,
                       VARIANT Data);
        END_INTERFACE
    } IInkExtendedPropertyVtbl;
    interface IInkExtendedProperty
    {
        CONST_VTBL struct IInkExtendedPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Guid(This,Guid) )
    ( (This)->lpVtbl -> get_Data(This,Data) )
    ( (This)->lpVtbl -> put_Data(This,Data) )
EXTERN_C const IID IID_IInkExtendedProperties;
    typedef struct IInkExtendedPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkExtendedProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkExtendedProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkExtendedProperties * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkExtendedProperties * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkExtendedProperties * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkExtendedProperties * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkExtendedProperties * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IInkExtendedProperties * This,
                                __RPC__out long *Count);
                                                                 HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IInkExtendedProperties * This,
                                __RPC__deref_out_opt IUnknown **_NewEnum);
                                            HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IInkExtendedProperties * This,
                       VARIANT Identifier,
                                __RPC__deref_out_opt IInkExtendedProperty **Item);
                                            HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IInkExtendedProperties * This,
                       __RPC__in BSTR Guid,
                       VARIANT Data,
                                __RPC__deref_out_opt IInkExtendedProperty **InkExtendedProperty);
                                            HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IInkExtendedProperties * This,
                       VARIANT Identifier);
                                            HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IInkExtendedProperties * This);
                                            HRESULT ( STDMETHODCALLTYPE *DoesPropertyExist )(
            __RPC__in IInkExtendedProperties * This,
                       __RPC__in BSTR Guid,
                                __RPC__out VARIANT_BOOL *DoesPropertyExist);
        END_INTERFACE
    } IInkExtendedPropertiesVtbl;
    interface IInkExtendedProperties
    {
        CONST_VTBL struct IInkExtendedPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
    ( (This)->lpVtbl -> Item(This,Identifier,Item) )
    ( (This)->lpVtbl -> Add(This,Guid,Data,InkExtendedProperty) )
    ( (This)->lpVtbl -> Remove(This,Identifier) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> DoesPropertyExist(This,Guid,DoesPropertyExist) )
EXTERN_C const IID IID_IInkDrawingAttributes;
    typedef struct IInkDrawingAttributesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkDrawingAttributes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkDrawingAttributes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkDrawingAttributes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkDrawingAttributes * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkDrawingAttributes * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkDrawingAttributes * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkDrawingAttributes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Color )(
            __RPC__in IInkDrawingAttributes * This,
                                __RPC__out long *CurrentColor);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Color )(
            __RPC__in IInkDrawingAttributes * This,
                       long NewColor);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Width )(
            __RPC__in IInkDrawingAttributes * This,
                                __RPC__out float *CurrentWidth);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Width )(
            __RPC__in IInkDrawingAttributes * This,
                       float NewWidth);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Height )(
            __RPC__in IInkDrawingAttributes * This,
                                __RPC__out float *CurrentHeight);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Height )(
            __RPC__in IInkDrawingAttributes * This,
                       float NewHeight);
                                                     HRESULT ( STDMETHODCALLTYPE *get_FitToCurve )(
            __RPC__in IInkDrawingAttributes * This,
                                __RPC__out VARIANT_BOOL *Flag);
                                                     HRESULT ( STDMETHODCALLTYPE *put_FitToCurve )(
            __RPC__in IInkDrawingAttributes * This,
                       VARIANT_BOOL Flag);
                                                     HRESULT ( STDMETHODCALLTYPE *get_IgnorePressure )(
            __RPC__in IInkDrawingAttributes * This,
                                __RPC__out VARIANT_BOOL *Flag);
                                                     HRESULT ( STDMETHODCALLTYPE *put_IgnorePressure )(
            __RPC__in IInkDrawingAttributes * This,
                       VARIANT_BOOL Flag);
                                                     HRESULT ( STDMETHODCALLTYPE *get_AntiAliased )(
            __RPC__in IInkDrawingAttributes * This,
                                __RPC__out VARIANT_BOOL *Flag);
                                                     HRESULT ( STDMETHODCALLTYPE *put_AntiAliased )(
            __RPC__in IInkDrawingAttributes * This,
                       VARIANT_BOOL Flag);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Transparency )(
            __RPC__in IInkDrawingAttributes * This,
                                __RPC__out long *CurrentTransparency);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Transparency )(
            __RPC__in IInkDrawingAttributes * This,
                       long NewTransparency);
                                                     HRESULT ( STDMETHODCALLTYPE *get_RasterOperation )(
            __RPC__in IInkDrawingAttributes * This,
                                __RPC__out InkRasterOperation *CurrentRasterOperation);
                                                     HRESULT ( STDMETHODCALLTYPE *put_RasterOperation )(
            __RPC__in IInkDrawingAttributes * This,
                       InkRasterOperation NewRasterOperation);
                                                     HRESULT ( STDMETHODCALLTYPE *get_PenTip )(
            __RPC__in IInkDrawingAttributes * This,
                                __RPC__out InkPenTip *CurrentPenTip);
                                                     HRESULT ( STDMETHODCALLTYPE *put_PenTip )(
            __RPC__in IInkDrawingAttributes * This,
                       InkPenTip NewPenTip);
                                                     HRESULT ( STDMETHODCALLTYPE *get_ExtendedProperties )(
            __RPC__in IInkDrawingAttributes * This,
                                __RPC__deref_out_opt IInkExtendedProperties **Properties);
                                            HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IInkDrawingAttributes * This,
                                __RPC__deref_out_opt IInkDrawingAttributes **DrawingAttributes);
        END_INTERFACE
    } IInkDrawingAttributesVtbl;
    interface IInkDrawingAttributes
    {
        CONST_VTBL struct IInkDrawingAttributesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Color(This,CurrentColor) )
    ( (This)->lpVtbl -> put_Color(This,NewColor) )
    ( (This)->lpVtbl -> get_Width(This,CurrentWidth) )
    ( (This)->lpVtbl -> put_Width(This,NewWidth) )
    ( (This)->lpVtbl -> get_Height(This,CurrentHeight) )
    ( (This)->lpVtbl -> put_Height(This,NewHeight) )
    ( (This)->lpVtbl -> get_FitToCurve(This,Flag) )
    ( (This)->lpVtbl -> put_FitToCurve(This,Flag) )
    ( (This)->lpVtbl -> get_IgnorePressure(This,Flag) )
    ( (This)->lpVtbl -> put_IgnorePressure(This,Flag) )
    ( (This)->lpVtbl -> get_AntiAliased(This,Flag) )
    ( (This)->lpVtbl -> put_AntiAliased(This,Flag) )
    ( (This)->lpVtbl -> get_Transparency(This,CurrentTransparency) )
    ( (This)->lpVtbl -> put_Transparency(This,NewTransparency) )
    ( (This)->lpVtbl -> get_RasterOperation(This,CurrentRasterOperation) )
    ( (This)->lpVtbl -> put_RasterOperation(This,NewRasterOperation) )
    ( (This)->lpVtbl -> get_PenTip(This,CurrentPenTip) )
    ( (This)->lpVtbl -> put_PenTip(This,NewPenTip) )
    ( (This)->lpVtbl -> get_ExtendedProperties(This,Properties) )
    ( (This)->lpVtbl -> Clone(This,DrawingAttributes) )
EXTERN_C const IID IID_IInkTransform;
    typedef struct IInkTransformVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkTransform * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkTransform * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkTransform * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkTransform * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkTransform * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkTransform * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkTransform * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IInkTransform * This);
                                            HRESULT ( STDMETHODCALLTYPE *Translate )(
            __RPC__in IInkTransform * This,
                       float HorizontalComponent,
                       float VerticalComponent);
                                            HRESULT ( STDMETHODCALLTYPE *Rotate )(
            __RPC__in IInkTransform * This,
                       float Degrees,
                                     float x,
                                     float y);
                                            HRESULT ( STDMETHODCALLTYPE *Reflect )(
            __RPC__in IInkTransform * This,
                       VARIANT_BOOL Horizontally,
                       VARIANT_BOOL Vertically);
                                            HRESULT ( STDMETHODCALLTYPE *Shear )(
            __RPC__in IInkTransform * This,
                       float HorizontalComponent,
                       float VerticalComponent);
                                            HRESULT ( STDMETHODCALLTYPE *ScaleTransform )(
            __RPC__in IInkTransform * This,
                       float HorizontalMultiplier,
                       float VerticalMultiplier);
                                            HRESULT ( STDMETHODCALLTYPE *GetTransform )(
            __RPC__in IInkTransform * This,
                        __RPC__out float *eM11,
                        __RPC__out float *eM12,
                        __RPC__out float *eM21,
                        __RPC__out float *eM22,
                        __RPC__out float *eDx,
                        __RPC__out float *eDy);
                                            HRESULT ( STDMETHODCALLTYPE *SetTransform )(
            __RPC__in IInkTransform * This,
                       float eM11,
                       float eM12,
                       float eM21,
                       float eM22,
                       float eDx,
                       float eDy);
                                                             HRESULT ( STDMETHODCALLTYPE *get_eM11 )(
            __RPC__in IInkTransform * This,
                                __RPC__out float *Value);
                                                             HRESULT ( STDMETHODCALLTYPE *put_eM11 )(
            __RPC__in IInkTransform * This,
                       float Value);
                                                             HRESULT ( STDMETHODCALLTYPE *get_eM12 )(
            __RPC__in IInkTransform * This,
                                __RPC__out float *Value);
                                                             HRESULT ( STDMETHODCALLTYPE *put_eM12 )(
            __RPC__in IInkTransform * This,
                       float Value);
                                                             HRESULT ( STDMETHODCALLTYPE *get_eM21 )(
            __RPC__in IInkTransform * This,
                                __RPC__out float *Value);
                                                             HRESULT ( STDMETHODCALLTYPE *put_eM21 )(
            __RPC__in IInkTransform * This,
                       float Value);
                                                             HRESULT ( STDMETHODCALLTYPE *get_eM22 )(
            __RPC__in IInkTransform * This,
                                __RPC__out float *Value);
                                                             HRESULT ( STDMETHODCALLTYPE *put_eM22 )(
            __RPC__in IInkTransform * This,
                       float Value);
                                                             HRESULT ( STDMETHODCALLTYPE *get_eDx )(
            __RPC__in IInkTransform * This,
                                __RPC__out float *Value);
                                                             HRESULT ( STDMETHODCALLTYPE *put_eDx )(
            __RPC__in IInkTransform * This,
                       float Value);
                                                             HRESULT ( STDMETHODCALLTYPE *get_eDy )(
            __RPC__in IInkTransform * This,
                                __RPC__out float *Value);
                                                             HRESULT ( STDMETHODCALLTYPE *put_eDy )(
            __RPC__in IInkTransform * This,
                       float Value);
                                                             HRESULT ( STDMETHODCALLTYPE *get_Data )(
            __RPC__in IInkTransform * This,
                                __RPC__out XFORM *XForm);
                                                             HRESULT ( STDMETHODCALLTYPE *put_Data )(
            __RPC__in IInkTransform * This,
                       XFORM XForm);
        END_INTERFACE
    } IInkTransformVtbl;
    interface IInkTransform
    {
        CONST_VTBL struct IInkTransformVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Translate(This,HorizontalComponent,VerticalComponent) )
    ( (This)->lpVtbl -> Rotate(This,Degrees,x,y) )
    ( (This)->lpVtbl -> Reflect(This,Horizontally,Vertically) )
    ( (This)->lpVtbl -> Shear(This,HorizontalComponent,VerticalComponent) )
    ( (This)->lpVtbl -> ScaleTransform(This,HorizontalMultiplier,VerticalMultiplier) )
    ( (This)->lpVtbl -> GetTransform(This,eM11,eM12,eM21,eM22,eDx,eDy) )
    ( (This)->lpVtbl -> SetTransform(This,eM11,eM12,eM21,eM22,eDx,eDy) )
    ( (This)->lpVtbl -> get_eM11(This,Value) )
    ( (This)->lpVtbl -> put_eM11(This,Value) )
    ( (This)->lpVtbl -> get_eM12(This,Value) )
    ( (This)->lpVtbl -> put_eM12(This,Value) )
    ( (This)->lpVtbl -> get_eM21(This,Value) )
    ( (This)->lpVtbl -> put_eM21(This,Value) )
    ( (This)->lpVtbl -> get_eM22(This,Value) )
    ( (This)->lpVtbl -> put_eM22(This,Value) )
    ( (This)->lpVtbl -> get_eDx(This,Value) )
    ( (This)->lpVtbl -> put_eDx(This,Value) )
    ( (This)->lpVtbl -> get_eDy(This,Value) )
    ( (This)->lpVtbl -> put_eDy(This,Value) )
    ( (This)->lpVtbl -> get_Data(This,XForm) )
    ( (This)->lpVtbl -> put_Data(This,XForm) )
EXTERN_C const IID IID_IInkGesture;
    typedef struct IInkGestureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkGesture * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkGesture * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkGesture * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkGesture * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkGesture * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkGesture * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkGesture * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Confidence )(
            __RPC__in IInkGesture * This,
                                __RPC__out InkRecognitionConfidence *Confidence);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IInkGesture * This,
                                __RPC__out InkApplicationGesture *Id);
                                            HRESULT ( STDMETHODCALLTYPE *GetHotPoint )(
            __RPC__in IInkGesture * This,
                            __RPC__inout long *X,
                            __RPC__inout long *Y);
        END_INTERFACE
    } IInkGestureVtbl;
    interface IInkGesture
    {
        CONST_VTBL struct IInkGestureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Confidence(This,Confidence) )
    ( (This)->lpVtbl -> get_Id(This,Id) )
    ( (This)->lpVtbl -> GetHotPoint(This,X,Y) )
EXTERN_C const IID IID_IInkCursor;
    typedef struct IInkCursorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkCursor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkCursor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkCursor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkCursor * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkCursor * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkCursor * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkCursor * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IInkCursor * This,
                                __RPC__deref_out_opt BSTR *Name);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IInkCursor * This,
                                __RPC__out long *Id);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Inverted )(
            __RPC__in IInkCursor * This,
                                __RPC__out VARIANT_BOOL *Status);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DrawingAttributes )(
            __RPC__in IInkCursor * This,
                                __RPC__deref_out_opt IInkDrawingAttributes **Attributes);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_DrawingAttributes )(
            __RPC__in IInkCursor * This,
                       __RPC__in_opt IInkDrawingAttributes *Attributes);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Tablet )(
            __RPC__in IInkCursor * This,
                                __RPC__deref_out_opt IInkTablet **Tablet);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Buttons )(
            __RPC__in IInkCursor * This,
                                __RPC__deref_out_opt IInkCursorButtons **Buttons);
        END_INTERFACE
    } IInkCursorVtbl;
    interface IInkCursor
    {
        CONST_VTBL struct IInkCursorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Id(This,Id) )
    ( (This)->lpVtbl -> get_Inverted(This,Status) )
    ( (This)->lpVtbl -> get_DrawingAttributes(This,Attributes) )
    ( (This)->lpVtbl -> putref_DrawingAttributes(This,Attributes) )
    ( (This)->lpVtbl -> get_Tablet(This,Tablet) )
    ( (This)->lpVtbl -> get_Buttons(This,Buttons) )
EXTERN_C const IID IID_IInkCursors;
    typedef struct IInkCursorsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkCursors * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkCursors * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkCursors * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkCursors * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkCursors * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkCursors * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkCursors * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IInkCursors * This,
                                __RPC__out long *Count);
                                                                 HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IInkCursors * This,
                                __RPC__deref_out_opt IUnknown **_NewEnum);
                                            HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IInkCursors * This,
                       long Index,
                                __RPC__deref_out_opt IInkCursor **Cursor);
        END_INTERFACE
    } IInkCursorsVtbl;
    interface IInkCursors
    {
        CONST_VTBL struct IInkCursorsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
    ( (This)->lpVtbl -> Item(This,Index,Cursor) )
EXTERN_C const IID IID_IInkCursorButton;
    typedef struct IInkCursorButtonVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkCursorButton * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkCursorButton * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkCursorButton * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkCursorButton * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkCursorButton * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkCursorButton * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkCursorButton * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IInkCursorButton * This,
                                __RPC__deref_out_opt BSTR *Name);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IInkCursorButton * This,
                                __RPC__deref_out_opt BSTR *Id);
                                                     HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IInkCursorButton * This,
                                __RPC__out InkCursorButtonState *CurrentState);
        END_INTERFACE
    } IInkCursorButtonVtbl;
    interface IInkCursorButton
    {
        CONST_VTBL struct IInkCursorButtonVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Id(This,Id) )
    ( (This)->lpVtbl -> get_State(This,CurrentState) )
EXTERN_C const IID IID_IInkCursorButtons;
    typedef struct IInkCursorButtonsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkCursorButtons * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkCursorButtons * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkCursorButtons * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkCursorButtons * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkCursorButtons * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkCursorButtons * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkCursorButtons * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IInkCursorButtons * This,
                                __RPC__out long *Count);
                                                                 HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IInkCursorButtons * This,
                                __RPC__deref_out_opt IUnknown **_NewEnum);
                                            HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IInkCursorButtons * This,
                       VARIANT Identifier,
                                __RPC__deref_out_opt IInkCursorButton **Button);
        END_INTERFACE
    } IInkCursorButtonsVtbl;
    interface IInkCursorButtons
    {
        CONST_VTBL struct IInkCursorButtonsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
    ( (This)->lpVtbl -> Item(This,Identifier,Button) )
EXTERN_C const IID IID_IInkTablet;
    typedef struct IInkTabletVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkTablet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkTablet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkTablet * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkTablet * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkTablet * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkTablet * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkTablet * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IInkTablet * This,
                                __RPC__deref_out_opt BSTR *Name);
                                                     HRESULT ( STDMETHODCALLTYPE *get_PlugAndPlayId )(
            __RPC__in IInkTablet * This,
                                __RPC__deref_out_opt BSTR *Id);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MaximumInputRectangle )(
            __RPC__in IInkTablet * This,
                                __RPC__deref_out_opt IInkRectangle **Rectangle);
                                                     HRESULT ( STDMETHODCALLTYPE *get_HardwareCapabilities )(
            __RPC__in IInkTablet * This,
                                __RPC__out TabletHardwareCapabilities *Capabilities);
                                            HRESULT ( STDMETHODCALLTYPE *IsPacketPropertySupported )(
            __RPC__in IInkTablet * This,
                       __RPC__in BSTR packetPropertyName,
                                __RPC__out VARIANT_BOOL *Supported);
                                            HRESULT ( STDMETHODCALLTYPE *GetPropertyMetrics )(
            __RPC__in IInkTablet * This,
                       __RPC__in BSTR propertyName,
                        __RPC__out long *Minimum,
                        __RPC__out long *Maximum,
                        __RPC__out TabletPropertyMetricUnit *Units,
                        __RPC__out float *Resolution);
        END_INTERFACE
    } IInkTabletVtbl;
    interface IInkTablet
    {
        CONST_VTBL struct IInkTabletVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_PlugAndPlayId(This,Id) )
    ( (This)->lpVtbl -> get_MaximumInputRectangle(This,Rectangle) )
    ( (This)->lpVtbl -> get_HardwareCapabilities(This,Capabilities) )
    ( (This)->lpVtbl -> IsPacketPropertySupported(This,packetPropertyName,Supported) )
    ( (This)->lpVtbl -> GetPropertyMetrics(This,propertyName,Minimum,Maximum,Units,Resolution) )
EXTERN_C const IID IID_IInkTablet2;
    typedef struct IInkTablet2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkTablet2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkTablet2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkTablet2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkTablet2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkTablet2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkTablet2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkTablet2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DeviceKind )(
            __RPC__in IInkTablet2 * This,
                                __RPC__out TabletDeviceKind *Kind);
        END_INTERFACE
    } IInkTablet2Vtbl;
    interface IInkTablet2
    {
        CONST_VTBL struct IInkTablet2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DeviceKind(This,Kind) )
EXTERN_C const IID IID_IInkTablet3;
    typedef struct IInkTablet3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkTablet3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkTablet3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkTablet3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkTablet3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkTablet3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkTablet3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkTablet3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_IsMultiTouch )(
            __RPC__in IInkTablet3 * This,
                                __RPC__out VARIANT_BOOL *pIsMultiTouch);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MaximumCursors )(
            __RPC__in IInkTablet3 * This,
                                __RPC__out ULONG *pMaximumCursors);
        END_INTERFACE
    } IInkTablet3Vtbl;
    interface IInkTablet3
    {
        CONST_VTBL struct IInkTablet3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_IsMultiTouch(This,pIsMultiTouch) )
    ( (This)->lpVtbl -> get_MaximumCursors(This,pMaximumCursors) )
EXTERN_C const IID IID_IInkTablets;
    typedef struct IInkTabletsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkTablets * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkTablets * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkTablets * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkTablets * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkTablets * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkTablets * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkTablets * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IInkTablets * This,
                                __RPC__out long *Count);
                                                                 HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IInkTablets * This,
                                __RPC__deref_out_opt IUnknown **_NewEnum);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DefaultTablet )(
            __RPC__in IInkTablets * This,
                                __RPC__deref_out_opt IInkTablet **DefaultTablet);
                                            HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IInkTablets * This,
                       long Index,
                                __RPC__deref_out_opt IInkTablet **Tablet);
                                            HRESULT ( STDMETHODCALLTYPE *IsPacketPropertySupported )(
            __RPC__in IInkTablets * This,
                       __RPC__in BSTR packetPropertyName,
                                __RPC__out VARIANT_BOOL *Supported);
        END_INTERFACE
    } IInkTabletsVtbl;
    interface IInkTablets
    {
        CONST_VTBL struct IInkTabletsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
    ( (This)->lpVtbl -> get_DefaultTablet(This,DefaultTablet) )
    ( (This)->lpVtbl -> Item(This,Index,Tablet) )
    ( (This)->lpVtbl -> IsPacketPropertySupported(This,packetPropertyName,Supported) )
EXTERN_C const IID IID_IInkStrokeDisp;
    typedef struct IInkStrokeDispVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkStrokeDisp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkStrokeDisp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkStrokeDisp * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkStrokeDisp * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkStrokeDisp * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkStrokeDisp * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkStrokeDisp * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_ID )(
            __RPC__in IInkStrokeDisp * This,
                                __RPC__out long *ID);
                                                     HRESULT ( STDMETHODCALLTYPE *get_BezierPoints )(
            __RPC__in IInkStrokeDisp * This,
                                __RPC__out VARIANT *Points);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DrawingAttributes )(
            __RPC__in IInkStrokeDisp * This,
                                __RPC__deref_out_opt IInkDrawingAttributes **DrawAttrs);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_DrawingAttributes )(
            __RPC__in IInkStrokeDisp * This,
                       __RPC__in_opt IInkDrawingAttributes *DrawAttrs);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Ink )(
            __RPC__in IInkStrokeDisp * This,
                                __RPC__deref_out_opt IInkDisp **Ink);
                                                     HRESULT ( STDMETHODCALLTYPE *get_ExtendedProperties )(
            __RPC__in IInkStrokeDisp * This,
                                __RPC__deref_out_opt IInkExtendedProperties **Properties);
                                                     HRESULT ( STDMETHODCALLTYPE *get_PolylineCusps )(
            __RPC__in IInkStrokeDisp * This,
                                __RPC__out VARIANT *Cusps);
                                                     HRESULT ( STDMETHODCALLTYPE *get_BezierCusps )(
            __RPC__in IInkStrokeDisp * This,
                                __RPC__out VARIANT *Cusps);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SelfIntersections )(
            __RPC__in IInkStrokeDisp * This,
                                __RPC__out VARIANT *Intersections);
                                                     HRESULT ( STDMETHODCALLTYPE *get_PacketCount )(
            __RPC__in IInkStrokeDisp * This,
                                __RPC__out long *plCount);
                                                     HRESULT ( STDMETHODCALLTYPE *get_PacketSize )(
            __RPC__in IInkStrokeDisp * This,
                                __RPC__out long *plSize);
                                                     HRESULT ( STDMETHODCALLTYPE *get_PacketDescription )(
            __RPC__in IInkStrokeDisp * This,
                                __RPC__out VARIANT *PacketDescription);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Deleted )(
            __RPC__in IInkStrokeDisp * This,
                                __RPC__out VARIANT_BOOL *Deleted);
                                            HRESULT ( STDMETHODCALLTYPE *GetBoundingBox )(
            __RPC__in IInkStrokeDisp * This,
                                     InkBoundingBoxMode BoundingBoxMode,
                                __RPC__deref_out_opt IInkRectangle **Rectangle);
                                            HRESULT ( STDMETHODCALLTYPE *FindIntersections )(
            __RPC__in IInkStrokeDisp * This,
                       __RPC__in_opt IInkStrokes *Strokes,
                                __RPC__out VARIANT *Intersections);
                                            HRESULT ( STDMETHODCALLTYPE *GetRectangleIntersections )(
            __RPC__in IInkStrokeDisp * This,
                       __RPC__in_opt IInkRectangle *Rectangle,
                                __RPC__out VARIANT *Intersections);
                                            HRESULT ( STDMETHODCALLTYPE *Clip )(
            __RPC__in IInkStrokeDisp * This,
                       __RPC__in_opt IInkRectangle *Rectangle);
                                            HRESULT ( STDMETHODCALLTYPE *HitTestCircle )(
            __RPC__in IInkStrokeDisp * This,
                       long X,
                       long Y,
                       float Radius,
                                __RPC__out VARIANT_BOOL *Intersects);
                                            HRESULT ( STDMETHODCALLTYPE *NearestPoint )(
            __RPC__in IInkStrokeDisp * This,
                       long X,
                       long Y,
                                          __RPC__inout float *Distance,
                                __RPC__out float *Point);
                                            HRESULT ( STDMETHODCALLTYPE *Split )(
            __RPC__in IInkStrokeDisp * This,
                       float SplitAt,
                                __RPC__deref_out_opt IInkStrokeDisp **NewStroke);
                                            HRESULT ( STDMETHODCALLTYPE *GetPacketDescriptionPropertyMetrics )(
            __RPC__in IInkStrokeDisp * This,
                       __RPC__in BSTR PropertyName,
                        __RPC__out long *Minimum,
                        __RPC__out long *Maximum,
                        __RPC__out TabletPropertyMetricUnit *Units,
                        __RPC__out float *Resolution);
                                            HRESULT ( STDMETHODCALLTYPE *GetPoints )(
            __RPC__in IInkStrokeDisp * This,
                                     long Index,
                                     long Count,
                                __RPC__out VARIANT *Points);
                                            HRESULT ( STDMETHODCALLTYPE *SetPoints )(
            __RPC__in IInkStrokeDisp * This,
                       VARIANT Points,
                                     long Index,
                                     long Count,
                                __RPC__out long *NumberOfPointsSet);
                                            HRESULT ( STDMETHODCALLTYPE *GetPacketData )(
            __RPC__in IInkStrokeDisp * This,
                                     long Index,
                                     long Count,
                                __RPC__out VARIANT *PacketData);
                                            HRESULT ( STDMETHODCALLTYPE *GetPacketValuesByProperty )(
            __RPC__in IInkStrokeDisp * This,
                       __RPC__in BSTR PropertyName,
                                     long Index,
                                     long Count,
                                __RPC__out VARIANT *PacketValues);
                                            HRESULT ( STDMETHODCALLTYPE *SetPacketValuesByProperty )(
            __RPC__in IInkStrokeDisp * This,
                       __RPC__in BSTR bstrPropertyName,
                       VARIANT PacketValues,
                                     long Index,
                                     long Count,
                                __RPC__out long *NumberOfPacketsSet);
                                            HRESULT ( STDMETHODCALLTYPE *GetFlattenedBezierPoints )(
            __RPC__in IInkStrokeDisp * This,
                                     long FittingError,
                                __RPC__out VARIANT *FlattenedBezierPoints);
                                            HRESULT ( STDMETHODCALLTYPE *Transform )(
            __RPC__in IInkStrokeDisp * This,
                       __RPC__in_opt IInkTransform *Transform,
                                     VARIANT_BOOL ApplyOnPenWidth);
                                            HRESULT ( STDMETHODCALLTYPE *ScaleToRectangle )(
            __RPC__in IInkStrokeDisp * This,
                       __RPC__in_opt IInkRectangle *Rectangle);
                                            HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IInkStrokeDisp * This,
                       float HorizontalComponent,
                       float VerticalComponent);
                                            HRESULT ( STDMETHODCALLTYPE *Rotate )(
            __RPC__in IInkStrokeDisp * This,
                       float Degrees,
                                     float x,
                                     float y);
                                            HRESULT ( STDMETHODCALLTYPE *Shear )(
            __RPC__in IInkStrokeDisp * This,
                       float HorizontalMultiplier,
                       float VerticalMultiplier);
                                            HRESULT ( STDMETHODCALLTYPE *ScaleTransform )(
            __RPC__in IInkStrokeDisp * This,
                       float HorizontalMultiplier,
                       float VerticalMultiplier);
        END_INTERFACE
    } IInkStrokeDispVtbl;
    interface IInkStrokeDisp
    {
        CONST_VTBL struct IInkStrokeDispVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ID(This,ID) )
    ( (This)->lpVtbl -> get_BezierPoints(This,Points) )
    ( (This)->lpVtbl -> get_DrawingAttributes(This,DrawAttrs) )
    ( (This)->lpVtbl -> putref_DrawingAttributes(This,DrawAttrs) )
    ( (This)->lpVtbl -> get_Ink(This,Ink) )
    ( (This)->lpVtbl -> get_ExtendedProperties(This,Properties) )
    ( (This)->lpVtbl -> get_PolylineCusps(This,Cusps) )
    ( (This)->lpVtbl -> get_BezierCusps(This,Cusps) )
    ( (This)->lpVtbl -> get_SelfIntersections(This,Intersections) )
    ( (This)->lpVtbl -> get_PacketCount(This,plCount) )
    ( (This)->lpVtbl -> get_PacketSize(This,plSize) )
    ( (This)->lpVtbl -> get_PacketDescription(This,PacketDescription) )
    ( (This)->lpVtbl -> get_Deleted(This,Deleted) )
    ( (This)->lpVtbl -> GetBoundingBox(This,BoundingBoxMode,Rectangle) )
    ( (This)->lpVtbl -> FindIntersections(This,Strokes,Intersections) )
    ( (This)->lpVtbl -> GetRectangleIntersections(This,Rectangle,Intersections) )
    ( (This)->lpVtbl -> Clip(This,Rectangle) )
    ( (This)->lpVtbl -> HitTestCircle(This,X,Y,Radius,Intersects) )
    ( (This)->lpVtbl -> NearestPoint(This,X,Y,Distance,Point) )
    ( (This)->lpVtbl -> Split(This,SplitAt,NewStroke) )
    ( (This)->lpVtbl -> GetPacketDescriptionPropertyMetrics(This,PropertyName,Minimum,Maximum,Units,Resolution) )
    ( (This)->lpVtbl -> GetPoints(This,Index,Count,Points) )
    ( (This)->lpVtbl -> SetPoints(This,Points,Index,Count,NumberOfPointsSet) )
    ( (This)->lpVtbl -> GetPacketData(This,Index,Count,PacketData) )
    ( (This)->lpVtbl -> GetPacketValuesByProperty(This,PropertyName,Index,Count,PacketValues) )
    ( (This)->lpVtbl -> SetPacketValuesByProperty(This,bstrPropertyName,PacketValues,Index,Count,NumberOfPacketsSet) )
    ( (This)->lpVtbl -> GetFlattenedBezierPoints(This,FittingError,FlattenedBezierPoints) )
    ( (This)->lpVtbl -> Transform(This,Transform,ApplyOnPenWidth) )
    ( (This)->lpVtbl -> ScaleToRectangle(This,Rectangle) )
    ( (This)->lpVtbl -> Move(This,HorizontalComponent,VerticalComponent) )
    ( (This)->lpVtbl -> Rotate(This,Degrees,x,y) )
    ( (This)->lpVtbl -> Shear(This,HorizontalMultiplier,VerticalMultiplier) )
    ( (This)->lpVtbl -> ScaleTransform(This,HorizontalMultiplier,VerticalMultiplier) )
EXTERN_C const IID IID_IInkStrokes;
    typedef struct IInkStrokesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkStrokes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkStrokes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkStrokes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkStrokes * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkStrokes * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkStrokes * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkStrokes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IInkStrokes * This,
                                __RPC__out long *Count);
                                                                 HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IInkStrokes * This,
                                __RPC__deref_out_opt IUnknown **_NewEnum);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Ink )(
            __RPC__in IInkStrokes * This,
                                __RPC__deref_out_opt IInkDisp **Ink);
                                                     HRESULT ( STDMETHODCALLTYPE *get_RecognitionResult )(
            __RPC__in IInkStrokes * This,
                                __RPC__deref_out_opt IInkRecognitionResult **RecognitionResult);
                                            HRESULT ( STDMETHODCALLTYPE *ToString )(
            __RPC__in IInkStrokes * This,
                                __RPC__deref_out_opt BSTR *ToString);
                                            HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IInkStrokes * This,
                       long Index,
                                __RPC__deref_out_opt IInkStrokeDisp **Stroke);
                                            HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IInkStrokes * This,
                       __RPC__in_opt IInkStrokeDisp *InkStroke);
                                            HRESULT ( STDMETHODCALLTYPE *AddStrokes )(
            __RPC__in IInkStrokes * This,
                       __RPC__in_opt IInkStrokes *InkStrokes);
                                            HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IInkStrokes * This,
                       __RPC__in_opt IInkStrokeDisp *InkStroke);
                                            HRESULT ( STDMETHODCALLTYPE *RemoveStrokes )(
            __RPC__in IInkStrokes * This,
                       __RPC__in_opt IInkStrokes *InkStrokes);
                                            HRESULT ( STDMETHODCALLTYPE *ModifyDrawingAttributes )(
            __RPC__in IInkStrokes * This,
                       __RPC__in_opt IInkDrawingAttributes *DrawAttrs);
                                            HRESULT ( STDMETHODCALLTYPE *GetBoundingBox )(
            __RPC__in IInkStrokes * This,
                                     InkBoundingBoxMode BoundingBoxMode,
                                __RPC__deref_out_opt IInkRectangle **BoundingBox);
                                            HRESULT ( STDMETHODCALLTYPE *Transform )(
            __RPC__in IInkStrokes * This,
                       __RPC__in_opt IInkTransform *Transform,
                                     VARIANT_BOOL ApplyOnPenWidth);
                                            HRESULT ( STDMETHODCALLTYPE *ScaleToRectangle )(
            __RPC__in IInkStrokes * This,
                       __RPC__in_opt IInkRectangle *Rectangle);
                                            HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IInkStrokes * This,
                       float HorizontalComponent,
                       float VerticalComponent);
                                            HRESULT ( STDMETHODCALLTYPE *Rotate )(
            __RPC__in IInkStrokes * This,
                       float Degrees,
                                     float x,
                                     float y);
                                            HRESULT ( STDMETHODCALLTYPE *Shear )(
            __RPC__in IInkStrokes * This,
                       float HorizontalMultiplier,
                       float VerticalMultiplier);
                                            HRESULT ( STDMETHODCALLTYPE *ScaleTransform )(
            __RPC__in IInkStrokes * This,
                       float HorizontalMultiplier,
                       float VerticalMultiplier);
                                            HRESULT ( STDMETHODCALLTYPE *Clip )(
            __RPC__in IInkStrokes * This,
                       __RPC__in_opt IInkRectangle *Rectangle);
                                            HRESULT ( STDMETHODCALLTYPE *RemoveRecognitionResult )(
            __RPC__in IInkStrokes * This);
        END_INTERFACE
    } IInkStrokesVtbl;
    interface IInkStrokes
    {
        CONST_VTBL struct IInkStrokesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
    ( (This)->lpVtbl -> get_Ink(This,Ink) )
    ( (This)->lpVtbl -> get_RecognitionResult(This,RecognitionResult) )
    ( (This)->lpVtbl -> ToString(This,ToString) )
    ( (This)->lpVtbl -> Item(This,Index,Stroke) )
    ( (This)->lpVtbl -> Add(This,InkStroke) )
    ( (This)->lpVtbl -> AddStrokes(This,InkStrokes) )
    ( (This)->lpVtbl -> Remove(This,InkStroke) )
    ( (This)->lpVtbl -> RemoveStrokes(This,InkStrokes) )
    ( (This)->lpVtbl -> ModifyDrawingAttributes(This,DrawAttrs) )
    ( (This)->lpVtbl -> GetBoundingBox(This,BoundingBoxMode,BoundingBox) )
    ( (This)->lpVtbl -> Transform(This,Transform,ApplyOnPenWidth) )
    ( (This)->lpVtbl -> ScaleToRectangle(This,Rectangle) )
    ( (This)->lpVtbl -> Move(This,HorizontalComponent,VerticalComponent) )
    ( (This)->lpVtbl -> Rotate(This,Degrees,x,y) )
    ( (This)->lpVtbl -> Shear(This,HorizontalMultiplier,VerticalMultiplier) )
    ( (This)->lpVtbl -> ScaleTransform(This,HorizontalMultiplier,VerticalMultiplier) )
    ( (This)->lpVtbl -> Clip(This,Rectangle) )
    ( (This)->lpVtbl -> RemoveRecognitionResult(This) )
EXTERN_C const IID IID_IInkCustomStrokes;
    typedef struct IInkCustomStrokesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkCustomStrokes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkCustomStrokes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkCustomStrokes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkCustomStrokes * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkCustomStrokes * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkCustomStrokes * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkCustomStrokes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IInkCustomStrokes * This,
                                __RPC__out long *Count);
                                                                 HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IInkCustomStrokes * This,
                                __RPC__deref_out_opt IUnknown **_NewEnum);
                                            HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IInkCustomStrokes * This,
                       VARIANT Identifier,
                                __RPC__deref_out_opt IInkStrokes **Strokes);
                                            HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IInkCustomStrokes * This,
                       __RPC__in BSTR Name,
                       __RPC__in_opt IInkStrokes *Strokes);
                                            HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IInkCustomStrokes * This,
                       VARIANT Identifier);
                                            HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IInkCustomStrokes * This);
        END_INTERFACE
    } IInkCustomStrokesVtbl;
    interface IInkCustomStrokes
    {
        CONST_VTBL struct IInkCustomStrokesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
    ( (This)->lpVtbl -> Item(This,Identifier,Strokes) )
    ( (This)->lpVtbl -> Add(This,Name,Strokes) )
    ( (This)->lpVtbl -> Remove(This,Identifier) )
    ( (This)->lpVtbl -> Clear(This) )
EXTERN_C const IID DIID__IInkStrokesEvents;
    typedef struct _IInkStrokesEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _IInkStrokesEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _IInkStrokesEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _IInkStrokesEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _IInkStrokesEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _IInkStrokesEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _IInkStrokesEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _IInkStrokesEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _IInkStrokesEventsVtbl;
    interface _IInkStrokesEvents
    {
        CONST_VTBL struct _IInkStrokesEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IInkDisp;
    typedef struct IInkDispVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkDisp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkDisp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkDisp * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkDisp * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkDisp * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkDisp * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkDisp * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Strokes )(
            __RPC__in IInkDisp * This,
                                __RPC__deref_out_opt IInkStrokes **Strokes);
                                                     HRESULT ( STDMETHODCALLTYPE *get_ExtendedProperties )(
            __RPC__in IInkDisp * This,
                                __RPC__deref_out_opt IInkExtendedProperties **Properties);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Dirty )(
            __RPC__in IInkDisp * This,
                                __RPC__out VARIANT_BOOL *Dirty);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Dirty )(
            __RPC__in IInkDisp * This,
                       VARIANT_BOOL Dirty);
                                                     HRESULT ( STDMETHODCALLTYPE *get_CustomStrokes )(
            __RPC__in IInkDisp * This,
                                __RPC__deref_out_opt IInkCustomStrokes **ppunkInkCustomStrokes);
                                            HRESULT ( STDMETHODCALLTYPE *GetBoundingBox )(
            __RPC__in IInkDisp * This,
                                     InkBoundingBoxMode BoundingBoxMode,
                                __RPC__deref_out_opt IInkRectangle **Rectangle);
                                            HRESULT ( STDMETHODCALLTYPE *DeleteStrokes )(
            __RPC__in IInkDisp * This,
                                             __RPC__in_opt IInkStrokes *Strokes);
                                            HRESULT ( STDMETHODCALLTYPE *DeleteStroke )(
            __RPC__in IInkDisp * This,
                       __RPC__in_opt IInkStrokeDisp *Stroke);
                                            HRESULT ( STDMETHODCALLTYPE *ExtractStrokes )(
            __RPC__in IInkDisp * This,
                                     __RPC__in_opt IInkStrokes *Strokes,
                                     InkExtractFlags ExtractFlags,
                                __RPC__deref_out_opt IInkDisp **ExtractedInk);
                                            HRESULT ( STDMETHODCALLTYPE *ExtractWithRectangle )(
            __RPC__in IInkDisp * This,
                       __RPC__in_opt IInkRectangle *Rectangle,
                                     InkExtractFlags extractFlags,
                                __RPC__deref_out_opt IInkDisp **ExtractedInk);
                                            HRESULT ( STDMETHODCALLTYPE *Clip )(
            __RPC__in IInkDisp * This,
                       __RPC__in_opt IInkRectangle *Rectangle);
                                            HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IInkDisp * This,
                                __RPC__deref_out_opt IInkDisp **NewInk);
                                            HRESULT ( STDMETHODCALLTYPE *HitTestCircle )(
            __RPC__in IInkDisp * This,
                       long X,
                       long Y,
                       float radius,
                                __RPC__deref_out_opt IInkStrokes **Strokes);
                                            HRESULT ( STDMETHODCALLTYPE *HitTestWithRectangle )(
            __RPC__in IInkDisp * This,
                       __RPC__in_opt IInkRectangle *SelectionRectangle,
                       float IntersectPercent,
                                __RPC__deref_out_opt IInkStrokes **Strokes);
                                            HRESULT ( STDMETHODCALLTYPE *HitTestWithLasso )(
            __RPC__in IInkDisp * This,
                       VARIANT Points,
                       float IntersectPercent,
                                                  __RPC__inout_opt VARIANT *LassoPoints,
                                __RPC__deref_out_opt IInkStrokes **Strokes);
                                            HRESULT ( STDMETHODCALLTYPE *NearestPoint )(
            __RPC__in IInkDisp * This,
                       long X,
                       long Y,
                                          __RPC__inout float *PointOnStroke,
                                          __RPC__inout float *DistanceFromPacket,
                                __RPC__deref_out_opt IInkStrokeDisp **Stroke);
                                            HRESULT ( STDMETHODCALLTYPE *CreateStrokes )(
            __RPC__in IInkDisp * This,
                                     VARIANT StrokeIds,
                                __RPC__deref_out_opt IInkStrokes **Strokes);
                                            HRESULT ( STDMETHODCALLTYPE *AddStrokesAtRectangle )(
            __RPC__in IInkDisp * This,
                       __RPC__in_opt IInkStrokes *SourceStrokes,
                       __RPC__in_opt IInkRectangle *TargetRectangle);
                                            HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IInkDisp * This,
                                     InkPersistenceFormat PersistenceFormat,
                                     InkPersistenceCompressionMode CompressionMode,
                                __RPC__out VARIANT *Data);
                                            HRESULT ( STDMETHODCALLTYPE *Load )(
            __RPC__in IInkDisp * This,
                       VARIANT Data);
                                            HRESULT ( STDMETHODCALLTYPE *CreateStroke )(
            __RPC__in IInkDisp * This,
                       VARIANT PacketData,
                       VARIANT PacketDescription,
                                __RPC__deref_out_opt IInkStrokeDisp **Stroke);
                                            HRESULT ( STDMETHODCALLTYPE *ClipboardCopyWithRectangle )(
            __RPC__in IInkDisp * This,
                       __RPC__in_opt IInkRectangle *Rectangle,
                                     InkClipboardFormats ClipboardFormats,
                                     InkClipboardModes ClipboardModes,
                                __RPC__deref_out_opt IDataObject **DataObject);
                                            HRESULT ( STDMETHODCALLTYPE *ClipboardCopy )(
            __RPC__in IInkDisp * This,
                                     __RPC__in_opt IInkStrokes *strokes,
                                     InkClipboardFormats ClipboardFormats,
                                     InkClipboardModes ClipboardModes,
                                __RPC__deref_out_opt IDataObject **DataObject);
                                            HRESULT ( STDMETHODCALLTYPE *CanPaste )(
            __RPC__in IInkDisp * This,
                                     __RPC__in_opt IDataObject *DataObject,
                                __RPC__out VARIANT_BOOL *CanPaste);
                                            HRESULT ( STDMETHODCALLTYPE *ClipboardPaste )(
            __RPC__in IInkDisp * This,
                                     long x,
                                     long y,
                                             __RPC__in_opt IDataObject *DataObject,
                                __RPC__deref_out_opt IInkStrokes **Strokes);
        END_INTERFACE
    } IInkDispVtbl;
    interface IInkDisp
    {
        CONST_VTBL struct IInkDispVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Strokes(This,Strokes) )
    ( (This)->lpVtbl -> get_ExtendedProperties(This,Properties) )
    ( (This)->lpVtbl -> get_Dirty(This,Dirty) )
    ( (This)->lpVtbl -> put_Dirty(This,Dirty) )
    ( (This)->lpVtbl -> get_CustomStrokes(This,ppunkInkCustomStrokes) )
    ( (This)->lpVtbl -> GetBoundingBox(This,BoundingBoxMode,Rectangle) )
    ( (This)->lpVtbl -> DeleteStrokes(This,Strokes) )
    ( (This)->lpVtbl -> DeleteStroke(This,Stroke) )
    ( (This)->lpVtbl -> ExtractStrokes(This,Strokes,ExtractFlags,ExtractedInk) )
    ( (This)->lpVtbl -> ExtractWithRectangle(This,Rectangle,extractFlags,ExtractedInk) )
    ( (This)->lpVtbl -> Clip(This,Rectangle) )
    ( (This)->lpVtbl -> Clone(This,NewInk) )
    ( (This)->lpVtbl -> HitTestCircle(This,X,Y,radius,Strokes) )
    ( (This)->lpVtbl -> HitTestWithRectangle(This,SelectionRectangle,IntersectPercent,Strokes) )
    ( (This)->lpVtbl -> HitTestWithLasso(This,Points,IntersectPercent,LassoPoints,Strokes) )
    ( (This)->lpVtbl -> NearestPoint(This,X,Y,PointOnStroke,DistanceFromPacket,Stroke) )
    ( (This)->lpVtbl -> CreateStrokes(This,StrokeIds,Strokes) )
    ( (This)->lpVtbl -> AddStrokesAtRectangle(This,SourceStrokes,TargetRectangle) )
    ( (This)->lpVtbl -> Save(This,PersistenceFormat,CompressionMode,Data) )
    ( (This)->lpVtbl -> Load(This,Data) )
    ( (This)->lpVtbl -> CreateStroke(This,PacketData,PacketDescription,Stroke) )
    ( (This)->lpVtbl -> ClipboardCopyWithRectangle(This,Rectangle,ClipboardFormats,ClipboardModes,DataObject) )
    ( (This)->lpVtbl -> ClipboardCopy(This,strokes,ClipboardFormats,ClipboardModes,DataObject) )
    ( (This)->lpVtbl -> CanPaste(This,DataObject,CanPaste) )
    ( (This)->lpVtbl -> ClipboardPaste(This,x,y,DataObject,Strokes) )
EXTERN_C const IID DIID__IInkEvents;
    typedef struct _IInkEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _IInkEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _IInkEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _IInkEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _IInkEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _IInkEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _IInkEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _IInkEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _IInkEventsVtbl;
    interface _IInkEvents
    {
        CONST_VTBL struct _IInkEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IInkRenderer;
    typedef struct IInkRendererVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkRenderer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkRenderer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkRenderer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkRenderer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkRenderer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkRenderer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkRenderer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *GetViewTransform )(
            __RPC__in IInkRenderer * This,
                       __RPC__in_opt IInkTransform *ViewTransform);
                                            HRESULT ( STDMETHODCALLTYPE *SetViewTransform )(
            __RPC__in IInkRenderer * This,
                       __RPC__in_opt IInkTransform *ViewTransform);
                                            HRESULT ( STDMETHODCALLTYPE *GetObjectTransform )(
            __RPC__in IInkRenderer * This,
                       __RPC__in_opt IInkTransform *ObjectTransform);
                                            HRESULT ( STDMETHODCALLTYPE *SetObjectTransform )(
            __RPC__in IInkRenderer * This,
                       __RPC__in_opt IInkTransform *ObjectTransform);
                                            HRESULT ( STDMETHODCALLTYPE *Draw )(
            __RPC__in IInkRenderer * This,
                       LONG_PTR hDC,
                       __RPC__in_opt IInkStrokes *Strokes);
                                            HRESULT ( STDMETHODCALLTYPE *DrawStroke )(
            __RPC__in IInkRenderer * This,
                       LONG_PTR hDC,
                       __RPC__in_opt IInkStrokeDisp *Stroke,
                                     __RPC__in_opt IInkDrawingAttributes *DrawingAttributes);
                                            HRESULT ( STDMETHODCALLTYPE *PixelToInkSpace )(
            __RPC__in IInkRenderer * This,
                       LONG_PTR hDC,
                            __RPC__inout long *x,
                            __RPC__inout long *y);
                                            HRESULT ( STDMETHODCALLTYPE *InkSpaceToPixel )(
            __RPC__in IInkRenderer * This,
                       LONG_PTR hdcDisplay,
                            __RPC__inout long *x,
                            __RPC__inout long *y);
                                            HRESULT ( STDMETHODCALLTYPE *PixelToInkSpaceFromPoints )(
            __RPC__in IInkRenderer * This,
                       LONG_PTR hDC,
                            __RPC__inout VARIANT *Points);
                                            HRESULT ( STDMETHODCALLTYPE *InkSpaceToPixelFromPoints )(
            __RPC__in IInkRenderer * This,
                       LONG_PTR hDC,
                            __RPC__inout VARIANT *Points);
                                            HRESULT ( STDMETHODCALLTYPE *Measure )(
            __RPC__in IInkRenderer * This,
                       __RPC__in_opt IInkStrokes *Strokes,
                                __RPC__deref_out_opt IInkRectangle **Rectangle);
                                            HRESULT ( STDMETHODCALLTYPE *MeasureStroke )(
            __RPC__in IInkRenderer * This,
                       __RPC__in_opt IInkStrokeDisp *Stroke,
                                     __RPC__in_opt IInkDrawingAttributes *DrawingAttributes,
                                __RPC__deref_out_opt IInkRectangle **Rectangle);
                                            HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IInkRenderer * This,
                       float HorizontalComponent,
                       float VerticalComponent);
                                            HRESULT ( STDMETHODCALLTYPE *Rotate )(
            __RPC__in IInkRenderer * This,
                       float Degrees,
                                     float x,
                                     float y);
                                            HRESULT ( STDMETHODCALLTYPE *ScaleTransform )(
            __RPC__in IInkRenderer * This,
                       float HorizontalMultiplier,
                       float VerticalMultiplier,
                                     VARIANT_BOOL ApplyOnPenWidth);
        END_INTERFACE
    } IInkRendererVtbl;
    interface IInkRenderer
    {
        CONST_VTBL struct IInkRendererVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetViewTransform(This,ViewTransform) )
    ( (This)->lpVtbl -> SetViewTransform(This,ViewTransform) )
    ( (This)->lpVtbl -> GetObjectTransform(This,ObjectTransform) )
    ( (This)->lpVtbl -> SetObjectTransform(This,ObjectTransform) )
    ( (This)->lpVtbl -> Draw(This,hDC,Strokes) )
    ( (This)->lpVtbl -> DrawStroke(This,hDC,Stroke,DrawingAttributes) )
    ( (This)->lpVtbl -> PixelToInkSpace(This,hDC,x,y) )
    ( (This)->lpVtbl -> InkSpaceToPixel(This,hdcDisplay,x,y) )
    ( (This)->lpVtbl -> PixelToInkSpaceFromPoints(This,hDC,Points) )
    ( (This)->lpVtbl -> InkSpaceToPixelFromPoints(This,hDC,Points) )
    ( (This)->lpVtbl -> Measure(This,Strokes,Rectangle) )
    ( (This)->lpVtbl -> MeasureStroke(This,Stroke,DrawingAttributes,Rectangle) )
    ( (This)->lpVtbl -> Move(This,HorizontalComponent,VerticalComponent) )
    ( (This)->lpVtbl -> Rotate(This,Degrees,x,y) )
    ( (This)->lpVtbl -> ScaleTransform(This,HorizontalMultiplier,VerticalMultiplier,ApplyOnPenWidth) )
EXTERN_C const IID IID_IInkCollector;
    typedef struct IInkCollectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkCollector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkCollector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkCollector * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkCollector * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkCollector * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkCollector * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkCollector * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_hWnd )(
            __RPC__in IInkCollector * This,
                                __RPC__out LONG_PTR *CurrentWindow);
                                                     HRESULT ( STDMETHODCALLTYPE *put_hWnd )(
            __RPC__in IInkCollector * This,
                       LONG_PTR NewWindow);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IInkCollector * This,
                                __RPC__out VARIANT_BOOL *Collecting);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IInkCollector * This,
                       VARIANT_BOOL Collecting);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DefaultDrawingAttributes )(
            __RPC__in IInkCollector * This,
                                __RPC__deref_out_opt IInkDrawingAttributes **CurrentAttributes);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_DefaultDrawingAttributes )(
            __RPC__in IInkCollector * This,
                       __RPC__in_opt IInkDrawingAttributes *NewAttributes);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Renderer )(
            __RPC__in IInkCollector * This,
                                __RPC__deref_out_opt IInkRenderer **CurrentInkRenderer);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_Renderer )(
            __RPC__in IInkCollector * This,
                       __RPC__in_opt IInkRenderer *NewInkRenderer);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Ink )(
            __RPC__in IInkCollector * This,
                                __RPC__deref_out_opt IInkDisp **Ink);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_Ink )(
            __RPC__in IInkCollector * This,
                       __RPC__in_opt IInkDisp *NewInk);
                                                     HRESULT ( STDMETHODCALLTYPE *get_AutoRedraw )(
            __RPC__in IInkCollector * This,
                                __RPC__out VARIANT_BOOL *AutoRedraw);
                                                     HRESULT ( STDMETHODCALLTYPE *put_AutoRedraw )(
            __RPC__in IInkCollector * This,
                       VARIANT_BOOL AutoRedraw);
                                                     HRESULT ( STDMETHODCALLTYPE *get_CollectingInk )(
            __RPC__in IInkCollector * This,
                                __RPC__out VARIANT_BOOL *Collecting);
                                                     HRESULT ( STDMETHODCALLTYPE *get_CollectionMode )(
            __RPC__in IInkCollector * This,
                                __RPC__out InkCollectionMode *Mode);
                                                     HRESULT ( STDMETHODCALLTYPE *put_CollectionMode )(
            __RPC__in IInkCollector * This,
                       InkCollectionMode Mode);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DynamicRendering )(
            __RPC__in IInkCollector * This,
                                __RPC__out VARIANT_BOOL *Enabled);
                                                     HRESULT ( STDMETHODCALLTYPE *put_DynamicRendering )(
            __RPC__in IInkCollector * This,
                       VARIANT_BOOL Enabled);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DesiredPacketDescription )(
            __RPC__in IInkCollector * This,
                                __RPC__out VARIANT *PacketGuids);
                                                     HRESULT ( STDMETHODCALLTYPE *put_DesiredPacketDescription )(
            __RPC__in IInkCollector * This,
                       VARIANT PacketGuids);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MouseIcon )(
            __RPC__in IInkCollector * This,
                                __RPC__deref_out_opt IPictureDisp **MouseIcon);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MouseIcon )(
            __RPC__in IInkCollector * This,
                               __RPC__in_opt IPictureDisp *MouseIcon);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_MouseIcon )(
            __RPC__in IInkCollector * This,
                               __RPC__in_opt IPictureDisp *MouseIcon);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MousePointer )(
            __RPC__in IInkCollector * This,
                                __RPC__out InkMousePointer *MousePointer);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MousePointer )(
            __RPC__in IInkCollector * This,
                       InkMousePointer MousePointer);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Cursors )(
            __RPC__in IInkCollector * This,
                                __RPC__deref_out_opt IInkCursors **Cursors);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MarginX )(
            __RPC__in IInkCollector * This,
                                __RPC__out long *MarginX);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MarginX )(
            __RPC__in IInkCollector * This,
                       long MarginX);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MarginY )(
            __RPC__in IInkCollector * This,
                                __RPC__out long *MarginY);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MarginY )(
            __RPC__in IInkCollector * This,
                       long MarginY);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Tablet )(
            __RPC__in IInkCollector * This,
                                __RPC__deref_out_opt IInkTablet **SingleTablet);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SupportHighContrastInk )(
            __RPC__in IInkCollector * This,
                                __RPC__out VARIANT_BOOL *Support);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SupportHighContrastInk )(
            __RPC__in IInkCollector * This,
                       VARIANT_BOOL Support);
                                            HRESULT ( STDMETHODCALLTYPE *SetGestureStatus )(
            __RPC__in IInkCollector * This,
                       InkApplicationGesture Gesture,
                       VARIANT_BOOL Listen);
                                            HRESULT ( STDMETHODCALLTYPE *GetGestureStatus )(
            __RPC__in IInkCollector * This,
                       InkApplicationGesture Gesture,
                                __RPC__out VARIANT_BOOL *Listening);
                                            HRESULT ( STDMETHODCALLTYPE *GetWindowInputRectangle )(
            __RPC__in IInkCollector * This,
                            __RPC__deref_inout_opt IInkRectangle **WindowInputRectangle);
                                            HRESULT ( STDMETHODCALLTYPE *SetWindowInputRectangle )(
            __RPC__in IInkCollector * This,
                       __RPC__in_opt IInkRectangle *WindowInputRectangle);
                                            HRESULT ( STDMETHODCALLTYPE *SetAllTabletsMode )(
            __RPC__in IInkCollector * This,
                                     VARIANT_BOOL UseMouseForInput);
                                            HRESULT ( STDMETHODCALLTYPE *SetSingleTabletIntegratedMode )(
            __RPC__in IInkCollector * This,
                       __RPC__in_opt IInkTablet *Tablet);
                                            HRESULT ( STDMETHODCALLTYPE *GetEventInterest )(
            __RPC__in IInkCollector * This,
                       InkCollectorEventInterest EventId,
                                __RPC__out VARIANT_BOOL *Listen);
                                            HRESULT ( STDMETHODCALLTYPE *SetEventInterest )(
            __RPC__in IInkCollector * This,
                       InkCollectorEventInterest EventId,
                       VARIANT_BOOL Listen);
        END_INTERFACE
    } IInkCollectorVtbl;
    interface IInkCollector
    {
        CONST_VTBL struct IInkCollectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_hWnd(This,CurrentWindow) )
    ( (This)->lpVtbl -> put_hWnd(This,NewWindow) )
    ( (This)->lpVtbl -> get_Enabled(This,Collecting) )
    ( (This)->lpVtbl -> put_Enabled(This,Collecting) )
    ( (This)->lpVtbl -> get_DefaultDrawingAttributes(This,CurrentAttributes) )
    ( (This)->lpVtbl -> putref_DefaultDrawingAttributes(This,NewAttributes) )
    ( (This)->lpVtbl -> get_Renderer(This,CurrentInkRenderer) )
    ( (This)->lpVtbl -> putref_Renderer(This,NewInkRenderer) )
    ( (This)->lpVtbl -> get_Ink(This,Ink) )
    ( (This)->lpVtbl -> putref_Ink(This,NewInk) )
    ( (This)->lpVtbl -> get_AutoRedraw(This,AutoRedraw) )
    ( (This)->lpVtbl -> put_AutoRedraw(This,AutoRedraw) )
    ( (This)->lpVtbl -> get_CollectingInk(This,Collecting) )
    ( (This)->lpVtbl -> get_CollectionMode(This,Mode) )
    ( (This)->lpVtbl -> put_CollectionMode(This,Mode) )
    ( (This)->lpVtbl -> get_DynamicRendering(This,Enabled) )
    ( (This)->lpVtbl -> put_DynamicRendering(This,Enabled) )
    ( (This)->lpVtbl -> get_DesiredPacketDescription(This,PacketGuids) )
    ( (This)->lpVtbl -> put_DesiredPacketDescription(This,PacketGuids) )
    ( (This)->lpVtbl -> get_MouseIcon(This,MouseIcon) )
    ( (This)->lpVtbl -> put_MouseIcon(This,MouseIcon) )
    ( (This)->lpVtbl -> putref_MouseIcon(This,MouseIcon) )
    ( (This)->lpVtbl -> get_MousePointer(This,MousePointer) )
    ( (This)->lpVtbl -> put_MousePointer(This,MousePointer) )
    ( (This)->lpVtbl -> get_Cursors(This,Cursors) )
    ( (This)->lpVtbl -> get_MarginX(This,MarginX) )
    ( (This)->lpVtbl -> put_MarginX(This,MarginX) )
    ( (This)->lpVtbl -> get_MarginY(This,MarginY) )
    ( (This)->lpVtbl -> put_MarginY(This,MarginY) )
    ( (This)->lpVtbl -> get_Tablet(This,SingleTablet) )
    ( (This)->lpVtbl -> get_SupportHighContrastInk(This,Support) )
    ( (This)->lpVtbl -> put_SupportHighContrastInk(This,Support) )
    ( (This)->lpVtbl -> SetGestureStatus(This,Gesture,Listen) )
    ( (This)->lpVtbl -> GetGestureStatus(This,Gesture,Listening) )
    ( (This)->lpVtbl -> GetWindowInputRectangle(This,WindowInputRectangle) )
    ( (This)->lpVtbl -> SetWindowInputRectangle(This,WindowInputRectangle) )
    ( (This)->lpVtbl -> SetAllTabletsMode(This,UseMouseForInput) )
    ( (This)->lpVtbl -> SetSingleTabletIntegratedMode(This,Tablet) )
    ( (This)->lpVtbl -> GetEventInterest(This,EventId,Listen) )
    ( (This)->lpVtbl -> SetEventInterest(This,EventId,Listen) )
EXTERN_C const IID DIID__IInkCollectorEvents;
    typedef struct _IInkCollectorEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _IInkCollectorEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _IInkCollectorEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _IInkCollectorEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _IInkCollectorEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _IInkCollectorEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _IInkCollectorEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _IInkCollectorEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _IInkCollectorEventsVtbl;
    interface _IInkCollectorEvents
    {
        CONST_VTBL struct _IInkCollectorEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IInkOverlay;
    typedef struct IInkOverlayVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkOverlay * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkOverlay * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkOverlay * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkOverlay * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkOverlay * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkOverlay * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkOverlay * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_hWnd )(
            __RPC__in IInkOverlay * This,
                                __RPC__out LONG_PTR *CurrentWindow);
                                                     HRESULT ( STDMETHODCALLTYPE *put_hWnd )(
            __RPC__in IInkOverlay * This,
                       LONG_PTR NewWindow);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IInkOverlay * This,
                                __RPC__out VARIANT_BOOL *Collecting);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IInkOverlay * This,
                       VARIANT_BOOL Collecting);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DefaultDrawingAttributes )(
            __RPC__in IInkOverlay * This,
                                __RPC__deref_out_opt IInkDrawingAttributes **CurrentAttributes);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_DefaultDrawingAttributes )(
            __RPC__in IInkOverlay * This,
                       __RPC__in_opt IInkDrawingAttributes *NewAttributes);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Renderer )(
            __RPC__in IInkOverlay * This,
                                __RPC__deref_out_opt IInkRenderer **CurrentInkRenderer);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_Renderer )(
            __RPC__in IInkOverlay * This,
                       __RPC__in_opt IInkRenderer *NewInkRenderer);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Ink )(
            __RPC__in IInkOverlay * This,
                                __RPC__deref_out_opt IInkDisp **Ink);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_Ink )(
            __RPC__in IInkOverlay * This,
                       __RPC__in_opt IInkDisp *NewInk);
                                                     HRESULT ( STDMETHODCALLTYPE *get_AutoRedraw )(
            __RPC__in IInkOverlay * This,
                                __RPC__out VARIANT_BOOL *AutoRedraw);
                                                     HRESULT ( STDMETHODCALLTYPE *put_AutoRedraw )(
            __RPC__in IInkOverlay * This,
                       VARIANT_BOOL AutoRedraw);
                                                     HRESULT ( STDMETHODCALLTYPE *get_CollectingInk )(
            __RPC__in IInkOverlay * This,
                                __RPC__out VARIANT_BOOL *Collecting);
                                                     HRESULT ( STDMETHODCALLTYPE *get_CollectionMode )(
            __RPC__in IInkOverlay * This,
                                __RPC__out InkCollectionMode *Mode);
                                                     HRESULT ( STDMETHODCALLTYPE *put_CollectionMode )(
            __RPC__in IInkOverlay * This,
                       InkCollectionMode Mode);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DynamicRendering )(
            __RPC__in IInkOverlay * This,
                                __RPC__out VARIANT_BOOL *Enabled);
                                                     HRESULT ( STDMETHODCALLTYPE *put_DynamicRendering )(
            __RPC__in IInkOverlay * This,
                       VARIANT_BOOL Enabled);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DesiredPacketDescription )(
            __RPC__in IInkOverlay * This,
                                __RPC__out VARIANT *PacketGuids);
                                                     HRESULT ( STDMETHODCALLTYPE *put_DesiredPacketDescription )(
            __RPC__in IInkOverlay * This,
                       VARIANT PacketGuids);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MouseIcon )(
            __RPC__in IInkOverlay * This,
                                __RPC__deref_out_opt IPictureDisp **MouseIcon);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MouseIcon )(
            __RPC__in IInkOverlay * This,
                               __RPC__in_opt IPictureDisp *MouseIcon);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_MouseIcon )(
            __RPC__in IInkOverlay * This,
                               __RPC__in_opt IPictureDisp *MouseIcon);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MousePointer )(
            __RPC__in IInkOverlay * This,
                                __RPC__out InkMousePointer *MousePointer);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MousePointer )(
            __RPC__in IInkOverlay * This,
                       InkMousePointer MousePointer);
                                                     HRESULT ( STDMETHODCALLTYPE *get_EditingMode )(
            __RPC__in IInkOverlay * This,
                                __RPC__out InkOverlayEditingMode *EditingMode);
                                                     HRESULT ( STDMETHODCALLTYPE *put_EditingMode )(
            __RPC__in IInkOverlay * This,
                       InkOverlayEditingMode EditingMode);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Selection )(
            __RPC__in IInkOverlay * This,
                                __RPC__deref_out_opt IInkStrokes **Selection);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Selection )(
            __RPC__in IInkOverlay * This,
                       __RPC__in_opt IInkStrokes *Selection);
                                                     HRESULT ( STDMETHODCALLTYPE *get_EraserMode )(
            __RPC__in IInkOverlay * This,
                                __RPC__out InkOverlayEraserMode *EraserMode);
                                                     HRESULT ( STDMETHODCALLTYPE *put_EraserMode )(
            __RPC__in IInkOverlay * This,
                       InkOverlayEraserMode EraserMode);
                                                     HRESULT ( STDMETHODCALLTYPE *get_EraserWidth )(
            __RPC__in IInkOverlay * This,
                                __RPC__out long *EraserWidth);
                                                     HRESULT ( STDMETHODCALLTYPE *put_EraserWidth )(
            __RPC__in IInkOverlay * This,
                       long newEraserWidth);
                                                     HRESULT ( STDMETHODCALLTYPE *get_AttachMode )(
            __RPC__in IInkOverlay * This,
                                __RPC__out InkOverlayAttachMode *AttachMode);
                                                     HRESULT ( STDMETHODCALLTYPE *put_AttachMode )(
            __RPC__in IInkOverlay * This,
                       InkOverlayAttachMode AttachMode);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Cursors )(
            __RPC__in IInkOverlay * This,
                                __RPC__deref_out_opt IInkCursors **Cursors);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MarginX )(
            __RPC__in IInkOverlay * This,
                                __RPC__out long *MarginX);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MarginX )(
            __RPC__in IInkOverlay * This,
                       long MarginX);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MarginY )(
            __RPC__in IInkOverlay * This,
                                __RPC__out long *MarginY);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MarginY )(
            __RPC__in IInkOverlay * This,
                       long MarginY);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Tablet )(
            __RPC__in IInkOverlay * This,
                                __RPC__deref_out_opt IInkTablet **SingleTablet);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SupportHighContrastInk )(
            __RPC__in IInkOverlay * This,
                                __RPC__out VARIANT_BOOL *Support);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SupportHighContrastInk )(
            __RPC__in IInkOverlay * This,
                       VARIANT_BOOL Support);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SupportHighContrastSelectionUI )(
            __RPC__in IInkOverlay * This,
                                __RPC__out VARIANT_BOOL *Support);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SupportHighContrastSelectionUI )(
            __RPC__in IInkOverlay * This,
                       VARIANT_BOOL Support);
                                            HRESULT ( STDMETHODCALLTYPE *HitTestSelection )(
            __RPC__in IInkOverlay * This,
                       long x,
                       long y,
                                __RPC__out SelectionHitResult *SelArea);
                                            HRESULT ( STDMETHODCALLTYPE *Draw )(
            __RPC__in IInkOverlay * This,
                       __RPC__in_opt IInkRectangle *Rect);
                                            HRESULT ( STDMETHODCALLTYPE *SetGestureStatus )(
            __RPC__in IInkOverlay * This,
                       InkApplicationGesture Gesture,
                       VARIANT_BOOL Listen);
                                            HRESULT ( STDMETHODCALLTYPE *GetGestureStatus )(
            __RPC__in IInkOverlay * This,
                       InkApplicationGesture Gesture,
                                __RPC__out VARIANT_BOOL *Listening);
                                            HRESULT ( STDMETHODCALLTYPE *GetWindowInputRectangle )(
            __RPC__in IInkOverlay * This,
                            __RPC__deref_inout_opt IInkRectangle **WindowInputRectangle);
                                            HRESULT ( STDMETHODCALLTYPE *SetWindowInputRectangle )(
            __RPC__in IInkOverlay * This,
                       __RPC__in_opt IInkRectangle *WindowInputRectangle);
                                            HRESULT ( STDMETHODCALLTYPE *SetAllTabletsMode )(
            __RPC__in IInkOverlay * This,
                                     VARIANT_BOOL UseMouseForInput);
                                            HRESULT ( STDMETHODCALLTYPE *SetSingleTabletIntegratedMode )(
            __RPC__in IInkOverlay * This,
                       __RPC__in_opt IInkTablet *Tablet);
                                            HRESULT ( STDMETHODCALLTYPE *GetEventInterest )(
            __RPC__in IInkOverlay * This,
                       InkCollectorEventInterest EventId,
                                __RPC__out VARIANT_BOOL *Listen);
                                            HRESULT ( STDMETHODCALLTYPE *SetEventInterest )(
            __RPC__in IInkOverlay * This,
                       InkCollectorEventInterest EventId,
                       VARIANT_BOOL Listen);
        END_INTERFACE
    } IInkOverlayVtbl;
    interface IInkOverlay
    {
        CONST_VTBL struct IInkOverlayVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_hWnd(This,CurrentWindow) )
    ( (This)->lpVtbl -> put_hWnd(This,NewWindow) )
    ( (This)->lpVtbl -> get_Enabled(This,Collecting) )
    ( (This)->lpVtbl -> put_Enabled(This,Collecting) )
    ( (This)->lpVtbl -> get_DefaultDrawingAttributes(This,CurrentAttributes) )
    ( (This)->lpVtbl -> putref_DefaultDrawingAttributes(This,NewAttributes) )
    ( (This)->lpVtbl -> get_Renderer(This,CurrentInkRenderer) )
    ( (This)->lpVtbl -> putref_Renderer(This,NewInkRenderer) )
    ( (This)->lpVtbl -> get_Ink(This,Ink) )
    ( (This)->lpVtbl -> putref_Ink(This,NewInk) )
    ( (This)->lpVtbl -> get_AutoRedraw(This,AutoRedraw) )
    ( (This)->lpVtbl -> put_AutoRedraw(This,AutoRedraw) )
    ( (This)->lpVtbl -> get_CollectingInk(This,Collecting) )
    ( (This)->lpVtbl -> get_CollectionMode(This,Mode) )
    ( (This)->lpVtbl -> put_CollectionMode(This,Mode) )
    ( (This)->lpVtbl -> get_DynamicRendering(This,Enabled) )
    ( (This)->lpVtbl -> put_DynamicRendering(This,Enabled) )
    ( (This)->lpVtbl -> get_DesiredPacketDescription(This,PacketGuids) )
    ( (This)->lpVtbl -> put_DesiredPacketDescription(This,PacketGuids) )
    ( (This)->lpVtbl -> get_MouseIcon(This,MouseIcon) )
    ( (This)->lpVtbl -> put_MouseIcon(This,MouseIcon) )
    ( (This)->lpVtbl -> putref_MouseIcon(This,MouseIcon) )
    ( (This)->lpVtbl -> get_MousePointer(This,MousePointer) )
    ( (This)->lpVtbl -> put_MousePointer(This,MousePointer) )
    ( (This)->lpVtbl -> get_EditingMode(This,EditingMode) )
    ( (This)->lpVtbl -> put_EditingMode(This,EditingMode) )
    ( (This)->lpVtbl -> get_Selection(This,Selection) )
    ( (This)->lpVtbl -> put_Selection(This,Selection) )
    ( (This)->lpVtbl -> get_EraserMode(This,EraserMode) )
    ( (This)->lpVtbl -> put_EraserMode(This,EraserMode) )
    ( (This)->lpVtbl -> get_EraserWidth(This,EraserWidth) )
    ( (This)->lpVtbl -> put_EraserWidth(This,newEraserWidth) )
    ( (This)->lpVtbl -> get_AttachMode(This,AttachMode) )
    ( (This)->lpVtbl -> put_AttachMode(This,AttachMode) )
    ( (This)->lpVtbl -> get_Cursors(This,Cursors) )
    ( (This)->lpVtbl -> get_MarginX(This,MarginX) )
    ( (This)->lpVtbl -> put_MarginX(This,MarginX) )
    ( (This)->lpVtbl -> get_MarginY(This,MarginY) )
    ( (This)->lpVtbl -> put_MarginY(This,MarginY) )
    ( (This)->lpVtbl -> get_Tablet(This,SingleTablet) )
    ( (This)->lpVtbl -> get_SupportHighContrastInk(This,Support) )
    ( (This)->lpVtbl -> put_SupportHighContrastInk(This,Support) )
    ( (This)->lpVtbl -> get_SupportHighContrastSelectionUI(This,Support) )
    ( (This)->lpVtbl -> put_SupportHighContrastSelectionUI(This,Support) )
    ( (This)->lpVtbl -> HitTestSelection(This,x,y,SelArea) )
    ( (This)->lpVtbl -> Draw(This,Rect) )
    ( (This)->lpVtbl -> SetGestureStatus(This,Gesture,Listen) )
    ( (This)->lpVtbl -> GetGestureStatus(This,Gesture,Listening) )
    ( (This)->lpVtbl -> GetWindowInputRectangle(This,WindowInputRectangle) )
    ( (This)->lpVtbl -> SetWindowInputRectangle(This,WindowInputRectangle) )
    ( (This)->lpVtbl -> SetAllTabletsMode(This,UseMouseForInput) )
    ( (This)->lpVtbl -> SetSingleTabletIntegratedMode(This,Tablet) )
    ( (This)->lpVtbl -> GetEventInterest(This,EventId,Listen) )
    ( (This)->lpVtbl -> SetEventInterest(This,EventId,Listen) )
EXTERN_C const IID DIID__IInkOverlayEvents;
    typedef struct _IInkOverlayEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _IInkOverlayEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _IInkOverlayEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _IInkOverlayEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _IInkOverlayEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _IInkOverlayEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _IInkOverlayEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _IInkOverlayEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _IInkOverlayEventsVtbl;
    interface _IInkOverlayEvents
    {
        CONST_VTBL struct _IInkOverlayEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IInkPicture;
    typedef struct IInkPictureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkPicture * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkPicture * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkPicture * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkPicture * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkPicture * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkPicture * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkPicture * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_hWnd )(
            __RPC__in IInkPicture * This,
                                __RPC__out LONG_PTR *CurrentWindow);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DefaultDrawingAttributes )(
            __RPC__in IInkPicture * This,
                                __RPC__deref_out_opt IInkDrawingAttributes **CurrentAttributes);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_DefaultDrawingAttributes )(
            __RPC__in IInkPicture * This,
                       __RPC__in_opt IInkDrawingAttributes *NewAttributes);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Renderer )(
            __RPC__in IInkPicture * This,
                                __RPC__deref_out_opt IInkRenderer **CurrentInkRenderer);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_Renderer )(
            __RPC__in IInkPicture * This,
                       __RPC__in_opt IInkRenderer *NewInkRenderer);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Ink )(
            __RPC__in IInkPicture * This,
                                __RPC__deref_out_opt IInkDisp **Ink);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_Ink )(
            __RPC__in IInkPicture * This,
                       __RPC__in_opt IInkDisp *NewInk);
                                                     HRESULT ( STDMETHODCALLTYPE *get_AutoRedraw )(
            __RPC__in IInkPicture * This,
                                __RPC__out VARIANT_BOOL *AutoRedraw);
                                                     HRESULT ( STDMETHODCALLTYPE *put_AutoRedraw )(
            __RPC__in IInkPicture * This,
                       VARIANT_BOOL AutoRedraw);
                                                     HRESULT ( STDMETHODCALLTYPE *get_CollectingInk )(
            __RPC__in IInkPicture * This,
                                __RPC__out VARIANT_BOOL *Collecting);
                                                     HRESULT ( STDMETHODCALLTYPE *get_CollectionMode )(
            __RPC__in IInkPicture * This,
                                __RPC__out InkCollectionMode *Mode);
                                                     HRESULT ( STDMETHODCALLTYPE *put_CollectionMode )(
            __RPC__in IInkPicture * This,
                       InkCollectionMode Mode);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DynamicRendering )(
            __RPC__in IInkPicture * This,
                                __RPC__out VARIANT_BOOL *Enabled);
                                                     HRESULT ( STDMETHODCALLTYPE *put_DynamicRendering )(
            __RPC__in IInkPicture * This,
                       VARIANT_BOOL Enabled);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DesiredPacketDescription )(
            __RPC__in IInkPicture * This,
                                __RPC__out VARIANT *PacketGuids);
                                                     HRESULT ( STDMETHODCALLTYPE *put_DesiredPacketDescription )(
            __RPC__in IInkPicture * This,
                       VARIANT PacketGuids);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MouseIcon )(
            __RPC__in IInkPicture * This,
                                __RPC__deref_out_opt IPictureDisp **MouseIcon);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MouseIcon )(
            __RPC__in IInkPicture * This,
                               __RPC__in_opt IPictureDisp *MouseIcon);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_MouseIcon )(
            __RPC__in IInkPicture * This,
                               __RPC__in_opt IPictureDisp *MouseIcon);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MousePointer )(
            __RPC__in IInkPicture * This,
                                __RPC__out InkMousePointer *MousePointer);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MousePointer )(
            __RPC__in IInkPicture * This,
                       InkMousePointer MousePointer);
                                                     HRESULT ( STDMETHODCALLTYPE *get_EditingMode )(
            __RPC__in IInkPicture * This,
                                __RPC__out InkOverlayEditingMode *EditingMode);
                                                     HRESULT ( STDMETHODCALLTYPE *put_EditingMode )(
            __RPC__in IInkPicture * This,
                       InkOverlayEditingMode EditingMode);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Selection )(
            __RPC__in IInkPicture * This,
                                __RPC__deref_out_opt IInkStrokes **Selection);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Selection )(
            __RPC__in IInkPicture * This,
                       __RPC__in_opt IInkStrokes *Selection);
                                                     HRESULT ( STDMETHODCALLTYPE *get_EraserMode )(
            __RPC__in IInkPicture * This,
                                __RPC__out InkOverlayEraserMode *EraserMode);
                                                     HRESULT ( STDMETHODCALLTYPE *put_EraserMode )(
            __RPC__in IInkPicture * This,
                       InkOverlayEraserMode EraserMode);
                                                     HRESULT ( STDMETHODCALLTYPE *get_EraserWidth )(
            __RPC__in IInkPicture * This,
                                __RPC__out long *EraserWidth);
                                                     HRESULT ( STDMETHODCALLTYPE *put_EraserWidth )(
            __RPC__in IInkPicture * This,
                       long newEraserWidth);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_Picture )(
            __RPC__in IInkPicture * This,
                       __RPC__in_opt IPictureDisp *pPicture);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Picture )(
            __RPC__in IInkPicture * This,
                       __RPC__in_opt IPictureDisp *pPicture);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Picture )(
            __RPC__in IInkPicture * This,
                                __RPC__deref_out_opt IPictureDisp **ppPicture);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SizeMode )(
            __RPC__in IInkPicture * This,
                       InkPictureSizeMode smNewSizeMode);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SizeMode )(
            __RPC__in IInkPicture * This,
                                __RPC__out InkPictureSizeMode *smSizeMode);
                                                     HRESULT ( STDMETHODCALLTYPE *put_BackColor )(
            __RPC__in IInkPicture * This,
                       OLE_COLOR newColor);
                                                     HRESULT ( STDMETHODCALLTYPE *get_BackColor )(
            __RPC__in IInkPicture * This,
                                __RPC__out OLE_COLOR *pColor);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Cursors )(
            __RPC__in IInkPicture * This,
                                __RPC__deref_out_opt IInkCursors **Cursors);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MarginX )(
            __RPC__in IInkPicture * This,
                                __RPC__out long *MarginX);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MarginX )(
            __RPC__in IInkPicture * This,
                       long MarginX);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MarginY )(
            __RPC__in IInkPicture * This,
                                __RPC__out long *MarginY);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MarginY )(
            __RPC__in IInkPicture * This,
                       long MarginY);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Tablet )(
            __RPC__in IInkPicture * This,
                                __RPC__deref_out_opt IInkTablet **SingleTablet);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SupportHighContrastInk )(
            __RPC__in IInkPicture * This,
                                __RPC__out VARIANT_BOOL *Support);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SupportHighContrastInk )(
            __RPC__in IInkPicture * This,
                       VARIANT_BOOL Support);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SupportHighContrastSelectionUI )(
            __RPC__in IInkPicture * This,
                                __RPC__out VARIANT_BOOL *Support);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SupportHighContrastSelectionUI )(
            __RPC__in IInkPicture * This,
                       VARIANT_BOOL Support);
                                            HRESULT ( STDMETHODCALLTYPE *HitTestSelection )(
            __RPC__in IInkPicture * This,
                       long x,
                       long y,
                                __RPC__out SelectionHitResult *SelArea);
                                            HRESULT ( STDMETHODCALLTYPE *SetGestureStatus )(
            __RPC__in IInkPicture * This,
                       InkApplicationGesture Gesture,
                       VARIANT_BOOL Listen);
                                            HRESULT ( STDMETHODCALLTYPE *GetGestureStatus )(
            __RPC__in IInkPicture * This,
                       InkApplicationGesture Gesture,
                                __RPC__out VARIANT_BOOL *Listening);
                                            HRESULT ( STDMETHODCALLTYPE *GetWindowInputRectangle )(
            __RPC__in IInkPicture * This,
                            __RPC__deref_inout_opt IInkRectangle **WindowInputRectangle);
                                            HRESULT ( STDMETHODCALLTYPE *SetWindowInputRectangle )(
            __RPC__in IInkPicture * This,
                       __RPC__in_opt IInkRectangle *WindowInputRectangle);
                                            HRESULT ( STDMETHODCALLTYPE *SetAllTabletsMode )(
            __RPC__in IInkPicture * This,
                                     VARIANT_BOOL UseMouseForInput);
                                            HRESULT ( STDMETHODCALLTYPE *SetSingleTabletIntegratedMode )(
            __RPC__in IInkPicture * This,
                       __RPC__in_opt IInkTablet *Tablet);
                                            HRESULT ( STDMETHODCALLTYPE *GetEventInterest )(
            __RPC__in IInkPicture * This,
                       InkCollectorEventInterest EventId,
                                __RPC__out VARIANT_BOOL *Listen);
                                            HRESULT ( STDMETHODCALLTYPE *SetEventInterest )(
            __RPC__in IInkPicture * This,
                       InkCollectorEventInterest EventId,
                       VARIANT_BOOL Listen);
                                                     HRESULT ( STDMETHODCALLTYPE *get_InkEnabled )(
            __RPC__in IInkPicture * This,
                                __RPC__out VARIANT_BOOL *Collecting);
                                                     HRESULT ( STDMETHODCALLTYPE *put_InkEnabled )(
            __RPC__in IInkPicture * This,
                       VARIANT_BOOL Collecting);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IInkPicture * This,
                                __RPC__out VARIANT_BOOL *pbool);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IInkPicture * This,
                       VARIANT_BOOL vbool);
        END_INTERFACE
    } IInkPictureVtbl;
    interface IInkPicture
    {
        CONST_VTBL struct IInkPictureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_hWnd(This,CurrentWindow) )
    ( (This)->lpVtbl -> get_DefaultDrawingAttributes(This,CurrentAttributes) )
    ( (This)->lpVtbl -> putref_DefaultDrawingAttributes(This,NewAttributes) )
    ( (This)->lpVtbl -> get_Renderer(This,CurrentInkRenderer) )
    ( (This)->lpVtbl -> putref_Renderer(This,NewInkRenderer) )
    ( (This)->lpVtbl -> get_Ink(This,Ink) )
    ( (This)->lpVtbl -> putref_Ink(This,NewInk) )
    ( (This)->lpVtbl -> get_AutoRedraw(This,AutoRedraw) )
    ( (This)->lpVtbl -> put_AutoRedraw(This,AutoRedraw) )
    ( (This)->lpVtbl -> get_CollectingInk(This,Collecting) )
    ( (This)->lpVtbl -> get_CollectionMode(This,Mode) )
    ( (This)->lpVtbl -> put_CollectionMode(This,Mode) )
    ( (This)->lpVtbl -> get_DynamicRendering(This,Enabled) )
    ( (This)->lpVtbl -> put_DynamicRendering(This,Enabled) )
    ( (This)->lpVtbl -> get_DesiredPacketDescription(This,PacketGuids) )
    ( (This)->lpVtbl -> put_DesiredPacketDescription(This,PacketGuids) )
    ( (This)->lpVtbl -> get_MouseIcon(This,MouseIcon) )
    ( (This)->lpVtbl -> put_MouseIcon(This,MouseIcon) )
    ( (This)->lpVtbl -> putref_MouseIcon(This,MouseIcon) )
    ( (This)->lpVtbl -> get_MousePointer(This,MousePointer) )
    ( (This)->lpVtbl -> put_MousePointer(This,MousePointer) )
    ( (This)->lpVtbl -> get_EditingMode(This,EditingMode) )
    ( (This)->lpVtbl -> put_EditingMode(This,EditingMode) )
    ( (This)->lpVtbl -> get_Selection(This,Selection) )
    ( (This)->lpVtbl -> put_Selection(This,Selection) )
    ( (This)->lpVtbl -> get_EraserMode(This,EraserMode) )
    ( (This)->lpVtbl -> put_EraserMode(This,EraserMode) )
    ( (This)->lpVtbl -> get_EraserWidth(This,EraserWidth) )
    ( (This)->lpVtbl -> put_EraserWidth(This,newEraserWidth) )
    ( (This)->lpVtbl -> putref_Picture(This,pPicture) )
    ( (This)->lpVtbl -> put_Picture(This,pPicture) )
    ( (This)->lpVtbl -> get_Picture(This,ppPicture) )
    ( (This)->lpVtbl -> put_SizeMode(This,smNewSizeMode) )
    ( (This)->lpVtbl -> get_SizeMode(This,smSizeMode) )
    ( (This)->lpVtbl -> put_BackColor(This,newColor) )
    ( (This)->lpVtbl -> get_BackColor(This,pColor) )
    ( (This)->lpVtbl -> get_Cursors(This,Cursors) )
    ( (This)->lpVtbl -> get_MarginX(This,MarginX) )
    ( (This)->lpVtbl -> put_MarginX(This,MarginX) )
    ( (This)->lpVtbl -> get_MarginY(This,MarginY) )
    ( (This)->lpVtbl -> put_MarginY(This,MarginY) )
    ( (This)->lpVtbl -> get_Tablet(This,SingleTablet) )
    ( (This)->lpVtbl -> get_SupportHighContrastInk(This,Support) )
    ( (This)->lpVtbl -> put_SupportHighContrastInk(This,Support) )
    ( (This)->lpVtbl -> get_SupportHighContrastSelectionUI(This,Support) )
    ( (This)->lpVtbl -> put_SupportHighContrastSelectionUI(This,Support) )
    ( (This)->lpVtbl -> HitTestSelection(This,x,y,SelArea) )
    ( (This)->lpVtbl -> SetGestureStatus(This,Gesture,Listen) )
    ( (This)->lpVtbl -> GetGestureStatus(This,Gesture,Listening) )
    ( (This)->lpVtbl -> GetWindowInputRectangle(This,WindowInputRectangle) )
    ( (This)->lpVtbl -> SetWindowInputRectangle(This,WindowInputRectangle) )
    ( (This)->lpVtbl -> SetAllTabletsMode(This,UseMouseForInput) )
    ( (This)->lpVtbl -> SetSingleTabletIntegratedMode(This,Tablet) )
    ( (This)->lpVtbl -> GetEventInterest(This,EventId,Listen) )
    ( (This)->lpVtbl -> SetEventInterest(This,EventId,Listen) )
    ( (This)->lpVtbl -> get_InkEnabled(This,Collecting) )
    ( (This)->lpVtbl -> put_InkEnabled(This,Collecting) )
    ( (This)->lpVtbl -> get_Enabled(This,pbool) )
    ( (This)->lpVtbl -> put_Enabled(This,vbool) )
EXTERN_C const IID DIID__IInkPictureEvents;
    typedef struct _IInkPictureEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _IInkPictureEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _IInkPictureEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _IInkPictureEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _IInkPictureEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _IInkPictureEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _IInkPictureEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _IInkPictureEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _IInkPictureEventsVtbl;
    interface _IInkPictureEvents
    {
        CONST_VTBL struct _IInkPictureEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IInkRecognizer;
    typedef struct IInkRecognizerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkRecognizer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkRecognizer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkRecognizer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkRecognizer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkRecognizer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkRecognizer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkRecognizer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IInkRecognizer * This,
                                __RPC__deref_out_opt BSTR *Name);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Vendor )(
            __RPC__in IInkRecognizer * This,
                                __RPC__deref_out_opt BSTR *Vendor);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
            __RPC__in IInkRecognizer * This,
                                __RPC__out InkRecognizerCapabilities *CapabilitiesFlags);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Languages )(
            __RPC__in IInkRecognizer * This,
                                __RPC__out VARIANT *Languages);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SupportedProperties )(
            __RPC__in IInkRecognizer * This,
                                __RPC__out VARIANT *SupportedProperties);
                                                     HRESULT ( STDMETHODCALLTYPE *get_PreferredPacketDescription )(
            __RPC__in IInkRecognizer * This,
                                __RPC__out VARIANT *PreferredPacketDescription);
                                            HRESULT ( STDMETHODCALLTYPE *CreateRecognizerContext )(
            __RPC__in IInkRecognizer * This,
                                __RPC__deref_out_opt IInkRecognizerContext **Context);
        END_INTERFACE
    } IInkRecognizerVtbl;
    interface IInkRecognizer
    {
        CONST_VTBL struct IInkRecognizerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Vendor(This,Vendor) )
    ( (This)->lpVtbl -> get_Capabilities(This,CapabilitiesFlags) )
    ( (This)->lpVtbl -> get_Languages(This,Languages) )
    ( (This)->lpVtbl -> get_SupportedProperties(This,SupportedProperties) )
    ( (This)->lpVtbl -> get_PreferredPacketDescription(This,PreferredPacketDescription) )
    ( (This)->lpVtbl -> CreateRecognizerContext(This,Context) )
EXTERN_C const IID IID_IInkRecognizer2;
    typedef struct IInkRecognizer2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkRecognizer2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkRecognizer2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkRecognizer2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkRecognizer2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkRecognizer2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkRecognizer2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkRecognizer2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IInkRecognizer2 * This,
                                __RPC__deref_out_opt BSTR *pbstrId);
                                                     HRESULT ( STDMETHODCALLTYPE *get_UnicodeRanges )(
            __RPC__in IInkRecognizer2 * This,
                                __RPC__out VARIANT *UnicodeRanges);
        END_INTERFACE
    } IInkRecognizer2Vtbl;
    interface IInkRecognizer2
    {
        CONST_VTBL struct IInkRecognizer2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,pbstrId) )
    ( (This)->lpVtbl -> get_UnicodeRanges(This,UnicodeRanges) )
EXTERN_C const IID IID_IInkRecognizers;
    typedef struct IInkRecognizersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkRecognizers * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkRecognizers * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkRecognizers * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkRecognizers * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkRecognizers * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkRecognizers * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkRecognizers * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IInkRecognizers * This,
                                __RPC__out long *Count);
                                                                 HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IInkRecognizers * This,
                                __RPC__deref_out_opt IUnknown **_NewEnum);
                                            HRESULT ( STDMETHODCALLTYPE *GetDefaultRecognizer )(
            __RPC__in IInkRecognizers * This,
                                     long lcid,
                                __RPC__deref_out_opt IInkRecognizer **DefaultRecognizer);
                                            HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IInkRecognizers * This,
                       long Index,
                                __RPC__deref_out_opt IInkRecognizer **InkRecognizer);
        END_INTERFACE
    } IInkRecognizersVtbl;
    interface IInkRecognizers
    {
        CONST_VTBL struct IInkRecognizersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
    ( (This)->lpVtbl -> GetDefaultRecognizer(This,lcid,DefaultRecognizer) )
    ( (This)->lpVtbl -> Item(This,Index,InkRecognizer) )
EXTERN_C const IID DIID__IInkRecognitionEvents;
    typedef struct _IInkRecognitionEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _IInkRecognitionEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _IInkRecognitionEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _IInkRecognitionEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _IInkRecognitionEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _IInkRecognitionEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _IInkRecognitionEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _IInkRecognitionEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _IInkRecognitionEventsVtbl;
    interface _IInkRecognitionEvents
    {
        CONST_VTBL struct _IInkRecognitionEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IInkRecognizerContext;
    typedef struct IInkRecognizerContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkRecognizerContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkRecognizerContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkRecognizerContext * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkRecognizerContext * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkRecognizerContext * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkRecognizerContext * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkRecognizerContext * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Strokes )(
            __RPC__in IInkRecognizerContext * This,
                                __RPC__deref_out_opt IInkStrokes **Strokes);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_Strokes )(
            __RPC__in IInkRecognizerContext * This,
                               __RPC__in_opt IInkStrokes *Strokes);
                                                     HRESULT ( STDMETHODCALLTYPE *get_CharacterAutoCompletionMode )(
            __RPC__in IInkRecognizerContext * This,
                                __RPC__out InkRecognizerCharacterAutoCompletionMode *Mode);
                                                     HRESULT ( STDMETHODCALLTYPE *put_CharacterAutoCompletionMode )(
            __RPC__in IInkRecognizerContext * This,
                       InkRecognizerCharacterAutoCompletionMode Mode);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Factoid )(
            __RPC__in IInkRecognizerContext * This,
                                __RPC__deref_out_opt BSTR *Factoid);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Factoid )(
            __RPC__in IInkRecognizerContext * This,
                       __RPC__in BSTR factoid);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Guide )(
            __RPC__in IInkRecognizerContext * This,
                                __RPC__deref_out_opt IInkRecognizerGuide **RecognizerGuide);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_Guide )(
            __RPC__in IInkRecognizerContext * This,
                       __RPC__in_opt IInkRecognizerGuide *RecognizerGuide);
                                                     HRESULT ( STDMETHODCALLTYPE *get_PrefixText )(
            __RPC__in IInkRecognizerContext * This,
                                __RPC__deref_out_opt BSTR *Prefix);
                                                     HRESULT ( STDMETHODCALLTYPE *put_PrefixText )(
            __RPC__in IInkRecognizerContext * This,
                       __RPC__in BSTR Prefix);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SuffixText )(
            __RPC__in IInkRecognizerContext * This,
                                __RPC__deref_out_opt BSTR *Suffix);
                                                     HRESULT ( STDMETHODCALLTYPE *put_SuffixText )(
            __RPC__in IInkRecognizerContext * This,
                       __RPC__in BSTR Suffix);
                                                     HRESULT ( STDMETHODCALLTYPE *get_RecognitionFlags )(
            __RPC__in IInkRecognizerContext * This,
                                __RPC__out InkRecognitionModes *Modes);
                                                     HRESULT ( STDMETHODCALLTYPE *put_RecognitionFlags )(
            __RPC__in IInkRecognizerContext * This,
                       InkRecognitionModes Modes);
                                                     HRESULT ( STDMETHODCALLTYPE *get_WordList )(
            __RPC__in IInkRecognizerContext * This,
                                __RPC__deref_out_opt IInkWordList **WordList);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_WordList )(
            __RPC__in IInkRecognizerContext * This,
                       __RPC__in_opt IInkWordList *WordList);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Recognizer )(
            __RPC__in IInkRecognizerContext * This,
                                __RPC__deref_out_opt IInkRecognizer **Recognizer);
                                            HRESULT ( STDMETHODCALLTYPE *Recognize )(
            __RPC__in IInkRecognizerContext * This,
                            __RPC__inout InkRecognitionStatus *RecognitionStatus,
                                __RPC__deref_out_opt IInkRecognitionResult **RecognitionResult);
                                            HRESULT ( STDMETHODCALLTYPE *StopBackgroundRecognition )(
            __RPC__in IInkRecognizerContext * This);
                                            HRESULT ( STDMETHODCALLTYPE *EndInkInput )(
            __RPC__in IInkRecognizerContext * This);
                                            HRESULT ( STDMETHODCALLTYPE *BackgroundRecognize )(
            __RPC__in IInkRecognizerContext * This,
                                 VARIANT CustomData);
                                            HRESULT ( STDMETHODCALLTYPE *BackgroundRecognizeWithAlternates )(
            __RPC__in IInkRecognizerContext * This,
                                 VARIANT CustomData);
                                            HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IInkRecognizerContext * This,
                                __RPC__deref_out_opt IInkRecognizerContext **RecoContext);
                                            HRESULT ( STDMETHODCALLTYPE *IsStringSupported )(
            __RPC__in IInkRecognizerContext * This,
                       __RPC__in BSTR String,
                                __RPC__out VARIANT_BOOL *Supported);
        END_INTERFACE
    } IInkRecognizerContextVtbl;
    interface IInkRecognizerContext
    {
        CONST_VTBL struct IInkRecognizerContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Strokes(This,Strokes) )
    ( (This)->lpVtbl -> putref_Strokes(This,Strokes) )
    ( (This)->lpVtbl -> get_CharacterAutoCompletionMode(This,Mode) )
    ( (This)->lpVtbl -> put_CharacterAutoCompletionMode(This,Mode) )
    ( (This)->lpVtbl -> get_Factoid(This,Factoid) )
    ( (This)->lpVtbl -> put_Factoid(This,factoid) )
    ( (This)->lpVtbl -> get_Guide(This,RecognizerGuide) )
    ( (This)->lpVtbl -> putref_Guide(This,RecognizerGuide) )
    ( (This)->lpVtbl -> get_PrefixText(This,Prefix) )
    ( (This)->lpVtbl -> put_PrefixText(This,Prefix) )
    ( (This)->lpVtbl -> get_SuffixText(This,Suffix) )
    ( (This)->lpVtbl -> put_SuffixText(This,Suffix) )
    ( (This)->lpVtbl -> get_RecognitionFlags(This,Modes) )
    ( (This)->lpVtbl -> put_RecognitionFlags(This,Modes) )
    ( (This)->lpVtbl -> get_WordList(This,WordList) )
    ( (This)->lpVtbl -> putref_WordList(This,WordList) )
    ( (This)->lpVtbl -> get_Recognizer(This,Recognizer) )
    ( (This)->lpVtbl -> Recognize(This,RecognitionStatus,RecognitionResult) )
    ( (This)->lpVtbl -> StopBackgroundRecognition(This) )
    ( (This)->lpVtbl -> EndInkInput(This) )
    ( (This)->lpVtbl -> BackgroundRecognize(This,CustomData) )
    ( (This)->lpVtbl -> BackgroundRecognizeWithAlternates(This,CustomData) )
    ( (This)->lpVtbl -> Clone(This,RecoContext) )
    ( (This)->lpVtbl -> IsStringSupported(This,String,Supported) )
EXTERN_C const IID IID_IInkRecognizerContext2;
    typedef struct IInkRecognizerContext2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkRecognizerContext2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkRecognizerContext2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkRecognizerContext2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkRecognizerContext2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkRecognizerContext2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkRecognizerContext2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkRecognizerContext2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_EnabledUnicodeRanges )(
            __RPC__in IInkRecognizerContext2 * This,
                                __RPC__out VARIANT *UnicodeRanges);
                                                     HRESULT ( STDMETHODCALLTYPE *put_EnabledUnicodeRanges )(
            __RPC__in IInkRecognizerContext2 * This,
                       VARIANT UnicodeRanges);
        END_INTERFACE
    } IInkRecognizerContext2Vtbl;
    interface IInkRecognizerContext2
    {
        CONST_VTBL struct IInkRecognizerContext2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_EnabledUnicodeRanges(This,UnicodeRanges) )
    ( (This)->lpVtbl -> put_EnabledUnicodeRanges(This,UnicodeRanges) )
EXTERN_C const IID IID_IInkRecognitionResult;
    typedef struct IInkRecognitionResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkRecognitionResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkRecognitionResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkRecognitionResult * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkRecognitionResult * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkRecognitionResult * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkRecognitionResult * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkRecognitionResult * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_TopString )(
            __RPC__in IInkRecognitionResult * This,
                                __RPC__deref_out_opt BSTR *TopString);
                                                     HRESULT ( STDMETHODCALLTYPE *get_TopAlternate )(
            __RPC__in IInkRecognitionResult * This,
                                __RPC__deref_out_opt IInkRecognitionAlternate **TopAlternate);
                                                     HRESULT ( STDMETHODCALLTYPE *get_TopConfidence )(
            __RPC__in IInkRecognitionResult * This,
                                __RPC__out InkRecognitionConfidence *TopConfidence);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Strokes )(
            __RPC__in IInkRecognitionResult * This,
                                __RPC__deref_out_opt IInkStrokes **Strokes);
                                            HRESULT ( STDMETHODCALLTYPE *AlternatesFromSelection )(
            __RPC__in IInkRecognitionResult * This,
                                     long selectionStart,
                                     long selectionLength,
                                     long maximumAlternates,
                                __RPC__deref_out_opt IInkRecognitionAlternates **AlternatesFromSelection);
                                            HRESULT ( STDMETHODCALLTYPE *ModifyTopAlternate )(
            __RPC__in IInkRecognitionResult * This,
                       __RPC__in_opt IInkRecognitionAlternate *Alternate);
                                            HRESULT ( STDMETHODCALLTYPE *SetResultOnStrokes )(
            __RPC__in IInkRecognitionResult * This);
        END_INTERFACE
    } IInkRecognitionResultVtbl;
    interface IInkRecognitionResult
    {
        CONST_VTBL struct IInkRecognitionResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_TopString(This,TopString) )
    ( (This)->lpVtbl -> get_TopAlternate(This,TopAlternate) )
    ( (This)->lpVtbl -> get_TopConfidence(This,TopConfidence) )
    ( (This)->lpVtbl -> get_Strokes(This,Strokes) )
    ( (This)->lpVtbl -> AlternatesFromSelection(This,selectionStart,selectionLength,maximumAlternates,AlternatesFromSelection) )
    ( (This)->lpVtbl -> ModifyTopAlternate(This,Alternate) )
    ( (This)->lpVtbl -> SetResultOnStrokes(This) )
EXTERN_C const IID IID_IInkRecognitionAlternate;
    typedef struct IInkRecognitionAlternateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkRecognitionAlternate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkRecognitionAlternate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkRecognitionAlternate * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkRecognitionAlternate * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkRecognitionAlternate * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkRecognitionAlternate * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkRecognitionAlternate * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_String )(
            __RPC__in IInkRecognitionAlternate * This,
                                __RPC__deref_out_opt BSTR *RecoString);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Confidence )(
            __RPC__in IInkRecognitionAlternate * This,
                                __RPC__out InkRecognitionConfidence *Confidence);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Baseline )(
            __RPC__in IInkRecognitionAlternate * This,
                                __RPC__out VARIANT *Baseline);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Midline )(
            __RPC__in IInkRecognitionAlternate * This,
                                __RPC__out VARIANT *Midline);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Ascender )(
            __RPC__in IInkRecognitionAlternate * This,
                                __RPC__out VARIANT *Ascender);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Descender )(
            __RPC__in IInkRecognitionAlternate * This,
                                __RPC__out VARIANT *Descender);
                                                     HRESULT ( STDMETHODCALLTYPE *get_LineNumber )(
            __RPC__in IInkRecognitionAlternate * This,
                                __RPC__out long *LineNumber);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Strokes )(
            __RPC__in IInkRecognitionAlternate * This,
                                __RPC__deref_out_opt IInkStrokes **Strokes);
                                                     HRESULT ( STDMETHODCALLTYPE *get_LineAlternates )(
            __RPC__in IInkRecognitionAlternate * This,
                                __RPC__deref_out_opt IInkRecognitionAlternates **LineAlternates);
                                                     HRESULT ( STDMETHODCALLTYPE *get_ConfidenceAlternates )(
            __RPC__in IInkRecognitionAlternate * This,
                                __RPC__deref_out_opt IInkRecognitionAlternates **ConfidenceAlternates);
                                            HRESULT ( STDMETHODCALLTYPE *GetStrokesFromStrokeRanges )(
            __RPC__in IInkRecognitionAlternate * This,
                       __RPC__in_opt IInkStrokes *Strokes,
                                __RPC__deref_out_opt IInkStrokes **GetStrokesFromStrokeRanges);
                                            HRESULT ( STDMETHODCALLTYPE *GetStrokesFromTextRange )(
            __RPC__in IInkRecognitionAlternate * This,
                            __RPC__inout long *selectionStart,
                            __RPC__inout long *selectionLength,
                                __RPC__deref_out_opt IInkStrokes **GetStrokesFromTextRange);
                                            HRESULT ( STDMETHODCALLTYPE *GetTextRangeFromStrokes )(
            __RPC__in IInkRecognitionAlternate * This,
                       __RPC__in_opt IInkStrokes *Strokes,
                            __RPC__inout long *selectionStart,
                            __RPC__inout long *selectionLength);
                                            HRESULT ( STDMETHODCALLTYPE *AlternatesWithConstantPropertyValues )(
            __RPC__in IInkRecognitionAlternate * This,
                       __RPC__in BSTR PropertyType,
                                __RPC__deref_out_opt IInkRecognitionAlternates **AlternatesWithConstantPropertyValues);
                                            HRESULT ( STDMETHODCALLTYPE *GetPropertyValue )(
            __RPC__in IInkRecognitionAlternate * This,
                       __RPC__in BSTR PropertyType,
                                __RPC__out VARIANT *PropertyValue);
        END_INTERFACE
    } IInkRecognitionAlternateVtbl;
    interface IInkRecognitionAlternate
    {
        CONST_VTBL struct IInkRecognitionAlternateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_String(This,RecoString) )
    ( (This)->lpVtbl -> get_Confidence(This,Confidence) )
    ( (This)->lpVtbl -> get_Baseline(This,Baseline) )
    ( (This)->lpVtbl -> get_Midline(This,Midline) )
    ( (This)->lpVtbl -> get_Ascender(This,Ascender) )
    ( (This)->lpVtbl -> get_Descender(This,Descender) )
    ( (This)->lpVtbl -> get_LineNumber(This,LineNumber) )
    ( (This)->lpVtbl -> get_Strokes(This,Strokes) )
    ( (This)->lpVtbl -> get_LineAlternates(This,LineAlternates) )
    ( (This)->lpVtbl -> get_ConfidenceAlternates(This,ConfidenceAlternates) )
    ( (This)->lpVtbl -> GetStrokesFromStrokeRanges(This,Strokes,GetStrokesFromStrokeRanges) )
    ( (This)->lpVtbl -> GetStrokesFromTextRange(This,selectionStart,selectionLength,GetStrokesFromTextRange) )
    ( (This)->lpVtbl -> GetTextRangeFromStrokes(This,Strokes,selectionStart,selectionLength) )
    ( (This)->lpVtbl -> AlternatesWithConstantPropertyValues(This,PropertyType,AlternatesWithConstantPropertyValues) )
    ( (This)->lpVtbl -> GetPropertyValue(This,PropertyType,PropertyValue) )
EXTERN_C const IID IID_IInkRecognitionAlternates;
    typedef struct IInkRecognitionAlternatesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkRecognitionAlternates * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkRecognitionAlternates * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkRecognitionAlternates * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkRecognitionAlternates * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkRecognitionAlternates * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkRecognitionAlternates * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkRecognitionAlternates * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IInkRecognitionAlternates * This,
                                __RPC__out long *Count);
                                                                 HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IInkRecognitionAlternates * This,
                                __RPC__deref_out_opt IUnknown **_NewEnum);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Strokes )(
            __RPC__in IInkRecognitionAlternates * This,
                                __RPC__deref_out_opt IInkStrokes **Strokes);
                                            HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IInkRecognitionAlternates * This,
                       long Index,
                                __RPC__deref_out_opt IInkRecognitionAlternate **InkRecoAlternate);
        END_INTERFACE
    } IInkRecognitionAlternatesVtbl;
    interface IInkRecognitionAlternates
    {
        CONST_VTBL struct IInkRecognitionAlternatesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
    ( (This)->lpVtbl -> get_Strokes(This,Strokes) )
    ( (This)->lpVtbl -> Item(This,Index,InkRecoAlternate) )
EXTERN_C const IID IID_IInkRecognizerGuide;
    typedef struct IInkRecognizerGuideVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkRecognizerGuide * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkRecognizerGuide * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkRecognizerGuide * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkRecognizerGuide * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkRecognizerGuide * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkRecognizerGuide * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkRecognizerGuide * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_WritingBox )(
            __RPC__in IInkRecognizerGuide * This,
                                __RPC__deref_out_opt IInkRectangle **Rectangle);
                                                     HRESULT ( STDMETHODCALLTYPE *put_WritingBox )(
            __RPC__in IInkRecognizerGuide * This,
                       __RPC__in_opt IInkRectangle *Rectangle);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DrawnBox )(
            __RPC__in IInkRecognizerGuide * This,
                                __RPC__deref_out_opt IInkRectangle **Rectangle);
                                                     HRESULT ( STDMETHODCALLTYPE *put_DrawnBox )(
            __RPC__in IInkRecognizerGuide * This,
                       __RPC__in_opt IInkRectangle *Rectangle);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Rows )(
            __RPC__in IInkRecognizerGuide * This,
                                __RPC__out long *Units);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Rows )(
            __RPC__in IInkRecognizerGuide * This,
                       long Units);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Columns )(
            __RPC__in IInkRecognizerGuide * This,
                                __RPC__out long *Units);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Columns )(
            __RPC__in IInkRecognizerGuide * This,
                       long Units);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Midline )(
            __RPC__in IInkRecognizerGuide * This,
                                __RPC__out long *Units);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Midline )(
            __RPC__in IInkRecognizerGuide * This,
                       long Units);
                                                             HRESULT ( STDMETHODCALLTYPE *get_GuideData )(
            __RPC__in IInkRecognizerGuide * This,
                                __RPC__out InkRecoGuide *pRecoGuide);
                                                             HRESULT ( STDMETHODCALLTYPE *put_GuideData )(
            __RPC__in IInkRecognizerGuide * This,
                       InkRecoGuide recoGuide);
        END_INTERFACE
    } IInkRecognizerGuideVtbl;
    interface IInkRecognizerGuide
    {
        CONST_VTBL struct IInkRecognizerGuideVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_WritingBox(This,Rectangle) )
    ( (This)->lpVtbl -> put_WritingBox(This,Rectangle) )
    ( (This)->lpVtbl -> get_DrawnBox(This,Rectangle) )
    ( (This)->lpVtbl -> put_DrawnBox(This,Rectangle) )
    ( (This)->lpVtbl -> get_Rows(This,Units) )
    ( (This)->lpVtbl -> put_Rows(This,Units) )
    ( (This)->lpVtbl -> get_Columns(This,Units) )
    ( (This)->lpVtbl -> put_Columns(This,Units) )
    ( (This)->lpVtbl -> get_Midline(This,Units) )
    ( (This)->lpVtbl -> put_Midline(This,Units) )
    ( (This)->lpVtbl -> get_GuideData(This,pRecoGuide) )
    ( (This)->lpVtbl -> put_GuideData(This,recoGuide) )
EXTERN_C const IID IID_IInkWordList;
    typedef struct IInkWordListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkWordList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkWordList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkWordList * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkWordList * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkWordList * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkWordList * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkWordList * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *AddWord )(
            __RPC__in IInkWordList * This,
                       __RPC__in BSTR NewWord);
                                            HRESULT ( STDMETHODCALLTYPE *RemoveWord )(
            __RPC__in IInkWordList * This,
                       __RPC__in BSTR RemoveWord);
                                            HRESULT ( STDMETHODCALLTYPE *Merge )(
            __RPC__in IInkWordList * This,
                       __RPC__in_opt IInkWordList *MergeWordList);
        END_INTERFACE
    } IInkWordListVtbl;
    interface IInkWordList
    {
        CONST_VTBL struct IInkWordListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> AddWord(This,NewWord) )
    ( (This)->lpVtbl -> RemoveWord(This,RemoveWord) )
    ( (This)->lpVtbl -> Merge(This,MergeWordList) )
EXTERN_C const IID IID_IInkWordList2;
    typedef struct IInkWordList2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkWordList2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkWordList2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkWordList2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkWordList2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkWordList2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkWordList2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkWordList2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *AddWords )(
            __RPC__in IInkWordList2 * This,
                       __RPC__in BSTR NewWords);
        END_INTERFACE
    } IInkWordList2Vtbl;
    interface IInkWordList2
    {
        CONST_VTBL struct IInkWordList2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> AddWords(This,NewWords) )
EXTERN_C const CLSID CLSID_InkDisp;
class DECLSPEC_UUID("937C1A34-151D-4610-9CA6-A8CC9BDB5D83")
InkDisp;
EXTERN_C const CLSID CLSID_InkOverlay;
class DECLSPEC_UUID("65d00646-cde3-4a88-9163-6769f0f1a97d")
InkOverlay;
EXTERN_C const CLSID CLSID_InkPicture;
class DECLSPEC_UUID("04a1e553-fe36-4fde-865e-344194e69424")
InkPicture;
EXTERN_C const CLSID CLSID_InkCollector;
class DECLSPEC_UUID("43FB1553-AD74-4ee8-88E4-3E6DAAC915DB")
InkCollector;
EXTERN_C const CLSID CLSID_InkDrawingAttributes;
class DECLSPEC_UUID("D8BF32A2-05A5-44c3-B3AA-5E80AC7D2576")
InkDrawingAttributes;
EXTERN_C const CLSID CLSID_InkRectangle;
class DECLSPEC_UUID("43B07326-AAE0-4B62-A83D-5FD768B7353C")
InkRectangle;
EXTERN_C const CLSID CLSID_InkRenderer;
class DECLSPEC_UUID("9C1CC6E4-D7EB-4eeb-9091-15A7C8791ED9")
InkRenderer;
EXTERN_C const CLSID CLSID_InkTransform;
class DECLSPEC_UUID("E3D5D93C-1663-4A78-A1A7-22375DFEBAEE")
InkTransform;
EXTERN_C const CLSID CLSID_InkRecognizers;
class DECLSPEC_UUID("9FD4E808-F6E6-4e65-98D3-AA39054C1255")
InkRecognizers;
EXTERN_C const CLSID CLSID_InkRecognizerContext;
class DECLSPEC_UUID("AAC46A37-9229-4fc0-8CCE-4497569BF4D1")
InkRecognizerContext;
EXTERN_C const CLSID CLSID_InkRecognizerGuide;
class DECLSPEC_UUID("8770D941-A63A-4671-A375-2855A18EBA73")
InkRecognizerGuide;
EXTERN_C const CLSID CLSID_InkTablets;
class DECLSPEC_UUID("6E4FCB12-510A-4d40-9304-1DA10AE9147C")
InkTablets;
EXTERN_C const CLSID CLSID_InkWordList;
class DECLSPEC_UUID("9DE85094-F71F-44f1-8471-15A2FA76FCF3")
InkWordList;
EXTERN_C const CLSID CLSID_InkStrokes;
class DECLSPEC_UUID("48F491BC-240E-4860-B079-A1E94D3D2C86")
InkStrokes;
EXTERN_C const IID IID_IInk;
    typedef struct IInkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInk * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInk * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInk * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInk * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInk * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInk * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInk * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IInkVtbl;
    interface IInk
    {
        CONST_VTBL struct IInkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IInkLineInfo;
    typedef struct IInkLineInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkLineInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkLineInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkLineInfo * This);
                                        HRESULT ( STDMETHODCALLTYPE *SetFormat )(
            __RPC__in IInkLineInfo * This,
            __RPC__in INKMETRIC *pim);
                                        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            __RPC__in IInkLineInfo * This,
            __RPC__in INKMETRIC *pim);
                                        HRESULT ( STDMETHODCALLTYPE *GetInkExtent )(
            __RPC__in IInkLineInfo * This,
            __RPC__in INKMETRIC *pim,
            __RPC__in UINT *pnWidth);
                                        HRESULT ( STDMETHODCALLTYPE *GetCandidate )(
            __RPC__in IInkLineInfo * This,
            UINT nCandidateNum,
            __RPC__in LPWSTR pwcRecogWord,
            __RPC__in UINT *pcwcRecogWord,
            DWORD dwFlags);
                                        HRESULT ( STDMETHODCALLTYPE *SetCandidate )(
            __RPC__in IInkLineInfo * This,
            UINT nCandidateNum,
            __RPC__in LPWSTR strRecogWord);
                                        HRESULT ( STDMETHODCALLTYPE *Recognize )(
            __RPC__in IInkLineInfo * This);
        END_INTERFACE
    } IInkLineInfoVtbl;
    interface IInkLineInfo
    {
        CONST_VTBL struct IInkLineInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFormat(This,pim) )
    ( (This)->lpVtbl -> GetFormat(This,pim) )
    ( (This)->lpVtbl -> GetInkExtent(This,pim,pnWidth) )
    ( (This)->lpVtbl -> GetCandidate(This,nCandidateNum,pwcRecogWord,pcwcRecogWord,dwFlags) )
    ( (This)->lpVtbl -> SetCandidate(This,nCandidateNum,strRecogWord) )
    ( (This)->lpVtbl -> Recognize(This) )
EXTERN_C const IID IID_ISketchInk;
    typedef struct ISketchInkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISketchInk * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISketchInk * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISketchInk * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISketchInk * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISketchInk * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISketchInk * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISketchInk * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } ISketchInkVtbl;
    interface ISketchInk
    {
        CONST_VTBL struct ISketchInkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_Ink;
class DECLSPEC_UUID("13DE4A42-8D21-4C8E-BF9C-8F69CB068FCA")
Ink;
EXTERN_C const CLSID CLSID_SketchInk;
class DECLSPEC_UUID("F0291081-E87C-4E07-97DA-A0A03761E586")
SketchInk;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_msinkaut_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msinkaut_0000_0001_v0_0_s_ifspec;
}
