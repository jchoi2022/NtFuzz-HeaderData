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
#include "Windows.Devices.Geolocation.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Services.Maps.h"
#include "Windows.Services.Maps.LocalSearch.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Controls.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSource __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSource;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSourceFactory __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSourceFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceFactory __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSource __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSource;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceFactory __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs2 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs2 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardFactory __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraFactory __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapContextRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapContextRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl3 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl6 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl6;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl7 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl7;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl8 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl8;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkClickEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkClickEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerEnteredEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerEnteredEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerExitedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerExitedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkRightTappedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkRightTappedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperFactory __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics4 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics5 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics5;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics6 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics6;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics7 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics7;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics8 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics8;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureClickEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureClickEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerEnteredEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerEnteredEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerExitedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerExitedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureRightTappedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureRightTappedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperience __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperience;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceChangedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceFactory __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement2 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement4 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementClickEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementClickEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementFactory __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerEnteredEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerEnteredEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerExitedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerExitedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics2 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics3 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics4 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerClickEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerClickEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerContextRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerContextRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerEnteredEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerEnteredEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerExitedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerExitedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon2 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics2 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapInputEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapInputEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControl __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControl;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerFactory __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3D __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3D;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DFactory __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon2 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRightTappedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRightTappedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteViewFactory __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteViewFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntryStatesStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntryStatesStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs2 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequest __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequest;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestDeferral __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestDeferral;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs2 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSource __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSource;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSourceFactory __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSourceFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactory __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics2 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequest __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequest;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestDeferral __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestDeferral;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs2 __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceFactory __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanorama __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanorama;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaStatics __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaStatics;
typedef interface __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElementVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElementVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapElementVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapElementVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayerVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayerVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteViewVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteViewVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteViewVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteViewVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheetVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheetVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheetVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheetVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSourceVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSourceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSourceVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                       __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElementVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElementVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                       __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayerVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayerVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                       __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteViewVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteViewVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                       __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSourceVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSourceVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement;
typedef struct __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElementVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElementVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer;
typedef struct __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayerVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayerVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView;
typedef struct __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteViewVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteViewVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource;
typedef struct __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSourceVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSourceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D;
typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3DVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3DVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3DVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D;
typedef struct __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3DVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3D * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3DVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3DVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama;
typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanoramaVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanoramaVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanoramaVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama;
typedef struct __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanoramaVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanorama * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanoramaVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanoramaVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CCustomMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileBitmapRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CCustomMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileBitmapRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CCustomMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileBitmapRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CCustomMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileBitmapRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CCustomMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileBitmapRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CCustomMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileBitmapRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CCustomMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileBitmapRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CCustomMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileBitmapRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSource * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CCustomMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileBitmapRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CCustomMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileBitmapRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CCustomMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileBitmapRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CHttpMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CHttpMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CHttpMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CHttpMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CHttpMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CHttpMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CHttpMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CHttpMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CHttpMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CHttpMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CHttpMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CLocalMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CLocalMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CLocalMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CLocalMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CLocalMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CLocalMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CLocalMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CLocalMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSource * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CLocalMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CLocalMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CLocalMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_IInspectable __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangingEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapContextRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapContextRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapContextRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapContextRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapContextRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapContextRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapContextRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapContextRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapContextRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapContextRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapContextRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapContextRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkClickEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkClickEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkClickEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkClickEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkClickEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkClickEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkClickEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkClickEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkClickEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkClickEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkClickEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkClickEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerEnteredEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerEnteredEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerEnteredEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerEnteredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerEnteredEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerEnteredEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerEnteredEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerEnteredEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerEnteredEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerEnteredEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerEnteredEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerEnteredEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerExitedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerExitedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerExitedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerExitedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerExitedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerExitedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerExitedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerExitedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerExitedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerExitedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerExitedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerExitedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkRightTappedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkRightTappedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkRightTappedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkRightTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkRightTappedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkRightTappedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkRightTappedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkRightTappedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkRightTappedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkRightTappedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkRightTappedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkRightTappedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureClickEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureClickEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureClickEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureClickEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureClickEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureClickEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureClickEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureClickEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureClickEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureClickEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureClickEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureClickEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerEnteredEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerEnteredEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerEnteredEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerEnteredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerEnteredEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerEnteredEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerEnteredEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerEnteredEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerEnteredEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerEnteredEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerEnteredEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerEnteredEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerExitedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerExitedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerExitedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerExitedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerExitedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerExitedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerExitedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerExitedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerExitedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerExitedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerExitedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerExitedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureRightTappedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureRightTappedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureRightTappedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureRightTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureRightTappedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureRightTappedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureRightTappedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureRightTappedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureRightTappedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureRightTappedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureRightTappedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureRightTappedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapCustomExperienceChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapCustomExperienceChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapCustomExperienceChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapCustomExperienceChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapCustomExperienceChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapCustomExperienceChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapCustomExperienceChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapCustomExperienceChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapCustomExperienceChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapCustomExperienceChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapCustomExperienceChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementClickEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementClickEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementClickEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementClickEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementClickEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementClickEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementClickEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementClickEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementClickEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementClickEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementClickEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementClickEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerEnteredEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerEnteredEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerEnteredEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerEnteredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerEnteredEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerEnteredEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerEnteredEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerEnteredEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerEnteredEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerEnteredEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerEnteredEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerEnteredEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerExitedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerExitedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerExitedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerExitedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerExitedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerExitedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerExitedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerExitedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerExitedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerExitedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerExitedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerExitedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapInputEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapInputEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapInputEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapInputEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapInputEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapInputEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapInputEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapInputEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapInputEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapInputEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapInputEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapInputEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapRightTappedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapRightTappedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapRightTappedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapRightTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapRightTappedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapRightTappedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapRightTappedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapRightTappedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRightTappedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapRightTappedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapRightTappedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapRightTappedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerClickEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerClickEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerClickEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerClickEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerClickEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerClickEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerClickEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerClickEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerClickEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerClickEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerClickEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerClickEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerContextRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerContextRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerContextRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerContextRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerContextRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerContextRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerContextRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerContextRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerContextRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerContextRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerContextRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerContextRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerEnteredEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerEnteredEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerEnteredEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerEnteredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerEnteredEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerEnteredEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerEnteredEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerEnteredEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerEnteredEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerEnteredEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerEnteredEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerEnteredEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerExitedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerExitedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerExitedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerExitedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerExitedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerExitedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerExitedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerExitedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerExitedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerExitedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerExitedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerExitedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapScene_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapScene_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapScene_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapScene_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapScene_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapScene_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapScene_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapScene_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapScene_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapScene_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapScene_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgsVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObject __x_ABI_CWindows_CUI_CXaml_CIDependencyObject;
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
typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This, __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;
interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;
interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation;
typedef interface __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;
typedef struct __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl;
interface __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;
typedef struct __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl;
interface __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;
typedef struct __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                       __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl;
interface __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl *lpVtbl;
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
typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt IInspectable * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath;
typedef interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGeolocation__CGeopath;
typedef struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeopathVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGeolocation__CGeopathVtbl;
interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeopathVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGeolocation__CGeopath;
typedef struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeopathVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGeolocation__CGeopathVtbl;
interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeopathVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath;
typedef struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopathVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                       __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopathVtbl;
interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopathVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CDevices__CGeolocation__CGeopath __FIVector_1_Windows__CDevices__CGeolocation__CGeopath;
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CGeolocation__CGeopath;
typedef struct __FIVector_1_Windows__CDevices__CGeolocation__CGeopathVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *value);
    END_INTERFACE
} __FIVector_1_Windows__CDevices__CGeolocation__CGeopathVtbl;
interface __FIVector_1_Windows__CDevices__CGeolocation__CGeopath
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CGeolocation__CGeopathVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint;
typedef interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint;
typedef struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeopointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGeolocation__CGeopointVtbl;
interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeopointVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint;
typedef struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeopointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGeolocation__CGeopointVtbl;
interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeopointVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute __x_ABI_CWindows_CServices_CMaps_CIMapRoute;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDataTemplate __x_ABI_CWindows_CUI_CXaml_CIDataTemplate;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;
typedef struct __x_ABI_CWindows_CUI_CXaml_CThickness __x_ABI_CWindows_CUI_CXaml_CThickness;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapAnimationKind __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapAnimationKind;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapCameraChangeReason __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapCameraChangeReason;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapColorScheme __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapColorScheme;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapElementCollisionBehavior __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapElementCollisionBehavior;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapInteractionMode __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapInteractionMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapLoadingStatus __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapLoadingStatus;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapModel3DShadingOption __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapModel3DShadingOption;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapPanInteractionMode __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapPanInteractionMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapProjection __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapProjection;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapStyle __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapStyle;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapTileAnimationState __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapTileAnimationState;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapTileLayer __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapTileLayer;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapVisibleRegionKind __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapVisibleRegionKind;
typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapWatermarkMode __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapWatermarkMode;
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapZoomLevelRange __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapZoomLevelRange;
enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapAnimationKind
{
    MapAnimationKind_Default = 0,
    MapAnimationKind_None = 1,
    MapAnimationKind_Linear = 2,
    MapAnimationKind_Bow = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapCameraChangeReason
{
    MapCameraChangeReason_System = 0,
    MapCameraChangeReason_UserInteraction = 1,
    MapCameraChangeReason_Programmatic = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapColorScheme
{
    MapColorScheme_Light = 0,
    MapColorScheme_Dark = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapElementCollisionBehavior
{
    MapElementCollisionBehavior_Hide = 0,
    MapElementCollisionBehavior_RemainVisible = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapInteractionMode
{
    MapInteractionMode_Auto = 0,
    MapInteractionMode_Disabled = 1,
    MapInteractionMode_GestureOnly = 2,
    MapInteractionMode_PointerAndKeyboard = 2,
    MapInteractionMode_ControlOnly = 3,
    MapInteractionMode_GestureAndControl = 4,
    MapInteractionMode_PointerKeyboardAndControl = 4,
    MapInteractionMode_PointerOnly = 5,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapLoadingStatus
{
    MapLoadingStatus_Loading = 0,
    MapLoadingStatus_Loaded = 1,
    MapLoadingStatus_DataUnavailable = 2,
    MapLoadingStatus_DownloadedMapsManagerUnavailable = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapModel3DShadingOption
{
    MapModel3DShadingOption_Default = 0,
    MapModel3DShadingOption_Flat = 1,
    MapModel3DShadingOption_Smooth = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapPanInteractionMode
{
    MapPanInteractionMode_Auto = 0,
    MapPanInteractionMode_Disabled = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapProjection
{
    MapProjection_WebMercator = 0,
    MapProjection_Globe = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapStyle
{
    MapStyle_None = 0,
    MapStyle_Road = 1,
    MapStyle_Aerial = 2,
    MapStyle_AerialWithRoads = 3,
    MapStyle_Terrain = 4,
    MapStyle_Aerial3D = 5,
    MapStyle_Aerial3DWithRoads = 6,
    MapStyle_Custom = 7,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapTileAnimationState
{
    MapTileAnimationState_Stopped = 0,
    MapTileAnimationState_Paused = 1,
    MapTileAnimationState_Playing = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapTileLayer
{
    MapTileLayer_LabelOverlay = 0,
    MapTileLayer_RoadOverlay = 1,
    MapTileLayer_AreaOverlay = 2,
    MapTileLayer_BackgroundOverlay = 3,
    MapTileLayer_BackgroundReplacement = 4,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapVisibleRegionKind
{
    MapVisibleRegionKind_Near = 0,
    MapVisibleRegionKind_Full = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapWatermarkMode
{
    MapWatermarkMode_Automatic = 0,
    MapWatermarkMode_On = 1,
};
struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapZoomLevelRange
{
    DOUBLE Min;
    DOUBLE Max;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSource[] = L"Windows.UI.Xaml.Controls.Maps.ICustomMapTileDataSource";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_BitmapRequested )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CCustomMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileBitmapRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BitmapRequested )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSource * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSourceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_BitmapRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_BitmapRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSourceFactory[] = L"Windows.UI.Xaml.Controls.Maps.ICustomMapTileDataSourceFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSourceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSourceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSourceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSourceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSourceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSourceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSourceFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSourceFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSourceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CICustomMapTileDataSourceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource[] = L"Windows.UI.Xaml.Controls.Maps.IHttpMapTileDataSource";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UriFormatString )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UriFormatString )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AdditionalRequestHeaders )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowCaching )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowCaching )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource * This,
                  boolean value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UriRequested )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CHttpMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UriRequested )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UriFormatString(This,value) )
    ( (This)->lpVtbl->put_UriFormatString(This,value) )
    ( (This)->lpVtbl->get_AdditionalRequestHeaders(This,value) )
    ( (This)->lpVtbl->get_AllowCaching(This,value) )
    ( (This)->lpVtbl->put_AllowCaching(This,value) )
    ( (This)->lpVtbl->add_UriRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_UriRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSourceFactory[] = L"Windows.UI.Xaml.Controls.Maps.IHttpMapTileDataSourceFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithUriFormatString )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceFactory * This,
                  __RPC__in HSTRING uriFormatString,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
    ( (This)->lpVtbl->CreateInstanceWithUriFormatString(This,uriFormatString,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIHttpMapTileDataSourceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource[] = L"Windows.UI.Xaml.Controls.Maps.ILocalMapTileDataSource";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UriFormatString )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UriFormatString )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSource * This,
                  __RPC__in HSTRING value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UriRequested )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CLocalMapTileDataSource_Windows__CUI__CXaml__CControls__CMaps__CMapTileUriRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UriRequested )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSource * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UriFormatString(This,value) )
    ( (This)->lpVtbl->put_UriFormatString(This,value) )
    ( (This)->lpVtbl->add_UriRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_UriRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSourceFactory[] = L"Windows.UI.Xaml.Controls.Maps.ILocalMapTileDataSourceFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSource * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithUriFormatString )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceFactory * This,
                  __RPC__in HSTRING uriFormatString,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
    ( (This)->lpVtbl->CreateInstanceWithUriFormatString(This,uriFormatString,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CILocalMapTileDataSourceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapActualCameraChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Camera )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Camera(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs2[] = L"Windows.UI.Xaml.Controls.Maps.IMapActualCameraChangedEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChangeReason )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapCameraChangeReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChangeReason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapActualCameraChangingEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Camera )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Camera(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs2[] = L"Windows.UI.Xaml.Controls.Maps.IMapActualCameraChangingEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChangeReason )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapCameraChangeReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChangeReason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapActualCameraChangingEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapBillboard[] = L"Windows.UI.Xaml.Controls.Maps.IMapBillboard";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NormalizedAnchorPoint )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NormalizedAnchorPoint )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Image )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Image )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CollisionBehaviorDesired )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapElementCollisionBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CollisionBehaviorDesired )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapElementCollisionBehavior value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReferenceCamera )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->put_Location(This,value) )
    ( (This)->lpVtbl->get_NormalizedAnchorPoint(This,value) )
    ( (This)->lpVtbl->put_NormalizedAnchorPoint(This,value) )
    ( (This)->lpVtbl->get_Image(This,value) )
    ( (This)->lpVtbl->put_Image(This,value) )
    ( (This)->lpVtbl->get_CollisionBehaviorDesired(This,value) )
    ( (This)->lpVtbl->put_CollisionBehaviorDesired(This,value) )
    ( (This)->lpVtbl->get_ReferenceCamera(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapBillboardFactory[] = L"Windows.UI.Xaml.Controls.Maps.IMapBillboardFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceFromCamera )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * camera,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboard * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceFromCamera(This,camera,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapBillboardStatics[] = L"Windows.UI.Xaml.Controls.Maps.IMapBillboardStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocationProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NormalizedAnchorPointProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CollisionBehaviorDesiredProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocationProperty(This,value) )
    ( (This)->lpVtbl->get_NormalizedAnchorPointProperty(This,value) )
    ( (This)->lpVtbl->get_CollisionBehaviorDesiredProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapBillboardStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapCamera[] = L"Windows.UI.Xaml.Controls.Maps.IMapCamera";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Heading )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Heading )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pitch )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Pitch )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Roll )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Roll )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FieldOfView )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FieldOfView )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->put_Location(This,value) )
    ( (This)->lpVtbl->get_Heading(This,value) )
    ( (This)->lpVtbl->put_Heading(This,value) )
    ( (This)->lpVtbl->get_Pitch(This,value) )
    ( (This)->lpVtbl->put_Pitch(This,value) )
    ( (This)->lpVtbl->get_Roll(This,value) )
    ( (This)->lpVtbl->put_Roll(This,value) )
    ( (This)->lpVtbl->get_FieldOfView(This,value) )
    ( (This)->lpVtbl->put_FieldOfView(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapCameraFactory[] = L"Windows.UI.Xaml.Controls.Maps.IMapCameraFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithLocation )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * location,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithLocationAndHeading )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * location,
                  DOUBLE headingInDegrees,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithLocationHeadingAndPitch )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * location,
                  DOUBLE headingInDegrees,
                  DOUBLE pitchInDegrees,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithLocationHeadingPitchRollAndFieldOfView )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * location,
                  DOUBLE headingInDegrees,
                  DOUBLE pitchInDegrees,
                  DOUBLE rollInDegrees,
                  DOUBLE fieldOfViewInDegrees,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceWithLocation(This,location,value) )
    ( (This)->lpVtbl->CreateInstanceWithLocationAndHeading(This,location,headingInDegrees,value) )
    ( (This)->lpVtbl->CreateInstanceWithLocationHeadingAndPitch(This,location,headingInDegrees,pitchInDegrees,value) )
    ( (This)->lpVtbl->CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(This,location,headingInDegrees,pitchInDegrees,rollInDegrees,fieldOfViewInDegrees,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCameraFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapContextRequestedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapContextRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapContextRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapContextRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapContextRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapContextRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapContextRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapContextRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapContextRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapContextRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapContextRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MapElements )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapContextRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapContextRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapContextRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapContextRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->get_MapElements(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapContextRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControl[] = L"Windows.UI.Xaml.Controls.Maps.IMapControl";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Center )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Center )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Children )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColorScheme )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapColorScheme * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ColorScheme )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapColorScheme value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredPitch )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredPitch )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Heading )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Heading )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LandmarksVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LandmarksVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LoadingStatus )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapLoadingStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MapServiceToken )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MapServiceToken )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxZoomLevel )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinZoomLevel )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PedestrianFeaturesVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PedestrianFeaturesVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pitch )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Style )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapStyle * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Style )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapStyle value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrafficFlowVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TrafficFlowVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransformOrigin )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransformOrigin )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WatermarkMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapWatermarkMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WatermarkMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapWatermarkMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZoomLevel )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ZoomLevel )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MapElements )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Routes )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapRouteView * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TileSources )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapTileSource * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CenterChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CenterChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_HeadingChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_HeadingChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LoadingStatusChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LoadingStatusChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MapDoubleTapped )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapInputEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MapDoubleTapped )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MapHolding )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapInputEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MapHolding )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MapTapped )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapInputEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MapTapped )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PitchChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PitchChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TransformOriginChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TransformOriginChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ZoomLevelChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ZoomLevelChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *FindMapElementsAtOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __x_ABI_CWindows_CFoundation_CPoint offset,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetLocationFromOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __x_ABI_CWindows_CFoundation_CPoint offset,
                   __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * location
        );
    HRESULT ( STDMETHODCALLTYPE *GetOffsetFromLocation )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * location,
                   __RPC__out __x_ABI_CWindows_CFoundation_CPoint * offset
        );
    HRESULT ( STDMETHODCALLTYPE *IsLocationInView )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * location,
                   __RPC__out boolean * isInView
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetViewBoundsAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * bounds,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CXaml__CThickness * margin,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapAnimationKind animation,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TrySetViewWithCenterAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * center,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TrySetViewWithCenterAndZoomAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * center,
                  __RPC__in_opt __FIReference_1_double * zoomLevel,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TrySetViewWithCenterZoomHeadingAndPitchAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * center,
                  __RPC__in_opt __FIReference_1_double * zoomLevel,
                  __RPC__in_opt __FIReference_1_double * heading,
                  __RPC__in_opt __FIReference_1_double * desiredPitch,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TrySetViewWithCenterZoomHeadingPitchAndAnimationAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * center,
                  __RPC__in_opt __FIReference_1_double * zoomLevel,
                  __RPC__in_opt __FIReference_1_double * heading,
                  __RPC__in_opt __FIReference_1_double * desiredPitch,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapAnimationKind animation,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Center(This,value) )
    ( (This)->lpVtbl->put_Center(This,value) )
    ( (This)->lpVtbl->get_Children(This,value) )
    ( (This)->lpVtbl->get_ColorScheme(This,value) )
    ( (This)->lpVtbl->put_ColorScheme(This,value) )
    ( (This)->lpVtbl->get_DesiredPitch(This,value) )
    ( (This)->lpVtbl->put_DesiredPitch(This,value) )
    ( (This)->lpVtbl->get_Heading(This,value) )
    ( (This)->lpVtbl->put_Heading(This,value) )
    ( (This)->lpVtbl->get_LandmarksVisible(This,value) )
    ( (This)->lpVtbl->put_LandmarksVisible(This,value) )
    ( (This)->lpVtbl->get_LoadingStatus(This,value) )
    ( (This)->lpVtbl->get_MapServiceToken(This,value) )
    ( (This)->lpVtbl->put_MapServiceToken(This,value) )
    ( (This)->lpVtbl->get_MaxZoomLevel(This,value) )
    ( (This)->lpVtbl->get_MinZoomLevel(This,value) )
    ( (This)->lpVtbl->get_PedestrianFeaturesVisible(This,value) )
    ( (This)->lpVtbl->put_PedestrianFeaturesVisible(This,value) )
    ( (This)->lpVtbl->get_Pitch(This,value) )
    ( (This)->lpVtbl->get_Style(This,value) )
    ( (This)->lpVtbl->put_Style(This,value) )
    ( (This)->lpVtbl->get_TrafficFlowVisible(This,value) )
    ( (This)->lpVtbl->put_TrafficFlowVisible(This,value) )
    ( (This)->lpVtbl->get_TransformOrigin(This,value) )
    ( (This)->lpVtbl->put_TransformOrigin(This,value) )
    ( (This)->lpVtbl->get_WatermarkMode(This,value) )
    ( (This)->lpVtbl->put_WatermarkMode(This,value) )
    ( (This)->lpVtbl->get_ZoomLevel(This,value) )
    ( (This)->lpVtbl->put_ZoomLevel(This,value) )
    ( (This)->lpVtbl->get_MapElements(This,value) )
    ( (This)->lpVtbl->get_Routes(This,value) )
    ( (This)->lpVtbl->get_TileSources(This,value) )
    ( (This)->lpVtbl->add_CenterChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_CenterChanged(This,token) )
    ( (This)->lpVtbl->add_HeadingChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_HeadingChanged(This,token) )
    ( (This)->lpVtbl->add_LoadingStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_LoadingStatusChanged(This,token) )
    ( (This)->lpVtbl->add_MapDoubleTapped(This,handler,token) )
    ( (This)->lpVtbl->remove_MapDoubleTapped(This,token) )
    ( (This)->lpVtbl->add_MapHolding(This,handler,token) )
    ( (This)->lpVtbl->remove_MapHolding(This,token) )
    ( (This)->lpVtbl->add_MapTapped(This,handler,token) )
    ( (This)->lpVtbl->remove_MapTapped(This,token) )
    ( (This)->lpVtbl->add_PitchChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_PitchChanged(This,token) )
    ( (This)->lpVtbl->add_TransformOriginChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_TransformOriginChanged(This,token) )
    ( (This)->lpVtbl->add_ZoomLevelChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ZoomLevelChanged(This,token) )
    ( (This)->lpVtbl->FindMapElementsAtOffset(This,offset,result) )
    ( (This)->lpVtbl->GetLocationFromOffset(This,offset,location) )
    ( (This)->lpVtbl->GetOffsetFromLocation(This,location,offset) )
    ( (This)->lpVtbl->IsLocationInView(This,location,isInView) )
    ( (This)->lpVtbl->TrySetViewBoundsAsync(This,bounds,margin,animation,operation) )
    ( (This)->lpVtbl->TrySetViewWithCenterAsync(This,center,operation) )
    ( (This)->lpVtbl->TrySetViewWithCenterAndZoomAsync(This,center,zoomLevel,operation) )
    ( (This)->lpVtbl->TrySetViewWithCenterZoomHeadingAndPitchAsync(This,center,zoomLevel,heading,desiredPitch,operation) )
    ( (This)->lpVtbl->TrySetViewWithCenterZoomHeadingPitchAndAnimationAsync(This,center,zoomLevel,heading,desiredPitch,animation,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControl2[] = L"Windows.UI.Xaml.Controls.Maps.IMapControl2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BusinessLandmarksVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BusinessLandmarksVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransitFeaturesVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransitFeaturesVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PanInteractionMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapPanInteractionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PanInteractionMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapPanInteractionMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotateInteractionMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapInteractionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotateInteractionMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapInteractionMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TiltInteractionMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapInteractionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TiltInteractionMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapInteractionMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZoomInteractionMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapInteractionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ZoomInteractionMode )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapInteractionMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Is3DSupported )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStreetsideSupported )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scene )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Scene )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActualCamera )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TargetCamera )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomExperience )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperience * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CustomExperience )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperience * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MapElementClick )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementClickEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MapElementClick )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MapElementPointerEntered )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerEnteredEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MapElementPointerEntered )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MapElementPointerExited )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapElementPointerExitedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MapElementPointerExited )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ActualCameraChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ActualCameraChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ActualCameraChanging )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapActualCameraChangingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ActualCameraChanging )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TargetCameraChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TargetCameraChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CustomExperienceChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapCustomExperienceChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CustomExperienceChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *StartContinuousRotate )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  DOUBLE rateInDegreesPerSecond
        );
    HRESULT ( STDMETHODCALLTYPE *StopContinuousRotate )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *StartContinuousTilt )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  DOUBLE rateInDegreesPerSecond
        );
    HRESULT ( STDMETHODCALLTYPE *StopContinuousTilt )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *StartContinuousZoom )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  DOUBLE rateOfChangePerSecond
        );
    HRESULT ( STDMETHODCALLTYPE *StopContinuousZoom )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *TryRotateAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  DOUBLE degrees,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryRotateToAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  DOUBLE angleInDegrees,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryTiltAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  DOUBLE degrees,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryTiltToAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  DOUBLE angleInDegrees,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryZoomInAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryZoomOutAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryZoomToAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  DOUBLE zoomLevel,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TrySetSceneAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * scene,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TrySetSceneWithAnimationAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * scene,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapAnimationKind animationKind,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BusinessLandmarksVisible(This,value) )
    ( (This)->lpVtbl->put_BusinessLandmarksVisible(This,value) )
    ( (This)->lpVtbl->get_TransitFeaturesVisible(This,value) )
    ( (This)->lpVtbl->put_TransitFeaturesVisible(This,value) )
    ( (This)->lpVtbl->get_PanInteractionMode(This,value) )
    ( (This)->lpVtbl->put_PanInteractionMode(This,value) )
    ( (This)->lpVtbl->get_RotateInteractionMode(This,value) )
    ( (This)->lpVtbl->put_RotateInteractionMode(This,value) )
    ( (This)->lpVtbl->get_TiltInteractionMode(This,value) )
    ( (This)->lpVtbl->put_TiltInteractionMode(This,value) )
    ( (This)->lpVtbl->get_ZoomInteractionMode(This,value) )
    ( (This)->lpVtbl->put_ZoomInteractionMode(This,value) )
    ( (This)->lpVtbl->get_Is3DSupported(This,value) )
    ( (This)->lpVtbl->get_IsStreetsideSupported(This,value) )
    ( (This)->lpVtbl->get_Scene(This,value) )
    ( (This)->lpVtbl->put_Scene(This,value) )
    ( (This)->lpVtbl->get_ActualCamera(This,value) )
    ( (This)->lpVtbl->get_TargetCamera(This,value) )
    ( (This)->lpVtbl->get_CustomExperience(This,value) )
    ( (This)->lpVtbl->put_CustomExperience(This,value) )
    ( (This)->lpVtbl->add_MapElementClick(This,handler,token) )
    ( (This)->lpVtbl->remove_MapElementClick(This,token) )
    ( (This)->lpVtbl->add_MapElementPointerEntered(This,handler,token) )
    ( (This)->lpVtbl->remove_MapElementPointerEntered(This,token) )
    ( (This)->lpVtbl->add_MapElementPointerExited(This,handler,token) )
    ( (This)->lpVtbl->remove_MapElementPointerExited(This,token) )
    ( (This)->lpVtbl->add_ActualCameraChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ActualCameraChanged(This,token) )
    ( (This)->lpVtbl->add_ActualCameraChanging(This,handler,token) )
    ( (This)->lpVtbl->remove_ActualCameraChanging(This,token) )
    ( (This)->lpVtbl->add_TargetCameraChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_TargetCameraChanged(This,token) )
    ( (This)->lpVtbl->add_CustomExperienceChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_CustomExperienceChanged(This,token) )
    ( (This)->lpVtbl->StartContinuousRotate(This,rateInDegreesPerSecond) )
    ( (This)->lpVtbl->StopContinuousRotate(This) )
    ( (This)->lpVtbl->StartContinuousTilt(This,rateInDegreesPerSecond) )
    ( (This)->lpVtbl->StopContinuousTilt(This) )
    ( (This)->lpVtbl->StartContinuousZoom(This,rateOfChangePerSecond) )
    ( (This)->lpVtbl->StopContinuousZoom(This) )
    ( (This)->lpVtbl->TryRotateAsync(This,degrees,operation) )
    ( (This)->lpVtbl->TryRotateToAsync(This,angleInDegrees,operation) )
    ( (This)->lpVtbl->TryTiltAsync(This,degrees,operation) )
    ( (This)->lpVtbl->TryTiltToAsync(This,angleInDegrees,operation) )
    ( (This)->lpVtbl->TryZoomInAsync(This,operation) )
    ( (This)->lpVtbl->TryZoomOutAsync(This,operation) )
    ( (This)->lpVtbl->TryZoomToAsync(This,zoomLevel,operation) )
    ( (This)->lpVtbl->TrySetSceneAsync(This,scene,operation) )
    ( (This)->lpVtbl->TrySetSceneWithAnimationAsync(This,scene,animationKind,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControl3[] = L"Windows.UI.Xaml.Controls.Maps.IMapControl3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_MapRightTapped )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl3 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapRightTappedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MapRightTapped )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl3 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_MapRightTapped(This,handler,token) )
    ( (This)->lpVtbl->remove_MapRightTapped(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControl4[] = L"Windows.UI.Xaml.Controls.Maps.IMapControl4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BusinessLandmarksEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BusinessLandmarksEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransitFeaturesEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransitFeaturesEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4 * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetVisibleRegion )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4 * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapVisibleRegionKind region,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BusinessLandmarksEnabled(This,value) )
    ( (This)->lpVtbl->put_BusinessLandmarksEnabled(This,value) )
    ( (This)->lpVtbl->get_TransitFeaturesEnabled(This,value) )
    ( (This)->lpVtbl->put_TransitFeaturesEnabled(This,value) )
    ( (This)->lpVtbl->GetVisibleRegion(This,region,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControl5[] = L"Windows.UI.Xaml.Controls.Maps.IMapControl5";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MapProjection )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapProjection * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MapProjection )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapProjection value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StyleSheet )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StyleSheet )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewPadding )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ViewPadding )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This,
                  __x_ABI_CWindows_CUI_CXaml_CThickness value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MapContextRequested )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapContextRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MapContextRequested )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *FindMapElementsAtOffsetWithRadius )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This,
                  __x_ABI_CWindows_CFoundation_CPoint offset,
                  DOUBLE radius,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetLocationFromOffsetWithReferenceSystem )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This,
                  __x_ABI_CWindows_CFoundation_CPoint offset,
                  __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem desiredReferenceSystem,
                   __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * location
        );
    HRESULT ( STDMETHODCALLTYPE *StartContinuousPan )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This,
                  DOUBLE horizontalPixelsPerSecond,
                  DOUBLE verticalPixelsPerSecond
        );
    HRESULT ( STDMETHODCALLTYPE *StopContinuousPan )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This
        );
    HRESULT ( STDMETHODCALLTYPE *TryPanAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This,
                  DOUBLE horizontalPixels,
                  DOUBLE verticalPixels,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryPanToAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * location,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MapProjection(This,value) )
    ( (This)->lpVtbl->put_MapProjection(This,value) )
    ( (This)->lpVtbl->get_StyleSheet(This,value) )
    ( (This)->lpVtbl->put_StyleSheet(This,value) )
    ( (This)->lpVtbl->get_ViewPadding(This,value) )
    ( (This)->lpVtbl->put_ViewPadding(This,value) )
    ( (This)->lpVtbl->add_MapContextRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_MapContextRequested(This,token) )
    ( (This)->lpVtbl->FindMapElementsAtOffsetWithRadius(This,offset,radius,result) )
    ( (This)->lpVtbl->GetLocationFromOffsetWithReferenceSystem(This,offset,desiredReferenceSystem,location) )
    ( (This)->lpVtbl->StartContinuousPan(This,horizontalPixelsPerSecond,verticalPixelsPerSecond) )
    ( (This)->lpVtbl->StopContinuousPan(This) )
    ( (This)->lpVtbl->TryPanAsync(This,horizontalPixels,verticalPixels,operation) )
    ( (This)->lpVtbl->TryPanToAsync(This,location,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControl6[] = L"Windows.UI.Xaml.Controls.Maps.IMapControl6";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Layers )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl6 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Layers )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl6 * This,
                  __RPC__in_opt __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapLayer * value
        );
                    HRESULT ( STDMETHODCALLTYPE *TryGetLocationFromOffset )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl6 * This,
                  __x_ABI_CWindows_CFoundation_CPoint offset,
                   __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * location,
                           __RPC__out boolean * returnValue
        );
                    HRESULT ( STDMETHODCALLTYPE *TryGetLocationFromOffsetWithReferenceSystem )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl6 * This,
                  __x_ABI_CWindows_CFoundation_CPoint offset,
                  __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem desiredReferenceSystem,
                   __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * location,
                           __RPC__out boolean * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl6Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl6
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Layers(This,value) )
    ( (This)->lpVtbl->put_Layers(This,value) )
    ( (This)->lpVtbl->TryGetLocationFromOffset(This,offset,location,returnValue) )
    ( (This)->lpVtbl->TryGetLocationFromOffsetWithReferenceSystem(This,offset,desiredReferenceSystem,location,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControl7[] = L"Windows.UI.Xaml.Controls.Maps.IMapControl7";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl7Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl7 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl7 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl7 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl7 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl7 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl7 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Region )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl7 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Region )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl7 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl7Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl7
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl7Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Region(This,value) )
    ( (This)->lpVtbl->put_Region(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl7;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControl8[] = L"Windows.UI.Xaml.Controls.Maps.IMapControl8";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl8Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl8 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl8 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl8 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl8 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl8 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl8 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanTiltDown )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl8 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanTiltUp )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl8 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanZoomIn )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl8 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanZoomOut )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl8 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl8Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl8
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl8Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanTiltDown(This,value) )
    ( (This)->lpVtbl->get_CanTiltUp(This,value) )
    ( (This)->lpVtbl->get_CanZoomIn(This,value) )
    ( (This)->lpVtbl->get_CanZoomOut(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl8;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkClickEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlBusinessLandmarkClickEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkClickEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkClickEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkClickEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkClickEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkClickEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkClickEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkClickEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocalLocations )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkClickEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkClickEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkClickEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkClickEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocalLocations(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkClickEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkPointerEnteredEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlBusinessLandmarkPointerEnteredEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerEnteredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerEnteredEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerEnteredEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerEnteredEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerEnteredEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerEnteredEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerEnteredEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocalLocations )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerEnteredEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerEnteredEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerEnteredEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerEnteredEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocalLocations(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerEnteredEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkPointerExitedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlBusinessLandmarkPointerExitedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerExitedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerExitedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerExitedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerExitedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerExitedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerExitedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerExitedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocalLocations )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerExitedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerExitedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerExitedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerExitedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocalLocations(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkPointerExitedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkRightTappedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlBusinessLandmarkRightTappedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkRightTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkRightTappedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkRightTappedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkRightTappedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkRightTappedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkRightTappedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkRightTappedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocalLocations )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkRightTappedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkRightTappedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkRightTappedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkRightTappedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocalLocations(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlBusinessLandmarkRightTappedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlDataHelper";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_BusinessLandmarkClick )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkClickEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BusinessLandmarkClick )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TransitFeatureClick )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureClickEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TransitFeatureClick )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BusinessLandmarkRightTapped )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkRightTappedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BusinessLandmarkRightTapped )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TransitFeatureRightTapped )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeatureRightTappedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TransitFeatureRightTapped )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_BusinessLandmarkClick(This,value,token) )
    ( (This)->lpVtbl->remove_BusinessLandmarkClick(This,token) )
    ( (This)->lpVtbl->add_TransitFeatureClick(This,value,token) )
    ( (This)->lpVtbl->remove_TransitFeatureClick(This,token) )
    ( (This)->lpVtbl->add_BusinessLandmarkRightTapped(This,value,token) )
    ( (This)->lpVtbl->remove_BusinessLandmarkRightTapped(This,token) )
    ( (This)->lpVtbl->add_TransitFeatureRightTapped(This,value,token) )
    ( (This)->lpVtbl->remove_TransitFeatureRightTapped(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlDataHelper2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_BusinessLandmarkPointerEntered )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerEnteredEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BusinessLandmarkPointerEntered )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TransitFeaturePointerEntered )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerEnteredEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TransitFeaturePointerEntered )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BusinessLandmarkPointerExited )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlBusinessLandmarkPointerExitedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BusinessLandmarkPointerExited )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TransitFeaturePointerExited )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapControl_Windows__CUI__CXaml__CControls__CMaps__CMapControlTransitFeaturePointerExitedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TransitFeaturePointerExited )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_BusinessLandmarkPointerEntered(This,value,token) )
    ( (This)->lpVtbl->remove_BusinessLandmarkPointerEntered(This,token) )
    ( (This)->lpVtbl->add_TransitFeaturePointerEntered(This,value,token) )
    ( (This)->lpVtbl->remove_TransitFeaturePointerEntered(This,token) )
    ( (This)->lpVtbl->add_BusinessLandmarkPointerExited(This,value,token) )
    ( (This)->lpVtbl->remove_BusinessLandmarkPointerExited(This,token) )
    ( (This)->lpVtbl->add_TransitFeaturePointerExited(This,value,token) )
    ( (This)->lpVtbl->remove_TransitFeaturePointerExited(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelperFactory[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlDataHelperFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * map,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelper * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,map,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelperStatics[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlDataHelperStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMapControl )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperStatics * This,
                  boolean rasterRenderMode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControl * * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMapControl(This,rasterRenderMode,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlDataHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlStatics[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CenterProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChildrenProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColorSchemeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredPitchProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeadingProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LandmarksVisibleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LoadingStatusProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MapServiceTokenProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PedestrianFeaturesVisibleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PitchProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StyleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrafficFlowVisibleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransformOriginProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WatermarkModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZoomLevelProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MapElementsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoutesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TileSourcesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocationProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLocation )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetLocation )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NormalizedAnchorPointProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNormalizedAnchorPoint )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetNormalizedAnchorPoint )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CenterProperty(This,value) )
    ( (This)->lpVtbl->get_ChildrenProperty(This,value) )
    ( (This)->lpVtbl->get_ColorSchemeProperty(This,value) )
    ( (This)->lpVtbl->get_DesiredPitchProperty(This,value) )
    ( (This)->lpVtbl->get_HeadingProperty(This,value) )
    ( (This)->lpVtbl->get_LandmarksVisibleProperty(This,value) )
    ( (This)->lpVtbl->get_LoadingStatusProperty(This,value) )
    ( (This)->lpVtbl->get_MapServiceTokenProperty(This,value) )
    ( (This)->lpVtbl->get_PedestrianFeaturesVisibleProperty(This,value) )
    ( (This)->lpVtbl->get_PitchProperty(This,value) )
    ( (This)->lpVtbl->get_StyleProperty(This,value) )
    ( (This)->lpVtbl->get_TrafficFlowVisibleProperty(This,value) )
    ( (This)->lpVtbl->get_TransformOriginProperty(This,value) )
    ( (This)->lpVtbl->get_WatermarkModeProperty(This,value) )
    ( (This)->lpVtbl->get_ZoomLevelProperty(This,value) )
    ( (This)->lpVtbl->get_MapElementsProperty(This,value) )
    ( (This)->lpVtbl->get_RoutesProperty(This,value) )
    ( (This)->lpVtbl->get_TileSourcesProperty(This,value) )
    ( (This)->lpVtbl->get_LocationProperty(This,value) )
    ( (This)->lpVtbl->GetLocation(This,element,result) )
    ( (This)->lpVtbl->SetLocation(This,element,value) )
    ( (This)->lpVtbl->get_NormalizedAnchorPointProperty(This,value) )
    ( (This)->lpVtbl->GetNormalizedAnchorPoint(This,element,result) )
    ( (This)->lpVtbl->SetNormalizedAnchorPoint(This,element,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BusinessLandmarksVisibleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransitFeaturesVisibleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PanInteractionModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotateInteractionModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TiltInteractionModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZoomInteractionModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Is3DSupportedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStreetsideSupportedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SceneProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BusinessLandmarksVisibleProperty(This,value) )
    ( (This)->lpVtbl->get_TransitFeaturesVisibleProperty(This,value) )
    ( (This)->lpVtbl->get_PanInteractionModeProperty(This,value) )
    ( (This)->lpVtbl->get_RotateInteractionModeProperty(This,value) )
    ( (This)->lpVtbl->get_TiltInteractionModeProperty(This,value) )
    ( (This)->lpVtbl->get_ZoomInteractionModeProperty(This,value) )
    ( (This)->lpVtbl->get_Is3DSupportedProperty(This,value) )
    ( (This)->lpVtbl->get_IsStreetsideSupportedProperty(This,value) )
    ( (This)->lpVtbl->get_SceneProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlStatics4[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BusinessLandmarksEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransitFeaturesEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BusinessLandmarksEnabledProperty(This,value) )
    ( (This)->lpVtbl->get_TransitFeaturesEnabledProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlStatics5[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics5";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MapProjectionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StyleSheetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewPaddingProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics5Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MapProjectionProperty(This,value) )
    ( (This)->lpVtbl->get_StyleSheetProperty(This,value) )
    ( (This)->lpVtbl->get_ViewPaddingProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlStatics6[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics6";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LayersProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics6 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics6Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics6
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LayersProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlStatics7[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics7";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics7Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics7 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics7 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics7 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics7 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics7 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics7 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RegionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics7 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics7Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics7
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics7Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RegionProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics7;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlStatics8[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics8";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics8Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics8 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics8 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics8 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics8 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics8 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics8 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanTiltDownProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics8 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanTiltUpProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics8 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanZoomInProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics8 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanZoomOutProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics8 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics8Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics8
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics8Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanTiltDownProperty(This,value) )
    ( (This)->lpVtbl->get_CanTiltUpProperty(This,value) )
    ( (This)->lpVtbl->get_CanZoomInProperty(This,value) )
    ( (This)->lpVtbl->get_CanZoomOutProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlStatics8;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureClickEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlTransitFeatureClickEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureClickEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureClickEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureClickEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureClickEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureClickEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureClickEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureClickEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureClickEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureClickEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransitProperties )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureClickEventArgs * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureClickEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureClickEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureClickEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->get_TransitProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureClickEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerEnteredEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlTransitFeaturePointerEnteredEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerEnteredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerEnteredEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerEnteredEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerEnteredEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerEnteredEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerEnteredEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerEnteredEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerEnteredEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerEnteredEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransitProperties )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerEnteredEventArgs * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerEnteredEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerEnteredEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerEnteredEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->get_TransitProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerEnteredEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerExitedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlTransitFeaturePointerExitedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerExitedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerExitedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerExitedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerExitedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerExitedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerExitedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerExitedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerExitedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerExitedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransitProperties )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerExitedEventArgs * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerExitedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerExitedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerExitedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->get_TransitProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeaturePointerExitedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureRightTappedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapControlTransitFeatureRightTappedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureRightTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureRightTappedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureRightTappedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureRightTappedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureRightTappedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureRightTappedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureRightTappedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureRightTappedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureRightTappedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransitProperties )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureRightTappedEventArgs * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureRightTappedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureRightTappedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureRightTappedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->get_TransitProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapControlTransitFeatureRightTappedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapCustomExperience[] = L"Windows.UI.Xaml.Controls.Maps.IMapCustomExperience";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperience * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperience * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperience * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperience * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperience * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperience * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperience
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperience;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapCustomExperienceChangedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapCustomExperienceChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapCustomExperienceFactory[] = L"Windows.UI.Xaml.Controls.Maps.IMapCustomExperienceFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperience * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCustomExperienceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElement[] = L"Windows.UI.Xaml.Controls.Maps.IMapElement";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ZIndex )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ZIndex )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Visible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Visible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ZIndex(This,value) )
    ( (This)->lpVtbl->put_ZIndex(This,value) )
    ( (This)->lpVtbl->get_Visible(This,value) )
    ( (This)->lpVtbl->put_Visible(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElement2[] = L"Windows.UI.Xaml.Controls.Maps.IMapElement2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MapTabIndex )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement2 * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MapTabIndex )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement2 * This,
                  INT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MapTabIndex(This,value) )
    ( (This)->lpVtbl->put_MapTabIndex(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElement3[] = L"Windows.UI.Xaml.Controls.Maps.IMapElement3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MapStyleSheetEntry )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MapStyleSheetEntry )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MapStyleSheetEntryState )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MapStyleSheetEntryState )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tag )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3 * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Tag )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3 * This,
                  __RPC__in_opt IInspectable * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MapStyleSheetEntry(This,value) )
    ( (This)->lpVtbl->put_MapStyleSheetEntry(This,value) )
    ( (This)->lpVtbl->get_MapStyleSheetEntryState(This,value) )
    ( (This)->lpVtbl->put_MapStyleSheetEntryState(This,value) )
    ( (This)->lpVtbl->get_Tag(This,value) )
    ( (This)->lpVtbl->put_Tag(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElement3D[] = L"Windows.UI.Xaml.Controls.Maps.IMapElement3D";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Model )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3D * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Model )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3D * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Heading )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Heading )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pitch )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Pitch )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Roll )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Roll )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scale )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Scale )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->put_Location(This,value) )
    ( (This)->lpVtbl->get_Model(This,value) )
    ( (This)->lpVtbl->put_Model(This,value) )
    ( (This)->lpVtbl->get_Heading(This,value) )
    ( (This)->lpVtbl->put_Heading(This,value) )
    ( (This)->lpVtbl->get_Pitch(This,value) )
    ( (This)->lpVtbl->put_Pitch(This,value) )
    ( (This)->lpVtbl->get_Roll(This,value) )
    ( (This)->lpVtbl->put_Roll(This,value) )
    ( (This)->lpVtbl->get_Scale(This,value) )
    ( (This)->lpVtbl->put_Scale(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3D;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElement3DStatics[] = L"Windows.UI.Xaml.Controls.Maps.IMapElement3DStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocationProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeadingProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PitchProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RollProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocationProperty(This,value) )
    ( (This)->lpVtbl->get_HeadingProperty(This,value) )
    ( (This)->lpVtbl->get_PitchProperty(This,value) )
    ( (This)->lpVtbl->get_RollProperty(This,value) )
    ( (This)->lpVtbl->get_ScaleProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement3DStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElement4[] = L"Windows.UI.Xaml.Controls.Maps.IMapElement4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement4 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement4 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElementClickEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapElementClickEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementClickEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementClickEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementClickEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementClickEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementClickEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementClickEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementClickEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementClickEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementClickEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MapElements )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementClickEventArgs * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementClickEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementClickEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementClickEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->get_MapElements(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementClickEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElementFactory[] = L"Windows.UI.Xaml.Controls.Maps.IMapElementFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElementPointerEnteredEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapElementPointerEnteredEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerEnteredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerEnteredEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerEnteredEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerEnteredEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerEnteredEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerEnteredEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerEnteredEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerEnteredEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerEnteredEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MapElement )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerEnteredEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerEnteredEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerEnteredEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerEnteredEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->get_MapElement(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerEnteredEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElementPointerExitedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapElementPointerExitedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerExitedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerExitedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerExitedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerExitedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerExitedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerExitedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerExitedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerExitedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerExitedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MapElement )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerExitedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerExitedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerExitedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerExitedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->get_MapElement(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementPointerExitedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElementStatics[] = L"Windows.UI.Xaml.Controls.Maps.IMapElementStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ZIndexProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VisibleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ZIndexProperty(This,value) )
    ( (This)->lpVtbl->get_VisibleProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElementStatics2[] = L"Windows.UI.Xaml.Controls.Maps.IMapElementStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MapTabIndexProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MapTabIndexProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElementStatics3[] = L"Windows.UI.Xaml.Controls.Maps.IMapElementStatics3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MapStyleSheetEntryProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MapStyleSheetEntryStateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TagProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MapStyleSheetEntryProperty(This,value) )
    ( (This)->lpVtbl->get_MapStyleSheetEntryStateProperty(This,value) )
    ( (This)->lpVtbl->get_TagProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElementStatics4[] = L"Windows.UI.Xaml.Controls.Maps.IMapElementStatics4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEnabledProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer[] = L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayer";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MapElements )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MapElements )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * This,
                  __RPC__in_opt __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MapElementClick )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerClickEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MapElementClick )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MapElementPointerEntered )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerEnteredEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MapElementPointerEntered )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MapElementPointerExited )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerPointerExitedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MapElementPointerExited )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MapContextRequested )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayer_Windows__CUI__CXaml__CControls__CMaps__CMapElementsLayerContextRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MapContextRequested )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MapElements(This,value) )
    ( (This)->lpVtbl->put_MapElements(This,value) )
    ( (This)->lpVtbl->add_MapElementClick(This,handler,token) )
    ( (This)->lpVtbl->remove_MapElementClick(This,token) )
    ( (This)->lpVtbl->add_MapElementPointerEntered(This,handler,token) )
    ( (This)->lpVtbl->remove_MapElementPointerEntered(This,token) )
    ( (This)->lpVtbl->add_MapElementPointerExited(This,handler,token) )
    ( (This)->lpVtbl->remove_MapElementPointerExited(This,token) )
    ( (This)->lpVtbl->add_MapContextRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_MapContextRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerClickEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerClickEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerClickEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerClickEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerClickEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerClickEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerClickEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerClickEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerClickEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerClickEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerClickEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MapElements )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerClickEventArgs * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerClickEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerClickEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerClickEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->get_MapElements(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerClickEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerContextRequestedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerContextRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerContextRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerContextRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerContextRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerContextRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerContextRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerContextRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerContextRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerContextRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerContextRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MapElements )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerContextRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CControls__CMaps__CMapElement * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerContextRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerContextRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerContextRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->get_MapElements(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerContextRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerEnteredEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerPointerEnteredEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerEnteredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerEnteredEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerEnteredEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerEnteredEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerEnteredEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerEnteredEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerEnteredEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerEnteredEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerEnteredEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MapElement )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerEnteredEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerEnteredEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerEnteredEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerEnteredEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->get_MapElement(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerEnteredEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerExitedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerPointerExitedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerExitedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerExitedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerExitedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerExitedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerExitedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerExitedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerExitedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerExitedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerExitedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MapElement )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerExitedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElement * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerExitedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerExitedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerExitedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->get_MapElement(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerPointerExitedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerStatics[] = L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MapElementsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MapElementsProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapElementsLayerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapIcon[] = L"Windows.UI.Xaml.Controls.Maps.IMapIcon";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NormalizedAnchorPoint )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NormalizedAnchorPoint )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Image )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Image )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->put_Location(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_NormalizedAnchorPoint(This,value) )
    ( (This)->lpVtbl->put_NormalizedAnchorPoint(This,value) )
    ( (This)->lpVtbl->get_Image(This,value) )
    ( (This)->lpVtbl->put_Image(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapIcon2[] = L"Windows.UI.Xaml.Controls.Maps.IMapIcon2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CollisionBehaviorDesired )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapElementCollisionBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CollisionBehaviorDesired )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapElementCollisionBehavior value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CollisionBehaviorDesired(This,value) )
    ( (This)->lpVtbl->put_CollisionBehaviorDesired(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIcon2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapIconStatics[] = L"Windows.UI.Xaml.Controls.Maps.IMapIconStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocationProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TitleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NormalizedAnchorPointProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocationProperty(This,value) )
    ( (This)->lpVtbl->get_TitleProperty(This,value) )
    ( (This)->lpVtbl->get_NormalizedAnchorPointProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapIconStatics2[] = L"Windows.UI.Xaml.Controls.Maps.IMapIconStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CollisionBehaviorDesiredProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CollisionBehaviorDesiredProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapIconStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapInputEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapInputEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapInputEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapInputEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapInputEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapInputEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapInputEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapInputEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapInputEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapInputEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapInputEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapInputEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapInputEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapInputEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapInputEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapItemsControl[] = L"Windows.UI.Xaml.Controls.Maps.IMapItemsControl";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ItemsSource )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControl * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ItemsSource )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControl * This,
                  __RPC__in_opt IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Items )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControl * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemTemplate )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControl * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDataTemplate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ItemTemplate )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDataTemplate * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControl
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ItemsSource(This,value) )
    ( (This)->lpVtbl->put_ItemsSource(This,value) )
    ( (This)->lpVtbl->get_Items(This,value) )
    ( (This)->lpVtbl->get_ItemTemplate(This,value) )
    ( (This)->lpVtbl->put_ItemTemplate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapItemsControlStatics[] = L"Windows.UI.Xaml.Controls.Maps.IMapItemsControlStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ItemsSourceProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemTemplateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ItemsSourceProperty(This,value) )
    ( (This)->lpVtbl->get_ItemsProperty(This,value) )
    ( (This)->lpVtbl->get_ItemTemplateProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapItemsControlStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapLayer[] = L"Windows.UI.Xaml.Controls.Maps.IMapLayer";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MapTabIndex )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MapTabIndex )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Visible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Visible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZIndex )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ZIndex )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * This,
                  INT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MapTabIndex(This,value) )
    ( (This)->lpVtbl->put_MapTabIndex(This,value) )
    ( (This)->lpVtbl->get_Visible(This,value) )
    ( (This)->lpVtbl->put_Visible(This,value) )
    ( (This)->lpVtbl->get_ZIndex(This,value) )
    ( (This)->lpVtbl->put_ZIndex(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapLayerFactory[] = L"Windows.UI.Xaml.Controls.Maps.IMapLayerFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapLayerStatics[] = L"Windows.UI.Xaml.Controls.Maps.IMapLayerStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MapTabIndexProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VisibleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZIndexProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MapTabIndexProperty(This,value) )
    ( (This)->lpVtbl->get_VisibleProperty(This,value) )
    ( (This)->lpVtbl->get_ZIndexProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapLayerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapModel3D[] = L"Windows.UI.Xaml.Controls.Maps.IMapModel3D";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3D * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3D * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3D * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3D * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3D * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3D * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3D
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3D;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapModel3DFactory[] = L"Windows.UI.Xaml.Controls.Maps.IMapModel3DFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3D * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapModel3DStatics[] = L"Windows.UI.Xaml.Controls.Maps.IMapModel3DStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateFrom3MFAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * source,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFrom3MFWithShadingOptionAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * source,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapModel3DShadingOption shadingOption,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CMapModel3D * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFrom3MFAsync(This,source,operation) )
    ( (This)->lpVtbl->CreateFrom3MFWithShadingOptionAsync(This,source,shadingOption,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapModel3DStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapPolygon[] = L"Windows.UI.Xaml.Controls.Maps.IMapPolygon";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Path )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeColor )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeColor )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeThickness )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeThickness )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeDashed )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeDashed )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FillColor )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FillColor )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Path(This,value) )
    ( (This)->lpVtbl->put_Path(This,value) )
    ( (This)->lpVtbl->get_StrokeColor(This,value) )
    ( (This)->lpVtbl->put_StrokeColor(This,value) )
    ( (This)->lpVtbl->get_StrokeThickness(This,value) )
    ( (This)->lpVtbl->put_StrokeThickness(This,value) )
    ( (This)->lpVtbl->get_StrokeDashed(This,value) )
    ( (This)->lpVtbl->put_StrokeDashed(This,value) )
    ( (This)->lpVtbl->get_FillColor(This,value) )
    ( (This)->lpVtbl->put_FillColor(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapPolygon2[] = L"Windows.UI.Xaml.Controls.Maps.IMapPolygon2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Paths )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Paths(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygon2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapPolygonStatics[] = L"Windows.UI.Xaml.Controls.Maps.IMapPolygonStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PathProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeThicknessProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeDashedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PathProperty(This,value) )
    ( (This)->lpVtbl->get_StrokeThicknessProperty(This,value) )
    ( (This)->lpVtbl->get_StrokeDashedProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolygonStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapPolyline[] = L"Windows.UI.Xaml.Controls.Maps.IMapPolyline";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Path )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeColor )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeColor )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeThickness )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeThickness )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeDashed )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeDashed )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Path(This,value) )
    ( (This)->lpVtbl->put_Path(This,value) )
    ( (This)->lpVtbl->get_StrokeColor(This,value) )
    ( (This)->lpVtbl->put_StrokeColor(This,value) )
    ( (This)->lpVtbl->get_StrokeThickness(This,value) )
    ( (This)->lpVtbl->put_StrokeThickness(This,value) )
    ( (This)->lpVtbl->get_StrokeDashed(This,value) )
    ( (This)->lpVtbl->put_StrokeDashed(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolyline;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapPolylineStatics[] = L"Windows.UI.Xaml.Controls.Maps.IMapPolylineStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PathProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeDashedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PathProperty(This,value) )
    ( (This)->lpVtbl->get_StrokeDashedProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapPolylineStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapRightTappedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapRightTappedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRightTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRightTappedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRightTappedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRightTappedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRightTappedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRightTappedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRightTappedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRightTappedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRightTappedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRightTappedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRightTappedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRightTappedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRightTappedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapRouteView[] = L"Windows.UI.Xaml.Controls.Maps.IMapRouteView";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RouteColor )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RouteColor )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutlineColor )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutlineColor )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Route )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIMapRoute * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteViewVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteViewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RouteColor(This,value) )
    ( (This)->lpVtbl->put_RouteColor(This,value) )
    ( (This)->lpVtbl->get_OutlineColor(This,value) )
    ( (This)->lpVtbl->put_OutlineColor(This,value) )
    ( (This)->lpVtbl->get_Route(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapRouteViewFactory[] = L"Windows.UI.Xaml.Controls.Maps.IMapRouteViewFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteViewFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteViewFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteViewFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteViewFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteViewFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteViewFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteViewFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithMapRoute )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteViewFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CIMapRoute * route,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteView * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteViewFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteViewFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteViewFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceWithMapRoute(This,route,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapRouteViewFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapScene[] = L"Windows.UI.Xaml.Controls.Maps.IMapScene";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TargetCamera )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TargetCameraChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CMaps__CMapScene_Windows__CUI__CXaml__CControls__CMaps__CMapTargetCameraChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TargetCameraChanged )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TargetCamera(This,value) )
    ( (This)->lpVtbl->add_TargetCameraChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_TargetCameraChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics[] = L"Windows.UI.Xaml.Controls.Maps.IMapSceneStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateFromBoundingBox )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * bounds,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromBoundingBoxWithHeadingAndPitch )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * bounds,
                  DOUBLE headingInDegrees,
                  DOUBLE pitchInDegrees,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromCamera )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * camera,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromLocation )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * location,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromLocationWithHeadingAndPitch )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * location,
                  DOUBLE headingInDegrees,
                  DOUBLE pitchInDegrees,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromLocationAndRadius )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * location,
                  DOUBLE radiusInMeters,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromLocationAndRadiusWithHeadingAndPitch )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * location,
                  DOUBLE radiusInMeters,
                  DOUBLE headingInDegrees,
                  DOUBLE pitchInDegrees,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromLocations )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * locations,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromLocationsWithHeadingAndPitch )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * locations,
                  DOUBLE headingInDegrees,
                  DOUBLE pitchInDegrees,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapScene * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromBoundingBox(This,bounds,result) )
    ( (This)->lpVtbl->CreateFromBoundingBoxWithHeadingAndPitch(This,bounds,headingInDegrees,pitchInDegrees,result) )
    ( (This)->lpVtbl->CreateFromCamera(This,camera,result) )
    ( (This)->lpVtbl->CreateFromLocation(This,location,result) )
    ( (This)->lpVtbl->CreateFromLocationWithHeadingAndPitch(This,location,headingInDegrees,pitchInDegrees,result) )
    ( (This)->lpVtbl->CreateFromLocationAndRadius(This,location,radiusInMeters,result) )
    ( (This)->lpVtbl->CreateFromLocationAndRadiusWithHeadingAndPitch(This,location,radiusInMeters,headingInDegrees,pitchInDegrees,result) )
    ( (This)->lpVtbl->CreateFromLocations(This,locations,result) )
    ( (This)->lpVtbl->CreateFromLocationsWithHeadingAndPitch(This,locations,headingInDegrees,pitchInDegrees,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapSceneStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapStyleSheet[] = L"Windows.UI.Xaml.Controls.Maps.IMapStyleSheet";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics[] = L"Windows.UI.Xaml.Controls.Maps.IMapStyleSheetEntriesStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Area )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Airport )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cemetery )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Continent )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Education )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IndigenousPeoplesReserve )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Island )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Medical )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Military )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Nautical )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Neighborhood )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Runway )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sand )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShoppingCenter )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Stadium )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Vegetation )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Forest )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GolfCourse )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Park )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlayingField )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Reserve )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Point )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NaturalPoint )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Peak )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VolcanicPeak )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WaterPoint )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointOfInterest )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Business )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FoodPoint )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PopulatedPlace )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Capital )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AdminDistrictCapital )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CountryRegionCapital )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoadShield )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoadExit )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Transit )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Political )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CountryRegion )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AdminDistrict )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_District )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Structure )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Building )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EducationBuilding )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MedicalBuilding )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransitBuilding )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Transportation )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Road )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ControlledAccessHighway )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HighSpeedRamp )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Highway )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MajorRoad )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ArterialRoad )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Street )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ramp )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UnpavedStreet )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TollRoad )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Railway )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Trail )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WaterRoute )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Water )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_River )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RouteLine )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WalkingRoute )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DrivingRoute )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Area(This,value) )
    ( (This)->lpVtbl->get_Airport(This,value) )
    ( (This)->lpVtbl->get_Cemetery(This,value) )
    ( (This)->lpVtbl->get_Continent(This,value) )
    ( (This)->lpVtbl->get_Education(This,value) )
    ( (This)->lpVtbl->get_IndigenousPeoplesReserve(This,value) )
    ( (This)->lpVtbl->get_Island(This,value) )
    ( (This)->lpVtbl->get_Medical(This,value) )
    ( (This)->lpVtbl->get_Military(This,value) )
    ( (This)->lpVtbl->get_Nautical(This,value) )
    ( (This)->lpVtbl->get_Neighborhood(This,value) )
    ( (This)->lpVtbl->get_Runway(This,value) )
    ( (This)->lpVtbl->get_Sand(This,value) )
    ( (This)->lpVtbl->get_ShoppingCenter(This,value) )
    ( (This)->lpVtbl->get_Stadium(This,value) )
    ( (This)->lpVtbl->get_Vegetation(This,value) )
    ( (This)->lpVtbl->get_Forest(This,value) )
    ( (This)->lpVtbl->get_GolfCourse(This,value) )
    ( (This)->lpVtbl->get_Park(This,value) )
    ( (This)->lpVtbl->get_PlayingField(This,value) )
    ( (This)->lpVtbl->get_Reserve(This,value) )
    ( (This)->lpVtbl->get_Point(This,value) )
    ( (This)->lpVtbl->get_NaturalPoint(This,value) )
    ( (This)->lpVtbl->get_Peak(This,value) )
    ( (This)->lpVtbl->get_VolcanicPeak(This,value) )
    ( (This)->lpVtbl->get_WaterPoint(This,value) )
    ( (This)->lpVtbl->get_PointOfInterest(This,value) )
    ( (This)->lpVtbl->get_Business(This,value) )
    ( (This)->lpVtbl->get_FoodPoint(This,value) )
    ( (This)->lpVtbl->get_PopulatedPlace(This,value) )
    ( (This)->lpVtbl->get_Capital(This,value) )
    ( (This)->lpVtbl->get_AdminDistrictCapital(This,value) )
    ( (This)->lpVtbl->get_CountryRegionCapital(This,value) )
    ( (This)->lpVtbl->get_RoadShield(This,value) )
    ( (This)->lpVtbl->get_RoadExit(This,value) )
    ( (This)->lpVtbl->get_Transit(This,value) )
    ( (This)->lpVtbl->get_Political(This,value) )
    ( (This)->lpVtbl->get_CountryRegion(This,value) )
    ( (This)->lpVtbl->get_AdminDistrict(This,value) )
    ( (This)->lpVtbl->get_District(This,value) )
    ( (This)->lpVtbl->get_Structure(This,value) )
    ( (This)->lpVtbl->get_Building(This,value) )
    ( (This)->lpVtbl->get_EducationBuilding(This,value) )
    ( (This)->lpVtbl->get_MedicalBuilding(This,value) )
    ( (This)->lpVtbl->get_TransitBuilding(This,value) )
    ( (This)->lpVtbl->get_Transportation(This,value) )
    ( (This)->lpVtbl->get_Road(This,value) )
    ( (This)->lpVtbl->get_ControlledAccessHighway(This,value) )
    ( (This)->lpVtbl->get_HighSpeedRamp(This,value) )
    ( (This)->lpVtbl->get_Highway(This,value) )
    ( (This)->lpVtbl->get_MajorRoad(This,value) )
    ( (This)->lpVtbl->get_ArterialRoad(This,value) )
    ( (This)->lpVtbl->get_Street(This,value) )
    ( (This)->lpVtbl->get_Ramp(This,value) )
    ( (This)->lpVtbl->get_UnpavedStreet(This,value) )
    ( (This)->lpVtbl->get_TollRoad(This,value) )
    ( (This)->lpVtbl->get_Railway(This,value) )
    ( (This)->lpVtbl->get_Trail(This,value) )
    ( (This)->lpVtbl->get_WaterRoute(This,value) )
    ( (This)->lpVtbl->get_Water(This,value) )
    ( (This)->lpVtbl->get_River(This,value) )
    ( (This)->lpVtbl->get_RouteLine(This,value) )
    ( (This)->lpVtbl->get_WalkingRoute(This,value) )
    ( (This)->lpVtbl->get_DrivingRoute(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntriesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntryStatesStatics[] = L"Windows.UI.Xaml.Controls.Maps.IMapStyleSheetEntryStatesStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntryStatesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntryStatesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntryStatesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntryStatesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntryStatesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntryStatesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntryStatesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Disabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntryStatesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Hover )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntryStatesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Selected )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntryStatesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntryStatesStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntryStatesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntryStatesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Disabled(This,value) )
    ( (This)->lpVtbl->get_Hover(This,value) )
    ( (This)->lpVtbl->get_Selected(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetEntryStatesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics[] = L"Windows.UI.Xaml.Controls.Maps.IMapStyleSheetStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Aerial )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * * result
        );
    HRESULT ( STDMETHODCALLTYPE *AerialWithOverlay )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RoadLight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RoadDark )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RoadHighContrastLight )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RoadHighContrastDark )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * * result
        );
    HRESULT ( STDMETHODCALLTYPE *Combine )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CXaml__CControls__CMaps__CMapStyleSheet * styleSheets,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ParseFromJson )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics * This,
                  __RPC__in HSTRING styleAsJson,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParseFromJson )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics * This,
                  __RPC__in HSTRING styleAsJson,
                   __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheet * * styleSheet,
                           __RPC__out boolean * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Aerial(This,result) )
    ( (This)->lpVtbl->AerialWithOverlay(This,result) )
    ( (This)->lpVtbl->RoadLight(This,result) )
    ( (This)->lpVtbl->RoadDark(This,result) )
    ( (This)->lpVtbl->RoadHighContrastLight(This,result) )
    ( (This)->lpVtbl->RoadHighContrastDark(This,result) )
    ( (This)->lpVtbl->Combine(This,styleSheets,result) )
    ( (This)->lpVtbl->ParseFromJson(This,styleAsJson,result) )
    ( (This)->lpVtbl->TryParseFromJson(This,styleAsJson,styleSheet,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapStyleSheetStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapTargetCameraChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Camera )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapCamera * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Camera(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs2[] = L"Windows.UI.Xaml.Controls.Maps.IMapTargetCameraChangedEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChangeReason )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapCameraChangeReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChangeReason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTargetCameraChangedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequest[] = L"Windows.UI.Xaml.Controls.Maps.IMapTileBitmapRequest";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PixelData )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PixelData )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequest * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PixelData(This,value) )
    ( (This)->lpVtbl->put_PixelData(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestDeferral[] = L"Windows.UI.Xaml.Controls.Maps.IMapTileBitmapRequestDeferral";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestDeferralVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapTileBitmapRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_X )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Y )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZoomLevel )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_X(This,value) )
    ( (This)->lpVtbl->get_Y(This,value) )
    ( (This)->lpVtbl->get_ZoomLevel(This,value) )
    ( (This)->lpVtbl->get_Request(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs2[] = L"Windows.UI.Xaml.Controls.Maps.IMapTileBitmapRequestedEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FrameIndex )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs2 * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FrameIndex(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileBitmapRequestedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapTileDataSource[] = L"Windows.UI.Xaml.Controls.Maps.IMapTileDataSource";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSourceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapTileDataSourceFactory[] = L"Windows.UI.Xaml.Controls.Maps.IMapTileDataSourceFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSourceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSourceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSourceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSourceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSourceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSourceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSourceFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSourceFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSourceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSourceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapTileSource[] = L"Windows.UI.Xaml.Controls.Maps.IMapTileSource";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DataSource )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DataSource )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSource * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Layer )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapTileLayer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Layer )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapTileLayer value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZoomLevelRange )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapZoomLevelRange * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ZoomLevelRange )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapZoomLevelRange value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bounds )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Bounds )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowOverstretch )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowOverstretch )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsFadingEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsFadingEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTransparencyEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsTransparencyEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRetryEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsRetryEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZIndex )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ZIndex )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TilePixelSize )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TilePixelSize )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Visible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Visible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DataSource(This,value) )
    ( (This)->lpVtbl->put_DataSource(This,value) )
    ( (This)->lpVtbl->get_Layer(This,value) )
    ( (This)->lpVtbl->put_Layer(This,value) )
    ( (This)->lpVtbl->get_ZoomLevelRange(This,value) )
    ( (This)->lpVtbl->put_ZoomLevelRange(This,value) )
    ( (This)->lpVtbl->get_Bounds(This,value) )
    ( (This)->lpVtbl->put_Bounds(This,value) )
    ( (This)->lpVtbl->get_AllowOverstretch(This,value) )
    ( (This)->lpVtbl->put_AllowOverstretch(This,value) )
    ( (This)->lpVtbl->get_IsFadingEnabled(This,value) )
    ( (This)->lpVtbl->put_IsFadingEnabled(This,value) )
    ( (This)->lpVtbl->get_IsTransparencyEnabled(This,value) )
    ( (This)->lpVtbl->put_IsTransparencyEnabled(This,value) )
    ( (This)->lpVtbl->get_IsRetryEnabled(This,value) )
    ( (This)->lpVtbl->put_IsRetryEnabled(This,value) )
    ( (This)->lpVtbl->get_ZIndex(This,value) )
    ( (This)->lpVtbl->put_ZIndex(This,value) )
    ( (This)->lpVtbl->get_TilePixelSize(This,value) )
    ( (This)->lpVtbl->put_TilePixelSize(This,value) )
    ( (This)->lpVtbl->get_Visible(This,value) )
    ( (This)->lpVtbl->put_Visible(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapTileSource2[] = L"Windows.UI.Xaml.Controls.Maps.IMapTileSource2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AnimationState )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapTileAnimationState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoPlay )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoPlay )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameCount )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2 * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FrameCount )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2 * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameDuration )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FrameDuration )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2 * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    HRESULT ( STDMETHODCALLTYPE *Pause )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *Play )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AnimationState(This,value) )
    ( (This)->lpVtbl->get_AutoPlay(This,value) )
    ( (This)->lpVtbl->put_AutoPlay(This,value) )
    ( (This)->lpVtbl->get_FrameCount(This,value) )
    ( (This)->lpVtbl->put_FrameCount(This,value) )
    ( (This)->lpVtbl->get_FrameDuration(This,value) )
    ( (This)->lpVtbl->put_FrameDuration(This,value) )
    ( (This)->lpVtbl->Pause(This) )
    ( (This)->lpVtbl->Play(This) )
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapTileSourceFactory[] = L"Windows.UI.Xaml.Controls.Maps.IMapTileSourceFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithDataSource )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSource * dataSource,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithDataSourceAndZoomRange )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSource * dataSource,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapZoomLevelRange zoomLevelRange,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithDataSourceZoomRangeAndBounds )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSource * dataSource,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapZoomLevelRange zoomLevelRange,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * bounds,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileDataSource * dataSource,
                  __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CMapZoomLevelRange zoomLevelRange,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * bounds,
                  INT32 tileSizeInPixels,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
    ( (This)->lpVtbl->CreateInstanceWithDataSource(This,dataSource,baseInterface,innerInterface,value) )
    ( (This)->lpVtbl->CreateInstanceWithDataSourceAndZoomRange(This,dataSource,zoomLevelRange,baseInterface,innerInterface,value) )
    ( (This)->lpVtbl->CreateInstanceWithDataSourceZoomRangeAndBounds(This,dataSource,zoomLevelRange,bounds,baseInterface,innerInterface,value) )
    ( (This)->lpVtbl->CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(This,dataSource,zoomLevelRange,bounds,tileSizeInPixels,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics[] = L"Windows.UI.Xaml.Controls.Maps.IMapTileSourceStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DataSourceProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LayerProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZoomLevelRangeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BoundsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowOverstretchProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsFadingEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTransparencyEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRetryEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZIndexProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TilePixelSizeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VisibleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DataSourceProperty(This,value) )
    ( (This)->lpVtbl->get_LayerProperty(This,value) )
    ( (This)->lpVtbl->get_ZoomLevelRangeProperty(This,value) )
    ( (This)->lpVtbl->get_BoundsProperty(This,value) )
    ( (This)->lpVtbl->get_AllowOverstretchProperty(This,value) )
    ( (This)->lpVtbl->get_IsFadingEnabledProperty(This,value) )
    ( (This)->lpVtbl->get_IsTransparencyEnabledProperty(This,value) )
    ( (This)->lpVtbl->get_IsRetryEnabledProperty(This,value) )
    ( (This)->lpVtbl->get_ZIndexProperty(This,value) )
    ( (This)->lpVtbl->get_TilePixelSizeProperty(This,value) )
    ( (This)->lpVtbl->get_VisibleProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics2[] = L"Windows.UI.Xaml.Controls.Maps.IMapTileSourceStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AnimationStateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoPlayProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameCountProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameDurationProperty )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AnimationStateProperty(This,value) )
    ( (This)->lpVtbl->get_AutoPlayProperty(This,value) )
    ( (This)->lpVtbl->get_FrameCountProperty(This,value) )
    ( (This)->lpVtbl->get_FrameDurationProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileSourceStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequest[] = L"Windows.UI.Xaml.Controls.Maps.IMapTileUriRequest";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequest * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->put_Uri(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestDeferral[] = L"Windows.UI.Xaml.Controls.Maps.IMapTileUriRequestDeferral";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestDeferralVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.IMapTileUriRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_X )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Y )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZoomLevel )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_X(This,value) )
    ( (This)->lpVtbl->get_Y(This,value) )
    ( (This)->lpVtbl->get_ZoomLevel(This,value) )
    ( (This)->lpVtbl->get_Request(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs2[] = L"Windows.UI.Xaml.Controls.Maps.IMapTileUriRequestedEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FrameIndex )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs2 * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FrameIndex(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIMapTileUriRequestedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience[] = L"Windows.UI.Xaml.Controls.Maps.IStreetsideExperience";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AddressTextVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AddressTextVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CursorVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CursorVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OverviewMapVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OverviewMapVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StreetLabelsVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StreetLabelsVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExitButtonVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExitButtonVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZoomButtonsVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ZoomButtonsVisible )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AddressTextVisible(This,value) )
    ( (This)->lpVtbl->put_AddressTextVisible(This,value) )
    ( (This)->lpVtbl->get_CursorVisible(This,value) )
    ( (This)->lpVtbl->put_CursorVisible(This,value) )
    ( (This)->lpVtbl->get_OverviewMapVisible(This,value) )
    ( (This)->lpVtbl->put_OverviewMapVisible(This,value) )
    ( (This)->lpVtbl->get_StreetLabelsVisible(This,value) )
    ( (This)->lpVtbl->put_StreetLabelsVisible(This,value) )
    ( (This)->lpVtbl->get_ExitButtonVisible(This,value) )
    ( (This)->lpVtbl->put_ExitButtonVisible(This,value) )
    ( (This)->lpVtbl->get_ZoomButtonsVisible(This,value) )
    ( (This)->lpVtbl->put_ZoomButtonsVisible(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IStreetsideExperienceFactory[] = L"Windows.UI.Xaml.Controls.Maps.IStreetsideExperienceFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithPanorama )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanorama * panorama,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithPanoramaHeadingPitchAndFieldOfView )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanorama * panorama,
                  DOUBLE headingInDegrees,
                  DOUBLE pitchInDegrees,
                  DOUBLE fieldOfViewInDegrees,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperience * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceWithPanorama(This,panorama,value) )
    ( (This)->lpVtbl->CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(This,panorama,headingInDegrees,pitchInDegrees,fieldOfViewInDegrees,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsideExperienceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IStreetsidePanorama[] = L"Windows.UI.Xaml.Controls.Maps.IStreetsidePanorama";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanorama * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanorama * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanorama * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanorama * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanorama * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanorama * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanorama * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanorama
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Location(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanorama;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Controls_Maps_IStreetsidePanoramaStatics[] = L"Windows.UI.Xaml.Controls.Maps.IStreetsidePanoramaStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *FindNearbyWithLocationAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * location,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *FindNearbyWithLocationAndRadiusAsync )(
        __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * location,
                  DOUBLE radiusInMeters,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CMaps__CStreetsidePanorama * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindNearbyWithLocationAsync(This,location,operation) )
    ( (This)->lpVtbl->FindNearbyWithLocationAndRadiusAsync(This,location,radiusInMeters,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CControls_CMaps_CIStreetsidePanoramaStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_CustomMapTileDataSource[] = L"Windows.UI.Xaml.Controls.Maps.CustomMapTileDataSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_HttpMapTileDataSource[] = L"Windows.UI.Xaml.Controls.Maps.HttpMapTileDataSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_LocalMapTileDataSource[] = L"Windows.UI.Xaml.Controls.Maps.LocalMapTileDataSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapActualCameraChangedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapActualCameraChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapActualCameraChangingEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapActualCameraChangingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapBillboard[] = L"Windows.UI.Xaml.Controls.Maps.MapBillboard";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapCamera[] = L"Windows.UI.Xaml.Controls.Maps.MapCamera";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapContextRequestedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapContextRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapControl[] = L"Windows.UI.Xaml.Controls.Maps.MapControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapControlBusinessLandmarkClickEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapControlBusinessLandmarkClickEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapControlBusinessLandmarkPointerEnteredEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapControlBusinessLandmarkPointerEnteredEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapControlBusinessLandmarkPointerExitedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapControlBusinessLandmarkPointerExitedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapControlBusinessLandmarkRightTappedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapControlBusinessLandmarkRightTappedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapControlDataHelper[] = L"Windows.UI.Xaml.Controls.Maps.MapControlDataHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapControlTransitFeatureClickEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapControlTransitFeatureClickEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapControlTransitFeaturePointerEnteredEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapControlTransitFeaturePointerEnteredEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapControlTransitFeaturePointerExitedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapControlTransitFeaturePointerExitedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapControlTransitFeatureRightTappedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapControlTransitFeatureRightTappedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapCustomExperience[] = L"Windows.UI.Xaml.Controls.Maps.MapCustomExperience";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapCustomExperienceChangedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapCustomExperienceChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapElement[] = L"Windows.UI.Xaml.Controls.Maps.MapElement";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapElement3D[] = L"Windows.UI.Xaml.Controls.Maps.MapElement3D";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapElementClickEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapElementClickEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapElementPointerEnteredEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapElementPointerEnteredEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapElementPointerExitedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapElementPointerExitedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapElementsLayer[] = L"Windows.UI.Xaml.Controls.Maps.MapElementsLayer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapElementsLayerClickEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapElementsLayerClickEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapElementsLayerContextRequestedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapElementsLayerContextRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapElementsLayerPointerEnteredEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapElementsLayerPointerEnteredEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapElementsLayerPointerExitedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapElementsLayerPointerExitedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapIcon[] = L"Windows.UI.Xaml.Controls.Maps.MapIcon";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapInputEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapInputEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapItemsControl[] = L"Windows.UI.Xaml.Controls.Maps.MapItemsControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapLayer[] = L"Windows.UI.Xaml.Controls.Maps.MapLayer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapModel3D[] = L"Windows.UI.Xaml.Controls.Maps.MapModel3D";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapPolygon[] = L"Windows.UI.Xaml.Controls.Maps.MapPolygon";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapPolyline[] = L"Windows.UI.Xaml.Controls.Maps.MapPolyline";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapRightTappedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapRightTappedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapRouteView[] = L"Windows.UI.Xaml.Controls.Maps.MapRouteView";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapScene[] = L"Windows.UI.Xaml.Controls.Maps.MapScene";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapStyleSheet[] = L"Windows.UI.Xaml.Controls.Maps.MapStyleSheet";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapStyleSheetEntries[] = L"Windows.UI.Xaml.Controls.Maps.MapStyleSheetEntries";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapStyleSheetEntryStates[] = L"Windows.UI.Xaml.Controls.Maps.MapStyleSheetEntryStates";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapTargetCameraChangedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapTargetCameraChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapTileBitmapRequest[] = L"Windows.UI.Xaml.Controls.Maps.MapTileBitmapRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapTileBitmapRequestDeferral[] = L"Windows.UI.Xaml.Controls.Maps.MapTileBitmapRequestDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapTileBitmapRequestedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapTileBitmapRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapTileDataSource[] = L"Windows.UI.Xaml.Controls.Maps.MapTileDataSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapTileSource[] = L"Windows.UI.Xaml.Controls.Maps.MapTileSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapTileUriRequest[] = L"Windows.UI.Xaml.Controls.Maps.MapTileUriRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapTileUriRequestDeferral[] = L"Windows.UI.Xaml.Controls.Maps.MapTileUriRequestDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_MapTileUriRequestedEventArgs[] = L"Windows.UI.Xaml.Controls.Maps.MapTileUriRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_StreetsideExperience[] = L"Windows.UI.Xaml.Controls.Maps.StreetsideExperience";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Controls_Maps_StreetsidePanorama[] = L"Windows.UI.Xaml.Controls.Maps.StreetsidePanorama";
       
       
#pragma clang diagnostic pop
