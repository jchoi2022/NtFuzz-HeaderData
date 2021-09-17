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
#include "Windows.Graphics.h"
#include "Windows.Graphics.DirectX.h"
#include "Windows.Graphics.DirectX.Direct3D11.h"
#include "Windows.System.h"
#include "Windows.UI.Composition.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFrame __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFrame;
typedef interface __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool;
typedef interface __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics;
typedef interface __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics2 __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics2;
typedef interface __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem;
typedef interface __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItemStatics __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItemStatics;
typedef interface __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCapturePicker __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCapturePicker;
typedef interface __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSession __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSession;
typedef interface __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSessionStatics __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSessionStatics;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem;
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CCapture__CGraphicsCaptureItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CCapture__CGraphicsCaptureItemVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CCapture__CGraphicsCaptureItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem;
typedef struct __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem * This, __RPC__out __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItemVtbl;
interface __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItemVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CCapture__CDirect3D11CaptureFramePool_IInspectable __FITypedEventHandler_2_Windows__CGraphics__CCapture__CDirect3D11CaptureFramePool_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CCapture__CDirect3D11CaptureFramePool_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CCapture__CDirect3D11CaptureFramePool_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CCapture__CDirect3D11CaptureFramePool_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CCapture__CDirect3D11CaptureFramePool_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CCapture__CDirect3D11CaptureFramePool_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CCapture__CDirect3D11CaptureFramePool_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CCapture__CDirect3D11CaptureFramePool_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CCapture__CDirect3D11CaptureFramePool_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CCapture__CDirect3D11CaptureFramePool_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CCapture__CGraphicsCaptureItem_IInspectable __FITypedEventHandler_2_Windows__CGraphics__CCapture__CGraphicsCaptureItem_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CCapture__CGraphicsCaptureItem_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CCapture__CGraphicsCaptureItem_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CCapture__CGraphicsCaptureItem_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CCapture__CGraphicsCaptureItem_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CCapture__CGraphicsCaptureItem_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CCapture__CGraphicsCaptureItem_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CCapture__CGraphicsCaptureItem_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CCapture__CGraphicsCaptureItem_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CCapture__CGraphicsCaptureItem_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice;
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;
typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;
typedef struct __x_ABI_CWindows_CGraphics_CSizeInt32 __x_ABI_CWindows_CGraphics_CSizeInt32;
typedef interface __x_ABI_CWindows_CSystem_CIDispatcherQueue __x_ABI_CWindows_CSystem_CIDispatcherQueue;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVisual __x_ABI_CWindows_CUI_CComposition_CIVisual;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Capture_IDirect3D11CaptureFrame[] = L"Windows.Graphics.Capture.IDirect3D11CaptureFrame";
typedef struct __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Surface )(
        __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemRelativeTime )(
        __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFrame * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentSize )(
        __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFrame * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CSizeInt32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFrameVtbl;
interface __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Surface(This,value) )
    ( (This)->lpVtbl->get_SystemRelativeTime(This,value) )
    ( (This)->lpVtbl->get_ContentSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Capture_IDirect3D11CaptureFramePool[] = L"Windows.Graphics.Capture.IDirect3D11CaptureFramePool";
typedef struct __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Recreate )(
        __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * device,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat pixelFormat,
                  INT32 numberOfBuffers,
                  __x_ABI_CWindows_CGraphics_CSizeInt32 size
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetNextFrame )(
        __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFrame * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_FrameArrived )(
        __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CCapture__CDirect3D11CaptureFramePool_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FrameArrived )(
        __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCaptureSession )(
        __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem * item,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSession * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DispatcherQueue )(
        __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIDispatcherQueue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolVtbl;
interface __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Recreate(This,device,pixelFormat,numberOfBuffers,size) )
    ( (This)->lpVtbl->TryGetNextFrame(This,result) )
    ( (This)->lpVtbl->add_FrameArrived(This,handler,token) )
    ( (This)->lpVtbl->remove_FrameArrived(This,token) )
    ( (This)->lpVtbl->CreateCaptureSession(This,item,result) )
    ( (This)->lpVtbl->get_DispatcherQueue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Capture_IDirect3D11CaptureFramePoolStatics[] = L"Windows.Graphics.Capture.IDirect3D11CaptureFramePoolStatics";
typedef struct __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * device,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat pixelFormat,
                  INT32 numberOfBuffers,
                  __x_ABI_CWindows_CGraphics_CSizeInt32 size,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,device,pixelFormat,numberOfBuffers,size,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Capture_IDirect3D11CaptureFramePoolStatics2[] = L"Windows.Graphics.Capture.IDirect3D11CaptureFramePoolStatics2";
typedef struct __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFreeThreaded )(
        __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * device,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat pixelFormat,
                  INT32 numberOfBuffers,
                  __x_ABI_CWindows_CGraphics_CSizeInt32 size,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePool * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics2Vtbl;
interface __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFreeThreaded(This,device,pixelFormat,numberOfBuffers,size,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CCapture_CIDirect3D11CaptureFramePoolStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Capture_IGraphicsCaptureItem[] = L"Windows.Graphics.Capture.IGraphicsCaptureItem";
typedef struct __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CSizeInt32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CCapture__CGraphicsCaptureItem_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItemVtbl;
interface __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Size(This,value) )
    ( (This)->lpVtbl->add_Closed(This,handler,token) )
    ( (This)->lpVtbl->remove_Closed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Capture_IGraphicsCaptureItemStatics[] = L"Windows.Graphics.Capture.IGraphicsCaptureItemStatics";
typedef struct __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItemStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItemStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItemStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItemStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItemStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItemStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItemStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromVisual )(
        __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItemStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * visual,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItem * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItemStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItemStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItemStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromVisual(This,visual,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureItemStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Capture_IGraphicsCapturePicker[] = L"Windows.Graphics.Capture.IGraphicsCapturePicker";
typedef struct __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCapturePickerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCapturePicker * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCapturePicker * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCapturePicker * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCapturePicker * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCapturePicker * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCapturePicker * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *PickSingleItemAsync )(
        __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCapturePicker * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CCapture__CGraphicsCaptureItem * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCapturePickerVtbl;
interface __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCapturePicker
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCapturePickerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->PickSingleItemAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCapturePicker;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Capture_IGraphicsCaptureSession[] = L"Windows.Graphics.Capture.IGraphicsCaptureSession";
typedef struct __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartCapture )(
        __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSession * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSessionVtbl;
interface __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSession
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StartCapture(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Capture_IGraphicsCaptureSessionStatics[] = L"Windows.Graphics.Capture.IGraphicsCaptureSessionStatics";
typedef struct __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSessionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSessionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSessionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSessionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSessionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSessionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSessionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSessionStatics * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSessionStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSessionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSessionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsSupported(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CCapture_CIGraphicsCaptureSessionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Capture_Direct3D11CaptureFrame[] = L"Windows.Graphics.Capture.Direct3D11CaptureFrame";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Capture_Direct3D11CaptureFramePool[] = L"Windows.Graphics.Capture.Direct3D11CaptureFramePool";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Capture_GraphicsCaptureItem[] = L"Windows.Graphics.Capture.GraphicsCaptureItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Capture_GraphicsCapturePicker[] = L"Windows.Graphics.Capture.GraphicsCapturePicker";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Capture_GraphicsCaptureSession[] = L"Windows.Graphics.Capture.GraphicsCaptureSession";
       
       
#pragma clang diagnostic pop
