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
#include "Windows.ApplicationModel.Background.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Media.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2 __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides;
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CSvgImageSourceLoadStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus;
typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus;
typedef struct __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This, __RPC__out enum __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CSvgImageSourceLoadStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatusVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatusVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CBitmapCreateOptions __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CBitmapCreateOptions;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CDecodePixelType __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CDecodePixelType;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CSvgImageSourceLoadStatus __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CSvgImageSourceLoadStatus;
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CBitmapCreateOptions
{
    BitmapCreateOptions_None = 0,
    BitmapCreateOptions_IgnoreImageCache = 0x8,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CDecodePixelType
{
    DecodePixelType_Physical = 0,
    DecodePixelType_Logical = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CSvgImageSourceLoadStatus
{
    SvgImageSourceLoadStatus_Success = 0,
    SvgImageSourceLoadStatus_NetworkError = 1,
    SvgImageSourceLoadStatus_InvalidFormat = 2,
    SvgImageSourceLoadStatus_Other = 3,
};
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImage[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImage";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CreateOptions )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CBitmapCreateOptions * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CreateOptions )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CBitmapCreateOptions value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UriSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UriSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DecodePixelWidth )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DecodePixelWidth )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DecodePixelHeight )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DecodePixelHeight )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
                  INT32 value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DownloadProgress )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DownloadProgress )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ImageOpened )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ImageOpened )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ImageFailed )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ImageFailed )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CreateOptions(This,value) )
    ( (This)->lpVtbl->put_CreateOptions(This,value) )
    ( (This)->lpVtbl->get_UriSource(This,value) )
    ( (This)->lpVtbl->put_UriSource(This,value) )
    ( (This)->lpVtbl->get_DecodePixelWidth(This,value) )
    ( (This)->lpVtbl->put_DecodePixelWidth(This,value) )
    ( (This)->lpVtbl->get_DecodePixelHeight(This,value) )
    ( (This)->lpVtbl->put_DecodePixelHeight(This,value) )
    ( (This)->lpVtbl->add_DownloadProgress(This,handler,token) )
    ( (This)->lpVtbl->remove_DownloadProgress(This,token) )
    ( (This)->lpVtbl->add_ImageOpened(This,handler,token) )
    ( (This)->lpVtbl->remove_ImageOpened(This,token) )
    ( (This)->lpVtbl->add_ImageFailed(This,handler,token) )
    ( (This)->lpVtbl->remove_ImageFailed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImage2[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImage2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DecodePixelType )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CDecodePixelType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DecodePixelType )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CDecodePixelType value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DecodePixelType(This,value) )
    ( (This)->lpVtbl->put_DecodePixelType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImage3[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImage3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsAnimatedBitmap )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPlaying )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoPlay )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoPlay )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *Play )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsAnimatedBitmap(This,value) )
    ( (This)->lpVtbl->get_IsPlaying(This,value) )
    ( (This)->lpVtbl->get_AutoPlay(This,value) )
    ( (This)->lpVtbl->put_AutoPlay(This,value) )
    ( (This)->lpVtbl->Play(This) )
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImageFactory[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImageFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithUriSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uriSource,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceWithUriSource(This,uriSource,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CreateOptionsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UriSourceProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DecodePixelWidthProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DecodePixelHeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CreateOptionsProperty(This,value) )
    ( (This)->lpVtbl->get_UriSourceProperty(This,value) )
    ( (This)->lpVtbl->get_DecodePixelWidthProperty(This,value) )
    ( (This)->lpVtbl->get_DecodePixelHeightProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics2[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DecodePixelTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DecodePixelTypeProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics3[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsAnimatedBitmapProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPlayingProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoPlayProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsAnimatedBitmapProperty(This,value) )
    ( (This)->lpVtbl->get_IsPlayingProperty(This,value) )
    ( (This)->lpVtbl->get_AutoPlayProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapSource[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapSource";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PixelWidth )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PixelHeight )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * streamSource
        );
    HRESULT ( STDMETHODCALLTYPE *SetSourceAsync )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * streamSource,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PixelWidth(This,value) )
    ( (This)->lpVtbl->get_PixelHeight(This,value) )
    ( (This)->lpVtbl->SetSource(This,streamSource) )
    ( (This)->lpVtbl->SetSourceAsync(This,streamSource,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapSourceFactory[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapSourceFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapSourceStatics[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapSourceStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PixelWidthProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PixelHeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PixelWidthProperty(This,value) )
    ( (This)->lpVtbl->get_PixelHeightProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IDownloadProgressEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.IDownloadProgressEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Progress )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * This,
                  INT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Progress(This,value) )
    ( (This)->lpVtbl->put_Progress(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmap[] = L"Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmap";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PixelWidth )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PixelHeight )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
                           __RPC__out INT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *RenderAsync )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RenderToSizeAsync )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
                  INT32 scaledWidth,
                  INT32 scaledHeight,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetPixelsAsync )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PixelWidth(This,value) )
    ( (This)->lpVtbl->get_PixelHeight(This,value) )
    ( (This)->lpVtbl->RenderAsync(This,element,operation) )
    ( (This)->lpVtbl->RenderToSizeAsync(This,element,scaledWidth,scaledHeight,operation) )
    ( (This)->lpVtbl->GetPixelsAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmapStatics[] = L"Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmapStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PixelWidthProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PixelHeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PixelWidthProperty(This,value) )
    ( (This)->lpVtbl->get_PixelHeightProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISoftwareBitmapSource[] = L"Windows.UI.Xaml.Media.Imaging.ISoftwareBitmapSource";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetBitmapAsync )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * softwareBitmap,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSourceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetBitmapAsync(This,softwareBitmap,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISurfaceImageSource[] = L"Windows.UI.Xaml.Media.Imaging.ISurfaceImageSource";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISurfaceImageSourceFactory[] = L"Windows.UI.Xaml.Media.Imaging.ISurfaceImageSourceFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithDimensions )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory * This,
                  INT32 pixelWidth,
                  INT32 pixelHeight,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithDimensionsAndOpacity )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory * This,
                  INT32 pixelWidth,
                  INT32 pixelHeight,
                  boolean isOpaque,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceWithDimensions(This,pixelWidth,pixelHeight,baseInterface,innerInterface,value) )
    ( (This)->lpVtbl->CreateInstanceWithDimensionsAndOpacity(This,pixelWidth,pixelHeight,isOpaque,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISvgImageSource[] = L"Windows.UI.Xaml.Media.Imaging.ISvgImageSource";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UriSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UriSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RasterizePixelWidth )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RasterizePixelWidth )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RasterizePixelHeight )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RasterizePixelHeight )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
                  DOUBLE value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Opened )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Opened )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_OpenFailed )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_OpenFailed )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *SetSourceAsync )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * streamSource,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UriSource(This,value) )
    ( (This)->lpVtbl->put_UriSource(This,value) )
    ( (This)->lpVtbl->get_RasterizePixelWidth(This,value) )
    ( (This)->lpVtbl->put_RasterizePixelWidth(This,value) )
    ( (This)->lpVtbl->get_RasterizePixelHeight(This,value) )
    ( (This)->lpVtbl->put_RasterizePixelHeight(This,value) )
    ( (This)->lpVtbl->add_Opened(This,handler,token) )
    ( (This)->lpVtbl->remove_Opened(This,token) )
    ( (This)->lpVtbl->add_OpenFailed(This,handler,token) )
    ( (This)->lpVtbl->remove_OpenFailed(This,token) )
    ( (This)->lpVtbl->SetSourceAsync(This,streamSource,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceFactory[] = L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithUriSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uriSource,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
    ( (This)->lpVtbl->CreateInstanceWithUriSource(This,uriSource,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceFailedEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceFailedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CSvgImageSourceLoadStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceOpenedEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceOpenedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceStatics[] = L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UriSourceProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RasterizePixelWidthProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RasterizePixelHeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UriSourceProperty(This,value) )
    ( (This)->lpVtbl->get_RasterizePixelWidthProperty(This,value) )
    ( (This)->lpVtbl->get_RasterizePixelHeightProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IVirtualSurfaceImageSource[] = L"Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSource";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IVirtualSurfaceImageSourceFactory[] = L"Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSourceFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithDimensions )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory * This,
                  INT32 pixelWidth,
                  INT32 pixelHeight,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithDimensionsAndOpacity )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory * This,
                  INT32 pixelWidth,
                  INT32 pixelHeight,
                  boolean isOpaque,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceWithDimensions(This,pixelWidth,pixelHeight,value) )
    ( (This)->lpVtbl->CreateInstanceWithDimensionsAndOpacity(This,pixelWidth,pixelHeight,isOpaque,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IWriteableBitmap[] = L"Windows.UI.Xaml.Media.Imaging.IWriteableBitmap";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PixelBuffer )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Invalidate )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PixelBuffer(This,value) )
    ( (This)->lpVtbl->Invalidate(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IWriteableBitmapFactory[] = L"Windows.UI.Xaml.Media.Imaging.IWriteableBitmapFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithDimensions )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory * This,
                  INT32 pixelWidth,
                  INT32 pixelHeight,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceWithDimensions(This,pixelWidth,pixelHeight,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTask[] = L"Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTask";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTaskFactory[] = L"Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTaskFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTaskOverrides[] = L"Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTaskOverrides";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnRun )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * taskInstance
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverridesVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverridesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OnRun(This,taskInstance) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_BitmapImage[] = L"Windows.UI.Xaml.Media.Imaging.BitmapImage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_BitmapSource[] = L"Windows.UI.Xaml.Media.Imaging.BitmapSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_DownloadProgressEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.DownloadProgressEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_RenderTargetBitmap[] = L"Windows.UI.Xaml.Media.Imaging.RenderTargetBitmap";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_SoftwareBitmapSource[] = L"Windows.UI.Xaml.Media.Imaging.SoftwareBitmapSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_SurfaceImageSource[] = L"Windows.UI.Xaml.Media.Imaging.SurfaceImageSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_SvgImageSource[] = L"Windows.UI.Xaml.Media.Imaging.SvgImageSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_SvgImageSourceFailedEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.SvgImageSourceFailedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_SvgImageSourceOpenedEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.SvgImageSourceOpenedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_VirtualSurfaceImageSource[] = L"Windows.UI.Xaml.Media.Imaging.VirtualSurfaceImageSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_WriteableBitmap[] = L"Windows.UI.Xaml.Media.Imaging.WriteableBitmap";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_XamlRenderingBackgroundTask[] = L"Windows.UI.Xaml.Media.Imaging.XamlRenderingBackgroundTask";
       
       
#pragma clang diagnostic pop
