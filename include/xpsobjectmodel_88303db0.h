#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IXpsOMShareable IXpsOMShareable;
typedef interface IXpsOMVisual IXpsOMVisual;
typedef interface IXpsOMPart IXpsOMPart;
typedef interface IXpsOMGlyphsEditor IXpsOMGlyphsEditor;
typedef interface IXpsOMGlyphs IXpsOMGlyphs;
typedef interface IXpsOMDashCollection IXpsOMDashCollection;
typedef interface IXpsOMMatrixTransform IXpsOMMatrixTransform;
typedef interface IXpsOMGeometry IXpsOMGeometry;
typedef interface IXpsOMGeometryFigure IXpsOMGeometryFigure;
typedef interface IXpsOMGeometryFigureCollection IXpsOMGeometryFigureCollection;
typedef interface IXpsOMPath IXpsOMPath;
typedef interface IXpsOMBrush IXpsOMBrush;
typedef interface IXpsOMGradientStopCollection IXpsOMGradientStopCollection;
typedef interface IXpsOMSolidColorBrush IXpsOMSolidColorBrush;
typedef interface IXpsOMTileBrush IXpsOMTileBrush;
typedef interface IXpsOMVisualBrush IXpsOMVisualBrush;
typedef interface IXpsOMImageBrush IXpsOMImageBrush;
typedef interface IXpsOMGradientStop IXpsOMGradientStop;
typedef interface IXpsOMGradientBrush IXpsOMGradientBrush;
typedef interface IXpsOMLinearGradientBrush IXpsOMLinearGradientBrush;
typedef interface IXpsOMRadialGradientBrush IXpsOMRadialGradientBrush;
typedef interface IXpsOMResource IXpsOMResource;
typedef interface IXpsOMPartResources IXpsOMPartResources;
typedef interface IXpsOMDictionary IXpsOMDictionary;
typedef interface IXpsOMFontResource IXpsOMFontResource;
typedef interface IXpsOMFontResourceCollection IXpsOMFontResourceCollection;
typedef interface IXpsOMImageResource IXpsOMImageResource;
typedef interface IXpsOMImageResourceCollection IXpsOMImageResourceCollection;
typedef interface IXpsOMColorProfileResource IXpsOMColorProfileResource;
typedef interface IXpsOMColorProfileResourceCollection IXpsOMColorProfileResourceCollection;
typedef interface IXpsOMPrintTicketResource IXpsOMPrintTicketResource;
typedef interface IXpsOMRemoteDictionaryResource IXpsOMRemoteDictionaryResource;
typedef interface IXpsOMRemoteDictionaryResourceCollection IXpsOMRemoteDictionaryResourceCollection;
typedef interface IXpsOMSignatureBlockResourceCollection IXpsOMSignatureBlockResourceCollection;
typedef interface IXpsOMDocumentStructureResource IXpsOMDocumentStructureResource;
typedef interface IXpsOMStoryFragmentsResource IXpsOMStoryFragmentsResource;
typedef interface IXpsOMSignatureBlockResource IXpsOMSignatureBlockResource;
typedef interface IXpsOMVisualCollection IXpsOMVisualCollection;
typedef interface IXpsOMCanvas IXpsOMCanvas;
typedef interface IXpsOMPage IXpsOMPage;
typedef interface IXpsOMPageReference IXpsOMPageReference;
typedef interface IXpsOMPageReferenceCollection IXpsOMPageReferenceCollection;
typedef interface IXpsOMDocument IXpsOMDocument;
typedef interface IXpsOMDocumentCollection IXpsOMDocumentCollection;
typedef interface IXpsOMDocumentSequence IXpsOMDocumentSequence;
typedef interface IXpsOMCoreProperties IXpsOMCoreProperties;
typedef interface IXpsOMPackage IXpsOMPackage;
typedef interface IXpsOMObjectFactory IXpsOMObjectFactory;
typedef interface IXpsOMNameCollection IXpsOMNameCollection;
typedef interface IXpsOMPartUriCollection IXpsOMPartUriCollection;
typedef interface IXpsOMPackageWriter IXpsOMPackageWriter;
typedef interface IXpsOMPackageTarget IXpsOMPackageTarget;
typedef interface IXpsOMThumbnailGenerator IXpsOMThumbnailGenerator;
typedef class XpsOMObjectFactory XpsOMObjectFactory;
typedef class XpsOMThumbnailGenerator XpsOMThumbnailGenerator;
#include "oaidl.h"
#include "ocidl.h"
#include "msopc.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0001
    {
        XPS_TILE_MODE_NONE = 1,
        XPS_TILE_MODE_TILE = ( XPS_TILE_MODE_NONE + 1 ) ,
        XPS_TILE_MODE_FLIPX = ( XPS_TILE_MODE_TILE + 1 ) ,
        XPS_TILE_MODE_FLIPY = ( XPS_TILE_MODE_FLIPX + 1 ) ,
        XPS_TILE_MODE_FLIPXY = ( XPS_TILE_MODE_FLIPY + 1 )
    } XPS_TILE_MODE;
typedef
enum __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0002
    {
        XPS_COLOR_INTERPOLATION_SCRGBLINEAR = 1,
        XPS_COLOR_INTERPOLATION_SRGBLINEAR = ( XPS_COLOR_INTERPOLATION_SCRGBLINEAR + 1 )
    } XPS_COLOR_INTERPOLATION;
typedef
enum __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0003
    {
        XPS_SPREAD_METHOD_PAD = 1,
        XPS_SPREAD_METHOD_REFLECT = ( XPS_SPREAD_METHOD_PAD + 1 ) ,
        XPS_SPREAD_METHOD_REPEAT = ( XPS_SPREAD_METHOD_REFLECT + 1 )
    } XPS_SPREAD_METHOD;
typedef
enum __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0004
    {
        XPS_STYLE_SIMULATION_NONE = 1,
        XPS_STYLE_SIMULATION_ITALIC = ( XPS_STYLE_SIMULATION_NONE + 1 ) ,
        XPS_STYLE_SIMULATION_BOLD = ( XPS_STYLE_SIMULATION_ITALIC + 1 ) ,
        XPS_STYLE_SIMULATION_BOLDITALIC = ( XPS_STYLE_SIMULATION_BOLD + 1 )
    } XPS_STYLE_SIMULATION;
typedef
enum __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0005
    {
        XPS_LINE_CAP_FLAT = 1,
        XPS_LINE_CAP_ROUND = ( XPS_LINE_CAP_FLAT + 1 ) ,
        XPS_LINE_CAP_SQUARE = ( XPS_LINE_CAP_ROUND + 1 ) ,
        XPS_LINE_CAP_TRIANGLE = ( XPS_LINE_CAP_SQUARE + 1 )
    } XPS_LINE_CAP;
typedef
enum __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0006
    {
        XPS_DASH_CAP_FLAT = 1,
        XPS_DASH_CAP_ROUND = ( XPS_DASH_CAP_FLAT + 1 ) ,
        XPS_DASH_CAP_SQUARE = ( XPS_DASH_CAP_ROUND + 1 ) ,
        XPS_DASH_CAP_TRIANGLE = ( XPS_DASH_CAP_SQUARE + 1 )
    } XPS_DASH_CAP;
typedef
enum __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0007
    {
        XPS_LINE_JOIN_MITER = 1,
        XPS_LINE_JOIN_BEVEL = ( XPS_LINE_JOIN_MITER + 1 ) ,
        XPS_LINE_JOIN_ROUND = ( XPS_LINE_JOIN_BEVEL + 1 )
    } XPS_LINE_JOIN;
typedef
enum __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0008
    {
        XPS_IMAGE_TYPE_JPEG = 1,
        XPS_IMAGE_TYPE_PNG = ( XPS_IMAGE_TYPE_JPEG + 1 ) ,
        XPS_IMAGE_TYPE_TIFF = ( XPS_IMAGE_TYPE_PNG + 1 ) ,
        XPS_IMAGE_TYPE_WDP = ( XPS_IMAGE_TYPE_TIFF + 1 ) ,
        XPS_IMAGE_TYPE_JXR = ( XPS_IMAGE_TYPE_WDP + 1 )
    } XPS_IMAGE_TYPE;
typedef
enum __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0009
    {
        XPS_COLOR_TYPE_SRGB = 1,
        XPS_COLOR_TYPE_SCRGB = ( XPS_COLOR_TYPE_SRGB + 1 ) ,
        XPS_COLOR_TYPE_CONTEXT = ( XPS_COLOR_TYPE_SCRGB + 1 )
    } XPS_COLOR_TYPE;
typedef
enum __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0010
    {
        XPS_FILL_RULE_EVENODD = 1,
        XPS_FILL_RULE_NONZERO = ( XPS_FILL_RULE_EVENODD + 1 )
    } XPS_FILL_RULE;
typedef
enum __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0011
    {
        XPS_SEGMENT_TYPE_ARC_LARGE_CLOCKWISE = 1,
        XPS_SEGMENT_TYPE_ARC_LARGE_COUNTERCLOCKWISE = ( XPS_SEGMENT_TYPE_ARC_LARGE_CLOCKWISE + 1 ) ,
        XPS_SEGMENT_TYPE_ARC_SMALL_CLOCKWISE = ( XPS_SEGMENT_TYPE_ARC_LARGE_COUNTERCLOCKWISE + 1 ) ,
        XPS_SEGMENT_TYPE_ARC_SMALL_COUNTERCLOCKWISE = ( XPS_SEGMENT_TYPE_ARC_SMALL_CLOCKWISE + 1 ) ,
        XPS_SEGMENT_TYPE_BEZIER = ( XPS_SEGMENT_TYPE_ARC_SMALL_COUNTERCLOCKWISE + 1 ) ,
        XPS_SEGMENT_TYPE_LINE = ( XPS_SEGMENT_TYPE_BEZIER + 1 ) ,
        XPS_SEGMENT_TYPE_QUADRATIC_BEZIER = ( XPS_SEGMENT_TYPE_LINE + 1 )
    } XPS_SEGMENT_TYPE;
typedef
enum __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0012
    {
        XPS_SEGMENT_STROKE_PATTERN_ALL = 1,
        XPS_SEGMENT_STROKE_PATTERN_NONE = ( XPS_SEGMENT_STROKE_PATTERN_ALL + 1 ) ,
        XPS_SEGMENT_STROKE_PATTERN_MIXED = ( XPS_SEGMENT_STROKE_PATTERN_NONE + 1 )
    } XPS_SEGMENT_STROKE_PATTERN;
typedef
enum __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0013
    {
        XPS_FONT_EMBEDDING_NORMAL = 1,
        XPS_FONT_EMBEDDING_OBFUSCATED = ( XPS_FONT_EMBEDDING_NORMAL + 1 ) ,
        XPS_FONT_EMBEDDING_RESTRICTED = ( XPS_FONT_EMBEDDING_OBFUSCATED + 1 ) ,
        XPS_FONT_EMBEDDING_RESTRICTED_UNOBFUSCATED = ( XPS_FONT_EMBEDDING_RESTRICTED + 1 )
    } XPS_FONT_EMBEDDING;
typedef
enum __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0014
    {
        XPS_OBJECT_TYPE_CANVAS = 1,
        XPS_OBJECT_TYPE_GLYPHS = ( XPS_OBJECT_TYPE_CANVAS + 1 ) ,
        XPS_OBJECT_TYPE_PATH = ( XPS_OBJECT_TYPE_GLYPHS + 1 ) ,
        XPS_OBJECT_TYPE_MATRIX_TRANSFORM = ( XPS_OBJECT_TYPE_PATH + 1 ) ,
        XPS_OBJECT_TYPE_GEOMETRY = ( XPS_OBJECT_TYPE_MATRIX_TRANSFORM + 1 ) ,
        XPS_OBJECT_TYPE_SOLID_COLOR_BRUSH = ( XPS_OBJECT_TYPE_GEOMETRY + 1 ) ,
        XPS_OBJECT_TYPE_IMAGE_BRUSH = ( XPS_OBJECT_TYPE_SOLID_COLOR_BRUSH + 1 ) ,
        XPS_OBJECT_TYPE_LINEAR_GRADIENT_BRUSH = ( XPS_OBJECT_TYPE_IMAGE_BRUSH + 1 ) ,
        XPS_OBJECT_TYPE_RADIAL_GRADIENT_BRUSH = ( XPS_OBJECT_TYPE_LINEAR_GRADIENT_BRUSH + 1 ) ,
        XPS_OBJECT_TYPE_VISUAL_BRUSH = ( XPS_OBJECT_TYPE_RADIAL_GRADIENT_BRUSH + 1 )
    } XPS_OBJECT_TYPE;
typedef
enum __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0015
    {
        XPS_THUMBNAIL_SIZE_VERYSMALL = 1,
        XPS_THUMBNAIL_SIZE_SMALL = ( XPS_THUMBNAIL_SIZE_VERYSMALL + 1 ) ,
        XPS_THUMBNAIL_SIZE_MEDIUM = ( XPS_THUMBNAIL_SIZE_SMALL + 1 ) ,
        XPS_THUMBNAIL_SIZE_LARGE = ( XPS_THUMBNAIL_SIZE_MEDIUM + 1 )
    } XPS_THUMBNAIL_SIZE;
typedef
enum __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0016
    {
        XPS_INTERLEAVING_OFF = 1,
        XPS_INTERLEAVING_ON = ( XPS_INTERLEAVING_OFF + 1 )
    } XPS_INTERLEAVING;
typedef struct __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0017
    {
    FLOAT x;
    FLOAT y;
    } XPS_POINT;
typedef struct __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0018
    {
    FLOAT width;
    FLOAT height;
    } XPS_SIZE;
typedef struct __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0019
    {
    FLOAT x;
    FLOAT y;
    FLOAT width;
    FLOAT height;
    } XPS_RECT;
typedef struct __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0020
    {
    FLOAT length;
    FLOAT gap;
    } XPS_DASH;
typedef struct __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0021
    {
    LONG index;
    FLOAT advanceWidth;
    FLOAT horizontalOffset;
    FLOAT verticalOffset;
    } XPS_GLYPH_INDEX;
typedef struct __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0022
    {
    UINT32 unicodeStringStart;
    UINT16 unicodeStringLength;
    UINT32 glyphIndicesStart;
    UINT16 glyphIndicesLength;
    } XPS_GLYPH_MAPPING;
typedef struct __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0023
    {
    FLOAT m11;
    FLOAT m12;
    FLOAT m21;
    FLOAT m22;
    FLOAT m31;
    FLOAT m32;
    } XPS_MATRIX;
typedef struct __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0024
    {
    XPS_COLOR_TYPE colorType;
                                          union __MIDL___MIDL_itf_xpsobjectmodel_0000_0000_0028
        {
                       struct
            {
            UINT8 alpha;
            UINT8 red;
            UINT8 green;
            UINT8 blue;
            } sRGB;
                       struct
            {
            FLOAT alpha;
            FLOAT red;
            FLOAT green;
            FLOAT blue;
            } scRGB;
                       struct
            {
            UINT8 channelCount;
            FLOAT channels[ 9 ];
            } context;
        } value;
    } XPS_COLOR;
extern RPC_IF_HANDLE __MIDL_itf_xpsobjectmodel_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsobjectmodel_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IXpsOMShareable;
    typedef struct IXpsOMShareableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMShareable * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMShareable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMShareable * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMShareable * This,
                                __RPC__deref_out_opt IUnknown **owner);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IXpsOMShareable * This,
                                __RPC__out XPS_OBJECT_TYPE *type);
        END_INTERFACE
    } IXpsOMShareableVtbl;
    interface IXpsOMShareable
    {
        CONST_VTBL struct IXpsOMShareableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetType(This,type) )
EXTERN_C const IID IID_IXpsOMVisual;
    typedef struct IXpsOMVisualVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMVisual * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMVisual * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMVisual * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMVisual * This,
                                __RPC__deref_out_opt IUnknown **owner);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IXpsOMVisual * This,
                                __RPC__out XPS_OBJECT_TYPE *type);
        HRESULT ( STDMETHODCALLTYPE *GetTransform )(
            __RPC__in IXpsOMVisual * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **matrixTransform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLocal )(
            __RPC__in IXpsOMVisual * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **matrixTransform);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLocal )(
            __RPC__in IXpsOMVisual * This,
                       __RPC__in_opt IXpsOMMatrixTransform *matrixTransform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLookup )(
            __RPC__in IXpsOMVisual * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLookup )(
            __RPC__in IXpsOMVisual * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetClipGeometry )(
            __RPC__in IXpsOMVisual * This,
                                __RPC__deref_out_opt IXpsOMGeometry **clipGeometry);
        HRESULT ( STDMETHODCALLTYPE *GetClipGeometryLocal )(
            __RPC__in IXpsOMVisual * This,
                                __RPC__deref_out_opt IXpsOMGeometry **clipGeometry);
        HRESULT ( STDMETHODCALLTYPE *SetClipGeometryLocal )(
            __RPC__in IXpsOMVisual * This,
                       __RPC__in_opt IXpsOMGeometry *clipGeometry);
        HRESULT ( STDMETHODCALLTYPE *GetClipGeometryLookup )(
            __RPC__in IXpsOMVisual * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetClipGeometryLookup )(
            __RPC__in IXpsOMVisual * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetOpacity )(
            __RPC__in IXpsOMVisual * This,
                                __RPC__out FLOAT *opacity);
        HRESULT ( STDMETHODCALLTYPE *SetOpacity )(
            __RPC__in IXpsOMVisual * This,
                       FLOAT opacity);
        HRESULT ( STDMETHODCALLTYPE *GetOpacityMaskBrush )(
            __RPC__in IXpsOMVisual * This,
                                __RPC__deref_out_opt IXpsOMBrush **opacityMaskBrush);
        HRESULT ( STDMETHODCALLTYPE *GetOpacityMaskBrushLocal )(
            __RPC__in IXpsOMVisual * This,
                                __RPC__deref_out_opt IXpsOMBrush **opacityMaskBrush);
        HRESULT ( STDMETHODCALLTYPE *SetOpacityMaskBrushLocal )(
            __RPC__in IXpsOMVisual * This,
                       __RPC__in_opt IXpsOMBrush *opacityMaskBrush);
        HRESULT ( STDMETHODCALLTYPE *GetOpacityMaskBrushLookup )(
            __RPC__in IXpsOMVisual * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetOpacityMaskBrushLookup )(
            __RPC__in IXpsOMVisual * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IXpsOMVisual * This,
                                        __RPC__deref_out_opt_string LPWSTR *name);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            __RPC__in IXpsOMVisual * This,
                               __RPC__in_string LPCWSTR name);
        HRESULT ( STDMETHODCALLTYPE *GetIsHyperlinkTarget )(
            __RPC__in IXpsOMVisual * This,
                                __RPC__out BOOL *isHyperlink);
        HRESULT ( STDMETHODCALLTYPE *SetIsHyperlinkTarget )(
            __RPC__in IXpsOMVisual * This,
                       BOOL isHyperlink);
        HRESULT ( STDMETHODCALLTYPE *GetHyperlinkNavigateUri )(
            __RPC__in IXpsOMVisual * This,
                                __RPC__deref_out_opt IUri **hyperlinkUri);
        HRESULT ( STDMETHODCALLTYPE *SetHyperlinkNavigateUri )(
            __RPC__in IXpsOMVisual * This,
                       __RPC__in_opt IUri *hyperlinkUri);
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )(
            __RPC__in IXpsOMVisual * This,
                                        __RPC__deref_out_opt_string LPWSTR *language);
        HRESULT ( STDMETHODCALLTYPE *SetLanguage )(
            __RPC__in IXpsOMVisual * This,
                               __RPC__in_string LPCWSTR language);
        END_INTERFACE
    } IXpsOMVisualVtbl;
    interface IXpsOMVisual
    {
        CONST_VTBL struct IXpsOMVisualVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetType(This,type) )
    ( (This)->lpVtbl -> GetTransform(This,matrixTransform) )
    ( (This)->lpVtbl -> GetTransformLocal(This,matrixTransform) )
    ( (This)->lpVtbl -> SetTransformLocal(This,matrixTransform) )
    ( (This)->lpVtbl -> GetTransformLookup(This,key) )
    ( (This)->lpVtbl -> SetTransformLookup(This,key) )
    ( (This)->lpVtbl -> GetClipGeometry(This,clipGeometry) )
    ( (This)->lpVtbl -> GetClipGeometryLocal(This,clipGeometry) )
    ( (This)->lpVtbl -> SetClipGeometryLocal(This,clipGeometry) )
    ( (This)->lpVtbl -> GetClipGeometryLookup(This,key) )
    ( (This)->lpVtbl -> SetClipGeometryLookup(This,key) )
    ( (This)->lpVtbl -> GetOpacity(This,opacity) )
    ( (This)->lpVtbl -> SetOpacity(This,opacity) )
    ( (This)->lpVtbl -> GetOpacityMaskBrush(This,opacityMaskBrush) )
    ( (This)->lpVtbl -> GetOpacityMaskBrushLocal(This,opacityMaskBrush) )
    ( (This)->lpVtbl -> SetOpacityMaskBrushLocal(This,opacityMaskBrush) )
    ( (This)->lpVtbl -> GetOpacityMaskBrushLookup(This,key) )
    ( (This)->lpVtbl -> SetOpacityMaskBrushLookup(This,key) )
    ( (This)->lpVtbl -> GetName(This,name) )
    ( (This)->lpVtbl -> SetName(This,name) )
    ( (This)->lpVtbl -> GetIsHyperlinkTarget(This,isHyperlink) )
    ( (This)->lpVtbl -> SetIsHyperlinkTarget(This,isHyperlink) )
    ( (This)->lpVtbl -> GetHyperlinkNavigateUri(This,hyperlinkUri) )
    ( (This)->lpVtbl -> SetHyperlinkNavigateUri(This,hyperlinkUri) )
    ( (This)->lpVtbl -> GetLanguage(This,language) )
    ( (This)->lpVtbl -> SetLanguage(This,language) )
EXTERN_C const IID IID_IXpsOMPart;
    typedef struct IXpsOMPartVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMPart * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMPart * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMPart * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            __RPC__in IXpsOMPart * This,
                                __RPC__deref_out_opt IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *SetPartName )(
            __RPC__in IXpsOMPart * This,
                       __RPC__in_opt IOpcPartUri *partUri);
        END_INTERFACE
    } IXpsOMPartVtbl;
    interface IXpsOMPart
    {
        CONST_VTBL struct IXpsOMPartVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartName(This,partUri) )
    ( (This)->lpVtbl -> SetPartName(This,partUri) )
EXTERN_C const IID IID_IXpsOMGlyphsEditor;
    typedef struct IXpsOMGlyphsEditorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMGlyphsEditor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMGlyphsEditor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMGlyphsEditor * This);
        HRESULT ( STDMETHODCALLTYPE *ApplyEdits )(
            __RPC__in IXpsOMGlyphsEditor * This);
        HRESULT ( STDMETHODCALLTYPE *GetUnicodeString )(
            __RPC__in IXpsOMGlyphsEditor * This,
                                        __RPC__deref_out_opt_string LPWSTR *unicodeString);
        HRESULT ( STDMETHODCALLTYPE *SetUnicodeString )(
            __RPC__in IXpsOMGlyphsEditor * This,
                               __RPC__in_string LPCWSTR unicodeString);
        HRESULT ( STDMETHODCALLTYPE *GetGlyphIndexCount )(
            __RPC__in IXpsOMGlyphsEditor * This,
                                __RPC__out UINT32 *indexCount);
        HRESULT ( STDMETHODCALLTYPE *GetGlyphIndices )(
            __RPC__in IXpsOMGlyphsEditor * This,
                            __RPC__inout UINT32 *indexCount,
                        __RPC__out XPS_GLYPH_INDEX *glyphIndices);
        HRESULT ( STDMETHODCALLTYPE *SetGlyphIndices )(
            __RPC__in IXpsOMGlyphsEditor * This,
                       UINT32 indexCount,
                       __RPC__in const XPS_GLYPH_INDEX *glyphIndices);
        HRESULT ( STDMETHODCALLTYPE *GetGlyphMappingCount )(
            __RPC__in IXpsOMGlyphsEditor * This,
                                __RPC__out UINT32 *glyphMappingCount);
        HRESULT ( STDMETHODCALLTYPE *GetGlyphMappings )(
            __RPC__in IXpsOMGlyphsEditor * This,
                            __RPC__inout UINT32 *glyphMappingCount,
                        __RPC__out XPS_GLYPH_MAPPING *glyphMappings);
        HRESULT ( STDMETHODCALLTYPE *SetGlyphMappings )(
            __RPC__in IXpsOMGlyphsEditor * This,
                       UINT32 glyphMappingCount,
                       __RPC__in const XPS_GLYPH_MAPPING *glyphMappings);
        HRESULT ( STDMETHODCALLTYPE *GetProhibitedCaretStopCount )(
            __RPC__in IXpsOMGlyphsEditor * This,
                                __RPC__out UINT32 *prohibitedCaretStopCount);
        HRESULT ( STDMETHODCALLTYPE *GetProhibitedCaretStops )(
            __RPC__in IXpsOMGlyphsEditor * This,
                            __RPC__inout UINT32 *count,
                        __RPC__out UINT32 *prohibitedCaretStops);
        HRESULT ( STDMETHODCALLTYPE *SetProhibitedCaretStops )(
            __RPC__in IXpsOMGlyphsEditor * This,
                       UINT32 count,
                       __RPC__in const UINT32 *prohibitedCaretStops);
        HRESULT ( STDMETHODCALLTYPE *GetBidiLevel )(
            __RPC__in IXpsOMGlyphsEditor * This,
                                __RPC__out UINT32 *bidiLevel);
        HRESULT ( STDMETHODCALLTYPE *SetBidiLevel )(
            __RPC__in IXpsOMGlyphsEditor * This,
                       UINT32 bidiLevel);
        HRESULT ( STDMETHODCALLTYPE *GetIsSideways )(
            __RPC__in IXpsOMGlyphsEditor * This,
                                __RPC__out BOOL *isSideways);
        HRESULT ( STDMETHODCALLTYPE *SetIsSideways )(
            __RPC__in IXpsOMGlyphsEditor * This,
                       BOOL isSideways);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceFontName )(
            __RPC__in IXpsOMGlyphsEditor * This,
                                        __RPC__deref_out_opt_string LPWSTR *deviceFontName);
        HRESULT ( STDMETHODCALLTYPE *SetDeviceFontName )(
            __RPC__in IXpsOMGlyphsEditor * This,
                               __RPC__in_string LPCWSTR deviceFontName);
        END_INTERFACE
    } IXpsOMGlyphsEditorVtbl;
    interface IXpsOMGlyphsEditor
    {
        CONST_VTBL struct IXpsOMGlyphsEditorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ApplyEdits(This) )
    ( (This)->lpVtbl -> GetUnicodeString(This,unicodeString) )
    ( (This)->lpVtbl -> SetUnicodeString(This,unicodeString) )
    ( (This)->lpVtbl -> GetGlyphIndexCount(This,indexCount) )
    ( (This)->lpVtbl -> GetGlyphIndices(This,indexCount,glyphIndices) )
    ( (This)->lpVtbl -> SetGlyphIndices(This,indexCount,glyphIndices) )
    ( (This)->lpVtbl -> GetGlyphMappingCount(This,glyphMappingCount) )
    ( (This)->lpVtbl -> GetGlyphMappings(This,glyphMappingCount,glyphMappings) )
    ( (This)->lpVtbl -> SetGlyphMappings(This,glyphMappingCount,glyphMappings) )
    ( (This)->lpVtbl -> GetProhibitedCaretStopCount(This,prohibitedCaretStopCount) )
    ( (This)->lpVtbl -> GetProhibitedCaretStops(This,count,prohibitedCaretStops) )
    ( (This)->lpVtbl -> SetProhibitedCaretStops(This,count,prohibitedCaretStops) )
    ( (This)->lpVtbl -> GetBidiLevel(This,bidiLevel) )
    ( (This)->lpVtbl -> SetBidiLevel(This,bidiLevel) )
    ( (This)->lpVtbl -> GetIsSideways(This,isSideways) )
    ( (This)->lpVtbl -> SetIsSideways(This,isSideways) )
    ( (This)->lpVtbl -> GetDeviceFontName(This,deviceFontName) )
    ( (This)->lpVtbl -> SetDeviceFontName(This,deviceFontName) )
EXTERN_C const IID IID_IXpsOMGlyphs;
    typedef struct IXpsOMGlyphsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMGlyphs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMGlyphs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMGlyphs * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__deref_out_opt IUnknown **owner);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__out XPS_OBJECT_TYPE *type);
        HRESULT ( STDMETHODCALLTYPE *GetTransform )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **matrixTransform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLocal )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **matrixTransform);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLocal )(
            __RPC__in IXpsOMGlyphs * This,
                       __RPC__in_opt IXpsOMMatrixTransform *matrixTransform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLookup )(
            __RPC__in IXpsOMGlyphs * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLookup )(
            __RPC__in IXpsOMGlyphs * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetClipGeometry )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__deref_out_opt IXpsOMGeometry **clipGeometry);
        HRESULT ( STDMETHODCALLTYPE *GetClipGeometryLocal )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__deref_out_opt IXpsOMGeometry **clipGeometry);
        HRESULT ( STDMETHODCALLTYPE *SetClipGeometryLocal )(
            __RPC__in IXpsOMGlyphs * This,
                       __RPC__in_opt IXpsOMGeometry *clipGeometry);
        HRESULT ( STDMETHODCALLTYPE *GetClipGeometryLookup )(
            __RPC__in IXpsOMGlyphs * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetClipGeometryLookup )(
            __RPC__in IXpsOMGlyphs * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetOpacity )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__out FLOAT *opacity);
        HRESULT ( STDMETHODCALLTYPE *SetOpacity )(
            __RPC__in IXpsOMGlyphs * This,
                       FLOAT opacity);
        HRESULT ( STDMETHODCALLTYPE *GetOpacityMaskBrush )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__deref_out_opt IXpsOMBrush **opacityMaskBrush);
        HRESULT ( STDMETHODCALLTYPE *GetOpacityMaskBrushLocal )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__deref_out_opt IXpsOMBrush **opacityMaskBrush);
        HRESULT ( STDMETHODCALLTYPE *SetOpacityMaskBrushLocal )(
            __RPC__in IXpsOMGlyphs * This,
                       __RPC__in_opt IXpsOMBrush *opacityMaskBrush);
        HRESULT ( STDMETHODCALLTYPE *GetOpacityMaskBrushLookup )(
            __RPC__in IXpsOMGlyphs * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetOpacityMaskBrushLookup )(
            __RPC__in IXpsOMGlyphs * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IXpsOMGlyphs * This,
                                        __RPC__deref_out_opt_string LPWSTR *name);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            __RPC__in IXpsOMGlyphs * This,
                               __RPC__in_string LPCWSTR name);
        HRESULT ( STDMETHODCALLTYPE *GetIsHyperlinkTarget )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__out BOOL *isHyperlink);
        HRESULT ( STDMETHODCALLTYPE *SetIsHyperlinkTarget )(
            __RPC__in IXpsOMGlyphs * This,
                       BOOL isHyperlink);
        HRESULT ( STDMETHODCALLTYPE *GetHyperlinkNavigateUri )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__deref_out_opt IUri **hyperlinkUri);
        HRESULT ( STDMETHODCALLTYPE *SetHyperlinkNavigateUri )(
            __RPC__in IXpsOMGlyphs * This,
                       __RPC__in_opt IUri *hyperlinkUri);
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )(
            __RPC__in IXpsOMGlyphs * This,
                                        __RPC__deref_out_opt_string LPWSTR *language);
        HRESULT ( STDMETHODCALLTYPE *SetLanguage )(
            __RPC__in IXpsOMGlyphs * This,
                               __RPC__in_string LPCWSTR language);
        HRESULT ( STDMETHODCALLTYPE *GetUnicodeString )(
            __RPC__in IXpsOMGlyphs * This,
                                        __RPC__deref_out_opt_string LPWSTR *unicodeString);
        HRESULT ( STDMETHODCALLTYPE *GetGlyphIndexCount )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__out UINT32 *indexCount);
        HRESULT ( STDMETHODCALLTYPE *GetGlyphIndices )(
            __RPC__in IXpsOMGlyphs * This,
                            __RPC__inout UINT32 *indexCount,
                            __RPC__inout XPS_GLYPH_INDEX *glyphIndices);
        HRESULT ( STDMETHODCALLTYPE *GetGlyphMappingCount )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__out UINT32 *glyphMappingCount);
        HRESULT ( STDMETHODCALLTYPE *GetGlyphMappings )(
            __RPC__in IXpsOMGlyphs * This,
                            __RPC__inout UINT32 *glyphMappingCount,
                            __RPC__inout XPS_GLYPH_MAPPING *glyphMappings);
        HRESULT ( STDMETHODCALLTYPE *GetProhibitedCaretStopCount )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__out UINT32 *prohibitedCaretStopCount);
        HRESULT ( STDMETHODCALLTYPE *GetProhibitedCaretStops )(
            __RPC__in IXpsOMGlyphs * This,
                            __RPC__inout UINT32 *prohibitedCaretStopCount,
                        __RPC__out UINT32 *prohibitedCaretStops);
        HRESULT ( STDMETHODCALLTYPE *GetBidiLevel )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__out UINT32 *bidiLevel);
        HRESULT ( STDMETHODCALLTYPE *GetIsSideways )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__out BOOL *isSideways);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceFontName )(
            __RPC__in IXpsOMGlyphs * This,
                                        __RPC__deref_out_opt_string LPWSTR *deviceFontName);
        HRESULT ( STDMETHODCALLTYPE *GetStyleSimulations )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__out XPS_STYLE_SIMULATION *styleSimulations);
        HRESULT ( STDMETHODCALLTYPE *SetStyleSimulations )(
            __RPC__in IXpsOMGlyphs * This,
                       XPS_STYLE_SIMULATION styleSimulations);
        HRESULT ( STDMETHODCALLTYPE *GetOrigin )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__out XPS_POINT *origin);
        HRESULT ( STDMETHODCALLTYPE *SetOrigin )(
            __RPC__in IXpsOMGlyphs * This,
                       __RPC__in const XPS_POINT *origin);
        HRESULT ( STDMETHODCALLTYPE *GetFontRenderingEmSize )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__out FLOAT *fontRenderingEmSize);
        HRESULT ( STDMETHODCALLTYPE *SetFontRenderingEmSize )(
            __RPC__in IXpsOMGlyphs * This,
                       FLOAT fontRenderingEmSize);
        HRESULT ( STDMETHODCALLTYPE *GetFontResource )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__deref_out_opt IXpsOMFontResource **fontResource);
        HRESULT ( STDMETHODCALLTYPE *SetFontResource )(
            __RPC__in IXpsOMGlyphs * This,
                       __RPC__in_opt IXpsOMFontResource *fontResource);
        HRESULT ( STDMETHODCALLTYPE *GetFontFaceIndex )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__out SHORT *fontFaceIndex);
        HRESULT ( STDMETHODCALLTYPE *SetFontFaceIndex )(
            __RPC__in IXpsOMGlyphs * This,
                       SHORT fontFaceIndex);
        HRESULT ( STDMETHODCALLTYPE *GetFillBrush )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__deref_out_opt IXpsOMBrush **fillBrush);
        HRESULT ( STDMETHODCALLTYPE *GetFillBrushLocal )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__deref_out_opt IXpsOMBrush **fillBrush);
        HRESULT ( STDMETHODCALLTYPE *SetFillBrushLocal )(
            __RPC__in IXpsOMGlyphs * This,
                       __RPC__in_opt IXpsOMBrush *fillBrush);
        HRESULT ( STDMETHODCALLTYPE *GetFillBrushLookup )(
            __RPC__in IXpsOMGlyphs * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetFillBrushLookup )(
            __RPC__in IXpsOMGlyphs * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetGlyphsEditor )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__deref_out_opt IXpsOMGlyphsEditor **editor);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IXpsOMGlyphs * This,
                                __RPC__deref_out_opt IXpsOMGlyphs **glyphs);
        END_INTERFACE
    } IXpsOMGlyphsVtbl;
    interface IXpsOMGlyphs
    {
        CONST_VTBL struct IXpsOMGlyphsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetType(This,type) )
    ( (This)->lpVtbl -> GetTransform(This,matrixTransform) )
    ( (This)->lpVtbl -> GetTransformLocal(This,matrixTransform) )
    ( (This)->lpVtbl -> SetTransformLocal(This,matrixTransform) )
    ( (This)->lpVtbl -> GetTransformLookup(This,key) )
    ( (This)->lpVtbl -> SetTransformLookup(This,key) )
    ( (This)->lpVtbl -> GetClipGeometry(This,clipGeometry) )
    ( (This)->lpVtbl -> GetClipGeometryLocal(This,clipGeometry) )
    ( (This)->lpVtbl -> SetClipGeometryLocal(This,clipGeometry) )
    ( (This)->lpVtbl -> GetClipGeometryLookup(This,key) )
    ( (This)->lpVtbl -> SetClipGeometryLookup(This,key) )
    ( (This)->lpVtbl -> GetOpacity(This,opacity) )
    ( (This)->lpVtbl -> SetOpacity(This,opacity) )
    ( (This)->lpVtbl -> GetOpacityMaskBrush(This,opacityMaskBrush) )
    ( (This)->lpVtbl -> GetOpacityMaskBrushLocal(This,opacityMaskBrush) )
    ( (This)->lpVtbl -> SetOpacityMaskBrushLocal(This,opacityMaskBrush) )
    ( (This)->lpVtbl -> GetOpacityMaskBrushLookup(This,key) )
    ( (This)->lpVtbl -> SetOpacityMaskBrushLookup(This,key) )
    ( (This)->lpVtbl -> GetName(This,name) )
    ( (This)->lpVtbl -> SetName(This,name) )
    ( (This)->lpVtbl -> GetIsHyperlinkTarget(This,isHyperlink) )
    ( (This)->lpVtbl -> SetIsHyperlinkTarget(This,isHyperlink) )
    ( (This)->lpVtbl -> GetHyperlinkNavigateUri(This,hyperlinkUri) )
    ( (This)->lpVtbl -> SetHyperlinkNavigateUri(This,hyperlinkUri) )
    ( (This)->lpVtbl -> GetLanguage(This,language) )
    ( (This)->lpVtbl -> SetLanguage(This,language) )
    ( (This)->lpVtbl -> GetUnicodeString(This,unicodeString) )
    ( (This)->lpVtbl -> GetGlyphIndexCount(This,indexCount) )
    ( (This)->lpVtbl -> GetGlyphIndices(This,indexCount,glyphIndices) )
    ( (This)->lpVtbl -> GetGlyphMappingCount(This,glyphMappingCount) )
    ( (This)->lpVtbl -> GetGlyphMappings(This,glyphMappingCount,glyphMappings) )
    ( (This)->lpVtbl -> GetProhibitedCaretStopCount(This,prohibitedCaretStopCount) )
    ( (This)->lpVtbl -> GetProhibitedCaretStops(This,prohibitedCaretStopCount,prohibitedCaretStops) )
    ( (This)->lpVtbl -> GetBidiLevel(This,bidiLevel) )
    ( (This)->lpVtbl -> GetIsSideways(This,isSideways) )
    ( (This)->lpVtbl -> GetDeviceFontName(This,deviceFontName) )
    ( (This)->lpVtbl -> GetStyleSimulations(This,styleSimulations) )
    ( (This)->lpVtbl -> SetStyleSimulations(This,styleSimulations) )
    ( (This)->lpVtbl -> GetOrigin(This,origin) )
    ( (This)->lpVtbl -> SetOrigin(This,origin) )
    ( (This)->lpVtbl -> GetFontRenderingEmSize(This,fontRenderingEmSize) )
    ( (This)->lpVtbl -> SetFontRenderingEmSize(This,fontRenderingEmSize) )
    ( (This)->lpVtbl -> GetFontResource(This,fontResource) )
    ( (This)->lpVtbl -> SetFontResource(This,fontResource) )
    ( (This)->lpVtbl -> GetFontFaceIndex(This,fontFaceIndex) )
    ( (This)->lpVtbl -> SetFontFaceIndex(This,fontFaceIndex) )
    ( (This)->lpVtbl -> GetFillBrush(This,fillBrush) )
    ( (This)->lpVtbl -> GetFillBrushLocal(This,fillBrush) )
    ( (This)->lpVtbl -> SetFillBrushLocal(This,fillBrush) )
    ( (This)->lpVtbl -> GetFillBrushLookup(This,key) )
    ( (This)->lpVtbl -> SetFillBrushLookup(This,key) )
    ( (This)->lpVtbl -> GetGlyphsEditor(This,editor) )
    ( (This)->lpVtbl -> Clone(This,glyphs) )
EXTERN_C const IID IID_IXpsOMDashCollection;
    typedef struct IXpsOMDashCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMDashCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMDashCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMDashCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IXpsOMDashCollection * This,
                                __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IXpsOMDashCollection * This,
                       UINT32 index,
                                __RPC__out XPS_DASH *dash);
        HRESULT ( STDMETHODCALLTYPE *InsertAt )(
            __RPC__in IXpsOMDashCollection * This,
                       UINT32 index,
                       __RPC__in const XPS_DASH *dash);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IXpsOMDashCollection * This,
                       UINT32 index);
        HRESULT ( STDMETHODCALLTYPE *SetAt )(
            __RPC__in IXpsOMDashCollection * This,
                       UINT32 index,
                       __RPC__in const XPS_DASH *dash);
        HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in IXpsOMDashCollection * This,
                       __RPC__in const XPS_DASH *dash);
        END_INTERFACE
    } IXpsOMDashCollectionVtbl;
    interface IXpsOMDashCollection
    {
        CONST_VTBL struct IXpsOMDashCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetAt(This,index,dash) )
    ( (This)->lpVtbl -> InsertAt(This,index,dash) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> SetAt(This,index,dash) )
    ( (This)->lpVtbl -> Append(This,dash) )
EXTERN_C const IID IID_IXpsOMMatrixTransform;
    typedef struct IXpsOMMatrixTransformVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMMatrixTransform * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMMatrixTransform * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMMatrixTransform * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMMatrixTransform * This,
                                __RPC__deref_out_opt IUnknown **owner);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IXpsOMMatrixTransform * This,
                                __RPC__out XPS_OBJECT_TYPE *type);
        HRESULT ( STDMETHODCALLTYPE *GetMatrix )(
            __RPC__in IXpsOMMatrixTransform * This,
                                __RPC__out XPS_MATRIX *matrix);
        HRESULT ( STDMETHODCALLTYPE *SetMatrix )(
            __RPC__in IXpsOMMatrixTransform * This,
                       __RPC__in const XPS_MATRIX *matrix);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IXpsOMMatrixTransform * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **matrixTransform);
        END_INTERFACE
    } IXpsOMMatrixTransformVtbl;
    interface IXpsOMMatrixTransform
    {
        CONST_VTBL struct IXpsOMMatrixTransformVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetType(This,type) )
    ( (This)->lpVtbl -> GetMatrix(This,matrix) )
    ( (This)->lpVtbl -> SetMatrix(This,matrix) )
    ( (This)->lpVtbl -> Clone(This,matrixTransform) )
EXTERN_C const IID IID_IXpsOMGeometry;
    typedef struct IXpsOMGeometryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMGeometry * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMGeometry * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMGeometry * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMGeometry * This,
                                __RPC__deref_out_opt IUnknown **owner);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IXpsOMGeometry * This,
                                __RPC__out XPS_OBJECT_TYPE *type);
        HRESULT ( STDMETHODCALLTYPE *GetFigures )(
            __RPC__in IXpsOMGeometry * This,
                                __RPC__deref_out_opt IXpsOMGeometryFigureCollection **figures);
        HRESULT ( STDMETHODCALLTYPE *GetFillRule )(
            __RPC__in IXpsOMGeometry * This,
                                __RPC__out XPS_FILL_RULE *fillRule);
        HRESULT ( STDMETHODCALLTYPE *SetFillRule )(
            __RPC__in IXpsOMGeometry * This,
                       XPS_FILL_RULE fillRule);
        HRESULT ( STDMETHODCALLTYPE *GetTransform )(
            __RPC__in IXpsOMGeometry * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **transform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLocal )(
            __RPC__in IXpsOMGeometry * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **transform);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLocal )(
            __RPC__in IXpsOMGeometry * This,
                       __RPC__in_opt IXpsOMMatrixTransform *transform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLookup )(
            __RPC__in IXpsOMGeometry * This,
                                        __RPC__deref_out_opt_string LPWSTR *lookup);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLookup )(
            __RPC__in IXpsOMGeometry * This,
                               __RPC__in_string LPCWSTR lookup);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IXpsOMGeometry * This,
                                __RPC__deref_out_opt IXpsOMGeometry **geometry);
        END_INTERFACE
    } IXpsOMGeometryVtbl;
    interface IXpsOMGeometry
    {
        CONST_VTBL struct IXpsOMGeometryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetType(This,type) )
    ( (This)->lpVtbl -> GetFigures(This,figures) )
    ( (This)->lpVtbl -> GetFillRule(This,fillRule) )
    ( (This)->lpVtbl -> SetFillRule(This,fillRule) )
    ( (This)->lpVtbl -> GetTransform(This,transform) )
    ( (This)->lpVtbl -> GetTransformLocal(This,transform) )
    ( (This)->lpVtbl -> SetTransformLocal(This,transform) )
    ( (This)->lpVtbl -> GetTransformLookup(This,lookup) )
    ( (This)->lpVtbl -> SetTransformLookup(This,lookup) )
    ( (This)->lpVtbl -> Clone(This,geometry) )
EXTERN_C const IID IID_IXpsOMGeometryFigure;
    typedef struct IXpsOMGeometryFigureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMGeometryFigure * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMGeometryFigure * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMGeometryFigure * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMGeometryFigure * This,
                                __RPC__deref_out_opt IXpsOMGeometry **owner);
        HRESULT ( STDMETHODCALLTYPE *GetSegmentData )(
            __RPC__in IXpsOMGeometryFigure * This,
                            __RPC__inout UINT32 *dataCount,
                            __RPC__inout FLOAT *segmentData);
        HRESULT ( STDMETHODCALLTYPE *GetSegmentTypes )(
            __RPC__in IXpsOMGeometryFigure * This,
                            __RPC__inout UINT32 *segmentCount,
                            __RPC__inout XPS_SEGMENT_TYPE *segmentTypes);
        HRESULT ( STDMETHODCALLTYPE *GetSegmentStrokes )(
            __RPC__in IXpsOMGeometryFigure * This,
                            __RPC__inout UINT32 *segmentCount,
                            __RPC__inout BOOL *segmentStrokes);
        HRESULT ( STDMETHODCALLTYPE *SetSegments )(
            __RPC__in IXpsOMGeometryFigure * This,
                       UINT32 segmentCount,
                       UINT32 segmentDataCount,
                       __RPC__in const XPS_SEGMENT_TYPE *segmentTypes,
                       __RPC__in const FLOAT *segmentData,
                       __RPC__in const BOOL *segmentStrokes);
        HRESULT ( STDMETHODCALLTYPE *GetStartPoint )(
            __RPC__in IXpsOMGeometryFigure * This,
                                __RPC__out XPS_POINT *startPoint);
        HRESULT ( STDMETHODCALLTYPE *SetStartPoint )(
            __RPC__in IXpsOMGeometryFigure * This,
                       __RPC__in const XPS_POINT *startPoint);
        HRESULT ( STDMETHODCALLTYPE *GetIsClosed )(
            __RPC__in IXpsOMGeometryFigure * This,
                                __RPC__out BOOL *isClosed);
        HRESULT ( STDMETHODCALLTYPE *SetIsClosed )(
            __RPC__in IXpsOMGeometryFigure * This,
                       BOOL isClosed);
        HRESULT ( STDMETHODCALLTYPE *GetIsFilled )(
            __RPC__in IXpsOMGeometryFigure * This,
                                __RPC__out BOOL *isFilled);
        HRESULT ( STDMETHODCALLTYPE *SetIsFilled )(
            __RPC__in IXpsOMGeometryFigure * This,
                       BOOL isFilled);
        HRESULT ( STDMETHODCALLTYPE *GetSegmentCount )(
            __RPC__in IXpsOMGeometryFigure * This,
                                __RPC__out UINT32 *segmentCount);
        HRESULT ( STDMETHODCALLTYPE *GetSegmentDataCount )(
            __RPC__in IXpsOMGeometryFigure * This,
                                __RPC__out UINT32 *segmentDataCount);
        HRESULT ( STDMETHODCALLTYPE *GetSegmentStrokePattern )(
            __RPC__in IXpsOMGeometryFigure * This,
                                __RPC__out XPS_SEGMENT_STROKE_PATTERN *segmentStrokePattern);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IXpsOMGeometryFigure * This,
                                __RPC__deref_out_opt IXpsOMGeometryFigure **geometryFigure);
        END_INTERFACE
    } IXpsOMGeometryFigureVtbl;
    interface IXpsOMGeometryFigure
    {
        CONST_VTBL struct IXpsOMGeometryFigureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetSegmentData(This,dataCount,segmentData) )
    ( (This)->lpVtbl -> GetSegmentTypes(This,segmentCount,segmentTypes) )
    ( (This)->lpVtbl -> GetSegmentStrokes(This,segmentCount,segmentStrokes) )
    ( (This)->lpVtbl -> SetSegments(This,segmentCount,segmentDataCount,segmentTypes,segmentData,segmentStrokes) )
    ( (This)->lpVtbl -> GetStartPoint(This,startPoint) )
    ( (This)->lpVtbl -> SetStartPoint(This,startPoint) )
    ( (This)->lpVtbl -> GetIsClosed(This,isClosed) )
    ( (This)->lpVtbl -> SetIsClosed(This,isClosed) )
    ( (This)->lpVtbl -> GetIsFilled(This,isFilled) )
    ( (This)->lpVtbl -> SetIsFilled(This,isFilled) )
    ( (This)->lpVtbl -> GetSegmentCount(This,segmentCount) )
    ( (This)->lpVtbl -> GetSegmentDataCount(This,segmentDataCount) )
    ( (This)->lpVtbl -> GetSegmentStrokePattern(This,segmentStrokePattern) )
    ( (This)->lpVtbl -> Clone(This,geometryFigure) )
EXTERN_C const IID IID_IXpsOMGeometryFigureCollection;
    typedef struct IXpsOMGeometryFigureCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMGeometryFigureCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMGeometryFigureCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMGeometryFigureCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IXpsOMGeometryFigureCollection * This,
                                __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IXpsOMGeometryFigureCollection * This,
                       UINT32 index,
                                __RPC__deref_out_opt IXpsOMGeometryFigure **geometryFigure);
        HRESULT ( STDMETHODCALLTYPE *InsertAt )(
            __RPC__in IXpsOMGeometryFigureCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMGeometryFigure *geometryFigure);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IXpsOMGeometryFigureCollection * This,
                       UINT32 index);
        HRESULT ( STDMETHODCALLTYPE *SetAt )(
            __RPC__in IXpsOMGeometryFigureCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMGeometryFigure *geometryFigure);
        HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in IXpsOMGeometryFigureCollection * This,
                       __RPC__in_opt IXpsOMGeometryFigure *geometryFigure);
        END_INTERFACE
    } IXpsOMGeometryFigureCollectionVtbl;
    interface IXpsOMGeometryFigureCollection
    {
        CONST_VTBL struct IXpsOMGeometryFigureCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetAt(This,index,geometryFigure) )
    ( (This)->lpVtbl -> InsertAt(This,index,geometryFigure) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> SetAt(This,index,geometryFigure) )
    ( (This)->lpVtbl -> Append(This,geometryFigure) )
EXTERN_C const IID IID_IXpsOMPath;
    typedef struct IXpsOMPathVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMPath * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMPath * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMPath * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMPath * This,
                                __RPC__deref_out_opt IUnknown **owner);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IXpsOMPath * This,
                                __RPC__out XPS_OBJECT_TYPE *type);
        HRESULT ( STDMETHODCALLTYPE *GetTransform )(
            __RPC__in IXpsOMPath * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **matrixTransform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLocal )(
            __RPC__in IXpsOMPath * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **matrixTransform);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLocal )(
            __RPC__in IXpsOMPath * This,
                       __RPC__in_opt IXpsOMMatrixTransform *matrixTransform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLookup )(
            __RPC__in IXpsOMPath * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLookup )(
            __RPC__in IXpsOMPath * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetClipGeometry )(
            __RPC__in IXpsOMPath * This,
                                __RPC__deref_out_opt IXpsOMGeometry **clipGeometry);
        HRESULT ( STDMETHODCALLTYPE *GetClipGeometryLocal )(
            __RPC__in IXpsOMPath * This,
                                __RPC__deref_out_opt IXpsOMGeometry **clipGeometry);
        HRESULT ( STDMETHODCALLTYPE *SetClipGeometryLocal )(
            __RPC__in IXpsOMPath * This,
                       __RPC__in_opt IXpsOMGeometry *clipGeometry);
        HRESULT ( STDMETHODCALLTYPE *GetClipGeometryLookup )(
            __RPC__in IXpsOMPath * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetClipGeometryLookup )(
            __RPC__in IXpsOMPath * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetOpacity )(
            __RPC__in IXpsOMPath * This,
                                __RPC__out FLOAT *opacity);
        HRESULT ( STDMETHODCALLTYPE *SetOpacity )(
            __RPC__in IXpsOMPath * This,
                       FLOAT opacity);
        HRESULT ( STDMETHODCALLTYPE *GetOpacityMaskBrush )(
            __RPC__in IXpsOMPath * This,
                                __RPC__deref_out_opt IXpsOMBrush **opacityMaskBrush);
        HRESULT ( STDMETHODCALLTYPE *GetOpacityMaskBrushLocal )(
            __RPC__in IXpsOMPath * This,
                                __RPC__deref_out_opt IXpsOMBrush **opacityMaskBrush);
        HRESULT ( STDMETHODCALLTYPE *SetOpacityMaskBrushLocal )(
            __RPC__in IXpsOMPath * This,
                       __RPC__in_opt IXpsOMBrush *opacityMaskBrush);
        HRESULT ( STDMETHODCALLTYPE *GetOpacityMaskBrushLookup )(
            __RPC__in IXpsOMPath * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetOpacityMaskBrushLookup )(
            __RPC__in IXpsOMPath * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IXpsOMPath * This,
                                        __RPC__deref_out_opt_string LPWSTR *name);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            __RPC__in IXpsOMPath * This,
                               __RPC__in_string LPCWSTR name);
        HRESULT ( STDMETHODCALLTYPE *GetIsHyperlinkTarget )(
            __RPC__in IXpsOMPath * This,
                                __RPC__out BOOL *isHyperlink);
        HRESULT ( STDMETHODCALLTYPE *SetIsHyperlinkTarget )(
            __RPC__in IXpsOMPath * This,
                       BOOL isHyperlink);
        HRESULT ( STDMETHODCALLTYPE *GetHyperlinkNavigateUri )(
            __RPC__in IXpsOMPath * This,
                                __RPC__deref_out_opt IUri **hyperlinkUri);
        HRESULT ( STDMETHODCALLTYPE *SetHyperlinkNavigateUri )(
            __RPC__in IXpsOMPath * This,
                       __RPC__in_opt IUri *hyperlinkUri);
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )(
            __RPC__in IXpsOMPath * This,
                                        __RPC__deref_out_opt_string LPWSTR *language);
        HRESULT ( STDMETHODCALLTYPE *SetLanguage )(
            __RPC__in IXpsOMPath * This,
                               __RPC__in_string LPCWSTR language);
        HRESULT ( STDMETHODCALLTYPE *GetGeometry )(
            __RPC__in IXpsOMPath * This,
                                __RPC__deref_out_opt IXpsOMGeometry **geometry);
        HRESULT ( STDMETHODCALLTYPE *GetGeometryLocal )(
            __RPC__in IXpsOMPath * This,
                                __RPC__deref_out_opt IXpsOMGeometry **geometry);
        HRESULT ( STDMETHODCALLTYPE *SetGeometryLocal )(
            __RPC__in IXpsOMPath * This,
                       __RPC__in_opt IXpsOMGeometry *geometry);
        HRESULT ( STDMETHODCALLTYPE *GetGeometryLookup )(
            __RPC__in IXpsOMPath * This,
                                        __RPC__deref_out_opt_string LPWSTR *lookup);
        HRESULT ( STDMETHODCALLTYPE *SetGeometryLookup )(
            __RPC__in IXpsOMPath * This,
                               __RPC__in_string LPCWSTR lookup);
        HRESULT ( STDMETHODCALLTYPE *GetAccessibilityShortDescription )(
            __RPC__in IXpsOMPath * This,
                                        __RPC__deref_out_opt_string LPWSTR *shortDescription);
        HRESULT ( STDMETHODCALLTYPE *SetAccessibilityShortDescription )(
            __RPC__in IXpsOMPath * This,
                               __RPC__in_string LPCWSTR shortDescription);
        HRESULT ( STDMETHODCALLTYPE *GetAccessibilityLongDescription )(
            __RPC__in IXpsOMPath * This,
                                        __RPC__deref_out_opt_string LPWSTR *longDescription);
        HRESULT ( STDMETHODCALLTYPE *SetAccessibilityLongDescription )(
            __RPC__in IXpsOMPath * This,
                               __RPC__in_string LPCWSTR longDescription);
        HRESULT ( STDMETHODCALLTYPE *GetSnapsToPixels )(
            __RPC__in IXpsOMPath * This,
                                __RPC__out BOOL *snapsToPixels);
        HRESULT ( STDMETHODCALLTYPE *SetSnapsToPixels )(
            __RPC__in IXpsOMPath * This,
                       BOOL snapsToPixels);
        HRESULT ( STDMETHODCALLTYPE *GetStrokeBrush )(
            __RPC__in IXpsOMPath * This,
                                __RPC__deref_out_opt IXpsOMBrush **brush);
        HRESULT ( STDMETHODCALLTYPE *GetStrokeBrushLocal )(
            __RPC__in IXpsOMPath * This,
                                __RPC__deref_out_opt IXpsOMBrush **brush);
        HRESULT ( STDMETHODCALLTYPE *SetStrokeBrushLocal )(
            __RPC__in IXpsOMPath * This,
                       __RPC__in_opt IXpsOMBrush *brush);
        HRESULT ( STDMETHODCALLTYPE *GetStrokeBrushLookup )(
            __RPC__in IXpsOMPath * This,
                                        __RPC__deref_out_opt_string LPWSTR *lookup);
        HRESULT ( STDMETHODCALLTYPE *SetStrokeBrushLookup )(
            __RPC__in IXpsOMPath * This,
                               __RPC__in_string LPCWSTR lookup);
        HRESULT ( STDMETHODCALLTYPE *GetStrokeDashes )(
            __RPC__in IXpsOMPath * This,
                                __RPC__deref_out_opt IXpsOMDashCollection **strokeDashes);
        HRESULT ( STDMETHODCALLTYPE *GetStrokeDashCap )(
            __RPC__in IXpsOMPath * This,
                                __RPC__out XPS_DASH_CAP *strokeDashCap);
        HRESULT ( STDMETHODCALLTYPE *SetStrokeDashCap )(
            __RPC__in IXpsOMPath * This,
                       XPS_DASH_CAP strokeDashCap);
        HRESULT ( STDMETHODCALLTYPE *GetStrokeDashOffset )(
            __RPC__in IXpsOMPath * This,
                                __RPC__out FLOAT *strokeDashOffset);
        HRESULT ( STDMETHODCALLTYPE *SetStrokeDashOffset )(
            __RPC__in IXpsOMPath * This,
                       FLOAT strokeDashOffset);
        HRESULT ( STDMETHODCALLTYPE *GetStrokeStartLineCap )(
            __RPC__in IXpsOMPath * This,
                                __RPC__out XPS_LINE_CAP *strokeStartLineCap);
        HRESULT ( STDMETHODCALLTYPE *SetStrokeStartLineCap )(
            __RPC__in IXpsOMPath * This,
                       XPS_LINE_CAP strokeStartLineCap);
        HRESULT ( STDMETHODCALLTYPE *GetStrokeEndLineCap )(
            __RPC__in IXpsOMPath * This,
                                __RPC__out XPS_LINE_CAP *strokeEndLineCap);
        HRESULT ( STDMETHODCALLTYPE *SetStrokeEndLineCap )(
            __RPC__in IXpsOMPath * This,
                       XPS_LINE_CAP strokeEndLineCap);
        HRESULT ( STDMETHODCALLTYPE *GetStrokeLineJoin )(
            __RPC__in IXpsOMPath * This,
                                __RPC__out XPS_LINE_JOIN *strokeLineJoin);
        HRESULT ( STDMETHODCALLTYPE *SetStrokeLineJoin )(
            __RPC__in IXpsOMPath * This,
                       XPS_LINE_JOIN strokeLineJoin);
        HRESULT ( STDMETHODCALLTYPE *GetStrokeMiterLimit )(
            __RPC__in IXpsOMPath * This,
                                __RPC__out FLOAT *strokeMiterLimit);
        HRESULT ( STDMETHODCALLTYPE *SetStrokeMiterLimit )(
            __RPC__in IXpsOMPath * This,
                       FLOAT strokeMiterLimit);
        HRESULT ( STDMETHODCALLTYPE *GetStrokeThickness )(
            __RPC__in IXpsOMPath * This,
                                __RPC__out FLOAT *strokeThickness);
        HRESULT ( STDMETHODCALLTYPE *SetStrokeThickness )(
            __RPC__in IXpsOMPath * This,
                       FLOAT strokeThickness);
        HRESULT ( STDMETHODCALLTYPE *GetFillBrush )(
            __RPC__in IXpsOMPath * This,
                                __RPC__deref_out_opt IXpsOMBrush **brush);
        HRESULT ( STDMETHODCALLTYPE *GetFillBrushLocal )(
            __RPC__in IXpsOMPath * This,
                                __RPC__deref_out_opt IXpsOMBrush **brush);
        HRESULT ( STDMETHODCALLTYPE *SetFillBrushLocal )(
            __RPC__in IXpsOMPath * This,
                       __RPC__in_opt IXpsOMBrush *brush);
        HRESULT ( STDMETHODCALLTYPE *GetFillBrushLookup )(
            __RPC__in IXpsOMPath * This,
                                        __RPC__deref_out_opt_string LPWSTR *lookup);
        HRESULT ( STDMETHODCALLTYPE *SetFillBrushLookup )(
            __RPC__in IXpsOMPath * This,
                               __RPC__in_string LPCWSTR lookup);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IXpsOMPath * This,
                                __RPC__deref_out_opt IXpsOMPath **path);
        END_INTERFACE
    } IXpsOMPathVtbl;
    interface IXpsOMPath
    {
        CONST_VTBL struct IXpsOMPathVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetType(This,type) )
    ( (This)->lpVtbl -> GetTransform(This,matrixTransform) )
    ( (This)->lpVtbl -> GetTransformLocal(This,matrixTransform) )
    ( (This)->lpVtbl -> SetTransformLocal(This,matrixTransform) )
    ( (This)->lpVtbl -> GetTransformLookup(This,key) )
    ( (This)->lpVtbl -> SetTransformLookup(This,key) )
    ( (This)->lpVtbl -> GetClipGeometry(This,clipGeometry) )
    ( (This)->lpVtbl -> GetClipGeometryLocal(This,clipGeometry) )
    ( (This)->lpVtbl -> SetClipGeometryLocal(This,clipGeometry) )
    ( (This)->lpVtbl -> GetClipGeometryLookup(This,key) )
    ( (This)->lpVtbl -> SetClipGeometryLookup(This,key) )
    ( (This)->lpVtbl -> GetOpacity(This,opacity) )
    ( (This)->lpVtbl -> SetOpacity(This,opacity) )
    ( (This)->lpVtbl -> GetOpacityMaskBrush(This,opacityMaskBrush) )
    ( (This)->lpVtbl -> GetOpacityMaskBrushLocal(This,opacityMaskBrush) )
    ( (This)->lpVtbl -> SetOpacityMaskBrushLocal(This,opacityMaskBrush) )
    ( (This)->lpVtbl -> GetOpacityMaskBrushLookup(This,key) )
    ( (This)->lpVtbl -> SetOpacityMaskBrushLookup(This,key) )
    ( (This)->lpVtbl -> GetName(This,name) )
    ( (This)->lpVtbl -> SetName(This,name) )
    ( (This)->lpVtbl -> GetIsHyperlinkTarget(This,isHyperlink) )
    ( (This)->lpVtbl -> SetIsHyperlinkTarget(This,isHyperlink) )
    ( (This)->lpVtbl -> GetHyperlinkNavigateUri(This,hyperlinkUri) )
    ( (This)->lpVtbl -> SetHyperlinkNavigateUri(This,hyperlinkUri) )
    ( (This)->lpVtbl -> GetLanguage(This,language) )
    ( (This)->lpVtbl -> SetLanguage(This,language) )
    ( (This)->lpVtbl -> GetGeometry(This,geometry) )
    ( (This)->lpVtbl -> GetGeometryLocal(This,geometry) )
    ( (This)->lpVtbl -> SetGeometryLocal(This,geometry) )
    ( (This)->lpVtbl -> GetGeometryLookup(This,lookup) )
    ( (This)->lpVtbl -> SetGeometryLookup(This,lookup) )
    ( (This)->lpVtbl -> GetAccessibilityShortDescription(This,shortDescription) )
    ( (This)->lpVtbl -> SetAccessibilityShortDescription(This,shortDescription) )
    ( (This)->lpVtbl -> GetAccessibilityLongDescription(This,longDescription) )
    ( (This)->lpVtbl -> SetAccessibilityLongDescription(This,longDescription) )
    ( (This)->lpVtbl -> GetSnapsToPixels(This,snapsToPixels) )
    ( (This)->lpVtbl -> SetSnapsToPixels(This,snapsToPixels) )
    ( (This)->lpVtbl -> GetStrokeBrush(This,brush) )
    ( (This)->lpVtbl -> GetStrokeBrushLocal(This,brush) )
    ( (This)->lpVtbl -> SetStrokeBrushLocal(This,brush) )
    ( (This)->lpVtbl -> GetStrokeBrushLookup(This,lookup) )
    ( (This)->lpVtbl -> SetStrokeBrushLookup(This,lookup) )
    ( (This)->lpVtbl -> GetStrokeDashes(This,strokeDashes) )
    ( (This)->lpVtbl -> GetStrokeDashCap(This,strokeDashCap) )
    ( (This)->lpVtbl -> SetStrokeDashCap(This,strokeDashCap) )
    ( (This)->lpVtbl -> GetStrokeDashOffset(This,strokeDashOffset) )
    ( (This)->lpVtbl -> SetStrokeDashOffset(This,strokeDashOffset) )
    ( (This)->lpVtbl -> GetStrokeStartLineCap(This,strokeStartLineCap) )
    ( (This)->lpVtbl -> SetStrokeStartLineCap(This,strokeStartLineCap) )
    ( (This)->lpVtbl -> GetStrokeEndLineCap(This,strokeEndLineCap) )
    ( (This)->lpVtbl -> SetStrokeEndLineCap(This,strokeEndLineCap) )
    ( (This)->lpVtbl -> GetStrokeLineJoin(This,strokeLineJoin) )
    ( (This)->lpVtbl -> SetStrokeLineJoin(This,strokeLineJoin) )
    ( (This)->lpVtbl -> GetStrokeMiterLimit(This,strokeMiterLimit) )
    ( (This)->lpVtbl -> SetStrokeMiterLimit(This,strokeMiterLimit) )
    ( (This)->lpVtbl -> GetStrokeThickness(This,strokeThickness) )
    ( (This)->lpVtbl -> SetStrokeThickness(This,strokeThickness) )
    ( (This)->lpVtbl -> GetFillBrush(This,brush) )
    ( (This)->lpVtbl -> GetFillBrushLocal(This,brush) )
    ( (This)->lpVtbl -> SetFillBrushLocal(This,brush) )
    ( (This)->lpVtbl -> GetFillBrushLookup(This,lookup) )
    ( (This)->lpVtbl -> SetFillBrushLookup(This,lookup) )
    ( (This)->lpVtbl -> Clone(This,path) )
EXTERN_C const IID IID_IXpsOMBrush;
    typedef struct IXpsOMBrushVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMBrush * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMBrush * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMBrush * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMBrush * This,
                                __RPC__deref_out_opt IUnknown **owner);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IXpsOMBrush * This,
                                __RPC__out XPS_OBJECT_TYPE *type);
        HRESULT ( STDMETHODCALLTYPE *GetOpacity )(
            __RPC__in IXpsOMBrush * This,
                                __RPC__out FLOAT *opacity);
        HRESULT ( STDMETHODCALLTYPE *SetOpacity )(
            __RPC__in IXpsOMBrush * This,
                       FLOAT opacity);
        END_INTERFACE
    } IXpsOMBrushVtbl;
    interface IXpsOMBrush
    {
        CONST_VTBL struct IXpsOMBrushVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetType(This,type) )
    ( (This)->lpVtbl -> GetOpacity(This,opacity) )
    ( (This)->lpVtbl -> SetOpacity(This,opacity) )
EXTERN_C const IID IID_IXpsOMGradientStopCollection;
    typedef struct IXpsOMGradientStopCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMGradientStopCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMGradientStopCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMGradientStopCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IXpsOMGradientStopCollection * This,
                                __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IXpsOMGradientStopCollection * This,
                       UINT32 index,
                                __RPC__deref_out_opt IXpsOMGradientStop **stop);
        HRESULT ( STDMETHODCALLTYPE *InsertAt )(
            __RPC__in IXpsOMGradientStopCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMGradientStop *stop);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IXpsOMGradientStopCollection * This,
                       UINT32 index);
        HRESULT ( STDMETHODCALLTYPE *SetAt )(
            __RPC__in IXpsOMGradientStopCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMGradientStop *stop);
        HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in IXpsOMGradientStopCollection * This,
                       __RPC__in_opt IXpsOMGradientStop *stop);
        END_INTERFACE
    } IXpsOMGradientStopCollectionVtbl;
    interface IXpsOMGradientStopCollection
    {
        CONST_VTBL struct IXpsOMGradientStopCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetAt(This,index,stop) )
    ( (This)->lpVtbl -> InsertAt(This,index,stop) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> SetAt(This,index,stop) )
    ( (This)->lpVtbl -> Append(This,stop) )
EXTERN_C const IID IID_IXpsOMSolidColorBrush;
    typedef struct IXpsOMSolidColorBrushVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMSolidColorBrush * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMSolidColorBrush * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMSolidColorBrush * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMSolidColorBrush * This,
                                __RPC__deref_out_opt IUnknown **owner);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IXpsOMSolidColorBrush * This,
                                __RPC__out XPS_OBJECT_TYPE *type);
        HRESULT ( STDMETHODCALLTYPE *GetOpacity )(
            __RPC__in IXpsOMSolidColorBrush * This,
                                __RPC__out FLOAT *opacity);
        HRESULT ( STDMETHODCALLTYPE *SetOpacity )(
            __RPC__in IXpsOMSolidColorBrush * This,
                       FLOAT opacity);
        HRESULT ( STDMETHODCALLTYPE *GetColor )(
            __RPC__in IXpsOMSolidColorBrush * This,
                        __RPC__out XPS_COLOR *color,
                                __RPC__deref_out_opt IXpsOMColorProfileResource **colorProfile);
        HRESULT ( STDMETHODCALLTYPE *SetColor )(
            __RPC__in IXpsOMSolidColorBrush * This,
                       __RPC__in const XPS_COLOR *color,
                       __RPC__in_opt IXpsOMColorProfileResource *colorProfile);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IXpsOMSolidColorBrush * This,
                                __RPC__deref_out_opt IXpsOMSolidColorBrush **solidColorBrush);
        END_INTERFACE
    } IXpsOMSolidColorBrushVtbl;
    interface IXpsOMSolidColorBrush
    {
        CONST_VTBL struct IXpsOMSolidColorBrushVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetType(This,type) )
    ( (This)->lpVtbl -> GetOpacity(This,opacity) )
    ( (This)->lpVtbl -> SetOpacity(This,opacity) )
    ( (This)->lpVtbl -> GetColor(This,color,colorProfile) )
    ( (This)->lpVtbl -> SetColor(This,color,colorProfile) )
    ( (This)->lpVtbl -> Clone(This,solidColorBrush) )
EXTERN_C const IID IID_IXpsOMTileBrush;
    typedef struct IXpsOMTileBrushVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMTileBrush * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMTileBrush * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMTileBrush * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMTileBrush * This,
                                __RPC__deref_out_opt IUnknown **owner);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IXpsOMTileBrush * This,
                                __RPC__out XPS_OBJECT_TYPE *type);
        HRESULT ( STDMETHODCALLTYPE *GetOpacity )(
            __RPC__in IXpsOMTileBrush * This,
                                __RPC__out FLOAT *opacity);
        HRESULT ( STDMETHODCALLTYPE *SetOpacity )(
            __RPC__in IXpsOMTileBrush * This,
                       FLOAT opacity);
        HRESULT ( STDMETHODCALLTYPE *GetTransform )(
            __RPC__in IXpsOMTileBrush * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **transform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLocal )(
            __RPC__in IXpsOMTileBrush * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **transform);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLocal )(
            __RPC__in IXpsOMTileBrush * This,
                       __RPC__in_opt IXpsOMMatrixTransform *transform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLookup )(
            __RPC__in IXpsOMTileBrush * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLookup )(
            __RPC__in IXpsOMTileBrush * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetViewbox )(
            __RPC__in IXpsOMTileBrush * This,
                                __RPC__out XPS_RECT *viewbox);
        HRESULT ( STDMETHODCALLTYPE *SetViewbox )(
            __RPC__in IXpsOMTileBrush * This,
                       __RPC__in const XPS_RECT *viewbox);
        HRESULT ( STDMETHODCALLTYPE *GetViewport )(
            __RPC__in IXpsOMTileBrush * This,
                                __RPC__out XPS_RECT *viewport);
        HRESULT ( STDMETHODCALLTYPE *SetViewport )(
            __RPC__in IXpsOMTileBrush * This,
                       __RPC__in const XPS_RECT *viewport);
        HRESULT ( STDMETHODCALLTYPE *GetTileMode )(
            __RPC__in IXpsOMTileBrush * This,
                                __RPC__out XPS_TILE_MODE *tileMode);
        HRESULT ( STDMETHODCALLTYPE *SetTileMode )(
            __RPC__in IXpsOMTileBrush * This,
                       XPS_TILE_MODE tileMode);
        END_INTERFACE
    } IXpsOMTileBrushVtbl;
    interface IXpsOMTileBrush
    {
        CONST_VTBL struct IXpsOMTileBrushVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetType(This,type) )
    ( (This)->lpVtbl -> GetOpacity(This,opacity) )
    ( (This)->lpVtbl -> SetOpacity(This,opacity) )
    ( (This)->lpVtbl -> GetTransform(This,transform) )
    ( (This)->lpVtbl -> GetTransformLocal(This,transform) )
    ( (This)->lpVtbl -> SetTransformLocal(This,transform) )
    ( (This)->lpVtbl -> GetTransformLookup(This,key) )
    ( (This)->lpVtbl -> SetTransformLookup(This,key) )
    ( (This)->lpVtbl -> GetViewbox(This,viewbox) )
    ( (This)->lpVtbl -> SetViewbox(This,viewbox) )
    ( (This)->lpVtbl -> GetViewport(This,viewport) )
    ( (This)->lpVtbl -> SetViewport(This,viewport) )
    ( (This)->lpVtbl -> GetTileMode(This,tileMode) )
    ( (This)->lpVtbl -> SetTileMode(This,tileMode) )
EXTERN_C const IID IID_IXpsOMVisualBrush;
    typedef struct IXpsOMVisualBrushVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMVisualBrush * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMVisualBrush * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMVisualBrush * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMVisualBrush * This,
                                __RPC__deref_out_opt IUnknown **owner);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IXpsOMVisualBrush * This,
                                __RPC__out XPS_OBJECT_TYPE *type);
        HRESULT ( STDMETHODCALLTYPE *GetOpacity )(
            __RPC__in IXpsOMVisualBrush * This,
                                __RPC__out FLOAT *opacity);
        HRESULT ( STDMETHODCALLTYPE *SetOpacity )(
            __RPC__in IXpsOMVisualBrush * This,
                       FLOAT opacity);
        HRESULT ( STDMETHODCALLTYPE *GetTransform )(
            __RPC__in IXpsOMVisualBrush * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **transform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLocal )(
            __RPC__in IXpsOMVisualBrush * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **transform);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLocal )(
            __RPC__in IXpsOMVisualBrush * This,
                       __RPC__in_opt IXpsOMMatrixTransform *transform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLookup )(
            __RPC__in IXpsOMVisualBrush * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLookup )(
            __RPC__in IXpsOMVisualBrush * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetViewbox )(
            __RPC__in IXpsOMVisualBrush * This,
                                __RPC__out XPS_RECT *viewbox);
        HRESULT ( STDMETHODCALLTYPE *SetViewbox )(
            __RPC__in IXpsOMVisualBrush * This,
                       __RPC__in const XPS_RECT *viewbox);
        HRESULT ( STDMETHODCALLTYPE *GetViewport )(
            __RPC__in IXpsOMVisualBrush * This,
                                __RPC__out XPS_RECT *viewport);
        HRESULT ( STDMETHODCALLTYPE *SetViewport )(
            __RPC__in IXpsOMVisualBrush * This,
                       __RPC__in const XPS_RECT *viewport);
        HRESULT ( STDMETHODCALLTYPE *GetTileMode )(
            __RPC__in IXpsOMVisualBrush * This,
                                __RPC__out XPS_TILE_MODE *tileMode);
        HRESULT ( STDMETHODCALLTYPE *SetTileMode )(
            __RPC__in IXpsOMVisualBrush * This,
                       XPS_TILE_MODE tileMode);
        HRESULT ( STDMETHODCALLTYPE *GetVisual )(
            __RPC__in IXpsOMVisualBrush * This,
                                __RPC__deref_out_opt IXpsOMVisual **visual);
        HRESULT ( STDMETHODCALLTYPE *GetVisualLocal )(
            __RPC__in IXpsOMVisualBrush * This,
                                __RPC__deref_out_opt IXpsOMVisual **visual);
        HRESULT ( STDMETHODCALLTYPE *SetVisualLocal )(
            __RPC__in IXpsOMVisualBrush * This,
                       __RPC__in_opt IXpsOMVisual *visual);
        HRESULT ( STDMETHODCALLTYPE *GetVisualLookup )(
            __RPC__in IXpsOMVisualBrush * This,
                                        __RPC__deref_out_opt_string LPWSTR *lookup);
        HRESULT ( STDMETHODCALLTYPE *SetVisualLookup )(
            __RPC__in IXpsOMVisualBrush * This,
                               __RPC__in_string LPCWSTR lookup);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IXpsOMVisualBrush * This,
                                __RPC__deref_out_opt IXpsOMVisualBrush **visualBrush);
        END_INTERFACE
    } IXpsOMVisualBrushVtbl;
    interface IXpsOMVisualBrush
    {
        CONST_VTBL struct IXpsOMVisualBrushVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetType(This,type) )
    ( (This)->lpVtbl -> GetOpacity(This,opacity) )
    ( (This)->lpVtbl -> SetOpacity(This,opacity) )
    ( (This)->lpVtbl -> GetTransform(This,transform) )
    ( (This)->lpVtbl -> GetTransformLocal(This,transform) )
    ( (This)->lpVtbl -> SetTransformLocal(This,transform) )
    ( (This)->lpVtbl -> GetTransformLookup(This,key) )
    ( (This)->lpVtbl -> SetTransformLookup(This,key) )
    ( (This)->lpVtbl -> GetViewbox(This,viewbox) )
    ( (This)->lpVtbl -> SetViewbox(This,viewbox) )
    ( (This)->lpVtbl -> GetViewport(This,viewport) )
    ( (This)->lpVtbl -> SetViewport(This,viewport) )
    ( (This)->lpVtbl -> GetTileMode(This,tileMode) )
    ( (This)->lpVtbl -> SetTileMode(This,tileMode) )
    ( (This)->lpVtbl -> GetVisual(This,visual) )
    ( (This)->lpVtbl -> GetVisualLocal(This,visual) )
    ( (This)->lpVtbl -> SetVisualLocal(This,visual) )
    ( (This)->lpVtbl -> GetVisualLookup(This,lookup) )
    ( (This)->lpVtbl -> SetVisualLookup(This,lookup) )
    ( (This)->lpVtbl -> Clone(This,visualBrush) )
EXTERN_C const IID IID_IXpsOMImageBrush;
    typedef struct IXpsOMImageBrushVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMImageBrush * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMImageBrush * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMImageBrush * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMImageBrush * This,
                                __RPC__deref_out_opt IUnknown **owner);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IXpsOMImageBrush * This,
                                __RPC__out XPS_OBJECT_TYPE *type);
        HRESULT ( STDMETHODCALLTYPE *GetOpacity )(
            __RPC__in IXpsOMImageBrush * This,
                                __RPC__out FLOAT *opacity);
        HRESULT ( STDMETHODCALLTYPE *SetOpacity )(
            __RPC__in IXpsOMImageBrush * This,
                       FLOAT opacity);
        HRESULT ( STDMETHODCALLTYPE *GetTransform )(
            __RPC__in IXpsOMImageBrush * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **transform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLocal )(
            __RPC__in IXpsOMImageBrush * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **transform);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLocal )(
            __RPC__in IXpsOMImageBrush * This,
                       __RPC__in_opt IXpsOMMatrixTransform *transform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLookup )(
            __RPC__in IXpsOMImageBrush * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLookup )(
            __RPC__in IXpsOMImageBrush * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetViewbox )(
            __RPC__in IXpsOMImageBrush * This,
                                __RPC__out XPS_RECT *viewbox);
        HRESULT ( STDMETHODCALLTYPE *SetViewbox )(
            __RPC__in IXpsOMImageBrush * This,
                       __RPC__in const XPS_RECT *viewbox);
        HRESULT ( STDMETHODCALLTYPE *GetViewport )(
            __RPC__in IXpsOMImageBrush * This,
                                __RPC__out XPS_RECT *viewport);
        HRESULT ( STDMETHODCALLTYPE *SetViewport )(
            __RPC__in IXpsOMImageBrush * This,
                       __RPC__in const XPS_RECT *viewport);
        HRESULT ( STDMETHODCALLTYPE *GetTileMode )(
            __RPC__in IXpsOMImageBrush * This,
                                __RPC__out XPS_TILE_MODE *tileMode);
        HRESULT ( STDMETHODCALLTYPE *SetTileMode )(
            __RPC__in IXpsOMImageBrush * This,
                       XPS_TILE_MODE tileMode);
        HRESULT ( STDMETHODCALLTYPE *GetImageResource )(
            __RPC__in IXpsOMImageBrush * This,
                                __RPC__deref_out_opt IXpsOMImageResource **imageResource);
        HRESULT ( STDMETHODCALLTYPE *SetImageResource )(
            __RPC__in IXpsOMImageBrush * This,
                       __RPC__in_opt IXpsOMImageResource *imageResource);
        HRESULT ( STDMETHODCALLTYPE *GetColorProfileResource )(
            __RPC__in IXpsOMImageBrush * This,
                                __RPC__deref_out_opt IXpsOMColorProfileResource **colorProfileResource);
        HRESULT ( STDMETHODCALLTYPE *SetColorProfileResource )(
            __RPC__in IXpsOMImageBrush * This,
                       __RPC__in_opt IXpsOMColorProfileResource *colorProfileResource);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IXpsOMImageBrush * This,
                                __RPC__deref_out_opt IXpsOMImageBrush **imageBrush);
        END_INTERFACE
    } IXpsOMImageBrushVtbl;
    interface IXpsOMImageBrush
    {
        CONST_VTBL struct IXpsOMImageBrushVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetType(This,type) )
    ( (This)->lpVtbl -> GetOpacity(This,opacity) )
    ( (This)->lpVtbl -> SetOpacity(This,opacity) )
    ( (This)->lpVtbl -> GetTransform(This,transform) )
    ( (This)->lpVtbl -> GetTransformLocal(This,transform) )
    ( (This)->lpVtbl -> SetTransformLocal(This,transform) )
    ( (This)->lpVtbl -> GetTransformLookup(This,key) )
    ( (This)->lpVtbl -> SetTransformLookup(This,key) )
    ( (This)->lpVtbl -> GetViewbox(This,viewbox) )
    ( (This)->lpVtbl -> SetViewbox(This,viewbox) )
    ( (This)->lpVtbl -> GetViewport(This,viewport) )
    ( (This)->lpVtbl -> SetViewport(This,viewport) )
    ( (This)->lpVtbl -> GetTileMode(This,tileMode) )
    ( (This)->lpVtbl -> SetTileMode(This,tileMode) )
    ( (This)->lpVtbl -> GetImageResource(This,imageResource) )
    ( (This)->lpVtbl -> SetImageResource(This,imageResource) )
    ( (This)->lpVtbl -> GetColorProfileResource(This,colorProfileResource) )
    ( (This)->lpVtbl -> SetColorProfileResource(This,colorProfileResource) )
    ( (This)->lpVtbl -> Clone(This,imageBrush) )
EXTERN_C const IID IID_IXpsOMGradientStop;
    typedef struct IXpsOMGradientStopVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMGradientStop * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMGradientStop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMGradientStop * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMGradientStop * This,
                                __RPC__deref_out_opt IXpsOMGradientBrush **owner);
        HRESULT ( STDMETHODCALLTYPE *GetOffset )(
            __RPC__in IXpsOMGradientStop * This,
                                __RPC__out FLOAT *offset);
        HRESULT ( STDMETHODCALLTYPE *SetOffset )(
            __RPC__in IXpsOMGradientStop * This,
                       FLOAT offset);
        HRESULT ( STDMETHODCALLTYPE *GetColor )(
            __RPC__in IXpsOMGradientStop * This,
                        __RPC__out XPS_COLOR *color,
                                __RPC__deref_out_opt IXpsOMColorProfileResource **colorProfile);
        HRESULT ( STDMETHODCALLTYPE *SetColor )(
            __RPC__in IXpsOMGradientStop * This,
                       __RPC__in const XPS_COLOR *color,
                       __RPC__in_opt IXpsOMColorProfileResource *colorProfile);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IXpsOMGradientStop * This,
                                __RPC__deref_out_opt IXpsOMGradientStop **gradientStop);
        END_INTERFACE
    } IXpsOMGradientStopVtbl;
    interface IXpsOMGradientStop
    {
        CONST_VTBL struct IXpsOMGradientStopVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetOffset(This,offset) )
    ( (This)->lpVtbl -> SetOffset(This,offset) )
    ( (This)->lpVtbl -> GetColor(This,color,colorProfile) )
    ( (This)->lpVtbl -> SetColor(This,color,colorProfile) )
    ( (This)->lpVtbl -> Clone(This,gradientStop) )
EXTERN_C const IID IID_IXpsOMGradientBrush;
    typedef struct IXpsOMGradientBrushVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMGradientBrush * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMGradientBrush * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMGradientBrush * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMGradientBrush * This,
                                __RPC__deref_out_opt IUnknown **owner);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IXpsOMGradientBrush * This,
                                __RPC__out XPS_OBJECT_TYPE *type);
        HRESULT ( STDMETHODCALLTYPE *GetOpacity )(
            __RPC__in IXpsOMGradientBrush * This,
                                __RPC__out FLOAT *opacity);
        HRESULT ( STDMETHODCALLTYPE *SetOpacity )(
            __RPC__in IXpsOMGradientBrush * This,
                       FLOAT opacity);
        HRESULT ( STDMETHODCALLTYPE *GetGradientStops )(
            __RPC__in IXpsOMGradientBrush * This,
                                __RPC__deref_out_opt IXpsOMGradientStopCollection **gradientStops);
        HRESULT ( STDMETHODCALLTYPE *GetTransform )(
            __RPC__in IXpsOMGradientBrush * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **transform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLocal )(
            __RPC__in IXpsOMGradientBrush * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **transform);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLocal )(
            __RPC__in IXpsOMGradientBrush * This,
                       __RPC__in_opt IXpsOMMatrixTransform *transform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLookup )(
            __RPC__in IXpsOMGradientBrush * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLookup )(
            __RPC__in IXpsOMGradientBrush * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetSpreadMethod )(
            __RPC__in IXpsOMGradientBrush * This,
                                __RPC__out XPS_SPREAD_METHOD *spreadMethod);
        HRESULT ( STDMETHODCALLTYPE *SetSpreadMethod )(
            __RPC__in IXpsOMGradientBrush * This,
                       XPS_SPREAD_METHOD spreadMethod);
        HRESULT ( STDMETHODCALLTYPE *GetColorInterpolationMode )(
            __RPC__in IXpsOMGradientBrush * This,
                                __RPC__out XPS_COLOR_INTERPOLATION *colorInterpolationMode);
        HRESULT ( STDMETHODCALLTYPE *SetColorInterpolationMode )(
            __RPC__in IXpsOMGradientBrush * This,
                       XPS_COLOR_INTERPOLATION colorInterpolationMode);
        END_INTERFACE
    } IXpsOMGradientBrushVtbl;
    interface IXpsOMGradientBrush
    {
        CONST_VTBL struct IXpsOMGradientBrushVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetType(This,type) )
    ( (This)->lpVtbl -> GetOpacity(This,opacity) )
    ( (This)->lpVtbl -> SetOpacity(This,opacity) )
    ( (This)->lpVtbl -> GetGradientStops(This,gradientStops) )
    ( (This)->lpVtbl -> GetTransform(This,transform) )
    ( (This)->lpVtbl -> GetTransformLocal(This,transform) )
    ( (This)->lpVtbl -> SetTransformLocal(This,transform) )
    ( (This)->lpVtbl -> GetTransformLookup(This,key) )
    ( (This)->lpVtbl -> SetTransformLookup(This,key) )
    ( (This)->lpVtbl -> GetSpreadMethod(This,spreadMethod) )
    ( (This)->lpVtbl -> SetSpreadMethod(This,spreadMethod) )
    ( (This)->lpVtbl -> GetColorInterpolationMode(This,colorInterpolationMode) )
    ( (This)->lpVtbl -> SetColorInterpolationMode(This,colorInterpolationMode) )
EXTERN_C const IID IID_IXpsOMLinearGradientBrush;
    typedef struct IXpsOMLinearGradientBrushVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMLinearGradientBrush * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMLinearGradientBrush * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                                __RPC__deref_out_opt IUnknown **owner);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                                __RPC__out XPS_OBJECT_TYPE *type);
        HRESULT ( STDMETHODCALLTYPE *GetOpacity )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                                __RPC__out FLOAT *opacity);
        HRESULT ( STDMETHODCALLTYPE *SetOpacity )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                       FLOAT opacity);
        HRESULT ( STDMETHODCALLTYPE *GetGradientStops )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                                __RPC__deref_out_opt IXpsOMGradientStopCollection **gradientStops);
        HRESULT ( STDMETHODCALLTYPE *GetTransform )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **transform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLocal )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **transform);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLocal )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                       __RPC__in_opt IXpsOMMatrixTransform *transform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLookup )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLookup )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetSpreadMethod )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                                __RPC__out XPS_SPREAD_METHOD *spreadMethod);
        HRESULT ( STDMETHODCALLTYPE *SetSpreadMethod )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                       XPS_SPREAD_METHOD spreadMethod);
        HRESULT ( STDMETHODCALLTYPE *GetColorInterpolationMode )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                                __RPC__out XPS_COLOR_INTERPOLATION *colorInterpolationMode);
        HRESULT ( STDMETHODCALLTYPE *SetColorInterpolationMode )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                       XPS_COLOR_INTERPOLATION colorInterpolationMode);
        HRESULT ( STDMETHODCALLTYPE *GetStartPoint )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                                __RPC__out XPS_POINT *startPoint);
        HRESULT ( STDMETHODCALLTYPE *SetStartPoint )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                       __RPC__in const XPS_POINT *startPoint);
        HRESULT ( STDMETHODCALLTYPE *GetEndPoint )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                                __RPC__out XPS_POINT *endPoint);
        HRESULT ( STDMETHODCALLTYPE *SetEndPoint )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                       __RPC__in const XPS_POINT *endPoint);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IXpsOMLinearGradientBrush * This,
                                __RPC__deref_out_opt IXpsOMLinearGradientBrush **linearGradientBrush);
        END_INTERFACE
    } IXpsOMLinearGradientBrushVtbl;
    interface IXpsOMLinearGradientBrush
    {
        CONST_VTBL struct IXpsOMLinearGradientBrushVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetType(This,type) )
    ( (This)->lpVtbl -> GetOpacity(This,opacity) )
    ( (This)->lpVtbl -> SetOpacity(This,opacity) )
    ( (This)->lpVtbl -> GetGradientStops(This,gradientStops) )
    ( (This)->lpVtbl -> GetTransform(This,transform) )
    ( (This)->lpVtbl -> GetTransformLocal(This,transform) )
    ( (This)->lpVtbl -> SetTransformLocal(This,transform) )
    ( (This)->lpVtbl -> GetTransformLookup(This,key) )
    ( (This)->lpVtbl -> SetTransformLookup(This,key) )
    ( (This)->lpVtbl -> GetSpreadMethod(This,spreadMethod) )
    ( (This)->lpVtbl -> SetSpreadMethod(This,spreadMethod) )
    ( (This)->lpVtbl -> GetColorInterpolationMode(This,colorInterpolationMode) )
    ( (This)->lpVtbl -> SetColorInterpolationMode(This,colorInterpolationMode) )
    ( (This)->lpVtbl -> GetStartPoint(This,startPoint) )
    ( (This)->lpVtbl -> SetStartPoint(This,startPoint) )
    ( (This)->lpVtbl -> GetEndPoint(This,endPoint) )
    ( (This)->lpVtbl -> SetEndPoint(This,endPoint) )
    ( (This)->lpVtbl -> Clone(This,linearGradientBrush) )
EXTERN_C const IID IID_IXpsOMRadialGradientBrush;
    typedef struct IXpsOMRadialGradientBrushVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMRadialGradientBrush * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMRadialGradientBrush * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                                __RPC__deref_out_opt IUnknown **owner);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                                __RPC__out XPS_OBJECT_TYPE *type);
        HRESULT ( STDMETHODCALLTYPE *GetOpacity )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                                __RPC__out FLOAT *opacity);
        HRESULT ( STDMETHODCALLTYPE *SetOpacity )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                       FLOAT opacity);
        HRESULT ( STDMETHODCALLTYPE *GetGradientStops )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                                __RPC__deref_out_opt IXpsOMGradientStopCollection **gradientStops);
        HRESULT ( STDMETHODCALLTYPE *GetTransform )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **transform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLocal )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **transform);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLocal )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                       __RPC__in_opt IXpsOMMatrixTransform *transform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLookup )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLookup )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetSpreadMethod )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                                __RPC__out XPS_SPREAD_METHOD *spreadMethod);
        HRESULT ( STDMETHODCALLTYPE *SetSpreadMethod )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                       XPS_SPREAD_METHOD spreadMethod);
        HRESULT ( STDMETHODCALLTYPE *GetColorInterpolationMode )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                                __RPC__out XPS_COLOR_INTERPOLATION *colorInterpolationMode);
        HRESULT ( STDMETHODCALLTYPE *SetColorInterpolationMode )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                       XPS_COLOR_INTERPOLATION colorInterpolationMode);
        HRESULT ( STDMETHODCALLTYPE *GetCenter )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                                __RPC__out XPS_POINT *center);
        HRESULT ( STDMETHODCALLTYPE *SetCenter )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                       __RPC__in const XPS_POINT *center);
        HRESULT ( STDMETHODCALLTYPE *GetRadiiSizes )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                                __RPC__out XPS_SIZE *radiiSizes);
        HRESULT ( STDMETHODCALLTYPE *SetRadiiSizes )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                       __RPC__in const XPS_SIZE *radiiSizes);
        HRESULT ( STDMETHODCALLTYPE *GetGradientOrigin )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                                __RPC__out XPS_POINT *origin);
        HRESULT ( STDMETHODCALLTYPE *SetGradientOrigin )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                       __RPC__in const XPS_POINT *origin);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IXpsOMRadialGradientBrush * This,
                                __RPC__deref_out_opt IXpsOMRadialGradientBrush **radialGradientBrush);
        END_INTERFACE
    } IXpsOMRadialGradientBrushVtbl;
    interface IXpsOMRadialGradientBrush
    {
        CONST_VTBL struct IXpsOMRadialGradientBrushVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetType(This,type) )
    ( (This)->lpVtbl -> GetOpacity(This,opacity) )
    ( (This)->lpVtbl -> SetOpacity(This,opacity) )
    ( (This)->lpVtbl -> GetGradientStops(This,gradientStops) )
    ( (This)->lpVtbl -> GetTransform(This,transform) )
    ( (This)->lpVtbl -> GetTransformLocal(This,transform) )
    ( (This)->lpVtbl -> SetTransformLocal(This,transform) )
    ( (This)->lpVtbl -> GetTransformLookup(This,key) )
    ( (This)->lpVtbl -> SetTransformLookup(This,key) )
    ( (This)->lpVtbl -> GetSpreadMethod(This,spreadMethod) )
    ( (This)->lpVtbl -> SetSpreadMethod(This,spreadMethod) )
    ( (This)->lpVtbl -> GetColorInterpolationMode(This,colorInterpolationMode) )
    ( (This)->lpVtbl -> SetColorInterpolationMode(This,colorInterpolationMode) )
    ( (This)->lpVtbl -> GetCenter(This,center) )
    ( (This)->lpVtbl -> SetCenter(This,center) )
    ( (This)->lpVtbl -> GetRadiiSizes(This,radiiSizes) )
    ( (This)->lpVtbl -> SetRadiiSizes(This,radiiSizes) )
    ( (This)->lpVtbl -> GetGradientOrigin(This,origin) )
    ( (This)->lpVtbl -> SetGradientOrigin(This,origin) )
    ( (This)->lpVtbl -> Clone(This,radialGradientBrush) )
EXTERN_C const IID IID_IXpsOMResource;
    typedef struct IXpsOMResourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMResource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMResource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMResource * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            __RPC__in IXpsOMResource * This,
                                __RPC__deref_out_opt IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *SetPartName )(
            __RPC__in IXpsOMResource * This,
                       __RPC__in_opt IOpcPartUri *partUri);
        END_INTERFACE
    } IXpsOMResourceVtbl;
    interface IXpsOMResource
    {
        CONST_VTBL struct IXpsOMResourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartName(This,partUri) )
    ( (This)->lpVtbl -> SetPartName(This,partUri) )
EXTERN_C const IID IID_IXpsOMPartResources;
    typedef struct IXpsOMPartResourcesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMPartResources * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMPartResources * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMPartResources * This);
        HRESULT ( STDMETHODCALLTYPE *GetFontResources )(
            __RPC__in IXpsOMPartResources * This,
                                __RPC__deref_out_opt IXpsOMFontResourceCollection **fontResources);
        HRESULT ( STDMETHODCALLTYPE *GetImageResources )(
            __RPC__in IXpsOMPartResources * This,
                                __RPC__deref_out_opt IXpsOMImageResourceCollection **imageResources);
        HRESULT ( STDMETHODCALLTYPE *GetColorProfileResources )(
            __RPC__in IXpsOMPartResources * This,
                                __RPC__deref_out_opt IXpsOMColorProfileResourceCollection **colorProfileResources);
        HRESULT ( STDMETHODCALLTYPE *GetRemoteDictionaryResources )(
            __RPC__in IXpsOMPartResources * This,
                                __RPC__deref_out_opt IXpsOMRemoteDictionaryResourceCollection **dictionaryResources);
        END_INTERFACE
    } IXpsOMPartResourcesVtbl;
    interface IXpsOMPartResources
    {
        CONST_VTBL struct IXpsOMPartResourcesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFontResources(This,fontResources) )
    ( (This)->lpVtbl -> GetImageResources(This,imageResources) )
    ( (This)->lpVtbl -> GetColorProfileResources(This,colorProfileResources) )
    ( (This)->lpVtbl -> GetRemoteDictionaryResources(This,dictionaryResources) )
EXTERN_C const IID IID_IXpsOMDictionary;
    typedef struct IXpsOMDictionaryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMDictionary * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMDictionary * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMDictionary * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMDictionary * This,
                                __RPC__deref_out_opt IUnknown **owner);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IXpsOMDictionary * This,
                                __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IXpsOMDictionary * This,
                       UINT32 index,
                                __RPC__deref_out_opt_string LPWSTR *key,
                                __RPC__deref_out_opt IXpsOMShareable **entry);
        HRESULT ( STDMETHODCALLTYPE *GetByKey )(
            __RPC__in IXpsOMDictionary * This,
                               __RPC__in_string LPCWSTR key,
                       __RPC__in_opt IXpsOMShareable *beforeEntry,
                                __RPC__deref_out_opt IXpsOMShareable **entry);
        HRESULT ( STDMETHODCALLTYPE *GetIndex )(
            __RPC__in IXpsOMDictionary * This,
                       __RPC__in_opt IXpsOMShareable *entry,
                                __RPC__out UINT32 *index);
        HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in IXpsOMDictionary * This,
                               __RPC__in_string LPCWSTR key,
                       __RPC__in_opt IXpsOMShareable *entry);
        HRESULT ( STDMETHODCALLTYPE *InsertAt )(
            __RPC__in IXpsOMDictionary * This,
                       UINT32 index,
                               __RPC__in_string LPCWSTR key,
                       __RPC__in_opt IXpsOMShareable *entry);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IXpsOMDictionary * This,
                       UINT32 index);
        HRESULT ( STDMETHODCALLTYPE *SetAt )(
            __RPC__in IXpsOMDictionary * This,
                       UINT32 index,
                               __RPC__in_string LPCWSTR key,
                       __RPC__in_opt IXpsOMShareable *entry);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IXpsOMDictionary * This,
                                __RPC__deref_out_opt IXpsOMDictionary **dictionary);
        END_INTERFACE
    } IXpsOMDictionaryVtbl;
    interface IXpsOMDictionary
    {
        CONST_VTBL struct IXpsOMDictionaryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetAt(This,index,key,entry) )
    ( (This)->lpVtbl -> GetByKey(This,key,beforeEntry,entry) )
    ( (This)->lpVtbl -> GetIndex(This,entry,index) )
    ( (This)->lpVtbl -> Append(This,key,entry) )
    ( (This)->lpVtbl -> InsertAt(This,index,key,entry) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> SetAt(This,index,key,entry) )
    ( (This)->lpVtbl -> Clone(This,dictionary) )
EXTERN_C const IID IID_IXpsOMFontResource;
    typedef struct IXpsOMFontResourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMFontResource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMFontResource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMFontResource * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            __RPC__in IXpsOMFontResource * This,
                                __RPC__deref_out_opt IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *SetPartName )(
            __RPC__in IXpsOMFontResource * This,
                       __RPC__in_opt IOpcPartUri *partUri);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IXpsOMFontResource * This,
                                __RPC__deref_out_opt IStream **readerStream);
        HRESULT ( STDMETHODCALLTYPE *SetContent )(
            __RPC__in IXpsOMFontResource * This,
                       __RPC__in_opt IStream *sourceStream,
                       XPS_FONT_EMBEDDING embeddingOption,
                       __RPC__in_opt IOpcPartUri *partName);
        HRESULT ( STDMETHODCALLTYPE *GetEmbeddingOption )(
            __RPC__in IXpsOMFontResource * This,
                                __RPC__out XPS_FONT_EMBEDDING *embeddingOption);
        END_INTERFACE
    } IXpsOMFontResourceVtbl;
    interface IXpsOMFontResource
    {
        CONST_VTBL struct IXpsOMFontResourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartName(This,partUri) )
    ( (This)->lpVtbl -> SetPartName(This,partUri) )
    ( (This)->lpVtbl -> GetStream(This,readerStream) )
    ( (This)->lpVtbl -> SetContent(This,sourceStream,embeddingOption,partName) )
    ( (This)->lpVtbl -> GetEmbeddingOption(This,embeddingOption) )
EXTERN_C const IID IID_IXpsOMFontResourceCollection;
    typedef struct IXpsOMFontResourceCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMFontResourceCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMFontResourceCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMFontResourceCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IXpsOMFontResourceCollection * This,
                                __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IXpsOMFontResourceCollection * This,
                       UINT32 index,
                                __RPC__deref_out_opt IXpsOMFontResource **value);
        HRESULT ( STDMETHODCALLTYPE *SetAt )(
            __RPC__in IXpsOMFontResourceCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMFontResource *value);
        HRESULT ( STDMETHODCALLTYPE *InsertAt )(
            __RPC__in IXpsOMFontResourceCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMFontResource *value);
        HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in IXpsOMFontResourceCollection * This,
                       __RPC__in_opt IXpsOMFontResource *value);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IXpsOMFontResourceCollection * This,
                       UINT32 index);
        HRESULT ( STDMETHODCALLTYPE *GetByPartName )(
            __RPC__in IXpsOMFontResourceCollection * This,
                       __RPC__in_opt IOpcPartUri *partName,
                                __RPC__deref_out_opt IXpsOMFontResource **part);
        END_INTERFACE
    } IXpsOMFontResourceCollectionVtbl;
    interface IXpsOMFontResourceCollection
    {
        CONST_VTBL struct IXpsOMFontResourceCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetAt(This,index,value) )
    ( (This)->lpVtbl -> SetAt(This,index,value) )
    ( (This)->lpVtbl -> InsertAt(This,index,value) )
    ( (This)->lpVtbl -> Append(This,value) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> GetByPartName(This,partName,part) )
EXTERN_C const IID IID_IXpsOMImageResource;
    typedef struct IXpsOMImageResourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMImageResource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMImageResource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMImageResource * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            __RPC__in IXpsOMImageResource * This,
                                __RPC__deref_out_opt IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *SetPartName )(
            __RPC__in IXpsOMImageResource * This,
                       __RPC__in_opt IOpcPartUri *partUri);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IXpsOMImageResource * This,
                                __RPC__deref_out_opt IStream **readerStream);
        HRESULT ( STDMETHODCALLTYPE *SetContent )(
            __RPC__in IXpsOMImageResource * This,
                       __RPC__in_opt IStream *sourceStream,
                       XPS_IMAGE_TYPE imageType,
                       __RPC__in_opt IOpcPartUri *partName);
        HRESULT ( STDMETHODCALLTYPE *GetImageType )(
            __RPC__in IXpsOMImageResource * This,
                                __RPC__out XPS_IMAGE_TYPE *imageType);
        END_INTERFACE
    } IXpsOMImageResourceVtbl;
    interface IXpsOMImageResource
    {
        CONST_VTBL struct IXpsOMImageResourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartName(This,partUri) )
    ( (This)->lpVtbl -> SetPartName(This,partUri) )
    ( (This)->lpVtbl -> GetStream(This,readerStream) )
    ( (This)->lpVtbl -> SetContent(This,sourceStream,imageType,partName) )
    ( (This)->lpVtbl -> GetImageType(This,imageType) )
EXTERN_C const IID IID_IXpsOMImageResourceCollection;
    typedef struct IXpsOMImageResourceCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMImageResourceCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMImageResourceCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMImageResourceCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IXpsOMImageResourceCollection * This,
                                __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IXpsOMImageResourceCollection * This,
                       UINT32 index,
                                __RPC__deref_out_opt IXpsOMImageResource **object);
        HRESULT ( STDMETHODCALLTYPE *InsertAt )(
            __RPC__in IXpsOMImageResourceCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMImageResource *object);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IXpsOMImageResourceCollection * This,
                       UINT32 index);
        HRESULT ( STDMETHODCALLTYPE *SetAt )(
            __RPC__in IXpsOMImageResourceCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMImageResource *object);
        HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in IXpsOMImageResourceCollection * This,
                       __RPC__in_opt IXpsOMImageResource *object);
        HRESULT ( STDMETHODCALLTYPE *GetByPartName )(
            __RPC__in IXpsOMImageResourceCollection * This,
                       __RPC__in_opt IOpcPartUri *partName,
                                __RPC__deref_out_opt IXpsOMImageResource **part);
        END_INTERFACE
    } IXpsOMImageResourceCollectionVtbl;
    interface IXpsOMImageResourceCollection
    {
        CONST_VTBL struct IXpsOMImageResourceCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetAt(This,index,object) )
    ( (This)->lpVtbl -> InsertAt(This,index,object) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> SetAt(This,index,object) )
    ( (This)->lpVtbl -> Append(This,object) )
    ( (This)->lpVtbl -> GetByPartName(This,partName,part) )
EXTERN_C const IID IID_IXpsOMColorProfileResource;
    typedef struct IXpsOMColorProfileResourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMColorProfileResource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMColorProfileResource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMColorProfileResource * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            __RPC__in IXpsOMColorProfileResource * This,
                                __RPC__deref_out_opt IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *SetPartName )(
            __RPC__in IXpsOMColorProfileResource * This,
                       __RPC__in_opt IOpcPartUri *partUri);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IXpsOMColorProfileResource * This,
                                __RPC__deref_out_opt IStream **stream);
        HRESULT ( STDMETHODCALLTYPE *SetContent )(
            __RPC__in IXpsOMColorProfileResource * This,
                       __RPC__in_opt IStream *sourceStream,
                       __RPC__in_opt IOpcPartUri *partName);
        END_INTERFACE
    } IXpsOMColorProfileResourceVtbl;
    interface IXpsOMColorProfileResource
    {
        CONST_VTBL struct IXpsOMColorProfileResourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartName(This,partUri) )
    ( (This)->lpVtbl -> SetPartName(This,partUri) )
    ( (This)->lpVtbl -> GetStream(This,stream) )
    ( (This)->lpVtbl -> SetContent(This,sourceStream,partName) )
EXTERN_C const IID IID_IXpsOMColorProfileResourceCollection;
    typedef struct IXpsOMColorProfileResourceCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMColorProfileResourceCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMColorProfileResourceCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMColorProfileResourceCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IXpsOMColorProfileResourceCollection * This,
                                __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IXpsOMColorProfileResourceCollection * This,
                       UINT32 index,
                                __RPC__deref_out_opt IXpsOMColorProfileResource **object);
        HRESULT ( STDMETHODCALLTYPE *InsertAt )(
            __RPC__in IXpsOMColorProfileResourceCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMColorProfileResource *object);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IXpsOMColorProfileResourceCollection * This,
                       UINT32 index);
        HRESULT ( STDMETHODCALLTYPE *SetAt )(
            __RPC__in IXpsOMColorProfileResourceCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMColorProfileResource *object);
        HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in IXpsOMColorProfileResourceCollection * This,
                       __RPC__in_opt IXpsOMColorProfileResource *object);
        HRESULT ( STDMETHODCALLTYPE *GetByPartName )(
            __RPC__in IXpsOMColorProfileResourceCollection * This,
                       __RPC__in_opt IOpcPartUri *partName,
                                __RPC__deref_out_opt IXpsOMColorProfileResource **part);
        END_INTERFACE
    } IXpsOMColorProfileResourceCollectionVtbl;
    interface IXpsOMColorProfileResourceCollection
    {
        CONST_VTBL struct IXpsOMColorProfileResourceCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetAt(This,index,object) )
    ( (This)->lpVtbl -> InsertAt(This,index,object) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> SetAt(This,index,object) )
    ( (This)->lpVtbl -> Append(This,object) )
    ( (This)->lpVtbl -> GetByPartName(This,partName,part) )
EXTERN_C const IID IID_IXpsOMPrintTicketResource;
    typedef struct IXpsOMPrintTicketResourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMPrintTicketResource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMPrintTicketResource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMPrintTicketResource * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            __RPC__in IXpsOMPrintTicketResource * This,
                                __RPC__deref_out_opt IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *SetPartName )(
            __RPC__in IXpsOMPrintTicketResource * This,
                       __RPC__in_opt IOpcPartUri *partUri);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IXpsOMPrintTicketResource * This,
                                __RPC__deref_out_opt IStream **stream);
        HRESULT ( STDMETHODCALLTYPE *SetContent )(
            __RPC__in IXpsOMPrintTicketResource * This,
                       __RPC__in_opt IStream *sourceStream,
                       __RPC__in_opt IOpcPartUri *partName);
        END_INTERFACE
    } IXpsOMPrintTicketResourceVtbl;
    interface IXpsOMPrintTicketResource
    {
        CONST_VTBL struct IXpsOMPrintTicketResourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartName(This,partUri) )
    ( (This)->lpVtbl -> SetPartName(This,partUri) )
    ( (This)->lpVtbl -> GetStream(This,stream) )
    ( (This)->lpVtbl -> SetContent(This,sourceStream,partName) )
EXTERN_C const IID IID_IXpsOMRemoteDictionaryResource;
    typedef struct IXpsOMRemoteDictionaryResourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMRemoteDictionaryResource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMRemoteDictionaryResource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMRemoteDictionaryResource * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            __RPC__in IXpsOMRemoteDictionaryResource * This,
                                __RPC__deref_out_opt IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *SetPartName )(
            __RPC__in IXpsOMRemoteDictionaryResource * This,
                       __RPC__in_opt IOpcPartUri *partUri);
        HRESULT ( STDMETHODCALLTYPE *GetDictionary )(
            __RPC__in IXpsOMRemoteDictionaryResource * This,
                                __RPC__deref_out_opt IXpsOMDictionary **dictionary);
        HRESULT ( STDMETHODCALLTYPE *SetDictionary )(
            __RPC__in IXpsOMRemoteDictionaryResource * This,
                       __RPC__in_opt IXpsOMDictionary *dictionary);
        END_INTERFACE
    } IXpsOMRemoteDictionaryResourceVtbl;
    interface IXpsOMRemoteDictionaryResource
    {
        CONST_VTBL struct IXpsOMRemoteDictionaryResourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartName(This,partUri) )
    ( (This)->lpVtbl -> SetPartName(This,partUri) )
    ( (This)->lpVtbl -> GetDictionary(This,dictionary) )
    ( (This)->lpVtbl -> SetDictionary(This,dictionary) )
EXTERN_C const IID IID_IXpsOMRemoteDictionaryResourceCollection;
    typedef struct IXpsOMRemoteDictionaryResourceCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMRemoteDictionaryResourceCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMRemoteDictionaryResourceCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMRemoteDictionaryResourceCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IXpsOMRemoteDictionaryResourceCollection * This,
                                __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IXpsOMRemoteDictionaryResourceCollection * This,
                       UINT32 index,
                                __RPC__deref_out_opt IXpsOMRemoteDictionaryResource **object);
        HRESULT ( STDMETHODCALLTYPE *InsertAt )(
            __RPC__in IXpsOMRemoteDictionaryResourceCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMRemoteDictionaryResource *object);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IXpsOMRemoteDictionaryResourceCollection * This,
                       UINT32 index);
        HRESULT ( STDMETHODCALLTYPE *SetAt )(
            __RPC__in IXpsOMRemoteDictionaryResourceCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMRemoteDictionaryResource *object);
        HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in IXpsOMRemoteDictionaryResourceCollection * This,
                       __RPC__in_opt IXpsOMRemoteDictionaryResource *object);
        HRESULT ( STDMETHODCALLTYPE *GetByPartName )(
            __RPC__in IXpsOMRemoteDictionaryResourceCollection * This,
                       __RPC__in_opt IOpcPartUri *partName,
                                __RPC__deref_out_opt IXpsOMRemoteDictionaryResource **remoteDictionaryResource);
        END_INTERFACE
    } IXpsOMRemoteDictionaryResourceCollectionVtbl;
    interface IXpsOMRemoteDictionaryResourceCollection
    {
        CONST_VTBL struct IXpsOMRemoteDictionaryResourceCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetAt(This,index,object) )
    ( (This)->lpVtbl -> InsertAt(This,index,object) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> SetAt(This,index,object) )
    ( (This)->lpVtbl -> Append(This,object) )
    ( (This)->lpVtbl -> GetByPartName(This,partName,remoteDictionaryResource) )
EXTERN_C const IID IID_IXpsOMSignatureBlockResourceCollection;
    typedef struct IXpsOMSignatureBlockResourceCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMSignatureBlockResourceCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMSignatureBlockResourceCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMSignatureBlockResourceCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IXpsOMSignatureBlockResourceCollection * This,
                                __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IXpsOMSignatureBlockResourceCollection * This,
                       UINT32 index,
                                __RPC__deref_out_opt IXpsOMSignatureBlockResource **signatureBlockResource);
        HRESULT ( STDMETHODCALLTYPE *InsertAt )(
            __RPC__in IXpsOMSignatureBlockResourceCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMSignatureBlockResource *signatureBlockResource);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IXpsOMSignatureBlockResourceCollection * This,
                       UINT32 index);
        HRESULT ( STDMETHODCALLTYPE *SetAt )(
            __RPC__in IXpsOMSignatureBlockResourceCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMSignatureBlockResource *signatureBlockResource);
        HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in IXpsOMSignatureBlockResourceCollection * This,
                       __RPC__in_opt IXpsOMSignatureBlockResource *signatureBlockResource);
        HRESULT ( STDMETHODCALLTYPE *GetByPartName )(
            __RPC__in IXpsOMSignatureBlockResourceCollection * This,
                       __RPC__in_opt IOpcPartUri *partName,
                                __RPC__deref_out_opt IXpsOMSignatureBlockResource **signatureBlockResource);
        END_INTERFACE
    } IXpsOMSignatureBlockResourceCollectionVtbl;
    interface IXpsOMSignatureBlockResourceCollection
    {
        CONST_VTBL struct IXpsOMSignatureBlockResourceCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetAt(This,index,signatureBlockResource) )
    ( (This)->lpVtbl -> InsertAt(This,index,signatureBlockResource) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> SetAt(This,index,signatureBlockResource) )
    ( (This)->lpVtbl -> Append(This,signatureBlockResource) )
    ( (This)->lpVtbl -> GetByPartName(This,partName,signatureBlockResource) )
EXTERN_C const IID IID_IXpsOMDocumentStructureResource;
    typedef struct IXpsOMDocumentStructureResourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMDocumentStructureResource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMDocumentStructureResource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMDocumentStructureResource * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            __RPC__in IXpsOMDocumentStructureResource * This,
                                __RPC__deref_out_opt IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *SetPartName )(
            __RPC__in IXpsOMDocumentStructureResource * This,
                       __RPC__in_opt IOpcPartUri *partUri);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMDocumentStructureResource * This,
                                __RPC__deref_out_opt IXpsOMDocument **owner);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IXpsOMDocumentStructureResource * This,
                                __RPC__deref_out_opt IStream **stream);
        HRESULT ( STDMETHODCALLTYPE *SetContent )(
            __RPC__in IXpsOMDocumentStructureResource * This,
                       __RPC__in_opt IStream *sourceStream,
                       __RPC__in_opt IOpcPartUri *partName);
        END_INTERFACE
    } IXpsOMDocumentStructureResourceVtbl;
    interface IXpsOMDocumentStructureResource
    {
        CONST_VTBL struct IXpsOMDocumentStructureResourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartName(This,partUri) )
    ( (This)->lpVtbl -> SetPartName(This,partUri) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetStream(This,stream) )
    ( (This)->lpVtbl -> SetContent(This,sourceStream,partName) )
EXTERN_C const IID IID_IXpsOMStoryFragmentsResource;
    typedef struct IXpsOMStoryFragmentsResourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMStoryFragmentsResource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMStoryFragmentsResource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMStoryFragmentsResource * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            __RPC__in IXpsOMStoryFragmentsResource * This,
                                __RPC__deref_out_opt IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *SetPartName )(
            __RPC__in IXpsOMStoryFragmentsResource * This,
                       __RPC__in_opt IOpcPartUri *partUri);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMStoryFragmentsResource * This,
                                __RPC__deref_out_opt IXpsOMPageReference **owner);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IXpsOMStoryFragmentsResource * This,
                                __RPC__deref_out_opt IStream **stream);
        HRESULT ( STDMETHODCALLTYPE *SetContent )(
            __RPC__in IXpsOMStoryFragmentsResource * This,
                       __RPC__in_opt IStream *sourceStream,
                       __RPC__in_opt IOpcPartUri *partName);
        END_INTERFACE
    } IXpsOMStoryFragmentsResourceVtbl;
    interface IXpsOMStoryFragmentsResource
    {
        CONST_VTBL struct IXpsOMStoryFragmentsResourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartName(This,partUri) )
    ( (This)->lpVtbl -> SetPartName(This,partUri) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetStream(This,stream) )
    ( (This)->lpVtbl -> SetContent(This,sourceStream,partName) )
EXTERN_C const IID IID_IXpsOMSignatureBlockResource;
    typedef struct IXpsOMSignatureBlockResourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMSignatureBlockResource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMSignatureBlockResource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMSignatureBlockResource * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            __RPC__in IXpsOMSignatureBlockResource * This,
                                __RPC__deref_out_opt IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *SetPartName )(
            __RPC__in IXpsOMSignatureBlockResource * This,
                       __RPC__in_opt IOpcPartUri *partUri);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMSignatureBlockResource * This,
                                __RPC__deref_out_opt IXpsOMDocument **owner);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IXpsOMSignatureBlockResource * This,
                                __RPC__deref_out_opt IStream **stream);
        HRESULT ( STDMETHODCALLTYPE *SetContent )(
            __RPC__in IXpsOMSignatureBlockResource * This,
                       __RPC__in_opt IStream *sourceStream,
                       __RPC__in_opt IOpcPartUri *partName);
        END_INTERFACE
    } IXpsOMSignatureBlockResourceVtbl;
    interface IXpsOMSignatureBlockResource
    {
        CONST_VTBL struct IXpsOMSignatureBlockResourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartName(This,partUri) )
    ( (This)->lpVtbl -> SetPartName(This,partUri) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetStream(This,stream) )
    ( (This)->lpVtbl -> SetContent(This,sourceStream,partName) )
EXTERN_C const IID IID_IXpsOMVisualCollection;
    typedef struct IXpsOMVisualCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMVisualCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMVisualCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMVisualCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IXpsOMVisualCollection * This,
                                __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IXpsOMVisualCollection * This,
                       UINT32 index,
                                __RPC__deref_out_opt IXpsOMVisual **object);
        HRESULT ( STDMETHODCALLTYPE *InsertAt )(
            __RPC__in IXpsOMVisualCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMVisual *object);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IXpsOMVisualCollection * This,
                       UINT32 index);
        HRESULT ( STDMETHODCALLTYPE *SetAt )(
            __RPC__in IXpsOMVisualCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMVisual *object);
        HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in IXpsOMVisualCollection * This,
                       __RPC__in_opt IXpsOMVisual *object);
        END_INTERFACE
    } IXpsOMVisualCollectionVtbl;
    interface IXpsOMVisualCollection
    {
        CONST_VTBL struct IXpsOMVisualCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetAt(This,index,object) )
    ( (This)->lpVtbl -> InsertAt(This,index,object) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> SetAt(This,index,object) )
    ( (This)->lpVtbl -> Append(This,object) )
EXTERN_C const IID IID_IXpsOMCanvas;
    typedef struct IXpsOMCanvasVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMCanvas * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMCanvas * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMCanvas * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMCanvas * This,
                                __RPC__deref_out_opt IUnknown **owner);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IXpsOMCanvas * This,
                                __RPC__out XPS_OBJECT_TYPE *type);
        HRESULT ( STDMETHODCALLTYPE *GetTransform )(
            __RPC__in IXpsOMCanvas * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **matrixTransform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLocal )(
            __RPC__in IXpsOMCanvas * This,
                                __RPC__deref_out_opt IXpsOMMatrixTransform **matrixTransform);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLocal )(
            __RPC__in IXpsOMCanvas * This,
                       __RPC__in_opt IXpsOMMatrixTransform *matrixTransform);
        HRESULT ( STDMETHODCALLTYPE *GetTransformLookup )(
            __RPC__in IXpsOMCanvas * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetTransformLookup )(
            __RPC__in IXpsOMCanvas * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetClipGeometry )(
            __RPC__in IXpsOMCanvas * This,
                                __RPC__deref_out_opt IXpsOMGeometry **clipGeometry);
        HRESULT ( STDMETHODCALLTYPE *GetClipGeometryLocal )(
            __RPC__in IXpsOMCanvas * This,
                                __RPC__deref_out_opt IXpsOMGeometry **clipGeometry);
        HRESULT ( STDMETHODCALLTYPE *SetClipGeometryLocal )(
            __RPC__in IXpsOMCanvas * This,
                       __RPC__in_opt IXpsOMGeometry *clipGeometry);
        HRESULT ( STDMETHODCALLTYPE *GetClipGeometryLookup )(
            __RPC__in IXpsOMCanvas * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetClipGeometryLookup )(
            __RPC__in IXpsOMCanvas * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetOpacity )(
            __RPC__in IXpsOMCanvas * This,
                                __RPC__out FLOAT *opacity);
        HRESULT ( STDMETHODCALLTYPE *SetOpacity )(
            __RPC__in IXpsOMCanvas * This,
                       FLOAT opacity);
        HRESULT ( STDMETHODCALLTYPE *GetOpacityMaskBrush )(
            __RPC__in IXpsOMCanvas * This,
                                __RPC__deref_out_opt IXpsOMBrush **opacityMaskBrush);
        HRESULT ( STDMETHODCALLTYPE *GetOpacityMaskBrushLocal )(
            __RPC__in IXpsOMCanvas * This,
                                __RPC__deref_out_opt IXpsOMBrush **opacityMaskBrush);
        HRESULT ( STDMETHODCALLTYPE *SetOpacityMaskBrushLocal )(
            __RPC__in IXpsOMCanvas * This,
                       __RPC__in_opt IXpsOMBrush *opacityMaskBrush);
        HRESULT ( STDMETHODCALLTYPE *GetOpacityMaskBrushLookup )(
            __RPC__in IXpsOMCanvas * This,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *SetOpacityMaskBrushLookup )(
            __RPC__in IXpsOMCanvas * This,
                               __RPC__in_string LPCWSTR key);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IXpsOMCanvas * This,
                                        __RPC__deref_out_opt_string LPWSTR *name);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            __RPC__in IXpsOMCanvas * This,
                               __RPC__in_string LPCWSTR name);
        HRESULT ( STDMETHODCALLTYPE *GetIsHyperlinkTarget )(
            __RPC__in IXpsOMCanvas * This,
                                __RPC__out BOOL *isHyperlink);
        HRESULT ( STDMETHODCALLTYPE *SetIsHyperlinkTarget )(
            __RPC__in IXpsOMCanvas * This,
                       BOOL isHyperlink);
        HRESULT ( STDMETHODCALLTYPE *GetHyperlinkNavigateUri )(
            __RPC__in IXpsOMCanvas * This,
                                __RPC__deref_out_opt IUri **hyperlinkUri);
        HRESULT ( STDMETHODCALLTYPE *SetHyperlinkNavigateUri )(
            __RPC__in IXpsOMCanvas * This,
                       __RPC__in_opt IUri *hyperlinkUri);
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )(
            __RPC__in IXpsOMCanvas * This,
                                        __RPC__deref_out_opt_string LPWSTR *language);
        HRESULT ( STDMETHODCALLTYPE *SetLanguage )(
            __RPC__in IXpsOMCanvas * This,
                               __RPC__in_string LPCWSTR language);
                           HRESULT ( STDMETHODCALLTYPE *GetVisuals )(
            __RPC__in IXpsOMCanvas * This,
                                __RPC__deref_out_opt IXpsOMVisualCollection **visuals);
        HRESULT ( STDMETHODCALLTYPE *GetUseAliasedEdgeMode )(
            __RPC__in IXpsOMCanvas * This,
                                __RPC__out BOOL *useAliasedEdgeMode);
        HRESULT ( STDMETHODCALLTYPE *SetUseAliasedEdgeMode )(
            __RPC__in IXpsOMCanvas * This,
                       BOOL useAliasedEdgeMode);
        HRESULT ( STDMETHODCALLTYPE *GetAccessibilityShortDescription )(
            __RPC__in IXpsOMCanvas * This,
                                        __RPC__deref_out_opt_string LPWSTR *shortDescription);
        HRESULT ( STDMETHODCALLTYPE *SetAccessibilityShortDescription )(
            __RPC__in IXpsOMCanvas * This,
                               __RPC__in_string LPCWSTR shortDescription);
        HRESULT ( STDMETHODCALLTYPE *GetAccessibilityLongDescription )(
            __RPC__in IXpsOMCanvas * This,
                                        __RPC__deref_out_opt_string LPWSTR *longDescription);
        HRESULT ( STDMETHODCALLTYPE *SetAccessibilityLongDescription )(
            __RPC__in IXpsOMCanvas * This,
                               __RPC__in_string LPCWSTR longDescription);
        HRESULT ( STDMETHODCALLTYPE *GetDictionary )(
            __RPC__in IXpsOMCanvas * This,
                                __RPC__deref_out_opt IXpsOMDictionary **resourceDictionary);
        HRESULT ( STDMETHODCALLTYPE *GetDictionaryLocal )(
            __RPC__in IXpsOMCanvas * This,
                                __RPC__deref_out_opt IXpsOMDictionary **resourceDictionary);
        HRESULT ( STDMETHODCALLTYPE *SetDictionaryLocal )(
            __RPC__in IXpsOMCanvas * This,
                       __RPC__in_opt IXpsOMDictionary *resourceDictionary);
        HRESULT ( STDMETHODCALLTYPE *GetDictionaryResource )(
            __RPC__in IXpsOMCanvas * This,
                                __RPC__deref_out_opt IXpsOMRemoteDictionaryResource **remoteDictionaryResource);
        HRESULT ( STDMETHODCALLTYPE *SetDictionaryResource )(
            __RPC__in IXpsOMCanvas * This,
                       __RPC__in_opt IXpsOMRemoteDictionaryResource *remoteDictionaryResource);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IXpsOMCanvas * This,
                                __RPC__deref_out_opt IXpsOMCanvas **canvas);
        END_INTERFACE
    } IXpsOMCanvasVtbl;
    interface IXpsOMCanvas
    {
        CONST_VTBL struct IXpsOMCanvasVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,owner) )
    ( (This)->lpVtbl -> GetType(This,type) )
    ( (This)->lpVtbl -> GetTransform(This,matrixTransform) )
    ( (This)->lpVtbl -> GetTransformLocal(This,matrixTransform) )
    ( (This)->lpVtbl -> SetTransformLocal(This,matrixTransform) )
    ( (This)->lpVtbl -> GetTransformLookup(This,key) )
    ( (This)->lpVtbl -> SetTransformLookup(This,key) )
    ( (This)->lpVtbl -> GetClipGeometry(This,clipGeometry) )
    ( (This)->lpVtbl -> GetClipGeometryLocal(This,clipGeometry) )
    ( (This)->lpVtbl -> SetClipGeometryLocal(This,clipGeometry) )
    ( (This)->lpVtbl -> GetClipGeometryLookup(This,key) )
    ( (This)->lpVtbl -> SetClipGeometryLookup(This,key) )
    ( (This)->lpVtbl -> GetOpacity(This,opacity) )
    ( (This)->lpVtbl -> SetOpacity(This,opacity) )
    ( (This)->lpVtbl -> GetOpacityMaskBrush(This,opacityMaskBrush) )
    ( (This)->lpVtbl -> GetOpacityMaskBrushLocal(This,opacityMaskBrush) )
    ( (This)->lpVtbl -> SetOpacityMaskBrushLocal(This,opacityMaskBrush) )
    ( (This)->lpVtbl -> GetOpacityMaskBrushLookup(This,key) )
    ( (This)->lpVtbl -> SetOpacityMaskBrushLookup(This,key) )
    ( (This)->lpVtbl -> GetName(This,name) )
    ( (This)->lpVtbl -> SetName(This,name) )
    ( (This)->lpVtbl -> GetIsHyperlinkTarget(This,isHyperlink) )
    ( (This)->lpVtbl -> SetIsHyperlinkTarget(This,isHyperlink) )
    ( (This)->lpVtbl -> GetHyperlinkNavigateUri(This,hyperlinkUri) )
    ( (This)->lpVtbl -> SetHyperlinkNavigateUri(This,hyperlinkUri) )
    ( (This)->lpVtbl -> GetLanguage(This,language) )
    ( (This)->lpVtbl -> SetLanguage(This,language) )
    ( (This)->lpVtbl -> GetVisuals(This,visuals) )
    ( (This)->lpVtbl -> GetUseAliasedEdgeMode(This,useAliasedEdgeMode) )
    ( (This)->lpVtbl -> SetUseAliasedEdgeMode(This,useAliasedEdgeMode) )
    ( (This)->lpVtbl -> GetAccessibilityShortDescription(This,shortDescription) )
    ( (This)->lpVtbl -> SetAccessibilityShortDescription(This,shortDescription) )
    ( (This)->lpVtbl -> GetAccessibilityLongDescription(This,longDescription) )
    ( (This)->lpVtbl -> SetAccessibilityLongDescription(This,longDescription) )
    ( (This)->lpVtbl -> GetDictionary(This,resourceDictionary) )
    ( (This)->lpVtbl -> GetDictionaryLocal(This,resourceDictionary) )
    ( (This)->lpVtbl -> SetDictionaryLocal(This,resourceDictionary) )
    ( (This)->lpVtbl -> GetDictionaryResource(This,remoteDictionaryResource) )
    ( (This)->lpVtbl -> SetDictionaryResource(This,remoteDictionaryResource) )
    ( (This)->lpVtbl -> Clone(This,canvas) )
EXTERN_C const IID IID_IXpsOMPage;
    typedef struct IXpsOMPageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMPage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMPage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMPage * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            __RPC__in IXpsOMPage * This,
                                __RPC__deref_out_opt IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *SetPartName )(
            __RPC__in IXpsOMPage * This,
                       __RPC__in_opt IOpcPartUri *partUri);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMPage * This,
                                __RPC__deref_out_opt IXpsOMPageReference **pageReference);
        HRESULT ( STDMETHODCALLTYPE *GetVisuals )(
            __RPC__in IXpsOMPage * This,
                                __RPC__deref_out_opt IXpsOMVisualCollection **visuals);
        HRESULT ( STDMETHODCALLTYPE *GetPageDimensions )(
            __RPC__in IXpsOMPage * This,
                                __RPC__out XPS_SIZE *pageDimensions);
        HRESULT ( STDMETHODCALLTYPE *SetPageDimensions )(
            __RPC__in IXpsOMPage * This,
                       __RPC__in const XPS_SIZE *pageDimensions);
        HRESULT ( STDMETHODCALLTYPE *GetContentBox )(
            __RPC__in IXpsOMPage * This,
                                __RPC__out XPS_RECT *contentBox);
        HRESULT ( STDMETHODCALLTYPE *SetContentBox )(
            __RPC__in IXpsOMPage * This,
                       __RPC__in const XPS_RECT *contentBox);
        HRESULT ( STDMETHODCALLTYPE *GetBleedBox )(
            __RPC__in IXpsOMPage * This,
                                __RPC__out XPS_RECT *bleedBox);
        HRESULT ( STDMETHODCALLTYPE *SetBleedBox )(
            __RPC__in IXpsOMPage * This,
                       __RPC__in const XPS_RECT *bleedBox);
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )(
            __RPC__in IXpsOMPage * This,
                                        __RPC__deref_out_opt_string LPWSTR *language);
        HRESULT ( STDMETHODCALLTYPE *SetLanguage )(
            __RPC__in IXpsOMPage * This,
                               __RPC__in_string LPCWSTR language);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IXpsOMPage * This,
                                        __RPC__deref_out_opt_string LPWSTR *name);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            __RPC__in IXpsOMPage * This,
                               __RPC__in_string LPCWSTR name);
        HRESULT ( STDMETHODCALLTYPE *GetIsHyperlinkTarget )(
            __RPC__in IXpsOMPage * This,
                                __RPC__out BOOL *isHyperlinkTarget);
        HRESULT ( STDMETHODCALLTYPE *SetIsHyperlinkTarget )(
            __RPC__in IXpsOMPage * This,
                       BOOL isHyperlinkTarget);
        HRESULT ( STDMETHODCALLTYPE *GetDictionary )(
            __RPC__in IXpsOMPage * This,
                                __RPC__deref_out_opt IXpsOMDictionary **resourceDictionary);
        HRESULT ( STDMETHODCALLTYPE *GetDictionaryLocal )(
            __RPC__in IXpsOMPage * This,
                                __RPC__deref_out_opt IXpsOMDictionary **resourceDictionary);
        HRESULT ( STDMETHODCALLTYPE *SetDictionaryLocal )(
            __RPC__in IXpsOMPage * This,
                       __RPC__in_opt IXpsOMDictionary *resourceDictionary);
        HRESULT ( STDMETHODCALLTYPE *GetDictionaryResource )(
            __RPC__in IXpsOMPage * This,
                                __RPC__deref_out_opt IXpsOMRemoteDictionaryResource **remoteDictionaryResource);
        HRESULT ( STDMETHODCALLTYPE *SetDictionaryResource )(
            __RPC__in IXpsOMPage * This,
                       __RPC__in_opt IXpsOMRemoteDictionaryResource *remoteDictionaryResource);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in IXpsOMPage * This,
                       __RPC__in_opt ISequentialStream *stream,
                       BOOL optimizeMarkupSize);
        HRESULT ( STDMETHODCALLTYPE *GenerateUnusedLookupKey )(
            __RPC__in IXpsOMPage * This,
                       XPS_OBJECT_TYPE type,
                                        __RPC__deref_out_opt_string LPWSTR *key);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IXpsOMPage * This,
                                __RPC__deref_out_opt IXpsOMPage **page);
        END_INTERFACE
    } IXpsOMPageVtbl;
    interface IXpsOMPage
    {
        CONST_VTBL struct IXpsOMPageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartName(This,partUri) )
    ( (This)->lpVtbl -> SetPartName(This,partUri) )
    ( (This)->lpVtbl -> GetOwner(This,pageReference) )
    ( (This)->lpVtbl -> GetVisuals(This,visuals) )
    ( (This)->lpVtbl -> GetPageDimensions(This,pageDimensions) )
    ( (This)->lpVtbl -> SetPageDimensions(This,pageDimensions) )
    ( (This)->lpVtbl -> GetContentBox(This,contentBox) )
    ( (This)->lpVtbl -> SetContentBox(This,contentBox) )
    ( (This)->lpVtbl -> GetBleedBox(This,bleedBox) )
    ( (This)->lpVtbl -> SetBleedBox(This,bleedBox) )
    ( (This)->lpVtbl -> GetLanguage(This,language) )
    ( (This)->lpVtbl -> SetLanguage(This,language) )
    ( (This)->lpVtbl -> GetName(This,name) )
    ( (This)->lpVtbl -> SetName(This,name) )
    ( (This)->lpVtbl -> GetIsHyperlinkTarget(This,isHyperlinkTarget) )
    ( (This)->lpVtbl -> SetIsHyperlinkTarget(This,isHyperlinkTarget) )
    ( (This)->lpVtbl -> GetDictionary(This,resourceDictionary) )
    ( (This)->lpVtbl -> GetDictionaryLocal(This,resourceDictionary) )
    ( (This)->lpVtbl -> SetDictionaryLocal(This,resourceDictionary) )
    ( (This)->lpVtbl -> GetDictionaryResource(This,remoteDictionaryResource) )
    ( (This)->lpVtbl -> SetDictionaryResource(This,remoteDictionaryResource) )
    ( (This)->lpVtbl -> Write(This,stream,optimizeMarkupSize) )
    ( (This)->lpVtbl -> GenerateUnusedLookupKey(This,type,key) )
    ( (This)->lpVtbl -> Clone(This,page) )
EXTERN_C const IID IID_IXpsOMPageReference;
    typedef struct IXpsOMPageReferenceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMPageReference * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMPageReference * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMPageReference * This);
                           HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMPageReference * This,
                                __RPC__deref_out_opt IXpsOMDocument **document);
                           HRESULT ( STDMETHODCALLTYPE *GetPage )(
            __RPC__in IXpsOMPageReference * This,
                                __RPC__deref_out_opt IXpsOMPage **page);
                           HRESULT ( STDMETHODCALLTYPE *SetPage )(
            __RPC__in IXpsOMPageReference * This,
                       __RPC__in_opt IXpsOMPage *page);
        HRESULT ( STDMETHODCALLTYPE *DiscardPage )(
            __RPC__in IXpsOMPageReference * This);
        HRESULT ( STDMETHODCALLTYPE *IsPageLoaded )(
            __RPC__in IXpsOMPageReference * This,
                                __RPC__out BOOL *isPageLoaded);
        HRESULT ( STDMETHODCALLTYPE *GetAdvisoryPageDimensions )(
            __RPC__in IXpsOMPageReference * This,
                                __RPC__out XPS_SIZE *pageDimensions);
        HRESULT ( STDMETHODCALLTYPE *SetAdvisoryPageDimensions )(
            __RPC__in IXpsOMPageReference * This,
                       __RPC__in const XPS_SIZE *pageDimensions);
        HRESULT ( STDMETHODCALLTYPE *GetStoryFragmentsResource )(
            __RPC__in IXpsOMPageReference * This,
                                __RPC__deref_out_opt IXpsOMStoryFragmentsResource **storyFragmentsResource);
        HRESULT ( STDMETHODCALLTYPE *SetStoryFragmentsResource )(
            __RPC__in IXpsOMPageReference * This,
                       __RPC__in_opt IXpsOMStoryFragmentsResource *storyFragmentsResource);
        HRESULT ( STDMETHODCALLTYPE *GetPrintTicketResource )(
            __RPC__in IXpsOMPageReference * This,
                                __RPC__deref_out_opt IXpsOMPrintTicketResource **printTicketResource);
        HRESULT ( STDMETHODCALLTYPE *SetPrintTicketResource )(
            __RPC__in IXpsOMPageReference * This,
                       __RPC__in_opt IXpsOMPrintTicketResource *printTicketResource);
        HRESULT ( STDMETHODCALLTYPE *GetThumbnailResource )(
            __RPC__in IXpsOMPageReference * This,
                                __RPC__deref_out_opt IXpsOMImageResource **imageResource);
        HRESULT ( STDMETHODCALLTYPE *SetThumbnailResource )(
            __RPC__in IXpsOMPageReference * This,
                       __RPC__in_opt IXpsOMImageResource *imageResource);
        HRESULT ( STDMETHODCALLTYPE *CollectLinkTargets )(
            __RPC__in IXpsOMPageReference * This,
                                __RPC__deref_out_opt IXpsOMNameCollection **linkTargets);
        HRESULT ( STDMETHODCALLTYPE *CollectPartResources )(
            __RPC__in IXpsOMPageReference * This,
                                __RPC__deref_out_opt IXpsOMPartResources **partResources);
        HRESULT ( STDMETHODCALLTYPE *HasRestrictedFonts )(
            __RPC__in IXpsOMPageReference * This,
                                __RPC__out BOOL *restrictedFonts);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IXpsOMPageReference * This,
                                __RPC__deref_out_opt IXpsOMPageReference **pageReference);
        END_INTERFACE
    } IXpsOMPageReferenceVtbl;
    interface IXpsOMPageReference
    {
        CONST_VTBL struct IXpsOMPageReferenceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwner(This,document) )
    ( (This)->lpVtbl -> GetPage(This,page) )
    ( (This)->lpVtbl -> SetPage(This,page) )
    ( (This)->lpVtbl -> DiscardPage(This) )
    ( (This)->lpVtbl -> IsPageLoaded(This,isPageLoaded) )
    ( (This)->lpVtbl -> GetAdvisoryPageDimensions(This,pageDimensions) )
    ( (This)->lpVtbl -> SetAdvisoryPageDimensions(This,pageDimensions) )
    ( (This)->lpVtbl -> GetStoryFragmentsResource(This,storyFragmentsResource) )
    ( (This)->lpVtbl -> SetStoryFragmentsResource(This,storyFragmentsResource) )
    ( (This)->lpVtbl -> GetPrintTicketResource(This,printTicketResource) )
    ( (This)->lpVtbl -> SetPrintTicketResource(This,printTicketResource) )
    ( (This)->lpVtbl -> GetThumbnailResource(This,imageResource) )
    ( (This)->lpVtbl -> SetThumbnailResource(This,imageResource) )
    ( (This)->lpVtbl -> CollectLinkTargets(This,linkTargets) )
    ( (This)->lpVtbl -> CollectPartResources(This,partResources) )
    ( (This)->lpVtbl -> HasRestrictedFonts(This,restrictedFonts) )
    ( (This)->lpVtbl -> Clone(This,pageReference) )
EXTERN_C const IID IID_IXpsOMPageReferenceCollection;
    typedef struct IXpsOMPageReferenceCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMPageReferenceCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMPageReferenceCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMPageReferenceCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IXpsOMPageReferenceCollection * This,
                                __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IXpsOMPageReferenceCollection * This,
                       UINT32 index,
                                __RPC__deref_out_opt IXpsOMPageReference **pageReference);
        HRESULT ( STDMETHODCALLTYPE *InsertAt )(
            __RPC__in IXpsOMPageReferenceCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMPageReference *pageReference);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IXpsOMPageReferenceCollection * This,
                       UINT32 index);
        HRESULT ( STDMETHODCALLTYPE *SetAt )(
            __RPC__in IXpsOMPageReferenceCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMPageReference *pageReference);
        HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in IXpsOMPageReferenceCollection * This,
                       __RPC__in_opt IXpsOMPageReference *pageReference);
        END_INTERFACE
    } IXpsOMPageReferenceCollectionVtbl;
    interface IXpsOMPageReferenceCollection
    {
        CONST_VTBL struct IXpsOMPageReferenceCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetAt(This,index,pageReference) )
    ( (This)->lpVtbl -> InsertAt(This,index,pageReference) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> SetAt(This,index,pageReference) )
    ( (This)->lpVtbl -> Append(This,pageReference) )
EXTERN_C const IID IID_IXpsOMDocument;
    typedef struct IXpsOMDocumentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMDocument * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMDocument * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMDocument * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            __RPC__in IXpsOMDocument * This,
                                __RPC__deref_out_opt IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *SetPartName )(
            __RPC__in IXpsOMDocument * This,
                       __RPC__in_opt IOpcPartUri *partUri);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMDocument * This,
                                __RPC__deref_out_opt IXpsOMDocumentSequence **documentSequence);
        HRESULT ( STDMETHODCALLTYPE *GetPageReferences )(
            __RPC__in IXpsOMDocument * This,
                                __RPC__deref_out_opt IXpsOMPageReferenceCollection **pageReferences);
        HRESULT ( STDMETHODCALLTYPE *GetPrintTicketResource )(
            __RPC__in IXpsOMDocument * This,
                                __RPC__deref_out_opt IXpsOMPrintTicketResource **printTicketResource);
        HRESULT ( STDMETHODCALLTYPE *SetPrintTicketResource )(
            __RPC__in IXpsOMDocument * This,
                       __RPC__in_opt IXpsOMPrintTicketResource *printTicketResource);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentStructureResource )(
            __RPC__in IXpsOMDocument * This,
                                __RPC__deref_out_opt IXpsOMDocumentStructureResource **documentStructureResource);
        HRESULT ( STDMETHODCALLTYPE *SetDocumentStructureResource )(
            __RPC__in IXpsOMDocument * This,
                       __RPC__in_opt IXpsOMDocumentStructureResource *documentStructureResource);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureBlockResources )(
            __RPC__in IXpsOMDocument * This,
                                __RPC__deref_out_opt IXpsOMSignatureBlockResourceCollection **signatureBlockResources);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IXpsOMDocument * This,
                                __RPC__deref_out_opt IXpsOMDocument **document);
        END_INTERFACE
    } IXpsOMDocumentVtbl;
    interface IXpsOMDocument
    {
        CONST_VTBL struct IXpsOMDocumentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartName(This,partUri) )
    ( (This)->lpVtbl -> SetPartName(This,partUri) )
    ( (This)->lpVtbl -> GetOwner(This,documentSequence) )
    ( (This)->lpVtbl -> GetPageReferences(This,pageReferences) )
    ( (This)->lpVtbl -> GetPrintTicketResource(This,printTicketResource) )
    ( (This)->lpVtbl -> SetPrintTicketResource(This,printTicketResource) )
    ( (This)->lpVtbl -> GetDocumentStructureResource(This,documentStructureResource) )
    ( (This)->lpVtbl -> SetDocumentStructureResource(This,documentStructureResource) )
    ( (This)->lpVtbl -> GetSignatureBlockResources(This,signatureBlockResources) )
    ( (This)->lpVtbl -> Clone(This,document) )
EXTERN_C const IID IID_IXpsOMDocumentCollection;
    typedef struct IXpsOMDocumentCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMDocumentCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMDocumentCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMDocumentCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IXpsOMDocumentCollection * This,
                                __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IXpsOMDocumentCollection * This,
                       UINT32 index,
                                __RPC__deref_out_opt IXpsOMDocument **document);
        HRESULT ( STDMETHODCALLTYPE *InsertAt )(
            __RPC__in IXpsOMDocumentCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMDocument *document);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IXpsOMDocumentCollection * This,
                       UINT32 index);
        HRESULT ( STDMETHODCALLTYPE *SetAt )(
            __RPC__in IXpsOMDocumentCollection * This,
                       UINT32 index,
                       __RPC__in_opt IXpsOMDocument *document);
        HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in IXpsOMDocumentCollection * This,
                       __RPC__in_opt IXpsOMDocument *document);
        END_INTERFACE
    } IXpsOMDocumentCollectionVtbl;
    interface IXpsOMDocumentCollection
    {
        CONST_VTBL struct IXpsOMDocumentCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetAt(This,index,document) )
    ( (This)->lpVtbl -> InsertAt(This,index,document) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> SetAt(This,index,document) )
    ( (This)->lpVtbl -> Append(This,document) )
EXTERN_C const IID IID_IXpsOMDocumentSequence;
    typedef struct IXpsOMDocumentSequenceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMDocumentSequence * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMDocumentSequence * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMDocumentSequence * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            __RPC__in IXpsOMDocumentSequence * This,
                                __RPC__deref_out_opt IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *SetPartName )(
            __RPC__in IXpsOMDocumentSequence * This,
                       __RPC__in_opt IOpcPartUri *partUri);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMDocumentSequence * This,
                                __RPC__deref_out_opt IXpsOMPackage **package);
                           HRESULT ( STDMETHODCALLTYPE *GetDocuments )(
            __RPC__in IXpsOMDocumentSequence * This,
                                __RPC__deref_out_opt IXpsOMDocumentCollection **documents);
        HRESULT ( STDMETHODCALLTYPE *GetPrintTicketResource )(
            __RPC__in IXpsOMDocumentSequence * This,
                                __RPC__deref_out_opt IXpsOMPrintTicketResource **printTicketResource);
        HRESULT ( STDMETHODCALLTYPE *SetPrintTicketResource )(
            __RPC__in IXpsOMDocumentSequence * This,
                       __RPC__in_opt IXpsOMPrintTicketResource *printTicketResource);
        END_INTERFACE
    } IXpsOMDocumentSequenceVtbl;
    interface IXpsOMDocumentSequence
    {
        CONST_VTBL struct IXpsOMDocumentSequenceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartName(This,partUri) )
    ( (This)->lpVtbl -> SetPartName(This,partUri) )
    ( (This)->lpVtbl -> GetOwner(This,package) )
    ( (This)->lpVtbl -> GetDocuments(This,documents) )
    ( (This)->lpVtbl -> GetPrintTicketResource(This,printTicketResource) )
    ( (This)->lpVtbl -> SetPrintTicketResource(This,printTicketResource) )
EXTERN_C const IID IID_IXpsOMCoreProperties;
    typedef struct IXpsOMCorePropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMCoreProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMCoreProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMCoreProperties * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            __RPC__in IXpsOMCoreProperties * This,
                                __RPC__deref_out_opt IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *SetPartName )(
            __RPC__in IXpsOMCoreProperties * This,
                       __RPC__in_opt IOpcPartUri *partUri);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IXpsOMCoreProperties * This,
                                __RPC__deref_out_opt IXpsOMPackage **package);
        HRESULT ( STDMETHODCALLTYPE *GetCategory )(
            __RPC__in IXpsOMCoreProperties * This,
                                        __RPC__deref_out_opt_string LPWSTR *category);
        HRESULT ( STDMETHODCALLTYPE *SetCategory )(
            __RPC__in IXpsOMCoreProperties * This,
                               __RPC__in_string LPCWSTR category);
        HRESULT ( STDMETHODCALLTYPE *GetContentStatus )(
            __RPC__in IXpsOMCoreProperties * This,
                                        __RPC__deref_out_opt_string LPWSTR *contentStatus);
        HRESULT ( STDMETHODCALLTYPE *SetContentStatus )(
            __RPC__in IXpsOMCoreProperties * This,
                               __RPC__in_string LPCWSTR contentStatus);
        HRESULT ( STDMETHODCALLTYPE *GetContentType )(
            __RPC__in IXpsOMCoreProperties * This,
                                        __RPC__deref_out_opt_string LPWSTR *contentType);
        HRESULT ( STDMETHODCALLTYPE *SetContentType )(
            __RPC__in IXpsOMCoreProperties * This,
                               __RPC__in_string LPCWSTR contentType);
        HRESULT ( STDMETHODCALLTYPE *GetCreated )(
            __RPC__in IXpsOMCoreProperties * This,
                                __RPC__out SYSTEMTIME *created);
        HRESULT ( STDMETHODCALLTYPE *SetCreated )(
            __RPC__in IXpsOMCoreProperties * This,
                       __RPC__in const SYSTEMTIME *created);
        HRESULT ( STDMETHODCALLTYPE *GetCreator )(
            __RPC__in IXpsOMCoreProperties * This,
                                        __RPC__deref_out_opt_string LPWSTR *creator);
        HRESULT ( STDMETHODCALLTYPE *SetCreator )(
            __RPC__in IXpsOMCoreProperties * This,
                               __RPC__in_string LPCWSTR creator);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in IXpsOMCoreProperties * This,
                                        __RPC__deref_out_opt_string LPWSTR *description);
        HRESULT ( STDMETHODCALLTYPE *SetDescription )(
            __RPC__in IXpsOMCoreProperties * This,
                               __RPC__in_string LPCWSTR description);
        HRESULT ( STDMETHODCALLTYPE *GetIdentifier )(
            __RPC__in IXpsOMCoreProperties * This,
                                        __RPC__deref_out_opt_string LPWSTR *identifier);
        HRESULT ( STDMETHODCALLTYPE *SetIdentifier )(
            __RPC__in IXpsOMCoreProperties * This,
                               __RPC__in_string LPCWSTR identifier);
        HRESULT ( STDMETHODCALLTYPE *GetKeywords )(
            __RPC__in IXpsOMCoreProperties * This,
                                        __RPC__deref_out_opt_string LPWSTR *keywords);
        HRESULT ( STDMETHODCALLTYPE *SetKeywords )(
            __RPC__in IXpsOMCoreProperties * This,
                               __RPC__in_string LPCWSTR keywords);
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )(
            __RPC__in IXpsOMCoreProperties * This,
                                        __RPC__deref_out_opt_string LPWSTR *language);
        HRESULT ( STDMETHODCALLTYPE *SetLanguage )(
            __RPC__in IXpsOMCoreProperties * This,
                               __RPC__in_string LPCWSTR language);
        HRESULT ( STDMETHODCALLTYPE *GetLastModifiedBy )(
            __RPC__in IXpsOMCoreProperties * This,
                                        __RPC__deref_out_opt_string LPWSTR *lastModifiedBy);
        HRESULT ( STDMETHODCALLTYPE *SetLastModifiedBy )(
            __RPC__in IXpsOMCoreProperties * This,
                               __RPC__in_string LPCWSTR lastModifiedBy);
        HRESULT ( STDMETHODCALLTYPE *GetLastPrinted )(
            __RPC__in IXpsOMCoreProperties * This,
                                __RPC__out SYSTEMTIME *lastPrinted);
        HRESULT ( STDMETHODCALLTYPE *SetLastPrinted )(
            __RPC__in IXpsOMCoreProperties * This,
                       __RPC__in const SYSTEMTIME *lastPrinted);
        HRESULT ( STDMETHODCALLTYPE *GetModified )(
            __RPC__in IXpsOMCoreProperties * This,
                                __RPC__out SYSTEMTIME *modified);
        HRESULT ( STDMETHODCALLTYPE *SetModified )(
            __RPC__in IXpsOMCoreProperties * This,
                       __RPC__in const SYSTEMTIME *modified);
        HRESULT ( STDMETHODCALLTYPE *GetRevision )(
            __RPC__in IXpsOMCoreProperties * This,
                                        __RPC__deref_out_opt_string LPWSTR *revision);
        HRESULT ( STDMETHODCALLTYPE *SetRevision )(
            __RPC__in IXpsOMCoreProperties * This,
                               __RPC__in_string LPCWSTR revision);
        HRESULT ( STDMETHODCALLTYPE *GetSubject )(
            __RPC__in IXpsOMCoreProperties * This,
                                        __RPC__deref_out_opt_string LPWSTR *subject);
        HRESULT ( STDMETHODCALLTYPE *SetSubject )(
            __RPC__in IXpsOMCoreProperties * This,
                               __RPC__in_string LPCWSTR subject);
        HRESULT ( STDMETHODCALLTYPE *GetTitle )(
            __RPC__in IXpsOMCoreProperties * This,
                                        __RPC__deref_out_opt_string LPWSTR *title);
        HRESULT ( STDMETHODCALLTYPE *SetTitle )(
            __RPC__in IXpsOMCoreProperties * This,
                               __RPC__in_string LPCWSTR title);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            __RPC__in IXpsOMCoreProperties * This,
                                        __RPC__deref_out_opt_string LPWSTR *version);
        HRESULT ( STDMETHODCALLTYPE *SetVersion )(
            __RPC__in IXpsOMCoreProperties * This,
                               __RPC__in_string LPCWSTR version);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IXpsOMCoreProperties * This,
                                __RPC__deref_out_opt IXpsOMCoreProperties **coreProperties);
        END_INTERFACE
    } IXpsOMCorePropertiesVtbl;
    interface IXpsOMCoreProperties
    {
        CONST_VTBL struct IXpsOMCorePropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartName(This,partUri) )
    ( (This)->lpVtbl -> SetPartName(This,partUri) )
    ( (This)->lpVtbl -> GetOwner(This,package) )
    ( (This)->lpVtbl -> GetCategory(This,category) )
    ( (This)->lpVtbl -> SetCategory(This,category) )
    ( (This)->lpVtbl -> GetContentStatus(This,contentStatus) )
    ( (This)->lpVtbl -> SetContentStatus(This,contentStatus) )
    ( (This)->lpVtbl -> GetContentType(This,contentType) )
    ( (This)->lpVtbl -> SetContentType(This,contentType) )
    ( (This)->lpVtbl -> GetCreated(This,created) )
    ( (This)->lpVtbl -> SetCreated(This,created) )
    ( (This)->lpVtbl -> GetCreator(This,creator) )
    ( (This)->lpVtbl -> SetCreator(This,creator) )
    ( (This)->lpVtbl -> GetDescription(This,description) )
    ( (This)->lpVtbl -> SetDescription(This,description) )
    ( (This)->lpVtbl -> GetIdentifier(This,identifier) )
    ( (This)->lpVtbl -> SetIdentifier(This,identifier) )
    ( (This)->lpVtbl -> GetKeywords(This,keywords) )
    ( (This)->lpVtbl -> SetKeywords(This,keywords) )
    ( (This)->lpVtbl -> GetLanguage(This,language) )
    ( (This)->lpVtbl -> SetLanguage(This,language) )
    ( (This)->lpVtbl -> GetLastModifiedBy(This,lastModifiedBy) )
    ( (This)->lpVtbl -> SetLastModifiedBy(This,lastModifiedBy) )
    ( (This)->lpVtbl -> GetLastPrinted(This,lastPrinted) )
    ( (This)->lpVtbl -> SetLastPrinted(This,lastPrinted) )
    ( (This)->lpVtbl -> GetModified(This,modified) )
    ( (This)->lpVtbl -> SetModified(This,modified) )
    ( (This)->lpVtbl -> GetRevision(This,revision) )
    ( (This)->lpVtbl -> SetRevision(This,revision) )
    ( (This)->lpVtbl -> GetSubject(This,subject) )
    ( (This)->lpVtbl -> SetSubject(This,subject) )
    ( (This)->lpVtbl -> GetTitle(This,title) )
    ( (This)->lpVtbl -> SetTitle(This,title) )
    ( (This)->lpVtbl -> GetVersion(This,version) )
    ( (This)->lpVtbl -> SetVersion(This,version) )
    ( (This)->lpVtbl -> Clone(This,coreProperties) )
EXTERN_C const IID IID_IXpsOMPackage;
    typedef struct IXpsOMPackageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXpsOMPackage * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXpsOMPackage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXpsOMPackage * This);
                           HRESULT ( STDMETHODCALLTYPE *GetDocumentSequence )(
            IXpsOMPackage * This,
                                IXpsOMDocumentSequence **documentSequence);
        HRESULT ( STDMETHODCALLTYPE *SetDocumentSequence )(
            IXpsOMPackage * This,
                       IXpsOMDocumentSequence *documentSequence);
        HRESULT ( STDMETHODCALLTYPE *GetCoreProperties )(
            IXpsOMPackage * This,
                                IXpsOMCoreProperties **coreProperties);
        HRESULT ( STDMETHODCALLTYPE *SetCoreProperties )(
            IXpsOMPackage * This,
                       IXpsOMCoreProperties *coreProperties);
        HRESULT ( STDMETHODCALLTYPE *GetDiscardControlPartName )(
            IXpsOMPackage * This,
                                IOpcPartUri **discardControlPartUri);
        HRESULT ( STDMETHODCALLTYPE *SetDiscardControlPartName )(
            IXpsOMPackage * This,
                       IOpcPartUri *discardControlPartUri);
        HRESULT ( STDMETHODCALLTYPE *GetThumbnailResource )(
            IXpsOMPackage * This,
                                IXpsOMImageResource **imageResource);
        HRESULT ( STDMETHODCALLTYPE *SetThumbnailResource )(
            IXpsOMPackage * This,
                       IXpsOMImageResource *imageResource);
        HRESULT ( STDMETHODCALLTYPE *WriteToFile )(
            IXpsOMPackage * This,
                               LPCWSTR fileName,
                               LPSECURITY_ATTRIBUTES securityAttributes,
                       DWORD flagsAndAttributes,
                       BOOL optimizeMarkupSize);
        HRESULT ( STDMETHODCALLTYPE *WriteToStream )(
            IXpsOMPackage * This,
                       ISequentialStream *stream,
                       BOOL optimizeMarkupSize);
        END_INTERFACE
    } IXpsOMPackageVtbl;
    interface IXpsOMPackage
    {
        CONST_VTBL struct IXpsOMPackageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDocumentSequence(This,documentSequence) )
    ( (This)->lpVtbl -> SetDocumentSequence(This,documentSequence) )
    ( (This)->lpVtbl -> GetCoreProperties(This,coreProperties) )
    ( (This)->lpVtbl -> SetCoreProperties(This,coreProperties) )
    ( (This)->lpVtbl -> GetDiscardControlPartName(This,discardControlPartUri) )
    ( (This)->lpVtbl -> SetDiscardControlPartName(This,discardControlPartUri) )
    ( (This)->lpVtbl -> GetThumbnailResource(This,imageResource) )
    ( (This)->lpVtbl -> SetThumbnailResource(This,imageResource) )
    ( (This)->lpVtbl -> WriteToFile(This,fileName,securityAttributes,flagsAndAttributes,optimizeMarkupSize) )
    ( (This)->lpVtbl -> WriteToStream(This,stream,optimizeMarkupSize) )
EXTERN_C const IID IID_IXpsOMObjectFactory;
    typedef struct IXpsOMObjectFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXpsOMObjectFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXpsOMObjectFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXpsOMObjectFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreatePackage )(
            IXpsOMObjectFactory * This,
                                IXpsOMPackage **package);
        HRESULT ( STDMETHODCALLTYPE *CreatePackageFromFile )(
            IXpsOMObjectFactory * This,
                               LPCWSTR filename,
                       BOOL reuseObjects,
                                IXpsOMPackage **package);
        HRESULT ( STDMETHODCALLTYPE *CreatePackageFromStream )(
            IXpsOMObjectFactory * This,
                       IStream *stream,
                       BOOL reuseObjects,
                                IXpsOMPackage **package);
        HRESULT ( STDMETHODCALLTYPE *CreateStoryFragmentsResource )(
            IXpsOMObjectFactory * This,
                       IStream *acquiredStream,
                       IOpcPartUri *partUri,
                                IXpsOMStoryFragmentsResource **storyFragmentsResource);
        HRESULT ( STDMETHODCALLTYPE *CreateDocumentStructureResource )(
            IXpsOMObjectFactory * This,
                       IStream *acquiredStream,
                       IOpcPartUri *partUri,
                                IXpsOMDocumentStructureResource **documentStructureResource);
        HRESULT ( STDMETHODCALLTYPE *CreateSignatureBlockResource )(
            IXpsOMObjectFactory * This,
                       IStream *acquiredStream,
                       IOpcPartUri *partUri,
                                IXpsOMSignatureBlockResource **signatureBlockResource);
        HRESULT ( STDMETHODCALLTYPE *CreateRemoteDictionaryResource )(
            IXpsOMObjectFactory * This,
                       IXpsOMDictionary *dictionary,
                       IOpcPartUri *partUri,
                                IXpsOMRemoteDictionaryResource **remoteDictionaryResource);
        HRESULT ( STDMETHODCALLTYPE *CreateRemoteDictionaryResourceFromStream )(
            IXpsOMObjectFactory * This,
                       IStream *dictionaryMarkupStream,
                       IOpcPartUri *dictionaryPartUri,
                       IXpsOMPartResources *resources,
                                IXpsOMRemoteDictionaryResource **dictionaryResource);
        HRESULT ( STDMETHODCALLTYPE *CreatePartResources )(
            IXpsOMObjectFactory * This,
                                IXpsOMPartResources **partResources);
        HRESULT ( STDMETHODCALLTYPE *CreateDocumentSequence )(
            IXpsOMObjectFactory * This,
                       IOpcPartUri *partUri,
                                IXpsOMDocumentSequence **documentSequence);
        HRESULT ( STDMETHODCALLTYPE *CreateDocument )(
            IXpsOMObjectFactory * This,
                       IOpcPartUri *partUri,
                                IXpsOMDocument **document);
        HRESULT ( STDMETHODCALLTYPE *CreatePageReference )(
            IXpsOMObjectFactory * This,
                       const XPS_SIZE *advisoryPageDimensions,
                                IXpsOMPageReference **pageReference);
        HRESULT ( STDMETHODCALLTYPE *CreatePage )(
            IXpsOMObjectFactory * This,
                       const XPS_SIZE *pageDimensions,
                               LPCWSTR language,
                       IOpcPartUri *partUri,
                                IXpsOMPage **page);
        HRESULT ( STDMETHODCALLTYPE *CreatePageFromStream )(
            IXpsOMObjectFactory * This,
                       IStream *pageMarkupStream,
                       IOpcPartUri *partUri,
                       IXpsOMPartResources *resources,
                       BOOL reuseObjects,
                                IXpsOMPage **page);
        HRESULT ( STDMETHODCALLTYPE *CreateCanvas )(
            IXpsOMObjectFactory * This,
                                IXpsOMCanvas **canvas);
        HRESULT ( STDMETHODCALLTYPE *CreateGlyphs )(
            IXpsOMObjectFactory * This,
                       IXpsOMFontResource *fontResource,
                                IXpsOMGlyphs **glyphs);
        HRESULT ( STDMETHODCALLTYPE *CreatePath )(
            IXpsOMObjectFactory * This,
                                IXpsOMPath **path);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometry )(
            IXpsOMObjectFactory * This,
                                IXpsOMGeometry **geometry);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometryFigure )(
            IXpsOMObjectFactory * This,
                       const XPS_POINT *startPoint,
                                IXpsOMGeometryFigure **figure);
        HRESULT ( STDMETHODCALLTYPE *CreateMatrixTransform )(
            IXpsOMObjectFactory * This,
                       const XPS_MATRIX *matrix,
                                IXpsOMMatrixTransform **transform);
        HRESULT ( STDMETHODCALLTYPE *CreateSolidColorBrush )(
            IXpsOMObjectFactory * This,
                       const XPS_COLOR *color,
                       IXpsOMColorProfileResource *colorProfile,
                                IXpsOMSolidColorBrush **solidColorBrush);
        HRESULT ( STDMETHODCALLTYPE *CreateColorProfileResource )(
            IXpsOMObjectFactory * This,
                       IStream *acquiredStream,
                       IOpcPartUri *partUri,
                                IXpsOMColorProfileResource **colorProfileResource);
        HRESULT ( STDMETHODCALLTYPE *CreateImageBrush )(
            IXpsOMObjectFactory * This,
                       IXpsOMImageResource *image,
                       const XPS_RECT *viewBox,
                       const XPS_RECT *viewPort,
                                IXpsOMImageBrush **imageBrush);
        HRESULT ( STDMETHODCALLTYPE *CreateVisualBrush )(
            IXpsOMObjectFactory * This,
                       const XPS_RECT *viewBox,
                       const XPS_RECT *viewPort,
                                IXpsOMVisualBrush **visualBrush);
        HRESULT ( STDMETHODCALLTYPE *CreateImageResource )(
            IXpsOMObjectFactory * This,
                       IStream *acquiredStream,
                       XPS_IMAGE_TYPE contentType,
                       IOpcPartUri *partUri,
                                IXpsOMImageResource **imageResource);
        HRESULT ( STDMETHODCALLTYPE *CreatePrintTicketResource )(
            IXpsOMObjectFactory * This,
                       IStream *acquiredStream,
                       IOpcPartUri *partUri,
                                IXpsOMPrintTicketResource **printTicketResource);
        HRESULT ( STDMETHODCALLTYPE *CreateFontResource )(
            IXpsOMObjectFactory * This,
                       IStream *acquiredStream,
                       XPS_FONT_EMBEDDING fontEmbedding,
                       IOpcPartUri *partUri,
                       BOOL isObfSourceStream,
                                IXpsOMFontResource **fontResource);
        HRESULT ( STDMETHODCALLTYPE *CreateGradientStop )(
            IXpsOMObjectFactory * This,
                       const XPS_COLOR *color,
                       IXpsOMColorProfileResource *colorProfile,
                       FLOAT offset,
                                IXpsOMGradientStop **gradientStop);
        HRESULT ( STDMETHODCALLTYPE *CreateLinearGradientBrush )(
            IXpsOMObjectFactory * This,
                       IXpsOMGradientStop *gradStop1,
                       IXpsOMGradientStop *gradStop2,
                       const XPS_POINT *startPoint,
                       const XPS_POINT *endPoint,
                                IXpsOMLinearGradientBrush **linearGradientBrush);
        HRESULT ( STDMETHODCALLTYPE *CreateRadialGradientBrush )(
            IXpsOMObjectFactory * This,
                       IXpsOMGradientStop *gradStop1,
                       IXpsOMGradientStop *gradStop2,
                       const XPS_POINT *centerPoint,
                       const XPS_POINT *gradientOrigin,
                       const XPS_SIZE *radiiSizes,
                                IXpsOMRadialGradientBrush **radialGradientBrush);
        HRESULT ( STDMETHODCALLTYPE *CreateCoreProperties )(
            IXpsOMObjectFactory * This,
                       IOpcPartUri *partUri,
                                IXpsOMCoreProperties **coreProperties);
        HRESULT ( STDMETHODCALLTYPE *CreateDictionary )(
            IXpsOMObjectFactory * This,
                                IXpsOMDictionary **dictionary);
        HRESULT ( STDMETHODCALLTYPE *CreatePartUriCollection )(
            IXpsOMObjectFactory * This,
                                IXpsOMPartUriCollection **partUriCollection);
        HRESULT ( STDMETHODCALLTYPE *CreatePackageWriterOnFile )(
            IXpsOMObjectFactory * This,
                               LPCWSTR fileName,
                               LPSECURITY_ATTRIBUTES securityAttributes,
                       DWORD flagsAndAttributes,
                       BOOL optimizeMarkupSize,
                       XPS_INTERLEAVING interleaving,
                       IOpcPartUri *documentSequencePartName,
                       IXpsOMCoreProperties *coreProperties,
                       IXpsOMImageResource *packageThumbnail,
                       IXpsOMPrintTicketResource *documentSequencePrintTicket,
                       IOpcPartUri *discardControlPartName,
                                IXpsOMPackageWriter **packageWriter);
        HRESULT ( STDMETHODCALLTYPE *CreatePackageWriterOnStream )(
            IXpsOMObjectFactory * This,
                       ISequentialStream *outputStream,
                       BOOL optimizeMarkupSize,
                       XPS_INTERLEAVING interleaving,
                       IOpcPartUri *documentSequencePartName,
                       IXpsOMCoreProperties *coreProperties,
                       IXpsOMImageResource *packageThumbnail,
                       IXpsOMPrintTicketResource *documentSequencePrintTicket,
                       IOpcPartUri *discardControlPartName,
                                IXpsOMPackageWriter **packageWriter);
        HRESULT ( STDMETHODCALLTYPE *CreatePartUri )(
            IXpsOMObjectFactory * This,
                               LPCWSTR uri,
                                IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *CreateReadOnlyStreamOnFile )(
            IXpsOMObjectFactory * This,
                               LPCWSTR filename,
                                IStream **stream);
        END_INTERFACE
    } IXpsOMObjectFactoryVtbl;
    interface IXpsOMObjectFactory
    {
        CONST_VTBL struct IXpsOMObjectFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreatePackage(This,package) )
    ( (This)->lpVtbl -> CreatePackageFromFile(This,filename,reuseObjects,package) )
    ( (This)->lpVtbl -> CreatePackageFromStream(This,stream,reuseObjects,package) )
    ( (This)->lpVtbl -> CreateStoryFragmentsResource(This,acquiredStream,partUri,storyFragmentsResource) )
    ( (This)->lpVtbl -> CreateDocumentStructureResource(This,acquiredStream,partUri,documentStructureResource) )
    ( (This)->lpVtbl -> CreateSignatureBlockResource(This,acquiredStream,partUri,signatureBlockResource) )
    ( (This)->lpVtbl -> CreateRemoteDictionaryResource(This,dictionary,partUri,remoteDictionaryResource) )
    ( (This)->lpVtbl -> CreateRemoteDictionaryResourceFromStream(This,dictionaryMarkupStream,dictionaryPartUri,resources,dictionaryResource) )
    ( (This)->lpVtbl -> CreatePartResources(This,partResources) )
    ( (This)->lpVtbl -> CreateDocumentSequence(This,partUri,documentSequence) )
    ( (This)->lpVtbl -> CreateDocument(This,partUri,document) )
    ( (This)->lpVtbl -> CreatePageReference(This,advisoryPageDimensions,pageReference) )
    ( (This)->lpVtbl -> CreatePage(This,pageDimensions,language,partUri,page) )
    ( (This)->lpVtbl -> CreatePageFromStream(This,pageMarkupStream,partUri,resources,reuseObjects,page) )
    ( (This)->lpVtbl -> CreateCanvas(This,canvas) )
    ( (This)->lpVtbl -> CreateGlyphs(This,fontResource,glyphs) )
    ( (This)->lpVtbl -> CreatePath(This,path) )
    ( (This)->lpVtbl -> CreateGeometry(This,geometry) )
    ( (This)->lpVtbl -> CreateGeometryFigure(This,startPoint,figure) )
    ( (This)->lpVtbl -> CreateMatrixTransform(This,matrix,transform) )
    ( (This)->lpVtbl -> CreateSolidColorBrush(This,color,colorProfile,solidColorBrush) )
    ( (This)->lpVtbl -> CreateColorProfileResource(This,acquiredStream,partUri,colorProfileResource) )
    ( (This)->lpVtbl -> CreateImageBrush(This,image,viewBox,viewPort,imageBrush) )
    ( (This)->lpVtbl -> CreateVisualBrush(This,viewBox,viewPort,visualBrush) )
    ( (This)->lpVtbl -> CreateImageResource(This,acquiredStream,contentType,partUri,imageResource) )
    ( (This)->lpVtbl -> CreatePrintTicketResource(This,acquiredStream,partUri,printTicketResource) )
    ( (This)->lpVtbl -> CreateFontResource(This,acquiredStream,fontEmbedding,partUri,isObfSourceStream,fontResource) )
    ( (This)->lpVtbl -> CreateGradientStop(This,color,colorProfile,offset,gradientStop) )
    ( (This)->lpVtbl -> CreateLinearGradientBrush(This,gradStop1,gradStop2,startPoint,endPoint,linearGradientBrush) )
    ( (This)->lpVtbl -> CreateRadialGradientBrush(This,gradStop1,gradStop2,centerPoint,gradientOrigin,radiiSizes,radialGradientBrush) )
    ( (This)->lpVtbl -> CreateCoreProperties(This,partUri,coreProperties) )
    ( (This)->lpVtbl -> CreateDictionary(This,dictionary) )
    ( (This)->lpVtbl -> CreatePartUriCollection(This,partUriCollection) )
    ( (This)->lpVtbl -> CreatePackageWriterOnFile(This,fileName,securityAttributes,flagsAndAttributes,optimizeMarkupSize,interleaving,documentSequencePartName,coreProperties,packageThumbnail,documentSequencePrintTicket,discardControlPartName,packageWriter) )
    ( (This)->lpVtbl -> CreatePackageWriterOnStream(This,outputStream,optimizeMarkupSize,interleaving,documentSequencePartName,coreProperties,packageThumbnail,documentSequencePrintTicket,discardControlPartName,packageWriter) )
    ( (This)->lpVtbl -> CreatePartUri(This,uri,partUri) )
    ( (This)->lpVtbl -> CreateReadOnlyStreamOnFile(This,filename,stream) )
EXTERN_C const IID IID_IXpsOMNameCollection;
    typedef struct IXpsOMNameCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMNameCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMNameCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMNameCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IXpsOMNameCollection * This,
                                __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IXpsOMNameCollection * This,
                       UINT32 index,
                                        __RPC__deref_out_opt_string LPWSTR *name);
        END_INTERFACE
    } IXpsOMNameCollectionVtbl;
    interface IXpsOMNameCollection
    {
        CONST_VTBL struct IXpsOMNameCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetAt(This,index,name) )
EXTERN_C const IID IID_IXpsOMPartUriCollection;
    typedef struct IXpsOMPartUriCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMPartUriCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMPartUriCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMPartUriCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IXpsOMPartUriCollection * This,
                                __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IXpsOMPartUriCollection * This,
                       UINT32 index,
                                __RPC__deref_out_opt IOpcPartUri **partUri);
        HRESULT ( STDMETHODCALLTYPE *InsertAt )(
            __RPC__in IXpsOMPartUriCollection * This,
                       UINT32 index,
                       __RPC__in_opt IOpcPartUri *partUri);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IXpsOMPartUriCollection * This,
                       UINT32 index);
        HRESULT ( STDMETHODCALLTYPE *SetAt )(
            __RPC__in IXpsOMPartUriCollection * This,
                       UINT32 index,
                       __RPC__in_opt IOpcPartUri *partUri);
        HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in IXpsOMPartUriCollection * This,
                       __RPC__in_opt IOpcPartUri *partUri);
        END_INTERFACE
    } IXpsOMPartUriCollectionVtbl;
    interface IXpsOMPartUriCollection
    {
        CONST_VTBL struct IXpsOMPartUriCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetAt(This,index,partUri) )
    ( (This)->lpVtbl -> InsertAt(This,index,partUri) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> SetAt(This,index,partUri) )
    ( (This)->lpVtbl -> Append(This,partUri) )
EXTERN_C const IID IID_IXpsOMPackageWriter;
    typedef struct IXpsOMPackageWriterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMPackageWriter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMPackageWriter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMPackageWriter * This);
        HRESULT ( STDMETHODCALLTYPE *StartNewDocument )(
            __RPC__in IXpsOMPackageWriter * This,
                       __RPC__in_opt IOpcPartUri *documentPartName,
                       __RPC__in_opt IXpsOMPrintTicketResource *documentPrintTicket,
                       __RPC__in_opt IXpsOMDocumentStructureResource *documentStructure,
                       __RPC__in_opt IXpsOMSignatureBlockResourceCollection *signatureBlockResources,
                       __RPC__in_opt IXpsOMPartUriCollection *restrictedFonts);
        HRESULT ( STDMETHODCALLTYPE *AddPage )(
            __RPC__in IXpsOMPackageWriter * This,
                       __RPC__in_opt IXpsOMPage *page,
                       __RPC__in const XPS_SIZE *advisoryPageDimensions,
                       __RPC__in_opt IXpsOMPartUriCollection *discardableResourceParts,
                       __RPC__in_opt IXpsOMStoryFragmentsResource *storyFragments,
                       __RPC__in_opt IXpsOMPrintTicketResource *pagePrintTicket,
                       __RPC__in_opt IXpsOMImageResource *pageThumbnail);
        HRESULT ( STDMETHODCALLTYPE *AddResource )(
            __RPC__in IXpsOMPackageWriter * This,
                       __RPC__in_opt IXpsOMResource *resource);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IXpsOMPackageWriter * This);
        HRESULT ( STDMETHODCALLTYPE *IsClosed )(
            __RPC__in IXpsOMPackageWriter * This,
                                __RPC__out BOOL *isClosed);
        END_INTERFACE
    } IXpsOMPackageWriterVtbl;
    interface IXpsOMPackageWriter
    {
        CONST_VTBL struct IXpsOMPackageWriterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartNewDocument(This,documentPartName,documentPrintTicket,documentStructure,signatureBlockResources,restrictedFonts) )
    ( (This)->lpVtbl -> AddPage(This,page,advisoryPageDimensions,discardableResourceParts,storyFragments,pagePrintTicket,pageThumbnail) )
    ( (This)->lpVtbl -> AddResource(This,resource) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> IsClosed(This,isClosed) )
EXTERN_C const IID IID_IXpsOMPackageTarget;
    typedef struct IXpsOMPackageTargetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsOMPackageTarget * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsOMPackageTarget * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsOMPackageTarget * This);
        HRESULT ( STDMETHODCALLTYPE *CreateXpsOMPackageWriter )(
            __RPC__in IXpsOMPackageTarget * This,
                       __RPC__in_opt IOpcPartUri *documentSequencePartName,
                       __RPC__in_opt IXpsOMPrintTicketResource *documentSequencePrintTicket,
                       __RPC__in_opt IOpcPartUri *discardControlPartName,
                        __RPC__deref_out_opt IXpsOMPackageWriter **packageWriter);
        END_INTERFACE
    } IXpsOMPackageTargetVtbl;
    interface IXpsOMPackageTarget
    {
        CONST_VTBL struct IXpsOMPackageTargetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateXpsOMPackageWriter(This,documentSequencePartName,documentSequencePrintTicket,discardControlPartName,packageWriter) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_xpsobjectmodel_0000_0052_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsobjectmodel_0000_0052_v0_0_s_ifspec;
EXTERN_C const IID IID_IXpsOMThumbnailGenerator;
    typedef struct IXpsOMThumbnailGeneratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXpsOMThumbnailGenerator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXpsOMThumbnailGenerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXpsOMThumbnailGenerator * This);
        HRESULT ( STDMETHODCALLTYPE *GenerateThumbnail )(
            IXpsOMThumbnailGenerator * This,
                       IXpsOMPage *page,
                       XPS_IMAGE_TYPE thumbnailType,
                       XPS_THUMBNAIL_SIZE thumbnailSize,
                       IOpcPartUri *imageResourcePartName,
                                IXpsOMImageResource **imageResource);
        END_INTERFACE
    } IXpsOMThumbnailGeneratorVtbl;
    interface IXpsOMThumbnailGenerator
    {
        CONST_VTBL struct IXpsOMThumbnailGeneratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GenerateThumbnail(This,page,thumbnailType,thumbnailSize,imageResourcePartName,imageResource) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_xpsobjectmodel_0000_0053_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsobjectmodel_0000_0053_v0_0_s_ifspec;
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
EXTERN_C const IID LIBID_MSXPS;
EXTERN_C const CLSID CLSID_XpsOMObjectFactory;
class DECLSPEC_UUID("E974D26D-3D9B-4D47-88CC-3872F2DC3585")
XpsOMObjectFactory;
EXTERN_C const CLSID CLSID_XpsOMThumbnailGenerator;
class DECLSPEC_UUID("7E4A23E2-B969-4761-BE35-1A8CED58E323")
XpsOMThumbnailGenerator;
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_xpsobjectmodel_0000_0054_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsobjectmodel_0000_0054_v0_0_s_ifspec;
}
