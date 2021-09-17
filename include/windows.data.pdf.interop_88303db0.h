#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IPdfRendererNative IPdfRendererNative;
#include "oaidl.h"
#include "dxgi.h"
extern "C"{
#include <d2dbasetypes.h>
#if 0
typedef DWORD *ID2D1DeviceContext;
typedef DWORD *D2D_RECT_F;
typedef DWORD *D2D_COLOR_F;
#endif
typedef interface ID2D1DeviceContext ID2D1DeviceContext;
typedef HRESULT (WINAPI* PFN_PDF_CREATE_RENDERER)(
    _In_ IDXGIDevice*,
    _Out_ IPdfRendererNative**);
HRESULT WINAPI PdfCreateRenderer(
    _In_ IDXGIDevice* pDevice,
    _Out_ IPdfRendererNative** ppRenderer);
typedef struct PDF_RENDER_PARAMS
    {
    D2D_RECT_F SourceRect;
    UINT32 DestinationWidth;
    UINT32 DestinationHeight;
    D2D_COLOR_F BackgroundColor;
    BOOLEAN IgnoreHighContrast;
    } PDF_RENDER_PARAMS;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf2Einterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf2Einterop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IPdfRendererNative;
    typedef struct IPdfRendererNativeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPdfRendererNative * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPdfRendererNative * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPdfRendererNative * This);
        HRESULT ( STDMETHODCALLTYPE *RenderPageToSurface )(
            IPdfRendererNative * This,
            _In_ IUnknown *pdfPage,
            _In_ IDXGISurface *pSurface,
            _In_ POINT offset,
            _In_opt_ PDF_RENDER_PARAMS *pRenderParams);
        HRESULT ( STDMETHODCALLTYPE *RenderPageToDeviceContext )(
            IPdfRendererNative * This,
            _In_ IUnknown *pdfPage,
            _In_ ID2D1DeviceContext *pD2DDeviceContext,
            _In_opt_ PDF_RENDER_PARAMS *pRenderParams);
        END_INTERFACE
    } IPdfRendererNativeVtbl;
    interface IPdfRendererNative
    {
        CONST_VTBL struct IPdfRendererNativeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RenderPageToSurface(This,pdfPage,pSurface,offset,pRenderParams) )
    ( (This)->lpVtbl -> RenderPageToDeviceContext(This,pdfPage,pD2DDeviceContext,pRenderParams) )
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf2Einterop_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf2Einterop_0000_0001_v0_0_s_ifspec;
}
