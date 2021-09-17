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
#include "Windows.Media.Core.h"
#include "Windows.Media.MediaProperties.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder;
typedef interface __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2;
typedef interface __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult;
enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason;
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double *asyncInfo, double progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This, __RPC__out __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, __RPC__out enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl *lpVtbl;
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
typedef interface __FIAsyncActionProgressHandler_1_double __FIAsyncActionProgressHandler_1_double;
EXTERN_C const IID IID___FIAsyncActionProgressHandler_1_double;
typedef interface __FIAsyncActionWithProgress_1_double __FIAsyncActionWithProgress_1_double;
typedef struct __FIAsyncActionProgressHandler_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionProgressHandler_1_double * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionProgressHandler_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionProgressHandler_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncActionProgressHandler_1_double * This, __RPC__in_opt __FIAsyncActionWithProgress_1_double *asyncInfo, UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncActionProgressHandler_1_doubleVtbl;
interface __FIAsyncActionProgressHandler_1_double
{
    CONST_VTBL struct __FIAsyncActionProgressHandler_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncActionWithProgressCompletedHandler_1_double __FIAsyncActionWithProgressCompletedHandler_1_double;
EXTERN_C const IID IID___FIAsyncActionWithProgressCompletedHandler_1_double;
typedef interface __FIAsyncActionWithProgress_1_double __FIAsyncActionWithProgress_1_double;
typedef struct __FIAsyncActionWithProgressCompletedHandler_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_double * This, __RPC__in_opt __FIAsyncActionWithProgress_1_double *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncActionWithProgressCompletedHandler_1_doubleVtbl;
interface __FIAsyncActionWithProgressCompletedHandler_1_double
{
    CONST_VTBL struct __FIAsyncActionWithProgressCompletedHandler_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncActionWithProgress_1_double __FIAsyncActionWithProgress_1_double;
EXTERN_C const IID IID___FIAsyncActionWithProgress_1_double;
typedef struct __FIAsyncActionWithProgress_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionWithProgress_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionWithProgress_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionWithProgress_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncActionWithProgress_1_double * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncActionWithProgress_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncActionWithProgress_1_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncActionWithProgress_1_double * This, __RPC__in_opt __FIAsyncActionProgressHandler_1_double *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncActionWithProgress_1_double * This, __RPC__deref_out_opt __FIAsyncActionProgressHandler_1_double **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncActionWithProgress_1_double * This, __RPC__in_opt __FIAsyncActionWithProgressCompletedHandler_1_double *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncActionWithProgress_1_double * This, __RPC__deref_out_opt __FIAsyncActionWithProgressCompletedHandler_1_double **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncActionWithProgress_1_double * This);
    END_INTERFACE
} __FIAsyncActionWithProgress_1_doubleVtbl;
interface __FIAsyncActionWithProgress_1_double
{
    CONST_VTBL struct __FIAsyncActionWithProgress_1_doubleVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetResults(This) )
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource __x_ABI_CWindows_CMedia_CCore_CIMediaSource;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef enum __x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm __x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm;
typedef enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason;
enum __x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm
{
    MediaVideoProcessingAlgorithm_Default = 0,
    MediaVideoProcessingAlgorithm_MrfCrf444 = 1,
};
enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason
{
    TranscodeFailureReason_None = 0,
    TranscodeFailureReason_Unknown = 1,
    TranscodeFailureReason_InvalidProfile = 2,
    TranscodeFailureReason_CodecNotFound = 3,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Transcoding_IMediaTranscoder[] = L"Windows.Media.Transcoding.IMediaTranscoder";
typedef struct __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_TrimStartTime )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrimStartTime )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TrimStopTime )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrimStopTime )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AlwaysReencode )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlwaysReencode )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HardwareAccelerationEnabled )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardwareAccelerationEnabled )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddAudioEffect )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
                  __RPC__in HSTRING activatableClassId
        );
                    HRESULT ( STDMETHODCALLTYPE *AddAudioEffectWithSettings )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
                  __RPC__in HSTRING activatableClassId,
                  boolean effectRequired,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
                    HRESULT ( STDMETHODCALLTYPE *AddVideoEffect )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
                  __RPC__in HSTRING activatableClassId
        );
                    HRESULT ( STDMETHODCALLTYPE *AddVideoEffectWithSettings )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
                  __RPC__in HSTRING activatableClassId,
                  boolean effectRequired,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
    HRESULT ( STDMETHODCALLTYPE *ClearEffects )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This
        );
    HRESULT ( STDMETHODCALLTYPE *PrepareFileTranscodeAsync )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * source,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * destination,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * profile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *PrepareStreamTranscodeAsync )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * source,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * destination,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * profile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoderVtbl;
interface __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_TrimStartTime(This,value) )
    ( (This)->lpVtbl->get_TrimStartTime(This,value) )
    ( (This)->lpVtbl->put_TrimStopTime(This,value) )
    ( (This)->lpVtbl->get_TrimStopTime(This,value) )
    ( (This)->lpVtbl->put_AlwaysReencode(This,value) )
    ( (This)->lpVtbl->get_AlwaysReencode(This,value) )
    ( (This)->lpVtbl->put_HardwareAccelerationEnabled(This,value) )
    ( (This)->lpVtbl->get_HardwareAccelerationEnabled(This,value) )
    ( (This)->lpVtbl->AddAudioEffect(This,activatableClassId) )
    ( (This)->lpVtbl->AddAudioEffectWithSettings(This,activatableClassId,effectRequired,configuration) )
    ( (This)->lpVtbl->AddVideoEffect(This,activatableClassId) )
    ( (This)->lpVtbl->AddVideoEffectWithSettings(This,activatableClassId,effectRequired,configuration) )
    ( (This)->lpVtbl->ClearEffects(This) )
    ( (This)->lpVtbl->PrepareFileTranscodeAsync(This,source,destination,profile,operation) )
    ( (This)->lpVtbl->PrepareStreamTranscodeAsync(This,source,destination,profile,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Transcoding_IMediaTranscoder2[] = L"Windows.Media.Transcoding.IMediaTranscoder2";
typedef struct __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *PrepareMediaStreamSourceTranscodeAsync )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource * source,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * destination,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * profile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VideoProcessingAlgorithm )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This,
                  __x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoProcessingAlgorithm )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2Vtbl;
interface __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->PrepareMediaStreamSourceTranscodeAsync(This,source,destination,profile,operation) )
    ( (This)->lpVtbl->put_VideoProcessingAlgorithm(This,value) )
    ( (This)->lpVtbl->get_VideoProcessingAlgorithm(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Transcoding_IPrepareTranscodeResult[] = L"Windows.Media.Transcoding.IPrepareTranscodeResult";
typedef struct __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanTranscode )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FailureReason )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason * value
        );
    HRESULT ( STDMETHODCALLTYPE *TranscodeAsync )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This,
                           __RPC__deref_out_opt __FIAsyncActionWithProgress_1_double * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResultVtbl;
interface __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanTranscode(This,value) )
    ( (This)->lpVtbl->get_FailureReason(This,value) )
    ( (This)->lpVtbl->TranscodeAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Transcoding_MediaTranscoder[] = L"Windows.Media.Transcoding.MediaTranscoder";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Transcoding_PrepareTranscodeResult[] = L"Windows.Media.Transcoding.PrepareTranscodeResult";
       
       
#pragma clang diagnostic pop
