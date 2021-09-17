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
#include "Windows.ApplicationModel.h"
#include "Windows.ApplicationModel.Activation.h"
#include "Windows.ApplicationModel.Core.h"
#include "Windows.ApplicationModel.DataTransfer.h"
#include "Windows.ApplicationModel.DataTransfer.DragDrop.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.UI.h"
#include "Windows.UI.Composition.h"
#include "Windows.UI.Core.h"
#include "Windows.UI.Input.h"
#include "Windows.UI.Xaml.Automation.Peers.h"
#include "Windows.UI.Xaml.Controls.h"
#include "Windows.UI.Xaml.Controls.Primitives.h"
#include "Windows.UI.Xaml.Data.h"
#include "Windows.UI.Xaml.Input.h"
#include "Windows.UI.Xaml.Interop.h"
#include "Windows.UI.Xaml.Media.h"
#include "Windows.UI.Xaml.Media.Animation.h"
#include "Windows.UI.Xaml.Media.Imaging.h"
#include "Windows.UI.Xaml.Media.Media3D.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallback __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallback;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventHandler __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CICreateDefaultValueCallback __x_ABI_CWindows_CUI_CXaml_CICreateDefaultValueCallback;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedCallback __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedCallback;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventHandler __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDragEventHandler __x_ABI_CWindows_CUI_CXaml_CIDragEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIEnteredBackgroundEventHandler __x_ABI_CWindows_CUI_CXaml_CIEnteredBackgroundEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CILeavingBackgroundEventHandler __x_ABI_CWindows_CUI_CXaml_CILeavingBackgroundEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIPropertyChangedCallback __x_ABI_CWindows_CUI_CXaml_CIPropertyChangedCallback;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventHandler __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CISuspendingEventHandler __x_ABI_CWindows_CUI_CXaml_CISuspendingEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventHandler __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventHandler __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIWindowActivatedEventHandler __x_ABI_CWindows_CUI_CXaml_CIWindowActivatedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIWindowClosedEventHandler __x_ABI_CWindows_CUI_CXaml_CIWindowClosedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIWindowSizeChangedEventHandler __x_ABI_CWindows_CUI_CXaml_CIWindowSizeChangedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIWindowVisibilityChangedEventHandler __x_ABI_CWindows_CUI_CXaml_CIWindowVisibilityChangedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTrigger __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTrigger;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerFactory __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerStatics __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIApplication __x_ABI_CWindows_CUI_CXaml_CIApplication;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIApplication2 __x_ABI_CWindows_CUI_CXaml_CIApplication2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIApplication3 __x_ABI_CWindows_CUI_CXaml_CIApplication3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIApplicationFactory __x_ABI_CWindows_CUI_CXaml_CIApplicationFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackParams __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackParams;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides2 __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIApplicationStatics __x_ABI_CWindows_CUI_CXaml_CIApplicationStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventArgs __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2 __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIBrushTransition __x_ABI_CWindows_CUI_CXaml_CIBrushTransition;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIBrushTransitionFactory __x_ABI_CWindows_CUI_CXaml_CIBrushTransitionFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResourcesFactory __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResourcesFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelper __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelper;
typedef interface __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperStatics __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDataContextChangedEventArgs __x_ABI_CWindows_CUI_CXaml_CIDataContextChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDataTemplate __x_ABI_CWindows_CUI_CXaml_CIDataTemplate;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtension __x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtension;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDataTemplateFactory __x_ABI_CWindows_CUI_CXaml_CIDataTemplateFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKey __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKey;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyFactory __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDataTemplateStatics2 __x_ABI_CWindows_CUI_CXaml_CIDataTemplateStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDebugSettings __x_ABI_CWindows_CUI_CXaml_CIDebugSettings;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDebugSettings2 __x_ABI_CWindows_CUI_CXaml_CIDebugSettings2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDebugSettings3 __x_ABI_CWindows_CUI_CXaml_CIDebugSettings3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDebugSettings4 __x_ABI_CWindows_CUI_CXaml_CIDebugSettings4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObject __x_ABI_CWindows_CUI_CXaml_CIDependencyObject;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObject2 __x_ABI_CWindows_CUI_CXaml_CIDependencyObject2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectCollectionFactory __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectCollectionFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectFactory __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgs __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyStatics __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimerFactory __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimerFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2 __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs3 __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDragOperationDeferral __x_ABI_CWindows_CUI_CXaml_CIDragOperationDeferral;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs2 __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDragUI __x_ABI_CWindows_CUI_CXaml_CIDragUI;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDropCompletedEventArgs __x_ABI_CWindows_CUI_CXaml_CIDropCompletedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDurationHelper __x_ABI_CWindows_CUI_CXaml_CIDurationHelper;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgs __x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIElementFactory __x_ABI_CWindows_CUI_CXaml_CIElementFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgs __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgsFactory __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgsFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgs __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgsFactory __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgsFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayer __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayer;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics2 __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIEventTrigger __x_ABI_CWindows_CUI_CXaml_CIEventTrigger;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgsFactory __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgsFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2 __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement3 __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement6 __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement6;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement7 __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement7;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementFactory __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides2 __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementProtected7 __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementProtected7;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics2 __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4 __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics5 __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics5;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics6 __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics6;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplate __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplate;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplateFactory __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplateFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkView __x_ABI_CWindows_CUI_CXaml_CIFrameworkView;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkViewSource __x_ABI_CWindows_CUI_CXaml_CIFrameworkViewSource;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelper __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelper;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStatics __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIMediaFailedRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CIMediaFailedRoutedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIPointHelper __x_ABI_CWindows_CUI_CXaml_CIPointHelper;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIPointHelperStatics __x_ABI_CWindows_CUI_CXaml_CIPointHelperStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataFactory __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataStatics __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIPropertyPath __x_ABI_CWindows_CUI_CXaml_CIPropertyPath;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIPropertyPathFactory __x_ABI_CWindows_CUI_CXaml_CIPropertyPathFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIRectHelper __x_ABI_CWindows_CUI_CXaml_CIRectHelper;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIResourceDictionaryFactory __x_ABI_CWindows_CUI_CXaml_CIResourceDictionaryFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgsFactory __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgsFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIScalarTransition __x_ABI_CWindows_CUI_CXaml_CIScalarTransition;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIScalarTransitionFactory __x_ABI_CWindows_CUI_CXaml_CIScalarTransitionFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CISetter __x_ABI_CWindows_CUI_CXaml_CISetter;
typedef interface __x_ABI_CWindows_CUI_CXaml_CISetter2 __x_ABI_CWindows_CUI_CXaml_CISetter2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CISetterBase __x_ABI_CWindows_CUI_CXaml_CISetterBase;
typedef interface __x_ABI_CWindows_CUI_CXaml_CISetterBaseCollection __x_ABI_CWindows_CUI_CXaml_CISetterBaseCollection;
typedef interface __x_ABI_CWindows_CUI_CXaml_CISetterBaseFactory __x_ABI_CWindows_CUI_CXaml_CISetterBaseFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CISetterFactory __x_ABI_CWindows_CUI_CXaml_CISetterFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventArgs __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CISizeHelper __x_ABI_CWindows_CUI_CXaml_CISizeHelper;
typedef interface __x_ABI_CWindows_CUI_CXaml_CISizeHelperStatics __x_ABI_CWindows_CUI_CXaml_CISizeHelperStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIStateTrigger __x_ABI_CWindows_CUI_CXaml_CIStateTrigger;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseFactory __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseProtected __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseProtected;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIStateTriggerStatics __x_ABI_CWindows_CUI_CXaml_CIStateTriggerStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIStyle __x_ABI_CWindows_CUI_CXaml_CIStyle;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIStyleFactory __x_ABI_CWindows_CUI_CXaml_CIStyleFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPath __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPath;
typedef interface __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPathFactory __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPathFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIThicknessHelper __x_ABI_CWindows_CUI_CXaml_CIThicknessHelper;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIThicknessHelperStatics __x_ABI_CWindows_CUI_CXaml_CIThicknessHelperStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CITriggerAction __x_ABI_CWindows_CUI_CXaml_CITriggerAction;
typedef interface __x_ABI_CWindows_CUI_CXaml_CITriggerActionFactory __x_ABI_CWindows_CUI_CXaml_CITriggerActionFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CITriggerBase __x_ABI_CWindows_CUI_CXaml_CITriggerBase;
typedef interface __x_ABI_CWindows_CUI_CXaml_CITriggerBaseFactory __x_ABI_CWindows_CUI_CXaml_CITriggerBaseFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement10 __x_ABI_CWindows_CUI_CXaml_CIUIElement10;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement2 __x_ABI_CWindows_CUI_CXaml_CIUIElement2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement3 __x_ABI_CWindows_CUI_CXaml_CIUIElement3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement4 __x_ABI_CWindows_CUI_CXaml_CIUIElement4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement5 __x_ABI_CWindows_CUI_CXaml_CIUIElement5;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement7 __x_ABI_CWindows_CUI_CXaml_CIUIElement7;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement8 __x_ABI_CWindows_CUI_CXaml_CIUIElement8;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement9 __x_ABI_CWindows_CUI_CXaml_CIUIElement9;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementFactory __x_ABI_CWindows_CUI_CXaml_CIUIElementFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides7 __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides7;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides8 __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides8;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides9 __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides9;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics10 __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics10;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics2 __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics3 __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4 __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics6 __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics6;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics7 __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics7;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8 __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics9 __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics9;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollection __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollection;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollectionFactory __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollectionFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgs __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIVector3Transition __x_ABI_CWindows_CUI_CXaml_CIVector3Transition;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIVector3TransitionFactory __x_ABI_CWindows_CUI_CXaml_CIVector3TransitionFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIVisualState __x_ABI_CWindows_CUI_CXaml_CIVisualState;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIVisualState2 __x_ABI_CWindows_CUI_CXaml_CIVisualState2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgs __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIVisualStateManager __x_ABI_CWindows_CUI_CXaml_CIVisualStateManager;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerFactory __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerOverrides __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerOverrides;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerProtected __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerProtected;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStatics __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIVisualTransition __x_ABI_CWindows_CUI_CXaml_CIVisualTransition;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIVisualTransitionFactory __x_ABI_CWindows_CUI_CXaml_CIVisualTransitionFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIWindow __x_ABI_CWindows_CUI_CXaml_CIWindow;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIWindow2 __x_ABI_CWindows_CUI_CXaml_CIWindow2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIWindow3 __x_ABI_CWindows_CUI_CXaml_CIWindow3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIWindow4 __x_ABI_CWindows_CUI_CXaml_CIWindow4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgs __x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIWindowStatics __x_ABI_CWindows_CUI_CXaml_CIWindowStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIXamlRoot __x_ABI_CWindows_CUI_CXaml_CIXamlRoot;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIXamlRootChangedEventArgs __x_ABI_CWindows_CUI_CXaml_CIXamlRootChangedEventArgs;
typedef interface __FIIterator_1_Windows__CUI__CXaml__CDependencyObject __FIIterator_1_Windows__CUI__CXaml__CDependencyObject;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CDependencyObject;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CDependencyObjectVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CDependencyObject __FIIterable_1_Windows__CUI__CXaml__CDependencyObject;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CDependencyObject;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CDependencyObject **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CDependencyObjectVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIKeyValuePair_2_IInspectable_IInspectable __FIKeyValuePair_2_IInspectable_IInspectable;
EXTERN_C const IID IID___FIKeyValuePair_2_IInspectable_IInspectable;
typedef struct __FIKeyValuePair_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__out IInspectable * *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_IInspectable_IInspectableVtbl;
interface __FIKeyValuePair_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_IInspectable_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable;
typedef struct __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__out __FIKeyValuePair_2_IInspectable_IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_IInspectable_IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl;
interface __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable;
typedef struct __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl;
interface __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_IInspectable_IInspectable __FIMapView_2_IInspectable_IInspectable;
EXTERN_C const IID IID___FIMapView_2_IInspectable_IInspectable;
typedef struct __FIMapView_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This,
                   __RPC__in IInspectable * key,
                            __RPC__deref_out_opt IInspectable * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This, __RPC__in IInspectable * key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_IInspectable_IInspectable **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_IInspectable_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_IInspectable_IInspectableVtbl;
interface __FIMapView_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FIMapView_2_IInspectable_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) )
typedef interface __FIMap_2_IInspectable_IInspectable __FIMap_2_IInspectable_IInspectable;
EXTERN_C const IID IID___FIMap_2_IInspectable_IInspectable;
typedef struct __FIMap_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_IInspectable_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_IInspectable_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_IInspectable_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_IInspectable_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_IInspectable_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_IInspectable_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_IInspectable_IInspectable * This,
                   IInspectable * key,
                            __RPC__deref_out_opt IInspectable * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_IInspectable_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_IInspectable_IInspectable * This, IInspectable * key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_IInspectable_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_IInspectable_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_IInspectable_IInspectable * This,
                   IInspectable * key,
                   __RPC__in_opt IInspectable * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_IInspectable_IInspectable * This, IInspectable * key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_IInspectable_IInspectable * This);
    END_INTERFACE
} __FIMap_2_IInspectable_IInspectableVtbl;
interface __FIMap_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FIMap_2_IInspectable_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) )
    ( (This)->lpVtbl -> Remove(This,key) )
    ( (This)->lpVtbl -> Clear(This) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CResourceDictionary __FIIterator_1_Windows__CUI__CXaml__CResourceDictionary;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CResourceDictionary;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CResourceDictionaryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CResourceDictionary * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CResourceDictionary * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CResourceDictionary * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CResourceDictionary * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CResourceDictionary * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CResourceDictionary * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CResourceDictionary * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CResourceDictionary * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CResourceDictionary * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CResourceDictionary * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CResourceDictionaryVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CResourceDictionary
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CResourceDictionaryVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CResourceDictionary __FIIterable_1_Windows__CUI__CXaml__CResourceDictionary;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CResourceDictionary;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CResourceDictionaryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CResourceDictionary * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CResourceDictionary * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CResourceDictionary * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CResourceDictionary * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CResourceDictionary * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CResourceDictionary * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CResourceDictionary * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CResourceDictionary **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CResourceDictionaryVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CResourceDictionary
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CResourceDictionaryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CSetterBase __FIIterator_1_Windows__CUI__CXaml__CSetterBase;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CSetterBase;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CSetterBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CSetterBase * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CSetterBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CSetterBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CSetterBase * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CSetterBase * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CSetterBase * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CSetterBase * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CISetterBase * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CSetterBase * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CSetterBase * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CSetterBase * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CISetterBase * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CSetterBaseVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CSetterBase
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CSetterBaseVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CSetterBase __FIIterable_1_Windows__CUI__CXaml__CSetterBase;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CSetterBase;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CSetterBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CSetterBase * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CSetterBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CSetterBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CSetterBase * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CSetterBase * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CSetterBase * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CSetterBase * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CSetterBase **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CSetterBaseVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CSetterBase
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CSetterBaseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CStateTriggerBase __FIIterator_1_Windows__CUI__CXaml__CStateTriggerBase;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CStateTriggerBase;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CStateTriggerBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CStateTriggerBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CStateTriggerBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CStateTriggerBase * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CStateTriggerBase * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CStateTriggerBase * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CStateTriggerBase * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CStateTriggerBase * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CStateTriggerBaseVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CStateTriggerBase
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CStateTriggerBaseVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CStateTriggerBase __FIIterable_1_Windows__CUI__CXaml__CStateTriggerBase;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CStateTriggerBase;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CStateTriggerBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CStateTriggerBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CStateTriggerBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CStateTriggerBase * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CStateTriggerBase * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CStateTriggerBase * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CStateTriggerBase **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CStateTriggerBaseVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CStateTriggerBase
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CStateTriggerBaseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CTriggerAction __FIIterator_1_Windows__CUI__CXaml__CTriggerAction;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CTriggerAction;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CTriggerActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerAction * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerAction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerAction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerAction * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerAction * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerAction * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerAction * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CITriggerAction * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerAction * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerAction * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerAction * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CITriggerAction * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CTriggerActionVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CTriggerAction
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CTriggerActionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CTriggerAction __FIIterable_1_Windows__CUI__CXaml__CTriggerAction;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CTriggerAction;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CTriggerActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CTriggerAction * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CTriggerAction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CTriggerAction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CTriggerAction * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CTriggerAction * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CTriggerAction * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CTriggerAction * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CTriggerAction **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CTriggerActionVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CTriggerAction
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CTriggerActionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CTriggerBase __FIIterator_1_Windows__CUI__CXaml__CTriggerBase;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CTriggerBase;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CTriggerBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerBase * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerBase * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerBase * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerBase * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerBase * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CITriggerBase * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerBase * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerBase * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CTriggerBase * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CITriggerBase * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CTriggerBaseVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CTriggerBase
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CTriggerBaseVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CTriggerBase __FIIterable_1_Windows__CUI__CXaml__CTriggerBase;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CTriggerBase;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CTriggerBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CTriggerBase * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CTriggerBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CTriggerBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CTriggerBase * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CTriggerBase * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CTriggerBase * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CTriggerBase * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CTriggerBase **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CTriggerBaseVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CTriggerBase
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CTriggerBaseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CUIElement __FIIterator_1_Windows__CUI__CXaml__CUIElement;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CUIElement;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CUIElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CIUIElement * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIUIElement * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CUIElementVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CUIElement
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CUIElementVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CUIElement __FIIterable_1_Windows__CUI__CXaml__CUIElement;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CUIElement;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CUIElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CUIElement **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CUIElementVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CUIElement
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CUIElementVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CVisualState __FIIterator_1_Windows__CUI__CXaml__CVisualState;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CVisualState;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CVisualStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualState * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualState * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualState * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualState * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualState * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualState * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CIVisualState * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualState * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualState * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualState * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIVisualState * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CVisualStateVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CVisualState
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CVisualStateVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CVisualState __FIIterable_1_Windows__CUI__CXaml__CVisualState;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CVisualState;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CVisualStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualState * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualState * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualState * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualState * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualState * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualState * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CVisualState **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CVisualStateVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CVisualState
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CVisualStateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CVisualStateGroup __FIIterator_1_Windows__CUI__CXaml__CVisualStateGroup;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CVisualStateGroup;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CVisualStateGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualStateGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualStateGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualStateGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualStateGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualStateGroup * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualStateGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualStateGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CVisualStateGroupVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CVisualStateGroup
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CVisualStateGroupVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CVisualStateGroup __FIIterable_1_Windows__CUI__CXaml__CVisualStateGroup;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CVisualStateGroup;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CVisualStateGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualStateGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualStateGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualStateGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualStateGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualStateGroup * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CVisualStateGroup **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CVisualStateGroupVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CVisualStateGroup
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CVisualStateGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CVisualTransition __FIIterator_1_Windows__CUI__CXaml__CVisualTransition;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CVisualTransition;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CVisualTransitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualTransition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualTransition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualTransition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualTransition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualTransition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualTransition * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualTransition * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualTransition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualTransition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CVisualTransition * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CVisualTransitionVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CVisualTransition
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CVisualTransitionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CVisualTransition __FIIterable_1_Windows__CUI__CXaml__CVisualTransition;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CVisualTransition;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CVisualTransitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualTransition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualTransition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualTransition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualTransition * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualTransition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualTransition * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CVisualTransition * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CVisualTransition **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CVisualTransitionVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CVisualTransition
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CVisualTransitionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CDependencyObject;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                       __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CDependencyObjectVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CDependencyObject __FIVector_1_Windows__CUI__CXaml__CDependencyObject;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CDependencyObject;
typedef struct __FIVector_1_Windows__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CDependencyObjectVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
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
typedef interface __FVectorChangedEventHandler_1_Windows__CUI__CXaml__CDependencyObject __FVectorChangedEventHandler_1_Windows__CUI__CXaml__CDependencyObject;
EXTERN_C const IID IID___FVectorChangedEventHandler_1_Windows__CUI__CXaml__CDependencyObject;
typedef interface __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObject __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObject;
typedef struct __FVectorChangedEventHandler_1_Windows__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FVectorChangedEventHandler_1_Windows__CUI__CXaml__CDependencyObject * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FVectorChangedEventHandler_1_Windows__CUI__CXaml__CDependencyObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FVectorChangedEventHandler_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FVectorChangedEventHandler_1_Windows__CUI__CXaml__CDependencyObject * This,
                   __RPC__in_opt __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObject *sender,
                   __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs *e);
    END_INTERFACE
} __FVectorChangedEventHandler_1_Windows__CUI__CXaml__CDependencyObjectVtbl;
interface __FVectorChangedEventHandler_1_Windows__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FVectorChangedEventHandler_1_Windows__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObject __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObject;
EXTERN_C const IID IID___FIObservableVector_1_Windows__CUI__CXaml__CDependencyObject;
typedef struct __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *add_VectorChanged )(__RPC__in __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                   __RPC__in_opt __FVectorChangedEventHandler_1_Windows__CUI__CXaml__CDependencyObject *handler,
                            __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_VectorChanged )(__RPC__in __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObject * This, EventRegistrationToken token);
    END_INTERFACE
} __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObjectVtbl;
interface __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> add_VectorChanged(This,handler,token) )
    ( (This)->lpVtbl -> remove_VectorChanged(This,token) )
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CResourceDictionary __FIVectorView_1_Windows__CUI__CXaml__CResourceDictionary;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CResourceDictionary;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CResourceDictionaryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CResourceDictionary * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CResourceDictionary * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CResourceDictionary * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CResourceDictionary * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CResourceDictionary * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CResourceDictionary * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CResourceDictionary * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CResourceDictionary * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CResourceDictionary * This,
                       __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CResourceDictionary * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CResourceDictionaryVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CResourceDictionary
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CResourceDictionaryVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CSetterBase __FIVectorView_1_Windows__CUI__CXaml__CSetterBase;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CSetterBase;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CSetterBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CSetterBase * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CSetterBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CSetterBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CSetterBase * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CSetterBase * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CSetterBase * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CSetterBase * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CISetterBase * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CSetterBase * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CSetterBase * This,
                       __x_ABI_CWindows_CUI_CXaml_CISetterBase * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CSetterBase * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CISetterBase * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CSetterBaseVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CSetterBase
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CSetterBaseVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBase __FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBase;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBase;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                       __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBaseVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBase
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBaseVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CTriggerAction __FIVectorView_1_Windows__CUI__CXaml__CTriggerAction;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CTriggerAction;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CTriggerActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerAction * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerAction * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerAction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerAction * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerAction * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerAction * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerAction * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CITriggerAction * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerAction * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerAction * This,
                       __x_ABI_CWindows_CUI_CXaml_CITriggerAction * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerAction * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CITriggerAction * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CTriggerActionVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CTriggerAction
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CTriggerActionVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CTriggerBase __FIVectorView_1_Windows__CUI__CXaml__CTriggerBase;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CTriggerBase;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CTriggerBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerBase * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerBase * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerBase * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerBase * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerBase * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CITriggerBase * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerBase * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerBase * This,
                       __x_ABI_CWindows_CUI_CXaml_CITriggerBase * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CTriggerBase * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CITriggerBase * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CTriggerBaseVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CTriggerBase
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CTriggerBaseVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CUIElement __FIVectorView_1_Windows__CUI__CXaml__CUIElement;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CUIElement;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CUIElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CIUIElement * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                       __x_ABI_CWindows_CUI_CXaml_CIUIElement * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIUIElement * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CUIElementVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CUIElement
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CUIElementVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CVisualState __FIVectorView_1_Windows__CUI__CXaml__CVisualState;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CVisualState;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CVisualStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualState * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualState * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualState * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualState * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualState * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualState * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualState * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CIVisualState * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualState * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualState * This,
                       __x_ABI_CWindows_CUI_CXaml_CIVisualState * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualState * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIVisualState * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CVisualStateVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CVisualState
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CVisualStateVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroup __FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroup;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroup;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                       __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroupVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroup
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroupVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CVisualTransition __FIVectorView_1_Windows__CUI__CXaml__CVisualTransition;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CVisualTransition;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CVisualTransitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualTransition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualTransition * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualTransition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualTransition * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualTransition * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualTransition * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualTransition * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualTransition * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualTransition * This,
                       __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CVisualTransition * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CVisualTransitionVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CVisualTransition
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CVisualTransitionVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CResourceDictionary __FIVector_1_Windows__CUI__CXaml__CResourceDictionary;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CResourceDictionary;
typedef struct __FIVector_1_Windows__CUI__CXaml__CResourceDictionaryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CResourceDictionary **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CResourceDictionaryVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CResourceDictionary
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CResourceDictionaryVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CSetterBase __FIVector_1_Windows__CUI__CXaml__CSetterBase;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CSetterBase;
typedef struct __FIVector_1_Windows__CUI__CXaml__CSetterBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CISetterBase * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CISetterBase * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CSetterBase **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBase * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBase * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBase * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBase * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CISetterBase * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CSetterBase * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CISetterBase * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CSetterBaseVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CSetterBase
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CSetterBaseVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CStateTriggerBase;
typedef struct __FIVector_1_Windows__CUI__CXaml__CStateTriggerBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CStateTriggerBase **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CStateTriggerBaseVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CStateTriggerBaseVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CTriggerAction __FIVector_1_Windows__CUI__CXaml__CTriggerAction;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CTriggerAction;
typedef struct __FIVector_1_Windows__CUI__CXaml__CTriggerActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CITriggerAction * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CITriggerAction * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CTriggerAction **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerAction * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerAction * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerAction * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerAction * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CITriggerAction * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerAction * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CITriggerAction * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CTriggerActionVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CTriggerAction
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CTriggerActionVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CTriggerBase __FIVector_1_Windows__CUI__CXaml__CTriggerBase;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CTriggerBase;
typedef struct __FIVector_1_Windows__CUI__CXaml__CTriggerBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CITriggerBase * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CITriggerBase * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CTriggerBase **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerBase * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerBase * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerBase * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerBase * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CITriggerBase * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CTriggerBase * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CITriggerBase * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CTriggerBaseVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CTriggerBase
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CTriggerBaseVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CUIElement __FIVector_1_Windows__CUI__CXaml__CUIElement;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CUIElement;
typedef struct __FIVector_1_Windows__CUI__CXaml__CUIElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CUIElement **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIUIElement * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CIUIElement * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CUIElementVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CUIElement
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CUIElementVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CVisualState __FIVector_1_Windows__CUI__CXaml__CVisualState;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CVisualState;
typedef struct __FIVector_1_Windows__CUI__CXaml__CVisualStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIVisualState * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIVisualState * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CVisualState **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualState * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualState * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualState * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualState * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIVisualState * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualState * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CIVisualState * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CVisualStateVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CVisualState
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CVisualStateVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CVisualStateGroup;
typedef struct __FIVector_1_Windows__CUI__CXaml__CVisualStateGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CVisualStateGroup **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CVisualStateGroupVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CVisualStateGroupVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CVisualTransition __FIVector_1_Windows__CUI__CXaml__CVisualTransition;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CVisualTransition;
typedef struct __FIVector_1_Windows__CUI__CXaml__CVisualTransitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CVisualTransition **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CVisualTransition * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CVisualTransitionVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CVisualTransition
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CVisualTransitionVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CUI_CXaml_CThickness;
typedef interface __FIReference_1_Windows__CUI__CXaml__CThickness __FIReference_1_Windows__CUI__CXaml__CThickness;
EXTERN_C const IID IID___FIReference_1_Windows__CUI__CXaml__CThickness;
typedef struct __FIReference_1_Windows__CUI__CXaml__CThicknessVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CUI__CXaml__CThickness * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CUI__CXaml__CThickness * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CUI__CXaml__CThickness * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CUI__CXaml__CThickness * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CUI__CXaml__CThickness * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CUI__CXaml__CThickness * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CUI__CXaml__CThickness * This, __RPC__out struct __x_ABI_CWindows_CUI_CXaml_CThickness *value);
    END_INTERFACE
} __FIReference_1_Windows__CUI__CXaml__CThicknessVtbl;
interface __FIReference_1_Windows__CUI__CXaml__CThickness
{
    CONST_VTBL struct __FIReference_1_Windows__CUI__CXaml__CThicknessVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CISearchBox __x_ABI_CWindows_CUI_CXaml_CControls_CISearchBox;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CSearchBox_Windows__CUI__CXaml__CRoutedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CSearchBox_Windows__CUI__CXaml__CRoutedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CSearchBox_Windows__CUI__CXaml__CRoutedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CSearchBox_Windows__CUI__CXaml__CRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CSearchBox_Windows__CUI__CXaml__CRoutedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CSearchBox_Windows__CUI__CXaml__CRoutedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CSearchBox_Windows__CUI__CXaml__CRoutedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CSearchBox_Windows__CUI__CXaml__CRoutedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CISearchBox * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CSearchBox_Windows__CUI__CXaml__CRoutedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CSearchBox_Windows__CUI__CXaml__CRoutedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CSearchBox_Windows__CUI__CXaml__CRoutedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_IInspectable __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CDataContextChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CDataContextChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CDataContextChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CDataContextChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CDataContextChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CDataContextChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CDataContextChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CDataContextChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDataContextChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CDataContextChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CDataContextChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CDataContextChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CEffectiveViewportChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CEffectiveViewportChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CEffectiveViewportChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CEffectiveViewportChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CEffectiveViewportChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CEffectiveViewportChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CEffectiveViewportChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CEffectiveViewportChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CEffectiveViewportChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CEffectiveViewportChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CEffectiveViewportChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CBringIntoViewRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CBringIntoViewRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CBringIntoViewRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CBringIntoViewRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CBringIntoViewRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CBringIntoViewRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CBringIntoViewRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CBringIntoViewRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CBringIntoViewRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CBringIntoViewRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CBringIntoViewRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDragStartingEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDragStartingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDragStartingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDragStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDragStartingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDragStartingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDragStartingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDragStartingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDragStartingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDragStartingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDragStartingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDropCompletedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDropCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDropCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDropCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDropCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDropCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDropCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDropCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDropCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDropCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDropCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDropCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CRoutedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CRoutedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CRoutedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CRoutedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CRoutedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CRoutedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CRoutedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CRoutedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CRoutedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CRoutedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CXamlRoot_Windows__CUI__CXaml__CXamlRootChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CXamlRoot_Windows__CUI__CXaml__CXamlRootChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CXamlRoot_Windows__CUI__CXaml__CXamlRootChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CXamlRoot_Windows__CUI__CXaml__CXamlRootChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CXamlRoot_Windows__CUI__CXaml__CXamlRootChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CXamlRoot_Windows__CUI__CXaml__CXamlRootChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CXamlRoot_Windows__CUI__CXaml__CXamlRootChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CXamlRoot_Windows__CUI__CXaml__CXamlRootChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIXamlRootChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CXamlRoot_Windows__CUI__CXaml__CXamlRootChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CXamlRoot_Windows__CUI__CXaml__CXamlRootChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CXamlRoot_Windows__CUI__CXaml__CXamlRootChangedEventArgsVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CUI_CColor;
typedef interface __FIReference_1_Windows__CUI__CColor __FIReference_1_Windows__CUI__CColor;
EXTERN_C const IID IID___FIReference_1_Windows__CUI__CColor;
typedef struct __FIReference_1_Windows__CUI__CColorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CUI__CColor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CUI__CColor * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CUI__CColor * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CUI__CColor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CUI__CColor * This, __RPC__out struct __x_ABI_CWindows_CUI_CColor *value);
    END_INTERFACE
} __FIReference_1_Windows__CUI__CColorVtbl;
interface __FIReference_1_Windows__CUI__CColor
{
    CONST_VTBL struct __FIReference_1_Windows__CUI__CColorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer;
typedef interface __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CInput__CPointer;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CInput__CPointerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CInput__CPointerVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CInput__CPointerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CInput__CPointer;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CInput__CPointerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CInput__CPointerVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CInput__CPointerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                       __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointerVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointerVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight;
typedef interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLight __FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLight;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLight;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLightVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLight * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLight * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLight * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLight * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLight * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLight * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLight * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLightVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLight
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLightVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CXamlLight __FIIterable_1_Windows__CUI__CXaml__CMedia__CXamlLight;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CMedia__CXamlLight;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CXamlLightVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CXamlLight * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CXamlLight * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CXamlLight * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CXamlLight * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CXamlLight * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CMedia__CXamlLight **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CMedia__CXamlLightVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CXamlLight
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CXamlLightVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLight __FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLight;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLight;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLightVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLight * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLight * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                       __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLightVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLight
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLightVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight;
typedef struct __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLightVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CMedia__CXamlLight **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLightVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLightVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator;
typedef interface __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                       __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;
typedef struct __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
struct __x_ABI_CWindows_CFoundation_CPoint;
typedef interface __FIIterator_1_Windows__CFoundation__CPoint __FIIterator_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CPoint;
typedef struct __FIIterator_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CPoint *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CFoundation_CPoint *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CFoundation__CPointVtbl;
interface __FIIterator_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CPointVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CFoundation__CPoint __FIIterable_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CPoint;
typedef struct __FIIterable_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CPoint **first);
    END_INTERFACE
} __FIIterable_1_Windows__CFoundation__CPointVtbl;
interface __FIIterable_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CPointVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1___FIIterable_1_Windows__CFoundation__CPoint __FIIterator_1___FIIterable_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIIterator_1___FIIterable_1_Windows__CFoundation__CPoint;
typedef struct __FIIterator_1___FIIterable_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIIterable_1_Windows__CFoundation__CPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIIterable_1_Windows__CFoundation__CPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIIterable_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIIterable_1_Windows__CFoundation__CPoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__out __FIIterable_1_Windows__CFoundation__CPoint * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIIterable_1_Windows__CFoundation__CPoint * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIIterable_1_Windows__CFoundation__CPoint * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIIterable_1_Windows__CFoundation__CPointVtbl;
interface __FIIterator_1___FIIterable_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIIterator_1___FIIterable_1_Windows__CFoundation__CPointVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIIterable_1_Windows__CFoundation__CPoint __FIIterable_1___FIIterable_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIIterable_1___FIIterable_1_Windows__CFoundation__CPoint;
typedef struct __FIIterable_1___FIIterable_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIIterable_1_Windows__CFoundation__CPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIIterable_1_Windows__CFoundation__CPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIIterable_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIIterable_1_Windows__CFoundation__CPoint * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt __FIIterator_1___FIIterable_1_Windows__CFoundation__CPoint **first);
    END_INTERFACE
} __FIIterable_1___FIIterable_1_Windows__CFoundation__CPointVtbl;
interface __FIIterable_1___FIIterable_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIIterable_1___FIIterable_1_Windows__CFoundation__CPointVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSource __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSource;
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage;
typedef enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation;
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView;
typedef enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CDragDropModifiers __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CDragDropModifiers;
typedef interface __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositor __x_ABI_CWindows_CUI_CComposition_CICompositor;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIAnimationObject __x_ABI_CWindows_CUI_CComposition_CIAnimationObject;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVisualElement __x_ABI_CWindows_CUI_CComposition_CIVisualElement;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreDispatcher __x_ABI_CWindows_CUI_CCore_CICoreDispatcher;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow __x_ABI_CWindows_CUI_CCore_CICoreWindow;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerPoint __x_ABI_CWindows_CUI_CInput_CIPointerPoint;
typedef interface __x_ABI_CWindows_CUI_CIUIContext __x_ABI_CWindows_CUI_CIUIContext;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CIAutomationPeer __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CIAutomationPeer;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CIContainerContentChangingEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CIContainerContentChangingEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CIControl __x_ABI_CWindows_CUI_CXaml_CControls_CIControl;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CComponentResourceLocation __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CComponentResourceLocation;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode __x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CKeyboardAcceleratorPlacementMode __x_ABI_CWindows_CUI_CXaml_CInput_CKeyboardAcceleratorPlacementMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CKeyboardNavigationMode __x_ABI_CWindows_CUI_CXaml_CInput_CKeyboardNavigationMode;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CManipulationModes __x_ABI_CWindows_CUI_CXaml_CInput_CManipulationModes;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusKeyboardNavigationMode __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusKeyboardNavigationMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy;
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CIEasingFunctionBase __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CIEasingFunctionBase;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CIStoryboard __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CIStoryboard;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheMode __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CElementCompositeMode __x_ABI_CWindows_CUI_CXaml_CMedia_CElementCompositeMode;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3D __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3D;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjection __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjection;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometry __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometry;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadow __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadow;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform;
typedef enum __x_ABI_CWindows_CUI_CXaml_CApplicationHighContrastAdjustment __x_ABI_CWindows_CUI_CXaml_CApplicationHighContrastAdjustment;
typedef enum __x_ABI_CWindows_CUI_CXaml_CApplicationRequiresPointerMode __x_ABI_CWindows_CUI_CXaml_CApplicationRequiresPointerMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CApplicationTheme __x_ABI_CWindows_CUI_CXaml_CApplicationTheme;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomationTextAttributesEnum __x_ABI_CWindows_CUI_CXaml_CAutomationTextAttributesEnum;
typedef enum __x_ABI_CWindows_CUI_CXaml_CDurationType __x_ABI_CWindows_CUI_CXaml_CDurationType;
typedef enum __x_ABI_CWindows_CUI_CXaml_CElementHighContrastAdjustment __x_ABI_CWindows_CUI_CXaml_CElementHighContrastAdjustment;
typedef enum __x_ABI_CWindows_CUI_CXaml_CElementSoundKind __x_ABI_CWindows_CUI_CXaml_CElementSoundKind;
typedef enum __x_ABI_CWindows_CUI_CXaml_CElementSoundMode __x_ABI_CWindows_CUI_CXaml_CElementSoundMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CElementSoundPlayerState __x_ABI_CWindows_CUI_CXaml_CElementSoundPlayerState;
typedef enum __x_ABI_CWindows_CUI_CXaml_CElementSpatialAudioMode __x_ABI_CWindows_CUI_CXaml_CElementSpatialAudioMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CElementTheme __x_ABI_CWindows_CUI_CXaml_CElementTheme;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFlowDirection __x_ABI_CWindows_CUI_CXaml_CFlowDirection;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFocusState __x_ABI_CWindows_CUI_CXaml_CFocusState;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFocusVisualKind __x_ABI_CWindows_CUI_CXaml_CFocusVisualKind;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFontCapitals __x_ABI_CWindows_CUI_CXaml_CFontCapitals;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFontEastAsianLanguage __x_ABI_CWindows_CUI_CXaml_CFontEastAsianLanguage;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFontEastAsianWidths __x_ABI_CWindows_CUI_CXaml_CFontEastAsianWidths;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFontFraction __x_ABI_CWindows_CUI_CXaml_CFontFraction;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFontNumeralAlignment __x_ABI_CWindows_CUI_CXaml_CFontNumeralAlignment;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFontNumeralStyle __x_ABI_CWindows_CUI_CXaml_CFontNumeralStyle;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFontVariants __x_ABI_CWindows_CUI_CXaml_CFontVariants;
typedef enum __x_ABI_CWindows_CUI_CXaml_CGridUnitType __x_ABI_CWindows_CUI_CXaml_CGridUnitType;
typedef enum __x_ABI_CWindows_CUI_CXaml_CHorizontalAlignment __x_ABI_CWindows_CUI_CXaml_CHorizontalAlignment;
typedef enum __x_ABI_CWindows_CUI_CXaml_CLineStackingStrategy __x_ABI_CWindows_CUI_CXaml_CLineStackingStrategy;
typedef enum __x_ABI_CWindows_CUI_CXaml_COpticalMarginAlignment __x_ABI_CWindows_CUI_CXaml_COpticalMarginAlignment;
typedef enum __x_ABI_CWindows_CUI_CXaml_CTextAlignment __x_ABI_CWindows_CUI_CXaml_CTextAlignment;
typedef enum __x_ABI_CWindows_CUI_CXaml_CTextLineBounds __x_ABI_CWindows_CUI_CXaml_CTextLineBounds;
typedef enum __x_ABI_CWindows_CUI_CXaml_CTextReadingOrder __x_ABI_CWindows_CUI_CXaml_CTextReadingOrder;
typedef enum __x_ABI_CWindows_CUI_CXaml_CTextTrimming __x_ABI_CWindows_CUI_CXaml_CTextTrimming;
typedef enum __x_ABI_CWindows_CUI_CXaml_CTextWrapping __x_ABI_CWindows_CUI_CXaml_CTextWrapping;
typedef enum __x_ABI_CWindows_CUI_CXaml_CVector3TransitionComponents __x_ABI_CWindows_CUI_CXaml_CVector3TransitionComponents;
typedef enum __x_ABI_CWindows_CUI_CXaml_CVerticalAlignment __x_ABI_CWindows_CUI_CXaml_CVerticalAlignment;
typedef enum __x_ABI_CWindows_CUI_CXaml_CVisibility __x_ABI_CWindows_CUI_CXaml_CVisibility;
typedef struct __x_ABI_CWindows_CUI_CXaml_CCornerRadius __x_ABI_CWindows_CUI_CXaml_CCornerRadius;
typedef struct __x_ABI_CWindows_CUI_CXaml_CDuration __x_ABI_CWindows_CUI_CXaml_CDuration;
typedef struct __x_ABI_CWindows_CUI_CXaml_CGridLength __x_ABI_CWindows_CUI_CXaml_CGridLength;
typedef struct __x_ABI_CWindows_CUI_CXaml_CThickness __x_ABI_CWindows_CUI_CXaml_CThickness;
enum __x_ABI_CWindows_CUI_CXaml_CApplicationHighContrastAdjustment
{
    ApplicationHighContrastAdjustment_None = 0,
    ApplicationHighContrastAdjustment_Auto = 0xffffffff,
};
enum __x_ABI_CWindows_CUI_CXaml_CApplicationRequiresPointerMode
{
    ApplicationRequiresPointerMode_Auto = 0,
    ApplicationRequiresPointerMode_WhenRequested = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CApplicationTheme
{
    ApplicationTheme_Light = 0,
    ApplicationTheme_Dark = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomationTextAttributesEnum
{
    AutomationTextAttributesEnum_AnimationStyleAttribute = 40000,
    AutomationTextAttributesEnum_BackgroundColorAttribute = 40001,
    AutomationTextAttributesEnum_BulletStyleAttribute = 40002,
    AutomationTextAttributesEnum_CapStyleAttribute = 40003,
    AutomationTextAttributesEnum_CultureAttribute = 40004,
    AutomationTextAttributesEnum_FontNameAttribute = 40005,
    AutomationTextAttributesEnum_FontSizeAttribute = 40006,
    AutomationTextAttributesEnum_FontWeightAttribute = 40007,
    AutomationTextAttributesEnum_ForegroundColorAttribute = 40008,
    AutomationTextAttributesEnum_HorizontalTextAlignmentAttribute = 40009,
    AutomationTextAttributesEnum_IndentationFirstLineAttribute = 40010,
    AutomationTextAttributesEnum_IndentationLeadingAttribute = 40011,
    AutomationTextAttributesEnum_IndentationTrailingAttribute = 40012,
    AutomationTextAttributesEnum_IsHiddenAttribute = 40013,
    AutomationTextAttributesEnum_IsItalicAttribute = 40014,
    AutomationTextAttributesEnum_IsReadOnlyAttribute = 40015,
    AutomationTextAttributesEnum_IsSubscriptAttribute = 40016,
    AutomationTextAttributesEnum_IsSuperscriptAttribute = 40017,
    AutomationTextAttributesEnum_MarginBottomAttribute = 40018,
    AutomationTextAttributesEnum_MarginLeadingAttribute = 40019,
    AutomationTextAttributesEnum_MarginTopAttribute = 40020,
    AutomationTextAttributesEnum_MarginTrailingAttribute = 40021,
    AutomationTextAttributesEnum_OutlineStylesAttribute = 40022,
    AutomationTextAttributesEnum_OverlineColorAttribute = 40023,
    AutomationTextAttributesEnum_OverlineStyleAttribute = 40024,
    AutomationTextAttributesEnum_StrikethroughColorAttribute = 40025,
    AutomationTextAttributesEnum_StrikethroughStyleAttribute = 40026,
    AutomationTextAttributesEnum_TabsAttribute = 40027,
    AutomationTextAttributesEnum_TextFlowDirectionsAttribute = 40028,
    AutomationTextAttributesEnum_UnderlineColorAttribute = 40029,
    AutomationTextAttributesEnum_UnderlineStyleAttribute = 40030,
    AutomationTextAttributesEnum_AnnotationTypesAttribute = 40031,
    AutomationTextAttributesEnum_AnnotationObjectsAttribute = 40032,
    AutomationTextAttributesEnum_StyleNameAttribute = 40033,
    AutomationTextAttributesEnum_StyleIdAttribute = 40034,
    AutomationTextAttributesEnum_LinkAttribute = 40035,
    AutomationTextAttributesEnum_IsActiveAttribute = 40036,
    AutomationTextAttributesEnum_SelectionActiveEndAttribute = 40037,
    AutomationTextAttributesEnum_CaretPositionAttribute = 40038,
    AutomationTextAttributesEnum_CaretBidiModeAttribute = 40039,
};
enum __x_ABI_CWindows_CUI_CXaml_CDurationType
{
    DurationType_Automatic = 0,
    DurationType_TimeSpan = 1,
    DurationType_Forever = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CElementHighContrastAdjustment
{
    ElementHighContrastAdjustment_None = 0,
    ElementHighContrastAdjustment_Application = 0x80000000,
    ElementHighContrastAdjustment_Auto = 0xffffffff,
};
enum __x_ABI_CWindows_CUI_CXaml_CElementSoundKind
{
    ElementSoundKind_Focus = 0,
    ElementSoundKind_Invoke = 1,
    ElementSoundKind_Show = 2,
    ElementSoundKind_Hide = 3,
    ElementSoundKind_MovePrevious = 4,
    ElementSoundKind_MoveNext = 5,
    ElementSoundKind_GoBack = 6,
};
enum __x_ABI_CWindows_CUI_CXaml_CElementSoundMode
{
    ElementSoundMode_Default = 0,
    ElementSoundMode_FocusOnly = 1,
    ElementSoundMode_Off = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CElementSoundPlayerState
{
    ElementSoundPlayerState_Auto = 0,
    ElementSoundPlayerState_Off = 1,
    ElementSoundPlayerState_On = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CElementSpatialAudioMode
{
    ElementSpatialAudioMode_Auto = 0,
    ElementSpatialAudioMode_Off = 1,
    ElementSpatialAudioMode_On = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CElementTheme
{
    ElementTheme_Default = 0,
    ElementTheme_Light = 1,
    ElementTheme_Dark = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CFlowDirection
{
    FlowDirection_LeftToRight = 0,
    FlowDirection_RightToLeft = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CFocusState
{
    FocusState_Unfocused = 0,
    FocusState_Pointer = 1,
    FocusState_Keyboard = 2,
    FocusState_Programmatic = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CFocusVisualKind
{
    FocusVisualKind_DottedLine = 0,
    FocusVisualKind_HighVisibility = 1,
    FocusVisualKind_Reveal = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CFontCapitals
{
    FontCapitals_Normal = 0,
    FontCapitals_AllSmallCaps = 1,
    FontCapitals_SmallCaps = 2,
    FontCapitals_AllPetiteCaps = 3,
    FontCapitals_PetiteCaps = 4,
    FontCapitals_Unicase = 5,
    FontCapitals_Titling = 6,
};
enum __x_ABI_CWindows_CUI_CXaml_CFontEastAsianLanguage
{
    FontEastAsianLanguage_Normal = 0,
    FontEastAsianLanguage_HojoKanji = 1,
    FontEastAsianLanguage_Jis04 = 2,
    FontEastAsianLanguage_Jis78 = 3,
    FontEastAsianLanguage_Jis83 = 4,
    FontEastAsianLanguage_Jis90 = 5,
    FontEastAsianLanguage_NlcKanji = 6,
    FontEastAsianLanguage_Simplified = 7,
    FontEastAsianLanguage_Traditional = 8,
    FontEastAsianLanguage_TraditionalNames = 9,
};
enum __x_ABI_CWindows_CUI_CXaml_CFontEastAsianWidths
{
    FontEastAsianWidths_Normal = 0,
    FontEastAsianWidths_Full = 1,
    FontEastAsianWidths_Half = 2,
    FontEastAsianWidths_Proportional = 3,
    FontEastAsianWidths_Quarter = 4,
    FontEastAsianWidths_Third = 5,
};
enum __x_ABI_CWindows_CUI_CXaml_CFontFraction
{
    FontFraction_Normal = 0,
    FontFraction_Stacked = 1,
    FontFraction_Slashed = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CFontNumeralAlignment
{
    FontNumeralAlignment_Normal = 0,
    FontNumeralAlignment_Proportional = 1,
    FontNumeralAlignment_Tabular = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CFontNumeralStyle
{
    FontNumeralStyle_Normal = 0,
    FontNumeralStyle_Lining = 1,
    FontNumeralStyle_OldStyle = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CFontVariants
{
    FontVariants_Normal = 0,
    FontVariants_Superscript = 1,
    FontVariants_Subscript = 2,
    FontVariants_Ordinal = 3,
    FontVariants_Inferior = 4,
    FontVariants_Ruby = 5,
};
enum __x_ABI_CWindows_CUI_CXaml_CGridUnitType
{
    GridUnitType_Auto = 0,
    GridUnitType_Pixel = 1,
    GridUnitType_Star = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CHorizontalAlignment
{
    HorizontalAlignment_Left = 0,
    HorizontalAlignment_Center = 1,
    HorizontalAlignment_Right = 2,
    HorizontalAlignment_Stretch = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CLineStackingStrategy
{
    LineStackingStrategy_MaxHeight = 0,
    LineStackingStrategy_BlockLineHeight = 1,
    LineStackingStrategy_BaselineToBaseline = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_COpticalMarginAlignment
{
    OpticalMarginAlignment_None = 0,
    OpticalMarginAlignment_TrimSideBearings = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CTextAlignment
{
    TextAlignment_Center = 0,
    TextAlignment_Left = 1,
    TextAlignment_Start = 1,
    TextAlignment_Right = 2,
    TextAlignment_End = 2,
    TextAlignment_Justify = 3,
    TextAlignment_DetectFromContent = 4,
};
enum __x_ABI_CWindows_CUI_CXaml_CTextLineBounds
{
    TextLineBounds_Full = 0,
    TextLineBounds_TrimToCapHeight = 1,
    TextLineBounds_TrimToBaseline = 2,
    TextLineBounds_Tight = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CTextReadingOrder
{
    TextReadingOrder_Default
    DEPRECATEDENUMERATOR("Consider using UseFlowDirection, which is an improved version of Default. For more info, see MSDN.")
     = 0,
    TextReadingOrder_UseFlowDirection = 0,
    TextReadingOrder_DetectFromContent = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CTextTrimming
{
    TextTrimming_None = 0,
    TextTrimming_CharacterEllipsis = 1,
    TextTrimming_WordEllipsis = 2,
    TextTrimming_Clip = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CTextWrapping
{
    TextWrapping_NoWrap = 1,
    TextWrapping_Wrap = 2,
    TextWrapping_WrapWholeWords = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CVector3TransitionComponents
{
    Vector3TransitionComponents_X = 0x1,
    Vector3TransitionComponents_Y = 0x2,
    Vector3TransitionComponents_Z = 0x4,
};
enum __x_ABI_CWindows_CUI_CXaml_CVerticalAlignment
{
    VerticalAlignment_Top = 0,
    VerticalAlignment_Center = 1,
    VerticalAlignment_Bottom = 2,
    VerticalAlignment_Stretch = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CVisibility
{
    Visibility_Visible = 0,
    Visibility_Collapsed = 1,
};
struct __x_ABI_CWindows_CUI_CXaml_CCornerRadius
{
    DOUBLE TopLeft;
    DOUBLE TopRight;
    DOUBLE BottomRight;
    DOUBLE BottomLeft;
};
struct __x_ABI_CWindows_CUI_CXaml_CDuration
{
    __x_ABI_CWindows_CFoundation_CTimeSpan TimeSpan;
    __x_ABI_CWindows_CUI_CXaml_CDurationType Type;
};
struct __x_ABI_CWindows_CUI_CXaml_CGridLength
{
    DOUBLE Value;
    __x_ABI_CWindows_CUI_CXaml_CGridUnitType GridUnitType;
};
struct __x_ABI_CWindows_CUI_CXaml_CThickness
{
    DOUBLE Left;
    DOUBLE Top;
    DOUBLE Right;
    DOUBLE Bottom;
};
typedef struct __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallback * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallback * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallback * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallback * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackParams * p
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallback
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,p) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallback;
typedef struct __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CICreateDefaultValueCallbackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CICreateDefaultValueCallback * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CICreateDefaultValueCallback * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CICreateDefaultValueCallback * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CICreateDefaultValueCallback * This,
                           __RPC__deref_out_opt IInspectable * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CICreateDefaultValueCallbackVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CICreateDefaultValueCallback
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CICreateDefaultValueCallbackVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CICreateDefaultValueCallback;
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedCallbackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedCallback * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedCallback * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedCallback * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedCallback * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * dp
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedCallbackVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedCallback
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedCallbackVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,dp) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedCallback;
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDragEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CIDragEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDragEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDragEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDragEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDragEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CIEnteredBackgroundEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIEnteredBackgroundEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIEnteredBackgroundEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIEnteredBackgroundEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CIEnteredBackgroundEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIEnteredBackgroundEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIEnteredBackgroundEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIEnteredBackgroundEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIEnteredBackgroundEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CILeavingBackgroundEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CILeavingBackgroundEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CILeavingBackgroundEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CILeavingBackgroundEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CILeavingBackgroundEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CILeavingBackgroundEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CILeavingBackgroundEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CILeavingBackgroundEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CILeavingBackgroundEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CIPropertyChangedCallbackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyChangedCallback * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyChangedCallback * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyChangedCallback * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CIPropertyChangedCallback * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * d,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIPropertyChangedCallbackVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIPropertyChangedCallback
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIPropertyChangedCallbackVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,d,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIPropertyChangedCallback;
typedef struct __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CISizeChangedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CISuspendingEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISuspendingEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISuspendingEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISuspendingEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CISuspendingEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CISuspendingEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CISuspendingEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CISuspendingEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CISuspendingEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CIWindowActivatedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowActivatedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowActivatedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowActivatedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CIWindowActivatedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIWindowActivatedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIWindowActivatedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIWindowActivatedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIWindowActivatedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CIWindowClosedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowClosedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowClosedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowClosedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CIWindowClosedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIWindowClosedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIWindowClosedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIWindowClosedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIWindowClosedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CIWindowSizeChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowSizeChangedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowSizeChangedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowSizeChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CIWindowSizeChangedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIWindowSizeChangedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIWindowSizeChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIWindowSizeChangedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIWindowSizeChangedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CIWindowVisibilityChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowVisibilityChangedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowVisibilityChangedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowVisibilityChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CIWindowVisibilityChangedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIWindowVisibilityChangedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIWindowVisibilityChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIWindowVisibilityChangedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIWindowVisibilityChangedEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IAdaptiveTrigger[] = L"Windows.UI.Xaml.IAdaptiveTrigger";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MinWindowWidth )(
        __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTrigger * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinWindowWidth )(
        __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTrigger * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinWindowHeight )(
        __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTrigger * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinWindowHeight )(
        __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTrigger * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MinWindowWidth(This,value) )
    ( (This)->lpVtbl->put_MinWindowWidth(This,value) )
    ( (This)->lpVtbl->get_MinWindowHeight(This,value) )
    ( (This)->lpVtbl->put_MinWindowHeight(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIAdaptiveTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IAdaptiveTriggerFactory[] = L"Windows.UI.Xaml.IAdaptiveTriggerFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTrigger * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IAdaptiveTriggerStatics[] = L"Windows.UI.Xaml.IAdaptiveTriggerStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MinWindowWidthProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinWindowHeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MinWindowWidthProperty(This,value) )
    ( (This)->lpVtbl->get_MinWindowHeightProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIAdaptiveTriggerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IApplication[] = L"Windows.UI.Xaml.IApplication";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIApplicationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Resources )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Resources )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DebugSettings )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDebugSettings * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequestedTheme )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CApplicationTheme * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RequestedTheme )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication * This,
                  __x_ABI_CWindows_CUI_CXaml_CApplicationTheme value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UnhandledException )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UnhandledException )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Suspending )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CISuspendingEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Suspending )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Resuming )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Resuming )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Exit )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIApplicationVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIApplication
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIApplicationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Resources(This,value) )
    ( (This)->lpVtbl->put_Resources(This,value) )
    ( (This)->lpVtbl->get_DebugSettings(This,value) )
    ( (This)->lpVtbl->get_RequestedTheme(This,value) )
    ( (This)->lpVtbl->put_RequestedTheme(This,value) )
    ( (This)->lpVtbl->add_UnhandledException(This,handler,token) )
    ( (This)->lpVtbl->remove_UnhandledException(This,token) )
    ( (This)->lpVtbl->add_Suspending(This,handler,token) )
    ( (This)->lpVtbl->remove_Suspending(This,token) )
    ( (This)->lpVtbl->add_Resuming(This,handler,token) )
    ( (This)->lpVtbl->remove_Resuming(This,token) )
    ( (This)->lpVtbl->Exit(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIApplication;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IApplication2[] = L"Windows.UI.Xaml.IApplication2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIApplication2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FocusVisualKind )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CFocusVisualKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FocusVisualKind )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CFocusVisualKind value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequiresPointerMode )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CApplicationRequiresPointerMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RequiresPointerMode )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CApplicationRequiresPointerMode value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LeavingBackground )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CILeavingBackgroundEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LeavingBackground )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnteredBackground )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIEnteredBackgroundEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnteredBackground )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIApplication2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIApplication2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIApplication2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FocusVisualKind(This,value) )
    ( (This)->lpVtbl->put_FocusVisualKind(This,value) )
    ( (This)->lpVtbl->get_RequiresPointerMode(This,value) )
    ( (This)->lpVtbl->put_RequiresPointerMode(This,value) )
    ( (This)->lpVtbl->add_LeavingBackground(This,handler,token) )
    ( (This)->lpVtbl->remove_LeavingBackground(This,token) )
    ( (This)->lpVtbl->add_EnteredBackground(This,handler,token) )
    ( (This)->lpVtbl->remove_EnteredBackground(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIApplication2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IApplication3[] = L"Windows.UI.Xaml.IApplication3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIApplication3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplication3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HighContrastAdjustment )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication3 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CApplicationHighContrastAdjustment * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HighContrastAdjustment )(
        __x_ABI_CWindows_CUI_CXaml_CIApplication3 * This,
                  __x_ABI_CWindows_CUI_CXaml_CApplicationHighContrastAdjustment value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIApplication3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIApplication3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIApplication3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HighContrastAdjustment(This,value) )
    ( (This)->lpVtbl->put_HighContrastAdjustment(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIApplication3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IApplicationFactory[] = L"Windows.UI.Xaml.IApplicationFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIApplicationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIApplicationFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIApplication * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIApplicationFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIApplicationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIApplicationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIApplicationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IApplicationInitializationCallbackParams[] = L"Windows.UI.Xaml.IApplicationInitializationCallbackParams";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackParamsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackParams * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackParams * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackParams * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackParams * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackParams * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackParams * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackParamsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackParams
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackParamsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackParams;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IApplicationOverrides[] = L"Windows.UI.Xaml.IApplicationOverrides";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIApplicationOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnActivated )(
        __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * args
        );
    HRESULT ( STDMETHODCALLTYPE *OnLaunched )(
        __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs * args
        );
    HRESULT ( STDMETHODCALLTYPE *OnFileActivated )(
        __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs * args
        );
    HRESULT ( STDMETHODCALLTYPE *OnSearchActivated )(
        __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs * args
        );
    HRESULT ( STDMETHODCALLTYPE *OnShareTargetActivated )(
        __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs * args
        );
    HRESULT ( STDMETHODCALLTYPE *OnFileOpenPickerActivated )(
        __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs * args
        );
    HRESULT ( STDMETHODCALLTYPE *OnFileSavePickerActivated )(
        __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs * args
        );
    HRESULT ( STDMETHODCALLTYPE *OnCachedFileUpdaterActivated )(
        __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs * args
        );
    HRESULT ( STDMETHODCALLTYPE *OnWindowCreated )(
        __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgs * args
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIApplicationOverridesVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIApplicationOverridesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OnActivated(This,args) )
    ( (This)->lpVtbl->OnLaunched(This,args) )
    ( (This)->lpVtbl->OnFileActivated(This,args) )
    ( (This)->lpVtbl->OnSearchActivated(This,args) )
    ( (This)->lpVtbl->OnShareTargetActivated(This,args) )
    ( (This)->lpVtbl->OnFileOpenPickerActivated(This,args) )
    ( (This)->lpVtbl->OnFileSavePickerActivated(This,args) )
    ( (This)->lpVtbl->OnCachedFileUpdaterActivated(This,args) )
    ( (This)->lpVtbl->OnWindowCreated(This,args) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IApplicationOverrides2[] = L"Windows.UI.Xaml.IApplicationOverrides2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnBackgroundActivated )(
        __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs * args
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OnBackgroundActivated(This,args) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IApplicationStatics[] = L"Windows.UI.Xaml.IApplicationStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIApplicationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CUI_CXaml_CIApplicationStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIApplication * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CUI_CXaml_CIApplicationStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallback * callback
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadComponent )(
        __x_ABI_CWindows_CUI_CXaml_CIApplicationStatics * This,
                  __RPC__in_opt IInspectable * component,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * resourceLocator
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadComponentWithResourceLocation )(
        __x_ABI_CWindows_CUI_CXaml_CIApplicationStatics * This,
                  __RPC__in_opt IInspectable * component,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * resourceLocator,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CComponentResourceLocation componentResourceLocation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIApplicationStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIApplicationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIApplicationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Current(This,value) )
    ( (This)->lpVtbl->Start(This,callback) )
    ( (This)->lpVtbl->LoadComponent(This,component,resourceLocator) )
    ( (This)->lpVtbl->LoadComponentWithResourceLocation(This,component,resourceLocator,componentResourceLocation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIApplicationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IBindingFailedEventArgs[] = L"Windows.UI.Xaml.IBindingFailedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Message(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IBringIntoViewOptions[] = L"Windows.UI.Xaml.IBringIntoViewOptions";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AnimationDesired )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AnimationDesired )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TargetRect )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CRect * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TargetRect )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CRect * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptionsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AnimationDesired(This,value) )
    ( (This)->lpVtbl->put_AnimationDesired(This,value) )
    ( (This)->lpVtbl->get_TargetRect(This,value) )
    ( (This)->lpVtbl->put_TargetRect(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IBringIntoViewOptions2[] = L"Windows.UI.Xaml.IBringIntoViewOptions2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HorizontalAlignmentRatio )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HorizontalAlignmentRatio )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2 * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalAlignmentRatio )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VerticalAlignmentRatio )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2 * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2 * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2 * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HorizontalAlignmentRatio(This,value) )
    ( (This)->lpVtbl->put_HorizontalAlignmentRatio(This,value) )
    ( (This)->lpVtbl->get_VerticalAlignmentRatio(This,value) )
    ( (This)->lpVtbl->put_VerticalAlignmentRatio(This,value) )
    ( (This)->lpVtbl->get_HorizontalOffset(This,value) )
    ( (This)->lpVtbl->put_HorizontalOffset(This,value) )
    ( (This)->lpVtbl->get_VerticalOffset(This,value) )
    ( (This)->lpVtbl->put_VerticalOffset(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IBringIntoViewRequestedEventArgs[] = L"Windows.UI.Xaml.IBringIntoViewRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TargetElement )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TargetElement )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AnimationDesired )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AnimationDesired )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TargetRect )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TargetRect )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalAlignmentRatio )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalAlignmentRatio )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TargetElement(This,value) )
    ( (This)->lpVtbl->put_TargetElement(This,value) )
    ( (This)->lpVtbl->get_AnimationDesired(This,value) )
    ( (This)->lpVtbl->put_AnimationDesired(This,value) )
    ( (This)->lpVtbl->get_TargetRect(This,value) )
    ( (This)->lpVtbl->put_TargetRect(This,value) )
    ( (This)->lpVtbl->get_HorizontalAlignmentRatio(This,value) )
    ( (This)->lpVtbl->get_VerticalAlignmentRatio(This,value) )
    ( (This)->lpVtbl->get_HorizontalOffset(This,value) )
    ( (This)->lpVtbl->put_HorizontalOffset(This,value) )
    ( (This)->lpVtbl->get_VerticalOffset(This,value) )
    ( (This)->lpVtbl->put_VerticalOffset(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IBrushTransition[] = L"Windows.UI.Xaml.IBrushTransition";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIBrushTransitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBrushTransition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBrushTransition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBrushTransition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBrushTransition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBrushTransition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBrushTransition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CUI_CXaml_CIBrushTransition * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CUI_CXaml_CIBrushTransition * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIBrushTransitionVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIBrushTransition
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIBrushTransitionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->put_Duration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIBrushTransition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IBrushTransitionFactory[] = L"Windows.UI.Xaml.IBrushTransitionFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIBrushTransitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBrushTransitionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBrushTransitionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBrushTransitionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBrushTransitionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBrushTransitionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIBrushTransitionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIBrushTransitionFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIBrushTransition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIBrushTransitionFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIBrushTransitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIBrushTransitionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIBrushTransitionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IColorPaletteResources[] = L"Windows.UI.Xaml.IColorPaletteResources";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResourcesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AltHigh )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AltHigh )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AltLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AltLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AltMedium )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AltMedium )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AltMediumHigh )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AltMediumHigh )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AltMediumLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AltMediumLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BaseHigh )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BaseHigh )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BaseLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BaseLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BaseMedium )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BaseMedium )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BaseMediumHigh )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BaseMediumHigh )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BaseMediumLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BaseMediumLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChromeAltLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChromeAltLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChromeBlackHigh )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChromeBlackHigh )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChromeBlackLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChromeBlackLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChromeBlackMediumLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChromeBlackMediumLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChromeBlackMedium )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChromeBlackMedium )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChromeDisabledHigh )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChromeDisabledHigh )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChromeDisabledLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChromeDisabledLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChromeHigh )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChromeHigh )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChromeLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChromeLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChromeMedium )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChromeMedium )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChromeMediumLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChromeMediumLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChromeWhite )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChromeWhite )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChromeGray )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChromeGray )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ListLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ListLow )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ListMedium )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ListMedium )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorText )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ErrorText )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Accent )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Accent )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResourcesVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResourcesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AltHigh(This,value) )
    ( (This)->lpVtbl->put_AltHigh(This,value) )
    ( (This)->lpVtbl->get_AltLow(This,value) )
    ( (This)->lpVtbl->put_AltLow(This,value) )
    ( (This)->lpVtbl->get_AltMedium(This,value) )
    ( (This)->lpVtbl->put_AltMedium(This,value) )
    ( (This)->lpVtbl->get_AltMediumHigh(This,value) )
    ( (This)->lpVtbl->put_AltMediumHigh(This,value) )
    ( (This)->lpVtbl->get_AltMediumLow(This,value) )
    ( (This)->lpVtbl->put_AltMediumLow(This,value) )
    ( (This)->lpVtbl->get_BaseHigh(This,value) )
    ( (This)->lpVtbl->put_BaseHigh(This,value) )
    ( (This)->lpVtbl->get_BaseLow(This,value) )
    ( (This)->lpVtbl->put_BaseLow(This,value) )
    ( (This)->lpVtbl->get_BaseMedium(This,value) )
    ( (This)->lpVtbl->put_BaseMedium(This,value) )
    ( (This)->lpVtbl->get_BaseMediumHigh(This,value) )
    ( (This)->lpVtbl->put_BaseMediumHigh(This,value) )
    ( (This)->lpVtbl->get_BaseMediumLow(This,value) )
    ( (This)->lpVtbl->put_BaseMediumLow(This,value) )
    ( (This)->lpVtbl->get_ChromeAltLow(This,value) )
    ( (This)->lpVtbl->put_ChromeAltLow(This,value) )
    ( (This)->lpVtbl->get_ChromeBlackHigh(This,value) )
    ( (This)->lpVtbl->put_ChromeBlackHigh(This,value) )
    ( (This)->lpVtbl->get_ChromeBlackLow(This,value) )
    ( (This)->lpVtbl->put_ChromeBlackLow(This,value) )
    ( (This)->lpVtbl->get_ChromeBlackMediumLow(This,value) )
    ( (This)->lpVtbl->put_ChromeBlackMediumLow(This,value) )
    ( (This)->lpVtbl->get_ChromeBlackMedium(This,value) )
    ( (This)->lpVtbl->put_ChromeBlackMedium(This,value) )
    ( (This)->lpVtbl->get_ChromeDisabledHigh(This,value) )
    ( (This)->lpVtbl->put_ChromeDisabledHigh(This,value) )
    ( (This)->lpVtbl->get_ChromeDisabledLow(This,value) )
    ( (This)->lpVtbl->put_ChromeDisabledLow(This,value) )
    ( (This)->lpVtbl->get_ChromeHigh(This,value) )
    ( (This)->lpVtbl->put_ChromeHigh(This,value) )
    ( (This)->lpVtbl->get_ChromeLow(This,value) )
    ( (This)->lpVtbl->put_ChromeLow(This,value) )
    ( (This)->lpVtbl->get_ChromeMedium(This,value) )
    ( (This)->lpVtbl->put_ChromeMedium(This,value) )
    ( (This)->lpVtbl->get_ChromeMediumLow(This,value) )
    ( (This)->lpVtbl->put_ChromeMediumLow(This,value) )
    ( (This)->lpVtbl->get_ChromeWhite(This,value) )
    ( (This)->lpVtbl->put_ChromeWhite(This,value) )
    ( (This)->lpVtbl->get_ChromeGray(This,value) )
    ( (This)->lpVtbl->put_ChromeGray(This,value) )
    ( (This)->lpVtbl->get_ListLow(This,value) )
    ( (This)->lpVtbl->put_ListLow(This,value) )
    ( (This)->lpVtbl->get_ListMedium(This,value) )
    ( (This)->lpVtbl->put_ListMedium(This,value) )
    ( (This)->lpVtbl->get_ErrorText(This,value) )
    ( (This)->lpVtbl->put_ErrorText(This,value) )
    ( (This)->lpVtbl->get_Accent(This,value) )
    ( (This)->lpVtbl->put_Accent(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IColorPaletteResourcesFactory[] = L"Windows.UI.Xaml.IColorPaletteResourcesFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResourcesFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResourcesFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResourcesFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResourcesFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResourcesFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResourcesFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResourcesFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResourcesFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResources * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResourcesFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResourcesFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIColorPaletteResourcesFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIColorPaletteResourcesFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_ICornerRadiusHelper[] = L"Windows.UI.Xaml.ICornerRadiusHelper";
typedef struct __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelper * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_ICornerRadiusHelperStatics[] = L"Windows.UI.Xaml.ICornerRadiusHelperStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromRadii )(
        __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperStatics * This,
                  DOUBLE topLeft,
                  DOUBLE topRight,
                  DOUBLE bottomRight,
                  DOUBLE bottomLeft,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CCornerRadius * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromUniformRadius )(
        __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperStatics * This,
                  DOUBLE uniformRadius,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CCornerRadius * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromRadii(This,topLeft,topRight,bottomRight,bottomLeft,result) )
    ( (This)->lpVtbl->FromUniformRadius(This,uniformRadius,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CICornerRadiusHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDataContextChangedEventArgs[] = L"Windows.UI.Xaml.IDataContextChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDataContextChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataContextChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataContextChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataContextChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataContextChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataContextChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataContextChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NewValue )(
        __x_ABI_CWindows_CUI_CXaml_CIDataContextChangedEventArgs * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CIDataContextChangedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CIDataContextChangedEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDataContextChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDataContextChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDataContextChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NewValue(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDataContextChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDataTemplate[] = L"Windows.UI.Xaml.IDataTemplate";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDataTemplateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplate * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplate * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplate * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplate * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplate * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplate * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *LoadContent )(
        __x_ABI_CWindows_CUI_CXaml_CIDataTemplate * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDataTemplateVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDataTemplate
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDataTemplateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LoadContent(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDataTemplate;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDataTemplateExtension[] = L"Windows.UI.Xaml.IDataTemplateExtension";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtension * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtension * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtension * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtension * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtension * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtension * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ResetTemplate )(
        __x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtension * This
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessBinding )(
        __x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtension * This,
                  UINT32 phase,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessBindings )(
        __x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtension * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIContainerContentChangingEventArgs * arg,
                           __RPC__out INT32 * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtensionVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtension
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtensionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ResetTemplate(This) )
    ( (This)->lpVtbl->ProcessBinding(This,phase,result) )
    ( (This)->lpVtbl->ProcessBindings(This,arg,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtension;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDataTemplateFactory[] = L"Windows.UI.Xaml.IDataTemplateFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDataTemplateFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIDataTemplateFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDataTemplate * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDataTemplateFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDataTemplateFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDataTemplateFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDataTemplateFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDataTemplateKey[] = L"Windows.UI.Xaml.IDataTemplateKey";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKey * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKey * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKey * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKey * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKey * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKey * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DataType )(
        __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKey * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DataType )(
        __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKey * This,
                  __RPC__in_opt IInspectable * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKey
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DataType(This,value) )
    ( (This)->lpVtbl->put_DataType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDataTemplateKey;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDataTemplateKeyFactory[] = L"Windows.UI.Xaml.IDataTemplateKeyFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKey * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithType )(
        __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyFactory * This,
                  __RPC__in_opt IInspectable * dataType,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKey * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
    ( (This)->lpVtbl->CreateInstanceWithType(This,dataType,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDataTemplateKeyFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDataTemplateStatics2[] = L"Windows.UI.Xaml.IDataTemplateStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDataTemplateStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDataTemplateStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtensionInstanceProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIDataTemplateStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetExtensionInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIDataTemplateStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * element,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtension * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetExtensionInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIDataTemplateStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * element,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDataTemplateExtension * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDataTemplateStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDataTemplateStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDataTemplateStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtensionInstanceProperty(This,value) )
    ( (This)->lpVtbl->GetExtensionInstance(This,element,result) )
    ( (This)->lpVtbl->SetExtensionInstance(This,element,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDataTemplateStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDebugSettings[] = L"Windows.UI.Xaml.IDebugSettings";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDebugSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EnableFrameRateCounter )(
        __x_ABI_CWindows_CUI_CXaml_CIDebugSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EnableFrameRateCounter )(
        __x_ABI_CWindows_CUI_CXaml_CIDebugSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsBindingTracingEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CIDebugSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsBindingTracingEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CIDebugSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOverdrawHeatMapEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CIDebugSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsOverdrawHeatMapEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CIDebugSettings * This,
                  boolean value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BindingFailed )(
        __x_ABI_CWindows_CUI_CXaml_CIDebugSettings * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIBindingFailedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BindingFailed )(
        __x_ABI_CWindows_CUI_CXaml_CIDebugSettings * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDebugSettingsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDebugSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDebugSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EnableFrameRateCounter(This,value) )
    ( (This)->lpVtbl->put_EnableFrameRateCounter(This,value) )
    ( (This)->lpVtbl->get_IsBindingTracingEnabled(This,value) )
    ( (This)->lpVtbl->put_IsBindingTracingEnabled(This,value) )
    ( (This)->lpVtbl->get_IsOverdrawHeatMapEnabled(This,value) )
    ( (This)->lpVtbl->put_IsOverdrawHeatMapEnabled(This,value) )
    ( (This)->lpVtbl->add_BindingFailed(This,handler,token) )
    ( (This)->lpVtbl->remove_BindingFailed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDebugSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDebugSettings2[] = L"Windows.UI.Xaml.IDebugSettings2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDebugSettings2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EnableRedrawRegions )(
        __x_ABI_CWindows_CUI_CXaml_CIDebugSettings2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EnableRedrawRegions )(
        __x_ABI_CWindows_CUI_CXaml_CIDebugSettings2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDebugSettings2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDebugSettings2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDebugSettings2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EnableRedrawRegions(This,value) )
    ( (This)->lpVtbl->put_EnableRedrawRegions(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDebugSettings2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDebugSettings3[] = L"Windows.UI.Xaml.IDebugSettings3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDebugSettings3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsTextPerformanceVisualizationEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CIDebugSettings3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsTextPerformanceVisualizationEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CIDebugSettings3 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDebugSettings3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDebugSettings3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDebugSettings3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsTextPerformanceVisualizationEnabled(This,value) )
    ( (This)->lpVtbl->put_IsTextPerformanceVisualizationEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDebugSettings3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDebugSettings4[] = L"Windows.UI.Xaml.IDebugSettings4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDebugSettings4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDebugSettings4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FailFastOnErrors )(
        __x_ABI_CWindows_CUI_CXaml_CIDebugSettings4 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FailFastOnErrors )(
        __x_ABI_CWindows_CUI_CXaml_CIDebugSettings4 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDebugSettings4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDebugSettings4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDebugSettings4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FailFastOnErrors(This,value) )
    ( (This)->lpVtbl->put_FailFastOnErrors(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDebugSettings4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDependencyObject[] = L"Windows.UI.Xaml.IDependencyObject";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetValue )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * dp,
                           __RPC__deref_out_opt IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetValue )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * dp,
                  __RPC__in_opt IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *ClearValue )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * dp
        );
    HRESULT ( STDMETHODCALLTYPE *ReadLocalValue )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * dp,
                           __RPC__deref_out_opt IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAnimationBaseValue )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * dp,
                           __RPC__deref_out_opt IInspectable * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Dispatcher )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObject
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetValue(This,dp,result) )
    ( (This)->lpVtbl->SetValue(This,dp,value) )
    ( (This)->lpVtbl->ClearValue(This,dp) )
    ( (This)->lpVtbl->ReadLocalValue(This,dp,result) )
    ( (This)->lpVtbl->GetAnimationBaseValue(This,dp,result) )
    ( (This)->lpVtbl->get_Dispatcher(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDependencyObject;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDependencyObject2[] = L"Windows.UI.Xaml.IDependencyObject2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDependencyObject2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RegisterPropertyChangedCallback )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyObject2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * dp,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedCallback * callback,
                           __RPC__out INT64 * result
        );
    HRESULT ( STDMETHODCALLTYPE *UnregisterPropertyChangedCallback )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyObject2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * dp,
                  INT64 token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDependencyObject2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObject2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDependencyObject2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RegisterPropertyChangedCallback(This,dp,callback,result) )
    ( (This)->lpVtbl->UnregisterPropertyChangedCallback(This,dp,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDependencyObject2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDependencyObjectCollectionFactory[] = L"Windows.UI.Xaml.IDependencyObjectCollectionFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectCollectionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectCollectionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectCollectionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectCollectionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectCollectionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectCollectionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectCollectionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectCollectionFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __FIObservableVector_1_Windows__CUI__CXaml__CDependencyObject * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectCollectionFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectCollectionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectCollectionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDependencyObjectCollectionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDependencyObjectFactory[] = L"Windows.UI.Xaml.IDependencyObjectFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDependencyObjectFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDependencyObjectFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDependencyProperty[] = L"Windows.UI.Xaml.IDependencyProperty";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * This,
                  __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName forType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetMetadata(This,forType,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDependencyPropertyChangedEventArgs[] = L"Windows.UI.Xaml.IDependencyPropertyChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Property )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OldValue )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgs * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewValue )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgs * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Property(This,value) )
    ( (This)->lpVtbl->get_OldValue(This,value) )
    ( (This)->lpVtbl->get_NewValue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDependencyPropertyStatics[] = L"Windows.UI.Xaml.IDependencyPropertyStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UnsetValue )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyStatics * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Register )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyStatics * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName propertyType,
                  __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName ownerType,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata * typeMetadata,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RegisterAttached )(
        __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyStatics * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName propertyType,
                  __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName ownerType,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata * defaultMetadata,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UnsetValue(This,value) )
    ( (This)->lpVtbl->Register(This,name,propertyType,ownerType,typeMetadata,result) )
    ( (This)->lpVtbl->RegisterAttached(This,name,propertyType,ownerType,defaultMetadata,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDependencyPropertyStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDispatcherTimer[] = L"Windows.UI.Xaml.IDispatcherTimer";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Interval )(
        __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Interval )(
        __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Tick )(
        __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Tick )(
        __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Interval(This,value) )
    ( (This)->lpVtbl->put_Interval(This,value) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->add_Tick(This,handler,token) )
    ( (This)->lpVtbl->remove_Tick(This,token) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDispatcherTimerFactory[] = L"Windows.UI.Xaml.IDispatcherTimerFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimerFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimerFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDispatcherTimerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDispatcherTimerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDragEventArgs[] = L"Windows.UI.Xaml.IDragEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDragEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPosition )(
        __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * relativeTo,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDragEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDragEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_Data(This,value) )
    ( (This)->lpVtbl->put_Data(This,value) )
    ( (This)->lpVtbl->GetPosition(This,relativeTo,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDragEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDragEventArgs2[] = L"Windows.UI.Xaml.IDragEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DataView )(
        __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragUIOverride )(
        __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Modifiers )(
        __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CDragDropModifiers * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AcceptedOperation )(
        __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AcceptedOperation )(
        __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2 * This,
                  __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDragOperationDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DataView(This,value) )
    ( (This)->lpVtbl->get_DragUIOverride(This,value) )
    ( (This)->lpVtbl->get_Modifiers(This,value) )
    ( (This)->lpVtbl->get_AcceptedOperation(This,value) )
    ( (This)->lpVtbl->put_AcceptedOperation(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDragEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDragEventArgs3[] = L"Windows.UI.Xaml.IDragEventArgs3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllowedOperations )(
        __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs3 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDragEventArgs3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllowedOperations(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDragEventArgs3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDragOperationDeferral[] = L"Windows.UI.Xaml.IDragOperationDeferral";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDragOperationDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragOperationDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragOperationDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragOperationDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragOperationDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragOperationDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragOperationDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CUI_CXaml_CIDragOperationDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDragOperationDeferralVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDragOperationDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDragOperationDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDragOperationDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDragStartingEventArgs[] = L"Windows.UI.Xaml.IDragStartingEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragUI )(
        __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDragUI * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDragOperationDeferral * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetPosition )(
        __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * relativeTo,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Cancel(This,value) )
    ( (This)->lpVtbl->put_Cancel(This,value) )
    ( (This)->lpVtbl->get_Data(This,value) )
    ( (This)->lpVtbl->get_DragUI(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
    ( (This)->lpVtbl->GetPosition(This,relativeTo,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDragStartingEventArgs2[] = L"Windows.UI.Xaml.IDragStartingEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllowedOperations )(
        __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowedOperations )(
        __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs2 * This,
                  __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllowedOperations(This,value) )
    ( (This)->lpVtbl->put_AllowedOperations(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDragStartingEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDragUI[] = L"Windows.UI.Xaml.IDragUI";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDragUIVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragUI * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragUI * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragUI * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragUI * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragUI * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragUI * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *SetContentFromBitmapImage )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUI * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * bitmapImage
        );
                    HRESULT ( STDMETHODCALLTYPE *SetContentFromBitmapImageWithAnchorPoint )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUI * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * bitmapImage,
                  __x_ABI_CWindows_CFoundation_CPoint anchorPoint
        );
                    HRESULT ( STDMETHODCALLTYPE *SetContentFromSoftwareBitmap )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUI * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * softwareBitmap
        );
                    HRESULT ( STDMETHODCALLTYPE *SetContentFromSoftwareBitmapWithAnchorPoint )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUI * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * softwareBitmap,
                  __x_ABI_CWindows_CFoundation_CPoint anchorPoint
        );
    HRESULT ( STDMETHODCALLTYPE *SetContentFromDataPackage )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUI * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDragUIVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDragUI
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDragUIVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetContentFromBitmapImage(This,bitmapImage) )
    ( (This)->lpVtbl->SetContentFromBitmapImageWithAnchorPoint(This,bitmapImage,anchorPoint) )
    ( (This)->lpVtbl->SetContentFromSoftwareBitmap(This,softwareBitmap) )
    ( (This)->lpVtbl->SetContentFromSoftwareBitmapWithAnchorPoint(This,softwareBitmap,anchorPoint) )
    ( (This)->lpVtbl->SetContentFromDataPackage(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDragUI;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDragUIOverride[] = L"Windows.UI.Xaml.IDragUIOverride";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDragUIOverrideVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Caption )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Caption )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsContentVisible )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsContentVisible )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCaptionVisible )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsCaptionVisible )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsGlyphVisible )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsGlyphVisible )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This
        );
                    HRESULT ( STDMETHODCALLTYPE *SetContentFromBitmapImage )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * bitmapImage
        );
                    HRESULT ( STDMETHODCALLTYPE *SetContentFromBitmapImageWithAnchorPoint )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * bitmapImage,
                  __x_ABI_CWindows_CFoundation_CPoint anchorPoint
        );
                    HRESULT ( STDMETHODCALLTYPE *SetContentFromSoftwareBitmap )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * softwareBitmap
        );
                    HRESULT ( STDMETHODCALLTYPE *SetContentFromSoftwareBitmapWithAnchorPoint )(
        __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * softwareBitmap,
                  __x_ABI_CWindows_CFoundation_CPoint anchorPoint
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDragUIOverrideVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDragUIOverride
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDragUIOverrideVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Caption(This,value) )
    ( (This)->lpVtbl->put_Caption(This,value) )
    ( (This)->lpVtbl->get_IsContentVisible(This,value) )
    ( (This)->lpVtbl->put_IsContentVisible(This,value) )
    ( (This)->lpVtbl->get_IsCaptionVisible(This,value) )
    ( (This)->lpVtbl->put_IsCaptionVisible(This,value) )
    ( (This)->lpVtbl->get_IsGlyphVisible(This,value) )
    ( (This)->lpVtbl->put_IsGlyphVisible(This,value) )
    ( (This)->lpVtbl->Clear(This) )
    ( (This)->lpVtbl->SetContentFromBitmapImage(This,bitmapImage) )
    ( (This)->lpVtbl->SetContentFromBitmapImageWithAnchorPoint(This,bitmapImage,anchorPoint) )
    ( (This)->lpVtbl->SetContentFromSoftwareBitmap(This,softwareBitmap) )
    ( (This)->lpVtbl->SetContentFromSoftwareBitmapWithAnchorPoint(This,softwareBitmap,anchorPoint) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDragUIOverride;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDropCompletedEventArgs[] = L"Windows.UI.Xaml.IDropCompletedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDropCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDropCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDropCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDropCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDropCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDropCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDropCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DropResult )(
        __x_ABI_CWindows_CUI_CXaml_CIDropCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDropCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDropCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDropCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DropResult(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDropCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDurationHelper[] = L"Windows.UI.Xaml.IDurationHelper";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDurationHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDurationHelper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDurationHelper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDurationHelper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDurationHelper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDurationHelper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDurationHelper * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDurationHelperVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDurationHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDurationHelperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDurationHelper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IDurationHelperStatics[] = L"Windows.UI.Xaml.IDurationHelperStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Automatic )(
        __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CDuration * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Forever )(
        __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CDuration * value
        );
    HRESULT ( STDMETHODCALLTYPE *Compare )(
        __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CDuration duration1,
                  __x_ABI_CWindows_CUI_CXaml_CDuration duration2,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromTimeSpan )(
        __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan timeSpan,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CDuration * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetHasTimeSpan )(
        __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CDuration target,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *Add )(
        __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CDuration target,
                  __x_ABI_CWindows_CUI_CXaml_CDuration duration,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CDuration * result
        );
    HRESULT ( STDMETHODCALLTYPE *Equals )(
        __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CDuration target,
                  __x_ABI_CWindows_CUI_CXaml_CDuration value,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *Subtract )(
        __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CDuration target,
                  __x_ABI_CWindows_CUI_CXaml_CDuration duration,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CDuration * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIDurationHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Automatic(This,value) )
    ( (This)->lpVtbl->get_Forever(This,value) )
    ( (This)->lpVtbl->Compare(This,duration1,duration2,result) )
    ( (This)->lpVtbl->FromTimeSpan(This,timeSpan,result) )
    ( (This)->lpVtbl->GetHasTimeSpan(This,target,result) )
    ( (This)->lpVtbl->Add(This,target,duration,result) )
    ( (This)->lpVtbl->Equals(This,target,value,result) )
    ( (This)->lpVtbl->Subtract(This,target,duration,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIDurationHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IEffectiveViewportChangedEventArgs[] = L"Windows.UI.Xaml.IEffectiveViewportChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EffectiveViewport )(
        __x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxViewport )(
        __x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BringIntoViewDistanceX )(
        __x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BringIntoViewDistanceY )(
        __x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EffectiveViewport(This,value) )
    ( (This)->lpVtbl->get_MaxViewport(This,value) )
    ( (This)->lpVtbl->get_BringIntoViewDistanceX(This,value) )
    ( (This)->lpVtbl->get_BringIntoViewDistanceY(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIEffectiveViewportChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IElementFactory[] = L"Windows.UI.Xaml.IElementFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIElementFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetElement )(
        __x_ABI_CWindows_CUI_CXaml_CIElementFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgs * args,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RecycleElement )(
        __x_ABI_CWindows_CUI_CXaml_CIElementFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgs * args
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIElementFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIElementFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIElementFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetElement(This,args,result) )
    ( (This)->lpVtbl->RecycleElement(This,args) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIElementFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IElementFactoryGetArgs[] = L"Windows.UI.Xaml.IElementFactoryGetArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgs * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgs * This,
                  __RPC__in_opt IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Parent )(
        __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Parent )(
        __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Data(This,value) )
    ( (This)->lpVtbl->put_Data(This,value) )
    ( (This)->lpVtbl->get_Parent(This,value) )
    ( (This)->lpVtbl->put_Parent(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IElementFactoryGetArgsFactory[] = L"Windows.UI.Xaml.IElementFactoryGetArgsFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgsFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgs * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgsFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIElementFactoryGetArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IElementFactoryRecycleArgs[] = L"Windows.UI.Xaml.IElementFactoryRecycleArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Element )(
        __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Element )(
        __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Parent )(
        __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Parent )(
        __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Element(This,value) )
    ( (This)->lpVtbl->put_Element(This,value) )
    ( (This)->lpVtbl->get_Parent(This,value) )
    ( (This)->lpVtbl->put_Parent(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IElementFactoryRecycleArgsFactory[] = L"Windows.UI.Xaml.IElementFactoryRecycleArgsFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgsFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgs * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgsFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIElementFactoryRecycleArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IElementSoundPlayer[] = L"Windows.UI.Xaml.IElementSoundPlayer";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayer * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IElementSoundPlayerStatics[] = L"Windows.UI.Xaml.IElementSoundPlayerStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Volume )(
        __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Volume )(
        __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CElementSoundPlayerState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_State )(
        __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CElementSoundPlayerState value
        );
    HRESULT ( STDMETHODCALLTYPE *Play )(
        __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CElementSoundKind sound
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Volume(This,value) )
    ( (This)->lpVtbl->put_Volume(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->put_State(This,value) )
    ( (This)->lpVtbl->Play(This,sound) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IElementSoundPlayerStatics2[] = L"Windows.UI.Xaml.IElementSoundPlayerStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SpatialAudioMode )(
        __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CElementSpatialAudioMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SpatialAudioMode )(
        __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CElementSpatialAudioMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SpatialAudioMode(This,value) )
    ( (This)->lpVtbl->put_SpatialAudioMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIElementSoundPlayerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IEventTrigger[] = L"Windows.UI.Xaml.IEventTrigger";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIEventTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIEventTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIEventTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIEventTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIEventTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIEventTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIEventTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RoutedEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIEventTrigger * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RoutedEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIEventTrigger * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Actions )(
        __x_ABI_CWindows_CUI_CXaml_CIEventTrigger * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CTriggerAction * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIEventTriggerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIEventTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIEventTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RoutedEvent(This,value) )
    ( (This)->lpVtbl->put_RoutedEvent(This,value) )
    ( (This)->lpVtbl->get_Actions(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIEventTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IExceptionRoutedEventArgs[] = L"Windows.UI.Xaml.IExceptionRoutedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ErrorMessage )(
        __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ErrorMessage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IExceptionRoutedEventArgsFactory[] = L"Windows.UI.Xaml.IExceptionRoutedEventArgsFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkElement[] = L"Windows.UI.Xaml.IFrameworkElement";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Triggers )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CTriggerBase * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Resources )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Resources )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tag )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Tag )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  __RPC__in_opt IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Language )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActualWidth )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActualHeight )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Width )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Height )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinWidth )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinWidth )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxWidth )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxWidth )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinHeight )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinHeight )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxHeight )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxHeight )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CHorizontalAlignment * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HorizontalAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  __x_ABI_CWindows_CUI_CXaml_CHorizontalAlignment value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CVerticalAlignment * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VerticalAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  __x_ABI_CWindows_CUI_CXaml_CVerticalAlignment value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Margin )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Margin )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  __x_ABI_CWindows_CUI_CXaml_CThickness value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BaseUri )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataContext )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DataContext )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  __RPC__in_opt IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Style )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIStyle * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Style )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIStyle * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Parent )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FlowDirection )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CFlowDirection * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FlowDirection )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  __x_ABI_CWindows_CUI_CXaml_CFlowDirection value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Loaded )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Loaded )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Unloaded )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Unloaded )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SizeChanged )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SizeChanged )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LayoutUpdated )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LayoutUpdated )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *FindName )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetBinding )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * dp,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase * binding
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Triggers(This,value) )
    ( (This)->lpVtbl->get_Resources(This,value) )
    ( (This)->lpVtbl->put_Resources(This,value) )
    ( (This)->lpVtbl->get_Tag(This,value) )
    ( (This)->lpVtbl->put_Tag(This,value) )
    ( (This)->lpVtbl->get_Language(This,value) )
    ( (This)->lpVtbl->put_Language(This,value) )
    ( (This)->lpVtbl->get_ActualWidth(This,value) )
    ( (This)->lpVtbl->get_ActualHeight(This,value) )
    ( (This)->lpVtbl->get_Width(This,value) )
    ( (This)->lpVtbl->put_Width(This,value) )
    ( (This)->lpVtbl->get_Height(This,value) )
    ( (This)->lpVtbl->put_Height(This,value) )
    ( (This)->lpVtbl->get_MinWidth(This,value) )
    ( (This)->lpVtbl->put_MinWidth(This,value) )
    ( (This)->lpVtbl->get_MaxWidth(This,value) )
    ( (This)->lpVtbl->put_MaxWidth(This,value) )
    ( (This)->lpVtbl->get_MinHeight(This,value) )
    ( (This)->lpVtbl->put_MinHeight(This,value) )
    ( (This)->lpVtbl->get_MaxHeight(This,value) )
    ( (This)->lpVtbl->put_MaxHeight(This,value) )
    ( (This)->lpVtbl->get_HorizontalAlignment(This,value) )
    ( (This)->lpVtbl->put_HorizontalAlignment(This,value) )
    ( (This)->lpVtbl->get_VerticalAlignment(This,value) )
    ( (This)->lpVtbl->put_VerticalAlignment(This,value) )
    ( (This)->lpVtbl->get_Margin(This,value) )
    ( (This)->lpVtbl->put_Margin(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_BaseUri(This,value) )
    ( (This)->lpVtbl->get_DataContext(This,value) )
    ( (This)->lpVtbl->put_DataContext(This,value) )
    ( (This)->lpVtbl->get_Style(This,value) )
    ( (This)->lpVtbl->put_Style(This,value) )
    ( (This)->lpVtbl->get_Parent(This,value) )
    ( (This)->lpVtbl->get_FlowDirection(This,value) )
    ( (This)->lpVtbl->put_FlowDirection(This,value) )
    ( (This)->lpVtbl->add_Loaded(This,handler,token) )
    ( (This)->lpVtbl->remove_Loaded(This,token) )
    ( (This)->lpVtbl->add_Unloaded(This,handler,token) )
    ( (This)->lpVtbl->remove_Unloaded(This,token) )
    ( (This)->lpVtbl->add_SizeChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SizeChanged(This,token) )
    ( (This)->lpVtbl->add_LayoutUpdated(This,handler,token) )
    ( (This)->lpVtbl->remove_LayoutUpdated(This,token) )
    ( (This)->lpVtbl->FindName(This,name,result) )
    ( (This)->lpVtbl->SetBinding(This,dp,binding) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkElement;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkElement2[] = L"Windows.UI.Xaml.IFrameworkElement2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestedTheme )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CElementTheme * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RequestedTheme )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CElementTheme value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DataContextChanged )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CDataContextChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DataContextChanged )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2 * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetBindingExpression )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * dp,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestedTheme(This,value) )
    ( (This)->lpVtbl->put_RequestedTheme(This,value) )
    ( (This)->lpVtbl->add_DataContextChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_DataContextChanged(This,token) )
    ( (This)->lpVtbl->GetBindingExpression(This,dp,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkElement2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkElement3[] = L"Windows.UI.Xaml.IFrameworkElement3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Loading )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement3 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Loading )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement3 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Loading(This,handler,token) )
    ( (This)->lpVtbl->remove_Loading(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkElement3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkElement4[] = L"Windows.UI.Xaml.IFrameworkElement4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllowFocusOnInteraction )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowFocusOnInteraction )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusVisualMargin )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FocusVisualMargin )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
                  __x_ABI_CWindows_CUI_CXaml_CThickness value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusVisualSecondaryThickness )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FocusVisualSecondaryThickness )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
                  __x_ABI_CWindows_CUI_CXaml_CThickness value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusVisualPrimaryThickness )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FocusVisualPrimaryThickness )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
                  __x_ABI_CWindows_CUI_CXaml_CThickness value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusVisualSecondaryBrush )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FocusVisualSecondaryBrush )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusVisualPrimaryBrush )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FocusVisualPrimaryBrush )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowFocusWhenDisabled )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowFocusWhenDisabled )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllowFocusOnInteraction(This,value) )
    ( (This)->lpVtbl->put_AllowFocusOnInteraction(This,value) )
    ( (This)->lpVtbl->get_FocusVisualMargin(This,value) )
    ( (This)->lpVtbl->put_FocusVisualMargin(This,value) )
    ( (This)->lpVtbl->get_FocusVisualSecondaryThickness(This,value) )
    ( (This)->lpVtbl->put_FocusVisualSecondaryThickness(This,value) )
    ( (This)->lpVtbl->get_FocusVisualPrimaryThickness(This,value) )
    ( (This)->lpVtbl->put_FocusVisualPrimaryThickness(This,value) )
    ( (This)->lpVtbl->get_FocusVisualSecondaryBrush(This,value) )
    ( (This)->lpVtbl->put_FocusVisualSecondaryBrush(This,value) )
    ( (This)->lpVtbl->get_FocusVisualPrimaryBrush(This,value) )
    ( (This)->lpVtbl->put_FocusVisualPrimaryBrush(This,value) )
    ( (This)->lpVtbl->get_AllowFocusWhenDisabled(This,value) )
    ( (This)->lpVtbl->put_AllowFocusWhenDisabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkElement4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkElement6[] = L"Windows.UI.Xaml.IFrameworkElement6";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActualTheme )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement6 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CElementTheme * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ActualThemeChanged )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement6 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ActualThemeChanged )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement6 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement6Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement6
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActualTheme(This,value) )
    ( (This)->lpVtbl->add_ActualThemeChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ActualThemeChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkElement6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkElement7[] = L"Windows.UI.Xaml.IFrameworkElement7";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement7Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement7 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement7 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement7 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement7 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement7 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement7 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsLoaded )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement7 * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EffectiveViewportChanged )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement7 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CFrameworkElement_Windows__CUI__CXaml__CEffectiveViewportChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EffectiveViewportChanged )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement7 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement7Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement7
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement7Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsLoaded(This,value) )
    ( (This)->lpVtbl->add_EffectiveViewportChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_EffectiveViewportChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkElement7;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkElementFactory[] = L"Windows.UI.Xaml.IFrameworkElementFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkElementFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkElementOverrides[] = L"Windows.UI.Xaml.IFrameworkElementOverrides";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *MeasureOverride )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides * This,
                  __x_ABI_CWindows_CFoundation_CSize availableSize,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * result
        );
    HRESULT ( STDMETHODCALLTYPE *ArrangeOverride )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides * This,
                  __x_ABI_CWindows_CFoundation_CSize finalSize,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * result
        );
    HRESULT ( STDMETHODCALLTYPE *OnApplyTemplate )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverridesVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverridesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->MeasureOverride(This,availableSize,result) )
    ( (This)->lpVtbl->ArrangeOverride(This,finalSize,result) )
    ( (This)->lpVtbl->OnApplyTemplate(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkElementOverrides2[] = L"Windows.UI.Xaml.IFrameworkElementOverrides2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GoToElementStateCore )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides2 * This,
                  __RPC__in HSTRING stateName,
                  boolean useTransitions,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GoToElementStateCore(This,stateName,useTransitions,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkElementOverrides2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkElementProtected7[] = L"Windows.UI.Xaml.IFrameworkElementProtected7";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementProtected7Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementProtected7 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementProtected7 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementProtected7 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementProtected7 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementProtected7 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementProtected7 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *InvalidateViewport )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementProtected7 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementProtected7Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementProtected7
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementProtected7Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->InvalidateViewport(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkElementProtected7;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkElementStatics[] = L"Windows.UI.Xaml.IFrameworkElementStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TagProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LanguageProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActualWidthProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActualHeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WidthProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinWidthProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxWidthProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinHeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxHeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalAlignmentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalAlignmentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MarginProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NameProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataContextProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StyleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FlowDirectionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TagProperty(This,value) )
    ( (This)->lpVtbl->get_LanguageProperty(This,value) )
    ( (This)->lpVtbl->get_ActualWidthProperty(This,value) )
    ( (This)->lpVtbl->get_ActualHeightProperty(This,value) )
    ( (This)->lpVtbl->get_WidthProperty(This,value) )
    ( (This)->lpVtbl->get_HeightProperty(This,value) )
    ( (This)->lpVtbl->get_MinWidthProperty(This,value) )
    ( (This)->lpVtbl->get_MaxWidthProperty(This,value) )
    ( (This)->lpVtbl->get_MinHeightProperty(This,value) )
    ( (This)->lpVtbl->get_MaxHeightProperty(This,value) )
    ( (This)->lpVtbl->get_HorizontalAlignmentProperty(This,value) )
    ( (This)->lpVtbl->get_VerticalAlignmentProperty(This,value) )
    ( (This)->lpVtbl->get_MarginProperty(This,value) )
    ( (This)->lpVtbl->get_NameProperty(This,value) )
    ( (This)->lpVtbl->get_DataContextProperty(This,value) )
    ( (This)->lpVtbl->get_StyleProperty(This,value) )
    ( (This)->lpVtbl->get_FlowDirectionProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkElementStatics2[] = L"Windows.UI.Xaml.IFrameworkElementStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestedThemeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestedThemeProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkElementStatics4[] = L"Windows.UI.Xaml.IFrameworkElementStatics4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllowFocusOnInteractionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusVisualMarginProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusVisualSecondaryThicknessProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusVisualPrimaryThicknessProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusVisualSecondaryBrushProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusVisualPrimaryBrushProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowFocusWhenDisabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllowFocusOnInteractionProperty(This,value) )
    ( (This)->lpVtbl->get_FocusVisualMarginProperty(This,value) )
    ( (This)->lpVtbl->get_FocusVisualSecondaryThicknessProperty(This,value) )
    ( (This)->lpVtbl->get_FocusVisualPrimaryThicknessProperty(This,value) )
    ( (This)->lpVtbl->get_FocusVisualSecondaryBrushProperty(This,value) )
    ( (This)->lpVtbl->get_FocusVisualPrimaryBrushProperty(This,value) )
    ( (This)->lpVtbl->get_AllowFocusWhenDisabledProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkElementStatics5[] = L"Windows.UI.Xaml.IFrameworkElementStatics5";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *DeferTree )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics5Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->DeferTree(This,element) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkElementStatics6[] = L"Windows.UI.Xaml.IFrameworkElementStatics6";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActualThemeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics6 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics6Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics6
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActualThemeProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkElementStatics6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkTemplate[] = L"Windows.UI.Xaml.IFrameworkTemplate";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplate * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplate * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplate * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplate * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplate * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplate * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplateVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplate
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplate;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkTemplateFactory[] = L"Windows.UI.Xaml.IFrameworkTemplateFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplateFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplateFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplateFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplateFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplateFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplateFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplateFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplateFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplate * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplateFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplateFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplateFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkTemplateFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkView[] = L"Windows.UI.Xaml.IFrameworkView";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkView * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkView * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkView * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkView * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkView * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkView * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkViewVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkView
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkViewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkView;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IFrameworkViewSource[] = L"Windows.UI.Xaml.IFrameworkViewSource";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkViewSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkViewSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkViewSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkViewSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkViewSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkViewSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIFrameworkViewSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIFrameworkViewSourceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkViewSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIFrameworkViewSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkViewSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IGridLengthHelper[] = L"Windows.UI.Xaml.IGridLengthHelper";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelper * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIGridLengthHelper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IGridLengthHelperStatics[] = L"Windows.UI.Xaml.IGridLengthHelperStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Auto )(
        __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CGridLength * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromPixels )(
        __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStatics * This,
                  DOUBLE pixels,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CGridLength * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromValueAndType )(
        __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStatics * This,
                  DOUBLE value,
                  __x_ABI_CWindows_CUI_CXaml_CGridUnitType type,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CGridLength * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsAbsolute )(
        __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CGridLength target,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsAuto )(
        __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CGridLength target,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsStar )(
        __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CGridLength target,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *Equals )(
        __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CGridLength target,
                  __x_ABI_CWindows_CUI_CXaml_CGridLength value,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Auto(This,value) )
    ( (This)->lpVtbl->FromPixels(This,pixels,result) )
    ( (This)->lpVtbl->FromValueAndType(This,value,type,result) )
    ( (This)->lpVtbl->GetIsAbsolute(This,target,result) )
    ( (This)->lpVtbl->GetIsAuto(This,target,result) )
    ( (This)->lpVtbl->GetIsStar(This,target,result) )
    ( (This)->lpVtbl->Equals(This,target,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIGridLengthHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IMediaFailedRoutedEventArgs[] = L"Windows.UI.Xaml.IMediaFailedRoutedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIMediaFailedRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIMediaFailedRoutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIMediaFailedRoutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIMediaFailedRoutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIMediaFailedRoutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIMediaFailedRoutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIMediaFailedRoutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ErrorTrace )(
        __x_ABI_CWindows_CUI_CXaml_CIMediaFailedRoutedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIMediaFailedRoutedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIMediaFailedRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIMediaFailedRoutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ErrorTrace(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIMediaFailedRoutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IPointHelper[] = L"Windows.UI.Xaml.IPointHelper";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIPointHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPointHelper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPointHelper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPointHelper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPointHelper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPointHelper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPointHelper * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIPointHelperVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIPointHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIPointHelperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIPointHelper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IPointHelperStatics[] = L"Windows.UI.Xaml.IPointHelperStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIPointHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPointHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPointHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPointHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPointHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPointHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPointHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromCoordinates )(
        __x_ABI_CWindows_CUI_CXaml_CIPointHelperStatics * This,
                  FLOAT x,
                  FLOAT y,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIPointHelperStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIPointHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIPointHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromCoordinates(This,x,y,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIPointHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IPropertyMetadata[] = L"Windows.UI.Xaml.IPropertyMetadata";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DefaultValue )(
        __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CreateDefaultValueCallback )(
        __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CICreateDefaultValueCallback * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DefaultValue(This,value) )
    ( (This)->lpVtbl->get_CreateDefaultValueCallback(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IPropertyMetadataFactory[] = L"Windows.UI.Xaml.IPropertyMetadataFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithDefaultValue )(
        __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataFactory * This,
                  __RPC__in_opt IInspectable * defaultValue,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithDefaultValueAndCallback )(
        __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataFactory * This,
                  __RPC__in_opt IInspectable * defaultValue,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyChangedCallback * propertyChangedCallback,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceWithDefaultValue(This,defaultValue,baseInterface,innerInterface,value) )
    ( (This)->lpVtbl->CreateInstanceWithDefaultValueAndCallback(This,defaultValue,propertyChangedCallback,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IPropertyMetadataStatics[] = L"Windows.UI.Xaml.IPropertyMetadataStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                                  HRESULT ( STDMETHODCALLTYPE *CreateWithDefaultValue )(
        __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataStatics * This,
                  __RPC__in_opt IInspectable * defaultValue,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata * * result
        );
                                      HRESULT ( STDMETHODCALLTYPE *CreateWithDefaultValueAndCallback )(
        __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataStatics * This,
                  __RPC__in_opt IInspectable * defaultValue,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyChangedCallback * propertyChangedCallback,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateWithFactory )(
        __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CICreateDefaultValueCallback * createDefaultValueCallback,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateWithFactoryAndCallback )(
        __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CICreateDefaultValueCallback * createDefaultValueCallback,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyChangedCallback * propertyChangedCallback,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadata * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithDefaultValue(This,defaultValue,result) )
    ( (This)->lpVtbl->CreateWithDefaultValueAndCallback(This,defaultValue,propertyChangedCallback,result) )
    ( (This)->lpVtbl->CreateWithFactory(This,createDefaultValueCallback,result) )
    ( (This)->lpVtbl->CreateWithFactoryAndCallback(This,createDefaultValueCallback,propertyChangedCallback,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIPropertyMetadataStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IPropertyPath[] = L"Windows.UI.Xaml.IPropertyPath";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIPropertyPathVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIPropertyPathVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIPropertyPath
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIPropertyPathVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Path(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIPropertyPath;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IPropertyPathFactory[] = L"Windows.UI.Xaml.IPropertyPathFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIPropertyPathFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyPathFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyPathFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyPathFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyPathFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyPathFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIPropertyPathFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIPropertyPathFactory * This,
                  __RPC__in HSTRING path,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIPropertyPathFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIPropertyPathFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIPropertyPathFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,path,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIPropertyPathFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IRectHelper[] = L"Windows.UI.Xaml.IRectHelper";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIRectHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRectHelper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRectHelper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRectHelper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRectHelper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRectHelper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRectHelper * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIRectHelperVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIRectHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIRectHelperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIRectHelper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IRectHelperStatics[] = L"Windows.UI.Xaml.IRectHelperStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIRectHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Empty )(
        __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromCoordinatesAndDimensions )(
        __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
                  FLOAT x,
                  FLOAT y,
                  FLOAT width,
                  FLOAT height,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromPoints )(
        __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CPoint point1,
                  __x_ABI_CWindows_CFoundation_CPoint point2,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromLocationAndSize )(
        __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CPoint location,
                  __x_ABI_CWindows_CFoundation_CSize size,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsEmpty )(
        __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CRect target,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetBottom )(
        __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CRect target,
                           __RPC__out FLOAT * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetLeft )(
        __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CRect target,
                           __RPC__out FLOAT * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetRight )(
        __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CRect target,
                           __RPC__out FLOAT * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetTop )(
        __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CRect target,
                           __RPC__out FLOAT * result
        );
    HRESULT ( STDMETHODCALLTYPE *Contains )(
        __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CRect target,
                  __x_ABI_CWindows_CFoundation_CPoint point,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *Equals )(
        __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CRect target,
                  __x_ABI_CWindows_CFoundation_CRect value,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *Intersect )(
        __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CRect target,
                  __x_ABI_CWindows_CFoundation_CRect rect,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * result
        );
                                      HRESULT ( STDMETHODCALLTYPE *UnionWithPoint )(
        __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CRect target,
                  __x_ABI_CWindows_CFoundation_CPoint point,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * result
        );
                    HRESULT ( STDMETHODCALLTYPE *UnionWithRect )(
        __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CRect target,
                  __x_ABI_CWindows_CFoundation_CRect rect,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIRectHelperStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIRectHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Empty(This,value) )
    ( (This)->lpVtbl->FromCoordinatesAndDimensions(This,x,y,width,height,result) )
    ( (This)->lpVtbl->FromPoints(This,point1,point2,result) )
    ( (This)->lpVtbl->FromLocationAndSize(This,location,size,result) )
    ( (This)->lpVtbl->GetIsEmpty(This,target,result) )
    ( (This)->lpVtbl->GetBottom(This,target,result) )
    ( (This)->lpVtbl->GetLeft(This,target,result) )
    ( (This)->lpVtbl->GetRight(This,target,result) )
    ( (This)->lpVtbl->GetTop(This,target,result) )
    ( (This)->lpVtbl->Contains(This,target,point,result) )
    ( (This)->lpVtbl->Equals(This,target,value,result) )
    ( (This)->lpVtbl->Intersect(This,target,rect,result) )
    ( (This)->lpVtbl->UnionWithPoint(This,target,point,result) )
    ( (This)->lpVtbl->UnionWithRect(This,target,rect,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIRectHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IResourceDictionary[] = L"Windows.UI.Xaml.IResourceDictionary";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIResourceDictionaryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MergedDictionaries )(
        __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CResourceDictionary * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ThemeDictionaries )(
        __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * This,
                           __RPC__deref_out_opt __FIMap_2_IInspectable_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIResourceDictionaryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIResourceDictionaryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->put_Source(This,value) )
    ( (This)->lpVtbl->get_MergedDictionaries(This,value) )
    ( (This)->lpVtbl->get_ThemeDictionaries(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIResourceDictionary;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IResourceDictionaryFactory[] = L"Windows.UI.Xaml.IResourceDictionaryFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIResourceDictionaryFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIResourceDictionaryFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIResourceDictionaryFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIResourceDictionaryFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIResourceDictionaryFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIResourceDictionaryFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIResourceDictionaryFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIResourceDictionaryFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIResourceDictionaryFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIResourceDictionaryFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIResourceDictionaryFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIResourceDictionaryFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IRoutedEvent[] = L"Windows.UI.Xaml.IRoutedEvent";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIRoutedEventVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIRoutedEventVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIRoutedEventVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIRoutedEvent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IRoutedEventArgs[] = L"Windows.UI.Xaml.IRoutedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OriginalSource )(
        __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OriginalSource(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IRoutedEventArgsFactory[] = L"Windows.UI.Xaml.IRoutedEventArgsFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgsFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IScalarTransition[] = L"Windows.UI.Xaml.IScalarTransition";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIScalarTransitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIScalarTransition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIScalarTransition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIScalarTransition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIScalarTransition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIScalarTransition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIScalarTransition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CUI_CXaml_CIScalarTransition * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CUI_CXaml_CIScalarTransition * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIScalarTransitionVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIScalarTransition
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIScalarTransitionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->put_Duration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIScalarTransition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IScalarTransitionFactory[] = L"Windows.UI.Xaml.IScalarTransitionFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIScalarTransitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIScalarTransitionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIScalarTransitionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIScalarTransitionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIScalarTransitionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIScalarTransitionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIScalarTransitionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIScalarTransitionFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIScalarTransition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIScalarTransitionFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIScalarTransitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIScalarTransitionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIScalarTransitionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_ISetter[] = L"Windows.UI.Xaml.ISetter";
typedef struct __x_ABI_CWindows_CUI_CXaml_CISetterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Property )(
        __x_ABI_CWindows_CUI_CXaml_CISetter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Property )(
        __x_ABI_CWindows_CUI_CXaml_CISetter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CUI_CXaml_CISetter * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CUI_CXaml_CISetter * This,
                  __RPC__in_opt IInspectable * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CISetterVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CISetter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CISetterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Property(This,value) )
    ( (This)->lpVtbl->put_Property(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CISetter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_ISetter2[] = L"Windows.UI.Xaml.ISetter2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CISetter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetter2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetter2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetter2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetter2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetter2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetter2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Target )(
        __x_ABI_CWindows_CUI_CXaml_CISetter2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPath * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Target )(
        __x_ABI_CWindows_CUI_CXaml_CISetter2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPath * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CISetter2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CISetter2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CISetter2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Target(This,value) )
    ( (This)->lpVtbl->put_Target(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CISetter2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_ISetterBase[] = L"Windows.UI.Xaml.ISetterBase";
typedef struct __x_ABI_CWindows_CUI_CXaml_CISetterBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBase * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBase * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBase * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBase * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBase * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBase * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSealed )(
        __x_ABI_CWindows_CUI_CXaml_CISetterBase * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CISetterBaseVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CISetterBase
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CISetterBaseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSealed(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CISetterBase;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_ISetterBaseCollection[] = L"Windows.UI.Xaml.ISetterBaseCollection";
typedef struct __x_ABI_CWindows_CUI_CXaml_CISetterBaseCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBaseCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBaseCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBaseCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBaseCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBaseCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBaseCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSealed )(
        __x_ABI_CWindows_CUI_CXaml_CISetterBaseCollection * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CISetterBaseCollectionVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CISetterBaseCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CISetterBaseCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSealed(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CISetterBaseCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_ISetterBaseFactory[] = L"Windows.UI.Xaml.ISetterBaseFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CISetterBaseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBaseFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBaseFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBaseFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBaseFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBaseFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterBaseFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CISetterBaseFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CISetterBaseFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CISetterBaseFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CISetterBaseFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_ISetterFactory[] = L"Windows.UI.Xaml.ISetterFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CISetterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISetterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CISetterFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * targetProperty,
                  __RPC__in_opt IInspectable * value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CISetter * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CISetterFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CISetterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CISetterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,targetProperty,value,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CISetterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_ISizeChangedEventArgs[] = L"Windows.UI.Xaml.ISizeChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PreviousSize )(
        __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewSize )(
        __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CISizeChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PreviousSize(This,value) )
    ( (This)->lpVtbl->get_NewSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CISizeChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_ISizeHelper[] = L"Windows.UI.Xaml.ISizeHelper";
typedef struct __x_ABI_CWindows_CUI_CXaml_CISizeHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeHelper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeHelper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeHelper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeHelper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeHelper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeHelper * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CISizeHelperVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CISizeHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CISizeHelperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CISizeHelper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_ISizeHelperStatics[] = L"Windows.UI.Xaml.ISizeHelperStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CISizeHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CISizeHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Empty )(
        __x_ABI_CWindows_CUI_CXaml_CISizeHelperStatics * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromDimensions )(
        __x_ABI_CWindows_CUI_CXaml_CISizeHelperStatics * This,
                  FLOAT width,
                  FLOAT height,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsEmpty )(
        __x_ABI_CWindows_CUI_CXaml_CISizeHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CSize target,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *Equals )(
        __x_ABI_CWindows_CUI_CXaml_CISizeHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CSize target,
                  __x_ABI_CWindows_CFoundation_CSize value,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CISizeHelperStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CISizeHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CISizeHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Empty(This,value) )
    ( (This)->lpVtbl->FromDimensions(This,width,height,result) )
    ( (This)->lpVtbl->GetIsEmpty(This,target,result) )
    ( (This)->lpVtbl->Equals(This,target,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CISizeHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IStateTrigger[] = L"Windows.UI.Xaml.IStateTrigger";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIStateTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsActive )(
        __x_ABI_CWindows_CUI_CXaml_CIStateTrigger * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsActive )(
        __x_ABI_CWindows_CUI_CXaml_CIStateTrigger * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIStateTriggerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIStateTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIStateTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsActive(This,value) )
    ( (This)->lpVtbl->put_IsActive(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIStateTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IStateTriggerBase[] = L"Windows.UI.Xaml.IStateTriggerBase";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IStateTriggerBaseFactory[] = L"Windows.UI.Xaml.IStateTriggerBaseFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBase * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IStateTriggerBaseProtected[] = L"Windows.UI.Xaml.IStateTriggerBaseProtected";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseProtectedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseProtected * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseProtected * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseProtected * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseProtected * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseProtected * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseProtected * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetActive )(
        __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseProtected * This,
                  boolean IsActive
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseProtectedVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseProtected
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseProtectedVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetActive(This,IsActive) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIStateTriggerBaseProtected;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IStateTriggerStatics[] = L"Windows.UI.Xaml.IStateTriggerStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIStateTriggerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStateTriggerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsActiveProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIStateTriggerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIStateTriggerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIStateTriggerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIStateTriggerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsActiveProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIStateTriggerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IStyle[] = L"Windows.UI.Xaml.IStyle";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIStyleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStyle * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStyle * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStyle * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStyle * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStyle * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStyle * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSealed )(
        __x_ABI_CWindows_CUI_CXaml_CIStyle * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Setters )(
        __x_ABI_CWindows_CUI_CXaml_CIStyle * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CISetterBaseCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TargetType )(
        __x_ABI_CWindows_CUI_CXaml_CIStyle * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TargetType )(
        __x_ABI_CWindows_CUI_CXaml_CIStyle * This,
                  __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BasedOn )(
        __x_ABI_CWindows_CUI_CXaml_CIStyle * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIStyle * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BasedOn )(
        __x_ABI_CWindows_CUI_CXaml_CIStyle * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIStyle * value
        );
    HRESULT ( STDMETHODCALLTYPE *Seal )(
        __x_ABI_CWindows_CUI_CXaml_CIStyle * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIStyleVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIStyle
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIStyleVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSealed(This,value) )
    ( (This)->lpVtbl->get_Setters(This,value) )
    ( (This)->lpVtbl->get_TargetType(This,value) )
    ( (This)->lpVtbl->put_TargetType(This,value) )
    ( (This)->lpVtbl->get_BasedOn(This,value) )
    ( (This)->lpVtbl->put_BasedOn(This,value) )
    ( (This)->lpVtbl->Seal(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIStyle;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IStyleFactory[] = L"Windows.UI.Xaml.IStyleFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIStyleFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStyleFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStyleFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStyleFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStyleFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStyleFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIStyleFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIStyleFactory * This,
                  __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName targetType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIStyle * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIStyleFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIStyleFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIStyleFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,targetType,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIStyleFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_ITargetPropertyPath[] = L"Windows.UI.Xaml.ITargetPropertyPath";
typedef struct __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPathVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPath * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPath * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPath * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPath * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPath * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPath * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPath * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Path )(
        __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPath * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Target )(
        __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPath * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Target )(
        __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPath * This,
                  __RPC__in_opt IInspectable * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPathVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPath
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPathVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Path(This,value) )
    ( (This)->lpVtbl->put_Path(This,value) )
    ( (This)->lpVtbl->get_Target(This,value) )
    ( (This)->lpVtbl->put_Target(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CITargetPropertyPath;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_ITargetPropertyPathFactory[] = L"Windows.UI.Xaml.ITargetPropertyPathFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPathFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPathFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPathFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPathFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPathFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPathFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPathFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPathFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * targetProperty,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPath * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPathFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPathFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CITargetPropertyPathFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,targetProperty,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CITargetPropertyPathFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IThicknessHelper[] = L"Windows.UI.Xaml.IThicknessHelper";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIThicknessHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIThicknessHelper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIThicknessHelper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIThicknessHelper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIThicknessHelper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIThicknessHelper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIThicknessHelper * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIThicknessHelperVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIThicknessHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIThicknessHelperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIThicknessHelper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IThicknessHelperStatics[] = L"Windows.UI.Xaml.IThicknessHelperStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIThicknessHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIThicknessHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIThicknessHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIThicknessHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIThicknessHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIThicknessHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIThicknessHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromLengths )(
        __x_ABI_CWindows_CUI_CXaml_CIThicknessHelperStatics * This,
                  DOUBLE left,
                  DOUBLE top,
                  DOUBLE right,
                  DOUBLE bottom,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromUniformLength )(
        __x_ABI_CWindows_CUI_CXaml_CIThicknessHelperStatics * This,
                  DOUBLE uniformLength,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIThicknessHelperStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIThicknessHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIThicknessHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromLengths(This,left,top,right,bottom,result) )
    ( (This)->lpVtbl->FromUniformLength(This,uniformLength,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIThicknessHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_ITriggerAction[] = L"Windows.UI.Xaml.ITriggerAction";
typedef struct __x_ABI_CWindows_CUI_CXaml_CITriggerActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerAction * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerAction * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerAction * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerAction * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerAction * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerAction * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CITriggerActionVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CITriggerAction
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CITriggerActionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CITriggerAction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_ITriggerActionFactory[] = L"Windows.UI.Xaml.ITriggerActionFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CITriggerActionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerActionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerActionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerActionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerActionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerActionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerActionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CITriggerActionFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CITriggerActionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CITriggerActionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CITriggerActionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_ITriggerBase[] = L"Windows.UI.Xaml.ITriggerBase";
typedef struct __x_ABI_CWindows_CUI_CXaml_CITriggerBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerBase * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerBase * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerBase * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerBase * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerBase * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerBase * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CITriggerBaseVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CITriggerBase
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CITriggerBaseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CITriggerBase;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_ITriggerBaseFactory[] = L"Windows.UI.Xaml.ITriggerBaseFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CITriggerBaseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerBaseFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerBaseFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerBaseFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerBaseFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerBaseFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CITriggerBaseFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CITriggerBaseFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CITriggerBaseFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CITriggerBaseFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CITriggerBaseFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElement[] = L"Windows.UI.Xaml.IUIElement";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesiredSize )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowDrop )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowDrop )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Opacity )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Opacity )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Clip )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometry * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Clip )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometry * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RenderTransform )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RenderTransform )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Projection )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Projection )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjection * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RenderTransformOrigin )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RenderTransformOrigin )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHitTestVisible )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsHitTestVisible )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Visibility )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CVisibility * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Visibility )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __x_ABI_CWindows_CUI_CXaml_CVisibility value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RenderSize )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UseLayoutRounding )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UseLayoutRounding )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Transitions )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Transitions )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __FIVector_1_Windows__CUI__CXaml__CMedia__CAnimation__CTransition * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CacheMode )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheMode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CacheMode )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTapEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsTapEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDoubleTapEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsDoubleTapEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRightTapEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsRightTapEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHoldingEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsHoldingEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ManipulationMode )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CManipulationModes * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ManipulationMode )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CManipulationModes value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerCaptures )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_KeyUp )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_KeyUp )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_KeyDown )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_KeyDown )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_GotFocus )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GotFocus )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LostFocus )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LostFocus )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DragEnter )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDragEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DragEnter )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DragLeave )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDragEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DragLeave )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DragOver )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDragEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DragOver )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Drop )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDragEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Drop )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerPressed )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerPressed )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerMoved )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerMoved )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerReleased )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerReleased )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerEntered )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerEntered )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerExited )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerExited )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerCaptureLost )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerCaptureLost )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerCanceled )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerCanceled )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerWheelChanged )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerWheelChanged )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Tapped )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Tapped )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DoubleTapped )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DoubleTapped )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Holding )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Holding )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RightTapped )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RightTapped )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ManipulationStarting )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ManipulationStarting )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ManipulationInertiaStarting )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ManipulationInertiaStarting )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ManipulationStarted )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ManipulationStarted )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ManipulationDelta )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ManipulationDelta )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ManipulationCompleted )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ManipulationCompleted )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Measure )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __x_ABI_CWindows_CFoundation_CSize availableSize
        );
    HRESULT ( STDMETHODCALLTYPE *Arrange )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __x_ABI_CWindows_CFoundation_CRect finalRect
        );
    HRESULT ( STDMETHODCALLTYPE *CapturePointer )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * value,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReleasePointerCapture )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReleasePointerCaptures )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This
        );
    HRESULT ( STDMETHODCALLTYPE *AddHandler )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * routedEvent,
                  __RPC__in_opt IInspectable * handler,
                  boolean handledEventsToo
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveHandler )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * routedEvent,
                  __RPC__in_opt IInspectable * handler
        );
    HRESULT ( STDMETHODCALLTYPE *TransformToVisual )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * visual,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform * * result
        );
    HRESULT ( STDMETHODCALLTYPE *InvalidateMeasure )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This
        );
    HRESULT ( STDMETHODCALLTYPE *InvalidateArrange )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateLayout )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElement
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesiredSize(This,value) )
    ( (This)->lpVtbl->get_AllowDrop(This,value) )
    ( (This)->lpVtbl->put_AllowDrop(This,value) )
    ( (This)->lpVtbl->get_Opacity(This,value) )
    ( (This)->lpVtbl->put_Opacity(This,value) )
    ( (This)->lpVtbl->get_Clip(This,value) )
    ( (This)->lpVtbl->put_Clip(This,value) )
    ( (This)->lpVtbl->get_RenderTransform(This,value) )
    ( (This)->lpVtbl->put_RenderTransform(This,value) )
    ( (This)->lpVtbl->get_Projection(This,value) )
    ( (This)->lpVtbl->put_Projection(This,value) )
    ( (This)->lpVtbl->get_RenderTransformOrigin(This,value) )
    ( (This)->lpVtbl->put_RenderTransformOrigin(This,value) )
    ( (This)->lpVtbl->get_IsHitTestVisible(This,value) )
    ( (This)->lpVtbl->put_IsHitTestVisible(This,value) )
    ( (This)->lpVtbl->get_Visibility(This,value) )
    ( (This)->lpVtbl->put_Visibility(This,value) )
    ( (This)->lpVtbl->get_RenderSize(This,value) )
    ( (This)->lpVtbl->get_UseLayoutRounding(This,value) )
    ( (This)->lpVtbl->put_UseLayoutRounding(This,value) )
    ( (This)->lpVtbl->get_Transitions(This,value) )
    ( (This)->lpVtbl->put_Transitions(This,value) )
    ( (This)->lpVtbl->get_CacheMode(This,value) )
    ( (This)->lpVtbl->put_CacheMode(This,value) )
    ( (This)->lpVtbl->get_IsTapEnabled(This,value) )
    ( (This)->lpVtbl->put_IsTapEnabled(This,value) )
    ( (This)->lpVtbl->get_IsDoubleTapEnabled(This,value) )
    ( (This)->lpVtbl->put_IsDoubleTapEnabled(This,value) )
    ( (This)->lpVtbl->get_IsRightTapEnabled(This,value) )
    ( (This)->lpVtbl->put_IsRightTapEnabled(This,value) )
    ( (This)->lpVtbl->get_IsHoldingEnabled(This,value) )
    ( (This)->lpVtbl->put_IsHoldingEnabled(This,value) )
    ( (This)->lpVtbl->get_ManipulationMode(This,value) )
    ( (This)->lpVtbl->put_ManipulationMode(This,value) )
    ( (This)->lpVtbl->get_PointerCaptures(This,value) )
    ( (This)->lpVtbl->add_KeyUp(This,handler,token) )
    ( (This)->lpVtbl->remove_KeyUp(This,token) )
    ( (This)->lpVtbl->add_KeyDown(This,handler,token) )
    ( (This)->lpVtbl->remove_KeyDown(This,token) )
    ( (This)->lpVtbl->add_GotFocus(This,handler,token) )
    ( (This)->lpVtbl->remove_GotFocus(This,token) )
    ( (This)->lpVtbl->add_LostFocus(This,handler,token) )
    ( (This)->lpVtbl->remove_LostFocus(This,token) )
    ( (This)->lpVtbl->add_DragEnter(This,handler,token) )
    ( (This)->lpVtbl->remove_DragEnter(This,token) )
    ( (This)->lpVtbl->add_DragLeave(This,handler,token) )
    ( (This)->lpVtbl->remove_DragLeave(This,token) )
    ( (This)->lpVtbl->add_DragOver(This,handler,token) )
    ( (This)->lpVtbl->remove_DragOver(This,token) )
    ( (This)->lpVtbl->add_Drop(This,handler,token) )
    ( (This)->lpVtbl->remove_Drop(This,token) )
    ( (This)->lpVtbl->add_PointerPressed(This,handler,token) )
    ( (This)->lpVtbl->remove_PointerPressed(This,token) )
    ( (This)->lpVtbl->add_PointerMoved(This,handler,token) )
    ( (This)->lpVtbl->remove_PointerMoved(This,token) )
    ( (This)->lpVtbl->add_PointerReleased(This,handler,token) )
    ( (This)->lpVtbl->remove_PointerReleased(This,token) )
    ( (This)->lpVtbl->add_PointerEntered(This,handler,token) )
    ( (This)->lpVtbl->remove_PointerEntered(This,token) )
    ( (This)->lpVtbl->add_PointerExited(This,handler,token) )
    ( (This)->lpVtbl->remove_PointerExited(This,token) )
    ( (This)->lpVtbl->add_PointerCaptureLost(This,handler,token) )
    ( (This)->lpVtbl->remove_PointerCaptureLost(This,token) )
    ( (This)->lpVtbl->add_PointerCanceled(This,handler,token) )
    ( (This)->lpVtbl->remove_PointerCanceled(This,token) )
    ( (This)->lpVtbl->add_PointerWheelChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_PointerWheelChanged(This,token) )
    ( (This)->lpVtbl->add_Tapped(This,handler,token) )
    ( (This)->lpVtbl->remove_Tapped(This,token) )
    ( (This)->lpVtbl->add_DoubleTapped(This,handler,token) )
    ( (This)->lpVtbl->remove_DoubleTapped(This,token) )
    ( (This)->lpVtbl->add_Holding(This,handler,token) )
    ( (This)->lpVtbl->remove_Holding(This,token) )
    ( (This)->lpVtbl->add_RightTapped(This,handler,token) )
    ( (This)->lpVtbl->remove_RightTapped(This,token) )
    ( (This)->lpVtbl->add_ManipulationStarting(This,handler,token) )
    ( (This)->lpVtbl->remove_ManipulationStarting(This,token) )
    ( (This)->lpVtbl->add_ManipulationInertiaStarting(This,handler,token) )
    ( (This)->lpVtbl->remove_ManipulationInertiaStarting(This,token) )
    ( (This)->lpVtbl->add_ManipulationStarted(This,handler,token) )
    ( (This)->lpVtbl->remove_ManipulationStarted(This,token) )
    ( (This)->lpVtbl->add_ManipulationDelta(This,handler,token) )
    ( (This)->lpVtbl->remove_ManipulationDelta(This,token) )
    ( (This)->lpVtbl->add_ManipulationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_ManipulationCompleted(This,token) )
    ( (This)->lpVtbl->Measure(This,availableSize) )
    ( (This)->lpVtbl->Arrange(This,finalRect) )
    ( (This)->lpVtbl->CapturePointer(This,value,result) )
    ( (This)->lpVtbl->ReleasePointerCapture(This,value) )
    ( (This)->lpVtbl->ReleasePointerCaptures(This) )
    ( (This)->lpVtbl->AddHandler(This,routedEvent,handler,handledEventsToo) )
    ( (This)->lpVtbl->RemoveHandler(This,routedEvent,handler) )
    ( (This)->lpVtbl->TransformToVisual(This,visual,result) )
    ( (This)->lpVtbl->InvalidateMeasure(This) )
    ( (This)->lpVtbl->InvalidateArrange(This) )
    ( (This)->lpVtbl->UpdateLayout(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElement;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElement10[] = L"Windows.UI.Xaml.IUIElement10";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElement10Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement10 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement10 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement10 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement10 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement10 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement10 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActualOffset )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement10 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActualSize )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement10 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XamlRoot )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement10 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XamlRoot )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement10 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UIContext )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement10 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CIUIContext * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Shadow )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement10 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadow * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Shadow )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement10 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadow * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElement10Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElement10
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElement10Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActualOffset(This,value) )
    ( (This)->lpVtbl->get_ActualSize(This,value) )
    ( (This)->lpVtbl->get_XamlRoot(This,value) )
    ( (This)->lpVtbl->put_XamlRoot(This,value) )
    ( (This)->lpVtbl->get_UIContext(This,value) )
    ( (This)->lpVtbl->get_Shadow(This,value) )
    ( (This)->lpVtbl->put_Shadow(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElement10;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElement2[] = L"Windows.UI.Xaml.IUIElement2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElement2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CompositeMode )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CElementCompositeMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CompositeMode )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CElementCompositeMode value
        );
    HRESULT ( STDMETHODCALLTYPE *CancelDirectManipulations )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement2 * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElement2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElement2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElement2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CompositeMode(This,value) )
    ( (This)->lpVtbl->put_CompositeMode(This,value) )
    ( (This)->lpVtbl->CancelDirectManipulations(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElement2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElement3[] = L"Windows.UI.Xaml.IUIElement3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElement3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Transform3D )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3D * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Transform3D )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3D * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanDrag )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanDrag )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement3 * This,
                  boolean value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DragStarting )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement3 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDragStartingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DragStarting )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement3 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DropCompleted )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement3 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CDropCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DropCompleted )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement3 * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *StartDragAsync )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * pointerPoint,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElement3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElement3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElement3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Transform3D(This,value) )
    ( (This)->lpVtbl->put_Transform3D(This,value) )
    ( (This)->lpVtbl->get_CanDrag(This,value) )
    ( (This)->lpVtbl->put_CanDrag(This,value) )
    ( (This)->lpVtbl->add_DragStarting(This,handler,token) )
    ( (This)->lpVtbl->remove_DragStarting(This,token) )
    ( (This)->lpVtbl->add_DropCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_DropCompleted(This,token) )
    ( (This)->lpVtbl->StartDragAsync(This,pointerPoint,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElement3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElement4[] = L"Windows.UI.Xaml.IUIElement4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElement4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContextFlyout )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContextFlyout )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIFlyoutBase * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExitDisplayModeOnAccessKeyInvoked )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExitDisplayModeOnAccessKeyInvoked )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAccessKeyScope )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsAccessKeyScope )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccessKeyScopeOwner )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AccessKeyScopeOwner )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccessKey )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AccessKey )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                  __RPC__in HSTRING value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ContextRequested )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ContextRequested )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ContextCanceled )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CRoutedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ContextCanceled )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AccessKeyDisplayRequested )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AccessKeyDisplayRequested )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AccessKeyDisplayDismissed )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AccessKeyDisplayDismissed )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AccessKeyInvoked )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AccessKeyInvoked )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement4 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElement4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElement4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElement4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContextFlyout(This,value) )
    ( (This)->lpVtbl->put_ContextFlyout(This,value) )
    ( (This)->lpVtbl->get_ExitDisplayModeOnAccessKeyInvoked(This,value) )
    ( (This)->lpVtbl->put_ExitDisplayModeOnAccessKeyInvoked(This,value) )
    ( (This)->lpVtbl->get_IsAccessKeyScope(This,value) )
    ( (This)->lpVtbl->put_IsAccessKeyScope(This,value) )
    ( (This)->lpVtbl->get_AccessKeyScopeOwner(This,value) )
    ( (This)->lpVtbl->put_AccessKeyScopeOwner(This,value) )
    ( (This)->lpVtbl->get_AccessKey(This,value) )
    ( (This)->lpVtbl->put_AccessKey(This,value) )
    ( (This)->lpVtbl->add_ContextRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_ContextRequested(This,token) )
    ( (This)->lpVtbl->add_ContextCanceled(This,handler,token) )
    ( (This)->lpVtbl->remove_ContextCanceled(This,token) )
    ( (This)->lpVtbl->add_AccessKeyDisplayRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_AccessKeyDisplayRequested(This,token) )
    ( (This)->lpVtbl->add_AccessKeyDisplayDismissed(This,handler,token) )
    ( (This)->lpVtbl->remove_AccessKeyDisplayDismissed(This,token) )
    ( (This)->lpVtbl->add_AccessKeyInvoked(This,handler,token) )
    ( (This)->lpVtbl->remove_AccessKeyInvoked(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElement4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElement5[] = L"Windows.UI.Xaml.IUIElement5";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElement5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Lights )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CMedia__CXamlLight * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyTipPlacementMode )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyTipPlacementMode )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyTipHorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyTipHorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyTipVerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyTipVerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusKeyboardNavigation )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusKeyboardNavigationMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusKeyboardNavigation )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusKeyboardNavigationMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusUpNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusUpNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusDownNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusDownNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusLeftNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusLeftNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusRightNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusRightNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HighContrastAdjustment )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CElementHighContrastAdjustment * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HighContrastAdjustment )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                  __x_ABI_CWindows_CUI_CXaml_CElementHighContrastAdjustment value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TabFocusNavigation )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CKeyboardNavigationMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TabFocusNavigation )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CKeyboardNavigationMode value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_GettingFocus )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GettingFocus )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LosingFocus )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LosingFocus )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_NoFocusCandidateFound )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NoFocusCandidateFound )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *StartBringIntoView )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This
        );
                    HRESULT ( STDMETHODCALLTYPE *StartBringIntoViewWithOptions )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewOptions * options
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElement5Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElement5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElement5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Lights(This,value) )
    ( (This)->lpVtbl->get_KeyTipPlacementMode(This,value) )
    ( (This)->lpVtbl->put_KeyTipPlacementMode(This,value) )
    ( (This)->lpVtbl->get_KeyTipHorizontalOffset(This,value) )
    ( (This)->lpVtbl->put_KeyTipHorizontalOffset(This,value) )
    ( (This)->lpVtbl->get_KeyTipVerticalOffset(This,value) )
    ( (This)->lpVtbl->put_KeyTipVerticalOffset(This,value) )
    ( (This)->lpVtbl->get_XYFocusKeyboardNavigation(This,value) )
    ( (This)->lpVtbl->put_XYFocusKeyboardNavigation(This,value) )
    ( (This)->lpVtbl->get_XYFocusUpNavigationStrategy(This,value) )
    ( (This)->lpVtbl->put_XYFocusUpNavigationStrategy(This,value) )
    ( (This)->lpVtbl->get_XYFocusDownNavigationStrategy(This,value) )
    ( (This)->lpVtbl->put_XYFocusDownNavigationStrategy(This,value) )
    ( (This)->lpVtbl->get_XYFocusLeftNavigationStrategy(This,value) )
    ( (This)->lpVtbl->put_XYFocusLeftNavigationStrategy(This,value) )
    ( (This)->lpVtbl->get_XYFocusRightNavigationStrategy(This,value) )
    ( (This)->lpVtbl->put_XYFocusRightNavigationStrategy(This,value) )
    ( (This)->lpVtbl->get_HighContrastAdjustment(This,value) )
    ( (This)->lpVtbl->put_HighContrastAdjustment(This,value) )
    ( (This)->lpVtbl->get_TabFocusNavigation(This,value) )
    ( (This)->lpVtbl->put_TabFocusNavigation(This,value) )
    ( (This)->lpVtbl->add_GettingFocus(This,handler,token) )
    ( (This)->lpVtbl->remove_GettingFocus(This,token) )
    ( (This)->lpVtbl->add_LosingFocus(This,handler,token) )
    ( (This)->lpVtbl->remove_LosingFocus(This,token) )
    ( (This)->lpVtbl->add_NoFocusCandidateFound(This,handler,token) )
    ( (This)->lpVtbl->remove_NoFocusCandidateFound(This,token) )
    ( (This)->lpVtbl->StartBringIntoView(This) )
    ( (This)->lpVtbl->StartBringIntoViewWithOptions(This,options) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElement5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElement7[] = L"Windows.UI.Xaml.IUIElement7";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElement7Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement7 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement7 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement7 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement7 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement7 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement7 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KeyboardAccelerators )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement7 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CharacterReceived )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement7 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CharacterReceived )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement7 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ProcessKeyboardAccelerators )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement7 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ProcessKeyboardAccelerators )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement7 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PreviewKeyDown )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement7 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PreviewKeyDown )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement7 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PreviewKeyUp )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement7 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PreviewKeyUp )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement7 * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *TryInvokeKeyboardAccelerator )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement7 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * args
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElement7Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElement7
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElement7Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KeyboardAccelerators(This,value) )
    ( (This)->lpVtbl->add_CharacterReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_CharacterReceived(This,token) )
    ( (This)->lpVtbl->add_ProcessKeyboardAccelerators(This,handler,token) )
    ( (This)->lpVtbl->remove_ProcessKeyboardAccelerators(This,token) )
    ( (This)->lpVtbl->add_PreviewKeyDown(This,handler,token) )
    ( (This)->lpVtbl->remove_PreviewKeyDown(This,token) )
    ( (This)->lpVtbl->add_PreviewKeyUp(This,handler,token) )
    ( (This)->lpVtbl->remove_PreviewKeyUp(This,token) )
    ( (This)->lpVtbl->TryInvokeKeyboardAccelerator(This,args) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElement7;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElement8[] = L"Windows.UI.Xaml.IUIElement8";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElement8Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement8 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement8 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement8 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement8 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement8 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement8 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KeyTipTarget )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement8 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyTipTarget )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement8 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyboardAcceleratorPlacementTarget )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement8 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyboardAcceleratorPlacementTarget )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement8 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyboardAcceleratorPlacementMode )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement8 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CKeyboardAcceleratorPlacementMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyboardAcceleratorPlacementMode )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement8 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CKeyboardAcceleratorPlacementMode value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BringIntoViewRequested )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement8 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CBringIntoViewRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BringIntoViewRequested )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement8 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElement8Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElement8
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElement8Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KeyTipTarget(This,value) )
    ( (This)->lpVtbl->put_KeyTipTarget(This,value) )
    ( (This)->lpVtbl->get_KeyboardAcceleratorPlacementTarget(This,value) )
    ( (This)->lpVtbl->put_KeyboardAcceleratorPlacementTarget(This,value) )
    ( (This)->lpVtbl->get_KeyboardAcceleratorPlacementMode(This,value) )
    ( (This)->lpVtbl->put_KeyboardAcceleratorPlacementMode(This,value) )
    ( (This)->lpVtbl->add_BringIntoViewRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_BringIntoViewRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElement8;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElement9[] = L"Windows.UI.Xaml.IUIElement9";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElement9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanBeScrollAnchor )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanBeScrollAnchor )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OpacityTransition )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIScalarTransition * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OpacityTransition )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIScalarTransition * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Translation )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Translation )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TranslationTransition )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIVector3Transition * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TranslationTransition )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIVector3Transition * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rotation )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Rotation )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationTransition )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIScalarTransition * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationTransition )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIScalarTransition * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scale )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Scale )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleTransition )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIVector3Transition * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScaleTransition )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIVector3Transition * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransformMatrix )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransformMatrix )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterPoint )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterPoint )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationAxis )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationAxis )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    HRESULT ( STDMETHODCALLTYPE *StartAnimation )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * animation
        );
    HRESULT ( STDMETHODCALLTYPE *StopAnimation )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElement9 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * animation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElement9Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElement9
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElement9Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanBeScrollAnchor(This,value) )
    ( (This)->lpVtbl->put_CanBeScrollAnchor(This,value) )
    ( (This)->lpVtbl->get_OpacityTransition(This,value) )
    ( (This)->lpVtbl->put_OpacityTransition(This,value) )
    ( (This)->lpVtbl->get_Translation(This,value) )
    ( (This)->lpVtbl->put_Translation(This,value) )
    ( (This)->lpVtbl->get_TranslationTransition(This,value) )
    ( (This)->lpVtbl->put_TranslationTransition(This,value) )
    ( (This)->lpVtbl->get_Rotation(This,value) )
    ( (This)->lpVtbl->put_Rotation(This,value) )
    ( (This)->lpVtbl->get_RotationTransition(This,value) )
    ( (This)->lpVtbl->put_RotationTransition(This,value) )
    ( (This)->lpVtbl->get_Scale(This,value) )
    ( (This)->lpVtbl->put_Scale(This,value) )
    ( (This)->lpVtbl->get_ScaleTransition(This,value) )
    ( (This)->lpVtbl->put_ScaleTransition(This,value) )
    ( (This)->lpVtbl->get_TransformMatrix(This,value) )
    ( (This)->lpVtbl->put_TransformMatrix(This,value) )
    ( (This)->lpVtbl->get_CenterPoint(This,value) )
    ( (This)->lpVtbl->put_CenterPoint(This,value) )
    ( (This)->lpVtbl->get_RotationAxis(This,value) )
    ( (This)->lpVtbl->put_RotationAxis(This,value) )
    ( (This)->lpVtbl->StartAnimation(This,animation) )
    ( (This)->lpVtbl->StopAnimation(This,animation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElement9;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElementFactory[] = L"Windows.UI.Xaml.IUIElementFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElementFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElementFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElementOverrides[] = L"Windows.UI.Xaml.IUIElementOverrides";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnCreateAutomationPeer )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CIAutomationPeer * * result
        );
    HRESULT ( STDMETHODCALLTYPE *OnDisconnectVisualChildren )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides * This
        );
    HRESULT ( STDMETHODCALLTYPE *FindSubElementsForTouchTargeting )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides * This,
                  __x_ABI_CWindows_CFoundation_CPoint point,
                  __x_ABI_CWindows_CFoundation_CRect boundingRect,
                           __RPC__deref_out_opt __FIIterable_1___FIIterable_1_Windows__CFoundation__CPoint * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementOverridesVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementOverridesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OnCreateAutomationPeer(This,result) )
    ( (This)->lpVtbl->OnDisconnectVisualChildren(This) )
    ( (This)->lpVtbl->FindSubElementsForTouchTargeting(This,point,boundingRect,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElementOverrides7[] = L"Windows.UI.Xaml.IUIElementOverrides7";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides7Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides7 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides7 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides7 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides7 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides7 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides7 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetChildrenInTabFocusOrder )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides7 * This,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * * result
        );
    HRESULT ( STDMETHODCALLTYPE *OnProcessKeyboardAccelerators )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides7 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * args
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides7Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides7
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides7Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetChildrenInTabFocusOrder(This,result) )
    ( (This)->lpVtbl->OnProcessKeyboardAccelerators(This,args) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides7;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElementOverrides8[] = L"Windows.UI.Xaml.IUIElementOverrides8";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides8Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides8 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides8 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides8 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides8 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides8 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides8 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnKeyboardAcceleratorInvoked )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides8 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * args
        );
    HRESULT ( STDMETHODCALLTYPE *OnBringIntoViewRequested )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides8 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIBringIntoViewRequestedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides8Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides8
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides8Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OnKeyboardAcceleratorInvoked(This,args) )
    ( (This)->lpVtbl->OnBringIntoViewRequested(This,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides8;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElementOverrides9[] = L"Windows.UI.Xaml.IUIElementOverrides9";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides9 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides9 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides9 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides9 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides9 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides9 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *PopulatePropertyInfoOverride )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides9 * This,
                  __RPC__in HSTRING propertyName,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo * animationPropertyInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides9Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides9
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides9Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->PopulatePropertyInfoOverride(This,propertyName,animationPropertyInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElementOverrides9;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElementStatics[] = L"Windows.UI.Xaml.IUIElementStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KeyDownEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyUpEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerEnteredEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerPressedEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerMovedEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerReleasedEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerExitedEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerCaptureLostEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerCanceledEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerWheelChangedEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TappedEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DoubleTappedEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HoldingEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RightTappedEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ManipulationStartingEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ManipulationInertiaStartingEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ManipulationStartedEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ManipulationDeltaEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ManipulationCompletedEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragEnterEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragLeaveEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DragOverEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DropEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowDropProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OpacityProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClipProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RenderTransformProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProjectionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RenderTransformOriginProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHitTestVisibleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VisibilityProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UseLayoutRoundingProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransitionsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CacheModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTapEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDoubleTapEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRightTapEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHoldingEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ManipulationModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerCapturesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KeyDownEvent(This,value) )
    ( (This)->lpVtbl->get_KeyUpEvent(This,value) )
    ( (This)->lpVtbl->get_PointerEnteredEvent(This,value) )
    ( (This)->lpVtbl->get_PointerPressedEvent(This,value) )
    ( (This)->lpVtbl->get_PointerMovedEvent(This,value) )
    ( (This)->lpVtbl->get_PointerReleasedEvent(This,value) )
    ( (This)->lpVtbl->get_PointerExitedEvent(This,value) )
    ( (This)->lpVtbl->get_PointerCaptureLostEvent(This,value) )
    ( (This)->lpVtbl->get_PointerCanceledEvent(This,value) )
    ( (This)->lpVtbl->get_PointerWheelChangedEvent(This,value) )
    ( (This)->lpVtbl->get_TappedEvent(This,value) )
    ( (This)->lpVtbl->get_DoubleTappedEvent(This,value) )
    ( (This)->lpVtbl->get_HoldingEvent(This,value) )
    ( (This)->lpVtbl->get_RightTappedEvent(This,value) )
    ( (This)->lpVtbl->get_ManipulationStartingEvent(This,value) )
    ( (This)->lpVtbl->get_ManipulationInertiaStartingEvent(This,value) )
    ( (This)->lpVtbl->get_ManipulationStartedEvent(This,value) )
    ( (This)->lpVtbl->get_ManipulationDeltaEvent(This,value) )
    ( (This)->lpVtbl->get_ManipulationCompletedEvent(This,value) )
    ( (This)->lpVtbl->get_DragEnterEvent(This,value) )
    ( (This)->lpVtbl->get_DragLeaveEvent(This,value) )
    ( (This)->lpVtbl->get_DragOverEvent(This,value) )
    ( (This)->lpVtbl->get_DropEvent(This,value) )
    ( (This)->lpVtbl->get_AllowDropProperty(This,value) )
    ( (This)->lpVtbl->get_OpacityProperty(This,value) )
    ( (This)->lpVtbl->get_ClipProperty(This,value) )
    ( (This)->lpVtbl->get_RenderTransformProperty(This,value) )
    ( (This)->lpVtbl->get_ProjectionProperty(This,value) )
    ( (This)->lpVtbl->get_RenderTransformOriginProperty(This,value) )
    ( (This)->lpVtbl->get_IsHitTestVisibleProperty(This,value) )
    ( (This)->lpVtbl->get_VisibilityProperty(This,value) )
    ( (This)->lpVtbl->get_UseLayoutRoundingProperty(This,value) )
    ( (This)->lpVtbl->get_TransitionsProperty(This,value) )
    ( (This)->lpVtbl->get_CacheModeProperty(This,value) )
    ( (This)->lpVtbl->get_IsTapEnabledProperty(This,value) )
    ( (This)->lpVtbl->get_IsDoubleTapEnabledProperty(This,value) )
    ( (This)->lpVtbl->get_IsRightTapEnabledProperty(This,value) )
    ( (This)->lpVtbl->get_IsHoldingEnabledProperty(This,value) )
    ( (This)->lpVtbl->get_ManipulationModeProperty(This,value) )
    ( (This)->lpVtbl->get_PointerCapturesProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElementStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElementStatics10[] = L"Windows.UI.Xaml.IUIElementStatics10";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics10Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics10 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics10 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics10 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics10 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics10 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics10 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ShadowProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics10 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics10Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics10
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics10Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ShadowProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElementStatics10;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElementStatics2[] = L"Windows.UI.Xaml.IUIElementStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CompositeModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CompositeModeProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElementStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElementStatics3[] = L"Windows.UI.Xaml.IUIElementStatics3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Transform3DProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanDragProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryStartDirectManipulation )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * value,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Transform3DProperty(This,value) )
    ( (This)->lpVtbl->get_CanDragProperty(This,value) )
    ( (This)->lpVtbl->TryStartDirectManipulation(This,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElementStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElementStatics4[] = L"Windows.UI.Xaml.IUIElementStatics4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContextFlyoutProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExitDisplayModeOnAccessKeyInvokedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAccessKeyScopeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccessKeyScopeOwnerProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccessKeyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContextFlyoutProperty(This,value) )
    ( (This)->lpVtbl->get_ExitDisplayModeOnAccessKeyInvokedProperty(This,value) )
    ( (This)->lpVtbl->get_IsAccessKeyScopeProperty(This,value) )
    ( (This)->lpVtbl->get_AccessKeyScopeOwnerProperty(This,value) )
    ( (This)->lpVtbl->get_AccessKeyProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElementStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElementStatics5[] = L"Windows.UI.Xaml.IUIElementStatics5";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LightsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyTipPlacementModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyTipHorizontalOffsetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyTipVerticalOffsetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusKeyboardNavigationProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusUpNavigationStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusDownNavigationStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusLeftNavigationStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusRightNavigationStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HighContrastAdjustmentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TabFocusNavigationProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LightsProperty(This,value) )
    ( (This)->lpVtbl->get_KeyTipPlacementModeProperty(This,value) )
    ( (This)->lpVtbl->get_KeyTipHorizontalOffsetProperty(This,value) )
    ( (This)->lpVtbl->get_KeyTipVerticalOffsetProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusKeyboardNavigationProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusUpNavigationStrategyProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusDownNavigationStrategyProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusLeftNavigationStrategyProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusRightNavigationStrategyProperty(This,value) )
    ( (This)->lpVtbl->get_HighContrastAdjustmentProperty(This,value) )
    ( (This)->lpVtbl->get_TabFocusNavigationProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElementStatics5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElementStatics6[] = L"Windows.UI.Xaml.IUIElementStatics6";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_GettingFocusEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics6 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LosingFocusEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics6 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NoFocusCandidateFoundEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics6 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics6Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics6
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_GettingFocusEvent(This,value) )
    ( (This)->lpVtbl->get_LosingFocusEvent(This,value) )
    ( (This)->lpVtbl->get_NoFocusCandidateFoundEvent(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElementStatics6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElementStatics7[] = L"Windows.UI.Xaml.IUIElementStatics7";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics7Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics7 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics7 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics7 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics7 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics7 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics7 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PreviewKeyDownEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics7 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CharacterReceivedEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics7 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreviewKeyUpEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics7 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics7Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics7
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics7Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PreviewKeyDownEvent(This,value) )
    ( (This)->lpVtbl->get_CharacterReceivedEvent(This,value) )
    ( (This)->lpVtbl->get_PreviewKeyUpEvent(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElementStatics7;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElementStatics8[] = L"Windows.UI.Xaml.IUIElementStatics8";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BringIntoViewRequestedEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContextRequestedEvent )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyTipTargetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyboardAcceleratorPlacementTargetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyboardAcceleratorPlacementModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RegisterAsScrollPort )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BringIntoViewRequestedEvent(This,value) )
    ( (This)->lpVtbl->get_ContextRequestedEvent(This,value) )
    ( (This)->lpVtbl->get_KeyTipTargetProperty(This,value) )
    ( (This)->lpVtbl->get_KeyboardAcceleratorPlacementTargetProperty(This,value) )
    ( (This)->lpVtbl->get_KeyboardAcceleratorPlacementModeProperty(This,value) )
    ( (This)->lpVtbl->RegisterAsScrollPort(This,element) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElementStatics8;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElementStatics9[] = L"Windows.UI.Xaml.IUIElementStatics9";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics9 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics9 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics9 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics9 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics9 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics9 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanBeScrollAnchorProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics9 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics9Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics9
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementStatics9Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanBeScrollAnchorProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElementStatics9;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElementWeakCollection[] = L"Windows.UI.Xaml.IUIElementWeakCollection";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollectionVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUIElementWeakCollectionFactory[] = L"Windows.UI.Xaml.IUIElementWeakCollectionFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollectionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollectionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollectionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollectionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollectionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollectionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollectionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollectionFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollectionFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollectionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollectionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollectionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IUnhandledExceptionEventArgs[] = L"Windows.UI.Xaml.IUnhandledExceptionEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Exception )(
        __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgs * This,
                           __RPC__out HRESULT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Exception(This,value) )
    ( (This)->lpVtbl->get_Message(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IVector3Transition[] = L"Windows.UI.Xaml.IVector3Transition";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIVector3TransitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVector3Transition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVector3Transition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVector3Transition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVector3Transition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVector3Transition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVector3Transition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CUI_CXaml_CIVector3Transition * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CUI_CXaml_CIVector3Transition * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Components )(
        __x_ABI_CWindows_CUI_CXaml_CIVector3Transition * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CVector3TransitionComponents * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Components )(
        __x_ABI_CWindows_CUI_CXaml_CIVector3Transition * This,
                  __x_ABI_CWindows_CUI_CXaml_CVector3TransitionComponents value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIVector3TransitionVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIVector3Transition
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIVector3TransitionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->put_Duration(This,value) )
    ( (This)->lpVtbl->get_Components(This,value) )
    ( (This)->lpVtbl->put_Components(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIVector3Transition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IVector3TransitionFactory[] = L"Windows.UI.Xaml.IVector3TransitionFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIVector3TransitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVector3TransitionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVector3TransitionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVector3TransitionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVector3TransitionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVector3TransitionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVector3TransitionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIVector3TransitionFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIVector3Transition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIVector3TransitionFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIVector3TransitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIVector3TransitionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIVector3TransitionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IVisualState[] = L"Windows.UI.Xaml.IVisualState";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualState * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualState * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualState * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualState * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualState * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualState * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualState * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Storyboard )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualState * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CIStoryboard * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Storyboard )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualState * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CIStoryboard * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIVisualStateVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIVisualState
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Storyboard(This,value) )
    ( (This)->lpVtbl->put_Storyboard(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIVisualState;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IVisualState2[] = L"Windows.UI.Xaml.IVisualState2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIVisualState2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualState2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualState2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualState2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualState2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualState2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualState2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Setters )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualState2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CISetterBaseCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StateTriggers )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualState2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CStateTriggerBase * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIVisualState2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIVisualState2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIVisualState2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Setters(This,value) )
    ( (This)->lpVtbl->get_StateTriggers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIVisualState2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IVisualStateChangedEventArgs[] = L"Windows.UI.Xaml.IVisualStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OldState )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIVisualState * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OldState )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIVisualState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewState )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIVisualState * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NewState )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIVisualState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Control )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Control )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIControl * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OldState(This,value) )
    ( (This)->lpVtbl->put_OldState(This,value) )
    ( (This)->lpVtbl->get_NewState(This,value) )
    ( (This)->lpVtbl->put_NewState(This,value) )
    ( (This)->lpVtbl->get_Control(This,value) )
    ( (This)->lpVtbl->put_Control(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IVisualStateGroup[] = L"Windows.UI.Xaml.IVisualStateGroup";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Transitions )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CVisualTransition * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_States )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CVisualState * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentState )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIVisualState * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CurrentStateChanged )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CurrentStateChanged )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CurrentStateChanging )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIVisualStateChangedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CurrentStateChanging )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroupVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Transitions(This,value) )
    ( (This)->lpVtbl->get_States(This,value) )
    ( (This)->lpVtbl->get_CurrentState(This,value) )
    ( (This)->lpVtbl->add_CurrentStateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_CurrentStateChanged(This,token) )
    ( (This)->lpVtbl->add_CurrentStateChanging(This,handler,token) )
    ( (This)->lpVtbl->remove_CurrentStateChanging(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IVisualStateManager[] = L"Windows.UI.Xaml.IVisualStateManager";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIVisualStateManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIVisualStateManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IVisualStateManagerFactory[] = L"Windows.UI.Xaml.IVisualStateManagerFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIVisualStateManager * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IVisualStateManagerOverrides[] = L"Windows.UI.Xaml.IVisualStateManagerOverrides";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerOverrides * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerOverrides * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerOverrides * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerOverrides * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerOverrides * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerOverrides * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GoToStateCore )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerOverrides * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIControl * control,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * templateRoot,
                  __RPC__in HSTRING stateName,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * group,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIVisualState * state,
                  boolean useTransitions,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerOverridesVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerOverridesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GoToStateCore(This,control,templateRoot,stateName,group,state,useTransitions,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerOverrides;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IVisualStateManagerProtected[] = L"Windows.UI.Xaml.IVisualStateManagerProtected";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerProtectedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerProtected * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerProtected * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerProtected * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerProtected * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerProtected * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerProtected * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RaiseCurrentStateChanging )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerProtected * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * stateGroup,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIVisualState * oldState,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIVisualState * newState,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIControl * control
        );
    HRESULT ( STDMETHODCALLTYPE *RaiseCurrentStateChanged )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerProtected * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIVisualStateGroup * stateGroup,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIVisualState * oldState,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIVisualState * newState,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIControl * control
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerProtectedVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerProtected
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerProtectedVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RaiseCurrentStateChanging(This,stateGroup,oldState,newState,control) )
    ( (This)->lpVtbl->RaiseCurrentStateChanged(This,stateGroup,oldState,newState,control) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerProtected;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IVisualStateManagerStatics[] = L"Windows.UI.Xaml.IVisualStateManagerStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetVisualStateGroups )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * obj,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CVisualStateGroup * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomVisualStateManagerProperty )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCustomVisualStateManager )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * obj,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIVisualStateManager * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetCustomVisualStateManager )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * obj,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIVisualStateManager * value
        );
    HRESULT ( STDMETHODCALLTYPE *GoToState )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIControl * control,
                  __RPC__in HSTRING stateName,
                  boolean useTransitions,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetVisualStateGroups(This,obj,result) )
    ( (This)->lpVtbl->get_CustomVisualStateManagerProperty(This,value) )
    ( (This)->lpVtbl->GetCustomVisualStateManager(This,obj,result) )
    ( (This)->lpVtbl->SetCustomVisualStateManager(This,obj,value) )
    ( (This)->lpVtbl->GoToState(This,control,stateName,useTransitions,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIVisualStateManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IVisualTransition[] = L"Windows.UI.Xaml.IVisualTransition";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIVisualTransitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_GeneratedDuration )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CDuration * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_GeneratedDuration )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * This,
                  __x_ABI_CWindows_CUI_CXaml_CDuration value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GeneratedEasingFunction )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CIEasingFunctionBase * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_GeneratedEasingFunction )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CIEasingFunctionBase * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_To )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_To )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_From )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_From )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Storyboard )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CIStoryboard * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Storyboard )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CIStoryboard * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIVisualTransitionVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIVisualTransition
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIVisualTransitionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_GeneratedDuration(This,value) )
    ( (This)->lpVtbl->put_GeneratedDuration(This,value) )
    ( (This)->lpVtbl->get_GeneratedEasingFunction(This,value) )
    ( (This)->lpVtbl->put_GeneratedEasingFunction(This,value) )
    ( (This)->lpVtbl->get_To(This,value) )
    ( (This)->lpVtbl->put_To(This,value) )
    ( (This)->lpVtbl->get_From(This,value) )
    ( (This)->lpVtbl->put_From(This,value) )
    ( (This)->lpVtbl->get_Storyboard(This,value) )
    ( (This)->lpVtbl->put_Storyboard(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIVisualTransition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IVisualTransitionFactory[] = L"Windows.UI.Xaml.IVisualTransitionFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIVisualTransitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualTransitionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualTransitionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualTransitionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualTransitionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualTransitionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIVisualTransitionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CIVisualTransitionFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIVisualTransition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIVisualTransitionFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIVisualTransitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIVisualTransitionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIVisualTransitionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IWindow[] = L"Windows.UI.Xaml.IWindow";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIWindowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Bounds )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Visible )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Content )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CoreWindow )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Dispatcher )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Activated )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIWindowActivatedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Activated )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIWindowClosedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SizeChanged )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIWindowSizeChangedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SizeChanged )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_VisibilityChanged )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIWindowVisibilityChangedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VisibilityChanged )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Activate )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow * This
        );
    HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIWindowVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIWindow
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIWindowVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Bounds(This,value) )
    ( (This)->lpVtbl->get_Visible(This,value) )
    ( (This)->lpVtbl->get_Content(This,value) )
    ( (This)->lpVtbl->put_Content(This,value) )
    ( (This)->lpVtbl->get_CoreWindow(This,value) )
    ( (This)->lpVtbl->get_Dispatcher(This,value) )
    ( (This)->lpVtbl->add_Activated(This,handler,token) )
    ( (This)->lpVtbl->remove_Activated(This,token) )
    ( (This)->lpVtbl->add_Closed(This,handler,token) )
    ( (This)->lpVtbl->remove_Closed(This,token) )
    ( (This)->lpVtbl->add_SizeChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SizeChanged(This,token) )
    ( (This)->lpVtbl->add_VisibilityChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_VisibilityChanged(This,token) )
    ( (This)->lpVtbl->Activate(This) )
    ( (This)->lpVtbl->Close(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIWindow;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IWindow2[] = L"Windows.UI.Xaml.IWindow2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIWindow2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetTitleBar )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIWindow2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIWindow2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIWindow2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetTitleBar(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIWindow2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IWindow3[] = L"Windows.UI.Xaml.IWindow3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIWindow3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Compositor )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIWindow3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIWindow3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIWindow3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Compositor(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIWindow3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IWindow4[] = L"Windows.UI.Xaml.IWindow4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIWindow4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindow4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UIContext )(
        __x_ABI_CWindows_CUI_CXaml_CIWindow4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CIUIContext * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIWindow4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIWindow4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIWindow4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UIContext(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIWindow4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IWindowCreatedEventArgs[] = L"Windows.UI.Xaml.IWindowCreatedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Window )(
        __x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIWindow * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Window(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IWindowStatics[] = L"Windows.UI.Xaml.IWindowStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIWindowStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIWindowStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CUI_CXaml_CIWindowStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIWindow * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIWindowStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIWindowStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIWindowStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Current(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIWindowStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IXamlRoot[] = L"Windows.UI.Xaml.IXamlRoot";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIXamlRootVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RasterizationScale )(
        __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHostVisible )(
        __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UIContext )(
        __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CIUIContext * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Changed )(
        __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CXamlRoot_Windows__CUI__CXaml__CXamlRootChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Changed )(
        __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIXamlRootVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIXamlRoot
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIXamlRootVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Content(This,value) )
    ( (This)->lpVtbl->get_Size(This,value) )
    ( (This)->lpVtbl->get_RasterizationScale(This,value) )
    ( (This)->lpVtbl->get_IsHostVisible(This,value) )
    ( (This)->lpVtbl->get_UIContext(This,value) )
    ( (This)->lpVtbl->add_Changed(This,handler,token) )
    ( (This)->lpVtbl->remove_Changed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIXamlRoot;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_IXamlRootChangedEventArgs[] = L"Windows.UI.Xaml.IXamlRootChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CIXamlRootChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIXamlRootChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIXamlRootChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIXamlRootChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIXamlRootChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIXamlRootChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CIXamlRootChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CIXamlRootChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CIXamlRootChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CIXamlRootChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CIXamlRootChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_AdaptiveTrigger[] = L"Windows.UI.Xaml.AdaptiveTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Application[] = L"Windows.UI.Xaml.Application";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_ApplicationInitializationCallbackParams[] = L"Windows.UI.Xaml.ApplicationInitializationCallbackParams";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_BindingFailedEventArgs[] = L"Windows.UI.Xaml.BindingFailedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_BringIntoViewOptions[] = L"Windows.UI.Xaml.BringIntoViewOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_BringIntoViewRequestedEventArgs[] = L"Windows.UI.Xaml.BringIntoViewRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_BrushTransition[] = L"Windows.UI.Xaml.BrushTransition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_ColorPaletteResources[] = L"Windows.UI.Xaml.ColorPaletteResources";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_CornerRadiusHelper[] = L"Windows.UI.Xaml.CornerRadiusHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_DataContextChangedEventArgs[] = L"Windows.UI.Xaml.DataContextChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_DataTemplate[] = L"Windows.UI.Xaml.DataTemplate";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_DataTemplateKey[] = L"Windows.UI.Xaml.DataTemplateKey";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_DebugSettings[] = L"Windows.UI.Xaml.DebugSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_DependencyObject[] = L"Windows.UI.Xaml.DependencyObject";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_DependencyObjectCollection[] = L"Windows.UI.Xaml.DependencyObjectCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_DependencyProperty[] = L"Windows.UI.Xaml.DependencyProperty";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_DependencyPropertyChangedEventArgs[] = L"Windows.UI.Xaml.DependencyPropertyChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_DispatcherTimer[] = L"Windows.UI.Xaml.DispatcherTimer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_DragEventArgs[] = L"Windows.UI.Xaml.DragEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_DragOperationDeferral[] = L"Windows.UI.Xaml.DragOperationDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_DragStartingEventArgs[] = L"Windows.UI.Xaml.DragStartingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_DragUI[] = L"Windows.UI.Xaml.DragUI";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_DragUIOverride[] = L"Windows.UI.Xaml.DragUIOverride";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_DropCompletedEventArgs[] = L"Windows.UI.Xaml.DropCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_DurationHelper[] = L"Windows.UI.Xaml.DurationHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_EffectiveViewportChangedEventArgs[] = L"Windows.UI.Xaml.EffectiveViewportChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_ElementFactoryGetArgs[] = L"Windows.UI.Xaml.ElementFactoryGetArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_ElementFactoryRecycleArgs[] = L"Windows.UI.Xaml.ElementFactoryRecycleArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_ElementSoundPlayer[] = L"Windows.UI.Xaml.ElementSoundPlayer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_EventTrigger[] = L"Windows.UI.Xaml.EventTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_ExceptionRoutedEventArgs[] = L"Windows.UI.Xaml.ExceptionRoutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_FrameworkElement[] = L"Windows.UI.Xaml.FrameworkElement";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_FrameworkTemplate[] = L"Windows.UI.Xaml.FrameworkTemplate";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_FrameworkView[] = L"Windows.UI.Xaml.FrameworkView";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_FrameworkViewSource[] = L"Windows.UI.Xaml.FrameworkViewSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_GridLengthHelper[] = L"Windows.UI.Xaml.GridLengthHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_MediaFailedRoutedEventArgs[] = L"Windows.UI.Xaml.MediaFailedRoutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_PointHelper[] = L"Windows.UI.Xaml.PointHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_PropertyMetadata[] = L"Windows.UI.Xaml.PropertyMetadata";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_PropertyPath[] = L"Windows.UI.Xaml.PropertyPath";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_RectHelper[] = L"Windows.UI.Xaml.RectHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_ResourceDictionary[] = L"Windows.UI.Xaml.ResourceDictionary";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_RoutedEvent[] = L"Windows.UI.Xaml.RoutedEvent";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_RoutedEventArgs[] = L"Windows.UI.Xaml.RoutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_ScalarTransition[] = L"Windows.UI.Xaml.ScalarTransition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Setter[] = L"Windows.UI.Xaml.Setter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_SetterBase[] = L"Windows.UI.Xaml.SetterBase";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_SetterBaseCollection[] = L"Windows.UI.Xaml.SetterBaseCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_SizeChangedEventArgs[] = L"Windows.UI.Xaml.SizeChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_SizeHelper[] = L"Windows.UI.Xaml.SizeHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_StateTrigger[] = L"Windows.UI.Xaml.StateTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_StateTriggerBase[] = L"Windows.UI.Xaml.StateTriggerBase";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Style[] = L"Windows.UI.Xaml.Style";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_TargetPropertyPath[] = L"Windows.UI.Xaml.TargetPropertyPath";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_ThicknessHelper[] = L"Windows.UI.Xaml.ThicknessHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_TriggerAction[] = L"Windows.UI.Xaml.TriggerAction";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_TriggerActionCollection[] = L"Windows.UI.Xaml.TriggerActionCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_TriggerBase[] = L"Windows.UI.Xaml.TriggerBase";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_TriggerCollection[] = L"Windows.UI.Xaml.TriggerCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_UIElement[] = L"Windows.UI.Xaml.UIElement";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_UIElementWeakCollection[] = L"Windows.UI.Xaml.UIElementWeakCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_UnhandledExceptionEventArgs[] = L"Windows.UI.Xaml.UnhandledExceptionEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Vector3Transition[] = L"Windows.UI.Xaml.Vector3Transition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_VisualState[] = L"Windows.UI.Xaml.VisualState";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_VisualStateChangedEventArgs[] = L"Windows.UI.Xaml.VisualStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_VisualStateGroup[] = L"Windows.UI.Xaml.VisualStateGroup";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_VisualStateManager[] = L"Windows.UI.Xaml.VisualStateManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_VisualTransition[] = L"Windows.UI.Xaml.VisualTransition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Window[] = L"Windows.UI.Xaml.Window";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_WindowCreatedEventArgs[] = L"Windows.UI.Xaml.WindowCreatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_XamlRoot[] = L"Windows.UI.Xaml.XamlRoot";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_XamlRootChangedEventArgs[] = L"Windows.UI.Xaml.XamlRootChangedEventArgs";
       
       
#pragma clang diagnostic pop
