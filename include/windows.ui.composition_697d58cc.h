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
#include "Windows.Graphics.h"
#include "Windows.Graphics.DirectX.h"
#include "Windows.Graphics.Effects.h"
#include "Windows.System.h"
#include "Windows.UI.h"
#include "Windows.UI.Core.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CComposition_CIAmbientLight __x_ABI_CWindows_CUI_CComposition_CIAmbientLight;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIAmbientLight2 __x_ABI_CWindows_CUI_CComposition_CIAmbientLight2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIAnimationController __x_ABI_CWindows_CUI_CComposition_CIAnimationController;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIAnimationControllerStatics __x_ABI_CWindows_CUI_CComposition_CIAnimationControllerStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIAnimationObject __x_ABI_CWindows_CUI_CComposition_CIAnimationObject;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIBooleanKeyFrameAnimation __x_ABI_CWindows_CUI_CComposition_CIBooleanKeyFrameAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimation __x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimation __x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimation __x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimation __x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation2 __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation3 __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation3;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation4 __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation4;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationFactory __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroup __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroup;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionBackdropBrush __x_ABI_CWindows_CUI_CComposition_CICompositionBackdropBrush;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionBatchCompletedEventArgs __x_ABI_CWindows_CUI_CComposition_CICompositionBatchCompletedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionBrush __x_ABI_CWindows_CUI_CComposition_CICompositionBrush;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionBrushFactory __x_ABI_CWindows_CUI_CComposition_CICompositionBrushFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilities __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilities;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilitiesStatics __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilitiesStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionClip __x_ABI_CWindows_CUI_CComposition_CICompositionClip;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 __x_ABI_CWindows_CUI_CComposition_CICompositionClip2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionClipFactory __x_ABI_CWindows_CUI_CComposition_CICompositionClipFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionColorBrush __x_ABI_CWindows_CUI_CComposition_CICompositionColorBrush;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStopCollection __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStopCollection;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatch __x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatch;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionContainerShape __x_ABI_CWindows_CUI_CComposition_CICompositionContainerShape;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2 __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurfaceFactory __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurfaceFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunctionFactory __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunctionFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrush __x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrush;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactory __x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameter __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameter;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameterFactory __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameterFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometry __x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometry;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClip __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClip;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionGeometryFactory __x_ABI_CWindows_CUI_CComposition_CICompositionGeometryFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush2 __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrushFactory __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrushFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice2 __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice3 __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice3;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionLight __x_ABI_CWindows_CUI_CComposition_CICompositionLight;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionLight2 __x_ABI_CWindows_CUI_CComposition_CICompositionLight2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionLight3 __x_ABI_CWindows_CUI_CComposition_CICompositionLight3;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionLightFactory __x_ABI_CWindows_CUI_CComposition_CICompositionLightFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometry __x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometry;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrush __x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrush;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrush __x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrush;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurface __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurface;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionObject __x_ABI_CWindows_CUI_CComposition_CICompositionObject;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionObject2 __x_ABI_CWindows_CUI_CComposition_CICompositionObject2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionObject3 __x_ABI_CWindows_CUI_CComposition_CICompositionObject3;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionObject4 __x_ABI_CWindows_CUI_CComposition_CICompositionObject4;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionObjectFactory __x_ABI_CWindows_CUI_CComposition_CICompositionObjectFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionObjectStatics __x_ABI_CWindows_CUI_CComposition_CICompositionObjectStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionPath __x_ABI_CWindows_CUI_CComposition_CICompositionPath;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionPathFactory __x_ABI_CWindows_CUI_CComposition_CICompositionPathFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionPathGeometry __x_ABI_CWindows_CUI_CComposition_CICompositionPathGeometry;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollectionStatics __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollectionStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiver __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiver;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollection __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollection;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet2 __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrush __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrush;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometry __x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometry;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometry __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometry;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionShadow __x_ABI_CWindows_CUI_CComposition_CICompositionShadow;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionShadowFactory __x_ABI_CWindows_CUI_CComposition_CICompositionShadowFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionShape __x_ABI_CWindows_CUI_CComposition_CICompositionShape;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionShapeFactory __x_ABI_CWindows_CUI_CComposition_CICompositionShapeFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionSurface __x_ABI_CWindows_CUI_CComposition_CICompositionSurface;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush3 __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush3;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionTarget __x_ABI_CWindows_CUI_CComposition_CICompositionTarget;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionTargetFactory __x_ABI_CWindows_CUI_CComposition_CICompositionTargetFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionTransform __x_ABI_CWindows_CUI_CComposition_CICompositionTransform;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionTransformFactory __x_ABI_CWindows_CUI_CComposition_CICompositionTransformFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurface __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurface;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurfaceFactory __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurfaceFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurface __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurface;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositor __x_ABI_CWindows_CUI_CComposition_CICompositor;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositor2 __x_ABI_CWindows_CUI_CComposition_CICompositor2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositor3 __x_ABI_CWindows_CUI_CComposition_CICompositor3;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositor4 __x_ABI_CWindows_CUI_CComposition_CICompositor4;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositor5 __x_ABI_CWindows_CUI_CComposition_CICompositor5;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositor6 __x_ABI_CWindows_CUI_CComposition_CICompositor6;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositorStatics __x_ABI_CWindows_CUI_CComposition_CICompositorStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositorWithProjectedShadow __x_ABI_CWindows_CUI_CComposition_CICompositorWithProjectedShadow;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositorWithRadialGradient __x_ABI_CWindows_CUI_CComposition_CICompositorWithRadialGradient;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositorWithVisualSurface __x_ABI_CWindows_CUI_CComposition_CICompositorWithVisualSurface;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIContainerVisual __x_ABI_CWindows_CUI_CComposition_CIContainerVisual;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIContainerVisualFactory __x_ABI_CWindows_CUI_CComposition_CIContainerVisualFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICubicBezierEasingFunction __x_ABI_CWindows_CUI_CComposition_CICubicBezierEasingFunction;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIDistantLight __x_ABI_CWindows_CUI_CComposition_CIDistantLight;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIDistantLight2 __x_ABI_CWindows_CUI_CComposition_CIDistantLight2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIDropShadow __x_ABI_CWindows_CUI_CComposition_CIDropShadow;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIDropShadow2 __x_ABI_CWindows_CUI_CComposition_CIDropShadow2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIImplicitAnimationCollection __x_ABI_CWindows_CUI_CComposition_CIImplicitAnimationCollection;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIInsetClip __x_ABI_CWindows_CUI_CComposition_CIInsetClip;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation2 __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation3 __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation3;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimationFactory __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimationFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CILayerVisual __x_ABI_CWindows_CUI_CComposition_CILayerVisual;
typedef interface __x_ABI_CWindows_CUI_CComposition_CILayerVisual2 __x_ABI_CWindows_CUI_CComposition_CILayerVisual2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CILinearEasingFunction __x_ABI_CWindows_CUI_CComposition_CILinearEasingFunction;
typedef interface __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimation __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimationFactory __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimationFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIPathKeyFrameAnimation __x_ABI_CWindows_CUI_CComposition_CIPathKeyFrameAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIPointLight __x_ABI_CWindows_CUI_CComposition_CIPointLight;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIPointLight2 __x_ABI_CWindows_CUI_CComposition_CIPointLight2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIPointLight3 __x_ABI_CWindows_CUI_CComposition_CIPointLight3;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIQuaternionKeyFrameAnimation __x_ABI_CWindows_CUI_CComposition_CIQuaternionKeyFrameAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIRedirectVisual __x_ABI_CWindows_CUI_CComposition_CIRedirectVisual;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIRenderingDeviceReplacedEventArgs __x_ABI_CWindows_CUI_CComposition_CIRenderingDeviceReplacedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIScalarKeyFrameAnimation __x_ABI_CWindows_CUI_CComposition_CIScalarKeyFrameAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimationFactory __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimationFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIShapeVisual __x_ABI_CWindows_CUI_CComposition_CIShapeVisual;
typedef interface __x_ABI_CWindows_CUI_CComposition_CISpotLight __x_ABI_CWindows_CUI_CComposition_CISpotLight;
typedef interface __x_ABI_CWindows_CUI_CComposition_CISpotLight2 __x_ABI_CWindows_CUI_CComposition_CISpotLight2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CISpotLight3 __x_ABI_CWindows_CUI_CComposition_CISpotLight3;
typedef interface __x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimation __x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimation __x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimation __x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CISpriteVisual __x_ABI_CWindows_CUI_CComposition_CISpriteVisual;
typedef interface __x_ABI_CWindows_CUI_CComposition_CISpriteVisual2 __x_ABI_CWindows_CUI_CComposition_CISpriteVisual2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVector2KeyFrameAnimation __x_ABI_CWindows_CUI_CComposition_CIVector2KeyFrameAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimationFactory __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimationFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVector3KeyFrameAnimation __x_ABI_CWindows_CUI_CComposition_CIVector3KeyFrameAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimation __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimationFactory __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimationFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVector4KeyFrameAnimation __x_ABI_CWindows_CUI_CComposition_CIVector4KeyFrameAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVisual __x_ABI_CWindows_CUI_CComposition_CIVisual;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVisual2 __x_ABI_CWindows_CUI_CComposition_CIVisual2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVisualCollection __x_ABI_CWindows_CUI_CComposition_CIVisualCollection;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVisualElement __x_ABI_CWindows_CUI_CComposition_CIVisualElement;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVisualFactory __x_ABI_CWindows_CUI_CComposition_CIVisualFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollection __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollection;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBaseVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBaseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBaseVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBaseVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBaseVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBaseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CComposition__CCompositionAnimation __FIIterator_1_Windows__CUI__CComposition__CCompositionAnimation;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CComposition__CCompositionAnimation;
typedef struct __FIIterator_1_Windows__CUI__CComposition__CCompositionAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionAnimation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionAnimation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionAnimation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionAnimation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionAnimation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionAnimation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionAnimation * This, __RPC__out __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionAnimation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionAnimation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionAnimation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CComposition__CCompositionAnimationVtbl;
interface __FIIterator_1_Windows__CUI__CComposition__CCompositionAnimation
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CComposition__CCompositionAnimationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CComposition__CCompositionAnimation __FIIterable_1_Windows__CUI__CComposition__CCompositionAnimation;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CComposition__CCompositionAnimation;
typedef struct __FIIterable_1_Windows__CUI__CComposition__CCompositionAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionAnimation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionAnimation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionAnimation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionAnimation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionAnimation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionAnimation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionAnimation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CComposition__CCompositionAnimation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CComposition__CCompositionAnimationVtbl;
interface __FIIterable_1_Windows__CUI__CComposition__CCompositionAnimation
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CComposition__CCompositionAnimationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStop __FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStop;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStop;
typedef struct __FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStopVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This, __RPC__out __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStopVtbl;
interface __FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStop
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStopVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CComposition__CCompositionColorGradientStop __FIIterable_1_Windows__CUI__CComposition__CCompositionColorGradientStop;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CComposition__CCompositionColorGradientStop;
typedef struct __FIIterable_1_Windows__CUI__CComposition__CCompositionColorGradientStopVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CComposition__CCompositionColorGradientStop **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CComposition__CCompositionColorGradientStopVtbl;
interface __FIIterable_1_Windows__CUI__CComposition__CCompositionColorGradientStop
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CComposition__CCompositionColorGradientStopVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster;
typedef struct __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCasterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster * This, __RPC__out __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCasterVtbl;
interface __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCasterVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster;
typedef struct __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowCasterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowCasterVtbl;
interface __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowCaster
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowCasterVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver;
typedef struct __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver * This, __RPC__out __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiver * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiver * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiverVtbl;
interface __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiverVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver;
typedef struct __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiverVtbl;
interface __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiver
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CComposition__CCompositionProjectedShadowReceiverVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CComposition__CCompositionShape __FIIterator_1_Windows__CUI__CComposition__CCompositionShape;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CComposition__CCompositionShape;
typedef struct __FIIterator_1_Windows__CUI__CComposition__CCompositionShapeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionShape * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionShape * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionShape * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionShape * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionShape * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionShape * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionShape * This, __RPC__out __x_ABI_CWindows_CUI_CComposition_CICompositionShape * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionShape * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionShape * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CCompositionShape * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CICompositionShape * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CComposition__CCompositionShapeVtbl;
interface __FIIterator_1_Windows__CUI__CComposition__CCompositionShape
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CComposition__CCompositionShapeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CComposition__CCompositionShape __FIIterable_1_Windows__CUI__CComposition__CCompositionShape;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CComposition__CCompositionShape;
typedef struct __FIIterable_1_Windows__CUI__CComposition__CCompositionShapeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionShape * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionShape * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionShape * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionShape * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionShape * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionShape * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CCompositionShape * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CComposition__CCompositionShape **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CComposition__CCompositionShapeVtbl;
interface __FIIterable_1_Windows__CUI__CComposition__CCompositionShape
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CComposition__CCompositionShapeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CComposition__CIVisualElement __FIIterator_1_Windows__CUI__CComposition__CIVisualElement;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CComposition__CIVisualElement;
typedef struct __FIIterator_1_Windows__CUI__CComposition__CIVisualElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__out __x_ABI_CWindows_CUI_CComposition_CIVisualElement * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CIVisualElement * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CComposition__CIVisualElementVtbl;
interface __FIIterator_1_Windows__CUI__CComposition__CIVisualElement
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CComposition__CIVisualElementVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CComposition__CIVisualElement __FIIterable_1_Windows__CUI__CComposition__CIVisualElement;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CComposition__CIVisualElement;
typedef struct __FIIterable_1_Windows__CUI__CComposition__CIVisualElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CComposition__CIVisualElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CIVisualElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CIVisualElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CIVisualElement * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CComposition__CIVisualElement **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CComposition__CIVisualElementVtbl;
interface __FIIterable_1_Windows__CUI__CComposition__CIVisualElement
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CComposition__CIVisualElementVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CComposition__CVisual __FIIterator_1_Windows__CUI__CComposition__CVisual;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CComposition__CVisual;
typedef struct __FIIterator_1_Windows__CUI__CComposition__CVisualVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CComposition__CVisual * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CVisual * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CVisual * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CVisual * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CVisual * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CVisual * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CVisual * This, __RPC__out __x_ABI_CWindows_CUI_CComposition_CIVisual * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CVisual * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CVisual * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CVisual * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CIVisual * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CComposition__CVisualVtbl;
interface __FIIterator_1_Windows__CUI__CComposition__CVisual
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CComposition__CVisualVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CComposition__CVisual __FIIterable_1_Windows__CUI__CComposition__CVisual;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CComposition__CVisual;
typedef struct __FIIterable_1_Windows__CUI__CComposition__CVisualVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CComposition__CVisual * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CVisual * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CVisual * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CVisual * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CVisual * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CVisual * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CVisual * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CComposition__CVisual **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CComposition__CVisualVtbl;
interface __FIIterable_1_Windows__CUI__CComposition__CVisual
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CComposition__CVisualVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase;
typedef struct __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBaseVtbl;
interface __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBaseVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase;
EXTERN_C const IID IID___FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase;
typedef struct __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This,
                   HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This,
                   HSTRING key,
                   __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase * This);
    END_INTERFACE
} __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBaseVtbl;
interface __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBase
{
    CONST_VTBL struct __FIMap_2_HSTRING_Windows__CUI__CComposition__CICompositionAnimationBaseVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStop __FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStop;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStop;
typedef struct __FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStopVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                       __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStopVtbl;
interface __FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStop
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStopVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CComposition__CCompositionShape __FIVectorView_1_Windows__CUI__CComposition__CCompositionShape;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CComposition__CCompositionShape;
typedef struct __FIVectorView_1_Windows__CUI__CComposition__CCompositionShapeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionShape * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionShape * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionShape * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionShape * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionShape * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionShape * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionShape * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CComposition_CICompositionShape * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionShape * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionShape * This,
                       __x_ABI_CWindows_CUI_CComposition_CICompositionShape * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CCompositionShape * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CICompositionShape * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CComposition__CCompositionShapeVtbl;
interface __FIVectorView_1_Windows__CUI__CComposition__CCompositionShape
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CComposition__CCompositionShapeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CComposition__CIVisualElement;
typedef struct __FIVectorView_1_Windows__CUI__CComposition__CIVisualElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CComposition_CIVisualElement * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This,
                       __x_ABI_CWindows_CUI_CComposition_CIVisualElement * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CIVisualElement * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CComposition__CIVisualElementVtbl;
interface __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CComposition__CIVisualElementVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop;
typedef struct __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStopVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CComposition__CCompositionColorGradientStop **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This, __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStopVtbl;
interface __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStop
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CComposition__CCompositionColorGradientStopVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CComposition__CCompositionShape __FIVector_1_Windows__CUI__CComposition__CCompositionShape;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CComposition__CCompositionShape;
typedef struct __FIVector_1_Windows__CUI__CComposition__CCompositionShapeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionShape * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionShape * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CComposition__CCompositionShape **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShape * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShape * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShape * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This, __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShape * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CICompositionShape * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CCompositionShape * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CComposition_CICompositionShape * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CComposition__CCompositionShapeVtbl;
interface __FIVector_1_Windows__CUI__CComposition__CCompositionShape
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CComposition__CCompositionShapeVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CComposition__CIVisualElement __FIVector_1_Windows__CUI__CComposition__CIVisualElement;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CComposition__CIVisualElement;
typedef struct __FIVector_1_Windows__CUI__CComposition__CIVisualElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisualElement * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisualElement * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualElement * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualElement * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualElement * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualElement * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CIVisualElement * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CComposition_CIVisualElement * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CComposition__CIVisualElementVtbl;
interface __FIVector_1_Windows__CUI__CComposition__CIVisualElement
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CComposition__CIVisualElementVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CComposition__CCompositionBatchCompletedEventArgs __FITypedEventHandler_2_IInspectable_Windows__CUI__CComposition__CCompositionBatchCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CUI__CComposition__CCompositionBatchCompletedEventArgs;
typedef struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CComposition__CCompositionBatchCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CComposition__CCompositionBatchCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CComposition__CCompositionBatchCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CComposition__CCompositionBatchCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CComposition__CCompositionBatchCompletedEventArgs * This, __RPC__in_opt IInspectable * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBatchCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CUI__CComposition__CCompositionBatchCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CComposition__CCompositionBatchCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CComposition__CCompositionBatchCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionCapabilities_IInspectable __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionCapabilities_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionCapabilities_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionCapabilities_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionCapabilities_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionCapabilities_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionCapabilities_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionCapabilities_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilities * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionCapabilities_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionCapabilities_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionCapabilities_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionGraphicsDevice_Windows__CUI__CComposition__CRenderingDeviceReplacedEventArgs __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionGraphicsDevice_Windows__CUI__CComposition__CRenderingDeviceReplacedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionGraphicsDevice_Windows__CUI__CComposition__CRenderingDeviceReplacedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionGraphicsDevice_Windows__CUI__CComposition__CRenderingDeviceReplacedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionGraphicsDevice_Windows__CUI__CComposition__CRenderingDeviceReplacedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionGraphicsDevice_Windows__CUI__CComposition__CRenderingDeviceReplacedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionGraphicsDevice_Windows__CUI__CComposition__CRenderingDeviceReplacedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionGraphicsDevice_Windows__CUI__CComposition__CRenderingDeviceReplacedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIRenderingDeviceReplacedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionGraphicsDevice_Windows__CUI__CComposition__CRenderingDeviceReplacedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionGraphicsDevice_Windows__CUI__CComposition__CRenderingDeviceReplacedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionGraphicsDevice_Windows__CUI__CComposition__CRenderingDeviceReplacedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;
typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt HSTRING *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;
interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_HSTRING __FIMap_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMap_2_HSTRING_HSTRING;
typedef struct __FIMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   HSTRING key,
                            __RPC__deref_out_opt HSTRING **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   HSTRING key,
                   __RPC__in_opt HSTRING *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    END_INTERFACE
} __FIMap_2_HSTRING_HSTRINGVtbl;
interface __FIMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMap_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIVector_1_float __FIVector_1_float;
EXTERN_C const IID IID___FIVector_1_float;
typedef struct __FIVector_1_floatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_float * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_float * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_float * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_float * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_float * This, __RPC__deref_out_opt float *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_float * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_float * This,
                   unsigned int index,
                            __RPC__deref_out_opt float *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_float * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_float * This, __RPC__deref_out_opt __FIVectorView_1_float **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_float * This,
                   __RPC__in float item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_float * This,
                   unsigned int index,
                   __RPC__in float item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_float * This,
                   unsigned int index,
                   __RPC__in float item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_float * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_float * This, __RPC__in float item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_float * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_float * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_float * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) float *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_float * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) float *value);
    END_INTERFACE
} __FIVector_1_floatVtbl;
interface __FIVector_1_float
{
    CONST_VTBL struct __FIVector_1_floatVtbl *lpVtbl;
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
typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;
EXTERN_C const IID IID___FIIterator_1_HSTRING;
typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out HSTRING *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;
interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;
EXTERN_C const IID IID___FIIterable_1_HSTRING;
typedef struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt __FIIterator_1_HSTRING **first);
    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;
interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIReference_1_float __FIReference_1_float;
EXTERN_C const IID IID___FIReference_1_float;
typedef struct __FIReference_1_floatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_float * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_float * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_float * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_float * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_float * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_float * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_float * This, __RPC__out float *value);
    END_INTERFACE
} __FIReference_1_floatVtbl;
interface __FIReference_1_float
{
    CONST_VTBL struct __FIReference_1_floatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2;
typedef interface __FIReference_1_Windows__CFoundation__CNumerics__CVector2 __FIReference_1_Windows__CFoundation__CNumerics__CVector2;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CNumerics__CVector2;
typedef struct __FIReference_1_Windows__CFoundation__CNumerics__CVector2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CNumerics__CVector2Vtbl;
interface __FIReference_1_Windows__CFoundation__CNumerics__CVector2
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CNumerics__CVector2Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef interface __FIReference_1_Windows__CFoundation__CNumerics__CVector3 __FIReference_1_Windows__CFoundation__CNumerics__CVector3;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CNumerics__CVector3;
typedef struct __FIReference_1_Windows__CFoundation__CNumerics__CVector3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CNumerics__CVector3Vtbl;
interface __FIReference_1_Windows__CFoundation__CNumerics__CVector3
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CNumerics__CVector3Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 __x_ABI_CWindows_CFoundation_CNumerics_CVector4;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode;
typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;
typedef interface __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect;
typedef interface __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource;
typedef interface __x_ABI_CWindows_CGraphics_CIGeometrySource2D __x_ABI_CWindows_CGraphics_CIGeometrySource2D;
typedef struct __x_ABI_CWindows_CGraphics_CPointInt32 __x_ABI_CWindows_CGraphics_CPointInt32;
typedef struct __x_ABI_CWindows_CGraphics_CRectInt32 __x_ABI_CWindows_CGraphics_CRectInt32;
typedef struct __x_ABI_CWindows_CGraphics_CSizeInt32 __x_ABI_CWindows_CGraphics_CSizeInt32;
typedef interface __x_ABI_CWindows_CSystem_CIDispatcherQueue __x_ABI_CWindows_CSystem_CIDispatcherQueue;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreDispatcher __x_ABI_CWindows_CUI_CCore_CICoreDispatcher;
typedef enum __x_ABI_CWindows_CUI_CComposition_CAnimationControllerProgressBehavior __x_ABI_CWindows_CUI_CComposition_CAnimationControllerProgressBehavior;
typedef enum __x_ABI_CWindows_CUI_CComposition_CAnimationDelayBehavior __x_ABI_CWindows_CUI_CComposition_CAnimationDelayBehavior;
typedef enum __x_ABI_CWindows_CUI_CComposition_CAnimationDirection __x_ABI_CWindows_CUI_CComposition_CAnimationDirection;
typedef enum __x_ABI_CWindows_CUI_CComposition_CAnimationIterationBehavior __x_ABI_CWindows_CUI_CComposition_CAnimationIterationBehavior;
typedef enum __x_ABI_CWindows_CUI_CComposition_CAnimationPropertyAccessMode __x_ABI_CWindows_CUI_CComposition_CAnimationPropertyAccessMode;
typedef enum __x_ABI_CWindows_CUI_CComposition_CAnimationStopBehavior __x_ABI_CWindows_CUI_CComposition_CAnimationStopBehavior;
typedef enum __x_ABI_CWindows_CUI_CComposition_CCompositionBackfaceVisibility __x_ABI_CWindows_CUI_CComposition_CCompositionBackfaceVisibility;
typedef enum __x_ABI_CWindows_CUI_CComposition_CCompositionBatchTypes __x_ABI_CWindows_CUI_CComposition_CCompositionBatchTypes;
typedef enum __x_ABI_CWindows_CUI_CComposition_CCompositionBitmapInterpolationMode __x_ABI_CWindows_CUI_CComposition_CCompositionBitmapInterpolationMode;
typedef enum __x_ABI_CWindows_CUI_CComposition_CCompositionBorderMode __x_ABI_CWindows_CUI_CComposition_CCompositionBorderMode;
typedef enum __x_ABI_CWindows_CUI_CComposition_CCompositionColorSpace __x_ABI_CWindows_CUI_CComposition_CCompositionColorSpace;
typedef enum __x_ABI_CWindows_CUI_CComposition_CCompositionCompositeMode __x_ABI_CWindows_CUI_CComposition_CCompositionCompositeMode;
typedef enum __x_ABI_CWindows_CUI_CComposition_CCompositionDropShadowSourcePolicy __x_ABI_CWindows_CUI_CComposition_CCompositionDropShadowSourcePolicy;
typedef enum __x_ABI_CWindows_CUI_CComposition_CCompositionEffectFactoryLoadStatus __x_ABI_CWindows_CUI_CComposition_CCompositionEffectFactoryLoadStatus;
typedef enum __x_ABI_CWindows_CUI_CComposition_CCompositionGetValueStatus __x_ABI_CWindows_CUI_CComposition_CCompositionGetValueStatus;
typedef enum __x_ABI_CWindows_CUI_CComposition_CCompositionGradientExtendMode __x_ABI_CWindows_CUI_CComposition_CCompositionGradientExtendMode;
typedef enum __x_ABI_CWindows_CUI_CComposition_CCompositionMappingMode __x_ABI_CWindows_CUI_CComposition_CCompositionMappingMode;
typedef enum __x_ABI_CWindows_CUI_CComposition_CCompositionStretch __x_ABI_CWindows_CUI_CComposition_CCompositionStretch;
typedef enum __x_ABI_CWindows_CUI_CComposition_CCompositionStrokeCap __x_ABI_CWindows_CUI_CComposition_CCompositionStrokeCap;
typedef enum __x_ABI_CWindows_CUI_CComposition_CCompositionStrokeLineJoin __x_ABI_CWindows_CUI_CComposition_CCompositionStrokeLineJoin;
enum __x_ABI_CWindows_CUI_CComposition_CAnimationControllerProgressBehavior
{
    AnimationControllerProgressBehavior_Default = 0,
    AnimationControllerProgressBehavior_IncludesDelayTime = 1,
};
enum __x_ABI_CWindows_CUI_CComposition_CAnimationDelayBehavior
{
    AnimationDelayBehavior_SetInitialValueAfterDelay = 0,
    AnimationDelayBehavior_SetInitialValueBeforeDelay = 1,
};
enum __x_ABI_CWindows_CUI_CComposition_CAnimationDirection
{
    AnimationDirection_Normal = 0,
    AnimationDirection_Reverse = 1,
    AnimationDirection_Alternate = 2,
    AnimationDirection_AlternateReverse = 3,
};
enum __x_ABI_CWindows_CUI_CComposition_CAnimationIterationBehavior
{
    AnimationIterationBehavior_Count = 0,
    AnimationIterationBehavior_Forever = 1,
};
enum __x_ABI_CWindows_CUI_CComposition_CAnimationPropertyAccessMode
{
    AnimationPropertyAccessMode_None = 0,
    AnimationPropertyAccessMode_ReadOnly = 1,
    AnimationPropertyAccessMode_WriteOnly = 2,
    AnimationPropertyAccessMode_ReadWrite = 3,
};
enum __x_ABI_CWindows_CUI_CComposition_CAnimationStopBehavior
{
    AnimationStopBehavior_LeaveCurrentValue = 0,
    AnimationStopBehavior_SetToInitialValue = 1,
    AnimationStopBehavior_SetToFinalValue = 2,
};
enum __x_ABI_CWindows_CUI_CComposition_CCompositionBackfaceVisibility
{
    CompositionBackfaceVisibility_Inherit = 0,
    CompositionBackfaceVisibility_Visible = 1,
    CompositionBackfaceVisibility_Hidden = 2,
};
enum __x_ABI_CWindows_CUI_CComposition_CCompositionBatchTypes
{
    CompositionBatchTypes_None = 0,
    CompositionBatchTypes_Animation = 0x1,
    CompositionBatchTypes_Effect = 0x2,
    CompositionBatchTypes_InfiniteAnimation = 0x4,
    CompositionBatchTypes_AllAnimations = 0x5,
};
enum __x_ABI_CWindows_CUI_CComposition_CCompositionBitmapInterpolationMode
{
    CompositionBitmapInterpolationMode_NearestNeighbor = 0,
    CompositionBitmapInterpolationMode_Linear = 1,
    CompositionBitmapInterpolationMode_MagLinearMinLinearMipLinear = 2,
    CompositionBitmapInterpolationMode_MagLinearMinLinearMipNearest = 3,
    CompositionBitmapInterpolationMode_MagLinearMinNearestMipLinear = 4,
    CompositionBitmapInterpolationMode_MagLinearMinNearestMipNearest = 5,
    CompositionBitmapInterpolationMode_MagNearestMinLinearMipLinear = 6,
    CompositionBitmapInterpolationMode_MagNearestMinLinearMipNearest = 7,
    CompositionBitmapInterpolationMode_MagNearestMinNearestMipLinear = 8,
    CompositionBitmapInterpolationMode_MagNearestMinNearestMipNearest = 9,
};
enum __x_ABI_CWindows_CUI_CComposition_CCompositionBorderMode
{
    CompositionBorderMode_Inherit = 0,
    CompositionBorderMode_Soft = 1,
    CompositionBorderMode_Hard = 2,
};
enum __x_ABI_CWindows_CUI_CComposition_CCompositionColorSpace
{
    CompositionColorSpace_Auto = 0,
    CompositionColorSpace_Hsl = 1,
    CompositionColorSpace_Rgb = 2,
    CompositionColorSpace_HslLinear = 3,
    CompositionColorSpace_RgbLinear = 4,
};
enum __x_ABI_CWindows_CUI_CComposition_CCompositionCompositeMode
{
    CompositionCompositeMode_Inherit = 0,
    CompositionCompositeMode_SourceOver = 1,
    CompositionCompositeMode_DestinationInvert = 2,
    CompositionCompositeMode_MinBlend = 3,
};
enum __x_ABI_CWindows_CUI_CComposition_CCompositionDropShadowSourcePolicy
{
    CompositionDropShadowSourcePolicy_Default = 0,
    CompositionDropShadowSourcePolicy_InheritFromVisualContent = 1,
};
enum __x_ABI_CWindows_CUI_CComposition_CCompositionEffectFactoryLoadStatus
{
    CompositionEffectFactoryLoadStatus_Success = 0,
    CompositionEffectFactoryLoadStatus_EffectTooComplex = 1,
    CompositionEffectFactoryLoadStatus_Pending = 2,
    CompositionEffectFactoryLoadStatus_Other = -1,
};
enum __x_ABI_CWindows_CUI_CComposition_CCompositionGetValueStatus
{
    CompositionGetValueStatus_Succeeded = 0,
    CompositionGetValueStatus_TypeMismatch = 1,
    CompositionGetValueStatus_NotFound = 2,
};
enum __x_ABI_CWindows_CUI_CComposition_CCompositionGradientExtendMode
{
    CompositionGradientExtendMode_Clamp = 0,
    CompositionGradientExtendMode_Wrap = 1,
    CompositionGradientExtendMode_Mirror = 2,
};
enum __x_ABI_CWindows_CUI_CComposition_CCompositionMappingMode
{
    CompositionMappingMode_Absolute = 0,
    CompositionMappingMode_Relative = 1,
};
enum __x_ABI_CWindows_CUI_CComposition_CCompositionStretch
{
    CompositionStretch_None = 0,
    CompositionStretch_Fill = 1,
    CompositionStretch_Uniform = 2,
    CompositionStretch_UniformToFill = 3,
};
enum __x_ABI_CWindows_CUI_CComposition_CCompositionStrokeCap
{
    CompositionStrokeCap_Flat = 0,
    CompositionStrokeCap_Square = 1,
    CompositionStrokeCap_Round = 2,
    CompositionStrokeCap_Triangle = 3,
};
enum __x_ABI_CWindows_CUI_CComposition_CCompositionStrokeLineJoin
{
    CompositionStrokeLineJoin_Miter = 0,
    CompositionStrokeLineJoin_Bevel = 1,
    CompositionStrokeLineJoin_Round = 2,
    CompositionStrokeLineJoin_MiterOrBevel = 3,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IAmbientLight[] = L"Windows.UI.Composition.IAmbientLight";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIAmbientLightVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAmbientLight * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAmbientLight * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAmbientLight * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAmbientLight * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAmbientLight * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAmbientLight * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CUI_CComposition_CIAmbientLight * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CUI_CComposition_CIAmbientLight * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIAmbientLightVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIAmbientLight
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIAmbientLightVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Color(This,value) )
    ( (This)->lpVtbl->put_Color(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIAmbientLight;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IAmbientLight2[] = L"Windows.UI.Composition.IAmbientLight2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIAmbientLight2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAmbientLight2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAmbientLight2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAmbientLight2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAmbientLight2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAmbientLight2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAmbientLight2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Intensity )(
        __x_ABI_CWindows_CUI_CComposition_CIAmbientLight2 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Intensity )(
        __x_ABI_CWindows_CUI_CComposition_CIAmbientLight2 * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIAmbientLight2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIAmbientLight2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIAmbientLight2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Intensity(This,value) )
    ( (This)->lpVtbl->put_Intensity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIAmbientLight2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IAnimationController[] = L"Windows.UI.Composition.IAnimationController";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIAnimationControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationController * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PlaybackRate )(
        __x_ABI_CWindows_CUI_CComposition_CIAnimationController * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PlaybackRate )(
        __x_ABI_CWindows_CUI_CComposition_CIAnimationController * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CUI_CComposition_CIAnimationController * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Progress )(
        __x_ABI_CWindows_CUI_CComposition_CIAnimationController * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProgressBehavior )(
        __x_ABI_CWindows_CUI_CComposition_CIAnimationController * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CAnimationControllerProgressBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProgressBehavior )(
        __x_ABI_CWindows_CUI_CComposition_CIAnimationController * This,
                  __x_ABI_CWindows_CUI_CComposition_CAnimationControllerProgressBehavior value
        );
    HRESULT ( STDMETHODCALLTYPE *Pause )(
        __x_ABI_CWindows_CUI_CComposition_CIAnimationController * This
        );
    HRESULT ( STDMETHODCALLTYPE *Resume )(
        __x_ABI_CWindows_CUI_CComposition_CIAnimationController * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIAnimationControllerVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIAnimationController
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIAnimationControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PlaybackRate(This,value) )
    ( (This)->lpVtbl->put_PlaybackRate(This,value) )
    ( (This)->lpVtbl->get_Progress(This,value) )
    ( (This)->lpVtbl->put_Progress(This,value) )
    ( (This)->lpVtbl->get_ProgressBehavior(This,value) )
    ( (This)->lpVtbl->put_ProgressBehavior(This,value) )
    ( (This)->lpVtbl->Pause(This) )
    ( (This)->lpVtbl->Resume(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIAnimationController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IAnimationControllerStatics[] = L"Windows.UI.Composition.IAnimationControllerStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIAnimationControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationControllerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationControllerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationControllerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationControllerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationControllerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationControllerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxPlaybackRate )(
        __x_ABI_CWindows_CUI_CComposition_CIAnimationControllerStatics * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinPlaybackRate )(
        __x_ABI_CWindows_CUI_CComposition_CIAnimationControllerStatics * This,
                           __RPC__out FLOAT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIAnimationControllerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIAnimationControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIAnimationControllerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxPlaybackRate(This,value) )
    ( (This)->lpVtbl->get_MinPlaybackRate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIAnimationControllerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IAnimationObject[] = L"Windows.UI.Composition.IAnimationObject";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIAnimationObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationObject * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationObject * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationObject * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationObject * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationObject * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationObject * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *PopulatePropertyInfo )(
        __x_ABI_CWindows_CUI_CComposition_CIAnimationObject * This,
                  __RPC__in HSTRING propertyName,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo * propertyInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIAnimationObjectVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIAnimationObject
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIAnimationObjectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->PopulatePropertyInfo(This,propertyName,propertyInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIAnimationObject;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IAnimationPropertyInfo[] = L"Windows.UI.Composition.IAnimationPropertyInfo";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AccessMode )(
        __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CAnimationPropertyAccessMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AccessMode )(
        __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo * This,
                  __x_ABI_CWindows_CUI_CComposition_CAnimationPropertyAccessMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfoVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AccessMode(This,value) )
    ( (This)->lpVtbl->put_AccessMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIAnimationPropertyInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IBooleanKeyFrameAnimation[] = L"Windows.UI.Composition.IBooleanKeyFrameAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIBooleanKeyFrameAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBooleanKeyFrameAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBooleanKeyFrameAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBooleanKeyFrameAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBooleanKeyFrameAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBooleanKeyFrameAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBooleanKeyFrameAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *InsertKeyFrame )(
        __x_ABI_CWindows_CUI_CComposition_CIBooleanKeyFrameAnimation * This,
                  FLOAT normalizedProgressKey,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIBooleanKeyFrameAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIBooleanKeyFrameAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIBooleanKeyFrameAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->InsertKeyFrame(This,normalizedProgressKey,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIBooleanKeyFrameAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IBounceScalarNaturalMotionAnimation[] = L"Windows.UI.Composition.IBounceScalarNaturalMotionAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Acceleration )(
        __x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimation * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Acceleration )(
        __x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimation * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Restitution )(
        __x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimation * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Restitution )(
        __x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimation * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Acceleration(This,value) )
    ( (This)->lpVtbl->put_Acceleration(This,value) )
    ( (This)->lpVtbl->get_Restitution(This,value) )
    ( (This)->lpVtbl->put_Restitution(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IBounceVector2NaturalMotionAnimation[] = L"Windows.UI.Composition.IBounceVector2NaturalMotionAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Acceleration )(
        __x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimation * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Acceleration )(
        __x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimation * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Restitution )(
        __x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimation * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Restitution )(
        __x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimation * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Acceleration(This,value) )
    ( (This)->lpVtbl->put_Acceleration(This,value) )
    ( (This)->lpVtbl->get_Restitution(This,value) )
    ( (This)->lpVtbl->put_Restitution(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IBounceVector3NaturalMotionAnimation[] = L"Windows.UI.Composition.IBounceVector3NaturalMotionAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Acceleration )(
        __x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimation * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Acceleration )(
        __x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimation * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Restitution )(
        __x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimation * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Restitution )(
        __x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimation * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Acceleration(This,value) )
    ( (This)->lpVtbl->put_Acceleration(This,value) )
    ( (This)->lpVtbl->get_Restitution(This,value) )
    ( (This)->lpVtbl->put_Restitution(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IColorKeyFrameAnimation[] = L"Windows.UI.Composition.IColorKeyFrameAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InterpolationColorSpace )(
        __x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimation * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionColorSpace * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InterpolationColorSpace )(
        __x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimation * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionColorSpace value
        );
                    HRESULT ( STDMETHODCALLTYPE *InsertKeyFrame )(
        __x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimation * This,
                  FLOAT normalizedProgressKey,
                  __x_ABI_CWindows_CUI_CColor value
        );
                    HRESULT ( STDMETHODCALLTYPE *InsertKeyFrameWithEasingFunction )(
        __x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimation * This,
                  FLOAT normalizedProgressKey,
                  __x_ABI_CWindows_CUI_CColor value,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction * easingFunction
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InterpolationColorSpace(This,value) )
    ( (This)->lpVtbl->put_InterpolationColorSpace(This,value) )
    ( (This)->lpVtbl->InsertKeyFrame(This,normalizedProgressKey,value) )
    ( (This)->lpVtbl->InsertKeyFrameWithEasingFunction(This,normalizedProgressKey,value,easingFunction) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionAnimation[] = L"Windows.UI.Composition.ICompositionAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ClearAllParameters )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * This
        );
    HRESULT ( STDMETHODCALLTYPE *ClearParameter )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * This,
                  __RPC__in HSTRING key
        );
    HRESULT ( STDMETHODCALLTYPE *SetColorParameter )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * This,
                  __RPC__in HSTRING key,
                  __x_ABI_CWindows_CUI_CColor value
        );
    HRESULT ( STDMETHODCALLTYPE *SetMatrix3x2Parameter )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * This,
                  __RPC__in HSTRING key,
                  __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 value
        );
    HRESULT ( STDMETHODCALLTYPE *SetMatrix4x4Parameter )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * This,
                  __RPC__in HSTRING key,
                  __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 value
        );
    HRESULT ( STDMETHODCALLTYPE *SetQuaternionParameter )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * This,
                  __RPC__in HSTRING key,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion value
        );
    HRESULT ( STDMETHODCALLTYPE *SetReferenceParameter )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * This,
                  __RPC__in HSTRING key,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionObject * compositionObject
        );
    HRESULT ( STDMETHODCALLTYPE *SetScalarParameter )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * This,
                  __RPC__in HSTRING key,
                  FLOAT value
        );
    HRESULT ( STDMETHODCALLTYPE *SetVector2Parameter )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * This,
                  __RPC__in HSTRING key,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    HRESULT ( STDMETHODCALLTYPE *SetVector3Parameter )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * This,
                  __RPC__in HSTRING key,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    HRESULT ( STDMETHODCALLTYPE *SetVector4Parameter )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * This,
                  __RPC__in HSTRING key,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector4 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ClearAllParameters(This) )
    ( (This)->lpVtbl->ClearParameter(This,key) )
    ( (This)->lpVtbl->SetColorParameter(This,key,value) )
    ( (This)->lpVtbl->SetMatrix3x2Parameter(This,key,value) )
    ( (This)->lpVtbl->SetMatrix4x4Parameter(This,key,value) )
    ( (This)->lpVtbl->SetQuaternionParameter(This,key,value) )
    ( (This)->lpVtbl->SetReferenceParameter(This,key,compositionObject) )
    ( (This)->lpVtbl->SetScalarParameter(This,key,value) )
    ( (This)->lpVtbl->SetVector2Parameter(This,key,value) )
    ( (This)->lpVtbl->SetVector3Parameter(This,key,value) )
    ( (This)->lpVtbl->SetVector4Parameter(This,key,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionAnimation2[] = L"Windows.UI.Composition.ICompositionAnimation2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetBooleanParameter )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation2 * This,
                  __RPC__in HSTRING key,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Target )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Target )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation2 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetBooleanParameter(This,key,value) )
    ( (This)->lpVtbl->get_Target(This,value) )
    ( (This)->lpVtbl->put_Target(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionAnimation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionAnimation3[] = L"Windows.UI.Composition.ICompositionAnimation3";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InitialValueExpressions )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation3 * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation3Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InitialValueExpressions(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionAnimation3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionAnimation4[] = L"Windows.UI.Composition.ICompositionAnimation4";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetExpressionReferenceParameter )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation4 * This,
                  __RPC__in HSTRING parameterName,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIAnimationObject * source
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation4Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetExpressionReferenceParameter(This,parameterName,source) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionAnimation4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionAnimationBase[] = L"Windows.UI.Composition.ICompositionAnimationBase";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBaseVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBaseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionAnimationFactory[] = L"Windows.UI.Composition.ICompositionAnimationFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionAnimationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionAnimationGroup[] = L"Windows.UI.Composition.ICompositionAnimationGroup";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Count )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroup * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *Add )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroup * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * value
        );
    HRESULT ( STDMETHODCALLTYPE *Remove )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroup * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * value
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAll )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroup * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroupVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Count(This,value) )
    ( (This)->lpVtbl->Add(This,value) )
    ( (This)->lpVtbl->Remove(This,value) )
    ( (This)->lpVtbl->RemoveAll(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionBackdropBrush[] = L"Windows.UI.Composition.ICompositionBackdropBrush";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionBackdropBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBackdropBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBackdropBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBackdropBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBackdropBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBackdropBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBackdropBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionBackdropBrushVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionBackdropBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionBackdropBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionBackdropBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionBatchCompletedEventArgs[] = L"Windows.UI.Composition.ICompositionBatchCompletedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionBatchCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBatchCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBatchCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBatchCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBatchCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBatchCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBatchCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionBatchCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionBatchCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionBatchCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionBatchCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionBrush[] = L"Windows.UI.Composition.ICompositionBrush";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionBrushVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionBrushFactory[] = L"Windows.UI.Composition.ICompositionBrushFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionBrushFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBrushFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBrushFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBrushFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBrushFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBrushFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionBrushFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionBrushFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionBrushFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionBrushFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionBrushFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionCapabilities[] = L"Windows.UI.Composition.ICompositionCapabilities";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AreEffectsSupported )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilities * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *AreEffectsFast )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilities * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Changed )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilities * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionCapabilities_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Changed )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilities * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilitiesVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AreEffectsSupported(This,value) )
    ( (This)->lpVtbl->AreEffectsFast(This,value) )
    ( (This)->lpVtbl->add_Changed(This,handler,token) )
    ( (This)->lpVtbl->remove_Changed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionCapabilitiesStatics[] = L"Windows.UI.Composition.ICompositionCapabilitiesStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilitiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilitiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilitiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilitiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilitiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilitiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilitiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilitiesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilities * * current
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilitiesStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilitiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionCapabilitiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,current) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionCapabilitiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionClip[] = L"Windows.UI.Composition.ICompositionClip";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionClipVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClip * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClip * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClip * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClip * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClip * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClip * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionClipVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionClip
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionClipVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionClip;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionClip2[] = L"Windows.UI.Composition.ICompositionClip2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionClip2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AnchorPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AnchorPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationAngle )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationAngle )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationAngleInDegrees )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationAngleInDegrees )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scale )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Scale )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransformMatrix )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransformMatrix )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionClip2 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionClip2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionClip2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionClip2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AnchorPoint(This,value) )
    ( (This)->lpVtbl->put_AnchorPoint(This,value) )
    ( (This)->lpVtbl->get_CenterPoint(This,value) )
    ( (This)->lpVtbl->put_CenterPoint(This,value) )
    ( (This)->lpVtbl->get_Offset(This,value) )
    ( (This)->lpVtbl->put_Offset(This,value) )
    ( (This)->lpVtbl->get_RotationAngle(This,value) )
    ( (This)->lpVtbl->put_RotationAngle(This,value) )
    ( (This)->lpVtbl->get_RotationAngleInDegrees(This,value) )
    ( (This)->lpVtbl->put_RotationAngleInDegrees(This,value) )
    ( (This)->lpVtbl->get_Scale(This,value) )
    ( (This)->lpVtbl->put_Scale(This,value) )
    ( (This)->lpVtbl->get_TransformMatrix(This,value) )
    ( (This)->lpVtbl->put_TransformMatrix(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionClip2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionClipFactory[] = L"Windows.UI.Composition.ICompositionClipFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionClipFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClipFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClipFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClipFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClipFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClipFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionClipFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionClipFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionClipFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionClipFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionClipFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionColorBrush[] = L"Windows.UI.Composition.ICompositionColorBrush";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionColorBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionColorBrush * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionColorBrush * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionColorBrushVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionColorBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionColorBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Color(This,value) )
    ( (This)->lpVtbl->put_Color(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionColorBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionColorGradientStop[] = L"Windows.UI.Composition.ICompositionColorGradientStop";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStopVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStopVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStopVtbl *lpVtbl;
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
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionColorGradientStopCollection[] = L"Windows.UI.Composition.ICompositionColorGradientStopCollection";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStopCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStopCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStopCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStopCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStopCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStopCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStopCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStopCollectionVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStopCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStopCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStopCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionCommitBatch[] = L"Windows.UI.Composition.ICompositionCommitBatch";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatchVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatch * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatch * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatch * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatch * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatch * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatch * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsActive )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatch * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnded )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatch * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Completed )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatch * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CComposition__CCompositionBatchCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Completed )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatch * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatchVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatch
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatchVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsActive(This,value) )
    ( (This)->lpVtbl->get_IsEnded(This,value) )
    ( (This)->lpVtbl->add_Completed(This,handler,token) )
    ( (This)->lpVtbl->remove_Completed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatch;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionContainerShape[] = L"Windows.UI.Composition.ICompositionContainerShape";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionContainerShapeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionContainerShape * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionContainerShape * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionContainerShape * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionContainerShape * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionContainerShape * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionContainerShape * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Shapes )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionContainerShape * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CComposition__CCompositionShape * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionContainerShapeVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionContainerShape
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionContainerShapeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Shapes(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionContainerShape;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionDrawingSurface[] = L"Windows.UI.Composition.ICompositionDrawingSurface";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AlphaMode )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PixelFormat )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurfaceVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurfaceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AlphaMode(This,value) )
    ( (This)->lpVtbl->get_PixelFormat(This,value) )
    ( (This)->lpVtbl->get_Size(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionDrawingSurface2[] = L"Windows.UI.Composition.ICompositionDrawingSurface2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SizeInt32 )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2 * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CSizeInt32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *Resize )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2 * This,
                  __x_ABI_CWindows_CGraphics_CSizeInt32 sizePixels
        );
                    HRESULT ( STDMETHODCALLTYPE *Scroll )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2 * This,
                  __x_ABI_CWindows_CGraphics_CPointInt32 offset
        );
                    HRESULT ( STDMETHODCALLTYPE *ScrollRect )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2 * This,
                  __x_ABI_CWindows_CGraphics_CPointInt32 offset,
                  __x_ABI_CWindows_CGraphics_CRectInt32 scrollRect
        );
                    HRESULT ( STDMETHODCALLTYPE *ScrollWithClip )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2 * This,
                  __x_ABI_CWindows_CGraphics_CPointInt32 offset,
                  __x_ABI_CWindows_CGraphics_CRectInt32 clipRect
        );
                    HRESULT ( STDMETHODCALLTYPE *ScrollRectWithClip )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2 * This,
                  __x_ABI_CWindows_CGraphics_CPointInt32 offset,
                  __x_ABI_CWindows_CGraphics_CRectInt32 clipRect,
                  __x_ABI_CWindows_CGraphics_CRectInt32 scrollRect
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SizeInt32(This,value) )
    ( (This)->lpVtbl->Resize(This,sizePixels) )
    ( (This)->lpVtbl->Scroll(This,offset) )
    ( (This)->lpVtbl->ScrollRect(This,offset,scrollRect) )
    ( (This)->lpVtbl->ScrollWithClip(This,offset,clipRect) )
    ( (This)->lpVtbl->ScrollRectWithClip(This,offset,clipRect,scrollRect) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionDrawingSurfaceFactory[] = L"Windows.UI.Composition.ICompositionDrawingSurfaceFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurfaceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurfaceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurfaceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurfaceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurfaceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurfaceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurfaceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurfaceFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurfaceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurfaceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurfaceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionEasingFunction[] = L"Windows.UI.Composition.ICompositionEasingFunction";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunctionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunctionVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunctionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionEasingFunctionFactory[] = L"Windows.UI.Composition.ICompositionEasingFunctionFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunctionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunctionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunctionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunctionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunctionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunctionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunctionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunctionFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunctionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunctionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunctionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionEffectBrush[] = L"Windows.UI.Composition.ICompositionEffectBrush";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetSourceParameter )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrush * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetSourceParameter )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrush * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * source
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrushVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetSourceParameter(This,name,result) )
    ( (This)->lpVtbl->SetSourceParameter(This,name,source) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionEffectFactory[] = L"Windows.UI.Composition.ICompositionEffectFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateBrush )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactory * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrush * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactory * This,
                           __RPC__out HRESULT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LoadStatus )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactory * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionEffectFactoryLoadStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateBrush(This,result) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
    ( (This)->lpVtbl->get_LoadStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionEffectSourceParameter[] = L"Windows.UI.Composition.ICompositionEffectSourceParameter";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameterVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionEffectSourceParameterFactory[] = L"Windows.UI.Composition.ICompositionEffectSourceParameterFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameterFactory * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameter * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameterFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,name,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionEffectSourceParameterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionEllipseGeometry[] = L"Windows.UI.Composition.ICompositionEllipseGeometry";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometry * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometry * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometry * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometry * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometry * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometry * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Center )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometry * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Center )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometry * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Radius )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometry * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Radius )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometry * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometry
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Center(This,value) )
    ( (This)->lpVtbl->put_Center(This,value) )
    ( (This)->lpVtbl->get_Radius(This,value) )
    ( (This)->lpVtbl->put_Radius(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometry;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionGeometricClip[] = L"Windows.UI.Composition.ICompositionGeometricClip";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClipVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClip * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClip * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClip * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClip * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClip * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClip * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Geometry )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClip * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Geometry )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClip * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewBox )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClip * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ViewBox )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClip * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClipVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClip
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClipVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Geometry(This,value) )
    ( (This)->lpVtbl->put_Geometry(This,value) )
    ( (This)->lpVtbl->get_ViewBox(This,value) )
    ( (This)->lpVtbl->put_ViewBox(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClip;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionGeometry[] = L"Windows.UI.Composition.ICompositionGeometry";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionGeometryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TrimEnd )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TrimEnd )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrimOffset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TrimOffset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrimStart )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TrimStart )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionGeometryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionGeometryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TrimEnd(This,value) )
    ( (This)->lpVtbl->put_TrimEnd(This,value) )
    ( (This)->lpVtbl->get_TrimOffset(This,value) )
    ( (This)->lpVtbl->put_TrimOffset(This,value) )
    ( (This)->lpVtbl->get_TrimStart(This,value) )
    ( (This)->lpVtbl->put_TrimStart(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionGeometry;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionGeometryFactory[] = L"Windows.UI.Composition.ICompositionGeometryFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionGeometryFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometryFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometryFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometryFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometryFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometryFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGeometryFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionGeometryFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionGeometryFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionGeometryFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionGeometryFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionGradientBrush[] = L"Windows.UI.Composition.ICompositionGradientBrush";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AnchorPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AnchorPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColorStops )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStopCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendMode )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionGradientExtendMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExtendMode )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionGradientExtendMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InterpolationSpace )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionColorSpace * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InterpolationSpace )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionColorSpace value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationAngle )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationAngle )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationAngleInDegrees )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationAngleInDegrees )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scale )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Scale )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransformMatrix )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransformMatrix )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrushVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AnchorPoint(This,value) )
    ( (This)->lpVtbl->put_AnchorPoint(This,value) )
    ( (This)->lpVtbl->get_CenterPoint(This,value) )
    ( (This)->lpVtbl->put_CenterPoint(This,value) )
    ( (This)->lpVtbl->get_ColorStops(This,value) )
    ( (This)->lpVtbl->get_ExtendMode(This,value) )
    ( (This)->lpVtbl->put_ExtendMode(This,value) )
    ( (This)->lpVtbl->get_InterpolationSpace(This,value) )
    ( (This)->lpVtbl->put_InterpolationSpace(This,value) )
    ( (This)->lpVtbl->get_Offset(This,value) )
    ( (This)->lpVtbl->put_Offset(This,value) )
    ( (This)->lpVtbl->get_RotationAngle(This,value) )
    ( (This)->lpVtbl->put_RotationAngle(This,value) )
    ( (This)->lpVtbl->get_RotationAngleInDegrees(This,value) )
    ( (This)->lpVtbl->put_RotationAngleInDegrees(This,value) )
    ( (This)->lpVtbl->get_Scale(This,value) )
    ( (This)->lpVtbl->put_Scale(This,value) )
    ( (This)->lpVtbl->get_TransformMatrix(This,value) )
    ( (This)->lpVtbl->put_TransformMatrix(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionGradientBrush2[] = L"Windows.UI.Composition.ICompositionGradientBrush2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MappingMode )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionMappingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MappingMode )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush2 * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionMappingMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MappingMode(This,value) )
    ( (This)->lpVtbl->put_MappingMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrush2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionGradientBrushFactory[] = L"Windows.UI.Composition.ICompositionGradientBrushFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrushFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrushFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrushFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrushFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrushFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrushFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrushFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrushFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrushFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrushFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionGradientBrushFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionGraphicsDevice[] = L"Windows.UI.Composition.ICompositionGraphicsDevice";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateDrawingSurface )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice * This,
                  __x_ABI_CWindows_CFoundation_CSize sizePixels,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat pixelFormat,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode alphaMode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RenderingDeviceReplaced )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CComposition__CCompositionGraphicsDevice_Windows__CUI__CComposition__CRenderingDeviceReplacedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RenderingDeviceReplaced )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDeviceVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateDrawingSurface(This,sizePixels,pixelFormat,alphaMode,result) )
    ( (This)->lpVtbl->add_RenderingDeviceReplaced(This,handler,token) )
    ( (This)->lpVtbl->remove_RenderingDeviceReplaced(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionGraphicsDevice2[] = L"Windows.UI.Composition.ICompositionGraphicsDevice2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateDrawingSurface2 )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice2 * This,
                  __x_ABI_CWindows_CGraphics_CSizeInt32 sizePixels,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat pixelFormat,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode alphaMode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateVirtualDrawingSurface )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice2 * This,
                  __x_ABI_CWindows_CGraphics_CSizeInt32 sizePixels,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat pixelFormat,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode alphaMode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurface * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateDrawingSurface2(This,sizePixels,pixelFormat,alphaMode,result) )
    ( (This)->lpVtbl->CreateVirtualDrawingSurface(This,sizePixels,pixelFormat,alphaMode,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionGraphicsDevice3[] = L"Windows.UI.Composition.ICompositionGraphicsDevice3";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMipmapSurface )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice3 * This,
                  __x_ABI_CWindows_CGraphics_CSizeInt32 sizePixels,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat pixelFormat,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode alphaMode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurface * * result
        );
    HRESULT ( STDMETHODCALLTYPE *Trim )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice3 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice3Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMipmapSurface(This,sizePixels,pixelFormat,alphaMode,result) )
    ( (This)->lpVtbl->Trim(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionLight[] = L"Windows.UI.Composition.ICompositionLight";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionLightVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Targets )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionLight * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionLightVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionLight
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionLightVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Targets(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionLight;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionLight2[] = L"Windows.UI.Composition.ICompositionLight2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionLight2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExclusionsFromTargets )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionLight2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionLight2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionLight2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionLight2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExclusionsFromTargets(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionLight2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionLight3[] = L"Windows.UI.Composition.ICompositionLight3";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionLight3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLight3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionLight3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionLight3 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionLight3Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionLight3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionLight3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionLight3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionLightFactory[] = L"Windows.UI.Composition.ICompositionLightFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionLightFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLightFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLightFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLightFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLightFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLightFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLightFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionLightFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionLightFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionLightFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionLightFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionLineGeometry[] = L"Windows.UI.Composition.ICompositionLineGeometry";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometry * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometry * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometry * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometry * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometry * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometry * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Start )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometry * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Start )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometry * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_End )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometry * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_End )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometry * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometry
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Start(This,value) )
    ( (This)->lpVtbl->put_Start(This,value) )
    ( (This)->lpVtbl->get_End(This,value) )
    ( (This)->lpVtbl->put_End(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometry;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionLinearGradientBrush[] = L"Windows.UI.Composition.ICompositionLinearGradientBrush";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EndPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrush * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EndPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrush * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrush * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrush * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrushVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EndPoint(This,value) )
    ( (This)->lpVtbl->put_EndPoint(This,value) )
    ( (This)->lpVtbl->get_StartPoint(This,value) )
    ( (This)->lpVtbl->put_StartPoint(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionMaskBrush[] = L"Windows.UI.Composition.ICompositionMaskBrush";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Mask )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrush * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mask )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrush * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrush * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrush * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrushVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Mask(This,value) )
    ( (This)->lpVtbl->put_Mask(This,value) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->put_Source(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionMipmapSurface[] = L"Windows.UI.Composition.ICompositionMipmapSurface";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurface * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurface * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurface * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurface * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurface * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurface * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LevelCount )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurface * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlphaMode )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurface * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PixelFormat )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurface * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SizeInt32 )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurface * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CSizeInt32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDrawingSurfaceForLevel )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurface * This,
                  UINT32 level,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionDrawingSurface * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurfaceVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurface
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurfaceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LevelCount(This,value) )
    ( (This)->lpVtbl->get_AlphaMode(This,value) )
    ( (This)->lpVtbl->get_PixelFormat(This,value) )
    ( (This)->lpVtbl->get_SizeInt32(This,value) )
    ( (This)->lpVtbl->GetDrawingSurfaceForLevel(This,level,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionMipmapSurface;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionNineGridBrush[] = L"Windows.UI.Composition.ICompositionNineGridBrush";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BottomInset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BottomInset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BottomInsetScale )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BottomInsetScale )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCenterHollow )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsCenterHollow )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LeftInset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LeftInset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LeftInsetScale )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LeftInsetScale )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RightInset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RightInset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RightInsetScale )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RightInsetScale )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TopInset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TopInset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TopInsetScale )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TopInsetScale )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                  FLOAT value
        );
                    HRESULT ( STDMETHODCALLTYPE *SetInsets )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                  FLOAT inset
        );
                    HRESULT ( STDMETHODCALLTYPE *SetInsetsWithValues )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                  FLOAT left,
                  FLOAT top,
                  FLOAT right,
                  FLOAT bottom
        );
                    HRESULT ( STDMETHODCALLTYPE *SetInsetScales )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                  FLOAT scale
        );
                    HRESULT ( STDMETHODCALLTYPE *SetInsetScalesWithValues )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * This,
                  FLOAT left,
                  FLOAT top,
                  FLOAT right,
                  FLOAT bottom
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrushVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BottomInset(This,value) )
    ( (This)->lpVtbl->put_BottomInset(This,value) )
    ( (This)->lpVtbl->get_BottomInsetScale(This,value) )
    ( (This)->lpVtbl->put_BottomInsetScale(This,value) )
    ( (This)->lpVtbl->get_IsCenterHollow(This,value) )
    ( (This)->lpVtbl->put_IsCenterHollow(This,value) )
    ( (This)->lpVtbl->get_LeftInset(This,value) )
    ( (This)->lpVtbl->put_LeftInset(This,value) )
    ( (This)->lpVtbl->get_LeftInsetScale(This,value) )
    ( (This)->lpVtbl->put_LeftInsetScale(This,value) )
    ( (This)->lpVtbl->get_RightInset(This,value) )
    ( (This)->lpVtbl->put_RightInset(This,value) )
    ( (This)->lpVtbl->get_RightInsetScale(This,value) )
    ( (This)->lpVtbl->put_RightInsetScale(This,value) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->put_Source(This,value) )
    ( (This)->lpVtbl->get_TopInset(This,value) )
    ( (This)->lpVtbl->put_TopInset(This,value) )
    ( (This)->lpVtbl->get_TopInsetScale(This,value) )
    ( (This)->lpVtbl->put_TopInsetScale(This,value) )
    ( (This)->lpVtbl->SetInsets(This,inset) )
    ( (This)->lpVtbl->SetInsetsWithValues(This,left,top,right,bottom) )
    ( (This)->lpVtbl->SetInsetScales(This,scale) )
    ( (This)->lpVtbl->SetInsetScalesWithValues(This,left,top,right,bottom) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionObject[] = L"Windows.UI.Composition.ICompositionObject";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Compositor )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionObject * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Dispatcher )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionObject * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionObject * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * * value
        );
    HRESULT ( STDMETHODCALLTYPE *StartAnimation )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionObject * This,
                  __RPC__in HSTRING propertyName,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * animation
        );
    HRESULT ( STDMETHODCALLTYPE *StopAnimation )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionObject * This,
                  __RPC__in HSTRING propertyName
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionObjectVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionObject
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionObjectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Compositor(This,value) )
    ( (This)->lpVtbl->get_Dispatcher(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->StartAnimation(This,propertyName,animation) )
    ( (This)->lpVtbl->StopAnimation(This,propertyName) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionObject;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionObject2[] = L"Windows.UI.Composition.ICompositionObject2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionObject2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Comment )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionObject2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Comment )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionObject2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ImplicitAnimations )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionObject2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIImplicitAnimationCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ImplicitAnimations )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionObject2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIImplicitAnimationCollection * value
        );
    HRESULT ( STDMETHODCALLTYPE *StartAnimationGroup )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionObject2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * value
        );
    HRESULT ( STDMETHODCALLTYPE *StopAnimationGroup )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionObject2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionObject2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionObject2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionObject2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Comment(This,value) )
    ( (This)->lpVtbl->put_Comment(This,value) )
    ( (This)->lpVtbl->get_ImplicitAnimations(This,value) )
    ( (This)->lpVtbl->put_ImplicitAnimations(This,value) )
    ( (This)->lpVtbl->StartAnimationGroup(This,value) )
    ( (This)->lpVtbl->StopAnimationGroup(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionObject2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionObject3[] = L"Windows.UI.Composition.ICompositionObject3";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionObject3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DispatcherQueue )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionObject3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIDispatcherQueue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionObject3Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionObject3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionObject3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DispatcherQueue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionObject3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionObject4[] = L"Windows.UI.Composition.ICompositionObject4";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionObject4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObject4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetAnimationController )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionObject4 * This,
                  __RPC__in HSTRING propertyName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIAnimationController * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionObject4Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionObject4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionObject4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetAnimationController(This,propertyName,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionObject4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionObjectFactory[] = L"Windows.UI.Composition.ICompositionObjectFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionObjectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObjectFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObjectFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObjectFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObjectFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObjectFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObjectFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionObjectFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionObjectFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionObjectFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionObjectFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionObjectStatics[] = L"Windows.UI.Composition.ICompositionObjectStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionObjectStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObjectStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObjectStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObjectStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObjectStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObjectStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionObjectStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartAnimationWithIAnimationObject )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionObjectStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIAnimationObject * target,
                  __RPC__in HSTRING propertyName,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * animation
        );
    HRESULT ( STDMETHODCALLTYPE *StartAnimationGroupWithIAnimationObject )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionObjectStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIAnimationObject * target,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * animation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionObjectStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionObjectStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionObjectStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StartAnimationWithIAnimationObject(This,target,propertyName,animation) )
    ( (This)->lpVtbl->StartAnimationGroupWithIAnimationObject(This,target,animation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionObjectStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionPath[] = L"Windows.UI.Composition.ICompositionPath";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionPathVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPath * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPath * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPath * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPath * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPath * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPath * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionPathVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionPath
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionPathVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionPath;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionPathFactory[] = L"Windows.UI.Composition.ICompositionPathFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionPathFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPathFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPathFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPathFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPathFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPathFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPathFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPathFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CIGeometrySource2D * source,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionPath * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionPathFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionPathFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionPathFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,source,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionPathFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionPathGeometry[] = L"Windows.UI.Composition.ICompositionPathGeometry";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionPathGeometryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPathGeometry * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPathGeometry * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPathGeometry * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPathGeometry * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPathGeometry * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPathGeometry * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPathGeometry * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionPath * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Path )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPathGeometry * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionPath * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionPathGeometryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionPathGeometry
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionPathGeometryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Path(This,value) )
    ( (This)->lpVtbl->put_Path(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionPathGeometry;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionProjectedShadow[] = L"Windows.UI.Composition.ICompositionProjectedShadow";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BlurRadiusMultiplier )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BlurRadiusMultiplier )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Casters )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LightSource )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionLight * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LightSource )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionLight * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxBlurRadius )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxBlurRadius )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinBlurRadius )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinBlurRadius )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Receivers )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BlurRadiusMultiplier(This,value) )
    ( (This)->lpVtbl->put_BlurRadiusMultiplier(This,value) )
    ( (This)->lpVtbl->get_Casters(This,value) )
    ( (This)->lpVtbl->get_LightSource(This,value) )
    ( (This)->lpVtbl->put_LightSource(This,value) )
    ( (This)->lpVtbl->get_MaxBlurRadius(This,value) )
    ( (This)->lpVtbl->put_MaxBlurRadius(This,value) )
    ( (This)->lpVtbl->get_MinBlurRadius(This,value) )
    ( (This)->lpVtbl->put_MinBlurRadius(This,value) )
    ( (This)->lpVtbl->get_Receivers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionProjectedShadowCaster[] = L"Windows.UI.Composition.ICompositionProjectedShadowCaster";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Brush )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Brush )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CastingVisual )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CastingVisual )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Brush(This,value) )
    ( (This)->lpVtbl->put_Brush(This,value) )
    ( (This)->lpVtbl->get_CastingVisual(This,value) )
    ( (This)->lpVtbl->put_CastingVisual(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionProjectedShadowCasterCollection[] = L"Windows.UI.Composition.ICompositionProjectedShadowCasterCollection";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Count )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *InsertAbove )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * newCaster,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * reference
        );
    HRESULT ( STDMETHODCALLTYPE *InsertAtBottom )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * newCaster
        );
    HRESULT ( STDMETHODCALLTYPE *InsertAtTop )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * newCaster
        );
    HRESULT ( STDMETHODCALLTYPE *InsertBelow )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * newCaster,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * reference
        );
    HRESULT ( STDMETHODCALLTYPE *Remove )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * caster
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAll )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollectionVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Count(This,value) )
    ( (This)->lpVtbl->InsertAbove(This,newCaster,reference) )
    ( (This)->lpVtbl->InsertAtBottom(This,newCaster) )
    ( (This)->lpVtbl->InsertAtTop(This,newCaster) )
    ( (This)->lpVtbl->InsertBelow(This,newCaster,reference) )
    ( (This)->lpVtbl->Remove(This,caster) )
    ( (This)->lpVtbl->RemoveAll(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionProjectedShadowCasterCollectionStatics[] = L"Windows.UI.Composition.ICompositionProjectedShadowCasterCollectionStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollectionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollectionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollectionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollectionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollectionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollectionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollectionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxRespectedCasters )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollectionStatics * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollectionStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollectionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollectionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxRespectedCasters(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCasterCollectionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionProjectedShadowReceiver[] = L"Windows.UI.Composition.ICompositionProjectedShadowReceiver";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiver * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiver * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiver * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiver * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiver * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiver * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ReceivingVisual )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiver * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReceivingVisual )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiver * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiver
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ReceivingVisual(This,value) )
    ( (This)->lpVtbl->put_ReceivingVisual(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiver;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionProjectedShadowReceiverUnorderedCollection[] = L"Windows.UI.Composition.ICompositionProjectedShadowReceiverUnorderedCollection";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Add )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiver * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Count )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollection * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *Remove )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiver * value
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAll )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollection * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollectionVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Add(This,value) )
    ( (This)->lpVtbl->get_Count(This,value) )
    ( (This)->lpVtbl->Remove(This,value) )
    ( (This)->lpVtbl->RemoveAll(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiverUnorderedCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionPropertySet[] = L"Windows.UI.Composition.ICompositionPropertySet";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *InsertColor )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                  __RPC__in HSTRING propertyName,
                  __x_ABI_CWindows_CUI_CColor value
        );
    HRESULT ( STDMETHODCALLTYPE *InsertMatrix3x2 )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                  __RPC__in HSTRING propertyName,
                  __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 value
        );
    HRESULT ( STDMETHODCALLTYPE *InsertMatrix4x4 )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                  __RPC__in HSTRING propertyName,
                  __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 value
        );
    HRESULT ( STDMETHODCALLTYPE *InsertQuaternion )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                  __RPC__in HSTRING propertyName,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion value
        );
    HRESULT ( STDMETHODCALLTYPE *InsertScalar )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                  __RPC__in HSTRING propertyName,
                  FLOAT value
        );
    HRESULT ( STDMETHODCALLTYPE *InsertVector2 )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                  __RPC__in HSTRING propertyName,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    HRESULT ( STDMETHODCALLTYPE *InsertVector3 )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                  __RPC__in HSTRING propertyName,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    HRESULT ( STDMETHODCALLTYPE *InsertVector4 )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                  __RPC__in HSTRING propertyName,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector4 value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetColor )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                  __RPC__in HSTRING propertyName,
                   __RPC__out __x_ABI_CWindows_CUI_CColor * value,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionGetValueStatus * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetMatrix3x2 )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                  __RPC__in HSTRING propertyName,
                   __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 * value,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionGetValueStatus * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetMatrix4x4 )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                  __RPC__in HSTRING propertyName,
                   __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 * value,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionGetValueStatus * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetQuaternion )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                  __RPC__in HSTRING propertyName,
                   __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionGetValueStatus * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetScalar )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                  __RPC__in HSTRING propertyName,
                   __RPC__out FLOAT * value,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionGetValueStatus * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetVector2 )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                  __RPC__in HSTRING propertyName,
                   __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionGetValueStatus * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetVector3 )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                  __RPC__in HSTRING propertyName,
                   __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionGetValueStatus * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetVector4 )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * This,
                  __RPC__in HSTRING propertyName,
                   __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector4 * value,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionGetValueStatus * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySetVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySetVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->InsertColor(This,propertyName,value) )
    ( (This)->lpVtbl->InsertMatrix3x2(This,propertyName,value) )
    ( (This)->lpVtbl->InsertMatrix4x4(This,propertyName,value) )
    ( (This)->lpVtbl->InsertQuaternion(This,propertyName,value) )
    ( (This)->lpVtbl->InsertScalar(This,propertyName,value) )
    ( (This)->lpVtbl->InsertVector2(This,propertyName,value) )
    ( (This)->lpVtbl->InsertVector3(This,propertyName,value) )
    ( (This)->lpVtbl->InsertVector4(This,propertyName,value) )
    ( (This)->lpVtbl->TryGetColor(This,propertyName,value,result) )
    ( (This)->lpVtbl->TryGetMatrix3x2(This,propertyName,value,result) )
    ( (This)->lpVtbl->TryGetMatrix4x4(This,propertyName,value,result) )
    ( (This)->lpVtbl->TryGetQuaternion(This,propertyName,value,result) )
    ( (This)->lpVtbl->TryGetScalar(This,propertyName,value,result) )
    ( (This)->lpVtbl->TryGetVector2(This,propertyName,value,result) )
    ( (This)->lpVtbl->TryGetVector3(This,propertyName,value,result) )
    ( (This)->lpVtbl->TryGetVector4(This,propertyName,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionPropertySet2[] = L"Windows.UI.Composition.ICompositionPropertySet2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *InsertBoolean )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet2 * This,
                  __RPC__in HSTRING propertyName,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetBoolean )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet2 * This,
                  __RPC__in HSTRING propertyName,
                   __RPC__out boolean * value,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionGetValueStatus * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->InsertBoolean(This,propertyName,value) )
    ( (This)->lpVtbl->TryGetBoolean(This,propertyName,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionRadialGradientBrush[] = L"Windows.UI.Composition.ICompositionRadialGradientBrush";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EllipseCenter )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrush * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EllipseCenter )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrush * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EllipseRadius )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrush * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EllipseRadius )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrush * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GradientOriginOffset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrush * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_GradientOriginOffset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrush * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrushVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EllipseCenter(This,value) )
    ( (This)->lpVtbl->put_EllipseCenter(This,value) )
    ( (This)->lpVtbl->get_EllipseRadius(This,value) )
    ( (This)->lpVtbl->put_EllipseRadius(This,value) )
    ( (This)->lpVtbl->get_GradientOriginOffset(This,value) )
    ( (This)->lpVtbl->put_GradientOriginOffset(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionRectangleGeometry[] = L"Windows.UI.Composition.ICompositionRectangleGeometry";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometry * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometry * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometry * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometry * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometry * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometry * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometry * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometry * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometry * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Size )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometry * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometry
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Offset(This,value) )
    ( (This)->lpVtbl->put_Offset(This,value) )
    ( (This)->lpVtbl->get_Size(This,value) )
    ( (This)->lpVtbl->put_Size(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometry;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionRoundedRectangleGeometry[] = L"Windows.UI.Composition.ICompositionRoundedRectangleGeometry";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometry * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometry * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometry * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometry * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometry * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometry * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CornerRadius )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometry * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CornerRadius )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometry * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometry * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometry * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometry * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Size )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometry * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometry
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CornerRadius(This,value) )
    ( (This)->lpVtbl->put_CornerRadius(This,value) )
    ( (This)->lpVtbl->get_Offset(This,value) )
    ( (This)->lpVtbl->put_Offset(This,value) )
    ( (This)->lpVtbl->get_Size(This,value) )
    ( (This)->lpVtbl->put_Size(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometry;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionScopedBatch[] = L"Windows.UI.Composition.ICompositionScopedBatch";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatchVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsActive )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnded )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *End )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch * This
        );
    HRESULT ( STDMETHODCALLTYPE *Resume )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch * This
        );
    HRESULT ( STDMETHODCALLTYPE *Suspend )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Completed )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CComposition__CCompositionBatchCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Completed )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatchVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatchVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsActive(This,value) )
    ( (This)->lpVtbl->get_IsEnded(This,value) )
    ( (This)->lpVtbl->End(This) )
    ( (This)->lpVtbl->Resume(This) )
    ( (This)->lpVtbl->Suspend(This) )
    ( (This)->lpVtbl->add_Completed(This,handler,token) )
    ( (This)->lpVtbl->remove_Completed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionShadow[] = L"Windows.UI.Composition.ICompositionShadow";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionShadowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShadow * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShadow * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShadow * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShadow * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShadow * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShadow * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionShadowVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionShadow
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionShadowVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionShadow;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionShadowFactory[] = L"Windows.UI.Composition.ICompositionShadowFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionShadowFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShadowFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShadowFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShadowFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShadowFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShadowFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShadowFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionShadowFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionShadowFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionShadowFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionShadowFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionShape[] = L"Windows.UI.Composition.ICompositionShape";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionShapeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CenterPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationAngle )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationAngle )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationAngleInDegrees )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationAngleInDegrees )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scale )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Scale )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransformMatrix )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransformMatrix )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionShape * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionShapeVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionShape
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionShapeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CenterPoint(This,value) )
    ( (This)->lpVtbl->put_CenterPoint(This,value) )
    ( (This)->lpVtbl->get_Offset(This,value) )
    ( (This)->lpVtbl->put_Offset(This,value) )
    ( (This)->lpVtbl->get_RotationAngle(This,value) )
    ( (This)->lpVtbl->put_RotationAngle(This,value) )
    ( (This)->lpVtbl->get_RotationAngleInDegrees(This,value) )
    ( (This)->lpVtbl->put_RotationAngleInDegrees(This,value) )
    ( (This)->lpVtbl->get_Scale(This,value) )
    ( (This)->lpVtbl->put_Scale(This,value) )
    ( (This)->lpVtbl->get_TransformMatrix(This,value) )
    ( (This)->lpVtbl->put_TransformMatrix(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionShape;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionShapeFactory[] = L"Windows.UI.Composition.ICompositionShapeFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionShapeFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShapeFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShapeFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShapeFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShapeFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShapeFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionShapeFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionShapeFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionShapeFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionShapeFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionShapeFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionSpriteShape[] = L"Windows.UI.Composition.ICompositionSpriteShape";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShapeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FillBrush )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FillBrush )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Geometry )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Geometry )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStrokeNonScaling )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsStrokeNonScaling )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeBrush )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeBrush )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeDashArray )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                           __RPC__deref_out_opt __FIVector_1_float * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeDashCap )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionStrokeCap * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeDashCap )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionStrokeCap value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeDashOffset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeDashOffset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeEndCap )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionStrokeCap * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeEndCap )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionStrokeCap value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeLineJoin )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionStrokeLineJoin * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeLineJoin )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionStrokeLineJoin value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeMiterLimit )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeMiterLimit )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeStartCap )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionStrokeCap * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeStartCap )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionStrokeCap value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeThickness )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeThickness )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShapeVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShapeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FillBrush(This,value) )
    ( (This)->lpVtbl->put_FillBrush(This,value) )
    ( (This)->lpVtbl->get_Geometry(This,value) )
    ( (This)->lpVtbl->put_Geometry(This,value) )
    ( (This)->lpVtbl->get_IsStrokeNonScaling(This,value) )
    ( (This)->lpVtbl->put_IsStrokeNonScaling(This,value) )
    ( (This)->lpVtbl->get_StrokeBrush(This,value) )
    ( (This)->lpVtbl->put_StrokeBrush(This,value) )
    ( (This)->lpVtbl->get_StrokeDashArray(This,value) )
    ( (This)->lpVtbl->get_StrokeDashCap(This,value) )
    ( (This)->lpVtbl->put_StrokeDashCap(This,value) )
    ( (This)->lpVtbl->get_StrokeDashOffset(This,value) )
    ( (This)->lpVtbl->put_StrokeDashOffset(This,value) )
    ( (This)->lpVtbl->get_StrokeEndCap(This,value) )
    ( (This)->lpVtbl->put_StrokeEndCap(This,value) )
    ( (This)->lpVtbl->get_StrokeLineJoin(This,value) )
    ( (This)->lpVtbl->put_StrokeLineJoin(This,value) )
    ( (This)->lpVtbl->get_StrokeMiterLimit(This,value) )
    ( (This)->lpVtbl->put_StrokeMiterLimit(This,value) )
    ( (This)->lpVtbl->get_StrokeStartCap(This,value) )
    ( (This)->lpVtbl->put_StrokeStartCap(This,value) )
    ( (This)->lpVtbl->get_StrokeThickness(This,value) )
    ( (This)->lpVtbl->put_StrokeThickness(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionSurface[] = L"Windows.UI.Composition.ICompositionSurface";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurface * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurface * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurface * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurface * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurface * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurface * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionSurface
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionSurface;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionSurfaceBrush[] = L"Windows.UI.Composition.ICompositionSurfaceBrush";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BitmapInterpolationMode )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionBitmapInterpolationMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BitmapInterpolationMode )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionBitmapInterpolationMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalAlignmentRatio )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HorizontalAlignmentRatio )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Stretch )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionStretch * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Stretch )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionStretch value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Surface )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionSurface * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Surface )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionSurface * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalAlignmentRatio )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VerticalAlignmentRatio )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrushVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrushVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BitmapInterpolationMode(This,value) )
    ( (This)->lpVtbl->put_BitmapInterpolationMode(This,value) )
    ( (This)->lpVtbl->get_HorizontalAlignmentRatio(This,value) )
    ( (This)->lpVtbl->put_HorizontalAlignmentRatio(This,value) )
    ( (This)->lpVtbl->get_Stretch(This,value) )
    ( (This)->lpVtbl->put_Stretch(This,value) )
    ( (This)->lpVtbl->get_Surface(This,value) )
    ( (This)->lpVtbl->put_Surface(This,value) )
    ( (This)->lpVtbl->get_VerticalAlignmentRatio(This,value) )
    ( (This)->lpVtbl->put_VerticalAlignmentRatio(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionSurfaceBrush2[] = L"Windows.UI.Composition.ICompositionSurfaceBrush2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AnchorPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AnchorPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterPoint )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationAngle )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationAngle )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationAngleInDegrees )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationAngleInDegrees )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scale )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Scale )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransformMatrix )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransformMatrix )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AnchorPoint(This,value) )
    ( (This)->lpVtbl->put_AnchorPoint(This,value) )
    ( (This)->lpVtbl->get_CenterPoint(This,value) )
    ( (This)->lpVtbl->put_CenterPoint(This,value) )
    ( (This)->lpVtbl->get_Offset(This,value) )
    ( (This)->lpVtbl->put_Offset(This,value) )
    ( (This)->lpVtbl->get_RotationAngle(This,value) )
    ( (This)->lpVtbl->put_RotationAngle(This,value) )
    ( (This)->lpVtbl->get_RotationAngleInDegrees(This,value) )
    ( (This)->lpVtbl->put_RotationAngleInDegrees(This,value) )
    ( (This)->lpVtbl->get_Scale(This,value) )
    ( (This)->lpVtbl->put_Scale(This,value) )
    ( (This)->lpVtbl->get_TransformMatrix(This,value) )
    ( (This)->lpVtbl->put_TransformMatrix(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionSurfaceBrush3[] = L"Windows.UI.Composition.ICompositionSurfaceBrush3";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SnapToPixels )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SnapToPixels )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush3 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush3Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SnapToPixels(This,value) )
    ( (This)->lpVtbl->put_SnapToPixels(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionTarget[] = L"Windows.UI.Composition.ICompositionTarget";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionTargetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTarget * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTarget * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTarget * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTarget * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTarget * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTarget * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Root )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionTarget * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Root )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionTarget * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionTargetVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionTarget
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionTargetVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Root(This,value) )
    ( (This)->lpVtbl->put_Root(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionTarget;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionTargetFactory[] = L"Windows.UI.Composition.ICompositionTargetFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionTargetFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTargetFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTargetFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTargetFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTargetFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTargetFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTargetFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionTargetFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionTargetFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionTargetFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionTargetFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionTransform[] = L"Windows.UI.Composition.ICompositionTransform";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTransform * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTransform * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTransform * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTransform * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTransform * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTransform * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionTransformVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionTransform
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionTransformVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionTransform;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionTransformFactory[] = L"Windows.UI.Composition.ICompositionTransformFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionTransformFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTransformFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTransformFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTransformFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTransformFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTransformFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionTransformFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionTransformFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionTransformFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionTransformFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionTransformFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionViewBox[] = L"Windows.UI.Composition.ICompositionViewBox";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionViewBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HorizontalAlignmentRatio )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HorizontalAlignmentRatio )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Size )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Stretch )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionStretch * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Stretch )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionStretch value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalAlignmentRatio )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VerticalAlignmentRatio )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionViewBoxVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionViewBoxVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HorizontalAlignmentRatio(This,value) )
    ( (This)->lpVtbl->put_HorizontalAlignmentRatio(This,value) )
    ( (This)->lpVtbl->get_Offset(This,value) )
    ( (This)->lpVtbl->put_Offset(This,value) )
    ( (This)->lpVtbl->get_Size(This,value) )
    ( (This)->lpVtbl->put_Size(This,value) )
    ( (This)->lpVtbl->get_Stretch(This,value) )
    ( (This)->lpVtbl->put_Stretch(This,value) )
    ( (This)->lpVtbl->get_VerticalAlignmentRatio(This,value) )
    ( (This)->lpVtbl->put_VerticalAlignmentRatio(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionViewBox;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionVirtualDrawingSurface[] = L"Windows.UI.Composition.ICompositionVirtualDrawingSurface";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurface * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurface * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurface * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurface * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurface * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurface * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Trim )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurface * This,
                  UINT32 __rectsSize,
                                        __RPC__in_ecount_full(__rectsSize) __x_ABI_CWindows_CGraphics_CRectInt32 * rects
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurfaceVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurface
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurfaceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Trim(This,__rectsSize,rects) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurface;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionVirtualDrawingSurfaceFactory[] = L"Windows.UI.Composition.ICompositionVirtualDrawingSurfaceFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurfaceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurfaceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurfaceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurfaceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurfaceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurfaceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurfaceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurfaceFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurfaceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurfaceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionVirtualDrawingSurfaceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositionVisualSurface[] = L"Windows.UI.Composition.ICompositionVisualSurface";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurface * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurface * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurface * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurface * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurface * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurface * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SourceVisual )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurface * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SourceVisual )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurface * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceOffset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurface * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SourceOffset )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurface * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceSize )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurface * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SourceSize )(
        __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurface * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurfaceVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurface
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurfaceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SourceVisual(This,value) )
    ( (This)->lpVtbl->put_SourceVisual(This,value) )
    ( (This)->lpVtbl->get_SourceOffset(This,value) )
    ( (This)->lpVtbl->put_SourceOffset(This,value) )
    ( (This)->lpVtbl->get_SourceSize(This,value) )
    ( (This)->lpVtbl->put_SourceSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurface;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositor[] = L"Windows.UI.Composition.ICompositor";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateColorKeyFrameAnimation )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIColorKeyFrameAnimation * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateColorBrush )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionColorBrush * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateColorBrushWithColor )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                  __x_ABI_CWindows_CUI_CColor color,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionColorBrush * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateContainerVisual )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIContainerVisual * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCubicBezierEasingFunction )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 controlPoint1,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 controlPoint2,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICubicBezierEasingFunction * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateEffectFactory )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect * graphicsEffect,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactory * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateEffectFactoryWithProperties )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect * graphicsEffect,
                  __RPC__in_opt __FIIterable_1_HSTRING * animatableProperties,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionEffectFactory * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateExpressionAnimation )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateExpressionAnimationWithExpression )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                  __RPC__in HSTRING expression,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateInsetClip )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIInsetClip * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateInsetClipWithInsets )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                  FLOAT leftInset,
                  FLOAT topInset,
                  FLOAT rightInset,
                  FLOAT bottomInset,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIInsetClip * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateLinearEasingFunction )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CILinearEasingFunction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreatePropertySet )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateQuaternionKeyFrameAnimation )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIQuaternionKeyFrameAnimation * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateScalarKeyFrameAnimation )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIScalarKeyFrameAnimation * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateScopedBatch )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionBatchTypes batchType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionScopedBatch * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSpriteVisual )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CISpriteVisual * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateSurfaceBrush )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateSurfaceBrushWithSurface )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionSurface * surface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionSurfaceBrush * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateTargetForCurrentView )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionTarget * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateVector2KeyFrameAnimation )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVector2KeyFrameAnimation * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateVector3KeyFrameAnimation )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVector3KeyFrameAnimation * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateVector4KeyFrameAnimation )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVector4KeyFrameAnimation * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetCommitBatch )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionBatchTypes batchType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionCommitBatch * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositorVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositor
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateColorKeyFrameAnimation(This,result) )
    ( (This)->lpVtbl->CreateColorBrush(This,result) )
    ( (This)->lpVtbl->CreateColorBrushWithColor(This,color,result) )
    ( (This)->lpVtbl->CreateContainerVisual(This,result) )
    ( (This)->lpVtbl->CreateCubicBezierEasingFunction(This,controlPoint1,controlPoint2,result) )
    ( (This)->lpVtbl->CreateEffectFactory(This,graphicsEffect,result) )
    ( (This)->lpVtbl->CreateEffectFactoryWithProperties(This,graphicsEffect,animatableProperties,result) )
    ( (This)->lpVtbl->CreateExpressionAnimation(This,result) )
    ( (This)->lpVtbl->CreateExpressionAnimationWithExpression(This,expression,result) )
    ( (This)->lpVtbl->CreateInsetClip(This,result) )
    ( (This)->lpVtbl->CreateInsetClipWithInsets(This,leftInset,topInset,rightInset,bottomInset,result) )
    ( (This)->lpVtbl->CreateLinearEasingFunction(This,result) )
    ( (This)->lpVtbl->CreatePropertySet(This,result) )
    ( (This)->lpVtbl->CreateQuaternionKeyFrameAnimation(This,result) )
    ( (This)->lpVtbl->CreateScalarKeyFrameAnimation(This,result) )
    ( (This)->lpVtbl->CreateScopedBatch(This,batchType,result) )
    ( (This)->lpVtbl->CreateSpriteVisual(This,result) )
    ( (This)->lpVtbl->CreateSurfaceBrush(This,result) )
    ( (This)->lpVtbl->CreateSurfaceBrushWithSurface(This,surface,result) )
    ( (This)->lpVtbl->CreateTargetForCurrentView(This,result) )
    ( (This)->lpVtbl->CreateVector2KeyFrameAnimation(This,result) )
    ( (This)->lpVtbl->CreateVector3KeyFrameAnimation(This,result) )
    ( (This)->lpVtbl->CreateVector4KeyFrameAnimation(This,result) )
    ( (This)->lpVtbl->GetCommitBatch(This,batchType,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositor2[] = L"Windows.UI.Composition.ICompositor2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositor2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAmbientLight )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIAmbientLight * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateAnimationGroup )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationGroup * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateBackdropBrush )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBackdropBrush * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDistantLight )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIDistantLight * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDropShadow )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIDropShadow * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateImplicitAnimationCollection )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIImplicitAnimationCollection * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateLayerVisual )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CILayerVisual * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateMaskBrush )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionMaskBrush * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateNineGridBrush )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionNineGridBrush * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreatePointLight )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIPointLight * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSpotLight )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CISpotLight * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateStepEasingFunction )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateStepEasingFunctionWithStepCount )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor2 * This,
                  INT32 stepCount,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositor2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositor2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositor2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAmbientLight(This,result) )
    ( (This)->lpVtbl->CreateAnimationGroup(This,result) )
    ( (This)->lpVtbl->CreateBackdropBrush(This,result) )
    ( (This)->lpVtbl->CreateDistantLight(This,result) )
    ( (This)->lpVtbl->CreateDropShadow(This,result) )
    ( (This)->lpVtbl->CreateImplicitAnimationCollection(This,result) )
    ( (This)->lpVtbl->CreateLayerVisual(This,result) )
    ( (This)->lpVtbl->CreateMaskBrush(This,result) )
    ( (This)->lpVtbl->CreateNineGridBrush(This,result) )
    ( (This)->lpVtbl->CreatePointLight(This,result) )
    ( (This)->lpVtbl->CreateSpotLight(This,result) )
    ( (This)->lpVtbl->CreateStepEasingFunction(This,result) )
    ( (This)->lpVtbl->CreateStepEasingFunctionWithStepCount(This,stepCount,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositor2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositor3[] = L"Windows.UI.Composition.ICompositor3";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositor3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateHostBackdropBrush )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBackdropBrush * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositor3Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositor3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositor3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateHostBackdropBrush(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositor3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositor4[] = L"Windows.UI.Composition.ICompositor4";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositor4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateColorGradientStop )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateColorGradientStopWithOffsetAndColor )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor4 * This,
                  FLOAT offset,
                  __x_ABI_CWindows_CUI_CColor color,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionColorGradientStop * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateLinearGradientBrush )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionLinearGradientBrush * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSpringScalarAnimation )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimation * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSpringVector2Animation )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimation * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSpringVector3Animation )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimation * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositor4Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositor4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositor4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateColorGradientStop(This,result) )
    ( (This)->lpVtbl->CreateColorGradientStopWithOffsetAndColor(This,offset,color,result) )
    ( (This)->lpVtbl->CreateLinearGradientBrush(This,result) )
    ( (This)->lpVtbl->CreateSpringScalarAnimation(This,result) )
    ( (This)->lpVtbl->CreateSpringVector2Animation(This,result) )
    ( (This)->lpVtbl->CreateSpringVector3Animation(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositor4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositor5[] = L"Windows.UI.Composition.ICompositor5";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositor5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Comment )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Comment )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GlobalPlaybackRate )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_GlobalPlaybackRate )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                  FLOAT value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateBounceScalarAnimation )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIBounceScalarNaturalMotionAnimation * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateBounceVector2Animation )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIBounceVector2NaturalMotionAnimation * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateBounceVector3Animation )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIBounceVector3NaturalMotionAnimation * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateContainerShape )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionContainerShape * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateEllipseGeometry )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionEllipseGeometry * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateLineGeometry )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionLineGeometry * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreatePathGeometry )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionPathGeometry * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreatePathGeometryWithPath )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionPath * path,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionPathGeometry * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreatePathKeyFrameAnimation )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIPathKeyFrameAnimation * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateRectangleGeometry )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionRectangleGeometry * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateRoundedRectangleGeometry )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionRoundedRectangleGeometry * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateShapeVisual )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIShapeVisual * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateSpriteShape )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateSpriteShapeWithGeometry )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * geometry,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionSpriteShape * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateViewBox )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestCommitAsync )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositor5Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositor5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositor5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Comment(This,value) )
    ( (This)->lpVtbl->put_Comment(This,value) )
    ( (This)->lpVtbl->get_GlobalPlaybackRate(This,value) )
    ( (This)->lpVtbl->put_GlobalPlaybackRate(This,value) )
    ( (This)->lpVtbl->CreateBounceScalarAnimation(This,result) )
    ( (This)->lpVtbl->CreateBounceVector2Animation(This,result) )
    ( (This)->lpVtbl->CreateBounceVector3Animation(This,result) )
    ( (This)->lpVtbl->CreateContainerShape(This,result) )
    ( (This)->lpVtbl->CreateEllipseGeometry(This,result) )
    ( (This)->lpVtbl->CreateLineGeometry(This,result) )
    ( (This)->lpVtbl->CreatePathGeometry(This,result) )
    ( (This)->lpVtbl->CreatePathGeometryWithPath(This,path,result) )
    ( (This)->lpVtbl->CreatePathKeyFrameAnimation(This,result) )
    ( (This)->lpVtbl->CreateRectangleGeometry(This,result) )
    ( (This)->lpVtbl->CreateRoundedRectangleGeometry(This,result) )
    ( (This)->lpVtbl->CreateShapeVisual(This,result) )
    ( (This)->lpVtbl->CreateSpriteShape(This,result) )
    ( (This)->lpVtbl->CreateSpriteShapeWithGeometry(This,geometry,result) )
    ( (This)->lpVtbl->CreateViewBox(This,result) )
    ( (This)->lpVtbl->RequestCommitAsync(This,action) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositor5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositor6[] = L"Windows.UI.Composition.ICompositor6";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositor6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositor6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateGeometricClip )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor6 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClip * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateGeometricClipWithGeometry )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor6 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionGeometry * geometry,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionGeometricClip * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateRedirectVisual )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor6 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIRedirectVisual * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateRedirectVisualWithSourceVisual )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor6 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * source,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIRedirectVisual * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateBooleanKeyFrameAnimation )(
        __x_ABI_CWindows_CUI_CComposition_CICompositor6 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIBooleanKeyFrameAnimation * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositor6Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositor6
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositor6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateGeometricClip(This,result) )
    ( (This)->lpVtbl->CreateGeometricClipWithGeometry(This,geometry,result) )
    ( (This)->lpVtbl->CreateRedirectVisual(This,result) )
    ( (This)->lpVtbl->CreateRedirectVisualWithSourceVisual(This,source,result) )
    ( (This)->lpVtbl->CreateBooleanKeyFrameAnimation(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositor6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositorStatics[] = L"Windows.UI.Composition.ICompositorStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxGlobalPlaybackRate )(
        __x_ABI_CWindows_CUI_CComposition_CICompositorStatics * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinGlobalPlaybackRate )(
        __x_ABI_CWindows_CUI_CComposition_CICompositorStatics * This,
                           __RPC__out FLOAT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositorStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxGlobalPlaybackRate(This,value) )
    ( (This)->lpVtbl->get_MinGlobalPlaybackRate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositorWithProjectedShadow[] = L"Windows.UI.Composition.ICompositorWithProjectedShadow";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositorWithProjectedShadowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithProjectedShadow * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithProjectedShadow * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithProjectedShadow * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithProjectedShadow * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithProjectedShadow * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithProjectedShadow * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateProjectedShadowCaster )(
        __x_ABI_CWindows_CUI_CComposition_CICompositorWithProjectedShadow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowCaster * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateProjectedShadow )(
        __x_ABI_CWindows_CUI_CComposition_CICompositorWithProjectedShadow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadow * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateProjectedShadowReceiver )(
        __x_ABI_CWindows_CUI_CComposition_CICompositorWithProjectedShadow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionProjectedShadowReceiver * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositorWithProjectedShadowVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositorWithProjectedShadow
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositorWithProjectedShadowVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateProjectedShadowCaster(This,result) )
    ( (This)->lpVtbl->CreateProjectedShadow(This,result) )
    ( (This)->lpVtbl->CreateProjectedShadowReceiver(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositorWithProjectedShadow;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositorWithRadialGradient[] = L"Windows.UI.Composition.ICompositorWithRadialGradient";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositorWithRadialGradientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithRadialGradient * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithRadialGradient * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithRadialGradient * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithRadialGradient * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithRadialGradient * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithRadialGradient * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateRadialGradientBrush )(
        __x_ABI_CWindows_CUI_CComposition_CICompositorWithRadialGradient * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionRadialGradientBrush * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositorWithRadialGradientVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositorWithRadialGradient
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositorWithRadialGradientVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateRadialGradientBrush(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositorWithRadialGradient;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICompositorWithVisualSurface[] = L"Windows.UI.Composition.ICompositorWithVisualSurface";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositorWithVisualSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithVisualSurface * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithVisualSurface * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithVisualSurface * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithVisualSurface * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithVisualSurface * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICompositorWithVisualSurface * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateVisualSurface )(
        __x_ABI_CWindows_CUI_CComposition_CICompositorWithVisualSurface * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionVisualSurface * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositorWithVisualSurfaceVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICompositorWithVisualSurface
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICompositorWithVisualSurfaceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateVisualSurface(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICompositorWithVisualSurface;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IContainerVisual[] = L"Windows.UI.Composition.IContainerVisual";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIContainerVisualVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIContainerVisual * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIContainerVisual * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIContainerVisual * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIContainerVisual * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIContainerVisual * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIContainerVisual * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Children )(
        __x_ABI_CWindows_CUI_CComposition_CIContainerVisual * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisualCollection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIContainerVisualVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIContainerVisual
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIContainerVisualVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Children(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIContainerVisual;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IContainerVisualFactory[] = L"Windows.UI.Composition.IContainerVisualFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIContainerVisualFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIContainerVisualFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIContainerVisualFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIContainerVisualFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIContainerVisualFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIContainerVisualFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIContainerVisualFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIContainerVisualFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIContainerVisualFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIContainerVisualFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIContainerVisualFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ICubicBezierEasingFunction[] = L"Windows.UI.Composition.ICubicBezierEasingFunction";
typedef struct __x_ABI_CWindows_CUI_CComposition_CICubicBezierEasingFunctionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICubicBezierEasingFunction * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICubicBezierEasingFunction * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICubicBezierEasingFunction * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICubicBezierEasingFunction * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICubicBezierEasingFunction * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CICubicBezierEasingFunction * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ControlPoint1 )(
        __x_ABI_CWindows_CUI_CComposition_CICubicBezierEasingFunction * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ControlPoint2 )(
        __x_ABI_CWindows_CUI_CComposition_CICubicBezierEasingFunction * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICubicBezierEasingFunctionVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CICubicBezierEasingFunction
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CICubicBezierEasingFunctionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ControlPoint1(This,value) )
    ( (This)->lpVtbl->get_ControlPoint2(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CICubicBezierEasingFunction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IDistantLight[] = L"Windows.UI.Composition.IDistantLight";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIDistantLightVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDistantLight * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDistantLight * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDistantLight * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDistantLight * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDistantLight * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDistantLight * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CUI_CComposition_CIDistantLight * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CUI_CComposition_CIDistantLight * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CoordinateSpace )(
        __x_ABI_CWindows_CUI_CComposition_CIDistantLight * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CoordinateSpace )(
        __x_ABI_CWindows_CUI_CComposition_CIDistantLight * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_ABI_CWindows_CUI_CComposition_CIDistantLight * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Direction )(
        __x_ABI_CWindows_CUI_CComposition_CIDistantLight * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIDistantLightVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIDistantLight
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIDistantLightVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Color(This,value) )
    ( (This)->lpVtbl->put_Color(This,value) )
    ( (This)->lpVtbl->get_CoordinateSpace(This,value) )
    ( (This)->lpVtbl->put_CoordinateSpace(This,value) )
    ( (This)->lpVtbl->get_Direction(This,value) )
    ( (This)->lpVtbl->put_Direction(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIDistantLight;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IDistantLight2[] = L"Windows.UI.Composition.IDistantLight2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIDistantLight2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDistantLight2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDistantLight2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDistantLight2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDistantLight2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDistantLight2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDistantLight2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Intensity )(
        __x_ABI_CWindows_CUI_CComposition_CIDistantLight2 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Intensity )(
        __x_ABI_CWindows_CUI_CComposition_CIDistantLight2 * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIDistantLight2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIDistantLight2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIDistantLight2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Intensity(This,value) )
    ( (This)->lpVtbl->put_Intensity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIDistantLight2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IDropShadow[] = L"Windows.UI.Composition.IDropShadow";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIDropShadowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDropShadow * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDropShadow * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDropShadow * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDropShadow * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDropShadow * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDropShadow * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BlurRadius )(
        __x_ABI_CWindows_CUI_CComposition_CIDropShadow * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BlurRadius )(
        __x_ABI_CWindows_CUI_CComposition_CIDropShadow * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CUI_CComposition_CIDropShadow * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CUI_CComposition_CIDropShadow * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mask )(
        __x_ABI_CWindows_CUI_CComposition_CIDropShadow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mask )(
        __x_ABI_CWindows_CUI_CComposition_CIDropShadow * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CIDropShadow * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CIDropShadow * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Opacity )(
        __x_ABI_CWindows_CUI_CComposition_CIDropShadow * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Opacity )(
        __x_ABI_CWindows_CUI_CComposition_CIDropShadow * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIDropShadowVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIDropShadow
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIDropShadowVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BlurRadius(This,value) )
    ( (This)->lpVtbl->put_BlurRadius(This,value) )
    ( (This)->lpVtbl->get_Color(This,value) )
    ( (This)->lpVtbl->put_Color(This,value) )
    ( (This)->lpVtbl->get_Mask(This,value) )
    ( (This)->lpVtbl->put_Mask(This,value) )
    ( (This)->lpVtbl->get_Offset(This,value) )
    ( (This)->lpVtbl->put_Offset(This,value) )
    ( (This)->lpVtbl->get_Opacity(This,value) )
    ( (This)->lpVtbl->put_Opacity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIDropShadow;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IDropShadow2[] = L"Windows.UI.Composition.IDropShadow2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIDropShadow2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDropShadow2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDropShadow2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDropShadow2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDropShadow2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDropShadow2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIDropShadow2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SourcePolicy )(
        __x_ABI_CWindows_CUI_CComposition_CIDropShadow2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionDropShadowSourcePolicy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SourcePolicy )(
        __x_ABI_CWindows_CUI_CComposition_CIDropShadow2 * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionDropShadowSourcePolicy value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIDropShadow2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIDropShadow2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIDropShadow2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SourcePolicy(This,value) )
    ( (This)->lpVtbl->put_SourcePolicy(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIDropShadow2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IExpressionAnimation[] = L"Windows.UI.Composition.IExpressionAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Expression )(
        __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Expression )(
        __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Expression(This,value) )
    ( (This)->lpVtbl->put_Expression(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IImplicitAnimationCollection[] = L"Windows.UI.Composition.IImplicitAnimationCollection";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIImplicitAnimationCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIImplicitAnimationCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIImplicitAnimationCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIImplicitAnimationCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIImplicitAnimationCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIImplicitAnimationCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIImplicitAnimationCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIImplicitAnimationCollectionVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIImplicitAnimationCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIImplicitAnimationCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIImplicitAnimationCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IInsetClip[] = L"Windows.UI.Composition.IInsetClip";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIInsetClipVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIInsetClip * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIInsetClip * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIInsetClip * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIInsetClip * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIInsetClip * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIInsetClip * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BottomInset )(
        __x_ABI_CWindows_CUI_CComposition_CIInsetClip * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BottomInset )(
        __x_ABI_CWindows_CUI_CComposition_CIInsetClip * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LeftInset )(
        __x_ABI_CWindows_CUI_CComposition_CIInsetClip * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LeftInset )(
        __x_ABI_CWindows_CUI_CComposition_CIInsetClip * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RightInset )(
        __x_ABI_CWindows_CUI_CComposition_CIInsetClip * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RightInset )(
        __x_ABI_CWindows_CUI_CComposition_CIInsetClip * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TopInset )(
        __x_ABI_CWindows_CUI_CComposition_CIInsetClip * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TopInset )(
        __x_ABI_CWindows_CUI_CComposition_CIInsetClip * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIInsetClipVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIInsetClip
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIInsetClipVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BottomInset(This,value) )
    ( (This)->lpVtbl->put_BottomInset(This,value) )
    ( (This)->lpVtbl->get_LeftInset(This,value) )
    ( (This)->lpVtbl->put_LeftInset(This,value) )
    ( (This)->lpVtbl->get_RightInset(This,value) )
    ( (This)->lpVtbl->put_RightInset(This,value) )
    ( (This)->lpVtbl->get_TopInset(This,value) )
    ( (This)->lpVtbl->put_TopInset(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIInsetClip;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IKeyFrameAnimation[] = L"Windows.UI.Composition.IKeyFrameAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DelayTime )(
        __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DelayTime )(
        __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IterationBehavior )(
        __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CAnimationIterationBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IterationBehavior )(
        __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This,
                  __x_ABI_CWindows_CUI_CComposition_CAnimationIterationBehavior value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IterationCount )(
        __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IterationCount )(
        __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyFrameCount )(
        __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StopBehavior )(
        __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CAnimationStopBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StopBehavior )(
        __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This,
                  __x_ABI_CWindows_CUI_CComposition_CAnimationStopBehavior value
        );
                    HRESULT ( STDMETHODCALLTYPE *InsertExpressionKeyFrame )(
        __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This,
                  FLOAT normalizedProgressKey,
                  __RPC__in HSTRING value
        );
                    HRESULT ( STDMETHODCALLTYPE *InsertExpressionKeyFrameWithEasingFunction )(
        __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation * This,
                  FLOAT normalizedProgressKey,
                  __RPC__in HSTRING value,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction * easingFunction
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DelayTime(This,value) )
    ( (This)->lpVtbl->put_DelayTime(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->put_Duration(This,value) )
    ( (This)->lpVtbl->get_IterationBehavior(This,value) )
    ( (This)->lpVtbl->put_IterationBehavior(This,value) )
    ( (This)->lpVtbl->get_IterationCount(This,value) )
    ( (This)->lpVtbl->put_IterationCount(This,value) )
    ( (This)->lpVtbl->get_KeyFrameCount(This,value) )
    ( (This)->lpVtbl->get_StopBehavior(This,value) )
    ( (This)->lpVtbl->put_StopBehavior(This,value) )
    ( (This)->lpVtbl->InsertExpressionKeyFrame(This,normalizedProgressKey,value) )
    ( (This)->lpVtbl->InsertExpressionKeyFrameWithEasingFunction(This,normalizedProgressKey,value,easingFunction) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IKeyFrameAnimation2[] = L"Windows.UI.Composition.IKeyFrameAnimation2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CAnimationDirection * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Direction )(
        __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation2 * This,
                  __x_ABI_CWindows_CUI_CComposition_CAnimationDirection value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Direction(This,value) )
    ( (This)->lpVtbl->put_Direction(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IKeyFrameAnimation3[] = L"Windows.UI.Composition.IKeyFrameAnimation3";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DelayBehavior )(
        __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation3 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CAnimationDelayBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DelayBehavior )(
        __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation3 * This,
                  __x_ABI_CWindows_CUI_CComposition_CAnimationDelayBehavior value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation3Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DelayBehavior(This,value) )
    ( (This)->lpVtbl->put_DelayBehavior(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimation3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IKeyFrameAnimationFactory[] = L"Windows.UI.Composition.IKeyFrameAnimationFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimationFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIKeyFrameAnimationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ILayerVisual[] = L"Windows.UI.Composition.ILayerVisual";
typedef struct __x_ABI_CWindows_CUI_CComposition_CILayerVisualVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILayerVisual * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILayerVisual * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILayerVisual * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILayerVisual * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILayerVisual * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILayerVisual * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Effect )(
        __x_ABI_CWindows_CUI_CComposition_CILayerVisual * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Effect )(
        __x_ABI_CWindows_CUI_CComposition_CILayerVisual * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionEffectBrush * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CILayerVisualVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CILayerVisual
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CILayerVisualVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Effect(This,value) )
    ( (This)->lpVtbl->put_Effect(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CILayerVisual;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ILayerVisual2[] = L"Windows.UI.Composition.ILayerVisual2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CILayerVisual2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILayerVisual2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILayerVisual2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILayerVisual2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILayerVisual2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILayerVisual2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILayerVisual2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Shadow )(
        __x_ABI_CWindows_CUI_CComposition_CILayerVisual2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionShadow * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Shadow )(
        __x_ABI_CWindows_CUI_CComposition_CILayerVisual2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionShadow * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CILayerVisual2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CILayerVisual2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CILayerVisual2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Shadow(This,value) )
    ( (This)->lpVtbl->put_Shadow(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CILayerVisual2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ILinearEasingFunction[] = L"Windows.UI.Composition.ILinearEasingFunction";
typedef struct __x_ABI_CWindows_CUI_CComposition_CILinearEasingFunctionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILinearEasingFunction * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILinearEasingFunction * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILinearEasingFunction * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILinearEasingFunction * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILinearEasingFunction * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CILinearEasingFunction * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CILinearEasingFunctionVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CILinearEasingFunction
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CILinearEasingFunctionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CILinearEasingFunction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_INaturalMotionAnimation[] = L"Windows.UI.Composition.INaturalMotionAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DelayBehavior )(
        __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimation * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CAnimationDelayBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DelayBehavior )(
        __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimation * This,
                  __x_ABI_CWindows_CUI_CComposition_CAnimationDelayBehavior value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DelayTime )(
        __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DelayTime )(
        __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimation * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StopBehavior )(
        __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimation * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CAnimationStopBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StopBehavior )(
        __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimation * This,
                  __x_ABI_CWindows_CUI_CComposition_CAnimationStopBehavior value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DelayBehavior(This,value) )
    ( (This)->lpVtbl->put_DelayBehavior(This,value) )
    ( (This)->lpVtbl->get_DelayTime(This,value) )
    ( (This)->lpVtbl->put_DelayTime(This,value) )
    ( (This)->lpVtbl->get_StopBehavior(This,value) )
    ( (This)->lpVtbl->put_StopBehavior(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_INaturalMotionAnimationFactory[] = L"Windows.UI.Composition.INaturalMotionAnimationFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimationFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CINaturalMotionAnimationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IPathKeyFrameAnimation[] = L"Windows.UI.Composition.IPathKeyFrameAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIPathKeyFrameAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPathKeyFrameAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPathKeyFrameAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPathKeyFrameAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPathKeyFrameAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPathKeyFrameAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPathKeyFrameAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *InsertKeyFrame )(
        __x_ABI_CWindows_CUI_CComposition_CIPathKeyFrameAnimation * This,
                  FLOAT normalizedProgressKey,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionPath * path
        );
                    HRESULT ( STDMETHODCALLTYPE *InsertKeyFrameWithEasingFunction )(
        __x_ABI_CWindows_CUI_CComposition_CIPathKeyFrameAnimation * This,
                  FLOAT normalizedProgressKey,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionPath * path,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction * easingFunction
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIPathKeyFrameAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIPathKeyFrameAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIPathKeyFrameAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->InsertKeyFrame(This,normalizedProgressKey,path) )
    ( (This)->lpVtbl->InsertKeyFrameWithEasingFunction(This,normalizedProgressKey,path,easingFunction) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIPathKeyFrameAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IPointLight[] = L"Windows.UI.Composition.IPointLight";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIPointLightVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConstantAttenuation )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ConstantAttenuation )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CoordinateSpace )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CoordinateSpace )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LinearAttenuation )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LinearAttenuation )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_QuadraticAttenuation )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_QuadraticAttenuation )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIPointLightVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIPointLight
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIPointLightVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Color(This,value) )
    ( (This)->lpVtbl->put_Color(This,value) )
    ( (This)->lpVtbl->get_ConstantAttenuation(This,value) )
    ( (This)->lpVtbl->put_ConstantAttenuation(This,value) )
    ( (This)->lpVtbl->get_CoordinateSpace(This,value) )
    ( (This)->lpVtbl->put_CoordinateSpace(This,value) )
    ( (This)->lpVtbl->get_LinearAttenuation(This,value) )
    ( (This)->lpVtbl->put_LinearAttenuation(This,value) )
    ( (This)->lpVtbl->get_Offset(This,value) )
    ( (This)->lpVtbl->put_Offset(This,value) )
    ( (This)->lpVtbl->get_QuadraticAttenuation(This,value) )
    ( (This)->lpVtbl->put_QuadraticAttenuation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIPointLight;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IPointLight2[] = L"Windows.UI.Composition.IPointLight2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIPointLight2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Intensity )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight2 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Intensity )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight2 * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIPointLight2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIPointLight2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIPointLight2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Intensity(This,value) )
    ( (This)->lpVtbl->put_Intensity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIPointLight2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IPointLight3[] = L"Windows.UI.Composition.IPointLight3";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIPointLight3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIPointLight3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MinAttenuationCutoff )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight3 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinAttenuationCutoff )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight3 * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxAttenuationCutoff )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight3 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxAttenuationCutoff )(
        __x_ABI_CWindows_CUI_CComposition_CIPointLight3 * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIPointLight3Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIPointLight3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIPointLight3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MinAttenuationCutoff(This,value) )
    ( (This)->lpVtbl->put_MinAttenuationCutoff(This,value) )
    ( (This)->lpVtbl->get_MaxAttenuationCutoff(This,value) )
    ( (This)->lpVtbl->put_MaxAttenuationCutoff(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIPointLight3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IQuaternionKeyFrameAnimation[] = L"Windows.UI.Composition.IQuaternionKeyFrameAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIQuaternionKeyFrameAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIQuaternionKeyFrameAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIQuaternionKeyFrameAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIQuaternionKeyFrameAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIQuaternionKeyFrameAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIQuaternionKeyFrameAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIQuaternionKeyFrameAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *InsertKeyFrame )(
        __x_ABI_CWindows_CUI_CComposition_CIQuaternionKeyFrameAnimation * This,
                  FLOAT normalizedProgressKey,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion value
        );
                    HRESULT ( STDMETHODCALLTYPE *InsertKeyFrameWithEasingFunction )(
        __x_ABI_CWindows_CUI_CComposition_CIQuaternionKeyFrameAnimation * This,
                  FLOAT normalizedProgressKey,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion value,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction * easingFunction
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIQuaternionKeyFrameAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIQuaternionKeyFrameAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIQuaternionKeyFrameAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->InsertKeyFrame(This,normalizedProgressKey,value) )
    ( (This)->lpVtbl->InsertKeyFrameWithEasingFunction(This,normalizedProgressKey,value,easingFunction) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIQuaternionKeyFrameAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IRedirectVisual[] = L"Windows.UI.Composition.IRedirectVisual";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIRedirectVisualVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIRedirectVisual * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIRedirectVisual * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIRedirectVisual * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIRedirectVisual * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIRedirectVisual * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIRedirectVisual * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CUI_CComposition_CIRedirectVisual * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_ABI_CWindows_CUI_CComposition_CIRedirectVisual * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIRedirectVisualVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIRedirectVisual
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIRedirectVisualVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->put_Source(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIRedirectVisual;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IRenderingDeviceReplacedEventArgs[] = L"Windows.UI.Composition.IRenderingDeviceReplacedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIRenderingDeviceReplacedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIRenderingDeviceReplacedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIRenderingDeviceReplacedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIRenderingDeviceReplacedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIRenderingDeviceReplacedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIRenderingDeviceReplacedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIRenderingDeviceReplacedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_GraphicsDevice )(
        __x_ABI_CWindows_CUI_CComposition_CIRenderingDeviceReplacedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIRenderingDeviceReplacedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIRenderingDeviceReplacedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIRenderingDeviceReplacedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_GraphicsDevice(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIRenderingDeviceReplacedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IScalarKeyFrameAnimation[] = L"Windows.UI.Composition.IScalarKeyFrameAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIScalarKeyFrameAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarKeyFrameAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarKeyFrameAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarKeyFrameAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarKeyFrameAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarKeyFrameAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarKeyFrameAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *InsertKeyFrame )(
        __x_ABI_CWindows_CUI_CComposition_CIScalarKeyFrameAnimation * This,
                  FLOAT normalizedProgressKey,
                  FLOAT value
        );
                    HRESULT ( STDMETHODCALLTYPE *InsertKeyFrameWithEasingFunction )(
        __x_ABI_CWindows_CUI_CComposition_CIScalarKeyFrameAnimation * This,
                  FLOAT normalizedProgressKey,
                  FLOAT value,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction * easingFunction
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIScalarKeyFrameAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIScalarKeyFrameAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIScalarKeyFrameAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->InsertKeyFrame(This,normalizedProgressKey,value) )
    ( (This)->lpVtbl->InsertKeyFrameWithEasingFunction(This,normalizedProgressKey,value,easingFunction) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIScalarKeyFrameAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IScalarNaturalMotionAnimation[] = L"Windows.UI.Composition.IScalarNaturalMotionAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FinalValue )(
        __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation * This,
                           __RPC__deref_out_opt __FIReference_1_float * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FinalValue )(
        __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation * This,
                  __RPC__in_opt __FIReference_1_float * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InitialValue )(
        __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation * This,
                           __RPC__deref_out_opt __FIReference_1_float * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InitialValue )(
        __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation * This,
                  __RPC__in_opt __FIReference_1_float * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InitialVelocity )(
        __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InitialVelocity )(
        __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FinalValue(This,value) )
    ( (This)->lpVtbl->put_FinalValue(This,value) )
    ( (This)->lpVtbl->get_InitialValue(This,value) )
    ( (This)->lpVtbl->put_InitialValue(This,value) )
    ( (This)->lpVtbl->get_InitialVelocity(This,value) )
    ( (This)->lpVtbl->put_InitialVelocity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IScalarNaturalMotionAnimationFactory[] = L"Windows.UI.Composition.IScalarNaturalMotionAnimationFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimationFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IShapeVisual[] = L"Windows.UI.Composition.IShapeVisual";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIShapeVisualVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIShapeVisual * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIShapeVisual * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIShapeVisual * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIShapeVisual * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIShapeVisual * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIShapeVisual * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Shapes )(
        __x_ABI_CWindows_CUI_CComposition_CIShapeVisual * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CComposition__CCompositionShape * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewBox )(
        __x_ABI_CWindows_CUI_CComposition_CIShapeVisual * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ViewBox )(
        __x_ABI_CWindows_CUI_CComposition_CIShapeVisual * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionViewBox * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIShapeVisualVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIShapeVisual
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIShapeVisualVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Shapes(This,value) )
    ( (This)->lpVtbl->get_ViewBox(This,value) )
    ( (This)->lpVtbl->put_ViewBox(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIShapeVisual;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ISpotLight[] = L"Windows.UI.Composition.ISpotLight";
typedef struct __x_ABI_CWindows_CUI_CComposition_CISpotLightVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ConstantAttenuation )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ConstantAttenuation )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CoordinateSpace )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CoordinateSpace )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Direction )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InnerConeAngle )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InnerConeAngle )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InnerConeAngleInDegrees )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InnerConeAngleInDegrees )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InnerConeColor )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InnerConeColor )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LinearAttenuation )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LinearAttenuation )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OuterConeAngle )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OuterConeAngle )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OuterConeAngleInDegrees )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OuterConeAngleInDegrees )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OuterConeColor )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OuterConeColor )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_QuadraticAttenuation )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_QuadraticAttenuation )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CISpotLightVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CISpotLight
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CISpotLightVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ConstantAttenuation(This,value) )
    ( (This)->lpVtbl->put_ConstantAttenuation(This,value) )
    ( (This)->lpVtbl->get_CoordinateSpace(This,value) )
    ( (This)->lpVtbl->put_CoordinateSpace(This,value) )
    ( (This)->lpVtbl->get_Direction(This,value) )
    ( (This)->lpVtbl->put_Direction(This,value) )
    ( (This)->lpVtbl->get_InnerConeAngle(This,value) )
    ( (This)->lpVtbl->put_InnerConeAngle(This,value) )
    ( (This)->lpVtbl->get_InnerConeAngleInDegrees(This,value) )
    ( (This)->lpVtbl->put_InnerConeAngleInDegrees(This,value) )
    ( (This)->lpVtbl->get_InnerConeColor(This,value) )
    ( (This)->lpVtbl->put_InnerConeColor(This,value) )
    ( (This)->lpVtbl->get_LinearAttenuation(This,value) )
    ( (This)->lpVtbl->put_LinearAttenuation(This,value) )
    ( (This)->lpVtbl->get_Offset(This,value) )
    ( (This)->lpVtbl->put_Offset(This,value) )
    ( (This)->lpVtbl->get_OuterConeAngle(This,value) )
    ( (This)->lpVtbl->put_OuterConeAngle(This,value) )
    ( (This)->lpVtbl->get_OuterConeAngleInDegrees(This,value) )
    ( (This)->lpVtbl->put_OuterConeAngleInDegrees(This,value) )
    ( (This)->lpVtbl->get_OuterConeColor(This,value) )
    ( (This)->lpVtbl->put_OuterConeColor(This,value) )
    ( (This)->lpVtbl->get_QuadraticAttenuation(This,value) )
    ( (This)->lpVtbl->put_QuadraticAttenuation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CISpotLight;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ISpotLight2[] = L"Windows.UI.Composition.ISpotLight2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CISpotLight2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InnerConeIntensity )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight2 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InnerConeIntensity )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight2 * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OuterConeIntensity )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight2 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OuterConeIntensity )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight2 * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CISpotLight2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CISpotLight2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CISpotLight2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InnerConeIntensity(This,value) )
    ( (This)->lpVtbl->put_InnerConeIntensity(This,value) )
    ( (This)->lpVtbl->get_OuterConeIntensity(This,value) )
    ( (This)->lpVtbl->put_OuterConeIntensity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CISpotLight2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ISpotLight3[] = L"Windows.UI.Composition.ISpotLight3";
typedef struct __x_ABI_CWindows_CUI_CComposition_CISpotLight3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpotLight3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MinAttenuationCutoff )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight3 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinAttenuationCutoff )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight3 * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxAttenuationCutoff )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight3 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxAttenuationCutoff )(
        __x_ABI_CWindows_CUI_CComposition_CISpotLight3 * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CISpotLight3Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CISpotLight3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CISpotLight3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MinAttenuationCutoff(This,value) )
    ( (This)->lpVtbl->put_MinAttenuationCutoff(This,value) )
    ( (This)->lpVtbl->get_MaxAttenuationCutoff(This,value) )
    ( (This)->lpVtbl->put_MaxAttenuationCutoff(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CISpotLight3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ISpringScalarNaturalMotionAnimation[] = L"Windows.UI.Composition.ISpringScalarNaturalMotionAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DampingRatio )(
        __x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimation * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DampingRatio )(
        __x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimation * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Period )(
        __x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Period )(
        __x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimation * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DampingRatio(This,value) )
    ( (This)->lpVtbl->put_DampingRatio(This,value) )
    ( (This)->lpVtbl->get_Period(This,value) )
    ( (This)->lpVtbl->put_Period(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CISpringScalarNaturalMotionAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ISpringVector2NaturalMotionAnimation[] = L"Windows.UI.Composition.ISpringVector2NaturalMotionAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DampingRatio )(
        __x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimation * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DampingRatio )(
        __x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimation * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Period )(
        __x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Period )(
        __x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimation * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DampingRatio(This,value) )
    ( (This)->lpVtbl->put_DampingRatio(This,value) )
    ( (This)->lpVtbl->get_Period(This,value) )
    ( (This)->lpVtbl->put_Period(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CISpringVector2NaturalMotionAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ISpringVector3NaturalMotionAnimation[] = L"Windows.UI.Composition.ISpringVector3NaturalMotionAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DampingRatio )(
        __x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimation * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DampingRatio )(
        __x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimation * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Period )(
        __x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Period )(
        __x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimation * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DampingRatio(This,value) )
    ( (This)->lpVtbl->put_DampingRatio(This,value) )
    ( (This)->lpVtbl->get_Period(This,value) )
    ( (This)->lpVtbl->put_Period(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CISpringVector3NaturalMotionAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ISpriteVisual[] = L"Windows.UI.Composition.ISpriteVisual";
typedef struct __x_ABI_CWindows_CUI_CComposition_CISpriteVisualVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpriteVisual * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpriteVisual * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpriteVisual * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpriteVisual * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpriteVisual * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpriteVisual * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Brush )(
        __x_ABI_CWindows_CUI_CComposition_CISpriteVisual * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Brush )(
        __x_ABI_CWindows_CUI_CComposition_CISpriteVisual * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CISpriteVisualVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CISpriteVisual
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CISpriteVisualVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Brush(This,value) )
    ( (This)->lpVtbl->put_Brush(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CISpriteVisual;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_ISpriteVisual2[] = L"Windows.UI.Composition.ISpriteVisual2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CISpriteVisual2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpriteVisual2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpriteVisual2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpriteVisual2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpriteVisual2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpriteVisual2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CISpriteVisual2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Shadow )(
        __x_ABI_CWindows_CUI_CComposition_CISpriteVisual2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionShadow * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Shadow )(
        __x_ABI_CWindows_CUI_CComposition_CISpriteVisual2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionShadow * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CISpriteVisual2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CISpriteVisual2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CISpriteVisual2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Shadow(This,value) )
    ( (This)->lpVtbl->put_Shadow(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CISpriteVisual2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IStepEasingFunction[] = L"Windows.UI.Composition.IStepEasingFunction";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunctionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FinalStep )(
        __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FinalStep )(
        __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InitialStep )(
        __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InitialStep )(
        __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsFinalStepSingleFrame )(
        __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsFinalStepSingleFrame )(
        __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInitialStepSingleFrame )(
        __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsInitialStepSingleFrame )(
        __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StepCount )(
        __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StepCount )(
        __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction * This,
                  INT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunctionVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIStepEasingFunctionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FinalStep(This,value) )
    ( (This)->lpVtbl->put_FinalStep(This,value) )
    ( (This)->lpVtbl->get_InitialStep(This,value) )
    ( (This)->lpVtbl->put_InitialStep(This,value) )
    ( (This)->lpVtbl->get_IsFinalStepSingleFrame(This,value) )
    ( (This)->lpVtbl->put_IsFinalStepSingleFrame(This,value) )
    ( (This)->lpVtbl->get_IsInitialStepSingleFrame(This,value) )
    ( (This)->lpVtbl->put_IsInitialStepSingleFrame(This,value) )
    ( (This)->lpVtbl->get_StepCount(This,value) )
    ( (This)->lpVtbl->put_StepCount(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIStepEasingFunction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IVector2KeyFrameAnimation[] = L"Windows.UI.Composition.IVector2KeyFrameAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIVector2KeyFrameAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2KeyFrameAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2KeyFrameAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2KeyFrameAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2KeyFrameAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2KeyFrameAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2KeyFrameAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *InsertKeyFrame )(
        __x_ABI_CWindows_CUI_CComposition_CIVector2KeyFrameAnimation * This,
                  FLOAT normalizedProgressKey,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                    HRESULT ( STDMETHODCALLTYPE *InsertKeyFrameWithEasingFunction )(
        __x_ABI_CWindows_CUI_CComposition_CIVector2KeyFrameAnimation * This,
                  FLOAT normalizedProgressKey,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction * easingFunction
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIVector2KeyFrameAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIVector2KeyFrameAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIVector2KeyFrameAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->InsertKeyFrame(This,normalizedProgressKey,value) )
    ( (This)->lpVtbl->InsertKeyFrameWithEasingFunction(This,normalizedProgressKey,value,easingFunction) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIVector2KeyFrameAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IVector2NaturalMotionAnimation[] = L"Windows.UI.Composition.IVector2NaturalMotionAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FinalValue )(
        __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FinalValue )(
        __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InitialValue )(
        __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InitialValue )(
        __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InitialVelocity )(
        __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InitialVelocity )(
        __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FinalValue(This,value) )
    ( (This)->lpVtbl->put_FinalValue(This,value) )
    ( (This)->lpVtbl->get_InitialValue(This,value) )
    ( (This)->lpVtbl->put_InitialValue(This,value) )
    ( (This)->lpVtbl->get_InitialVelocity(This,value) )
    ( (This)->lpVtbl->put_InitialVelocity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IVector2NaturalMotionAnimationFactory[] = L"Windows.UI.Composition.IVector2NaturalMotionAnimationFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimationFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IVector3KeyFrameAnimation[] = L"Windows.UI.Composition.IVector3KeyFrameAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIVector3KeyFrameAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3KeyFrameAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3KeyFrameAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3KeyFrameAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3KeyFrameAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3KeyFrameAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3KeyFrameAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *InsertKeyFrame )(
        __x_ABI_CWindows_CUI_CComposition_CIVector3KeyFrameAnimation * This,
                  FLOAT normalizedProgressKey,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                    HRESULT ( STDMETHODCALLTYPE *InsertKeyFrameWithEasingFunction )(
        __x_ABI_CWindows_CUI_CComposition_CIVector3KeyFrameAnimation * This,
                  FLOAT normalizedProgressKey,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction * easingFunction
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIVector3KeyFrameAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIVector3KeyFrameAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIVector3KeyFrameAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->InsertKeyFrame(This,normalizedProgressKey,value) )
    ( (This)->lpVtbl->InsertKeyFrameWithEasingFunction(This,normalizedProgressKey,value,easingFunction) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIVector3KeyFrameAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IVector3NaturalMotionAnimation[] = L"Windows.UI.Composition.IVector3NaturalMotionAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FinalValue )(
        __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimation * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FinalValue )(
        __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimation * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InitialValue )(
        __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimation * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InitialValue )(
        __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimation * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InitialVelocity )(
        __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InitialVelocity )(
        __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimation * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FinalValue(This,value) )
    ( (This)->lpVtbl->put_FinalValue(This,value) )
    ( (This)->lpVtbl->get_InitialValue(This,value) )
    ( (This)->lpVtbl->put_InitialValue(This,value) )
    ( (This)->lpVtbl->get_InitialVelocity(This,value) )
    ( (This)->lpVtbl->put_InitialVelocity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IVector3NaturalMotionAnimationFactory[] = L"Windows.UI.Composition.IVector3NaturalMotionAnimationFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimationFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIVector3NaturalMotionAnimationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IVector4KeyFrameAnimation[] = L"Windows.UI.Composition.IVector4KeyFrameAnimation";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIVector4KeyFrameAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector4KeyFrameAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector4KeyFrameAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector4KeyFrameAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector4KeyFrameAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector4KeyFrameAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVector4KeyFrameAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *InsertKeyFrame )(
        __x_ABI_CWindows_CUI_CComposition_CIVector4KeyFrameAnimation * This,
                  FLOAT normalizedProgressKey,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector4 value
        );
                    HRESULT ( STDMETHODCALLTYPE *InsertKeyFrameWithEasingFunction )(
        __x_ABI_CWindows_CUI_CComposition_CIVector4KeyFrameAnimation * This,
                  FLOAT normalizedProgressKey,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector4 value,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionEasingFunction * easingFunction
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIVector4KeyFrameAnimationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIVector4KeyFrameAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIVector4KeyFrameAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->InsertKeyFrame(This,normalizedProgressKey,value) )
    ( (This)->lpVtbl->InsertKeyFrameWithEasingFunction(This,normalizedProgressKey,value,easingFunction) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIVector4KeyFrameAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IVisual[] = L"Windows.UI.Composition.IVisual";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIVisualVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisual * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisual * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AnchorPoint )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AnchorPoint )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackfaceVisibility )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionBackfaceVisibility * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BackfaceVisibility )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionBackfaceVisibility value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BorderMode )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionBorderMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BorderMode )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionBorderMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterPoint )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterPoint )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Clip )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionClip * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Clip )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionClip * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CompositeMode )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionCompositeMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CompositeMode )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionCompositeMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsVisible )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsVisible )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Offset )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Opacity )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Opacity )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Orientation )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Parent )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIContainerVisual * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationAngle )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationAngle )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationAngleInDegrees )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationAngleInDegrees )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationAxis )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationAxis )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scale )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Scale )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Size )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransformMatrix )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransformMatrix )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIVisualVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIVisual
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIVisualVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AnchorPoint(This,value) )
    ( (This)->lpVtbl->put_AnchorPoint(This,value) )
    ( (This)->lpVtbl->get_BackfaceVisibility(This,value) )
    ( (This)->lpVtbl->put_BackfaceVisibility(This,value) )
    ( (This)->lpVtbl->get_BorderMode(This,value) )
    ( (This)->lpVtbl->put_BorderMode(This,value) )
    ( (This)->lpVtbl->get_CenterPoint(This,value) )
    ( (This)->lpVtbl->put_CenterPoint(This,value) )
    ( (This)->lpVtbl->get_Clip(This,value) )
    ( (This)->lpVtbl->put_Clip(This,value) )
    ( (This)->lpVtbl->get_CompositeMode(This,value) )
    ( (This)->lpVtbl->put_CompositeMode(This,value) )
    ( (This)->lpVtbl->get_IsVisible(This,value) )
    ( (This)->lpVtbl->put_IsVisible(This,value) )
    ( (This)->lpVtbl->get_Offset(This,value) )
    ( (This)->lpVtbl->put_Offset(This,value) )
    ( (This)->lpVtbl->get_Opacity(This,value) )
    ( (This)->lpVtbl->put_Opacity(This,value) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
    ( (This)->lpVtbl->put_Orientation(This,value) )
    ( (This)->lpVtbl->get_Parent(This,value) )
    ( (This)->lpVtbl->get_RotationAngle(This,value) )
    ( (This)->lpVtbl->put_RotationAngle(This,value) )
    ( (This)->lpVtbl->get_RotationAngleInDegrees(This,value) )
    ( (This)->lpVtbl->put_RotationAngleInDegrees(This,value) )
    ( (This)->lpVtbl->get_RotationAxis(This,value) )
    ( (This)->lpVtbl->put_RotationAxis(This,value) )
    ( (This)->lpVtbl->get_Scale(This,value) )
    ( (This)->lpVtbl->put_Scale(This,value) )
    ( (This)->lpVtbl->get_Size(This,value) )
    ( (This)->lpVtbl->put_Size(This,value) )
    ( (This)->lpVtbl->get_TransformMatrix(This,value) )
    ( (This)->lpVtbl->put_TransformMatrix(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIVisual;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IVisual2[] = L"Windows.UI.Composition.IVisual2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIVisual2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisual2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisual2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisual2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisual2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisual2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisual2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ParentForTransform )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ParentForTransform )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RelativeOffsetAdjustment )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RelativeOffsetAdjustment )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual2 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RelativeSizeAdjustment )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RelativeSizeAdjustment )(
        __x_ABI_CWindows_CUI_CComposition_CIVisual2 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIVisual2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIVisual2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIVisual2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ParentForTransform(This,value) )
    ( (This)->lpVtbl->put_ParentForTransform(This,value) )
    ( (This)->lpVtbl->get_RelativeOffsetAdjustment(This,value) )
    ( (This)->lpVtbl->put_RelativeOffsetAdjustment(This,value) )
    ( (This)->lpVtbl->get_RelativeSizeAdjustment(This,value) )
    ( (This)->lpVtbl->put_RelativeSizeAdjustment(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIVisual2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IVisualCollection[] = L"Windows.UI.Composition.IVisualCollection";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIVisualCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Count )(
        __x_ABI_CWindows_CUI_CComposition_CIVisualCollection * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *InsertAbove )(
        __x_ABI_CWindows_CUI_CComposition_CIVisualCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * newChild,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * sibling
        );
    HRESULT ( STDMETHODCALLTYPE *InsertAtBottom )(
        __x_ABI_CWindows_CUI_CComposition_CIVisualCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * newChild
        );
    HRESULT ( STDMETHODCALLTYPE *InsertAtTop )(
        __x_ABI_CWindows_CUI_CComposition_CIVisualCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * newChild
        );
    HRESULT ( STDMETHODCALLTYPE *InsertBelow )(
        __x_ABI_CWindows_CUI_CComposition_CIVisualCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * newChild,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * sibling
        );
    HRESULT ( STDMETHODCALLTYPE *Remove )(
        __x_ABI_CWindows_CUI_CComposition_CIVisualCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * child
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAll )(
        __x_ABI_CWindows_CUI_CComposition_CIVisualCollection * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIVisualCollectionVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIVisualCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIVisualCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Count(This,value) )
    ( (This)->lpVtbl->InsertAbove(This,newChild,sibling) )
    ( (This)->lpVtbl->InsertAtBottom(This,newChild) )
    ( (This)->lpVtbl->InsertAtTop(This,newChild) )
    ( (This)->lpVtbl->InsertBelow(This,newChild,sibling) )
    ( (This)->lpVtbl->Remove(This,child) )
    ( (This)->lpVtbl->RemoveAll(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIVisualCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IVisualElement[] = L"Windows.UI.Composition.IVisualElement";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIVisualElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualElement * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualElement * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualElement * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualElement * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualElement * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualElement * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIVisualElementVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIVisualElement
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIVisualElementVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIVisualElement;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IVisualFactory[] = L"Windows.UI.Composition.IVisualFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIVisualFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIVisualFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIVisualFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIVisualFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIVisualFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_IVisualUnorderedCollection[] = L"Windows.UI.Composition.IVisualUnorderedCollection";
typedef struct __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Count )(
        __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollection * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *Add )(
        __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * newVisual
        );
    HRESULT ( STDMETHODCALLTYPE *Remove )(
        __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * visual
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAll )(
        __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollection * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollectionVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Count(This,value) )
    ( (This)->lpVtbl->Add(This,newVisual) )
    ( (This)->lpVtbl->Remove(This,visual) )
    ( (This)->lpVtbl->RemoveAll(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CIVisualUnorderedCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_AmbientLight[] = L"Windows.UI.Composition.AmbientLight";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_AnimationController[] = L"Windows.UI.Composition.AnimationController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_AnimationPropertyInfo[] = L"Windows.UI.Composition.AnimationPropertyInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_BooleanKeyFrameAnimation[] = L"Windows.UI.Composition.BooleanKeyFrameAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_BounceScalarNaturalMotionAnimation[] = L"Windows.UI.Composition.BounceScalarNaturalMotionAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_BounceVector2NaturalMotionAnimation[] = L"Windows.UI.Composition.BounceVector2NaturalMotionAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_BounceVector3NaturalMotionAnimation[] = L"Windows.UI.Composition.BounceVector3NaturalMotionAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_ColorKeyFrameAnimation[] = L"Windows.UI.Composition.ColorKeyFrameAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionAnimation[] = L"Windows.UI.Composition.CompositionAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionAnimationGroup[] = L"Windows.UI.Composition.CompositionAnimationGroup";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionBackdropBrush[] = L"Windows.UI.Composition.CompositionBackdropBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionBatchCompletedEventArgs[] = L"Windows.UI.Composition.CompositionBatchCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionBrush[] = L"Windows.UI.Composition.CompositionBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionCapabilities[] = L"Windows.UI.Composition.CompositionCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionClip[] = L"Windows.UI.Composition.CompositionClip";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionColorBrush[] = L"Windows.UI.Composition.CompositionColorBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionColorGradientStop[] = L"Windows.UI.Composition.CompositionColorGradientStop";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionColorGradientStopCollection[] = L"Windows.UI.Composition.CompositionColorGradientStopCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionCommitBatch[] = L"Windows.UI.Composition.CompositionCommitBatch";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionContainerShape[] = L"Windows.UI.Composition.CompositionContainerShape";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionDrawingSurface[] = L"Windows.UI.Composition.CompositionDrawingSurface";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionEasingFunction[] = L"Windows.UI.Composition.CompositionEasingFunction";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionEffectBrush[] = L"Windows.UI.Composition.CompositionEffectBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionEffectFactory[] = L"Windows.UI.Composition.CompositionEffectFactory";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionEffectSourceParameter[] = L"Windows.UI.Composition.CompositionEffectSourceParameter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionEllipseGeometry[] = L"Windows.UI.Composition.CompositionEllipseGeometry";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionGeometricClip[] = L"Windows.UI.Composition.CompositionGeometricClip";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionGeometry[] = L"Windows.UI.Composition.CompositionGeometry";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionGradientBrush[] = L"Windows.UI.Composition.CompositionGradientBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionGraphicsDevice[] = L"Windows.UI.Composition.CompositionGraphicsDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionLight[] = L"Windows.UI.Composition.CompositionLight";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionLineGeometry[] = L"Windows.UI.Composition.CompositionLineGeometry";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionLinearGradientBrush[] = L"Windows.UI.Composition.CompositionLinearGradientBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionMaskBrush[] = L"Windows.UI.Composition.CompositionMaskBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionMipmapSurface[] = L"Windows.UI.Composition.CompositionMipmapSurface";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionNineGridBrush[] = L"Windows.UI.Composition.CompositionNineGridBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionObject[] = L"Windows.UI.Composition.CompositionObject";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionPath[] = L"Windows.UI.Composition.CompositionPath";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionPathGeometry[] = L"Windows.UI.Composition.CompositionPathGeometry";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionProjectedShadow[] = L"Windows.UI.Composition.CompositionProjectedShadow";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionProjectedShadowCaster[] = L"Windows.UI.Composition.CompositionProjectedShadowCaster";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionProjectedShadowCasterCollection[] = L"Windows.UI.Composition.CompositionProjectedShadowCasterCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionProjectedShadowReceiver[] = L"Windows.UI.Composition.CompositionProjectedShadowReceiver";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionProjectedShadowReceiverUnorderedCollection[] = L"Windows.UI.Composition.CompositionProjectedShadowReceiverUnorderedCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionPropertySet[] = L"Windows.UI.Composition.CompositionPropertySet";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionRadialGradientBrush[] = L"Windows.UI.Composition.CompositionRadialGradientBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionRectangleGeometry[] = L"Windows.UI.Composition.CompositionRectangleGeometry";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionRoundedRectangleGeometry[] = L"Windows.UI.Composition.CompositionRoundedRectangleGeometry";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionScopedBatch[] = L"Windows.UI.Composition.CompositionScopedBatch";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionShadow[] = L"Windows.UI.Composition.CompositionShadow";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionShape[] = L"Windows.UI.Composition.CompositionShape";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionShapeCollection[] = L"Windows.UI.Composition.CompositionShapeCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionSpriteShape[] = L"Windows.UI.Composition.CompositionSpriteShape";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionStrokeDashArray[] = L"Windows.UI.Composition.CompositionStrokeDashArray";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionSurfaceBrush[] = L"Windows.UI.Composition.CompositionSurfaceBrush";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionTarget[] = L"Windows.UI.Composition.CompositionTarget";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionTransform[] = L"Windows.UI.Composition.CompositionTransform";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionViewBox[] = L"Windows.UI.Composition.CompositionViewBox";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionVirtualDrawingSurface[] = L"Windows.UI.Composition.CompositionVirtualDrawingSurface";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CompositionVisualSurface[] = L"Windows.UI.Composition.CompositionVisualSurface";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Compositor[] = L"Windows.UI.Composition.Compositor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_ContainerVisual[] = L"Windows.UI.Composition.ContainerVisual";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_CubicBezierEasingFunction[] = L"Windows.UI.Composition.CubicBezierEasingFunction";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_DistantLight[] = L"Windows.UI.Composition.DistantLight";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_DropShadow[] = L"Windows.UI.Composition.DropShadow";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_ExpressionAnimation[] = L"Windows.UI.Composition.ExpressionAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_ImplicitAnimationCollection[] = L"Windows.UI.Composition.ImplicitAnimationCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_InitialValueExpressionCollection[] = L"Windows.UI.Composition.InitialValueExpressionCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_InsetClip[] = L"Windows.UI.Composition.InsetClip";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_KeyFrameAnimation[] = L"Windows.UI.Composition.KeyFrameAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_LayerVisual[] = L"Windows.UI.Composition.LayerVisual";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_LinearEasingFunction[] = L"Windows.UI.Composition.LinearEasingFunction";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_NaturalMotionAnimation[] = L"Windows.UI.Composition.NaturalMotionAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_PathKeyFrameAnimation[] = L"Windows.UI.Composition.PathKeyFrameAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_PointLight[] = L"Windows.UI.Composition.PointLight";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_QuaternionKeyFrameAnimation[] = L"Windows.UI.Composition.QuaternionKeyFrameAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_RedirectVisual[] = L"Windows.UI.Composition.RedirectVisual";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_RenderingDeviceReplacedEventArgs[] = L"Windows.UI.Composition.RenderingDeviceReplacedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_ScalarKeyFrameAnimation[] = L"Windows.UI.Composition.ScalarKeyFrameAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_ScalarNaturalMotionAnimation[] = L"Windows.UI.Composition.ScalarNaturalMotionAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_ShapeVisual[] = L"Windows.UI.Composition.ShapeVisual";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_SpotLight[] = L"Windows.UI.Composition.SpotLight";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_SpringScalarNaturalMotionAnimation[] = L"Windows.UI.Composition.SpringScalarNaturalMotionAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_SpringVector2NaturalMotionAnimation[] = L"Windows.UI.Composition.SpringVector2NaturalMotionAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_SpringVector3NaturalMotionAnimation[] = L"Windows.UI.Composition.SpringVector3NaturalMotionAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_SpriteVisual[] = L"Windows.UI.Composition.SpriteVisual";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_StepEasingFunction[] = L"Windows.UI.Composition.StepEasingFunction";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Vector2KeyFrameAnimation[] = L"Windows.UI.Composition.Vector2KeyFrameAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Vector2NaturalMotionAnimation[] = L"Windows.UI.Composition.Vector2NaturalMotionAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Vector3KeyFrameAnimation[] = L"Windows.UI.Composition.Vector3KeyFrameAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Vector3NaturalMotionAnimation[] = L"Windows.UI.Composition.Vector3NaturalMotionAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Vector4KeyFrameAnimation[] = L"Windows.UI.Composition.Vector4KeyFrameAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Visual[] = L"Windows.UI.Composition.Visual";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_VisualCollection[] = L"Windows.UI.Composition.VisualCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_VisualUnorderedCollection[] = L"Windows.UI.Composition.VisualUnorderedCollection";
       
       
#pragma clang diagnostic pop
