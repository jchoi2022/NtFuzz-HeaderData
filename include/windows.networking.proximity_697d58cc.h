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
#include "Windows.Networking.h"
#include "Windows.Networking.Sockets.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler;
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler;
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler;
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler;
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs;
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics;
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2;
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation;
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3;
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService;
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher;
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice;
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics;
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage;
typedef interface __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs;
typedef interface __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation;
typedef struct __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This, __RPC__out __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformationVtbl;
interface __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation;
typedef struct __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CProximity__CPeerInformation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformationVtbl;
interface __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformation
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CProximity__CPeerInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation;
typedef struct __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                       __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl;
interface __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * This, __RPC__out __FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformationVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs;
typedef struct __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs * This, __RPC__in_opt IInspectable * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs * This, __RPC__in_opt IInspectable * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformationVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;
typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt HSTRING *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;
interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) )
typedef interface __FIMap_2_HSTRING_HSTRING __FIMap_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMap_2_HSTRING_HSTRING;
typedef struct __FIMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   HSTRING key,
                            __RPC__deref_out_opt HSTRING **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   HSTRING key,
                   __RPC__in_opt HSTRING *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    END_INTERFACE
} __FIMap_2_HSTRING_HSTRINGVtbl;
interface __FIMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMap_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) )
    ( (This)->lpVtbl -> Remove(This,key) )
    ( (This)->lpVtbl -> Clear(This) )
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocketVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocketVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This, __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocketVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocketVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CNetworking_CProximity_CPeerDiscoveryTypes __x_ABI_CWindows_CNetworking_CProximity_CPeerDiscoveryTypes;
typedef enum __x_ABI_CWindows_CNetworking_CProximity_CPeerRole __x_ABI_CWindows_CNetworking_CProximity_CPeerRole;
typedef enum __x_ABI_CWindows_CNetworking_CProximity_CPeerWatcherStatus __x_ABI_CWindows_CNetworking_CProximity_CPeerWatcherStatus;
typedef enum __x_ABI_CWindows_CNetworking_CProximity_CTriggeredConnectState __x_ABI_CWindows_CNetworking_CProximity_CTriggeredConnectState;
enum __x_ABI_CWindows_CNetworking_CProximity_CPeerDiscoveryTypes
{
    PeerDiscoveryTypes_None = 0,
    PeerDiscoveryTypes_Browse = 0x1,
    PeerDiscoveryTypes_Triggered = 0x2,
};
enum __x_ABI_CWindows_CNetworking_CProximity_CPeerRole
{
    PeerRole_Peer = 0,
    PeerRole_Host = 1,
    PeerRole_Client = 2,
};
enum __x_ABI_CWindows_CNetworking_CProximity_CPeerWatcherStatus
{
    PeerWatcherStatus_Created = 0,
    PeerWatcherStatus_Started = 1,
    PeerWatcherStatus_EnumerationCompleted = 2,
    PeerWatcherStatus_Stopping = 3,
    PeerWatcherStatus_Stopped = 4,
    PeerWatcherStatus_Aborted = 5,
};
enum __x_ABI_CWindows_CNetworking_CProximity_CTriggeredConnectState
{
    TriggeredConnectState_PeerFound = 0,
    TriggeredConnectState_Listening = 1,
    TriggeredConnectState_Connecting = 2,
    TriggeredConnectState_Completed = 3,
    TriggeredConnectState_Canceled = 4,
    TriggeredConnectState_Failed = 5,
};
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * sender
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandlerVtbl;
interface __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler;
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * sender
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandlerVtbl;
interface __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler;
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * sender,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * message
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandlerVtbl;
interface __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,message) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler;
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * sender,
                  INT64 messageId
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandlerVtbl;
interface __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,messageId) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IConnectionRequestedEventArgs[] = L"Windows.Networking.Proximity.IConnectionRequestedEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PeerInformation )(
        __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PeerInformation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIConnectionRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerFinderStatics[] = L"Windows.Networking.Proximity.IPeerFinderStatics";
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllowBluetooth )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowBluetooth )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowInfrastructure )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowInfrastructure )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowWiFiDirect )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowWiFiDirect )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedDiscoveryTypes )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CProximity_CPeerDiscoveryTypes * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlternateIdentities )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This
        );
                    HRESULT ( STDMETHODCALLTYPE *StartWithMessage )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                  __RPC__in HSTRING peerMessage
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TriggeredConnectionStateChanged )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CTriggeredConnectionStateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TriggeredConnectionStateChanged )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ConnectionRequested )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CNetworking__CProximity__CConnectionRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ConnectionRequested )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                  EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllPeersAsync )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CProximity__CPeerInformation * * asyncOp
        );
    HRESULT ( STDMETHODCALLTYPE *ConnectAsync )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * peerInformation,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * * asyncOp
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllowBluetooth(This,value) )
    ( (This)->lpVtbl->put_AllowBluetooth(This,value) )
    ( (This)->lpVtbl->get_AllowInfrastructure(This,value) )
    ( (This)->lpVtbl->put_AllowInfrastructure(This,value) )
    ( (This)->lpVtbl->get_AllowWiFiDirect(This,value) )
    ( (This)->lpVtbl->put_AllowWiFiDirect(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->put_DisplayName(This,value) )
    ( (This)->lpVtbl->get_SupportedDiscoveryTypes(This,value) )
    ( (This)->lpVtbl->get_AlternateIdentities(This,value) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->StartWithMessage(This,peerMessage) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->add_TriggeredConnectionStateChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_TriggeredConnectionStateChanged(This,cookie) )
    ( (This)->lpVtbl->add_ConnectionRequested(This,handler,cookie) )
    ( (This)->lpVtbl->remove_ConnectionRequested(This,cookie) )
    ( (This)->lpVtbl->FindAllPeersAsync(This,asyncOp) )
    ( (This)->lpVtbl->ConnectAsync(This,peerInformation,asyncOp) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerFinderStatics2[] = L"Windows.Networking.Proximity.IPeerFinderStatics2";
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Role )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CProximity_CPeerRole * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Role )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
                  __x_ABI_CWindows_CNetworking_CProximity_CPeerRole value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DiscoveryData )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DiscoveryData )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWatcher )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * * watcher
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2Vtbl;
interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Role(This,value) )
    ( (This)->lpVtbl->put_Role(This,value) )
    ( (This)->lpVtbl->get_DiscoveryData(This,value) )
    ( (This)->lpVtbl->put_DiscoveryData(This,value) )
    ( (This)->lpVtbl->CreateWatcher(This,watcher) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerFinderStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerInformation[] = L"Windows.Networking.Proximity.IPeerInformation";
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationVtbl;
interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerInformation3[] = L"Windows.Networking.Proximity.IPeerInformation3";
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DiscoveryData )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3Vtbl;
interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_DiscoveryData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerInformation3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerInformationWithHostAndService[] = L"Windows.Networking.Proximity.IPeerInformationWithHostAndService";
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HostName )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceName )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndServiceVtbl;
interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndServiceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HostName(This,value) )
    ( (This)->lpVtbl->get_ServiceName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerInformationWithHostAndService;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IPeerWatcher[] = L"Windows.Networking.Proximity.IPeerWatcher";
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Updated )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_Windows__CNetworking__CProximity__CPeerInformation * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Updated )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CProximity__CPeerWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CProximity_CPeerWatcherStatus * status
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcherVtbl;
interface __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Added(This,handler,token) )
    ( (This)->lpVtbl->remove_Added(This,token) )
    ( (This)->lpVtbl->add_Removed(This,handler,token) )
    ( (This)->lpVtbl->remove_Removed(This,token) )
    ( (This)->lpVtbl->add_Updated(This,handler,token) )
    ( (This)->lpVtbl->remove_Updated(This,token) )
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )
    ( (This)->lpVtbl->remove_Stopped(This,token) )
    ( (This)->lpVtbl->get_Status(This,status) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIPeerWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IProximityDevice[] = L"Windows.Networking.Proximity.IProximityDevice";
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SubscribeForMessage )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                  __RPC__in HSTRING messageType,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIMessageReceivedHandler * messageReceivedHandler,
                           __RPC__out INT64 * subscriptionId
        );
                    HRESULT ( STDMETHODCALLTYPE *PublishMessage )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                  __RPC__in HSTRING messageType,
                  __RPC__in HSTRING message,
                           __RPC__out INT64 * messageId
        );
                    HRESULT ( STDMETHODCALLTYPE *PublishMessageWithCallback )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                  __RPC__in HSTRING messageType,
                  __RPC__in HSTRING message,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler * messageTransmittedHandler,
                           __RPC__out INT64 * messageId
        );
                    HRESULT ( STDMETHODCALLTYPE *PublishBinaryMessage )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                  __RPC__in HSTRING messageType,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * message,
                           __RPC__out INT64 * messageId
        );
                    HRESULT ( STDMETHODCALLTYPE *PublishBinaryMessageWithCallback )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                  __RPC__in HSTRING messageType,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * message,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler * messageTransmittedHandler,
                           __RPC__out INT64 * messageId
        );
                    HRESULT ( STDMETHODCALLTYPE *PublishUriMessage )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * message,
                           __RPC__out INT64 * messageId
        );
                    HRESULT ( STDMETHODCALLTYPE *PublishUriMessageWithCallback )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * message,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIMessageTransmittedHandler * messageTransmittedHandler,
                           __RPC__out INT64 * messageId
        );
    HRESULT ( STDMETHODCALLTYPE *StopSubscribingForMessage )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                  INT64 subscriptionId
        );
    HRESULT ( STDMETHODCALLTYPE *StopPublishingMessage )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                  INT64 messageId
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DeviceArrived )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIDeviceArrivedEventHandler * arrivedHandler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DeviceArrived )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DeviceDeparted )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CProximity_CIDeviceDepartedEventHandler * departedHandler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DeviceDeparted )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                  EventRegistrationToken cookie
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxMessageBytes )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BitsPerSecond )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceVtbl;
interface __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SubscribeForMessage(This,messageType,messageReceivedHandler,subscriptionId) )
    ( (This)->lpVtbl->PublishMessage(This,messageType,message,messageId) )
    ( (This)->lpVtbl->PublishMessageWithCallback(This,messageType,message,messageTransmittedHandler,messageId) )
    ( (This)->lpVtbl->PublishBinaryMessage(This,messageType,message,messageId) )
    ( (This)->lpVtbl->PublishBinaryMessageWithCallback(This,messageType,message,messageTransmittedHandler,messageId) )
    ( (This)->lpVtbl->PublishUriMessage(This,message,messageId) )
    ( (This)->lpVtbl->PublishUriMessageWithCallback(This,message,messageTransmittedHandler,messageId) )
    ( (This)->lpVtbl->StopSubscribingForMessage(This,subscriptionId) )
    ( (This)->lpVtbl->StopPublishingMessage(This,messageId) )
    ( (This)->lpVtbl->add_DeviceArrived(This,arrivedHandler,cookie) )
    ( (This)->lpVtbl->remove_DeviceArrived(This,cookie) )
    ( (This)->lpVtbl->add_DeviceDeparted(This,departedHandler,cookie) )
    ( (This)->lpVtbl->remove_DeviceDeparted(This,cookie) )
    ( (This)->lpVtbl->get_MaxMessageBytes(This,value) )
    ( (This)->lpVtbl->get_BitsPerSecond(This,value) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IProximityDeviceStatics[] = L"Windows.Networking.Proximity.IProximityDeviceStatics";
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This,
                           __RPC__deref_out_opt HSTRING * selector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * * proximityDevice
        );
    HRESULT ( STDMETHODCALLTYPE *FromId )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CProximity_CIProximityDevice * * proximityDevice
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,selector) )
    ( (This)->lpVtbl->GetDefault(This,proximityDevice) )
    ( (This)->lpVtbl->FromId(This,deviceId,proximityDevice) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIProximityDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_IProximityMessage[] = L"Windows.Networking.Proximity.IProximityMessage";
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MessageType )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubscriptionId )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This,
                           __RPC__out INT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataAsString )(
        __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessageVtbl;
interface __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CIProximityMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MessageType(This,value) )
    ( (This)->lpVtbl->get_SubscriptionId(This,value) )
    ( (This)->lpVtbl->get_Data(This,value) )
    ( (This)->lpVtbl->get_DataAsString(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CIProximityMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Proximity_ITriggeredConnectionStateChangedEventArgs[] = L"Windows.Networking.Proximity.ITriggeredConnectionStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CProximity_CTriggeredConnectState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Socket )(
        __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Socket(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CProximity_CITriggeredConnectionStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_ConnectionRequestedEventArgs[] = L"Windows.Networking.Proximity.ConnectionRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_PeerFinder[] = L"Windows.Networking.Proximity.PeerFinder";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_PeerInformation[] = L"Windows.Networking.Proximity.PeerInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_PeerWatcher[] = L"Windows.Networking.Proximity.PeerWatcher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_ProximityDevice[] = L"Windows.Networking.Proximity.ProximityDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_ProximityMessage[] = L"Windows.Networking.Proximity.ProximityMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Proximity_TriggeredConnectionStateChangedEventArgs[] = L"Windows.Networking.Proximity.TriggeredConnectionStateChangedEventArgs";
       
       
#pragma clang diagnostic pop
