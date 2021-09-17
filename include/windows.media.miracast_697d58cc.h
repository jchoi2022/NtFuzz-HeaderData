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
#include "Windows.ApplicationModel.Core.h"
#include "Windows.Graphics.h"
#include "Windows.Media.Core.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver;
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverApplySettingsResult __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverApplySettingsResult;
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection;
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionCreatedEventArgs __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionCreatedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel;
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettings __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettings;
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverDisconnectedEventArgs __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverDisconnectedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice;
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverInputDevices __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverInputDevices;
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice;
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgs __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession;
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionStartResult __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionStartResult;
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings;
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatus __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatus;
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControl __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControl;
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings;
typedef interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter;
typedef interface __FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection __FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection;
typedef struct __FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This, __RPC__out __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnectionVtbl;
interface __FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnectionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection __FIIterable_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection;
typedef struct __FIIterable_1_Windows__CMedia__CMiracast__CMiracastReceiverConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CMiracast__CMiracastReceiverConnectionVtbl;
interface __FIIterable_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CMiracast__CMiracastReceiverConnectionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitter __FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitter;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitter;
typedef struct __FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This, __RPC__out __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitterVtbl;
interface __FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitter
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitterVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CMiracast__CMiracastTransmitter __FIIterable_1_Windows__CMedia__CMiracast__CMiracastTransmitter;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CMiracast__CMiracastTransmitter;
typedef struct __FIIterable_1_Windows__CMedia__CMiracast__CMiracastTransmitterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMiracast__CMiracastTransmitter **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CMiracast__CMiracastTransmitterVtbl;
interface __FIIterable_1_Windows__CMedia__CMiracast__CMiracastTransmitter
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CMiracast__CMiracastTransmitterVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection;
typedef struct __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This,
                       __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnectionVtbl;
interface __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnectionVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitter __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitter;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitter;
typedef struct __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This,
                       __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitter * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitterVtbl;
interface __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitter
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitterVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult * This, __RPC__out __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverApplySettingsResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSession __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSession;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSession;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSession __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSession;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSession * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSession * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSession * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSession *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSession
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSession __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSession;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSession;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSession * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSession * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSession * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSession * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSession * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSession * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSession *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSession * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSession **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSession * This, __RPC__out __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSession
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult * This, __RPC__out __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionStartResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSettingsVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSettingsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings * This, __RPC__out __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettingsVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettingsVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus * This, __RPC__out __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatus * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatusVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettingsVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettingsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings * This, __RPC__out __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettingsVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettingsVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiver_IInspectable __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiver_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiver_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiver_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiver_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiver_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiver_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiver_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiver_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiver_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiver_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverCursorImageChannel_IInspectable __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverCursorImageChannel_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverCursorImageChannel_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverCursorImageChannel_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverCursorImageChannel_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverCursorImageChannel_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverCursorImageChannel_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverCursorImageChannel_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverCursorImageChannel_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverCursorImageChannel_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverCursorImageChannel_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverGameControllerDevice_IInspectable __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverGameControllerDevice_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverGameControllerDevice_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverGameControllerDevice_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverGameControllerDevice_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverGameControllerDevice_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverGameControllerDevice_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverGameControllerDevice_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverGameControllerDevice_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverGameControllerDevice_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverGameControllerDevice_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverKeyboardDevice_IInspectable __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverKeyboardDevice_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverKeyboardDevice_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverKeyboardDevice_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverKeyboardDevice_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverKeyboardDevice_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverKeyboardDevice_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverKeyboardDevice_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverKeyboardDevice_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverKeyboardDevice_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverKeyboardDevice_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverConnectionCreatedEventArgs __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverConnectionCreatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverConnectionCreatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverConnectionCreatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverConnectionCreatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverConnectionCreatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverConnectionCreatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverConnectionCreatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionCreatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverConnectionCreatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverConnectionCreatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverConnectionCreatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverDisconnectedEventArgs __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverDisconnectedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverDisconnectedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverDisconnectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverDisconnectedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverDisconnectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverDisconnectedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverDisconnectedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverDisconnectedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverDisconnectedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverDisconnectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverDisconnectedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverMediaSourceCreatedEventArgs __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverMediaSourceCreatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverMediaSourceCreatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverMediaSourceCreatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverMediaSourceCreatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverMediaSourceCreatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverMediaSourceCreatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverMediaSourceCreatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverMediaSourceCreatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverMediaSourceCreatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverMediaSourceCreatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CGraphics_CPointInt32 __x_ABI_CWindows_CGraphics_CPointInt32;
typedef struct __x_ABI_CWindows_CGraphics_CSizeInt32 __x_ABI_CWindows_CGraphics_CSizeInt32;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 __x_ABI_CWindows_CMedia_CCore_CIMediaSource2;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
typedef enum __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverApplySettingsStatus __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverApplySettingsStatus;
typedef enum __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverAuthorizationMethod __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverAuthorizationMethod;
typedef enum __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverDisconnectReason __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverDisconnectReason;
typedef enum __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverGameControllerDeviceUsageMode __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverGameControllerDeviceUsageMode;
typedef enum __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverListeningStatus __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverListeningStatus;
typedef enum __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverSessionStartStatus __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverSessionStartStatus;
typedef enum __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverWiFiStatus __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverWiFiStatus;
typedef enum __x_ABI_CWindows_CMedia_CMiracast_CMiracastTransmitterAuthorizationStatus __x_ABI_CWindows_CMedia_CMiracast_CMiracastTransmitterAuthorizationStatus;
enum __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverApplySettingsStatus
{
    MiracastReceiverApplySettingsStatus_Success = 0,
    MiracastReceiverApplySettingsStatus_UnknownFailure = 1,
    MiracastReceiverApplySettingsStatus_MiracastNotSupported = 2,
    MiracastReceiverApplySettingsStatus_AccessDenied = 3,
    MiracastReceiverApplySettingsStatus_FriendlyNameTooLong = 4,
    MiracastReceiverApplySettingsStatus_ModelNameTooLong = 5,
    MiracastReceiverApplySettingsStatus_ModelNumberTooLong = 6,
    MiracastReceiverApplySettingsStatus_InvalidSettings = 7,
};
enum __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverAuthorizationMethod
{
    MiracastReceiverAuthorizationMethod_None = 0,
    MiracastReceiverAuthorizationMethod_ConfirmConnection = 1,
    MiracastReceiverAuthorizationMethod_PinDisplayIfRequested = 2,
    MiracastReceiverAuthorizationMethod_PinDisplayRequired = 3,
};
enum __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverDisconnectReason
{
    MiracastReceiverDisconnectReason_Finished = 0,
    MiracastReceiverDisconnectReason_AppSpecificError = 1,
    MiracastReceiverDisconnectReason_ConnectionNotAccepted = 2,
    MiracastReceiverDisconnectReason_DisconnectedByUser = 3,
    MiracastReceiverDisconnectReason_FailedToStartStreaming = 4,
    MiracastReceiverDisconnectReason_MediaDecodingError = 5,
    MiracastReceiverDisconnectReason_MediaStreamingError = 6,
    MiracastReceiverDisconnectReason_MediaDecryptionError = 7,
};
enum __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverGameControllerDeviceUsageMode
{
    MiracastReceiverGameControllerDeviceUsageMode_AsGameController = 0,
    MiracastReceiverGameControllerDeviceUsageMode_AsMouseAndKeyboard = 1,
};
enum __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverListeningStatus
{
    MiracastReceiverListeningStatus_NotListening = 0,
    MiracastReceiverListeningStatus_Listening = 1,
    MiracastReceiverListeningStatus_ConnectionPending = 2,
    MiracastReceiverListeningStatus_Connected = 3,
    MiracastReceiverListeningStatus_DisabledByPolicy = 4,
    MiracastReceiverListeningStatus_TemporarilyDisabled = 5,
};
enum __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverSessionStartStatus
{
    MiracastReceiverSessionStartStatus_Success = 0,
    MiracastReceiverSessionStartStatus_UnknownFailure = 1,
    MiracastReceiverSessionStartStatus_MiracastNotSupported = 2,
    MiracastReceiverSessionStartStatus_AccessDenied = 3,
};
enum __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverWiFiStatus
{
    MiracastReceiverWiFiStatus_MiracastSupportUndetermined = 0,
    MiracastReceiverWiFiStatus_MiracastNotSupported = 1,
    MiracastReceiverWiFiStatus_MiracastSupportNotOptimized = 2,
    MiracastReceiverWiFiStatus_MiracastSupported = 3,
};
enum __x_ABI_CWindows_CMedia_CMiracast_CMiracastTransmitterAuthorizationStatus
{
    MiracastTransmitterAuthorizationStatus_Undecided = 0,
    MiracastTransmitterAuthorizationStatus_Allowed = 1,
    MiracastTransmitterAuthorizationStatus_AlwaysPrompt = 2,
    MiracastTransmitterAuthorizationStatus_Blocked = 3,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastReceiver[] = L"Windows.Media.Miracast.IMiracastReceiver";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefaultSettings )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentSettings )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentSettingsAsync )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSettings * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DisconnectAllAndApplySettings )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * settings,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverApplySettingsResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DisconnectAllAndApplySettingsAsync )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * settings,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverApplySettingsResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetStatus )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetStatusAsync )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverStatus * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StatusChanged )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiver_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StatusChanged )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSession )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * view,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSessionAsync )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * view,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSession * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ClearKnownTransmitters )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveKnownTransmitter )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * transmitter
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefaultSettings(This,result) )
    ( (This)->lpVtbl->GetCurrentSettings(This,result) )
    ( (This)->lpVtbl->GetCurrentSettingsAsync(This,operation) )
    ( (This)->lpVtbl->DisconnectAllAndApplySettings(This,settings,result) )
    ( (This)->lpVtbl->DisconnectAllAndApplySettingsAsync(This,settings,operation) )
    ( (This)->lpVtbl->GetStatus(This,result) )
    ( (This)->lpVtbl->GetStatusAsync(This,operation) )
    ( (This)->lpVtbl->add_StatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StatusChanged(This,token) )
    ( (This)->lpVtbl->CreateSession(This,view,result) )
    ( (This)->lpVtbl->CreateSessionAsync(This,view,operation) )
    ( (This)->lpVtbl->ClearKnownTransmitters(This) )
    ( (This)->lpVtbl->RemoveKnownTransmitter(This,transmitter) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiver;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastReceiverApplySettingsResult[] = L"Windows.Media.Miracast.IMiracastReceiverApplySettingsResult";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverApplySettingsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverApplySettingsResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverApplySettingsResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverApplySettingsResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverApplySettingsResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverApplySettingsResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverApplySettingsResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverApplySettingsResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverApplySettingsStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverApplySettingsResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverApplySettingsResultVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverApplySettingsResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverApplySettingsResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverApplySettingsResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastReceiverConnection[] = L"Windows.Media.Miracast.IMiracastReceiverConnection";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Disconnect )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * This,
                  __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverDisconnectReason reason
        );
                    HRESULT ( STDMETHODCALLTYPE *DisconnectWithMessage )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * This,
                  __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverDisconnectReason reason,
                  __RPC__in HSTRING message
        );
    HRESULT ( STDMETHODCALLTYPE *Pause )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * This
        );
    HRESULT ( STDMETHODCALLTYPE *PauseAsync )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *Resume )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * This
        );
    HRESULT ( STDMETHODCALLTYPE *ResumeAsync )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Transmitter )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputDevices )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverInputDevices * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CursorImageChannel )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StreamControl )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControl * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Disconnect(This,reason) )
    ( (This)->lpVtbl->DisconnectWithMessage(This,reason,message) )
    ( (This)->lpVtbl->Pause(This) )
    ( (This)->lpVtbl->PauseAsync(This,operation) )
    ( (This)->lpVtbl->Resume(This) )
    ( (This)->lpVtbl->ResumeAsync(This,operation) )
    ( (This)->lpVtbl->get_Transmitter(This,value) )
    ( (This)->lpVtbl->get_InputDevices(This,value) )
    ( (This)->lpVtbl->get_CursorImageChannel(This,value) )
    ( (This)->lpVtbl->get_StreamControl(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastReceiverConnectionCreatedEventArgs[] = L"Windows.Media.Miracast.IMiracastReceiverConnectionCreatedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionCreatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionCreatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionCreatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionCreatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionCreatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionCreatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionCreatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Connection )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionCreatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pin )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionCreatedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionCreatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionCreatedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionCreatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionCreatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Connection(This,value) )
    ( (This)->lpVtbl->get_Pin(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnectionCreatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastReceiverCursorImageChannel[] = L"Windows.Media.Miracast.IMiracastReceiverCursorImageChannel";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxImageSize )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CSizeInt32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPointInt32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ImageStream )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ImageStreamChanged )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverCursorImageChannel_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ImageStreamChanged )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PositionChanged )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverCursorImageChannel_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PositionChanged )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_MaxImageSize(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_ImageStream(This,value) )
    ( (This)->lpVtbl->add_ImageStreamChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ImageStreamChanged(This,token) )
    ( (This)->lpVtbl->add_PositionChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_PositionChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastReceiverCursorImageChannelSettings[] = L"Windows.Media.Miracast.IMiracastReceiverCursorImageChannelSettings";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxImageSize )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettings * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CSizeInt32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxImageSize )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettings * This,
                  __x_ABI_CWindows_CGraphics_CSizeInt32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettingsVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_MaxImageSize(This,value) )
    ( (This)->lpVtbl->put_MaxImageSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastReceiverDisconnectedEventArgs[] = L"Windows.Media.Miracast.IMiracastReceiverDisconnectedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverDisconnectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverDisconnectedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverDisconnectedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverDisconnectedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverDisconnectedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverDisconnectedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverDisconnectedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Connection )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverDisconnectedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverDisconnectedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverDisconnectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverDisconnectedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Connection(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverDisconnectedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastReceiverGameControllerDevice[] = L"Windows.Media.Miracast.IMiracastReceiverGameControllerDevice";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TransmitInput )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransmitInput )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRequestedByTransmitter )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTransmittingInput )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverGameControllerDeviceUsageMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice * This,
                  __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverGameControllerDeviceUsageMode value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Changed )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverGameControllerDevice_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Changed )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDeviceVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TransmitInput(This,value) )
    ( (This)->lpVtbl->put_TransmitInput(This,value) )
    ( (This)->lpVtbl->get_IsRequestedByTransmitter(This,value) )
    ( (This)->lpVtbl->get_IsTransmittingInput(This,value) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->put_Mode(This,value) )
    ( (This)->lpVtbl->add_Changed(This,handler,token) )
    ( (This)->lpVtbl->remove_Changed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastReceiverInputDevices[] = L"Windows.Media.Miracast.IMiracastReceiverInputDevices";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverInputDevicesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverInputDevices * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverInputDevices * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverInputDevices * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverInputDevices * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverInputDevices * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverInputDevices * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Keyboard )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverInputDevices * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GameController )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverInputDevices * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverGameControllerDevice * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverInputDevicesVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverInputDevices
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverInputDevicesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Keyboard(This,value) )
    ( (This)->lpVtbl->get_GameController(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverInputDevices;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastReceiverKeyboardDevice[] = L"Windows.Media.Miracast.IMiracastReceiverKeyboardDevice";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TransmitInput )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransmitInput )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRequestedByTransmitter )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTransmittingInput )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Changed )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverKeyboardDevice_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Changed )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDeviceVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TransmitInput(This,value) )
    ( (This)->lpVtbl->put_TransmitInput(This,value) )
    ( (This)->lpVtbl->get_IsRequestedByTransmitter(This,value) )
    ( (This)->lpVtbl->get_IsTransmittingInput(This,value) )
    ( (This)->lpVtbl->add_Changed(This,handler,token) )
    ( (This)->lpVtbl->remove_Changed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverKeyboardDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastReceiverMediaSourceCreatedEventArgs[] = L"Windows.Media.Miracast.IMiracastReceiverMediaSourceCreatedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Connection )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverConnection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaSource )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CursorImageChannelSettings )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverCursorImageChannelSettings * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Connection(This,value) )
    ( (This)->lpVtbl->get_MediaSource(This,value) )
    ( (This)->lpVtbl->get_CursorImageChannelSettings(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverMediaSourceCreatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastReceiverSession[] = L"Windows.Media.Miracast.IMiracastReceiverSession";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ConnectionCreated )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverConnectionCreatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ConnectionCreated )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MediaSourceCreated )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverMediaSourceCreatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MediaSourceCreated )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Disconnected )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMiracast__CMiracastReceiverSession_Windows__CMedia__CMiracast__CMiracastReceiverDisconnectedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Disconnected )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowConnectionTakeover )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowConnectionTakeover )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxSimultaneousConnections )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxSimultaneousConnections )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This,
                  INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionStartResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverSessionStartResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ConnectionCreated(This,handler,token) )
    ( (This)->lpVtbl->remove_ConnectionCreated(This,token) )
    ( (This)->lpVtbl->add_MediaSourceCreated(This,handler,token) )
    ( (This)->lpVtbl->remove_MediaSourceCreated(This,token) )
    ( (This)->lpVtbl->add_Disconnected(This,handler,token) )
    ( (This)->lpVtbl->remove_Disconnected(This,token) )
    ( (This)->lpVtbl->get_AllowConnectionTakeover(This,value) )
    ( (This)->lpVtbl->put_AllowConnectionTakeover(This,value) )
    ( (This)->lpVtbl->get_MaxSimultaneousConnections(This,value) )
    ( (This)->lpVtbl->put_MaxSimultaneousConnections(This,value) )
    ( (This)->lpVtbl->Start(This,result) )
    ( (This)->lpVtbl->StartAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastReceiverSessionStartResult[] = L"Windows.Media.Miracast.IMiracastReceiverSessionStartResult";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionStartResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionStartResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionStartResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionStartResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionStartResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionStartResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionStartResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionStartResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverSessionStartStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionStartResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionStartResultVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionStartResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionStartResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSessionStartResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastReceiverSettings[] = L"Windows.Media.Miracast.IMiracastReceiverSettings";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ModelName )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ModelName )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ModelNumber )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ModelNumber )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthorizationMethod )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverAuthorizationMethod * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AuthorizationMethod )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * This,
                  __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverAuthorizationMethod value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequireAuthorizationFromKnownTransmitters )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RequireAuthorizationFromKnownTransmitters )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettingsVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FriendlyName(This,value) )
    ( (This)->lpVtbl->put_FriendlyName(This,value) )
    ( (This)->lpVtbl->get_ModelName(This,value) )
    ( (This)->lpVtbl->put_ModelName(This,value) )
    ( (This)->lpVtbl->get_ModelNumber(This,value) )
    ( (This)->lpVtbl->put_ModelNumber(This,value) )
    ( (This)->lpVtbl->get_AuthorizationMethod(This,value) )
    ( (This)->lpVtbl->put_AuthorizationMethod(This,value) )
    ( (This)->lpVtbl->get_RequireAuthorizationFromKnownTransmitters(This,value) )
    ( (This)->lpVtbl->put_RequireAuthorizationFromKnownTransmitters(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastReceiverStatus[] = L"Windows.Media.Miracast.IMiracastReceiverStatus";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatus * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatus * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatus * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatus * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatus * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatus * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ListeningStatus )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatus * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverListeningStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WiFiStatus )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatus * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMiracast_CMiracastReceiverWiFiStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsConnectionTakeoverSupported )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatus * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxSimultaneousConnections )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatus * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KnownTransmitters )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatus * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastTransmitter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatusVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatus
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatusVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ListeningStatus(This,value) )
    ( (This)->lpVtbl->get_WiFiStatus(This,value) )
    ( (This)->lpVtbl->get_IsConnectionTakeoverSupported(This,value) )
    ( (This)->lpVtbl->get_MaxSimultaneousConnections(This,value) )
    ( (This)->lpVtbl->get_KnownTransmitters(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStatus;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastReceiverStreamControl[] = L"Windows.Media.Miracast.IMiracastReceiverStreamControl";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetVideoStreamSettings )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControl * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetVideoStreamSettingsAsync )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControl * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CMiracast__CMiracastReceiverVideoStreamSettings * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SuggestVideoStreamSettings )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings * settings
        );
    HRESULT ( STDMETHODCALLTYPE *SuggestVideoStreamSettingsAsync )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings * settings,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MuteAudio )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MuteAudio )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControl * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControlVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetVideoStreamSettings(This,result) )
    ( (This)->lpVtbl->GetVideoStreamSettingsAsync(This,operation) )
    ( (This)->lpVtbl->SuggestVideoStreamSettings(This,settings) )
    ( (This)->lpVtbl->SuggestVideoStreamSettingsAsync(This,settings,operation) )
    ( (This)->lpVtbl->get_MuteAudio(This,value) )
    ( (This)->lpVtbl->put_MuteAudio(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverStreamControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastReceiverVideoStreamSettings[] = L"Windows.Media.Miracast.IMiracastReceiverVideoStreamSettings";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CSizeInt32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Size )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings * This,
                  __x_ABI_CWindows_CGraphics_CSizeInt32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bitrate )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Bitrate )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings * This,
                  INT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettingsVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Size(This,value) )
    ( (This)->lpVtbl->put_Size(This,value) )
    ( (This)->lpVtbl->get_Bitrate(This,value) )
    ( (This)->lpVtbl->put_Bitrate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastReceiverVideoStreamSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Miracast_IMiracastTransmitter[] = L"Windows.Media.Miracast.IMiracastTransmitter";
typedef struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthorizationStatus )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMiracast_CMiracastTransmitterAuthorizationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AuthorizationStatus )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * This,
                  __x_ABI_CWindows_CMedia_CMiracast_CMiracastTransmitterAuthorizationStatus value
        );
    HRESULT ( STDMETHODCALLTYPE *GetConnections )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CMiracast__CMiracastReceiverConnection * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MacAddress )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastConnectionTime )(
        __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitterVtbl;
interface __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_AuthorizationStatus(This,value) )
    ( (This)->lpVtbl->put_AuthorizationStatus(This,value) )
    ( (This)->lpVtbl->GetConnections(This,result) )
    ( (This)->lpVtbl->get_MacAddress(This,value) )
    ( (This)->lpVtbl->get_LastConnectionTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMiracast_CIMiracastTransmitter;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastReceiver[] = L"Windows.Media.Miracast.MiracastReceiver";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastReceiverApplySettingsResult[] = L"Windows.Media.Miracast.MiracastReceiverApplySettingsResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastReceiverConnection[] = L"Windows.Media.Miracast.MiracastReceiverConnection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastReceiverConnectionCreatedEventArgs[] = L"Windows.Media.Miracast.MiracastReceiverConnectionCreatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastReceiverCursorImageChannel[] = L"Windows.Media.Miracast.MiracastReceiverCursorImageChannel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastReceiverCursorImageChannelSettings[] = L"Windows.Media.Miracast.MiracastReceiverCursorImageChannelSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastReceiverDisconnectedEventArgs[] = L"Windows.Media.Miracast.MiracastReceiverDisconnectedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastReceiverGameControllerDevice[] = L"Windows.Media.Miracast.MiracastReceiverGameControllerDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastReceiverInputDevices[] = L"Windows.Media.Miracast.MiracastReceiverInputDevices";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastReceiverKeyboardDevice[] = L"Windows.Media.Miracast.MiracastReceiverKeyboardDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastReceiverMediaSourceCreatedEventArgs[] = L"Windows.Media.Miracast.MiracastReceiverMediaSourceCreatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastReceiverSession[] = L"Windows.Media.Miracast.MiracastReceiverSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastReceiverSessionStartResult[] = L"Windows.Media.Miracast.MiracastReceiverSessionStartResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastReceiverSettings[] = L"Windows.Media.Miracast.MiracastReceiverSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastReceiverStatus[] = L"Windows.Media.Miracast.MiracastReceiverStatus";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastReceiverStreamControl[] = L"Windows.Media.Miracast.MiracastReceiverStreamControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastReceiverVideoStreamSettings[] = L"Windows.Media.Miracast.MiracastReceiverVideoStreamSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Miracast_MiracastTransmitter[] = L"Windows.Media.Miracast.MiracastTransmitter";
       
       
#pragma clang diagnostic pop
