#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs;
typedef interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple;
EXTERN_C const IID IID___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple;
typedef struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This, __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl;
interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple
{
    CONST_VTBL struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple;
EXTERN_C const IID IID___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple;
typedef struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This, __RPC__deref_out_opt __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple **first);
    END_INTERFACE
} __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl;
interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple
{
    CONST_VTBL struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple;
EXTERN_C const IID IID___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple;
typedef struct __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
                       __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl;
interface __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple
{
    CONST_VTBL struct __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl *lpVtbl;
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
typedef interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription;
EXTERN_C const IID IID___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription;
typedef struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This, __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescriptionVtbl;
interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription
{
    CONST_VTBL struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescriptionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription;
EXTERN_C const IID IID___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription;
typedef struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This, __RPC__deref_out_opt __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription **first);
    END_INTERFACE
} __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescriptionVtbl;
interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription
{
    CONST_VTBL struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescriptionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse;
typedef interface __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponseVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse;
typedef struct __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This, __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponseVtbl;
interface __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponseVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs;
typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs * This, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * sender, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs;
typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs * This, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * sender, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress;
EXTERN_C const IID IID___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress;
typedef struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This, __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddressVtbl;
interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress
{
    CONST_VTBL struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddressVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress;
EXTERN_C const IID IID___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress;
typedef struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This, __RPC__deref_out_opt __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress **first);
    END_INTERFACE
} __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddressVtbl;
interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress
{
    CONST_VTBL struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs;
typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs * This, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * sender, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance;
EXTERN_C const IID IID___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance;
typedef struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This, __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl;
interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance
{
    CONST_VTBL struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance;
EXTERN_C const IID IID___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance;
typedef struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This, __RPC__deref_out_opt __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance **first);
    END_INTERFACE
} __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl;
interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance
{
    CONST_VTBL struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance;
EXTERN_C const IID IID___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance;
typedef struct __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
                       __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl;
interface __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance
{
    CONST_VTBL struct __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl *lpVtbl;
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
typedef interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource;
EXTERN_C const IID IID___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource;
typedef struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This, __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl;
interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource
{
    CONST_VTBL struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource;
EXTERN_C const IID IID___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource;
typedef struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This, __RPC__deref_out_opt __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource **first);
    END_INTERFACE
} __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl;
interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource
{
    CONST_VTBL struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource;
EXTERN_C const IID IID___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource;
typedef struct __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
                       __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl;
interface __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource
{
    CONST_VTBL struct __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus;
typedef interface __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus;
typedef struct __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This, __RPC__out enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusVtbl;
interface __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs;
typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs * This, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * sender, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs;
typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs * This, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * sender, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsMediaType __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsMediaType;
typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsNetworkType __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsNetworkType;
typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsPublishRequestReason __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsPublishRequestReason;
typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsResourceState __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsResourceState;
typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceAvailability __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceAvailability;
typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceStatus __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceStatus;
typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsSubscribeReason __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsSubscribeReason;
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsMediaType
{
    RcsMediaType_None = 0,
    RcsMediaType_AudioOnly = 1,
    RcsMediaType_AudioVideo = 2,
};
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsNetworkType
{
    RcsNetworkType_Unknown = 0,
    RcsNetworkType_Lte = 1,
    RcsNetworkType_LteNoVoPS = 2,
    RcsNetworkType_Ehrpd = 3,
    RcsNetworkType_HspaPlus = 4,
    RcsNetworkType__3g = 5,
    RcsNetworkType__2g = 6,
    RcsNetworkType__WLAN = 7,
    RcsNetworkType__IWLAN = 8,
};
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsPublishRequestReason
{
    RcsPublishRequestReason_Expired = 0,
    RcsPublishRequestReason_NetworkChange = 1,
};
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsResourceState
{
    RcsResourceState_Unknown = 0,
    RcsResourceState_Pending = 1,
    RcsResourceState_Active = 2,
    RcsResourceState_Terminated = 3,
};
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceAvailability
{
    RcsServiceAvailability_Unavailable = 0,
    RcsServiceAvailability_Available = 1,
};
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceStatus
{
    RcsServiceStatus_Stopped = 0,
    RcsServiceStatus_Started = 1,
    RcsServiceStatus_Stopping = 2,
    RcsServiceStatus_Starting = 3,
};
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsSubscribeReason
{
    RcsSubscribeReason_Default = 0,
    RcsSubscribeReason_Expired = 1,
    RcsSubscribeReason_ContactModified = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsAddress[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsAddress";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddressVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddressVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->put_Uri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsCapabilitiesReceivedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsCapabilitiesReceivedArgs";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResourceUri )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgsVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResourceUri(This,value) )
    ( (This)->lpVtbl->get_Capabilities(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsPresenceService[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceService";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *PublishCapabilitiesAsync )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * contactUri,
                  __RPC__in_opt __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * serviceDescriptions,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PublishCapabilitiesRequested )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PublishCapabilitiesRequested )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *RequestCapabilitiesAsync )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
                  __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * address,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CapabilitiesReceived )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CapabilitiesReceived )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *SubscribeForCapabilitiesAsync )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
                  __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsSubscribeReason reason,
                  __RPC__in_opt __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * addresses,
                  __x_ABI_CWindows_CFoundation_CTimeSpan expiration,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SubscriptionReceived )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SubscriptionReceived )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceServiceVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceServiceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->PublishCapabilitiesAsync(This,contactUri,serviceDescriptions,operation) )
    ( (This)->lpVtbl->add_PublishCapabilitiesRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_PublishCapabilitiesRequested(This,token) )
    ( (This)->lpVtbl->RequestCapabilitiesAsync(This,address,operation) )
    ( (This)->lpVtbl->add_CapabilitiesReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_CapabilitiesReceived(This,token) )
    ( (This)->lpVtbl->SubscribeForCapabilitiesAsync(This,reason,addresses,expiration,operation) )
    ( (This)->lpVtbl->add_SubscriptionReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_SubscriptionReceived(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsPresenceSettings[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceSettings";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PublishEnabled )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PublishEnabled )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublishTimerInterval )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PublishTimerInterval )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettingsVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PublishEnabled(This,value) )
    ( (This)->lpVtbl->put_PublishEnabled(This,value) )
    ( (This)->lpVtbl->get_PublishTimerInterval(This,value) )
    ( (This)->lpVtbl->put_PublishTimerInterval(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsPresenceSettings2[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceSettings2";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsCapabilityDiscoveryEnabled )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsCapabilityDiscoveryEnabled )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CapabilityCacheExpiration )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CapabilityCacheExpiration )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AvailabilityCacheExpiration )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AvailabilityCacheExpiration )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CapabilityPollInterval )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CapabilityPollInterval )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxNumberOfEntriesInRequest )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxNumberOfEntriesInRequest )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPresenceGzipEnabled )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsPresenceGzipEnabled )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PresenceNotifyDuration )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PresenceNotifyDuration )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VoLTEProvisioningStatus )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VoLTEProvisioningStatus )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublishErrorRecoveryTimer )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PublishErrorRecoveryTimer )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2Vtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsCapabilityDiscoveryEnabled(This,value) )
    ( (This)->lpVtbl->put_IsCapabilityDiscoveryEnabled(This,value) )
    ( (This)->lpVtbl->get_CapabilityCacheExpiration(This,value) )
    ( (This)->lpVtbl->put_CapabilityCacheExpiration(This,value) )
    ( (This)->lpVtbl->get_AvailabilityCacheExpiration(This,value) )
    ( (This)->lpVtbl->put_AvailabilityCacheExpiration(This,value) )
    ( (This)->lpVtbl->get_CapabilityPollInterval(This,value) )
    ( (This)->lpVtbl->put_CapabilityPollInterval(This,value) )
    ( (This)->lpVtbl->get_MaxNumberOfEntriesInRequest(This,value) )
    ( (This)->lpVtbl->put_MaxNumberOfEntriesInRequest(This,value) )
    ( (This)->lpVtbl->get_IsPresenceGzipEnabled(This,value) )
    ( (This)->lpVtbl->put_IsPresenceGzipEnabled(This,value) )
    ( (This)->lpVtbl->get_PresenceNotifyDuration(This,value) )
    ( (This)->lpVtbl->put_PresenceNotifyDuration(This,value) )
    ( (This)->lpVtbl->get_VoLTEProvisioningStatus(This,value) )
    ( (This)->lpVtbl->put_VoLTEProvisioningStatus(This,value) )
    ( (This)->lpVtbl->get_PublishErrorRecoveryTimer(This,value) )
    ( (This)->lpVtbl->put_PublishErrorRecoveryTimer(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsPublishCapabilitiesRequestedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPublishCapabilitiesRequestedArgs";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsPublishRequestReason * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkType )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsNetworkType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgsVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reason(This,value) )
    ( (This)->lpVtbl->get_NetworkType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsResource[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResource";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Instances )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Instances(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsResourceInstance[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResourceInstance";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Identifier )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsResourceState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstanceVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstanceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->get_Identifier(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_Reason(This,value) )
    ( (This)->lpVtbl->get_Capabilities(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsResourceList[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResourceList";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FullState )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Resources )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceListVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceListVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Version(This,value) )
    ( (This)->lpVtbl->get_FullState(This,value) )
    ( (This)->lpVtbl->get_Resources(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsResponse[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResponse";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResponseCode )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResponseReason )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponseVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResponseCode(This,value) )
    ( (This)->lpVtbl->get_ResponseReason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsService[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsService";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartServiceAsync )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StopServiceAsync )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceStatus )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceStatus * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ServiceStatusChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ServiceStatusChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceAvailability )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceAvailability * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ServiceAvailabilityChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ServiceAvailabilityChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceVersion )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StartServiceAsync(This,operation) )
    ( (This)->lpVtbl->StopServiceAsync(This,operation) )
    ( (This)->lpVtbl->get_ServiceStatus(This,value) )
    ( (This)->lpVtbl->add_ServiceStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ServiceStatusChanged(This,token) )
    ( (This)->lpVtbl->get_ServiceAvailability(This,value) )
    ( (This)->lpVtbl->add_ServiceAvailabilityChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ServiceAvailabilityChanged(This,token) )
    ( (This)->lpVtbl->get_ServiceVersion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsServiceAvailabilityChangedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceAvailabilityChangedArgs";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServiceAvailability )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceAvailability * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgsVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServiceAvailability(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsServiceDescription[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceDescription";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServiceIdentifier )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ServiceIdentifier )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceDescription )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ServiceDescription )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceVersion )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ServiceVersion )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsMediaType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MediaType )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
                  __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsMediaType value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescriptionVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescriptionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServiceIdentifier(This,value) )
    ( (This)->lpVtbl->put_ServiceIdentifier(This,value) )
    ( (This)->lpVtbl->get_ServiceDescription(This,value) )
    ( (This)->lpVtbl->put_ServiceDescription(This,value) )
    ( (This)->lpVtbl->get_ServiceVersion(This,value) )
    ( (This)->lpVtbl->put_ServiceVersion(This,value) )
    ( (This)->lpVtbl->get_MediaType(This,value) )
    ( (This)->lpVtbl->put_MediaType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsServiceStatusChangedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceStatusChangedArgs";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServiceStatus )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgsVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServiceStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsServiceTuple[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceTuple";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTupleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServiceDescription )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContactUri )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublishedTime )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTupleVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTupleVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServiceDescription(This,value) )
    ( (This)->lpVtbl->get_ContactUri(This,value) )
    ( (This)->lpVtbl->get_PublishedTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsSubscriptionReceivedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsSubscriptionReceivedArgs";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResourceList )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgsVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResourceList(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsAddress[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsAddress";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsCapabilitiesReceivedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsCapabilitiesReceivedArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPresenceService[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceService";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPresenceSettings[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPublishCapabilitiesRequestedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsPublishCapabilitiesRequestedArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResource[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsResource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResourceInstance[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsResourceInstance";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResourceList[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsResourceList";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResponse[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsResponse";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceAvailabilityChangedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceAvailabilityChangedArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceDescription[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceDescription";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceStatusChangedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceStatusChangedArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceTuple[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceTuple";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsSubscriptionReceivedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsSubscriptionReceivedArgs";
       
