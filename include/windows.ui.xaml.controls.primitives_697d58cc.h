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
#include "Windows.Foundation.Numerics.h"
#include "Windows.UI.h"
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Controls.h"
#include "Windows.UI.Xaml.Data.h"
#include "Windows.UI.Xaml.Input.h"
#include "Windows.UI.Xaml.Media.h"
#include "Windows.UI.Xaml.Media.Animation.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventHandler __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventHandler __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventHandler __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventHandler __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventHandler __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventHandler __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarButtonTemplateSettings __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarButtonTemplateSettings;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings2 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarToggleButtonTemplateSettings __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarToggleButtonTemplateSettings;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarPanel __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarPanel;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanelFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanelFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSlider __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSlider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings2 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBar __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBar;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings2 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings3 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings4 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgsFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgsFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgsFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgsFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgsFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgsFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase3 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase4 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseClosingEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseClosingEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides4 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics2 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics3 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics6 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics6;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptionsFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptionsFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelper __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelper;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelperStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelperStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemTemplateSettings __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemTemplateSettings;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverter __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverter;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverter __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverter;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformation __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformation;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics2 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics3 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemTemplateSettings __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemTemplateSettings;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorItem __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorItem;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorPanel __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorPanel;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutItemTemplateSettings __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutItemTemplateSettings;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutPresenterTemplateSettings __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutPresenterTemplateSettings;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenter __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenter;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanelFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanelFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBase __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBase;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseOverrides __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseOverrides;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItem __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItem;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItemFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItemFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderPanel __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderPanel;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotPanel __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotPanel;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup2 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup3 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics2 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics3 __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettings __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettings;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressRingTemplateSettings __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressRingTemplateSettings;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseOverrides __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseOverrides;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButton __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButton;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItem __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItem;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettings __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettings;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettings __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettings;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumbStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumbStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBar __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBar;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBarStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBarStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonFactory __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonOverrides __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonOverrides;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonStatics __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToolTipTemplateSettings __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToolTipTemplateSettings;
typedef interface __FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup __FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopupVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup __FIIterable_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopupVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This,
                       __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopupVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBase_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBaseClosingEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBase_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBaseClosingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBase_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBaseClosingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBase_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBaseClosingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBase_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBaseClosingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBase_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBaseClosingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBase_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBaseClosingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBase_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBaseClosingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseClosingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBase_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBaseClosingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBase_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBaseClosingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBase_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBaseClosingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CIColorChangedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CIColorChangedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CColorSpectrum_Windows__CUI__CXaml__CControls__CColorChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CColorSpectrum_Windows__CUI__CXaml__CControls__CColorChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CColorSpectrum_Windows__CUI__CXaml__CControls__CColorChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CColorSpectrum_Windows__CUI__CXaml__CControls__CColorChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CColorSpectrum_Windows__CUI__CXaml__CControls__CColorChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CColorSpectrum_Windows__CUI__CXaml__CControls__CColorChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CColorSpectrum_Windows__CUI__CXaml__CControls__CColorChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CColorSpectrum_Windows__CUI__CXaml__CControls__CColorChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIColorChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CColorSpectrum_Windows__CUI__CXaml__CControls__CColorChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CColorSpectrum_Windows__CUI__CXaml__CControls__CColorChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CColorSpectrum_Windows__CUI__CXaml__CControls__CColorChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;
typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;
interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
struct __x_ABI_CWindows_CFoundation_CPoint;
typedef interface __FIReference_1_Windows__CFoundation__CPoint __FIReference_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CPoint;
typedef struct __FIReference_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CPoint * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CPoint * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CPoint * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CPoint * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CPoint * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CPoint *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CPointVtbl;
interface __FIReference_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CPointVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
struct __x_ABI_CWindows_CFoundation_CRect;
typedef interface __FIReference_1_Windows__CFoundation__CRect __FIReference_1_Windows__CFoundation__CRect;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CRect;
typedef struct __FIReference_1_Windows__CFoundation__CRectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CRect * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CRect * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CRect * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CRect * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CRect * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CRect * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CRect * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CRect *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CRectVtbl;
interface __FIReference_1_Windows__CFoundation__CRect
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CRectVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1_IInspectable __FIIterator_1_IInspectable;
EXTERN_C const IID IID___FIIterator_1_IInspectable;
typedef struct __FIIterator_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__out IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_IInspectableVtbl;
interface __FIIterator_1_IInspectable
{
    CONST_VTBL struct __FIIterator_1_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_IInspectable __FIIterable_1_IInspectable;
EXTERN_C const IID IID___FIIterable_1_IInspectable;
typedef struct __FIIterable_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_IInspectable * This, __RPC__deref_out_opt __FIIterator_1_IInspectable **first);
    END_INTERFACE
} __FIIterable_1_IInspectableVtbl;
interface __FIIterable_1_IInspectable
{
    CONST_VTBL struct __FIIterable_1_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_IInspectable __FIVectorView_1_IInspectable;
EXTERN_C const IID IID___FIVectorView_1_IInspectable;
typedef struct __FIVectorView_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_IInspectable * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_IInspectable * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_IInspectable * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_IInspectable * This,
                                                    unsigned int index,
                                                             __RPC__out IInspectable * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_IInspectable * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_IInspectable * This,
                       IInspectable * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_IInspectable * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) IInspectable * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_IInspectableVtbl;
interface __FIVectorView_1_IInspectable
{
    CONST_VTBL struct __FIVectorView_1_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __FIVector_1_IInspectable __FIVector_1_IInspectable;
EXTERN_C const IID IID___FIVector_1_IInspectable;
typedef struct __FIVector_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_IInspectable * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_IInspectable * This, __RPC__deref_out_opt IInspectable * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_IInspectable * This,
                   unsigned int index,
                            __RPC__deref_out_opt IInspectable * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_IInspectable * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_IInspectable * This, __RPC__deref_out_opt __FIVectorView_1_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_IInspectable * This,
                   __RPC__in IInspectable * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_IInspectable * This,
                   unsigned int index,
                   __RPC__in IInspectable * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_IInspectable * This,
                   unsigned int index,
                   __RPC__in IInspectable * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_IInspectable * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_IInspectable * This, __RPC__in IInspectable * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_IInspectable * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) IInspectable * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_IInspectable * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) IInspectable * *value);
    END_INTERFACE
} __FIVector_1_IInspectableVtbl;
interface __FIVector_1_IInspectable
{
    CONST_VTBL struct __FIVector_1_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CITransition __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CITransition;
typedef interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition __FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CITransition * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CITransition * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransitionVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransitionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition __FIIterable_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransitionVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransitionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition __FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CITransition * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                       __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CITransition * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CITransition * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransitionVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransitionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition;
typedef struct __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CITransition * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CITransition * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CITransition * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CITransition * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CITransition * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CITransition * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CITransition * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CITransition * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransitionVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransitionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
typedef interface __FIIterator_1_float __FIIterator_1_float;
EXTERN_C const IID IID___FIIterator_1_float;
typedef struct __FIIterator_1_floatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_float * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_float * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_float * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_float * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_float * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_float * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_float * This, __RPC__out float *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_float * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_float * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_float * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) float *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_floatVtbl;
interface __FIIterator_1_float
{
    CONST_VTBL struct __FIIterator_1_floatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_float __FIIterable_1_float;
EXTERN_C const IID IID___FIIterable_1_float;
typedef struct __FIIterable_1_floatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_float * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_float * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_float * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_float * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_float * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_float * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_float * This, __RPC__deref_out_opt __FIIterator_1_float **first);
    END_INTERFACE
} __FIIterable_1_floatVtbl;
interface __FIIterable_1_float
{
    CONST_VTBL struct __FIIterable_1_floatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_float __FIVectorView_1_float;
EXTERN_C const IID IID___FIVectorView_1_float;
typedef struct __FIVectorView_1_floatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_float * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_float * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_float * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_float * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_float * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_float * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_float * This,
                                                    unsigned int index,
                                                             __RPC__out float *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_float * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_float * This,
                       float item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_float * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) float *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_floatVtbl;
interface __FIVectorView_1_float
{
    CONST_VTBL struct __FIVectorView_1_floatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __FIReference_1_boolean __FIReference_1_boolean;
EXTERN_C const IID IID___FIReference_1_boolean;
typedef struct __FIReference_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_boolean * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_boolean * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_boolean * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_boolean * This, __RPC__out boolean *value);
    END_INTERFACE
} __FIReference_1_booleanVtbl;
interface __FIReference_1_boolean
{
    CONST_VTBL struct __FIReference_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 __x_ABI_CWindows_CFoundation_CNumerics_CVector4;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CClickMode __x_ABI_CWindows_CUI_CXaml_CControls_CClickMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CColorPickerHsvChannel __x_ABI_CWindows_CUI_CXaml_CControls_CColorPickerHsvChannel;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CColorSpectrumComponents __x_ABI_CWindows_CUI_CXaml_CControls_CColorSpectrumComponents;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CColorSpectrumShape __x_ABI_CWindows_CUI_CXaml_CControls_CColorSpectrumShape;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CIControl __x_ABI_CWindows_CUI_CXaml_CControls_CIControl;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CIInsertionPanel __x_ABI_CWindows_CUI_CXaml_CControls_CIInsertionPanel;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CIIconElement __x_ABI_CWindows_CUI_CXaml_CControls_CIIconElement;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CLightDismissOverlayMode __x_ABI_CWindows_CUI_CXaml_CControls_CLightDismissOverlayMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_COrientation __x_ABI_CWindows_CUI_CXaml_CControls_COrientation;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CISelectionChangedEventHandler __x_ABI_CWindows_CUI_CXaml_CControls_CISelectionChangedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDataTemplate __x_ABI_CWindows_CUI_CXaml_CIDataTemplate;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObject __x_ABI_CWindows_CUI_CXaml_CIDependencyObject;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;
typedef enum __x_ABI_CWindows_CUI_CXaml_CElementSoundMode __x_ABI_CWindows_CUI_CXaml_CElementSoundMode;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement;
typedef struct __x_ABI_CWindows_CUI_CXaml_CGridLength __x_ABI_CWindows_CUI_CXaml_CGridLength;
typedef enum __x_ABI_CWindows_CUI_CXaml_CHorizontalAlignment __x_ABI_CWindows_CUI_CXaml_CHorizontalAlignment;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CICommand __x_ABI_CWindows_CUI_CXaml_CInput_CICommand;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSource __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSource;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CThickness __x_ABI_CWindows_CUI_CXaml_CThickness;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;
typedef enum __x_ABI_CWindows_CUI_CXaml_CVerticalAlignment __x_ABI_CWindows_CUI_CXaml_CVerticalAlignment;
typedef enum __x_ABI_CWindows_CUI_CXaml_CVisibility __x_ABI_CWindows_CUI_CXaml_CVisibility;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIXamlRoot __x_ABI_CWindows_CUI_CXaml_CIXamlRoot;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CAnimationDirection __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CAnimationDirection;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CComponentResourceLocation __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CComponentResourceLocation;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CEdgeTransitionLocation __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CEdgeTransitionLocation;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutShowMode __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutShowMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CGeneratorDirection __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CGeneratorDirection;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CGroupHeaderPlacement __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CGroupHeaderPlacement;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CListViewItemPresenterCheckMode __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CListViewItemPresenterCheckMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CPlacementMode __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CPlacementMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CScrollEventType __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CScrollEventType;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CScrollingIndicatorMode __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CScrollingIndicatorMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CSliderSnapsTo __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CSliderSnapsTo;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CSnapPointsAlignment __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CSnapPointsAlignment;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CTickPlacement __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CTickPlacement;
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CGeneratorPosition __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CGeneratorPosition;
enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CAnimationDirection
{
    AnimationDirection_Left = 0,
    AnimationDirection_Top = 1,
    AnimationDirection_Right = 2,
    AnimationDirection_Bottom = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CComponentResourceLocation
{
    ComponentResourceLocation_Application = 0,
    ComponentResourceLocation_Nested = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CEdgeTransitionLocation
{
    EdgeTransitionLocation_Left = 0,
    EdgeTransitionLocation_Top = 1,
    EdgeTransitionLocation_Right = 2,
    EdgeTransitionLocation_Bottom = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode
{
    FlyoutPlacementMode_Top = 0,
    FlyoutPlacementMode_Bottom = 1,
    FlyoutPlacementMode_Left = 2,
    FlyoutPlacementMode_Right = 3,
    FlyoutPlacementMode_Full = 4,
    FlyoutPlacementMode_TopEdgeAlignedLeft = 5,
    FlyoutPlacementMode_TopEdgeAlignedRight = 6,
    FlyoutPlacementMode_BottomEdgeAlignedLeft = 7,
    FlyoutPlacementMode_BottomEdgeAlignedRight = 8,
    FlyoutPlacementMode_LeftEdgeAlignedTop = 9,
    FlyoutPlacementMode_LeftEdgeAlignedBottom = 10,
    FlyoutPlacementMode_RightEdgeAlignedTop = 11,
    FlyoutPlacementMode_RightEdgeAlignedBottom = 12,
    FlyoutPlacementMode_Auto = 13,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutShowMode
{
    FlyoutShowMode_Auto = 0,
    FlyoutShowMode_Standard = 1,
    FlyoutShowMode_Transient = 2,
    FlyoutShowMode_TransientWithDismissOnPointerMoveAway = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CGeneratorDirection
{
    GeneratorDirection_Forward = 0,
    GeneratorDirection_Backward = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CGroupHeaderPlacement
{
    GroupHeaderPlacement_Top = 0,
    GroupHeaderPlacement_Left = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CListViewItemPresenterCheckMode
{
    ListViewItemPresenterCheckMode_Inline = 0,
    ListViewItemPresenterCheckMode_Overlay = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CPlacementMode
{
    PlacementMode_Bottom = 2,
    PlacementMode_Left = 9,
    PlacementMode_Mouse = 7,
    PlacementMode_Right = 4,
    PlacementMode_Top = 10,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CScrollEventType
{
    ScrollEventType_SmallDecrement = 0,
    ScrollEventType_SmallIncrement = 1,
    ScrollEventType_LargeDecrement = 2,
    ScrollEventType_LargeIncrement = 3,
    ScrollEventType_ThumbPosition = 4,
    ScrollEventType_ThumbTrack = 5,
    ScrollEventType_First = 6,
    ScrollEventType_Last = 7,
    ScrollEventType_EndScroll = 8,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CScrollingIndicatorMode
{
    ScrollingIndicatorMode_None = 0,
    ScrollingIndicatorMode_TouchIndicator = 1,
    ScrollingIndicatorMode_MouseIndicator = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CSliderSnapsTo
{
    SliderSnapsTo_StepValues = 0,
    SliderSnapsTo_Ticks = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CSnapPointsAlignment
{
    SnapPointsAlignment_Near = 0,
    SnapPointsAlignment_Center = 1,
    SnapPointsAlignment_Far = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CTickPlacement
{
    TickPlacement_None = 0,
    TickPlacement_TopLeft = 1,
    TickPlacement_BottomRight = 2,
    TickPlacement_Outside = 3,
    TickPlacement_Inline = 4,
};
struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CGeneratorPosition
{
    INT32 Index;
    INT32 Offset;
};
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IAppBarButtonTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.IAppBarButtonTemplateSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarButtonTemplateSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarButtonTemplateSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarButtonTemplateSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarButtonTemplateSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarButtonTemplateSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarButtonTemplateSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarButtonTemplateSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KeyboardAcceleratorTextMinWidth )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarButtonTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarButtonTemplateSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarButtonTemplateSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarButtonTemplateSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KeyboardAcceleratorTextMinWidth(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarButtonTemplateSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.IAppBarTemplateSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ClipRect )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CompactVerticalDelta )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CompactRootMargin )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinimalVerticalDelta )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinimalRootMargin )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HiddenVerticalDelta )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HiddenRootMargin )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ClipRect(This,value) )
    ( (This)->lpVtbl->get_CompactVerticalDelta(This,value) )
    ( (This)->lpVtbl->get_CompactRootMargin(This,value) )
    ( (This)->lpVtbl->get_MinimalVerticalDelta(This,value) )
    ( (This)->lpVtbl->get_MinimalRootMargin(This,value) )
    ( (This)->lpVtbl->get_HiddenVerticalDelta(This,value) )
    ( (This)->lpVtbl->get_HiddenRootMargin(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings2[] = L"Windows.UI.Xaml.Controls.Primitives.IAppBarTemplateSettings2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NegativeCompactVerticalDelta )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings2 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NegativeMinimalVerticalDelta )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings2 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NegativeHiddenVerticalDelta )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings2 * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NegativeCompactVerticalDelta(This,value) )
    ( (This)->lpVtbl->get_NegativeMinimalVerticalDelta(This,value) )
    ( (This)->lpVtbl->get_NegativeHiddenVerticalDelta(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarTemplateSettings2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IAppBarToggleButtonTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.IAppBarToggleButtonTemplateSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarToggleButtonTemplateSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarToggleButtonTemplateSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarToggleButtonTemplateSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarToggleButtonTemplateSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarToggleButtonTemplateSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarToggleButtonTemplateSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarToggleButtonTemplateSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KeyboardAcceleratorTextMinWidth )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarToggleButtonTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarToggleButtonTemplateSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarToggleButtonTemplateSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarToggleButtonTemplateSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KeyboardAcceleratorTextMinWidth(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIAppBarToggleButtonTemplateSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IButtonBase[] = L"Windows.UI.Xaml.Controls.Primitives.IButtonBase";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ClickMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CClickMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ClickMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CClickMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPointerOver )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPressed )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Command )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Command )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CommandParameter )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CommandParameter )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase * This,
                  __RPC__in_opt IInspectable * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Click )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Click )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ClickMode(This,value) )
    ( (This)->lpVtbl->put_ClickMode(This,value) )
    ( (This)->lpVtbl->get_IsPointerOver(This,value) )
    ( (This)->lpVtbl->get_IsPressed(This,value) )
    ( (This)->lpVtbl->get_Command(This,value) )
    ( (This)->lpVtbl->put_Command(This,value) )
    ( (This)->lpVtbl->get_CommandParameter(This,value) )
    ( (This)->lpVtbl->put_CommandParameter(This,value) )
    ( (This)->lpVtbl->add_Click(This,handler,token) )
    ( (This)->lpVtbl->remove_Click(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IButtonBaseFactory[] = L"Windows.UI.Xaml.Controls.Primitives.IButtonBaseFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IButtonBaseStatics[] = L"Windows.UI.Xaml.Controls.Primitives.IButtonBaseStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ClickModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPointerOverProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPressedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CommandProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CommandParameterProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ClickModeProperty(This,value) )
    ( (This)->lpVtbl->get_IsPointerOverProperty(This,value) )
    ( (This)->lpVtbl->get_IsPressedProperty(This,value) )
    ( (This)->lpVtbl->get_CommandProperty(This,value) )
    ( (This)->lpVtbl->get_CommandParameterProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBaseStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ICalendarPanel[] = L"Windows.UI.Xaml.Controls.Primitives.ICalendarPanel";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarPanelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarPanel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarPanel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarPanel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarPanel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarPanel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarPanel * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarPanelVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarPanel
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarPanelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarPanel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.ICalendarViewTemplateSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MinViewWidth )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeaderText )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WeekDay1 )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WeekDay2 )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WeekDay3 )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WeekDay4 )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WeekDay5 )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WeekDay6 )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WeekDay7 )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasMoreContentAfter )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasMoreContentBefore )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasMoreViews )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClipRect )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterX )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterY )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MinViewWidth(This,value) )
    ( (This)->lpVtbl->get_HeaderText(This,value) )
    ( (This)->lpVtbl->get_WeekDay1(This,value) )
    ( (This)->lpVtbl->get_WeekDay2(This,value) )
    ( (This)->lpVtbl->get_WeekDay3(This,value) )
    ( (This)->lpVtbl->get_WeekDay4(This,value) )
    ( (This)->lpVtbl->get_WeekDay5(This,value) )
    ( (This)->lpVtbl->get_WeekDay6(This,value) )
    ( (This)->lpVtbl->get_WeekDay7(This,value) )
    ( (This)->lpVtbl->get_HasMoreContentAfter(This,value) )
    ( (This)->lpVtbl->get_HasMoreContentBefore(This,value) )
    ( (This)->lpVtbl->get_HasMoreViews(This,value) )
    ( (This)->lpVtbl->get_ClipRect(This,value) )
    ( (This)->lpVtbl->get_CenterX(This,value) )
    ( (This)->lpVtbl->get_CenterY(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICalendarViewTemplateSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel[] = L"Windows.UI.Xaml.Controls.Primitives.ICarouselPanel";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanVerticallyScroll )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanVerticallyScroll )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanHorizontallyScroll )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanHorizontallyScroll )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtentWidth )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtentHeight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewportWidth )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewportHeight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScrollOwner )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScrollOwner )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                  __RPC__in_opt IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *LineUp )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *LineDown )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *LineLeft )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *LineRight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *PageUp )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *PageDown )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *PageLeft )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *PageRight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *MouseWheelUp )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *MouseWheelDown )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *MouseWheelLeft )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *MouseWheelRight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetHorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                  DOUBLE offset
        );
    HRESULT ( STDMETHODCALLTYPE *SetVerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                  DOUBLE offset
        );
    HRESULT ( STDMETHODCALLTYPE *MakeVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * visual,
                  __x_ABI_CWindows_CFoundation_CRect rectangle,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanelVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanVerticallyScroll(This,value) )
    ( (This)->lpVtbl->put_CanVerticallyScroll(This,value) )
    ( (This)->lpVtbl->get_CanHorizontallyScroll(This,value) )
    ( (This)->lpVtbl->put_CanHorizontallyScroll(This,value) )
    ( (This)->lpVtbl->get_ExtentWidth(This,value) )
    ( (This)->lpVtbl->get_ExtentHeight(This,value) )
    ( (This)->lpVtbl->get_ViewportWidth(This,value) )
    ( (This)->lpVtbl->get_ViewportHeight(This,value) )
    ( (This)->lpVtbl->get_HorizontalOffset(This,value) )
    ( (This)->lpVtbl->get_VerticalOffset(This,value) )
    ( (This)->lpVtbl->get_ScrollOwner(This,value) )
    ( (This)->lpVtbl->put_ScrollOwner(This,value) )
    ( (This)->lpVtbl->LineUp(This) )
    ( (This)->lpVtbl->LineDown(This) )
    ( (This)->lpVtbl->LineLeft(This) )
    ( (This)->lpVtbl->LineRight(This) )
    ( (This)->lpVtbl->PageUp(This) )
    ( (This)->lpVtbl->PageDown(This) )
    ( (This)->lpVtbl->PageLeft(This) )
    ( (This)->lpVtbl->PageRight(This) )
    ( (This)->lpVtbl->MouseWheelUp(This) )
    ( (This)->lpVtbl->MouseWheelDown(This) )
    ( (This)->lpVtbl->MouseWheelLeft(This) )
    ( (This)->lpVtbl->MouseWheelRight(This) )
    ( (This)->lpVtbl->SetHorizontalOffset(This,offset) )
    ( (This)->lpVtbl->SetVerticalOffset(This,offset) )
    ( (This)->lpVtbl->MakeVisible(This,visual,rectangle,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ICarouselPanelFactory[] = L"Windows.UI.Xaml.Controls.Primitives.ICarouselPanelFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanelFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanelFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanelFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanelFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanelFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanelFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanelFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanelFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanel * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanelFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanelFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanelFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICarouselPanelFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IColorPickerSlider[] = L"Windows.UI.Xaml.Controls.Primitives.IColorPickerSlider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSlider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSlider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSlider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSlider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSlider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSlider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ColorChannel )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSlider * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CColorPickerHsvChannel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ColorChannel )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSlider * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CColorPickerHsvChannel value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSlider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ColorChannel(This,value) )
    ( (This)->lpVtbl->put_ColorChannel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSlider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IColorPickerSliderFactory[] = L"Windows.UI.Xaml.Controls.Primitives.IColorPickerSliderFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSlider * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IColorPickerSliderStatics[] = L"Windows.UI.Xaml.Controls.Primitives.IColorPickerSliderStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ColorChannelProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ColorChannelProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorPickerSliderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum[] = L"Windows.UI.Xaml.Controls.Primitives.IColorSpectrum";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HsvColor )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector4 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HsvColor )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector4 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinHue )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinHue )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxHue )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxHue )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinSaturation )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinSaturation )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxSaturation )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxSaturation )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinValue )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinValue )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxValue )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxValue )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Shape )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CColorSpectrumShape * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Shape )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CColorSpectrumShape value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Components )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CColorSpectrumComponents * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Components )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CColorSpectrumComponents value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ColorChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CColorSpectrum_Windows__CUI__CXaml__CControls__CColorChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ColorChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Color(This,value) )
    ( (This)->lpVtbl->put_Color(This,value) )
    ( (This)->lpVtbl->get_HsvColor(This,value) )
    ( (This)->lpVtbl->put_HsvColor(This,value) )
    ( (This)->lpVtbl->get_MinHue(This,value) )
    ( (This)->lpVtbl->put_MinHue(This,value) )
    ( (This)->lpVtbl->get_MaxHue(This,value) )
    ( (This)->lpVtbl->put_MaxHue(This,value) )
    ( (This)->lpVtbl->get_MinSaturation(This,value) )
    ( (This)->lpVtbl->put_MinSaturation(This,value) )
    ( (This)->lpVtbl->get_MaxSaturation(This,value) )
    ( (This)->lpVtbl->put_MaxSaturation(This,value) )
    ( (This)->lpVtbl->get_MinValue(This,value) )
    ( (This)->lpVtbl->put_MinValue(This,value) )
    ( (This)->lpVtbl->get_MaxValue(This,value) )
    ( (This)->lpVtbl->put_MaxValue(This,value) )
    ( (This)->lpVtbl->get_Shape(This,value) )
    ( (This)->lpVtbl->put_Shape(This,value) )
    ( (This)->lpVtbl->get_Components(This,value) )
    ( (This)->lpVtbl->put_Components(This,value) )
    ( (This)->lpVtbl->add_ColorChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ColorChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumFactory[] = L"Windows.UI.Xaml.Controls.Primitives.IColorSpectrumFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrum * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumStatics[] = L"Windows.UI.Xaml.Controls.Primitives.IColorSpectrumStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ColorProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HsvColorProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinHueProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxHueProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinSaturationProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxSaturationProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinValueProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxValueProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShapeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ComponentsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ColorProperty(This,value) )
    ( (This)->lpVtbl->get_HsvColorProperty(This,value) )
    ( (This)->lpVtbl->get_MinHueProperty(This,value) )
    ( (This)->lpVtbl->get_MaxHueProperty(This,value) )
    ( (This)->lpVtbl->get_MinSaturationProperty(This,value) )
    ( (This)->lpVtbl->get_MaxSaturationProperty(This,value) )
    ( (This)->lpVtbl->get_MinValueProperty(This,value) )
    ( (This)->lpVtbl->get_MaxValueProperty(This,value) )
    ( (This)->lpVtbl->get_ShapeProperty(This,value) )
    ( (This)->lpVtbl->get_ComponentsProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIColorSpectrumStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.IComboBoxTemplateSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DropDownOpenedHeight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DropDownClosedHeight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DropDownOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedItemDirection )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CAnimationDirection * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DropDownOpenedHeight(This,value) )
    ( (This)->lpVtbl->get_DropDownClosedHeight(This,value) )
    ( (This)->lpVtbl->get_DropDownOffset(This,value) )
    ( (This)->lpVtbl->get_SelectedItemDirection(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings2[] = L"Windows.UI.Xaml.Controls.Primitives.IComboBoxTemplateSettings2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DropDownContentMinWidth )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings2 * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DropDownContentMinWidth(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIComboBoxTemplateSettings2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ICommandBarFlyoutCommandBar[] = L"Windows.UI.Xaml.Controls.Primitives.ICommandBarFlyoutCommandBar";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBar * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBar * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBar * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBar * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBar * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBar * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FlyoutTemplateSettings )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBar * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBar
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FlyoutTemplateSettings(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBar;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ICommandBarFlyoutCommandBarFactory[] = L"Windows.UI.Xaml.Controls.Primitives.ICommandBarFlyoutCommandBarFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBar * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ICommandBarFlyoutCommandBarTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.ICommandBarFlyoutCommandBarTemplateSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OpenAnimationStartPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OpenAnimationEndPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CloseAnimationEndPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentWidth )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpandedWidth )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WidthExpansionDelta )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WidthExpansionAnimationStartPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WidthExpansionAnimationEndPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WidthExpansionMoreButtonAnimationStartPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WidthExpansionMoreButtonAnimationEndPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpandUpOverflowVerticalPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpandDownOverflowVerticalPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpandUpAnimationStartPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpandUpAnimationEndPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpandUpAnimationHoldPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpandDownAnimationStartPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpandDownAnimationEndPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpandDownAnimationHoldPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentClipRect )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OverflowContentClipRect )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OpenAnimationStartPosition(This,value) )
    ( (This)->lpVtbl->get_OpenAnimationEndPosition(This,value) )
    ( (This)->lpVtbl->get_CloseAnimationEndPosition(This,value) )
    ( (This)->lpVtbl->get_CurrentWidth(This,value) )
    ( (This)->lpVtbl->get_ExpandedWidth(This,value) )
    ( (This)->lpVtbl->get_WidthExpansionDelta(This,value) )
    ( (This)->lpVtbl->get_WidthExpansionAnimationStartPosition(This,value) )
    ( (This)->lpVtbl->get_WidthExpansionAnimationEndPosition(This,value) )
    ( (This)->lpVtbl->get_WidthExpansionMoreButtonAnimationStartPosition(This,value) )
    ( (This)->lpVtbl->get_WidthExpansionMoreButtonAnimationEndPosition(This,value) )
    ( (This)->lpVtbl->get_ExpandUpOverflowVerticalPosition(This,value) )
    ( (This)->lpVtbl->get_ExpandDownOverflowVerticalPosition(This,value) )
    ( (This)->lpVtbl->get_ExpandUpAnimationStartPosition(This,value) )
    ( (This)->lpVtbl->get_ExpandUpAnimationEndPosition(This,value) )
    ( (This)->lpVtbl->get_ExpandUpAnimationHoldPosition(This,value) )
    ( (This)->lpVtbl->get_ExpandDownAnimationStartPosition(This,value) )
    ( (This)->lpVtbl->get_ExpandDownAnimationEndPosition(This,value) )
    ( (This)->lpVtbl->get_ExpandDownAnimationHoldPosition(This,value) )
    ( (This)->lpVtbl->get_ContentClipRect(This,value) )
    ( (This)->lpVtbl->get_OverflowContentClipRect(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarFlyoutCommandBarTemplateSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.ICommandBarTemplateSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContentHeight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OverflowContentClipRect )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OverflowContentMinWidth )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OverflowContentMaxHeight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OverflowContentHorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OverflowContentHeight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NegativeOverflowContentHeight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContentHeight(This,value) )
    ( (This)->lpVtbl->get_OverflowContentClipRect(This,value) )
    ( (This)->lpVtbl->get_OverflowContentMinWidth(This,value) )
    ( (This)->lpVtbl->get_OverflowContentMaxHeight(This,value) )
    ( (This)->lpVtbl->get_OverflowContentHorizontalOffset(This,value) )
    ( (This)->lpVtbl->get_OverflowContentHeight(This,value) )
    ( (This)->lpVtbl->get_NegativeOverflowContentHeight(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings2[] = L"Windows.UI.Xaml.Controls.Primitives.ICommandBarTemplateSettings2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OverflowContentMaxWidth )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings2 * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OverflowContentMaxWidth(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings3[] = L"Windows.UI.Xaml.Controls.Primitives.ICommandBarTemplateSettings3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EffectiveOverflowButtonVisibility )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings3 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CVisibility * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EffectiveOverflowButtonVisibility(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings4[] = L"Windows.UI.Xaml.Controls.Primitives.ICommandBarTemplateSettings4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OverflowContentCompactYTranslation )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings4 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OverflowContentMinimalYTranslation )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings4 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OverflowContentHiddenYTranslation )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings4 * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OverflowContentCompactYTranslation(This,value) )
    ( (This)->lpVtbl->get_OverflowContentMinimalYTranslation(This,value) )
    ( (This)->lpVtbl->get_OverflowContentHiddenYTranslation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CICommandBarTemplateSettings4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgs[] = L"Windows.UI.Xaml.Controls.Primitives.IDragCompletedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HorizontalChange )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalChange )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Canceled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HorizontalChange(This,value) )
    ( (This)->lpVtbl->get_VerticalChange(This,value) )
    ( (This)->lpVtbl->get_Canceled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgsFactory[] = L"Windows.UI.Xaml.Controls.Primitives.IDragCompletedEventArgsFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgsFactory * This,
                  DOUBLE horizontalChange,
                  DOUBLE verticalChange,
                  boolean canceled,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgs * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(This,horizontalChange,verticalChange,canceled,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IDragDeltaEventArgs[] = L"Windows.UI.Xaml.Controls.Primitives.IDragDeltaEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HorizontalChange )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalChange )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgs * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HorizontalChange(This,value) )
    ( (This)->lpVtbl->get_VerticalChange(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IDragDeltaEventArgsFactory[] = L"Windows.UI.Xaml.Controls.Primitives.IDragDeltaEventArgsFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithHorizontalChangeAndVerticalChange )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgsFactory * This,
                  DOUBLE horizontalChange,
                  DOUBLE verticalChange,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgs * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceWithHorizontalChangeAndVerticalChange(This,horizontalChange,verticalChange,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IDragStartedEventArgs[] = L"Windows.UI.Xaml.Controls.Primitives.IDragStartedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HorizontalOffset(This,value) )
    ( (This)->lpVtbl->get_VerticalOffset(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IDragStartedEventArgsFactory[] = L"Windows.UI.Xaml.Controls.Primitives.IDragStartedEventArgsFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithHorizontalOffsetAndVerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgsFactory * This,
                  DOUBLE horizontalOffset,
                  DOUBLE verticalOffset,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgs * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceWithHorizontalOffsetAndVerticalOffset(This,horizontalOffset,verticalOffset,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase[] = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Placement )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Placement )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Opened )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Opened )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Opening )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Opening )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAt )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * placementTarget
        );
    HRESULT ( STDMETHODCALLTYPE *Hide )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Placement(This,value) )
    ( (This)->lpVtbl->put_Placement(This,value) )
    ( (This)->lpVtbl->add_Opened(This,handler,token) )
    ( (This)->lpVtbl->remove_Opened(This,token) )
    ( (This)->lpVtbl->add_Closed(This,handler,token) )
    ( (This)->lpVtbl->remove_Closed(This,token) )
    ( (This)->lpVtbl->add_Opening(This,handler,token) )
    ( (This)->lpVtbl->remove_Opening(This,token) )
    ( (This)->lpVtbl->ShowAt(This,placementTarget) )
    ( (This)->lpVtbl->Hide(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2[] = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Target )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowFocusOnInteraction )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowFocusOnInteraction )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LightDismissOverlayMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CLightDismissOverlayMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LightDismissOverlayMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CLightDismissOverlayMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowFocusWhenDisabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowFocusWhenDisabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ElementSoundMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CElementSoundMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ElementSoundMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CElementSoundMode value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Closing )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBase_Windows__CUI__CXaml__CControls__CPrimitives__CFlyoutBaseClosingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closing )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Target(This,value) )
    ( (This)->lpVtbl->get_AllowFocusOnInteraction(This,value) )
    ( (This)->lpVtbl->put_AllowFocusOnInteraction(This,value) )
    ( (This)->lpVtbl->get_LightDismissOverlayMode(This,value) )
    ( (This)->lpVtbl->put_LightDismissOverlayMode(This,value) )
    ( (This)->lpVtbl->get_AllowFocusWhenDisabled(This,value) )
    ( (This)->lpVtbl->put_AllowFocusWhenDisabled(This,value) )
    ( (This)->lpVtbl->get_ElementSoundMode(This,value) )
    ( (This)->lpVtbl->put_ElementSoundMode(This,value) )
    ( (This)->lpVtbl->add_Closing(This,handler,token) )
    ( (This)->lpVtbl->remove_Closing(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase3[] = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OverlayInputPassThroughElement )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OverlayInputPassThroughElement )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OverlayInputPassThroughElement(This,value) )
    ( (This)->lpVtbl->put_OverlayInputPassThroughElement(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase4[] = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryInvokeKeyboardAccelerator )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * args
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryInvokeKeyboardAccelerator(This,args) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase5[] = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase5";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ShowMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutShowMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShowMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5 * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutShowMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputDevicePrefersPrimaryCommands )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AreOpenCloseAnimationsEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AreOpenCloseAnimationsEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOpen )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5 * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAt )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * placementTarget,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions * showOptions
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ShowMode(This,value) )
    ( (This)->lpVtbl->put_ShowMode(This,value) )
    ( (This)->lpVtbl->get_InputDevicePrefersPrimaryCommands(This,value) )
    ( (This)->lpVtbl->get_AreOpenCloseAnimationsEnabled(This,value) )
    ( (This)->lpVtbl->put_AreOpenCloseAnimationsEnabled(This,value) )
    ( (This)->lpVtbl->get_IsOpen(This,value) )
    ( (This)->lpVtbl->ShowAt(This,placementTarget,showOptions) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase6[] = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase6";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ShouldConstrainToRootBounds )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShouldConstrainToRootBounds )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsConstrainedToRootBounds )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XamlRoot )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XamlRoot )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ShouldConstrainToRootBounds(This,value) )
    ( (This)->lpVtbl->put_ShouldConstrainToRootBounds(This,value) )
    ( (This)->lpVtbl->get_IsConstrainedToRootBounds(This,value) )
    ( (This)->lpVtbl->get_XamlRoot(This,value) )
    ( (This)->lpVtbl->put_XamlRoot(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseClosingEventArgs[] = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseClosingEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseClosingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseClosingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseClosingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseClosingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseClosingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseClosingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseClosingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseClosingEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseClosingEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseClosingEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseClosingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseClosingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Cancel(This,value) )
    ( (This)->lpVtbl->put_Cancel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseClosingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseFactory[] = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseOverrides[] = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseOverrides";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreatePresenter )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIControl * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverridesVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverridesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreatePresenter(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseOverrides4[] = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseOverrides4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnProcessKeyboardAccelerators )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * args
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OnProcessKeyboardAccelerators(This,args) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseOverrides4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics[] = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PlacementProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttachedFlyoutProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAttachedFlyout )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * element,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetAttachedFlyout )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * element,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAttachedFlyout )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * flyoutOwner
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PlacementProperty(This,value) )
    ( (This)->lpVtbl->get_AttachedFlyoutProperty(This,value) )
    ( (This)->lpVtbl->GetAttachedFlyout(This,element,result) )
    ( (This)->lpVtbl->SetAttachedFlyout(This,element,value) )
    ( (This)->lpVtbl->ShowAttachedFlyout(This,flyoutOwner) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics2[] = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllowFocusOnInteractionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LightDismissOverlayModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowFocusWhenDisabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ElementSoundModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllowFocusOnInteractionProperty(This,value) )
    ( (This)->lpVtbl->get_LightDismissOverlayModeProperty(This,value) )
    ( (This)->lpVtbl->get_AllowFocusWhenDisabledProperty(This,value) )
    ( (This)->lpVtbl->get_ElementSoundModeProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics3[] = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OverlayInputPassThroughElementProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OverlayInputPassThroughElementProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics5[] = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics5";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TargetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShowModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputDevicePrefersPrimaryCommandsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AreOpenCloseAnimationsEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOpenProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TargetProperty(This,value) )
    ( (This)->lpVtbl->get_ShowModeProperty(This,value) )
    ( (This)->lpVtbl->get_InputDevicePrefersPrimaryCommandsProperty(This,value) )
    ( (This)->lpVtbl->get_AreOpenCloseAnimationsEnabledProperty(This,value) )
    ( (This)->lpVtbl->get_IsOpenProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics6[] = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics6";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ShouldConstrainToRootBoundsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics6 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics6Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics6
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ShouldConstrainToRootBoundsProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBaseStatics6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IFlyoutShowOptions[] = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutShowOptions";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CPoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExclusionRect )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CRect * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExclusionRect )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShowMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutShowMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShowMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutShowMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Placement )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Placement )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptionsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->put_Position(This,value) )
    ( (This)->lpVtbl->get_ExclusionRect(This,value) )
    ( (This)->lpVtbl->put_ExclusionRect(This,value) )
    ( (This)->lpVtbl->get_ShowMode(This,value) )
    ( (This)->lpVtbl->put_ShowMode(This,value) )
    ( (This)->lpVtbl->get_Placement(This,value) )
    ( (This)->lpVtbl->put_Placement(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IFlyoutShowOptionsFactory[] = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutShowOptionsFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptionsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptionsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptionsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptionsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptionsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptionsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptionsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptionsFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptions * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptionsFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptionsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptionsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutShowOptionsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IGeneratorPositionHelper[] = L"Windows.UI.Xaml.Controls.Primitives.IGeneratorPositionHelper";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelper * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelperVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IGeneratorPositionHelperStatics[] = L"Windows.UI.Xaml.Controls.Primitives.IGeneratorPositionHelperStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIndexAndOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelperStatics * This,
                  INT32 index,
                  INT32 offset,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CGeneratorPosition * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelperStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIndexAndOffset(This,index,offset,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGeneratorPositionHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter[] = L"Windows.UI.Xaml.Controls.Primitives.IGridViewItemPresenter";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SelectionCheckMarkVisualEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectionCheckMarkVisualEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CheckHintBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CheckHintBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CheckSelectingBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CheckSelectingBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CheckBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CheckBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DragBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragForeground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DragForeground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusBorderBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FocusBorderBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaceholderBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PlaceholderBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerOverBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PointerOverBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedForeground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedForeground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedPointerOverBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedPointerOverBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedPointerOverBorderBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedPointerOverBorderBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedBorderThickness )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedBorderThickness )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __x_ABI_CWindows_CUI_CXaml_CThickness value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisabledOpacity )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisabledOpacity )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragOpacity )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DragOpacity )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReorderHintOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReorderHintOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  DOUBLE value
        );
    DEPRECATED("Use ContentPresenter.HorizontalContentAlignment instead of GridViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_GridViewItemPresenterHorizontalContentAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CHorizontalAlignment * value
        );
    DEPRECATED("Use ContentPresenter.HorizontalContentAlignment instead of GridViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_GridViewItemPresenterHorizontalContentAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __x_ABI_CWindows_CUI_CXaml_CHorizontalAlignment value
        );
    DEPRECATED("Use ContentPresenter.VerticalContentAlignment instead of GridViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_GridViewItemPresenterVerticalContentAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CVerticalAlignment * value
        );
    DEPRECATED("Use ContentPresenter.VerticalContentAlignment instead of GridViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_GridViewItemPresenterVerticalContentAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __x_ABI_CWindows_CUI_CXaml_CVerticalAlignment value
        );
    DEPRECATED("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_GridViewItemPresenterPadding )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
    DEPRECATED("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_GridViewItemPresenterPadding )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __x_ABI_CWindows_CUI_CXaml_CThickness value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerOverBackgroundMargin )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PointerOverBackgroundMargin )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __x_ABI_CWindows_CUI_CXaml_CThickness value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentMargin )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentMargin )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * This,
                  __x_ABI_CWindows_CUI_CXaml_CThickness value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SelectionCheckMarkVisualEnabled(This,value) )
    ( (This)->lpVtbl->put_SelectionCheckMarkVisualEnabled(This,value) )
    ( (This)->lpVtbl->get_CheckHintBrush(This,value) )
    ( (This)->lpVtbl->put_CheckHintBrush(This,value) )
    ( (This)->lpVtbl->get_CheckSelectingBrush(This,value) )
    ( (This)->lpVtbl->put_CheckSelectingBrush(This,value) )
    ( (This)->lpVtbl->get_CheckBrush(This,value) )
    ( (This)->lpVtbl->put_CheckBrush(This,value) )
    ( (This)->lpVtbl->get_DragBackground(This,value) )
    ( (This)->lpVtbl->put_DragBackground(This,value) )
    ( (This)->lpVtbl->get_DragForeground(This,value) )
    ( (This)->lpVtbl->put_DragForeground(This,value) )
    ( (This)->lpVtbl->get_FocusBorderBrush(This,value) )
    ( (This)->lpVtbl->put_FocusBorderBrush(This,value) )
    ( (This)->lpVtbl->get_PlaceholderBackground(This,value) )
    ( (This)->lpVtbl->put_PlaceholderBackground(This,value) )
    ( (This)->lpVtbl->get_PointerOverBackground(This,value) )
    ( (This)->lpVtbl->put_PointerOverBackground(This,value) )
    ( (This)->lpVtbl->get_SelectedBackground(This,value) )
    ( (This)->lpVtbl->put_SelectedBackground(This,value) )
    ( (This)->lpVtbl->get_SelectedForeground(This,value) )
    ( (This)->lpVtbl->put_SelectedForeground(This,value) )
    ( (This)->lpVtbl->get_SelectedPointerOverBackground(This,value) )
    ( (This)->lpVtbl->put_SelectedPointerOverBackground(This,value) )
    ( (This)->lpVtbl->get_SelectedPointerOverBorderBrush(This,value) )
    ( (This)->lpVtbl->put_SelectedPointerOverBorderBrush(This,value) )
    ( (This)->lpVtbl->get_SelectedBorderThickness(This,value) )
    ( (This)->lpVtbl->put_SelectedBorderThickness(This,value) )
    ( (This)->lpVtbl->get_DisabledOpacity(This,value) )
    ( (This)->lpVtbl->put_DisabledOpacity(This,value) )
    ( (This)->lpVtbl->get_DragOpacity(This,value) )
    ( (This)->lpVtbl->put_DragOpacity(This,value) )
    ( (This)->lpVtbl->get_ReorderHintOffset(This,value) )
    ( (This)->lpVtbl->put_ReorderHintOffset(This,value) )
DEPRECATED("Use ContentPresenter.HorizontalContentAlignment instead of GridViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")
    ( (This)->lpVtbl->get_GridViewItemPresenterHorizontalContentAlignment(This,value) )
DEPRECATED("Use ContentPresenter.HorizontalContentAlignment instead of GridViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")
    ( (This)->lpVtbl->put_GridViewItemPresenterHorizontalContentAlignment(This,value) )
DEPRECATED("Use ContentPresenter.VerticalContentAlignment instead of GridViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")
    ( (This)->lpVtbl->get_GridViewItemPresenterVerticalContentAlignment(This,value) )
DEPRECATED("Use ContentPresenter.VerticalContentAlignment instead of GridViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")
    ( (This)->lpVtbl->put_GridViewItemPresenterVerticalContentAlignment(This,value) )
DEPRECATED("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")
    ( (This)->lpVtbl->get_GridViewItemPresenterPadding(This,value) )
DEPRECATED("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")
    ( (This)->lpVtbl->put_GridViewItemPresenterPadding(This,value) )
    ( (This)->lpVtbl->get_PointerOverBackgroundMargin(This,value) )
    ( (This)->lpVtbl->put_PointerOverBackgroundMargin(This,value) )
    ( (This)->lpVtbl->get_ContentMargin(This,value) )
    ( (This)->lpVtbl->put_ContentMargin(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterFactory[] = L"Windows.UI.Xaml.Controls.Primitives.IGridViewItemPresenterFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics[] = L"Windows.UI.Xaml.Controls.Primitives.IGridViewItemPresenterStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SelectionCheckMarkVisualEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CheckHintBrushProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CheckSelectingBrushProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CheckBrushProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragBackgroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragForegroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusBorderBrushProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaceholderBackgroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerOverBackgroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedBackgroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedForegroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedPointerOverBackgroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedPointerOverBorderBrushProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedBorderThicknessProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisabledOpacityProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragOpacityProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReorderHintOffsetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    DEPRECATED("Use ContentPresenter.HorizontalContentAlignment instead of GridViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_GridViewItemPresenterHorizontalContentAlignmentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    DEPRECATED("Use ContentPresenter.VerticalContentAlignment instead of GridViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_GridViewItemPresenterVerticalContentAlignmentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    DEPRECATED("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_GridViewItemPresenterPaddingProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerOverBackgroundMarginProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentMarginProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SelectionCheckMarkVisualEnabledProperty(This,value) )
    ( (This)->lpVtbl->get_CheckHintBrushProperty(This,value) )
    ( (This)->lpVtbl->get_CheckSelectingBrushProperty(This,value) )
    ( (This)->lpVtbl->get_CheckBrushProperty(This,value) )
    ( (This)->lpVtbl->get_DragBackgroundProperty(This,value) )
    ( (This)->lpVtbl->get_DragForegroundProperty(This,value) )
    ( (This)->lpVtbl->get_FocusBorderBrushProperty(This,value) )
    ( (This)->lpVtbl->get_PlaceholderBackgroundProperty(This,value) )
    ( (This)->lpVtbl->get_PointerOverBackgroundProperty(This,value) )
    ( (This)->lpVtbl->get_SelectedBackgroundProperty(This,value) )
    ( (This)->lpVtbl->get_SelectedForegroundProperty(This,value) )
    ( (This)->lpVtbl->get_SelectedPointerOverBackgroundProperty(This,value) )
    ( (This)->lpVtbl->get_SelectedPointerOverBorderBrushProperty(This,value) )
    ( (This)->lpVtbl->get_SelectedBorderThicknessProperty(This,value) )
    ( (This)->lpVtbl->get_DisabledOpacityProperty(This,value) )
    ( (This)->lpVtbl->get_DragOpacityProperty(This,value) )
    ( (This)->lpVtbl->get_ReorderHintOffsetProperty(This,value) )
DEPRECATED("Use ContentPresenter.HorizontalContentAlignment instead of GridViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")
    ( (This)->lpVtbl->get_GridViewItemPresenterHorizontalContentAlignmentProperty(This,value) )
DEPRECATED("Use ContentPresenter.VerticalContentAlignment instead of GridViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")
    ( (This)->lpVtbl->get_GridViewItemPresenterVerticalContentAlignmentProperty(This,value) )
DEPRECATED("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")
    ( (This)->lpVtbl->get_GridViewItemPresenterPaddingProperty(This,value) )
    ( (This)->lpVtbl->get_PointerOverBackgroundMarginProperty(This,value) )
    ( (This)->lpVtbl->get_ContentMarginProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemPresenterStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IGridViewItemTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.IGridViewItemTemplateSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemTemplateSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemTemplateSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemTemplateSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemTemplateSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemTemplateSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemTemplateSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemTemplateSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DragItemsCount )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemTemplateSettings * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemTemplateSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemTemplateSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemTemplateSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DragItemsCount(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIGridViewItemTemplateSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IItemsChangedEventArgs[] = L"Windows.UI.Xaml.Controls.Primitives.IItemsChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Action )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgs * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CGeneratorPosition * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OldPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CGeneratorPosition * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemCount )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgs * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemUICount )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgs * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Action(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_OldPosition(This,value) )
    ( (This)->lpVtbl->get_ItemCount(This,value) )
    ( (This)->lpVtbl->get_ItemUICount(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIItemsChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverter[] = L"Windows.UI.Xaml.Controls.Primitives.IJumpListItemBackgroundConverter";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Disabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Disabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Enabled(This,value) )
    ( (This)->lpVtbl->put_Enabled(This,value) )
    ( (This)->lpVtbl->get_Disabled(This,value) )
    ( (This)->lpVtbl->put_Disabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverterStatics[] = L"Windows.UI.Xaml.Controls.Primitives.IJumpListItemBackgroundConverterStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EnabledProperty(This,value) )
    ( (This)->lpVtbl->get_DisabledProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemBackgroundConverterStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverter[] = L"Windows.UI.Xaml.Controls.Primitives.IJumpListItemForegroundConverter";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Disabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Disabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Enabled(This,value) )
    ( (This)->lpVtbl->put_Enabled(This,value) )
    ( (This)->lpVtbl->get_Disabled(This,value) )
    ( (This)->lpVtbl->put_Disabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverterStatics[] = L"Windows.UI.Xaml.Controls.Primitives.IJumpListItemForegroundConverterStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EnabledProperty(This,value) )
    ( (This)->lpVtbl->get_DisabledProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIJumpListItemForegroundConverterStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ILayoutInformation[] = L"Windows.UI.Xaml.Controls.Primitives.ILayoutInformation";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ILayoutInformationStatics[] = L"Windows.UI.Xaml.Controls.Primitives.ILayoutInformationStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetLayoutExceptionElement )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics * This,
                  __RPC__in_opt IInspectable * dispatcher,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetLayoutSlot )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * element,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetLayoutExceptionElement(This,dispatcher,result) )
    ( (This)->lpVtbl->GetLayoutSlot(This,element,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ILayoutInformationStatics2[] = L"Windows.UI.Xaml.Controls.Primitives.ILayoutInformationStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAvailableSize )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAvailableSize(This,element,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILayoutInformationStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter[] = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenter";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SelectionCheckMarkVisualEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectionCheckMarkVisualEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CheckHintBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CheckHintBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CheckSelectingBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CheckSelectingBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CheckBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CheckBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DragBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragForeground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DragForeground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusBorderBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FocusBorderBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaceholderBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PlaceholderBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerOverBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PointerOverBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedForeground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedForeground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedPointerOverBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedPointerOverBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedPointerOverBorderBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedPointerOverBorderBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedBorderThickness )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedBorderThickness )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __x_ABI_CWindows_CUI_CXaml_CThickness value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisabledOpacity )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisabledOpacity )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragOpacity )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DragOpacity )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReorderHintOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReorderHintOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  DOUBLE value
        );
    DEPRECATED("Use ContentPresenter.HorizontalContentAlignment instead of ListViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ListViewItemPresenterHorizontalContentAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CHorizontalAlignment * value
        );
    DEPRECATED("Use ContentPresenter.HorizontalContentAlignment instead of ListViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_ListViewItemPresenterHorizontalContentAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __x_ABI_CWindows_CUI_CXaml_CHorizontalAlignment value
        );
    DEPRECATED("Use ContentPresenter.VerticalContentAlignment instead of ListViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ListViewItemPresenterVerticalContentAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CVerticalAlignment * value
        );
    DEPRECATED("Use ContentPresenter.VerticalContentAlignment instead of ListViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_ListViewItemPresenterVerticalContentAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __x_ABI_CWindows_CUI_CXaml_CVerticalAlignment value
        );
    DEPRECATED("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ListViewItemPresenterPadding )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
    DEPRECATED("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_ListViewItemPresenterPadding )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __x_ABI_CWindows_CUI_CXaml_CThickness value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerOverBackgroundMargin )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PointerOverBackgroundMargin )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __x_ABI_CWindows_CUI_CXaml_CThickness value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentMargin )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentMargin )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * This,
                  __x_ABI_CWindows_CUI_CXaml_CThickness value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SelectionCheckMarkVisualEnabled(This,value) )
    ( (This)->lpVtbl->put_SelectionCheckMarkVisualEnabled(This,value) )
    ( (This)->lpVtbl->get_CheckHintBrush(This,value) )
    ( (This)->lpVtbl->put_CheckHintBrush(This,value) )
    ( (This)->lpVtbl->get_CheckSelectingBrush(This,value) )
    ( (This)->lpVtbl->put_CheckSelectingBrush(This,value) )
    ( (This)->lpVtbl->get_CheckBrush(This,value) )
    ( (This)->lpVtbl->put_CheckBrush(This,value) )
    ( (This)->lpVtbl->get_DragBackground(This,value) )
    ( (This)->lpVtbl->put_DragBackground(This,value) )
    ( (This)->lpVtbl->get_DragForeground(This,value) )
    ( (This)->lpVtbl->put_DragForeground(This,value) )
    ( (This)->lpVtbl->get_FocusBorderBrush(This,value) )
    ( (This)->lpVtbl->put_FocusBorderBrush(This,value) )
    ( (This)->lpVtbl->get_PlaceholderBackground(This,value) )
    ( (This)->lpVtbl->put_PlaceholderBackground(This,value) )
    ( (This)->lpVtbl->get_PointerOverBackground(This,value) )
    ( (This)->lpVtbl->put_PointerOverBackground(This,value) )
    ( (This)->lpVtbl->get_SelectedBackground(This,value) )
    ( (This)->lpVtbl->put_SelectedBackground(This,value) )
    ( (This)->lpVtbl->get_SelectedForeground(This,value) )
    ( (This)->lpVtbl->put_SelectedForeground(This,value) )
    ( (This)->lpVtbl->get_SelectedPointerOverBackground(This,value) )
    ( (This)->lpVtbl->put_SelectedPointerOverBackground(This,value) )
    ( (This)->lpVtbl->get_SelectedPointerOverBorderBrush(This,value) )
    ( (This)->lpVtbl->put_SelectedPointerOverBorderBrush(This,value) )
    ( (This)->lpVtbl->get_SelectedBorderThickness(This,value) )
    ( (This)->lpVtbl->put_SelectedBorderThickness(This,value) )
    ( (This)->lpVtbl->get_DisabledOpacity(This,value) )
    ( (This)->lpVtbl->put_DisabledOpacity(This,value) )
    ( (This)->lpVtbl->get_DragOpacity(This,value) )
    ( (This)->lpVtbl->put_DragOpacity(This,value) )
    ( (This)->lpVtbl->get_ReorderHintOffset(This,value) )
    ( (This)->lpVtbl->put_ReorderHintOffset(This,value) )
DEPRECATED("Use ContentPresenter.HorizontalContentAlignment instead of ListViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ListViewItemPresenterHorizontalContentAlignment(This,value) )
DEPRECATED("Use ContentPresenter.HorizontalContentAlignment instead of ListViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")
    ( (This)->lpVtbl->put_ListViewItemPresenterHorizontalContentAlignment(This,value) )
DEPRECATED("Use ContentPresenter.VerticalContentAlignment instead of ListViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ListViewItemPresenterVerticalContentAlignment(This,value) )
DEPRECATED("Use ContentPresenter.VerticalContentAlignment instead of ListViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")
    ( (This)->lpVtbl->put_ListViewItemPresenterVerticalContentAlignment(This,value) )
DEPRECATED("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ListViewItemPresenterPadding(This,value) )
DEPRECATED("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")
    ( (This)->lpVtbl->put_ListViewItemPresenterPadding(This,value) )
    ( (This)->lpVtbl->get_PointerOverBackgroundMargin(This,value) )
    ( (This)->lpVtbl->put_PointerOverBackgroundMargin(This,value) )
    ( (This)->lpVtbl->get_ContentMargin(This,value) )
    ( (This)->lpVtbl->put_ContentMargin(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2[] = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenter2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SelectedPressedBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedPressedBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PressedBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PressedBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CheckBoxBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CheckBoxBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusSecondaryBorderBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FocusSecondaryBorderBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CheckMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CListViewItemPresenterCheckMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CheckMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CListViewItemPresenterCheckMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerOverForeground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PointerOverForeground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SelectedPressedBackground(This,value) )
    ( (This)->lpVtbl->put_SelectedPressedBackground(This,value) )
    ( (This)->lpVtbl->get_PressedBackground(This,value) )
    ( (This)->lpVtbl->put_PressedBackground(This,value) )
    ( (This)->lpVtbl->get_CheckBoxBrush(This,value) )
    ( (This)->lpVtbl->put_CheckBoxBrush(This,value) )
    ( (This)->lpVtbl->get_FocusSecondaryBorderBrush(This,value) )
    ( (This)->lpVtbl->put_FocusSecondaryBorderBrush(This,value) )
    ( (This)->lpVtbl->get_CheckMode(This,value) )
    ( (This)->lpVtbl->put_CheckMode(This,value) )
    ( (This)->lpVtbl->get_PointerOverForeground(This,value) )
    ( (This)->lpVtbl->put_PointerOverForeground(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter3[] = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenter3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RevealBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RevealBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RevealBorderBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RevealBorderBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RevealBorderThickness )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RevealBorderThickness )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3 * This,
                  __x_ABI_CWindows_CUI_CXaml_CThickness value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RevealBackgroundShowsAboveContent )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RevealBackgroundShowsAboveContent )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RevealBackground(This,value) )
    ( (This)->lpVtbl->put_RevealBackground(This,value) )
    ( (This)->lpVtbl->get_RevealBorderBrush(This,value) )
    ( (This)->lpVtbl->put_RevealBorderBrush(This,value) )
    ( (This)->lpVtbl->get_RevealBorderThickness(This,value) )
    ( (This)->lpVtbl->put_RevealBorderThickness(This,value) )
    ( (This)->lpVtbl->get_RevealBackgroundShowsAboveContent(This,value) )
    ( (This)->lpVtbl->put_RevealBackgroundShowsAboveContent(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterFactory[] = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenterFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics[] = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenterStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SelectionCheckMarkVisualEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CheckHintBrushProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CheckSelectingBrushProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CheckBrushProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragBackgroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragForegroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusBorderBrushProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaceholderBackgroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerOverBackgroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedBackgroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedForegroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedPointerOverBackgroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedPointerOverBorderBrushProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedBorderThicknessProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisabledOpacityProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragOpacityProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReorderHintOffsetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    DEPRECATED("Use ContentPresenter.HorizontalContentAlignment instead of ListViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ListViewItemPresenterHorizontalContentAlignmentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    DEPRECATED("Use ContentPresenter.VerticalContentAlignment instead of ListViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ListViewItemPresenterVerticalContentAlignmentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    DEPRECATED("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ListViewItemPresenterPaddingProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerOverBackgroundMarginProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentMarginProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SelectionCheckMarkVisualEnabledProperty(This,value) )
    ( (This)->lpVtbl->get_CheckHintBrushProperty(This,value) )
    ( (This)->lpVtbl->get_CheckSelectingBrushProperty(This,value) )
    ( (This)->lpVtbl->get_CheckBrushProperty(This,value) )
    ( (This)->lpVtbl->get_DragBackgroundProperty(This,value) )
    ( (This)->lpVtbl->get_DragForegroundProperty(This,value) )
    ( (This)->lpVtbl->get_FocusBorderBrushProperty(This,value) )
    ( (This)->lpVtbl->get_PlaceholderBackgroundProperty(This,value) )
    ( (This)->lpVtbl->get_PointerOverBackgroundProperty(This,value) )
    ( (This)->lpVtbl->get_SelectedBackgroundProperty(This,value) )
    ( (This)->lpVtbl->get_SelectedForegroundProperty(This,value) )
    ( (This)->lpVtbl->get_SelectedPointerOverBackgroundProperty(This,value) )
    ( (This)->lpVtbl->get_SelectedPointerOverBorderBrushProperty(This,value) )
    ( (This)->lpVtbl->get_SelectedBorderThicknessProperty(This,value) )
    ( (This)->lpVtbl->get_DisabledOpacityProperty(This,value) )
    ( (This)->lpVtbl->get_DragOpacityProperty(This,value) )
    ( (This)->lpVtbl->get_ReorderHintOffsetProperty(This,value) )
DEPRECATED("Use ContentPresenter.HorizontalContentAlignment instead of ListViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ListViewItemPresenterHorizontalContentAlignmentProperty(This,value) )
DEPRECATED("Use ContentPresenter.VerticalContentAlignment instead of ListViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ListViewItemPresenterVerticalContentAlignmentProperty(This,value) )
DEPRECATED("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ListViewItemPresenterPaddingProperty(This,value) )
    ( (This)->lpVtbl->get_PointerOverBackgroundMarginProperty(This,value) )
    ( (This)->lpVtbl->get_ContentMarginProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics2[] = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenterStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SelectedPressedBackgroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PressedBackgroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CheckBoxBrushProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusSecondaryBorderBrushProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CheckModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerOverForegroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SelectedPressedBackgroundProperty(This,value) )
    ( (This)->lpVtbl->get_PressedBackgroundProperty(This,value) )
    ( (This)->lpVtbl->get_CheckBoxBrushProperty(This,value) )
    ( (This)->lpVtbl->get_FocusSecondaryBorderBrushProperty(This,value) )
    ( (This)->lpVtbl->get_CheckModeProperty(This,value) )
    ( (This)->lpVtbl->get_PointerOverForegroundProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics3[] = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenterStatics3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RevealBackgroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RevealBorderBrushProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RevealBorderThicknessProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RevealBackgroundShowsAboveContentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RevealBackgroundProperty(This,value) )
    ( (This)->lpVtbl->get_RevealBorderBrushProperty(This,value) )
    ( (This)->lpVtbl->get_RevealBorderThicknessProperty(This,value) )
    ( (This)->lpVtbl->get_RevealBackgroundShowsAboveContentProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemPresenterStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IListViewItemTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemTemplateSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemTemplateSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemTemplateSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemTemplateSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemTemplateSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemTemplateSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemTemplateSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemTemplateSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DragItemsCount )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemTemplateSettings * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemTemplateSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemTemplateSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemTemplateSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DragItemsCount(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIListViewItemTemplateSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector[] = L"Windows.UI.Xaml.Controls.Primitives.ILoopingSelector";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ShouldLoop )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShouldLoop )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Items )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                           __RPC__deref_out_opt __FIVector_1_IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Items )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                  __RPC__in_opt __FIVector_1_IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedIndex )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedIndex )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedItem )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedItem )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                  __RPC__in_opt IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemWidth )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ItemWidth )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemHeight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ItemHeight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemTemplate )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDataTemplate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ItemTemplate )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDataTemplate * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SelectionChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CISelectionChangedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SelectionChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ShouldLoop(This,value) )
    ( (This)->lpVtbl->put_ShouldLoop(This,value) )
    ( (This)->lpVtbl->get_Items(This,value) )
    ( (This)->lpVtbl->put_Items(This,value) )
    ( (This)->lpVtbl->get_SelectedIndex(This,value) )
    ( (This)->lpVtbl->put_SelectedIndex(This,value) )
    ( (This)->lpVtbl->get_SelectedItem(This,value) )
    ( (This)->lpVtbl->put_SelectedItem(This,value) )
    ( (This)->lpVtbl->get_ItemWidth(This,value) )
    ( (This)->lpVtbl->put_ItemWidth(This,value) )
    ( (This)->lpVtbl->get_ItemHeight(This,value) )
    ( (This)->lpVtbl->put_ItemHeight(This,value) )
    ( (This)->lpVtbl->get_ItemTemplate(This,value) )
    ( (This)->lpVtbl->put_ItemTemplate(This,value) )
    ( (This)->lpVtbl->add_SelectionChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SelectionChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelector;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorItem[] = L"Windows.UI.Xaml.Controls.Primitives.ILoopingSelectorItem";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorItemVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorItem
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorPanel[] = L"Windows.UI.Xaml.Controls.Primitives.ILoopingSelectorPanel";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorPanelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorPanel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorPanel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorPanel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorPanel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorPanel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorPanel * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorPanelVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorPanel
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorPanelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorPanel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorStatics[] = L"Windows.UI.Xaml.Controls.Primitives.ILoopingSelectorStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ShouldLoopProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedIndexProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedItemProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemWidthProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemHeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemTemplateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ShouldLoopProperty(This,value) )
    ( (This)->lpVtbl->get_ItemsProperty(This,value) )
    ( (This)->lpVtbl->get_SelectedIndexProperty(This,value) )
    ( (This)->lpVtbl->get_SelectedItemProperty(This,value) )
    ( (This)->lpVtbl->get_ItemWidthProperty(This,value) )
    ( (This)->lpVtbl->get_ItemHeightProperty(This,value) )
    ( (This)->lpVtbl->get_ItemTemplateProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CILoopingSelectorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IMenuFlyoutItemTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.IMenuFlyoutItemTemplateSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutItemTemplateSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutItemTemplateSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutItemTemplateSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutItemTemplateSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutItemTemplateSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutItemTemplateSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutItemTemplateSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KeyboardAcceleratorTextMinWidth )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutItemTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutItemTemplateSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutItemTemplateSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutItemTemplateSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KeyboardAcceleratorTextMinWidth(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutItemTemplateSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IMenuFlyoutPresenterTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.IMenuFlyoutPresenterTemplateSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutPresenterTemplateSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutPresenterTemplateSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutPresenterTemplateSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutPresenterTemplateSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutPresenterTemplateSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutPresenterTemplateSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutPresenterTemplateSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FlyoutContentMinWidth )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutPresenterTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutPresenterTemplateSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutPresenterTemplateSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutPresenterTemplateSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FlyoutContentMinWidth(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIMenuFlyoutPresenterTemplateSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_INavigationViewItemPresenter[] = L"Windows.UI.Xaml.Controls.Primitives.INavigationViewItemPresenter";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Icon )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIIconElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Icon )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIIconElement * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Icon(This,value) )
    ( (This)->lpVtbl->put_Icon(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_INavigationViewItemPresenterFactory[] = L"Windows.UI.Xaml.Controls.Primitives.INavigationViewItemPresenterFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_INavigationViewItemPresenterStatics[] = L"Windows.UI.Xaml.Controls.Primitives.INavigationViewItemPresenterStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IconProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IconProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CINavigationViewItemPresenterStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel[] = L"Windows.UI.Xaml.Controls.Primitives.IOrientedVirtualizingPanel";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanVerticallyScroll )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanVerticallyScroll )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanHorizontallyScroll )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanHorizontallyScroll )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtentWidth )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtentHeight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewportWidth )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewportHeight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScrollOwner )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScrollOwner )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                  __RPC__in_opt IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *LineUp )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *LineDown )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *LineLeft )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *LineRight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *PageUp )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *PageDown )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *PageLeft )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *PageRight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *MouseWheelUp )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *MouseWheelDown )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *MouseWheelLeft )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *MouseWheelRight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetHorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                  DOUBLE offset
        );
    HRESULT ( STDMETHODCALLTYPE *SetVerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                  DOUBLE offset
        );
    HRESULT ( STDMETHODCALLTYPE *MakeVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * visual,
                  __x_ABI_CWindows_CFoundation_CRect rectangle,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanelVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanVerticallyScroll(This,value) )
    ( (This)->lpVtbl->put_CanVerticallyScroll(This,value) )
    ( (This)->lpVtbl->get_CanHorizontallyScroll(This,value) )
    ( (This)->lpVtbl->put_CanHorizontallyScroll(This,value) )
    ( (This)->lpVtbl->get_ExtentWidth(This,value) )
    ( (This)->lpVtbl->get_ExtentHeight(This,value) )
    ( (This)->lpVtbl->get_ViewportWidth(This,value) )
    ( (This)->lpVtbl->get_ViewportHeight(This,value) )
    ( (This)->lpVtbl->get_HorizontalOffset(This,value) )
    ( (This)->lpVtbl->get_VerticalOffset(This,value) )
    ( (This)->lpVtbl->get_ScrollOwner(This,value) )
    ( (This)->lpVtbl->put_ScrollOwner(This,value) )
    ( (This)->lpVtbl->LineUp(This) )
    ( (This)->lpVtbl->LineDown(This) )
    ( (This)->lpVtbl->LineLeft(This) )
    ( (This)->lpVtbl->LineRight(This) )
    ( (This)->lpVtbl->PageUp(This) )
    ( (This)->lpVtbl->PageDown(This) )
    ( (This)->lpVtbl->PageLeft(This) )
    ( (This)->lpVtbl->PageRight(This) )
    ( (This)->lpVtbl->MouseWheelUp(This) )
    ( (This)->lpVtbl->MouseWheelDown(This) )
    ( (This)->lpVtbl->MouseWheelLeft(This) )
    ( (This)->lpVtbl->MouseWheelRight(This) )
    ( (This)->lpVtbl->SetHorizontalOffset(This,offset) )
    ( (This)->lpVtbl->SetVerticalOffset(This,offset) )
    ( (This)->lpVtbl->MakeVisible(This,visual,rectangle,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanelFactory[] = L"Windows.UI.Xaml.Controls.Primitives.IOrientedVirtualizingPanelFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanelFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanelFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanelFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanelFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanelFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanelFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanelFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanelFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanelFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanelFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIOrientedVirtualizingPanelFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBase[] = L"Windows.UI.Xaml.Controls.Primitives.IPickerFlyoutBase";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBase * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBase * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBase * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBase * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBase * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBase * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBase
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBase;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseFactory[] = L"Windows.UI.Xaml.Controls.Primitives.IPickerFlyoutBaseFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBase * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseOverrides[] = L"Windows.UI.Xaml.Controls.Primitives.IPickerFlyoutBaseOverrides";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseOverrides * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseOverrides * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseOverrides * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseOverrides * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseOverrides * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseOverrides * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnConfirmed )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseOverrides * This
        );
    HRESULT ( STDMETHODCALLTYPE *ShouldShowConfirmationButtons )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseOverrides * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseOverridesVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseOverridesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OnConfirmed(This) )
    ( (This)->lpVtbl->ShouldShowConfirmationButtons(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseOverrides;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseStatics[] = L"Windows.UI.Xaml.Controls.Primitives.IPickerFlyoutBaseStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TitleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTitle )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetTitle )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TitleProperty(This,value) )
    ( (This)->lpVtbl->GetTitle(This,element,result) )
    ( (This)->lpVtbl->SetTitle(This,element,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPickerFlyoutBaseStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderItem[] = L"Windows.UI.Xaml.Controls.Primitives.IPivotHeaderItem";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItemVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItem
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderItemFactory[] = L"Windows.UI.Xaml.Controls.Primitives.IPivotHeaderItemFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItemFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItemFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItemFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItemFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItemFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItemFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItemFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItemFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItemFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItemFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItemFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderItemFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderPanel[] = L"Windows.UI.Xaml.Controls.Primitives.IPivotHeaderPanel";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderPanelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderPanel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderPanel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderPanel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderPanel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderPanel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderPanel * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderPanelVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderPanel
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderPanelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotHeaderPanel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IPivotPanel[] = L"Windows.UI.Xaml.Controls.Primitives.IPivotPanel";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotPanelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotPanel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotPanel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotPanel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotPanel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotPanel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotPanel * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotPanelVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotPanel
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotPanelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPivotPanel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IPopup[] = L"Windows.UI.Xaml.Controls.Primitives.IPopup";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Child )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Child )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOpen )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsOpen )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChildTransitions )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChildTransitions )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                  __RPC__in_opt __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsLightDismissEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsLightDismissEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                  boolean value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Opened )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Opened )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Child(This,value) )
    ( (This)->lpVtbl->put_Child(This,value) )
    ( (This)->lpVtbl->get_IsOpen(This,value) )
    ( (This)->lpVtbl->put_IsOpen(This,value) )
    ( (This)->lpVtbl->get_HorizontalOffset(This,value) )
    ( (This)->lpVtbl->put_HorizontalOffset(This,value) )
    ( (This)->lpVtbl->get_VerticalOffset(This,value) )
    ( (This)->lpVtbl->put_VerticalOffset(This,value) )
    ( (This)->lpVtbl->get_ChildTransitions(This,value) )
    ( (This)->lpVtbl->put_ChildTransitions(This,value) )
    ( (This)->lpVtbl->get_IsLightDismissEnabled(This,value) )
    ( (This)->lpVtbl->put_IsLightDismissEnabled(This,value) )
    ( (This)->lpVtbl->add_Opened(This,handler,token) )
    ( (This)->lpVtbl->remove_Opened(This,token) )
    ( (This)->lpVtbl->add_Closed(This,handler,token) )
    ( (This)->lpVtbl->remove_Closed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IPopup2[] = L"Windows.UI.Xaml.Controls.Primitives.IPopup2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LightDismissOverlayMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CLightDismissOverlayMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LightDismissOverlayMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CLightDismissOverlayMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LightDismissOverlayMode(This,value) )
    ( (This)->lpVtbl->put_LightDismissOverlayMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IPopup3[] = L"Windows.UI.Xaml.Controls.Primitives.IPopup3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ShouldConstrainToRootBounds )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShouldConstrainToRootBounds )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsConstrainedToRootBounds )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup3 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ShouldConstrainToRootBounds(This,value) )
    ( (This)->lpVtbl->put_ShouldConstrainToRootBounds(This,value) )
    ( (This)->lpVtbl->get_IsConstrainedToRootBounds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IPopupStatics[] = L"Windows.UI.Xaml.Controls.Primitives.IPopupStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChildProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOpenProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalOffsetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalOffsetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChildTransitionsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsLightDismissEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChildProperty(This,value) )
    ( (This)->lpVtbl->get_IsOpenProperty(This,value) )
    ( (This)->lpVtbl->get_HorizontalOffsetProperty(This,value) )
    ( (This)->lpVtbl->get_VerticalOffsetProperty(This,value) )
    ( (This)->lpVtbl->get_ChildTransitionsProperty(This,value) )
    ( (This)->lpVtbl->get_IsLightDismissEnabledProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IPopupStatics2[] = L"Windows.UI.Xaml.Controls.Primitives.IPopupStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LightDismissOverlayModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LightDismissOverlayModeProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IPopupStatics3[] = L"Windows.UI.Xaml.Controls.Primitives.IPopupStatics3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ShouldConstrainToRootBoundsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ShouldConstrainToRootBoundsProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopupStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IProgressBarTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.IProgressBarTemplateSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EllipseDiameter )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EllipseOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EllipseAnimationWellPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EllipseAnimationEndPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContainerAnimationStartPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContainerAnimationEndPosition )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IndicatorLengthDelta )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EllipseDiameter(This,value) )
    ( (This)->lpVtbl->get_EllipseOffset(This,value) )
    ( (This)->lpVtbl->get_EllipseAnimationWellPosition(This,value) )
    ( (This)->lpVtbl->get_EllipseAnimationEndPosition(This,value) )
    ( (This)->lpVtbl->get_ContainerAnimationStartPosition(This,value) )
    ( (This)->lpVtbl->get_ContainerAnimationEndPosition(This,value) )
    ( (This)->lpVtbl->get_IndicatorLengthDelta(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressBarTemplateSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IProgressRingTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.IProgressRingTemplateSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressRingTemplateSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressRingTemplateSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressRingTemplateSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressRingTemplateSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressRingTemplateSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressRingTemplateSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressRingTemplateSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EllipseDiameter )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressRingTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EllipseOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressRingTemplateSettings * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxSideLength )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressRingTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressRingTemplateSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressRingTemplateSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressRingTemplateSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EllipseDiameter(This,value) )
    ( (This)->lpVtbl->get_EllipseOffset(This,value) )
    ( (This)->lpVtbl->get_MaxSideLength(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIProgressRingTemplateSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IRangeBase[] = L"Windows.UI.Xaml.Controls.Primitives.IRangeBase";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Minimum )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Minimum )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Maximum )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Maximum )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SmallChange )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SmallChange )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LargeChange )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LargeChange )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This,
                  DOUBLE value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ValueChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ValueChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Minimum(This,value) )
    ( (This)->lpVtbl->put_Minimum(This,value) )
    ( (This)->lpVtbl->get_Maximum(This,value) )
    ( (This)->lpVtbl->put_Maximum(This,value) )
    ( (This)->lpVtbl->get_SmallChange(This,value) )
    ( (This)->lpVtbl->put_SmallChange(This,value) )
    ( (This)->lpVtbl->get_LargeChange(This,value) )
    ( (This)->lpVtbl->put_LargeChange(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
    ( (This)->lpVtbl->add_ValueChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ValueChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IRangeBaseFactory[] = L"Windows.UI.Xaml.Controls.Primitives.IRangeBaseFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBase * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IRangeBaseOverrides[] = L"Windows.UI.Xaml.Controls.Primitives.IRangeBaseOverrides";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseOverrides * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseOverrides * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseOverrides * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseOverrides * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseOverrides * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseOverrides * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnMinimumChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseOverrides * This,
                  DOUBLE oldMinimum,
                  DOUBLE newMinimum
        );
    HRESULT ( STDMETHODCALLTYPE *OnMaximumChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseOverrides * This,
                  DOUBLE oldMaximum,
                  DOUBLE newMaximum
        );
    HRESULT ( STDMETHODCALLTYPE *OnValueChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseOverrides * This,
                  DOUBLE oldValue,
                  DOUBLE newValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseOverridesVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseOverridesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OnMinimumChanged(This,oldMinimum,newMinimum) )
    ( (This)->lpVtbl->OnMaximumChanged(This,oldMaximum,newMaximum) )
    ( (This)->lpVtbl->OnValueChanged(This,oldValue,newValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseOverrides;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IRangeBaseStatics[] = L"Windows.UI.Xaml.Controls.Primitives.IRangeBaseStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MinimumProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaximumProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SmallChangeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LargeChangeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ValueProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MinimumProperty(This,value) )
    ( (This)->lpVtbl->get_MaximumProperty(This,value) )
    ( (This)->lpVtbl->get_SmallChangeProperty(This,value) )
    ( (This)->lpVtbl->get_LargeChangeProperty(This,value) )
    ( (This)->lpVtbl->get_ValueProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IRangeBaseValueChangedEventArgs[] = L"Windows.UI.Xaml.Controls.Primitives.IRangeBaseValueChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OldValue )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewValue )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OldValue(This,value) )
    ( (This)->lpVtbl->get_NewValue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRangeBaseValueChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IRepeatButton[] = L"Windows.UI.Xaml.Controls.Primitives.IRepeatButton";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButton * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButton * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButton * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButton * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButton * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButton * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Delay )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButton * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Delay )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButton * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Interval )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButton * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Interval )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButton * This,
                  INT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButton
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Delay(This,value) )
    ( (This)->lpVtbl->put_Delay(This,value) )
    ( (This)->lpVtbl->get_Interval(This,value) )
    ( (This)->lpVtbl->put_Interval(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButton;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IRepeatButtonStatics[] = L"Windows.UI.Xaml.Controls.Primitives.IRepeatButtonStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DelayProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IntervalProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DelayProperty(This,value) )
    ( (This)->lpVtbl->get_IntervalProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIRepeatButtonStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IScrollBar[] = L"Windows.UI.Xaml.Controls.Primitives.IScrollBar";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_COrientation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Orientation )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_COrientation value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewportSize )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ViewportSize )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IndicatorMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CScrollingIndicatorMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IndicatorMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CScrollingIndicatorMode value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Scroll )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Scroll )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
    ( (This)->lpVtbl->put_Orientation(This,value) )
    ( (This)->lpVtbl->get_ViewportSize(This,value) )
    ( (This)->lpVtbl->put_ViewportSize(This,value) )
    ( (This)->lpVtbl->get_IndicatorMode(This,value) )
    ( (This)->lpVtbl->put_IndicatorMode(This,value) )
    ( (This)->lpVtbl->add_Scroll(This,handler,token) )
    ( (This)->lpVtbl->remove_Scroll(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBar;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IScrollBarStatics[] = L"Windows.UI.Xaml.Controls.Primitives.IScrollBarStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OrientationProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewportSizeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IndicatorModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OrientationProperty(This,value) )
    ( (This)->lpVtbl->get_ViewportSizeProperty(This,value) )
    ( (This)->lpVtbl->get_IndicatorModeProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollBarStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IScrollEventArgs[] = L"Windows.UI.Xaml.Controls.Primitives.IScrollEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NewValue )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventArgs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScrollEventType )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CScrollEventType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NewValue(This,value) )
    ( (This)->lpVtbl->get_ScrollEventType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IScrollSnapPointsInfo[] = L"Windows.UI.Xaml.Controls.Primitives.IScrollSnapPointsInfo";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AreHorizontalSnapPointsRegular )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AreVerticalSnapPointsRegular )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_HorizontalSnapPointsChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_HorizontalSnapPointsChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_VerticalSnapPointsChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VerticalSnapPointsChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetIrregularSnapPoints )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_COrientation orientation,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CSnapPointsAlignment alignment,
                           __RPC__deref_out_opt __FIVectorView_1_float * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetRegularSnapPoints )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_COrientation orientation,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CSnapPointsAlignment alignment,
                   __RPC__out FLOAT * offset,
                           __RPC__out FLOAT * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfoVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AreHorizontalSnapPointsRegular(This,value) )
    ( (This)->lpVtbl->get_AreVerticalSnapPointsRegular(This,value) )
    ( (This)->lpVtbl->add_HorizontalSnapPointsChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_HorizontalSnapPointsChanged(This,token) )
    ( (This)->lpVtbl->add_VerticalSnapPointsChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_VerticalSnapPointsChanged(This,token) )
    ( (This)->lpVtbl->GetIrregularSnapPoints(This,orientation,alignment,result) )
    ( (This)->lpVtbl->GetRegularSnapPoints(This,orientation,alignment,offset,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIScrollSnapPointsInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ISelector[] = L"Windows.UI.Xaml.Controls.Primitives.ISelector";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SelectedIndex )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedIndex )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedItem )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedItem )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This,
                  __RPC__in_opt IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedValue )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedValue )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This,
                  __RPC__in_opt IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedValuePath )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedValuePath )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSynchronizedWithCurrentItem )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This,
                           __RPC__deref_out_opt __FIReference_1_boolean * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsSynchronizedWithCurrentItem )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This,
                  __RPC__in_opt __FIReference_1_boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SelectionChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CISelectionChangedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SelectionChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SelectedIndex(This,value) )
    ( (This)->lpVtbl->put_SelectedIndex(This,value) )
    ( (This)->lpVtbl->get_SelectedItem(This,value) )
    ( (This)->lpVtbl->put_SelectedItem(This,value) )
    ( (This)->lpVtbl->get_SelectedValue(This,value) )
    ( (This)->lpVtbl->put_SelectedValue(This,value) )
    ( (This)->lpVtbl->get_SelectedValuePath(This,value) )
    ( (This)->lpVtbl->put_SelectedValuePath(This,value) )
    ( (This)->lpVtbl->get_IsSynchronizedWithCurrentItem(This,value) )
    ( (This)->lpVtbl->put_IsSynchronizedWithCurrentItem(This,value) )
    ( (This)->lpVtbl->add_SelectionChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SelectionChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelector;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ISelectorFactory[] = L"Windows.UI.Xaml.Controls.Primitives.ISelectorFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ISelectorItem[] = L"Windows.UI.Xaml.Controls.Primitives.ISelectorItem";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSelected )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItem * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsSelected )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItem * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItem
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSelected(This,value) )
    ( (This)->lpVtbl->put_IsSelected(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ISelectorItemFactory[] = L"Windows.UI.Xaml.Controls.Primitives.ISelectorItemFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ISelectorItemStatics[] = L"Windows.UI.Xaml.Controls.Primitives.ISelectorItemStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSelectedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSelectedProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorItemStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ISelectorStatics[] = L"Windows.UI.Xaml.Controls.Primitives.ISelectorStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SelectedIndexProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedItemProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedValueProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedValuePathProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSynchronizedWithCurrentItemProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsSelectionActive )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SelectedIndexProperty(This,value) )
    ( (This)->lpVtbl->get_SelectedItemProperty(This,value) )
    ( (This)->lpVtbl->get_SelectedValueProperty(This,value) )
    ( (This)->lpVtbl->get_SelectedValuePathProperty(This,value) )
    ( (This)->lpVtbl->get_IsSynchronizedWithCurrentItemProperty(This,value) )
    ( (This)->lpVtbl->GetIsSelectionActive(This,element,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISelectorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ISettingsFlyoutTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.ISettingsFlyoutTemplateSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HeaderBackground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettings * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeaderForeground )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettings * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BorderBrush )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettings * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BorderThickness )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettings * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IconSource )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettings * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentTransitions )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettings * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HeaderBackground(This,value) )
    ( (This)->lpVtbl->get_HeaderForeground(This,value) )
    ( (This)->lpVtbl->get_BorderBrush(This,value) )
    ( (This)->lpVtbl->get_BorderThickness(This,value) )
    ( (This)->lpVtbl->get_IconSource(This,value) )
    ( (This)->lpVtbl->get_ContentTransitions(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISettingsFlyoutTemplateSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ISplitViewTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.ISplitViewTemplateSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OpenPaneLength )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NegativeOpenPaneLength )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OpenPaneLengthMinusCompactLength )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NegativeOpenPaneLengthMinusCompactLength )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OpenPaneGridLength )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettings * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CGridLength * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CompactPaneGridLength )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettings * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CGridLength * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OpenPaneLength(This,value) )
    ( (This)->lpVtbl->get_NegativeOpenPaneLength(This,value) )
    ( (This)->lpVtbl->get_OpenPaneLengthMinusCompactLength(This,value) )
    ( (This)->lpVtbl->get_NegativeOpenPaneLengthMinusCompactLength(This,value) )
    ( (This)->lpVtbl->get_OpenPaneGridLength(This,value) )
    ( (This)->lpVtbl->get_CompactPaneGridLength(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CISplitViewTemplateSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IThumb[] = L"Windows.UI.Xaml.Controls.Primitives.IThumb";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumbVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsDragging )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DragStarted )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragStartedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DragStarted )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DragDelta )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragDeltaEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DragDelta )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DragCompleted )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIDragCompletedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DragCompleted )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CancelDrag )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumbVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumbVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsDragging(This,value) )
    ( (This)->lpVtbl->add_DragStarted(This,handler,token) )
    ( (This)->lpVtbl->remove_DragStarted(This,token) )
    ( (This)->lpVtbl->add_DragDelta(This,handler,token) )
    ( (This)->lpVtbl->remove_DragDelta(This,token) )
    ( (This)->lpVtbl->add_DragCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_DragCompleted(This,token) )
    ( (This)->lpVtbl->CancelDrag(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumb;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IThumbStatics[] = L"Windows.UI.Xaml.Controls.Primitives.IThumbStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumbStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumbStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumbStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumbStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumbStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumbStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumbStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsDraggingProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumbStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumbStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumbStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumbStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsDraggingProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIThumbStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ITickBar[] = L"Windows.UI.Xaml.Controls.Primitives.ITickBar";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBar * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBar * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBar * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBar * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBar * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBar * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Fill )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBar * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Fill )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBar * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBarVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBar
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBarVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Fill(This,value) )
    ( (This)->lpVtbl->put_Fill(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBar;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_ITickBarStatics[] = L"Windows.UI.Xaml.Controls.Primitives.ITickBarStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBarStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBarStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBarStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBarStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBarStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBarStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBarStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FillProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBarStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBarStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBarStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBarStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FillProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CITickBarStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IToggleButton[] = L"Windows.UI.Xaml.Controls.Primitives.IToggleButton";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsChecked )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton * This,
                           __RPC__deref_out_opt __FIReference_1_boolean * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsChecked )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton * This,
                  __RPC__in_opt __FIReference_1_boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsThreeState )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsThreeState )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton * This,
                  boolean value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Checked )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Checked )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Unchecked )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Unchecked )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Indeterminate )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Indeterminate )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsChecked(This,value) )
    ( (This)->lpVtbl->put_IsChecked(This,value) )
    ( (This)->lpVtbl->get_IsThreeState(This,value) )
    ( (This)->lpVtbl->put_IsThreeState(This,value) )
    ( (This)->lpVtbl->add_Checked(This,handler,token) )
    ( (This)->lpVtbl->remove_Checked(This,token) )
    ( (This)->lpVtbl->add_Unchecked(This,handler,token) )
    ( (This)->lpVtbl->remove_Unchecked(This,token) )
    ( (This)->lpVtbl->add_Indeterminate(This,handler,token) )
    ( (This)->lpVtbl->remove_Indeterminate(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IToggleButtonFactory[] = L"Windows.UI.Xaml.Controls.Primitives.IToggleButtonFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButton * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IToggleButtonOverrides[] = L"Windows.UI.Xaml.Controls.Primitives.IToggleButtonOverrides";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonOverrides * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonOverrides * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonOverrides * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonOverrides * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonOverrides * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonOverrides * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnToggle )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonOverrides * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonOverridesVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonOverridesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OnToggle(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonOverrides;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IToggleButtonStatics[] = L"Windows.UI.Xaml.Controls.Primitives.IToggleButtonStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsCheckedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsThreeStateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsCheckedProperty(This,value) )
    ( (This)->lpVtbl->get_IsThreeStateProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleButtonStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IToggleSwitchTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.IToggleSwitchTemplateSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KnobCurrentToOnOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KnobCurrentToOffOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KnobOnToOffOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KnobOffToOnOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurtainCurrentToOnOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurtainCurrentToOffOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurtainOnToOffOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurtainOffToOnOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KnobCurrentToOnOffset(This,value) )
    ( (This)->lpVtbl->get_KnobCurrentToOffOffset(This,value) )
    ( (This)->lpVtbl->get_KnobOnToOffOffset(This,value) )
    ( (This)->lpVtbl->get_KnobOffToOnOffset(This,value) )
    ( (This)->lpVtbl->get_CurtainCurrentToOnOffset(This,value) )
    ( (This)->lpVtbl->get_CurtainCurrentToOffOffset(This,value) )
    ( (This)->lpVtbl->get_CurtainOnToOffOffset(This,value) )
    ( (This)->lpVtbl->get_CurtainOffToOnOffset(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToggleSwitchTemplateSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Primitives_IToolTipTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.IToolTipTemplateSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToolTipTemplateSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToolTipTemplateSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToolTipTemplateSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToolTipTemplateSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToolTipTemplateSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToolTipTemplateSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToolTipTemplateSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FromHorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToolTipTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FromVerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToolTipTemplateSettings * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToolTipTemplateSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToolTipTemplateSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToolTipTemplateSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FromHorizontalOffset(This,value) )
    ( (This)->lpVtbl->get_FromVerticalOffset(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIToolTipTemplateSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_AppBarButtonTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.AppBarButtonTemplateSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_AppBarTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.AppBarTemplateSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_AppBarToggleButtonTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.AppBarToggleButtonTemplateSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_ButtonBase[] = L"Windows.UI.Xaml.Controls.Primitives.ButtonBase";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_CalendarPanel[] = L"Windows.UI.Xaml.Controls.Primitives.CalendarPanel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_CalendarViewTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.CalendarViewTemplateSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_CarouselPanel[] = L"Windows.UI.Xaml.Controls.Primitives.CarouselPanel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_ColorPickerSlider[] = L"Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_ColorSpectrum[] = L"Windows.UI.Xaml.Controls.Primitives.ColorSpectrum";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_ComboBoxTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.ComboBoxTemplateSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_CommandBarFlyoutCommandBar[] = L"Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_CommandBarFlyoutCommandBarTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBarTemplateSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_CommandBarTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.CommandBarTemplateSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_DragCompletedEventArgs[] = L"Windows.UI.Xaml.Controls.Primitives.DragCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_DragDeltaEventArgs[] = L"Windows.UI.Xaml.Controls.Primitives.DragDeltaEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_DragStartedEventArgs[] = L"Windows.UI.Xaml.Controls.Primitives.DragStartedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_FlyoutBase[] = L"Windows.UI.Xaml.Controls.Primitives.FlyoutBase";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_FlyoutBaseClosingEventArgs[] = L"Windows.UI.Xaml.Controls.Primitives.FlyoutBaseClosingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_FlyoutShowOptions[] = L"Windows.UI.Xaml.Controls.Primitives.FlyoutShowOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_GeneratorPositionHelper[] = L"Windows.UI.Xaml.Controls.Primitives.GeneratorPositionHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_GridViewItemPresenter[] = L"Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_GridViewItemTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.GridViewItemTemplateSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_ItemsChangedEventArgs[] = L"Windows.UI.Xaml.Controls.Primitives.ItemsChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_JumpListItemBackgroundConverter[] = L"Windows.UI.Xaml.Controls.Primitives.JumpListItemBackgroundConverter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_JumpListItemForegroundConverter[] = L"Windows.UI.Xaml.Controls.Primitives.JumpListItemForegroundConverter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_LayoutInformation[] = L"Windows.UI.Xaml.Controls.Primitives.LayoutInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_ListViewItemPresenter[] = L"Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_ListViewItemTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.ListViewItemTemplateSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_LoopingSelector[] = L"Windows.UI.Xaml.Controls.Primitives.LoopingSelector";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_LoopingSelectorItem[] = L"Windows.UI.Xaml.Controls.Primitives.LoopingSelectorItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_LoopingSelectorPanel[] = L"Windows.UI.Xaml.Controls.Primitives.LoopingSelectorPanel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_MenuFlyoutItemTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.MenuFlyoutItemTemplateSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_MenuFlyoutPresenterTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.MenuFlyoutPresenterTemplateSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_NavigationViewItemPresenter[] = L"Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_OrientedVirtualizingPanel[] = L"Windows.UI.Xaml.Controls.Primitives.OrientedVirtualizingPanel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_PickerFlyoutBase[] = L"Windows.UI.Xaml.Controls.Primitives.PickerFlyoutBase";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_PivotHeaderItem[] = L"Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_PivotHeaderPanel[] = L"Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_PivotPanel[] = L"Windows.UI.Xaml.Controls.Primitives.PivotPanel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_Popup[] = L"Windows.UI.Xaml.Controls.Primitives.Popup";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_ProgressBarTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.ProgressBarTemplateSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_ProgressRingTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.ProgressRingTemplateSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_RangeBase[] = L"Windows.UI.Xaml.Controls.Primitives.RangeBase";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_RangeBaseValueChangedEventArgs[] = L"Windows.UI.Xaml.Controls.Primitives.RangeBaseValueChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_RepeatButton[] = L"Windows.UI.Xaml.Controls.Primitives.RepeatButton";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_ScrollBar[] = L"Windows.UI.Xaml.Controls.Primitives.ScrollBar";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_ScrollEventArgs[] = L"Windows.UI.Xaml.Controls.Primitives.ScrollEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_Selector[] = L"Windows.UI.Xaml.Controls.Primitives.Selector";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_SelectorItem[] = L"Windows.UI.Xaml.Controls.Primitives.SelectorItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_SettingsFlyoutTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.SettingsFlyoutTemplateSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_SplitViewTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.SplitViewTemplateSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_Thumb[] = L"Windows.UI.Xaml.Controls.Primitives.Thumb";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_TickBar[] = L"Windows.UI.Xaml.Controls.Primitives.TickBar";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_ToggleButton[] = L"Windows.UI.Xaml.Controls.Primitives.ToggleButton";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_ToggleSwitchTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.ToggleSwitchTemplateSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Primitives_ToolTipTemplateSettings[] = L"Windows.UI.Xaml.Controls.Primitives.ToolTipTemplateSettings";
       
       
#pragma clang diagnostic pop
