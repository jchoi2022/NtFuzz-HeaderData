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
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticator __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticator;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestFactory __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestFactory;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUser __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUser;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorStatics __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorStatics;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemIdentity __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemIdentity;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemTicketResult __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemTicketResult;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity;
typedef interface __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket;
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket;
typedef struct __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This, __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketVtbl;
interface __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket;
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket;
typedef struct __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketVtbl;
interface __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest;
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest;
typedef struct __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * This, __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequestVtbl;
interface __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequestVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest;
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest;
typedef struct __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequestVtbl;
interface __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequestVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket __FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket;
typedef struct __FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This,
                       __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketVtbl;
interface __FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult * This, __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemTicketResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentityVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentityVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity * This, __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentityVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentityVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CCredentialPromptType __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CCredentialPromptType;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_COnlineIdSystemTicketStatus __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_COnlineIdSystemTicketStatus;
enum __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CCredentialPromptType
{
    CredentialPromptType_PromptIfNeeded = 0,
    CredentialPromptType_RetypeCredentials = 1,
    CredentialPromptType_DoNotPrompt = 2,
};
enum __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_COnlineIdSystemTicketStatus
{
    OnlineIdSystemTicketStatus_Success = 0,
    OnlineIdSystemTicketStatus_Error = 1,
    OnlineIdSystemTicketStatus_ServiceConnectionError = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_OnlineId_IOnlineIdAuthenticator[] = L"Windows.Security.Authentication.OnlineId.IOnlineIdAuthenticator";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticator * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *AuthenticateUserAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticator * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest * request,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity * * authenticationOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *AuthenticateUserAsyncAdvanced )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticator * This,
                  __RPC__in_opt __FIIterable_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicketRequest * requests,
                  __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CCredentialPromptType credentialPromptType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__CUserIdentity * * authenticationOperation
        );
    HRESULT ( STDMETHODCALLTYPE *SignOutUserAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticator * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * signOutUserOperation
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ApplicationId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticator * This,
                  GUID value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ApplicationId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticator * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanSignOut )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticator * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthenticatedSafeCustomerId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticator * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticatorVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticator
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticatorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AuthenticateUserAsync(This,request,authenticationOperation) )
    ( (This)->lpVtbl->AuthenticateUserAsyncAdvanced(This,requests,credentialPromptType,authenticationOperation) )
    ( (This)->lpVtbl->SignOutUserAsync(This,signOutUserOperation) )
    ( (This)->lpVtbl->put_ApplicationId(This,value) )
    ( (This)->lpVtbl->get_ApplicationId(This,value) )
    ( (This)->lpVtbl->get_CanSignOut(This,value) )
    ( (This)->lpVtbl->get_AuthenticatedSafeCustomerId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdAuthenticator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicket[] = L"Windows.Security.Authentication.OnlineId.IOnlineIdServiceTicket";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicketRequest[] = L"Windows.Security.Authentication.OnlineId.IOnlineIdServiceTicketRequest";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Service )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Policy )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Service(This,value) )
    ( (This)->lpVtbl->get_Policy(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicketRequestFactory[] = L"Windows.Security.Authentication.OnlineId.IOnlineIdServiceTicketRequestFactory";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateOnlineIdServiceTicketRequest )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestFactory * This,
                  __RPC__in HSTRING service,
                  __RPC__in HSTRING policy,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest * * onlineIdServiceTicketRequest
        );
    HRESULT ( STDMETHODCALLTYPE *CreateOnlineIdServiceTicketRequestAdvanced )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestFactory * This,
                  __RPC__in HSTRING service,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest * * onlineIdServiceTicketRequest
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestFactoryVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateOnlineIdServiceTicketRequest(This,service,policy,onlineIdServiceTicketRequest) )
    ( (This)->lpVtbl->CreateOnlineIdServiceTicketRequestAdvanced(This,service,onlineIdServiceTicketRequest) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequestFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_OnlineId_IOnlineIdSystemAuthenticatorForUser[] = L"Windows.Security.Authentication.OnlineId.IOnlineIdSystemAuthenticatorForUser";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUser * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUser * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUser * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUser * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUser * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUser * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetTicketAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUser * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicketRequest * request,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdSystemTicketResult * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ApplicationId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUser * This,
                  GUID value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ApplicationId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUser * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * user
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUserVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUser
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUserVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetTicketAsync(This,request,operation) )
    ( (This)->lpVtbl->put_ApplicationId(This,value) )
    ( (This)->lpVtbl->get_ApplicationId(This,value) )
    ( (This)->lpVtbl->get_User(This,user) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_OnlineId_IOnlineIdSystemAuthenticatorStatics[] = L"Windows.Security.Authentication.OnlineId.IOnlineIdSystemAuthenticatorStatics";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Default )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUser * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorForUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Default(This,value) )
    ( (This)->lpVtbl->GetForUser(This,user,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemAuthenticatorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_OnlineId_IOnlineIdSystemIdentity[] = L"Windows.Security.Authentication.OnlineId.IOnlineIdSystemIdentity";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemIdentityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemIdentity * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemIdentity * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemIdentity * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemIdentity * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemIdentity * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemIdentity * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Ticket )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemIdentity * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdServiceTicket * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemIdentity * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemIdentityVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemIdentity
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemIdentityVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Ticket(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemIdentity;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_OnlineId_IOnlineIdSystemTicketResult[] = L"Windows.Security.Authentication.OnlineId.IOnlineIdSystemTicketResult";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemTicketResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemTicketResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemTicketResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemTicketResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemTicketResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemTicketResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemTicketResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Identity )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemTicketResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemIdentity * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemTicketResult * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_COnlineIdSystemTicketStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemTicketResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemTicketResultVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemTicketResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemTicketResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Identity(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIOnlineIdSystemTicketResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_OnlineId_IUserIdentity[] = L"Windows.Security.Authentication.OnlineId.IUserIdentity";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Tickets )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CAuthentication__COnlineId__COnlineIdServiceTicket * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SafeCustomerId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SignInName )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirstName )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastName )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsBetaAccount )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsConfirmedPC )(
        __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentityVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentityVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Tickets(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_SafeCustomerId(This,value) )
    ( (This)->lpVtbl->get_SignInName(This,value) )
    ( (This)->lpVtbl->get_FirstName(This,value) )
    ( (This)->lpVtbl->get_LastName(This,value) )
    ( (This)->lpVtbl->get_IsBetaAccount(This,value) )
    ( (This)->lpVtbl->get_IsConfirmedPC(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_COnlineId_CIUserIdentity;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_OnlineId_OnlineIdAuthenticator[] = L"Windows.Security.Authentication.OnlineId.OnlineIdAuthenticator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_OnlineId_OnlineIdServiceTicket[] = L"Windows.Security.Authentication.OnlineId.OnlineIdServiceTicket";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_OnlineId_OnlineIdServiceTicketRequest[] = L"Windows.Security.Authentication.OnlineId.OnlineIdServiceTicketRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_OnlineId_OnlineIdSystemAuthenticator[] = L"Windows.Security.Authentication.OnlineId.OnlineIdSystemAuthenticator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_OnlineId_OnlineIdSystemAuthenticatorForUser[] = L"Windows.Security.Authentication.OnlineId.OnlineIdSystemAuthenticatorForUser";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_OnlineId_OnlineIdSystemIdentity[] = L"Windows.Security.Authentication.OnlineId.OnlineIdSystemIdentity";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_OnlineId_OnlineIdSystemTicketResult[] = L"Windows.Security.Authentication.OnlineId.OnlineIdSystemTicketResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_OnlineId_SignOutUserOperation[] = L"Windows.Security.Authentication.OnlineId.SignOutUserOperation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_OnlineId_UserAuthenticationOperation[] = L"Windows.Security.Authentication.OnlineId.UserAuthenticationOperation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_OnlineId_UserIdentity[] = L"Windows.Security.Authentication.OnlineId.UserIdentity";
       
       
#pragma clang diagnostic pop
