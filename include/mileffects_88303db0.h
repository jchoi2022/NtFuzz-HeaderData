#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IMILBitmapEffectConnectorInfo IMILBitmapEffectConnectorInfo;
typedef interface IMILBitmapEffectConnectionsInfo IMILBitmapEffectConnectionsInfo;
typedef interface IMILBitmapEffectConnections IMILBitmapEffectConnections;
typedef interface IMILBitmapEffect IMILBitmapEffect;
typedef interface IMILBitmapEffectImpl IMILBitmapEffectImpl;
typedef interface IMILBitmapEffectGroup IMILBitmapEffectGroup;
typedef interface IMILBitmapEffectGroupImpl IMILBitmapEffectGroupImpl;
typedef interface IMILBitmapEffectRenderContext IMILBitmapEffectRenderContext;
typedef interface IMILBitmapEffectRenderContextImpl IMILBitmapEffectRenderContextImpl;
typedef interface IMILBitmapEffectFactory IMILBitmapEffectFactory;
typedef interface IMILBitmapEffectPrimitive IMILBitmapEffectPrimitive;
typedef interface IMILBitmapEffectPrimitiveImpl IMILBitmapEffectPrimitiveImpl;
typedef interface IMILBitmapEffects IMILBitmapEffects;
typedef interface IMILBitmapEffectConnector IMILBitmapEffectConnector;
typedef interface IMILBitmapEffectInputConnector IMILBitmapEffectInputConnector;
typedef interface IMILBitmapEffectOutputConnector IMILBitmapEffectOutputConnector;
typedef interface IMILBitmapEffectOutputConnectorImpl IMILBitmapEffectOutputConnectorImpl;
typedef interface IMILBitmapEffectInteriorInputConnector IMILBitmapEffectInteriorInputConnector;
typedef interface IMILBitmapEffectInteriorOutputConnector IMILBitmapEffectInteriorOutputConnector;
typedef interface IMILBitmapEffectEvents IMILBitmapEffectEvents;
#include "oaidl.h"
#include "ocidl.h"
#include "wincodec.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if 0
typedef DWORD MilPoint2D;
typedef DWORD MilRectD;
typedef DWORD MilMatrix3x2D;
#endif
struct MilRectD
{
    DOUBLE left;
    DOUBLE top;
    DOUBLE right;
    DOUBLE bottom;
};
struct MilPoint2D
{
    DOUBLE X;
    DOUBLE Y;
};
struct MilMatrix3x2D
{
    DOUBLE S_11;
    DOUBLE S_12;
    DOUBLE S_21;
    DOUBLE S_22;
    DOUBLE DX;
    DOUBLE DY;
};
typedef MilPoint2D MIL_2DPOINTD;
typedef MilMatrix3x2D MIL_MATRIX3X2D;
extern RPC_IF_HANDLE __MIDL_itf_mileffects_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mileffects_0000_0000_v0_0_s_ifspec;
DEFINE_GUID(CLSID_MILBitmapEffectGroup, 0xac9c1a9a, 0x7e18, 0x4f64, 0xac, 0x7e, 0x47, 0xcf, 0x7f, 0x05, 0x1e, 0x95);
DEFINE_GUID(CLSID_MILBitmapEffectBlur, 0xa924df87, 0x225d, 0x4373, 0x8f, 0x5b, 0xb9, 0xe, 0xc8, 0x5a, 0xe3, 0xde);
DEFINE_GUID(CLSID_MILBitmapEffectDropShadow, 0x459a3fbe, 0xd8ac, 0x4692, 0x87, 0x4b, 0x7a, 0x26, 0x57, 0x15, 0xaa, 0x16);
DEFINE_GUID(CLSID_MILBitmapEffectOuterGlow, 0xe2161bdd, 0x7eb6, 0x4725, 0x9c, 0x0b, 0x8a, 0x2a, 0x1b, 0x4f, 0x06, 0x67);
DEFINE_GUID(CLSID_MILBitmapEffectBevel, 0xfd361dbe, 0x6c9b, 0x4de0, 0x82, 0x90, 0xf6, 0x40, 0xc, 0x27, 0x37, 0xed);
DEFINE_GUID(CLSID_MILBitmapEffectEmboss, 0xcd299846, 0x824f, 0x47ec, 0xa0, 0x07, 0x12, 0xaa, 0x76, 0x7f, 0x28, 0x16);
extern STDMETHODIMP MILCreateBitmapEffectFactory(DWORD dwSDKVersion, IMILBitmapEffectFactory **ppFactory);
typedef REFGUID REFWICPixelFormatGUID;
typedef GUID WICPixelFormatGUID;
typedef struct MILMatrixF
    {
    DOUBLE _11;
    DOUBLE _12;
    DOUBLE _13;
    DOUBLE _14;
    DOUBLE _21;
    DOUBLE _22;
    DOUBLE _23;
    DOUBLE _24;
    DOUBLE _31;
    DOUBLE _32;
    DOUBLE _33;
    DOUBLE _34;
    DOUBLE _41;
    DOUBLE _42;
    DOUBLE _43;
    DOUBLE _44;
    } MILMatrixF;
EXTERN_C const IID LIBID_MILEffects;
EXTERN_C const IID IID_IMILBitmapEffectConnectorInfo;
    typedef struct IMILBitmapEffectConnectorInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectConnectorInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectConnectorInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectConnectorInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetIndex )(
            __RPC__in IMILBitmapEffectConnectorInfo * This,
                                __RPC__out ULONG *puiIndex);
        HRESULT ( STDMETHODCALLTYPE *GetOptimalFormat )(
            __RPC__in IMILBitmapEffectConnectorInfo * This,
                                __RPC__out WICPixelFormatGUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetNumberFormats )(
            __RPC__in IMILBitmapEffectConnectorInfo * This,
                                __RPC__out ULONG *pulNumberFormats);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            __RPC__in IMILBitmapEffectConnectorInfo * This,
                       ULONG ulIndex,
                                __RPC__out WICPixelFormatGUID *pFormat);
        END_INTERFACE
    } IMILBitmapEffectConnectorInfoVtbl;
    interface IMILBitmapEffectConnectorInfo
    {
        CONST_VTBL struct IMILBitmapEffectConnectorInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIndex(This,puiIndex) )
    ( (This)->lpVtbl -> GetOptimalFormat(This,pFormat) )
    ( (This)->lpVtbl -> GetNumberFormats(This,pulNumberFormats) )
    ( (This)->lpVtbl -> GetFormat(This,ulIndex,pFormat) )
EXTERN_C const IID IID_IMILBitmapEffectConnectionsInfo;
    typedef struct IMILBitmapEffectConnectionsInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectConnectionsInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectConnectionsInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectConnectionsInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetNumberInputs )(
            __RPC__in IMILBitmapEffectConnectionsInfo * This,
                                __RPC__out ULONG *puiNumInputs);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOutputs )(
            __RPC__in IMILBitmapEffectConnectionsInfo * This,
                                __RPC__out ULONG *puiNumOutputs);
        HRESULT ( STDMETHODCALLTYPE *GetInputConnectorInfo )(
            __RPC__in IMILBitmapEffectConnectionsInfo * This,
                       ULONG uiIndex,
                        __RPC__deref_out_opt IMILBitmapEffectConnectorInfo **ppConnectorInfo);
        HRESULT ( STDMETHODCALLTYPE *GetOutputConnectorInfo )(
            __RPC__in IMILBitmapEffectConnectionsInfo * This,
                       ULONG uiIndex,
                        __RPC__deref_out_opt IMILBitmapEffectConnectorInfo **ppConnectorInfo);
        END_INTERFACE
    } IMILBitmapEffectConnectionsInfoVtbl;
    interface IMILBitmapEffectConnectionsInfo
    {
        CONST_VTBL struct IMILBitmapEffectConnectionsInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNumberInputs(This,puiNumInputs) )
    ( (This)->lpVtbl -> GetNumberOutputs(This,puiNumOutputs) )
    ( (This)->lpVtbl -> GetInputConnectorInfo(This,uiIndex,ppConnectorInfo) )
    ( (This)->lpVtbl -> GetOutputConnectorInfo(This,uiIndex,ppConnectorInfo) )
EXTERN_C const IID IID_IMILBitmapEffectConnections;
    typedef struct IMILBitmapEffectConnectionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectConnections * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectConnections * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectConnections * This);
        HRESULT ( STDMETHODCALLTYPE *GetInputConnector )(
            __RPC__in IMILBitmapEffectConnections * This,
                       ULONG uiIndex,
                                __RPC__deref_out_opt IMILBitmapEffectInputConnector **ppConnector);
        HRESULT ( STDMETHODCALLTYPE *GetOutputConnector )(
            __RPC__in IMILBitmapEffectConnections * This,
                       ULONG uiIndex,
                                __RPC__deref_out_opt IMILBitmapEffectOutputConnector **ppConnector);
        END_INTERFACE
    } IMILBitmapEffectConnectionsVtbl;
    interface IMILBitmapEffectConnections
    {
        CONST_VTBL struct IMILBitmapEffectConnectionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInputConnector(This,uiIndex,ppConnector) )
    ( (This)->lpVtbl -> GetOutputConnector(This,uiIndex,ppConnector) )
EXTERN_C const IID IID_IMILBitmapEffect;
    typedef struct IMILBitmapEffectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffect * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffect * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffect * This);
        HRESULT ( STDMETHODCALLTYPE *GetOutput )(
            __RPC__in IMILBitmapEffect * This,
                       ULONG uiIndex,
                       __RPC__in_opt IMILBitmapEffectRenderContext *pContext,
                                __RPC__deref_out_opt IWICBitmapSource **ppBitmapSource);
        HRESULT ( STDMETHODCALLTYPE *GetParentEffect )(
            __RPC__in IMILBitmapEffect * This,
                                __RPC__deref_out_opt IMILBitmapEffectGroup **ppParentEffect);
        HRESULT ( STDMETHODCALLTYPE *SetInputSource )(
            __RPC__in IMILBitmapEffect * This,
                       ULONG uiIndex,
                       __RPC__in_opt IWICBitmapSource *pBitmapSource);
        END_INTERFACE
    } IMILBitmapEffectVtbl;
    interface IMILBitmapEffect
    {
        CONST_VTBL struct IMILBitmapEffectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOutput(This,uiIndex,pContext,ppBitmapSource) )
    ( (This)->lpVtbl -> GetParentEffect(This,ppParentEffect) )
    ( (This)->lpVtbl -> SetInputSource(This,uiIndex,pBitmapSource) )
EXTERN_C const IID IID_IMILBitmapEffectImpl;
    typedef struct IMILBitmapEffectImplVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectImpl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectImpl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectImpl * This);
        HRESULT ( STDMETHODCALLTYPE *IsInPlaceModificationAllowed )(
            __RPC__in IMILBitmapEffectImpl * This,
                       __RPC__in_opt IMILBitmapEffectOutputConnector *pOutputConnector,
                        __RPC__out VARIANT_BOOL *pfModifyInPlace);
        HRESULT ( STDMETHODCALLTYPE *SetParentEffect )(
            __RPC__in IMILBitmapEffectImpl * This,
                       __RPC__in_opt IMILBitmapEffectGroup *pParentEffect);
        HRESULT ( STDMETHODCALLTYPE *GetInputSource )(
            __RPC__in IMILBitmapEffectImpl * This,
                       ULONG uiIndex,
                                __RPC__deref_out_opt IWICBitmapSource **ppBitmapSource);
        HRESULT ( STDMETHODCALLTYPE *GetInputSourceBounds )(
            __RPC__in IMILBitmapEffectImpl * This,
                       ULONG uiIndex,
                        __RPC__out MilRectD *pRect);
        HRESULT ( STDMETHODCALLTYPE *GetInputBitmapSource )(
            __RPC__in IMILBitmapEffectImpl * This,
                       ULONG uiIndex,
                       __RPC__in_opt IMILBitmapEffectRenderContext *pRenderContext,
                            __RPC__inout VARIANT_BOOL *pfModifyInPlace,
                                __RPC__deref_out_opt IWICBitmapSource **ppBitmapSource);
        HRESULT ( STDMETHODCALLTYPE *GetOutputBitmapSource )(
            __RPC__in IMILBitmapEffectImpl * This,
                       ULONG uiIndex,
                       __RPC__in_opt IMILBitmapEffectRenderContext *pRenderContext,
                            __RPC__inout VARIANT_BOOL *pfModifyInPlace,
                                __RPC__deref_out_opt IWICBitmapSource **ppBitmapSource);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IMILBitmapEffectImpl * This,
                       __RPC__in_opt IUnknown *pInner);
        END_INTERFACE
    } IMILBitmapEffectImplVtbl;
    interface IMILBitmapEffectImpl
    {
        CONST_VTBL struct IMILBitmapEffectImplVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsInPlaceModificationAllowed(This,pOutputConnector,pfModifyInPlace) )
    ( (This)->lpVtbl -> SetParentEffect(This,pParentEffect) )
    ( (This)->lpVtbl -> GetInputSource(This,uiIndex,ppBitmapSource) )
    ( (This)->lpVtbl -> GetInputSourceBounds(This,uiIndex,pRect) )
    ( (This)->lpVtbl -> GetInputBitmapSource(This,uiIndex,pRenderContext,pfModifyInPlace,ppBitmapSource) )
    ( (This)->lpVtbl -> GetOutputBitmapSource(This,uiIndex,pRenderContext,pfModifyInPlace,ppBitmapSource) )
    ( (This)->lpVtbl -> Initialize(This,pInner) )
EXTERN_C const IID IID_IMILBitmapEffectGroup;
    typedef struct IMILBitmapEffectGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectGroup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectGroup * This);
        HRESULT ( STDMETHODCALLTYPE *GetInteriorInputConnector )(
            __RPC__in IMILBitmapEffectGroup * This,
                       ULONG uiIndex,
                                __RPC__deref_out_opt IMILBitmapEffectOutputConnector **ppConnector);
        HRESULT ( STDMETHODCALLTYPE *GetInteriorOutputConnector )(
            __RPC__in IMILBitmapEffectGroup * This,
                       ULONG uiIndex,
                                __RPC__deref_out_opt IMILBitmapEffectInputConnector **ppConnector);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IMILBitmapEffectGroup * This,
                       __RPC__in_opt IMILBitmapEffect *pEffect);
        END_INTERFACE
    } IMILBitmapEffectGroupVtbl;
    interface IMILBitmapEffectGroup
    {
        CONST_VTBL struct IMILBitmapEffectGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInteriorInputConnector(This,uiIndex,ppConnector) )
    ( (This)->lpVtbl -> GetInteriorOutputConnector(This,uiIndex,ppConnector) )
    ( (This)->lpVtbl -> Add(This,pEffect) )
EXTERN_C const IID IID_IMILBitmapEffectGroupImpl;
    typedef struct IMILBitmapEffectGroupImplVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectGroupImpl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectGroupImpl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectGroupImpl * This);
        HRESULT ( STDMETHODCALLTYPE *Preprocess )(
            __RPC__in IMILBitmapEffectGroupImpl * This,
                       __RPC__in_opt IMILBitmapEffectRenderContext *pContext);
        HRESULT ( STDMETHODCALLTYPE *GetNumberChildren )(
            __RPC__in IMILBitmapEffectGroupImpl * This,
                                __RPC__out ULONG *puiNumberChildren);
        HRESULT ( STDMETHODCALLTYPE *GetChildren )(
            __RPC__in IMILBitmapEffectGroupImpl * This,
                                __RPC__deref_out_opt IMILBitmapEffects **pChildren);
        END_INTERFACE
    } IMILBitmapEffectGroupImplVtbl;
    interface IMILBitmapEffectGroupImpl
    {
        CONST_VTBL struct IMILBitmapEffectGroupImplVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Preprocess(This,pContext) )
    ( (This)->lpVtbl -> GetNumberChildren(This,puiNumberChildren) )
    ( (This)->lpVtbl -> GetChildren(This,pChildren) )
EXTERN_C const IID IID_IMILBitmapEffectRenderContext;
    typedef struct IMILBitmapEffectRenderContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectRenderContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectRenderContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectRenderContext * This);
        HRESULT ( STDMETHODCALLTYPE *SetOutputPixelFormat )(
            __RPC__in IMILBitmapEffectRenderContext * This,
                       __RPC__in REFWICPixelFormatGUID format);
        HRESULT ( STDMETHODCALLTYPE *GetOutputPixelFormat )(
            __RPC__in IMILBitmapEffectRenderContext * This,
                                __RPC__out WICPixelFormatGUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *SetUseSoftwareRenderer )(
            __RPC__in IMILBitmapEffectRenderContext * This,
                       VARIANT_BOOL fSoftware);
        HRESULT ( STDMETHODCALLTYPE *SetInitialTransform )(
            __RPC__in IMILBitmapEffectRenderContext * This,
                       __RPC__in MILMatrixF *pMatrix);
        HRESULT ( STDMETHODCALLTYPE *GetFinalTransform )(
            __RPC__in IMILBitmapEffectRenderContext * This,
                        __RPC__out MILMatrixF *pMatrix);
        HRESULT ( STDMETHODCALLTYPE *SetOutputDPI )(
            __RPC__in IMILBitmapEffectRenderContext * This,
                       double dblDpiX,
                       double dblDpiY);
        HRESULT ( STDMETHODCALLTYPE *GetOutputDPI )(
            __RPC__in IMILBitmapEffectRenderContext * This,
                        __RPC__out double *pdblDpiX,
                        __RPC__out double *pdblDpiY);
        HRESULT ( STDMETHODCALLTYPE *SetRegionOfInterest )(
            __RPC__in IMILBitmapEffectRenderContext * This,
                       __RPC__in MilRectD *pRect);
        END_INTERFACE
    } IMILBitmapEffectRenderContextVtbl;
    interface IMILBitmapEffectRenderContext
    {
        CONST_VTBL struct IMILBitmapEffectRenderContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetOutputPixelFormat(This,format) )
    ( (This)->lpVtbl -> GetOutputPixelFormat(This,pFormat) )
    ( (This)->lpVtbl -> SetUseSoftwareRenderer(This,fSoftware) )
    ( (This)->lpVtbl -> SetInitialTransform(This,pMatrix) )
    ( (This)->lpVtbl -> GetFinalTransform(This,pMatrix) )
    ( (This)->lpVtbl -> SetOutputDPI(This,dblDpiX,dblDpiY) )
    ( (This)->lpVtbl -> GetOutputDPI(This,pdblDpiX,pdblDpiY) )
    ( (This)->lpVtbl -> SetRegionOfInterest(This,pRect) )
EXTERN_C const IID IID_IMILBitmapEffectRenderContextImpl;
    typedef struct IMILBitmapEffectRenderContextImplVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectRenderContextImpl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectRenderContextImpl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectRenderContextImpl * This);
        HRESULT ( STDMETHODCALLTYPE *GetUseSoftwareRenderer )(
            __RPC__in IMILBitmapEffectRenderContextImpl * This,
                                __RPC__out VARIANT_BOOL *pfSoftware);
        HRESULT ( STDMETHODCALLTYPE *GetTransform )(
            __RPC__in IMILBitmapEffectRenderContextImpl * This,
                            __RPC__inout MILMatrixF *pMatrix);
        HRESULT ( STDMETHODCALLTYPE *UpdateTransform )(
            __RPC__in IMILBitmapEffectRenderContextImpl * This,
                       __RPC__in MILMatrixF *pMatrix);
        HRESULT ( STDMETHODCALLTYPE *GetOutputBounds )(
            __RPC__in IMILBitmapEffectRenderContextImpl * This,
                            __RPC__inout MilRectD *pRect);
        HRESULT ( STDMETHODCALLTYPE *UpdateOutputBounds )(
            __RPC__in IMILBitmapEffectRenderContextImpl * This,
                       __RPC__in MilRectD *pRect);
        END_INTERFACE
    } IMILBitmapEffectRenderContextImplVtbl;
    interface IMILBitmapEffectRenderContextImpl
    {
        CONST_VTBL struct IMILBitmapEffectRenderContextImplVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUseSoftwareRenderer(This,pfSoftware) )
    ( (This)->lpVtbl -> GetTransform(This,pMatrix) )
    ( (This)->lpVtbl -> UpdateTransform(This,pMatrix) )
    ( (This)->lpVtbl -> GetOutputBounds(This,pRect) )
    ( (This)->lpVtbl -> UpdateOutputBounds(This,pRect) )
EXTERN_C const IID IID_IMILBitmapEffectFactory;
    typedef struct IMILBitmapEffectFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateEffect )(
            __RPC__in IMILBitmapEffectFactory * This,
                       __RPC__in const GUID *pguidEffect,
                        __RPC__deref_out_opt IMILBitmapEffect **ppEffect);
        HRESULT ( STDMETHODCALLTYPE *CreateContext )(
            __RPC__in IMILBitmapEffectFactory * This,
                        __RPC__deref_out_opt IMILBitmapEffectRenderContext **ppContext);
        HRESULT ( STDMETHODCALLTYPE *CreateEffectOuter )(
            __RPC__in IMILBitmapEffectFactory * This,
                        __RPC__deref_out_opt IMILBitmapEffect **ppEffect);
        END_INTERFACE
    } IMILBitmapEffectFactoryVtbl;
    interface IMILBitmapEffectFactory
    {
        CONST_VTBL struct IMILBitmapEffectFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateEffect(This,pguidEffect,ppEffect) )
    ( (This)->lpVtbl -> CreateContext(This,ppContext) )
    ( (This)->lpVtbl -> CreateEffectOuter(This,ppEffect) )
EXTERN_C const IID IID_IMILBitmapEffectPrimitive;
    typedef struct IMILBitmapEffectPrimitiveVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectPrimitive * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectPrimitive * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectPrimitive * This);
        HRESULT ( STDMETHODCALLTYPE *GetOutput )(
            __RPC__in IMILBitmapEffectPrimitive * This,
                       ULONG uiIndex,
                       __RPC__in_opt IMILBitmapEffectRenderContext *pContext,
                            __RPC__inout VARIANT_BOOL *pfModifyInPlace,
                                __RPC__deref_out_opt IWICBitmapSource **ppBitmapSource);
        HRESULT ( STDMETHODCALLTYPE *TransformPoint )(
            __RPC__in IMILBitmapEffectPrimitive * This,
                       ULONG uiIndex,
                            __RPC__inout MilPoint2D *p,
                       VARIANT_BOOL fForwardTransform,
                       __RPC__in_opt IMILBitmapEffectRenderContext *pContext,
                        __RPC__out VARIANT_BOOL *pfPointTransformed);
        HRESULT ( STDMETHODCALLTYPE *TransformRect )(
            __RPC__in IMILBitmapEffectPrimitive * This,
                       ULONG uiIndex,
                            __RPC__inout MilRectD *p,
                       VARIANT_BOOL fForwardTransform,
                       __RPC__in_opt IMILBitmapEffectRenderContext *pContext);
        HRESULT ( STDMETHODCALLTYPE *HasAffineTransform )(
            __RPC__in IMILBitmapEffectPrimitive * This,
                       ULONG uiIndex,
                        __RPC__out VARIANT_BOOL *pfAffine);
        HRESULT ( STDMETHODCALLTYPE *HasInverseTransform )(
            __RPC__in IMILBitmapEffectPrimitive * This,
                       ULONG uiIndex,
                        __RPC__out VARIANT_BOOL *pfHasInverse);
        HRESULT ( STDMETHODCALLTYPE *GetAffineMatrix )(
            __RPC__in IMILBitmapEffectPrimitive * This,
                       ULONG uiIndex,
                            __RPC__inout MilMatrix3x2D *pMatrix);
        END_INTERFACE
    } IMILBitmapEffectPrimitiveVtbl;
    interface IMILBitmapEffectPrimitive
    {
        CONST_VTBL struct IMILBitmapEffectPrimitiveVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOutput(This,uiIndex,pContext,pfModifyInPlace,ppBitmapSource) )
    ( (This)->lpVtbl -> TransformPoint(This,uiIndex,p,fForwardTransform,pContext,pfPointTransformed) )
    ( (This)->lpVtbl -> TransformRect(This,uiIndex,p,fForwardTransform,pContext) )
    ( (This)->lpVtbl -> HasAffineTransform(This,uiIndex,pfAffine) )
    ( (This)->lpVtbl -> HasInverseTransform(This,uiIndex,pfHasInverse) )
    ( (This)->lpVtbl -> GetAffineMatrix(This,uiIndex,pMatrix) )
EXTERN_C const IID IID_IMILBitmapEffectPrimitiveImpl;
    typedef struct IMILBitmapEffectPrimitiveImplVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectPrimitiveImpl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectPrimitiveImpl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectPrimitiveImpl * This);
        HRESULT ( STDMETHODCALLTYPE *IsDirty )(
            __RPC__in IMILBitmapEffectPrimitiveImpl * This,
                       ULONG uiOutputIndex,
                                __RPC__out VARIANT_BOOL *pfDirty);
        HRESULT ( STDMETHODCALLTYPE *IsVolatile )(
            __RPC__in IMILBitmapEffectPrimitiveImpl * This,
                       ULONG uiOutputIndex,
                                __RPC__out VARIANT_BOOL *pfVolatile);
        END_INTERFACE
    } IMILBitmapEffectPrimitiveImplVtbl;
    interface IMILBitmapEffectPrimitiveImpl
    {
        CONST_VTBL struct IMILBitmapEffectPrimitiveImplVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsDirty(This,uiOutputIndex,pfDirty) )
    ( (This)->lpVtbl -> IsVolatile(This,uiOutputIndex,pfVolatile) )
EXTERN_C const IID IID_IMILBitmapEffects;
    typedef struct IMILBitmapEffectsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffects * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffects * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffects * This);
        HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in IMILBitmapEffects * This,
                                __RPC__deref_out_opt IUnknown **ppiuReturn);
                        HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IMILBitmapEffects * This,
                                __RPC__deref_out_opt IMILBitmapEffectGroup **ppEffect);
        HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IMILBitmapEffects * This,
            ULONG uindex,
                                __RPC__deref_out_opt IMILBitmapEffect **ppEffect);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IMILBitmapEffects * This,
                                __RPC__out ULONG *puiCount);
        END_INTERFACE
    } IMILBitmapEffectsVtbl;
    interface IMILBitmapEffects
    {
        CONST_VTBL struct IMILBitmapEffectsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> _NewEnum(This,ppiuReturn) )
    ( (This)->lpVtbl -> get_Parent(This,ppEffect) )
    ( (This)->lpVtbl -> Item(This,uindex,ppEffect) )
    ( (This)->lpVtbl -> get_Count(This,puiCount) )
EXTERN_C const IID IID_IMILBitmapEffectConnector;
    typedef struct IMILBitmapEffectConnectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectConnector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectConnector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectConnector * This);
        HRESULT ( STDMETHODCALLTYPE *GetIndex )(
            __RPC__in IMILBitmapEffectConnector * This,
                                __RPC__out ULONG *puiIndex);
        HRESULT ( STDMETHODCALLTYPE *GetOptimalFormat )(
            __RPC__in IMILBitmapEffectConnector * This,
                                __RPC__out WICPixelFormatGUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetNumberFormats )(
            __RPC__in IMILBitmapEffectConnector * This,
                                __RPC__out ULONG *pulNumberFormats);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            __RPC__in IMILBitmapEffectConnector * This,
                       ULONG ulIndex,
                                __RPC__out WICPixelFormatGUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *IsConnected )(
            __RPC__in IMILBitmapEffectConnector * This,
                                __RPC__out VARIANT_BOOL *pfConnected);
        HRESULT ( STDMETHODCALLTYPE *GetBitmapEffect )(
            __RPC__in IMILBitmapEffectConnector * This,
                                __RPC__deref_out_opt IMILBitmapEffect **ppEffect);
        END_INTERFACE
    } IMILBitmapEffectConnectorVtbl;
    interface IMILBitmapEffectConnector
    {
        CONST_VTBL struct IMILBitmapEffectConnectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIndex(This,puiIndex) )
    ( (This)->lpVtbl -> GetOptimalFormat(This,pFormat) )
    ( (This)->lpVtbl -> GetNumberFormats(This,pulNumberFormats) )
    ( (This)->lpVtbl -> GetFormat(This,ulIndex,pFormat) )
    ( (This)->lpVtbl -> IsConnected(This,pfConnected) )
    ( (This)->lpVtbl -> GetBitmapEffect(This,ppEffect) )
EXTERN_C const IID IID_IMILBitmapEffectInputConnector;
    typedef struct IMILBitmapEffectInputConnectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectInputConnector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectInputConnector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectInputConnector * This);
        HRESULT ( STDMETHODCALLTYPE *GetIndex )(
            __RPC__in IMILBitmapEffectInputConnector * This,
                                __RPC__out ULONG *puiIndex);
        HRESULT ( STDMETHODCALLTYPE *GetOptimalFormat )(
            __RPC__in IMILBitmapEffectInputConnector * This,
                                __RPC__out WICPixelFormatGUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetNumberFormats )(
            __RPC__in IMILBitmapEffectInputConnector * This,
                                __RPC__out ULONG *pulNumberFormats);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            __RPC__in IMILBitmapEffectInputConnector * This,
                       ULONG ulIndex,
                                __RPC__out WICPixelFormatGUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *IsConnected )(
            __RPC__in IMILBitmapEffectInputConnector * This,
                                __RPC__out VARIANT_BOOL *pfConnected);
        HRESULT ( STDMETHODCALLTYPE *GetBitmapEffect )(
            __RPC__in IMILBitmapEffectInputConnector * This,
                                __RPC__deref_out_opt IMILBitmapEffect **ppEffect);
        HRESULT ( STDMETHODCALLTYPE *ConnectTo )(
            __RPC__in IMILBitmapEffectInputConnector * This,
                       __RPC__in_opt IMILBitmapEffectOutputConnector *pConnector);
        HRESULT ( STDMETHODCALLTYPE *GetConnection )(
            __RPC__in IMILBitmapEffectInputConnector * This,
                                __RPC__deref_out_opt IMILBitmapEffectOutputConnector **ppConnector);
        END_INTERFACE
    } IMILBitmapEffectInputConnectorVtbl;
    interface IMILBitmapEffectInputConnector
    {
        CONST_VTBL struct IMILBitmapEffectInputConnectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIndex(This,puiIndex) )
    ( (This)->lpVtbl -> GetOptimalFormat(This,pFormat) )
    ( (This)->lpVtbl -> GetNumberFormats(This,pulNumberFormats) )
    ( (This)->lpVtbl -> GetFormat(This,ulIndex,pFormat) )
    ( (This)->lpVtbl -> IsConnected(This,pfConnected) )
    ( (This)->lpVtbl -> GetBitmapEffect(This,ppEffect) )
    ( (This)->lpVtbl -> ConnectTo(This,pConnector) )
    ( (This)->lpVtbl -> GetConnection(This,ppConnector) )
EXTERN_C const IID IID_IMILBitmapEffectOutputConnector;
    typedef struct IMILBitmapEffectOutputConnectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectOutputConnector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectOutputConnector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectOutputConnector * This);
        HRESULT ( STDMETHODCALLTYPE *GetIndex )(
            __RPC__in IMILBitmapEffectOutputConnector * This,
                                __RPC__out ULONG *puiIndex);
        HRESULT ( STDMETHODCALLTYPE *GetOptimalFormat )(
            __RPC__in IMILBitmapEffectOutputConnector * This,
                                __RPC__out WICPixelFormatGUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetNumberFormats )(
            __RPC__in IMILBitmapEffectOutputConnector * This,
                                __RPC__out ULONG *pulNumberFormats);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            __RPC__in IMILBitmapEffectOutputConnector * This,
                       ULONG ulIndex,
                                __RPC__out WICPixelFormatGUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *IsConnected )(
            __RPC__in IMILBitmapEffectOutputConnector * This,
                                __RPC__out VARIANT_BOOL *pfConnected);
        HRESULT ( STDMETHODCALLTYPE *GetBitmapEffect )(
            __RPC__in IMILBitmapEffectOutputConnector * This,
                                __RPC__deref_out_opt IMILBitmapEffect **ppEffect);
        HRESULT ( STDMETHODCALLTYPE *GetNumberConnections )(
            __RPC__in IMILBitmapEffectOutputConnector * This,
                                __RPC__out ULONG *puiNumberConnections);
        HRESULT ( STDMETHODCALLTYPE *GetConnection )(
            __RPC__in IMILBitmapEffectOutputConnector * This,
                       ULONG uiIndex,
                                __RPC__deref_out_opt IMILBitmapEffectInputConnector **ppConnection);
        END_INTERFACE
    } IMILBitmapEffectOutputConnectorVtbl;
    interface IMILBitmapEffectOutputConnector
    {
        CONST_VTBL struct IMILBitmapEffectOutputConnectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIndex(This,puiIndex) )
    ( (This)->lpVtbl -> GetOptimalFormat(This,pFormat) )
    ( (This)->lpVtbl -> GetNumberFormats(This,pulNumberFormats) )
    ( (This)->lpVtbl -> GetFormat(This,ulIndex,pFormat) )
    ( (This)->lpVtbl -> IsConnected(This,pfConnected) )
    ( (This)->lpVtbl -> GetBitmapEffect(This,ppEffect) )
    ( (This)->lpVtbl -> GetNumberConnections(This,puiNumberConnections) )
    ( (This)->lpVtbl -> GetConnection(This,uiIndex,ppConnection) )
EXTERN_C const IID IID_IMILBitmapEffectOutputConnectorImpl;
    typedef struct IMILBitmapEffectOutputConnectorImplVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectOutputConnectorImpl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectOutputConnectorImpl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectOutputConnectorImpl * This);
        HRESULT ( STDMETHODCALLTYPE *AddBackLink )(
            __RPC__in IMILBitmapEffectOutputConnectorImpl * This,
                       __RPC__in_opt IMILBitmapEffectInputConnector *pConnection);
        HRESULT ( STDMETHODCALLTYPE *RemoveBackLink )(
            __RPC__in IMILBitmapEffectOutputConnectorImpl * This,
                       __RPC__in_opt IMILBitmapEffectInputConnector *pConnection);
        END_INTERFACE
    } IMILBitmapEffectOutputConnectorImplVtbl;
    interface IMILBitmapEffectOutputConnectorImpl
    {
        CONST_VTBL struct IMILBitmapEffectOutputConnectorImplVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddBackLink(This,pConnection) )
    ( (This)->lpVtbl -> RemoveBackLink(This,pConnection) )
EXTERN_C const IID IID_IMILBitmapEffectInteriorInputConnector;
    typedef struct IMILBitmapEffectInteriorInputConnectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectInteriorInputConnector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectInteriorInputConnector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectInteriorInputConnector * This);
        HRESULT ( STDMETHODCALLTYPE *GetInputConnector )(
            __RPC__in IMILBitmapEffectInteriorInputConnector * This,
                                __RPC__deref_out_opt IMILBitmapEffectInputConnector **pInputConnector);
        END_INTERFACE
    } IMILBitmapEffectInteriorInputConnectorVtbl;
    interface IMILBitmapEffectInteriorInputConnector
    {
        CONST_VTBL struct IMILBitmapEffectInteriorInputConnectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInputConnector(This,pInputConnector) )
EXTERN_C const IID IID_IMILBitmapEffectInteriorOutputConnector;
    typedef struct IMILBitmapEffectInteriorOutputConnectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectInteriorOutputConnector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectInteriorOutputConnector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectInteriorOutputConnector * This);
        HRESULT ( STDMETHODCALLTYPE *GetOutputConnector )(
            __RPC__in IMILBitmapEffectInteriorOutputConnector * This,
                                __RPC__deref_out_opt IMILBitmapEffectOutputConnector **pOutputConnector);
        END_INTERFACE
    } IMILBitmapEffectInteriorOutputConnectorVtbl;
    interface IMILBitmapEffectInteriorOutputConnector
    {
        CONST_VTBL struct IMILBitmapEffectInteriorOutputConnectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOutputConnector(This,pOutputConnector) )
EXTERN_C const IID IID_IMILBitmapEffectEvents;
    typedef struct IMILBitmapEffectEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMILBitmapEffectEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMILBitmapEffectEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMILBitmapEffectEvents * This);
        HRESULT ( STDMETHODCALLTYPE *PropertyChange )(
            __RPC__in IMILBitmapEffectEvents * This,
                       __RPC__in_opt IMILBitmapEffect *pEffect,
                       __RPC__in BSTR bstrPropertyName);
        HRESULT ( STDMETHODCALLTYPE *DirtyRegion )(
            __RPC__in IMILBitmapEffectEvents * This,
                       __RPC__in_opt IMILBitmapEffect *pEffect,
                       __RPC__in MilRectD *pRect);
        END_INTERFACE
    } IMILBitmapEffectEventsVtbl;
    interface IMILBitmapEffectEvents
    {
        CONST_VTBL struct IMILBitmapEffectEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PropertyChange(This,pEffect,bstrPropertyName) )
    ( (This)->lpVtbl -> DirtyRegion(This,pEffect,pRect) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mileffects_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mileffects_0000_0001_v0_0_s_ifspec;
}
