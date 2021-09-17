#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IXpsRasterizerNotificationCallback IXpsRasterizerNotificationCallback;
typedef interface IXpsRasterizer IXpsRasterizer;
typedef interface IXpsRasterizationFactory IXpsRasterizationFactory;
typedef interface IXpsRasterizationFactory1 IXpsRasterizationFactory1;
typedef interface IXpsRasterizationFactory2 IXpsRasterizationFactory2;
#include "wincodec.h"
#include "XpsObjectModel.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_xpsrassvc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsrassvc_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IXpsRasterizerNotificationCallback;
    typedef struct IXpsRasterizerNotificationCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsRasterizerNotificationCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsRasterizerNotificationCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsRasterizerNotificationCallback * This);
                           HRESULT ( STDMETHODCALLTYPE *Continue )(
            __RPC__in IXpsRasterizerNotificationCallback * This);
        END_INTERFACE
    } IXpsRasterizerNotificationCallbackVtbl;
    interface IXpsRasterizerNotificationCallback
    {
        CONST_VTBL struct IXpsRasterizerNotificationCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Continue(This) )
typedef
enum __MIDL___MIDL_itf_xpsrassvc_0000_0001_0001
    {
        XPSRAS_RENDERING_MODE_ANTIALIASED = 0,
        XPSRAS_RENDERING_MODE_ALIASED = 1
    } XPSRAS_RENDERING_MODE;
extern RPC_IF_HANDLE __MIDL_itf_xpsrassvc_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsrassvc_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IXpsRasterizer;
    typedef struct IXpsRasterizerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsRasterizer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsRasterizer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsRasterizer * This);
                           HRESULT ( STDMETHODCALLTYPE *RasterizeRect )(
            __RPC__in IXpsRasterizer * This,
                       INT x,
                       INT y,
                       INT width,
                       INT height,
                       __RPC__in_opt IXpsRasterizerNotificationCallback *notificationCallback,
                        __RPC__deref_out_opt IWICBitmap **bitmap);
                           HRESULT ( STDMETHODCALLTYPE *SetMinimalLineWidth )(
            __RPC__in IXpsRasterizer * This,
                       INT width);
        END_INTERFACE
    } IXpsRasterizerVtbl;
    interface IXpsRasterizer
    {
        CONST_VTBL struct IXpsRasterizerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RasterizeRect(This,x,y,width,height,notificationCallback,bitmap) )
    ( (This)->lpVtbl -> SetMinimalLineWidth(This,width) )
EXTERN_C const IID IID_IXpsRasterizationFactory;
    typedef struct IXpsRasterizationFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsRasterizationFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsRasterizationFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsRasterizationFactory * This);
                           HRESULT ( STDMETHODCALLTYPE *CreateRasterizer )(
            __RPC__in IXpsRasterizationFactory * This,
                       __RPC__in_opt IXpsOMPage *xpsPage,
                       FLOAT DPI,
                       XPSRAS_RENDERING_MODE nonTextRenderingMode,
                       XPSRAS_RENDERING_MODE textRenderingMode,
                        __RPC__deref_out_opt IXpsRasterizer **ppIXPSRasterizer);
        END_INTERFACE
    } IXpsRasterizationFactoryVtbl;
    interface IXpsRasterizationFactory
    {
        CONST_VTBL struct IXpsRasterizationFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateRasterizer(This,xpsPage,DPI,nonTextRenderingMode,textRenderingMode,ppIXPSRasterizer) )
typedef
enum __MIDL___MIDL_itf_xpsrassvc_0000_0003_0001
    {
        XPSRAS_PIXEL_FORMAT_32BPP_PBGRA_UINT_SRGB = 1,
        XPSRAS_PIXEL_FORMAT_64BPP_PRGBA_HALF_SCRGB = ( XPSRAS_PIXEL_FORMAT_32BPP_PBGRA_UINT_SRGB + 1 ) ,
        XPSRAS_PIXEL_FORMAT_128BPP_PRGBA_FLOAT_SCRGB = ( XPSRAS_PIXEL_FORMAT_64BPP_PRGBA_HALF_SCRGB + 1 )
    } XPSRAS_PIXEL_FORMAT;
extern RPC_IF_HANDLE __MIDL_itf_xpsrassvc_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsrassvc_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IXpsRasterizationFactory1;
    typedef struct IXpsRasterizationFactory1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsRasterizationFactory1 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsRasterizationFactory1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsRasterizationFactory1 * This);
                           HRESULT ( STDMETHODCALLTYPE *CreateRasterizer )(
            __RPC__in IXpsRasterizationFactory1 * This,
                       __RPC__in_opt IXpsOMPage *xpsPage,
                       FLOAT DPI,
                       XPSRAS_RENDERING_MODE nonTextRenderingMode,
                       XPSRAS_RENDERING_MODE textRenderingMode,
                       XPSRAS_PIXEL_FORMAT pixelFormat,
                        __RPC__deref_out_opt IXpsRasterizer **ppIXPSRasterizer);
        END_INTERFACE
    } IXpsRasterizationFactory1Vtbl;
    interface IXpsRasterizationFactory1
    {
        CONST_VTBL struct IXpsRasterizationFactory1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateRasterizer(This,xpsPage,DPI,nonTextRenderingMode,textRenderingMode,pixelFormat,ppIXPSRasterizer) )
typedef
enum __MIDL___MIDL_itf_xpsrassvc_0000_0004_0001
    {
        XPSRAS_BACKGROUND_COLOR_TRANSPARENT = 0,
        XPSRAS_BACKGROUND_COLOR_OPAQUE = 1
    } XPSRAS_BACKGROUND_COLOR;
extern RPC_IF_HANDLE __MIDL_itf_xpsrassvc_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsrassvc_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IXpsRasterizationFactory2;
    typedef struct IXpsRasterizationFactory2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsRasterizationFactory2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsRasterizationFactory2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsRasterizationFactory2 * This);
                           HRESULT ( STDMETHODCALLTYPE *CreateRasterizer )(
            __RPC__in IXpsRasterizationFactory2 * This,
                       __RPC__in_opt IXpsOMPage *xpsPage,
                       FLOAT DPIX,
                       FLOAT DPIY,
                       XPSRAS_RENDERING_MODE nonTextRenderingMode,
                       XPSRAS_RENDERING_MODE textRenderingMode,
                       XPSRAS_PIXEL_FORMAT pixelFormat,
                       XPSRAS_BACKGROUND_COLOR backgroundColor,
                        __RPC__deref_out_opt IXpsRasterizer **ppIXpsRasterizer);
        END_INTERFACE
    } IXpsRasterizationFactory2Vtbl;
    interface IXpsRasterizationFactory2
    {
        CONST_VTBL struct IXpsRasterizationFactory2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateRasterizer(This,xpsPage,DPIX,DPIY,nonTextRenderingMode,textRenderingMode,pixelFormat,backgroundColor,ppIXpsRasterizer) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_xpsrassvc_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsrassvc_0000_0005_v0_0_s_ifspec;
}
