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
#include "Windows.Graphics.Imaging.h"
#include "Windows.Media.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace;
typedef interface __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetector __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetector;
typedef interface __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorStatics __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorStatics;
typedef interface __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTracker __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTracker;
typedef interface __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerStatics __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerStatics;
typedef interface __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
typedef struct __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__out __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl;
interface __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
typedef struct __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl;
interface __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
typedef struct __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                       __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl;
interface __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
typedef struct __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl;
interface __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
typedef interface __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
typedef interface __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__in_opt __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
typedef struct __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__out __FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl;
interface __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceDetector __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceDetector;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceDetector;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetector __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetector;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceDetectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceDetector * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceDetector * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceDetector * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceDetector * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetector *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceDetectorVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceDetector
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceDetectorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetector __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetector;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetector;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetector * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetector * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetector * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetector * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetector * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetector * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetector * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceDetector *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetector * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceDetector **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetector * This, __RPC__out __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetector * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetectorVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetector
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetectorVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceTracker __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceTracker;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceTracker;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTracker __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTracker;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceTrackerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceTracker * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceTracker * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceTracker * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceTracker * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTracker *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceTrackerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceTracker
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceTrackerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTracker __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTracker;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTracker;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTrackerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTracker * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTracker * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTracker * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTracker * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTracker * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTracker * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTracker * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceTracker *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTracker * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CFaceAnalysis__CFaceTracker **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTracker * This, __RPC__out __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTracker * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTrackerVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTracker
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTrackerVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat;
typedef interface __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
typedef struct __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__out enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl;
interface __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
typedef struct __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl;
interface __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
typedef struct __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                       enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl;
interface __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat;
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;
typedef interface __x_ABI_CWindows_CMedia_CIVideoFrame __x_ABI_CWindows_CMedia_CIVideoFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_FaceAnalysis_IDetectedFace[] = L"Windows.Media.FaceAnalysis.IDetectedFace";
typedef struct __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FaceBox )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFaceVtbl;
interface __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFaceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FaceBox(This,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_FaceAnalysis_IFaceDetector[] = L"Windows.Media.FaceAnalysis.IFaceDetector";
typedef struct __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetector * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetector * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetector * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetector * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetector * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetector * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *DetectFacesAsync )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetector * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * image,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * * returnValue
        );
                    HRESULT ( STDMETHODCALLTYPE *DetectFacesWithSearchAreaAsync )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetector * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * image,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds searchArea,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * * returnValue
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinDetectableFaceSize )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetector * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize * returnValue
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinDetectableFaceSize )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetector * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxDetectableFaceSize )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetector * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize * returnValue
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxDetectableFaceSize )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetector * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorVtbl;
interface __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetector
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->DetectFacesAsync(This,image,returnValue) )
    ( (This)->lpVtbl->DetectFacesWithSearchAreaAsync(This,image,searchArea,returnValue) )
    ( (This)->lpVtbl->get_MinDetectableFaceSize(This,returnValue) )
    ( (This)->lpVtbl->put_MinDetectableFaceSize(This,value) )
    ( (This)->lpVtbl->get_MaxDetectableFaceSize(This,returnValue) )
    ( (This)->lpVtbl->put_MaxDetectableFaceSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetector;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_FaceAnalysis_IFaceDetectorStatics[] = L"Windows.Media.FaceAnalysis.IFaceDetectorStatics";
typedef struct __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAsync )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceDetector * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetSupportedBitmapPixelFormats )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsBitmapPixelFormatSupported )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorStatics * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat bitmapPixelFormat,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSupported )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorStatics * This,
                           __RPC__out boolean * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAsync(This,returnValue) )
    ( (This)->lpVtbl->GetSupportedBitmapPixelFormats(This,result) )
    ( (This)->lpVtbl->IsBitmapPixelFormatSupported(This,bitmapPixelFormat,result) )
    ( (This)->lpVtbl->get_IsSupported(This,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceDetectorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_FaceAnalysis_IFaceTracker[] = L"Windows.Media.FaceAnalysis.IFaceTracker";
typedef struct __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTracker * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTracker * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTracker * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTracker * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTracker * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTracker * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ProcessNextFrameAsync )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTracker * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CIVideoFrame * videoFrame,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * * returnValue
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinDetectableFaceSize )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTracker * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize * returnValue
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinDetectableFaceSize )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTracker * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxDetectableFaceSize )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTracker * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize * returnValue
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxDetectableFaceSize )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTracker * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerVtbl;
interface __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTracker
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ProcessNextFrameAsync(This,videoFrame,returnValue) )
    ( (This)->lpVtbl->get_MinDetectableFaceSize(This,returnValue) )
    ( (This)->lpVtbl->put_MinDetectableFaceSize(This,value) )
    ( (This)->lpVtbl->get_MaxDetectableFaceSize(This,returnValue) )
    ( (This)->lpVtbl->put_MaxDetectableFaceSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTracker;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_FaceAnalysis_IFaceTrackerStatics[] = L"Windows.Media.FaceAnalysis.IFaceTrackerStatics";
typedef struct __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAsync )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CFaceAnalysis__CFaceTracker * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetSupportedBitmapPixelFormats )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsBitmapPixelFormatSupported )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerStatics * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat bitmapPixelFormat,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSupported )(
        __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerStatics * This,
                           __RPC__out boolean * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAsync(This,returnValue) )
    ( (This)->lpVtbl->GetSupportedBitmapPixelFormats(This,result) )
    ( (This)->lpVtbl->IsBitmapPixelFormatSupported(This,bitmapPixelFormat,result) )
    ( (This)->lpVtbl->get_IsSupported(This,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CFaceAnalysis_CIFaceTrackerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_FaceAnalysis_DetectedFace[] = L"Windows.Media.FaceAnalysis.DetectedFace";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_FaceAnalysis_FaceDetector[] = L"Windows.Media.FaceAnalysis.FaceDetector";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_FaceAnalysis_FaceTracker[] = L"Windows.Media.FaceAnalysis.FaceTracker";
       
       
#pragma clang diagnostic pop
