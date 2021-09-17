#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IRawElementProviderSimple IRawElementProviderSimple;
typedef interface IAccessibleEx IAccessibleEx;
typedef interface IRawElementProviderSimple2 IRawElementProviderSimple2;
typedef interface IRawElementProviderSimple3 IRawElementProviderSimple3;
typedef interface IRawElementProviderFragmentRoot IRawElementProviderFragmentRoot;
typedef interface IRawElementProviderFragment IRawElementProviderFragment;
typedef interface IRawElementProviderAdviseEvents IRawElementProviderAdviseEvents;
typedef interface IRawElementProviderHwndOverride IRawElementProviderHwndOverride;
typedef interface IProxyProviderWinEventSink IProxyProviderWinEventSink;
typedef interface IProxyProviderWinEventHandler IProxyProviderWinEventHandler;
typedef interface IRawElementProviderWindowlessSite IRawElementProviderWindowlessSite;
typedef interface IAccessibleHostingElementProviders IAccessibleHostingElementProviders;
typedef interface IRawElementProviderHostingAccessibles IRawElementProviderHostingAccessibles;
typedef interface IDockProvider IDockProvider;
typedef interface IExpandCollapseProvider IExpandCollapseProvider;
typedef interface IGridProvider IGridProvider;
typedef interface IGridItemProvider IGridItemProvider;
typedef interface IInvokeProvider IInvokeProvider;
typedef interface IMultipleViewProvider IMultipleViewProvider;
typedef interface IRangeValueProvider IRangeValueProvider;
typedef interface IScrollItemProvider IScrollItemProvider;
typedef interface ISelectionProvider ISelectionProvider;
typedef interface ISelectionProvider2 ISelectionProvider2;
typedef interface IScrollProvider IScrollProvider;
typedef interface ISelectionItemProvider ISelectionItemProvider;
typedef interface ISynchronizedInputProvider ISynchronizedInputProvider;
typedef interface ITableProvider ITableProvider;
typedef interface ITableItemProvider ITableItemProvider;
typedef interface IToggleProvider IToggleProvider;
typedef interface ITransformProvider ITransformProvider;
typedef interface IValueProvider IValueProvider;
typedef interface IWindowProvider IWindowProvider;
typedef interface ILegacyIAccessibleProvider ILegacyIAccessibleProvider;
typedef interface IItemContainerProvider IItemContainerProvider;
typedef interface IVirtualizedItemProvider IVirtualizedItemProvider;
typedef interface IObjectModelProvider IObjectModelProvider;
typedef interface IAnnotationProvider IAnnotationProvider;
typedef interface IStylesProvider IStylesProvider;
typedef interface ISpreadsheetProvider ISpreadsheetProvider;
typedef interface ISpreadsheetItemProvider ISpreadsheetItemProvider;
typedef interface ITransformProvider2 ITransformProvider2;
typedef interface IDragProvider IDragProvider;
typedef interface IDropTargetProvider IDropTargetProvider;
typedef interface ITextRangeProvider ITextRangeProvider;
typedef interface ITextProvider ITextProvider;
typedef interface ITextProvider2 ITextProvider2;
typedef interface ITextEditProvider ITextEditProvider;
typedef interface ITextRangeProvider2 ITextRangeProvider2;
typedef interface ITextChildProvider ITextChildProvider;
typedef interface ICustomNavigationProvider ICustomNavigationProvider;
typedef interface IUIAutomationPatternInstance IUIAutomationPatternInstance;
typedef interface IUIAutomationPatternHandler IUIAutomationPatternHandler;
typedef interface IUIAutomationRegistrar IUIAutomationRegistrar;
typedef class CUIAutomationRegistrar CUIAutomationRegistrar;
#include "oaidl.h"
#include "oleacc.h"
extern "C"{
enum NavigateDirection
    {
        NavigateDirection_Parent = 0,
        NavigateDirection_NextSibling = 1,
        NavigateDirection_PreviousSibling = 2,
        NavigateDirection_FirstChild = 3,
        NavigateDirection_LastChild = 4
    } ;
enum ProviderOptions
    {
        ProviderOptions_ClientSideProvider = 0x1,
        ProviderOptions_ServerSideProvider = 0x2,
        ProviderOptions_NonClientAreaProvider = 0x4,
        ProviderOptions_OverrideProvider = 0x8,
        ProviderOptions_ProviderOwnsSetFocus = 0x10,
        ProviderOptions_UseComThreading = 0x20,
        ProviderOptions_RefuseNonClientSupport = 0x40,
        ProviderOptions_HasNativeIAccessible = 0x80,
        ProviderOptions_UseClientCoordinates = 0x100
    } ;
DEFINE_ENUM_FLAG_OPERATORS(ProviderOptions)
enum StructureChangeType
    {
        StructureChangeType_ChildAdded = 0,
        StructureChangeType_ChildRemoved = ( StructureChangeType_ChildAdded + 1 ) ,
        StructureChangeType_ChildrenInvalidated = ( StructureChangeType_ChildRemoved + 1 ) ,
        StructureChangeType_ChildrenBulkAdded = ( StructureChangeType_ChildrenInvalidated + 1 ) ,
        StructureChangeType_ChildrenBulkRemoved = ( StructureChangeType_ChildrenBulkAdded + 1 ) ,
        StructureChangeType_ChildrenReordered = ( StructureChangeType_ChildrenBulkRemoved + 1 )
    } ;
enum TextEditChangeType
    {
        TextEditChangeType_None = 0,
        TextEditChangeType_AutoCorrect = 1,
        TextEditChangeType_Composition = 2,
        TextEditChangeType_CompositionFinalized = 3,
        TextEditChangeType_AutoComplete = 4
    } ;
enum OrientationType
    {
        OrientationType_None = 0,
        OrientationType_Horizontal = 1,
        OrientationType_Vertical = 2
    } ;
enum DockPosition
    {
        DockPosition_Top = 0,
        DockPosition_Left = 1,
        DockPosition_Bottom = 2,
        DockPosition_Right = 3,
        DockPosition_Fill = 4,
        DockPosition_None = 5
    } ;
enum ExpandCollapseState
    {
        ExpandCollapseState_Collapsed = 0,
        ExpandCollapseState_Expanded = 1,
        ExpandCollapseState_PartiallyExpanded = 2,
        ExpandCollapseState_LeafNode = 3
    } ;
enum ScrollAmount
    {
        ScrollAmount_LargeDecrement = 0,
        ScrollAmount_SmallDecrement = 1,
        ScrollAmount_NoAmount = 2,
        ScrollAmount_LargeIncrement = 3,
        ScrollAmount_SmallIncrement = 4
    } ;
enum RowOrColumnMajor
    {
        RowOrColumnMajor_RowMajor = 0,
        RowOrColumnMajor_ColumnMajor = 1,
        RowOrColumnMajor_Indeterminate = 2
    } ;
enum ToggleState
    {
        ToggleState_Off = 0,
        ToggleState_On = 1,
        ToggleState_Indeterminate = 2
    } ;
enum WindowVisualState
    {
        WindowVisualState_Normal = 0,
        WindowVisualState_Maximized = 1,
        WindowVisualState_Minimized = 2
    } ;
enum SynchronizedInputType
    {
        SynchronizedInputType_KeyUp = 0x1,
        SynchronizedInputType_KeyDown = 0x2,
        SynchronizedInputType_LeftMouseUp = 0x4,
        SynchronizedInputType_LeftMouseDown = 0x8,
        SynchronizedInputType_RightMouseUp = 0x10,
        SynchronizedInputType_RightMouseDown = 0x20
    } ;
DEFINE_ENUM_FLAG_OPERATORS(SynchronizedInputType)
enum WindowInteractionState
    {
        WindowInteractionState_Running = 0,
        WindowInteractionState_Closing = 1,
        WindowInteractionState_ReadyForUserInteraction = 2,
        WindowInteractionState_BlockedByModalWindow = 3,
        WindowInteractionState_NotResponding = 4
    } ;
enum SayAsInterpretAs
    {
        SayAsInterpretAs_None = 0,
        SayAsInterpretAs_Spell = 1,
        SayAsInterpretAs_Cardinal = 2,
        SayAsInterpretAs_Ordinal = 3,
        SayAsInterpretAs_Number = 4,
        SayAsInterpretAs_Date = 5,
        SayAsInterpretAs_Time = 6,
        SayAsInterpretAs_Telephone = 7,
        SayAsInterpretAs_Currency = 8,
        SayAsInterpretAs_Net = 9,
        SayAsInterpretAs_Url = 10,
        SayAsInterpretAs_Address = 11,
        SayAsInterpretAs_Alphanumeric = 12,
        SayAsInterpretAs_Name = 13,
        SayAsInterpretAs_Media = 14,
        SayAsInterpretAs_Date_MonthDayYear = 15,
        SayAsInterpretAs_Date_DayMonthYear = 16,
        SayAsInterpretAs_Date_YearMonthDay = 17,
        SayAsInterpretAs_Date_YearMonth = 18,
        SayAsInterpretAs_Date_MonthYear = 19,
        SayAsInterpretAs_Date_DayMonth = 20,
        SayAsInterpretAs_Date_MonthDay = 21,
        SayAsInterpretAs_Date_Year = 22,
        SayAsInterpretAs_Time_HoursMinutesSeconds12 = 23,
        SayAsInterpretAs_Time_HoursMinutes12 = 24,
        SayAsInterpretAs_Time_HoursMinutesSeconds24 = 25,
        SayAsInterpretAs_Time_HoursMinutes24 = 26
    } ;
enum TextUnit
    {
        TextUnit_Character = 0,
        TextUnit_Format = 1,
        TextUnit_Word = 2,
        TextUnit_Line = 3,
        TextUnit_Paragraph = 4,
        TextUnit_Page = 5,
        TextUnit_Document = 6
    } ;
enum TextPatternRangeEndpoint
    {
        TextPatternRangeEndpoint_Start = 0,
        TextPatternRangeEndpoint_End = 1
    } ;
enum SupportedTextSelection
    {
        SupportedTextSelection_None = 0,
        SupportedTextSelection_Single = 1,
        SupportedTextSelection_Multiple = 2
    } ;
enum LiveSetting
    {
        Off = 0,
        Polite = 1,
        Assertive = 2
    } ;
enum ActiveEnd
    {
        ActiveEnd_None = 0,
        ActiveEnd_Start = 1,
        ActiveEnd_End = 2
    } ;
enum CaretPosition
    {
        CaretPosition_Unknown = 0,
        CaretPosition_EndOfLine = 1,
        CaretPosition_BeginningOfLine = 2
    } ;
enum CaretBidiMode
    {
        CaretBidiMode_LTR = 0,
        CaretBidiMode_RTL = 1
    } ;
enum ZoomUnit
    {
        ZoomUnit_NoAmount = 0,
        ZoomUnit_LargeDecrement = 1,
        ZoomUnit_SmallDecrement = 2,
        ZoomUnit_LargeIncrement = 3,
        ZoomUnit_SmallIncrement = 4
    } ;
enum AnimationStyle
    {
        AnimationStyle_None = 0,
        AnimationStyle_LasVegasLights = 1,
        AnimationStyle_BlinkingBackground = 2,
        AnimationStyle_SparkleText = 3,
        AnimationStyle_MarchingBlackAnts = 4,
        AnimationStyle_MarchingRedAnts = 5,
        AnimationStyle_Shimmer = 6,
        AnimationStyle_Other = -1
    } ;
enum BulletStyle
    {
        BulletStyle_None = 0,
        BulletStyle_HollowRoundBullet = 1,
        BulletStyle_FilledRoundBullet = 2,
        BulletStyle_HollowSquareBullet = 3,
        BulletStyle_FilledSquareBullet = 4,
        BulletStyle_DashBullet = 5,
        BulletStyle_Other = -1
    } ;
enum CapStyle
    {
        CapStyle_None = 0,
        CapStyle_SmallCap = 1,
        CapStyle_AllCap = 2,
        CapStyle_AllPetiteCaps = 3,
        CapStyle_PetiteCaps = 4,
        CapStyle_Unicase = 5,
        CapStyle_Titling = 6,
        CapStyle_Other = -1
    } ;
enum FillType
    {
        FillType_None = 0,
        FillType_Color = 1,
        FillType_Gradient = 2,
        FillType_Picture = 3,
        FillType_Pattern = 4
    } ;
enum FlowDirections
    {
        FlowDirections_Default = 0,
        FlowDirections_RightToLeft = 0x1,
        FlowDirections_BottomToTop = 0x2,
        FlowDirections_Vertical = 0x4
    } ;
enum HorizontalTextAlignment
    {
        HorizontalTextAlignment_Left = 0,
        HorizontalTextAlignment_Centered = 1,
        HorizontalTextAlignment_Right = 2,
        HorizontalTextAlignment_Justified = 3
    } ;
enum OutlineStyles
    {
        OutlineStyles_None = 0,
        OutlineStyles_Outline = 1,
        OutlineStyles_Shadow = 2,
        OutlineStyles_Engraved = 4,
        OutlineStyles_Embossed = 8
    } ;
enum TextDecorationLineStyle
    {
        TextDecorationLineStyle_None = 0,
        TextDecorationLineStyle_Single = 1,
        TextDecorationLineStyle_WordsOnly = 2,
        TextDecorationLineStyle_Double = 3,
        TextDecorationLineStyle_Dot = 4,
        TextDecorationLineStyle_Dash = 5,
        TextDecorationLineStyle_DashDot = 6,
        TextDecorationLineStyle_DashDotDot = 7,
        TextDecorationLineStyle_Wavy = 8,
        TextDecorationLineStyle_ThickSingle = 9,
        TextDecorationLineStyle_DoubleWavy = 11,
        TextDecorationLineStyle_ThickWavy = 12,
        TextDecorationLineStyle_LongDash = 13,
        TextDecorationLineStyle_ThickDash = 14,
        TextDecorationLineStyle_ThickDashDot = 15,
        TextDecorationLineStyle_ThickDashDotDot = 16,
        TextDecorationLineStyle_ThickDot = 17,
        TextDecorationLineStyle_ThickLongDash = 18,
        TextDecorationLineStyle_Other = -1
    } ;
enum VisualEffects
    {
        VisualEffects_None = 0,
        VisualEffects_Shadow = ( 1 << 0 ) ,
        VisualEffects_Reflection = ( 1 << 1 ) ,
        VisualEffects_Glow = ( 1 << 2 ) ,
        VisualEffects_SoftEdges = ( 1 << 3 ) ,
        VisualEffects_Bevel = ( 1 << 4 )
    } ;
enum NotificationProcessing
    {
        NotificationProcessing_ImportantAll = 0,
        NotificationProcessing_ImportantMostRecent = 1,
        NotificationProcessing_All = 2,
        NotificationProcessing_MostRecent = 3,
        NotificationProcessing_CurrentThenMostRecent = 4
    } ;
enum NotificationKind
    {
        NotificationKind_ItemAdded = 0,
        NotificationKind_ItemRemoved = 1,
        NotificationKind_ActionCompleted = 2,
        NotificationKind_ActionAborted = 3,
        NotificationKind_Other = 4
    } ;
typedef int PROPERTYID;
typedef int PATTERNID;
typedef int EVENTID;
typedef int TEXTATTRIBUTEID;
typedef int CONTROLTYPEID;
typedef int LANDMARKTYPEID;
typedef int METADATAID;
typedef int HEADINGLEVELID;
struct UiaRect
    {
    double left;
    double top;
    double width;
    double height;
    } ;
struct UiaPoint
    {
    double x;
    double y;
    } ;
struct UiaChangeInfo
    {
    int uiaId;
    VARIANT payload;
    VARIANT extraInfo;
    } ;
extern RPC_IF_HANDLE __MIDL_itf_uiautomationcore_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_uiautomationcore_0000_0000_v0_0_s_ifspec;
enum UIAutomationType
    {
        UIAutomationType_Int = 0x1,
        UIAutomationType_Bool = 0x2,
        UIAutomationType_String = 0x3,
        UIAutomationType_Double = 0x4,
        UIAutomationType_Point = 0x5,
        UIAutomationType_Rect = 0x6,
        UIAutomationType_Element = 0x7,
        UIAutomationType_Array = 0x10000,
        UIAutomationType_Out = 0x20000,
        UIAutomationType_IntArray = ( UIAutomationType_Int | UIAutomationType_Array ) ,
        UIAutomationType_BoolArray = ( UIAutomationType_Bool | UIAutomationType_Array ) ,
        UIAutomationType_StringArray = ( UIAutomationType_String | UIAutomationType_Array ) ,
        UIAutomationType_DoubleArray = ( UIAutomationType_Double | UIAutomationType_Array ) ,
        UIAutomationType_PointArray = ( UIAutomationType_Point | UIAutomationType_Array ) ,
        UIAutomationType_RectArray = ( UIAutomationType_Rect | UIAutomationType_Array ) ,
        UIAutomationType_ElementArray = ( UIAutomationType_Element | UIAutomationType_Array ) ,
        UIAutomationType_OutInt = ( UIAutomationType_Int | UIAutomationType_Out ) ,
        UIAutomationType_OutBool = ( UIAutomationType_Bool | UIAutomationType_Out ) ,
        UIAutomationType_OutString = ( UIAutomationType_String | UIAutomationType_Out ) ,
        UIAutomationType_OutDouble = ( UIAutomationType_Double | UIAutomationType_Out ) ,
        UIAutomationType_OutPoint = ( UIAutomationType_Point | UIAutomationType_Out ) ,
        UIAutomationType_OutRect = ( UIAutomationType_Rect | UIAutomationType_Out ) ,
        UIAutomationType_OutElement = ( UIAutomationType_Element | UIAutomationType_Out ) ,
        UIAutomationType_OutIntArray = ( ( UIAutomationType_Int | UIAutomationType_Array ) | UIAutomationType_Out ) ,
        UIAutomationType_OutBoolArray = ( ( UIAutomationType_Bool | UIAutomationType_Array ) | UIAutomationType_Out ) ,
        UIAutomationType_OutStringArray = ( ( UIAutomationType_String | UIAutomationType_Array ) | UIAutomationType_Out ) ,
        UIAutomationType_OutDoubleArray = ( ( UIAutomationType_Double | UIAutomationType_Array ) | UIAutomationType_Out ) ,
        UIAutomationType_OutPointArray = ( ( UIAutomationType_Point | UIAutomationType_Array ) | UIAutomationType_Out ) ,
        UIAutomationType_OutRectArray = ( ( UIAutomationType_Rect | UIAutomationType_Array ) | UIAutomationType_Out ) ,
        UIAutomationType_OutElementArray = ( ( UIAutomationType_Element | UIAutomationType_Array ) | UIAutomationType_Out )
    } ;
DEFINE_ENUM_FLAG_OPERATORS(UIAutomationType)
struct UIAutomationParameter
    {
    enum UIAutomationType type;
    void *pData;
    } ;
struct UIAutomationPropertyInfo
    {
    GUID guid;
    LPCWSTR pProgrammaticName;
    enum UIAutomationType type;
    } ;
struct UIAutomationEventInfo
    {
    GUID guid;
    LPCWSTR pProgrammaticName;
    } ;
struct UIAutomationMethodInfo
    {
    LPCWSTR pProgrammaticName;
    BOOL doSetFocus;
    UINT cInParameters;
    UINT cOutParameters;
                    enum UIAutomationType *pParameterTypes;
                    LPCWSTR *pParameterNames;
    } ;
struct UIAutomationPatternInfo
    {
    GUID guid;
    LPCWSTR pProgrammaticName;
    GUID providerInterfaceId;
    GUID clientInterfaceId;
    UINT cProperties;
                    struct UIAutomationPropertyInfo *pProperties;
    UINT cMethods;
                    struct UIAutomationMethodInfo *pMethods;
    UINT cEvents;
                    struct UIAutomationEventInfo *pEvents;
    IUIAutomationPatternHandler *pPatternHandler;
    } ;
EXTERN_C const IID LIBID_UIA;
const double UIA_ScrollPatternNoScroll = -1;
EXTERN_C const IID IID_IRawElementProviderSimple;
    typedef struct IRawElementProviderSimpleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRawElementProviderSimple * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRawElementProviderSimple * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRawElementProviderSimple * This);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderOptions )(
            __RPC__in IRawElementProviderSimple * This,
                                __RPC__out enum ProviderOptions *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetPatternProvider )(
            __RPC__in IRawElementProviderSimple * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyValue )(
            __RPC__in IRawElementProviderSimple * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_HostRawElementProvider )(
            __RPC__in IRawElementProviderSimple * This,
                                __RPC__deref_out_opt IRawElementProviderSimple **pRetVal);
        END_INTERFACE
    } IRawElementProviderSimpleVtbl;
    interface IRawElementProviderSimple
    {
        CONST_VTBL struct IRawElementProviderSimpleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_ProviderOptions(This,pRetVal) )
    ( (This)->lpVtbl -> GetPatternProvider(This,patternId,pRetVal) )
    ( (This)->lpVtbl -> GetPropertyValue(This,propertyId,pRetVal) )
    ( (This)->lpVtbl -> get_HostRawElementProvider(This,pRetVal) )
EXTERN_C const IID IID_IAccessibleEx;
    typedef struct IAccessibleExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAccessibleEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAccessibleEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAccessibleEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetObjectForChild )(
            __RPC__in IAccessibleEx * This,
                       long idChild,
                                __RPC__deref_out_opt IAccessibleEx **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetIAccessiblePair )(
            __RPC__in IAccessibleEx * This,
                        __RPC__deref_out_opt IAccessible **ppAcc,
                        __RPC__out long *pidChild);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )(
            __RPC__in IAccessibleEx * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *ConvertReturnedElement )(
            __RPC__in IAccessibleEx * This,
                       __RPC__in_opt IRawElementProviderSimple *pIn,
                        __RPC__deref_out_opt IAccessibleEx **ppRetValOut);
        END_INTERFACE
    } IAccessibleExVtbl;
    interface IAccessibleEx
    {
        CONST_VTBL struct IAccessibleExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetObjectForChild(This,idChild,pRetVal) )
    ( (This)->lpVtbl -> GetIAccessiblePair(This,ppAcc,pidChild) )
    ( (This)->lpVtbl -> GetRuntimeId(This,pRetVal) )
    ( (This)->lpVtbl -> ConvertReturnedElement(This,pIn,ppRetValOut) )
EXTERN_C const IID IID_IRawElementProviderSimple2;
    typedef struct IRawElementProviderSimple2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRawElementProviderSimple2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRawElementProviderSimple2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRawElementProviderSimple2 * This);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderOptions )(
            __RPC__in IRawElementProviderSimple2 * This,
                                __RPC__out enum ProviderOptions *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetPatternProvider )(
            __RPC__in IRawElementProviderSimple2 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyValue )(
            __RPC__in IRawElementProviderSimple2 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_HostRawElementProvider )(
            __RPC__in IRawElementProviderSimple2 * This,
                                __RPC__deref_out_opt IRawElementProviderSimple **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )(
            __RPC__in IRawElementProviderSimple2 * This);
        END_INTERFACE
    } IRawElementProviderSimple2Vtbl;
    interface IRawElementProviderSimple2
    {
        CONST_VTBL struct IRawElementProviderSimple2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_ProviderOptions(This,pRetVal) )
    ( (This)->lpVtbl -> GetPatternProvider(This,patternId,pRetVal) )
    ( (This)->lpVtbl -> GetPropertyValue(This,propertyId,pRetVal) )
    ( (This)->lpVtbl -> get_HostRawElementProvider(This,pRetVal) )
    ( (This)->lpVtbl -> ShowContextMenu(This) )
EXTERN_C const IID IID_IRawElementProviderSimple3;
    typedef struct IRawElementProviderSimple3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRawElementProviderSimple3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRawElementProviderSimple3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRawElementProviderSimple3 * This);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderOptions )(
            __RPC__in IRawElementProviderSimple3 * This,
                                __RPC__out enum ProviderOptions *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetPatternProvider )(
            __RPC__in IRawElementProviderSimple3 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyValue )(
            __RPC__in IRawElementProviderSimple3 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_HostRawElementProvider )(
            __RPC__in IRawElementProviderSimple3 * This,
                                __RPC__deref_out_opt IRawElementProviderSimple **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )(
            __RPC__in IRawElementProviderSimple3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataValue )(
            __RPC__in IRawElementProviderSimple3 * This,
                       int targetId,
                       METADATAID metadataId,
                                __RPC__out VARIANT *returnVal);
        END_INTERFACE
    } IRawElementProviderSimple3Vtbl;
    interface IRawElementProviderSimple3
    {
        CONST_VTBL struct IRawElementProviderSimple3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_ProviderOptions(This,pRetVal) )
    ( (This)->lpVtbl -> GetPatternProvider(This,patternId,pRetVal) )
    ( (This)->lpVtbl -> GetPropertyValue(This,propertyId,pRetVal) )
    ( (This)->lpVtbl -> get_HostRawElementProvider(This,pRetVal) )
    ( (This)->lpVtbl -> ShowContextMenu(This) )
    ( (This)->lpVtbl -> GetMetadataValue(This,targetId,metadataId,returnVal) )
EXTERN_C const IID IID_IRawElementProviderFragmentRoot;
    typedef struct IRawElementProviderFragmentRootVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRawElementProviderFragmentRoot * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRawElementProviderFragmentRoot * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRawElementProviderFragmentRoot * This);
        HRESULT ( STDMETHODCALLTYPE *ElementProviderFromPoint )(
            __RPC__in IRawElementProviderFragmentRoot * This,
                       double x,
                       double y,
                                __RPC__deref_out_opt IRawElementProviderFragment **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetFocus )(
            __RPC__in IRawElementProviderFragmentRoot * This,
                                __RPC__deref_out_opt IRawElementProviderFragment **pRetVal);
        END_INTERFACE
    } IRawElementProviderFragmentRootVtbl;
    interface IRawElementProviderFragmentRoot
    {
        CONST_VTBL struct IRawElementProviderFragmentRootVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ElementProviderFromPoint(This,x,y,pRetVal) )
    ( (This)->lpVtbl -> GetFocus(This,pRetVal) )
EXTERN_C const IID IID_IRawElementProviderFragment;
    typedef struct IRawElementProviderFragmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRawElementProviderFragment * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRawElementProviderFragment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRawElementProviderFragment * This);
        HRESULT ( STDMETHODCALLTYPE *Navigate )(
            __RPC__in IRawElementProviderFragment * This,
                       enum NavigateDirection direction,
                                __RPC__deref_out_opt IRawElementProviderFragment **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )(
            __RPC__in IRawElementProviderFragment * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *get_BoundingRectangle )(
            __RPC__in IRawElementProviderFragment * This,
                                __RPC__out struct UiaRect *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetEmbeddedFragmentRoots )(
            __RPC__in IRawElementProviderFragment * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *SetFocus )(
            __RPC__in IRawElementProviderFragment * This);
                        HRESULT ( STDMETHODCALLTYPE *get_FragmentRoot )(
            __RPC__in IRawElementProviderFragment * This,
                                __RPC__deref_out_opt IRawElementProviderFragmentRoot **pRetVal);
        END_INTERFACE
    } IRawElementProviderFragmentVtbl;
    interface IRawElementProviderFragment
    {
        CONST_VTBL struct IRawElementProviderFragmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Navigate(This,direction,pRetVal) )
    ( (This)->lpVtbl -> GetRuntimeId(This,pRetVal) )
    ( (This)->lpVtbl -> get_BoundingRectangle(This,pRetVal) )
    ( (This)->lpVtbl -> GetEmbeddedFragmentRoots(This,pRetVal) )
    ( (This)->lpVtbl -> SetFocus(This) )
    ( (This)->lpVtbl -> get_FragmentRoot(This,pRetVal) )
EXTERN_C const IID IID_IRawElementProviderAdviseEvents;
    typedef struct IRawElementProviderAdviseEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRawElementProviderAdviseEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRawElementProviderAdviseEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRawElementProviderAdviseEvents * This);
        HRESULT ( STDMETHODCALLTYPE *AdviseEventAdded )(
            __RPC__in IRawElementProviderAdviseEvents * This,
                       EVENTID eventId,
                       __RPC__in SAFEARRAY * propertyIDs);
        HRESULT ( STDMETHODCALLTYPE *AdviseEventRemoved )(
            __RPC__in IRawElementProviderAdviseEvents * This,
                       EVENTID eventId,
                       __RPC__in SAFEARRAY * propertyIDs);
        END_INTERFACE
    } IRawElementProviderAdviseEventsVtbl;
    interface IRawElementProviderAdviseEvents
    {
        CONST_VTBL struct IRawElementProviderAdviseEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AdviseEventAdded(This,eventId,propertyIDs) )
    ( (This)->lpVtbl -> AdviseEventRemoved(This,eventId,propertyIDs) )
EXTERN_C const IID IID_IRawElementProviderHwndOverride;
    typedef struct IRawElementProviderHwndOverrideVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRawElementProviderHwndOverride * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRawElementProviderHwndOverride * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRawElementProviderHwndOverride * This);
        HRESULT ( STDMETHODCALLTYPE *GetOverrideProviderForHwnd )(
            __RPC__in IRawElementProviderHwndOverride * This,
                       __RPC__in HWND hwnd,
                                __RPC__deref_out_opt IRawElementProviderSimple **pRetVal);
        END_INTERFACE
    } IRawElementProviderHwndOverrideVtbl;
    interface IRawElementProviderHwndOverride
    {
        CONST_VTBL struct IRawElementProviderHwndOverrideVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOverrideProviderForHwnd(This,hwnd,pRetVal) )
EXTERN_C const IID IID_IProxyProviderWinEventSink;
    typedef struct IProxyProviderWinEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProxyProviderWinEventSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProxyProviderWinEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProxyProviderWinEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *AddAutomationPropertyChangedEvent )(
            __RPC__in IProxyProviderWinEventSink * This,
                       __RPC__in_opt IRawElementProviderSimple *pProvider,
                       PROPERTYID id,
                       VARIANT newValue);
        HRESULT ( STDMETHODCALLTYPE *AddAutomationEvent )(
            __RPC__in IProxyProviderWinEventSink * This,
                       __RPC__in_opt IRawElementProviderSimple *pProvider,
                       EVENTID id);
        HRESULT ( STDMETHODCALLTYPE *AddStructureChangedEvent )(
            __RPC__in IProxyProviderWinEventSink * This,
                       __RPC__in_opt IRawElementProviderSimple *pProvider,
                       enum StructureChangeType structureChangeType,
                       __RPC__in SAFEARRAY * runtimeId);
        END_INTERFACE
    } IProxyProviderWinEventSinkVtbl;
    interface IProxyProviderWinEventSink
    {
        CONST_VTBL struct IProxyProviderWinEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddAutomationPropertyChangedEvent(This,pProvider,id,newValue) )
    ( (This)->lpVtbl -> AddAutomationEvent(This,pProvider,id) )
    ( (This)->lpVtbl -> AddStructureChangedEvent(This,pProvider,structureChangeType,runtimeId) )
EXTERN_C const IID IID_IProxyProviderWinEventHandler;
    typedef struct IProxyProviderWinEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProxyProviderWinEventHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProxyProviderWinEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProxyProviderWinEventHandler * This);
        HRESULT ( STDMETHODCALLTYPE *RespondToWinEvent )(
            __RPC__in IProxyProviderWinEventHandler * This,
                       DWORD idWinEvent,
                       __RPC__in HWND hwnd,
                       LONG idObject,
                       LONG idChild,
                       __RPC__in_opt IProxyProviderWinEventSink *pSink);
        END_INTERFACE
    } IProxyProviderWinEventHandlerVtbl;
    interface IProxyProviderWinEventHandler
    {
        CONST_VTBL struct IProxyProviderWinEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RespondToWinEvent(This,idWinEvent,hwnd,idObject,idChild,pSink) )
EXTERN_C const IID IID_IRawElementProviderWindowlessSite;
    typedef struct IRawElementProviderWindowlessSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRawElementProviderWindowlessSite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRawElementProviderWindowlessSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRawElementProviderWindowlessSite * This);
        HRESULT ( STDMETHODCALLTYPE *GetAdjacentFragment )(
            __RPC__in IRawElementProviderWindowlessSite * This,
                       enum NavigateDirection direction,
                                __RPC__deref_out_opt IRawElementProviderFragment **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeIdPrefix )(
            __RPC__in IRawElementProviderWindowlessSite * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        END_INTERFACE
    } IRawElementProviderWindowlessSiteVtbl;
    interface IRawElementProviderWindowlessSite
    {
        CONST_VTBL struct IRawElementProviderWindowlessSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAdjacentFragment(This,direction,ppParent) )
    ( (This)->lpVtbl -> GetRuntimeIdPrefix(This,pRetVal) )
EXTERN_C const IID IID_IAccessibleHostingElementProviders;
    typedef struct IAccessibleHostingElementProvidersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAccessibleHostingElementProviders * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAccessibleHostingElementProviders * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAccessibleHostingElementProviders * This);
        HRESULT ( STDMETHODCALLTYPE *GetEmbeddedFragmentRoots )(
            __RPC__in IAccessibleHostingElementProviders * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetObjectIdForProvider )(
            __RPC__in IAccessibleHostingElementProviders * This,
                       __RPC__in_opt IRawElementProviderSimple *pProvider,
                        __RPC__out long *pidObject);
        END_INTERFACE
    } IAccessibleHostingElementProvidersVtbl;
    interface IAccessibleHostingElementProviders
    {
        CONST_VTBL struct IAccessibleHostingElementProvidersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEmbeddedFragmentRoots(This,pRetVal) )
    ( (This)->lpVtbl -> GetObjectIdForProvider(This,pProvider,pidObject) )
EXTERN_C const IID IID_IRawElementProviderHostingAccessibles;
    typedef struct IRawElementProviderHostingAccessiblesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRawElementProviderHostingAccessibles * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRawElementProviderHostingAccessibles * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRawElementProviderHostingAccessibles * This);
        HRESULT ( STDMETHODCALLTYPE *GetEmbeddedAccessibles )(
            __RPC__in IRawElementProviderHostingAccessibles * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        END_INTERFACE
    } IRawElementProviderHostingAccessiblesVtbl;
    interface IRawElementProviderHostingAccessibles
    {
        CONST_VTBL struct IRawElementProviderHostingAccessiblesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEmbeddedAccessibles(This,pRetVal) )
EXTERN_C const IID IID_IDockProvider;
    typedef struct IDockProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDockProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDockProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDockProvider * This);
        HRESULT ( STDMETHODCALLTYPE *SetDockPosition )(
            __RPC__in IDockProvider * This,
                       enum DockPosition dockPosition);
                        HRESULT ( STDMETHODCALLTYPE *get_DockPosition )(
            __RPC__in IDockProvider * This,
                                __RPC__out enum DockPosition *pRetVal);
        END_INTERFACE
    } IDockProviderVtbl;
    interface IDockProvider
    {
        CONST_VTBL struct IDockProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDockPosition(This,dockPosition) )
    ( (This)->lpVtbl -> get_DockPosition(This,pRetVal) )
EXTERN_C const IID IID_IExpandCollapseProvider;
    typedef struct IExpandCollapseProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IExpandCollapseProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IExpandCollapseProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IExpandCollapseProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Expand )(
            __RPC__in IExpandCollapseProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Collapse )(
            __RPC__in IExpandCollapseProvider * This);
                        HRESULT ( STDMETHODCALLTYPE *get_ExpandCollapseState )(
            __RPC__in IExpandCollapseProvider * This,
                                __RPC__out enum ExpandCollapseState *pRetVal);
        END_INTERFACE
    } IExpandCollapseProviderVtbl;
    interface IExpandCollapseProvider
    {
        CONST_VTBL struct IExpandCollapseProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Expand(This) )
    ( (This)->lpVtbl -> Collapse(This) )
    ( (This)->lpVtbl -> get_ExpandCollapseState(This,pRetVal) )
EXTERN_C const IID IID_IGridProvider;
    typedef struct IGridProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGridProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGridProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGridProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IGridProvider * This,
                       int row,
                       int column,
                                __RPC__deref_out_opt IRawElementProviderSimple **pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_RowCount )(
            __RPC__in IGridProvider * This,
                                __RPC__out int *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_ColumnCount )(
            __RPC__in IGridProvider * This,
                                __RPC__out int *pRetVal);
        END_INTERFACE
    } IGridProviderVtbl;
    interface IGridProvider
    {
        CONST_VTBL struct IGridProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItem(This,row,column,pRetVal) )
    ( (This)->lpVtbl -> get_RowCount(This,pRetVal) )
    ( (This)->lpVtbl -> get_ColumnCount(This,pRetVal) )
EXTERN_C const IID IID_IGridItemProvider;
    typedef struct IGridItemProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGridItemProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGridItemProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGridItemProvider * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Row )(
            __RPC__in IGridItemProvider * This,
                                __RPC__out int *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_Column )(
            __RPC__in IGridItemProvider * This,
                                __RPC__out int *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_RowSpan )(
            __RPC__in IGridItemProvider * This,
                                __RPC__out int *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_ColumnSpan )(
            __RPC__in IGridItemProvider * This,
                                __RPC__out int *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_ContainingGrid )(
            __RPC__in IGridItemProvider * This,
                                __RPC__deref_out_opt IRawElementProviderSimple **pRetVal);
        END_INTERFACE
    } IGridItemProviderVtbl;
    interface IGridItemProvider
    {
        CONST_VTBL struct IGridItemProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Row(This,pRetVal) )
    ( (This)->lpVtbl -> get_Column(This,pRetVal) )
    ( (This)->lpVtbl -> get_RowSpan(This,pRetVal) )
    ( (This)->lpVtbl -> get_ColumnSpan(This,pRetVal) )
    ( (This)->lpVtbl -> get_ContainingGrid(This,pRetVal) )
EXTERN_C const IID IID_IInvokeProvider;
    typedef struct IInvokeProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInvokeProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInvokeProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInvokeProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Invoke )(
            __RPC__in IInvokeProvider * This);
        END_INTERFACE
    } IInvokeProviderVtbl;
    interface IInvokeProvider
    {
        CONST_VTBL struct IInvokeProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This) )
EXTERN_C const IID IID_IMultipleViewProvider;
    typedef struct IMultipleViewProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMultipleViewProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMultipleViewProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMultipleViewProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetViewName )(
            __RPC__in IMultipleViewProvider * This,
                       int viewId,
                                __RPC__deref_out_opt BSTR *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentView )(
            __RPC__in IMultipleViewProvider * This,
                       int viewId);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentView )(
            __RPC__in IMultipleViewProvider * This,
                                __RPC__out int *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedViews )(
            __RPC__in IMultipleViewProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        END_INTERFACE
    } IMultipleViewProviderVtbl;
    interface IMultipleViewProvider
    {
        CONST_VTBL struct IMultipleViewProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetViewName(This,viewId,pRetVal) )
    ( (This)->lpVtbl -> SetCurrentView(This,viewId) )
    ( (This)->lpVtbl -> get_CurrentView(This,pRetVal) )
    ( (This)->lpVtbl -> GetSupportedViews(This,pRetVal) )
EXTERN_C const IID IID_IRangeValueProvider;
    typedef struct IRangeValueProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRangeValueProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRangeValueProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRangeValueProvider * This);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in IRangeValueProvider * This,
                       double val);
                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IRangeValueProvider * This,
                                __RPC__out double *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )(
            __RPC__in IRangeValueProvider * This,
                                __RPC__out BOOL *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_Maximum )(
            __RPC__in IRangeValueProvider * This,
                                __RPC__out double *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_Minimum )(
            __RPC__in IRangeValueProvider * This,
                                __RPC__out double *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_LargeChange )(
            __RPC__in IRangeValueProvider * This,
                                __RPC__out double *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_SmallChange )(
            __RPC__in IRangeValueProvider * This,
                                __RPC__out double *pRetVal);
        END_INTERFACE
    } IRangeValueProviderVtbl;
    interface IRangeValueProvider
    {
        CONST_VTBL struct IRangeValueProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetValue(This,val) )
    ( (This)->lpVtbl -> get_Value(This,pRetVal) )
    ( (This)->lpVtbl -> get_IsReadOnly(This,pRetVal) )
    ( (This)->lpVtbl -> get_Maximum(This,pRetVal) )
    ( (This)->lpVtbl -> get_Minimum(This,pRetVal) )
    ( (This)->lpVtbl -> get_LargeChange(This,pRetVal) )
    ( (This)->lpVtbl -> get_SmallChange(This,pRetVal) )
EXTERN_C const IID IID_IScrollItemProvider;
    typedef struct IScrollItemProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IScrollItemProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IScrollItemProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IScrollItemProvider * This);
        HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )(
            __RPC__in IScrollItemProvider * This);
        END_INTERFACE
    } IScrollItemProviderVtbl;
    interface IScrollItemProvider
    {
        CONST_VTBL struct IScrollItemProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ScrollIntoView(This) )
EXTERN_C const IID IID_ISelectionProvider;
    typedef struct ISelectionProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISelectionProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISelectionProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISelectionProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            __RPC__in ISelectionProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CanSelectMultiple )(
            __RPC__in ISelectionProvider * This,
                                __RPC__out BOOL *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_IsSelectionRequired )(
            __RPC__in ISelectionProvider * This,
                                __RPC__out BOOL *pRetVal);
        END_INTERFACE
    } ISelectionProviderVtbl;
    interface ISelectionProvider
    {
        CONST_VTBL struct ISelectionProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSelection(This,pRetVal) )
    ( (This)->lpVtbl -> get_CanSelectMultiple(This,pRetVal) )
    ( (This)->lpVtbl -> get_IsSelectionRequired(This,pRetVal) )
EXTERN_C const IID IID_ISelectionProvider2;
    typedef struct ISelectionProvider2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISelectionProvider2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISelectionProvider2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISelectionProvider2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            __RPC__in ISelectionProvider2 * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CanSelectMultiple )(
            __RPC__in ISelectionProvider2 * This,
                                __RPC__out BOOL *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_IsSelectionRequired )(
            __RPC__in ISelectionProvider2 * This,
                                __RPC__out BOOL *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_FirstSelectedItem )(
            __RPC__in ISelectionProvider2 * This,
                                __RPC__deref_out_opt IRawElementProviderSimple **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_LastSelectedItem )(
            __RPC__in ISelectionProvider2 * This,
                                __RPC__deref_out_opt IRawElementProviderSimple **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentSelectedItem )(
            __RPC__in ISelectionProvider2 * This,
                                __RPC__deref_out_opt IRawElementProviderSimple **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_ItemCount )(
            __RPC__in ISelectionProvider2 * This,
                                __RPC__out int *retVal);
        END_INTERFACE
    } ISelectionProvider2Vtbl;
    interface ISelectionProvider2
    {
        CONST_VTBL struct ISelectionProvider2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSelection(This,pRetVal) )
    ( (This)->lpVtbl -> get_CanSelectMultiple(This,pRetVal) )
    ( (This)->lpVtbl -> get_IsSelectionRequired(This,pRetVal) )
    ( (This)->lpVtbl -> get_FirstSelectedItem(This,retVal) )
    ( (This)->lpVtbl -> get_LastSelectedItem(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentSelectedItem(This,retVal) )
    ( (This)->lpVtbl -> get_ItemCount(This,retVal) )
EXTERN_C const IID IID_IScrollProvider;
    typedef struct IScrollProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IScrollProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IScrollProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IScrollProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Scroll )(
            __RPC__in IScrollProvider * This,
                       enum ScrollAmount horizontalAmount,
                       enum ScrollAmount verticalAmount);
        HRESULT ( STDMETHODCALLTYPE *SetScrollPercent )(
            __RPC__in IScrollProvider * This,
                       double horizontalPercent,
                       double verticalPercent);
                        HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollPercent )(
            __RPC__in IScrollProvider * This,
                                __RPC__out double *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollPercent )(
            __RPC__in IScrollProvider * This,
                                __RPC__out double *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_HorizontalViewSize )(
            __RPC__in IScrollProvider * This,
                                __RPC__out double *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_VerticalViewSize )(
            __RPC__in IScrollProvider * This,
                                __RPC__out double *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_HorizontallyScrollable )(
            __RPC__in IScrollProvider * This,
                                __RPC__out BOOL *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_VerticallyScrollable )(
            __RPC__in IScrollProvider * This,
                                __RPC__out BOOL *pRetVal);
        END_INTERFACE
    } IScrollProviderVtbl;
    interface IScrollProvider
    {
        CONST_VTBL struct IScrollProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Scroll(This,horizontalAmount,verticalAmount) )
    ( (This)->lpVtbl -> SetScrollPercent(This,horizontalPercent,verticalPercent) )
    ( (This)->lpVtbl -> get_HorizontalScrollPercent(This,pRetVal) )
    ( (This)->lpVtbl -> get_VerticalScrollPercent(This,pRetVal) )
    ( (This)->lpVtbl -> get_HorizontalViewSize(This,pRetVal) )
    ( (This)->lpVtbl -> get_VerticalViewSize(This,pRetVal) )
    ( (This)->lpVtbl -> get_HorizontallyScrollable(This,pRetVal) )
    ( (This)->lpVtbl -> get_VerticallyScrollable(This,pRetVal) )
EXTERN_C const IID IID_ISelectionItemProvider;
    typedef struct ISelectionItemProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISelectionItemProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISelectionItemProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISelectionItemProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Select )(
            __RPC__in ISelectionItemProvider * This);
        HRESULT ( STDMETHODCALLTYPE *AddToSelection )(
            __RPC__in ISelectionItemProvider * This);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )(
            __RPC__in ISelectionItemProvider * This);
                        HRESULT ( STDMETHODCALLTYPE *get_IsSelected )(
            __RPC__in ISelectionItemProvider * This,
                                __RPC__out BOOL *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_SelectionContainer )(
            __RPC__in ISelectionItemProvider * This,
                                __RPC__deref_out_opt IRawElementProviderSimple **pRetVal);
        END_INTERFACE
    } ISelectionItemProviderVtbl;
    interface ISelectionItemProvider
    {
        CONST_VTBL struct ISelectionItemProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Select(This) )
    ( (This)->lpVtbl -> AddToSelection(This) )
    ( (This)->lpVtbl -> RemoveFromSelection(This) )
    ( (This)->lpVtbl -> get_IsSelected(This,pRetVal) )
    ( (This)->lpVtbl -> get_SelectionContainer(This,pRetVal) )
EXTERN_C const IID IID_ISynchronizedInputProvider;
    typedef struct ISynchronizedInputProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISynchronizedInputProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISynchronizedInputProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISynchronizedInputProvider * This);
        HRESULT ( STDMETHODCALLTYPE *StartListening )(
            __RPC__in ISynchronizedInputProvider * This,
                       enum SynchronizedInputType inputType);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in ISynchronizedInputProvider * This);
        END_INTERFACE
    } ISynchronizedInputProviderVtbl;
    interface ISynchronizedInputProvider
    {
        CONST_VTBL struct ISynchronizedInputProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartListening(This,inputType) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const IID IID_ITableProvider;
    typedef struct ITableProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITableProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITableProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITableProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetRowHeaders )(
            __RPC__in ITableProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetColumnHeaders )(
            __RPC__in ITableProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_RowOrColumnMajor )(
            __RPC__in ITableProvider * This,
                                __RPC__out enum RowOrColumnMajor *pRetVal);
        END_INTERFACE
    } ITableProviderVtbl;
    interface ITableProvider
    {
        CONST_VTBL struct ITableProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRowHeaders(This,pRetVal) )
    ( (This)->lpVtbl -> GetColumnHeaders(This,pRetVal) )
    ( (This)->lpVtbl -> get_RowOrColumnMajor(This,pRetVal) )
EXTERN_C const IID IID_ITableItemProvider;
    typedef struct ITableItemProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITableItemProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITableItemProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITableItemProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetRowHeaderItems )(
            __RPC__in ITableItemProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetColumnHeaderItems )(
            __RPC__in ITableItemProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        END_INTERFACE
    } ITableItemProviderVtbl;
    interface ITableItemProvider
    {
        CONST_VTBL struct ITableItemProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRowHeaderItems(This,pRetVal) )
    ( (This)->lpVtbl -> GetColumnHeaderItems(This,pRetVal) )
EXTERN_C const IID IID_IToggleProvider;
    typedef struct IToggleProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IToggleProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IToggleProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IToggleProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Toggle )(
            __RPC__in IToggleProvider * This);
                        HRESULT ( STDMETHODCALLTYPE *get_ToggleState )(
            __RPC__in IToggleProvider * This,
                                __RPC__out enum ToggleState *pRetVal);
        END_INTERFACE
    } IToggleProviderVtbl;
    interface IToggleProvider
    {
        CONST_VTBL struct IToggleProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Toggle(This) )
    ( (This)->lpVtbl -> get_ToggleState(This,pRetVal) )
EXTERN_C const IID IID_ITransformProvider;
    typedef struct ITransformProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransformProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransformProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransformProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in ITransformProvider * This,
                       double x,
                       double y);
        HRESULT ( STDMETHODCALLTYPE *Resize )(
            __RPC__in ITransformProvider * This,
                       double width,
                       double height);
        HRESULT ( STDMETHODCALLTYPE *Rotate )(
            __RPC__in ITransformProvider * This,
                       double degrees);
                        HRESULT ( STDMETHODCALLTYPE *get_CanMove )(
            __RPC__in ITransformProvider * This,
                                __RPC__out BOOL *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CanResize )(
            __RPC__in ITransformProvider * This,
                                __RPC__out BOOL *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CanRotate )(
            __RPC__in ITransformProvider * This,
                                __RPC__out BOOL *pRetVal);
        END_INTERFACE
    } ITransformProviderVtbl;
    interface ITransformProvider
    {
        CONST_VTBL struct ITransformProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Move(This,x,y) )
    ( (This)->lpVtbl -> Resize(This,width,height) )
    ( (This)->lpVtbl -> Rotate(This,degrees) )
    ( (This)->lpVtbl -> get_CanMove(This,pRetVal) )
    ( (This)->lpVtbl -> get_CanResize(This,pRetVal) )
    ( (This)->lpVtbl -> get_CanRotate(This,pRetVal) )
EXTERN_C const IID IID_IValueProvider;
    typedef struct IValueProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IValueProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IValueProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IValueProvider * This);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in IValueProvider * This,
                       __RPC__in LPCWSTR val);
                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IValueProvider * This,
                                __RPC__deref_out_opt BSTR *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )(
            __RPC__in IValueProvider * This,
                                __RPC__out BOOL *pRetVal);
        END_INTERFACE
    } IValueProviderVtbl;
    interface IValueProvider
    {
        CONST_VTBL struct IValueProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetValue(This,val) )
    ( (This)->lpVtbl -> get_Value(This,pRetVal) )
    ( (This)->lpVtbl -> get_IsReadOnly(This,pRetVal) )
EXTERN_C const IID IID_IWindowProvider;
    typedef struct IWindowProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWindowProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWindowProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWindowProvider * This);
        HRESULT ( STDMETHODCALLTYPE *SetVisualState )(
            __RPC__in IWindowProvider * This,
                       enum WindowVisualState state);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IWindowProvider * This);
        HRESULT ( STDMETHODCALLTYPE *WaitForInputIdle )(
            __RPC__in IWindowProvider * This,
                       int milliseconds,
                                __RPC__out BOOL *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CanMaximize )(
            __RPC__in IWindowProvider * This,
                                __RPC__out BOOL *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CanMinimize )(
            __RPC__in IWindowProvider * This,
                                __RPC__out BOOL *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_IsModal )(
            __RPC__in IWindowProvider * This,
                                __RPC__out BOOL *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_WindowVisualState )(
            __RPC__in IWindowProvider * This,
                                __RPC__out enum WindowVisualState *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_WindowInteractionState )(
            __RPC__in IWindowProvider * This,
                                __RPC__out enum WindowInteractionState *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_IsTopmost )(
            __RPC__in IWindowProvider * This,
                                __RPC__out BOOL *pRetVal);
        END_INTERFACE
    } IWindowProviderVtbl;
    interface IWindowProvider
    {
        CONST_VTBL struct IWindowProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetVisualState(This,state) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> WaitForInputIdle(This,milliseconds,pRetVal) )
    ( (This)->lpVtbl -> get_CanMaximize(This,pRetVal) )
    ( (This)->lpVtbl -> get_CanMinimize(This,pRetVal) )
    ( (This)->lpVtbl -> get_IsModal(This,pRetVal) )
    ( (This)->lpVtbl -> get_WindowVisualState(This,pRetVal) )
    ( (This)->lpVtbl -> get_WindowInteractionState(This,pRetVal) )
    ( (This)->lpVtbl -> get_IsTopmost(This,pRetVal) )
EXTERN_C const IID IID_ILegacyIAccessibleProvider;
    typedef struct ILegacyIAccessibleProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILegacyIAccessibleProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILegacyIAccessibleProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILegacyIAccessibleProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Select )(
            __RPC__in ILegacyIAccessibleProvider * This,
            long flagsSelect);
        HRESULT ( STDMETHODCALLTYPE *DoDefaultAction )(
            __RPC__in ILegacyIAccessibleProvider * This);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in ILegacyIAccessibleProvider * This,
            __RPC__in LPCWSTR szValue);
        HRESULT ( STDMETHODCALLTYPE *GetIAccessible )(
            __RPC__in ILegacyIAccessibleProvider * This,
                                __RPC__deref_out_opt IAccessible **ppAccessible);
                        HRESULT ( STDMETHODCALLTYPE *get_ChildId )(
            __RPC__in ILegacyIAccessibleProvider * This,
                                __RPC__out int *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ILegacyIAccessibleProvider * This,
                                __RPC__deref_out_opt BSTR *pszName);
                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in ILegacyIAccessibleProvider * This,
                                __RPC__deref_out_opt BSTR *pszValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in ILegacyIAccessibleProvider * This,
                                __RPC__deref_out_opt BSTR *pszDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_Role )(
            __RPC__in ILegacyIAccessibleProvider * This,
                                __RPC__out DWORD *pdwRole);
                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ILegacyIAccessibleProvider * This,
                                __RPC__out DWORD *pdwState);
                        HRESULT ( STDMETHODCALLTYPE *get_Help )(
            __RPC__in ILegacyIAccessibleProvider * This,
                                __RPC__deref_out_opt BSTR *pszHelp);
                        HRESULT ( STDMETHODCALLTYPE *get_KeyboardShortcut )(
            __RPC__in ILegacyIAccessibleProvider * This,
                                __RPC__deref_out_opt BSTR *pszKeyboardShortcut);
        HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            __RPC__in ILegacyIAccessibleProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pvarSelectedChildren);
                        HRESULT ( STDMETHODCALLTYPE *get_DefaultAction )(
            __RPC__in ILegacyIAccessibleProvider * This,
                                __RPC__deref_out_opt BSTR *pszDefaultAction);
        END_INTERFACE
    } ILegacyIAccessibleProviderVtbl;
    interface ILegacyIAccessibleProvider
    {
        CONST_VTBL struct ILegacyIAccessibleProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Select(This,flagsSelect) )
    ( (This)->lpVtbl -> DoDefaultAction(This) )
    ( (This)->lpVtbl -> SetValue(This,szValue) )
    ( (This)->lpVtbl -> GetIAccessible(This,ppAccessible) )
    ( (This)->lpVtbl -> get_ChildId(This,pRetVal) )
    ( (This)->lpVtbl -> get_Name(This,pszName) )
    ( (This)->lpVtbl -> get_Value(This,pszValue) )
    ( (This)->lpVtbl -> get_Description(This,pszDescription) )
    ( (This)->lpVtbl -> get_Role(This,pdwRole) )
    ( (This)->lpVtbl -> get_State(This,pdwState) )
    ( (This)->lpVtbl -> get_Help(This,pszHelp) )
    ( (This)->lpVtbl -> get_KeyboardShortcut(This,pszKeyboardShortcut) )
    ( (This)->lpVtbl -> GetSelection(This,pvarSelectedChildren) )
    ( (This)->lpVtbl -> get_DefaultAction(This,pszDefaultAction) )
EXTERN_C const IID IID_IItemContainerProvider;
    typedef struct IItemContainerProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IItemContainerProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IItemContainerProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IItemContainerProvider * This);
        HRESULT ( STDMETHODCALLTYPE *FindItemByProperty )(
            __RPC__in IItemContainerProvider * This,
                       __RPC__in_opt IRawElementProviderSimple *pStartAfter,
                       PROPERTYID propertyId,
                       VARIANT value,
                                __RPC__deref_out_opt IRawElementProviderSimple **pFound);
        END_INTERFACE
    } IItemContainerProviderVtbl;
    interface IItemContainerProvider
    {
        CONST_VTBL struct IItemContainerProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindItemByProperty(This,pStartAfter,propertyId,value,pFound) )
EXTERN_C const IID IID_IVirtualizedItemProvider;
    typedef struct IVirtualizedItemProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVirtualizedItemProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVirtualizedItemProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVirtualizedItemProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Realize )(
            __RPC__in IVirtualizedItemProvider * This);
        END_INTERFACE
    } IVirtualizedItemProviderVtbl;
    interface IVirtualizedItemProvider
    {
        CONST_VTBL struct IVirtualizedItemProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Realize(This) )
EXTERN_C const IID IID_IObjectModelProvider;
    typedef struct IObjectModelProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IObjectModelProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IObjectModelProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IObjectModelProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetUnderlyingObjectModel )(
            __RPC__in IObjectModelProvider * This,
                                __RPC__deref_out_opt IUnknown **ppUnknown);
        END_INTERFACE
    } IObjectModelProviderVtbl;
    interface IObjectModelProvider
    {
        CONST_VTBL struct IObjectModelProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUnderlyingObjectModel(This,ppUnknown) )
EXTERN_C const IID IID_IAnnotationProvider;
    typedef struct IAnnotationProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAnnotationProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAnnotationProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAnnotationProvider * This);
                        HRESULT ( STDMETHODCALLTYPE *get_AnnotationTypeId )(
            __RPC__in IAnnotationProvider * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_AnnotationTypeName )(
            __RPC__in IAnnotationProvider * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_Author )(
            __RPC__in IAnnotationProvider * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_DateTime )(
            __RPC__in IAnnotationProvider * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_Target )(
            __RPC__in IAnnotationProvider * This,
                                __RPC__deref_out_opt IRawElementProviderSimple **retVal);
        END_INTERFACE
    } IAnnotationProviderVtbl;
    interface IAnnotationProvider
    {
        CONST_VTBL struct IAnnotationProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_AnnotationTypeId(This,retVal) )
    ( (This)->lpVtbl -> get_AnnotationTypeName(This,retVal) )
    ( (This)->lpVtbl -> get_Author(This,retVal) )
    ( (This)->lpVtbl -> get_DateTime(This,retVal) )
    ( (This)->lpVtbl -> get_Target(This,retVal) )
EXTERN_C const IID IID_IStylesProvider;
    typedef struct IStylesProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStylesProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStylesProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStylesProvider * This);
                        HRESULT ( STDMETHODCALLTYPE *get_StyleId )(
            __RPC__in IStylesProvider * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_StyleName )(
            __RPC__in IStylesProvider * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_FillColor )(
            __RPC__in IStylesProvider * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_FillPatternStyle )(
            __RPC__in IStylesProvider * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_Shape )(
            __RPC__in IStylesProvider * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_FillPatternColor )(
            __RPC__in IStylesProvider * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_ExtendedProperties )(
            __RPC__in IStylesProvider * This,
                                __RPC__deref_out_opt BSTR *retVal);
        END_INTERFACE
    } IStylesProviderVtbl;
    interface IStylesProvider
    {
        CONST_VTBL struct IStylesProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_StyleId(This,retVal) )
    ( (This)->lpVtbl -> get_StyleName(This,retVal) )
    ( (This)->lpVtbl -> get_FillColor(This,retVal) )
    ( (This)->lpVtbl -> get_FillPatternStyle(This,retVal) )
    ( (This)->lpVtbl -> get_Shape(This,retVal) )
    ( (This)->lpVtbl -> get_FillPatternColor(This,retVal) )
    ( (This)->lpVtbl -> get_ExtendedProperties(This,retVal) )
EXTERN_C const IID IID_ISpreadsheetProvider;
    typedef struct ISpreadsheetProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpreadsheetProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpreadsheetProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpreadsheetProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetItemByName )(
            __RPC__in ISpreadsheetProvider * This,
                       __RPC__in LPCWSTR name,
                                __RPC__deref_out_opt IRawElementProviderSimple **pRetVal);
        END_INTERFACE
    } ISpreadsheetProviderVtbl;
    interface ISpreadsheetProvider
    {
        CONST_VTBL struct ISpreadsheetProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItemByName(This,name,pRetVal) )
EXTERN_C const IID IID_ISpreadsheetItemProvider;
    typedef struct ISpreadsheetItemProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpreadsheetItemProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpreadsheetItemProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpreadsheetItemProvider * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Formula )(
            __RPC__in ISpreadsheetItemProvider * This,
                                __RPC__deref_out_opt BSTR *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetAnnotationObjects )(
            __RPC__in ISpreadsheetItemProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetAnnotationTypes )(
            __RPC__in ISpreadsheetItemProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        END_INTERFACE
    } ISpreadsheetItemProviderVtbl;
    interface ISpreadsheetItemProvider
    {
        CONST_VTBL struct ISpreadsheetItemProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Formula(This,pRetVal) )
    ( (This)->lpVtbl -> GetAnnotationObjects(This,pRetVal) )
    ( (This)->lpVtbl -> GetAnnotationTypes(This,pRetVal) )
EXTERN_C const IID IID_ITransformProvider2;
    typedef struct ITransformProvider2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITransformProvider2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITransformProvider2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITransformProvider2 * This);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in ITransformProvider2 * This,
                       double x,
                       double y);
        HRESULT ( STDMETHODCALLTYPE *Resize )(
            __RPC__in ITransformProvider2 * This,
                       double width,
                       double height);
        HRESULT ( STDMETHODCALLTYPE *Rotate )(
            __RPC__in ITransformProvider2 * This,
                       double degrees);
                        HRESULT ( STDMETHODCALLTYPE *get_CanMove )(
            __RPC__in ITransformProvider2 * This,
                                __RPC__out BOOL *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CanResize )(
            __RPC__in ITransformProvider2 * This,
                                __RPC__out BOOL *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CanRotate )(
            __RPC__in ITransformProvider2 * This,
                                __RPC__out BOOL *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *Zoom )(
            __RPC__in ITransformProvider2 * This,
                       double zoom);
                        HRESULT ( STDMETHODCALLTYPE *get_CanZoom )(
            __RPC__in ITransformProvider2 * This,
                                __RPC__out BOOL *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_ZoomLevel )(
            __RPC__in ITransformProvider2 * This,
                                __RPC__out double *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_ZoomMinimum )(
            __RPC__in ITransformProvider2 * This,
                                __RPC__out double *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_ZoomMaximum )(
            __RPC__in ITransformProvider2 * This,
                                __RPC__out double *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *ZoomByUnit )(
            __RPC__in ITransformProvider2 * This,
                       enum ZoomUnit zoomUnit);
        END_INTERFACE
    } ITransformProvider2Vtbl;
    interface ITransformProvider2
    {
        CONST_VTBL struct ITransformProvider2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Move(This,x,y) )
    ( (This)->lpVtbl -> Resize(This,width,height) )
    ( (This)->lpVtbl -> Rotate(This,degrees) )
    ( (This)->lpVtbl -> get_CanMove(This,pRetVal) )
    ( (This)->lpVtbl -> get_CanResize(This,pRetVal) )
    ( (This)->lpVtbl -> get_CanRotate(This,pRetVal) )
    ( (This)->lpVtbl -> Zoom(This,zoom) )
    ( (This)->lpVtbl -> get_CanZoom(This,pRetVal) )
    ( (This)->lpVtbl -> get_ZoomLevel(This,pRetVal) )
    ( (This)->lpVtbl -> get_ZoomMinimum(This,pRetVal) )
    ( (This)->lpVtbl -> get_ZoomMaximum(This,pRetVal) )
    ( (This)->lpVtbl -> ZoomByUnit(This,zoomUnit) )
EXTERN_C const IID IID_IDragProvider;
    typedef struct IDragProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDragProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDragProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDragProvider * This);
                        HRESULT ( STDMETHODCALLTYPE *get_IsGrabbed )(
            __RPC__in IDragProvider * This,
                                __RPC__out BOOL *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_DropEffect )(
            __RPC__in IDragProvider * This,
                                __RPC__deref_out_opt BSTR *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_DropEffects )(
            __RPC__in IDragProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetGrabbedItems )(
            __RPC__in IDragProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        END_INTERFACE
    } IDragProviderVtbl;
    interface IDragProvider
    {
        CONST_VTBL struct IDragProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_IsGrabbed(This,pRetVal) )
    ( (This)->lpVtbl -> get_DropEffect(This,pRetVal) )
    ( (This)->lpVtbl -> get_DropEffects(This,pRetVal) )
    ( (This)->lpVtbl -> GetGrabbedItems(This,pRetVal) )
EXTERN_C const IID IID_IDropTargetProvider;
    typedef struct IDropTargetProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDropTargetProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDropTargetProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDropTargetProvider * This);
                        HRESULT ( STDMETHODCALLTYPE *get_DropTargetEffect )(
            __RPC__in IDropTargetProvider * This,
                                __RPC__deref_out_opt BSTR *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_DropTargetEffects )(
            __RPC__in IDropTargetProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        END_INTERFACE
    } IDropTargetProviderVtbl;
    interface IDropTargetProvider
    {
        CONST_VTBL struct IDropTargetProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_DropTargetEffect(This,pRetVal) )
    ( (This)->lpVtbl -> get_DropTargetEffects(This,pRetVal) )
EXTERN_C const IID IID_ITextRangeProvider;
    typedef struct ITextRangeProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextRangeProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextRangeProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextRangeProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in ITextRangeProvider * This,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            __RPC__in ITextRangeProvider * This,
                       __RPC__in_opt ITextRangeProvider *range,
                                __RPC__out BOOL *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *CompareEndpoints )(
            __RPC__in ITextRangeProvider * This,
                       enum TextPatternRangeEndpoint endpoint,
                       __RPC__in_opt ITextRangeProvider *targetRange,
                       enum TextPatternRangeEndpoint targetEndpoint,
                                __RPC__out int *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *ExpandToEnclosingUnit )(
            __RPC__in ITextRangeProvider * This,
                       enum TextUnit unit);
        HRESULT ( STDMETHODCALLTYPE *FindAttribute )(
            __RPC__in ITextRangeProvider * This,
                       TEXTATTRIBUTEID attributeId,
                       VARIANT val,
                       BOOL backward,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *FindText )(
            __RPC__in ITextRangeProvider * This,
                       __RPC__in BSTR text,
                       BOOL backward,
                       BOOL ignoreCase,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeValue )(
            __RPC__in ITextRangeProvider * This,
                       TEXTATTRIBUTEID attributeId,
                                __RPC__out VARIANT *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetBoundingRectangles )(
            __RPC__in ITextRangeProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetEnclosingElement )(
            __RPC__in ITextRangeProvider * This,
                                __RPC__deref_out_opt IRawElementProviderSimple **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in ITextRangeProvider * This,
                       int maxLength,
                                __RPC__deref_out_opt BSTR *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in ITextRangeProvider * This,
                       enum TextUnit unit,
                       int count,
                                __RPC__out int *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByUnit )(
            __RPC__in ITextRangeProvider * This,
                       enum TextPatternRangeEndpoint endpoint,
                       enum TextUnit unit,
                       int count,
                                __RPC__out int *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByRange )(
            __RPC__in ITextRangeProvider * This,
                       enum TextPatternRangeEndpoint endpoint,
                       __RPC__in_opt ITextRangeProvider *targetRange,
                       enum TextPatternRangeEndpoint targetEndpoint);
        HRESULT ( STDMETHODCALLTYPE *Select )(
            __RPC__in ITextRangeProvider * This);
        HRESULT ( STDMETHODCALLTYPE *AddToSelection )(
            __RPC__in ITextRangeProvider * This);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )(
            __RPC__in ITextRangeProvider * This);
        HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )(
            __RPC__in ITextRangeProvider * This,
                       BOOL alignToTop);
        HRESULT ( STDMETHODCALLTYPE *GetChildren )(
            __RPC__in ITextRangeProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        END_INTERFACE
    } ITextRangeProviderVtbl;
    interface ITextRangeProvider
    {
        CONST_VTBL struct ITextRangeProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,pRetVal) )
    ( (This)->lpVtbl -> Compare(This,range,pRetVal) )
    ( (This)->lpVtbl -> CompareEndpoints(This,endpoint,targetRange,targetEndpoint,pRetVal) )
    ( (This)->lpVtbl -> ExpandToEnclosingUnit(This,unit) )
    ( (This)->lpVtbl -> FindAttribute(This,attributeId,val,backward,pRetVal) )
    ( (This)->lpVtbl -> FindText(This,text,backward,ignoreCase,pRetVal) )
    ( (This)->lpVtbl -> GetAttributeValue(This,attributeId,pRetVal) )
    ( (This)->lpVtbl -> GetBoundingRectangles(This,pRetVal) )
    ( (This)->lpVtbl -> GetEnclosingElement(This,pRetVal) )
    ( (This)->lpVtbl -> GetText(This,maxLength,pRetVal) )
    ( (This)->lpVtbl -> Move(This,unit,count,pRetVal) )
    ( (This)->lpVtbl -> MoveEndpointByUnit(This,endpoint,unit,count,pRetVal) )
    ( (This)->lpVtbl -> MoveEndpointByRange(This,endpoint,targetRange,targetEndpoint) )
    ( (This)->lpVtbl -> Select(This) )
    ( (This)->lpVtbl -> AddToSelection(This) )
    ( (This)->lpVtbl -> RemoveFromSelection(This) )
    ( (This)->lpVtbl -> ScrollIntoView(This,alignToTop) )
    ( (This)->lpVtbl -> GetChildren(This,pRetVal) )
EXTERN_C const IID IID_ITextProvider;
    typedef struct ITextProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            __RPC__in ITextProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetVisibleRanges )(
            __RPC__in ITextProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *RangeFromChild )(
            __RPC__in ITextProvider * This,
                       __RPC__in_opt IRawElementProviderSimple *childElement,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *RangeFromPoint )(
            __RPC__in ITextProvider * This,
                       struct UiaPoint point,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_DocumentRange )(
            __RPC__in ITextProvider * This,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_SupportedTextSelection )(
            __RPC__in ITextProvider * This,
                                __RPC__out enum SupportedTextSelection *pRetVal);
        END_INTERFACE
    } ITextProviderVtbl;
    interface ITextProvider
    {
        CONST_VTBL struct ITextProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSelection(This,pRetVal) )
    ( (This)->lpVtbl -> GetVisibleRanges(This,pRetVal) )
    ( (This)->lpVtbl -> RangeFromChild(This,childElement,pRetVal) )
    ( (This)->lpVtbl -> RangeFromPoint(This,point,pRetVal) )
    ( (This)->lpVtbl -> get_DocumentRange(This,pRetVal) )
    ( (This)->lpVtbl -> get_SupportedTextSelection(This,pRetVal) )
EXTERN_C const IID IID_ITextProvider2;
    typedef struct ITextProvider2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextProvider2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextProvider2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextProvider2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            __RPC__in ITextProvider2 * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetVisibleRanges )(
            __RPC__in ITextProvider2 * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *RangeFromChild )(
            __RPC__in ITextProvider2 * This,
                       __RPC__in_opt IRawElementProviderSimple *childElement,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *RangeFromPoint )(
            __RPC__in ITextProvider2 * This,
                       struct UiaPoint point,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_DocumentRange )(
            __RPC__in ITextProvider2 * This,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_SupportedTextSelection )(
            __RPC__in ITextProvider2 * This,
                                __RPC__out enum SupportedTextSelection *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *RangeFromAnnotation )(
            __RPC__in ITextProvider2 * This,
                       __RPC__in_opt IRawElementProviderSimple *annotationElement,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetCaretRange )(
            __RPC__in ITextProvider2 * This,
                        __RPC__out BOOL *isActive,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
        END_INTERFACE
    } ITextProvider2Vtbl;
    interface ITextProvider2
    {
        CONST_VTBL struct ITextProvider2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSelection(This,pRetVal) )
    ( (This)->lpVtbl -> GetVisibleRanges(This,pRetVal) )
    ( (This)->lpVtbl -> RangeFromChild(This,childElement,pRetVal) )
    ( (This)->lpVtbl -> RangeFromPoint(This,point,pRetVal) )
    ( (This)->lpVtbl -> get_DocumentRange(This,pRetVal) )
    ( (This)->lpVtbl -> get_SupportedTextSelection(This,pRetVal) )
    ( (This)->lpVtbl -> RangeFromAnnotation(This,annotationElement,pRetVal) )
    ( (This)->lpVtbl -> GetCaretRange(This,isActive,pRetVal) )
EXTERN_C const IID IID_ITextEditProvider;
    typedef struct ITextEditProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextEditProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextEditProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextEditProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            __RPC__in ITextEditProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetVisibleRanges )(
            __RPC__in ITextEditProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *RangeFromChild )(
            __RPC__in ITextEditProvider * This,
                       __RPC__in_opt IRawElementProviderSimple *childElement,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *RangeFromPoint )(
            __RPC__in ITextEditProvider * This,
                       struct UiaPoint point,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_DocumentRange )(
            __RPC__in ITextEditProvider * This,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_SupportedTextSelection )(
            __RPC__in ITextEditProvider * This,
                                __RPC__out enum SupportedTextSelection *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetActiveComposition )(
            __RPC__in ITextEditProvider * This,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetConversionTarget )(
            __RPC__in ITextEditProvider * This,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
        END_INTERFACE
    } ITextEditProviderVtbl;
    interface ITextEditProvider
    {
        CONST_VTBL struct ITextEditProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSelection(This,pRetVal) )
    ( (This)->lpVtbl -> GetVisibleRanges(This,pRetVal) )
    ( (This)->lpVtbl -> RangeFromChild(This,childElement,pRetVal) )
    ( (This)->lpVtbl -> RangeFromPoint(This,point,pRetVal) )
    ( (This)->lpVtbl -> get_DocumentRange(This,pRetVal) )
    ( (This)->lpVtbl -> get_SupportedTextSelection(This,pRetVal) )
    ( (This)->lpVtbl -> GetActiveComposition(This,pRetVal) )
    ( (This)->lpVtbl -> GetConversionTarget(This,pRetVal) )
EXTERN_C const IID IID_ITextRangeProvider2;
    typedef struct ITextRangeProvider2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextRangeProvider2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextRangeProvider2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextRangeProvider2 * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in ITextRangeProvider2 * This,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            __RPC__in ITextRangeProvider2 * This,
                       __RPC__in_opt ITextRangeProvider *range,
                                __RPC__out BOOL *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *CompareEndpoints )(
            __RPC__in ITextRangeProvider2 * This,
                       enum TextPatternRangeEndpoint endpoint,
                       __RPC__in_opt ITextRangeProvider *targetRange,
                       enum TextPatternRangeEndpoint targetEndpoint,
                                __RPC__out int *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *ExpandToEnclosingUnit )(
            __RPC__in ITextRangeProvider2 * This,
                       enum TextUnit unit);
        HRESULT ( STDMETHODCALLTYPE *FindAttribute )(
            __RPC__in ITextRangeProvider2 * This,
                       TEXTATTRIBUTEID attributeId,
                       VARIANT val,
                       BOOL backward,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *FindText )(
            __RPC__in ITextRangeProvider2 * This,
                       __RPC__in BSTR text,
                       BOOL backward,
                       BOOL ignoreCase,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeValue )(
            __RPC__in ITextRangeProvider2 * This,
                       TEXTATTRIBUTEID attributeId,
                                __RPC__out VARIANT *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetBoundingRectangles )(
            __RPC__in ITextRangeProvider2 * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetEnclosingElement )(
            __RPC__in ITextRangeProvider2 * This,
                                __RPC__deref_out_opt IRawElementProviderSimple **pRetVal);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in ITextRangeProvider2 * This,
                       int maxLength,
                                __RPC__deref_out_opt BSTR *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in ITextRangeProvider2 * This,
                       enum TextUnit unit,
                       int count,
                                __RPC__out int *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByUnit )(
            __RPC__in ITextRangeProvider2 * This,
                       enum TextPatternRangeEndpoint endpoint,
                       enum TextUnit unit,
                       int count,
                                __RPC__out int *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByRange )(
            __RPC__in ITextRangeProvider2 * This,
                       enum TextPatternRangeEndpoint endpoint,
                       __RPC__in_opt ITextRangeProvider *targetRange,
                       enum TextPatternRangeEndpoint targetEndpoint);
        HRESULT ( STDMETHODCALLTYPE *Select )(
            __RPC__in ITextRangeProvider2 * This);
        HRESULT ( STDMETHODCALLTYPE *AddToSelection )(
            __RPC__in ITextRangeProvider2 * This);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )(
            __RPC__in ITextRangeProvider2 * This);
        HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )(
            __RPC__in ITextRangeProvider2 * This,
                       BOOL alignToTop);
        HRESULT ( STDMETHODCALLTYPE *GetChildren )(
            __RPC__in ITextRangeProvider2 * This,
                                __RPC__deref_out_opt SAFEARRAY * *pRetVal);
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )(
            __RPC__in ITextRangeProvider2 * This);
        END_INTERFACE
    } ITextRangeProvider2Vtbl;
    interface ITextRangeProvider2
    {
        CONST_VTBL struct ITextRangeProvider2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,pRetVal) )
    ( (This)->lpVtbl -> Compare(This,range,pRetVal) )
    ( (This)->lpVtbl -> CompareEndpoints(This,endpoint,targetRange,targetEndpoint,pRetVal) )
    ( (This)->lpVtbl -> ExpandToEnclosingUnit(This,unit) )
    ( (This)->lpVtbl -> FindAttribute(This,attributeId,val,backward,pRetVal) )
    ( (This)->lpVtbl -> FindText(This,text,backward,ignoreCase,pRetVal) )
    ( (This)->lpVtbl -> GetAttributeValue(This,attributeId,pRetVal) )
    ( (This)->lpVtbl -> GetBoundingRectangles(This,pRetVal) )
    ( (This)->lpVtbl -> GetEnclosingElement(This,pRetVal) )
    ( (This)->lpVtbl -> GetText(This,maxLength,pRetVal) )
    ( (This)->lpVtbl -> Move(This,unit,count,pRetVal) )
    ( (This)->lpVtbl -> MoveEndpointByUnit(This,endpoint,unit,count,pRetVal) )
    ( (This)->lpVtbl -> MoveEndpointByRange(This,endpoint,targetRange,targetEndpoint) )
    ( (This)->lpVtbl -> Select(This) )
    ( (This)->lpVtbl -> AddToSelection(This) )
    ( (This)->lpVtbl -> RemoveFromSelection(This) )
    ( (This)->lpVtbl -> ScrollIntoView(This,alignToTop) )
    ( (This)->lpVtbl -> GetChildren(This,pRetVal) )
    ( (This)->lpVtbl -> ShowContextMenu(This) )
EXTERN_C const IID IID_ITextChildProvider;
    typedef struct ITextChildProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextChildProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextChildProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextChildProvider * This);
                        HRESULT ( STDMETHODCALLTYPE *get_TextContainer )(
            __RPC__in ITextChildProvider * This,
                                __RPC__deref_out_opt IRawElementProviderSimple **pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_TextRange )(
            __RPC__in ITextChildProvider * This,
                                __RPC__deref_out_opt ITextRangeProvider **pRetVal);
        END_INTERFACE
    } ITextChildProviderVtbl;
    interface ITextChildProvider
    {
        CONST_VTBL struct ITextChildProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_TextContainer(This,pRetVal) )
    ( (This)->lpVtbl -> get_TextRange(This,pRetVal) )
EXTERN_C const IID IID_ICustomNavigationProvider;
    typedef struct ICustomNavigationProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICustomNavigationProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICustomNavigationProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICustomNavigationProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Navigate )(
            __RPC__in ICustomNavigationProvider * This,
                       enum NavigateDirection direction,
                                __RPC__deref_out_opt IRawElementProviderSimple **pRetVal);
        END_INTERFACE
    } ICustomNavigationProviderVtbl;
    interface ICustomNavigationProvider
    {
        CONST_VTBL struct ICustomNavigationProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Navigate(This,direction,pRetVal) )
EXTERN_C const IID IID_IUIAutomationPatternInstance;
    typedef struct IUIAutomationPatternInstanceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationPatternInstance * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationPatternInstance * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationPatternInstance * This);
                      HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            IUIAutomationPatternInstance * This,
                       UINT index,
                       BOOL cached,
                       enum UIAutomationType type,
                        void *pPtr);
                      HRESULT ( STDMETHODCALLTYPE *CallMethod )(
            IUIAutomationPatternInstance * This,
                       UINT index,
                       const struct UIAutomationParameter *pParams,
                       UINT cParams);
        END_INTERFACE
    } IUIAutomationPatternInstanceVtbl;
    interface IUIAutomationPatternInstance
    {
        CONST_VTBL struct IUIAutomationPatternInstanceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperty(This,index,cached,type,pPtr) )
    ( (This)->lpVtbl -> CallMethod(This,index,pParams,cParams) )
EXTERN_C const IID IID_IUIAutomationPatternHandler;
    typedef struct IUIAutomationPatternHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationPatternHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationPatternHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationPatternHandler * This);
        HRESULT ( STDMETHODCALLTYPE *CreateClientWrapper )(
            __RPC__in IUIAutomationPatternHandler * This,
                       __RPC__in_opt IUIAutomationPatternInstance *pPatternInstance,
                        __RPC__deref_out_opt IUnknown **pClientWrapper);
                      HRESULT ( STDMETHODCALLTYPE *Dispatch )(
            IUIAutomationPatternHandler * This,
                       IUnknown *pTarget,
                       UINT index,
                       const struct UIAutomationParameter *pParams,
                       UINT cParams);
        END_INTERFACE
    } IUIAutomationPatternHandlerVtbl;
    interface IUIAutomationPatternHandler
    {
        CONST_VTBL struct IUIAutomationPatternHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateClientWrapper(This,pPatternInstance,pClientWrapper) )
    ( (This)->lpVtbl -> Dispatch(This,pTarget,index,pParams,cParams) )
EXTERN_C const IID IID_IUIAutomationRegistrar;
    typedef struct IUIAutomationRegistrarVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationRegistrar * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationRegistrar * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationRegistrar * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterProperty )(
            __RPC__in IUIAutomationRegistrar * This,
                       __RPC__in const struct UIAutomationPropertyInfo *property,
                        __RPC__out PROPERTYID *propertyId);
        HRESULT ( STDMETHODCALLTYPE *RegisterEvent )(
            __RPC__in IUIAutomationRegistrar * This,
                       __RPC__in const struct UIAutomationEventInfo *event,
                        __RPC__out EVENTID *eventId);
        HRESULT ( STDMETHODCALLTYPE *RegisterPattern )(
            __RPC__in IUIAutomationRegistrar * This,
                       __RPC__in const struct UIAutomationPatternInfo *pattern,
                        __RPC__out PATTERNID *pPatternId,
                        __RPC__out PROPERTYID *pPatternAvailablePropertyId,
                       UINT propertyIdCount,
                                 __RPC__out_ecount_full(propertyIdCount) PROPERTYID *pPropertyIds,
                       UINT eventIdCount,
                                 __RPC__out_ecount_full(eventIdCount) EVENTID *pEventIds);
        END_INTERFACE
    } IUIAutomationRegistrarVtbl;
    interface IUIAutomationRegistrar
    {
        CONST_VTBL struct IUIAutomationRegistrarVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterProperty(This,property,propertyId) )
    ( (This)->lpVtbl -> RegisterEvent(This,event,eventId) )
    ( (This)->lpVtbl -> RegisterPattern(This,pattern,pPatternId,pPatternAvailablePropertyId,propertyIdCount,pPropertyIds,eventIdCount,pEventIds) )
EXTERN_C const CLSID CLSID_CUIAutomationRegistrar;
class DECLSPEC_UUID("6e29fabf-9977-42d1-8d0e-ca7e61ad87e6")
CUIAutomationRegistrar;
}
