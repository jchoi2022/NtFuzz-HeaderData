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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatusChangedEventHandler __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatusChangedEventHandler;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventHandler __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventHandler;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsDevice __x_ABI_CWindows_CDevices_CSms_CISmsDevice;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 __x_ABI_CWindows_CDevices_CSms_CISmsDevice2;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsDevice2Statics __x_ABI_CWindows_CDevices_CSms_CISmsDevice2Statics;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStore __x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStore;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics2 __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics2;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsFilterRuleFactory __x_ABI_CWindows_CDevices_CSms_CISmsFilterRuleFactory;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsFilterRules __x_ABI_CWindows_CDevices_CSms_CISmsFilterRules;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsFilterRulesFactory __x_ABI_CWindows_CDevices_CSms_CISmsFilterRulesFactory;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsMessage __x_ABI_CWindows_CDevices_CSms_CISmsMessage;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsMessageBase __x_ABI_CWindows_CDevices_CSms_CISmsMessageBase;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventArgs __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationStatics __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationStatics;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails2 __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails2;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsTextMessageStatics __x_ABI_CWindows_CDevices_CSms_CISmsTextMessageStatics;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessage __x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessage;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsWapMessage __x_ABI_CWindows_CDevices_CSms_CISmsWapMessage;
typedef interface __FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessage __FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessage;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessage;
typedef struct __FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessage * This, __RPC__out __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessage * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessageVtbl;
interface __FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessage
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessageVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSms__CISmsBinaryMessage __FIIterable_1_Windows__CDevices__CSms__CISmsBinaryMessage;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSms__CISmsBinaryMessage;
typedef struct __FIIterable_1_Windows__CDevices__CSms__CISmsBinaryMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSms__CISmsBinaryMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CISmsBinaryMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CISmsBinaryMessage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CISmsBinaryMessage * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CISmsBinaryMessage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CISmsBinaryMessage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CISmsBinaryMessage * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSms__CISmsBinaryMessage **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSms__CISmsBinaryMessageVtbl;
interface __FIIterable_1_Windows__CDevices__CSms__CISmsBinaryMessage
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSms__CISmsBinaryMessageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CSms__CISmsMessage __FIIterator_1_Windows__CDevices__CSms__CISmsMessage;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSms__CISmsMessage;
typedef struct __FIIterator_1_Windows__CDevices__CSms__CISmsMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsMessage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsMessage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsMessage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsMessage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsMessage * This, __RPC__out __x_ABI_CWindows_CDevices_CSms_CISmsMessage * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsMessage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsMessage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CISmsMessage * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSms_CISmsMessage * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSms__CISmsMessageVtbl;
interface __FIIterator_1_Windows__CDevices__CSms__CISmsMessage
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSms__CISmsMessageVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSms__CISmsMessage __FIIterable_1_Windows__CDevices__CSms__CISmsMessage;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSms__CISmsMessage;
typedef struct __FIIterable_1_Windows__CDevices__CSms__CISmsMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSms__CISmsMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CISmsMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CISmsMessage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CISmsMessage * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CISmsMessage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CISmsMessage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CISmsMessage * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSms__CISmsMessage **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSms__CISmsMessageVtbl;
interface __FIIterable_1_Windows__CDevices__CSms__CISmsMessage
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSms__CISmsMessageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType;
typedef interface __FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastType __FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastType;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastType;
typedef struct __FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastType * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastType * This, __RPC__out enum __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastType * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastType * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastTypeVtbl;
interface __FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastType
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastTypeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSms__CSmsBroadcastType __FIIterable_1_Windows__CDevices__CSms__CSmsBroadcastType;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSms__CSmsBroadcastType;
typedef struct __FIIterable_1_Windows__CDevices__CSms__CSmsBroadcastTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsBroadcastType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsBroadcastType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsBroadcastType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsBroadcastType * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsBroadcastType * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSms__CSmsBroadcastType **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSms__CSmsBroadcastTypeVtbl;
interface __FIIterable_1_Windows__CDevices__CSms__CSmsBroadcastType
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSms__CSmsBroadcastTypeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CSms__CSmsFilterRule __FIIterator_1_Windows__CDevices__CSms__CSmsFilterRule;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSms__CSmsFilterRule;
typedef struct __FIIterator_1_Windows__CDevices__CSms__CSmsFilterRuleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsFilterRule * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsFilterRule * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsFilterRule * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsFilterRule * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsFilterRule * This, __RPC__out __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsFilterRule * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsFilterRule * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSms__CSmsFilterRuleVtbl;
interface __FIIterator_1_Windows__CDevices__CSms__CSmsFilterRule
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSms__CSmsFilterRuleVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSms__CSmsFilterRule __FIIterable_1_Windows__CDevices__CSms__CSmsFilterRule;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSms__CSmsFilterRule;
typedef struct __FIIterable_1_Windows__CDevices__CSms__CSmsFilterRuleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsFilterRule * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsFilterRule * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsFilterRule * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsFilterRule * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsFilterRule * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSms__CSmsFilterRule **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSms__CSmsFilterRuleVtbl;
interface __FIIterable_1_Windows__CDevices__CSms__CSmsFilterRule
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSms__CSmsFilterRuleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistration __FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistration;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistration;
typedef struct __FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistration * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistration * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistration * This, __RPC__out __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistration * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistration * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistration * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistrationVtbl;
interface __FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistration
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistrationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSms__CSmsMessageRegistration __FIIterable_1_Windows__CDevices__CSms__CSmsMessageRegistration;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSms__CSmsMessageRegistration;
typedef struct __FIIterable_1_Windows__CDevices__CSms__CSmsMessageRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsMessageRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsMessageRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsMessageRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsMessageRegistration * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsMessageRegistration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsMessageRegistration * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSms__CSmsMessageRegistration * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSms__CSmsMessageRegistration **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSms__CSmsMessageRegistrationVtbl;
interface __FIIterable_1_Windows__CDevices__CSms__CSmsMessageRegistration
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSms__CSmsMessageRegistrationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessage __FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessage;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessage;
typedef struct __FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessage * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessage * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessage * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessage * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessage * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessage * This,
                       __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessage * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessageVtbl;
interface __FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessageVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSms__CISmsMessage __FIVectorView_1_Windows__CDevices__CSms__CISmsMessage;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage;
typedef struct __FIVectorView_1_Windows__CDevices__CSms__CISmsMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsMessage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsMessage * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsMessage * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsMessage * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsMessage * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CSms_CISmsMessage * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsMessage * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsMessage * This,
                       __x_ABI_CWindows_CDevices_CSms_CISmsMessage * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CISmsMessage * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSms_CISmsMessage * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSms__CISmsMessageVtbl;
interface __FIVectorView_1_Windows__CDevices__CSms__CISmsMessage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSms__CISmsMessageVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastType __FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastType;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastType;
typedef struct __FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastType * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                       enum __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastTypeVtbl;
interface __FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastType
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastTypeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRule __FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRule;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRule;
typedef struct __FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRuleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRule * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRule * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                       __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRuleVtbl;
interface __FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRule
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRuleVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistration __FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistration;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistration;
typedef struct __FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistration * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistration * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistration * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistration * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistration * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistration * This,
                       __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistration * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistrationVtbl;
interface __FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistration
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistrationVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType;
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType;
typedef struct __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                   unsigned int index,
                            __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSms__CSmsBroadcastType **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This, __RPC__in enum __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType *value);
    END_INTERFACE
} __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastTypeVtbl;
interface __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastTypeVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule;
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CSms__CSmsFilterRule;
typedef struct __FIVector_1_Windows__CDevices__CSms__CSmsFilterRuleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This, __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSms__CSmsFilterRule **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                   __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This, __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * *value);
    END_INTERFACE
} __FIVector_1_Windows__CDevices__CSms__CSmsFilterRuleVtbl;
interface __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CSms__CSmsFilterRuleVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationProgressHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int __FIAsyncOperationProgressHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int;
typedef interface __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int;
typedef struct __FIAsyncOperationProgressHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This, __RPC__in_opt __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int *asyncInfo, int progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_intVtbl;
interface __FIAsyncOperationProgressHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_intVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int __FIAsyncOperationWithProgressCompletedHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int;
typedef interface __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This, __RPC__in_opt __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_intVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_intVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int;
typedef struct __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSms__CISmsMessage * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_intVtbl;
interface __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_intVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CISmsMessage __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CISmsMessage;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CISmsMessage;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessage __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessage;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CISmsMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CISmsMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CISmsMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CISmsMessage * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CISmsMessage * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessage *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CISmsMessageVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CISmsMessage
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CISmsMessageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessage __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessage;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessage;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessage * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CISmsMessage *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessage * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CISmsMessage **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessage * This, __RPC__out __x_ABI_CWindows_CDevices_CSms_CISmsMessage * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessageVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessage
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessageVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsDevice;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsDevice;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsDevice * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsDevice * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsDeviceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsDevice *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice * This, __RPC__out __x_ABI_CWindows_CDevices_CSms_CISmsDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDeviceVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDeviceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsSendMessageResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsSendMessageResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsSendMessageResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResult __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsSendMessageResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsSendMessageResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsSendMessageResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsSendMessageResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsSendMessageResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsSendMessageResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsSendMessageResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsSendMessageResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResult __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsSendMessageResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSms__CSmsSendMessageResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResult * This, __RPC__out __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResultVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsDevice2_IInspectable __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsDevice2_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSms__CSmsDevice2_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsDevice2_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsDevice2_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsDevice2_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsDevice2_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsDevice2_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsDevice2_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsDevice2_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsDevice2_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsMessageRegistration_Windows__CDevices__CSms__CSmsMessageReceivedTriggerDetails __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsMessageRegistration_Windows__CDevices__CSms__CSmsMessageReceivedTriggerDetails;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSms__CSmsMessageRegistration_Windows__CDevices__CSms__CSmsMessageReceivedTriggerDetails;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsMessageRegistration_Windows__CDevices__CSms__CSmsMessageReceivedTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsMessageRegistration_Windows__CDevices__CSms__CSmsMessageReceivedTriggerDetails * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsMessageRegistration_Windows__CDevices__CSms__CSmsMessageReceivedTriggerDetails * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsMessageRegistration_Windows__CDevices__CSms__CSmsMessageReceivedTriggerDetails * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsMessageRegistration_Windows__CDevices__CSms__CSmsMessageReceivedTriggerDetails * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsMessageRegistration_Windows__CDevices__CSms__CSmsMessageReceivedTriggerDetailsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsMessageRegistration_Windows__CDevices__CSms__CSmsMessageReceivedTriggerDetails
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsMessageRegistration_Windows__CDevices__CSms__CSmsMessageReceivedTriggerDetailsVtbl *lpVtbl;
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
typedef interface __FIIterator_1_int __FIIterator_1_int;
EXTERN_C const IID IID___FIIterator_1_int;
typedef struct __FIIterator_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_int * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_int * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_int * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_int * This, __RPC__out int *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_int * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_int * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_int * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) int *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_intVtbl;
interface __FIIterator_1_int
{
    CONST_VTBL struct __FIIterator_1_intVtbl *lpVtbl;
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
typedef interface __FIIterable_1_int __FIIterable_1_int;
EXTERN_C const IID IID___FIIterable_1_int;
typedef struct __FIIterable_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_int * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_int * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_int * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_int * This, __RPC__deref_out_opt __FIIterator_1_int **first);
    END_INTERFACE
} __FIIterable_1_intVtbl;
interface __FIIterable_1_int
{
    CONST_VTBL struct __FIIterable_1_intVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_int __FIVectorView_1_int;
EXTERN_C const IID IID___FIVectorView_1_int;
typedef struct __FIVectorView_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_int * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_int * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_int * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_int * This,
                                                    unsigned int index,
                                                             __RPC__out int *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_int * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_int * This,
                       int item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_int * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) int *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_intVtbl;
interface __FIVectorView_1_int
{
    CONST_VTBL struct __FIVectorView_1_intVtbl *lpVtbl;
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
typedef interface __FIVector_1_int __FIVector_1_int;
EXTERN_C const IID IID___FIVector_1_int;
typedef struct __FIVector_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_int * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_int * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_int * This, __RPC__deref_out_opt int *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_int * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_int * This,
                   unsigned int index,
                            __RPC__deref_out_opt int *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_int * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_int * This, __RPC__deref_out_opt __FIVectorView_1_int **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_int * This,
                   __RPC__in int item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_int * This,
                   unsigned int index,
                   __RPC__in int item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_int * This,
                   unsigned int index,
                   __RPC__in int item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_int * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_int * This, __RPC__in int item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_int * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) int *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_int * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) int *value);
    END_INTERFACE
} __FIVector_1_intVtbl;
interface __FIVector_1_int
{
    CONST_VTBL struct __FIVector_1_intVtbl *lpVtbl;
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
typedef interface __FIReference_1_int __FIReference_1_int;
EXTERN_C const IID IID___FIReference_1_int;
typedef struct __FIReference_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_int * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_int * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_int * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_int * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_int * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_int * This, __RPC__out int *value);
    END_INTERFACE
} __FIReference_1_intVtbl;
interface __FIReference_1_int
{
    CONST_VTBL struct __FIReference_1_intVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CDevices_CSms_CCellularClass __x_ABI_CWindows_CDevices_CSms_CCellularClass;
typedef enum __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType;
typedef enum __x_ABI_CWindows_CDevices_CSms_CSmsDataFormat __x_ABI_CWindows_CDevices_CSms_CSmsDataFormat;
typedef enum __x_ABI_CWindows_CDevices_CSms_CSmsDeviceStatus __x_ABI_CWindows_CDevices_CSms_CSmsDeviceStatus;
typedef enum __x_ABI_CWindows_CDevices_CSms_CSmsEncoding __x_ABI_CWindows_CDevices_CSms_CSmsEncoding;
typedef enum __x_ABI_CWindows_CDevices_CSms_CSmsFilterActionType __x_ABI_CWindows_CDevices_CSms_CSmsFilterActionType;
typedef enum __x_ABI_CWindows_CDevices_CSms_CSmsGeographicalScope __x_ABI_CWindows_CDevices_CSms_CSmsGeographicalScope;
typedef enum __x_ABI_CWindows_CDevices_CSms_CSmsMessageClass __x_ABI_CWindows_CDevices_CSms_CSmsMessageClass;
typedef enum __x_ABI_CWindows_CDevices_CSms_CSmsMessageFilter __x_ABI_CWindows_CDevices_CSms_CSmsMessageFilter;
typedef enum __x_ABI_CWindows_CDevices_CSms_CSmsMessageType __x_ABI_CWindows_CDevices_CSms_CSmsMessageType;
typedef enum __x_ABI_CWindows_CDevices_CSms_CSmsModemErrorCode __x_ABI_CWindows_CDevices_CSms_CSmsModemErrorCode;
typedef struct __x_ABI_CWindows_CDevices_CSms_CSmsEncodedLength __x_ABI_CWindows_CDevices_CSms_CSmsEncodedLength;
enum __x_ABI_CWindows_CDevices_CSms_CCellularClass
{
    CellularClass_None = 0,
    CellularClass_Gsm = 1,
    CellularClass_Cdma = 2,
};
enum __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType
{
    SmsBroadcastType_Other = 0,
    SmsBroadcastType_CmasPresidential = 1,
    SmsBroadcastType_CmasExtreme = 2,
    SmsBroadcastType_CmasSevere = 3,
    SmsBroadcastType_CmasAmber = 4,
    SmsBroadcastType_CmasTest = 5,
    SmsBroadcastType_EUAlert1 = 6,
    SmsBroadcastType_EUAlert2 = 7,
    SmsBroadcastType_EUAlert3 = 8,
    SmsBroadcastType_EUAlertAmber = 9,
    SmsBroadcastType_EUAlertInfo = 10,
    SmsBroadcastType_EtwsEarthquake = 11,
    SmsBroadcastType_EtwsTsunami = 12,
    SmsBroadcastType_EtwsTsunamiAndEarthquake = 13,
    SmsBroadcastType_LatAlertLocal = 14,
};
enum __x_ABI_CWindows_CDevices_CSms_CSmsDataFormat
{
    SmsDataFormat_Unknown = 0,
    SmsDataFormat_CdmaSubmit = 1,
    SmsDataFormat_GsmSubmit = 2,
    SmsDataFormat_CdmaDeliver = 3,
    SmsDataFormat_GsmDeliver = 4,
};
enum __x_ABI_CWindows_CDevices_CSms_CSmsDeviceStatus
{
    SmsDeviceStatus_Off = 0,
    SmsDeviceStatus_Ready = 1,
    SmsDeviceStatus_SimNotInserted = 2,
    SmsDeviceStatus_BadSim = 3,
    SmsDeviceStatus_DeviceFailure = 4,
    SmsDeviceStatus_SubscriptionNotActivated = 5,
    SmsDeviceStatus_DeviceLocked = 6,
    SmsDeviceStatus_DeviceBlocked = 7,
};
enum __x_ABI_CWindows_CDevices_CSms_CSmsEncoding
{
    SmsEncoding_Unknown = 0,
    SmsEncoding_Optimal = 1,
    SmsEncoding_SevenBitAscii = 2,
    SmsEncoding_Unicode = 3,
    SmsEncoding_GsmSevenBit = 4,
    SmsEncoding_EightBit = 5,
    SmsEncoding_Latin = 6,
    SmsEncoding_Korean = 7,
    SmsEncoding_IA5 = 8,
    SmsEncoding_ShiftJis = 9,
    SmsEncoding_LatinHebrew = 10,
};
enum __x_ABI_CWindows_CDevices_CSms_CSmsFilterActionType
{
    SmsFilterActionType_AcceptImmediately = 0,
    SmsFilterActionType_Drop = 1,
    SmsFilterActionType_Peek = 2,
    SmsFilterActionType_Accept = 3,
};
enum __x_ABI_CWindows_CDevices_CSms_CSmsGeographicalScope
{
    SmsGeographicalScope_None = 0,
    SmsGeographicalScope_CellWithImmediateDisplay = 1,
    SmsGeographicalScope_LocationArea = 2,
    SmsGeographicalScope_Plmn = 3,
    SmsGeographicalScope_Cell = 4,
};
enum __x_ABI_CWindows_CDevices_CSms_CSmsMessageClass
{
    SmsMessageClass_None = 0,
    SmsMessageClass_Class0 = 1,
    SmsMessageClass_Class1 = 2,
    SmsMessageClass_Class2 = 3,
    SmsMessageClass_Class3 = 4,
};
enum
DEPRECATED("SmsMessageFilter may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CDevices_CSms_CSmsMessageFilter
{
    SmsMessageFilter_All = 0,
    SmsMessageFilter_Unread = 1,
    SmsMessageFilter_Read = 2,
    SmsMessageFilter_Sent = 3,
    SmsMessageFilter_Draft = 4,
};
enum __x_ABI_CWindows_CDevices_CSms_CSmsMessageType
{
    SmsMessageType_Binary = 0,
    SmsMessageType_Text = 1,
    SmsMessageType_Wap = 2,
    SmsMessageType_App = 3,
    SmsMessageType_Broadcast = 4,
    SmsMessageType_Voicemail = 5,
    SmsMessageType_Status = 6,
};
enum __x_ABI_CWindows_CDevices_CSms_CSmsModemErrorCode
{
    SmsModemErrorCode_Other = 0,
    SmsModemErrorCode_MessagingNetworkError = 1,
    SmsModemErrorCode_SmsOperationNotSupportedByDevice = 2,
    SmsModemErrorCode_SmsServiceNotSupportedByNetwork = 3,
    SmsModemErrorCode_DeviceFailure = 4,
    SmsModemErrorCode_MessageNotEncodedProperly = 5,
    SmsModemErrorCode_MessageTooLarge = 6,
    SmsModemErrorCode_DeviceNotReady = 7,
    SmsModemErrorCode_NetworkNotReady = 8,
    SmsModemErrorCode_InvalidSmscAddress = 9,
    SmsModemErrorCode_NetworkFailure = 10,
    SmsModemErrorCode_FixedDialingNumberRestricted = 11,
};
struct __x_ABI_CWindows_CDevices_CSms_CSmsEncodedLength
{
    UINT32 SegmentCount;
    UINT32 CharacterCountLastSegment;
    UINT32 CharactersPerSegment;
    UINT32 ByteCountLastSegment;
    UINT32 BytesPerSegment;
};
typedef struct
DEPRECATED("SmsDeviceStatusChangedEventHandler may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatusChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatusChangedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatusChangedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatusChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatusChangedEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSms_CISmsDevice * sender
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatusChangedEventHandlerVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatusChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatusChangedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatusChangedEventHandler;
typedef struct
DEPRECATED("SmsMessageReceivedEventHandler may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSms_CISmsDevice * sender,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventHandlerVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsAppMessage[] = L"Windows.Devices.Sms.ISmsAppMessage";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsAppMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_To )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_To )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_From )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Body )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Body )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CallbackNumber )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CallbackNumber )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDeliveryNotificationEnabled )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsDeliveryNotificationEnabled )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RetryAttemptCount )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RetryAttemptCount )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Encoding )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsEncoding * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Encoding )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                  __x_ABI_CWindows_CDevices_CSms_CSmsEncoding value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PortNumber )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PortNumber )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TeleserviceId )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TeleserviceId )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtocolId )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProtocolId )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BinaryBody )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BinaryBody )(
        __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsAppMessageVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsAppMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_To(This,value) )
    ( (This)->lpVtbl->put_To(This,value) )
    ( (This)->lpVtbl->get_From(This,value) )
    ( (This)->lpVtbl->get_Body(This,value) )
    ( (This)->lpVtbl->put_Body(This,value) )
    ( (This)->lpVtbl->get_CallbackNumber(This,value) )
    ( (This)->lpVtbl->put_CallbackNumber(This,value) )
    ( (This)->lpVtbl->get_IsDeliveryNotificationEnabled(This,value) )
    ( (This)->lpVtbl->put_IsDeliveryNotificationEnabled(This,value) )
    ( (This)->lpVtbl->get_RetryAttemptCount(This,value) )
    ( (This)->lpVtbl->put_RetryAttemptCount(This,value) )
    ( (This)->lpVtbl->get_Encoding(This,value) )
    ( (This)->lpVtbl->put_Encoding(This,value) )
    ( (This)->lpVtbl->get_PortNumber(This,value) )
    ( (This)->lpVtbl->put_PortNumber(This,value) )
    ( (This)->lpVtbl->get_TeleserviceId(This,value) )
    ( (This)->lpVtbl->put_TeleserviceId(This,value) )
    ( (This)->lpVtbl->get_ProtocolId(This,value) )
    ( (This)->lpVtbl->put_ProtocolId(This,value) )
    ( (This)->lpVtbl->get_BinaryBody(This,value) )
    ( (This)->lpVtbl->put_BinaryBody(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsAppMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsBinaryMessage[] = L"Windows.Devices.Sms.ISmsBinaryMessage";
typedef struct
DEPRECATED("SmsBinaryMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsAppMessage.")
__x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("SmsBinaryMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsAppMessage.")
                               HRESULT ( STDMETHODCALLTYPE *get_Format )(
        __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsDataFormat * value
        );
    DEPRECATED("SmsBinaryMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsAppMessage.")
                               HRESULT ( STDMETHODCALLTYPE *put_Format )(
        __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * This,
                  __x_ABI_CWindows_CDevices_CSms_CSmsDataFormat value
        );
    DEPRECATED("SmsBinaryMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsAppMessage.")
                      HRESULT ( STDMETHODCALLTYPE *GetData )(
        __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * This,
                   __RPC__out UINT32 * __valueSize,
                                                      __RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    DEPRECATED("SmsBinaryMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsAppMessage.")
                      HRESULT ( STDMETHODCALLTYPE *SetData )(
        __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * This,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) BYTE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessageVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("SmsBinaryMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsAppMessage.")
    ( (This)->lpVtbl->get_Format(This,value) )
DEPRECATED("SmsBinaryMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsAppMessage.")
    ( (This)->lpVtbl->put_Format(This,value) )
DEPRECATED("SmsBinaryMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsAppMessage.")
    ( (This)->lpVtbl->GetData(This,__valueSize,value) )
DEPRECATED("SmsBinaryMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsAppMessage.")
    ( (This)->lpVtbl->SetData(This,__valueSize,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsBroadcastMessage[] = L"Windows.Devices.Sms.ISmsBroadcastMessage";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_To )(
        __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Body )(
        __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GeographicalScope )(
        __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsGeographicalScope * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MessageCode )(
        __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpdateNumber )(
        __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BroadcastType )(
        __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsBroadcastType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEmergencyAlert )(
        __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsUserPopupRequested )(
        __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessageVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_To(This,value) )
    ( (This)->lpVtbl->get_Body(This,value) )
    ( (This)->lpVtbl->get_Channel(This,value) )
    ( (This)->lpVtbl->get_GeographicalScope(This,value) )
    ( (This)->lpVtbl->get_MessageCode(This,value) )
    ( (This)->lpVtbl->get_UpdateNumber(This,value) )
    ( (This)->lpVtbl->get_BroadcastType(This,value) )
    ( (This)->lpVtbl->get_IsEmergencyAlert(This,value) )
    ( (This)->lpVtbl->get_IsUserPopupRequested(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsDevice[] = L"Windows.Devices.Sms.ISmsDevice";
typedef struct
DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
__x_ABI_CWindows_CDevices_CSms_CISmsDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
                      HRESULT ( STDMETHODCALLTYPE *SendMessageAsync )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSms_CISmsMessage * message,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
                      HRESULT ( STDMETHODCALLTYPE *CalculateLength )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * message,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsEncodedLength * encodedLength
        );
    DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
                               HRESULT ( STDMETHODCALLTYPE *get_AccountPhoneNumber )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
                               HRESULT ( STDMETHODCALLTYPE *get_CellularClass )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CCellularClass * value
        );
    DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
                               HRESULT ( STDMETHODCALLTYPE *get_MessageStore )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStore * * value
        );
    DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
                               HRESULT ( STDMETHODCALLTYPE *get_DeviceStatus )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsDeviceStatus * value
        );
    DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
                                HRESULT ( STDMETHODCALLTYPE *add_SmsMessageReceived )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventHandler * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
    DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_SmsMessageReceived )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice * This,
                  EventRegistrationToken eventCookie
        );
    DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
                                HRESULT ( STDMETHODCALLTYPE *add_SmsDeviceStatusChanged )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatusChangedEventHandler * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
    DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_SmsDeviceStatusChanged )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsDeviceVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
    ( (This)->lpVtbl->SendMessageAsync(This,message,asyncInfo) )
DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
    ( (This)->lpVtbl->CalculateLength(This,message,encodedLength) )
DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
    ( (This)->lpVtbl->get_AccountPhoneNumber(This,value) )
DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
    ( (This)->lpVtbl->get_CellularClass(This,value) )
DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
    ( (This)->lpVtbl->get_MessageStore(This,value) )
DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
    ( (This)->lpVtbl->get_DeviceStatus(This,value) )
DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
    ( (This)->lpVtbl->add_SmsMessageReceived(This,eventHandler,eventCookie) )
DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
    ( (This)->lpVtbl->remove_SmsMessageReceived(This,eventCookie) )
DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
    ( (This)->lpVtbl->add_SmsDeviceStatusChanged(This,eventHandler,eventCookie) )
DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
    ( (This)->lpVtbl->remove_SmsDeviceStatusChanged(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsDevice2[] = L"Windows.Devices.Sms.ISmsDevice2";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsDevice2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SmscAddress )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SmscAddress )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ParentDeviceId )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccountPhoneNumber )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CellularClass )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CCellularClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceStatus )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsDeviceStatus * value
        );
    HRESULT ( STDMETHODCALLTYPE *CalculateLength )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSms_CISmsMessageBase * message,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsEncodedLength * value
        );
    HRESULT ( STDMETHODCALLTYPE *SendMessageAndGetResultAsync )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSms_CISmsMessageBase * message,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsSendMessageResult * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DeviceStatusChanged )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsDevice2_IInspectable * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DeviceStatusChanged )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsDevice2Vtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsDevice2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsDevice2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SmscAddress(This,value) )
    ( (This)->lpVtbl->put_SmscAddress(This,value) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_ParentDeviceId(This,value) )
    ( (This)->lpVtbl->get_AccountPhoneNumber(This,value) )
    ( (This)->lpVtbl->get_CellularClass(This,value) )
    ( (This)->lpVtbl->get_DeviceStatus(This,value) )
    ( (This)->lpVtbl->CalculateLength(This,message,value) )
    ( (This)->lpVtbl->SendMessageAndGetResultAsync(This,message,asyncInfo) )
    ( (This)->lpVtbl->add_DeviceStatusChanged(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_DeviceStatusChanged(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsDevice2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsDevice2Statics[] = L"Windows.Devices.Sms.ISmsDevice2Statics";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsDevice2StaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice2Statics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice2Statics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice2Statics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice2Statics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice2Statics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDevice2Statics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice2Statics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromId )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice2Statics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice2Statics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromParentId )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDevice2Statics * This,
                  __RPC__in HSTRING parentDeviceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsDevice2 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsDevice2StaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsDevice2Statics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsDevice2StaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )
    ( (This)->lpVtbl->FromId(This,deviceId,value) )
    ( (This)->lpVtbl->GetDefault(This,value) )
    ( (This)->lpVtbl->FromParentId(This,parentDeviceId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsDevice2Statics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsDeviceMessageStore[] = L"Windows.Devices.Sms.ISmsDeviceMessageStore";
typedef struct
DEPRECATED("SmsDeviceMessageStore may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStore * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStore * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStore * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStore * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStore * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStore * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("SmsDeviceMessageStore may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *DeleteMessageAsync )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStore * This,
                  UINT32 messageId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    DEPRECATED("SmsDeviceMessageStore may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *DeleteMessagesAsync )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStore * This,
                  __x_ABI_CWindows_CDevices_CSms_CSmsMessageFilter messageFilter,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    DEPRECATED("SmsDeviceMessageStore may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *GetMessageAsync )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStore * This,
                  UINT32 messageId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSms__CISmsMessage * * asyncInfo
        );
    DEPRECATED("SmsDeviceMessageStore may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *GetMessagesAsync )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStore * This,
                  __x_ABI_CWindows_CDevices_CSms_CSmsMessageFilter messageFilter,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2___FIVectorView_1_Windows__CDevices__CSms__CISmsMessage_int * * asyncInfo
        );
    DEPRECATED("SmsDeviceMessageStore may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_MaxMessages )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStore * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStoreVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStore
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStoreVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("SmsDeviceMessageStore may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->DeleteMessageAsync(This,messageId,asyncInfo) )
DEPRECATED("SmsDeviceMessageStore may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->DeleteMessagesAsync(This,messageFilter,asyncInfo) )
DEPRECATED("SmsDeviceMessageStore may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->GetMessageAsync(This,messageId,asyncInfo) )
DEPRECATED("SmsDeviceMessageStore may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->GetMessagesAsync(This,messageFilter,asyncInfo) )
DEPRECATED("SmsDeviceMessageStore may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_MaxMessages(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsDeviceMessageStore;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsDeviceStatics[] = L"Windows.Devices.Sms.ISmsDeviceStatics";
typedef struct
DEPRECATED("ISmsDeviceStatics may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CDevices_CSms_CISmsDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISmsDeviceStatics may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics * This,
                           __RPC__deref_out_opt HSTRING * phstrDeviceClassSelector
        );
    DEPRECATED("ISmsDeviceStatics may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice * * asyncInfo
        );
    DEPRECATED("ISmsDeviceStatics may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISmsDeviceStatics may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->GetDeviceSelector(This,phstrDeviceClassSelector) )
DEPRECATED("ISmsDeviceStatics may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,asyncInfo) )
DEPRECATED("ISmsDeviceStatics may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->GetDefaultAsync(This,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsDeviceStatics2[] = L"Windows.Devices.Sms.ISmsDeviceStatics2";
typedef struct
DEPRECATED("ISmsDeviceStatics2 may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISmsDeviceStatics2 may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *FromNetworkAccountIdAsync )(
        __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics2 * This,
                  __RPC__in HSTRING networkAccountId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSms__CSmsDevice * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISmsDeviceStatics2 may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->FromNetworkAccountIdAsync(This,networkAccountId,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsDeviceStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsFilterRule[] = L"Windows.Devices.Sms.ISmsFilterRule";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsFilterRuleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MessageType )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsMessageType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ImsiPrefixes )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceIds )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SenderNumbers )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TextMessagePrefixes )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PortNumbers )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
                           __RPC__deref_out_opt __FIVector_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CellularClass )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CCellularClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CellularClass )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
                  __x_ABI_CWindows_CDevices_CSms_CCellularClass value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtocolIds )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
                           __RPC__deref_out_opt __FIVector_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TeleserviceIds )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
                           __RPC__deref_out_opt __FIVector_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WapApplicationIds )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WapContentTypes )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BroadcastTypes )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CDevices__CSms__CSmsBroadcastType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BroadcastChannels )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * This,
                           __RPC__deref_out_opt __FIVector_1_int * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsFilterRuleVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsFilterRuleVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MessageType(This,value) )
    ( (This)->lpVtbl->get_ImsiPrefixes(This,value) )
    ( (This)->lpVtbl->get_DeviceIds(This,value) )
    ( (This)->lpVtbl->get_SenderNumbers(This,value) )
    ( (This)->lpVtbl->get_TextMessagePrefixes(This,value) )
    ( (This)->lpVtbl->get_PortNumbers(This,value) )
    ( (This)->lpVtbl->get_CellularClass(This,value) )
    ( (This)->lpVtbl->put_CellularClass(This,value) )
    ( (This)->lpVtbl->get_ProtocolIds(This,value) )
    ( (This)->lpVtbl->get_TeleserviceIds(This,value) )
    ( (This)->lpVtbl->get_WapApplicationIds(This,value) )
    ( (This)->lpVtbl->get_WapContentTypes(This,value) )
    ( (This)->lpVtbl->get_BroadcastTypes(This,value) )
    ( (This)->lpVtbl->get_BroadcastChannels(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsFilterRule;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsFilterRuleFactory[] = L"Windows.Devices.Sms.ISmsFilterRuleFactory";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsFilterRuleFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRuleFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRuleFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRuleFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRuleFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRuleFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRuleFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFilterRule )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRuleFactory * This,
                  __x_ABI_CWindows_CDevices_CSms_CSmsMessageType messageType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsFilterRule * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsFilterRuleFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsFilterRuleFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsFilterRuleFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFilterRule(This,messageType,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsFilterRuleFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsFilterRules[] = L"Windows.Devices.Sms.ISmsFilterRules";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsFilterRulesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRules * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRules * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRules * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRules * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRules * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRules * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActionType )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRules * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsFilterActionType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rules )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRules * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CDevices__CSms__CSmsFilterRule * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsFilterRulesVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsFilterRules
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsFilterRulesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActionType(This,value) )
    ( (This)->lpVtbl->get_Rules(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsFilterRules;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsFilterRulesFactory[] = L"Windows.Devices.Sms.ISmsFilterRulesFactory";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsFilterRulesFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRulesFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRulesFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRulesFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRulesFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRulesFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsFilterRulesFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFilterRules )(
        __x_ABI_CWindows_CDevices_CSms_CISmsFilterRulesFactory * This,
                  __x_ABI_CWindows_CDevices_CSms_CSmsFilterActionType actionType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsFilterRules * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsFilterRulesFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsFilterRulesFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsFilterRulesFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFilterRules(This,actionType,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsFilterRulesFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsMessage[] = L"Windows.Devices.Sms.ISmsMessage";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessage * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MessageClass )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessage * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsMessageClass * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsMessageVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_MessageClass(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsMessageBase[] = L"Windows.Devices.Sms.ISmsMessageBase";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsMessageBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageBase * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageBase * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageBase * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageBase * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageBase * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageBase * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MessageType )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageBase * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsMessageType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageBase * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CellularClass )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageBase * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CCellularClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MessageClass )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageBase * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsMessageClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SimIccId )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageBase * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsMessageBaseVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsMessageBase
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsMessageBaseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MessageType(This,value) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_CellularClass(This,value) )
    ( (This)->lpVtbl->get_MessageClass(This,value) )
    ( (This)->lpVtbl->get_SimIccId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsMessageBase;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsMessageReceivedEventArgs[] = L"Windows.Devices.Sms.ISmsMessageReceivedEventArgs";
typedef struct
DEPRECATED("SmsMessageReceivedEventArgs may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("SmsMessageReceivedEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_TextMessage )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * * value
        );
    DEPRECATED("SmsMessageReceivedEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_BinaryMessage )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("SmsMessageReceivedEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_TextMessage(This,value) )
DEPRECATED("SmsMessageReceivedEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_BinaryMessage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsMessageReceivedTriggerDetails[] = L"Windows.Devices.Sms.ISmsMessageReceivedTriggerDetails";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MessageType )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsMessageType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TextMessage )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WapMessage )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsWapMessage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppMessage )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsAppMessage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BroadcastMessage )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsBroadcastMessage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VoicemailMessage )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StatusMessage )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Drop )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails * This
        );
    HRESULT ( STDMETHODCALLTYPE *Accept )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetailsVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MessageType(This,value) )
    ( (This)->lpVtbl->get_TextMessage(This,value) )
    ( (This)->lpVtbl->get_WapMessage(This,value) )
    ( (This)->lpVtbl->get_AppMessage(This,value) )
    ( (This)->lpVtbl->get_BroadcastMessage(This,value) )
    ( (This)->lpVtbl->get_VoicemailMessage(This,value) )
    ( (This)->lpVtbl->get_StatusMessage(This,value) )
    ( (This)->lpVtbl->Drop(This) )
    ( (This)->lpVtbl->Accept(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsMessageReceivedTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsMessageRegistration[] = L"Windows.Devices.Sms.ISmsMessageRegistration";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *Unregister )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MessageReceived )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSms__CSmsMessageRegistration_Windows__CDevices__CSms__CSmsMessageReceivedTriggerDetails * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MessageReceived )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->Unregister(This) )
    ( (This)->lpVtbl->add_MessageReceived(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_MessageReceived(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsMessageRegistrationStatics[] = L"Windows.Devices.Sms.ISmsMessageRegistrationStatics";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllRegistrations )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSms__CSmsMessageRegistration * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Register )(
        __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationStatics * This,
                  __RPC__in HSTRING id,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSms_CISmsFilterRules * filterRules,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistration * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllRegistrations(This,value) )
    ( (This)->lpVtbl->Register(This,id,filterRules,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsMessageRegistrationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsReceivedEventDetails[] = L"Windows.Devices.Sms.ISmsReceivedEventDetails";
typedef struct
DEPRECATED("SmsReceivedEventDetails may be altered or unavailable for releases after Windows 10. Instead, use SmsMessageReceivedTriggerDetails.")
__x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("SmsReceivedEventDetails may be altered or unavailable for releases after Windows 10. Instead, use SmsMessageReceivedTriggerDetails.")
                               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("SmsReceivedEventDetails may be altered or unavailable for releases after Windows 10. Instead, use SmsMessageReceivedTriggerDetails.")
                               HRESULT ( STDMETHODCALLTYPE *get_MessageIndex )(
        __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetailsVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("SmsReceivedEventDetails may be altered or unavailable for releases after Windows 10. Instead, use SmsMessageReceivedTriggerDetails.")
    ( (This)->lpVtbl->get_DeviceId(This,value) )
DEPRECATED("SmsReceivedEventDetails may be altered or unavailable for releases after Windows 10. Instead, use SmsMessageReceivedTriggerDetails.")
    ( (This)->lpVtbl->get_MessageIndex(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsReceivedEventDetails2[] = L"Windows.Devices.Sms.ISmsReceivedEventDetails2";
typedef struct
DEPRECATED("SmsReceivedEventDetails may be altered or unavailable for releases after Windows 10. Instead, use SmsMessageReceivedTriggerDetails.")
__x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("SmsReceivedEventDetails may be altered or unavailable for releases after Windows 10. Instead, use SmsMessageReceivedTriggerDetails.")
                               HRESULT ( STDMETHODCALLTYPE *get_MessageClass )(
        __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails2 * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsMessageClass * value
        );
    DEPRECATED("SmsReceivedEventDetails may be altered or unavailable for releases after Windows 10. Instead, use SmsMessageReceivedTriggerDetails.")
                               HRESULT ( STDMETHODCALLTYPE *get_BinaryMessage )(
        __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails2Vtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("SmsReceivedEventDetails may be altered or unavailable for releases after Windows 10. Instead, use SmsMessageReceivedTriggerDetails.")
    ( (This)->lpVtbl->get_MessageClass(This,value) )
DEPRECATED("SmsReceivedEventDetails may be altered or unavailable for releases after Windows 10. Instead, use SmsMessageReceivedTriggerDetails.")
    ( (This)->lpVtbl->get_BinaryMessage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsReceivedEventDetails2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsSendMessageResult[] = L"Windows.Devices.Sms.ISmsSendMessageResult";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSuccessful )(
        __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MessageReferenceNumbers )(
        __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CellularClass )(
        __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CCellularClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ModemErrorCode )(
        __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsModemErrorCode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsErrorTransient )(
        __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkCauseCode )(
        __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransportFailureCause )(
        __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResultVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSuccessful(This,value) )
    ( (This)->lpVtbl->get_MessageReferenceNumbers(This,value) )
    ( (This)->lpVtbl->get_CellularClass(This,value) )
    ( (This)->lpVtbl->get_ModemErrorCode(This,value) )
    ( (This)->lpVtbl->get_IsErrorTransient(This,value) )
    ( (This)->lpVtbl->get_NetworkCauseCode(This,value) )
    ( (This)->lpVtbl->get_TransportFailureCause(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsSendMessageResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsStatusMessage[] = L"Windows.Devices.Sms.ISmsStatusMessage";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_To )(
        __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_From )(
        __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Body )(
        __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MessageReferenceNumber )(
        __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceCenterTimestamp )(
        __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DischargeTime )(
        __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessageVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsStatusMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_To(This,value) )
    ( (This)->lpVtbl->get_From(This,value) )
    ( (This)->lpVtbl->get_Body(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_MessageReferenceNumber(This,value) )
    ( (This)->lpVtbl->get_ServiceCenterTimestamp(This,value) )
    ( (This)->lpVtbl->get_DischargeTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsStatusMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsTextMessage[] = L"Windows.Devices.Sms.ISmsTextMessage";
typedef struct
DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
__x_ABI_CWindows_CDevices_CSms_CISmsTextMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
                               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
                               HRESULT ( STDMETHODCALLTYPE *get_PartReferenceId )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
                               HRESULT ( STDMETHODCALLTYPE *get_PartNumber )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
                               HRESULT ( STDMETHODCALLTYPE *get_PartCount )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
                               HRESULT ( STDMETHODCALLTYPE *get_To )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
                               HRESULT ( STDMETHODCALLTYPE *put_To )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
                               HRESULT ( STDMETHODCALLTYPE *get_From )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
                               HRESULT ( STDMETHODCALLTYPE *put_From )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
                               HRESULT ( STDMETHODCALLTYPE *get_Body )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
                               HRESULT ( STDMETHODCALLTYPE *put_Body )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
                               HRESULT ( STDMETHODCALLTYPE *get_Encoding )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsEncoding * value
        );
    DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
                               HRESULT ( STDMETHODCALLTYPE *put_Encoding )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This,
                  __x_ABI_CWindows_CDevices_CSms_CSmsEncoding value
        );
    DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
                      HRESULT ( STDMETHODCALLTYPE *ToBinaryMessages )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * This,
                  __x_ABI_CWindows_CDevices_CSms_CSmsDataFormat format,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSms__CISmsBinaryMessage * * messages
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsTextMessageVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsTextMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
    ( (This)->lpVtbl->get_Timestamp(This,value) )
DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
    ( (This)->lpVtbl->get_PartReferenceId(This,value) )
DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
    ( (This)->lpVtbl->get_PartNumber(This,value) )
DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
    ( (This)->lpVtbl->get_PartCount(This,value) )
DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
    ( (This)->lpVtbl->get_To(This,value) )
DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
    ( (This)->lpVtbl->put_To(This,value) )
DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
    ( (This)->lpVtbl->get_From(This,value) )
DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
    ( (This)->lpVtbl->put_From(This,value) )
DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
    ( (This)->lpVtbl->get_Body(This,value) )
DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
    ( (This)->lpVtbl->put_Body(This,value) )
DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
    ( (This)->lpVtbl->get_Encoding(This,value) )
DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
    ( (This)->lpVtbl->put_Encoding(This,value) )
DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
    ( (This)->lpVtbl->ToBinaryMessages(This,format,messages) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsTextMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsTextMessage2[] = L"Windows.Devices.Sms.ISmsTextMessage2";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_To )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_To )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_From )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Body )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Body )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Encoding )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CSmsEncoding * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Encoding )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                  __x_ABI_CWindows_CDevices_CSms_CSmsEncoding value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CallbackNumber )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CallbackNumber )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDeliveryNotificationEnabled )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsDeliveryNotificationEnabled )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RetryAttemptCount )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RetryAttemptCount )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TeleserviceId )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtocolId )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2 * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2Vtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_To(This,value) )
    ( (This)->lpVtbl->put_To(This,value) )
    ( (This)->lpVtbl->get_From(This,value) )
    ( (This)->lpVtbl->get_Body(This,value) )
    ( (This)->lpVtbl->put_Body(This,value) )
    ( (This)->lpVtbl->get_Encoding(This,value) )
    ( (This)->lpVtbl->put_Encoding(This,value) )
    ( (This)->lpVtbl->get_CallbackNumber(This,value) )
    ( (This)->lpVtbl->put_CallbackNumber(This,value) )
    ( (This)->lpVtbl->get_IsDeliveryNotificationEnabled(This,value) )
    ( (This)->lpVtbl->put_IsDeliveryNotificationEnabled(This,value) )
    ( (This)->lpVtbl->get_RetryAttemptCount(This,value) )
    ( (This)->lpVtbl->put_RetryAttemptCount(This,value) )
    ( (This)->lpVtbl->get_TeleserviceId(This,value) )
    ( (This)->lpVtbl->get_ProtocolId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsTextMessage2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsTextMessageStatics[] = L"Windows.Devices.Sms.ISmsTextMessageStatics";
typedef struct
DEPRECATED("ISmsTextMessageStatics may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CDevices_CSms_CISmsTextMessageStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessageStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessageStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessageStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessageStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessageStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsTextMessageStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISmsTextMessageStatics may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *FromBinaryMessage )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessageStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSms_CISmsBinaryMessage * binaryMessage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * * textMessage
        );
    DEPRECATED("ISmsTextMessageStatics may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *FromBinaryData )(
        __x_ABI_CWindows_CDevices_CSms_CISmsTextMessageStatics * This,
                  __x_ABI_CWindows_CDevices_CSms_CSmsDataFormat format,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) BYTE * value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsTextMessage * * textMessage
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsTextMessageStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsTextMessageStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsTextMessageStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISmsTextMessageStatics may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->FromBinaryMessage(This,binaryMessage,textMessage) )
DEPRECATED("ISmsTextMessageStatics may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->FromBinaryData(This,format,__valueSize,value,textMessage) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsTextMessageStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsVoicemailMessage[] = L"Windows.Devices.Sms.ISmsVoicemailMessage";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessage * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_To )(
        __x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Body )(
        __x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MessageCount )(
        __x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessage * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessageVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_To(This,value) )
    ( (This)->lpVtbl->get_Body(This,value) )
    ( (This)->lpVtbl->get_MessageCount(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsVoicemailMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sms_ISmsWapMessage[] = L"Windows.Devices.Sms.ISmsWapMessage";
typedef struct __x_ABI_CWindows_CDevices_CSms_CISmsWapMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsWapMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsWapMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsWapMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsWapMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsWapMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSms_CISmsWapMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSms_CISmsWapMessage * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_To )(
        __x_ABI_CWindows_CDevices_CSms_CISmsWapMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_From )(
        __x_ABI_CWindows_CDevices_CSms_CISmsWapMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ApplicationId )(
        __x_ABI_CWindows_CDevices_CSms_CISmsWapMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentType )(
        __x_ABI_CWindows_CDevices_CSms_CISmsWapMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BinaryBody )(
        __x_ABI_CWindows_CDevices_CSms_CISmsWapMessage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Headers )(
        __x_ABI_CWindows_CDevices_CSms_CISmsWapMessage * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSms_CISmsWapMessageVtbl;
interface __x_ABI_CWindows_CDevices_CSms_CISmsWapMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSms_CISmsWapMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_To(This,value) )
    ( (This)->lpVtbl->get_From(This,value) )
    ( (This)->lpVtbl->get_ApplicationId(This,value) )
    ( (This)->lpVtbl->get_ContentType(This,value) )
    ( (This)->lpVtbl->get_BinaryBody(This,value) )
    ( (This)->lpVtbl->get_Headers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSms_CISmsWapMessage;
DEPRECATED("DeleteSmsMessageOperation may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_DeleteSmsMessageOperation[] = L"Windows.Devices.Sms.DeleteSmsMessageOperation";
DEPRECATED("DeleteSmsMessagesOperation may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_DeleteSmsMessagesOperation[] = L"Windows.Devices.Sms.DeleteSmsMessagesOperation";
DEPRECATED("GetSmsDeviceOperation may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_GetSmsDeviceOperation[] = L"Windows.Devices.Sms.GetSmsDeviceOperation";
DEPRECATED("GetSmsMessageOperation may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_GetSmsMessageOperation[] = L"Windows.Devices.Sms.GetSmsMessageOperation";
DEPRECATED("GetSmsMessagesOperation may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_GetSmsMessagesOperation[] = L"Windows.Devices.Sms.GetSmsMessagesOperation";
DEPRECATED("SendSmsMessageOperation may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SendSmsMessageOperation[] = L"Windows.Devices.Sms.SendSmsMessageOperation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsAppMessage[] = L"Windows.Devices.Sms.SmsAppMessage";
DEPRECATED("SmsBinaryMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsAppMessage.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsBinaryMessage[] = L"Windows.Devices.Sms.SmsBinaryMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsBroadcastMessage[] = L"Windows.Devices.Sms.SmsBroadcastMessage";
DEPRECATED("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsDevice[] = L"Windows.Devices.Sms.SmsDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsDevice2[] = L"Windows.Devices.Sms.SmsDevice2";
DEPRECATED("SmsDeviceMessageStore may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsDeviceMessageStore[] = L"Windows.Devices.Sms.SmsDeviceMessageStore";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsFilterRule[] = L"Windows.Devices.Sms.SmsFilterRule";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsFilterRules[] = L"Windows.Devices.Sms.SmsFilterRules";
DEPRECATED("SmsMessageReceivedEventArgs may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsMessageReceivedEventArgs[] = L"Windows.Devices.Sms.SmsMessageReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsMessageReceivedTriggerDetails[] = L"Windows.Devices.Sms.SmsMessageReceivedTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsMessageRegistration[] = L"Windows.Devices.Sms.SmsMessageRegistration";
DEPRECATED("SmsReceivedEventDetails may be altered or unavailable for releases after Windows 10. Instead, use SmsMessageReceivedTriggerDetails.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsReceivedEventDetails[] = L"Windows.Devices.Sms.SmsReceivedEventDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsSendMessageResult[] = L"Windows.Devices.Sms.SmsSendMessageResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsStatusMessage[] = L"Windows.Devices.Sms.SmsStatusMessage";
DEPRECATED("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsTextMessage[] = L"Windows.Devices.Sms.SmsTextMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsTextMessage2[] = L"Windows.Devices.Sms.SmsTextMessage2";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsVoicemailMessage[] = L"Windows.Devices.Sms.SmsVoicemailMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sms_SmsWapMessage[] = L"Windows.Devices.Sms.SmsWapMessage";
       
       
#pragma clang diagnostic pop
