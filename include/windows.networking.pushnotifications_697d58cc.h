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
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include "Windows.UI.Notifications.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel;
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser;
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2;
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics;
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2 __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2;
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3 __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3;
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs;
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification;
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannelVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannelVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This, __RPC__out __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannelVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannelVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgsVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CITileNotification __x_ABI_CWindows_CUI_CNotifications_CITileNotification;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotification __x_ABI_CWindows_CUI_CNotifications_CIToastNotification;
typedef enum __x_ABI_CWindows_CNetworking_CPushNotifications_CPushNotificationType __x_ABI_CWindows_CNetworking_CPushNotifications_CPushNotificationType;
enum __x_ABI_CWindows_CNetworking_CPushNotifications_CPushNotificationType
{
    PushNotificationType_Toast = 0,
    PushNotificationType_Tile = 1,
    PushNotificationType_Badge = 2,
    PushNotificationType_Raw = 3,
    PushNotificationType_TileFlyout = 4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannel[] = L"Windows.Networking.PushNotifications.IPushNotificationChannel";
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpirationTime )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PushNotificationReceived )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PushNotificationReceived )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelVtbl;
interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->get_ExpirationTime(This,value) )
    ( (This)->lpVtbl->Close(This) )
    ( (This)->lpVtbl->add_PushNotificationReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_PushNotificationReceived(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannelManagerForUser[] = L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerForUser";
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreatePushNotificationChannelForApplicationAsync )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreatePushNotificationChannelForApplicationAsyncWithId )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This,
                  __RPC__in HSTRING applicationId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreatePushNotificationChannelForSecondaryTileAsync )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This,
                  __RPC__in HSTRING tileId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUserVtbl;
interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUserVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreatePushNotificationChannelForApplicationAsync(This,operation) )
    ( (This)->lpVtbl->CreatePushNotificationChannelForApplicationAsyncWithId(This,applicationId,operation) )
    ( (This)->lpVtbl->CreatePushNotificationChannelForSecondaryTileAsync(This,tileId,operation) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannelManagerForUser2[] = L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerForUser2";
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * appServerKey,
                  __RPC__in HSTRING channelId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsyncWithId )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * appServerKey,
                  __RPC__in HSTRING channelId,
                  __RPC__in HSTRING appId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2Vtbl;
interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(This,appServerKey,channelId,operation) )
    ( (This)->lpVtbl->CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsyncWithId(This,appServerKey,channelId,appId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics[] = L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics";
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreatePushNotificationChannelForApplicationAsync )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreatePushNotificationChannelForApplicationAsyncWithId )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This,
                  __RPC__in HSTRING applicationId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreatePushNotificationChannelForSecondaryTileAsync )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This,
                  __RPC__in HSTRING tileId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreatePushNotificationChannelForApplicationAsync(This,operation) )
    ( (This)->lpVtbl->CreatePushNotificationChannelForApplicationAsyncWithId(This,applicationId,operation) )
    ( (This)->lpVtbl->CreatePushNotificationChannelForSecondaryTileAsync(This,tileId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics2[] = L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics2";
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2Vtbl;
interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics3[] = L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics3";
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3Vtbl;
interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationReceivedEventArgs[] = L"Windows.Networking.PushNotifications.IPushNotificationReceivedEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Cancel )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cancel )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NotificationType )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CPushNotifications_CPushNotificationType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ToastNotification )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TileNotification )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BadgeNotification )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RawNotification )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Cancel(This,value) )
    ( (This)->lpVtbl->get_Cancel(This,value) )
    ( (This)->lpVtbl->get_NotificationType(This,value) )
    ( (This)->lpVtbl->get_ToastNotification(This,value) )
    ( (This)->lpVtbl->get_TileNotification(This,value) )
    ( (This)->lpVtbl->get_BadgeNotification(This,value) )
    ( (This)->lpVtbl->get_RawNotification(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IRawNotification[] = L"Windows.Networking.PushNotifications.IRawNotification";
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotificationVtbl;
interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotificationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Content(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IRawNotification2[] = L"Windows.Networking.PushNotifications.IRawNotification2";
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Headers )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChannelId )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2Vtbl;
interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Headers(This,value) )
    ( (This)->lpVtbl->get_ChannelId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_PushNotifications_PushNotificationChannel[] = L"Windows.Networking.PushNotifications.PushNotificationChannel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_PushNotifications_PushNotificationChannelManager[] = L"Windows.Networking.PushNotifications.PushNotificationChannelManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_PushNotifications_PushNotificationChannelManagerForUser[] = L"Windows.Networking.PushNotifications.PushNotificationChannelManagerForUser";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_PushNotifications_PushNotificationReceivedEventArgs[] = L"Windows.Networking.PushNotifications.PushNotificationReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_PushNotifications_RawNotification[] = L"Windows.Networking.PushNotifications.RawNotification";
       
       
#pragma clang diagnostic pop
