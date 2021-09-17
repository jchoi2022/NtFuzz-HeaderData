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
#include "Windows.Media.Playback.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2 __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2;
typedef interface __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem;
typedef struct __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, __RPC__out __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl;
interface __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem;
typedef struct __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl;
interface __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem;
typedef struct __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                       __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl;
interface __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem;
typedef struct __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl;
interface __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CMedia_CProtection_CRenewalStatus;
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 *asyncInfo, unsigned int progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CMedia_CProtection_CRenewalStatus *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl *lpVtbl;
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
enum __x_ABI_CWindows_CMedia_CProtection_CHdcpSetProtectionResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This, __RPC__out enum __x_ABI_CWindows_CMedia_CProtection_CHdcpSetProtectionResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResultVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CMedia_CProtection_CHdcpProtection;
typedef interface __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection;
EXTERN_C const IID IID___FIReference_1_Windows__CMedia__CProtection__CHdcpProtection;
typedef struct __FIReference_1_Windows__CMedia__CProtection__CHdcpProtectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection * This, __RPC__out enum __x_ABI_CWindows_CMedia_CProtection_CHdcpProtection *value);
    END_INTERFACE
} __FIReference_1_Windows__CMedia__CProtection__CHdcpProtectionVtbl;
interface __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection
{
    CONST_VTBL struct __FIReference_1_Windows__CMedia__CProtection__CHdcpProtectionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CGraphicsTrustStatus __x_ABI_CWindows_CMedia_CProtection_CGraphicsTrustStatus;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CHdcpProtection __x_ABI_CWindows_CMedia_CProtection_CHdcpProtection;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CHdcpSetProtectionResult __x_ABI_CWindows_CMedia_CProtection_CHdcpSetProtectionResult;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CProtectionCapabilityResult __x_ABI_CWindows_CMedia_CProtection_CProtectionCapabilityResult;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CRenewalStatus __x_ABI_CWindows_CMedia_CProtection_CRenewalStatus;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CRevocationAndRenewalReasons __x_ABI_CWindows_CMedia_CProtection_CRevocationAndRenewalReasons;
enum __x_ABI_CWindows_CMedia_CProtection_CGraphicsTrustStatus
{
    GraphicsTrustStatus_TrustNotRequired = 0,
    GraphicsTrustStatus_TrustEstablished = 1,
    GraphicsTrustStatus_EnvironmentNotSupported = 2,
    GraphicsTrustStatus_DriverNotSupported = 3,
    GraphicsTrustStatus_DriverSigningFailure = 4,
    GraphicsTrustStatus_UnknownFailure = 5,
};
enum __x_ABI_CWindows_CMedia_CProtection_CHdcpProtection
{
    HdcpProtection_Off = 0,
    HdcpProtection_On = 1,
    HdcpProtection_OnWithTypeEnforcement = 2,
};
enum __x_ABI_CWindows_CMedia_CProtection_CHdcpSetProtectionResult
{
    HdcpSetProtectionResult_Success = 0,
    HdcpSetProtectionResult_TimedOut = 1,
    HdcpSetProtectionResult_NotSupported = 2,
    HdcpSetProtectionResult_UnknownFailure = 3,
};
enum __x_ABI_CWindows_CMedia_CProtection_CProtectionCapabilityResult
{
    ProtectionCapabilityResult_NotSupported = 0,
    ProtectionCapabilityResult_Maybe = 1,
    ProtectionCapabilityResult_Probably = 2,
};
enum __x_ABI_CWindows_CMedia_CProtection_CRenewalStatus
{
    RenewalStatus_NotStarted = 0,
    RenewalStatus_UpdatesInProgress = 1,
    RenewalStatus_UserCancelled = 2,
    RenewalStatus_AppComponentsMayNeedUpdating = 3,
    RenewalStatus_NoComponentsFound = 4,
};
enum __x_ABI_CWindows_CMedia_CProtection_CRevocationAndRenewalReasons
{
    RevocationAndRenewalReasons_UserModeComponentLoad = 0x1,
    RevocationAndRenewalReasons_KernelModeComponentLoad = 0x2,
    RevocationAndRenewalReasons_AppComponent = 0x4,
    RevocationAndRenewalReasons_GlobalRevocationListLoadFailed = 0x10,
    RevocationAndRenewalReasons_InvalidGlobalRevocationListSignature = 0x20,
    RevocationAndRenewalReasons_GlobalRevocationListAbsent = 0x1000,
    RevocationAndRenewalReasons_ComponentRevoked = 0x2000,
    RevocationAndRenewalReasons_InvalidComponentCertificateExtendedKeyUse = 0x4000,
    RevocationAndRenewalReasons_ComponentCertificateRevoked = 0x8000,
    RevocationAndRenewalReasons_InvalidComponentCertificateRoot = 0x10000,
    RevocationAndRenewalReasons_ComponentHighSecurityCertificateRevoked = 0x20000,
    RevocationAndRenewalReasons_ComponentLowSecurityCertificateRevoked = 0x40000,
    RevocationAndRenewalReasons_BootDriverVerificationFailed = 0x100000,
    RevocationAndRenewalReasons_ComponentSignedWithTestCertificate = 0x1000000,
    RevocationAndRenewalReasons_EncryptionFailure = 0x10000000,
};
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * sender,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandlerVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler;
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * sender
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandlerVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler;
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * sender,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandlerVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IComponentLoadFailedEventArgs[] = L"Windows.Media.Protection.IComponentLoadFailedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Information )(
        __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Completion )(
        __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Information(This,value) )
    ( (This)->lpVtbl->get_Completion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IComponentRenewalStatics[] = L"Windows.Media.Protection.IComponentRenewalStatics";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RenewSystemComponentsAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * information,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RenewSystemComponentsAsync(This,information,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IHdcpSession[] = L"Windows.Media.Protection.IHdcpSession";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIHdcpSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsEffectiveProtectionAtLeast )(
        __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
                  __x_ABI_CWindows_CMedia_CProtection_CHdcpProtection protection,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetEffectiveProtection )(
        __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDesiredMinProtectionAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
                  __x_ABI_CWindows_CMedia_CProtection_CHdcpProtection protection,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ProtectionChanged )(
        __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ProtectionChanged )(
        __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CIHdcpSessionVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIHdcpSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsEffectiveProtectionAtLeast(This,protection,value) )
    ( (This)->lpVtbl->GetEffectiveProtection(This,value) )
    ( (This)->lpVtbl->SetDesiredMinProtectionAsync(This,protection,value) )
    ( (This)->lpVtbl->add_ProtectionChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ProtectionChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIHdcpSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IMediaProtectionManager[] = L"Windows.Media.Protection.IMediaProtectionManager";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ServiceRequested )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ServiceRequested )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RebootNeeded )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RebootNeeded )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ComponentLoadFailed )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ComponentLoadFailed )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
                  EventRegistrationToken cookie
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManagerVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ServiceRequested(This,handler,cookie) )
    ( (This)->lpVtbl->remove_ServiceRequested(This,cookie) )
    ( (This)->lpVtbl->add_RebootNeeded(This,handler,cookie) )
    ( (This)->lpVtbl->remove_RebootNeeded(This,cookie) )
    ( (This)->lpVtbl->add_ComponentLoadFailed(This,handler,cookie) )
    ( (This)->lpVtbl->remove_ComponentLoadFailed(This,cookie) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IMediaProtectionPMPServer[] = L"Windows.Media.Protection.IMediaProtectionPMPServer";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * ppProperties
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Properties(This,ppProperties) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IMediaProtectionPMPServerFactory[] = L"Windows.Media.Protection.IMediaProtectionPMPServerFactory";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreatePMPServer )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * pProperties,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer * * ppObject
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreatePMPServer(This,pProperties,ppObject) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IMediaProtectionServiceCompletion[] = L"Windows.Media.Protection.IMediaProtectionServiceCompletion";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * This,
                  boolean success
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletionVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This,success) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IMediaProtectionServiceRequest[] = L"Windows.Media.Protection.IMediaProtectionServiceRequest";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProtectionSystem )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * This,
                           __RPC__out GUID * system
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * This,
                           __RPC__out GUID * type
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequestVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProtectionSystem(This,system) )
    ( (This)->lpVtbl->get_Type(This,type) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IProtectionCapabilities[] = L"Windows.Media.Protection.IProtectionCapabilities";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsTypeSupported )(
        __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities * This,
                  __RPC__in HSTRING type,
                  __RPC__in HSTRING keySystem,
                           __RPC__out __x_ABI_CWindows_CMedia_CProtection_CProtectionCapabilityResult * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilitiesVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsTypeSupported(This,type,keySystem,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IRevocationAndRenewalInformation[] = L"Windows.Media.Protection.IRevocationAndRenewalInformation";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Items )(
        __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * * items
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformationVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Items(This,items) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IRevocationAndRenewalItem[] = L"Windows.Media.Protection.IRevocationAndRenewalItem";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reasons )(
        __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CProtection_CRevocationAndRenewalReasons * reasons
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeaderHash )(
        __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublicKeyHash )(
        __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
                           __RPC__deref_out_opt HSTRING * name
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RenewalId )(
        __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItemVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reasons(This,reasons) )
    ( (This)->lpVtbl->get_HeaderHash(This,value) )
    ( (This)->lpVtbl->get_PublicKeyHash(This,value) )
    ( (This)->lpVtbl->get_Name(This,name) )
    ( (This)->lpVtbl->get_RenewalId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IServiceRequestedEventArgs[] = L"Windows.Media.Protection.IServiceRequestedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Completion )(
        __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->get_Completion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IServiceRequestedEventArgs2[] = L"Windows.Media.Protection.IServiceRequestedEventArgs2";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MediaPlaybackItem )(
        __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2Vtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MediaPlaybackItem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_ComponentLoadFailedEventArgs[] = L"Windows.Media.Protection.ComponentLoadFailedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_ComponentRenewal[] = L"Windows.Media.Protection.ComponentRenewal";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_HdcpSession[] = L"Windows.Media.Protection.HdcpSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_MediaProtectionManager[] = L"Windows.Media.Protection.MediaProtectionManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_MediaProtectionPMPServer[] = L"Windows.Media.Protection.MediaProtectionPMPServer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_MediaProtectionServiceCompletion[] = L"Windows.Media.Protection.MediaProtectionServiceCompletion";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_ProtectionCapabilities[] = L"Windows.Media.Protection.ProtectionCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_RevocationAndRenewalInformation[] = L"Windows.Media.Protection.RevocationAndRenewalInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_RevocationAndRenewalItem[] = L"Windows.Media.Protection.RevocationAndRenewalItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_ServiceRequestedEventArgs[] = L"Windows.Media.Protection.ServiceRequestedEventArgs";
       
       
#pragma clang diagnostic pop
