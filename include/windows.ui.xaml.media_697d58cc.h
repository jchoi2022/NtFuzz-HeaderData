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
#include "Windows.Media.Playback.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
#include "Windows.UI.Composition.h"
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Controls.h"
#include "Windows.UI.Xaml.Controls.Primitives.h"
#include "Windows.UI.Xaml.Media.Media3D.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventHandler __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventHandler __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush2 __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics2 __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegment __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegment;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBitmapCache __x_ABI_CWindows_CUI_CXaml_CMedia_CIBitmapCache;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushOverrides2 __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushOverrides2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheMode __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheMode;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheModeFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheModeFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTarget __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTarget;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics3 __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometry __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometry;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyStatics2 __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformOverrides __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformOverrides;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroup __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroup;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrush __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrush;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrushStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrushStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSource __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSource;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSourceFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSourceFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometry __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometry;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegment __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegment;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegmentStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegmentStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrush __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrush;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSourceLoadCompletedEventArgs __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSourceLoadCompletedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjection __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjection;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjectionStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjectionStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelper __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelper;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransform __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransform;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransformStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransformStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIMediaTransportControlsThumbnailRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CMedia_CIMediaTransportControlsThumbnailRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs2 __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometry __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometry;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegmentFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegmentFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegment __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegment;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegmentStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegmentStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegment __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegment;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegmentStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegmentStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegment __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegment;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegmentStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegmentStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjection __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjection;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjectionFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjectionFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegment __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegment;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometry __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometry;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometryStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometryStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderedEventArgs __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderingEventArgs __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderingEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrush __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrush;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrushFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrushFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrush __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrush;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrushFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrushFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrush __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrush;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransform __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransform;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadow __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadow;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadowFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadowFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrush __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrush;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadow __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadow;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadowFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadowFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrush __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrush;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroup __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroup;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroupStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroupStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransform __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransform;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelper __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelper;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics2 __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics3 __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBase __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBase;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseOverrides __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseOverrides;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseProtected __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseProtected;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightOverrides __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightOverrides;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightProtected __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightProtected;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightStatics;
typedef interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CBrush __FIIterator_1_Windows__CUI__CXaml__CMedia__CBrush;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CMedia__CBrush;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CBrush * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CBrush * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CBrush * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CBrush * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CBrush * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CBrush * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CBrush * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CMedia__CBrushVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CBrush
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CBrushVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CBrush __FIIterable_1_Windows__CUI__CXaml__CMedia__CBrush;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CMedia__CBrush;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CBrush * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CBrush * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CBrush * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CBrush * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CBrush * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CMedia__CBrush **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CMedia__CBrushVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CBrush
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CBrushVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometry __FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometry;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometry;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometry * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometry * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometry * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometry * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometryVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometry
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometryVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CGeometry __FIIterable_1_Windows__CUI__CXaml__CMedia__CGeometry;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CMedia__CGeometry;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CGeometryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CGeometry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CGeometry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CGeometry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CGeometry * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CGeometry * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CMedia__CGeometry **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CMedia__CGeometryVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CGeometry
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CGeometryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStop __FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStop;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStop;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStopVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStop * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStop * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStop * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStop * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStop * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStop * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStop * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStopVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStop
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStopVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CGradientStop __FIIterable_1_Windows__CUI__CXaml__CMedia__CGradientStop;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CMedia__CGradientStop;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CGradientStopVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CGradientStop * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CGradientStop * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CGradientStop * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CGradientStop * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CGradientStop * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CMedia__CGradientStop **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CMedia__CGradientStopVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CGradientStop
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CGradientStopVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigure __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigure;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigure;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigure * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigure * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigure * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigure * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigure * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigure * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigure * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigureVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigure
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigureVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathFigure __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathFigure;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CMedia__CPathFigure;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathFigureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathFigure * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathFigure * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathFigure * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathFigure * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathFigure * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathFigure **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathFigureVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathFigure
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathFigureVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegment __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegment;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegment;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegment * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegmentVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegment
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegmentVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathSegment __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathSegment;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CMedia__CPathSegment;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathSegment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathSegment * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CMedia__CPathSegment **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathSegmentVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathSegment
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CPathSegmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarker __FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarker;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarker;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarkerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarkerVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarker
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarkerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CTimelineMarker __FIIterable_1_Windows__CUI__CXaml__CMedia__CTimelineMarker;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CMedia__CTimelineMarker;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CTimelineMarkerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CMedia__CTimelineMarker **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CMedia__CTimelineMarkerVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CTimelineMarker
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CTimelineMarkerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CTransform __FIIterator_1_Windows__CUI__CXaml__CMedia__CTransform;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CMedia__CTransform;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTransform * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTransform * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTransform * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTransform * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTransform * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTransform * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTransform * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CMedia__CTransformVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CMedia__CTransform
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CMedia__CTransformVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CTransform __FIIterable_1_Windows__CUI__CXaml__CMedia__CTransform;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CMedia__CTransform;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CTransform * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CTransform * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CTransform * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CTransform * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CMedia__CTransform * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CMedia__CTransform **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CMedia__CTransformVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CMedia__CTransform
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CMedia__CTransformVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrush __FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrush;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrush;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrush * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrush * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                       __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrushVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrush
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrushVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometry __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometry;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometry;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometry * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                       __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometryVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometry
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometryVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStop __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStop;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStop;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStopVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStop * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStop * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                       __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStopVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStop
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStopVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigure __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigure;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigure;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigure * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigure * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                       __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigureVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigure
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigureVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegment __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegment;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegment;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                       __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegmentVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegmentVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarker __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarker;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarker;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarkerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                       __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarkerVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarker
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarkerVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransform __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransform;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransform;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransform * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransform * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                       __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransformVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransform
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransformVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CMedia__CBrush;
typedef struct __FIVector_1_Windows__CUI__CXaml__CMedia__CBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CMedia__CBrush **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CMedia__CBrushVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CMedia__CBrush
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CMedia__CBrushVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry;
typedef struct __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGeometry **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometryVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometryVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop;
typedef struct __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStopVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CMedia__CGradientStop **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStopVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStopVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure;
typedef struct __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathFigure **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigureVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigureVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment;
typedef struct __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CMedia__CPathSegment **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegmentVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegmentVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker;
typedef struct __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarkerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTimelineMarker **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarkerVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarker
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CMedia__CTimelineMarkerVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CMedia__CTransform;
typedef struct __FIVector_1_Windows__CUI__CXaml__CMedia__CTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CMedia__CTransform **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CMedia__CTransformVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CMedia__CTransformVtbl *lpVtbl;
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
typedef interface __FIEventHandler_1_Windows__CUI__CXaml__CMedia__CRenderedEventArgs __FIEventHandler_1_Windows__CUI__CXaml__CMedia__CRenderedEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CUI__CXaml__CMedia__CRenderedEventArgs;
typedef struct __FIEventHandler_1_Windows__CUI__CXaml__CMedia__CRenderedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CMedia__CRenderedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CMedia__CRenderedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CMedia__CRenderedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CMedia__CRenderedEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderedEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CUI__CXaml__CMedia__CRenderedEventArgsVtbl;
interface __FIEventHandler_1_Windows__CUI__CXaml__CMedia__CRenderedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CUI__CXaml__CMedia__CRenderedEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CIMediaElement __x_ABI_CWindows_CUI_CXaml_CControls_CIMediaElement;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaElement_Windows__CUI__CXaml__CMedia__CPartialMediaFailureDetectedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaElement_Windows__CUI__CXaml__CMedia__CPartialMediaFailureDetectedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaElement_Windows__CUI__CXaml__CMedia__CPartialMediaFailureDetectedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaElement_Windows__CUI__CXaml__CMedia__CPartialMediaFailureDetectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaElement_Windows__CUI__CXaml__CMedia__CPartialMediaFailureDetectedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaElement_Windows__CUI__CXaml__CMedia__CPartialMediaFailureDetectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaElement_Windows__CUI__CXaml__CMedia__CPartialMediaFailureDetectedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaElement_Windows__CUI__CXaml__CMedia__CPartialMediaFailureDetectedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIMediaElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaElement_Windows__CUI__CXaml__CMedia__CPartialMediaFailureDetectedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaElement_Windows__CUI__CXaml__CMedia__CPartialMediaFailureDetectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaElement_Windows__CUI__CXaml__CMedia__CPartialMediaFailureDetectedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CIMediaTransportControls __x_ABI_CWindows_CUI_CXaml_CControls_CIMediaTransportControls;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaTransportControls_Windows__CUI__CXaml__CMedia__CMediaTransportControlsThumbnailRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaTransportControls_Windows__CUI__CXaml__CMedia__CMediaTransportControlsThumbnailRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaTransportControls_Windows__CUI__CXaml__CMedia__CMediaTransportControlsThumbnailRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaTransportControls_Windows__CUI__CXaml__CMedia__CMediaTransportControlsThumbnailRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaTransportControls_Windows__CUI__CXaml__CMedia__CMediaTransportControlsThumbnailRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaTransportControls_Windows__CUI__CXaml__CMedia__CMediaTransportControlsThumbnailRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaTransportControls_Windows__CUI__CXaml__CMedia__CMediaTransportControlsThumbnailRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaTransportControls_Windows__CUI__CXaml__CMedia__CMediaTransportControlsThumbnailRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIMediaTransportControls * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIMediaTransportControlsThumbnailRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaTransportControls_Windows__CUI__CXaml__CMedia__CMediaTransportControlsThumbnailRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaTransportControls_Windows__CUI__CXaml__CMedia__CMediaTransportControlsThumbnailRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMediaTransportControls_Windows__CUI__CXaml__CMedia__CMediaTransportControlsThumbnailRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CLoadedImageSurface_Windows__CUI__CXaml__CMedia__CLoadedImageSourceLoadCompletedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CLoadedImageSurface_Windows__CUI__CXaml__CMedia__CLoadedImageSourceLoadCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CLoadedImageSurface_Windows__CUI__CXaml__CMedia__CLoadedImageSourceLoadCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CLoadedImageSurface_Windows__CUI__CXaml__CMedia__CLoadedImageSourceLoadCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CLoadedImageSurface_Windows__CUI__CXaml__CMedia__CLoadedImageSourceLoadCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CLoadedImageSurface_Windows__CUI__CXaml__CMedia__CLoadedImageSourceLoadCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CLoadedImageSurface_Windows__CUI__CXaml__CMedia__CLoadedImageSourceLoadCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CLoadedImageSurface_Windows__CUI__CXaml__CMedia__CLoadedImageSourceLoadCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSourceLoadCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CLoadedImageSurface_Windows__CUI__CXaml__CMedia__CLoadedImageSourceLoadCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CLoadedImageSurface_Windows__CUI__CXaml__CMedia__CLoadedImageSourceLoadCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CLoadedImageSurface_Windows__CUI__CXaml__CMedia__CLoadedImageSourceLoadCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIReference_1_double __FIReference_1_double;
EXTERN_C const IID IID___FIReference_1_double;
typedef struct __FIReference_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_double * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_double * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_double * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_double * This, __RPC__out double *value);
    END_INTERFACE
} __FIReference_1_doubleVtbl;
interface __FIReference_1_double
{
    CONST_VTBL struct __FIReference_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef interface __FIVectorView_1_Windows__CFoundation__CPoint __FIVectorView_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIVectorView_1_Windows__CFoundation__CPoint;
typedef struct __FIVectorView_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CFoundation_CPoint *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                       struct __x_ABI_CWindows_CFoundation_CPoint item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CFoundation_CPoint *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CFoundation__CPointVtbl;
interface __FIVectorView_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIVectorView_1_Windows__CFoundation__CPointVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CFoundation__CPoint __FIVector_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIVector_1_Windows__CFoundation__CPoint;
typedef struct __FIVector_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt struct __x_ABI_CWindows_CFoundation_CPoint *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                   unsigned int index,
                            __RPC__deref_out_opt struct __x_ABI_CWindows_CFoundation_CPoint *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CPoint **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                   __RPC__in struct __x_ABI_CWindows_CFoundation_CPoint item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                   unsigned int index,
                   __RPC__in struct __x_ABI_CWindows_CFoundation_CPoint item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                   unsigned int index,
                   __RPC__in struct __x_ABI_CWindows_CFoundation_CPoint item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This, __RPC__in struct __x_ABI_CWindows_CFoundation_CPoint item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CFoundation_CPoint *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) struct __x_ABI_CWindows_CFoundation_CPoint *value);
    END_INTERFACE
} __FIVector_1_Windows__CFoundation__CPointVtbl;
interface __FIVector_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIVector_1_Windows__CFoundation__CPointVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;
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
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIPopup;
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
typedef interface __FIIterator_1_double __FIIterator_1_double;
EXTERN_C const IID IID___FIIterator_1_double;
typedef struct __FIIterator_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_double * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_double * This, __RPC__out double *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_double * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_double * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_double * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) double *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_doubleVtbl;
interface __FIIterator_1_double
{
    CONST_VTBL struct __FIIterator_1_doubleVtbl *lpVtbl;
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
typedef interface __FIIterable_1_double __FIIterable_1_double;
EXTERN_C const IID IID___FIIterable_1_double;
typedef struct __FIIterable_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_double * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_double * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_double * This, __RPC__deref_out_opt __FIIterator_1_double **first);
    END_INTERFACE
} __FIIterable_1_doubleVtbl;
interface __FIIterable_1_double
{
    CONST_VTBL struct __FIIterable_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_double __FIVectorView_1_double;
EXTERN_C const IID IID___FIVectorView_1_double;
typedef struct __FIVectorView_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_double * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_double * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_double * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_double * This,
                                                    unsigned int index,
                                                             __RPC__out double *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_double * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_double * This,
                       double item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_double * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) double *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_doubleVtbl;
interface __FIVectorView_1_double
{
    CONST_VTBL struct __FIVectorView_1_doubleVtbl *lpVtbl;
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
typedef interface __FIVector_1_double __FIVector_1_double;
EXTERN_C const IID IID___FIVector_1_double;
typedef struct __FIVector_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_double * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_double * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_double * This, __RPC__deref_out_opt double *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_double * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_double * This,
                   unsigned int index,
                            __RPC__deref_out_opt double *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_double * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_double * This, __RPC__deref_out_opt __FIVectorView_1_double **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_double * This,
                   __RPC__in double item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_double * This,
                   unsigned int index,
                   __RPC__in double item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_double * This,
                   unsigned int index,
                   __RPC__in double item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_double * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_double * This, __RPC__in double item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_double * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) double *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_double * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) double *value);
    END_INTERFACE
} __FIVector_1_doubleVtbl;
interface __FIVector_1_double
{
    CONST_VTBL struct __FIVector_1_doubleVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef enum __x_ABI_CWindows_CMedia_CPlayback_CFailedMediaStreamKind __x_ABI_CWindows_CMedia_CPlayback_CFailedMediaStreamKind;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionBrush __x_ABI_CWindows_CUI_CComposition_CICompositionBrush;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionLight __x_ABI_CWindows_CUI_CComposition_CICompositionLight;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIAnimationObject __x_ABI_CWindows_CUI_CComposition_CIAnimationObject;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionSurface __x_ABI_CWindows_CUI_CComposition_CICompositionSurface;
typedef enum __x_ABI_CWindows_CUI_CXaml_CApplicationTheme __x_ABI_CWindows_CUI_CXaml_CApplicationTheme;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObject __x_ABI_CWindows_CUI_CXaml_CIDependencyObject;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollection __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollection;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIWindow __x_ABI_CWindows_CUI_CXaml_CIWindow;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIXamlRoot __x_ABI_CWindows_CUI_CXaml_CIXamlRoot;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CAcrylicBackgroundSource __x_ABI_CWindows_CUI_CXaml_CMedia_CAcrylicBackgroundSource;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CAlignmentX __x_ABI_CWindows_CUI_CXaml_CMedia_CAlignmentX;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CAlignmentY __x_ABI_CWindows_CUI_CXaml_CMedia_CAlignmentY;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CAudioCategory __x_ABI_CWindows_CUI_CXaml_CMedia_CAudioCategory;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CAudioDeviceType __x_ABI_CWindows_CUI_CXaml_CMedia_CAudioDeviceType;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CBrushMappingMode __x_ABI_CWindows_CUI_CXaml_CMedia_CBrushMappingMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CColorInterpolationMode __x_ABI_CWindows_CUI_CXaml_CMedia_CColorInterpolationMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CElementCompositeMode __x_ABI_CWindows_CUI_CXaml_CMedia_CElementCompositeMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CFastPlayFallbackBehaviour __x_ABI_CWindows_CUI_CXaml_CMedia_CFastPlayFallbackBehaviour;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CFillRule __x_ABI_CWindows_CUI_CXaml_CMedia_CFillRule;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CGradientSpreadMethod __x_ABI_CWindows_CUI_CXaml_CMedia_CGradientSpreadMethod;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CLoadedImageSourceLoadStatus __x_ABI_CWindows_CUI_CXaml_CMedia_CLoadedImageSourceLoadStatus;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CMediaCanPlayResponse __x_ABI_CWindows_CUI_CXaml_CMedia_CMediaCanPlayResponse;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CMediaElementState __x_ABI_CWindows_CUI_CXaml_CMedia_CMediaElementState;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineCap __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineCap;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineJoin __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineJoin;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CRevealBrushState __x_ABI_CWindows_CUI_CXaml_CMedia_CRevealBrushState;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CStereo3DVideoPackingMode __x_ABI_CWindows_CUI_CXaml_CMedia_CStereo3DVideoPackingMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CStereo3DVideoRenderMode __x_ABI_CWindows_CUI_CXaml_CMedia_CStereo3DVideoRenderMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CStretch __x_ABI_CWindows_CUI_CXaml_CMedia_CStretch;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CStyleSimulations __x_ABI_CWindows_CUI_CXaml_CMedia_CStyleSimulations;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CSweepDirection __x_ABI_CWindows_CUI_CXaml_CMedia_CSweepDirection;
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMatrix __x_ABI_CWindows_CUI_CXaml_CMedia_CMatrix;
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CAcrylicBackgroundSource
{
    AcrylicBackgroundSource_HostBackdrop = 0,
    AcrylicBackgroundSource_Backdrop = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CAlignmentX
{
    AlignmentX_Left = 0,
    AlignmentX_Center = 1,
    AlignmentX_Right = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CAlignmentY
{
    AlignmentY_Top = 0,
    AlignmentY_Center = 1,
    AlignmentY_Bottom = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CAudioCategory
{
    AudioCategory_Other = 0,
    AudioCategory_ForegroundOnlyMedia
    DEPRECATEDENUMERATOR("ForegroundOnlyMedia is deprecated and might not work on all platforms. For more info, see MSDN.")
     = 1,
    AudioCategory_BackgroundCapableMedia
    DEPRECATEDENUMERATOR("BackgroundCapableMedia is deprecated and might not work on all platforms. For more info, see MSDN.")
     = 2,
    AudioCategory_Communications = 3,
    AudioCategory_Alerts = 4,
    AudioCategory_SoundEffects = 5,
    AudioCategory_GameEffects = 6,
    AudioCategory_GameMedia = 7,
    AudioCategory_GameChat = 8,
    AudioCategory_Speech = 9,
    AudioCategory_Movie = 10,
    AudioCategory_Media = 11,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CAudioDeviceType
{
    AudioDeviceType_Console = 0,
    AudioDeviceType_Multimedia = 1,
    AudioDeviceType_Communications = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CBrushMappingMode
{
    BrushMappingMode_Absolute = 0,
    BrushMappingMode_RelativeToBoundingBox = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CColorInterpolationMode
{
    ColorInterpolationMode_ScRgbLinearInterpolation = 0,
    ColorInterpolationMode_SRgbLinearInterpolation = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CElementCompositeMode
{
    ElementCompositeMode_Inherit = 0,
    ElementCompositeMode_SourceOver = 1,
    ElementCompositeMode_MinBlend = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CFastPlayFallbackBehaviour
{
    FastPlayFallbackBehaviour_Skip = 0,
    FastPlayFallbackBehaviour_Hide = 1,
    FastPlayFallbackBehaviour_Disable = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CFillRule
{
    FillRule_EvenOdd = 0,
    FillRule_Nonzero = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CGradientSpreadMethod
{
    GradientSpreadMethod_Pad = 0,
    GradientSpreadMethod_Reflect = 1,
    GradientSpreadMethod_Repeat = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CLoadedImageSourceLoadStatus
{
    LoadedImageSourceLoadStatus_Success = 0,
    LoadedImageSourceLoadStatus_NetworkError = 1,
    LoadedImageSourceLoadStatus_InvalidFormat = 2,
    LoadedImageSourceLoadStatus_Other = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CMediaCanPlayResponse
{
    MediaCanPlayResponse_NotSupported = 0,
    MediaCanPlayResponse_Maybe = 1,
    MediaCanPlayResponse_Probably = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CMediaElementState
{
    MediaElementState_Closed = 0,
    MediaElementState_Opening = 1,
    MediaElementState_Buffering = 2,
    MediaElementState_Playing = 3,
    MediaElementState_Paused = 4,
    MediaElementState_Stopped = 5,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineCap
{
    PenLineCap_Flat = 0,
    PenLineCap_Square = 1,
    PenLineCap_Round = 2,
    PenLineCap_Triangle = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineJoin
{
    PenLineJoin_Miter = 0,
    PenLineJoin_Bevel = 1,
    PenLineJoin_Round = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CRevealBrushState
{
    RevealBrushState_Normal = 0,
    RevealBrushState_PointerOver = 1,
    RevealBrushState_Pressed = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CStereo3DVideoPackingMode
{
    Stereo3DVideoPackingMode_None = 0,
    Stereo3DVideoPackingMode_SideBySide = 1,
    Stereo3DVideoPackingMode_TopBottom = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CStereo3DVideoRenderMode
{
    Stereo3DVideoRenderMode_Mono = 0,
    Stereo3DVideoRenderMode_Stereo = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CStretch
{
    Stretch_None = 0,
    Stretch_Fill = 1,
    Stretch_Uniform = 2,
    Stretch_UniformToFill = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CStyleSimulations
{
    StyleSimulations_None = 0,
    StyleSimulations_BoldSimulation = 1,
    StyleSimulations_ItalicSimulation = 2,
    StyleSimulations_BoldItalicSimulation = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CSweepDirection
{
    SweepDirection_Counterclockwise = 0,
    SweepDirection_Clockwise = 1,
};
struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMatrix
{
    DOUBLE M11;
    DOUBLE M12;
    DOUBLE M21;
    DOUBLE M22;
    DOUBLE OffsetX;
    DOUBLE OffsetY;
};
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IAcrylicBrush[] = L"Windows.UI.Xaml.Media.IAcrylicBrush";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BackgroundSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CAcrylicBackgroundSource * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BackgroundSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CAcrylicBackgroundSource value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TintColor )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TintColor )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TintOpacity )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TintOpacity )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TintTransitionDuration )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TintTransitionDuration )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlwaysUseFallback )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AlwaysUseFallback )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BackgroundSource(This,value) )
    ( (This)->lpVtbl->put_BackgroundSource(This,value) )
    ( (This)->lpVtbl->get_TintColor(This,value) )
    ( (This)->lpVtbl->put_TintColor(This,value) )
    ( (This)->lpVtbl->get_TintOpacity(This,value) )
    ( (This)->lpVtbl->put_TintOpacity(This,value) )
    ( (This)->lpVtbl->get_TintTransitionDuration(This,value) )
    ( (This)->lpVtbl->put_TintTransitionDuration(This,value) )
    ( (This)->lpVtbl->get_AlwaysUseFallback(This,value) )
    ( (This)->lpVtbl->put_AlwaysUseFallback(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IAcrylicBrush2[] = L"Windows.UI.Xaml.Media.IAcrylicBrush2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TintLuminosityOpacity )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush2 * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TintLuminosityOpacity )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush2 * This,
                  __RPC__in_opt __FIReference_1_double * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TintLuminosityOpacity(This,value) )
    ( (This)->lpVtbl->put_TintLuminosityOpacity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IAcrylicBrushFactory[] = L"Windows.UI.Xaml.Media.IAcrylicBrushFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrush * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IAcrylicBrushStatics[] = L"Windows.UI.Xaml.Media.IAcrylicBrushStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BackgroundSourceProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TintColorProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TintOpacityProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TintTransitionDurationProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlwaysUseFallbackProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BackgroundSourceProperty(This,value) )
    ( (This)->lpVtbl->get_TintColorProperty(This,value) )
    ( (This)->lpVtbl->get_TintOpacityProperty(This,value) )
    ( (This)->lpVtbl->get_TintTransitionDurationProperty(This,value) )
    ( (This)->lpVtbl->get_AlwaysUseFallbackProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IAcrylicBrushStatics2[] = L"Windows.UI.Xaml.Media.IAcrylicBrushStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TintLuminosityOpacityProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TintLuminosityOpacityProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIAcrylicBrushStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IArcSegment[] = L"Windows.UI.Xaml.Media.IArcSegment";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Point )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Point )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Size )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment * This,
                  __x_ABI_CWindows_CFoundation_CSize value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationAngle )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationAngle )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsLargeArc )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsLargeArc )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SweepDirection )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CSweepDirection * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SweepDirection )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CSweepDirection value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Point(This,value) )
    ( (This)->lpVtbl->put_Point(This,value) )
    ( (This)->lpVtbl->get_Size(This,value) )
    ( (This)->lpVtbl->put_Size(This,value) )
    ( (This)->lpVtbl->get_RotationAngle(This,value) )
    ( (This)->lpVtbl->put_RotationAngle(This,value) )
    ( (This)->lpVtbl->get_IsLargeArc(This,value) )
    ( (This)->lpVtbl->put_IsLargeArc(This,value) )
    ( (This)->lpVtbl->get_SweepDirection(This,value) )
    ( (This)->lpVtbl->put_SweepDirection(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IArcSegmentStatics[] = L"Windows.UI.Xaml.Media.IArcSegmentStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SizeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationAngleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsLargeArcProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SweepDirectionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointProperty(This,value) )
    ( (This)->lpVtbl->get_SizeProperty(This,value) )
    ( (This)->lpVtbl->get_RotationAngleProperty(This,value) )
    ( (This)->lpVtbl->get_IsLargeArcProperty(This,value) )
    ( (This)->lpVtbl->get_SweepDirectionProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIArcSegmentStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IBezierSegment[] = L"Windows.UI.Xaml.Media.IBezierSegment";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Point1 )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegment * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Point1 )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegment * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Point2 )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegment * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Point2 )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegment * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Point3 )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegment * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Point3 )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegment * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Point1(This,value) )
    ( (This)->lpVtbl->put_Point1(This,value) )
    ( (This)->lpVtbl->get_Point2(This,value) )
    ( (This)->lpVtbl->put_Point2(This,value) )
    ( (This)->lpVtbl->get_Point3(This,value) )
    ( (This)->lpVtbl->put_Point3(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IBezierSegmentStatics[] = L"Windows.UI.Xaml.Media.IBezierSegmentStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Point1Property )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Point2Property )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Point3Property )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Point1Property(This,value) )
    ( (This)->lpVtbl->get_Point2Property(This,value) )
    ( (This)->lpVtbl->get_Point3Property(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIBezierSegmentStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IBitmapCache[] = L"Windows.UI.Xaml.Media.IBitmapCache";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIBitmapCacheVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBitmapCache * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBitmapCache * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBitmapCache * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBitmapCache * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBitmapCache * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBitmapCache * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIBitmapCacheVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBitmapCache
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIBitmapCacheVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIBitmapCache;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IBrush[] = L"Windows.UI.Xaml.Media.IBrush";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Opacity )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Opacity )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Transform )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Transform )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RelativeTransform )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RelativeTransform )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Opacity(This,value) )
    ( (This)->lpVtbl->put_Opacity(This,value) )
    ( (This)->lpVtbl->get_Transform(This,value) )
    ( (This)->lpVtbl->put_Transform(This,value) )
    ( (This)->lpVtbl->get_RelativeTransform(This,value) )
    ( (This)->lpVtbl->put_RelativeTransform(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IBrushFactory[] = L"Windows.UI.Xaml.Media.IBrushFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IBrushOverrides2[] = L"Windows.UI.Xaml.Media.IBrushOverrides2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushOverrides2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushOverrides2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushOverrides2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushOverrides2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushOverrides2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushOverrides2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushOverrides2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *PopulatePropertyInfoOverride )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushOverrides2 * This,
                  __RPC__in HSTRING propertyName,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo * animationPropertyInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushOverrides2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushOverrides2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushOverrides2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->PopulatePropertyInfoOverride(This,propertyName,animationPropertyInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushOverrides2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IBrushStatics[] = L"Windows.UI.Xaml.Media.IBrushStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OpacityProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransformProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RelativeTransformProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OpacityProperty(This,value) )
    ( (This)->lpVtbl->get_TransformProperty(This,value) )
    ( (This)->lpVtbl->get_RelativeTransformProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIBrushStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ICacheMode[] = L"Windows.UI.Xaml.Media.ICacheMode";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheMode * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheMode * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheMode * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheMode * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheMode * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheMode * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheModeVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheMode
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheModeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CICacheMode;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ICacheModeFactory[] = L"Windows.UI.Xaml.Media.ICacheModeFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheModeFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheModeFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheModeFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheModeFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheModeFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheModeFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheModeFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheModeFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheMode * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheModeFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheModeFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CICacheModeFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CICacheModeFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ICompositeTransform[] = L"Windows.UI.Xaml.Media.ICompositeTransform";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CenterX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScaleX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScaleY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SkewX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SkewX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SkewY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SkewY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rotation )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Rotation )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TranslateX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TranslateX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TranslateY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TranslateY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CenterX(This,value) )
    ( (This)->lpVtbl->put_CenterX(This,value) )
    ( (This)->lpVtbl->get_CenterY(This,value) )
    ( (This)->lpVtbl->put_CenterY(This,value) )
    ( (This)->lpVtbl->get_ScaleX(This,value) )
    ( (This)->lpVtbl->put_ScaleX(This,value) )
    ( (This)->lpVtbl->get_ScaleY(This,value) )
    ( (This)->lpVtbl->put_ScaleY(This,value) )
    ( (This)->lpVtbl->get_SkewX(This,value) )
    ( (This)->lpVtbl->put_SkewX(This,value) )
    ( (This)->lpVtbl->get_SkewY(This,value) )
    ( (This)->lpVtbl->put_SkewY(This,value) )
    ( (This)->lpVtbl->get_Rotation(This,value) )
    ( (This)->lpVtbl->put_Rotation(This,value) )
    ( (This)->lpVtbl->get_TranslateX(This,value) )
    ( (This)->lpVtbl->put_TranslateX(This,value) )
    ( (This)->lpVtbl->get_TranslateY(This,value) )
    ( (This)->lpVtbl->put_TranslateY(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransform;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ICompositeTransformStatics[] = L"Windows.UI.Xaml.Media.ICompositeTransformStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CenterXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SkewXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SkewYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TranslateXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TranslateYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CenterXProperty(This,value) )
    ( (This)->lpVtbl->get_CenterYProperty(This,value) )
    ( (This)->lpVtbl->get_ScaleXProperty(This,value) )
    ( (This)->lpVtbl->get_ScaleYProperty(This,value) )
    ( (This)->lpVtbl->get_SkewXProperty(This,value) )
    ( (This)->lpVtbl->get_SkewYProperty(This,value) )
    ( (This)->lpVtbl->get_RotationProperty(This,value) )
    ( (This)->lpVtbl->get_TranslateXProperty(This,value) )
    ( (This)->lpVtbl->get_TranslateYProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CICompositeTransformStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ICompositionTarget[] = L"Windows.UI.Xaml.Media.ICompositionTarget";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTarget * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTarget * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTarget * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTarget * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTarget * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTarget * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTarget
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTarget;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ICompositionTargetStatics[] = L"Windows.UI.Xaml.Media.ICompositionTargetStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Rendering )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Rendering )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SurfaceContentsLost )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SurfaceContentsLost )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Rendering(This,handler,token) )
    ( (This)->lpVtbl->remove_Rendering(This,token) )
    ( (This)->lpVtbl->add_SurfaceContentsLost(This,handler,token) )
    ( (This)->lpVtbl->remove_SurfaceContentsLost(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ICompositionTargetStatics3[] = L"Windows.UI.Xaml.Media.ICompositionTargetStatics3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Rendered )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics3 * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CUI__CXaml__CMedia__CRenderedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Rendered )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics3 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Rendered(This,handler,token) )
    ( (This)->lpVtbl->remove_Rendered(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CICompositionTargetStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IEllipseGeometry[] = L"Windows.UI.Xaml.Media.IEllipseGeometry";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometry * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometry * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometry * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometry * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometry * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometry * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Center )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometry * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Center )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometry * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RadiusX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometry * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RadiusX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometry * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RadiusY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometry * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RadiusY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometry * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometry
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Center(This,value) )
    ( (This)->lpVtbl->put_Center(This,value) )
    ( (This)->lpVtbl->get_RadiusX(This,value) )
    ( (This)->lpVtbl->put_RadiusX(This,value) )
    ( (This)->lpVtbl->get_RadiusY(This,value) )
    ( (This)->lpVtbl->put_RadiusY(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometry;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IEllipseGeometryStatics[] = L"Windows.UI.Xaml.Media.IEllipseGeometryStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CenterProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RadiusXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RadiusYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CenterProperty(This,value) )
    ( (This)->lpVtbl->get_RadiusXProperty(This,value) )
    ( (This)->lpVtbl->get_RadiusYProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIEllipseGeometryStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IFontFamily[] = L"Windows.UI.Xaml.Media.IFontFamily";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Source(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IFontFamilyFactory[] = L"Windows.UI.Xaml.Media.IFontFamilyFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithName )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyFactory * This,
                  __RPC__in HSTRING familyName,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceWithName(This,familyName,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IFontFamilyStatics2[] = L"Windows.UI.Xaml.Media.IFontFamilyStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_XamlAutoFontFamily )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_XamlAutoFontFamily(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamilyStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IGeneralTransform[] = L"Windows.UI.Xaml.Media.IGeneralTransform";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Inverse )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TransformPoint )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform * This,
                  __x_ABI_CWindows_CFoundation_CPoint point,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryTransform )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform * This,
                  __x_ABI_CWindows_CFoundation_CPoint inPoint,
                   __RPC__out __x_ABI_CWindows_CFoundation_CPoint * outPoint,
                           __RPC__out boolean * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *TransformBounds )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform * This,
                  __x_ABI_CWindows_CFoundation_CRect rect,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Inverse(This,value) )
    ( (This)->lpVtbl->TransformPoint(This,point,result) )
    ( (This)->lpVtbl->TryTransform(This,inPoint,outPoint,returnValue) )
    ( (This)->lpVtbl->TransformBounds(This,rect,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IGeneralTransformFactory[] = L"Windows.UI.Xaml.Media.IGeneralTransformFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IGeneralTransformOverrides[] = L"Windows.UI.Xaml.Media.IGeneralTransformOverrides";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformOverrides * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformOverrides * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformOverrides * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformOverrides * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformOverrides * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformOverrides * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InverseCore )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformOverrides * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransform * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryTransformCore )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformOverrides * This,
                  __x_ABI_CWindows_CFoundation_CPoint inPoint,
                   __RPC__out __x_ABI_CWindows_CFoundation_CPoint * outPoint,
                           __RPC__out boolean * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *TransformBoundsCore )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformOverrides * This,
                  __x_ABI_CWindows_CFoundation_CRect rect,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformOverridesVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformOverridesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InverseCore(This,value) )
    ( (This)->lpVtbl->TryTransformCore(This,inPoint,outPoint,returnValue) )
    ( (This)->lpVtbl->TransformBoundsCore(This,rect,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIGeneralTransformOverrides;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IGeometry[] = L"Windows.UI.Xaml.Media.IGeometry";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Transform )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Transform )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bounds )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Transform(This,value) )
    ( (This)->lpVtbl->put_Transform(This,value) )
    ( (This)->lpVtbl->get_Bounds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IGeometryFactory[] = L"Windows.UI.Xaml.Media.IGeometryFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IGeometryGroup[] = L"Windows.UI.Xaml.Media.IGeometryGroup";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FillRule )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroup * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CFillRule * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FillRule )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroup * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CFillRule value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Children )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroup * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Children )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroup * This,
                  __RPC__in_opt __FIVector_1_Windows__CUI__CXaml__CMedia__CGeometry * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FillRule(This,value) )
    ( (This)->lpVtbl->put_FillRule(This,value) )
    ( (This)->lpVtbl->get_Children(This,value) )
    ( (This)->lpVtbl->put_Children(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IGeometryGroupStatics[] = L"Windows.UI.Xaml.Media.IGeometryGroupStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FillRuleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChildrenProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FillRuleProperty(This,value) )
    ( (This)->lpVtbl->get_ChildrenProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryGroupStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IGeometryStatics[] = L"Windows.UI.Xaml.Media.IGeometryStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Empty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StandardFlatteningTolerance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryStatics * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransformProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Empty(This,value) )
    ( (This)->lpVtbl->get_StandardFlatteningTolerance(This,value) )
    ( (This)->lpVtbl->get_TransformProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometryStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IGradientBrush[] = L"Windows.UI.Xaml.Media.IGradientBrush";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SpreadMethod )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CGradientSpreadMethod * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SpreadMethod )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CGradientSpreadMethod value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MappingMode )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CBrushMappingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MappingMode )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CBrushMappingMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColorInterpolationMode )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CColorInterpolationMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ColorInterpolationMode )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CColorInterpolationMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GradientStops )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_GradientStops )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush * This,
                  __RPC__in_opt __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SpreadMethod(This,value) )
    ( (This)->lpVtbl->put_SpreadMethod(This,value) )
    ( (This)->lpVtbl->get_MappingMode(This,value) )
    ( (This)->lpVtbl->put_MappingMode(This,value) )
    ( (This)->lpVtbl->get_ColorInterpolationMode(This,value) )
    ( (This)->lpVtbl->put_ColorInterpolationMode(This,value) )
    ( (This)->lpVtbl->get_GradientStops(This,value) )
    ( (This)->lpVtbl->put_GradientStops(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IGradientBrushFactory[] = L"Windows.UI.Xaml.Media.IGradientBrushFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrush * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IGradientBrushStatics[] = L"Windows.UI.Xaml.Media.IGradientBrushStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SpreadMethodProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MappingModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColorInterpolationModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GradientStopsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SpreadMethodProperty(This,value) )
    ( (This)->lpVtbl->get_MappingModeProperty(This,value) )
    ( (This)->lpVtbl->get_ColorInterpolationModeProperty(This,value) )
    ( (This)->lpVtbl->get_GradientStopsProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientBrushStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IGradientStop[] = L"Windows.UI.Xaml.Media.IGradientStop";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Offset )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Color(This,value) )
    ( (This)->lpVtbl->put_Color(This,value) )
    ( (This)->lpVtbl->get_Offset(This,value) )
    ( (This)->lpVtbl->put_Offset(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStop;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IGradientStopStatics[] = L"Windows.UI.Xaml.Media.IGradientStopStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ColorProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OffsetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ColorProperty(This,value) )
    ( (This)->lpVtbl->get_OffsetProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIGradientStopStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IImageBrush[] = L"Windows.UI.Xaml.Media.IImageBrush";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ImageSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrush * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ImageSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrush * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSource * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ImageFailed )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrush * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ImageFailed )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrush * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ImageOpened )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrush * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ImageOpened )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrush * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrushVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ImageSource(This,value) )
    ( (This)->lpVtbl->put_ImageSource(This,value) )
    ( (This)->lpVtbl->add_ImageFailed(This,handler,token) )
    ( (This)->lpVtbl->remove_ImageFailed(This,token) )
    ( (This)->lpVtbl->add_ImageOpened(This,handler,token) )
    ( (This)->lpVtbl->remove_ImageOpened(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IImageBrushStatics[] = L"Windows.UI.Xaml.Media.IImageBrushStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrushStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrushStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrushStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrushStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrushStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrushStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrushStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ImageSourceProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrushStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrushStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrushStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ImageSourceProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIImageBrushStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IImageSource[] = L"Windows.UI.Xaml.Media.IImageSource";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSourceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IImageSourceFactory[] = L"Windows.UI.Xaml.Media.IImageSourceFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSourceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSourceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSourceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSourceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSourceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSourceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSourceFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSourceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIImageSourceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ILineGeometry[] = L"Windows.UI.Xaml.Media.ILineGeometry";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometry * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometry * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometry * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometry * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometry * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometry * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StartPoint )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometry * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartPoint )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometry * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndPoint )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometry * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EndPoint )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometry * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometry
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StartPoint(This,value) )
    ( (This)->lpVtbl->put_StartPoint(This,value) )
    ( (This)->lpVtbl->get_EndPoint(This,value) )
    ( (This)->lpVtbl->put_EndPoint(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometry;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ILineGeometryStatics[] = L"Windows.UI.Xaml.Media.ILineGeometryStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StartPointProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndPointProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StartPointProperty(This,value) )
    ( (This)->lpVtbl->get_EndPointProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CILineGeometryStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ILineSegment[] = L"Windows.UI.Xaml.Media.ILineSegment";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Point )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegment * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Point )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegment * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegmentVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Point(This,value) )
    ( (This)->lpVtbl->put_Point(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ILineSegmentStatics[] = L"Windows.UI.Xaml.Media.ILineSegmentStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegmentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegmentStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegmentStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegmentStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegmentStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegmentStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegmentStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegmentStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegmentStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegmentStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegmentStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CILineSegmentStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ILinearGradientBrush[] = L"Windows.UI.Xaml.Media.ILinearGradientBrush";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StartPoint )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrush * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartPoint )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrush * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndPoint )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrush * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EndPoint )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrush * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StartPoint(This,value) )
    ( (This)->lpVtbl->put_StartPoint(This,value) )
    ( (This)->lpVtbl->get_EndPoint(This,value) )
    ( (This)->lpVtbl->put_EndPoint(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ILinearGradientBrushFactory[] = L"Windows.UI.Xaml.Media.ILinearGradientBrushFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithGradientStopCollectionAndAngle )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushFactory * This,
                  __RPC__in_opt __FIVector_1_Windows__CUI__CXaml__CMedia__CGradientStop * gradientStopCollection,
                  DOUBLE angle,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrush * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceWithGradientStopCollectionAndAngle(This,gradientStopCollection,angle,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ILinearGradientBrushStatics[] = L"Windows.UI.Xaml.Media.ILinearGradientBrushStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StartPointProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndPointProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StartPointProperty(This,value) )
    ( (This)->lpVtbl->get_EndPointProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CILinearGradientBrushStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ILoadedImageSourceLoadCompletedEventArgs[] = L"Windows.UI.Xaml.Media.ILoadedImageSourceLoadCompletedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSourceLoadCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSourceLoadCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSourceLoadCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSourceLoadCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSourceLoadCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSourceLoadCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSourceLoadCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSourceLoadCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CLoadedImageSourceLoadStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSourceLoadCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSourceLoadCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSourceLoadCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSourceLoadCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ILoadedImageSurface[] = L"Windows.UI.Xaml.Media.ILoadedImageSurface";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DecodedPhysicalSize )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DecodedSize )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NaturalSize )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LoadCompleted )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CLoadedImageSurface_Windows__CUI__CXaml__CMedia__CLoadedImageSourceLoadCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LoadCompleted )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DecodedPhysicalSize(This,value) )
    ( (This)->lpVtbl->get_DecodedSize(This,value) )
    ( (This)->lpVtbl->get_NaturalSize(This,value) )
    ( (This)->lpVtbl->add_LoadCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_LoadCompleted(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ILoadedImageSurfaceStatics[] = L"Windows.UI.Xaml.Media.ILoadedImageSurfaceStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *StartLoadFromUriWithSize )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __x_ABI_CWindows_CFoundation_CSize desiredMaxSize,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *StartLoadFromUri )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *StartLoadFromStreamWithSize )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                  __x_ABI_CWindows_CFoundation_CSize desiredMaxSize,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *StartLoadFromStream )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurface * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StartLoadFromUriWithSize(This,uri,desiredMaxSize,result) )
    ( (This)->lpVtbl->StartLoadFromUri(This,uri,result) )
    ( (This)->lpVtbl->StartLoadFromStreamWithSize(This,stream,desiredMaxSize,result) )
    ( (This)->lpVtbl->StartLoadFromStream(This,stream,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CILoadedImageSurfaceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IMatrix3DProjection[] = L"Windows.UI.Xaml.Media.IMatrix3DProjection";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProjectionMatrix )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjection * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProjectionMatrix )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjection * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjectionVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProjectionMatrix(This,value) )
    ( (This)->lpVtbl->put_ProjectionMatrix(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IMatrix3DProjectionStatics[] = L"Windows.UI.Xaml.Media.IMatrix3DProjectionStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjectionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjectionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjectionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjectionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjectionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjectionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjectionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProjectionMatrixProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjectionStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjectionStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjectionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjectionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProjectionMatrixProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrix3DProjectionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IMatrixHelper[] = L"Windows.UI.Xaml.Media.IMatrixHelper";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelper * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IMatrixHelperStatics[] = L"Windows.UI.Xaml.Media.IMatrixHelperStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Identity )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CMatrix * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromElements )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperStatics * This,
                  DOUBLE m11,
                  DOUBLE m12,
                  DOUBLE m21,
                  DOUBLE m22,
                  DOUBLE offsetX,
                  DOUBLE offsetY,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CMatrix * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsIdentity )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CMatrix target,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *Transform )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CMatrix target,
                  __x_ABI_CWindows_CFoundation_CPoint point,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Identity(This,value) )
    ( (This)->lpVtbl->FromElements(This,m11,m12,m21,m22,offsetX,offsetY,result) )
    ( (This)->lpVtbl->GetIsIdentity(This,target,result) )
    ( (This)->lpVtbl->Transform(This,target,point,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IMatrixTransform[] = L"Windows.UI.Xaml.Media.IMatrixTransform";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransform * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransform * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransform * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransform * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransform * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransform * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Matrix )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransform * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CMatrix * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Matrix )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransform * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CMatrix value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransformVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransform
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransformVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Matrix(This,value) )
    ( (This)->lpVtbl->put_Matrix(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransform;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IMatrixTransformStatics[] = L"Windows.UI.Xaml.Media.IMatrixTransformStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransformStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransformStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransformStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransformStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransformStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransformStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransformStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MatrixProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransformStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransformStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransformStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MatrixProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIMatrixTransformStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IMediaTransportControlsThumbnailRequestedEventArgs[] = L"Windows.UI.Xaml.Media.IMediaTransportControlsThumbnailRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIMediaTransportControlsThumbnailRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMediaTransportControlsThumbnailRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMediaTransportControlsThumbnailRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMediaTransportControlsThumbnailRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMediaTransportControlsThumbnailRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMediaTransportControlsThumbnailRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIMediaTransportControlsThumbnailRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetThumbnailImage )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIMediaTransportControlsThumbnailRequestedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * source
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIMediaTransportControlsThumbnailRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIMediaTransportControlsThumbnailRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIMediaTransportControlsThumbnailRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIMediaTransportControlsThumbnailRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetThumbnailImage(This,source) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIMediaTransportControlsThumbnailRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IPartialMediaFailureDetectedEventArgs[] = L"Windows.UI.Xaml.Media.IPartialMediaFailureDetectedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StreamKind )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CFailedMediaStreamKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StreamKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IPartialMediaFailureDetectedEventArgs2[] = L"Windows.UI.Xaml.Media.IPartialMediaFailureDetectedEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs2 * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIPartialMediaFailureDetectedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IPathFigure[] = L"Windows.UI.Xaml.Media.IPathFigure";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Segments )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Segments )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * This,
                  __RPC__in_opt __FIVector_1_Windows__CUI__CXaml__CMedia__CPathSegment * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartPoint )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartPoint )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsClosed )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsClosed )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsFilled )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsFilled )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Segments(This,value) )
    ( (This)->lpVtbl->put_Segments(This,value) )
    ( (This)->lpVtbl->get_StartPoint(This,value) )
    ( (This)->lpVtbl->put_StartPoint(This,value) )
    ( (This)->lpVtbl->get_IsClosed(This,value) )
    ( (This)->lpVtbl->put_IsClosed(This,value) )
    ( (This)->lpVtbl->get_IsFilled(This,value) )
    ( (This)->lpVtbl->put_IsFilled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigure;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IPathFigureStatics[] = L"Windows.UI.Xaml.Media.IPathFigureStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SegmentsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartPointProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsClosedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsFilledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SegmentsProperty(This,value) )
    ( (This)->lpVtbl->get_StartPointProperty(This,value) )
    ( (This)->lpVtbl->get_IsClosedProperty(This,value) )
    ( (This)->lpVtbl->get_IsFilledProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIPathFigureStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IPathGeometry[] = L"Windows.UI.Xaml.Media.IPathGeometry";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometry * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometry * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometry * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometry * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometry * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometry * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FillRule )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometry * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CFillRule * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FillRule )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometry * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CFillRule value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Figures )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometry * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Figures )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometry * This,
                  __RPC__in_opt __FIVector_1_Windows__CUI__CXaml__CMedia__CPathFigure * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometry
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FillRule(This,value) )
    ( (This)->lpVtbl->put_FillRule(This,value) )
    ( (This)->lpVtbl->get_Figures(This,value) )
    ( (This)->lpVtbl->put_Figures(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometry;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IPathGeometryStatics[] = L"Windows.UI.Xaml.Media.IPathGeometryStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FillRuleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FiguresProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FillRuleProperty(This,value) )
    ( (This)->lpVtbl->get_FiguresProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIPathGeometryStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IPathSegment[] = L"Windows.UI.Xaml.Media.IPathSegment";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegmentVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IPathSegmentFactory[] = L"Windows.UI.Xaml.Media.IPathSegmentFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegmentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegmentFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegmentFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegmentFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegmentFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegmentFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegmentFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegmentFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegmentFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegmentFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIPathSegmentFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IPlaneProjection[] = L"Windows.UI.Xaml.Media.IPlaneProjection";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocalOffsetX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LocalOffsetX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalOffsetY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LocalOffsetY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalOffsetZ )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LocalOffsetZ )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationZ )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationZ )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterOfRotationX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterOfRotationX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterOfRotationY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterOfRotationY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterOfRotationZ )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterOfRotationZ )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GlobalOffsetX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_GlobalOffsetX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GlobalOffsetY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_GlobalOffsetY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GlobalOffsetZ )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_GlobalOffsetZ )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProjectionMatrix )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocalOffsetX(This,value) )
    ( (This)->lpVtbl->put_LocalOffsetX(This,value) )
    ( (This)->lpVtbl->get_LocalOffsetY(This,value) )
    ( (This)->lpVtbl->put_LocalOffsetY(This,value) )
    ( (This)->lpVtbl->get_LocalOffsetZ(This,value) )
    ( (This)->lpVtbl->put_LocalOffsetZ(This,value) )
    ( (This)->lpVtbl->get_RotationX(This,value) )
    ( (This)->lpVtbl->put_RotationX(This,value) )
    ( (This)->lpVtbl->get_RotationY(This,value) )
    ( (This)->lpVtbl->put_RotationY(This,value) )
    ( (This)->lpVtbl->get_RotationZ(This,value) )
    ( (This)->lpVtbl->put_RotationZ(This,value) )
    ( (This)->lpVtbl->get_CenterOfRotationX(This,value) )
    ( (This)->lpVtbl->put_CenterOfRotationX(This,value) )
    ( (This)->lpVtbl->get_CenterOfRotationY(This,value) )
    ( (This)->lpVtbl->put_CenterOfRotationY(This,value) )
    ( (This)->lpVtbl->get_CenterOfRotationZ(This,value) )
    ( (This)->lpVtbl->put_CenterOfRotationZ(This,value) )
    ( (This)->lpVtbl->get_GlobalOffsetX(This,value) )
    ( (This)->lpVtbl->put_GlobalOffsetX(This,value) )
    ( (This)->lpVtbl->get_GlobalOffsetY(This,value) )
    ( (This)->lpVtbl->put_GlobalOffsetY(This,value) )
    ( (This)->lpVtbl->get_GlobalOffsetZ(This,value) )
    ( (This)->lpVtbl->put_GlobalOffsetZ(This,value) )
    ( (This)->lpVtbl->get_ProjectionMatrix(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IPlaneProjectionStatics[] = L"Windows.UI.Xaml.Media.IPlaneProjectionStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocalOffsetXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalOffsetYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalOffsetZProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationZProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterOfRotationXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterOfRotationYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterOfRotationZProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GlobalOffsetXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GlobalOffsetYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GlobalOffsetZProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProjectionMatrixProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocalOffsetXProperty(This,value) )
    ( (This)->lpVtbl->get_LocalOffsetYProperty(This,value) )
    ( (This)->lpVtbl->get_LocalOffsetZProperty(This,value) )
    ( (This)->lpVtbl->get_RotationXProperty(This,value) )
    ( (This)->lpVtbl->get_RotationYProperty(This,value) )
    ( (This)->lpVtbl->get_RotationZProperty(This,value) )
    ( (This)->lpVtbl->get_CenterOfRotationXProperty(This,value) )
    ( (This)->lpVtbl->get_CenterOfRotationYProperty(This,value) )
    ( (This)->lpVtbl->get_CenterOfRotationZProperty(This,value) )
    ( (This)->lpVtbl->get_GlobalOffsetXProperty(This,value) )
    ( (This)->lpVtbl->get_GlobalOffsetYProperty(This,value) )
    ( (This)->lpVtbl->get_GlobalOffsetZProperty(This,value) )
    ( (This)->lpVtbl->get_ProjectionMatrixProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIPlaneProjectionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IPolyBezierSegment[] = L"Windows.UI.Xaml.Media.IPolyBezierSegment";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Points )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegment * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CFoundation__CPoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Points )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegment * This,
                  __RPC__in_opt __FIVector_1_Windows__CFoundation__CPoint * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegmentVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Points(This,value) )
    ( (This)->lpVtbl->put_Points(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IPolyBezierSegmentStatics[] = L"Windows.UI.Xaml.Media.IPolyBezierSegmentStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegmentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegmentStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegmentStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegmentStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegmentStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegmentStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegmentStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegmentStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegmentStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegmentStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegmentStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointsProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyBezierSegmentStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IPolyLineSegment[] = L"Windows.UI.Xaml.Media.IPolyLineSegment";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Points )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegment * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CFoundation__CPoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Points )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegment * This,
                  __RPC__in_opt __FIVector_1_Windows__CFoundation__CPoint * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegmentVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Points(This,value) )
    ( (This)->lpVtbl->put_Points(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IPolyLineSegmentStatics[] = L"Windows.UI.Xaml.Media.IPolyLineSegmentStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegmentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegmentStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegmentStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegmentStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegmentStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegmentStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegmentStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegmentStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegmentStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegmentStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegmentStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointsProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyLineSegmentStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IPolyQuadraticBezierSegment[] = L"Windows.UI.Xaml.Media.IPolyQuadraticBezierSegment";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Points )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegment * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CFoundation__CPoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Points )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegment * This,
                  __RPC__in_opt __FIVector_1_Windows__CFoundation__CPoint * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegmentVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Points(This,value) )
    ( (This)->lpVtbl->put_Points(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IPolyQuadraticBezierSegmentStatics[] = L"Windows.UI.Xaml.Media.IPolyQuadraticBezierSegmentStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegmentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegmentStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegmentStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegmentStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegmentStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegmentStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegmentStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegmentStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegmentStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegmentStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegmentStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointsProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIPolyQuadraticBezierSegmentStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IProjection[] = L"Windows.UI.Xaml.Media.IProjection";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjection * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjectionVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIProjection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IProjectionFactory[] = L"Windows.UI.Xaml.Media.IProjectionFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjectionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjectionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjectionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjectionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjectionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjectionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjectionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjectionFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjectionFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjectionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIProjectionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIProjectionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IQuadraticBezierSegment[] = L"Windows.UI.Xaml.Media.IQuadraticBezierSegment";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Point1 )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegment * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Point1 )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegment * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Point2 )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegment * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Point2 )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegment * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Point1(This,value) )
    ( (This)->lpVtbl->put_Point1(This,value) )
    ( (This)->lpVtbl->get_Point2(This,value) )
    ( (This)->lpVtbl->put_Point2(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IQuadraticBezierSegmentStatics[] = L"Windows.UI.Xaml.Media.IQuadraticBezierSegmentStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Point1Property )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Point2Property )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Point1Property(This,value) )
    ( (This)->lpVtbl->get_Point2Property(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIQuadraticBezierSegmentStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IRateChangedRoutedEventArgs[] = L"Windows.UI.Xaml.Media.IRateChangedRoutedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIRateChangedRoutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IRectangleGeometry[] = L"Windows.UI.Xaml.Media.IRectangleGeometry";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometry * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometry * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometry * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometry * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometry * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometry * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Rect )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometry * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Rect )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometry * This,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometry
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Rect(This,value) )
    ( (This)->lpVtbl->put_Rect(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometry;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IRectangleGeometryStatics[] = L"Windows.UI.Xaml.Media.IRectangleGeometryStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometryStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometryStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometryStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometryStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometryStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometryStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometryStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RectProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometryStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometryStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometryStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometryStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RectProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIRectangleGeometryStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IRenderedEventArgs[] = L"Windows.UI.Xaml.Media.IRenderedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FrameDuration )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FrameDuration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IRenderingEventArgs[] = L"Windows.UI.Xaml.Media.IRenderingEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RenderingTime )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderingEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RenderingTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIRenderingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IRevealBackgroundBrush[] = L"Windows.UI.Xaml.Media.IRevealBackgroundBrush";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrushVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IRevealBackgroundBrushFactory[] = L"Windows.UI.Xaml.Media.IRevealBackgroundBrushFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrushFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrushFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrushFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrushFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrushFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrushFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrushFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrushFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrush * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrushFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrushFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrushFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBackgroundBrushFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IRevealBorderBrush[] = L"Windows.UI.Xaml.Media.IRevealBorderBrush";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrushVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IRevealBorderBrushFactory[] = L"Windows.UI.Xaml.Media.IRevealBorderBrushFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrushFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrushFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrushFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrushFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrushFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrushFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrushFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrushFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrush * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrushFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrushFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrushFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBorderBrushFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IRevealBrush[] = L"Windows.UI.Xaml.Media.IRevealBrush";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrush * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrush * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TargetTheme )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrush * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CApplicationTheme * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TargetTheme )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrush * This,
                  __x_ABI_CWindows_CUI_CXaml_CApplicationTheme value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlwaysUseFallback )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrush * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AlwaysUseFallback )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrush * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Color(This,value) )
    ( (This)->lpVtbl->put_Color(This,value) )
    ( (This)->lpVtbl->get_TargetTheme(This,value) )
    ( (This)->lpVtbl->put_TargetTheme(This,value) )
    ( (This)->lpVtbl->get_AlwaysUseFallback(This,value) )
    ( (This)->lpVtbl->put_AlwaysUseFallback(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IRevealBrushFactory[] = L"Windows.UI.Xaml.Media.IRevealBrushFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrush * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IRevealBrushStatics[] = L"Windows.UI.Xaml.Media.IRevealBrushStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ColorProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TargetThemeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlwaysUseFallbackProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetState )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CRevealBrushState value
        );
    HRESULT ( STDMETHODCALLTYPE *GetState )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CRevealBrushState * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ColorProperty(This,value) )
    ( (This)->lpVtbl->get_TargetThemeProperty(This,value) )
    ( (This)->lpVtbl->get_AlwaysUseFallbackProperty(This,value) )
    ( (This)->lpVtbl->get_StateProperty(This,value) )
    ( (This)->lpVtbl->SetState(This,element,value) )
    ( (This)->lpVtbl->GetState(This,element,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIRevealBrushStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IRotateTransform[] = L"Windows.UI.Xaml.Media.IRotateTransform";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransform * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransform * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransform * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransform * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransform * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransform * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CenterX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransform * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransform * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Angle )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Angle )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransform * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransform
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CenterX(This,value) )
    ( (This)->lpVtbl->put_CenterX(This,value) )
    ( (This)->lpVtbl->get_CenterY(This,value) )
    ( (This)->lpVtbl->put_CenterY(This,value) )
    ( (This)->lpVtbl->get_Angle(This,value) )
    ( (This)->lpVtbl->put_Angle(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransform;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IRotateTransformStatics[] = L"Windows.UI.Xaml.Media.IRotateTransformStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CenterXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AngleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CenterXProperty(This,value) )
    ( (This)->lpVtbl->get_CenterYProperty(This,value) )
    ( (This)->lpVtbl->get_AngleProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIRotateTransformStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IScaleTransform[] = L"Windows.UI.Xaml.Media.IScaleTransform";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CenterX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScaleX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScaleY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CenterX(This,value) )
    ( (This)->lpVtbl->put_CenterX(This,value) )
    ( (This)->lpVtbl->get_CenterY(This,value) )
    ( (This)->lpVtbl->put_CenterY(This,value) )
    ( (This)->lpVtbl->get_ScaleX(This,value) )
    ( (This)->lpVtbl->put_ScaleX(This,value) )
    ( (This)->lpVtbl->get_ScaleY(This,value) )
    ( (This)->lpVtbl->put_ScaleY(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransform;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IScaleTransformStatics[] = L"Windows.UI.Xaml.Media.IScaleTransformStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CenterXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CenterXProperty(This,value) )
    ( (This)->lpVtbl->get_CenterYProperty(This,value) )
    ( (This)->lpVtbl->get_ScaleXProperty(This,value) )
    ( (This)->lpVtbl->get_ScaleYProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIScaleTransformStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IShadow[] = L"Windows.UI.Xaml.Media.IShadow";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadow * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadow * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadow * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadow * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadow * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadow * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadowVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadow
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadowVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIShadow;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IShadowFactory[] = L"Windows.UI.Xaml.Media.IShadowFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadowFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadowFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadowFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadowFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadowFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadowFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadowFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadowFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadowFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIShadowFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIShadowFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ISkewTransform[] = L"Windows.UI.Xaml.Media.ISkewTransform";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CenterX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AngleX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AngleX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AngleY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AngleY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CenterX(This,value) )
    ( (This)->lpVtbl->put_CenterX(This,value) )
    ( (This)->lpVtbl->get_CenterY(This,value) )
    ( (This)->lpVtbl->put_CenterY(This,value) )
    ( (This)->lpVtbl->get_AngleX(This,value) )
    ( (This)->lpVtbl->put_AngleX(This,value) )
    ( (This)->lpVtbl->get_AngleY(This,value) )
    ( (This)->lpVtbl->put_AngleY(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransform;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ISkewTransformStatics[] = L"Windows.UI.Xaml.Media.ISkewTransformStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CenterXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AngleXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AngleYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CenterXProperty(This,value) )
    ( (This)->lpVtbl->get_CenterYProperty(This,value) )
    ( (This)->lpVtbl->get_AngleXProperty(This,value) )
    ( (This)->lpVtbl->get_AngleYProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CISkewTransformStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ISolidColorBrush[] = L"Windows.UI.Xaml.Media.ISolidColorBrush";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrush * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrush * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Color(This,value) )
    ( (This)->lpVtbl->put_Color(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ISolidColorBrushFactory[] = L"Windows.UI.Xaml.Media.ISolidColorBrushFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithColor )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushFactory * This,
                  __x_ABI_CWindows_CUI_CColor color,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrush * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceWithColor(This,color,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ISolidColorBrushStatics[] = L"Windows.UI.Xaml.Media.ISolidColorBrushStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ColorProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ColorProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CISolidColorBrushStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IThemeShadow[] = L"Windows.UI.Xaml.Media.IThemeShadow";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadow * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadow * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadow * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadow * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadow * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadow * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Receivers )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElementWeakCollection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadowVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadow
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadowVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Receivers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadow;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IThemeShadowFactory[] = L"Windows.UI.Xaml.Media.IThemeShadowFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadowFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadowFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadowFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadowFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadowFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadowFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadowFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadowFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadow * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadowFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadowFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadowFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIThemeShadowFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ITileBrush[] = L"Windows.UI.Xaml.Media.ITileBrush";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AlignmentX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrush * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CAlignmentX * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AlignmentX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrush * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CAlignmentX value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlignmentY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrush * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CAlignmentY * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AlignmentY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrush * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CAlignmentY value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Stretch )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrush * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CStretch * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Stretch )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrush * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CStretch value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AlignmentX(This,value) )
    ( (This)->lpVtbl->put_AlignmentX(This,value) )
    ( (This)->lpVtbl->get_AlignmentY(This,value) )
    ( (This)->lpVtbl->put_AlignmentY(This,value) )
    ( (This)->lpVtbl->get_Stretch(This,value) )
    ( (This)->lpVtbl->put_Stretch(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ITileBrushFactory[] = L"Windows.UI.Xaml.Media.ITileBrushFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrush * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ITileBrushStatics[] = L"Windows.UI.Xaml.Media.ITileBrushStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AlignmentXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlignmentYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StretchProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AlignmentXProperty(This,value) )
    ( (This)->lpVtbl->get_AlignmentYProperty(This,value) )
    ( (This)->lpVtbl->get_StretchProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CITileBrushStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ITimelineMarker[] = L"Windows.UI.Xaml.Media.ITimelineMarker";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Time )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Time )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Type )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Time(This,value) )
    ( (This)->lpVtbl->put_Time(This,value) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->put_Type(This,value) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->put_Text(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ITimelineMarkerRoutedEventArgs[] = L"Windows.UI.Xaml.Media.ITimelineMarkerRoutedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Marker )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Marker )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarker * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Marker(This,value) )
    ( (This)->lpVtbl->put_Marker(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerRoutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ITimelineMarkerStatics[] = L"Windows.UI.Xaml.Media.ITimelineMarkerStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TimeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TextProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TimeProperty(This,value) )
    ( (This)->lpVtbl->get_TypeProperty(This,value) )
    ( (This)->lpVtbl->get_TextProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CITimelineMarkerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ITransform[] = L"Windows.UI.Xaml.Media.ITransform";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CITransform;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ITransformFactory[] = L"Windows.UI.Xaml.Media.ITransformFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CITransformFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ITransformGroup[] = L"Windows.UI.Xaml.Media.ITransformGroup";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Children )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroup * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Children )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroup * This,
                  __RPC__in_opt __FIVector_1_Windows__CUI__CXaml__CMedia__CTransform * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroup * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CMatrix * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroupVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Children(This,value) )
    ( (This)->lpVtbl->put_Children(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ITransformGroupStatics[] = L"Windows.UI.Xaml.Media.ITransformGroupStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroupStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroupStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroupStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroupStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroupStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroupStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroupStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChildrenProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroupStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroupStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroupStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroupStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChildrenProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CITransformGroupStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ITranslateTransform[] = L"Windows.UI.Xaml.Media.ITranslateTransform";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransform * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransform * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransform * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransform * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransform * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransform * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_X )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_X )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransform * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Y )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransform * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Y )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransform * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransform
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_X(This,value) )
    ( (This)->lpVtbl->put_X(This,value) )
    ( (This)->lpVtbl->get_Y(This,value) )
    ( (This)->lpVtbl->put_Y(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransform;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_ITranslateTransformStatics[] = L"Windows.UI.Xaml.Media.ITranslateTransformStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_XProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_YProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_XProperty(This,value) )
    ( (This)->lpVtbl->get_YProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CITranslateTransformStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IVisualTreeHelper[] = L"Windows.UI.Xaml.Media.IVisualTreeHelper";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelper * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IVisualTreeHelperStatics[] = L"Windows.UI.Xaml.Media.IVisualTreeHelperStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                                  HRESULT ( STDMETHODCALLTYPE *FindElementsInHostCoordinatesPoint )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CPoint intersectingPoint,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * subtree,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CUI__CXaml__CUIElement * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindElementsInHostCoordinatesRect )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CRect intersectingRect,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * subtree,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CUI__CXaml__CUIElement * * result
        );
                                      HRESULT ( STDMETHODCALLTYPE *FindAllElementsInHostCoordinatesPoint )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CPoint intersectingPoint,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * subtree,
                  boolean includeAllElements,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CUI__CXaml__CUIElement * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAllElementsInHostCoordinatesRect )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CRect intersectingRect,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * subtree,
                  boolean includeAllElements,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CUI__CXaml__CUIElement * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetChild )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * reference,
                  INT32 childIndex,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetChildrenCount )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * reference,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetParent )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * reference,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DisconnectChildrenRecursive )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindElementsInHostCoordinatesPoint(This,intersectingPoint,subtree,result) )
    ( (This)->lpVtbl->FindElementsInHostCoordinatesRect(This,intersectingRect,subtree,result) )
    ( (This)->lpVtbl->FindAllElementsInHostCoordinatesPoint(This,intersectingPoint,subtree,includeAllElements,result) )
    ( (This)->lpVtbl->FindAllElementsInHostCoordinatesRect(This,intersectingRect,subtree,includeAllElements,result) )
    ( (This)->lpVtbl->GetChild(This,reference,childIndex,result) )
    ( (This)->lpVtbl->GetChildrenCount(This,reference,result) )
    ( (This)->lpVtbl->GetParent(This,reference,result) )
    ( (This)->lpVtbl->DisconnectChildrenRecursive(This,element) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IVisualTreeHelperStatics2[] = L"Windows.UI.Xaml.Media.IVisualTreeHelperStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetOpenPopups )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIWindow * window,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetOpenPopups(This,window,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IVisualTreeHelperStatics3[] = L"Windows.UI.Xaml.Media.IVisualTreeHelperStatics3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetOpenPopupsForXamlRoot )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * xamlRoot,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CControls__CPrimitives__CPopup * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetOpenPopupsForXamlRoot(This,xamlRoot,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIVisualTreeHelperStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IXamlCompositionBrushBase[] = L"Windows.UI.Xaml.Media.IXamlCompositionBrushBase";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBase * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBase * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBase * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBase * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBase * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBase * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FallbackColor )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBase * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FallbackColor )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBase * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBase
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FallbackColor(This,value) )
    ( (This)->lpVtbl->put_FallbackColor(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBase;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseFactory[] = L"Windows.UI.Xaml.Media.IXamlCompositionBrushBaseFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBase * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseOverrides[] = L"Windows.UI.Xaml.Media.IXamlCompositionBrushBaseOverrides";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseOverrides * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseOverrides * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseOverrides * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseOverrides * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseOverrides * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseOverrides * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnConnected )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseOverrides * This
        );
    HRESULT ( STDMETHODCALLTYPE *OnDisconnected )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseOverrides * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseOverridesVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseOverridesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OnConnected(This) )
    ( (This)->lpVtbl->OnDisconnected(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseOverrides;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseProtected[] = L"Windows.UI.Xaml.Media.IXamlCompositionBrushBaseProtected";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseProtectedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseProtected * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseProtected * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseProtected * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseProtected * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseProtected * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseProtected * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CompositionBrush )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseProtected * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CompositionBrush )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseProtected * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseProtectedVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseProtected
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseProtectedVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CompositionBrush(This,value) )
    ( (This)->lpVtbl->put_CompositionBrush(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseProtected;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseStatics[] = L"Windows.UI.Xaml.Media.IXamlCompositionBrushBaseStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FallbackColorProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FallbackColorProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlCompositionBrushBaseStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IXamlLight[] = L"Windows.UI.Xaml.Media.IXamlLight";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IXamlLightFactory[] = L"Windows.UI.Xaml.Media.IXamlLightFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLight * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IXamlLightOverrides[] = L"Windows.UI.Xaml.Media.IXamlLightOverrides";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightOverrides * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightOverrides * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightOverrides * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightOverrides * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightOverrides * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightOverrides * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetId )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightOverrides * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *OnConnected )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightOverrides * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * newElement
        );
    HRESULT ( STDMETHODCALLTYPE *OnDisconnected )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightOverrides * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * oldElement
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightOverridesVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightOverridesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetId(This,result) )
    ( (This)->lpVtbl->OnConnected(This,newElement) )
    ( (This)->lpVtbl->OnDisconnected(This,oldElement) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightOverrides;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IXamlLightProtected[] = L"Windows.UI.Xaml.Media.IXamlLightProtected";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightProtectedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightProtected * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightProtected * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightProtected * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightProtected * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightProtected * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightProtected * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CompositionLight )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightProtected * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionLight * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CompositionLight )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightProtected * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionLight * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightProtectedVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightProtected
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightProtectedVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CompositionLight(This,value) )
    ( (This)->lpVtbl->put_CompositionLight(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightProtected;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_IXamlLightStatics[] = L"Windows.UI.Xaml.Media.IXamlLightStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddTargetElement )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightStatics * This,
                  __RPC__in HSTRING lightId,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveTargetElement )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightStatics * This,
                  __RPC__in HSTRING lightId,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element
        );
    HRESULT ( STDMETHODCALLTYPE *AddTargetBrush )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightStatics * This,
                  __RPC__in HSTRING lightId,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * brush
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveTargetBrush )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightStatics * This,
                  __RPC__in HSTRING lightId,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * brush
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddTargetElement(This,lightId,element) )
    ( (This)->lpVtbl->RemoveTargetElement(This,lightId,element) )
    ( (This)->lpVtbl->AddTargetBrush(This,lightId,brush) )
    ( (This)->lpVtbl->RemoveTargetBrush(This,lightId,brush) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CIXamlLightStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_AcrylicBrush[] = L"Windows.UI.Xaml.Media.AcrylicBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_ArcSegment[] = L"Windows.UI.Xaml.Media.ArcSegment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_BezierSegment[] = L"Windows.UI.Xaml.Media.BezierSegment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_BitmapCache[] = L"Windows.UI.Xaml.Media.BitmapCache";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Brush[] = L"Windows.UI.Xaml.Media.Brush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_BrushCollection[] = L"Windows.UI.Xaml.Media.BrushCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_CacheMode[] = L"Windows.UI.Xaml.Media.CacheMode";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_CompositeTransform[] = L"Windows.UI.Xaml.Media.CompositeTransform";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_CompositionTarget[] = L"Windows.UI.Xaml.Media.CompositionTarget";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_DoubleCollection[] = L"Windows.UI.Xaml.Media.DoubleCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_EllipseGeometry[] = L"Windows.UI.Xaml.Media.EllipseGeometry";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_FontFamily[] = L"Windows.UI.Xaml.Media.FontFamily";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_GeneralTransform[] = L"Windows.UI.Xaml.Media.GeneralTransform";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Geometry[] = L"Windows.UI.Xaml.Media.Geometry";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_GeometryCollection[] = L"Windows.UI.Xaml.Media.GeometryCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_GeometryGroup[] = L"Windows.UI.Xaml.Media.GeometryGroup";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_GradientBrush[] = L"Windows.UI.Xaml.Media.GradientBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_GradientStop[] = L"Windows.UI.Xaml.Media.GradientStop";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_GradientStopCollection[] = L"Windows.UI.Xaml.Media.GradientStopCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_ImageBrush[] = L"Windows.UI.Xaml.Media.ImageBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_ImageSource[] = L"Windows.UI.Xaml.Media.ImageSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_LineGeometry[] = L"Windows.UI.Xaml.Media.LineGeometry";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_LineSegment[] = L"Windows.UI.Xaml.Media.LineSegment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_LinearGradientBrush[] = L"Windows.UI.Xaml.Media.LinearGradientBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_LoadedImageSourceLoadCompletedEventArgs[] = L"Windows.UI.Xaml.Media.LoadedImageSourceLoadCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_LoadedImageSurface[] = L"Windows.UI.Xaml.Media.LoadedImageSurface";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Matrix3DProjection[] = L"Windows.UI.Xaml.Media.Matrix3DProjection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_MatrixHelper[] = L"Windows.UI.Xaml.Media.MatrixHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_MatrixTransform[] = L"Windows.UI.Xaml.Media.MatrixTransform";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_MediaTransportControlsThumbnailRequestedEventArgs[] = L"Windows.UI.Xaml.Media.MediaTransportControlsThumbnailRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_PartialMediaFailureDetectedEventArgs[] = L"Windows.UI.Xaml.Media.PartialMediaFailureDetectedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_PathFigure[] = L"Windows.UI.Xaml.Media.PathFigure";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_PathFigureCollection[] = L"Windows.UI.Xaml.Media.PathFigureCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_PathGeometry[] = L"Windows.UI.Xaml.Media.PathGeometry";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_PathSegment[] = L"Windows.UI.Xaml.Media.PathSegment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_PathSegmentCollection[] = L"Windows.UI.Xaml.Media.PathSegmentCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_PlaneProjection[] = L"Windows.UI.Xaml.Media.PlaneProjection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_PointCollection[] = L"Windows.UI.Xaml.Media.PointCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_PolyBezierSegment[] = L"Windows.UI.Xaml.Media.PolyBezierSegment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_PolyLineSegment[] = L"Windows.UI.Xaml.Media.PolyLineSegment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_PolyQuadraticBezierSegment[] = L"Windows.UI.Xaml.Media.PolyQuadraticBezierSegment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Projection[] = L"Windows.UI.Xaml.Media.Projection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_QuadraticBezierSegment[] = L"Windows.UI.Xaml.Media.QuadraticBezierSegment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_RateChangedRoutedEventArgs[] = L"Windows.UI.Xaml.Media.RateChangedRoutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_RectangleGeometry[] = L"Windows.UI.Xaml.Media.RectangleGeometry";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_RenderedEventArgs[] = L"Windows.UI.Xaml.Media.RenderedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_RenderingEventArgs[] = L"Windows.UI.Xaml.Media.RenderingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_RevealBackgroundBrush[] = L"Windows.UI.Xaml.Media.RevealBackgroundBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_RevealBorderBrush[] = L"Windows.UI.Xaml.Media.RevealBorderBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_RevealBrush[] = L"Windows.UI.Xaml.Media.RevealBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_RotateTransform[] = L"Windows.UI.Xaml.Media.RotateTransform";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_ScaleTransform[] = L"Windows.UI.Xaml.Media.ScaleTransform";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Shadow[] = L"Windows.UI.Xaml.Media.Shadow";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_SkewTransform[] = L"Windows.UI.Xaml.Media.SkewTransform";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_SolidColorBrush[] = L"Windows.UI.Xaml.Media.SolidColorBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_ThemeShadow[] = L"Windows.UI.Xaml.Media.ThemeShadow";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_TileBrush[] = L"Windows.UI.Xaml.Media.TileBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_TimelineMarker[] = L"Windows.UI.Xaml.Media.TimelineMarker";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_TimelineMarkerCollection[] = L"Windows.UI.Xaml.Media.TimelineMarkerCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_TimelineMarkerRoutedEventArgs[] = L"Windows.UI.Xaml.Media.TimelineMarkerRoutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Transform[] = L"Windows.UI.Xaml.Media.Transform";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_TransformCollection[] = L"Windows.UI.Xaml.Media.TransformCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_TransformGroup[] = L"Windows.UI.Xaml.Media.TransformGroup";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_TranslateTransform[] = L"Windows.UI.Xaml.Media.TranslateTransform";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_VisualTreeHelper[] = L"Windows.UI.Xaml.Media.VisualTreeHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_XamlCompositionBrushBase[] = L"Windows.UI.Xaml.Media.XamlCompositionBrushBase";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_XamlLight[] = L"Windows.UI.Xaml.Media.XamlLight";
       
       
#pragma clang diagnostic pop
