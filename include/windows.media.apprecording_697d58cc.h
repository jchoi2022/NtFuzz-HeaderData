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
#include "Windows.Storage.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager;
typedef interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics;
typedef interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult;
typedef interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult;
typedef interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo;
typedef interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus;
typedef interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails;
typedef interface __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo;
typedef struct __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This, __RPC__out __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl;
interface __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo;
typedef struct __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl;
interface __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo;
typedef struct __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
                       __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl;
interface __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This, __RPC__out __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This, __RPC__out __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResultVtbl *lpVtbl;
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
typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;
EXTERN_C const IID IID___FIIterator_1_HSTRING;
typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out HSTRING *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;
interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;
EXTERN_C const IID IID___FIIterable_1_HSTRING;
typedef struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt __FIIterator_1_HSTRING **first);
    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;
interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIVectorView_1_HSTRING;
typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                                    unsigned int index,
                                                             __RPC__out HSTRING *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_HSTRING * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       HSTRING item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;
interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;
typedef enum __x_ABI_CWindows_CMedia_CAppRecording_CAppRecordingSaveScreenshotOption __x_ABI_CWindows_CMedia_CAppRecording_CAppRecordingSaveScreenshotOption;
enum __x_ABI_CWindows_CMedia_CAppRecording_CAppRecordingSaveScreenshotOption
{
    AppRecordingSaveScreenshotOption_None = 0,
    AppRecordingSaveScreenshotOption_HdrContentVisible = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingManager[] = L"Windows.Media.AppRecording.IAppRecordingManager";
typedef struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStatus )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *StartRecordingToFileAsync )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RecordTimeSpanToFileAsync )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
                  __x_ABI_CWindows_CFoundation_CDateTime startTime,
                  __x_ABI_CWindows_CFoundation_CTimeSpan duration,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedScreenshotMediaEncodingSubtypes )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveScreenshotToFilesAsync )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * folder,
                  __RPC__in HSTRING filenamePrefix,
                  __x_ABI_CWindows_CMedia_CAppRecording_CAppRecordingSaveScreenshotOption option,
                  __RPC__in_opt __FIIterable_1_HSTRING * requestedFormats,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerVtbl;
interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetStatus(This,result) )
    ( (This)->lpVtbl->StartRecordingToFileAsync(This,file,operation) )
    ( (This)->lpVtbl->RecordTimeSpanToFileAsync(This,startTime,duration,file,operation) )
    ( (This)->lpVtbl->get_SupportedScreenshotMediaEncodingSubtypes(This,value) )
    ( (This)->lpVtbl->SaveScreenshotToFilesAsync(This,folder,filenamePrefix,option,requestedFormats,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingManagerStatics[] = L"Windows.Media.AppRecording.IAppRecordingManagerStatics";
typedef struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingResult[] = L"Windows.Media.AppRecording.IAppRecordingResult";
typedef struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Succeeded )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This,
                           __RPC__out HRESULT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsFileTruncated )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResultVtbl;
interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Succeeded(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_IsFileTruncated(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingSaveScreenshotResult[] = L"Windows.Media.AppRecording.IAppRecordingSaveScreenshotResult";
typedef struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Succeeded )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This,
                           __RPC__out HRESULT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SavedScreenshotInfos )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResultVtbl;
interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Succeeded(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
    ( (This)->lpVtbl->get_SavedScreenshotInfos(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingSavedScreenshotInfo[] = L"Windows.Media.AppRecording.IAppRecordingSavedScreenshotInfo";
typedef struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaEncodingSubtype )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfoVtbl;
interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_File(This,value) )
    ( (This)->lpVtbl->get_MediaEncodingSubtype(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingStatus[] = L"Windows.Media.AppRecording.IAppRecordingStatus";
typedef struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanRecord )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanRecordTimeSpan )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HistoricalBufferDuration )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Details )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusVtbl;
interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanRecord(This,value) )
    ( (This)->lpVtbl->get_CanRecordTimeSpan(This,value) )
    ( (This)->lpVtbl->get_HistoricalBufferDuration(This,value) )
    ( (This)->lpVtbl->get_Details(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingStatusDetails[] = L"Windows.Media.AppRecording.IAppRecordingStatusDetails";
typedef struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsAnyAppBroadcasting )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCaptureResourceUnavailable )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsGameStreamInProgress )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTimeSpanRecordingDisabled )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsGpuConstrained )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAppInactive )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsBlockedForApp )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDisabledByUser )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDisabledBySystem )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetailsVtbl;
interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsAnyAppBroadcasting(This,value) )
    ( (This)->lpVtbl->get_IsCaptureResourceUnavailable(This,value) )
    ( (This)->lpVtbl->get_IsGameStreamInProgress(This,value) )
    ( (This)->lpVtbl->get_IsTimeSpanRecordingDisabled(This,value) )
    ( (This)->lpVtbl->get_IsGpuConstrained(This,value) )
    ( (This)->lpVtbl->get_IsAppInactive(This,value) )
    ( (This)->lpVtbl->get_IsBlockedForApp(This,value) )
    ( (This)->lpVtbl->get_IsDisabledByUser(This,value) )
    ( (This)->lpVtbl->get_IsDisabledBySystem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingManager[] = L"Windows.Media.AppRecording.AppRecordingManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingResult[] = L"Windows.Media.AppRecording.AppRecordingResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingSaveScreenshotResult[] = L"Windows.Media.AppRecording.AppRecordingSaveScreenshotResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingSavedScreenshotInfo[] = L"Windows.Media.AppRecording.AppRecordingSavedScreenshotInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingStatus[] = L"Windows.Media.AppRecording.AppRecordingStatus";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingStatusDetails[] = L"Windows.Media.AppRecording.AppRecordingStatusDetails";
       
       
#pragma clang diagnostic pop
