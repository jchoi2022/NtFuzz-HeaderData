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
#include "Windows.UI.Notifications.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics;
enum __x_ABI_CWindows_CUI_CNotifications_CManagement_CUserNotificationListenerAccessStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus;
typedef interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus;
typedef struct __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This, __RPC__out enum __x_ABI_CWindows_CUI_CNotifications_CManagement_CUserNotificationListenerAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIUserNotification __x_ABI_CWindows_CUI_CNotifications_CIUserNotification;
typedef interface __FIIterator_1_Windows__CUI__CNotifications__CUserNotification __FIIterator_1_Windows__CUI__CNotifications__CUserNotification;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CNotifications__CUserNotification;
typedef struct __FIIterator_1_Windows__CUI__CNotifications__CUserNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This, __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CNotifications__CUserNotificationVtbl;
interface __FIIterator_1_Windows__CUI__CNotifications__CUserNotification
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CNotifications__CUserNotificationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CNotifications__CUserNotification __FIIterable_1_Windows__CUI__CNotifications__CUserNotification;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CNotifications__CUserNotification;
typedef struct __FIIterable_1_Windows__CUI__CNotifications__CUserNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CNotifications__CUserNotification * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CUserNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CUserNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CUserNotification * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CUserNotification * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CUserNotification * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CUserNotification * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CNotifications__CUserNotification **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CNotifications__CUserNotificationVtbl;
interface __FIIterable_1_Windows__CUI__CNotifications__CUserNotification
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CNotifications__CUserNotificationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification;
typedef struct __FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
                       __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl;
interface __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This, __RPC__out __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl *lpVtbl;
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
typedef enum __x_ABI_CWindows_CUI_CNotifications_CNotificationKinds __x_ABI_CWindows_CUI_CNotifications_CNotificationKinds;
typedef enum __x_ABI_CWindows_CUI_CNotifications_CManagement_CUserNotificationListenerAccessStatus __x_ABI_CWindows_CUI_CNotifications_CManagement_CUserNotificationListenerAccessStatus;
enum __x_ABI_CWindows_CUI_CNotifications_CManagement_CUserNotificationListenerAccessStatus
{
    UserNotificationListenerAccessStatus_Unspecified = 0,
    UserNotificationListenerAccessStatus_Allowed = 1,
    UserNotificationListenerAccessStatus_Denied = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_Management_IUserNotificationListener[] = L"Windows.UI.Notifications.Management.IUserNotificationListener";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAccessStatus )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
                           __RPC__out __x_ABI_CWindows_CUI_CNotifications_CManagement_CUserNotificationListenerAccessStatus * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_NotificationChanged )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NotificationChanged )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetNotificationsAsync )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
                  __x_ABI_CWindows_CUI_CNotifications_CNotificationKinds kinds,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetNotification )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
                  UINT32 notificationId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ClearNotifications )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveNotification )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
                  UINT32 notificationId
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAccessAsync(This,operation) )
    ( (This)->lpVtbl->GetAccessStatus(This,result) )
    ( (This)->lpVtbl->add_NotificationChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_NotificationChanged(This,token) )
    ( (This)->lpVtbl->GetNotificationsAsync(This,kinds,operation) )
    ( (This)->lpVtbl->GetNotification(This,notificationId,result) )
    ( (This)->lpVtbl->ClearNotifications(This) )
    ( (This)->lpVtbl->RemoveNotification(This,notificationId) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_Management_IUserNotificationListenerStatics[] = L"Windows.UI.Notifications.Management.IUserNotificationListenerStatics";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Current(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_Management_UserNotificationListener[] = L"Windows.UI.Notifications.Management.UserNotificationListener";
       
       
#pragma clang diagnostic pop
