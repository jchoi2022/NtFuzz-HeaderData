#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IInkD2DRenderer IInkD2DRenderer;
typedef interface IInkD2DRenderer2 IInkD2DRenderer2;
typedef class InkD2DRenderer InkD2DRenderer;
#include "oaidl.h"
#include "ocidl.h"
#include "inspectable.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum __MIDL___MIDL_itf_inkrenderer_0000_0000_0001
    {
        USE_SYSTEM_COLORS_WHEN_NECESSARY = 0,
        USE_SYSTEM_COLORS = 1,
        USE_ORIGINAL_COLORS = 2
    } INK_HIGH_CONTRAST_ADJUSTMENT;
extern RPC_IF_HANDLE __MIDL_itf_inkrenderer_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inkrenderer_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IInkD2DRenderer;
    typedef struct IInkD2DRendererVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkD2DRenderer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkD2DRenderer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkD2DRenderer * This);
        HRESULT ( STDMETHODCALLTYPE *Draw )(
            __RPC__in IInkD2DRenderer * This,
                       __RPC__in_opt IUnknown *pD2D1DeviceContext,
                       __RPC__in_opt IUnknown *pInkStrokeIterable,
                       BOOL fHighContrast);
        END_INTERFACE
    } IInkD2DRendererVtbl;
    interface IInkD2DRenderer
    {
        CONST_VTBL struct IInkD2DRendererVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Draw(This,pD2D1DeviceContext,pInkStrokeIterable,fHighContrast) )
EXTERN_C const IID IID_IInkD2DRenderer2;
    typedef struct IInkD2DRenderer2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkD2DRenderer2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkD2DRenderer2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkD2DRenderer2 * This);
        HRESULT ( STDMETHODCALLTYPE *Draw )(
            __RPC__in IInkD2DRenderer2 * This,
                       __RPC__in_opt IUnknown *pD2D1DeviceContext,
                       __RPC__in_opt IUnknown *pInkStrokeIterable,
                       INK_HIGH_CONTRAST_ADJUSTMENT highContrastAdjustment);
        END_INTERFACE
    } IInkD2DRenderer2Vtbl;
    interface IInkD2DRenderer2
    {
        CONST_VTBL struct IInkD2DRenderer2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Draw(This,pD2D1DeviceContext,pInkStrokeIterable,highContrastAdjustment) )
EXTERN_C const IID LIBID_InkD2DRendererLib;
EXTERN_C const CLSID CLSID_InkD2DRenderer;
class DECLSPEC_UUID("4044e60c-7b01-4671-a97c-04e0210a07a5")
InkD2DRenderer;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_inkrenderer_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inkrenderer_0000_0003_v0_0_s_ifspec;
}
