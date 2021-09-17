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
#include "Windows.Media.MediaProperties.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilities __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilities;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics2 __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics2;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation2 __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation2;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationReader __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationReader;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatItem __x_ABI_CWindows_CApplicationModel_CChat_CIChatItem;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage3 __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage3;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage4 __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage4;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2 __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachmentFactory __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachmentFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageBlockingStatic __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageBlockingStatic;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeReader __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeReader;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeTracker __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeTracker;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedDeferral __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedDeferral;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedEventArgs __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManager2Statics __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManager2Statics;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatic __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatic;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatics3 __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatics3;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails2 __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails2;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader2 __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader2;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore3 __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore3;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreChangedEventArgs __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreChangedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport2 __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport2;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfiguration __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfiguration;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResult __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatQueryOptions __x_ABI_CWindows_CApplicationModel_CChat_CIChatQueryOptions;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatSearchReader __x_ABI_CWindows_CApplicationModel_CChat_CIChatSearchReader;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfiguration __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfiguration;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManager __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManager;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableEventArgs __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableTriggerDetails __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableTriggerDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageManager __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageManager;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics2 __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics2;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsServiceKindSupportedChangedEventArgs __x_ABI_CWindows_CApplicationModel_CChat_CIRcsServiceKindSupportedChangedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfiguration __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfiguration;
typedef interface __x_ABI_CWindows_CApplicationModel_CChat_CIRemoteParticipantComposingChangedEventArgs __x_ABI_CWindows_CApplicationModel_CChat_CIRemoteParticipantComposingChangedEventArgs;
typedef interface __FIIterator_1_Windows__CApplicationModel__CChat__CChatConversation __FIIterator_1_Windows__CApplicationModel__CChat__CChatConversation;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CChat__CChatConversation;
typedef struct __FIIterator_1_Windows__CApplicationModel__CChat__CChatConversationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatConversation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatConversation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CChat__CChatConversationVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CChat__CChatConversation
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CChat__CChatConversationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CChat__CChatConversation __FIIterable_1_Windows__CApplicationModel__CChat__CChatConversation;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CChat__CChatConversation;
typedef struct __FIIterable_1_Windows__CApplicationModel__CChat__CChatConversationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatConversation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatConversation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CChat__CChatConversation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CChat__CChatConversationVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CChat__CChatConversation
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CChat__CChatConversationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessage __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessage;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CChat__CChatMessage;
typedef struct __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessage
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessage __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessage;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CChat__CChatMessage;
typedef struct __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessage **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessage
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachment __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachment;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachment;
typedef struct __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachmentVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachment
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachmentVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageAttachment __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageAttachment;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageAttachment;
typedef struct __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageAttachmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageAttachment **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageAttachmentVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageAttachment
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageAttachmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChange __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChange;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChange;
typedef struct __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChange * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChange * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChangeVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChange
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChangeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageChange __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageChange;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageChange;
typedef struct __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageChange * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageChange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageChange * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageChange **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageChangeVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageChange
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageChangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransport __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransport;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransport;
typedef struct __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransport
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageTransport __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageTransport;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageTransport;
typedef struct __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CChat__CChatMessageTransport **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageTransport
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo __FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo;
typedef struct __FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfoVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo __FIIterable_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo;
typedef struct __FIIterable_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfoVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CChat__CIChatItem __FIIterator_1_Windows__CApplicationModel__CChat__CIChatItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CChat__CIChatItem;
typedef struct __FIIterator_1_Windows__CApplicationModel__CChat__CIChatItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CIChatItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CIChatItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CIChatItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CIChatItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CIChatItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CIChatItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CIChatItem * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CIChatItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CIChatItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CIChatItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIChatItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CChat__CIChatItemVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CChat__CIChatItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CChat__CIChatItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CChat__CIChatItem __FIIterable_1_Windows__CApplicationModel__CChat__CIChatItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CChat__CIChatItem;
typedef struct __FIIterable_1_Windows__CApplicationModel__CChat__CIChatItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CIChatItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CIChatItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CIChatItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CIChatItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CIChatItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CIChatItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CIChatItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CChat__CIChatItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CChat__CIChatItemVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CChat__CIChatItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CChat__CIChatItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction __FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction;
typedef struct __FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageActionVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageActionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction __FIIterable_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction;
typedef struct __FIIterable_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageActionVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageActionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransport __FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransport;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransport;
typedef struct __FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransport
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CChat__CRcsTransport __FIIterable_1_Windows__CApplicationModel__CChat__CRcsTransport;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CChat__CRcsTransport;
typedef struct __FIIterable_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CRcsTransport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CRcsTransport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CChat__CRcsTransport **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CChat__CRcsTransport
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageStatus;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageStatus *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatusVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatusVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatusVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatusVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus;
typedef struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt enum __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageStatus *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatusVtbl;
interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatusVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation __FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                       __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversationVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                       __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachment __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachment;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachment;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                       __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachmentVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachmentVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This,
                       __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChangeVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChangeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                       __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo __FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                       __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfoVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfoVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem __FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This,
                       __x_ABI_CWindows_CApplicationModel_CChat_CIChatItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIChatItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItemVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItemVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This,
                       __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageActionVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageActionVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                       __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment;
typedef struct __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageAttachment **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachmentVtbl;
interface __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachmentVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo;
typedef struct __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfoVtbl;
interface __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatCapabilities __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatCapabilities;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatCapabilities;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatCapabilities * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatCapabilities * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatCapabilities * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatCapabilities * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatCapabilitiesVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatCapabilities
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatCapabilitiesVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatCapabilities *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatCapabilities **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilities * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilitiesVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilitiesVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatConversation __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatConversation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatConversation;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatConversationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatConversation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatConversation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatConversationVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatConversation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatConversationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatConversation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatConversation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversationVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessage __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessage;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessage;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessage * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessage
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessage *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessage **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageStore __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageStore;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageStore;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStore __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStore;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageStore * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageStore * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStore *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageStoreVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageStore
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageStoreVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStore __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStore;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStore;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStore * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStore * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStore * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStore * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStore * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageStore *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStore * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageStore **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStore * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStoreVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStore
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStoreVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageTransport __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageTransport;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageTransport;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransport __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransport;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransport *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageTransport
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransport __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransport;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransport;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageTransport *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatMessageTransport **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransport
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatSyncManager __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatSyncManager;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatSyncManager;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManager __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManager;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatSyncManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatSyncManager * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatSyncManager * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatSyncManager * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatSyncManager * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManager *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatSyncManagerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatSyncManager
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatSyncManagerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManager __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManager;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManager;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManager * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManager * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManager * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManager * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManager * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManager * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManager * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatSyncManager *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManager * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CChatSyncManager **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManager * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManager * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManagerVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManager
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManagerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CRcsTransport __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CRcsTransport;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CRcsTransport;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransport __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransport;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CRcsTransport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CRcsTransport * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransport *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CRcsTransport
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransport __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransport;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransport;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CRcsTransport *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CChat__CRcsTransport **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransport
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversationVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversationVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChangeVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChangeVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChangeVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransportVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItemVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItemVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItemVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransportVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatConversation_Windows__CApplicationModel__CChat__CRemoteParticipantComposingChangedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatConversation_Windows__CApplicationModel__CChat__CRemoteParticipantComposingChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatConversation_Windows__CApplicationModel__CChat__CRemoteParticipantComposingChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatConversation_Windows__CApplicationModel__CChat__CRemoteParticipantComposingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatConversation_Windows__CApplicationModel__CChat__CRemoteParticipantComposingChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatConversation_Windows__CApplicationModel__CChat__CRemoteParticipantComposingChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatConversation_Windows__CApplicationModel__CChat__CRemoteParticipantComposingChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatConversation_Windows__CApplicationModel__CChat__CRemoteParticipantComposingChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIRemoteParticipantComposingChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatConversation_Windows__CApplicationModel__CChat__CRemoteParticipantComposingChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatConversation_Windows__CApplicationModel__CChat__CRemoteParticipantComposingChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatConversation_Windows__CApplicationModel__CChat__CRemoteParticipantComposingChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageChangedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageStoreChangedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageStoreChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageStoreChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageStoreChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageStoreChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageStoreChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageStoreChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageStoreChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageStoreChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageStoreChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageStoreChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsEndUserMessageManager_Windows__CApplicationModel__CChat__CRcsEndUserMessageAvailableEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsEndUserMessageManager_Windows__CApplicationModel__CChat__CRcsEndUserMessageAvailableEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsEndUserMessageManager_Windows__CApplicationModel__CChat__CRcsEndUserMessageAvailableEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsEndUserMessageManager_Windows__CApplicationModel__CChat__CRcsEndUserMessageAvailableEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsEndUserMessageManager_Windows__CApplicationModel__CChat__CRcsEndUserMessageAvailableEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsEndUserMessageManager_Windows__CApplicationModel__CChat__CRcsEndUserMessageAvailableEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsEndUserMessageManager_Windows__CApplicationModel__CChat__CRcsEndUserMessageAvailableEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsEndUserMessageManager_Windows__CApplicationModel__CChat__CRcsEndUserMessageAvailableEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageManager * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsEndUserMessageManager_Windows__CApplicationModel__CChat__CRcsEndUserMessageAvailableEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsEndUserMessageManager_Windows__CApplicationModel__CChat__CRcsEndUserMessageAvailableEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsEndUserMessageManager_Windows__CApplicationModel__CChat__CRcsEndUserMessageAvailableEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsTransport_Windows__CApplicationModel__CChat__CRcsServiceKindSupportedChangedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsTransport_Windows__CApplicationModel__CChat__CRcsServiceKindSupportedChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsTransport_Windows__CApplicationModel__CChat__CRcsServiceKindSupportedChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsTransport_Windows__CApplicationModel__CChat__CRcsServiceKindSupportedChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsTransport_Windows__CApplicationModel__CChat__CRcsServiceKindSupportedChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsTransport_Windows__CApplicationModel__CChat__CRcsServiceKindSupportedChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsTransport_Windows__CApplicationModel__CChat__CRcsServiceKindSupportedChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsTransport_Windows__CApplicationModel__CChat__CRcsServiceKindSupportedChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIRcsServiceKindSupportedChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsTransport_Windows__CApplicationModel__CChat__CRcsServiceKindSupportedChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsTransport_Windows__CApplicationModel__CChat__CRcsServiceKindSupportedChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsTransport_Windows__CApplicationModel__CChat__CRcsServiceKindSupportedChangedEventArgsVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;
interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_int __FIAsyncOperationCompletedHandler_1_int;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_int;
typedef interface __FIAsyncOperation_1_int __FIAsyncOperation_1_int;
typedef struct __FIAsyncOperationCompletedHandler_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_int * This, __RPC__in_opt __FIAsyncOperation_1_int *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_intVtbl;
interface __FIAsyncOperationCompletedHandler_1_int
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_intVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_int __FIAsyncOperation_1_int;
EXTERN_C const IID IID___FIAsyncOperation_1_int;
typedef struct __FIAsyncOperation_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_int * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_int * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_int * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_int * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_int *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_int * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_int **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_int * This, __RPC__out int *results);
    END_INTERFACE
} __FIAsyncOperation_1_intVtbl;
interface __FIAsyncOperation_1_int
{
    CONST_VTBL struct __FIAsyncOperation_1_intVtbl *lpVtbl;
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
typedef interface __FIReference_1_UINT32 __FIReference_1_UINT32;
EXTERN_C const IID IID___FIReference_1_UINT32;
typedef struct __FIReference_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT32 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT32 * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT32 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT32 * This, __RPC__out unsigned int *value);
    END_INTERFACE
} __FIReference_1_UINT32Vtbl;
interface __FIReference_1_UINT32
{
    CONST_VTBL struct __FIReference_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
struct __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __FIReference_1_Windows__CFoundation__CDateTime __FIReference_1_Windows__CFoundation__CDateTime;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CDateTime;
typedef struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CDateTime *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CDateTimeVtbl;
interface __FIReference_1_Windows__CFoundation__CDateTime
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef enum __x_ABI_CWindows_CApplicationModel_CChat_CChatConversationThreadingKind __x_ABI_CWindows_CApplicationModel_CChat_CChatConversationThreadingKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CChat_CChatItemKind __x_ABI_CWindows_CApplicationModel_CChat_CChatItemKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageChangeType __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageChangeType;
typedef enum __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageKind __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageOperatorKind __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageOperatorKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageStatus __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageTransportKind __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageTransportKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageValidationStatus __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageValidationStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CChat_CChatRestoreHistorySpan __x_ABI_CWindows_CApplicationModel_CChat_CChatRestoreHistorySpan;
typedef enum __x_ABI_CWindows_CApplicationModel_CChat_CChatStoreChangedEventKind __x_ABI_CWindows_CApplicationModel_CChat_CChatStoreChangedEventKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CChat_CChatTransportErrorCodeCategory __x_ABI_CWindows_CApplicationModel_CChat_CChatTransportErrorCodeCategory;
typedef enum __x_ABI_CWindows_CApplicationModel_CChat_CChatTransportInterpretedErrorCode __x_ABI_CWindows_CApplicationModel_CChat_CChatTransportInterpretedErrorCode;
typedef enum __x_ABI_CWindows_CApplicationModel_CChat_CRcsServiceKind __x_ABI_CWindows_CApplicationModel_CChat_CRcsServiceKind;
enum __x_ABI_CWindows_CApplicationModel_CChat_CChatConversationThreadingKind
{
    ChatConversationThreadingKind_Participants = 0,
    ChatConversationThreadingKind_ContactId = 1,
    ChatConversationThreadingKind_ConversationId = 2,
    ChatConversationThreadingKind_Custom = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CChat_CChatItemKind
{
    ChatItemKind_Message = 0,
    ChatItemKind_Conversation = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageChangeType
{
    ChatMessageChangeType_MessageCreated = 0,
    ChatMessageChangeType_MessageModified = 1,
    ChatMessageChangeType_MessageDeleted = 2,
    ChatMessageChangeType_ChangeTrackingLost = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageKind
{
    ChatMessageKind_Standard = 0,
    ChatMessageKind_FileTransferRequest = 1,
    ChatMessageKind_TransportCustom = 2,
    ChatMessageKind_JoinedConversation = 3,
    ChatMessageKind_LeftConversation = 4,
    ChatMessageKind_OtherParticipantJoinedConversation = 5,
    ChatMessageKind_OtherParticipantLeftConversation = 6,
};
enum __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageOperatorKind
{
    ChatMessageOperatorKind_Unspecified = 0,
    ChatMessageOperatorKind_Sms = 1,
    ChatMessageOperatorKind_Mms = 2,
    ChatMessageOperatorKind_Rcs = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageStatus
{
    ChatMessageStatus_Draft = 0,
    ChatMessageStatus_Sending = 1,
    ChatMessageStatus_Sent = 2,
    ChatMessageStatus_SendRetryNeeded = 3,
    ChatMessageStatus_SendFailed = 4,
    ChatMessageStatus_Received = 5,
    ChatMessageStatus_ReceiveDownloadNeeded = 6,
    ChatMessageStatus_ReceiveDownloadFailed = 7,
    ChatMessageStatus_ReceiveDownloading = 8,
    ChatMessageStatus_Deleted = 9,
    ChatMessageStatus_Declined = 10,
    ChatMessageStatus_Cancelled = 11,
    ChatMessageStatus_Recalled = 12,
    ChatMessageStatus_ReceiveRetryNeeded = 13,
};
enum __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageTransportKind
{
    ChatMessageTransportKind_Text = 0,
    ChatMessageTransportKind_Untriaged = 1,
    ChatMessageTransportKind_Blocked = 2,
    ChatMessageTransportKind_Custom = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageValidationStatus
{
    ChatMessageValidationStatus_Valid = 0,
    ChatMessageValidationStatus_NoRecipients = 1,
    ChatMessageValidationStatus_InvalidData = 2,
    ChatMessageValidationStatus_MessageTooLarge = 3,
    ChatMessageValidationStatus_TooManyRecipients = 4,
    ChatMessageValidationStatus_TransportInactive = 5,
    ChatMessageValidationStatus_TransportNotFound = 6,
    ChatMessageValidationStatus_TooManyAttachments = 7,
    ChatMessageValidationStatus_InvalidRecipients = 8,
    ChatMessageValidationStatus_InvalidBody = 9,
    ChatMessageValidationStatus_InvalidOther = 10,
    ChatMessageValidationStatus_ValidWithLargeMessage = 11,
    ChatMessageValidationStatus_VoiceRoamingRestriction = 12,
    ChatMessageValidationStatus_DataRoamingRestriction = 13,
};
enum __x_ABI_CWindows_CApplicationModel_CChat_CChatRestoreHistorySpan
{
    ChatRestoreHistorySpan_LastMonth = 0,
    ChatRestoreHistorySpan_LastYear = 1,
    ChatRestoreHistorySpan_AnyTime = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CChat_CChatStoreChangedEventKind
{
    ChatStoreChangedEventKind_NotificationsMissed = 0,
    ChatStoreChangedEventKind_StoreModified = 1,
    ChatStoreChangedEventKind_MessageCreated = 2,
    ChatStoreChangedEventKind_MessageModified = 3,
    ChatStoreChangedEventKind_MessageDeleted = 4,
    ChatStoreChangedEventKind_ConversationModified = 5,
    ChatStoreChangedEventKind_ConversationDeleted = 6,
    ChatStoreChangedEventKind_ConversationTransportDeleted = 7,
};
enum __x_ABI_CWindows_CApplicationModel_CChat_CChatTransportErrorCodeCategory
{
    ChatTransportErrorCodeCategory_None = 0,
    ChatTransportErrorCodeCategory_Http = 1,
    ChatTransportErrorCodeCategory_Network = 2,
    ChatTransportErrorCodeCategory_MmsServer = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CChat_CChatTransportInterpretedErrorCode
{
    ChatTransportInterpretedErrorCode_None = 0,
    ChatTransportInterpretedErrorCode_Unknown = 1,
    ChatTransportInterpretedErrorCode_InvalidRecipientAddress = 2,
    ChatTransportInterpretedErrorCode_NetworkConnectivity = 3,
    ChatTransportInterpretedErrorCode_ServiceDenied = 4,
    ChatTransportInterpretedErrorCode_Timeout = 5,
};
enum __x_ABI_CWindows_CApplicationModel_CChat_CRcsServiceKind
{
    RcsServiceKind_Chat = 0,
    RcsServiceKind_GroupChat = 1,
    RcsServiceKind_FileTransfer = 2,
    RcsServiceKind_Capability = 3,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatCapabilities[] = L"Windows.ApplicationModel.Chat.IChatCapabilities";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsOnline )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilities * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsChatCapable )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilities * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsFileTransferCapable )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilities * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsGeoLocationPushCapable )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilities * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsIntegratedMessagingCapable )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilities * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsOnline(This,result) )
    ( (This)->lpVtbl->get_IsChatCapable(This,result) )
    ( (This)->lpVtbl->get_IsFileTransferCapable(This,result) )
    ( (This)->lpVtbl->get_IsGeoLocationPushCapable(This,result) )
    ( (This)->lpVtbl->get_IsIntegratedMessagingCapable(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatCapabilitiesManagerStatics[] = L"Windows.ApplicationModel.Chat.IChatCapabilitiesManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetCachedCapabilitiesAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics * This,
                  __RPC__in HSTRING address,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetCapabilitiesFromNetworkAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics * This,
                  __RPC__in HSTRING address,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCachedCapabilitiesAsync(This,address,result) )
    ( (This)->lpVtbl->GetCapabilitiesFromNetworkAsync(This,address,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatCapabilitiesManagerStatics2[] = L"Windows.ApplicationModel.Chat.IChatCapabilitiesManagerStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetCachedCapabilitiesForTransportAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics2 * This,
                  __RPC__in HSTRING address,
                  __RPC__in HSTRING transportId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetCapabilitiesFromNetworkForTransportAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics2 * This,
                  __RPC__in HSTRING address,
                  __RPC__in HSTRING transportId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatCapabilities * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCachedCapabilitiesForTransportAsync(This,address,transportId,operation) )
    ( (This)->lpVtbl->GetCapabilitiesFromNetworkForTransportAsync(This,address,transportId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatCapabilitiesManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatConversation[] = L"Windows.ApplicationModel.Chat.IChatConversation";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HasUnreadMessages )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Subject )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsConversationMuted )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsConversationMuted )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MostRecentMessageId )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Participants )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ThreadingInfo )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetMessageReader )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *MarkAllMessagesAsReadAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *MarkMessagesAsReadAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyLocalParticipantComposing )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                  __RPC__in HSTRING transportId,
                  __RPC__in HSTRING participantAddress,
                  boolean isComposing
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyRemoteParticipantComposing )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                  __RPC__in HSTRING transportId,
                  __RPC__in HSTRING participantAddress,
                  boolean isComposing
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RemoteParticipantComposingChanged )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatConversation_Windows__CApplicationModel__CChat__CRemoteParticipantComposingChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RemoteParticipantComposingChanged )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HasUnreadMessages(This,result) )
    ( (This)->lpVtbl->get_Id(This,result) )
    ( (This)->lpVtbl->get_Subject(This,result) )
    ( (This)->lpVtbl->put_Subject(This,value) )
    ( (This)->lpVtbl->get_IsConversationMuted(This,result) )
    ( (This)->lpVtbl->put_IsConversationMuted(This,value) )
    ( (This)->lpVtbl->get_MostRecentMessageId(This,result) )
    ( (This)->lpVtbl->get_Participants(This,result) )
    ( (This)->lpVtbl->get_ThreadingInfo(This,result) )
    ( (This)->lpVtbl->DeleteAsync(This,result) )
    ( (This)->lpVtbl->GetMessageReader(This,result) )
    ( (This)->lpVtbl->MarkAllMessagesAsReadAsync(This,result) )
    ( (This)->lpVtbl->MarkMessagesAsReadAsync(This,value,result) )
    ( (This)->lpVtbl->SaveAsync(This,result) )
    ( (This)->lpVtbl->NotifyLocalParticipantComposing(This,transportId,participantAddress,isComposing) )
    ( (This)->lpVtbl->NotifyRemoteParticipantComposing(This,transportId,participantAddress,isComposing) )
    ( (This)->lpVtbl->add_RemoteParticipantComposingChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_RemoteParticipantComposingChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatConversation2[] = L"Windows.ApplicationModel.Chat.IChatConversation2";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanModifyParticipants )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation2 * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanModifyParticipants )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanModifyParticipants(This,result) )
    ( (This)->lpVtbl->put_CanModifyParticipants(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatConversationReader[] = L"Windows.ApplicationModel.Chat.IChatConversationReader";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *ReadBatchAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ReadBatchWithCountAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationReader * This,
                  INT32 count,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatConversation * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationReaderVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationReader
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReadBatchAsync(This,result) )
    ( (This)->lpVtbl->ReadBatchWithCountAsync(This,count,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatConversationThreadingInfo[] = L"Windows.ApplicationModel.Chat.IChatConversationThreadingInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContactId )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContactId )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Custom )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Custom )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConversationId )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ConversationId )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Participants )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CChatConversationThreadingKind * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Kind )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * This,
                  __x_ABI_CWindows_CApplicationModel_CChat_CChatConversationThreadingKind value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContactId(This,result) )
    ( (This)->lpVtbl->put_ContactId(This,value) )
    ( (This)->lpVtbl->get_Custom(This,result) )
    ( (This)->lpVtbl->put_Custom(This,value) )
    ( (This)->lpVtbl->get_ConversationId(This,result) )
    ( (This)->lpVtbl->put_ConversationId(This,value) )
    ( (This)->lpVtbl->get_Participants(This,result) )
    ( (This)->lpVtbl->get_Kind(This,result) )
    ( (This)->lpVtbl->put_Kind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatItem[] = L"Windows.ApplicationModel.Chat.IChatItem";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ItemKind )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatItem * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CChatItemKind * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatItemVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatItem
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ItemKind(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessage[] = L"Windows.ApplicationModel.Chat.IChatMessage";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Attachments )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CChat__CChatMessageAttachment * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Body )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Body )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_From )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsForwardingDisabled )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsIncoming )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRead )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalTimestamp )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkTimestamp )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Recipients )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RecipientSendStatuses )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CChat__CChatMessageStatus * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransportFriendlyName )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransportId )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransportId )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Attachments(This,value) )
    ( (This)->lpVtbl->get_Body(This,value) )
    ( (This)->lpVtbl->put_Body(This,value) )
    ( (This)->lpVtbl->get_From(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_IsForwardingDisabled(This,value) )
    ( (This)->lpVtbl->get_IsIncoming(This,value) )
    ( (This)->lpVtbl->get_IsRead(This,value) )
    ( (This)->lpVtbl->get_LocalTimestamp(This,value) )
    ( (This)->lpVtbl->get_NetworkTimestamp(This,value) )
    ( (This)->lpVtbl->get_Recipients(This,value) )
    ( (This)->lpVtbl->get_RecipientSendStatuses(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Subject(This,value) )
    ( (This)->lpVtbl->get_TransportFriendlyName(This,value) )
    ( (This)->lpVtbl->get_TransportId(This,value) )
    ( (This)->lpVtbl->put_TransportId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessage2[] = L"Windows.ApplicationModel.Chat.IChatMessage2";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EstimatedDownloadSize )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                           __RPC__out UINT64 * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EstimatedDownloadSize )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                  UINT64 value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_From )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAutoReply )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsAutoReply )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsForwardingDisabled )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsReplyDisabled )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsIncoming )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsRead )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSeen )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsSeen )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSimMessage )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LocalTimestamp )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MessageKind )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageKind * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MessageKind )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                  __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageKind value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MessageOperatorKind )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageOperatorKind * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MessageOperatorKind )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                  __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageOperatorKind value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NetworkTimestamp )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsReceivedDuringQuietHours )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsReceivedDuringQuietHours )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Status )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                  __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageStatus value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Subject )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShouldSuppressNotification )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShouldSuppressNotification )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ThreadingInfo )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ThreadingInfo )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RecipientsDeliveryInfos )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CChat__CChatRecipientDeliveryInfo * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EstimatedDownloadSize(This,result) )
    ( (This)->lpVtbl->put_EstimatedDownloadSize(This,value) )
    ( (This)->lpVtbl->put_From(This,value) )
    ( (This)->lpVtbl->get_IsAutoReply(This,result) )
    ( (This)->lpVtbl->put_IsAutoReply(This,value) )
    ( (This)->lpVtbl->put_IsForwardingDisabled(This,value) )
    ( (This)->lpVtbl->get_IsReplyDisabled(This,result) )
    ( (This)->lpVtbl->put_IsIncoming(This,value) )
    ( (This)->lpVtbl->put_IsRead(This,value) )
    ( (This)->lpVtbl->get_IsSeen(This,result) )
    ( (This)->lpVtbl->put_IsSeen(This,value) )
    ( (This)->lpVtbl->get_IsSimMessage(This,result) )
    ( (This)->lpVtbl->put_LocalTimestamp(This,value) )
    ( (This)->lpVtbl->get_MessageKind(This,result) )
    ( (This)->lpVtbl->put_MessageKind(This,value) )
    ( (This)->lpVtbl->get_MessageOperatorKind(This,result) )
    ( (This)->lpVtbl->put_MessageOperatorKind(This,value) )
    ( (This)->lpVtbl->put_NetworkTimestamp(This,value) )
    ( (This)->lpVtbl->get_IsReceivedDuringQuietHours(This,result) )
    ( (This)->lpVtbl->put_IsReceivedDuringQuietHours(This,value) )
    ( (This)->lpVtbl->put_RemoteId(This,value) )
    ( (This)->lpVtbl->put_Status(This,value) )
    ( (This)->lpVtbl->put_Subject(This,value) )
    ( (This)->lpVtbl->get_ShouldSuppressNotification(This,result) )
    ( (This)->lpVtbl->put_ShouldSuppressNotification(This,value) )
    ( (This)->lpVtbl->get_ThreadingInfo(This,result) )
    ( (This)->lpVtbl->put_ThreadingInfo(This,value) )
    ( (This)->lpVtbl->get_RecipientsDeliveryInfos(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessage3[] = L"Windows.ApplicationModel.Chat.IChatMessage3";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RemoteId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessage4[] = L"Windows.ApplicationModel.Chat.IChatMessage4";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SyncId )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage4 * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SyncId )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage4 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage4Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage4
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SyncId(This,result) )
    ( (This)->lpVtbl->put_SyncId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageAttachment[] = L"Windows.ApplicationModel.Chat.IChatMessageAttachment";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DataStreamReference )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DataStreamReference )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GroupId )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_GroupId )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MimeType )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MimeType )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachmentVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DataStreamReference(This,value) )
    ( (This)->lpVtbl->put_DataStreamReference(This,value) )
    ( (This)->lpVtbl->get_GroupId(This,value) )
    ( (This)->lpVtbl->put_GroupId(This,value) )
    ( (This)->lpVtbl->get_MimeType(This,value) )
    ( (This)->lpVtbl->put_MimeType(This,value) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->put_Text(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageAttachment2[] = L"Windows.ApplicationModel.Chat.IChatMessageAttachment2";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Thumbnail )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransferProgress )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2 * This,
                           __RPC__out DOUBLE * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransferProgress )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2 * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OriginalFileName )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2 * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OriginalFileName )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Thumbnail(This,result) )
    ( (This)->lpVtbl->put_Thumbnail(This,value) )
    ( (This)->lpVtbl->get_TransferProgress(This,result) )
    ( (This)->lpVtbl->put_TransferProgress(This,value) )
    ( (This)->lpVtbl->get_OriginalFileName(This,result) )
    ( (This)->lpVtbl->put_OriginalFileName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageAttachmentFactory[] = L"Windows.ApplicationModel.Chat.IChatMessageAttachmentFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachmentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachmentFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachmentFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachmentFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachmentFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachmentFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachmentFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateChatMessageAttachment )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachmentFactory * This,
                  __RPC__in HSTRING mimeType,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * dataStreamReference,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachment * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachmentFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachmentFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachmentFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateChatMessageAttachment(This,mimeType,dataStreamReference,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageAttachmentFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageBlockingStatic[] = L"Windows.ApplicationModel.Chat.IChatMessageBlockingStatic";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageBlockingStaticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageBlockingStatic * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageBlockingStatic * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageBlockingStatic * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageBlockingStatic * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageBlockingStatic * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageBlockingStatic * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *MarkMessageAsBlockedAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageBlockingStatic * This,
                  __RPC__in HSTRING localChatMessageId,
                  boolean blocked,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageBlockingStaticVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageBlockingStatic
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageBlockingStaticVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->MarkMessageAsBlockedAsync(This,localChatMessageId,blocked,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageBlockingStatic;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageChange[] = L"Windows.ApplicationModel.Chat.IChatMessageChange";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChangeType )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageChangeType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChangeType(This,value) )
    ( (This)->lpVtbl->get_Message(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageChangeReader[] = L"Windows.ApplicationModel.Chat.IChatMessageChangeReader";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AcceptChanges )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeReader * This
        );
    HRESULT ( STDMETHODCALLTYPE *AcceptChangesThrough )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeReader * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChange * lastChangeToAcknowledge
        );
    HRESULT ( STDMETHODCALLTYPE *ReadBatchAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageChange * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeReaderVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeReader
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AcceptChanges(This) )
    ( (This)->lpVtbl->AcceptChangesThrough(This,lastChangeToAcknowledge) )
    ( (This)->lpVtbl->ReadBatchAsync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageChangeTracker[] = L"Windows.ApplicationModel.Chat.IChatMessageChangeTracker";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeTrackerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeTracker * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeTracker * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeTracker * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeTracker * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeTracker * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeTracker * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Enable )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeTracker * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetChangeReader )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeTracker * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeReader * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Reset )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeTracker * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeTrackerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeTracker
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeTrackerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Enable(This) )
    ( (This)->lpVtbl->GetChangeReader(This,value) )
    ( (This)->lpVtbl->Reset(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeTracker;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageChangedDeferral[] = L"Windows.ApplicationModel.Chat.IChatMessageChangedDeferral";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedDeferralVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageChangedEventArgs[] = L"Windows.ApplicationModel.Chat.IChatMessageChangedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageManager2Statics[] = L"Windows.ApplicationModel.Chat.IChatMessageManager2Statics";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManager2StaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManager2Statics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManager2Statics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManager2Statics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManager2Statics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManager2Statics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManager2Statics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RegisterTransportAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManager2Statics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetTransportAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManager2Statics * This,
                  __RPC__in HSTRING transportId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageTransport * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManager2StaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManager2Statics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManager2StaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RegisterTransportAsync(This,result) )
    ( (This)->lpVtbl->GetTransportAsync(This,transportId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManager2Statics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageManagerStatic[] = L"Windows.ApplicationModel.Chat.IChatMessageManagerStatic";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStaticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatic * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatic * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatic * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatic * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatic * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatic * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetTransportsAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatic * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessageTransport * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatic * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessageStore * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowComposeSmsMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatic * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * message,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowSmsSettings )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatic * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStaticVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatic
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStaticVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetTransportsAsync(This,value) )
    ( (This)->lpVtbl->RequestStoreAsync(This,value) )
    ( (This)->lpVtbl->ShowComposeSmsMessageAsync(This,message,value) )
    ( (This)->lpVtbl->ShowSmsSettings(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatic;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageManagerStatics3[] = L"Windows.ApplicationModel.Chat.IChatMessageManagerStatics3";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestSyncManagerAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatics3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatSyncManager * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatics3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestSyncManagerAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageManagerStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageNotificationTriggerDetails[] = L"Windows.ApplicationModel.Chat.IChatMessageNotificationTriggerDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChatMessage )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChatMessage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageNotificationTriggerDetails2[] = L"Windows.ApplicationModel.Chat.IChatMessageNotificationTriggerDetails2";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ShouldDisplayToast )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails2 * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShouldUpdateDetailText )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails2 * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShouldUpdateBadge )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails2 * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShouldUpdateActionCenter )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails2 * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ShouldDisplayToast(This,result) )
    ( (This)->lpVtbl->get_ShouldUpdateDetailText(This,result) )
    ( (This)->lpVtbl->get_ShouldUpdateBadge(This,result) )
    ( (This)->lpVtbl->get_ShouldUpdateActionCenter(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageNotificationTriggerDetails2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageReader[] = L"Windows.ApplicationModel.Chat.IChatMessageReader";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReadBatchAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReaderVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReadBatchAsync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageReader2[] = L"Windows.ApplicationModel.Chat.IChatMessageReader2";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *ReadBatchWithCountAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader2 * This,
                  INT32 count,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CChatMessage * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReadBatchWithCountAsync(This,count,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageStore[] = L"Windows.ApplicationModel.Chat.IChatMessageStore";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChangeTracker )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageChangeTracker * * value
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This,
                  __RPC__in HSTRING localMessageId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *DownloadMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This,
                  __RPC__in HSTRING localChatMessageId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This,
                  __RPC__in HSTRING localChatMessageId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetMessageReader1 )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetMessageReader2 )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan recentTimeLimit,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageReader * * value
        );
    HRESULT ( STDMETHODCALLTYPE *MarkMessageReadAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This,
                  __RPC__in HSTRING localChatMessageId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RetrySendMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This,
                  __RPC__in HSTRING localChatMessageId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SendMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * chatMessage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ValidateMessage )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * chatMessage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResult * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MessageChanged )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageChangedEventArgs * value,
                           __RPC__out EventRegistrationToken * returnValue
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MessageChanged )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore * This,
                  EventRegistrationToken value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChangeTracker(This,value) )
    ( (This)->lpVtbl->DeleteMessageAsync(This,localMessageId,value) )
    ( (This)->lpVtbl->DownloadMessageAsync(This,localChatMessageId,value) )
    ( (This)->lpVtbl->GetMessageAsync(This,localChatMessageId,value) )
    ( (This)->lpVtbl->GetMessageReader1(This,value) )
    ( (This)->lpVtbl->GetMessageReader2(This,recentTimeLimit,value) )
    ( (This)->lpVtbl->MarkMessageReadAsync(This,localChatMessageId,value) )
    ( (This)->lpVtbl->RetrySendMessageAsync(This,localChatMessageId,value) )
    ( (This)->lpVtbl->SendMessageAsync(This,chatMessage,value) )
    ( (This)->lpVtbl->ValidateMessage(This,chatMessage,value) )
    ( (This)->lpVtbl->add_MessageChanged(This,value,returnValue) )
    ( (This)->lpVtbl->remove_MessageChanged(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageStore2[] = L"Windows.ApplicationModel.Chat.IChatMessageStore2";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ForwardMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                  __RPC__in HSTRING localChatMessageId,
                  __RPC__in_opt __FIIterable_1_HSTRING * addresses,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetConversationAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                  __RPC__in HSTRING conversationId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetConversationForTransportsAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                  __RPC__in HSTRING conversationId,
                  __RPC__in_opt __FIIterable_1_HSTRING * transportIds,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetConversationFromThreadingInfoAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationThreadingInfo * threadingInfo,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatConversation * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetConversationReader )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationReader * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetConversationForTransportsReader )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * transportIds,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversationReader * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetMessageByRemoteIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                  __RPC__in HSTRING transportId,
                  __RPC__in HSTRING remoteId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetUnseenCountAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_int * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetUnseenCountForTransportsReaderAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * transportIds,
                           __RPC__deref_out_opt __FIAsyncOperation_1_int * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *MarkAsSeenAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *MarkAsSeenForTransportsAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * transportIds,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetSearchReader )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatQueryOptions * value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatSearchReader * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SaveMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessage * chatMessage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryCancelDownloadMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                  __RPC__in HSTRING localChatMessageId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryCancelSendMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                  __RPC__in HSTRING localChatMessageId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StoreChanged )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CChatMessageStore_Windows__CApplicationModel__CChat__CChatMessageStoreChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StoreChanged )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ForwardMessageAsync(This,localChatMessageId,addresses,result) )
    ( (This)->lpVtbl->GetConversationAsync(This,conversationId,result) )
    ( (This)->lpVtbl->GetConversationForTransportsAsync(This,conversationId,transportIds,result) )
    ( (This)->lpVtbl->GetConversationFromThreadingInfoAsync(This,threadingInfo,result) )
    ( (This)->lpVtbl->GetConversationReader(This,result) )
    ( (This)->lpVtbl->GetConversationForTransportsReader(This,transportIds,result) )
    ( (This)->lpVtbl->GetMessageByRemoteIdAsync(This,transportId,remoteId,result) )
    ( (This)->lpVtbl->GetUnseenCountAsync(This,result) )
    ( (This)->lpVtbl->GetUnseenCountForTransportsReaderAsync(This,transportIds,result) )
    ( (This)->lpVtbl->MarkAsSeenAsync(This,result) )
    ( (This)->lpVtbl->MarkAsSeenForTransportsAsync(This,transportIds,result) )
    ( (This)->lpVtbl->GetSearchReader(This,value,result) )
    ( (This)->lpVtbl->SaveMessageAsync(This,chatMessage,result) )
    ( (This)->lpVtbl->TryCancelDownloadMessageAsync(This,localChatMessageId,result) )
    ( (This)->lpVtbl->TryCancelSendMessageAsync(This,localChatMessageId,result) )
    ( (This)->lpVtbl->add_StoreChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StoreChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageStore3[] = L"Windows.ApplicationModel.Chat.IChatMessageStore3";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetMessageBySyncIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore3 * This,
                  __RPC__in HSTRING syncId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CChatMessage * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetMessageBySyncIdAsync(This,syncId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStore3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageStoreChangedEventArgs[] = L"Windows.ApplicationModel.Chat.IChatMessageStoreChangedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreChangedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CChatStoreChangedEventKind * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreChangedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,result) )
    ( (This)->lpVtbl->get_Kind(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageStoreChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageTransport[] = L"Windows.ApplicationModel.Chat.IChatMessageTransport";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsAppSetAsNotificationProvider )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsActive )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransportFriendlyName )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransportId )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestSetAsNotificationProviderAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsAppSetAsNotificationProvider(This,value) )
    ( (This)->lpVtbl->get_IsActive(This,value) )
    ( (This)->lpVtbl->get_TransportFriendlyName(This,value) )
    ( (This)->lpVtbl->get_TransportId(This,value) )
    ( (This)->lpVtbl->RequestSetAsNotificationProviderAsync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageTransport2[] = L"Windows.ApplicationModel.Chat.IChatMessageTransport2";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfiguration * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransportKind )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageTransportKind * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Configuration(This,result) )
    ( (This)->lpVtbl->get_TransportKind(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransport2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageTransportConfiguration[] = L"Windows.ApplicationModel.Chat.IChatMessageTransportConfiguration";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxAttachmentCount )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfiguration * This,
                           __RPC__out INT32 * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxMessageSizeInKilobytes )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfiguration * This,
                           __RPC__out INT32 * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxRecipientCount )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfiguration * This,
                           __RPC__out INT32 * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedVideoFormat )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfiguration * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedProperties )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfiguration * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfigurationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxAttachmentCount(This,result) )
    ( (This)->lpVtbl->get_MaxMessageSizeInKilobytes(This,result) )
    ( (This)->lpVtbl->get_MaxRecipientCount(This,result) )
    ( (This)->lpVtbl->get_SupportedVideoFormat(This,result) )
    ( (This)->lpVtbl->get_ExtendedProperties(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageTransportConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatMessageValidationResult[] = L"Windows.ApplicationModel.Chat.IChatMessageValidationResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxPartCount )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResult * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PartCount )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResult * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemainingCharacterCountInPart )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResult * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResult * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageValidationStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxPartCount(This,value) )
    ( (This)->lpVtbl->get_PartCount(This,value) )
    ( (This)->lpVtbl->get_RemainingCharacterCountInPart(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatMessageValidationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatQueryOptions[] = L"Windows.ApplicationModel.Chat.IChatQueryOptions";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatQueryOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatQueryOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatQueryOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatQueryOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatQueryOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatQueryOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatQueryOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SearchString )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatQueryOptions * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SearchString )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatQueryOptions * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatQueryOptionsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatQueryOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatQueryOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SearchString(This,result) )
    ( (This)->lpVtbl->put_SearchString(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatQueryOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatRecipientDeliveryInfo[] = L"Windows.ApplicationModel.Chat.IChatRecipientDeliveryInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TransportAddress )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransportAddress )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeliveryTime )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DeliveryTime )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadTime )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReadTime )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransportErrorCodeCategory )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CChatTransportErrorCodeCategory * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransportInterpretedErrorCode )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CChatTransportInterpretedErrorCode * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransportErrorCode )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * This,
                           __RPC__out INT32 * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsErrorPermanent )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CChatMessageStatus * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TransportAddress(This,result) )
    ( (This)->lpVtbl->put_TransportAddress(This,value) )
    ( (This)->lpVtbl->get_DeliveryTime(This,result) )
    ( (This)->lpVtbl->put_DeliveryTime(This,value) )
    ( (This)->lpVtbl->get_ReadTime(This,result) )
    ( (This)->lpVtbl->put_ReadTime(This,value) )
    ( (This)->lpVtbl->get_TransportErrorCodeCategory(This,result) )
    ( (This)->lpVtbl->get_TransportInterpretedErrorCode(This,result) )
    ( (This)->lpVtbl->get_TransportErrorCode(This,result) )
    ( (This)->lpVtbl->get_IsErrorPermanent(This,result) )
    ( (This)->lpVtbl->get_Status(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatRecipientDeliveryInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatSearchReader[] = L"Windows.ApplicationModel.Chat.IChatSearchReader";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatSearchReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSearchReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSearchReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSearchReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSearchReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSearchReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSearchReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *ReadBatchAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatSearchReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ReadBatchWithCountAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatSearchReader * This,
                  INT32 count,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CIChatItem * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatSearchReaderVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatSearchReader
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatSearchReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReadBatchAsync(This,result) )
    ( (This)->lpVtbl->ReadBatchWithCountAsync(This,count,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatSearchReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatSyncConfiguration[] = L"Windows.ApplicationModel.Chat.IChatSyncConfiguration";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSyncEnabled )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfiguration * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsSyncEnabled )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfiguration * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RestoreHistorySpan )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CChatRestoreHistorySpan * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RestoreHistorySpan )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfiguration * This,
                  __x_ABI_CWindows_CApplicationModel_CChat_CChatRestoreHistorySpan value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfigurationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSyncEnabled(This,result) )
    ( (This)->lpVtbl->put_IsSyncEnabled(This,value) )
    ( (This)->lpVtbl->get_RestoreHistorySpan(This,result) )
    ( (This)->lpVtbl->put_RestoreHistorySpan(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IChatSyncManager[] = L"Windows.ApplicationModel.Chat.IChatSyncManager";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfiguration * * result
        );
    HRESULT ( STDMETHODCALLTYPE *AssociateAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *UnassociateAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsAccountAssociated )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *StartSync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManager * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetConfigurationAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncConfiguration * configuration,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManagerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Configuration(This,result) )
    ( (This)->lpVtbl->AssociateAccountAsync(This,webAccount,result) )
    ( (This)->lpVtbl->UnassociateAccountAsync(This,result) )
    ( (This)->lpVtbl->IsAccountAssociated(This,webAccount,result) )
    ( (This)->lpVtbl->StartSync(This) )
    ( (This)->lpVtbl->SetConfigurationAsync(This,configuration,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIChatSyncManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IRcsEndUserMessage[] = L"Windows.ApplicationModel.Chat.IRcsEndUserMessage";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TransportId )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPinRequired )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Actions )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CChat__CRcsEndUserMessageAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SendResponseAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction * action,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SendResponseWithPinAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction * action,
                  __RPC__in HSTRING pin,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TransportId(This,result) )
    ( (This)->lpVtbl->get_Title(This,result) )
    ( (This)->lpVtbl->get_Text(This,result) )
    ( (This)->lpVtbl->get_IsPinRequired(This,result) )
    ( (This)->lpVtbl->get_Actions(This,result) )
    ( (This)->lpVtbl->SendResponseAsync(This,action,result) )
    ( (This)->lpVtbl->SendResponseWithPinAsync(This,action,pin,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IRcsEndUserMessageAction[] = L"Windows.ApplicationModel.Chat.IRcsEndUserMessageAction";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Label )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageActionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageActionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Label(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IRcsEndUserMessageAvailableEventArgs[] = L"Windows.ApplicationModel.Chat.IRcsEndUserMessageAvailableEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsMessageAvailable )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableEventArgs * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessage * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsMessageAvailable(This,result) )
    ( (This)->lpVtbl->get_Message(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IRcsEndUserMessageAvailableTriggerDetails[] = L"Windows.ApplicationModel.Chat.IRcsEndUserMessageAvailableTriggerDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableTriggerDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableTriggerDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableTriggerDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->get_Text(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageAvailableTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IRcsEndUserMessageManager[] = L"Windows.ApplicationModel.Chat.IRcsEndUserMessageManager";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_MessageAvailableChanged )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsEndUserMessageManager_Windows__CApplicationModel__CChat__CRcsEndUserMessageAvailableEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MessageAvailableChanged )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageManager * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageManagerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_MessageAvailableChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_MessageAvailableChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IRcsManagerStatics[] = L"Windows.ApplicationModel.Chat.IRcsManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetEndUserMessageManager )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIRcsEndUserMessageManager * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetTransportsAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CChat__CRcsTransport * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTransportAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics * This,
                  __RPC__in HSTRING transportId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CChat__CRcsTransport * * result
        );
    HRESULT ( STDMETHODCALLTYPE *LeaveConversationAsync )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CChat_CIChatConversation * conversation,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetEndUserMessageManager(This,result) )
    ( (This)->lpVtbl->GetTransportsAsync(This,value) )
    ( (This)->lpVtbl->GetTransportAsync(This,transportId,result) )
    ( (This)->lpVtbl->LeaveConversationAsync(This,conversation,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IRcsManagerStatics2[] = L"Windows.ApplicationModel.Chat.IRcsManagerStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_TransportListChanged )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics2 * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TransportListChanged )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_TransportListChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_TransportListChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIRcsManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IRcsServiceKindSupportedChangedEventArgs[] = L"Windows.ApplicationModel.Chat.IRcsServiceKindSupportedChangedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsServiceKindSupportedChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsServiceKindSupportedChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsServiceKindSupportedChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsServiceKindSupportedChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsServiceKindSupportedChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsServiceKindSupportedChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsServiceKindSupportedChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServiceKind )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsServiceKindSupportedChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CChat_CRcsServiceKind * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIRcsServiceKindSupportedChangedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsServiceKindSupportedChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsServiceKindSupportedChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServiceKind(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIRcsServiceKindSupportedChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IRcsTransport[] = L"Windows.ApplicationModel.Chat.IRcsTransport";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedProperties )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsActive )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransportFriendlyName )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransportId )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfiguration * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsStoreAndForwardEnabled )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * This,
                  __x_ABI_CWindows_CApplicationModel_CChat_CRcsServiceKind serviceKind,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsServiceKindSupported )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * This,
                  __x_ABI_CWindows_CApplicationModel_CChat_CRcsServiceKind serviceKind,
                           __RPC__out boolean * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ServiceKindSupportedChanged )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CChat__CRcsTransport_Windows__CApplicationModel__CChat__CRcsServiceKindSupportedChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ServiceKindSupportedChanged )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedProperties(This,value) )
    ( (This)->lpVtbl->get_IsActive(This,value) )
    ( (This)->lpVtbl->get_TransportFriendlyName(This,value) )
    ( (This)->lpVtbl->get_TransportId(This,value) )
    ( (This)->lpVtbl->get_Configuration(This,result) )
    ( (This)->lpVtbl->IsStoreAndForwardEnabled(This,serviceKind,result) )
    ( (This)->lpVtbl->IsServiceKindSupported(This,serviceKind,result) )
    ( (This)->lpVtbl->add_ServiceKindSupportedChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ServiceKindSupportedChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IRcsTransportConfiguration[] = L"Windows.ApplicationModel.Chat.IRcsTransportConfiguration";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxAttachmentCount )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfiguration * This,
                           __RPC__out INT32 * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxMessageSizeInKilobytes )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfiguration * This,
                           __RPC__out INT32 * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxGroupMessageSizeInKilobytes )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfiguration * This,
                           __RPC__out INT32 * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxRecipientCount )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfiguration * This,
                           __RPC__out INT32 * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxFileSizeInKilobytes )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfiguration * This,
                           __RPC__out INT32 * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WarningFileSizeInKilobytes )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfiguration * This,
                           __RPC__out INT32 * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfigurationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxAttachmentCount(This,result) )
    ( (This)->lpVtbl->get_MaxMessageSizeInKilobytes(This,result) )
    ( (This)->lpVtbl->get_MaxGroupMessageSizeInKilobytes(This,result) )
    ( (This)->lpVtbl->get_MaxRecipientCount(This,result) )
    ( (This)->lpVtbl->get_MaxFileSizeInKilobytes(This,result) )
    ( (This)->lpVtbl->get_WarningFileSizeInKilobytes(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIRcsTransportConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Chat_IRemoteParticipantComposingChangedEventArgs[] = L"Windows.ApplicationModel.Chat.IRemoteParticipantComposingChangedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CChat_CIRemoteParticipantComposingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRemoteParticipantComposingChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRemoteParticipantComposingChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRemoteParticipantComposingChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRemoteParticipantComposingChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRemoteParticipantComposingChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CChat_CIRemoteParticipantComposingChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TransportId )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRemoteParticipantComposingChangedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ParticipantAddress )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRemoteParticipantComposingChangedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsComposing )(
        __x_ABI_CWindows_CApplicationModel_CChat_CIRemoteParticipantComposingChangedEventArgs * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CChat_CIRemoteParticipantComposingChangedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CChat_CIRemoteParticipantComposingChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CChat_CIRemoteParticipantComposingChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TransportId(This,result) )
    ( (This)->lpVtbl->get_ParticipantAddress(This,result) )
    ( (This)->lpVtbl->get_IsComposing(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CChat_CIRemoteParticipantComposingChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatCapabilities[] = L"Windows.ApplicationModel.Chat.ChatCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatCapabilitiesManager[] = L"Windows.ApplicationModel.Chat.ChatCapabilitiesManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatConversation[] = L"Windows.ApplicationModel.Chat.ChatConversation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatConversationReader[] = L"Windows.ApplicationModel.Chat.ChatConversationReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatConversationThreadingInfo[] = L"Windows.ApplicationModel.Chat.ChatConversationThreadingInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatMessage[] = L"Windows.ApplicationModel.Chat.ChatMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatMessageAttachment[] = L"Windows.ApplicationModel.Chat.ChatMessageAttachment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatMessageBlocking[] = L"Windows.ApplicationModel.Chat.ChatMessageBlocking";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatMessageChange[] = L"Windows.ApplicationModel.Chat.ChatMessageChange";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatMessageChangeReader[] = L"Windows.ApplicationModel.Chat.ChatMessageChangeReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatMessageChangeTracker[] = L"Windows.ApplicationModel.Chat.ChatMessageChangeTracker";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatMessageChangedDeferral[] = L"Windows.ApplicationModel.Chat.ChatMessageChangedDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatMessageChangedEventArgs[] = L"Windows.ApplicationModel.Chat.ChatMessageChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatMessageManager[] = L"Windows.ApplicationModel.Chat.ChatMessageManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatMessageNotificationTriggerDetails[] = L"Windows.ApplicationModel.Chat.ChatMessageNotificationTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatMessageReader[] = L"Windows.ApplicationModel.Chat.ChatMessageReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatMessageStore[] = L"Windows.ApplicationModel.Chat.ChatMessageStore";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatMessageStoreChangedEventArgs[] = L"Windows.ApplicationModel.Chat.ChatMessageStoreChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatMessageTransport[] = L"Windows.ApplicationModel.Chat.ChatMessageTransport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatMessageTransportConfiguration[] = L"Windows.ApplicationModel.Chat.ChatMessageTransportConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatMessageValidationResult[] = L"Windows.ApplicationModel.Chat.ChatMessageValidationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatQueryOptions[] = L"Windows.ApplicationModel.Chat.ChatQueryOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatRecipientDeliveryInfo[] = L"Windows.ApplicationModel.Chat.ChatRecipientDeliveryInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatSearchReader[] = L"Windows.ApplicationModel.Chat.ChatSearchReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatSyncConfiguration[] = L"Windows.ApplicationModel.Chat.ChatSyncConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_ChatSyncManager[] = L"Windows.ApplicationModel.Chat.ChatSyncManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_RcsEndUserMessage[] = L"Windows.ApplicationModel.Chat.RcsEndUserMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_RcsEndUserMessageAction[] = L"Windows.ApplicationModel.Chat.RcsEndUserMessageAction";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_RcsEndUserMessageAvailableEventArgs[] = L"Windows.ApplicationModel.Chat.RcsEndUserMessageAvailableEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_RcsEndUserMessageAvailableTriggerDetails[] = L"Windows.ApplicationModel.Chat.RcsEndUserMessageAvailableTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_RcsEndUserMessageManager[] = L"Windows.ApplicationModel.Chat.RcsEndUserMessageManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_RcsManager[] = L"Windows.ApplicationModel.Chat.RcsManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_RcsServiceKindSupportedChangedEventArgs[] = L"Windows.ApplicationModel.Chat.RcsServiceKindSupportedChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_RcsTransport[] = L"Windows.ApplicationModel.Chat.RcsTransport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_RcsTransportConfiguration[] = L"Windows.ApplicationModel.Chat.RcsTransportConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Chat_RemoteParticipantComposingChangedEventArgs[] = L"Windows.ApplicationModel.Chat.RemoteParticipantComposingChangedEventArgs";
       
       
#pragma clang diagnostic pop
