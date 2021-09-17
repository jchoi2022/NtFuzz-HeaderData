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
#include "Windows.ApplicationModel.Contacts.h"
#include "Windows.Devices.Enumeration.h"
#include "Windows.System.h"
#include "Windows.UI.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CICallAnswerEventArgs __x_ABI_CWindows_CApplicationModel_CCalls_CICallAnswerEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CICallRejectEventArgs __x_ABI_CWindows_CApplicationModel_CCalls_CICallRejectEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CICallStateChangeEventArgs __x_ABI_CWindows_CApplicationModel_CCalls_CICallStateChangeEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndCallDeferral __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndCallDeferral;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndRequestedEventArgs __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndRequestedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIMuteChangeEventArgs __x_ABI_CWindows_CApplicationModel_CCalls_CIMuteChangeEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStatics __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddressFactory __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddressFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryQueryOptions __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryQueryOptions;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryReader __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryReader;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerForUser __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerForUser;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics2 __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics2;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2 __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallStore __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallStore;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilities __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilities;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilitiesManagerStatics __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilitiesManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine2 __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine2;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetails __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineConfiguration __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineConfiguration;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineStatics __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceStatics __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherEventArgs __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemail __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemail;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator2 __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator2;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator3 __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator3;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator4 __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator4;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinatorStatics __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinatorStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall2 __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall2;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall3 __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall3;
typedef interface __FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry __FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry;
typedef struct __FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry __FIIterable_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry;
typedef struct __FIIterable_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry __FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                       __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStoreVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStoreVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStoreVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStoreVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallStore __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallStore;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallStore;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStore __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStore;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallStore * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallStore * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStore *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallStoreVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallStore
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallStoreVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStore __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStore;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStore;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStore * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStore * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStore * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStore * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStore * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallStore *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStore * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallStore **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStore * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallStore * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStoreVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStore
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStoreVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilitiesVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilitiesVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilities * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilitiesVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilitiesVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneLine __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneLine;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneLine;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLine __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLine;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneLineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneLine * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneLine * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneLine * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneLine * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLine *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneLineVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneLine
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneLineVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLine __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLine;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLine;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLine * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLine * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLine * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLine * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLine * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLine * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLine * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneLine *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLine * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CPhoneLine **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLine * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLineVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLine
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLineVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallResourceReservationStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallResourceReservationStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatusVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntryVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_Windows__CApplicationModel__CCalls__CLockScreenCallEndRequestedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_Windows__CApplicationModel__CCalls__CLockScreenCallEndRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_Windows__CApplicationModel__CCalls__CLockScreenCallEndRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_Windows__CApplicationModel__CCalls__CLockScreenCallEndRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_Windows__CApplicationModel__CCalls__CLockScreenCallEndRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_Windows__CApplicationModel__CCalls__CLockScreenCallEndRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_Windows__CApplicationModel__CCalls__CLockScreenCallEndRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_Windows__CApplicationModel__CCalls__CLockScreenCallEndRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_Windows__CApplicationModel__CCalls__CLockScreenCallEndRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_Windows__CApplicationModel__CCalls__CLockScreenCallEndRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_Windows__CApplicationModel__CCalls__CLockScreenCallEndRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLine_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLine_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLine_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLine_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLine_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLine_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLine_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLine_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLine_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLine_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLine_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_Windows__CApplicationModel__CCalls__CPhoneLineWatcherEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_Windows__CApplicationModel__CCalls__CPhoneLineWatcherEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_Windows__CApplicationModel__CCalls__CPhoneLineWatcherEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_Windows__CApplicationModel__CCalls__CPhoneLineWatcherEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_Windows__CApplicationModel__CCalls__CPhoneLineWatcherEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_Windows__CApplicationModel__CCalls__CPhoneLineWatcherEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_Windows__CApplicationModel__CCalls__CPhoneLineWatcherEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_Windows__CApplicationModel__CCalls__CPhoneLineWatcherEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_Windows__CApplicationModel__CCalls__CPhoneLineWatcherEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_Windows__CApplicationModel__CCalls__CPhoneLineWatcherEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_Windows__CApplicationModel__CCalls__CPhoneLineWatcherEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipCallCoordinator_Windows__CApplicationModel__CCalls__CMuteChangeEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipCallCoordinator_Windows__CApplicationModel__CCalls__CMuteChangeEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipCallCoordinator_Windows__CApplicationModel__CCalls__CMuteChangeEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipCallCoordinator_Windows__CApplicationModel__CCalls__CMuteChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipCallCoordinator_Windows__CApplicationModel__CCalls__CMuteChangeEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipCallCoordinator_Windows__CApplicationModel__CCalls__CMuteChangeEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipCallCoordinator_Windows__CApplicationModel__CCalls__CMuteChangeEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipCallCoordinator_Windows__CApplicationModel__CCalls__CMuteChangeEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIMuteChangeEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipCallCoordinator_Windows__CApplicationModel__CCalls__CMuteChangeEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipCallCoordinator_Windows__CApplicationModel__CCalls__CMuteChangeEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipCallCoordinator_Windows__CApplicationModel__CCalls__CMuteChangeEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallAnswerEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallAnswerEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallAnswerEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallAnswerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallAnswerEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallAnswerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallAnswerEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallAnswerEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CICallAnswerEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallAnswerEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallAnswerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallAnswerEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallRejectEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallRejectEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallRejectEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallRejectEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallRejectEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallRejectEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallRejectEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallRejectEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CICallRejectEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallRejectEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallRejectEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallRejectEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallStateChangeEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallStateChangeEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallStateChangeEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallStateChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallStateChangeEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallStateChangeEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallStateChangeEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallStateChangeEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CICallStateChangeEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallStateChangeEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallStateChangeEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallStateChangeEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
struct __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __FIReference_1_Windows__CFoundation__CTimeSpan __FIReference_1_Windows__CFoundation__CTimeSpan;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CTimeSpan;
typedef struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CTimeSpan *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CTimeSpanVtbl;
interface __FIReference_1_Windows__CFoundation__CTimeSpan
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef interface __FIVector_1_HSTRING __FIVector_1_HSTRING;
EXTERN_C const IID IID___FIVector_1_HSTRING;
typedef struct __FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_HSTRING * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                            __RPC__deref_out_opt HSTRING *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_HSTRING * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt __FIVectorView_1_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_HSTRING * This,
                   __RPC__in HSTRING item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_HSTRING * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_HSTRING * This, __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) HSTRING *value);
    END_INTERFACE
} __FIVector_1_HSTRINGVtbl;
interface __FIVector_1_HSTRING
{
    CONST_VTBL struct __FIVector_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_UINT32 __FIAsyncOperationCompletedHandler_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_UINT32;
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;
typedef struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This, __RPC__in_opt __FIAsyncOperation_1_UINT32 *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_UINT32Vtbl;
interface __FIAsyncOperationCompletedHandler_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperation_1_UINT32;
typedef struct __FIAsyncOperation_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__out unsigned int *results);
    END_INTERFACE
} __FIAsyncOperation_1_UINT32Vtbl;
interface __FIAsyncOperation_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperation_1_UINT32Vtbl *lpVtbl;
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
typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;
typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;
interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIAsyncOperationCompletedHandler_1_GUID __FIAsyncOperationCompletedHandler_1_GUID;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_GUID;
typedef interface __FIAsyncOperation_1_GUID __FIAsyncOperation_1_GUID;
typedef struct __FIAsyncOperationCompletedHandler_1_GUIDVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_GUID * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_GUID * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_GUID * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_GUID * This, __RPC__in_opt __FIAsyncOperation_1_GUID *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_GUIDVtbl;
interface __FIAsyncOperationCompletedHandler_1_GUID
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_GUIDVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_GUID __FIAsyncOperation_1_GUID;
EXTERN_C const IID IID___FIAsyncOperation_1_GUID;
typedef struct __FIAsyncOperation_1_GUIDVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_GUID * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_GUID * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_GUID * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_GUID * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_GUID * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_GUID * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_GUID * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_GUID *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_GUID * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_GUID **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_GUID * This, __RPC__out GUID *results);
    END_INTERFACE
} __FIAsyncOperation_1_GUIDVtbl;
interface __FIAsyncOperation_1_GUID
{
    CONST_VTBL struct __FIAsyncOperation_1_GUIDVtbl *lpVtbl;
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
typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt IInspectable * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__out enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContact __x_ABI_CWindows_CApplicationModel_CContacts_CIContact;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone;
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CCellularDtmfMode __x_ABI_CWindows_CApplicationModel_CCalls_CCellularDtmfMode;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneAudioRoutingEndpoint __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneAudioRoutingEndpoint;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryMedia __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryMedia;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryOtherAppReadAccess __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryOtherAppReadAccess;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryQueryDesiredMedia __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryQueryDesiredMedia;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryRawAddressKind __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryRawAddressKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistorySourceIdKind __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistorySourceIdKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryStoreAccessType __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryStoreAccessType;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallMedia __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallMedia;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneLineNetworkOperatorDisplayTextLocation __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneLineNetworkOperatorDisplayTextLocation;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneLineTransport __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneLineTransport;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneLineWatcherStatus __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneLineWatcherStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneNetworkState __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneNetworkState;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneSimState __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneSimState;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneVoicemailType __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneVoicemailType;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallMedia __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallMedia;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallRejectReason __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallRejectReason;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallResourceReservationStatus __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallResourceReservationStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallState __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallState;
enum __x_ABI_CWindows_CApplicationModel_CCalls_CCellularDtmfMode
{
    CellularDtmfMode_Continuous = 0,
    CellularDtmfMode_Burst = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneAudioRoutingEndpoint
{
    PhoneAudioRoutingEndpoint_Default = 0,
    PhoneAudioRoutingEndpoint_Bluetooth = 1,
    PhoneAudioRoutingEndpoint_Speakerphone = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryMedia
{
    PhoneCallHistoryEntryMedia_Audio = 0,
    PhoneCallHistoryEntryMedia_Video = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryOtherAppReadAccess
{
    PhoneCallHistoryEntryOtherAppReadAccess_Full = 0,
    PhoneCallHistoryEntryOtherAppReadAccess_SystemOnly = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryQueryDesiredMedia
{
    PhoneCallHistoryEntryQueryDesiredMedia_None = 0,
    PhoneCallHistoryEntryQueryDesiredMedia_Audio = 0x1,
    PhoneCallHistoryEntryQueryDesiredMedia_Video = 0x2,
    PhoneCallHistoryEntryQueryDesiredMedia_All = 0xffffffff,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryRawAddressKind
{
    PhoneCallHistoryEntryRawAddressKind_PhoneNumber = 0,
    PhoneCallHistoryEntryRawAddressKind_Custom = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistorySourceIdKind
{
    PhoneCallHistorySourceIdKind_CellularPhoneLineId = 0,
    PhoneCallHistorySourceIdKind_PackageFamilyName = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryStoreAccessType
{
    PhoneCallHistoryStoreAccessType_AppEntriesReadWrite = 0,
    PhoneCallHistoryStoreAccessType_AllEntriesLimitedReadWrite = 1,
    PhoneCallHistoryStoreAccessType_AllEntriesReadWrite = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallMedia
{
    PhoneCallMedia_Audio = 0,
    PhoneCallMedia_AudioAndVideo = 1,
    PhoneCallMedia_AudioAndRealTimeText = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneLineNetworkOperatorDisplayTextLocation
{
    PhoneLineNetworkOperatorDisplayTextLocation_Default = 0,
    PhoneLineNetworkOperatorDisplayTextLocation_Tile = 1,
    PhoneLineNetworkOperatorDisplayTextLocation_Dialer = 2,
    PhoneLineNetworkOperatorDisplayTextLocation_InCallUI = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneLineTransport
{
    PhoneLineTransport_Cellular = 0,
    PhoneLineTransport_VoipApp = 1,
    PhoneLineTransport_Bluetooth = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneLineWatcherStatus
{
    PhoneLineWatcherStatus_Created = 0,
    PhoneLineWatcherStatus_Started = 1,
    PhoneLineWatcherStatus_EnumerationCompleted = 2,
    PhoneLineWatcherStatus_Stopped = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneNetworkState
{
    PhoneNetworkState_Unknown = 0,
    PhoneNetworkState_NoSignal = 1,
    PhoneNetworkState_Deregistered = 2,
    PhoneNetworkState_Denied = 3,
    PhoneNetworkState_Searching = 4,
    PhoneNetworkState_Home = 5,
    PhoneNetworkState_RoamingInternational = 6,
    PhoneNetworkState_RoamingDomestic = 7,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneSimState
{
    PhoneSimState_Unknown = 0,
    PhoneSimState_PinNotRequired = 1,
    PhoneSimState_PinUnlocked = 2,
    PhoneSimState_PinLocked = 3,
    PhoneSimState_PukLocked = 4,
    PhoneSimState_NotInserted = 5,
    PhoneSimState_Invalid = 6,
    PhoneSimState_Disabled = 7,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneVoicemailType
{
    PhoneVoicemailType_None = 0,
    PhoneVoicemailType_Traditional = 1,
    PhoneVoicemailType_Visual = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallMedia
{
    VoipPhoneCallMedia_None = 0,
    VoipPhoneCallMedia_Audio = 0x1,
    VoipPhoneCallMedia_Video = 0x2,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallRejectReason
{
    VoipPhoneCallRejectReason_UserIgnored = 0,
    VoipPhoneCallRejectReason_TimedOut = 1,
    VoipPhoneCallRejectReason_OtherIncomingCall = 2,
    VoipPhoneCallRejectReason_EmergencyCallExists = 3,
    VoipPhoneCallRejectReason_InvalidCallState = 4,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallResourceReservationStatus
{
    VoipPhoneCallResourceReservationStatus_Success = 0,
    VoipPhoneCallResourceReservationStatus_ResourcesNotAvailable = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallState
{
    VoipPhoneCallState_Ended = 0,
    VoipPhoneCallState_Held = 1,
    VoipPhoneCallState_Active = 2,
    VoipPhoneCallState_Incoming = 3,
    VoipPhoneCallState_Outgoing = 4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_ICallAnswerEventArgs[] = L"Windows.ApplicationModel.Calls.ICallAnswerEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CICallAnswerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallAnswerEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallAnswerEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallAnswerEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallAnswerEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallAnswerEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallAnswerEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AcceptedMedia )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CICallAnswerEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallMedia * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CICallAnswerEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CICallAnswerEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CICallAnswerEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AcceptedMedia(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CICallAnswerEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_ICallRejectEventArgs[] = L"Windows.ApplicationModel.Calls.ICallRejectEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CICallRejectEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallRejectEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallRejectEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallRejectEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallRejectEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallRejectEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallRejectEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RejectReason )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CICallRejectEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallRejectReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CICallRejectEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CICallRejectEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CICallRejectEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RejectReason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CICallRejectEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_ICallStateChangeEventArgs[] = L"Windows.ApplicationModel.Calls.ICallStateChangeEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CICallStateChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallStateChangeEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallStateChangeEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallStateChangeEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallStateChangeEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallStateChangeEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CICallStateChangeEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CICallStateChangeEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CICallStateChangeEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CICallStateChangeEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CICallStateChangeEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CICallStateChangeEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_ILockScreenCallEndCallDeferral[] = L"Windows.ApplicationModel.Calls.ILockScreenCallEndCallDeferral";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndCallDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndCallDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndCallDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndCallDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndCallDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndCallDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndCallDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndCallDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndCallDeferralVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndCallDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndCallDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndCallDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_ILockScreenCallEndRequestedEventArgs[] = L"Windows.ApplicationModel.Calls.ILockScreenCallEndRequestedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndCallDeferral * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
    ( (This)->lpVtbl->get_Deadline(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallEndRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_ILockScreenCallUI[] = L"Windows.ApplicationModel.Calls.ILockScreenCallUI";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUIVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Dismiss )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EndRequested )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_Windows__CApplicationModel__CCalls__CLockScreenCallEndRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EndRequested )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CLockScreenCallUI_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CallTitle )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CallTitle )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUIVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUIVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Dismiss(This) )
    ( (This)->lpVtbl->add_EndRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_EndRequested(This,token) )
    ( (This)->lpVtbl->add_Closed(This,handler,token) )
    ( (This)->lpVtbl->remove_Closed(This,token) )
    ( (This)->lpVtbl->get_CallTitle(This,value) )
    ( (This)->lpVtbl->put_CallTitle(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IMuteChangeEventArgs[] = L"Windows.ApplicationModel.Calls.IMuteChangeEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIMuteChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIMuteChangeEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIMuteChangeEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIMuteChangeEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIMuteChangeEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIMuteChangeEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIMuteChangeEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Muted )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIMuteChangeEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIMuteChangeEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIMuteChangeEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIMuteChangeEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Muted(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIMuteChangeEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneCallBlockingStatics[] = L"Windows.ApplicationModel.Calls.IPhoneCallBlockingStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BlockUnknownNumbers )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStatics * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BlockUnknownNumbers )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStatics * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BlockPrivateNumbers )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStatics * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BlockPrivateNumbers )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStatics * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *SetCallBlockingListAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStatics * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * phoneNumberList,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BlockUnknownNumbers(This,value) )
    ( (This)->lpVtbl->put_BlockUnknownNumbers(This,value) )
    ( (This)->lpVtbl->get_BlockPrivateNumbers(This,value) )
    ( (This)->lpVtbl->put_BlockPrivateNumbers(This,value) )
    ( (This)->lpVtbl->SetCallBlockingListAsync(This,phoneNumberList,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallBlockingStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntry[] = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntry";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Address )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Address )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCallerIdBlocked )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsCallerIdBlocked )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEmergency )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEmergency )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsIncoming )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsIncoming )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsMissed )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsMissed )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRinging )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsRinging )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSeen )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsSeen )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSuppressed )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsSuppressed )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsVoicemail )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsVoicemail )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Media )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryMedia * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Media )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryMedia value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OtherAppReadAccess )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryOtherAppReadAccess * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OtherAppReadAccess )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryOtherAppReadAccess value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceDisplayName )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SourceId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceIdKind )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistorySourceIdKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SourceIdKind )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistorySourceIdKind value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Address(This,value) )
    ( (This)->lpVtbl->put_Address(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->put_Duration(This,value) )
    ( (This)->lpVtbl->get_IsCallerIdBlocked(This,value) )
    ( (This)->lpVtbl->put_IsCallerIdBlocked(This,value) )
    ( (This)->lpVtbl->get_IsEmergency(This,value) )
    ( (This)->lpVtbl->put_IsEmergency(This,value) )
    ( (This)->lpVtbl->get_IsIncoming(This,value) )
    ( (This)->lpVtbl->put_IsIncoming(This,value) )
    ( (This)->lpVtbl->get_IsMissed(This,value) )
    ( (This)->lpVtbl->put_IsMissed(This,value) )
    ( (This)->lpVtbl->get_IsRinging(This,value) )
    ( (This)->lpVtbl->put_IsRinging(This,value) )
    ( (This)->lpVtbl->get_IsSeen(This,value) )
    ( (This)->lpVtbl->put_IsSeen(This,value) )
    ( (This)->lpVtbl->get_IsSuppressed(This,value) )
    ( (This)->lpVtbl->put_IsSuppressed(This,value) )
    ( (This)->lpVtbl->get_IsVoicemail(This,value) )
    ( (This)->lpVtbl->put_IsVoicemail(This,value) )
    ( (This)->lpVtbl->get_Media(This,value) )
    ( (This)->lpVtbl->put_Media(This,value) )
    ( (This)->lpVtbl->get_OtherAppReadAccess(This,value) )
    ( (This)->lpVtbl->put_OtherAppReadAccess(This,value) )
    ( (This)->lpVtbl->get_RemoteId(This,value) )
    ( (This)->lpVtbl->put_RemoteId(This,value) )
    ( (This)->lpVtbl->get_SourceDisplayName(This,value) )
    ( (This)->lpVtbl->get_SourceId(This,value) )
    ( (This)->lpVtbl->put_SourceId(This,value) )
    ( (This)->lpVtbl->get_SourceIdKind(This,value) )
    ( (This)->lpVtbl->put_SourceIdKind(This,value) )
    ( (This)->lpVtbl->get_StartTime(This,value) )
    ( (This)->lpVtbl->put_StartTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryAddress[] = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntryAddress";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContactId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContactId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RawAddress )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RawAddress )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RawAddressKind )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryRawAddressKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RawAddressKind )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress * This,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryRawAddressKind value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddressVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddressVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContactId(This,value) )
    ( (This)->lpVtbl->put_ContactId(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->put_DisplayName(This,value) )
    ( (This)->lpVtbl->get_RawAddress(This,value) )
    ( (This)->lpVtbl->put_RawAddress(This,value) )
    ( (This)->lpVtbl->get_RawAddressKind(This,value) )
    ( (This)->lpVtbl->put_RawAddressKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryAddressFactory[] = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntryAddressFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddressFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddressFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddressFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddressFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddressFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddressFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddressFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddressFactory * This,
                  __RPC__in HSTRING rawAddress,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryRawAddressKind rawAddressKind,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddress * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddressFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddressFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddressFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,rawAddress,rawAddressKind,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryAddressFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryQueryOptions[] = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntryQueryOptions";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryQueryOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryQueryOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryQueryOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryQueryOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryQueryOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryQueryOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryQueryOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesiredMedia )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryQueryOptions * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryQueryDesiredMedia * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredMedia )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryQueryOptions * This,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryEntryQueryDesiredMedia value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceIds )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryQueryOptions * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryQueryOptionsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryQueryOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryQueryOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesiredMedia(This,value) )
    ( (This)->lpVtbl->put_DesiredMedia(This,value) )
    ( (This)->lpVtbl->get_SourceIds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryQueryOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryReader[] = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntryReader";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReadBatchAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryReaderVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryReader
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReadBatchAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerForUser[] = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryManagerForUser";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerForUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerForUser * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerForUser * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerForUser * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerForUser * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerForUser * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerForUser * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerForUser * This,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryStoreAccessType accessType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerForUser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerForUserVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerForUser
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerForUserVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestStoreAsync(This,accessType,result) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerForUser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerStatics[] = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics * This,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallHistoryStoreAccessType accessType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryStore * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestStoreAsync(This,accessType,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerStatics2[] = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryManagerStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerForUser * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneCallHistoryStore[] = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryStore";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetEntryAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This,
                  __RPC__in HSTRING callHistoryEntryId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetEntryReader )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryReader * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetEntryReaderWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryQueryOptions * queryOptions,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntryReader * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SaveEntryAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * callHistoryEntry,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteEntryAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * callHistoryEntry,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteEntriesAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * callHistoryEntries,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *MarkEntryAsSeenAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryEntry * callHistoryEntry,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *MarkEntriesAsSeenAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CCalls__CPhoneCallHistoryEntry * callHistoryEntries,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetUnseenCountAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * result
        );
    HRESULT ( STDMETHODCALLTYPE *MarkAllAsSeenAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetSourcesUnseenCountAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * sourceIds,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * result
        );
    HRESULT ( STDMETHODCALLTYPE *MarkSourcesAsSeenAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * sourceIds,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStoreVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStoreVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetEntryAsync(This,callHistoryEntryId,result) )
    ( (This)->lpVtbl->GetEntryReader(This,result) )
    ( (This)->lpVtbl->GetEntryReaderWithOptions(This,queryOptions,result) )
    ( (This)->lpVtbl->SaveEntryAsync(This,callHistoryEntry,result) )
    ( (This)->lpVtbl->DeleteEntryAsync(This,callHistoryEntry,result) )
    ( (This)->lpVtbl->DeleteEntriesAsync(This,callHistoryEntries,result) )
    ( (This)->lpVtbl->MarkEntryAsSeenAsync(This,callHistoryEntry,result) )
    ( (This)->lpVtbl->MarkEntriesAsSeenAsync(This,callHistoryEntries,result) )
    ( (This)->lpVtbl->GetUnseenCountAsync(This,result) )
    ( (This)->lpVtbl->MarkAllAsSeenAsync(This,result) )
    ( (This)->lpVtbl->GetSourcesUnseenCountAsync(This,sourceIds,result) )
    ( (This)->lpVtbl->MarkSourcesAsSeenAsync(This,sourceIds,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallHistoryStore;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneCallManagerStatics[] = L"Windows.ApplicationModel.Calls.IPhoneCallManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ShowPhoneCallUI )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics * This,
                  __RPC__in HSTRING phoneNumber,
                  __RPC__in HSTRING displayName
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowPhoneCallUI(This,phoneNumber,displayName) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneCallManagerStatics2[] = L"Windows.ApplicationModel.Calls.IPhoneCallManagerStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_CallStateChanged )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2 * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CallStateChanged )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2 * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCallActive )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCallIncoming )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2 * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowPhoneCallSettingsUI )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallStore * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_CallStateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_CallStateChanged(This,token) )
    ( (This)->lpVtbl->get_IsCallActive(This,value) )
    ( (This)->lpVtbl->get_IsCallIncoming(This,value) )
    ( (This)->lpVtbl->ShowPhoneCallSettingsUI(This) )
    ( (This)->lpVtbl->RequestStoreAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneCallStore[] = L"Windows.ApplicationModel.Calls.IPhoneCallStore";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallStore * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallStore * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallStore * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallStore * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallStore * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallStore * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsEmergencyPhoneNumberAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallStore * This,
                  __RPC__in HSTRING number,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultLineAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallStore * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_GUID * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestLineWatcher )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallStore * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallStoreVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallStore
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallStoreVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsEmergencyPhoneNumberAsync(This,number,result) )
    ( (This)->lpVtbl->GetDefaultLineAsync(This,result) )
    ( (This)->lpVtbl->RequestLineWatcher(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallStore;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneCallVideoCapabilities[] = L"Windows.ApplicationModel.Calls.IPhoneCallVideoCapabilities";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsVideoCallingCapable )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilities * This,
                           __RPC__out boolean * pValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilitiesVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsVideoCallingCapable(This,pValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneCallVideoCapabilitiesManagerStatics[] = L"Windows.ApplicationModel.Calls.IPhoneCallVideoCapabilitiesManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilitiesManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilitiesManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilitiesManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilitiesManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilitiesManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilitiesManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilitiesManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCapabilitiesAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilitiesManagerStatics * This,
                  __RPC__in HSTRING phoneNumber,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneCallVideoCapabilities * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilitiesManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilitiesManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilitiesManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCapabilitiesAsync(This,phoneNumber,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilitiesManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneDialOptions[] = L"Windows.ApplicationModel.Calls.IPhoneDialOptions";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Number )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Number )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Contact )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContactPhone )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContactPhone )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Media )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallMedia * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Media )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneCallMedia value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioEndpoint )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneAudioRoutingEndpoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AudioEndpoint )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * This,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneAudioRoutingEndpoint value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptionsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Number(This,value) )
    ( (This)->lpVtbl->put_Number(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->put_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Contact(This,value) )
    ( (This)->lpVtbl->put_Contact(This,value) )
    ( (This)->lpVtbl->get_ContactPhone(This,value) )
    ( (This)->lpVtbl->put_ContactPhone(This,value) )
    ( (This)->lpVtbl->get_Media(This,value) )
    ( (This)->lpVtbl->put_Media(This,value) )
    ( (This)->lpVtbl->get_AudioEndpoint(This,value) )
    ( (This)->lpVtbl->put_AudioEndpoint(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneLine[] = L"Windows.ApplicationModel.Calls.IPhoneLine";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_LineChanged )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLine_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LineChanged )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayColor )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkState )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneNetworkState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Voicemail )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemail * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkName )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CellularDetails )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetails * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Transport )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneLineTransport * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanDial )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportsTile )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoCallingCapabilities )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneCallVideoCapabilities * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LineConfiguration )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineConfiguration * * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsImmediateDialNumberAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                  __RPC__in HSTRING number,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *Dial )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                  __RPC__in HSTRING number,
                  __RPC__in HSTRING displayName
        );
    HRESULT ( STDMETHODCALLTYPE *DialWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneDialOptions * options
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_LineChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_LineChanged(This,token) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_DisplayColor(This,value) )
    ( (This)->lpVtbl->get_NetworkState(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Voicemail(This,value) )
    ( (This)->lpVtbl->get_NetworkName(This,value) )
    ( (This)->lpVtbl->get_CellularDetails(This,value) )
    ( (This)->lpVtbl->get_Transport(This,value) )
    ( (This)->lpVtbl->get_CanDial(This,value) )
    ( (This)->lpVtbl->get_SupportsTile(This,value) )
    ( (This)->lpVtbl->get_VideoCallingCapabilities(This,value) )
    ( (This)->lpVtbl->get_LineConfiguration(This,value) )
    ( (This)->lpVtbl->IsImmediateDialNumberAsync(This,number,result) )
    ( (This)->lpVtbl->Dial(This,number,displayName) )
    ( (This)->lpVtbl->DialWithOptions(This,options) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneLine2[] = L"Windows.ApplicationModel.Calls.IPhoneLine2";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *EnableTextReply )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransportDeviceId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->EnableTextReply(This,value) )
    ( (This)->lpVtbl->get_TransportDeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLine2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneLineCellularDetails[] = L"Windows.ApplicationModel.Calls.IPhoneLineCellularDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SimState )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetails * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneSimState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SimSlotIndex )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetails * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsModemOn )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RegistrationRejectCode )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetails * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNetworkOperatorDisplayText )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetails * This,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneLineNetworkOperatorDisplayTextLocation location,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SimState(This,value) )
    ( (This)->lpVtbl->get_SimSlotIndex(This,value) )
    ( (This)->lpVtbl->get_IsModemOn(This,value) )
    ( (This)->lpVtbl->get_RegistrationRejectCode(This,value) )
    ( (This)->lpVtbl->GetNetworkOperatorDisplayText(This,location,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineCellularDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneLineConfiguration[] = L"Windows.ApplicationModel.Calls.IPhoneLineConfiguration";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsVideoCallingEnabled )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedProperties )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineConfiguration * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineConfigurationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsVideoCallingEnabled(This,value) )
    ( (This)->lpVtbl->get_ExtendedProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneLineStatics[] = L"Windows.ApplicationModel.Calls.IPhoneLineStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineStatics * This,
                  GUID lineId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CPhoneLine * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdAsync(This,lineId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneLineTransportDevice[] = L"Windows.ApplicationModel.Calls.IPhoneLineTransportDevice";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Transport )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneLineTransport * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RegisterApp )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice * This
        );
    HRESULT ( STDMETHODCALLTYPE *RegisterAppForUser )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user
        );
    HRESULT ( STDMETHODCALLTYPE *UnregisterApp )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice * This
        );
    HRESULT ( STDMETHODCALLTYPE *UnregisterAppForUser )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user
        );
    HRESULT ( STDMETHODCALLTYPE *IsRegistered )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *Connect )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *ConnectAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_Transport(This,value) )
    ( (This)->lpVtbl->RequestAccessAsync(This,operation) )
    ( (This)->lpVtbl->RegisterApp(This) )
    ( (This)->lpVtbl->RegisterAppForUser(This,user) )
    ( (This)->lpVtbl->UnregisterApp(This) )
    ( (This)->lpVtbl->UnregisterAppForUser(This,user) )
    ( (This)->lpVtbl->IsRegistered(This,result) )
    ( (This)->lpVtbl->Connect(This,result) )
    ( (This)->lpVtbl->ConnectAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneLineTransportDeviceStatics[] = L"Windows.ApplicationModel.Calls.IPhoneLineTransportDeviceStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceStatics * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDevice * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceStatics * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorForPhoneLineTransport )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceStatics * This,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneLineTransport transport,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromId(This,id,result) )
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )
    ( (This)->lpVtbl->GetDeviceSelectorForPhoneLineTransport(This,transport,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineTransportDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneLineWatcher[] = L"Windows.ApplicationModel.Calls.IPhoneLineWatcher";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LineAdded )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_Windows__CApplicationModel__CCalls__CPhoneLineWatcherEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LineAdded )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LineRemoved )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_Windows__CApplicationModel__CCalls__CPhoneLineWatcherEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LineRemoved )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LineUpdated )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_Windows__CApplicationModel__CCalls__CPhoneLineWatcherEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LineUpdated )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CPhoneLineWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneLineWatcherStatus * status
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->add_LineAdded(This,handler,token) )
    ( (This)->lpVtbl->remove_LineAdded(This,token) )
    ( (This)->lpVtbl->add_LineRemoved(This,handler,token) )
    ( (This)->lpVtbl->remove_LineRemoved(This,token) )
    ( (This)->lpVtbl->add_LineUpdated(This,handler,token) )
    ( (This)->lpVtbl->remove_LineUpdated(This,token) )
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )
    ( (This)->lpVtbl->remove_Stopped(This,token) )
    ( (This)->lpVtbl->get_Status(This,status) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneLineWatcherEventArgs[] = L"Windows.ApplicationModel.Calls.IPhoneLineWatcherEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LineId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherEventArgs * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LineId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneLineWatcherEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IPhoneVoicemail[] = L"Windows.ApplicationModel.Calls.IPhoneVoicemail";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemail * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemail * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemail * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemail * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemail * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemail * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Number )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemail * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MessageCount )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemail * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemail * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CPhoneVoicemailType * value
        );
    HRESULT ( STDMETHODCALLTYPE *DialVoicemailAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemail * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemailVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemail
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemailVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Number(This,value) )
    ( (This)->lpVtbl->get_MessageCount(This,value) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->DialVoicemailAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIPhoneVoicemail;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IVoipCallCoordinator[] = L"Windows.ApplicationModel.Calls.IVoipCallCoordinator";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReserveCallResourcesAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * This,
                  __RPC__in HSTRING taskEntryPoint,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MuteStateChanged )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipCallCoordinator_Windows__CApplicationModel__CCalls__CMuteChangeEventArgs * muteChangeHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MuteStateChanged )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *RequestNewIncomingCall )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * This,
                  __RPC__in HSTRING context,
                  __RPC__in HSTRING contactName,
                  __RPC__in HSTRING contactNumber,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * contactImage,
                  __RPC__in HSTRING serviceName,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * brandingImage,
                  __RPC__in HSTRING callDetails,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * ringtone,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallMedia media,
                  __x_ABI_CWindows_CFoundation_CTimeSpan ringTimeout,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * * call
        );
    HRESULT ( STDMETHODCALLTYPE *RequestNewOutgoingCall )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * This,
                  __RPC__in HSTRING context,
                  __RPC__in HSTRING contactName,
                  __RPC__in HSTRING serviceName,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallMedia media,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * * call
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyMuted )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyUnmuted )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * This
        );
    HRESULT ( STDMETHODCALLTYPE *RequestOutgoingUpgradeToVideoCall )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * This,
                  GUID callUpgradeGuid,
                  __RPC__in HSTRING context,
                  __RPC__in HSTRING contactName,
                  __RPC__in HSTRING serviceName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * * call
        );
    HRESULT ( STDMETHODCALLTYPE *RequestIncomingUpgradeToVideoCall )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * This,
                  __RPC__in HSTRING context,
                  __RPC__in HSTRING contactName,
                  __RPC__in HSTRING contactNumber,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * contactImage,
                  __RPC__in HSTRING serviceName,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * brandingImage,
                  __RPC__in HSTRING callDetails,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * ringtone,
                  __x_ABI_CWindows_CFoundation_CTimeSpan ringTimeout,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * * call
        );
    HRESULT ( STDMETHODCALLTYPE *TerminateCellularCall )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * This,
                  GUID callUpgradeGuid
        );
    HRESULT ( STDMETHODCALLTYPE *CancelUpgrade )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * This,
                  GUID callUpgradeGuid
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinatorVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinatorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReserveCallResourcesAsync(This,taskEntryPoint,operation) )
    ( (This)->lpVtbl->add_MuteStateChanged(This,muteChangeHandler,token) )
    ( (This)->lpVtbl->remove_MuteStateChanged(This,token) )
    ( (This)->lpVtbl->RequestNewIncomingCall(This,context,contactName,contactNumber,contactImage,serviceName,brandingImage,callDetails,ringtone,media,ringTimeout,call) )
    ( (This)->lpVtbl->RequestNewOutgoingCall(This,context,contactName,serviceName,media,call) )
    ( (This)->lpVtbl->NotifyMuted(This) )
    ( (This)->lpVtbl->NotifyUnmuted(This) )
    ( (This)->lpVtbl->RequestOutgoingUpgradeToVideoCall(This,callUpgradeGuid,context,contactName,serviceName,call) )
    ( (This)->lpVtbl->RequestIncomingUpgradeToVideoCall(This,context,contactName,contactNumber,contactImage,serviceName,brandingImage,callDetails,ringtone,ringTimeout,call) )
    ( (This)->lpVtbl->TerminateCellularCall(This,callUpgradeGuid) )
    ( (This)->lpVtbl->CancelUpgrade(This,callUpgradeGuid) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IVoipCallCoordinator2[] = L"Windows.ApplicationModel.Calls.IVoipCallCoordinator2";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetupNewAcceptedCall )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator2 * This,
                  __RPC__in HSTRING context,
                  __RPC__in HSTRING contactName,
                  __RPC__in HSTRING contactNumber,
                  __RPC__in HSTRING serviceName,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallMedia media,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * * call
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetupNewAcceptedCall(This,context,contactName,contactNumber,serviceName,media,call) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IVoipCallCoordinator3[] = L"Windows.ApplicationModel.Calls.IVoipCallCoordinator3";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestNewAppInitiatedCall )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator3 * This,
                  __RPC__in HSTRING context,
                  __RPC__in HSTRING contactName,
                  __RPC__in HSTRING contactNumber,
                  __RPC__in HSTRING serviceName,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallMedia media,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * * call
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestNewIncomingCallWithContactRemoteId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator3 * This,
                  __RPC__in HSTRING context,
                  __RPC__in HSTRING contactName,
                  __RPC__in HSTRING contactNumber,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * contactImage,
                  __RPC__in HSTRING serviceName,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * brandingImage,
                  __RPC__in HSTRING callDetails,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * ringtone,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallMedia media,
                  __x_ABI_CWindows_CFoundation_CTimeSpan ringTimeout,
                  __RPC__in HSTRING contactRemoteId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * * call
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestNewAppInitiatedCall(This,context,contactName,contactNumber,serviceName,media,call) )
    ( (This)->lpVtbl->RequestNewIncomingCallWithContactRemoteId(This,context,contactName,contactNumber,contactImage,serviceName,brandingImage,callDetails,ringtone,media,ringTimeout,contactRemoteId,call) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IVoipCallCoordinator4[] = L"Windows.ApplicationModel.Calls.IVoipCallCoordinator4";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *ReserveOneProcessCallResourcesAsync )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator4 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCalls__CVoipPhoneCallResourceReservationStatus * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator4Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator4
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReserveOneProcessCallResourcesAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IVoipCallCoordinatorStatics[] = L"Windows.ApplicationModel.Calls.IVoipCallCoordinatorStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinatorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinatorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinatorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinatorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinatorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinatorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinatorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinatorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinator * * coordinator
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinatorStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinatorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinatorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,coordinator) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIVoipCallCoordinatorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IVoipPhoneCall[] = L"Windows.ApplicationModel.Calls.IVoipPhoneCall";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCallVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_EndRequested )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallStateChangeEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EndRequested )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_HoldRequested )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallStateChangeEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_HoldRequested )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ResumeRequested )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallStateChangeEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ResumeRequested )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AnswerRequested )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallAnswerEventArgs * acceptHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AnswerRequested )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RejectRequested )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCalls__CVoipPhoneCall_Windows__CApplicationModel__CCalls__CCallRejectEventArgs * rejectHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RejectRequested )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyCallHeld )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyCallActive )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyCallEnded )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContactName )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContactName )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CallMedia )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallMedia * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CallMedia )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallMedia value
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyCallReady )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCallVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCallVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_EndRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_EndRequested(This,token) )
    ( (This)->lpVtbl->add_HoldRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_HoldRequested(This,token) )
    ( (This)->lpVtbl->add_ResumeRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_ResumeRequested(This,token) )
    ( (This)->lpVtbl->add_AnswerRequested(This,acceptHandler,token) )
    ( (This)->lpVtbl->remove_AnswerRequested(This,token) )
    ( (This)->lpVtbl->add_RejectRequested(This,rejectHandler,token) )
    ( (This)->lpVtbl->remove_RejectRequested(This,token) )
    ( (This)->lpVtbl->NotifyCallHeld(This) )
    ( (This)->lpVtbl->NotifyCallActive(This) )
    ( (This)->lpVtbl->NotifyCallEnded(This) )
    ( (This)->lpVtbl->get_ContactName(This,value) )
    ( (This)->lpVtbl->put_ContactName(This,value) )
    ( (This)->lpVtbl->get_StartTime(This,value) )
    ( (This)->lpVtbl->put_StartTime(This,value) )
    ( (This)->lpVtbl->get_CallMedia(This,value) )
    ( (This)->lpVtbl->put_CallMedia(This,value) )
    ( (This)->lpVtbl->NotifyCallReady(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IVoipPhoneCall2[] = L"Windows.ApplicationModel.Calls.IVoipPhoneCall2";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryShowAppUI )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall2 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryShowAppUI(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_IVoipPhoneCall3[] = L"Windows.ApplicationModel.Calls.IVoipPhoneCall3";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *NotifyCallAccepted )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall3 * This,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CVoipPhoneCallMedia media
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->NotifyCallAccepted(This,media) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CIVoipPhoneCall3;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_CallAnswerEventArgs[] = L"Windows.ApplicationModel.Calls.CallAnswerEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_CallRejectEventArgs[] = L"Windows.ApplicationModel.Calls.CallRejectEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_CallStateChangeEventArgs[] = L"Windows.ApplicationModel.Calls.CallStateChangeEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_LockScreenCallEndCallDeferral[] = L"Windows.ApplicationModel.Calls.LockScreenCallEndCallDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_LockScreenCallEndRequestedEventArgs[] = L"Windows.ApplicationModel.Calls.LockScreenCallEndRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_LockScreenCallUI[] = L"Windows.ApplicationModel.Calls.LockScreenCallUI";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_MuteChangeEventArgs[] = L"Windows.ApplicationModel.Calls.MuteChangeEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneCallBlocking[] = L"Windows.ApplicationModel.Calls.PhoneCallBlocking";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneCallHistoryEntry[] = L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntry";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneCallHistoryEntryAddress[] = L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryAddress";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneCallHistoryEntryQueryOptions[] = L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryQueryOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneCallHistoryEntryReader[] = L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneCallHistoryManager[] = L"Windows.ApplicationModel.Calls.PhoneCallHistoryManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneCallHistoryManagerForUser[] = L"Windows.ApplicationModel.Calls.PhoneCallHistoryManagerForUser";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneCallHistoryStore[] = L"Windows.ApplicationModel.Calls.PhoneCallHistoryStore";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneCallManager[] = L"Windows.ApplicationModel.Calls.PhoneCallManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneCallStore[] = L"Windows.ApplicationModel.Calls.PhoneCallStore";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneCallVideoCapabilities[] = L"Windows.ApplicationModel.Calls.PhoneCallVideoCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneCallVideoCapabilitiesManager[] = L"Windows.ApplicationModel.Calls.PhoneCallVideoCapabilitiesManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneDialOptions[] = L"Windows.ApplicationModel.Calls.PhoneDialOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneLine[] = L"Windows.ApplicationModel.Calls.PhoneLine";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneLineCellularDetails[] = L"Windows.ApplicationModel.Calls.PhoneLineCellularDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneLineConfiguration[] = L"Windows.ApplicationModel.Calls.PhoneLineConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneLineTransportDevice[] = L"Windows.ApplicationModel.Calls.PhoneLineTransportDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneLineWatcher[] = L"Windows.ApplicationModel.Calls.PhoneLineWatcher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneLineWatcherEventArgs[] = L"Windows.ApplicationModel.Calls.PhoneLineWatcherEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_PhoneVoicemail[] = L"Windows.ApplicationModel.Calls.PhoneVoicemail";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_VoipCallCoordinator[] = L"Windows.ApplicationModel.Calls.VoipCallCoordinator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_VoipPhoneCall[] = L"Windows.ApplicationModel.Calls.VoipPhoneCall";
       
       
#pragma clang diagnostic pop
