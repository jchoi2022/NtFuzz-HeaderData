#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISurfaceImageSourceNative ISurfaceImageSourceNative;
typedef interface IVirtualSurfaceUpdatesCallbackNative IVirtualSurfaceUpdatesCallbackNative;
typedef interface IVirtualSurfaceImageSourceNative IVirtualSurfaceImageSourceNative;
typedef interface ISwapChainBackgroundPanelNative ISwapChainBackgroundPanelNative;
typedef interface ISurfaceImageSourceManagerNative ISurfaceImageSourceManagerNative;
typedef interface ISurfaceImageSourceNativeWithD2D ISurfaceImageSourceNativeWithD2D;
typedef interface ISwapChainPanelNative ISwapChainPanelNative;
typedef interface ISwapChainPanelNative2 ISwapChainPanelNative2;
#include "oaidl.h"
#include "dxgi.h"
extern "C"{
#if 0
typedef RECT *REFRECT;
#endif
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Emedia2Edxinterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Emedia2Edxinterop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISurfaceImageSourceNative;
    typedef struct ISurfaceImageSourceNativeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISurfaceImageSourceNative * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISurfaceImageSourceNative * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISurfaceImageSourceNative * This);
        HRESULT ( STDMETHODCALLTYPE *SetDevice )(
            ISurfaceImageSourceNative * This,
            _In_ IDXGIDevice *device);
        HRESULT ( STDMETHODCALLTYPE *BeginDraw )(
            ISurfaceImageSourceNative * This,
            _In_ RECT updateRect,
            _Out_ IDXGISurface **surface,
            _Out_ POINT *offset);
        HRESULT ( STDMETHODCALLTYPE *EndDraw )(
            ISurfaceImageSourceNative * This);
        END_INTERFACE
    } ISurfaceImageSourceNativeVtbl;
    interface ISurfaceImageSourceNative
    {
        CONST_VTBL struct ISurfaceImageSourceNativeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDevice(This,device) )
    ( (This)->lpVtbl -> BeginDraw(This,updateRect,surface,offset) )
    ( (This)->lpVtbl -> EndDraw(This) )
EXTERN_C const IID IID_IVirtualSurfaceUpdatesCallbackNative;
    typedef struct IVirtualSurfaceUpdatesCallbackNativeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVirtualSurfaceUpdatesCallbackNative * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVirtualSurfaceUpdatesCallbackNative * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVirtualSurfaceUpdatesCallbackNative * This);
        HRESULT ( STDMETHODCALLTYPE *UpdatesNeeded )(
            IVirtualSurfaceUpdatesCallbackNative * This);
        END_INTERFACE
    } IVirtualSurfaceUpdatesCallbackNativeVtbl;
    interface IVirtualSurfaceUpdatesCallbackNative
    {
        CONST_VTBL struct IVirtualSurfaceUpdatesCallbackNativeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> UpdatesNeeded(This) )
EXTERN_C const IID IID_IVirtualSurfaceImageSourceNative;
    typedef struct IVirtualSurfaceImageSourceNativeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVirtualSurfaceImageSourceNative * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVirtualSurfaceImageSourceNative * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVirtualSurfaceImageSourceNative * This);
        HRESULT ( STDMETHODCALLTYPE *SetDevice )(
            IVirtualSurfaceImageSourceNative * This,
            _In_ IDXGIDevice *device);
        HRESULT ( STDMETHODCALLTYPE *BeginDraw )(
            IVirtualSurfaceImageSourceNative * This,
            _In_ RECT updateRect,
            _Out_ IDXGISurface **surface,
            _Out_ POINT *offset);
        HRESULT ( STDMETHODCALLTYPE *EndDraw )(
            IVirtualSurfaceImageSourceNative * This);
        HRESULT ( STDMETHODCALLTYPE *Invalidate )(
            IVirtualSurfaceImageSourceNative * This,
            _In_ RECT updateRect);
        HRESULT ( STDMETHODCALLTYPE *GetUpdateRectCount )(
            IVirtualSurfaceImageSourceNative * This,
            _Out_ DWORD *count);
        HRESULT ( STDMETHODCALLTYPE *GetUpdateRects )(
            IVirtualSurfaceImageSourceNative * This,
            _Out_writes_(count) RECT *updates,
            _In_ DWORD count);
        HRESULT ( STDMETHODCALLTYPE *GetVisibleBounds )(
            IVirtualSurfaceImageSourceNative * This,
            _Out_ RECT *bounds);
        HRESULT ( STDMETHODCALLTYPE *RegisterForUpdatesNeeded )(
            IVirtualSurfaceImageSourceNative * This,
            _In_opt_ IVirtualSurfaceUpdatesCallbackNative *callback);
        HRESULT ( STDMETHODCALLTYPE *Resize )(
            IVirtualSurfaceImageSourceNative * This,
            _In_ INT newWidth,
            _In_ INT newHeight);
        END_INTERFACE
    } IVirtualSurfaceImageSourceNativeVtbl;
    interface IVirtualSurfaceImageSourceNative
    {
        CONST_VTBL struct IVirtualSurfaceImageSourceNativeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDevice(This,device) )
    ( (This)->lpVtbl -> BeginDraw(This,updateRect,surface,offset) )
    ( (This)->lpVtbl -> EndDraw(This) )
    ( (This)->lpVtbl -> Invalidate(This,updateRect) )
    ( (This)->lpVtbl -> GetUpdateRectCount(This,count) )
    ( (This)->lpVtbl -> GetUpdateRects(This,updates,count) )
    ( (This)->lpVtbl -> GetVisibleBounds(This,bounds) )
    ( (This)->lpVtbl -> RegisterForUpdatesNeeded(This,callback) )
    ( (This)->lpVtbl -> Resize(This,newWidth,newHeight) )
EXTERN_C const IID IID_ISwapChainBackgroundPanelNative;
    typedef struct ISwapChainBackgroundPanelNativeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISwapChainBackgroundPanelNative * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISwapChainBackgroundPanelNative * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISwapChainBackgroundPanelNative * This);
        HRESULT ( STDMETHODCALLTYPE *SetSwapChain )(
            ISwapChainBackgroundPanelNative * This,
            _In_ IDXGISwapChain *swapChain);
        END_INTERFACE
    } ISwapChainBackgroundPanelNativeVtbl;
    interface ISwapChainBackgroundPanelNative
    {
        CONST_VTBL struct ISwapChainBackgroundPanelNativeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetSwapChain(This,swapChain) )
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Emedia2Edxinterop_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Emedia2Edxinterop_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_ISurfaceImageSourceManagerNative;
    typedef struct ISurfaceImageSourceManagerNativeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISurfaceImageSourceManagerNative * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISurfaceImageSourceManagerNative * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISurfaceImageSourceManagerNative * This);
        HRESULT ( STDMETHODCALLTYPE *FlushAllSurfacesWithDevice )(
            ISurfaceImageSourceManagerNative * This,
            _In_ IUnknown *device);
        END_INTERFACE
    } ISurfaceImageSourceManagerNativeVtbl;
    interface ISurfaceImageSourceManagerNative
    {
        CONST_VTBL struct ISurfaceImageSourceManagerNativeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FlushAllSurfacesWithDevice(This,device) )
EXTERN_C const IID IID_ISurfaceImageSourceNativeWithD2D;
    typedef struct ISurfaceImageSourceNativeWithD2DVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISurfaceImageSourceNativeWithD2D * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISurfaceImageSourceNativeWithD2D * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISurfaceImageSourceNativeWithD2D * This);
        HRESULT ( STDMETHODCALLTYPE *SetDevice )(
            ISurfaceImageSourceNativeWithD2D * This,
            _In_ IUnknown *device);
        HRESULT ( STDMETHODCALLTYPE *BeginDraw )(
            ISurfaceImageSourceNativeWithD2D * This,
            _In_ REFRECT updateRect,
            _In_ REFIID iid,
            _COM_Outptr_ void **updateObject,
            _Out_ POINT *offset);
        HRESULT ( STDMETHODCALLTYPE *EndDraw )(
            ISurfaceImageSourceNativeWithD2D * This);
        HRESULT ( STDMETHODCALLTYPE *SuspendDraw )(
            ISurfaceImageSourceNativeWithD2D * This);
        HRESULT ( STDMETHODCALLTYPE *ResumeDraw )(
            ISurfaceImageSourceNativeWithD2D * This);
        END_INTERFACE
    } ISurfaceImageSourceNativeWithD2DVtbl;
    interface ISurfaceImageSourceNativeWithD2D
    {
        CONST_VTBL struct ISurfaceImageSourceNativeWithD2DVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDevice(This,device) )
    ( (This)->lpVtbl -> BeginDraw(This,updateRect,iid,updateObject,offset) )
    ( (This)->lpVtbl -> EndDraw(This) )
    ( (This)->lpVtbl -> SuspendDraw(This) )
    ( (This)->lpVtbl -> ResumeDraw(This) )
EXTERN_C const IID IID_ISwapChainPanelNative;
    typedef struct ISwapChainPanelNativeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISwapChainPanelNative * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISwapChainPanelNative * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISwapChainPanelNative * This);
        HRESULT ( STDMETHODCALLTYPE *SetSwapChain )(
            ISwapChainPanelNative * This,
            _In_ IDXGISwapChain *swapChain);
        END_INTERFACE
    } ISwapChainPanelNativeVtbl;
    interface ISwapChainPanelNative
    {
        CONST_VTBL struct ISwapChainPanelNativeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetSwapChain(This,swapChain) )
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Emedia2Edxinterop_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Emedia2Edxinterop_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_ISwapChainPanelNative2;
    typedef struct ISwapChainPanelNative2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISwapChainPanelNative2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISwapChainPanelNative2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISwapChainPanelNative2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetSwapChain )(
            ISwapChainPanelNative2 * This,
            _In_ IDXGISwapChain *swapChain);
        HRESULT ( STDMETHODCALLTYPE *SetSwapChainHandle )(
            ISwapChainPanelNative2 * This,
            _In_ HANDLE swapChainHandle);
        END_INTERFACE
    } ISwapChainPanelNative2Vtbl;
    interface ISwapChainPanelNative2
    {
        CONST_VTBL struct ISwapChainPanelNative2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetSwapChain(This,swapChain) )
    ( (This)->lpVtbl -> SetSwapChainHandle(This,swapChainHandle) )
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Emedia2Edxinterop_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Emedia2Edxinterop_0000_0008_v0_0_s_ifspec;
}
