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
#include "Windows.Media.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CControl_CICurrentSessionChangedEventArgs __x_ABI_CWindows_CMedia_CControl_CICurrentSessionChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession;
typedef interface __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager;
typedef interface __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManagerStatics __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManagerStatics;
typedef interface __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties;
typedef interface __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls;
typedef interface __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfo __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfo;
typedef interface __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelineProperties __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelineProperties;
typedef interface __x_ABI_CWindows_CMedia_CControl_CIMediaPropertiesChangedEventArgs __x_ABI_CWindows_CMedia_CControl_CIMediaPropertiesChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CControl_CIPlaybackInfoChangedEventArgs __x_ABI_CWindows_CMedia_CControl_CIPlaybackInfoChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CControl_CISessionsChangedEventArgs __x_ABI_CWindows_CMedia_CControl_CISessionsChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CControl_CITimelinePropertiesChangedEventArgs __x_ABI_CWindows_CMedia_CControl_CITimelinePropertiesChangedEventArgs;
typedef interface __FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession __FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession;
typedef struct __FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This, __RPC__out __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionVtbl;
interface __FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession __FIIterable_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession;
typedef struct __FIIterable_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionVtbl;
interface __FIIterable_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession __FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession;
typedef struct __FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This,
                       __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionVtbl;
interface __FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManagerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManagerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager * This, __RPC__out __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManagerVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManagerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaPropertiesVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaPropertiesVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties * This, __RPC__out __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaPropertiesVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaPropertiesVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CMediaPropertiesChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CMediaPropertiesChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CMediaPropertiesChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CMediaPropertiesChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CMediaPropertiesChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CMediaPropertiesChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CMediaPropertiesChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CMediaPropertiesChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CControl_CIMediaPropertiesChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CMediaPropertiesChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CMediaPropertiesChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CMediaPropertiesChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CPlaybackInfoChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CPlaybackInfoChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CPlaybackInfoChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CPlaybackInfoChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CPlaybackInfoChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CPlaybackInfoChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CPlaybackInfoChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CPlaybackInfoChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CControl_CIPlaybackInfoChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CPlaybackInfoChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CPlaybackInfoChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CPlaybackInfoChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CTimelinePropertiesChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CTimelinePropertiesChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CTimelinePropertiesChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CTimelinePropertiesChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CTimelinePropertiesChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CTimelinePropertiesChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CTimelinePropertiesChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CTimelinePropertiesChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CControl_CITimelinePropertiesChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CTimelinePropertiesChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CTimelinePropertiesChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CTimelinePropertiesChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CCurrentSessionChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CCurrentSessionChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CCurrentSessionChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CCurrentSessionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CCurrentSessionChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CCurrentSessionChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CCurrentSessionChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CCurrentSessionChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CControl_CICurrentSessionChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CCurrentSessionChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CCurrentSessionChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CCurrentSessionChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CSessionsChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CSessionsChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CSessionsChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CSessionsChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CSessionsChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CSessionsChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CSessionsChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CSessionsChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CControl_CISessionsChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CSessionsChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CSessionsChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CSessionsChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This, __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;
interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;
interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CMedia_CMediaPlaybackType;
typedef interface __FIReference_1_Windows__CMedia__CMediaPlaybackType __FIReference_1_Windows__CMedia__CMediaPlaybackType;
EXTERN_C const IID IID___FIReference_1_Windows__CMedia__CMediaPlaybackType;
typedef struct __FIReference_1_Windows__CMedia__CMediaPlaybackTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackType * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackType * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackType * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackType * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackType * This, __RPC__out enum __x_ABI_CWindows_CMedia_CMediaPlaybackType *value);
    END_INTERFACE
} __FIReference_1_Windows__CMedia__CMediaPlaybackTypeVtbl;
interface __FIReference_1_Windows__CMedia__CMediaPlaybackType
{
    CONST_VTBL struct __FIReference_1_Windows__CMedia__CMediaPlaybackTypeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
enum __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode;
typedef interface __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode;
EXTERN_C const IID IID___FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode;
typedef struct __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode * This, __RPC__out enum __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode *value);
    END_INTERFACE
} __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatModeVtbl;
interface __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode
{
    CONST_VTBL struct __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatModeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIReference_1_double __FIReference_1_double;
EXTERN_C const IID IID___FIReference_1_double;
typedef struct __FIReference_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_double * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_double * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_double * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_double * This, __RPC__out double *value);
    END_INTERFACE
} __FIReference_1_doubleVtbl;
interface __FIReference_1_double
{
    CONST_VTBL struct __FIReference_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIReference_1_boolean __FIReference_1_boolean;
EXTERN_C const IID IID___FIReference_1_boolean;
typedef struct __FIReference_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_boolean * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_boolean * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_boolean * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_boolean * This, __RPC__out boolean *value);
    END_INTERFACE
} __FIReference_1_booleanVtbl;
interface __FIReference_1_boolean
{
    CONST_VTBL struct __FIReference_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode;
typedef enum __x_ABI_CWindows_CMedia_CMediaPlaybackType __x_ABI_CWindows_CMedia_CMediaPlaybackType;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef enum __x_ABI_CWindows_CMedia_CControl_CGlobalSystemMediaTransportControlsSessionPlaybackStatus __x_ABI_CWindows_CMedia_CControl_CGlobalSystemMediaTransportControlsSessionPlaybackStatus;
enum __x_ABI_CWindows_CMedia_CControl_CGlobalSystemMediaTransportControlsSessionPlaybackStatus
{
    GlobalSystemMediaTransportControlsSessionPlaybackStatus_Closed = 0,
    GlobalSystemMediaTransportControlsSessionPlaybackStatus_Opened = 1,
    GlobalSystemMediaTransportControlsSessionPlaybackStatus_Changing = 2,
    GlobalSystemMediaTransportControlsSessionPlaybackStatus_Stopped = 3,
    GlobalSystemMediaTransportControlsSessionPlaybackStatus_Playing = 4,
    GlobalSystemMediaTransportControlsSessionPlaybackStatus_Paused = 5,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Control_ICurrentSessionChangedEventArgs[] = L"Windows.Media.Control.ICurrentSessionChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CControl_CICurrentSessionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CICurrentSessionChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CICurrentSessionChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CICurrentSessionChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CICurrentSessionChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CICurrentSessionChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CICurrentSessionChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CMedia_CControl_CICurrentSessionChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CControl_CICurrentSessionChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CControl_CICurrentSessionChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CControl_CICurrentSessionChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Control_IGlobalSystemMediaTransportControlsSession[] = L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSession";
typedef struct __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SourceAppUserModelId )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetMediaPropertiesAsync )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionMediaProperties * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetTimelineProperties )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelineProperties * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetPlaybackInfo )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryPlayAsync )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryPauseAsync )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryStopAsync )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryRecordAsync )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryFastForwardAsync )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryRewindAsync )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TrySkipNextAsync )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TrySkipPreviousAsync )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryChangeChannelUpAsync )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryChangeChannelDownAsync )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryTogglePlayPauseAsync )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryChangeAutoRepeatModeAsync )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                  __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode requestedAutoRepeatMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryChangePlaybackRateAsync )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                  DOUBLE requestedPlaybackRate,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryChangeShuffleActiveAsync )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                  boolean requestedShuffleState,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryChangePlaybackPositionAsync )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                  INT64 requestedPlaybackPosition,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TimelinePropertiesChanged )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CTimelinePropertiesChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TimelinePropertiesChanged )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PlaybackInfoChanged )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CPlaybackInfoChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PlaybackInfoChanged )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MediaPropertiesChanged )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession_Windows__CMedia__CControl__CMediaPropertiesChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MediaPropertiesChanged )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionVtbl;
interface __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SourceAppUserModelId(This,value) )
    ( (This)->lpVtbl->TryGetMediaPropertiesAsync(This,operation) )
    ( (This)->lpVtbl->GetTimelineProperties(This,result) )
    ( (This)->lpVtbl->GetPlaybackInfo(This,result) )
    ( (This)->lpVtbl->TryPlayAsync(This,operation) )
    ( (This)->lpVtbl->TryPauseAsync(This,operation) )
    ( (This)->lpVtbl->TryStopAsync(This,operation) )
    ( (This)->lpVtbl->TryRecordAsync(This,operation) )
    ( (This)->lpVtbl->TryFastForwardAsync(This,operation) )
    ( (This)->lpVtbl->TryRewindAsync(This,operation) )
    ( (This)->lpVtbl->TrySkipNextAsync(This,operation) )
    ( (This)->lpVtbl->TrySkipPreviousAsync(This,operation) )
    ( (This)->lpVtbl->TryChangeChannelUpAsync(This,operation) )
    ( (This)->lpVtbl->TryChangeChannelDownAsync(This,operation) )
    ( (This)->lpVtbl->TryTogglePlayPauseAsync(This,operation) )
    ( (This)->lpVtbl->TryChangeAutoRepeatModeAsync(This,requestedAutoRepeatMode,operation) )
    ( (This)->lpVtbl->TryChangePlaybackRateAsync(This,requestedPlaybackRate,operation) )
    ( (This)->lpVtbl->TryChangeShuffleActiveAsync(This,requestedShuffleState,operation) )
    ( (This)->lpVtbl->TryChangePlaybackPositionAsync(This,requestedPlaybackPosition,operation) )
    ( (This)->lpVtbl->add_TimelinePropertiesChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_TimelinePropertiesChanged(This,token) )
    ( (This)->lpVtbl->add_PlaybackInfoChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_PlaybackInfoChanged(This,token) )
    ( (This)->lpVtbl->add_MediaPropertiesChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_MediaPropertiesChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionManager[] = L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionManager";
typedef struct __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentSession )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSession * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetSessions )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSession * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CurrentSessionChanged )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CCurrentSessionChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CurrentSessionChanged )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SessionsChanged )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager_Windows__CMedia__CControl__CSessionsChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SessionsChanged )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManagerVtbl;
interface __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentSession(This,result) )
    ( (This)->lpVtbl->GetSessions(This,result) )
    ( (This)->lpVtbl->add_CurrentSessionChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_CurrentSessionChanged(This,token) )
    ( (This)->lpVtbl->add_SessionsChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SessionsChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionManagerStatics[] = L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionManagerStatics";
typedef struct __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestAsync )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManagerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CControl__CGlobalSystemMediaTransportControlsSessionManager * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManagerStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionMediaProperties[] = L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionMediaProperties";
typedef struct __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subtitle )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlbumArtist )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Artist )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlbumTitle )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrackNumber )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Genres )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlbumTrackCount )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaybackType )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CMedia__CMediaPlaybackType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaPropertiesVtbl;
interface __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->get_Subtitle(This,value) )
    ( (This)->lpVtbl->get_AlbumArtist(This,value) )
    ( (This)->lpVtbl->get_Artist(This,value) )
    ( (This)->lpVtbl->get_AlbumTitle(This,value) )
    ( (This)->lpVtbl->get_TrackNumber(This,value) )
    ( (This)->lpVtbl->get_Genres(This,value) )
    ( (This)->lpVtbl->get_AlbumTrackCount(This,value) )
    ( (This)->lpVtbl->get_PlaybackType(This,value) )
    ( (This)->lpVtbl->get_Thumbnail(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionMediaProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionPlaybackControls[] = L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionPlaybackControls";
typedef struct __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControlsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsPlayEnabled )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPauseEnabled )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStopEnabled )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRecordEnabled )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsFastForwardEnabled )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRewindEnabled )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsNextEnabled )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPreviousEnabled )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsChannelUpEnabled )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsChannelDownEnabled )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPlayPauseToggleEnabled )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsShuffleEnabled )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRepeatEnabled )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPlaybackRateEnabled )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPlaybackPositionEnabled )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControlsVtbl;
interface __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControlsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsPlayEnabled(This,value) )
    ( (This)->lpVtbl->get_IsPauseEnabled(This,value) )
    ( (This)->lpVtbl->get_IsStopEnabled(This,value) )
    ( (This)->lpVtbl->get_IsRecordEnabled(This,value) )
    ( (This)->lpVtbl->get_IsFastForwardEnabled(This,value) )
    ( (This)->lpVtbl->get_IsRewindEnabled(This,value) )
    ( (This)->lpVtbl->get_IsNextEnabled(This,value) )
    ( (This)->lpVtbl->get_IsPreviousEnabled(This,value) )
    ( (This)->lpVtbl->get_IsChannelUpEnabled(This,value) )
    ( (This)->lpVtbl->get_IsChannelDownEnabled(This,value) )
    ( (This)->lpVtbl->get_IsPlayPauseToggleEnabled(This,value) )
    ( (This)->lpVtbl->get_IsShuffleEnabled(This,value) )
    ( (This)->lpVtbl->get_IsRepeatEnabled(This,value) )
    ( (This)->lpVtbl->get_IsPlaybackRateEnabled(This,value) )
    ( (This)->lpVtbl->get_IsPlaybackPositionEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionPlaybackInfo[] = L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionPlaybackInfo";
typedef struct __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Controls )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackControls * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaybackStatus )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfo * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CControl_CGlobalSystemMediaTransportControlsSessionPlaybackStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaybackType )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfo * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CMedia__CMediaPlaybackType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoRepeatMode )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfo * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaybackRate )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfo * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsShuffleActive )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfo * This,
                           __RPC__deref_out_opt __FIReference_1_boolean * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfoVtbl;
interface __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Controls(This,value) )
    ( (This)->lpVtbl->get_PlaybackStatus(This,value) )
    ( (This)->lpVtbl->get_PlaybackType(This,value) )
    ( (This)->lpVtbl->get_AutoRepeatMode(This,value) )
    ( (This)->lpVtbl->get_PlaybackRate(This,value) )
    ( (This)->lpVtbl->get_IsShuffleActive(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionPlaybackInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionTimelineProperties[] = L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionTimelineProperties";
typedef struct __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelinePropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelineProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelineProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelineProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelineProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelineProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelineProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelineProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndTime )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelineProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinSeekTime )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelineProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxSeekTime )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelineProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelineProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastUpdatedTime )(
        __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelineProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelinePropertiesVtbl;
interface __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelineProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelinePropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StartTime(This,value) )
    ( (This)->lpVtbl->get_EndTime(This,value) )
    ( (This)->lpVtbl->get_MinSeekTime(This,value) )
    ( (This)->lpVtbl->get_MaxSeekTime(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_LastUpdatedTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CControl_CIGlobalSystemMediaTransportControlsSessionTimelineProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Control_IMediaPropertiesChangedEventArgs[] = L"Windows.Media.Control.IMediaPropertiesChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CControl_CIMediaPropertiesChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIMediaPropertiesChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIMediaPropertiesChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIMediaPropertiesChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIMediaPropertiesChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIMediaPropertiesChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIMediaPropertiesChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CMedia_CControl_CIMediaPropertiesChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CControl_CIMediaPropertiesChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CControl_CIMediaPropertiesChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CControl_CIMediaPropertiesChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Control_IPlaybackInfoChangedEventArgs[] = L"Windows.Media.Control.IPlaybackInfoChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CControl_CIPlaybackInfoChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIPlaybackInfoChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIPlaybackInfoChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIPlaybackInfoChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIPlaybackInfoChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIPlaybackInfoChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CIPlaybackInfoChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CMedia_CControl_CIPlaybackInfoChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CControl_CIPlaybackInfoChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CControl_CIPlaybackInfoChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CControl_CIPlaybackInfoChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Control_ISessionsChangedEventArgs[] = L"Windows.Media.Control.ISessionsChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CControl_CISessionsChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CISessionsChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CISessionsChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CISessionsChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CISessionsChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CISessionsChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CISessionsChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CMedia_CControl_CISessionsChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CControl_CISessionsChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CControl_CISessionsChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CControl_CISessionsChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Control_ITimelinePropertiesChangedEventArgs[] = L"Windows.Media.Control.ITimelinePropertiesChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CControl_CITimelinePropertiesChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CITimelinePropertiesChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CITimelinePropertiesChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CITimelinePropertiesChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CITimelinePropertiesChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CITimelinePropertiesChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CControl_CITimelinePropertiesChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CMedia_CControl_CITimelinePropertiesChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CControl_CITimelinePropertiesChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CControl_CITimelinePropertiesChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CControl_CITimelinePropertiesChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Control_CurrentSessionChangedEventArgs[] = L"Windows.Media.Control.CurrentSessionChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Control_GlobalSystemMediaTransportControlsSession[] = L"Windows.Media.Control.GlobalSystemMediaTransportControlsSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Control_GlobalSystemMediaTransportControlsSessionManager[] = L"Windows.Media.Control.GlobalSystemMediaTransportControlsSessionManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Control_GlobalSystemMediaTransportControlsSessionMediaProperties[] = L"Windows.Media.Control.GlobalSystemMediaTransportControlsSessionMediaProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Control_GlobalSystemMediaTransportControlsSessionPlaybackControls[] = L"Windows.Media.Control.GlobalSystemMediaTransportControlsSessionPlaybackControls";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Control_GlobalSystemMediaTransportControlsSessionPlaybackInfo[] = L"Windows.Media.Control.GlobalSystemMediaTransportControlsSessionPlaybackInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Control_GlobalSystemMediaTransportControlsSessionTimelineProperties[] = L"Windows.Media.Control.GlobalSystemMediaTransportControlsSessionTimelineProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Control_MediaPropertiesChangedEventArgs[] = L"Windows.Media.Control.MediaPropertiesChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Control_PlaybackInfoChangedEventArgs[] = L"Windows.Media.Control.PlaybackInfoChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Control_SessionsChangedEventArgs[] = L"Windows.Media.Control.SessionsChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Control_TimelinePropertiesChangedEventArgs[] = L"Windows.Media.Control.TimelinePropertiesChangedEventArgs";
       
       
#pragma clang diagnostic pop
