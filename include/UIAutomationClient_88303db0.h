#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IUIAutomationElement IUIAutomationElement;
typedef interface IUIAutomationElementArray IUIAutomationElementArray;
typedef interface IUIAutomationCondition IUIAutomationCondition;
typedef interface IUIAutomationBoolCondition IUIAutomationBoolCondition;
typedef interface IUIAutomationPropertyCondition IUIAutomationPropertyCondition;
typedef interface IUIAutomationAndCondition IUIAutomationAndCondition;
typedef interface IUIAutomationOrCondition IUIAutomationOrCondition;
typedef interface IUIAutomationNotCondition IUIAutomationNotCondition;
typedef interface IUIAutomationCacheRequest IUIAutomationCacheRequest;
typedef interface IUIAutomationTreeWalker IUIAutomationTreeWalker;
typedef interface IUIAutomationEventHandler IUIAutomationEventHandler;
typedef interface IUIAutomationPropertyChangedEventHandler IUIAutomationPropertyChangedEventHandler;
typedef interface IUIAutomationStructureChangedEventHandler IUIAutomationStructureChangedEventHandler;
typedef interface IUIAutomationFocusChangedEventHandler IUIAutomationFocusChangedEventHandler;
typedef interface IUIAutomationTextEditTextChangedEventHandler IUIAutomationTextEditTextChangedEventHandler;
typedef interface IUIAutomationChangesEventHandler IUIAutomationChangesEventHandler;
typedef interface IUIAutomationNotificationEventHandler IUIAutomationNotificationEventHandler;
typedef interface IUIAutomationInvokePattern IUIAutomationInvokePattern;
typedef interface IUIAutomationDockPattern IUIAutomationDockPattern;
typedef interface IUIAutomationExpandCollapsePattern IUIAutomationExpandCollapsePattern;
typedef interface IUIAutomationGridPattern IUIAutomationGridPattern;
typedef interface IUIAutomationGridItemPattern IUIAutomationGridItemPattern;
typedef interface IUIAutomationMultipleViewPattern IUIAutomationMultipleViewPattern;
typedef interface IUIAutomationObjectModelPattern IUIAutomationObjectModelPattern;
typedef interface IUIAutomationRangeValuePattern IUIAutomationRangeValuePattern;
typedef interface IUIAutomationScrollPattern IUIAutomationScrollPattern;
typedef interface IUIAutomationScrollItemPattern IUIAutomationScrollItemPattern;
typedef interface IUIAutomationSelectionPattern IUIAutomationSelectionPattern;
typedef interface IUIAutomationSelectionPattern2 IUIAutomationSelectionPattern2;
typedef interface IUIAutomationSelectionItemPattern IUIAutomationSelectionItemPattern;
typedef interface IUIAutomationSynchronizedInputPattern IUIAutomationSynchronizedInputPattern;
typedef interface IUIAutomationTablePattern IUIAutomationTablePattern;
typedef interface IUIAutomationTableItemPattern IUIAutomationTableItemPattern;
typedef interface IUIAutomationTogglePattern IUIAutomationTogglePattern;
typedef interface IUIAutomationTransformPattern IUIAutomationTransformPattern;
typedef interface IUIAutomationValuePattern IUIAutomationValuePattern;
typedef interface IUIAutomationWindowPattern IUIAutomationWindowPattern;
typedef interface IUIAutomationTextRange IUIAutomationTextRange;
typedef interface IUIAutomationTextRange2 IUIAutomationTextRange2;
typedef interface IUIAutomationTextRange3 IUIAutomationTextRange3;
typedef interface IUIAutomationTextRangeArray IUIAutomationTextRangeArray;
typedef interface IUIAutomationTextPattern IUIAutomationTextPattern;
typedef interface IUIAutomationTextPattern2 IUIAutomationTextPattern2;
typedef interface IUIAutomationTextEditPattern IUIAutomationTextEditPattern;
typedef interface IUIAutomationCustomNavigationPattern IUIAutomationCustomNavigationPattern;
typedef interface IUIAutomationActiveTextPositionChangedEventHandler IUIAutomationActiveTextPositionChangedEventHandler;
typedef interface IUIAutomationLegacyIAccessiblePattern IUIAutomationLegacyIAccessiblePattern;
typedef interface IUIAutomationItemContainerPattern IUIAutomationItemContainerPattern;
typedef interface IUIAutomationVirtualizedItemPattern IUIAutomationVirtualizedItemPattern;
typedef interface IUIAutomationAnnotationPattern IUIAutomationAnnotationPattern;
typedef interface IUIAutomationStylesPattern IUIAutomationStylesPattern;
typedef interface IUIAutomationSpreadsheetPattern IUIAutomationSpreadsheetPattern;
typedef interface IUIAutomationSpreadsheetItemPattern IUIAutomationSpreadsheetItemPattern;
typedef interface IUIAutomationTransformPattern2 IUIAutomationTransformPattern2;
typedef interface IUIAutomationTextChildPattern IUIAutomationTextChildPattern;
typedef interface IUIAutomationDragPattern IUIAutomationDragPattern;
typedef interface IUIAutomationDropTargetPattern IUIAutomationDropTargetPattern;
typedef interface IUIAutomationElement2 IUIAutomationElement2;
typedef interface IUIAutomationElement3 IUIAutomationElement3;
typedef interface IUIAutomationElement4 IUIAutomationElement4;
typedef interface IUIAutomationElement5 IUIAutomationElement5;
typedef interface IUIAutomationElement6 IUIAutomationElement6;
typedef interface IUIAutomationElement7 IUIAutomationElement7;
typedef interface IUIAutomationElement8 IUIAutomationElement8;
typedef interface IUIAutomationElement9 IUIAutomationElement9;
typedef interface IUIAutomationProxyFactory IUIAutomationProxyFactory;
typedef interface IUIAutomationProxyFactoryEntry IUIAutomationProxyFactoryEntry;
typedef interface IUIAutomationProxyFactoryMapping IUIAutomationProxyFactoryMapping;
typedef interface IUIAutomationEventHandlerGroup IUIAutomationEventHandlerGroup;
typedef interface IUIAutomation IUIAutomation;
typedef interface IUIAutomation2 IUIAutomation2;
typedef interface IUIAutomation3 IUIAutomation3;
typedef interface IUIAutomation4 IUIAutomation4;
typedef interface IUIAutomation5 IUIAutomation5;
typedef interface IUIAutomation6 IUIAutomation6;
typedef class CUIAutomation CUIAutomation;
typedef class CUIAutomation8 CUIAutomation8;
#include "UIAutomationCore.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
enum TreeScope
    {
        TreeScope_None = 0,
        TreeScope_Element = 0x1,
        TreeScope_Children = 0x2,
        TreeScope_Descendants = 0x4,
        TreeScope_Parent = 0x8,
        TreeScope_Ancestors = 0x10,
        TreeScope_Subtree = ( ( TreeScope_Element | TreeScope_Children ) | TreeScope_Descendants )
    } ;
enum PropertyConditionFlags
    {
        PropertyConditionFlags_None = 0,
        PropertyConditionFlags_IgnoreCase = 0x1,
        PropertyConditionFlags_MatchSubstring = 0x2
    } ;
enum AutomationElementMode
    {
        AutomationElementMode_None = 0,
        AutomationElementMode_Full = ( AutomationElementMode_None + 1 )
    } ;
enum TreeTraversalOptions
    {
        TreeTraversalOptions_Default = 0,
        TreeTraversalOptions_PostOrder = 0x1,
        TreeTraversalOptions_LastToFirstOrder = 0x2
    } ;
enum ConnectionRecoveryBehaviorOptions
    {
        ConnectionRecoveryBehaviorOptions_Disabled = 0,
        ConnectionRecoveryBehaviorOptions_Enabled = 0x1
    } ;
enum CoalesceEventsOptions
    {
        CoalesceEventsOptions_Disabled = 0,
        CoalesceEventsOptions_Enabled = 0x1
    } ;
struct ExtendedProperty
    {
    BSTR PropertyName;
    BSTR PropertyValue;
    } ;
typedef void *UIA_HWND;
extern RPC_IF_HANDLE __MIDL_itf_uiautomationclient_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_uiautomationclient_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID LIBID_UIAutomationClient;
const long UIA_InvokePatternId = 10000;
const long UIA_SelectionPatternId = 10001;
const long UIA_ValuePatternId = 10002;
const long UIA_RangeValuePatternId = 10003;
const long UIA_ScrollPatternId = 10004;
const long UIA_ExpandCollapsePatternId = 10005;
const long UIA_GridPatternId = 10006;
const long UIA_GridItemPatternId = 10007;
const long UIA_MultipleViewPatternId = 10008;
const long UIA_WindowPatternId = 10009;
const long UIA_SelectionItemPatternId = 10010;
const long UIA_DockPatternId = 10011;
const long UIA_TablePatternId = 10012;
const long UIA_TableItemPatternId = 10013;
const long UIA_TextPatternId = 10014;
const long UIA_TogglePatternId = 10015;
const long UIA_TransformPatternId = 10016;
const long UIA_ScrollItemPatternId = 10017;
const long UIA_LegacyIAccessiblePatternId = 10018;
const long UIA_ItemContainerPatternId = 10019;
const long UIA_VirtualizedItemPatternId = 10020;
const long UIA_SynchronizedInputPatternId = 10021;
const long UIA_ObjectModelPatternId = 10022;
const long UIA_AnnotationPatternId = 10023;
const long UIA_TextPattern2Id = 10024;
const long UIA_StylesPatternId = 10025;
const long UIA_SpreadsheetPatternId = 10026;
const long UIA_SpreadsheetItemPatternId = 10027;
const long UIA_TransformPattern2Id = 10028;
const long UIA_TextChildPatternId = 10029;
const long UIA_DragPatternId = 10030;
const long UIA_DropTargetPatternId = 10031;
const long UIA_TextEditPatternId = 10032;
const long UIA_CustomNavigationPatternId = 10033;
const long UIA_SelectionPattern2Id = 10034;
const long UIA_ToolTipOpenedEventId = 20000;
const long UIA_ToolTipClosedEventId = 20001;
const long UIA_StructureChangedEventId = 20002;
const long UIA_MenuOpenedEventId = 20003;
const long UIA_AutomationPropertyChangedEventId = 20004;
const long UIA_AutomationFocusChangedEventId = 20005;
const long UIA_AsyncContentLoadedEventId = 20006;
const long UIA_MenuClosedEventId = 20007;
const long UIA_LayoutInvalidatedEventId = 20008;
const long UIA_Invoke_InvokedEventId = 20009;
const long UIA_SelectionItem_ElementAddedToSelectionEventId = 20010;
const long UIA_SelectionItem_ElementRemovedFromSelectionEventId = 20011;
const long UIA_SelectionItem_ElementSelectedEventId = 20012;
const long UIA_Selection_InvalidatedEventId = 20013;
const long UIA_Text_TextSelectionChangedEventId = 20014;
const long UIA_Text_TextChangedEventId = 20015;
const long UIA_Window_WindowOpenedEventId = 20016;
const long UIA_Window_WindowClosedEventId = 20017;
const long UIA_MenuModeStartEventId = 20018;
const long UIA_MenuModeEndEventId = 20019;
const long UIA_InputReachedTargetEventId = 20020;
const long UIA_InputReachedOtherElementEventId = 20021;
const long UIA_InputDiscardedEventId = 20022;
const long UIA_SystemAlertEventId = 20023;
const long UIA_LiveRegionChangedEventId = 20024;
const long UIA_HostedFragmentRootsInvalidatedEventId = 20025;
const long UIA_Drag_DragStartEventId = 20026;
const long UIA_Drag_DragCancelEventId = 20027;
const long UIA_Drag_DragCompleteEventId = 20028;
const long UIA_DropTarget_DragEnterEventId = 20029;
const long UIA_DropTarget_DragLeaveEventId = 20030;
const long UIA_DropTarget_DroppedEventId = 20031;
const long UIA_TextEdit_TextChangedEventId = 20032;
const long UIA_TextEdit_ConversionTargetChangedEventId = 20033;
const long UIA_ChangesEventId = 20034;
const long UIA_NotificationEventId = 20035;
const long UIA_ActiveTextPositionChangedEventId = 20036;
const long UIA_RuntimeIdPropertyId = 30000;
const long UIA_BoundingRectanglePropertyId = 30001;
const long UIA_ProcessIdPropertyId = 30002;
const long UIA_ControlTypePropertyId = 30003;
const long UIA_LocalizedControlTypePropertyId = 30004;
const long UIA_NamePropertyId = 30005;
const long UIA_AcceleratorKeyPropertyId = 30006;
const long UIA_AccessKeyPropertyId = 30007;
const long UIA_HasKeyboardFocusPropertyId = 30008;
const long UIA_IsKeyboardFocusablePropertyId = 30009;
const long UIA_IsEnabledPropertyId = 30010;
const long UIA_AutomationIdPropertyId = 30011;
const long UIA_ClassNamePropertyId = 30012;
const long UIA_HelpTextPropertyId = 30013;
const long UIA_ClickablePointPropertyId = 30014;
const long UIA_CulturePropertyId = 30015;
const long UIA_IsControlElementPropertyId = 30016;
const long UIA_IsContentElementPropertyId = 30017;
const long UIA_LabeledByPropertyId = 30018;
const long UIA_IsPasswordPropertyId = 30019;
const long UIA_NativeWindowHandlePropertyId = 30020;
const long UIA_ItemTypePropertyId = 30021;
const long UIA_IsOffscreenPropertyId = 30022;
const long UIA_OrientationPropertyId = 30023;
const long UIA_FrameworkIdPropertyId = 30024;
const long UIA_IsRequiredForFormPropertyId = 30025;
const long UIA_ItemStatusPropertyId = 30026;
const long UIA_IsDockPatternAvailablePropertyId = 30027;
const long UIA_IsExpandCollapsePatternAvailablePropertyId = 30028;
const long UIA_IsGridItemPatternAvailablePropertyId = 30029;
const long UIA_IsGridPatternAvailablePropertyId = 30030;
const long UIA_IsInvokePatternAvailablePropertyId = 30031;
const long UIA_IsMultipleViewPatternAvailablePropertyId = 30032;
const long UIA_IsRangeValuePatternAvailablePropertyId = 30033;
const long UIA_IsScrollPatternAvailablePropertyId = 30034;
const long UIA_IsScrollItemPatternAvailablePropertyId = 30035;
const long UIA_IsSelectionItemPatternAvailablePropertyId = 30036;
const long UIA_IsSelectionPatternAvailablePropertyId = 30037;
const long UIA_IsTablePatternAvailablePropertyId = 30038;
const long UIA_IsTableItemPatternAvailablePropertyId = 30039;
const long UIA_IsTextPatternAvailablePropertyId = 30040;
const long UIA_IsTogglePatternAvailablePropertyId = 30041;
const long UIA_IsTransformPatternAvailablePropertyId = 30042;
const long UIA_IsValuePatternAvailablePropertyId = 30043;
const long UIA_IsWindowPatternAvailablePropertyId = 30044;
const long UIA_ValueValuePropertyId = 30045;
const long UIA_ValueIsReadOnlyPropertyId = 30046;
const long UIA_RangeValueValuePropertyId = 30047;
const long UIA_RangeValueIsReadOnlyPropertyId = 30048;
const long UIA_RangeValueMinimumPropertyId = 30049;
const long UIA_RangeValueMaximumPropertyId = 30050;
const long UIA_RangeValueLargeChangePropertyId = 30051;
const long UIA_RangeValueSmallChangePropertyId = 30052;
const long UIA_ScrollHorizontalScrollPercentPropertyId = 30053;
const long UIA_ScrollHorizontalViewSizePropertyId = 30054;
const long UIA_ScrollVerticalScrollPercentPropertyId = 30055;
const long UIA_ScrollVerticalViewSizePropertyId = 30056;
const long UIA_ScrollHorizontallyScrollablePropertyId = 30057;
const long UIA_ScrollVerticallyScrollablePropertyId = 30058;
const long UIA_SelectionSelectionPropertyId = 30059;
const long UIA_SelectionCanSelectMultiplePropertyId = 30060;
const long UIA_SelectionIsSelectionRequiredPropertyId = 30061;
const long UIA_GridRowCountPropertyId = 30062;
const long UIA_GridColumnCountPropertyId = 30063;
const long UIA_GridItemRowPropertyId = 30064;
const long UIA_GridItemColumnPropertyId = 30065;
const long UIA_GridItemRowSpanPropertyId = 30066;
const long UIA_GridItemColumnSpanPropertyId = 30067;
const long UIA_GridItemContainingGridPropertyId = 30068;
const long UIA_DockDockPositionPropertyId = 30069;
const long UIA_ExpandCollapseExpandCollapseStatePropertyId = 30070;
const long UIA_MultipleViewCurrentViewPropertyId = 30071;
const long UIA_MultipleViewSupportedViewsPropertyId = 30072;
const long UIA_WindowCanMaximizePropertyId = 30073;
const long UIA_WindowCanMinimizePropertyId = 30074;
const long UIA_WindowWindowVisualStatePropertyId = 30075;
const long UIA_WindowWindowInteractionStatePropertyId = 30076;
const long UIA_WindowIsModalPropertyId = 30077;
const long UIA_WindowIsTopmostPropertyId = 30078;
const long UIA_SelectionItemIsSelectedPropertyId = 30079;
const long UIA_SelectionItemSelectionContainerPropertyId = 30080;
const long UIA_TableRowHeadersPropertyId = 30081;
const long UIA_TableColumnHeadersPropertyId = 30082;
const long UIA_TableRowOrColumnMajorPropertyId = 30083;
const long UIA_TableItemRowHeaderItemsPropertyId = 30084;
const long UIA_TableItemColumnHeaderItemsPropertyId = 30085;
const long UIA_ToggleToggleStatePropertyId = 30086;
const long UIA_TransformCanMovePropertyId = 30087;
const long UIA_TransformCanResizePropertyId = 30088;
const long UIA_TransformCanRotatePropertyId = 30089;
const long UIA_IsLegacyIAccessiblePatternAvailablePropertyId = 30090;
const long UIA_LegacyIAccessibleChildIdPropertyId = 30091;
const long UIA_LegacyIAccessibleNamePropertyId = 30092;
const long UIA_LegacyIAccessibleValuePropertyId = 30093;
const long UIA_LegacyIAccessibleDescriptionPropertyId = 30094;
const long UIA_LegacyIAccessibleRolePropertyId = 30095;
const long UIA_LegacyIAccessibleStatePropertyId = 30096;
const long UIA_LegacyIAccessibleHelpPropertyId = 30097;
const long UIA_LegacyIAccessibleKeyboardShortcutPropertyId = 30098;
const long UIA_LegacyIAccessibleSelectionPropertyId = 30099;
const long UIA_LegacyIAccessibleDefaultActionPropertyId = 30100;
const long UIA_AriaRolePropertyId = 30101;
const long UIA_AriaPropertiesPropertyId = 30102;
const long UIA_IsDataValidForFormPropertyId = 30103;
const long UIA_ControllerForPropertyId = 30104;
const long UIA_DescribedByPropertyId = 30105;
const long UIA_FlowsToPropertyId = 30106;
const long UIA_ProviderDescriptionPropertyId = 30107;
const long UIA_IsItemContainerPatternAvailablePropertyId = 30108;
const long UIA_IsVirtualizedItemPatternAvailablePropertyId = 30109;
const long UIA_IsSynchronizedInputPatternAvailablePropertyId = 30110;
const long UIA_OptimizeForVisualContentPropertyId = 30111;
const long UIA_IsObjectModelPatternAvailablePropertyId = 30112;
const long UIA_AnnotationAnnotationTypeIdPropertyId = 30113;
const long UIA_AnnotationAnnotationTypeNamePropertyId = 30114;
const long UIA_AnnotationAuthorPropertyId = 30115;
const long UIA_AnnotationDateTimePropertyId = 30116;
const long UIA_AnnotationTargetPropertyId = 30117;
const long UIA_IsAnnotationPatternAvailablePropertyId = 30118;
const long UIA_IsTextPattern2AvailablePropertyId = 30119;
const long UIA_StylesStyleIdPropertyId = 30120;
const long UIA_StylesStyleNamePropertyId = 30121;
const long UIA_StylesFillColorPropertyId = 30122;
const long UIA_StylesFillPatternStylePropertyId = 30123;
const long UIA_StylesShapePropertyId = 30124;
const long UIA_StylesFillPatternColorPropertyId = 30125;
const long UIA_StylesExtendedPropertiesPropertyId = 30126;
const long UIA_IsStylesPatternAvailablePropertyId = 30127;
const long UIA_IsSpreadsheetPatternAvailablePropertyId = 30128;
const long UIA_SpreadsheetItemFormulaPropertyId = 30129;
const long UIA_SpreadsheetItemAnnotationObjectsPropertyId = 30130;
const long UIA_SpreadsheetItemAnnotationTypesPropertyId = 30131;
const long UIA_IsSpreadsheetItemPatternAvailablePropertyId = 30132;
const long UIA_Transform2CanZoomPropertyId = 30133;
const long UIA_IsTransformPattern2AvailablePropertyId = 30134;
const long UIA_LiveSettingPropertyId = 30135;
const long UIA_IsTextChildPatternAvailablePropertyId = 30136;
const long UIA_IsDragPatternAvailablePropertyId = 30137;
const long UIA_DragIsGrabbedPropertyId = 30138;
const long UIA_DragDropEffectPropertyId = 30139;
const long UIA_DragDropEffectsPropertyId = 30140;
const long UIA_IsDropTargetPatternAvailablePropertyId = 30141;
const long UIA_DropTargetDropTargetEffectPropertyId = 30142;
const long UIA_DropTargetDropTargetEffectsPropertyId = 30143;
const long UIA_DragGrabbedItemsPropertyId = 30144;
const long UIA_Transform2ZoomLevelPropertyId = 30145;
const long UIA_Transform2ZoomMinimumPropertyId = 30146;
const long UIA_Transform2ZoomMaximumPropertyId = 30147;
const long UIA_FlowsFromPropertyId = 30148;
const long UIA_IsTextEditPatternAvailablePropertyId = 30149;
const long UIA_IsPeripheralPropertyId = 30150;
const long UIA_IsCustomNavigationPatternAvailablePropertyId = 30151;
const long UIA_PositionInSetPropertyId = 30152;
const long UIA_SizeOfSetPropertyId = 30153;
const long UIA_LevelPropertyId = 30154;
const long UIA_AnnotationTypesPropertyId = 30155;
const long UIA_AnnotationObjectsPropertyId = 30156;
const long UIA_LandmarkTypePropertyId = 30157;
const long UIA_LocalizedLandmarkTypePropertyId = 30158;
const long UIA_FullDescriptionPropertyId = 30159;
const long UIA_FillColorPropertyId = 30160;
const long UIA_OutlineColorPropertyId = 30161;
const long UIA_FillTypePropertyId = 30162;
const long UIA_VisualEffectsPropertyId = 30163;
const long UIA_OutlineThicknessPropertyId = 30164;
const long UIA_CenterPointPropertyId = 30165;
const long UIA_RotationPropertyId = 30166;
const long UIA_SizePropertyId = 30167;
const long UIA_IsSelectionPattern2AvailablePropertyId = 30168;
const long UIA_Selection2FirstSelectedItemPropertyId = 30169;
const long UIA_Selection2LastSelectedItemPropertyId = 30170;
const long UIA_Selection2CurrentSelectedItemPropertyId = 30171;
const long UIA_Selection2ItemCountPropertyId = 30172;
const long UIA_HeadingLevelPropertyId = 30173;
const long UIA_IsDialogPropertyId = 30174;
const long UIA_AnimationStyleAttributeId = 40000;
const long UIA_BackgroundColorAttributeId = 40001;
const long UIA_BulletStyleAttributeId = 40002;
const long UIA_CapStyleAttributeId = 40003;
const long UIA_CultureAttributeId = 40004;
const long UIA_FontNameAttributeId = 40005;
const long UIA_FontSizeAttributeId = 40006;
const long UIA_FontWeightAttributeId = 40007;
const long UIA_ForegroundColorAttributeId = 40008;
const long UIA_HorizontalTextAlignmentAttributeId = 40009;
const long UIA_IndentationFirstLineAttributeId = 40010;
const long UIA_IndentationLeadingAttributeId = 40011;
const long UIA_IndentationTrailingAttributeId = 40012;
const long UIA_IsHiddenAttributeId = 40013;
const long UIA_IsItalicAttributeId = 40014;
const long UIA_IsReadOnlyAttributeId = 40015;
const long UIA_IsSubscriptAttributeId = 40016;
const long UIA_IsSuperscriptAttributeId = 40017;
const long UIA_MarginBottomAttributeId = 40018;
const long UIA_MarginLeadingAttributeId = 40019;
const long UIA_MarginTopAttributeId = 40020;
const long UIA_MarginTrailingAttributeId = 40021;
const long UIA_OutlineStylesAttributeId = 40022;
const long UIA_OverlineColorAttributeId = 40023;
const long UIA_OverlineStyleAttributeId = 40024;
const long UIA_StrikethroughColorAttributeId = 40025;
const long UIA_StrikethroughStyleAttributeId = 40026;
const long UIA_TabsAttributeId = 40027;
const long UIA_TextFlowDirectionsAttributeId = 40028;
const long UIA_UnderlineColorAttributeId = 40029;
const long UIA_UnderlineStyleAttributeId = 40030;
const long UIA_AnnotationTypesAttributeId = 40031;
const long UIA_AnnotationObjectsAttributeId = 40032;
const long UIA_StyleNameAttributeId = 40033;
const long UIA_StyleIdAttributeId = 40034;
const long UIA_LinkAttributeId = 40035;
const long UIA_IsActiveAttributeId = 40036;
const long UIA_SelectionActiveEndAttributeId = 40037;
const long UIA_CaretPositionAttributeId = 40038;
const long UIA_CaretBidiModeAttributeId = 40039;
const long UIA_LineSpacingAttributeId = 40040;
const long UIA_BeforeParagraphSpacingAttributeId = 40041;
const long UIA_AfterParagraphSpacingAttributeId = 40042;
const long UIA_SayAsInterpretAsAttributeId = 40043;
const long UIA_ButtonControlTypeId = 50000;
const long UIA_CalendarControlTypeId = 50001;
const long UIA_CheckBoxControlTypeId = 50002;
const long UIA_ComboBoxControlTypeId = 50003;
const long UIA_EditControlTypeId = 50004;
const long UIA_HyperlinkControlTypeId = 50005;
const long UIA_ImageControlTypeId = 50006;
const long UIA_ListItemControlTypeId = 50007;
const long UIA_ListControlTypeId = 50008;
const long UIA_MenuControlTypeId = 50009;
const long UIA_MenuBarControlTypeId = 50010;
const long UIA_MenuItemControlTypeId = 50011;
const long UIA_ProgressBarControlTypeId = 50012;
const long UIA_RadioButtonControlTypeId = 50013;
const long UIA_ScrollBarControlTypeId = 50014;
const long UIA_SliderControlTypeId = 50015;
const long UIA_SpinnerControlTypeId = 50016;
const long UIA_StatusBarControlTypeId = 50017;
const long UIA_TabControlTypeId = 50018;
const long UIA_TabItemControlTypeId = 50019;
const long UIA_TextControlTypeId = 50020;
const long UIA_ToolBarControlTypeId = 50021;
const long UIA_ToolTipControlTypeId = 50022;
const long UIA_TreeControlTypeId = 50023;
const long UIA_TreeItemControlTypeId = 50024;
const long UIA_CustomControlTypeId = 50025;
const long UIA_GroupControlTypeId = 50026;
const long UIA_ThumbControlTypeId = 50027;
const long UIA_DataGridControlTypeId = 50028;
const long UIA_DataItemControlTypeId = 50029;
const long UIA_DocumentControlTypeId = 50030;
const long UIA_SplitButtonControlTypeId = 50031;
const long UIA_WindowControlTypeId = 50032;
const long UIA_PaneControlTypeId = 50033;
const long UIA_HeaderControlTypeId = 50034;
const long UIA_HeaderItemControlTypeId = 50035;
const long UIA_TableControlTypeId = 50036;
const long UIA_TitleBarControlTypeId = 50037;
const long UIA_SeparatorControlTypeId = 50038;
const long UIA_SemanticZoomControlTypeId = 50039;
const long UIA_AppBarControlTypeId = 50040;
const long AnnotationType_Unknown = 60000;
const long AnnotationType_SpellingError = 60001;
const long AnnotationType_GrammarError = 60002;
const long AnnotationType_Comment = 60003;
const long AnnotationType_FormulaError = 60004;
const long AnnotationType_TrackChanges = 60005;
const long AnnotationType_Header = 60006;
const long AnnotationType_Footer = 60007;
const long AnnotationType_Highlighted = 60008;
const long AnnotationType_Endnote = 60009;
const long AnnotationType_Footnote = 60010;
const long AnnotationType_InsertionChange = 60011;
const long AnnotationType_DeletionChange = 60012;
const long AnnotationType_MoveChange = 60013;
const long AnnotationType_FormatChange = 60014;
const long AnnotationType_UnsyncedChange = 60015;
const long AnnotationType_EditingLockedChange = 60016;
const long AnnotationType_ExternalChange = 60017;
const long AnnotationType_ConflictingChange = 60018;
const long AnnotationType_Author = 60019;
const long AnnotationType_AdvancedProofingIssue = 60020;
const long AnnotationType_DataValidationError = 60021;
const long AnnotationType_CircularReferenceError = 60022;
const long AnnotationType_Mathematics = 60023;
const long StyleId_Custom = 70000;
const long StyleId_Heading1 = 70001;
const long StyleId_Heading2 = 70002;
const long StyleId_Heading3 = 70003;
const long StyleId_Heading4 = 70004;
const long StyleId_Heading5 = 70005;
const long StyleId_Heading6 = 70006;
const long StyleId_Heading7 = 70007;
const long StyleId_Heading8 = 70008;
const long StyleId_Heading9 = 70009;
const long StyleId_Title = 70010;
const long StyleId_Subtitle = 70011;
const long StyleId_Normal = 70012;
const long StyleId_Emphasis = 70013;
const long StyleId_Quote = 70014;
const long StyleId_BulletedList = 70015;
const long StyleId_NumberedList = 70016;
const long UIA_CustomLandmarkTypeId = 80000;
const long UIA_FormLandmarkTypeId = 80001;
const long UIA_MainLandmarkTypeId = 80002;
const long UIA_NavigationLandmarkTypeId = 80003;
const long UIA_SearchLandmarkTypeId = 80004;
const long HeadingLevel_None = 80050;
const long HeadingLevel1 = 80051;
const long HeadingLevel2 = 80052;
const long HeadingLevel3 = 80053;
const long HeadingLevel4 = 80054;
const long HeadingLevel5 = 80055;
const long HeadingLevel6 = 80056;
const long HeadingLevel7 = 80057;
const long HeadingLevel8 = 80058;
const long HeadingLevel9 = 80059;
const long UIA_SummaryChangeId = 90000;
const long UIA_SayAsInterpretAsMetadataId = 100000;
EXTERN_C const IID IID_IUIAutomationElement;
    typedef struct IUIAutomationElementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationElement * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationElement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationElement * This);
        HRESULT ( STDMETHODCALLTYPE *SetFocus )(
            __RPC__in IUIAutomationElement * This);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt SAFEARRAY * *runtimeId);
        HRESULT ( STDMETHODCALLTYPE *FindFirst )(
            __RPC__in IUIAutomationElement * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAll )(
            __RPC__in IUIAutomationElement * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )(
            __RPC__in IUIAutomationElement * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAllBuildCache )(
            __RPC__in IUIAutomationElement * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *BuildUpdatedCache )(
            __RPC__in IUIAutomationElement * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **updatedElement);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValue )(
            __RPC__in IUIAutomationElement * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValueEx )(
            __RPC__in IUIAutomationElement * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValue )(
            __RPC__in IUIAutomationElement * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValueEx )(
            __RPC__in IUIAutomationElement * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPatternAs )(
            __RPC__in IUIAutomationElement * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPatternAs )(
            __RPC__in IUIAutomationElement * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )(
            __RPC__in IUIAutomationElement * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPattern )(
            __RPC__in IUIAutomationElement * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedParent )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt IUIAutomationElement **parent);
        HRESULT ( STDMETHODCALLTYPE *GetCachedChildren )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **children);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentName )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControllerFor )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDescribedBy )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsTo )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProviderDescription )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProcessId )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControlType )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedControlType )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedName )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAcceleratorKey )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAccessKey )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHasKeyboardFocus )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsEnabled )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAutomationId )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedClassName )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHelpText )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCulture )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsControlElement )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsContentElement )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsPassword )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedNativeWindowHandle )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemType )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsOffscreen )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedOrientation )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFrameworkId )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsRequiredForForm )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemStatus )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedBoundingRectangle )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLabeledBy )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaRole )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaProperties )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsDataValidForForm )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControllerFor )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedDescribedBy )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsTo )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProviderDescription )(
            __RPC__in IUIAutomationElement * This,
                                __RPC__deref_out_opt BSTR *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )(
            __RPC__in IUIAutomationElement * This,
                        __RPC__out POINT *clickable,
                                __RPC__out BOOL *gotClickable);
        END_INTERFACE
    } IUIAutomationElementVtbl;
    interface IUIAutomationElement
    {
        CONST_VTBL struct IUIAutomationElementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFocus(This) )
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) )
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) )
    ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedParent(This,parent) )
    ( (This)->lpVtbl -> GetCachedChildren(This,children) )
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) )
EXTERN_C const IID IID_IUIAutomationElementArray;
    typedef struct IUIAutomationElementArrayVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationElementArray * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationElementArray * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationElementArray * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in IUIAutomationElementArray * This,
                                __RPC__out int *length);
        HRESULT ( STDMETHODCALLTYPE *GetElement )(
            __RPC__in IUIAutomationElementArray * This,
                       int index,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        END_INTERFACE
    } IUIAutomationElementArrayVtbl;
    interface IUIAutomationElementArray
    {
        CONST_VTBL struct IUIAutomationElementArrayVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Length(This,length) )
    ( (This)->lpVtbl -> GetElement(This,index,element) )
EXTERN_C const IID IID_IUIAutomationCondition;
    typedef struct IUIAutomationConditionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationCondition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationCondition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationCondition * This);
        END_INTERFACE
    } IUIAutomationConditionVtbl;
    interface IUIAutomationCondition
    {
        CONST_VTBL struct IUIAutomationConditionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
EXTERN_C const IID IID_IUIAutomationBoolCondition;
    typedef struct IUIAutomationBoolConditionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationBoolCondition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationBoolCondition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationBoolCondition * This);
                        HRESULT ( STDMETHODCALLTYPE *get_BooleanValue )(
            __RPC__in IUIAutomationBoolCondition * This,
                                __RPC__out BOOL *boolVal);
        END_INTERFACE
    } IUIAutomationBoolConditionVtbl;
    interface IUIAutomationBoolCondition
    {
        CONST_VTBL struct IUIAutomationBoolConditionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_BooleanValue(This,boolVal) )
EXTERN_C const IID IID_IUIAutomationPropertyCondition;
    typedef struct IUIAutomationPropertyConditionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationPropertyCondition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationPropertyCondition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationPropertyCondition * This);
                        HRESULT ( STDMETHODCALLTYPE *get_PropertyId )(
            __RPC__in IUIAutomationPropertyCondition * This,
                                __RPC__out PROPERTYID *propertyId);
                        HRESULT ( STDMETHODCALLTYPE *get_PropertyValue )(
            __RPC__in IUIAutomationPropertyCondition * This,
                                __RPC__out VARIANT *propertyValue);
                        HRESULT ( STDMETHODCALLTYPE *get_PropertyConditionFlags )(
            __RPC__in IUIAutomationPropertyCondition * This,
                                __RPC__out enum PropertyConditionFlags *flags);
        END_INTERFACE
    } IUIAutomationPropertyConditionVtbl;
    interface IUIAutomationPropertyCondition
    {
        CONST_VTBL struct IUIAutomationPropertyConditionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_PropertyId(This,propertyId) )
    ( (This)->lpVtbl -> get_PropertyValue(This,propertyValue) )
    ( (This)->lpVtbl -> get_PropertyConditionFlags(This,flags) )
EXTERN_C const IID IID_IUIAutomationAndCondition;
    typedef struct IUIAutomationAndConditionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationAndCondition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationAndCondition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationAndCondition * This);
                        HRESULT ( STDMETHODCALLTYPE *get_ChildCount )(
            __RPC__in IUIAutomationAndCondition * This,
                                __RPC__out int *childCount);
        HRESULT ( STDMETHODCALLTYPE *GetChildrenAsNativeArray )(
            __RPC__in IUIAutomationAndCondition * This,
                                          __RPC__deref_out_ecount_full_opt(*childArrayCount) IUIAutomationCondition ***childArray,
                        __RPC__out int *childArrayCount);
        HRESULT ( STDMETHODCALLTYPE *GetChildren )(
            __RPC__in IUIAutomationAndCondition * This,
                                __RPC__deref_out_opt SAFEARRAY * *childArray);
        END_INTERFACE
    } IUIAutomationAndConditionVtbl;
    interface IUIAutomationAndCondition
    {
        CONST_VTBL struct IUIAutomationAndConditionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_ChildCount(This,childCount) )
    ( (This)->lpVtbl -> GetChildrenAsNativeArray(This,childArray,childArrayCount) )
    ( (This)->lpVtbl -> GetChildren(This,childArray) )
EXTERN_C const IID IID_IUIAutomationOrCondition;
    typedef struct IUIAutomationOrConditionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationOrCondition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationOrCondition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationOrCondition * This);
                        HRESULT ( STDMETHODCALLTYPE *get_ChildCount )(
            __RPC__in IUIAutomationOrCondition * This,
                                __RPC__out int *childCount);
        HRESULT ( STDMETHODCALLTYPE *GetChildrenAsNativeArray )(
            __RPC__in IUIAutomationOrCondition * This,
                                          __RPC__deref_out_ecount_full_opt(*childArrayCount) IUIAutomationCondition ***childArray,
                        __RPC__out int *childArrayCount);
        HRESULT ( STDMETHODCALLTYPE *GetChildren )(
            __RPC__in IUIAutomationOrCondition * This,
                                __RPC__deref_out_opt SAFEARRAY * *childArray);
        END_INTERFACE
    } IUIAutomationOrConditionVtbl;
    interface IUIAutomationOrCondition
    {
        CONST_VTBL struct IUIAutomationOrConditionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_ChildCount(This,childCount) )
    ( (This)->lpVtbl -> GetChildrenAsNativeArray(This,childArray,childArrayCount) )
    ( (This)->lpVtbl -> GetChildren(This,childArray) )
EXTERN_C const IID IID_IUIAutomationNotCondition;
    typedef struct IUIAutomationNotConditionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationNotCondition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationNotCondition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationNotCondition * This);
        HRESULT ( STDMETHODCALLTYPE *GetChild )(
            __RPC__in IUIAutomationNotCondition * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
        END_INTERFACE
    } IUIAutomationNotConditionVtbl;
    interface IUIAutomationNotCondition
    {
        CONST_VTBL struct IUIAutomationNotConditionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetChild(This,condition) )
EXTERN_C const IID IID_IUIAutomationCacheRequest;
    typedef struct IUIAutomationCacheRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationCacheRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationCacheRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationCacheRequest * This);
        HRESULT ( STDMETHODCALLTYPE *AddProperty )(
            __RPC__in IUIAutomationCacheRequest * This,
                       PROPERTYID propertyId);
        HRESULT ( STDMETHODCALLTYPE *AddPattern )(
            __RPC__in IUIAutomationCacheRequest * This,
                       PATTERNID patternId);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IUIAutomationCacheRequest * This,
                                __RPC__deref_out_opt IUIAutomationCacheRequest **clonedRequest);
                        HRESULT ( STDMETHODCALLTYPE *get_TreeScope )(
            __RPC__in IUIAutomationCacheRequest * This,
                                __RPC__out enum TreeScope *scope);
                        HRESULT ( STDMETHODCALLTYPE *put_TreeScope )(
            __RPC__in IUIAutomationCacheRequest * This,
                       enum TreeScope scope);
                        HRESULT ( STDMETHODCALLTYPE *get_TreeFilter )(
            __RPC__in IUIAutomationCacheRequest * This,
                                __RPC__deref_out_opt IUIAutomationCondition **filter);
                        HRESULT ( STDMETHODCALLTYPE *put_TreeFilter )(
            __RPC__in IUIAutomationCacheRequest * This,
                       __RPC__in_opt IUIAutomationCondition *filter);
                        HRESULT ( STDMETHODCALLTYPE *get_AutomationElementMode )(
            __RPC__in IUIAutomationCacheRequest * This,
                                __RPC__out enum AutomationElementMode *mode);
                        HRESULT ( STDMETHODCALLTYPE *put_AutomationElementMode )(
            __RPC__in IUIAutomationCacheRequest * This,
                       enum AutomationElementMode mode);
        END_INTERFACE
    } IUIAutomationCacheRequestVtbl;
    interface IUIAutomationCacheRequest
    {
        CONST_VTBL struct IUIAutomationCacheRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddProperty(This,propertyId) )
    ( (This)->lpVtbl -> AddPattern(This,patternId) )
    ( (This)->lpVtbl -> Clone(This,clonedRequest) )
    ( (This)->lpVtbl -> get_TreeScope(This,scope) )
    ( (This)->lpVtbl -> put_TreeScope(This,scope) )
    ( (This)->lpVtbl -> get_TreeFilter(This,filter) )
    ( (This)->lpVtbl -> put_TreeFilter(This,filter) )
    ( (This)->lpVtbl -> get_AutomationElementMode(This,mode) )
    ( (This)->lpVtbl -> put_AutomationElementMode(This,mode) )
EXTERN_C const IID IID_IUIAutomationTreeWalker;
    typedef struct IUIAutomationTreeWalkerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationTreeWalker * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationTreeWalker * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationTreeWalker * This);
        HRESULT ( STDMETHODCALLTYPE *GetParentElement )(
            __RPC__in IUIAutomationTreeWalker * This,
                       __RPC__in_opt IUIAutomationElement *element,
                                __RPC__deref_out_opt IUIAutomationElement **parent);
        HRESULT ( STDMETHODCALLTYPE *GetFirstChildElement )(
            __RPC__in IUIAutomationTreeWalker * This,
                       __RPC__in_opt IUIAutomationElement *element,
                                __RPC__deref_out_opt IUIAutomationElement **first);
        HRESULT ( STDMETHODCALLTYPE *GetLastChildElement )(
            __RPC__in IUIAutomationTreeWalker * This,
                       __RPC__in_opt IUIAutomationElement *element,
                                __RPC__deref_out_opt IUIAutomationElement **last);
        HRESULT ( STDMETHODCALLTYPE *GetNextSiblingElement )(
            __RPC__in IUIAutomationTreeWalker * This,
                       __RPC__in_opt IUIAutomationElement *element,
                                __RPC__deref_out_opt IUIAutomationElement **next);
        HRESULT ( STDMETHODCALLTYPE *GetPreviousSiblingElement )(
            __RPC__in IUIAutomationTreeWalker * This,
                       __RPC__in_opt IUIAutomationElement *element,
                                __RPC__deref_out_opt IUIAutomationElement **previous);
        HRESULT ( STDMETHODCALLTYPE *NormalizeElement )(
            __RPC__in IUIAutomationTreeWalker * This,
                       __RPC__in_opt IUIAutomationElement *element,
                                __RPC__deref_out_opt IUIAutomationElement **normalized);
        HRESULT ( STDMETHODCALLTYPE *GetParentElementBuildCache )(
            __RPC__in IUIAutomationTreeWalker * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **parent);
        HRESULT ( STDMETHODCALLTYPE *GetFirstChildElementBuildCache )(
            __RPC__in IUIAutomationTreeWalker * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **first);
        HRESULT ( STDMETHODCALLTYPE *GetLastChildElementBuildCache )(
            __RPC__in IUIAutomationTreeWalker * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **last);
        HRESULT ( STDMETHODCALLTYPE *GetNextSiblingElementBuildCache )(
            __RPC__in IUIAutomationTreeWalker * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **next);
        HRESULT ( STDMETHODCALLTYPE *GetPreviousSiblingElementBuildCache )(
            __RPC__in IUIAutomationTreeWalker * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **previous);
        HRESULT ( STDMETHODCALLTYPE *NormalizeElementBuildCache )(
            __RPC__in IUIAutomationTreeWalker * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **normalized);
                        HRESULT ( STDMETHODCALLTYPE *get_Condition )(
            __RPC__in IUIAutomationTreeWalker * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
        END_INTERFACE
    } IUIAutomationTreeWalkerVtbl;
    interface IUIAutomationTreeWalker
    {
        CONST_VTBL struct IUIAutomationTreeWalkerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetParentElement(This,element,parent) )
    ( (This)->lpVtbl -> GetFirstChildElement(This,element,first) )
    ( (This)->lpVtbl -> GetLastChildElement(This,element,last) )
    ( (This)->lpVtbl -> GetNextSiblingElement(This,element,next) )
    ( (This)->lpVtbl -> GetPreviousSiblingElement(This,element,previous) )
    ( (This)->lpVtbl -> NormalizeElement(This,element,normalized) )
    ( (This)->lpVtbl -> GetParentElementBuildCache(This,element,cacheRequest,parent) )
    ( (This)->lpVtbl -> GetFirstChildElementBuildCache(This,element,cacheRequest,first) )
    ( (This)->lpVtbl -> GetLastChildElementBuildCache(This,element,cacheRequest,last) )
    ( (This)->lpVtbl -> GetNextSiblingElementBuildCache(This,element,cacheRequest,next) )
    ( (This)->lpVtbl -> GetPreviousSiblingElementBuildCache(This,element,cacheRequest,previous) )
    ( (This)->lpVtbl -> NormalizeElementBuildCache(This,element,cacheRequest,normalized) )
    ( (This)->lpVtbl -> get_Condition(This,condition) )
EXTERN_C const IID IID_IUIAutomationEventHandler;
    typedef struct IUIAutomationEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationEventHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationEventHandler * This);
        HRESULT ( STDMETHODCALLTYPE *HandleAutomationEvent )(
            __RPC__in IUIAutomationEventHandler * This,
                       __RPC__in_opt IUIAutomationElement *sender,
                       EVENTID eventId);
        END_INTERFACE
    } IUIAutomationEventHandlerVtbl;
    interface IUIAutomationEventHandler
    {
        CONST_VTBL struct IUIAutomationEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HandleAutomationEvent(This,sender,eventId) )
EXTERN_C const IID IID_IUIAutomationPropertyChangedEventHandler;
    typedef struct IUIAutomationPropertyChangedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationPropertyChangedEventHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationPropertyChangedEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationPropertyChangedEventHandler * This);
        HRESULT ( STDMETHODCALLTYPE *HandlePropertyChangedEvent )(
            __RPC__in IUIAutomationPropertyChangedEventHandler * This,
                       __RPC__in_opt IUIAutomationElement *sender,
                       PROPERTYID propertyId,
                       VARIANT newValue);
        END_INTERFACE
    } IUIAutomationPropertyChangedEventHandlerVtbl;
    interface IUIAutomationPropertyChangedEventHandler
    {
        CONST_VTBL struct IUIAutomationPropertyChangedEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HandlePropertyChangedEvent(This,sender,propertyId,newValue) )
EXTERN_C const IID IID_IUIAutomationStructureChangedEventHandler;
    typedef struct IUIAutomationStructureChangedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationStructureChangedEventHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationStructureChangedEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationStructureChangedEventHandler * This);
        HRESULT ( STDMETHODCALLTYPE *HandleStructureChangedEvent )(
            __RPC__in IUIAutomationStructureChangedEventHandler * This,
                       __RPC__in_opt IUIAutomationElement *sender,
                       enum StructureChangeType changeType,
                       __RPC__in SAFEARRAY * runtimeId);
        END_INTERFACE
    } IUIAutomationStructureChangedEventHandlerVtbl;
    interface IUIAutomationStructureChangedEventHandler
    {
        CONST_VTBL struct IUIAutomationStructureChangedEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HandleStructureChangedEvent(This,sender,changeType,runtimeId) )
EXTERN_C const IID IID_IUIAutomationFocusChangedEventHandler;
    typedef struct IUIAutomationFocusChangedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationFocusChangedEventHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationFocusChangedEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationFocusChangedEventHandler * This);
        HRESULT ( STDMETHODCALLTYPE *HandleFocusChangedEvent )(
            __RPC__in IUIAutomationFocusChangedEventHandler * This,
                       __RPC__in_opt IUIAutomationElement *sender);
        END_INTERFACE
    } IUIAutomationFocusChangedEventHandlerVtbl;
    interface IUIAutomationFocusChangedEventHandler
    {
        CONST_VTBL struct IUIAutomationFocusChangedEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HandleFocusChangedEvent(This,sender) )
EXTERN_C const IID IID_IUIAutomationTextEditTextChangedEventHandler;
    typedef struct IUIAutomationTextEditTextChangedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationTextEditTextChangedEventHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationTextEditTextChangedEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationTextEditTextChangedEventHandler * This);
        HRESULT ( STDMETHODCALLTYPE *HandleTextEditTextChangedEvent )(
            __RPC__in IUIAutomationTextEditTextChangedEventHandler * This,
                       __RPC__in_opt IUIAutomationElement *sender,
                       enum TextEditChangeType textEditChangeType,
                       __RPC__in SAFEARRAY * eventStrings);
        END_INTERFACE
    } IUIAutomationTextEditTextChangedEventHandlerVtbl;
    interface IUIAutomationTextEditTextChangedEventHandler
    {
        CONST_VTBL struct IUIAutomationTextEditTextChangedEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HandleTextEditTextChangedEvent(This,sender,textEditChangeType,eventStrings) )
EXTERN_C const IID IID_IUIAutomationChangesEventHandler;
    typedef struct IUIAutomationChangesEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationChangesEventHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationChangesEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationChangesEventHandler * This);
        HRESULT ( STDMETHODCALLTYPE *HandleChangesEvent )(
            __RPC__in IUIAutomationChangesEventHandler * This,
                       __RPC__in_opt IUIAutomationElement *sender,
                                __RPC__in_ecount_full(changesCount) struct UiaChangeInfo *uiaChanges,
                       int changesCount);
        END_INTERFACE
    } IUIAutomationChangesEventHandlerVtbl;
    interface IUIAutomationChangesEventHandler
    {
        CONST_VTBL struct IUIAutomationChangesEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HandleChangesEvent(This,sender,uiaChanges,changesCount) )
EXTERN_C const IID IID_IUIAutomationNotificationEventHandler;
    typedef struct IUIAutomationNotificationEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationNotificationEventHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationNotificationEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationNotificationEventHandler * This);
        HRESULT ( STDMETHODCALLTYPE *HandleNotificationEvent )(
            __RPC__in IUIAutomationNotificationEventHandler * This,
                       __RPC__in_opt IUIAutomationElement *sender,
            enum NotificationKind notificationKind,
            enum NotificationProcessing notificationProcessing,
                       __RPC__in BSTR displayString,
                       __RPC__in BSTR activityId);
        END_INTERFACE
    } IUIAutomationNotificationEventHandlerVtbl;
    interface IUIAutomationNotificationEventHandler
    {
        CONST_VTBL struct IUIAutomationNotificationEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HandleNotificationEvent(This,sender,notificationKind,notificationProcessing,displayString,activityId) )
EXTERN_C const IID IID_IUIAutomationInvokePattern;
    typedef struct IUIAutomationInvokePatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationInvokePattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationInvokePattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationInvokePattern * This);
        HRESULT ( STDMETHODCALLTYPE *Invoke )(
            __RPC__in IUIAutomationInvokePattern * This);
        END_INTERFACE
    } IUIAutomationInvokePatternVtbl;
    interface IUIAutomationInvokePattern
    {
        CONST_VTBL struct IUIAutomationInvokePatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This) )
EXTERN_C const IID IID_IUIAutomationDockPattern;
    typedef struct IUIAutomationDockPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationDockPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationDockPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationDockPattern * This);
        HRESULT ( STDMETHODCALLTYPE *SetDockPosition )(
            __RPC__in IUIAutomationDockPattern * This,
                       enum DockPosition dockPos);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDockPosition )(
            __RPC__in IUIAutomationDockPattern * This,
                                __RPC__out enum DockPosition *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedDockPosition )(
            __RPC__in IUIAutomationDockPattern * This,
                                __RPC__out enum DockPosition *retVal);
        END_INTERFACE
    } IUIAutomationDockPatternVtbl;
    interface IUIAutomationDockPattern
    {
        CONST_VTBL struct IUIAutomationDockPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDockPosition(This,dockPos) )
    ( (This)->lpVtbl -> get_CurrentDockPosition(This,retVal) )
    ( (This)->lpVtbl -> get_CachedDockPosition(This,retVal) )
EXTERN_C const IID IID_IUIAutomationExpandCollapsePattern;
    typedef struct IUIAutomationExpandCollapsePatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationExpandCollapsePattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationExpandCollapsePattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationExpandCollapsePattern * This);
        HRESULT ( STDMETHODCALLTYPE *Expand )(
            __RPC__in IUIAutomationExpandCollapsePattern * This);
        HRESULT ( STDMETHODCALLTYPE *Collapse )(
            __RPC__in IUIAutomationExpandCollapsePattern * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentExpandCollapseState )(
            __RPC__in IUIAutomationExpandCollapsePattern * This,
                                __RPC__out enum ExpandCollapseState *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedExpandCollapseState )(
            __RPC__in IUIAutomationExpandCollapsePattern * This,
                                __RPC__out enum ExpandCollapseState *retVal);
        END_INTERFACE
    } IUIAutomationExpandCollapsePatternVtbl;
    interface IUIAutomationExpandCollapsePattern
    {
        CONST_VTBL struct IUIAutomationExpandCollapsePatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Expand(This) )
    ( (This)->lpVtbl -> Collapse(This) )
    ( (This)->lpVtbl -> get_CurrentExpandCollapseState(This,retVal) )
    ( (This)->lpVtbl -> get_CachedExpandCollapseState(This,retVal) )
EXTERN_C const IID IID_IUIAutomationGridPattern;
    typedef struct IUIAutomationGridPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationGridPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationGridPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationGridPattern * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IUIAutomationGridPattern * This,
                       int row,
                       int column,
                                __RPC__deref_out_opt IUIAutomationElement **element);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentRowCount )(
            __RPC__in IUIAutomationGridPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentColumnCount )(
            __RPC__in IUIAutomationGridPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedRowCount )(
            __RPC__in IUIAutomationGridPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedColumnCount )(
            __RPC__in IUIAutomationGridPattern * This,
                                __RPC__out int *retVal);
        END_INTERFACE
    } IUIAutomationGridPatternVtbl;
    interface IUIAutomationGridPattern
    {
        CONST_VTBL struct IUIAutomationGridPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItem(This,row,column,element) )
    ( (This)->lpVtbl -> get_CurrentRowCount(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentColumnCount(This,retVal) )
    ( (This)->lpVtbl -> get_CachedRowCount(This,retVal) )
    ( (This)->lpVtbl -> get_CachedColumnCount(This,retVal) )
EXTERN_C const IID IID_IUIAutomationGridItemPattern;
    typedef struct IUIAutomationGridItemPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationGridItemPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationGridItemPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationGridItemPattern * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentContainingGrid )(
            __RPC__in IUIAutomationGridItemPattern * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentRow )(
            __RPC__in IUIAutomationGridItemPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentColumn )(
            __RPC__in IUIAutomationGridItemPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentRowSpan )(
            __RPC__in IUIAutomationGridItemPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentColumnSpan )(
            __RPC__in IUIAutomationGridItemPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedContainingGrid )(
            __RPC__in IUIAutomationGridItemPattern * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedRow )(
            __RPC__in IUIAutomationGridItemPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedColumn )(
            __RPC__in IUIAutomationGridItemPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedRowSpan )(
            __RPC__in IUIAutomationGridItemPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedColumnSpan )(
            __RPC__in IUIAutomationGridItemPattern * This,
                                __RPC__out int *retVal);
        END_INTERFACE
    } IUIAutomationGridItemPatternVtbl;
    interface IUIAutomationGridItemPattern
    {
        CONST_VTBL struct IUIAutomationGridItemPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_CurrentContainingGrid(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentRow(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentColumn(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentRowSpan(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentColumnSpan(This,retVal) )
    ( (This)->lpVtbl -> get_CachedContainingGrid(This,retVal) )
    ( (This)->lpVtbl -> get_CachedRow(This,retVal) )
    ( (This)->lpVtbl -> get_CachedColumn(This,retVal) )
    ( (This)->lpVtbl -> get_CachedRowSpan(This,retVal) )
    ( (This)->lpVtbl -> get_CachedColumnSpan(This,retVal) )
EXTERN_C const IID IID_IUIAutomationMultipleViewPattern;
    typedef struct IUIAutomationMultipleViewPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationMultipleViewPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationMultipleViewPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationMultipleViewPattern * This);
        HRESULT ( STDMETHODCALLTYPE *GetViewName )(
            __RPC__in IUIAutomationMultipleViewPattern * This,
                       int view,
                                __RPC__deref_out_opt BSTR *name);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentView )(
            __RPC__in IUIAutomationMultipleViewPattern * This,
                       int view);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCurrentView )(
            __RPC__in IUIAutomationMultipleViewPattern * This,
                                __RPC__out int *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSupportedViews )(
            __RPC__in IUIAutomationMultipleViewPattern * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCurrentView )(
            __RPC__in IUIAutomationMultipleViewPattern * This,
                                __RPC__out int *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedSupportedViews )(
            __RPC__in IUIAutomationMultipleViewPattern * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
        END_INTERFACE
    } IUIAutomationMultipleViewPatternVtbl;
    interface IUIAutomationMultipleViewPattern
    {
        CONST_VTBL struct IUIAutomationMultipleViewPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetViewName(This,view,name) )
    ( (This)->lpVtbl -> SetCurrentView(This,view) )
    ( (This)->lpVtbl -> get_CurrentCurrentView(This,retVal) )
    ( (This)->lpVtbl -> GetCurrentSupportedViews(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCurrentView(This,retVal) )
    ( (This)->lpVtbl -> GetCachedSupportedViews(This,retVal) )
EXTERN_C const IID IID_IUIAutomationObjectModelPattern;
    typedef struct IUIAutomationObjectModelPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationObjectModelPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationObjectModelPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationObjectModelPattern * This);
        HRESULT ( STDMETHODCALLTYPE *GetUnderlyingObjectModel )(
            __RPC__in IUIAutomationObjectModelPattern * This,
                                __RPC__deref_out_opt IUnknown **retVal);
        END_INTERFACE
    } IUIAutomationObjectModelPatternVtbl;
    interface IUIAutomationObjectModelPattern
    {
        CONST_VTBL struct IUIAutomationObjectModelPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUnderlyingObjectModel(This,retVal) )
EXTERN_C const IID IID_IUIAutomationRangeValuePattern;
    typedef struct IUIAutomationRangeValuePatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationRangeValuePattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationRangeValuePattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationRangeValuePattern * This);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in IUIAutomationRangeValuePattern * This,
                       double val);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentValue )(
            __RPC__in IUIAutomationRangeValuePattern * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsReadOnly )(
            __RPC__in IUIAutomationRangeValuePattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentMaximum )(
            __RPC__in IUIAutomationRangeValuePattern * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentMinimum )(
            __RPC__in IUIAutomationRangeValuePattern * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLargeChange )(
            __RPC__in IUIAutomationRangeValuePattern * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentSmallChange )(
            __RPC__in IUIAutomationRangeValuePattern * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedValue )(
            __RPC__in IUIAutomationRangeValuePattern * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsReadOnly )(
            __RPC__in IUIAutomationRangeValuePattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedMaximum )(
            __RPC__in IUIAutomationRangeValuePattern * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedMinimum )(
            __RPC__in IUIAutomationRangeValuePattern * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLargeChange )(
            __RPC__in IUIAutomationRangeValuePattern * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedSmallChange )(
            __RPC__in IUIAutomationRangeValuePattern * This,
                                __RPC__out double *retVal);
        END_INTERFACE
    } IUIAutomationRangeValuePatternVtbl;
    interface IUIAutomationRangeValuePattern
    {
        CONST_VTBL struct IUIAutomationRangeValuePatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetValue(This,val) )
    ( (This)->lpVtbl -> get_CurrentValue(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsReadOnly(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentMaximum(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentMinimum(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLargeChange(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentSmallChange(This,retVal) )
    ( (This)->lpVtbl -> get_CachedValue(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsReadOnly(This,retVal) )
    ( (This)->lpVtbl -> get_CachedMaximum(This,retVal) )
    ( (This)->lpVtbl -> get_CachedMinimum(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLargeChange(This,retVal) )
    ( (This)->lpVtbl -> get_CachedSmallChange(This,retVal) )
EXTERN_C const IID IID_IUIAutomationScrollPattern;
    typedef struct IUIAutomationScrollPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationScrollPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationScrollPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationScrollPattern * This);
        HRESULT ( STDMETHODCALLTYPE *Scroll )(
            __RPC__in IUIAutomationScrollPattern * This,
                       enum ScrollAmount horizontalAmount,
                       enum ScrollAmount verticalAmount);
        HRESULT ( STDMETHODCALLTYPE *SetScrollPercent )(
            __RPC__in IUIAutomationScrollPattern * This,
                       double horizontalPercent,
                       double verticalPercent);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHorizontalScrollPercent )(
            __RPC__in IUIAutomationScrollPattern * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentVerticalScrollPercent )(
            __RPC__in IUIAutomationScrollPattern * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHorizontalViewSize )(
            __RPC__in IUIAutomationScrollPattern * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentVerticalViewSize )(
            __RPC__in IUIAutomationScrollPattern * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHorizontallyScrollable )(
            __RPC__in IUIAutomationScrollPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentVerticallyScrollable )(
            __RPC__in IUIAutomationScrollPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHorizontalScrollPercent )(
            __RPC__in IUIAutomationScrollPattern * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedVerticalScrollPercent )(
            __RPC__in IUIAutomationScrollPattern * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHorizontalViewSize )(
            __RPC__in IUIAutomationScrollPattern * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedVerticalViewSize )(
            __RPC__in IUIAutomationScrollPattern * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHorizontallyScrollable )(
            __RPC__in IUIAutomationScrollPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedVerticallyScrollable )(
            __RPC__in IUIAutomationScrollPattern * This,
                                __RPC__out BOOL *retVal);
        END_INTERFACE
    } IUIAutomationScrollPatternVtbl;
    interface IUIAutomationScrollPattern
    {
        CONST_VTBL struct IUIAutomationScrollPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Scroll(This,horizontalAmount,verticalAmount) )
    ( (This)->lpVtbl -> SetScrollPercent(This,horizontalPercent,verticalPercent) )
    ( (This)->lpVtbl -> get_CurrentHorizontalScrollPercent(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentVerticalScrollPercent(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHorizontalViewSize(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentVerticalViewSize(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHorizontallyScrollable(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentVerticallyScrollable(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHorizontalScrollPercent(This,retVal) )
    ( (This)->lpVtbl -> get_CachedVerticalScrollPercent(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHorizontalViewSize(This,retVal) )
    ( (This)->lpVtbl -> get_CachedVerticalViewSize(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHorizontallyScrollable(This,retVal) )
    ( (This)->lpVtbl -> get_CachedVerticallyScrollable(This,retVal) )
EXTERN_C const IID IID_IUIAutomationScrollItemPattern;
    typedef struct IUIAutomationScrollItemPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationScrollItemPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationScrollItemPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationScrollItemPattern * This);
        HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )(
            __RPC__in IUIAutomationScrollItemPattern * This);
        END_INTERFACE
    } IUIAutomationScrollItemPatternVtbl;
    interface IUIAutomationScrollItemPattern
    {
        CONST_VTBL struct IUIAutomationScrollItemPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ScrollIntoView(This) )
EXTERN_C const IID IID_IUIAutomationSelectionPattern;
    typedef struct IUIAutomationSelectionPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationSelectionPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationSelectionPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationSelectionPattern * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSelection )(
            __RPC__in IUIAutomationSelectionPattern * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCanSelectMultiple )(
            __RPC__in IUIAutomationSelectionPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsSelectionRequired )(
            __RPC__in IUIAutomationSelectionPattern * This,
                                __RPC__out BOOL *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedSelection )(
            __RPC__in IUIAutomationSelectionPattern * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCanSelectMultiple )(
            __RPC__in IUIAutomationSelectionPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsSelectionRequired )(
            __RPC__in IUIAutomationSelectionPattern * This,
                                __RPC__out BOOL *retVal);
        END_INTERFACE
    } IUIAutomationSelectionPatternVtbl;
    interface IUIAutomationSelectionPattern
    {
        CONST_VTBL struct IUIAutomationSelectionPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrentSelection(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentCanSelectMultiple(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsSelectionRequired(This,retVal) )
    ( (This)->lpVtbl -> GetCachedSelection(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCanSelectMultiple(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsSelectionRequired(This,retVal) )
EXTERN_C const IID IID_IUIAutomationSelectionPattern2;
    typedef struct IUIAutomationSelectionPattern2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationSelectionPattern2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationSelectionPattern2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationSelectionPattern2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSelection )(
            __RPC__in IUIAutomationSelectionPattern2 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCanSelectMultiple )(
            __RPC__in IUIAutomationSelectionPattern2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsSelectionRequired )(
            __RPC__in IUIAutomationSelectionPattern2 * This,
                                __RPC__out BOOL *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedSelection )(
            __RPC__in IUIAutomationSelectionPattern2 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCanSelectMultiple )(
            __RPC__in IUIAutomationSelectionPattern2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsSelectionRequired )(
            __RPC__in IUIAutomationSelectionPattern2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFirstSelectedItem )(
            __RPC__in IUIAutomationSelectionPattern2 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLastSelectedItem )(
            __RPC__in IUIAutomationSelectionPattern2 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCurrentSelectedItem )(
            __RPC__in IUIAutomationSelectionPattern2 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemCount )(
            __RPC__in IUIAutomationSelectionPattern2 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFirstSelectedItem )(
            __RPC__in IUIAutomationSelectionPattern2 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLastSelectedItem )(
            __RPC__in IUIAutomationSelectionPattern2 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCurrentSelectedItem )(
            __RPC__in IUIAutomationSelectionPattern2 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemCount )(
            __RPC__in IUIAutomationSelectionPattern2 * This,
                                __RPC__out int *retVal);
        END_INTERFACE
    } IUIAutomationSelectionPattern2Vtbl;
    interface IUIAutomationSelectionPattern2
    {
        CONST_VTBL struct IUIAutomationSelectionPattern2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrentSelection(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentCanSelectMultiple(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsSelectionRequired(This,retVal) )
    ( (This)->lpVtbl -> GetCachedSelection(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCanSelectMultiple(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsSelectionRequired(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFirstSelectedItem(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLastSelectedItem(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentCurrentSelectedItem(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemCount(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFirstSelectedItem(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLastSelectedItem(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCurrentSelectedItem(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemCount(This,retVal) )
EXTERN_C const IID IID_IUIAutomationSelectionItemPattern;
    typedef struct IUIAutomationSelectionItemPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationSelectionItemPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationSelectionItemPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationSelectionItemPattern * This);
        HRESULT ( STDMETHODCALLTYPE *Select )(
            __RPC__in IUIAutomationSelectionItemPattern * This);
        HRESULT ( STDMETHODCALLTYPE *AddToSelection )(
            __RPC__in IUIAutomationSelectionItemPattern * This);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )(
            __RPC__in IUIAutomationSelectionItemPattern * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsSelected )(
            __RPC__in IUIAutomationSelectionItemPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentSelectionContainer )(
            __RPC__in IUIAutomationSelectionItemPattern * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsSelected )(
            __RPC__in IUIAutomationSelectionItemPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedSelectionContainer )(
            __RPC__in IUIAutomationSelectionItemPattern * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
        END_INTERFACE
    } IUIAutomationSelectionItemPatternVtbl;
    interface IUIAutomationSelectionItemPattern
    {
        CONST_VTBL struct IUIAutomationSelectionItemPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Select(This) )
    ( (This)->lpVtbl -> AddToSelection(This) )
    ( (This)->lpVtbl -> RemoveFromSelection(This) )
    ( (This)->lpVtbl -> get_CurrentIsSelected(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentSelectionContainer(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsSelected(This,retVal) )
    ( (This)->lpVtbl -> get_CachedSelectionContainer(This,retVal) )
EXTERN_C const IID IID_IUIAutomationSynchronizedInputPattern;
    typedef struct IUIAutomationSynchronizedInputPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationSynchronizedInputPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationSynchronizedInputPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationSynchronizedInputPattern * This);
        HRESULT ( STDMETHODCALLTYPE *StartListening )(
            __RPC__in IUIAutomationSynchronizedInputPattern * This,
                       enum SynchronizedInputType inputType);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IUIAutomationSynchronizedInputPattern * This);
        END_INTERFACE
    } IUIAutomationSynchronizedInputPatternVtbl;
    interface IUIAutomationSynchronizedInputPattern
    {
        CONST_VTBL struct IUIAutomationSynchronizedInputPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartListening(This,inputType) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const IID IID_IUIAutomationTablePattern;
    typedef struct IUIAutomationTablePatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationTablePattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationTablePattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationTablePattern * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentRowHeaders )(
            __RPC__in IUIAutomationTablePattern * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentColumnHeaders )(
            __RPC__in IUIAutomationTablePattern * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentRowOrColumnMajor )(
            __RPC__in IUIAutomationTablePattern * This,
                                __RPC__out enum RowOrColumnMajor *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedRowHeaders )(
            __RPC__in IUIAutomationTablePattern * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedColumnHeaders )(
            __RPC__in IUIAutomationTablePattern * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedRowOrColumnMajor )(
            __RPC__in IUIAutomationTablePattern * This,
                                __RPC__out enum RowOrColumnMajor *retVal);
        END_INTERFACE
    } IUIAutomationTablePatternVtbl;
    interface IUIAutomationTablePattern
    {
        CONST_VTBL struct IUIAutomationTablePatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrentRowHeaders(This,retVal) )
    ( (This)->lpVtbl -> GetCurrentColumnHeaders(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentRowOrColumnMajor(This,retVal) )
    ( (This)->lpVtbl -> GetCachedRowHeaders(This,retVal) )
    ( (This)->lpVtbl -> GetCachedColumnHeaders(This,retVal) )
    ( (This)->lpVtbl -> get_CachedRowOrColumnMajor(This,retVal) )
EXTERN_C const IID IID_IUIAutomationTableItemPattern;
    typedef struct IUIAutomationTableItemPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationTableItemPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationTableItemPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationTableItemPattern * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentRowHeaderItems )(
            __RPC__in IUIAutomationTableItemPattern * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentColumnHeaderItems )(
            __RPC__in IUIAutomationTableItemPattern * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedRowHeaderItems )(
            __RPC__in IUIAutomationTableItemPattern * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedColumnHeaderItems )(
            __RPC__in IUIAutomationTableItemPattern * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        END_INTERFACE
    } IUIAutomationTableItemPatternVtbl;
    interface IUIAutomationTableItemPattern
    {
        CONST_VTBL struct IUIAutomationTableItemPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrentRowHeaderItems(This,retVal) )
    ( (This)->lpVtbl -> GetCurrentColumnHeaderItems(This,retVal) )
    ( (This)->lpVtbl -> GetCachedRowHeaderItems(This,retVal) )
    ( (This)->lpVtbl -> GetCachedColumnHeaderItems(This,retVal) )
EXTERN_C const IID IID_IUIAutomationTogglePattern;
    typedef struct IUIAutomationTogglePatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationTogglePattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationTogglePattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationTogglePattern * This);
        HRESULT ( STDMETHODCALLTYPE *Toggle )(
            __RPC__in IUIAutomationTogglePattern * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentToggleState )(
            __RPC__in IUIAutomationTogglePattern * This,
                                __RPC__out enum ToggleState *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedToggleState )(
            __RPC__in IUIAutomationTogglePattern * This,
                                __RPC__out enum ToggleState *retVal);
        END_INTERFACE
    } IUIAutomationTogglePatternVtbl;
    interface IUIAutomationTogglePattern
    {
        CONST_VTBL struct IUIAutomationTogglePatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Toggle(This) )
    ( (This)->lpVtbl -> get_CurrentToggleState(This,retVal) )
    ( (This)->lpVtbl -> get_CachedToggleState(This,retVal) )
EXTERN_C const IID IID_IUIAutomationTransformPattern;
    typedef struct IUIAutomationTransformPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationTransformPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationTransformPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationTransformPattern * This);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IUIAutomationTransformPattern * This,
                       double x,
                       double y);
        HRESULT ( STDMETHODCALLTYPE *Resize )(
            __RPC__in IUIAutomationTransformPattern * This,
                       double width,
                       double height);
        HRESULT ( STDMETHODCALLTYPE *Rotate )(
            __RPC__in IUIAutomationTransformPattern * This,
                       double degrees);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCanMove )(
            __RPC__in IUIAutomationTransformPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCanResize )(
            __RPC__in IUIAutomationTransformPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCanRotate )(
            __RPC__in IUIAutomationTransformPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCanMove )(
            __RPC__in IUIAutomationTransformPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCanResize )(
            __RPC__in IUIAutomationTransformPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCanRotate )(
            __RPC__in IUIAutomationTransformPattern * This,
                                __RPC__out BOOL *retVal);
        END_INTERFACE
    } IUIAutomationTransformPatternVtbl;
    interface IUIAutomationTransformPattern
    {
        CONST_VTBL struct IUIAutomationTransformPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Move(This,x,y) )
    ( (This)->lpVtbl -> Resize(This,width,height) )
    ( (This)->lpVtbl -> Rotate(This,degrees) )
    ( (This)->lpVtbl -> get_CurrentCanMove(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentCanResize(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentCanRotate(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCanMove(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCanResize(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCanRotate(This,retVal) )
EXTERN_C const IID IID_IUIAutomationValuePattern;
    typedef struct IUIAutomationValuePatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationValuePattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationValuePattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationValuePattern * This);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in IUIAutomationValuePattern * This,
                       __RPC__in BSTR val);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentValue )(
            __RPC__in IUIAutomationValuePattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsReadOnly )(
            __RPC__in IUIAutomationValuePattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedValue )(
            __RPC__in IUIAutomationValuePattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsReadOnly )(
            __RPC__in IUIAutomationValuePattern * This,
                                __RPC__out BOOL *retVal);
        END_INTERFACE
    } IUIAutomationValuePatternVtbl;
    interface IUIAutomationValuePattern
    {
        CONST_VTBL struct IUIAutomationValuePatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetValue(This,val) )
    ( (This)->lpVtbl -> get_CurrentValue(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsReadOnly(This,retVal) )
    ( (This)->lpVtbl -> get_CachedValue(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsReadOnly(This,retVal) )
EXTERN_C const IID IID_IUIAutomationWindowPattern;
    typedef struct IUIAutomationWindowPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationWindowPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationWindowPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationWindowPattern * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IUIAutomationWindowPattern * This);
        HRESULT ( STDMETHODCALLTYPE *WaitForInputIdle )(
            __RPC__in IUIAutomationWindowPattern * This,
                       int milliseconds,
                                __RPC__out BOOL *success);
        HRESULT ( STDMETHODCALLTYPE *SetWindowVisualState )(
            __RPC__in IUIAutomationWindowPattern * This,
                       enum WindowVisualState state);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCanMaximize )(
            __RPC__in IUIAutomationWindowPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCanMinimize )(
            __RPC__in IUIAutomationWindowPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsModal )(
            __RPC__in IUIAutomationWindowPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsTopmost )(
            __RPC__in IUIAutomationWindowPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentWindowVisualState )(
            __RPC__in IUIAutomationWindowPattern * This,
                                __RPC__out enum WindowVisualState *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentWindowInteractionState )(
            __RPC__in IUIAutomationWindowPattern * This,
                                __RPC__out enum WindowInteractionState *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCanMaximize )(
            __RPC__in IUIAutomationWindowPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCanMinimize )(
            __RPC__in IUIAutomationWindowPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsModal )(
            __RPC__in IUIAutomationWindowPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsTopmost )(
            __RPC__in IUIAutomationWindowPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedWindowVisualState )(
            __RPC__in IUIAutomationWindowPattern * This,
                                __RPC__out enum WindowVisualState *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedWindowInteractionState )(
            __RPC__in IUIAutomationWindowPattern * This,
                                __RPC__out enum WindowInteractionState *retVal);
        END_INTERFACE
    } IUIAutomationWindowPatternVtbl;
    interface IUIAutomationWindowPattern
    {
        CONST_VTBL struct IUIAutomationWindowPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> WaitForInputIdle(This,milliseconds,success) )
    ( (This)->lpVtbl -> SetWindowVisualState(This,state) )
    ( (This)->lpVtbl -> get_CurrentCanMaximize(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentCanMinimize(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsModal(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsTopmost(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentWindowVisualState(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentWindowInteractionState(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCanMaximize(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCanMinimize(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsModal(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsTopmost(This,retVal) )
    ( (This)->lpVtbl -> get_CachedWindowVisualState(This,retVal) )
    ( (This)->lpVtbl -> get_CachedWindowInteractionState(This,retVal) )
EXTERN_C const IID IID_IUIAutomationTextRange;
    typedef struct IUIAutomationTextRangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationTextRange * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationTextRange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationTextRange * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IUIAutomationTextRange * This,
                                __RPC__deref_out_opt IUIAutomationTextRange **clonedRange);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            __RPC__in IUIAutomationTextRange * This,
                       __RPC__in_opt IUIAutomationTextRange *range,
                                __RPC__out BOOL *areSame);
        HRESULT ( STDMETHODCALLTYPE *CompareEndpoints )(
            __RPC__in IUIAutomationTextRange * This,
                       enum TextPatternRangeEndpoint srcEndPoint,
                       __RPC__in_opt IUIAutomationTextRange *range,
                       enum TextPatternRangeEndpoint targetEndPoint,
                                __RPC__out int *compValue);
        HRESULT ( STDMETHODCALLTYPE *ExpandToEnclosingUnit )(
            __RPC__in IUIAutomationTextRange * This,
                       enum TextUnit textUnit);
        HRESULT ( STDMETHODCALLTYPE *FindAttribute )(
            __RPC__in IUIAutomationTextRange * This,
                       TEXTATTRIBUTEID attr,
                       VARIANT val,
                       BOOL backward,
                                __RPC__deref_out_opt IUIAutomationTextRange **found);
        HRESULT ( STDMETHODCALLTYPE *FindText )(
            __RPC__in IUIAutomationTextRange * This,
                       __RPC__in BSTR text,
                       BOOL backward,
                       BOOL ignoreCase,
                                __RPC__deref_out_opt IUIAutomationTextRange **found);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeValue )(
            __RPC__in IUIAutomationTextRange * This,
                       TEXTATTRIBUTEID attr,
                                __RPC__out VARIANT *value);
        HRESULT ( STDMETHODCALLTYPE *GetBoundingRectangles )(
            __RPC__in IUIAutomationTextRange * This,
                                __RPC__deref_out_opt SAFEARRAY * *boundingRects);
        HRESULT ( STDMETHODCALLTYPE *GetEnclosingElement )(
            __RPC__in IUIAutomationTextRange * This,
                                __RPC__deref_out_opt IUIAutomationElement **enclosingElement);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in IUIAutomationTextRange * This,
                       int maxLength,
                                __RPC__deref_out_opt BSTR *text);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IUIAutomationTextRange * This,
                       enum TextUnit unit,
                       int count,
                                __RPC__out int *moved);
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByUnit )(
            __RPC__in IUIAutomationTextRange * This,
                       enum TextPatternRangeEndpoint endpoint,
                       enum TextUnit unit,
                       int count,
                                __RPC__out int *moved);
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByRange )(
            __RPC__in IUIAutomationTextRange * This,
                       enum TextPatternRangeEndpoint srcEndPoint,
                       __RPC__in_opt IUIAutomationTextRange *range,
                       enum TextPatternRangeEndpoint targetEndPoint);
        HRESULT ( STDMETHODCALLTYPE *Select )(
            __RPC__in IUIAutomationTextRange * This);
        HRESULT ( STDMETHODCALLTYPE *AddToSelection )(
            __RPC__in IUIAutomationTextRange * This);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )(
            __RPC__in IUIAutomationTextRange * This);
        HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )(
            __RPC__in IUIAutomationTextRange * This,
                       BOOL alignToTop);
        HRESULT ( STDMETHODCALLTYPE *GetChildren )(
            __RPC__in IUIAutomationTextRange * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **children);
        END_INTERFACE
    } IUIAutomationTextRangeVtbl;
    interface IUIAutomationTextRange
    {
        CONST_VTBL struct IUIAutomationTextRangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,clonedRange) )
    ( (This)->lpVtbl -> Compare(This,range,areSame) )
    ( (This)->lpVtbl -> CompareEndpoints(This,srcEndPoint,range,targetEndPoint,compValue) )
    ( (This)->lpVtbl -> ExpandToEnclosingUnit(This,textUnit) )
    ( (This)->lpVtbl -> FindAttribute(This,attr,val,backward,found) )
    ( (This)->lpVtbl -> FindText(This,text,backward,ignoreCase,found) )
    ( (This)->lpVtbl -> GetAttributeValue(This,attr,value) )
    ( (This)->lpVtbl -> GetBoundingRectangles(This,boundingRects) )
    ( (This)->lpVtbl -> GetEnclosingElement(This,enclosingElement) )
    ( (This)->lpVtbl -> GetText(This,maxLength,text) )
    ( (This)->lpVtbl -> Move(This,unit,count,moved) )
    ( (This)->lpVtbl -> MoveEndpointByUnit(This,endpoint,unit,count,moved) )
    ( (This)->lpVtbl -> MoveEndpointByRange(This,srcEndPoint,range,targetEndPoint) )
    ( (This)->lpVtbl -> Select(This) )
    ( (This)->lpVtbl -> AddToSelection(This) )
    ( (This)->lpVtbl -> RemoveFromSelection(This) )
    ( (This)->lpVtbl -> ScrollIntoView(This,alignToTop) )
    ( (This)->lpVtbl -> GetChildren(This,children) )
EXTERN_C const IID IID_IUIAutomationTextRange2;
    typedef struct IUIAutomationTextRange2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationTextRange2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationTextRange2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationTextRange2 * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IUIAutomationTextRange2 * This,
                                __RPC__deref_out_opt IUIAutomationTextRange **clonedRange);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            __RPC__in IUIAutomationTextRange2 * This,
                       __RPC__in_opt IUIAutomationTextRange *range,
                                __RPC__out BOOL *areSame);
        HRESULT ( STDMETHODCALLTYPE *CompareEndpoints )(
            __RPC__in IUIAutomationTextRange2 * This,
                       enum TextPatternRangeEndpoint srcEndPoint,
                       __RPC__in_opt IUIAutomationTextRange *range,
                       enum TextPatternRangeEndpoint targetEndPoint,
                                __RPC__out int *compValue);
        HRESULT ( STDMETHODCALLTYPE *ExpandToEnclosingUnit )(
            __RPC__in IUIAutomationTextRange2 * This,
                       enum TextUnit textUnit);
        HRESULT ( STDMETHODCALLTYPE *FindAttribute )(
            __RPC__in IUIAutomationTextRange2 * This,
                       TEXTATTRIBUTEID attr,
                       VARIANT val,
                       BOOL backward,
                                __RPC__deref_out_opt IUIAutomationTextRange **found);
        HRESULT ( STDMETHODCALLTYPE *FindText )(
            __RPC__in IUIAutomationTextRange2 * This,
                       __RPC__in BSTR text,
                       BOOL backward,
                       BOOL ignoreCase,
                                __RPC__deref_out_opt IUIAutomationTextRange **found);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeValue )(
            __RPC__in IUIAutomationTextRange2 * This,
                       TEXTATTRIBUTEID attr,
                                __RPC__out VARIANT *value);
        HRESULT ( STDMETHODCALLTYPE *GetBoundingRectangles )(
            __RPC__in IUIAutomationTextRange2 * This,
                                __RPC__deref_out_opt SAFEARRAY * *boundingRects);
        HRESULT ( STDMETHODCALLTYPE *GetEnclosingElement )(
            __RPC__in IUIAutomationTextRange2 * This,
                                __RPC__deref_out_opt IUIAutomationElement **enclosingElement);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in IUIAutomationTextRange2 * This,
                       int maxLength,
                                __RPC__deref_out_opt BSTR *text);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IUIAutomationTextRange2 * This,
                       enum TextUnit unit,
                       int count,
                                __RPC__out int *moved);
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByUnit )(
            __RPC__in IUIAutomationTextRange2 * This,
                       enum TextPatternRangeEndpoint endpoint,
                       enum TextUnit unit,
                       int count,
                                __RPC__out int *moved);
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByRange )(
            __RPC__in IUIAutomationTextRange2 * This,
                       enum TextPatternRangeEndpoint srcEndPoint,
                       __RPC__in_opt IUIAutomationTextRange *range,
                       enum TextPatternRangeEndpoint targetEndPoint);
        HRESULT ( STDMETHODCALLTYPE *Select )(
            __RPC__in IUIAutomationTextRange2 * This);
        HRESULT ( STDMETHODCALLTYPE *AddToSelection )(
            __RPC__in IUIAutomationTextRange2 * This);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )(
            __RPC__in IUIAutomationTextRange2 * This);
        HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )(
            __RPC__in IUIAutomationTextRange2 * This,
                       BOOL alignToTop);
        HRESULT ( STDMETHODCALLTYPE *GetChildren )(
            __RPC__in IUIAutomationTextRange2 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **children);
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )(
            __RPC__in IUIAutomationTextRange2 * This);
        END_INTERFACE
    } IUIAutomationTextRange2Vtbl;
    interface IUIAutomationTextRange2
    {
        CONST_VTBL struct IUIAutomationTextRange2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,clonedRange) )
    ( (This)->lpVtbl -> Compare(This,range,areSame) )
    ( (This)->lpVtbl -> CompareEndpoints(This,srcEndPoint,range,targetEndPoint,compValue) )
    ( (This)->lpVtbl -> ExpandToEnclosingUnit(This,textUnit) )
    ( (This)->lpVtbl -> FindAttribute(This,attr,val,backward,found) )
    ( (This)->lpVtbl -> FindText(This,text,backward,ignoreCase,found) )
    ( (This)->lpVtbl -> GetAttributeValue(This,attr,value) )
    ( (This)->lpVtbl -> GetBoundingRectangles(This,boundingRects) )
    ( (This)->lpVtbl -> GetEnclosingElement(This,enclosingElement) )
    ( (This)->lpVtbl -> GetText(This,maxLength,text) )
    ( (This)->lpVtbl -> Move(This,unit,count,moved) )
    ( (This)->lpVtbl -> MoveEndpointByUnit(This,endpoint,unit,count,moved) )
    ( (This)->lpVtbl -> MoveEndpointByRange(This,srcEndPoint,range,targetEndPoint) )
    ( (This)->lpVtbl -> Select(This) )
    ( (This)->lpVtbl -> AddToSelection(This) )
    ( (This)->lpVtbl -> RemoveFromSelection(This) )
    ( (This)->lpVtbl -> ScrollIntoView(This,alignToTop) )
    ( (This)->lpVtbl -> GetChildren(This,children) )
    ( (This)->lpVtbl -> ShowContextMenu(This) )
EXTERN_C const IID IID_IUIAutomationTextRange3;
    typedef struct IUIAutomationTextRange3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationTextRange3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationTextRange3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationTextRange3 * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IUIAutomationTextRange3 * This,
                                __RPC__deref_out_opt IUIAutomationTextRange **clonedRange);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            __RPC__in IUIAutomationTextRange3 * This,
                       __RPC__in_opt IUIAutomationTextRange *range,
                                __RPC__out BOOL *areSame);
        HRESULT ( STDMETHODCALLTYPE *CompareEndpoints )(
            __RPC__in IUIAutomationTextRange3 * This,
                       enum TextPatternRangeEndpoint srcEndPoint,
                       __RPC__in_opt IUIAutomationTextRange *range,
                       enum TextPatternRangeEndpoint targetEndPoint,
                                __RPC__out int *compValue);
        HRESULT ( STDMETHODCALLTYPE *ExpandToEnclosingUnit )(
            __RPC__in IUIAutomationTextRange3 * This,
                       enum TextUnit textUnit);
        HRESULT ( STDMETHODCALLTYPE *FindAttribute )(
            __RPC__in IUIAutomationTextRange3 * This,
                       TEXTATTRIBUTEID attr,
                       VARIANT val,
                       BOOL backward,
                                __RPC__deref_out_opt IUIAutomationTextRange **found);
        HRESULT ( STDMETHODCALLTYPE *FindText )(
            __RPC__in IUIAutomationTextRange3 * This,
                       __RPC__in BSTR text,
                       BOOL backward,
                       BOOL ignoreCase,
                                __RPC__deref_out_opt IUIAutomationTextRange **found);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeValue )(
            __RPC__in IUIAutomationTextRange3 * This,
                       TEXTATTRIBUTEID attr,
                                __RPC__out VARIANT *value);
        HRESULT ( STDMETHODCALLTYPE *GetBoundingRectangles )(
            __RPC__in IUIAutomationTextRange3 * This,
                                __RPC__deref_out_opt SAFEARRAY * *boundingRects);
        HRESULT ( STDMETHODCALLTYPE *GetEnclosingElement )(
            __RPC__in IUIAutomationTextRange3 * This,
                                __RPC__deref_out_opt IUIAutomationElement **enclosingElement);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in IUIAutomationTextRange3 * This,
                       int maxLength,
                                __RPC__deref_out_opt BSTR *text);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IUIAutomationTextRange3 * This,
                       enum TextUnit unit,
                       int count,
                                __RPC__out int *moved);
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByUnit )(
            __RPC__in IUIAutomationTextRange3 * This,
                       enum TextPatternRangeEndpoint endpoint,
                       enum TextUnit unit,
                       int count,
                                __RPC__out int *moved);
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByRange )(
            __RPC__in IUIAutomationTextRange3 * This,
                       enum TextPatternRangeEndpoint srcEndPoint,
                       __RPC__in_opt IUIAutomationTextRange *range,
                       enum TextPatternRangeEndpoint targetEndPoint);
        HRESULT ( STDMETHODCALLTYPE *Select )(
            __RPC__in IUIAutomationTextRange3 * This);
        HRESULT ( STDMETHODCALLTYPE *AddToSelection )(
            __RPC__in IUIAutomationTextRange3 * This);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )(
            __RPC__in IUIAutomationTextRange3 * This);
        HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )(
            __RPC__in IUIAutomationTextRange3 * This,
                       BOOL alignToTop);
        HRESULT ( STDMETHODCALLTYPE *GetChildren )(
            __RPC__in IUIAutomationTextRange3 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **children);
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )(
            __RPC__in IUIAutomationTextRange3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetEnclosingElementBuildCache )(
            __RPC__in IUIAutomationTextRange3 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **enclosingElement);
        HRESULT ( STDMETHODCALLTYPE *GetChildrenBuildCache )(
            __RPC__in IUIAutomationTextRange3 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElementArray **children);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeValues )(
            __RPC__in IUIAutomationTextRange3 * This,
                                __RPC__in_ecount_full(attributeIdCount) const TEXTATTRIBUTEID *attributeIds,
                       int attributeIdCount,
                                __RPC__deref_out_opt SAFEARRAY * *attributeValues);
        END_INTERFACE
    } IUIAutomationTextRange3Vtbl;
    interface IUIAutomationTextRange3
    {
        CONST_VTBL struct IUIAutomationTextRange3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,clonedRange) )
    ( (This)->lpVtbl -> Compare(This,range,areSame) )
    ( (This)->lpVtbl -> CompareEndpoints(This,srcEndPoint,range,targetEndPoint,compValue) )
    ( (This)->lpVtbl -> ExpandToEnclosingUnit(This,textUnit) )
    ( (This)->lpVtbl -> FindAttribute(This,attr,val,backward,found) )
    ( (This)->lpVtbl -> FindText(This,text,backward,ignoreCase,found) )
    ( (This)->lpVtbl -> GetAttributeValue(This,attr,value) )
    ( (This)->lpVtbl -> GetBoundingRectangles(This,boundingRects) )
    ( (This)->lpVtbl -> GetEnclosingElement(This,enclosingElement) )
    ( (This)->lpVtbl -> GetText(This,maxLength,text) )
    ( (This)->lpVtbl -> Move(This,unit,count,moved) )
    ( (This)->lpVtbl -> MoveEndpointByUnit(This,endpoint,unit,count,moved) )
    ( (This)->lpVtbl -> MoveEndpointByRange(This,srcEndPoint,range,targetEndPoint) )
    ( (This)->lpVtbl -> Select(This) )
    ( (This)->lpVtbl -> AddToSelection(This) )
    ( (This)->lpVtbl -> RemoveFromSelection(This) )
    ( (This)->lpVtbl -> ScrollIntoView(This,alignToTop) )
    ( (This)->lpVtbl -> GetChildren(This,children) )
    ( (This)->lpVtbl -> ShowContextMenu(This) )
    ( (This)->lpVtbl -> GetEnclosingElementBuildCache(This,cacheRequest,enclosingElement) )
    ( (This)->lpVtbl -> GetChildrenBuildCache(This,cacheRequest,children) )
    ( (This)->lpVtbl -> GetAttributeValues(This,attributeIds,attributeIdCount,attributeValues) )
EXTERN_C const IID IID_IUIAutomationTextRangeArray;
    typedef struct IUIAutomationTextRangeArrayVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationTextRangeArray * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationTextRangeArray * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationTextRangeArray * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in IUIAutomationTextRangeArray * This,
                                __RPC__out int *length);
        HRESULT ( STDMETHODCALLTYPE *GetElement )(
            __RPC__in IUIAutomationTextRangeArray * This,
                       int index,
                                __RPC__deref_out_opt IUIAutomationTextRange **element);
        END_INTERFACE
    } IUIAutomationTextRangeArrayVtbl;
    interface IUIAutomationTextRangeArray
    {
        CONST_VTBL struct IUIAutomationTextRangeArrayVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Length(This,length) )
    ( (This)->lpVtbl -> GetElement(This,index,element) )
EXTERN_C const IID IID_IUIAutomationTextPattern;
    typedef struct IUIAutomationTextPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationTextPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationTextPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationTextPattern * This);
        HRESULT ( STDMETHODCALLTYPE *RangeFromPoint )(
            __RPC__in IUIAutomationTextPattern * This,
                       POINT pt,
                                __RPC__deref_out_opt IUIAutomationTextRange **range);
        HRESULT ( STDMETHODCALLTYPE *RangeFromChild )(
            __RPC__in IUIAutomationTextPattern * This,
                       __RPC__in_opt IUIAutomationElement *child,
                                __RPC__deref_out_opt IUIAutomationTextRange **range);
        HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            __RPC__in IUIAutomationTextPattern * This,
                                __RPC__deref_out_opt IUIAutomationTextRangeArray **ranges);
        HRESULT ( STDMETHODCALLTYPE *GetVisibleRanges )(
            __RPC__in IUIAutomationTextPattern * This,
                                __RPC__deref_out_opt IUIAutomationTextRangeArray **ranges);
                        HRESULT ( STDMETHODCALLTYPE *get_DocumentRange )(
            __RPC__in IUIAutomationTextPattern * This,
                                __RPC__deref_out_opt IUIAutomationTextRange **range);
                        HRESULT ( STDMETHODCALLTYPE *get_SupportedTextSelection )(
            __RPC__in IUIAutomationTextPattern * This,
                                __RPC__out enum SupportedTextSelection *supportedTextSelection);
        END_INTERFACE
    } IUIAutomationTextPatternVtbl;
    interface IUIAutomationTextPattern
    {
        CONST_VTBL struct IUIAutomationTextPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RangeFromPoint(This,pt,range) )
    ( (This)->lpVtbl -> RangeFromChild(This,child,range) )
    ( (This)->lpVtbl -> GetSelection(This,ranges) )
    ( (This)->lpVtbl -> GetVisibleRanges(This,ranges) )
    ( (This)->lpVtbl -> get_DocumentRange(This,range) )
    ( (This)->lpVtbl -> get_SupportedTextSelection(This,supportedTextSelection) )
EXTERN_C const IID IID_IUIAutomationTextPattern2;
    typedef struct IUIAutomationTextPattern2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationTextPattern2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationTextPattern2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationTextPattern2 * This);
        HRESULT ( STDMETHODCALLTYPE *RangeFromPoint )(
            __RPC__in IUIAutomationTextPattern2 * This,
                       POINT pt,
                                __RPC__deref_out_opt IUIAutomationTextRange **range);
        HRESULT ( STDMETHODCALLTYPE *RangeFromChild )(
            __RPC__in IUIAutomationTextPattern2 * This,
                       __RPC__in_opt IUIAutomationElement *child,
                                __RPC__deref_out_opt IUIAutomationTextRange **range);
        HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            __RPC__in IUIAutomationTextPattern2 * This,
                                __RPC__deref_out_opt IUIAutomationTextRangeArray **ranges);
        HRESULT ( STDMETHODCALLTYPE *GetVisibleRanges )(
            __RPC__in IUIAutomationTextPattern2 * This,
                                __RPC__deref_out_opt IUIAutomationTextRangeArray **ranges);
                        HRESULT ( STDMETHODCALLTYPE *get_DocumentRange )(
            __RPC__in IUIAutomationTextPattern2 * This,
                                __RPC__deref_out_opt IUIAutomationTextRange **range);
                        HRESULT ( STDMETHODCALLTYPE *get_SupportedTextSelection )(
            __RPC__in IUIAutomationTextPattern2 * This,
                                __RPC__out enum SupportedTextSelection *supportedTextSelection);
        HRESULT ( STDMETHODCALLTYPE *RangeFromAnnotation )(
            __RPC__in IUIAutomationTextPattern2 * This,
                       __RPC__in_opt IUIAutomationElement *annotation,
                                __RPC__deref_out_opt IUIAutomationTextRange **range);
        HRESULT ( STDMETHODCALLTYPE *GetCaretRange )(
            __RPC__in IUIAutomationTextPattern2 * This,
                        __RPC__out BOOL *isActive,
                                __RPC__deref_out_opt IUIAutomationTextRange **range);
        END_INTERFACE
    } IUIAutomationTextPattern2Vtbl;
    interface IUIAutomationTextPattern2
    {
        CONST_VTBL struct IUIAutomationTextPattern2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RangeFromPoint(This,pt,range) )
    ( (This)->lpVtbl -> RangeFromChild(This,child,range) )
    ( (This)->lpVtbl -> GetSelection(This,ranges) )
    ( (This)->lpVtbl -> GetVisibleRanges(This,ranges) )
    ( (This)->lpVtbl -> get_DocumentRange(This,range) )
    ( (This)->lpVtbl -> get_SupportedTextSelection(This,supportedTextSelection) )
    ( (This)->lpVtbl -> RangeFromAnnotation(This,annotation,range) )
    ( (This)->lpVtbl -> GetCaretRange(This,isActive,range) )
EXTERN_C const IID IID_IUIAutomationTextEditPattern;
    typedef struct IUIAutomationTextEditPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationTextEditPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationTextEditPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationTextEditPattern * This);
        HRESULT ( STDMETHODCALLTYPE *RangeFromPoint )(
            __RPC__in IUIAutomationTextEditPattern * This,
                       POINT pt,
                                __RPC__deref_out_opt IUIAutomationTextRange **range);
        HRESULT ( STDMETHODCALLTYPE *RangeFromChild )(
            __RPC__in IUIAutomationTextEditPattern * This,
                       __RPC__in_opt IUIAutomationElement *child,
                                __RPC__deref_out_opt IUIAutomationTextRange **range);
        HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            __RPC__in IUIAutomationTextEditPattern * This,
                                __RPC__deref_out_opt IUIAutomationTextRangeArray **ranges);
        HRESULT ( STDMETHODCALLTYPE *GetVisibleRanges )(
            __RPC__in IUIAutomationTextEditPattern * This,
                                __RPC__deref_out_opt IUIAutomationTextRangeArray **ranges);
                        HRESULT ( STDMETHODCALLTYPE *get_DocumentRange )(
            __RPC__in IUIAutomationTextEditPattern * This,
                                __RPC__deref_out_opt IUIAutomationTextRange **range);
                        HRESULT ( STDMETHODCALLTYPE *get_SupportedTextSelection )(
            __RPC__in IUIAutomationTextEditPattern * This,
                                __RPC__out enum SupportedTextSelection *supportedTextSelection);
        HRESULT ( STDMETHODCALLTYPE *GetActiveComposition )(
            __RPC__in IUIAutomationTextEditPattern * This,
                                __RPC__deref_out_opt IUIAutomationTextRange **range);
        HRESULT ( STDMETHODCALLTYPE *GetConversionTarget )(
            __RPC__in IUIAutomationTextEditPattern * This,
                                __RPC__deref_out_opt IUIAutomationTextRange **range);
        END_INTERFACE
    } IUIAutomationTextEditPatternVtbl;
    interface IUIAutomationTextEditPattern
    {
        CONST_VTBL struct IUIAutomationTextEditPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RangeFromPoint(This,pt,range) )
    ( (This)->lpVtbl -> RangeFromChild(This,child,range) )
    ( (This)->lpVtbl -> GetSelection(This,ranges) )
    ( (This)->lpVtbl -> GetVisibleRanges(This,ranges) )
    ( (This)->lpVtbl -> get_DocumentRange(This,range) )
    ( (This)->lpVtbl -> get_SupportedTextSelection(This,supportedTextSelection) )
    ( (This)->lpVtbl -> GetActiveComposition(This,range) )
    ( (This)->lpVtbl -> GetConversionTarget(This,range) )
EXTERN_C const IID IID_IUIAutomationCustomNavigationPattern;
    typedef struct IUIAutomationCustomNavigationPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationCustomNavigationPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationCustomNavigationPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationCustomNavigationPattern * This);
        HRESULT ( STDMETHODCALLTYPE *Navigate )(
            __RPC__in IUIAutomationCustomNavigationPattern * This,
                       enum NavigateDirection direction,
                                __RPC__deref_out_opt IUIAutomationElement **pRetVal);
        END_INTERFACE
    } IUIAutomationCustomNavigationPatternVtbl;
    interface IUIAutomationCustomNavigationPattern
    {
        CONST_VTBL struct IUIAutomationCustomNavigationPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Navigate(This,direction,pRetVal) )
EXTERN_C const IID IID_IUIAutomationActiveTextPositionChangedEventHandler;
    typedef struct IUIAutomationActiveTextPositionChangedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationActiveTextPositionChangedEventHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationActiveTextPositionChangedEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationActiveTextPositionChangedEventHandler * This);
        HRESULT ( STDMETHODCALLTYPE *HandleActiveTextPositionChangedEvent )(
            __RPC__in IUIAutomationActiveTextPositionChangedEventHandler * This,
                       __RPC__in_opt IUIAutomationElement *sender,
                       __RPC__in_opt IUIAutomationTextRange *range);
        END_INTERFACE
    } IUIAutomationActiveTextPositionChangedEventHandlerVtbl;
    interface IUIAutomationActiveTextPositionChangedEventHandler
    {
        CONST_VTBL struct IUIAutomationActiveTextPositionChangedEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HandleActiveTextPositionChangedEvent(This,sender,range) )
EXTERN_C const IID IID_IUIAutomationLegacyIAccessiblePattern;
    typedef struct IUIAutomationLegacyIAccessiblePatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This);
        HRESULT ( STDMETHODCALLTYPE *Select )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            long flagsSelect);
        HRESULT ( STDMETHODCALLTYPE *DoDefaultAction )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
            __RPC__in LPCWSTR szValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentChildId )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__out int *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentName )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__deref_out_opt BSTR *pszName);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentValue )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__deref_out_opt BSTR *pszValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDescription )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__deref_out_opt BSTR *pszDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentRole )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__out DWORD *pdwRole);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentState )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__out DWORD *pdwState);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHelp )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__deref_out_opt BSTR *pszHelp);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentKeyboardShortcut )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__deref_out_opt BSTR *pszKeyboardShortcut);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSelection )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **pvarSelectedChildren);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDefaultAction )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__deref_out_opt BSTR *pszDefaultAction);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedChildId )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__out int *pRetVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedName )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__deref_out_opt BSTR *pszName);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedValue )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__deref_out_opt BSTR *pszValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedDescription )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__deref_out_opt BSTR *pszDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedRole )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__out DWORD *pdwRole);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedState )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__out DWORD *pdwState);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHelp )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__deref_out_opt BSTR *pszHelp);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedKeyboardShortcut )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__deref_out_opt BSTR *pszKeyboardShortcut);
        HRESULT ( STDMETHODCALLTYPE *GetCachedSelection )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **pvarSelectedChildren);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedDefaultAction )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__deref_out_opt BSTR *pszDefaultAction);
        HRESULT ( STDMETHODCALLTYPE *GetIAccessible )(
            __RPC__in IUIAutomationLegacyIAccessiblePattern * This,
                                __RPC__deref_out_opt IAccessible **ppAccessible);
        END_INTERFACE
    } IUIAutomationLegacyIAccessiblePatternVtbl;
    interface IUIAutomationLegacyIAccessiblePattern
    {
        CONST_VTBL struct IUIAutomationLegacyIAccessiblePatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Select(This,flagsSelect) )
    ( (This)->lpVtbl -> DoDefaultAction(This) )
    ( (This)->lpVtbl -> SetValue(This,szValue) )
    ( (This)->lpVtbl -> get_CurrentChildId(This,pRetVal) )
    ( (This)->lpVtbl -> get_CurrentName(This,pszName) )
    ( (This)->lpVtbl -> get_CurrentValue(This,pszValue) )
    ( (This)->lpVtbl -> get_CurrentDescription(This,pszDescription) )
    ( (This)->lpVtbl -> get_CurrentRole(This,pdwRole) )
    ( (This)->lpVtbl -> get_CurrentState(This,pdwState) )
    ( (This)->lpVtbl -> get_CurrentHelp(This,pszHelp) )
    ( (This)->lpVtbl -> get_CurrentKeyboardShortcut(This,pszKeyboardShortcut) )
    ( (This)->lpVtbl -> GetCurrentSelection(This,pvarSelectedChildren) )
    ( (This)->lpVtbl -> get_CurrentDefaultAction(This,pszDefaultAction) )
    ( (This)->lpVtbl -> get_CachedChildId(This,pRetVal) )
    ( (This)->lpVtbl -> get_CachedName(This,pszName) )
    ( (This)->lpVtbl -> get_CachedValue(This,pszValue) )
    ( (This)->lpVtbl -> get_CachedDescription(This,pszDescription) )
    ( (This)->lpVtbl -> get_CachedRole(This,pdwRole) )
    ( (This)->lpVtbl -> get_CachedState(This,pdwState) )
    ( (This)->lpVtbl -> get_CachedHelp(This,pszHelp) )
    ( (This)->lpVtbl -> get_CachedKeyboardShortcut(This,pszKeyboardShortcut) )
    ( (This)->lpVtbl -> GetCachedSelection(This,pvarSelectedChildren) )
    ( (This)->lpVtbl -> get_CachedDefaultAction(This,pszDefaultAction) )
    ( (This)->lpVtbl -> GetIAccessible(This,ppAccessible) )
EXTERN_C const IID IID_IUIAutomationItemContainerPattern;
    typedef struct IUIAutomationItemContainerPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationItemContainerPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationItemContainerPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationItemContainerPattern * This);
        HRESULT ( STDMETHODCALLTYPE *FindItemByProperty )(
            __RPC__in IUIAutomationItemContainerPattern * This,
                       __RPC__in_opt IUIAutomationElement *pStartAfter,
                       PROPERTYID propertyId,
                       VARIANT value,
                                __RPC__deref_out_opt IUIAutomationElement **pFound);
        END_INTERFACE
    } IUIAutomationItemContainerPatternVtbl;
    interface IUIAutomationItemContainerPattern
    {
        CONST_VTBL struct IUIAutomationItemContainerPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindItemByProperty(This,pStartAfter,propertyId,value,pFound) )
EXTERN_C const IID IID_IUIAutomationVirtualizedItemPattern;
    typedef struct IUIAutomationVirtualizedItemPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationVirtualizedItemPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationVirtualizedItemPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationVirtualizedItemPattern * This);
        HRESULT ( STDMETHODCALLTYPE *Realize )(
            __RPC__in IUIAutomationVirtualizedItemPattern * This);
        END_INTERFACE
    } IUIAutomationVirtualizedItemPatternVtbl;
    interface IUIAutomationVirtualizedItemPattern
    {
        CONST_VTBL struct IUIAutomationVirtualizedItemPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Realize(This) )
EXTERN_C const IID IID_IUIAutomationAnnotationPattern;
    typedef struct IUIAutomationAnnotationPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationAnnotationPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationAnnotationPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationAnnotationPattern * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationTypeId )(
            __RPC__in IUIAutomationAnnotationPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationTypeName )(
            __RPC__in IUIAutomationAnnotationPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAuthor )(
            __RPC__in IUIAutomationAnnotationPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDateTime )(
            __RPC__in IUIAutomationAnnotationPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentTarget )(
            __RPC__in IUIAutomationAnnotationPattern * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationTypeId )(
            __RPC__in IUIAutomationAnnotationPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationTypeName )(
            __RPC__in IUIAutomationAnnotationPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAuthor )(
            __RPC__in IUIAutomationAnnotationPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedDateTime )(
            __RPC__in IUIAutomationAnnotationPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedTarget )(
            __RPC__in IUIAutomationAnnotationPattern * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
        END_INTERFACE
    } IUIAutomationAnnotationPatternVtbl;
    interface IUIAutomationAnnotationPattern
    {
        CONST_VTBL struct IUIAutomationAnnotationPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_CurrentAnnotationTypeId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAnnotationTypeName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAuthor(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentDateTime(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentTarget(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAnnotationTypeId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAnnotationTypeName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAuthor(This,retVal) )
    ( (This)->lpVtbl -> get_CachedDateTime(This,retVal) )
    ( (This)->lpVtbl -> get_CachedTarget(This,retVal) )
EXTERN_C const IID IID_IUIAutomationStylesPattern;
    typedef struct IUIAutomationStylesPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationStylesPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationStylesPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationStylesPattern * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentStyleId )(
            __RPC__in IUIAutomationStylesPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentStyleName )(
            __RPC__in IUIAutomationStylesPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFillColor )(
            __RPC__in IUIAutomationStylesPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFillPatternStyle )(
            __RPC__in IUIAutomationStylesPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentShape )(
            __RPC__in IUIAutomationStylesPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFillPatternColor )(
            __RPC__in IUIAutomationStylesPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentExtendedProperties )(
            __RPC__in IUIAutomationStylesPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentExtendedPropertiesAsArray )(
            __RPC__in IUIAutomationStylesPattern * This,
                                          __RPC__deref_out_ecount_full_opt(*propertyCount) struct ExtendedProperty **propertyArray,
                        __RPC__out int *propertyCount);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedStyleId )(
            __RPC__in IUIAutomationStylesPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedStyleName )(
            __RPC__in IUIAutomationStylesPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFillColor )(
            __RPC__in IUIAutomationStylesPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFillPatternStyle )(
            __RPC__in IUIAutomationStylesPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedShape )(
            __RPC__in IUIAutomationStylesPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFillPatternColor )(
            __RPC__in IUIAutomationStylesPattern * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedExtendedProperties )(
            __RPC__in IUIAutomationStylesPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedExtendedPropertiesAsArray )(
            __RPC__in IUIAutomationStylesPattern * This,
                                          __RPC__deref_out_ecount_full_opt(*propertyCount) struct ExtendedProperty **propertyArray,
                        __RPC__out int *propertyCount);
        END_INTERFACE
    } IUIAutomationStylesPatternVtbl;
    interface IUIAutomationStylesPattern
    {
        CONST_VTBL struct IUIAutomationStylesPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_CurrentStyleId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentStyleName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFillColor(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFillPatternStyle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentShape(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFillPatternColor(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentExtendedProperties(This,retVal) )
    ( (This)->lpVtbl -> GetCurrentExtendedPropertiesAsArray(This,propertyArray,propertyCount) )
    ( (This)->lpVtbl -> get_CachedStyleId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedStyleName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFillColor(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFillPatternStyle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedShape(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFillPatternColor(This,retVal) )
    ( (This)->lpVtbl -> get_CachedExtendedProperties(This,retVal) )
    ( (This)->lpVtbl -> GetCachedExtendedPropertiesAsArray(This,propertyArray,propertyCount) )
EXTERN_C const IID IID_IUIAutomationSpreadsheetPattern;
    typedef struct IUIAutomationSpreadsheetPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationSpreadsheetPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationSpreadsheetPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationSpreadsheetPattern * This);
        HRESULT ( STDMETHODCALLTYPE *GetItemByName )(
            __RPC__in IUIAutomationSpreadsheetPattern * This,
                       __RPC__in BSTR name,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        END_INTERFACE
    } IUIAutomationSpreadsheetPatternVtbl;
    interface IUIAutomationSpreadsheetPattern
    {
        CONST_VTBL struct IUIAutomationSpreadsheetPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItemByName(This,name,element) )
EXTERN_C const IID IID_IUIAutomationSpreadsheetItemPattern;
    typedef struct IUIAutomationSpreadsheetItemPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationSpreadsheetItemPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationSpreadsheetItemPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationSpreadsheetItemPattern * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFormula )(
            __RPC__in IUIAutomationSpreadsheetItemPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentAnnotationObjects )(
            __RPC__in IUIAutomationSpreadsheetItemPattern * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentAnnotationTypes )(
            __RPC__in IUIAutomationSpreadsheetItemPattern * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFormula )(
            __RPC__in IUIAutomationSpreadsheetItemPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedAnnotationObjects )(
            __RPC__in IUIAutomationSpreadsheetItemPattern * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedAnnotationTypes )(
            __RPC__in IUIAutomationSpreadsheetItemPattern * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
        END_INTERFACE
    } IUIAutomationSpreadsheetItemPatternVtbl;
    interface IUIAutomationSpreadsheetItemPattern
    {
        CONST_VTBL struct IUIAutomationSpreadsheetItemPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_CurrentFormula(This,retVal) )
    ( (This)->lpVtbl -> GetCurrentAnnotationObjects(This,retVal) )
    ( (This)->lpVtbl -> GetCurrentAnnotationTypes(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFormula(This,retVal) )
    ( (This)->lpVtbl -> GetCachedAnnotationObjects(This,retVal) )
    ( (This)->lpVtbl -> GetCachedAnnotationTypes(This,retVal) )
EXTERN_C const IID IID_IUIAutomationTransformPattern2;
    typedef struct IUIAutomationTransformPattern2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationTransformPattern2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationTransformPattern2 * This);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                       double x,
                       double y);
        HRESULT ( STDMETHODCALLTYPE *Resize )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                       double width,
                       double height);
        HRESULT ( STDMETHODCALLTYPE *Rotate )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                       double degrees);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCanMove )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCanResize )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCanRotate )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCanMove )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCanResize )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCanRotate )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                                __RPC__out BOOL *retVal);
        HRESULT ( STDMETHODCALLTYPE *Zoom )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                       double zoomValue);
        HRESULT ( STDMETHODCALLTYPE *ZoomByUnit )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                       enum ZoomUnit zoomUnit);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCanZoom )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCanZoom )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentZoomLevel )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedZoomLevel )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentZoomMinimum )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedZoomMinimum )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentZoomMaximum )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                                __RPC__out double *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedZoomMaximum )(
            __RPC__in IUIAutomationTransformPattern2 * This,
                                __RPC__out double *retVal);
        END_INTERFACE
    } IUIAutomationTransformPattern2Vtbl;
    interface IUIAutomationTransformPattern2
    {
        CONST_VTBL struct IUIAutomationTransformPattern2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Move(This,x,y) )
    ( (This)->lpVtbl -> Resize(This,width,height) )
    ( (This)->lpVtbl -> Rotate(This,degrees) )
    ( (This)->lpVtbl -> get_CurrentCanMove(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentCanResize(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentCanRotate(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCanMove(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCanResize(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCanRotate(This,retVal) )
    ( (This)->lpVtbl -> Zoom(This,zoomValue) )
    ( (This)->lpVtbl -> ZoomByUnit(This,zoomUnit) )
    ( (This)->lpVtbl -> get_CurrentCanZoom(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCanZoom(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentZoomLevel(This,retVal) )
    ( (This)->lpVtbl -> get_CachedZoomLevel(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentZoomMinimum(This,retVal) )
    ( (This)->lpVtbl -> get_CachedZoomMinimum(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentZoomMaximum(This,retVal) )
    ( (This)->lpVtbl -> get_CachedZoomMaximum(This,retVal) )
EXTERN_C const IID IID_IUIAutomationTextChildPattern;
    typedef struct IUIAutomationTextChildPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationTextChildPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationTextChildPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationTextChildPattern * This);
                        HRESULT ( STDMETHODCALLTYPE *get_TextContainer )(
            __RPC__in IUIAutomationTextChildPattern * This,
                                __RPC__deref_out_opt IUIAutomationElement **container);
                        HRESULT ( STDMETHODCALLTYPE *get_TextRange )(
            __RPC__in IUIAutomationTextChildPattern * This,
                                __RPC__deref_out_opt IUIAutomationTextRange **range);
        END_INTERFACE
    } IUIAutomationTextChildPatternVtbl;
    interface IUIAutomationTextChildPattern
    {
        CONST_VTBL struct IUIAutomationTextChildPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_TextContainer(This,container) )
    ( (This)->lpVtbl -> get_TextRange(This,range) )
EXTERN_C const IID IID_IUIAutomationDragPattern;
    typedef struct IUIAutomationDragPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationDragPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationDragPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationDragPattern * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsGrabbed )(
            __RPC__in IUIAutomationDragPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsGrabbed )(
            __RPC__in IUIAutomationDragPattern * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDropEffect )(
            __RPC__in IUIAutomationDragPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedDropEffect )(
            __RPC__in IUIAutomationDragPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDropEffects )(
            __RPC__in IUIAutomationDragPattern * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedDropEffects )(
            __RPC__in IUIAutomationDragPattern * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentGrabbedItems )(
            __RPC__in IUIAutomationDragPattern * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedGrabbedItems )(
            __RPC__in IUIAutomationDragPattern * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        END_INTERFACE
    } IUIAutomationDragPatternVtbl;
    interface IUIAutomationDragPattern
    {
        CONST_VTBL struct IUIAutomationDragPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_CurrentIsGrabbed(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsGrabbed(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentDropEffect(This,retVal) )
    ( (This)->lpVtbl -> get_CachedDropEffect(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentDropEffects(This,retVal) )
    ( (This)->lpVtbl -> get_CachedDropEffects(This,retVal) )
    ( (This)->lpVtbl -> GetCurrentGrabbedItems(This,retVal) )
    ( (This)->lpVtbl -> GetCachedGrabbedItems(This,retVal) )
EXTERN_C const IID IID_IUIAutomationDropTargetPattern;
    typedef struct IUIAutomationDropTargetPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationDropTargetPattern * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationDropTargetPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationDropTargetPattern * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDropTargetEffect )(
            __RPC__in IUIAutomationDropTargetPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedDropTargetEffect )(
            __RPC__in IUIAutomationDropTargetPattern * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDropTargetEffects )(
            __RPC__in IUIAutomationDropTargetPattern * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedDropTargetEffects )(
            __RPC__in IUIAutomationDropTargetPattern * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
        END_INTERFACE
    } IUIAutomationDropTargetPatternVtbl;
    interface IUIAutomationDropTargetPattern
    {
        CONST_VTBL struct IUIAutomationDropTargetPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_CurrentDropTargetEffect(This,retVal) )
    ( (This)->lpVtbl -> get_CachedDropTargetEffect(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentDropTargetEffects(This,retVal) )
    ( (This)->lpVtbl -> get_CachedDropTargetEffects(This,retVal) )
EXTERN_C const IID IID_IUIAutomationElement2;
    typedef struct IUIAutomationElement2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationElement2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationElement2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationElement2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetFocus )(
            __RPC__in IUIAutomationElement2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt SAFEARRAY * *runtimeId);
        HRESULT ( STDMETHODCALLTYPE *FindFirst )(
            __RPC__in IUIAutomationElement2 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAll )(
            __RPC__in IUIAutomationElement2 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )(
            __RPC__in IUIAutomationElement2 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAllBuildCache )(
            __RPC__in IUIAutomationElement2 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *BuildUpdatedCache )(
            __RPC__in IUIAutomationElement2 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **updatedElement);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValue )(
            __RPC__in IUIAutomationElement2 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValueEx )(
            __RPC__in IUIAutomationElement2 * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValue )(
            __RPC__in IUIAutomationElement2 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValueEx )(
            __RPC__in IUIAutomationElement2 * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPatternAs )(
            __RPC__in IUIAutomationElement2 * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPatternAs )(
            __RPC__in IUIAutomationElement2 * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )(
            __RPC__in IUIAutomationElement2 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPattern )(
            __RPC__in IUIAutomationElement2 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedParent )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt IUIAutomationElement **parent);
        HRESULT ( STDMETHODCALLTYPE *GetCachedChildren )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **children);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentName )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControllerFor )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDescribedBy )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsTo )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProviderDescription )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProcessId )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControlType )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedControlType )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedName )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAcceleratorKey )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAccessKey )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHasKeyboardFocus )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsEnabled )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAutomationId )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedClassName )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHelpText )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCulture )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsControlElement )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsContentElement )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsPassword )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedNativeWindowHandle )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemType )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsOffscreen )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedOrientation )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFrameworkId )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsRequiredForForm )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemStatus )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedBoundingRectangle )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLabeledBy )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaRole )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaProperties )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsDataValidForForm )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControllerFor )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedDescribedBy )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsTo )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProviderDescription )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt BSTR *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )(
            __RPC__in IUIAutomationElement2 * This,
                        __RPC__out POINT *clickable,
                                __RPC__out BOOL *gotClickable);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentOptimizeForVisualContent )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedOptimizeForVisualContent )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLiveSetting )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out enum LiveSetting *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLiveSetting )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__out enum LiveSetting *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsFrom )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsFrom )(
            __RPC__in IUIAutomationElement2 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        END_INTERFACE
    } IUIAutomationElement2Vtbl;
    interface IUIAutomationElement2
    {
        CONST_VTBL struct IUIAutomationElement2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFocus(This) )
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) )
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) )
    ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedParent(This,parent) )
    ( (This)->lpVtbl -> GetCachedChildren(This,children) )
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) )
    ( (This)->lpVtbl -> get_CurrentOptimizeForVisualContent(This,retVal) )
    ( (This)->lpVtbl -> get_CachedOptimizeForVisualContent(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLiveSetting(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLiveSetting(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFlowsFrom(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFlowsFrom(This,retVal) )
EXTERN_C const IID IID_IUIAutomationElement3;
    typedef struct IUIAutomationElement3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationElement3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationElement3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationElement3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetFocus )(
            __RPC__in IUIAutomationElement3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt SAFEARRAY * *runtimeId);
        HRESULT ( STDMETHODCALLTYPE *FindFirst )(
            __RPC__in IUIAutomationElement3 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAll )(
            __RPC__in IUIAutomationElement3 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )(
            __RPC__in IUIAutomationElement3 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAllBuildCache )(
            __RPC__in IUIAutomationElement3 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *BuildUpdatedCache )(
            __RPC__in IUIAutomationElement3 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **updatedElement);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValue )(
            __RPC__in IUIAutomationElement3 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValueEx )(
            __RPC__in IUIAutomationElement3 * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValue )(
            __RPC__in IUIAutomationElement3 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValueEx )(
            __RPC__in IUIAutomationElement3 * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPatternAs )(
            __RPC__in IUIAutomationElement3 * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPatternAs )(
            __RPC__in IUIAutomationElement3 * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )(
            __RPC__in IUIAutomationElement3 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPattern )(
            __RPC__in IUIAutomationElement3 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedParent )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt IUIAutomationElement **parent);
        HRESULT ( STDMETHODCALLTYPE *GetCachedChildren )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **children);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentName )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControllerFor )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDescribedBy )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsTo )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProviderDescription )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProcessId )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControlType )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedControlType )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedName )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAcceleratorKey )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAccessKey )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHasKeyboardFocus )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsEnabled )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAutomationId )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedClassName )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHelpText )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCulture )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsControlElement )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsContentElement )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsPassword )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedNativeWindowHandle )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemType )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsOffscreen )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedOrientation )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFrameworkId )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsRequiredForForm )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemStatus )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedBoundingRectangle )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLabeledBy )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaRole )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaProperties )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsDataValidForForm )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControllerFor )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedDescribedBy )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsTo )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProviderDescription )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt BSTR *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )(
            __RPC__in IUIAutomationElement3 * This,
                        __RPC__out POINT *clickable,
                                __RPC__out BOOL *gotClickable);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentOptimizeForVisualContent )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedOptimizeForVisualContent )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLiveSetting )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out enum LiveSetting *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLiveSetting )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out enum LiveSetting *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsFrom )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsFrom )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )(
            __RPC__in IUIAutomationElement3 * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPeripheral )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsPeripheral )(
            __RPC__in IUIAutomationElement3 * This,
                                __RPC__out BOOL *retVal);
        END_INTERFACE
    } IUIAutomationElement3Vtbl;
    interface IUIAutomationElement3
    {
        CONST_VTBL struct IUIAutomationElement3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFocus(This) )
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) )
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) )
    ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedParent(This,parent) )
    ( (This)->lpVtbl -> GetCachedChildren(This,children) )
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) )
    ( (This)->lpVtbl -> get_CurrentOptimizeForVisualContent(This,retVal) )
    ( (This)->lpVtbl -> get_CachedOptimizeForVisualContent(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLiveSetting(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLiveSetting(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFlowsFrom(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFlowsFrom(This,retVal) )
    ( (This)->lpVtbl -> ShowContextMenu(This) )
    ( (This)->lpVtbl -> get_CurrentIsPeripheral(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsPeripheral(This,retVal) )
EXTERN_C const IID IID_IUIAutomationElement4;
    typedef struct IUIAutomationElement4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationElement4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationElement4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationElement4 * This);
        HRESULT ( STDMETHODCALLTYPE *SetFocus )(
            __RPC__in IUIAutomationElement4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt SAFEARRAY * *runtimeId);
        HRESULT ( STDMETHODCALLTYPE *FindFirst )(
            __RPC__in IUIAutomationElement4 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAll )(
            __RPC__in IUIAutomationElement4 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )(
            __RPC__in IUIAutomationElement4 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAllBuildCache )(
            __RPC__in IUIAutomationElement4 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *BuildUpdatedCache )(
            __RPC__in IUIAutomationElement4 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **updatedElement);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValue )(
            __RPC__in IUIAutomationElement4 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValueEx )(
            __RPC__in IUIAutomationElement4 * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValue )(
            __RPC__in IUIAutomationElement4 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValueEx )(
            __RPC__in IUIAutomationElement4 * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPatternAs )(
            __RPC__in IUIAutomationElement4 * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPatternAs )(
            __RPC__in IUIAutomationElement4 * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )(
            __RPC__in IUIAutomationElement4 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPattern )(
            __RPC__in IUIAutomationElement4 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedParent )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt IUIAutomationElement **parent);
        HRESULT ( STDMETHODCALLTYPE *GetCachedChildren )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **children);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentName )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControllerFor )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDescribedBy )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsTo )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProviderDescription )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProcessId )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControlType )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedControlType )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedName )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAcceleratorKey )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAccessKey )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHasKeyboardFocus )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsEnabled )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAutomationId )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedClassName )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHelpText )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCulture )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsControlElement )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsContentElement )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsPassword )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedNativeWindowHandle )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemType )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsOffscreen )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedOrientation )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFrameworkId )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsRequiredForForm )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemStatus )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedBoundingRectangle )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLabeledBy )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaRole )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaProperties )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsDataValidForForm )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControllerFor )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedDescribedBy )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsTo )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProviderDescription )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt BSTR *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )(
            __RPC__in IUIAutomationElement4 * This,
                        __RPC__out POINT *clickable,
                                __RPC__out BOOL *gotClickable);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentOptimizeForVisualContent )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedOptimizeForVisualContent )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLiveSetting )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out enum LiveSetting *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLiveSetting )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out enum LiveSetting *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsFrom )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsFrom )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )(
            __RPC__in IUIAutomationElement4 * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPeripheral )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsPeripheral )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPositionInSet )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentSizeOfSet )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLevel )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationTypes )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationObjects )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedPositionInSet )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedSizeOfSet )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLevel )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationTypes )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationObjects )(
            __RPC__in IUIAutomationElement4 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        END_INTERFACE
    } IUIAutomationElement4Vtbl;
    interface IUIAutomationElement4
    {
        CONST_VTBL struct IUIAutomationElement4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFocus(This) )
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) )
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) )
    ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedParent(This,parent) )
    ( (This)->lpVtbl -> GetCachedChildren(This,children) )
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) )
    ( (This)->lpVtbl -> get_CurrentOptimizeForVisualContent(This,retVal) )
    ( (This)->lpVtbl -> get_CachedOptimizeForVisualContent(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLiveSetting(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLiveSetting(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFlowsFrom(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFlowsFrom(This,retVal) )
    ( (This)->lpVtbl -> ShowContextMenu(This) )
    ( (This)->lpVtbl -> get_CurrentIsPeripheral(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsPeripheral(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentPositionInSet(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentSizeOfSet(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLevel(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAnnotationTypes(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAnnotationObjects(This,retVal) )
    ( (This)->lpVtbl -> get_CachedPositionInSet(This,retVal) )
    ( (This)->lpVtbl -> get_CachedSizeOfSet(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLevel(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAnnotationTypes(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAnnotationObjects(This,retVal) )
EXTERN_C const IID IID_IUIAutomationElement5;
    typedef struct IUIAutomationElement5Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationElement5 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationElement5 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationElement5 * This);
        HRESULT ( STDMETHODCALLTYPE *SetFocus )(
            __RPC__in IUIAutomationElement5 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt SAFEARRAY * *runtimeId);
        HRESULT ( STDMETHODCALLTYPE *FindFirst )(
            __RPC__in IUIAutomationElement5 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAll )(
            __RPC__in IUIAutomationElement5 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )(
            __RPC__in IUIAutomationElement5 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAllBuildCache )(
            __RPC__in IUIAutomationElement5 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *BuildUpdatedCache )(
            __RPC__in IUIAutomationElement5 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **updatedElement);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValue )(
            __RPC__in IUIAutomationElement5 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValueEx )(
            __RPC__in IUIAutomationElement5 * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValue )(
            __RPC__in IUIAutomationElement5 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValueEx )(
            __RPC__in IUIAutomationElement5 * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPatternAs )(
            __RPC__in IUIAutomationElement5 * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPatternAs )(
            __RPC__in IUIAutomationElement5 * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )(
            __RPC__in IUIAutomationElement5 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPattern )(
            __RPC__in IUIAutomationElement5 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedParent )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt IUIAutomationElement **parent);
        HRESULT ( STDMETHODCALLTYPE *GetCachedChildren )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **children);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentName )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControllerFor )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDescribedBy )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsTo )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProviderDescription )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProcessId )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControlType )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedControlType )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedName )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAcceleratorKey )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAccessKey )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHasKeyboardFocus )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsEnabled )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAutomationId )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedClassName )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHelpText )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCulture )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsControlElement )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsContentElement )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsPassword )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedNativeWindowHandle )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemType )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsOffscreen )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedOrientation )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFrameworkId )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsRequiredForForm )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemStatus )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedBoundingRectangle )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLabeledBy )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaRole )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaProperties )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsDataValidForForm )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControllerFor )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedDescribedBy )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsTo )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProviderDescription )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )(
            __RPC__in IUIAutomationElement5 * This,
                        __RPC__out POINT *clickable,
                                __RPC__out BOOL *gotClickable);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentOptimizeForVisualContent )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedOptimizeForVisualContent )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLiveSetting )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out enum LiveSetting *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLiveSetting )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out enum LiveSetting *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsFrom )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsFrom )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )(
            __RPC__in IUIAutomationElement5 * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPeripheral )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsPeripheral )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPositionInSet )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentSizeOfSet )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLevel )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationTypes )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationObjects )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedPositionInSet )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedSizeOfSet )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLevel )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationTypes )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationObjects )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLandmarkType )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out LANDMARKTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedLandmarkType )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLandmarkType )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__out LANDMARKTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedLandmarkType )(
            __RPC__in IUIAutomationElement5 * This,
                                __RPC__deref_out_opt BSTR *retVal);
        END_INTERFACE
    } IUIAutomationElement5Vtbl;
    interface IUIAutomationElement5
    {
        CONST_VTBL struct IUIAutomationElement5Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFocus(This) )
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) )
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) )
    ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedParent(This,parent) )
    ( (This)->lpVtbl -> GetCachedChildren(This,children) )
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) )
    ( (This)->lpVtbl -> get_CurrentOptimizeForVisualContent(This,retVal) )
    ( (This)->lpVtbl -> get_CachedOptimizeForVisualContent(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLiveSetting(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLiveSetting(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFlowsFrom(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFlowsFrom(This,retVal) )
    ( (This)->lpVtbl -> ShowContextMenu(This) )
    ( (This)->lpVtbl -> get_CurrentIsPeripheral(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsPeripheral(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentPositionInSet(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentSizeOfSet(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLevel(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAnnotationTypes(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAnnotationObjects(This,retVal) )
    ( (This)->lpVtbl -> get_CachedPositionInSet(This,retVal) )
    ( (This)->lpVtbl -> get_CachedSizeOfSet(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLevel(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAnnotationTypes(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAnnotationObjects(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLocalizedLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLocalizedLandmarkType(This,retVal) )
EXTERN_C const IID IID_IUIAutomationElement6;
    typedef struct IUIAutomationElement6Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationElement6 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationElement6 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationElement6 * This);
        HRESULT ( STDMETHODCALLTYPE *SetFocus )(
            __RPC__in IUIAutomationElement6 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt SAFEARRAY * *runtimeId);
        HRESULT ( STDMETHODCALLTYPE *FindFirst )(
            __RPC__in IUIAutomationElement6 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAll )(
            __RPC__in IUIAutomationElement6 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )(
            __RPC__in IUIAutomationElement6 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAllBuildCache )(
            __RPC__in IUIAutomationElement6 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *BuildUpdatedCache )(
            __RPC__in IUIAutomationElement6 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **updatedElement);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValue )(
            __RPC__in IUIAutomationElement6 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValueEx )(
            __RPC__in IUIAutomationElement6 * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValue )(
            __RPC__in IUIAutomationElement6 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValueEx )(
            __RPC__in IUIAutomationElement6 * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPatternAs )(
            __RPC__in IUIAutomationElement6 * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPatternAs )(
            __RPC__in IUIAutomationElement6 * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )(
            __RPC__in IUIAutomationElement6 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPattern )(
            __RPC__in IUIAutomationElement6 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedParent )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt IUIAutomationElement **parent);
        HRESULT ( STDMETHODCALLTYPE *GetCachedChildren )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **children);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentName )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControllerFor )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDescribedBy )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsTo )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProviderDescription )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProcessId )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControlType )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedControlType )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedName )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAcceleratorKey )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAccessKey )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHasKeyboardFocus )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsEnabled )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAutomationId )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedClassName )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHelpText )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCulture )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsControlElement )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsContentElement )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsPassword )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedNativeWindowHandle )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemType )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsOffscreen )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedOrientation )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFrameworkId )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsRequiredForForm )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemStatus )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedBoundingRectangle )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLabeledBy )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaRole )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaProperties )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsDataValidForForm )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControllerFor )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedDescribedBy )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsTo )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProviderDescription )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )(
            __RPC__in IUIAutomationElement6 * This,
                        __RPC__out POINT *clickable,
                                __RPC__out BOOL *gotClickable);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentOptimizeForVisualContent )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedOptimizeForVisualContent )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLiveSetting )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out enum LiveSetting *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLiveSetting )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out enum LiveSetting *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsFrom )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsFrom )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )(
            __RPC__in IUIAutomationElement6 * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPeripheral )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsPeripheral )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPositionInSet )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentSizeOfSet )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLevel )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationTypes )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationObjects )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedPositionInSet )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedSizeOfSet )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLevel )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationTypes )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationObjects )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLandmarkType )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out LANDMARKTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedLandmarkType )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLandmarkType )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__out LANDMARKTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedLandmarkType )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFullDescription )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFullDescription )(
            __RPC__in IUIAutomationElement6 * This,
                                __RPC__deref_out_opt BSTR *retVal);
        END_INTERFACE
    } IUIAutomationElement6Vtbl;
    interface IUIAutomationElement6
    {
        CONST_VTBL struct IUIAutomationElement6Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFocus(This) )
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) )
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) )
    ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedParent(This,parent) )
    ( (This)->lpVtbl -> GetCachedChildren(This,children) )
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) )
    ( (This)->lpVtbl -> get_CurrentOptimizeForVisualContent(This,retVal) )
    ( (This)->lpVtbl -> get_CachedOptimizeForVisualContent(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLiveSetting(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLiveSetting(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFlowsFrom(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFlowsFrom(This,retVal) )
    ( (This)->lpVtbl -> ShowContextMenu(This) )
    ( (This)->lpVtbl -> get_CurrentIsPeripheral(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsPeripheral(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentPositionInSet(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentSizeOfSet(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLevel(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAnnotationTypes(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAnnotationObjects(This,retVal) )
    ( (This)->lpVtbl -> get_CachedPositionInSet(This,retVal) )
    ( (This)->lpVtbl -> get_CachedSizeOfSet(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLevel(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAnnotationTypes(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAnnotationObjects(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLocalizedLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLocalizedLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFullDescription(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFullDescription(This,retVal) )
EXTERN_C const IID IID_IUIAutomationElement7;
    typedef struct IUIAutomationElement7Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationElement7 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationElement7 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationElement7 * This);
        HRESULT ( STDMETHODCALLTYPE *SetFocus )(
            __RPC__in IUIAutomationElement7 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt SAFEARRAY * *runtimeId);
        HRESULT ( STDMETHODCALLTYPE *FindFirst )(
            __RPC__in IUIAutomationElement7 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAll )(
            __RPC__in IUIAutomationElement7 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )(
            __RPC__in IUIAutomationElement7 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAllBuildCache )(
            __RPC__in IUIAutomationElement7 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *BuildUpdatedCache )(
            __RPC__in IUIAutomationElement7 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **updatedElement);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValue )(
            __RPC__in IUIAutomationElement7 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValueEx )(
            __RPC__in IUIAutomationElement7 * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValue )(
            __RPC__in IUIAutomationElement7 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValueEx )(
            __RPC__in IUIAutomationElement7 * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPatternAs )(
            __RPC__in IUIAutomationElement7 * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPatternAs )(
            __RPC__in IUIAutomationElement7 * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )(
            __RPC__in IUIAutomationElement7 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPattern )(
            __RPC__in IUIAutomationElement7 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedParent )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt IUIAutomationElement **parent);
        HRESULT ( STDMETHODCALLTYPE *GetCachedChildren )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **children);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentName )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControllerFor )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDescribedBy )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsTo )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProviderDescription )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProcessId )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControlType )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedControlType )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedName )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAcceleratorKey )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAccessKey )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHasKeyboardFocus )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsEnabled )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAutomationId )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedClassName )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHelpText )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCulture )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsControlElement )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsContentElement )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsPassword )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedNativeWindowHandle )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemType )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsOffscreen )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedOrientation )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFrameworkId )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsRequiredForForm )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemStatus )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedBoundingRectangle )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLabeledBy )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaRole )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaProperties )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsDataValidForForm )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControllerFor )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedDescribedBy )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsTo )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProviderDescription )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )(
            __RPC__in IUIAutomationElement7 * This,
                        __RPC__out POINT *clickable,
                                __RPC__out BOOL *gotClickable);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentOptimizeForVisualContent )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedOptimizeForVisualContent )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLiveSetting )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out enum LiveSetting *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLiveSetting )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out enum LiveSetting *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsFrom )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsFrom )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )(
            __RPC__in IUIAutomationElement7 * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPeripheral )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsPeripheral )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPositionInSet )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentSizeOfSet )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLevel )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationTypes )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationObjects )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedPositionInSet )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedSizeOfSet )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLevel )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationTypes )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationObjects )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLandmarkType )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out LANDMARKTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedLandmarkType )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLandmarkType )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__out LANDMARKTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedLandmarkType )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFullDescription )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFullDescription )(
            __RPC__in IUIAutomationElement7 * This,
                                __RPC__deref_out_opt BSTR *retVal);
        HRESULT ( STDMETHODCALLTYPE *FindFirstWithOptions )(
            __RPC__in IUIAutomationElement7 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       enum TreeTraversalOptions traversalOptions,
                       __RPC__in_opt IUIAutomationElement *root,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAllWithOptions )(
            __RPC__in IUIAutomationElement7 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       enum TreeTraversalOptions traversalOptions,
                       __RPC__in_opt IUIAutomationElement *root,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *FindFirstWithOptionsBuildCache )(
            __RPC__in IUIAutomationElement7 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       enum TreeTraversalOptions traversalOptions,
                       __RPC__in_opt IUIAutomationElement *root,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAllWithOptionsBuildCache )(
            __RPC__in IUIAutomationElement7 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       enum TreeTraversalOptions traversalOptions,
                       __RPC__in_opt IUIAutomationElement *root,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentMetadataValue )(
            __RPC__in IUIAutomationElement7 * This,
                       int targetId,
                       METADATAID metadataId,
                                __RPC__out VARIANT *returnVal);
        END_INTERFACE
    } IUIAutomationElement7Vtbl;
    interface IUIAutomationElement7
    {
        CONST_VTBL struct IUIAutomationElement7Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFocus(This) )
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) )
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) )
    ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedParent(This,parent) )
    ( (This)->lpVtbl -> GetCachedChildren(This,children) )
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) )
    ( (This)->lpVtbl -> get_CurrentOptimizeForVisualContent(This,retVal) )
    ( (This)->lpVtbl -> get_CachedOptimizeForVisualContent(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLiveSetting(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLiveSetting(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFlowsFrom(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFlowsFrom(This,retVal) )
    ( (This)->lpVtbl -> ShowContextMenu(This) )
    ( (This)->lpVtbl -> get_CurrentIsPeripheral(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsPeripheral(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentPositionInSet(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentSizeOfSet(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLevel(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAnnotationTypes(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAnnotationObjects(This,retVal) )
    ( (This)->lpVtbl -> get_CachedPositionInSet(This,retVal) )
    ( (This)->lpVtbl -> get_CachedSizeOfSet(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLevel(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAnnotationTypes(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAnnotationObjects(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLocalizedLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLocalizedLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFullDescription(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFullDescription(This,retVal) )
    ( (This)->lpVtbl -> FindFirstWithOptions(This,scope,condition,traversalOptions,root,found) )
    ( (This)->lpVtbl -> FindAllWithOptions(This,scope,condition,traversalOptions,root,found) )
    ( (This)->lpVtbl -> FindFirstWithOptionsBuildCache(This,scope,condition,cacheRequest,traversalOptions,root,found) )
    ( (This)->lpVtbl -> FindAllWithOptionsBuildCache(This,scope,condition,cacheRequest,traversalOptions,root,found) )
    ( (This)->lpVtbl -> GetCurrentMetadataValue(This,targetId,metadataId,returnVal) )
EXTERN_C const IID IID_IUIAutomationElement8;
    typedef struct IUIAutomationElement8Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationElement8 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationElement8 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationElement8 * This);
        HRESULT ( STDMETHODCALLTYPE *SetFocus )(
            __RPC__in IUIAutomationElement8 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt SAFEARRAY * *runtimeId);
        HRESULT ( STDMETHODCALLTYPE *FindFirst )(
            __RPC__in IUIAutomationElement8 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAll )(
            __RPC__in IUIAutomationElement8 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )(
            __RPC__in IUIAutomationElement8 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAllBuildCache )(
            __RPC__in IUIAutomationElement8 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *BuildUpdatedCache )(
            __RPC__in IUIAutomationElement8 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **updatedElement);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValue )(
            __RPC__in IUIAutomationElement8 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValueEx )(
            __RPC__in IUIAutomationElement8 * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValue )(
            __RPC__in IUIAutomationElement8 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValueEx )(
            __RPC__in IUIAutomationElement8 * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPatternAs )(
            __RPC__in IUIAutomationElement8 * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPatternAs )(
            __RPC__in IUIAutomationElement8 * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )(
            __RPC__in IUIAutomationElement8 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPattern )(
            __RPC__in IUIAutomationElement8 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedParent )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt IUIAutomationElement **parent);
        HRESULT ( STDMETHODCALLTYPE *GetCachedChildren )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **children);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentName )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControllerFor )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDescribedBy )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsTo )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProviderDescription )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProcessId )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControlType )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedControlType )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedName )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAcceleratorKey )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAccessKey )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHasKeyboardFocus )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsEnabled )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAutomationId )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedClassName )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHelpText )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCulture )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsControlElement )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsContentElement )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsPassword )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedNativeWindowHandle )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemType )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsOffscreen )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedOrientation )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFrameworkId )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsRequiredForForm )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemStatus )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedBoundingRectangle )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLabeledBy )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaRole )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaProperties )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsDataValidForForm )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControllerFor )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedDescribedBy )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsTo )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProviderDescription )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )(
            __RPC__in IUIAutomationElement8 * This,
                        __RPC__out POINT *clickable,
                                __RPC__out BOOL *gotClickable);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentOptimizeForVisualContent )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedOptimizeForVisualContent )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLiveSetting )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out enum LiveSetting *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLiveSetting )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out enum LiveSetting *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsFrom )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsFrom )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )(
            __RPC__in IUIAutomationElement8 * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPeripheral )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsPeripheral )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPositionInSet )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentSizeOfSet )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLevel )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationTypes )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationObjects )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedPositionInSet )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedSizeOfSet )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLevel )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationTypes )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationObjects )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLandmarkType )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out LANDMARKTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedLandmarkType )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLandmarkType )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out LANDMARKTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedLandmarkType )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFullDescription )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFullDescription )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__deref_out_opt BSTR *retVal);
        HRESULT ( STDMETHODCALLTYPE *FindFirstWithOptions )(
            __RPC__in IUIAutomationElement8 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       enum TreeTraversalOptions traversalOptions,
                       __RPC__in_opt IUIAutomationElement *root,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAllWithOptions )(
            __RPC__in IUIAutomationElement8 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       enum TreeTraversalOptions traversalOptions,
                       __RPC__in_opt IUIAutomationElement *root,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *FindFirstWithOptionsBuildCache )(
            __RPC__in IUIAutomationElement8 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       enum TreeTraversalOptions traversalOptions,
                       __RPC__in_opt IUIAutomationElement *root,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAllWithOptionsBuildCache )(
            __RPC__in IUIAutomationElement8 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       enum TreeTraversalOptions traversalOptions,
                       __RPC__in_opt IUIAutomationElement *root,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentMetadataValue )(
            __RPC__in IUIAutomationElement8 * This,
                       int targetId,
                       METADATAID metadataId,
                                __RPC__out VARIANT *returnVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHeadingLevel )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out HEADINGLEVELID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHeadingLevel )(
            __RPC__in IUIAutomationElement8 * This,
                                __RPC__out HEADINGLEVELID *retVal);
        END_INTERFACE
    } IUIAutomationElement8Vtbl;
    interface IUIAutomationElement8
    {
        CONST_VTBL struct IUIAutomationElement8Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFocus(This) )
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) )
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) )
    ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedParent(This,parent) )
    ( (This)->lpVtbl -> GetCachedChildren(This,children) )
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) )
    ( (This)->lpVtbl -> get_CurrentOptimizeForVisualContent(This,retVal) )
    ( (This)->lpVtbl -> get_CachedOptimizeForVisualContent(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLiveSetting(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLiveSetting(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFlowsFrom(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFlowsFrom(This,retVal) )
    ( (This)->lpVtbl -> ShowContextMenu(This) )
    ( (This)->lpVtbl -> get_CurrentIsPeripheral(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsPeripheral(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentPositionInSet(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentSizeOfSet(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLevel(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAnnotationTypes(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAnnotationObjects(This,retVal) )
    ( (This)->lpVtbl -> get_CachedPositionInSet(This,retVal) )
    ( (This)->lpVtbl -> get_CachedSizeOfSet(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLevel(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAnnotationTypes(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAnnotationObjects(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLocalizedLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLocalizedLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFullDescription(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFullDescription(This,retVal) )
    ( (This)->lpVtbl -> FindFirstWithOptions(This,scope,condition,traversalOptions,root,found) )
    ( (This)->lpVtbl -> FindAllWithOptions(This,scope,condition,traversalOptions,root,found) )
    ( (This)->lpVtbl -> FindFirstWithOptionsBuildCache(This,scope,condition,cacheRequest,traversalOptions,root,found) )
    ( (This)->lpVtbl -> FindAllWithOptionsBuildCache(This,scope,condition,cacheRequest,traversalOptions,root,found) )
    ( (This)->lpVtbl -> GetCurrentMetadataValue(This,targetId,metadataId,returnVal) )
    ( (This)->lpVtbl -> get_CurrentHeadingLevel(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHeadingLevel(This,retVal) )
EXTERN_C const IID IID_IUIAutomationElement9;
    typedef struct IUIAutomationElement9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationElement9 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationElement9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationElement9 * This);
        HRESULT ( STDMETHODCALLTYPE *SetFocus )(
            __RPC__in IUIAutomationElement9 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt SAFEARRAY * *runtimeId);
        HRESULT ( STDMETHODCALLTYPE *FindFirst )(
            __RPC__in IUIAutomationElement9 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAll )(
            __RPC__in IUIAutomationElement9 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )(
            __RPC__in IUIAutomationElement9 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAllBuildCache )(
            __RPC__in IUIAutomationElement9 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *BuildUpdatedCache )(
            __RPC__in IUIAutomationElement9 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **updatedElement);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValue )(
            __RPC__in IUIAutomationElement9 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValueEx )(
            __RPC__in IUIAutomationElement9 * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValue )(
            __RPC__in IUIAutomationElement9 * This,
                       PROPERTYID propertyId,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValueEx )(
            __RPC__in IUIAutomationElement9 * This,
                       PROPERTYID propertyId,
                       BOOL ignoreDefaultValue,
                                __RPC__out VARIANT *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPatternAs )(
            __RPC__in IUIAutomationElement9 * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPatternAs )(
            __RPC__in IUIAutomationElement9 * This,
                       PATTERNID patternId,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )(
            __RPC__in IUIAutomationElement9 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedPattern )(
            __RPC__in IUIAutomationElement9 * This,
                       PATTERNID patternId,
                                __RPC__deref_out_opt IUnknown **patternObject);
        HRESULT ( STDMETHODCALLTYPE *GetCachedParent )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt IUIAutomationElement **parent);
        HRESULT ( STDMETHODCALLTYPE *GetCachedChildren )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **children);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentName )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentControllerFor )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDescribedBy )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsTo )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentProviderDescription )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProcessId )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControlType )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out CONTROLTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedControlType )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedName )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAcceleratorKey )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAccessKey )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHasKeyboardFocus )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsKeyboardFocusable )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsEnabled )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAutomationId )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedClassName )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHelpText )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedCulture )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsControlElement )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsContentElement )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsPassword )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedNativeWindowHandle )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt UIA_HWND *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemType )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsOffscreen )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedOrientation )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out enum OrientationType *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFrameworkId )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsRequiredForForm )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedItemStatus )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedBoundingRectangle )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out RECT *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLabeledBy )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt IUIAutomationElement **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaRole )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAriaProperties )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsDataValidForForm )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedControllerFor )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedDescribedBy )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsTo )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedProviderDescription )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
        HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )(
            __RPC__in IUIAutomationElement9 * This,
                        __RPC__out POINT *clickable,
                                __RPC__out BOOL *gotClickable);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentOptimizeForVisualContent )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedOptimizeForVisualContent )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLiveSetting )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out enum LiveSetting *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLiveSetting )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out enum LiveSetting *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsFrom )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsFrom )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )(
            __RPC__in IUIAutomationElement9 * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPeripheral )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsPeripheral )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPositionInSet )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentSizeOfSet )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLevel )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationTypes )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationObjects )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedPositionInSet )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedSizeOfSet )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLevel )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out int *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationTypes )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt SAFEARRAY * *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationObjects )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt IUIAutomationElementArray **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLandmarkType )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out LANDMARKTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedLandmarkType )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLandmarkType )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out LANDMARKTYPEID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedLandmarkType )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFullDescription )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedFullDescription )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__deref_out_opt BSTR *retVal);
        HRESULT ( STDMETHODCALLTYPE *FindFirstWithOptions )(
            __RPC__in IUIAutomationElement9 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       enum TreeTraversalOptions traversalOptions,
                       __RPC__in_opt IUIAutomationElement *root,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAllWithOptions )(
            __RPC__in IUIAutomationElement9 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       enum TreeTraversalOptions traversalOptions,
                       __RPC__in_opt IUIAutomationElement *root,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *FindFirstWithOptionsBuildCache )(
            __RPC__in IUIAutomationElement9 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       enum TreeTraversalOptions traversalOptions,
                       __RPC__in_opt IUIAutomationElement *root,
                                __RPC__deref_out_opt IUIAutomationElement **found);
        HRESULT ( STDMETHODCALLTYPE *FindAllWithOptionsBuildCache )(
            __RPC__in IUIAutomationElement9 * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCondition *condition,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       enum TreeTraversalOptions traversalOptions,
                       __RPC__in_opt IUIAutomationElement *root,
                                __RPC__deref_out_opt IUIAutomationElementArray **found);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentMetadataValue )(
            __RPC__in IUIAutomationElement9 * This,
                       int targetId,
                       METADATAID metadataId,
                                __RPC__out VARIANT *returnVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentHeadingLevel )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out HEADINGLEVELID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedHeadingLevel )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out HEADINGLEVELID *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDialog )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_CachedIsDialog )(
            __RPC__in IUIAutomationElement9 * This,
                                __RPC__out BOOL *retVal);
        END_INTERFACE
    } IUIAutomationElement9Vtbl;
    interface IUIAutomationElement9
    {
        CONST_VTBL struct IUIAutomationElement9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFocus(This) )
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) )
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) )
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) )
    ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) )
    ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) )
    ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
    ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) )
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) )
    ( (This)->lpVtbl -> GetCachedParent(This,parent) )
    ( (This)->lpVtbl -> GetCachedChildren(This,children) )
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedClassName(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) )
    ( (This)->lpVtbl -> get_CachedCulture(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) )
    ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) )
    ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) )
    ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) )
    ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) )
    ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) )
    ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) )
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) )
    ( (This)->lpVtbl -> get_CurrentOptimizeForVisualContent(This,retVal) )
    ( (This)->lpVtbl -> get_CachedOptimizeForVisualContent(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLiveSetting(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLiveSetting(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFlowsFrom(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFlowsFrom(This,retVal) )
    ( (This)->lpVtbl -> ShowContextMenu(This) )
    ( (This)->lpVtbl -> get_CurrentIsPeripheral(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsPeripheral(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentPositionInSet(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentSizeOfSet(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLevel(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAnnotationTypes(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentAnnotationObjects(This,retVal) )
    ( (This)->lpVtbl -> get_CachedPositionInSet(This,retVal) )
    ( (This)->lpVtbl -> get_CachedSizeOfSet(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLevel(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAnnotationTypes(This,retVal) )
    ( (This)->lpVtbl -> get_CachedAnnotationObjects(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentLocalizedLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CachedLocalizedLandmarkType(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentFullDescription(This,retVal) )
    ( (This)->lpVtbl -> get_CachedFullDescription(This,retVal) )
    ( (This)->lpVtbl -> FindFirstWithOptions(This,scope,condition,traversalOptions,root,found) )
    ( (This)->lpVtbl -> FindAllWithOptions(This,scope,condition,traversalOptions,root,found) )
    ( (This)->lpVtbl -> FindFirstWithOptionsBuildCache(This,scope,condition,cacheRequest,traversalOptions,root,found) )
    ( (This)->lpVtbl -> FindAllWithOptionsBuildCache(This,scope,condition,cacheRequest,traversalOptions,root,found) )
    ( (This)->lpVtbl -> GetCurrentMetadataValue(This,targetId,metadataId,returnVal) )
    ( (This)->lpVtbl -> get_CurrentHeadingLevel(This,retVal) )
    ( (This)->lpVtbl -> get_CachedHeadingLevel(This,retVal) )
    ( (This)->lpVtbl -> get_CurrentIsDialog(This,retVal) )
    ( (This)->lpVtbl -> get_CachedIsDialog(This,retVal) )
EXTERN_C const IID IID_IUIAutomationProxyFactory;
    typedef struct IUIAutomationProxyFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationProxyFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationProxyFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationProxyFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateProvider )(
            __RPC__in IUIAutomationProxyFactory * This,
                       __RPC__in UIA_HWND hwnd,
                       LONG idObject,
                       LONG idChild,
                                __RPC__deref_out_opt IRawElementProviderSimple **provider);
                        HRESULT ( STDMETHODCALLTYPE *get_ProxyFactoryId )(
            __RPC__in IUIAutomationProxyFactory * This,
                                __RPC__deref_out_opt BSTR *factoryId);
        END_INTERFACE
    } IUIAutomationProxyFactoryVtbl;
    interface IUIAutomationProxyFactory
    {
        CONST_VTBL struct IUIAutomationProxyFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateProvider(This,hwnd,idObject,idChild,provider) )
    ( (This)->lpVtbl -> get_ProxyFactoryId(This,factoryId) )
EXTERN_C const IID IID_IUIAutomationProxyFactoryEntry;
    typedef struct IUIAutomationProxyFactoryEntryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationProxyFactoryEntry * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationProxyFactoryEntry * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationProxyFactoryEntry * This);
                        HRESULT ( STDMETHODCALLTYPE *get_ProxyFactory )(
            __RPC__in IUIAutomationProxyFactoryEntry * This,
                                __RPC__deref_out_opt IUIAutomationProxyFactory **factory);
                        HRESULT ( STDMETHODCALLTYPE *get_ClassName )(
            __RPC__in IUIAutomationProxyFactoryEntry * This,
                                __RPC__deref_out_opt BSTR *className);
                        HRESULT ( STDMETHODCALLTYPE *get_ImageName )(
            __RPC__in IUIAutomationProxyFactoryEntry * This,
                                __RPC__deref_out_opt BSTR *imageName);
                        HRESULT ( STDMETHODCALLTYPE *get_AllowSubstringMatch )(
            __RPC__in IUIAutomationProxyFactoryEntry * This,
                                __RPC__out BOOL *allowSubstringMatch);
                        HRESULT ( STDMETHODCALLTYPE *get_CanCheckBaseClass )(
            __RPC__in IUIAutomationProxyFactoryEntry * This,
                                __RPC__out BOOL *canCheckBaseClass);
                        HRESULT ( STDMETHODCALLTYPE *get_NeedsAdviseEvents )(
            __RPC__in IUIAutomationProxyFactoryEntry * This,
                                __RPC__out BOOL *adviseEvents);
                        HRESULT ( STDMETHODCALLTYPE *put_ClassName )(
            __RPC__in IUIAutomationProxyFactoryEntry * This,
                       __RPC__in LPCWSTR className);
                        HRESULT ( STDMETHODCALLTYPE *put_ImageName )(
            __RPC__in IUIAutomationProxyFactoryEntry * This,
                       __RPC__in LPCWSTR imageName);
                        HRESULT ( STDMETHODCALLTYPE *put_AllowSubstringMatch )(
            __RPC__in IUIAutomationProxyFactoryEntry * This,
                       BOOL allowSubstringMatch);
                        HRESULT ( STDMETHODCALLTYPE *put_CanCheckBaseClass )(
            __RPC__in IUIAutomationProxyFactoryEntry * This,
                       BOOL canCheckBaseClass);
                        HRESULT ( STDMETHODCALLTYPE *put_NeedsAdviseEvents )(
            __RPC__in IUIAutomationProxyFactoryEntry * This,
                       BOOL adviseEvents);
        HRESULT ( STDMETHODCALLTYPE *SetWinEventsForAutomationEvent )(
            __RPC__in IUIAutomationProxyFactoryEntry * This,
                       EVENTID eventId,
                       PROPERTYID propertyId,
                       __RPC__in SAFEARRAY * winEvents);
        HRESULT ( STDMETHODCALLTYPE *GetWinEventsForAutomationEvent )(
            __RPC__in IUIAutomationProxyFactoryEntry * This,
                       EVENTID eventId,
                       PROPERTYID propertyId,
                                __RPC__deref_out_opt SAFEARRAY * *winEvents);
        END_INTERFACE
    } IUIAutomationProxyFactoryEntryVtbl;
    interface IUIAutomationProxyFactoryEntry
    {
        CONST_VTBL struct IUIAutomationProxyFactoryEntryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_ProxyFactory(This,factory) )
    ( (This)->lpVtbl -> get_ClassName(This,className) )
    ( (This)->lpVtbl -> get_ImageName(This,imageName) )
    ( (This)->lpVtbl -> get_AllowSubstringMatch(This,allowSubstringMatch) )
    ( (This)->lpVtbl -> get_CanCheckBaseClass(This,canCheckBaseClass) )
    ( (This)->lpVtbl -> get_NeedsAdviseEvents(This,adviseEvents) )
    ( (This)->lpVtbl -> put_ClassName(This,className) )
    ( (This)->lpVtbl -> put_ImageName(This,imageName) )
    ( (This)->lpVtbl -> put_AllowSubstringMatch(This,allowSubstringMatch) )
    ( (This)->lpVtbl -> put_CanCheckBaseClass(This,canCheckBaseClass) )
    ( (This)->lpVtbl -> put_NeedsAdviseEvents(This,adviseEvents) )
    ( (This)->lpVtbl -> SetWinEventsForAutomationEvent(This,eventId,propertyId,winEvents) )
    ( (This)->lpVtbl -> GetWinEventsForAutomationEvent(This,eventId,propertyId,winEvents) )
EXTERN_C const IID IID_IUIAutomationProxyFactoryMapping;
    typedef struct IUIAutomationProxyFactoryMappingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationProxyFactoryMapping * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationProxyFactoryMapping * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationProxyFactoryMapping * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IUIAutomationProxyFactoryMapping * This,
                                __RPC__out UINT *count);
        HRESULT ( STDMETHODCALLTYPE *GetTable )(
            __RPC__in IUIAutomationProxyFactoryMapping * This,
                                __RPC__deref_out_opt SAFEARRAY * *table);
        HRESULT ( STDMETHODCALLTYPE *GetEntry )(
            __RPC__in IUIAutomationProxyFactoryMapping * This,
                       UINT index,
                                __RPC__deref_out_opt IUIAutomationProxyFactoryEntry **entry);
        HRESULT ( STDMETHODCALLTYPE *SetTable )(
            __RPC__in IUIAutomationProxyFactoryMapping * This,
                       __RPC__in_opt SAFEARRAY * factoryList);
        HRESULT ( STDMETHODCALLTYPE *InsertEntries )(
            __RPC__in IUIAutomationProxyFactoryMapping * This,
                       UINT before,
                       __RPC__in_opt SAFEARRAY * factoryList);
        HRESULT ( STDMETHODCALLTYPE *InsertEntry )(
            __RPC__in IUIAutomationProxyFactoryMapping * This,
                       UINT before,
                       __RPC__in_opt IUIAutomationProxyFactoryEntry *factory);
        HRESULT ( STDMETHODCALLTYPE *RemoveEntry )(
            __RPC__in IUIAutomationProxyFactoryMapping * This,
                       UINT index);
        HRESULT ( STDMETHODCALLTYPE *ClearTable )(
            __RPC__in IUIAutomationProxyFactoryMapping * This);
        HRESULT ( STDMETHODCALLTYPE *RestoreDefaultTable )(
            __RPC__in IUIAutomationProxyFactoryMapping * This);
        END_INTERFACE
    } IUIAutomationProxyFactoryMappingVtbl;
    interface IUIAutomationProxyFactoryMapping
    {
        CONST_VTBL struct IUIAutomationProxyFactoryMappingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Count(This,count) )
    ( (This)->lpVtbl -> GetTable(This,table) )
    ( (This)->lpVtbl -> GetEntry(This,index,entry) )
    ( (This)->lpVtbl -> SetTable(This,factoryList) )
    ( (This)->lpVtbl -> InsertEntries(This,before,factoryList) )
    ( (This)->lpVtbl -> InsertEntry(This,before,factory) )
    ( (This)->lpVtbl -> RemoveEntry(This,index) )
    ( (This)->lpVtbl -> ClearTable(This) )
    ( (This)->lpVtbl -> RestoreDefaultTable(This) )
EXTERN_C const IID IID_IUIAutomationEventHandlerGroup;
    typedef struct IUIAutomationEventHandlerGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomationEventHandlerGroup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomationEventHandlerGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomationEventHandlerGroup * This);
        HRESULT ( STDMETHODCALLTYPE *AddActiveTextPositionChangedEventHandler )(
            __RPC__in IUIAutomationEventHandlerGroup * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationActiveTextPositionChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddAutomationEventHandler )(
            __RPC__in IUIAutomationEventHandlerGroup * This,
                       EVENTID eventId,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddChangesEventHandler )(
            __RPC__in IUIAutomationEventHandlerGroup * This,
                       enum TreeScope scope,
                                __RPC__in_ecount_full(changesCount) int *changeTypes,
                       int changesCount,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationChangesEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddNotificationEventHandler )(
            __RPC__in IUIAutomationEventHandlerGroup * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationNotificationEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandler )(
            __RPC__in IUIAutomationEventHandlerGroup * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler,
                                __RPC__in_ecount_full(propertyCount) PROPERTYID *propertyArray,
                       int propertyCount);
        HRESULT ( STDMETHODCALLTYPE *AddStructureChangedEventHandler )(
            __RPC__in IUIAutomationEventHandlerGroup * This,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationStructureChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddTextEditTextChangedEventHandler )(
            __RPC__in IUIAutomationEventHandlerGroup * This,
                       enum TreeScope scope,
                       enum TextEditChangeType textEditChangeType,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationTextEditTextChangedEventHandler *handler);
        END_INTERFACE
    } IUIAutomationEventHandlerGroupVtbl;
    interface IUIAutomationEventHandlerGroup
    {
        CONST_VTBL struct IUIAutomationEventHandlerGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddActiveTextPositionChangedEventHandler(This,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> AddAutomationEventHandler(This,eventId,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> AddChangesEventHandler(This,scope,changeTypes,changesCount,cacheRequest,handler) )
    ( (This)->lpVtbl -> AddNotificationEventHandler(This,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> AddPropertyChangedEventHandler(This,scope,cacheRequest,handler,propertyArray,propertyCount) )
    ( (This)->lpVtbl -> AddStructureChangedEventHandler(This,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> AddTextEditTextChangedEventHandler(This,scope,textEditChangeType,cacheRequest,handler) )
EXTERN_C const IID IID_IUIAutomation;
    typedef struct IUIAutomationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomation * This);
        HRESULT ( STDMETHODCALLTYPE *CompareElements )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IUIAutomationElement *el1,
                       __RPC__in_opt IUIAutomationElement *el2,
                                __RPC__out BOOL *areSame);
        HRESULT ( STDMETHODCALLTYPE *CompareRuntimeIds )(
            __RPC__in IUIAutomation * This,
                       __RPC__in SAFEARRAY * runtimeId1,
                       __RPC__in SAFEARRAY * runtimeId2,
                                __RPC__out BOOL *areSame);
        HRESULT ( STDMETHODCALLTYPE *GetRootElement )(
            __RPC__in IUIAutomation * This,
                                __RPC__deref_out_opt IUIAutomationElement **root);
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandle )(
            __RPC__in IUIAutomation * This,
                       __RPC__in UIA_HWND hwnd,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromPoint )(
            __RPC__in IUIAutomation * This,
                       POINT pt,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElement )(
            __RPC__in IUIAutomation * This,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetRootElementBuildCache )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **root);
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandleBuildCache )(
            __RPC__in IUIAutomation * This,
                       __RPC__in UIA_HWND hwnd,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromPointBuildCache )(
            __RPC__in IUIAutomation * This,
                       POINT pt,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElementBuildCache )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *CreateTreeWalker )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IUIAutomationCondition *pCondition,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_ControlViewWalker )(
            __RPC__in IUIAutomation * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_ContentViewWalker )(
            __RPC__in IUIAutomation * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_RawViewWalker )(
            __RPC__in IUIAutomation * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_RawViewCondition )(
            __RPC__in IUIAutomation * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
                        HRESULT ( STDMETHODCALLTYPE *get_ControlViewCondition )(
            __RPC__in IUIAutomation * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
                        HRESULT ( STDMETHODCALLTYPE *get_ContentViewCondition )(
            __RPC__in IUIAutomation * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
        HRESULT ( STDMETHODCALLTYPE *CreateCacheRequest )(
            __RPC__in IUIAutomation * This,
                                __RPC__deref_out_opt IUIAutomationCacheRequest **cacheRequest);
        HRESULT ( STDMETHODCALLTYPE *CreateTrueCondition )(
            __RPC__in IUIAutomation * This,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateFalseCondition )(
            __RPC__in IUIAutomation * This,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyCondition )(
            __RPC__in IUIAutomation * This,
                       PROPERTYID propertyId,
                       VARIANT value,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyConditionEx )(
            __RPC__in IUIAutomation * This,
                       PROPERTYID propertyId,
                       VARIANT value,
                       enum PropertyConditionFlags flags,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndCondition )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IUIAutomationCondition *condition1,
                       __RPC__in_opt IUIAutomationCondition *condition2,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromArray )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt SAFEARRAY * conditions,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromNativeArray )(
            __RPC__in IUIAutomation * This,
                                __RPC__in_ecount_full(conditionCount) IUIAutomationCondition **conditions,
                       int conditionCount,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrCondition )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IUIAutomationCondition *condition1,
                       __RPC__in_opt IUIAutomationCondition *condition2,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromArray )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt SAFEARRAY * conditions,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromNativeArray )(
            __RPC__in IUIAutomation * This,
                                __RPC__in_ecount_full(conditionCount) IUIAutomationCondition **conditions,
                       int conditionCount,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateNotCondition )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *AddAutomationEventHandler )(
            __RPC__in IUIAutomation * This,
                       EVENTID eventId,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveAutomationEventHandler )(
            __RPC__in IUIAutomation * This,
                       EVENTID eventId,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandlerNativeArray )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler,
                                __RPC__in_ecount_full(propertyCount) PROPERTYID *propertyArray,
                       int propertyCount);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandler )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler,
                       __RPC__in SAFEARRAY * propertyArray);
        HRESULT ( STDMETHODCALLTYPE *RemovePropertyChangedEventHandler )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddStructureChangedEventHandler )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationStructureChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveStructureChangedEventHandler )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationStructureChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddFocusChangedEventHandler )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationFocusChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveFocusChangedEventHandler )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IUIAutomationFocusChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllEventHandlers )(
            __RPC__in IUIAutomation * This);
        HRESULT ( STDMETHODCALLTYPE *IntNativeArrayToSafeArray )(
            __RPC__in IUIAutomation * This,
                                __RPC__in_ecount_full(arrayCount) int *array,
                       int arrayCount,
                                __RPC__deref_out_opt SAFEARRAY * *safeArray);
        HRESULT ( STDMETHODCALLTYPE *IntSafeArrayToNativeArray )(
            __RPC__in IUIAutomation * This,
                       __RPC__in SAFEARRAY * intArray,
                                          __RPC__deref_out_ecount_full_opt(*arrayCount) int **array,
                                __RPC__out int *arrayCount);
        HRESULT ( STDMETHODCALLTYPE *RectToVariant )(
            __RPC__in IUIAutomation * This,
                       RECT rc,
                                __RPC__out VARIANT *var);
        HRESULT ( STDMETHODCALLTYPE *VariantToRect )(
            __RPC__in IUIAutomation * This,
                       VARIANT var,
                                __RPC__out RECT *rc);
        HRESULT ( STDMETHODCALLTYPE *SafeArrayToRectNativeArray )(
            __RPC__in IUIAutomation * This,
                       __RPC__in SAFEARRAY * rects,
                                          __RPC__deref_out_ecount_full_opt(*rectArrayCount) RECT **rectArray,
                                __RPC__out int *rectArrayCount);
        HRESULT ( STDMETHODCALLTYPE *CreateProxyFactoryEntry )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IUIAutomationProxyFactory *factory,
                                __RPC__deref_out_opt IUIAutomationProxyFactoryEntry **factoryEntry);
                        HRESULT ( STDMETHODCALLTYPE *get_ProxyFactoryMapping )(
            __RPC__in IUIAutomation * This,
                                __RPC__deref_out_opt IUIAutomationProxyFactoryMapping **factoryMapping);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyProgrammaticName )(
            __RPC__in IUIAutomation * This,
                       PROPERTYID property,
                                __RPC__deref_out_opt BSTR *name);
        HRESULT ( STDMETHODCALLTYPE *GetPatternProgrammaticName )(
            __RPC__in IUIAutomation * This,
                       PATTERNID pattern,
                                __RPC__deref_out_opt BSTR *name);
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedPatterns )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IUIAutomationElement *pElement,
                        __RPC__deref_out_opt SAFEARRAY * *patternIds,
                        __RPC__deref_out_opt SAFEARRAY * *patternNames);
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedProperties )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IUIAutomationElement *pElement,
                        __RPC__deref_out_opt SAFEARRAY * *propertyIds,
                        __RPC__deref_out_opt SAFEARRAY * *propertyNames);
        HRESULT ( STDMETHODCALLTYPE *CheckNotSupported )(
            __RPC__in IUIAutomation * This,
                       VARIANT value,
                                __RPC__out BOOL *isNotSupported);
                        HRESULT ( STDMETHODCALLTYPE *get_ReservedNotSupportedValue )(
            __RPC__in IUIAutomation * This,
                                __RPC__deref_out_opt IUnknown **notSupportedValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ReservedMixedAttributeValue )(
            __RPC__in IUIAutomation * This,
                                __RPC__deref_out_opt IUnknown **mixedAttributeValue);
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessible )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IAccessible *accessible,
                       int childId,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessibleBuildCache )(
            __RPC__in IUIAutomation * This,
                       __RPC__in_opt IAccessible *accessible,
                       int childId,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        END_INTERFACE
    } IUIAutomationVtbl;
    interface IUIAutomation
    {
        CONST_VTBL struct IUIAutomationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CompareElements(This,el1,el2,areSame) )
    ( (This)->lpVtbl -> CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame) )
    ( (This)->lpVtbl -> GetRootElement(This,root) )
    ( (This)->lpVtbl -> ElementFromHandle(This,hwnd,element) )
    ( (This)->lpVtbl -> ElementFromPoint(This,pt,element) )
    ( (This)->lpVtbl -> GetFocusedElement(This,element) )
    ( (This)->lpVtbl -> GetRootElementBuildCache(This,cacheRequest,root) )
    ( (This)->lpVtbl -> ElementFromHandleBuildCache(This,hwnd,cacheRequest,element) )
    ( (This)->lpVtbl -> ElementFromPointBuildCache(This,pt,cacheRequest,element) )
    ( (This)->lpVtbl -> GetFocusedElementBuildCache(This,cacheRequest,element) )
    ( (This)->lpVtbl -> CreateTreeWalker(This,pCondition,walker) )
    ( (This)->lpVtbl -> get_ControlViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_ContentViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_RawViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_RawViewCondition(This,condition) )
    ( (This)->lpVtbl -> get_ControlViewCondition(This,condition) )
    ( (This)->lpVtbl -> get_ContentViewCondition(This,condition) )
    ( (This)->lpVtbl -> CreateCacheRequest(This,cacheRequest) )
    ( (This)->lpVtbl -> CreateTrueCondition(This,newCondition) )
    ( (This)->lpVtbl -> CreateFalseCondition(This,newCondition) )
    ( (This)->lpVtbl -> CreatePropertyCondition(This,propertyId,value,newCondition) )
    ( (This)->lpVtbl -> CreatePropertyConditionEx(This,propertyId,value,flags,newCondition) )
    ( (This)->lpVtbl -> CreateAndCondition(This,condition1,condition2,newCondition) )
    ( (This)->lpVtbl -> CreateAndConditionFromArray(This,conditions,newCondition) )
    ( (This)->lpVtbl -> CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition) )
    ( (This)->lpVtbl -> CreateOrCondition(This,condition1,condition2,newCondition) )
    ( (This)->lpVtbl -> CreateOrConditionFromArray(This,conditions,newCondition) )
    ( (This)->lpVtbl -> CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition) )
    ( (This)->lpVtbl -> CreateNotCondition(This,condition,newCondition) )
    ( (This)->lpVtbl -> AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveAutomationEventHandler(This,eventId,element,handler) )
    ( (This)->lpVtbl -> AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount) )
    ( (This)->lpVtbl -> AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray) )
    ( (This)->lpVtbl -> RemovePropertyChangedEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveStructureChangedEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> AddFocusChangedEventHandler(This,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveFocusChangedEventHandler(This,handler) )
    ( (This)->lpVtbl -> RemoveAllEventHandlers(This) )
    ( (This)->lpVtbl -> IntNativeArrayToSafeArray(This,array,arrayCount,safeArray) )
    ( (This)->lpVtbl -> IntSafeArrayToNativeArray(This,intArray,array,arrayCount) )
    ( (This)->lpVtbl -> RectToVariant(This,rc,var) )
    ( (This)->lpVtbl -> VariantToRect(This,var,rc) )
    ( (This)->lpVtbl -> SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount) )
    ( (This)->lpVtbl -> CreateProxyFactoryEntry(This,factory,factoryEntry) )
    ( (This)->lpVtbl -> get_ProxyFactoryMapping(This,factoryMapping) )
    ( (This)->lpVtbl -> GetPropertyProgrammaticName(This,property,name) )
    ( (This)->lpVtbl -> GetPatternProgrammaticName(This,pattern,name) )
    ( (This)->lpVtbl -> PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames) )
    ( (This)->lpVtbl -> PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames) )
    ( (This)->lpVtbl -> CheckNotSupported(This,value,isNotSupported) )
    ( (This)->lpVtbl -> get_ReservedNotSupportedValue(This,notSupportedValue) )
    ( (This)->lpVtbl -> get_ReservedMixedAttributeValue(This,mixedAttributeValue) )
    ( (This)->lpVtbl -> ElementFromIAccessible(This,accessible,childId,element) )
    ( (This)->lpVtbl -> ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element) )
EXTERN_C const IID IID_IUIAutomation2;
    typedef struct IUIAutomation2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomation2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomation2 * This);
        HRESULT ( STDMETHODCALLTYPE *CompareElements )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IUIAutomationElement *el1,
                       __RPC__in_opt IUIAutomationElement *el2,
                                __RPC__out BOOL *areSame);
        HRESULT ( STDMETHODCALLTYPE *CompareRuntimeIds )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in SAFEARRAY * runtimeId1,
                       __RPC__in SAFEARRAY * runtimeId2,
                                __RPC__out BOOL *areSame);
        HRESULT ( STDMETHODCALLTYPE *GetRootElement )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__deref_out_opt IUIAutomationElement **root);
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandle )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in UIA_HWND hwnd,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromPoint )(
            __RPC__in IUIAutomation2 * This,
                       POINT pt,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElement )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetRootElementBuildCache )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **root);
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandleBuildCache )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in UIA_HWND hwnd,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromPointBuildCache )(
            __RPC__in IUIAutomation2 * This,
                       POINT pt,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElementBuildCache )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *CreateTreeWalker )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IUIAutomationCondition *pCondition,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_ControlViewWalker )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_ContentViewWalker )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_RawViewWalker )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_RawViewCondition )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
                        HRESULT ( STDMETHODCALLTYPE *get_ControlViewCondition )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
                        HRESULT ( STDMETHODCALLTYPE *get_ContentViewCondition )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
        HRESULT ( STDMETHODCALLTYPE *CreateCacheRequest )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__deref_out_opt IUIAutomationCacheRequest **cacheRequest);
        HRESULT ( STDMETHODCALLTYPE *CreateTrueCondition )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateFalseCondition )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyCondition )(
            __RPC__in IUIAutomation2 * This,
                       PROPERTYID propertyId,
                       VARIANT value,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyConditionEx )(
            __RPC__in IUIAutomation2 * This,
                       PROPERTYID propertyId,
                       VARIANT value,
                       enum PropertyConditionFlags flags,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndCondition )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IUIAutomationCondition *condition1,
                       __RPC__in_opt IUIAutomationCondition *condition2,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromArray )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt SAFEARRAY * conditions,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromNativeArray )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__in_ecount_full(conditionCount) IUIAutomationCondition **conditions,
                       int conditionCount,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrCondition )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IUIAutomationCondition *condition1,
                       __RPC__in_opt IUIAutomationCondition *condition2,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromArray )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt SAFEARRAY * conditions,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromNativeArray )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__in_ecount_full(conditionCount) IUIAutomationCondition **conditions,
                       int conditionCount,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateNotCondition )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *AddAutomationEventHandler )(
            __RPC__in IUIAutomation2 * This,
                       EVENTID eventId,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveAutomationEventHandler )(
            __RPC__in IUIAutomation2 * This,
                       EVENTID eventId,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandlerNativeArray )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler,
                                __RPC__in_ecount_full(propertyCount) PROPERTYID *propertyArray,
                       int propertyCount);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandler )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler,
                       __RPC__in SAFEARRAY * propertyArray);
        HRESULT ( STDMETHODCALLTYPE *RemovePropertyChangedEventHandler )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddStructureChangedEventHandler )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationStructureChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveStructureChangedEventHandler )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationStructureChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddFocusChangedEventHandler )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationFocusChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveFocusChangedEventHandler )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IUIAutomationFocusChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllEventHandlers )(
            __RPC__in IUIAutomation2 * This);
        HRESULT ( STDMETHODCALLTYPE *IntNativeArrayToSafeArray )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__in_ecount_full(arrayCount) int *array,
                       int arrayCount,
                                __RPC__deref_out_opt SAFEARRAY * *safeArray);
        HRESULT ( STDMETHODCALLTYPE *IntSafeArrayToNativeArray )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in SAFEARRAY * intArray,
                                          __RPC__deref_out_ecount_full_opt(*arrayCount) int **array,
                                __RPC__out int *arrayCount);
        HRESULT ( STDMETHODCALLTYPE *RectToVariant )(
            __RPC__in IUIAutomation2 * This,
                       RECT rc,
                                __RPC__out VARIANT *var);
        HRESULT ( STDMETHODCALLTYPE *VariantToRect )(
            __RPC__in IUIAutomation2 * This,
                       VARIANT var,
                                __RPC__out RECT *rc);
        HRESULT ( STDMETHODCALLTYPE *SafeArrayToRectNativeArray )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in SAFEARRAY * rects,
                                          __RPC__deref_out_ecount_full_opt(*rectArrayCount) RECT **rectArray,
                                __RPC__out int *rectArrayCount);
        HRESULT ( STDMETHODCALLTYPE *CreateProxyFactoryEntry )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IUIAutomationProxyFactory *factory,
                                __RPC__deref_out_opt IUIAutomationProxyFactoryEntry **factoryEntry);
                        HRESULT ( STDMETHODCALLTYPE *get_ProxyFactoryMapping )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__deref_out_opt IUIAutomationProxyFactoryMapping **factoryMapping);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyProgrammaticName )(
            __RPC__in IUIAutomation2 * This,
                       PROPERTYID property,
                                __RPC__deref_out_opt BSTR *name);
        HRESULT ( STDMETHODCALLTYPE *GetPatternProgrammaticName )(
            __RPC__in IUIAutomation2 * This,
                       PATTERNID pattern,
                                __RPC__deref_out_opt BSTR *name);
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedPatterns )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IUIAutomationElement *pElement,
                        __RPC__deref_out_opt SAFEARRAY * *patternIds,
                        __RPC__deref_out_opt SAFEARRAY * *patternNames);
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedProperties )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IUIAutomationElement *pElement,
                        __RPC__deref_out_opt SAFEARRAY * *propertyIds,
                        __RPC__deref_out_opt SAFEARRAY * *propertyNames);
        HRESULT ( STDMETHODCALLTYPE *CheckNotSupported )(
            __RPC__in IUIAutomation2 * This,
                       VARIANT value,
                                __RPC__out BOOL *isNotSupported);
                        HRESULT ( STDMETHODCALLTYPE *get_ReservedNotSupportedValue )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__deref_out_opt IUnknown **notSupportedValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ReservedMixedAttributeValue )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__deref_out_opt IUnknown **mixedAttributeValue);
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessible )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IAccessible *accessible,
                       int childId,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessibleBuildCache )(
            __RPC__in IUIAutomation2 * This,
                       __RPC__in_opt IAccessible *accessible,
                       int childId,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
                        HRESULT ( STDMETHODCALLTYPE *get_AutoSetFocus )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__out BOOL *autoSetFocus);
                        HRESULT ( STDMETHODCALLTYPE *put_AutoSetFocus )(
            __RPC__in IUIAutomation2 * This,
                       BOOL autoSetFocus);
                        HRESULT ( STDMETHODCALLTYPE *get_ConnectionTimeout )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__out DWORD *timeout);
                        HRESULT ( STDMETHODCALLTYPE *put_ConnectionTimeout )(
            __RPC__in IUIAutomation2 * This,
                       DWORD timeout);
                        HRESULT ( STDMETHODCALLTYPE *get_TransactionTimeout )(
            __RPC__in IUIAutomation2 * This,
                                __RPC__out DWORD *timeout);
                        HRESULT ( STDMETHODCALLTYPE *put_TransactionTimeout )(
            __RPC__in IUIAutomation2 * This,
                       DWORD timeout);
        END_INTERFACE
    } IUIAutomation2Vtbl;
    interface IUIAutomation2
    {
        CONST_VTBL struct IUIAutomation2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CompareElements(This,el1,el2,areSame) )
    ( (This)->lpVtbl -> CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame) )
    ( (This)->lpVtbl -> GetRootElement(This,root) )
    ( (This)->lpVtbl -> ElementFromHandle(This,hwnd,element) )
    ( (This)->lpVtbl -> ElementFromPoint(This,pt,element) )
    ( (This)->lpVtbl -> GetFocusedElement(This,element) )
    ( (This)->lpVtbl -> GetRootElementBuildCache(This,cacheRequest,root) )
    ( (This)->lpVtbl -> ElementFromHandleBuildCache(This,hwnd,cacheRequest,element) )
    ( (This)->lpVtbl -> ElementFromPointBuildCache(This,pt,cacheRequest,element) )
    ( (This)->lpVtbl -> GetFocusedElementBuildCache(This,cacheRequest,element) )
    ( (This)->lpVtbl -> CreateTreeWalker(This,pCondition,walker) )
    ( (This)->lpVtbl -> get_ControlViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_ContentViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_RawViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_RawViewCondition(This,condition) )
    ( (This)->lpVtbl -> get_ControlViewCondition(This,condition) )
    ( (This)->lpVtbl -> get_ContentViewCondition(This,condition) )
    ( (This)->lpVtbl -> CreateCacheRequest(This,cacheRequest) )
    ( (This)->lpVtbl -> CreateTrueCondition(This,newCondition) )
    ( (This)->lpVtbl -> CreateFalseCondition(This,newCondition) )
    ( (This)->lpVtbl -> CreatePropertyCondition(This,propertyId,value,newCondition) )
    ( (This)->lpVtbl -> CreatePropertyConditionEx(This,propertyId,value,flags,newCondition) )
    ( (This)->lpVtbl -> CreateAndCondition(This,condition1,condition2,newCondition) )
    ( (This)->lpVtbl -> CreateAndConditionFromArray(This,conditions,newCondition) )
    ( (This)->lpVtbl -> CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition) )
    ( (This)->lpVtbl -> CreateOrCondition(This,condition1,condition2,newCondition) )
    ( (This)->lpVtbl -> CreateOrConditionFromArray(This,conditions,newCondition) )
    ( (This)->lpVtbl -> CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition) )
    ( (This)->lpVtbl -> CreateNotCondition(This,condition,newCondition) )
    ( (This)->lpVtbl -> AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveAutomationEventHandler(This,eventId,element,handler) )
    ( (This)->lpVtbl -> AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount) )
    ( (This)->lpVtbl -> AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray) )
    ( (This)->lpVtbl -> RemovePropertyChangedEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveStructureChangedEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> AddFocusChangedEventHandler(This,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveFocusChangedEventHandler(This,handler) )
    ( (This)->lpVtbl -> RemoveAllEventHandlers(This) )
    ( (This)->lpVtbl -> IntNativeArrayToSafeArray(This,array,arrayCount,safeArray) )
    ( (This)->lpVtbl -> IntSafeArrayToNativeArray(This,intArray,array,arrayCount) )
    ( (This)->lpVtbl -> RectToVariant(This,rc,var) )
    ( (This)->lpVtbl -> VariantToRect(This,var,rc) )
    ( (This)->lpVtbl -> SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount) )
    ( (This)->lpVtbl -> CreateProxyFactoryEntry(This,factory,factoryEntry) )
    ( (This)->lpVtbl -> get_ProxyFactoryMapping(This,factoryMapping) )
    ( (This)->lpVtbl -> GetPropertyProgrammaticName(This,property,name) )
    ( (This)->lpVtbl -> GetPatternProgrammaticName(This,pattern,name) )
    ( (This)->lpVtbl -> PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames) )
    ( (This)->lpVtbl -> PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames) )
    ( (This)->lpVtbl -> CheckNotSupported(This,value,isNotSupported) )
    ( (This)->lpVtbl -> get_ReservedNotSupportedValue(This,notSupportedValue) )
    ( (This)->lpVtbl -> get_ReservedMixedAttributeValue(This,mixedAttributeValue) )
    ( (This)->lpVtbl -> ElementFromIAccessible(This,accessible,childId,element) )
    ( (This)->lpVtbl -> ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element) )
    ( (This)->lpVtbl -> get_AutoSetFocus(This,autoSetFocus) )
    ( (This)->lpVtbl -> put_AutoSetFocus(This,autoSetFocus) )
    ( (This)->lpVtbl -> get_ConnectionTimeout(This,timeout) )
    ( (This)->lpVtbl -> put_ConnectionTimeout(This,timeout) )
    ( (This)->lpVtbl -> get_TransactionTimeout(This,timeout) )
    ( (This)->lpVtbl -> put_TransactionTimeout(This,timeout) )
EXTERN_C const IID IID_IUIAutomation3;
    typedef struct IUIAutomation3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomation3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomation3 * This);
        HRESULT ( STDMETHODCALLTYPE *CompareElements )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationElement *el1,
                       __RPC__in_opt IUIAutomationElement *el2,
                                __RPC__out BOOL *areSame);
        HRESULT ( STDMETHODCALLTYPE *CompareRuntimeIds )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in SAFEARRAY * runtimeId1,
                       __RPC__in SAFEARRAY * runtimeId2,
                                __RPC__out BOOL *areSame);
        HRESULT ( STDMETHODCALLTYPE *GetRootElement )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__deref_out_opt IUIAutomationElement **root);
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandle )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in UIA_HWND hwnd,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromPoint )(
            __RPC__in IUIAutomation3 * This,
                       POINT pt,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElement )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetRootElementBuildCache )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **root);
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandleBuildCache )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in UIA_HWND hwnd,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromPointBuildCache )(
            __RPC__in IUIAutomation3 * This,
                       POINT pt,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElementBuildCache )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *CreateTreeWalker )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationCondition *pCondition,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_ControlViewWalker )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_ContentViewWalker )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_RawViewWalker )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_RawViewCondition )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
                        HRESULT ( STDMETHODCALLTYPE *get_ControlViewCondition )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
                        HRESULT ( STDMETHODCALLTYPE *get_ContentViewCondition )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
        HRESULT ( STDMETHODCALLTYPE *CreateCacheRequest )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__deref_out_opt IUIAutomationCacheRequest **cacheRequest);
        HRESULT ( STDMETHODCALLTYPE *CreateTrueCondition )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateFalseCondition )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyCondition )(
            __RPC__in IUIAutomation3 * This,
                       PROPERTYID propertyId,
                       VARIANT value,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyConditionEx )(
            __RPC__in IUIAutomation3 * This,
                       PROPERTYID propertyId,
                       VARIANT value,
                       enum PropertyConditionFlags flags,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndCondition )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationCondition *condition1,
                       __RPC__in_opt IUIAutomationCondition *condition2,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromArray )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt SAFEARRAY * conditions,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromNativeArray )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__in_ecount_full(conditionCount) IUIAutomationCondition **conditions,
                       int conditionCount,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrCondition )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationCondition *condition1,
                       __RPC__in_opt IUIAutomationCondition *condition2,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromArray )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt SAFEARRAY * conditions,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromNativeArray )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__in_ecount_full(conditionCount) IUIAutomationCondition **conditions,
                       int conditionCount,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateNotCondition )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *AddAutomationEventHandler )(
            __RPC__in IUIAutomation3 * This,
                       EVENTID eventId,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveAutomationEventHandler )(
            __RPC__in IUIAutomation3 * This,
                       EVENTID eventId,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandlerNativeArray )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler,
                                __RPC__in_ecount_full(propertyCount) PROPERTYID *propertyArray,
                       int propertyCount);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandler )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler,
                       __RPC__in SAFEARRAY * propertyArray);
        HRESULT ( STDMETHODCALLTYPE *RemovePropertyChangedEventHandler )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddStructureChangedEventHandler )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationStructureChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveStructureChangedEventHandler )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationStructureChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddFocusChangedEventHandler )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationFocusChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveFocusChangedEventHandler )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationFocusChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllEventHandlers )(
            __RPC__in IUIAutomation3 * This);
        HRESULT ( STDMETHODCALLTYPE *IntNativeArrayToSafeArray )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__in_ecount_full(arrayCount) int *array,
                       int arrayCount,
                                __RPC__deref_out_opt SAFEARRAY * *safeArray);
        HRESULT ( STDMETHODCALLTYPE *IntSafeArrayToNativeArray )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in SAFEARRAY * intArray,
                                          __RPC__deref_out_ecount_full_opt(*arrayCount) int **array,
                                __RPC__out int *arrayCount);
        HRESULT ( STDMETHODCALLTYPE *RectToVariant )(
            __RPC__in IUIAutomation3 * This,
                       RECT rc,
                                __RPC__out VARIANT *var);
        HRESULT ( STDMETHODCALLTYPE *VariantToRect )(
            __RPC__in IUIAutomation3 * This,
                       VARIANT var,
                                __RPC__out RECT *rc);
        HRESULT ( STDMETHODCALLTYPE *SafeArrayToRectNativeArray )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in SAFEARRAY * rects,
                                          __RPC__deref_out_ecount_full_opt(*rectArrayCount) RECT **rectArray,
                                __RPC__out int *rectArrayCount);
        HRESULT ( STDMETHODCALLTYPE *CreateProxyFactoryEntry )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationProxyFactory *factory,
                                __RPC__deref_out_opt IUIAutomationProxyFactoryEntry **factoryEntry);
                        HRESULT ( STDMETHODCALLTYPE *get_ProxyFactoryMapping )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__deref_out_opt IUIAutomationProxyFactoryMapping **factoryMapping);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyProgrammaticName )(
            __RPC__in IUIAutomation3 * This,
                       PROPERTYID property,
                                __RPC__deref_out_opt BSTR *name);
        HRESULT ( STDMETHODCALLTYPE *GetPatternProgrammaticName )(
            __RPC__in IUIAutomation3 * This,
                       PATTERNID pattern,
                                __RPC__deref_out_opt BSTR *name);
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedPatterns )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationElement *pElement,
                        __RPC__deref_out_opt SAFEARRAY * *patternIds,
                        __RPC__deref_out_opt SAFEARRAY * *patternNames);
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedProperties )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationElement *pElement,
                        __RPC__deref_out_opt SAFEARRAY * *propertyIds,
                        __RPC__deref_out_opt SAFEARRAY * *propertyNames);
        HRESULT ( STDMETHODCALLTYPE *CheckNotSupported )(
            __RPC__in IUIAutomation3 * This,
                       VARIANT value,
                                __RPC__out BOOL *isNotSupported);
                        HRESULT ( STDMETHODCALLTYPE *get_ReservedNotSupportedValue )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__deref_out_opt IUnknown **notSupportedValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ReservedMixedAttributeValue )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__deref_out_opt IUnknown **mixedAttributeValue);
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessible )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IAccessible *accessible,
                       int childId,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessibleBuildCache )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IAccessible *accessible,
                       int childId,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
                        HRESULT ( STDMETHODCALLTYPE *get_AutoSetFocus )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__out BOOL *autoSetFocus);
                        HRESULT ( STDMETHODCALLTYPE *put_AutoSetFocus )(
            __RPC__in IUIAutomation3 * This,
                       BOOL autoSetFocus);
                        HRESULT ( STDMETHODCALLTYPE *get_ConnectionTimeout )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__out DWORD *timeout);
                        HRESULT ( STDMETHODCALLTYPE *put_ConnectionTimeout )(
            __RPC__in IUIAutomation3 * This,
                       DWORD timeout);
                        HRESULT ( STDMETHODCALLTYPE *get_TransactionTimeout )(
            __RPC__in IUIAutomation3 * This,
                                __RPC__out DWORD *timeout);
                        HRESULT ( STDMETHODCALLTYPE *put_TransactionTimeout )(
            __RPC__in IUIAutomation3 * This,
                       DWORD timeout);
        HRESULT ( STDMETHODCALLTYPE *AddTextEditTextChangedEventHandler )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       enum TextEditChangeType textEditChangeType,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationTextEditTextChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveTextEditTextChangedEventHandler )(
            __RPC__in IUIAutomation3 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationTextEditTextChangedEventHandler *handler);
        END_INTERFACE
    } IUIAutomation3Vtbl;
    interface IUIAutomation3
    {
        CONST_VTBL struct IUIAutomation3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CompareElements(This,el1,el2,areSame) )
    ( (This)->lpVtbl -> CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame) )
    ( (This)->lpVtbl -> GetRootElement(This,root) )
    ( (This)->lpVtbl -> ElementFromHandle(This,hwnd,element) )
    ( (This)->lpVtbl -> ElementFromPoint(This,pt,element) )
    ( (This)->lpVtbl -> GetFocusedElement(This,element) )
    ( (This)->lpVtbl -> GetRootElementBuildCache(This,cacheRequest,root) )
    ( (This)->lpVtbl -> ElementFromHandleBuildCache(This,hwnd,cacheRequest,element) )
    ( (This)->lpVtbl -> ElementFromPointBuildCache(This,pt,cacheRequest,element) )
    ( (This)->lpVtbl -> GetFocusedElementBuildCache(This,cacheRequest,element) )
    ( (This)->lpVtbl -> CreateTreeWalker(This,pCondition,walker) )
    ( (This)->lpVtbl -> get_ControlViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_ContentViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_RawViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_RawViewCondition(This,condition) )
    ( (This)->lpVtbl -> get_ControlViewCondition(This,condition) )
    ( (This)->lpVtbl -> get_ContentViewCondition(This,condition) )
    ( (This)->lpVtbl -> CreateCacheRequest(This,cacheRequest) )
    ( (This)->lpVtbl -> CreateTrueCondition(This,newCondition) )
    ( (This)->lpVtbl -> CreateFalseCondition(This,newCondition) )
    ( (This)->lpVtbl -> CreatePropertyCondition(This,propertyId,value,newCondition) )
    ( (This)->lpVtbl -> CreatePropertyConditionEx(This,propertyId,value,flags,newCondition) )
    ( (This)->lpVtbl -> CreateAndCondition(This,condition1,condition2,newCondition) )
    ( (This)->lpVtbl -> CreateAndConditionFromArray(This,conditions,newCondition) )
    ( (This)->lpVtbl -> CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition) )
    ( (This)->lpVtbl -> CreateOrCondition(This,condition1,condition2,newCondition) )
    ( (This)->lpVtbl -> CreateOrConditionFromArray(This,conditions,newCondition) )
    ( (This)->lpVtbl -> CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition) )
    ( (This)->lpVtbl -> CreateNotCondition(This,condition,newCondition) )
    ( (This)->lpVtbl -> AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveAutomationEventHandler(This,eventId,element,handler) )
    ( (This)->lpVtbl -> AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount) )
    ( (This)->lpVtbl -> AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray) )
    ( (This)->lpVtbl -> RemovePropertyChangedEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveStructureChangedEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> AddFocusChangedEventHandler(This,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveFocusChangedEventHandler(This,handler) )
    ( (This)->lpVtbl -> RemoveAllEventHandlers(This) )
    ( (This)->lpVtbl -> IntNativeArrayToSafeArray(This,array,arrayCount,safeArray) )
    ( (This)->lpVtbl -> IntSafeArrayToNativeArray(This,intArray,array,arrayCount) )
    ( (This)->lpVtbl -> RectToVariant(This,rc,var) )
    ( (This)->lpVtbl -> VariantToRect(This,var,rc) )
    ( (This)->lpVtbl -> SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount) )
    ( (This)->lpVtbl -> CreateProxyFactoryEntry(This,factory,factoryEntry) )
    ( (This)->lpVtbl -> get_ProxyFactoryMapping(This,factoryMapping) )
    ( (This)->lpVtbl -> GetPropertyProgrammaticName(This,property,name) )
    ( (This)->lpVtbl -> GetPatternProgrammaticName(This,pattern,name) )
    ( (This)->lpVtbl -> PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames) )
    ( (This)->lpVtbl -> PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames) )
    ( (This)->lpVtbl -> CheckNotSupported(This,value,isNotSupported) )
    ( (This)->lpVtbl -> get_ReservedNotSupportedValue(This,notSupportedValue) )
    ( (This)->lpVtbl -> get_ReservedMixedAttributeValue(This,mixedAttributeValue) )
    ( (This)->lpVtbl -> ElementFromIAccessible(This,accessible,childId,element) )
    ( (This)->lpVtbl -> ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element) )
    ( (This)->lpVtbl -> get_AutoSetFocus(This,autoSetFocus) )
    ( (This)->lpVtbl -> put_AutoSetFocus(This,autoSetFocus) )
    ( (This)->lpVtbl -> get_ConnectionTimeout(This,timeout) )
    ( (This)->lpVtbl -> put_ConnectionTimeout(This,timeout) )
    ( (This)->lpVtbl -> get_TransactionTimeout(This,timeout) )
    ( (This)->lpVtbl -> put_TransactionTimeout(This,timeout) )
    ( (This)->lpVtbl -> AddTextEditTextChangedEventHandler(This,element,scope,textEditChangeType,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveTextEditTextChangedEventHandler(This,element,handler) )
EXTERN_C const IID IID_IUIAutomation4;
    typedef struct IUIAutomation4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomation4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomation4 * This);
        HRESULT ( STDMETHODCALLTYPE *CompareElements )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationElement *el1,
                       __RPC__in_opt IUIAutomationElement *el2,
                                __RPC__out BOOL *areSame);
        HRESULT ( STDMETHODCALLTYPE *CompareRuntimeIds )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in SAFEARRAY * runtimeId1,
                       __RPC__in SAFEARRAY * runtimeId2,
                                __RPC__out BOOL *areSame);
        HRESULT ( STDMETHODCALLTYPE *GetRootElement )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__deref_out_opt IUIAutomationElement **root);
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandle )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in UIA_HWND hwnd,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromPoint )(
            __RPC__in IUIAutomation4 * This,
                       POINT pt,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElement )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetRootElementBuildCache )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **root);
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandleBuildCache )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in UIA_HWND hwnd,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromPointBuildCache )(
            __RPC__in IUIAutomation4 * This,
                       POINT pt,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElementBuildCache )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *CreateTreeWalker )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationCondition *pCondition,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_ControlViewWalker )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_ContentViewWalker )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_RawViewWalker )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_RawViewCondition )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
                        HRESULT ( STDMETHODCALLTYPE *get_ControlViewCondition )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
                        HRESULT ( STDMETHODCALLTYPE *get_ContentViewCondition )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
        HRESULT ( STDMETHODCALLTYPE *CreateCacheRequest )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__deref_out_opt IUIAutomationCacheRequest **cacheRequest);
        HRESULT ( STDMETHODCALLTYPE *CreateTrueCondition )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateFalseCondition )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyCondition )(
            __RPC__in IUIAutomation4 * This,
                       PROPERTYID propertyId,
                       VARIANT value,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyConditionEx )(
            __RPC__in IUIAutomation4 * This,
                       PROPERTYID propertyId,
                       VARIANT value,
                       enum PropertyConditionFlags flags,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndCondition )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationCondition *condition1,
                       __RPC__in_opt IUIAutomationCondition *condition2,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromArray )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt SAFEARRAY * conditions,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromNativeArray )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__in_ecount_full(conditionCount) IUIAutomationCondition **conditions,
                       int conditionCount,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrCondition )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationCondition *condition1,
                       __RPC__in_opt IUIAutomationCondition *condition2,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromArray )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt SAFEARRAY * conditions,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromNativeArray )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__in_ecount_full(conditionCount) IUIAutomationCondition **conditions,
                       int conditionCount,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateNotCondition )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *AddAutomationEventHandler )(
            __RPC__in IUIAutomation4 * This,
                       EVENTID eventId,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveAutomationEventHandler )(
            __RPC__in IUIAutomation4 * This,
                       EVENTID eventId,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandlerNativeArray )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler,
                                __RPC__in_ecount_full(propertyCount) PROPERTYID *propertyArray,
                       int propertyCount);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandler )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler,
                       __RPC__in SAFEARRAY * propertyArray);
        HRESULT ( STDMETHODCALLTYPE *RemovePropertyChangedEventHandler )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddStructureChangedEventHandler )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationStructureChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveStructureChangedEventHandler )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationStructureChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddFocusChangedEventHandler )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationFocusChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveFocusChangedEventHandler )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationFocusChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllEventHandlers )(
            __RPC__in IUIAutomation4 * This);
        HRESULT ( STDMETHODCALLTYPE *IntNativeArrayToSafeArray )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__in_ecount_full(arrayCount) int *array,
                       int arrayCount,
                                __RPC__deref_out_opt SAFEARRAY * *safeArray);
        HRESULT ( STDMETHODCALLTYPE *IntSafeArrayToNativeArray )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in SAFEARRAY * intArray,
                                          __RPC__deref_out_ecount_full_opt(*arrayCount) int **array,
                                __RPC__out int *arrayCount);
        HRESULT ( STDMETHODCALLTYPE *RectToVariant )(
            __RPC__in IUIAutomation4 * This,
                       RECT rc,
                                __RPC__out VARIANT *var);
        HRESULT ( STDMETHODCALLTYPE *VariantToRect )(
            __RPC__in IUIAutomation4 * This,
                       VARIANT var,
                                __RPC__out RECT *rc);
        HRESULT ( STDMETHODCALLTYPE *SafeArrayToRectNativeArray )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in SAFEARRAY * rects,
                                          __RPC__deref_out_ecount_full_opt(*rectArrayCount) RECT **rectArray,
                                __RPC__out int *rectArrayCount);
        HRESULT ( STDMETHODCALLTYPE *CreateProxyFactoryEntry )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationProxyFactory *factory,
                                __RPC__deref_out_opt IUIAutomationProxyFactoryEntry **factoryEntry);
                        HRESULT ( STDMETHODCALLTYPE *get_ProxyFactoryMapping )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__deref_out_opt IUIAutomationProxyFactoryMapping **factoryMapping);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyProgrammaticName )(
            __RPC__in IUIAutomation4 * This,
                       PROPERTYID property,
                                __RPC__deref_out_opt BSTR *name);
        HRESULT ( STDMETHODCALLTYPE *GetPatternProgrammaticName )(
            __RPC__in IUIAutomation4 * This,
                       PATTERNID pattern,
                                __RPC__deref_out_opt BSTR *name);
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedPatterns )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationElement *pElement,
                        __RPC__deref_out_opt SAFEARRAY * *patternIds,
                        __RPC__deref_out_opt SAFEARRAY * *patternNames);
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedProperties )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationElement *pElement,
                        __RPC__deref_out_opt SAFEARRAY * *propertyIds,
                        __RPC__deref_out_opt SAFEARRAY * *propertyNames);
        HRESULT ( STDMETHODCALLTYPE *CheckNotSupported )(
            __RPC__in IUIAutomation4 * This,
                       VARIANT value,
                                __RPC__out BOOL *isNotSupported);
                        HRESULT ( STDMETHODCALLTYPE *get_ReservedNotSupportedValue )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__deref_out_opt IUnknown **notSupportedValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ReservedMixedAttributeValue )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__deref_out_opt IUnknown **mixedAttributeValue);
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessible )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IAccessible *accessible,
                       int childId,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessibleBuildCache )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IAccessible *accessible,
                       int childId,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
                        HRESULT ( STDMETHODCALLTYPE *get_AutoSetFocus )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__out BOOL *autoSetFocus);
                        HRESULT ( STDMETHODCALLTYPE *put_AutoSetFocus )(
            __RPC__in IUIAutomation4 * This,
                       BOOL autoSetFocus);
                        HRESULT ( STDMETHODCALLTYPE *get_ConnectionTimeout )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__out DWORD *timeout);
                        HRESULT ( STDMETHODCALLTYPE *put_ConnectionTimeout )(
            __RPC__in IUIAutomation4 * This,
                       DWORD timeout);
                        HRESULT ( STDMETHODCALLTYPE *get_TransactionTimeout )(
            __RPC__in IUIAutomation4 * This,
                                __RPC__out DWORD *timeout);
                        HRESULT ( STDMETHODCALLTYPE *put_TransactionTimeout )(
            __RPC__in IUIAutomation4 * This,
                       DWORD timeout);
        HRESULT ( STDMETHODCALLTYPE *AddTextEditTextChangedEventHandler )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       enum TextEditChangeType textEditChangeType,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationTextEditTextChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveTextEditTextChangedEventHandler )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationTextEditTextChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddChangesEventHandler )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                                __RPC__in_ecount_full(changesCount) int *changeTypes,
                       int changesCount,
                       __RPC__in_opt IUIAutomationCacheRequest *pCacheRequest,
                       __RPC__in_opt IUIAutomationChangesEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveChangesEventHandler )(
            __RPC__in IUIAutomation4 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationChangesEventHandler *handler);
        END_INTERFACE
    } IUIAutomation4Vtbl;
    interface IUIAutomation4
    {
        CONST_VTBL struct IUIAutomation4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CompareElements(This,el1,el2,areSame) )
    ( (This)->lpVtbl -> CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame) )
    ( (This)->lpVtbl -> GetRootElement(This,root) )
    ( (This)->lpVtbl -> ElementFromHandle(This,hwnd,element) )
    ( (This)->lpVtbl -> ElementFromPoint(This,pt,element) )
    ( (This)->lpVtbl -> GetFocusedElement(This,element) )
    ( (This)->lpVtbl -> GetRootElementBuildCache(This,cacheRequest,root) )
    ( (This)->lpVtbl -> ElementFromHandleBuildCache(This,hwnd,cacheRequest,element) )
    ( (This)->lpVtbl -> ElementFromPointBuildCache(This,pt,cacheRequest,element) )
    ( (This)->lpVtbl -> GetFocusedElementBuildCache(This,cacheRequest,element) )
    ( (This)->lpVtbl -> CreateTreeWalker(This,pCondition,walker) )
    ( (This)->lpVtbl -> get_ControlViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_ContentViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_RawViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_RawViewCondition(This,condition) )
    ( (This)->lpVtbl -> get_ControlViewCondition(This,condition) )
    ( (This)->lpVtbl -> get_ContentViewCondition(This,condition) )
    ( (This)->lpVtbl -> CreateCacheRequest(This,cacheRequest) )
    ( (This)->lpVtbl -> CreateTrueCondition(This,newCondition) )
    ( (This)->lpVtbl -> CreateFalseCondition(This,newCondition) )
    ( (This)->lpVtbl -> CreatePropertyCondition(This,propertyId,value,newCondition) )
    ( (This)->lpVtbl -> CreatePropertyConditionEx(This,propertyId,value,flags,newCondition) )
    ( (This)->lpVtbl -> CreateAndCondition(This,condition1,condition2,newCondition) )
    ( (This)->lpVtbl -> CreateAndConditionFromArray(This,conditions,newCondition) )
    ( (This)->lpVtbl -> CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition) )
    ( (This)->lpVtbl -> CreateOrCondition(This,condition1,condition2,newCondition) )
    ( (This)->lpVtbl -> CreateOrConditionFromArray(This,conditions,newCondition) )
    ( (This)->lpVtbl -> CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition) )
    ( (This)->lpVtbl -> CreateNotCondition(This,condition,newCondition) )
    ( (This)->lpVtbl -> AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveAutomationEventHandler(This,eventId,element,handler) )
    ( (This)->lpVtbl -> AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount) )
    ( (This)->lpVtbl -> AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray) )
    ( (This)->lpVtbl -> RemovePropertyChangedEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveStructureChangedEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> AddFocusChangedEventHandler(This,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveFocusChangedEventHandler(This,handler) )
    ( (This)->lpVtbl -> RemoveAllEventHandlers(This) )
    ( (This)->lpVtbl -> IntNativeArrayToSafeArray(This,array,arrayCount,safeArray) )
    ( (This)->lpVtbl -> IntSafeArrayToNativeArray(This,intArray,array,arrayCount) )
    ( (This)->lpVtbl -> RectToVariant(This,rc,var) )
    ( (This)->lpVtbl -> VariantToRect(This,var,rc) )
    ( (This)->lpVtbl -> SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount) )
    ( (This)->lpVtbl -> CreateProxyFactoryEntry(This,factory,factoryEntry) )
    ( (This)->lpVtbl -> get_ProxyFactoryMapping(This,factoryMapping) )
    ( (This)->lpVtbl -> GetPropertyProgrammaticName(This,property,name) )
    ( (This)->lpVtbl -> GetPatternProgrammaticName(This,pattern,name) )
    ( (This)->lpVtbl -> PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames) )
    ( (This)->lpVtbl -> PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames) )
    ( (This)->lpVtbl -> CheckNotSupported(This,value,isNotSupported) )
    ( (This)->lpVtbl -> get_ReservedNotSupportedValue(This,notSupportedValue) )
    ( (This)->lpVtbl -> get_ReservedMixedAttributeValue(This,mixedAttributeValue) )
    ( (This)->lpVtbl -> ElementFromIAccessible(This,accessible,childId,element) )
    ( (This)->lpVtbl -> ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element) )
    ( (This)->lpVtbl -> get_AutoSetFocus(This,autoSetFocus) )
    ( (This)->lpVtbl -> put_AutoSetFocus(This,autoSetFocus) )
    ( (This)->lpVtbl -> get_ConnectionTimeout(This,timeout) )
    ( (This)->lpVtbl -> put_ConnectionTimeout(This,timeout) )
    ( (This)->lpVtbl -> get_TransactionTimeout(This,timeout) )
    ( (This)->lpVtbl -> put_TransactionTimeout(This,timeout) )
    ( (This)->lpVtbl -> AddTextEditTextChangedEventHandler(This,element,scope,textEditChangeType,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveTextEditTextChangedEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> AddChangesEventHandler(This,element,scope,changeTypes,changesCount,pCacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveChangesEventHandler(This,element,handler) )
EXTERN_C const IID IID_IUIAutomation5;
    typedef struct IUIAutomation5Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomation5 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomation5 * This);
        HRESULT ( STDMETHODCALLTYPE *CompareElements )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationElement *el1,
                       __RPC__in_opt IUIAutomationElement *el2,
                                __RPC__out BOOL *areSame);
        HRESULT ( STDMETHODCALLTYPE *CompareRuntimeIds )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in SAFEARRAY * runtimeId1,
                       __RPC__in SAFEARRAY * runtimeId2,
                                __RPC__out BOOL *areSame);
        HRESULT ( STDMETHODCALLTYPE *GetRootElement )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__deref_out_opt IUIAutomationElement **root);
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandle )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in UIA_HWND hwnd,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromPoint )(
            __RPC__in IUIAutomation5 * This,
                       POINT pt,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElement )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetRootElementBuildCache )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **root);
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandleBuildCache )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in UIA_HWND hwnd,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromPointBuildCache )(
            __RPC__in IUIAutomation5 * This,
                       POINT pt,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElementBuildCache )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *CreateTreeWalker )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationCondition *pCondition,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_ControlViewWalker )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_ContentViewWalker )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_RawViewWalker )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_RawViewCondition )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
                        HRESULT ( STDMETHODCALLTYPE *get_ControlViewCondition )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
                        HRESULT ( STDMETHODCALLTYPE *get_ContentViewCondition )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
        HRESULT ( STDMETHODCALLTYPE *CreateCacheRequest )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__deref_out_opt IUIAutomationCacheRequest **cacheRequest);
        HRESULT ( STDMETHODCALLTYPE *CreateTrueCondition )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateFalseCondition )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyCondition )(
            __RPC__in IUIAutomation5 * This,
                       PROPERTYID propertyId,
                       VARIANT value,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyConditionEx )(
            __RPC__in IUIAutomation5 * This,
                       PROPERTYID propertyId,
                       VARIANT value,
                       enum PropertyConditionFlags flags,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndCondition )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationCondition *condition1,
                       __RPC__in_opt IUIAutomationCondition *condition2,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromArray )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt SAFEARRAY * conditions,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromNativeArray )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__in_ecount_full(conditionCount) IUIAutomationCondition **conditions,
                       int conditionCount,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrCondition )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationCondition *condition1,
                       __RPC__in_opt IUIAutomationCondition *condition2,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromArray )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt SAFEARRAY * conditions,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromNativeArray )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__in_ecount_full(conditionCount) IUIAutomationCondition **conditions,
                       int conditionCount,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateNotCondition )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *AddAutomationEventHandler )(
            __RPC__in IUIAutomation5 * This,
                       EVENTID eventId,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveAutomationEventHandler )(
            __RPC__in IUIAutomation5 * This,
                       EVENTID eventId,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandlerNativeArray )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler,
                                __RPC__in_ecount_full(propertyCount) PROPERTYID *propertyArray,
                       int propertyCount);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandler )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler,
                       __RPC__in SAFEARRAY * propertyArray);
        HRESULT ( STDMETHODCALLTYPE *RemovePropertyChangedEventHandler )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddStructureChangedEventHandler )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationStructureChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveStructureChangedEventHandler )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationStructureChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddFocusChangedEventHandler )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationFocusChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveFocusChangedEventHandler )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationFocusChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllEventHandlers )(
            __RPC__in IUIAutomation5 * This);
        HRESULT ( STDMETHODCALLTYPE *IntNativeArrayToSafeArray )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__in_ecount_full(arrayCount) int *array,
                       int arrayCount,
                                __RPC__deref_out_opt SAFEARRAY * *safeArray);
        HRESULT ( STDMETHODCALLTYPE *IntSafeArrayToNativeArray )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in SAFEARRAY * intArray,
                                          __RPC__deref_out_ecount_full_opt(*arrayCount) int **array,
                                __RPC__out int *arrayCount);
        HRESULT ( STDMETHODCALLTYPE *RectToVariant )(
            __RPC__in IUIAutomation5 * This,
                       RECT rc,
                                __RPC__out VARIANT *var);
        HRESULT ( STDMETHODCALLTYPE *VariantToRect )(
            __RPC__in IUIAutomation5 * This,
                       VARIANT var,
                                __RPC__out RECT *rc);
        HRESULT ( STDMETHODCALLTYPE *SafeArrayToRectNativeArray )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in SAFEARRAY * rects,
                                          __RPC__deref_out_ecount_full_opt(*rectArrayCount) RECT **rectArray,
                                __RPC__out int *rectArrayCount);
        HRESULT ( STDMETHODCALLTYPE *CreateProxyFactoryEntry )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationProxyFactory *factory,
                                __RPC__deref_out_opt IUIAutomationProxyFactoryEntry **factoryEntry);
                        HRESULT ( STDMETHODCALLTYPE *get_ProxyFactoryMapping )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__deref_out_opt IUIAutomationProxyFactoryMapping **factoryMapping);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyProgrammaticName )(
            __RPC__in IUIAutomation5 * This,
                       PROPERTYID property,
                                __RPC__deref_out_opt BSTR *name);
        HRESULT ( STDMETHODCALLTYPE *GetPatternProgrammaticName )(
            __RPC__in IUIAutomation5 * This,
                       PATTERNID pattern,
                                __RPC__deref_out_opt BSTR *name);
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedPatterns )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationElement *pElement,
                        __RPC__deref_out_opt SAFEARRAY * *patternIds,
                        __RPC__deref_out_opt SAFEARRAY * *patternNames);
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedProperties )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationElement *pElement,
                        __RPC__deref_out_opt SAFEARRAY * *propertyIds,
                        __RPC__deref_out_opt SAFEARRAY * *propertyNames);
        HRESULT ( STDMETHODCALLTYPE *CheckNotSupported )(
            __RPC__in IUIAutomation5 * This,
                       VARIANT value,
                                __RPC__out BOOL *isNotSupported);
                        HRESULT ( STDMETHODCALLTYPE *get_ReservedNotSupportedValue )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__deref_out_opt IUnknown **notSupportedValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ReservedMixedAttributeValue )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__deref_out_opt IUnknown **mixedAttributeValue);
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessible )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IAccessible *accessible,
                       int childId,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessibleBuildCache )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IAccessible *accessible,
                       int childId,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
                        HRESULT ( STDMETHODCALLTYPE *get_AutoSetFocus )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__out BOOL *autoSetFocus);
                        HRESULT ( STDMETHODCALLTYPE *put_AutoSetFocus )(
            __RPC__in IUIAutomation5 * This,
                       BOOL autoSetFocus);
                        HRESULT ( STDMETHODCALLTYPE *get_ConnectionTimeout )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__out DWORD *timeout);
                        HRESULT ( STDMETHODCALLTYPE *put_ConnectionTimeout )(
            __RPC__in IUIAutomation5 * This,
                       DWORD timeout);
                        HRESULT ( STDMETHODCALLTYPE *get_TransactionTimeout )(
            __RPC__in IUIAutomation5 * This,
                                __RPC__out DWORD *timeout);
                        HRESULT ( STDMETHODCALLTYPE *put_TransactionTimeout )(
            __RPC__in IUIAutomation5 * This,
                       DWORD timeout);
        HRESULT ( STDMETHODCALLTYPE *AddTextEditTextChangedEventHandler )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       enum TextEditChangeType textEditChangeType,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationTextEditTextChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveTextEditTextChangedEventHandler )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationTextEditTextChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddChangesEventHandler )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                                __RPC__in_ecount_full(changesCount) int *changeTypes,
                       int changesCount,
                       __RPC__in_opt IUIAutomationCacheRequest *pCacheRequest,
                       __RPC__in_opt IUIAutomationChangesEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveChangesEventHandler )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationChangesEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddNotificationEventHandler )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationNotificationEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveNotificationEventHandler )(
            __RPC__in IUIAutomation5 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationNotificationEventHandler *handler);
        END_INTERFACE
    } IUIAutomation5Vtbl;
    interface IUIAutomation5
    {
        CONST_VTBL struct IUIAutomation5Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CompareElements(This,el1,el2,areSame) )
    ( (This)->lpVtbl -> CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame) )
    ( (This)->lpVtbl -> GetRootElement(This,root) )
    ( (This)->lpVtbl -> ElementFromHandle(This,hwnd,element) )
    ( (This)->lpVtbl -> ElementFromPoint(This,pt,element) )
    ( (This)->lpVtbl -> GetFocusedElement(This,element) )
    ( (This)->lpVtbl -> GetRootElementBuildCache(This,cacheRequest,root) )
    ( (This)->lpVtbl -> ElementFromHandleBuildCache(This,hwnd,cacheRequest,element) )
    ( (This)->lpVtbl -> ElementFromPointBuildCache(This,pt,cacheRequest,element) )
    ( (This)->lpVtbl -> GetFocusedElementBuildCache(This,cacheRequest,element) )
    ( (This)->lpVtbl -> CreateTreeWalker(This,pCondition,walker) )
    ( (This)->lpVtbl -> get_ControlViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_ContentViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_RawViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_RawViewCondition(This,condition) )
    ( (This)->lpVtbl -> get_ControlViewCondition(This,condition) )
    ( (This)->lpVtbl -> get_ContentViewCondition(This,condition) )
    ( (This)->lpVtbl -> CreateCacheRequest(This,cacheRequest) )
    ( (This)->lpVtbl -> CreateTrueCondition(This,newCondition) )
    ( (This)->lpVtbl -> CreateFalseCondition(This,newCondition) )
    ( (This)->lpVtbl -> CreatePropertyCondition(This,propertyId,value,newCondition) )
    ( (This)->lpVtbl -> CreatePropertyConditionEx(This,propertyId,value,flags,newCondition) )
    ( (This)->lpVtbl -> CreateAndCondition(This,condition1,condition2,newCondition) )
    ( (This)->lpVtbl -> CreateAndConditionFromArray(This,conditions,newCondition) )
    ( (This)->lpVtbl -> CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition) )
    ( (This)->lpVtbl -> CreateOrCondition(This,condition1,condition2,newCondition) )
    ( (This)->lpVtbl -> CreateOrConditionFromArray(This,conditions,newCondition) )
    ( (This)->lpVtbl -> CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition) )
    ( (This)->lpVtbl -> CreateNotCondition(This,condition,newCondition) )
    ( (This)->lpVtbl -> AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveAutomationEventHandler(This,eventId,element,handler) )
    ( (This)->lpVtbl -> AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount) )
    ( (This)->lpVtbl -> AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray) )
    ( (This)->lpVtbl -> RemovePropertyChangedEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveStructureChangedEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> AddFocusChangedEventHandler(This,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveFocusChangedEventHandler(This,handler) )
    ( (This)->lpVtbl -> RemoveAllEventHandlers(This) )
    ( (This)->lpVtbl -> IntNativeArrayToSafeArray(This,array,arrayCount,safeArray) )
    ( (This)->lpVtbl -> IntSafeArrayToNativeArray(This,intArray,array,arrayCount) )
    ( (This)->lpVtbl -> RectToVariant(This,rc,var) )
    ( (This)->lpVtbl -> VariantToRect(This,var,rc) )
    ( (This)->lpVtbl -> SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount) )
    ( (This)->lpVtbl -> CreateProxyFactoryEntry(This,factory,factoryEntry) )
    ( (This)->lpVtbl -> get_ProxyFactoryMapping(This,factoryMapping) )
    ( (This)->lpVtbl -> GetPropertyProgrammaticName(This,property,name) )
    ( (This)->lpVtbl -> GetPatternProgrammaticName(This,pattern,name) )
    ( (This)->lpVtbl -> PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames) )
    ( (This)->lpVtbl -> PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames) )
    ( (This)->lpVtbl -> CheckNotSupported(This,value,isNotSupported) )
    ( (This)->lpVtbl -> get_ReservedNotSupportedValue(This,notSupportedValue) )
    ( (This)->lpVtbl -> get_ReservedMixedAttributeValue(This,mixedAttributeValue) )
    ( (This)->lpVtbl -> ElementFromIAccessible(This,accessible,childId,element) )
    ( (This)->lpVtbl -> ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element) )
    ( (This)->lpVtbl -> get_AutoSetFocus(This,autoSetFocus) )
    ( (This)->lpVtbl -> put_AutoSetFocus(This,autoSetFocus) )
    ( (This)->lpVtbl -> get_ConnectionTimeout(This,timeout) )
    ( (This)->lpVtbl -> put_ConnectionTimeout(This,timeout) )
    ( (This)->lpVtbl -> get_TransactionTimeout(This,timeout) )
    ( (This)->lpVtbl -> put_TransactionTimeout(This,timeout) )
    ( (This)->lpVtbl -> AddTextEditTextChangedEventHandler(This,element,scope,textEditChangeType,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveTextEditTextChangedEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> AddChangesEventHandler(This,element,scope,changeTypes,changesCount,pCacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveChangesEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> AddNotificationEventHandler(This,element,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveNotificationEventHandler(This,element,handler) )
EXTERN_C const IID IID_IUIAutomation6;
    typedef struct IUIAutomation6Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUIAutomation6 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUIAutomation6 * This);
        HRESULT ( STDMETHODCALLTYPE *CompareElements )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *el1,
                       __RPC__in_opt IUIAutomationElement *el2,
                                __RPC__out BOOL *areSame);
        HRESULT ( STDMETHODCALLTYPE *CompareRuntimeIds )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in SAFEARRAY * runtimeId1,
                       __RPC__in SAFEARRAY * runtimeId2,
                                __RPC__out BOOL *areSame);
        HRESULT ( STDMETHODCALLTYPE *GetRootElement )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__deref_out_opt IUIAutomationElement **root);
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandle )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in UIA_HWND hwnd,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromPoint )(
            __RPC__in IUIAutomation6 * This,
                       POINT pt,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElement )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetRootElementBuildCache )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **root);
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandleBuildCache )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in UIA_HWND hwnd,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromPointBuildCache )(
            __RPC__in IUIAutomation6 * This,
                       POINT pt,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElementBuildCache )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *CreateTreeWalker )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationCondition *pCondition,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_ControlViewWalker )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_ContentViewWalker )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_RawViewWalker )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__deref_out_opt IUIAutomationTreeWalker **walker);
                        HRESULT ( STDMETHODCALLTYPE *get_RawViewCondition )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
                        HRESULT ( STDMETHODCALLTYPE *get_ControlViewCondition )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
                        HRESULT ( STDMETHODCALLTYPE *get_ContentViewCondition )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **condition);
        HRESULT ( STDMETHODCALLTYPE *CreateCacheRequest )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__deref_out_opt IUIAutomationCacheRequest **cacheRequest);
        HRESULT ( STDMETHODCALLTYPE *CreateTrueCondition )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateFalseCondition )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyCondition )(
            __RPC__in IUIAutomation6 * This,
                       PROPERTYID propertyId,
                       VARIANT value,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyConditionEx )(
            __RPC__in IUIAutomation6 * This,
                       PROPERTYID propertyId,
                       VARIANT value,
                       enum PropertyConditionFlags flags,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndCondition )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationCondition *condition1,
                       __RPC__in_opt IUIAutomationCondition *condition2,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromArray )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt SAFEARRAY * conditions,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromNativeArray )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__in_ecount_full(conditionCount) IUIAutomationCondition **conditions,
                       int conditionCount,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrCondition )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationCondition *condition1,
                       __RPC__in_opt IUIAutomationCondition *condition2,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromArray )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt SAFEARRAY * conditions,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromNativeArray )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__in_ecount_full(conditionCount) IUIAutomationCondition **conditions,
                       int conditionCount,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *CreateNotCondition )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationCondition *condition,
                                __RPC__deref_out_opt IUIAutomationCondition **newCondition);
        HRESULT ( STDMETHODCALLTYPE *AddAutomationEventHandler )(
            __RPC__in IUIAutomation6 * This,
                       EVENTID eventId,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveAutomationEventHandler )(
            __RPC__in IUIAutomation6 * This,
                       EVENTID eventId,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandlerNativeArray )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler,
                                __RPC__in_ecount_full(propertyCount) PROPERTYID *propertyArray,
                       int propertyCount);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandler )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler,
                       __RPC__in SAFEARRAY * propertyArray);
        HRESULT ( STDMETHODCALLTYPE *RemovePropertyChangedEventHandler )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationPropertyChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddStructureChangedEventHandler )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationStructureChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveStructureChangedEventHandler )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationStructureChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddFocusChangedEventHandler )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationFocusChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveFocusChangedEventHandler )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationFocusChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllEventHandlers )(
            __RPC__in IUIAutomation6 * This);
        HRESULT ( STDMETHODCALLTYPE *IntNativeArrayToSafeArray )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__in_ecount_full(arrayCount) int *array,
                       int arrayCount,
                                __RPC__deref_out_opt SAFEARRAY * *safeArray);
        HRESULT ( STDMETHODCALLTYPE *IntSafeArrayToNativeArray )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in SAFEARRAY * intArray,
                                          __RPC__deref_out_ecount_full_opt(*arrayCount) int **array,
                                __RPC__out int *arrayCount);
        HRESULT ( STDMETHODCALLTYPE *RectToVariant )(
            __RPC__in IUIAutomation6 * This,
                       RECT rc,
                                __RPC__out VARIANT *var);
        HRESULT ( STDMETHODCALLTYPE *VariantToRect )(
            __RPC__in IUIAutomation6 * This,
                       VARIANT var,
                                __RPC__out RECT *rc);
        HRESULT ( STDMETHODCALLTYPE *SafeArrayToRectNativeArray )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in SAFEARRAY * rects,
                                          __RPC__deref_out_ecount_full_opt(*rectArrayCount) RECT **rectArray,
                                __RPC__out int *rectArrayCount);
        HRESULT ( STDMETHODCALLTYPE *CreateProxyFactoryEntry )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationProxyFactory *factory,
                                __RPC__deref_out_opt IUIAutomationProxyFactoryEntry **factoryEntry);
                        HRESULT ( STDMETHODCALLTYPE *get_ProxyFactoryMapping )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__deref_out_opt IUIAutomationProxyFactoryMapping **factoryMapping);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyProgrammaticName )(
            __RPC__in IUIAutomation6 * This,
                       PROPERTYID property,
                                __RPC__deref_out_opt BSTR *name);
        HRESULT ( STDMETHODCALLTYPE *GetPatternProgrammaticName )(
            __RPC__in IUIAutomation6 * This,
                       PATTERNID pattern,
                                __RPC__deref_out_opt BSTR *name);
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedPatterns )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *pElement,
                        __RPC__deref_out_opt SAFEARRAY * *patternIds,
                        __RPC__deref_out_opt SAFEARRAY * *patternNames);
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedProperties )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *pElement,
                        __RPC__deref_out_opt SAFEARRAY * *propertyIds,
                        __RPC__deref_out_opt SAFEARRAY * *propertyNames);
        HRESULT ( STDMETHODCALLTYPE *CheckNotSupported )(
            __RPC__in IUIAutomation6 * This,
                       VARIANT value,
                                __RPC__out BOOL *isNotSupported);
                        HRESULT ( STDMETHODCALLTYPE *get_ReservedNotSupportedValue )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__deref_out_opt IUnknown **notSupportedValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ReservedMixedAttributeValue )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__deref_out_opt IUnknown **mixedAttributeValue);
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessible )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IAccessible *accessible,
                       int childId,
                                __RPC__deref_out_opt IUIAutomationElement **element);
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessibleBuildCache )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IAccessible *accessible,
                       int childId,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                                __RPC__deref_out_opt IUIAutomationElement **element);
                        HRESULT ( STDMETHODCALLTYPE *get_AutoSetFocus )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__out BOOL *autoSetFocus);
                        HRESULT ( STDMETHODCALLTYPE *put_AutoSetFocus )(
            __RPC__in IUIAutomation6 * This,
                       BOOL autoSetFocus);
                        HRESULT ( STDMETHODCALLTYPE *get_ConnectionTimeout )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__out DWORD *timeout);
                        HRESULT ( STDMETHODCALLTYPE *put_ConnectionTimeout )(
            __RPC__in IUIAutomation6 * This,
                       DWORD timeout);
                        HRESULT ( STDMETHODCALLTYPE *get_TransactionTimeout )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__out DWORD *timeout);
                        HRESULT ( STDMETHODCALLTYPE *put_TransactionTimeout )(
            __RPC__in IUIAutomation6 * This,
                       DWORD timeout);
        HRESULT ( STDMETHODCALLTYPE *AddTextEditTextChangedEventHandler )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       enum TextEditChangeType textEditChangeType,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationTextEditTextChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveTextEditTextChangedEventHandler )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationTextEditTextChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddChangesEventHandler )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                                __RPC__in_ecount_full(changesCount) int *changeTypes,
                       int changesCount,
                       __RPC__in_opt IUIAutomationCacheRequest *pCacheRequest,
                       __RPC__in_opt IUIAutomationChangesEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveChangesEventHandler )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationChangesEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *AddNotificationEventHandler )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationNotificationEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveNotificationEventHandler )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationNotificationEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *CreateEventHandlerGroup )(
            __RPC__in IUIAutomation6 * This,
                        __RPC__deref_out_opt IUIAutomationEventHandlerGroup **handlerGroup);
        HRESULT ( STDMETHODCALLTYPE *AddEventHandlerGroup )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationEventHandlerGroup *handlerGroup);
        HRESULT ( STDMETHODCALLTYPE *RemoveEventHandlerGroup )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationEventHandlerGroup *handlerGroup);
                        HRESULT ( STDMETHODCALLTYPE *get_ConnectionRecoveryBehavior )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__out enum ConnectionRecoveryBehaviorOptions *connectionRecoveryBehaviorOptions);
                        HRESULT ( STDMETHODCALLTYPE *put_ConnectionRecoveryBehavior )(
            __RPC__in IUIAutomation6 * This,
                       enum ConnectionRecoveryBehaviorOptions connectionRecoveryBehaviorOptions);
                        HRESULT ( STDMETHODCALLTYPE *get_CoalesceEvents )(
            __RPC__in IUIAutomation6 * This,
                                __RPC__out enum CoalesceEventsOptions *coalesceEventsOptions);
                        HRESULT ( STDMETHODCALLTYPE *put_CoalesceEvents )(
            __RPC__in IUIAutomation6 * This,
                       enum CoalesceEventsOptions coalesceEventsOptions);
        HRESULT ( STDMETHODCALLTYPE *AddActiveTextPositionChangedEventHandler )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       enum TreeScope scope,
                       __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
                       __RPC__in_opt IUIAutomationActiveTextPositionChangedEventHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *RemoveActiveTextPositionChangedEventHandler )(
            __RPC__in IUIAutomation6 * This,
                       __RPC__in_opt IUIAutomationElement *element,
                       __RPC__in_opt IUIAutomationActiveTextPositionChangedEventHandler *handler);
        END_INTERFACE
    } IUIAutomation6Vtbl;
    interface IUIAutomation6
    {
        CONST_VTBL struct IUIAutomation6Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CompareElements(This,el1,el2,areSame) )
    ( (This)->lpVtbl -> CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame) )
    ( (This)->lpVtbl -> GetRootElement(This,root) )
    ( (This)->lpVtbl -> ElementFromHandle(This,hwnd,element) )
    ( (This)->lpVtbl -> ElementFromPoint(This,pt,element) )
    ( (This)->lpVtbl -> GetFocusedElement(This,element) )
    ( (This)->lpVtbl -> GetRootElementBuildCache(This,cacheRequest,root) )
    ( (This)->lpVtbl -> ElementFromHandleBuildCache(This,hwnd,cacheRequest,element) )
    ( (This)->lpVtbl -> ElementFromPointBuildCache(This,pt,cacheRequest,element) )
    ( (This)->lpVtbl -> GetFocusedElementBuildCache(This,cacheRequest,element) )
    ( (This)->lpVtbl -> CreateTreeWalker(This,pCondition,walker) )
    ( (This)->lpVtbl -> get_ControlViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_ContentViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_RawViewWalker(This,walker) )
    ( (This)->lpVtbl -> get_RawViewCondition(This,condition) )
    ( (This)->lpVtbl -> get_ControlViewCondition(This,condition) )
    ( (This)->lpVtbl -> get_ContentViewCondition(This,condition) )
    ( (This)->lpVtbl -> CreateCacheRequest(This,cacheRequest) )
    ( (This)->lpVtbl -> CreateTrueCondition(This,newCondition) )
    ( (This)->lpVtbl -> CreateFalseCondition(This,newCondition) )
    ( (This)->lpVtbl -> CreatePropertyCondition(This,propertyId,value,newCondition) )
    ( (This)->lpVtbl -> CreatePropertyConditionEx(This,propertyId,value,flags,newCondition) )
    ( (This)->lpVtbl -> CreateAndCondition(This,condition1,condition2,newCondition) )
    ( (This)->lpVtbl -> CreateAndConditionFromArray(This,conditions,newCondition) )
    ( (This)->lpVtbl -> CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition) )
    ( (This)->lpVtbl -> CreateOrCondition(This,condition1,condition2,newCondition) )
    ( (This)->lpVtbl -> CreateOrConditionFromArray(This,conditions,newCondition) )
    ( (This)->lpVtbl -> CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition) )
    ( (This)->lpVtbl -> CreateNotCondition(This,condition,newCondition) )
    ( (This)->lpVtbl -> AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveAutomationEventHandler(This,eventId,element,handler) )
    ( (This)->lpVtbl -> AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount) )
    ( (This)->lpVtbl -> AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray) )
    ( (This)->lpVtbl -> RemovePropertyChangedEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveStructureChangedEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> AddFocusChangedEventHandler(This,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveFocusChangedEventHandler(This,handler) )
    ( (This)->lpVtbl -> RemoveAllEventHandlers(This) )
    ( (This)->lpVtbl -> IntNativeArrayToSafeArray(This,array,arrayCount,safeArray) )
    ( (This)->lpVtbl -> IntSafeArrayToNativeArray(This,intArray,array,arrayCount) )
    ( (This)->lpVtbl -> RectToVariant(This,rc,var) )
    ( (This)->lpVtbl -> VariantToRect(This,var,rc) )
    ( (This)->lpVtbl -> SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount) )
    ( (This)->lpVtbl -> CreateProxyFactoryEntry(This,factory,factoryEntry) )
    ( (This)->lpVtbl -> get_ProxyFactoryMapping(This,factoryMapping) )
    ( (This)->lpVtbl -> GetPropertyProgrammaticName(This,property,name) )
    ( (This)->lpVtbl -> GetPatternProgrammaticName(This,pattern,name) )
    ( (This)->lpVtbl -> PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames) )
    ( (This)->lpVtbl -> PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames) )
    ( (This)->lpVtbl -> CheckNotSupported(This,value,isNotSupported) )
    ( (This)->lpVtbl -> get_ReservedNotSupportedValue(This,notSupportedValue) )
    ( (This)->lpVtbl -> get_ReservedMixedAttributeValue(This,mixedAttributeValue) )
    ( (This)->lpVtbl -> ElementFromIAccessible(This,accessible,childId,element) )
    ( (This)->lpVtbl -> ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element) )
    ( (This)->lpVtbl -> get_AutoSetFocus(This,autoSetFocus) )
    ( (This)->lpVtbl -> put_AutoSetFocus(This,autoSetFocus) )
    ( (This)->lpVtbl -> get_ConnectionTimeout(This,timeout) )
    ( (This)->lpVtbl -> put_ConnectionTimeout(This,timeout) )
    ( (This)->lpVtbl -> get_TransactionTimeout(This,timeout) )
    ( (This)->lpVtbl -> put_TransactionTimeout(This,timeout) )
    ( (This)->lpVtbl -> AddTextEditTextChangedEventHandler(This,element,scope,textEditChangeType,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveTextEditTextChangedEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> AddChangesEventHandler(This,element,scope,changeTypes,changesCount,pCacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveChangesEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> AddNotificationEventHandler(This,element,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveNotificationEventHandler(This,element,handler) )
    ( (This)->lpVtbl -> CreateEventHandlerGroup(This,handlerGroup) )
    ( (This)->lpVtbl -> AddEventHandlerGroup(This,element,handlerGroup) )
    ( (This)->lpVtbl -> RemoveEventHandlerGroup(This,element,handlerGroup) )
    ( (This)->lpVtbl -> get_ConnectionRecoveryBehavior(This,connectionRecoveryBehaviorOptions) )
    ( (This)->lpVtbl -> put_ConnectionRecoveryBehavior(This,connectionRecoveryBehaviorOptions) )
    ( (This)->lpVtbl -> get_CoalesceEvents(This,coalesceEventsOptions) )
    ( (This)->lpVtbl -> put_CoalesceEvents(This,coalesceEventsOptions) )
    ( (This)->lpVtbl -> AddActiveTextPositionChangedEventHandler(This,element,scope,cacheRequest,handler) )
    ( (This)->lpVtbl -> RemoveActiveTextPositionChangedEventHandler(This,element,handler) )
EXTERN_C const CLSID CLSID_CUIAutomation;
class DECLSPEC_UUID("ff48dba4-60ef-4201-aa87-54103eef594e")
CUIAutomation;
EXTERN_C const CLSID CLSID_CUIAutomation8;
class DECLSPEC_UUID("e22ad333-b25f-460c-83d0-0581107395c9")
CUIAutomation8;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_uiautomationclient_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_uiautomationclient_0000_0001_v0_0_s_ifspec;
}
