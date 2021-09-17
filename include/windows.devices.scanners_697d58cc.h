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
#include "Windows.Graphics.Printing.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CScanners_CIImageScanner __x_ABI_CWindows_CDevices_CScanners_CIImageScanner;
typedef interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration;
typedef interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration;
typedef interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult;
typedef interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult;
typedef interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration;
typedef interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics;
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 *asyncInfo, unsigned int progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * This, __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Progress(This,handler) )
    ( (This)->lpVtbl -> get_Progress(This,handler) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScanner **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * This, __RPC__out __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CScanners__CImageScannerPreviewResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * This, __RPC__out __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResultVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __FIIterator_1_Windows__CStorage__CStorageFile __FIIterator_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStorageFile;
typedef struct __FIIterator_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFile * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStorageFileVtbl;
interface __FIIterator_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CStorageFile __FIIterable_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStorageFile;
typedef struct __FIIterable_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStorageFile **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStorageFileVtbl;
interface __FIIterable_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CStorage__CStorageFile __FIVectorView_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStorageFile;
typedef struct __FIVectorView_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                       __x_ABI_CWindows_CStorage_CIStorageFile * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFile * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStorageFileVtbl;
interface __FIVectorView_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef enum __x_ABI_CWindows_CDevices_CScanners_CImageScannerAutoCroppingMode __x_ABI_CWindows_CDevices_CScanners_CImageScannerAutoCroppingMode;
typedef enum __x_ABI_CWindows_CDevices_CScanners_CImageScannerColorMode __x_ABI_CWindows_CDevices_CScanners_CImageScannerColorMode;
typedef enum __x_ABI_CWindows_CDevices_CScanners_CImageScannerFormat __x_ABI_CWindows_CDevices_CScanners_CImageScannerFormat;
typedef enum __x_ABI_CWindows_CDevices_CScanners_CImageScannerScanSource __x_ABI_CWindows_CDevices_CScanners_CImageScannerScanSource;
typedef struct __x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution __x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution;
enum __x_ABI_CWindows_CDevices_CScanners_CImageScannerAutoCroppingMode
{
    ImageScannerAutoCroppingMode_Disabled = 0,
    ImageScannerAutoCroppingMode_SingleRegion = 1,
    ImageScannerAutoCroppingMode_MultipleRegion = 2,
};
enum __x_ABI_CWindows_CDevices_CScanners_CImageScannerColorMode
{
    ImageScannerColorMode_Color = 0,
    ImageScannerColorMode_Grayscale = 1,
    ImageScannerColorMode_Monochrome = 2,
    ImageScannerColorMode_AutoColor = 3,
};
enum __x_ABI_CWindows_CDevices_CScanners_CImageScannerFormat
{
    ImageScannerFormat_Jpeg = 0,
    ImageScannerFormat_Png = 1,
    ImageScannerFormat_DeviceIndependentBitmap = 2,
    ImageScannerFormat_Tiff = 3,
    ImageScannerFormat_Xps = 4,
    ImageScannerFormat_OpenXps = 5,
    ImageScannerFormat_Pdf = 6,
};
enum __x_ABI_CWindows_CDevices_CScanners_CImageScannerScanSource
{
    ImageScannerScanSource_Default = 0,
    ImageScannerScanSource_Flatbed = 1,
    ImageScannerScanSource_Feeder = 2,
    ImageScannerScanSource_AutoConfigured = 3,
};
struct __x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution
{
    FLOAT DpiX;
    FLOAT DpiY;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScanner[] = L"Windows.Devices.Scanners.IImageScanner";
typedef struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultScanSource )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerScanSource * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsScanSourceSupported )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
                  __x_ABI_CWindows_CDevices_CScanners_CImageScannerScanSource value,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FlatbedConfiguration )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FeederConfiguration )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoConfiguration )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsPreviewSupported )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
                  __x_ABI_CWindows_CDevices_CScanners_CImageScannerScanSource scanSource,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *ScanPreviewToStreamAsync )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
                  __x_ABI_CWindows_CDevices_CScanners_CImageScannerScanSource scanSource,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * targetStream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScannerPreviewResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ScanFilesToFolderAsync )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScanner * This,
                  __x_ABI_CWindows_CDevices_CScanners_CImageScannerScanSource scanSource,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * storageFolder,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CDevices__CScanners__CImageScannerScanResult_UINT32 * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CScanners_CIImageScannerVtbl;
interface __x_ABI_CWindows_CDevices_CScanners_CIImageScanner
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_DefaultScanSource(This,value) )
    ( (This)->lpVtbl->IsScanSourceSupported(This,value,result) )
    ( (This)->lpVtbl->get_FlatbedConfiguration(This,value) )
    ( (This)->lpVtbl->get_FeederConfiguration(This,value) )
    ( (This)->lpVtbl->get_AutoConfiguration(This,value) )
    ( (This)->lpVtbl->IsPreviewSupported(This,scanSource,result) )
    ( (This)->lpVtbl->ScanPreviewToStreamAsync(This,scanSource,targetStream,operation) )
    ( (This)->lpVtbl->ScanFilesToFolderAsync(This,scanSource,storageFolder,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScanner;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerFeederConfiguration[] = L"Windows.Devices.Scanners.IImageScannerFeederConfiguration";
typedef struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanAutoDetectPageSize )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoDetectPageSize )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoDetectPageSize )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageSize )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PageSize )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageOrientation )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PageOrientation )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageSizeDimensions )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsPageSizeSupported )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize pageSize,
                  __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation pageOrientation,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxNumberOfPages )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxNumberOfPages )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanScanDuplex )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duplex )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duplex )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanScanAhead )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScanAhead )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScanAhead )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfigurationVtbl;
interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanAutoDetectPageSize(This,value) )
    ( (This)->lpVtbl->get_AutoDetectPageSize(This,value) )
    ( (This)->lpVtbl->put_AutoDetectPageSize(This,value) )
    ( (This)->lpVtbl->get_PageSize(This,value) )
    ( (This)->lpVtbl->put_PageSize(This,value) )
    ( (This)->lpVtbl->get_PageOrientation(This,value) )
    ( (This)->lpVtbl->put_PageOrientation(This,value) )
    ( (This)->lpVtbl->get_PageSizeDimensions(This,value) )
    ( (This)->lpVtbl->IsPageSizeSupported(This,pageSize,pageOrientation,result) )
    ( (This)->lpVtbl->get_MaxNumberOfPages(This,value) )
    ( (This)->lpVtbl->put_MaxNumberOfPages(This,value) )
    ( (This)->lpVtbl->get_CanScanDuplex(This,value) )
    ( (This)->lpVtbl->get_Duplex(This,value) )
    ( (This)->lpVtbl->put_Duplex(This,value) )
    ( (This)->lpVtbl->get_CanScanAhead(This,value) )
    ( (This)->lpVtbl->get_ScanAhead(This,value) )
    ( (This)->lpVtbl->put_ScanAhead(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerFeederConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerFormatConfiguration[] = L"Windows.Devices.Scanners.IImageScannerFormatConfiguration";
typedef struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DefaultFormat )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Format )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Format )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This,
                  __x_ABI_CWindows_CDevices_CScanners_CImageScannerFormat value
        );
    HRESULT ( STDMETHODCALLTYPE *IsFormatSupported )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration * This,
                  __x_ABI_CWindows_CDevices_CScanners_CImageScannerFormat value,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfigurationVtbl;
interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DefaultFormat(This,value) )
    ( (This)->lpVtbl->get_Format(This,value) )
    ( (This)->lpVtbl->put_Format(This,value) )
    ( (This)->lpVtbl->IsFormatSupported(This,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerFormatConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerPreviewResult[] = L"Windows.Devices.Scanners.IImageScannerPreviewResult";
typedef struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Succeeded )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Format )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerFormat * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResultVtbl;
interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Succeeded(This,value) )
    ( (This)->lpVtbl->get_Format(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerPreviewResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerScanResult[] = L"Windows.Devices.Scanners.IImageScannerScanResult";
typedef struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ScannedFiles )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CStorageFile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResultVtbl;
interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ScannedFiles(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerScanResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerSourceConfiguration[] = L"Windows.Devices.Scanners.IImageScannerSourceConfiguration";
typedef struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MinScanArea )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxScanArea )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedScanRegion )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedScanRegion )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoCroppingMode )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerAutoCroppingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoCroppingMode )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                  __x_ABI_CWindows_CDevices_CScanners_CImageScannerAutoCroppingMode value
        );
    HRESULT ( STDMETHODCALLTYPE *IsAutoCroppingModeSupported )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                  __x_ABI_CWindows_CDevices_CScanners_CImageScannerAutoCroppingMode value,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinResolution )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxResolution )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OpticalResolution )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredResolution )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredResolution )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                  __x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActualResolution )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerResolution * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultColorMode )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerColorMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColorMode )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CScanners_CImageScannerColorMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ColorMode )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                  __x_ABI_CWindows_CDevices_CScanners_CImageScannerColorMode value
        );
    HRESULT ( STDMETHODCALLTYPE *IsColorModeSupported )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                  __x_ABI_CWindows_CDevices_CScanners_CImageScannerColorMode value,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinBrightness )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxBrightness )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrightnessStep )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultBrightness )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Brightness )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Brightness )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinContrast )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxContrast )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContrastStep )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultContrast )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Contrast )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Contrast )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration * This,
                  INT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfigurationVtbl;
interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MinScanArea(This,value) )
    ( (This)->lpVtbl->get_MaxScanArea(This,value) )
    ( (This)->lpVtbl->get_SelectedScanRegion(This,value) )
    ( (This)->lpVtbl->put_SelectedScanRegion(This,value) )
    ( (This)->lpVtbl->get_AutoCroppingMode(This,value) )
    ( (This)->lpVtbl->put_AutoCroppingMode(This,value) )
    ( (This)->lpVtbl->IsAutoCroppingModeSupported(This,value,result) )
    ( (This)->lpVtbl->get_MinResolution(This,value) )
    ( (This)->lpVtbl->get_MaxResolution(This,value) )
    ( (This)->lpVtbl->get_OpticalResolution(This,value) )
    ( (This)->lpVtbl->get_DesiredResolution(This,value) )
    ( (This)->lpVtbl->put_DesiredResolution(This,value) )
    ( (This)->lpVtbl->get_ActualResolution(This,value) )
    ( (This)->lpVtbl->get_DefaultColorMode(This,value) )
    ( (This)->lpVtbl->get_ColorMode(This,value) )
    ( (This)->lpVtbl->put_ColorMode(This,value) )
    ( (This)->lpVtbl->IsColorModeSupported(This,value,result) )
    ( (This)->lpVtbl->get_MinBrightness(This,value) )
    ( (This)->lpVtbl->get_MaxBrightness(This,value) )
    ( (This)->lpVtbl->get_BrightnessStep(This,value) )
    ( (This)->lpVtbl->get_DefaultBrightness(This,value) )
    ( (This)->lpVtbl->get_Brightness(This,value) )
    ( (This)->lpVtbl->put_Brightness(This,value) )
    ( (This)->lpVtbl->get_MinContrast(This,value) )
    ( (This)->lpVtbl->get_MaxContrast(This,value) )
    ( (This)->lpVtbl->get_ContrastStep(This,value) )
    ( (This)->lpVtbl->get_DefaultContrast(This,value) )
    ( (This)->lpVtbl->get_Contrast(This,value) )
    ( (This)->lpVtbl->put_Contrast(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerSourceConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Scanners_IImageScannerStatics[] = L"Windows.Devices.Scanners.IImageScannerStatics";
typedef struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CScanners__CImageScanner * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics * This,
                           __RPC__deref_out_opt HSTRING * selector
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CScanners_CIImageScannerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,asyncInfo) )
    ( (This)->lpVtbl->GetDeviceSelector(This,selector) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CScanners_CIImageScannerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScanner[] = L"Windows.Devices.Scanners.ImageScanner";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScannerAutoConfiguration[] = L"Windows.Devices.Scanners.ImageScannerAutoConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScannerFeederConfiguration[] = L"Windows.Devices.Scanners.ImageScannerFeederConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScannerFlatbedConfiguration[] = L"Windows.Devices.Scanners.ImageScannerFlatbedConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScannerPreviewResult[] = L"Windows.Devices.Scanners.ImageScannerPreviewResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Scanners_ImageScannerScanResult[] = L"Windows.Devices.Scanners.ImageScannerScanResult";
       
       
#pragma clang diagnostic pop
