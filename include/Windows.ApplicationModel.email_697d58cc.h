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
#include "Windows.ApplicationModel.Appointments.h"
#include "Windows.Security.Cryptography.Certificates.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory2 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory2;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationBatch __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationBatch;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReader __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReader;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfoFactory __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfoFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplateFactory __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplateFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCounts __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCounts;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox2 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox2;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox4 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox4;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox5 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox5;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReply __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReply;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeReader __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeReader;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTracker __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTracker;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedDeferral __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedDeferral;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedEventArgs __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCreateFolderResult __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCreateFolderResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies2 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies2;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager2 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager2;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerForUser __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerForUser;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics2 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics2;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics3 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics3;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo2 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo2;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage3 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage3;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage4 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage4;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageBatch __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageBatch;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReader __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReader;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsFactory __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearch __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearch;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientFactory __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult2 __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult2;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore;
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStoreNotificationTriggerDetails __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStoreNotificationTriggerDetails;
typedef interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachment __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachment;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachment;
typedef struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachmentVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachment
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachmentVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailAttachment __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailAttachment;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailAttachment;
typedef struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailAttachmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailAttachment **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailAttachmentVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailAttachment
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailAttachmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailCertificateValidationStatus;
typedef interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus;
typedef struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailCertificateValidationStatus *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailCertificateValidationStatus *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus;
typedef struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversation __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversation;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversation;
typedef struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversation * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversationVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversation
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailConversation __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailConversation;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailConversation;
typedef struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailConversationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailConversation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailConversation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailConversation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailConversation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailConversation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailConversation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailConversation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailConversation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailConversationVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailConversation
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailConversationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolder __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolder;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolder;
typedef struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolder
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailFolder __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailFolder;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailFolder;
typedef struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailFolder **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailFolder
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
typedef struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
typedef struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction;
typedef struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxActionVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxActionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction;
typedef struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxActionVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxActionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange;
typedef struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChangeVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChangeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange;
typedef struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxChangeVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxChangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessage __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessage;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessage;
typedef struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessage
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMessage __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMessage;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMessage;
typedef struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMessage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMessage **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMessage
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient;
typedef struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient;
typedef struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult;
typedef struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult;
typedef struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachment __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachment;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachment;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                       __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachmentVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachmentVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailCertificateValidationStatus *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
                       enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailCertificateValidationStatus item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailCertificateValidationStatus *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversation __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversation;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversation * This,
                       __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversationVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                       __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                       __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                       __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxActionVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxActionVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This,
                       __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChangeVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChangeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                       __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                       __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
                       __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment;
typedef struct __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailAttachment **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachmentVtbl;
interface __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachmentVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction;
typedef struct __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxActionVtbl;
interface __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxActionVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient;
typedef struct __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl;
interface __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversation __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversation;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversation * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversationVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversationBatchVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversationBatchVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversationBatchVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatchVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationBatch * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatchVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatchVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailFolder __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailFolder;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailFolder;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailFolder * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailFolder
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailFolder *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailFolder **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailItemCounts __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailItemCounts;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailItemCounts;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCounts __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCounts;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailItemCountsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailItemCounts * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailItemCounts * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailItemCounts * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailItemCounts * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCounts *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailItemCountsVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailItemCounts
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailItemCountsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCounts __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCounts;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCounts;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCountsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCounts * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCounts * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCounts * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCounts * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCounts * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCounts * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCounts * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailItemCounts *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCounts * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailItemCounts **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCounts * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCounts * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCountsVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCounts
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCountsVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailbox __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailbox
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailbox *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailbox **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettingsVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettingsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettingsVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettingsVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCreateFolderResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResultVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxDeleteFolderStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxDeleteFolderStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatusVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatusVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxEmptyFolderStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxEmptyFolderStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatusVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessage __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessage;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessage;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessage * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessage
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessage *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessage **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessageBatchVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessageBatchVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessageBatchVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatchVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageBatch * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatchVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatchVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailStore __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailStore;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailStore;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailStore * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailStore * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailStoreVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailStore
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailStoreVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailStore *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CEmail__CEmailStore **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStoreVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStoreVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolderVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChangeVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChangeVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChangeVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessageVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxSmimeEncryptionAlgorithm;
typedef interface __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeEncryptionAlgorithm __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeEncryptionAlgorithm;
EXTERN_C const IID IID___FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeEncryptionAlgorithm;
typedef struct __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeEncryptionAlgorithmVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeEncryptionAlgorithm * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeEncryptionAlgorithm * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeEncryptionAlgorithm * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeEncryptionAlgorithm * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeEncryptionAlgorithm * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeEncryptionAlgorithm * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeEncryptionAlgorithm * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxSmimeEncryptionAlgorithm *value);
    END_INTERFACE
} __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeEncryptionAlgorithmVtbl;
interface __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeEncryptionAlgorithm
{
    CONST_VTBL struct __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeEncryptionAlgorithmVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxSmimeSigningAlgorithm;
typedef interface __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeSigningAlgorithm __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeSigningAlgorithm;
EXTERN_C const IID IID___FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeSigningAlgorithm;
typedef struct __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeSigningAlgorithmVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeSigningAlgorithm * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeSigningAlgorithm * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeSigningAlgorithm * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeSigningAlgorithm * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeSigningAlgorithm * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeSigningAlgorithm * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeSigningAlgorithm * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxSmimeSigningAlgorithm *value);
    END_INTERFACE
} __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeSigningAlgorithmVtbl;
interface __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeSigningAlgorithm
{
    CONST_VTBL struct __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeSigningAlgorithmVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailbox_Windows__CApplicationModel__CEmail__CEmailMailboxChangedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailbox_Windows__CApplicationModel__CEmail__CEmailMailboxChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailbox_Windows__CApplicationModel__CEmail__CEmailMailboxChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailbox_Windows__CApplicationModel__CEmail__CEmailMailboxChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailbox_Windows__CApplicationModel__CEmail__CEmailMailboxChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailbox_Windows__CApplicationModel__CEmail__CEmailMailboxChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailbox_Windows__CApplicationModel__CEmail__CEmailMailboxChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailbox_Windows__CApplicationModel__CEmail__CEmailMailboxChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailbox_Windows__CApplicationModel__CEmail__CEmailMailboxChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailbox_Windows__CApplicationModel__CEmail__CEmailMailboxChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailbox_Windows__CApplicationModel__CEmail__CEmailMailboxChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailboxSyncManager_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailboxSyncManager_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailboxSyncManager_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailboxSyncManager_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailboxSyncManager_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailboxSyncManager_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailboxSyncManager_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailboxSyncManager_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailboxSyncManager_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailboxSyncManager_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailboxSyncManager_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate;
typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;
interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
typedef struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;
interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
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
typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                       __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;
interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailAttachmentDownloadState __x_ABI_CWindows_CApplicationModel_CEmail_CEmailAttachmentDownloadState;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailBatchStatus __x_ABI_CWindows_CApplicationModel_CEmail_CEmailBatchStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailCertificateValidationStatus __x_ABI_CWindows_CApplicationModel_CEmail_CEmailCertificateValidationStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailFlagState __x_ABI_CWindows_CApplicationModel_CEmail_CEmailFlagState;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailImportance __x_ABI_CWindows_CApplicationModel_CEmail_CEmailImportance;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxActionKind __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxActionKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxAutoReplyMessageResponseKind __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxAutoReplyMessageResponseKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxChangeType __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxChangeType;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxCreateFolderStatus __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxCreateFolderStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxDeleteFolderStatus __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxDeleteFolderStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxEmptyFolderStatus __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxEmptyFolderStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxOtherAppReadAccess __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxOtherAppReadAccess;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxOtherAppWriteAccess __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxOtherAppWriteAccess;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxSmimeEncryptionAlgorithm __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxSmimeEncryptionAlgorithm;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxSmimeSigningAlgorithm __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxSmimeSigningAlgorithm;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxSyncStatus __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxSyncStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMeetingResponseType __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMeetingResponseType;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageBodyKind __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageBodyKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageDownloadState __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageDownloadState;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageResponseKind __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageResponseKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageSmimeKind __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageSmimeKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQueryKind __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQueryKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySearchFields __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySearchFields;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySearchScope __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySearchScope;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySortDirection __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySortDirection;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySortProperty __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySortProperty;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailRecipientResolutionStatus __x_ABI_CWindows_CApplicationModel_CEmail_CEmailRecipientResolutionStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailSpecialFolderKind __x_ABI_CWindows_CApplicationModel_CEmail_CEmailSpecialFolderKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailStoreAccessType __x_ABI_CWindows_CApplicationModel_CEmail_CEmailStoreAccessType;
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailAttachmentDownloadState
{
    EmailAttachmentDownloadState_NotDownloaded = 0,
    EmailAttachmentDownloadState_Downloading = 1,
    EmailAttachmentDownloadState_Downloaded = 2,
    EmailAttachmentDownloadState_Failed = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailBatchStatus
{
    EmailBatchStatus_Success = 0,
    EmailBatchStatus_ServerSearchSyncManagerError = 1,
    EmailBatchStatus_ServerSearchUnknownError = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailCertificateValidationStatus
{
    EmailCertificateValidationStatus_Success = 0,
    EmailCertificateValidationStatus_NoMatch = 1,
    EmailCertificateValidationStatus_InvalidUsage = 2,
    EmailCertificateValidationStatus_InvalidCertificate = 3,
    EmailCertificateValidationStatus_Revoked = 4,
    EmailCertificateValidationStatus_ChainRevoked = 5,
    EmailCertificateValidationStatus_RevocationServerFailure = 6,
    EmailCertificateValidationStatus_Expired = 7,
    EmailCertificateValidationStatus_Untrusted = 8,
    EmailCertificateValidationStatus_ServerError = 9,
    EmailCertificateValidationStatus_UnknownFailure = 10,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailFlagState
{
    EmailFlagState_Unflagged = 0,
    EmailFlagState_Flagged = 1,
    EmailFlagState_Completed = 2,
    EmailFlagState_Cleared = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailImportance
{
    EmailImportance_Normal = 0,
    EmailImportance_High = 1,
    EmailImportance_Low = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxActionKind
{
    EmailMailboxActionKind_MarkMessageAsSeen = 0,
    EmailMailboxActionKind_MarkMessageRead = 1,
    EmailMailboxActionKind_ChangeMessageFlagState = 2,
    EmailMailboxActionKind_MoveMessage = 3,
    EmailMailboxActionKind_SaveDraft = 4,
    EmailMailboxActionKind_SendMessage = 5,
    EmailMailboxActionKind_CreateResponseReplyMessage = 6,
    EmailMailboxActionKind_CreateResponseReplyAllMessage = 7,
    EmailMailboxActionKind_CreateResponseForwardMessage = 8,
    EmailMailboxActionKind_MoveFolder = 9,
    EmailMailboxActionKind_MarkFolderForSyncEnabled = 10,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation
{
    EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation_None = 0,
    EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation_StrongAlgorithm = 1,
    EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation_AnyAlgorithm = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxAutoReplyMessageResponseKind
{
    EmailMailboxAutoReplyMessageResponseKind_Html = 0,
    EmailMailboxAutoReplyMessageResponseKind_PlainText = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxChangeType
{
    EmailMailboxChangeType_MessageCreated = 0,
    EmailMailboxChangeType_MessageModified = 1,
    EmailMailboxChangeType_MessageDeleted = 2,
    EmailMailboxChangeType_FolderCreated = 3,
    EmailMailboxChangeType_FolderModified = 4,
    EmailMailboxChangeType_FolderDeleted = 5,
    EmailMailboxChangeType_ChangeTrackingLost = 6,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxCreateFolderStatus
{
    EmailMailboxCreateFolderStatus_Success = 0,
    EmailMailboxCreateFolderStatus_NetworkError = 1,
    EmailMailboxCreateFolderStatus_PermissionsError = 2,
    EmailMailboxCreateFolderStatus_ServerError = 3,
    EmailMailboxCreateFolderStatus_UnknownFailure = 4,
    EmailMailboxCreateFolderStatus_NameCollision = 5,
    EmailMailboxCreateFolderStatus_ServerRejected = 6,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxDeleteFolderStatus
{
    EmailMailboxDeleteFolderStatus_Success = 0,
    EmailMailboxDeleteFolderStatus_NetworkError = 1,
    EmailMailboxDeleteFolderStatus_PermissionsError = 2,
    EmailMailboxDeleteFolderStatus_ServerError = 3,
    EmailMailboxDeleteFolderStatus_UnknownFailure = 4,
    EmailMailboxDeleteFolderStatus_CouldNotDeleteEverything = 5,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxEmptyFolderStatus
{
    EmailMailboxEmptyFolderStatus_Success = 0,
    EmailMailboxEmptyFolderStatus_NetworkError = 1,
    EmailMailboxEmptyFolderStatus_PermissionsError = 2,
    EmailMailboxEmptyFolderStatus_ServerError = 3,
    EmailMailboxEmptyFolderStatus_UnknownFailure = 4,
    EmailMailboxEmptyFolderStatus_CouldNotDeleteEverything = 5,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxOtherAppReadAccess
{
    EmailMailboxOtherAppReadAccess_SystemOnly = 0,
    EmailMailboxOtherAppReadAccess_Full = 1,
    EmailMailboxOtherAppReadAccess_None = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxOtherAppWriteAccess
{
    EmailMailboxOtherAppWriteAccess_None = 0,
    EmailMailboxOtherAppWriteAccess_Limited = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxSmimeEncryptionAlgorithm
{
    EmailMailboxSmimeEncryptionAlgorithm_Any = 0,
    EmailMailboxSmimeEncryptionAlgorithm_TripleDes = 1,
    EmailMailboxSmimeEncryptionAlgorithm_Des = 2,
    EmailMailboxSmimeEncryptionAlgorithm_RC2128Bit = 3,
    EmailMailboxSmimeEncryptionAlgorithm_RC264Bit = 4,
    EmailMailboxSmimeEncryptionAlgorithm_RC240Bit = 5,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxSmimeSigningAlgorithm
{
    EmailMailboxSmimeSigningAlgorithm_Any = 0,
    EmailMailboxSmimeSigningAlgorithm_Sha1 = 1,
    EmailMailboxSmimeSigningAlgorithm_MD5 = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxSyncStatus
{
    EmailMailboxSyncStatus_Idle = 0,
    EmailMailboxSyncStatus_Syncing = 1,
    EmailMailboxSyncStatus_UpToDate = 2,
    EmailMailboxSyncStatus_AuthenticationError = 3,
    EmailMailboxSyncStatus_PolicyError = 4,
    EmailMailboxSyncStatus_UnknownError = 5,
    EmailMailboxSyncStatus_ManualAccountRemovalRequired = 6,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMeetingResponseType
{
    EmailMeetingResponseType_Accept = 0,
    EmailMeetingResponseType_Decline = 1,
    EmailMeetingResponseType_Tentative = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageBodyKind
{
    EmailMessageBodyKind_Html = 0,
    EmailMessageBodyKind_PlainText = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageDownloadState
{
    EmailMessageDownloadState_PartiallyDownloaded = 0,
    EmailMessageDownloadState_Downloading = 1,
    EmailMessageDownloadState_Downloaded = 2,
    EmailMessageDownloadState_Failed = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageResponseKind
{
    EmailMessageResponseKind_None = 0,
    EmailMessageResponseKind_Reply = 1,
    EmailMessageResponseKind_ReplyAll = 2,
    EmailMessageResponseKind_Forward = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageSmimeKind
{
    EmailMessageSmimeKind_None = 0,
    EmailMessageSmimeKind_ClearSigned = 1,
    EmailMessageSmimeKind_OpaqueSigned = 2,
    EmailMessageSmimeKind_Encrypted = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQueryKind
{
    EmailQueryKind_All = 0,
    EmailQueryKind_Important = 1,
    EmailQueryKind_Flagged = 2,
    EmailQueryKind_Unread = 3,
    EmailQueryKind_Read = 4,
    EmailQueryKind_Unseen = 5,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySearchFields
{
    EmailQuerySearchFields_None = 0,
    EmailQuerySearchFields_Subject = 0x1,
    EmailQuerySearchFields_Sender = 0x2,
    EmailQuerySearchFields_Preview = 0x4,
    EmailQuerySearchFields_Recipients = 0x8,
    EmailQuerySearchFields_All = 0xffffffff,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySearchScope
{
    EmailQuerySearchScope_Local = 0,
    EmailQuerySearchScope_Server = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySortDirection
{
    EmailQuerySortDirection_Descending = 0,
    EmailQuerySortDirection_Ascending = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySortProperty
{
    EmailQuerySortProperty_Date = 0,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailRecipientResolutionStatus
{
    EmailRecipientResolutionStatus_Success = 0,
    EmailRecipientResolutionStatus_RecipientNotFound = 1,
    EmailRecipientResolutionStatus_AmbiguousRecipient = 2,
    EmailRecipientResolutionStatus_NoCertificate = 3,
    EmailRecipientResolutionStatus_CertificateRequestLimitReached = 4,
    EmailRecipientResolutionStatus_CannotResolveDistributionList = 5,
    EmailRecipientResolutionStatus_ServerError = 6,
    EmailRecipientResolutionStatus_UnknownFailure = 7,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailSpecialFolderKind
{
    EmailSpecialFolderKind_None = 0,
    EmailSpecialFolderKind_Root = 1,
    EmailSpecialFolderKind_Inbox = 2,
    EmailSpecialFolderKind_Outbox = 3,
    EmailSpecialFolderKind_Drafts = 4,
    EmailSpecialFolderKind_DeletedItems = 5,
    EmailSpecialFolderKind_Sent = 6,
};
enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailStoreAccessType
{
    EmailStoreAccessType_AppMailboxesReadWrite = 0,
    EmailStoreAccessType_AllMailboxesLimitedReadWrite = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailAttachment[] = L"Windows.ApplicationModel.Email.IEmailAttachment";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FileName )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FileName )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FileName(This,value) )
    ( (This)->lpVtbl->put_FileName(This,value) )
    ( (This)->lpVtbl->get_Data(This,value) )
    ( (This)->lpVtbl->put_Data(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailAttachment2[] = L"Windows.ApplicationModel.Email.IEmailAttachment2";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentLocation )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentLocation )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DownloadState )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailAttachmentDownloadState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DownloadState )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailAttachmentDownloadState value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EstimatedDownloadSizeInBytes )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EstimatedDownloadSizeInBytes )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
                  UINT64 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsFromBaseMessage )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInline )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsInline )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MimeType )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MimeType )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_ContentId(This,value) )
    ( (This)->lpVtbl->put_ContentId(This,value) )
    ( (This)->lpVtbl->get_ContentLocation(This,value) )
    ( (This)->lpVtbl->put_ContentLocation(This,value) )
    ( (This)->lpVtbl->get_DownloadState(This,value) )
    ( (This)->lpVtbl->put_DownloadState(This,value) )
    ( (This)->lpVtbl->get_EstimatedDownloadSizeInBytes(This,value) )
    ( (This)->lpVtbl->put_EstimatedDownloadSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_IsFromBaseMessage(This,value) )
    ( (This)->lpVtbl->get_IsInline(This,value) )
    ( (This)->lpVtbl->put_IsInline(This,value) )
    ( (This)->lpVtbl->get_MimeType(This,value) )
    ( (This)->lpVtbl->put_MimeType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailAttachmentFactory[] = L"Windows.ApplicationModel.Email.IEmailAttachmentFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory * This,
                  __RPC__in HSTRING fileName,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,fileName,data,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailAttachmentFactory2[] = L"Windows.ApplicationModel.Email.IEmailAttachmentFactory2";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory2 * This,
                  __RPC__in HSTRING fileName,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * data,
                  __RPC__in HSTRING mimeType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachment * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,fileName,data,mimeType,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailAttachmentFactory2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailConversation[] = L"Windows.ApplicationModel.Email.IEmailConversation";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FlagState )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailFlagState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasAttachment )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Importance )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailImportance * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastEmailResponseKind )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageResponseKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MessageCount )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MostRecentMessageId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MostRecentMessageTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Preview )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LatestSender )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UnreadMessageCount )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *FindMessagesAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindMessagesWithCountAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation * This,
                  UINT32 count,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_MailboxId(This,value) )
    ( (This)->lpVtbl->get_FlagState(This,value) )
    ( (This)->lpVtbl->get_HasAttachment(This,value) )
    ( (This)->lpVtbl->get_Importance(This,value) )
    ( (This)->lpVtbl->get_LastEmailResponseKind(This,value) )
    ( (This)->lpVtbl->get_MessageCount(This,value) )
    ( (This)->lpVtbl->get_MostRecentMessageId(This,value) )
    ( (This)->lpVtbl->get_MostRecentMessageTime(This,value) )
    ( (This)->lpVtbl->get_Preview(This,value) )
    ( (This)->lpVtbl->get_LatestSender(This,value) )
    ( (This)->lpVtbl->get_Subject(This,value) )
    ( (This)->lpVtbl->get_UnreadMessageCount(This,value) )
    ( (This)->lpVtbl->FindMessagesAsync(This,result) )
    ( (This)->lpVtbl->FindMessagesWithCountAsync(This,count,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailConversationBatch[] = L"Windows.ApplicationModel.Email.IEmailConversationBatch";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationBatchVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationBatch * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationBatch * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationBatch * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationBatch * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationBatch * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationBatch * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Conversations )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationBatch * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailConversation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationBatch * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailBatchStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationBatchVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationBatch
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationBatchVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Conversations(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationBatch;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailConversationReader[] = L"Windows.ApplicationModel.Email.IEmailConversationReader";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReadBatchAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversationBatch * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReaderVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReader
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReadBatchAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailFolder[] = L"Windows.ApplicationModel.Email.IEmailFolder";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ParentFolderId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSyncEnabled )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsSyncEnabled )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastSuccessfulSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LastSuccessfulSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailSpecialFolderKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFolderAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindChildFoldersAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailFolder * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetConversationReader )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReader * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetConversationReaderWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReader * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetMessageReader )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReader * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetMessageReaderWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReader * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetMessageCountsAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailItemCounts * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *TryMoveAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * newParentFolder,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *TryMoveWithNewNameAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * newParentFolder,
                  __RPC__in HSTRING newFolderName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TrySaveAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SaveMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * message,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolderVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_RemoteId(This,value) )
    ( (This)->lpVtbl->put_RemoteId(This,value) )
    ( (This)->lpVtbl->get_MailboxId(This,value) )
    ( (This)->lpVtbl->get_ParentFolderId(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->put_DisplayName(This,value) )
    ( (This)->lpVtbl->get_IsSyncEnabled(This,value) )
    ( (This)->lpVtbl->put_IsSyncEnabled(This,value) )
    ( (This)->lpVtbl->get_LastSuccessfulSyncTime(This,value) )
    ( (This)->lpVtbl->put_LastSuccessfulSyncTime(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->CreateFolderAsync(This,name,result) )
    ( (This)->lpVtbl->DeleteAsync(This,result) )
    ( (This)->lpVtbl->FindChildFoldersAsync(This,result) )
    ( (This)->lpVtbl->GetConversationReader(This,result) )
    ( (This)->lpVtbl->GetConversationReaderWithOptions(This,options,result) )
    ( (This)->lpVtbl->GetMessageAsync(This,id,result) )
    ( (This)->lpVtbl->GetMessageReader(This,result) )
    ( (This)->lpVtbl->GetMessageReaderWithOptions(This,options,result) )
    ( (This)->lpVtbl->GetMessageCountsAsync(This,result) )
    ( (This)->lpVtbl->TryMoveAsync(This,newParentFolder,result) )
    ( (This)->lpVtbl->TryMoveWithNewNameAsync(This,newParentFolder,newFolderName,result) )
    ( (This)->lpVtbl->TrySaveAsync(This,result) )
    ( (This)->lpVtbl->SaveMessageAsync(This,message,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailIrmInfo[] = L"Windows.ApplicationModel.Email.IEmailIrmInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanEdit )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanEdit )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanExtractData )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanExtractData )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanForward )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanForward )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanModifyRecipientsOnResponse )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanModifyRecipientsOnResponse )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanPrintData )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanPrintData )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanRemoveIrmOnResponse )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanRemoveIrmOnResponse )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanReply )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanReply )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanReplyAll )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanReplyAll )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExpirationDate )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsIrmOriginator )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsIrmOriginator )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsProgramaticAccessAllowed )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsProgramaticAccessAllowed )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Template )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Template )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanEdit(This,value) )
    ( (This)->lpVtbl->put_CanEdit(This,value) )
    ( (This)->lpVtbl->get_CanExtractData(This,value) )
    ( (This)->lpVtbl->put_CanExtractData(This,value) )
    ( (This)->lpVtbl->get_CanForward(This,value) )
    ( (This)->lpVtbl->put_CanForward(This,value) )
    ( (This)->lpVtbl->get_CanModifyRecipientsOnResponse(This,value) )
    ( (This)->lpVtbl->put_CanModifyRecipientsOnResponse(This,value) )
    ( (This)->lpVtbl->get_CanPrintData(This,value) )
    ( (This)->lpVtbl->put_CanPrintData(This,value) )
    ( (This)->lpVtbl->get_CanRemoveIrmOnResponse(This,value) )
    ( (This)->lpVtbl->put_CanRemoveIrmOnResponse(This,value) )
    ( (This)->lpVtbl->get_CanReply(This,value) )
    ( (This)->lpVtbl->put_CanReply(This,value) )
    ( (This)->lpVtbl->get_CanReplyAll(This,value) )
    ( (This)->lpVtbl->put_CanReplyAll(This,value) )
    ( (This)->lpVtbl->get_ExpirationDate(This,value) )
    ( (This)->lpVtbl->put_ExpirationDate(This,value) )
    ( (This)->lpVtbl->get_IsIrmOriginator(This,value) )
    ( (This)->lpVtbl->put_IsIrmOriginator(This,value) )
    ( (This)->lpVtbl->get_IsProgramaticAccessAllowed(This,value) )
    ( (This)->lpVtbl->put_IsProgramaticAccessAllowed(This,value) )
    ( (This)->lpVtbl->get_Template(This,value) )
    ( (This)->lpVtbl->put_Template(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailIrmInfoFactory[] = L"Windows.ApplicationModel.Email.IEmailIrmInfoFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfoFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfoFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfoFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfoFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfoFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfoFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfoFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfoFactory * This,
                  __x_ABI_CWindows_CFoundation_CDateTime expiration,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate * irmTemplate,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfoFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfoFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,expiration,irmTemplate,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfoFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailIrmTemplate[] = L"Windows.ApplicationModel.Email.IEmailIrmTemplate";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplateVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->put_Id(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailIrmTemplateFactory[] = L"Windows.ApplicationModel.Email.IEmailIrmTemplateFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplateFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplateFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplateFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplateFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplateFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplateFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplateFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplateFactory * This,
                  __RPC__in HSTRING id,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING description,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplate * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplateFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplateFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplateFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,id,name,description,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmTemplateFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailItemCounts[] = L"Windows.ApplicationModel.Email.IEmailItemCounts";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCountsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCounts * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCounts * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCounts * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCounts * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCounts * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCounts * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Flagged )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCounts * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Important )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCounts * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Total )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCounts * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Unread )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCounts * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCountsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCounts
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCountsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Flagged(This,value) )
    ( (This)->lpVtbl->get_Important(This,value) )
    ( (This)->lpVtbl->get_Total(This,value) )
    ( (This)->lpVtbl->get_Unread(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailItemCounts;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailbox[] = L"Windows.ApplicationModel.Email.IEmailMailbox";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChangeTracker )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTracker * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOwnedByCurrentApp )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDataEncryptedUnderLock )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MailAddress )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MailAddress )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MailAddressAliases )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OtherAppReadAccess )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxOtherAppReadAccess * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OtherAppReadAccess )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxOtherAppReadAccess value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OtherAppWriteAccess )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxOtherAppWriteAccess * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OtherAppWriteAccess )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxOtherAppWriteAccess value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Policies )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceDisplayName )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SyncManager )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserDataAccountId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetConversationReader )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReader * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetConversationReaderWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReader * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetMessageReader )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReader * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetMessageReaderWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReader * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetConversationAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetFolderAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetSpecialFolderAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailSpecialFolderKind folderType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *MarkMessageAsSeenAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in HSTRING messageId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *MarkFolderAsSeenAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in HSTRING folderId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *MarkMessageReadAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in HSTRING messageId,
                  boolean isRead,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ChangeMessageFlagStateAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in HSTRING messageId,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailFlagState flagState,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryMoveMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in HSTRING messageId,
                  __RPC__in HSTRING newParentFolderId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *TryMoveFolderAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in HSTRING folderId,
                  __RPC__in HSTRING newParentFolderId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *TryMoveFolderWithNewNameAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in HSTRING folderId,
                  __RPC__in HSTRING newParentFolderId,
                  __RPC__in HSTRING newFolderName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in HSTRING messageId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *MarkFolderSyncEnabledAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in HSTRING folderId,
                  boolean isSyncEnabled,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *SendMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * message,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SaveDraftAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * message,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DownloadMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in HSTRING messageId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DownloadAttachmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in HSTRING attachmentId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateResponseMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in HSTRING messageId,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageResponseKind responseType,
                  __RPC__in HSTRING subject,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageBodyKind responseHeaderType,
                  __RPC__in HSTRING responseHeader,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryUpdateMeetingResponseAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * meeting,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMeetingResponseType response,
                  __RPC__in HSTRING subject,
                  __RPC__in HSTRING comment,
                  boolean sendUpdate,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryForwardMeetingAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * meeting,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient * recipients,
                  __RPC__in HSTRING subject,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageBodyKind forwardHeaderType,
                  __RPC__in HSTRING forwardHeader,
                  __RPC__in HSTRING comment,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryProposeNewTimeForMeetingAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * meeting,
                  __x_ABI_CWindows_CFoundation_CDateTime newStartTime,
                  __x_ABI_CWindows_CFoundation_CTimeSpan newDuration,
                  __RPC__in HSTRING subject,
                  __RPC__in HSTRING comment,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MailboxChanged )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailbox_Windows__CApplicationModel__CEmail__CEmailMailboxChangedEventArgs * pHandler,
                           __RPC__out EventRegistrationToken * pToken
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MailboxChanged )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *SmartSendMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * message,
                  boolean smartSend,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetAutoReplySettingsAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * autoReplySettings,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetAutoReplySettingsAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxAutoReplyMessageResponseKind requestedFormat,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxAutoReplySettings * * autoReplySettings
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Capabilities(This,value) )
    ( (This)->lpVtbl->get_ChangeTracker(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->put_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_IsOwnedByCurrentApp(This,value) )
    ( (This)->lpVtbl->get_IsDataEncryptedUnderLock(This,value) )
    ( (This)->lpVtbl->get_MailAddress(This,value) )
    ( (This)->lpVtbl->put_MailAddress(This,value) )
    ( (This)->lpVtbl->get_MailAddressAliases(This,value) )
    ( (This)->lpVtbl->get_OtherAppReadAccess(This,value) )
    ( (This)->lpVtbl->put_OtherAppReadAccess(This,value) )
    ( (This)->lpVtbl->get_OtherAppWriteAccess(This,value) )
    ( (This)->lpVtbl->put_OtherAppWriteAccess(This,value) )
    ( (This)->lpVtbl->get_Policies(This,value) )
    ( (This)->lpVtbl->get_SourceDisplayName(This,value) )
    ( (This)->lpVtbl->get_SyncManager(This,value) )
    ( (This)->lpVtbl->get_UserDataAccountId(This,value) )
    ( (This)->lpVtbl->GetConversationReader(This,result) )
    ( (This)->lpVtbl->GetConversationReaderWithOptions(This,options,result) )
    ( (This)->lpVtbl->GetMessageReader(This,result) )
    ( (This)->lpVtbl->GetMessageReaderWithOptions(This,options,result) )
    ( (This)->lpVtbl->DeleteAsync(This,result) )
    ( (This)->lpVtbl->GetConversationAsync(This,id,result) )
    ( (This)->lpVtbl->GetFolderAsync(This,id,result) )
    ( (This)->lpVtbl->GetMessageAsync(This,id,result) )
    ( (This)->lpVtbl->GetSpecialFolderAsync(This,folderType,result) )
    ( (This)->lpVtbl->SaveAsync(This,result) )
    ( (This)->lpVtbl->MarkMessageAsSeenAsync(This,messageId,result) )
    ( (This)->lpVtbl->MarkFolderAsSeenAsync(This,folderId,result) )
    ( (This)->lpVtbl->MarkMessageReadAsync(This,messageId,isRead,result) )
    ( (This)->lpVtbl->ChangeMessageFlagStateAsync(This,messageId,flagState,result) )
    ( (This)->lpVtbl->TryMoveMessageAsync(This,messageId,newParentFolderId,result) )
    ( (This)->lpVtbl->TryMoveFolderAsync(This,folderId,newParentFolderId,result) )
    ( (This)->lpVtbl->TryMoveFolderWithNewNameAsync(This,folderId,newParentFolderId,newFolderName,result) )
    ( (This)->lpVtbl->DeleteMessageAsync(This,messageId,result) )
    ( (This)->lpVtbl->MarkFolderSyncEnabledAsync(This,folderId,isSyncEnabled,result) )
    ( (This)->lpVtbl->SendMessageAsync(This,message,result) )
    ( (This)->lpVtbl->SaveDraftAsync(This,message,result) )
    ( (This)->lpVtbl->DownloadMessageAsync(This,messageId,result) )
    ( (This)->lpVtbl->DownloadAttachmentAsync(This,attachmentId,result) )
    ( (This)->lpVtbl->CreateResponseMessageAsync(This,messageId,responseType,subject,responseHeaderType,responseHeader,result) )
    ( (This)->lpVtbl->TryUpdateMeetingResponseAsync(This,meeting,response,subject,comment,sendUpdate,result) )
    ( (This)->lpVtbl->TryForwardMeetingAsync(This,meeting,recipients,subject,forwardHeaderType,forwardHeader,comment,result) )
    ( (This)->lpVtbl->TryProposeNewTimeForMeetingAsync(This,meeting,newStartTime,newDuration,subject,comment,result) )
    ( (This)->lpVtbl->add_MailboxChanged(This,pHandler,pToken) )
    ( (This)->lpVtbl->remove_MailboxChanged(This,token) )
    ( (This)->lpVtbl->SmartSendMessageAsync(This,message,smartSend,result) )
    ( (This)->lpVtbl->TrySetAutoReplySettingsAsync(This,autoReplySettings,result) )
    ( (This)->lpVtbl->TryGetAutoReplySettingsAsync(This,requestedFormat,autoReplySettings) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailbox2[] = L"Windows.ApplicationModel.Email.IEmailMailbox2";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LinkedMailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkAccountId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LinkedMailboxId(This,value) )
    ( (This)->lpVtbl->get_NetworkAccountId(This,value) )
    ( (This)->lpVtbl->get_NetworkId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailbox3[] = L"Windows.ApplicationModel.Email.IEmailMailbox3";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ResolveRecipientsAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3 * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * recipients,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ValidateCertificatesAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * certificates,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryEmptyFolderAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3 * This,
                  __RPC__in HSTRING folderId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxEmptyFolderStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryCreateFolderAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3 * This,
                  __RPC__in HSTRING parentFolderId,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxCreateFolderResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryDeleteFolderAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3 * This,
                  __RPC__in HSTRING folderId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailboxDeleteFolderStatus * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ResolveRecipientsAsync(This,recipients,result) )
    ( (This)->lpVtbl->ValidateCertificatesAsync(This,certificates,result) )
    ( (This)->lpVtbl->TryEmptyFolderAsync(This,folderId,result) )
    ( (This)->lpVtbl->TryCreateFolderAsync(This,parentFolderId,name,result) )
    ( (This)->lpVtbl->TryDeleteFolderAsync(This,folderId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailbox4[] = L"Windows.ApplicationModel.Email.IEmailMailbox4";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RegisterSyncManagerAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox4Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox4
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RegisterSyncManagerAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailbox5[] = L"Windows.ApplicationModel.Email.IEmailMailbox5";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetChangeTracker )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox5 * This,
                  __RPC__in HSTRING identity,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTracker * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox5Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox5
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetChangeTracker(This,identity,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailboxAction[] = L"Windows.ApplicationModel.Email.IEmailMailboxAction";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxActionKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChangeNumber )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxActionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxActionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_ChangeNumber(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailboxAutoReply[] = L"Windows.ApplicationModel.Email.IEmailMailboxAutoReply";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReply * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReply * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReply * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReply * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReply * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReply * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReply * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReply * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Response )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReply * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Response )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReply * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplyVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReply
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_Response(This,value) )
    ( (This)->lpVtbl->put_Response(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReply;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailboxAutoReplySettings[] = L"Windows.ApplicationModel.Email.IEmailMailboxAutoReplySettings";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResponseKind )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxAutoReplyMessageResponseKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ResponseKind )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxAutoReplyMessageResponseKind value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EndTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InternalReply )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReply * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KnownExternalReply )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReply * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UnknownExternalReply )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReply * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettingsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_ResponseKind(This,value) )
    ( (This)->lpVtbl->put_ResponseKind(This,value) )
    ( (This)->lpVtbl->get_StartTime(This,value) )
    ( (This)->lpVtbl->put_StartTime(This,value) )
    ( (This)->lpVtbl->get_EndTime(This,value) )
    ( (This)->lpVtbl->put_EndTime(This,value) )
    ( (This)->lpVtbl->get_InternalReply(This,value) )
    ( (This)->lpVtbl->get_KnownExternalReply(This,value) )
    ( (This)->lpVtbl->get_UnknownExternalReply(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailboxCapabilities[] = L"Windows.ApplicationModel.Email.IEmailMailboxCapabilities";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanForwardMeetings )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanGetAndSetExternalAutoReplies )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanGetAndSetInternalAutoReplies )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanUpdateMeetingResponses )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanServerSearchFolders )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanServerSearchMailbox )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanProposeNewTimeForMeetings )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanSmartSend )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilitiesVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanForwardMeetings(This,value) )
    ( (This)->lpVtbl->get_CanGetAndSetExternalAutoReplies(This,value) )
    ( (This)->lpVtbl->get_CanGetAndSetInternalAutoReplies(This,value) )
    ( (This)->lpVtbl->get_CanUpdateMeetingResponses(This,value) )
    ( (This)->lpVtbl->get_CanServerSearchFolders(This,value) )
    ( (This)->lpVtbl->get_CanServerSearchMailbox(This,value) )
    ( (This)->lpVtbl->get_CanProposeNewTimeForMeetings(This,value) )
    ( (This)->lpVtbl->get_CanSmartSend(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailboxCapabilities2[] = L"Windows.ApplicationModel.Email.IEmailMailboxCapabilities2";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanResolveRecipients )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanValidateCertificates )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanEmptyFolder )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanCreateFolder )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanDeleteFolder )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanMoveFolder )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanResolveRecipients(This,value) )
    ( (This)->lpVtbl->get_CanValidateCertificates(This,value) )
    ( (This)->lpVtbl->get_CanEmptyFolder(This,value) )
    ( (This)->lpVtbl->get_CanCreateFolder(This,value) )
    ( (This)->lpVtbl->get_CanDeleteFolder(This,value) )
    ( (This)->lpVtbl->get_CanMoveFolder(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3[] = L"Windows.ApplicationModel.Email.IEmailMailboxCapabilities3";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_CanForwardMeetings )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanGetAndSetExternalAutoReplies )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanGetAndSetInternalAutoReplies )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanUpdateMeetingResponses )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanServerSearchFolders )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanServerSearchMailbox )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanProposeNewTimeForMeetings )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanSmartSend )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanResolveRecipients )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanValidateCertificates )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanEmptyFolder )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanCreateFolder )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanDeleteFolder )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanMoveFolder )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_CanForwardMeetings(This,value) )
    ( (This)->lpVtbl->put_CanGetAndSetExternalAutoReplies(This,value) )
    ( (This)->lpVtbl->put_CanGetAndSetInternalAutoReplies(This,value) )
    ( (This)->lpVtbl->put_CanUpdateMeetingResponses(This,value) )
    ( (This)->lpVtbl->put_CanServerSearchFolders(This,value) )
    ( (This)->lpVtbl->put_CanServerSearchMailbox(This,value) )
    ( (This)->lpVtbl->put_CanProposeNewTimeForMeetings(This,value) )
    ( (This)->lpVtbl->put_CanSmartSend(This,value) )
    ( (This)->lpVtbl->put_CanResolveRecipients(This,value) )
    ( (This)->lpVtbl->put_CanValidateCertificates(This,value) )
    ( (This)->lpVtbl->put_CanEmptyFolder(This,value) )
    ( (This)->lpVtbl->put_CanCreateFolder(This,value) )
    ( (This)->lpVtbl->put_CanDeleteFolder(This,value) )
    ( (This)->lpVtbl->put_CanMoveFolder(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCapabilities3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailboxChange[] = L"Windows.ApplicationModel.Email.IEmailMailboxChange";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChangeType )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxChangeType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MailboxActions )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CEmail__CEmailMailboxAction * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Folder )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChangeType(This,value) )
    ( (This)->lpVtbl->get_MailboxActions(This,value) )
    ( (This)->lpVtbl->get_Message(This,value) )
    ( (This)->lpVtbl->get_Folder(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailboxChangeReader[] = L"Windows.ApplicationModel.Email.IEmailMailboxChangeReader";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AcceptChanges )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeReader * This
        );
    HRESULT ( STDMETHODCALLTYPE *AcceptChangesThrough )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeReader * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChange * lastChangeToAcknowledge
        );
    HRESULT ( STDMETHODCALLTYPE *ReadBatchAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxChange * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeReaderVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeReader
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeReaderVtbl *lpVtbl;
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
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailboxChangeTracker[] = L"Windows.ApplicationModel.Email.IEmailMailboxChangeTracker";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTrackerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTracker * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTracker * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTracker * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTracker * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTracker * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTracker * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsTracking )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTracker * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Enable )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTracker * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetChangeReader )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTracker * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeReader * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Reset )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTracker * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTrackerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTracker
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTrackerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsTracking(This,value) )
    ( (This)->lpVtbl->Enable(This) )
    ( (This)->lpVtbl->GetChangeReader(This,value) )
    ( (This)->lpVtbl->Reset(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangeTracker;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailboxChangedDeferral[] = L"Windows.ApplicationModel.Email.IEmailMailboxChangedDeferral";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedDeferralVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailboxChangedEventArgs[] = L"Windows.ApplicationModel.Email.IEmailMailboxChangedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailboxCreateFolderResult[] = L"Windows.ApplicationModel.Email.IEmailMailboxCreateFolderResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCreateFolderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCreateFolderResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCreateFolderResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCreateFolderResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCreateFolderResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCreateFolderResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCreateFolderResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCreateFolderResult * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxCreateFolderStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Folder )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCreateFolderResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCreateFolderResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCreateFolderResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCreateFolderResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Folder(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxCreateFolderResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailboxPolicies[] = L"Windows.ApplicationModel.Email.IEmailMailboxPolicies";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPoliciesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllowedSmimeEncryptionAlgorithmNegotiation )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowSmimeSoftCertificates )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequiredSmimeEncryptionAlgorithm )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeEncryptionAlgorithm * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequiredSmimeSigningAlgorithm )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeSigningAlgorithm * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPoliciesVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPoliciesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllowedSmimeEncryptionAlgorithmNegotiation(This,value) )
    ( (This)->lpVtbl->get_AllowSmimeSoftCertificates(This,value) )
    ( (This)->lpVtbl->get_RequiredSmimeEncryptionAlgorithm(This,value) )
    ( (This)->lpVtbl->get_RequiredSmimeSigningAlgorithm(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailboxPolicies2[] = L"Windows.ApplicationModel.Email.IEmailMailboxPolicies2";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MustEncryptSmimeMessages )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MustSignSmimeMessages )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MustEncryptSmimeMessages(This,value) )
    ( (This)->lpVtbl->get_MustSignSmimeMessages(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailboxPolicies3[] = L"Windows.ApplicationModel.Email.IEmailMailboxPolicies3";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_AllowedSmimeEncryptionAlgorithmNegotiation )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3 * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowSmimeSoftCertificates )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RequiredSmimeEncryptionAlgorithm )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3 * This,
                  __RPC__in_opt __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeEncryptionAlgorithm * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RequiredSmimeSigningAlgorithm )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3 * This,
                  __RPC__in_opt __FIReference_1_Windows__CApplicationModel__CEmail__CEmailMailboxSmimeSigningAlgorithm * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MustEncryptSmimeMessages )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MustSignSmimeMessages )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_AllowedSmimeEncryptionAlgorithmNegotiation(This,value) )
    ( (This)->lpVtbl->put_AllowSmimeSoftCertificates(This,value) )
    ( (This)->lpVtbl->put_RequiredSmimeEncryptionAlgorithm(This,value) )
    ( (This)->lpVtbl->put_RequiredSmimeSigningAlgorithm(This,value) )
    ( (This)->lpVtbl->put_MustEncryptSmimeMessages(This,value) )
    ( (This)->lpVtbl->put_MustSignSmimeMessages(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxPolicies3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailboxSyncManager[] = L"Windows.ApplicationModel.Email.IEmailMailboxSyncManager";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxSyncStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastSuccessfulSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastAttemptedSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *SyncAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SyncStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CEmailMailboxSyncManager_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SyncStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManagerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_LastSuccessfulSyncTime(This,value) )
    ( (This)->lpVtbl->get_LastAttemptedSyncTime(This,value) )
    ( (This)->lpVtbl->SyncAsync(This,result) )
    ( (This)->lpVtbl->add_SyncStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SyncStatusChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMailboxSyncManager2[] = L"Windows.ApplicationModel.Email.IEmailMailboxSyncManager2";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Status )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager2 * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxSyncStatus value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LastSuccessfulSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager2 * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LastAttemptedSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager2 * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Status(This,value) )
    ( (This)->lpVtbl->put_LastSuccessfulSyncTime(This,value) )
    ( (This)->lpVtbl->put_LastAttemptedSyncTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxSyncManager2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailManagerForUser[] = L"Windows.ApplicationModel.Email.IEmailManagerForUser";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerForUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerForUser * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerForUser * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerForUser * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerForUser * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerForUser * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerForUser * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ShowComposeNewEmailAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerForUser * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * message,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerForUser * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailStoreAccessType accessType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerForUser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerForUserVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerForUser
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerForUserVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowComposeNewEmailAsync(This,message,result) )
    ( (This)->lpVtbl->RequestStoreAsync(This,accessType,result) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerForUser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailManagerStatics[] = L"Windows.ApplicationModel.Email.IEmailManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ShowComposeNewEmailAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * message,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowComposeNewEmailAsync(This,message,asyncAction) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailManagerStatics2[] = L"Windows.ApplicationModel.Email.IEmailManagerStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics2 * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailStoreAccessType accessType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailStore * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestStoreAsync(This,accessType,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailManagerStatics3[] = L"Windows.ApplicationModel.Email.IEmailManagerStatics3";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerForUser * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailManagerStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMeetingInfo[] = L"Windows.ApplicationModel.Email.IEmailMeetingInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllowNewTimeProposal )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowNewTimeProposal )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppointmentRoamingId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AppointmentRoamingId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppointmentOriginalStartTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AppointmentOriginalStartTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAllDay )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsAllDay )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsResponseRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsResponseRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Location )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProposedStartTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * proposedStartTime
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProposedStartTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * proposedStartTime
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProposedDuration )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * duration
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProposedDuration )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * duration
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RecurrenceStartTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RecurrenceStartTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Recurrence )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Recurrence )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteChangeNumber )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RemoteChangeNumber )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                  UINT64 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllowNewTimeProposal(This,value) )
    ( (This)->lpVtbl->put_AllowNewTimeProposal(This,value) )
    ( (This)->lpVtbl->get_AppointmentRoamingId(This,value) )
    ( (This)->lpVtbl->put_AppointmentRoamingId(This,value) )
    ( (This)->lpVtbl->get_AppointmentOriginalStartTime(This,value) )
    ( (This)->lpVtbl->put_AppointmentOriginalStartTime(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->put_Duration(This,value) )
    ( (This)->lpVtbl->get_IsAllDay(This,value) )
    ( (This)->lpVtbl->put_IsAllDay(This,value) )
    ( (This)->lpVtbl->get_IsResponseRequested(This,value) )
    ( (This)->lpVtbl->put_IsResponseRequested(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->put_Location(This,value) )
    ( (This)->lpVtbl->get_ProposedStartTime(This,proposedStartTime) )
    ( (This)->lpVtbl->put_ProposedStartTime(This,proposedStartTime) )
    ( (This)->lpVtbl->get_ProposedDuration(This,duration) )
    ( (This)->lpVtbl->put_ProposedDuration(This,duration) )
    ( (This)->lpVtbl->get_RecurrenceStartTime(This,value) )
    ( (This)->lpVtbl->put_RecurrenceStartTime(This,value) )
    ( (This)->lpVtbl->get_Recurrence(This,value) )
    ( (This)->lpVtbl->put_Recurrence(This,value) )
    ( (This)->lpVtbl->get_RemoteChangeNumber(This,value) )
    ( (This)->lpVtbl->put_RemoteChangeNumber(This,value) )
    ( (This)->lpVtbl->get_StartTime(This,value) )
    ( (This)->lpVtbl->put_StartTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMeetingInfo2[] = L"Windows.ApplicationModel.Email.IEmailMeetingInfo2";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsReportedOutOfDateByServer )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsReportedOutOfDateByServer(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMessage[] = L"Windows.ApplicationModel.Email.IEmailMessage";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Subject )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Body )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Body )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_To )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CC )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bcc )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Attachments )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CEmail__CEmailAttachment * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Subject(This,value) )
    ( (This)->lpVtbl->put_Subject(This,value) )
    ( (This)->lpVtbl->get_Body(This,value) )
    ( (This)->lpVtbl->put_Body(This,value) )
    ( (This)->lpVtbl->get_To(This,value) )
    ( (This)->lpVtbl->get_CC(This,value) )
    ( (This)->lpVtbl->get_Bcc(This,value) )
    ( (This)->lpVtbl->get_Attachments(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMessage2[] = L"Windows.ApplicationModel.Email.IEmailMessage2";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConversationId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FolderId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowInternetImages )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowInternetImages )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChangeNumber )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DownloadState )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageDownloadState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DownloadState )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageDownloadState value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EstimatedDownloadSizeInBytes )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EstimatedDownloadSizeInBytes )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FlagState )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailFlagState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FlagState )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailFlagState value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasPartialBodies )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Importance )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailImportance * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Importance )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailImportance value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InResponseToMessageId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IrmInfo )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IrmInfo )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailIrmInfo * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDraftMessage )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRead )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsRead )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSeen )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsSeen )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsServerSearchMessage )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSmartSendable )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MessageClass )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MessageClass )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NormalizedSubject )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OriginalCodePage )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OriginalCodePage )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Preview )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Preview )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastResponseKind )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageResponseKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LastResponseKind )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageResponseKind value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sender )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Sender )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SentTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SentTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MeetingInfo )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MeetingInfo )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMeetingInfo * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBodyStream )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageBodyKind type,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetBodyStream )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2 * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageBodyKind type,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * stream
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_RemoteId(This,value) )
    ( (This)->lpVtbl->put_RemoteId(This,value) )
    ( (This)->lpVtbl->get_MailboxId(This,value) )
    ( (This)->lpVtbl->get_ConversationId(This,value) )
    ( (This)->lpVtbl->get_FolderId(This,value) )
    ( (This)->lpVtbl->get_AllowInternetImages(This,value) )
    ( (This)->lpVtbl->put_AllowInternetImages(This,value) )
    ( (This)->lpVtbl->get_ChangeNumber(This,value) )
    ( (This)->lpVtbl->get_DownloadState(This,value) )
    ( (This)->lpVtbl->put_DownloadState(This,value) )
    ( (This)->lpVtbl->get_EstimatedDownloadSizeInBytes(This,value) )
    ( (This)->lpVtbl->put_EstimatedDownloadSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_FlagState(This,value) )
    ( (This)->lpVtbl->put_FlagState(This,value) )
    ( (This)->lpVtbl->get_HasPartialBodies(This,value) )
    ( (This)->lpVtbl->get_Importance(This,value) )
    ( (This)->lpVtbl->put_Importance(This,value) )
    ( (This)->lpVtbl->get_InResponseToMessageId(This,value) )
    ( (This)->lpVtbl->get_IrmInfo(This,value) )
    ( (This)->lpVtbl->put_IrmInfo(This,value) )
    ( (This)->lpVtbl->get_IsDraftMessage(This,value) )
    ( (This)->lpVtbl->get_IsRead(This,value) )
    ( (This)->lpVtbl->put_IsRead(This,value) )
    ( (This)->lpVtbl->get_IsSeen(This,value) )
    ( (This)->lpVtbl->put_IsSeen(This,value) )
    ( (This)->lpVtbl->get_IsServerSearchMessage(This,value) )
    ( (This)->lpVtbl->get_IsSmartSendable(This,value) )
    ( (This)->lpVtbl->get_MessageClass(This,value) )
    ( (This)->lpVtbl->put_MessageClass(This,value) )
    ( (This)->lpVtbl->get_NormalizedSubject(This,value) )
    ( (This)->lpVtbl->get_OriginalCodePage(This,value) )
    ( (This)->lpVtbl->put_OriginalCodePage(This,value) )
    ( (This)->lpVtbl->get_Preview(This,value) )
    ( (This)->lpVtbl->put_Preview(This,value) )
    ( (This)->lpVtbl->get_LastResponseKind(This,value) )
    ( (This)->lpVtbl->put_LastResponseKind(This,value) )
    ( (This)->lpVtbl->get_Sender(This,value) )
    ( (This)->lpVtbl->put_Sender(This,value) )
    ( (This)->lpVtbl->get_SentTime(This,value) )
    ( (This)->lpVtbl->put_SentTime(This,value) )
    ( (This)->lpVtbl->get_MeetingInfo(This,value) )
    ( (This)->lpVtbl->put_MeetingInfo(This,value) )
    ( (This)->lpVtbl->GetBodyStream(This,type,result) )
    ( (This)->lpVtbl->SetBodyStream(This,type,stream) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMessage3[] = L"Windows.ApplicationModel.Email.IEmailMessage3";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SmimeData )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SmimeData )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SmimeKind )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage3 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageSmimeKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SmimeKind )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage3 * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageSmimeKind value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SmimeData(This,value) )
    ( (This)->lpVtbl->put_SmimeData(This,value) )
    ( (This)->lpVtbl->get_SmimeKind(This,value) )
    ( (This)->lpVtbl->put_SmimeKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMessage4[] = L"Windows.ApplicationModel.Email.IEmailMessage4";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ReplyTo )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage4 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CEmail__CEmailRecipient * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SentRepresenting )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SentRepresenting )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage4Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage4
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ReplyTo(This,value) )
    ( (This)->lpVtbl->get_SentRepresenting(This,value) )
    ( (This)->lpVtbl->put_SentRepresenting(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMessageBatch[] = L"Windows.ApplicationModel.Email.IEmailMessageBatch";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageBatchVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageBatch * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageBatch * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageBatch * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageBatch * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageBatch * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageBatch * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Messages )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageBatch * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMessage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageBatch * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailBatchStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageBatchVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageBatch
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageBatchVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Messages(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageBatch;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailMessageReader[] = L"Windows.ApplicationModel.Email.IEmailMessageReader";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReadBatchAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessageBatch * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReaderVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReader
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReadBatchAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailQueryOptions[] = L"Windows.ApplicationModel.Email.IEmailQueryOptions";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TextSearch )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearch * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SortDirection )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySortDirection * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SortDirection )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySortDirection value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SortProperty )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySortProperty * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SortProperty )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySortProperty value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQueryKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Kind )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQueryKind value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FolderIds )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TextSearch(This,value) )
    ( (This)->lpVtbl->get_SortDirection(This,value) )
    ( (This)->lpVtbl->put_SortDirection(This,value) )
    ( (This)->lpVtbl->get_SortProperty(This,value) )
    ( (This)->lpVtbl->put_SortProperty(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->put_Kind(This,value) )
    ( (This)->lpVtbl->get_FolderIds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailQueryOptionsFactory[] = L"Windows.ApplicationModel.Email.IEmailQueryOptionsFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithText )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsFactory * This,
                  __RPC__in HSTRING text,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithTextAndFields )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsFactory * This,
                  __RPC__in HSTRING text,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySearchFields fields,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithText(This,text,result) )
    ( (This)->lpVtbl->CreateWithTextAndFields(This,text,fields,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptionsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailQueryTextSearch[] = L"Windows.ApplicationModel.Email.IEmailQueryTextSearch";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearchVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearch * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearch * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearch * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearch * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearch * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearch * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Fields )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearch * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySearchFields * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Fields )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearch * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySearchFields value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SearchScope )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearch * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySearchScope * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SearchScope )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearch * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailQuerySearchScope value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearch * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearch * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearchVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearch
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearchVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Fields(This,value) )
    ( (This)->lpVtbl->put_Fields(This,value) )
    ( (This)->lpVtbl->get_SearchScope(This,value) )
    ( (This)->lpVtbl->put_SearchScope(This,value) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->put_Text(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryTextSearch;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailRecipient[] = L"Windows.ApplicationModel.Email.IEmailRecipient";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Address )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Address )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_Address(This,value) )
    ( (This)->lpVtbl->put_Address(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailRecipientFactory[] = L"Windows.ApplicationModel.Email.IEmailRecipientFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientFactory * This,
                  __RPC__in HSTRING address,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithName )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientFactory * This,
                  __RPC__in HSTRING address,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,address,result) )
    ( (This)->lpVtbl->CreateWithName(This,address,name,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailRecipientResolutionResult[] = L"Windows.ApplicationModel.Email.IEmailRecipientResolutionResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailRecipientResolutionStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublicKeys )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_PublicKeys(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailRecipientResolutionResult2[] = L"Windows.ApplicationModel.Email.IEmailRecipientResolutionResult2";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Status )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult2 * This,
                  __x_ABI_CWindows_CApplicationModel_CEmail_CEmailRecipientResolutionStatus value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPublicKeys )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult2 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Status(This,value) )
    ( (This)->lpVtbl->SetPublicKeys(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailStore[] = L"Windows.ApplicationModel.Email.IEmailStore";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindMailboxesAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetConversationReader )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReader * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetConversationReaderWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailConversationReader * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetMessageReader )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReader * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetMessageReaderWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessageReader * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetMailboxAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetConversationAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailConversation * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetFolderAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailFolder * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMessage * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateMailboxAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * This,
                  __RPC__in HSTRING accountName,
                  __RPC__in HSTRING accountAddress,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateMailboxInAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore * This,
                  __RPC__in HSTRING accountName,
                  __RPC__in HSTRING accountAddress,
                  __RPC__in HSTRING userDataAccountId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CEmail__CEmailMailbox * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStoreVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStoreVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindMailboxesAsync(This,result) )
    ( (This)->lpVtbl->GetConversationReader(This,result) )
    ( (This)->lpVtbl->GetConversationReaderWithOptions(This,options,result) )
    ( (This)->lpVtbl->GetMessageReader(This,result) )
    ( (This)->lpVtbl->GetMessageReaderWithOptions(This,options,result) )
    ( (This)->lpVtbl->GetMailboxAsync(This,id,result) )
    ( (This)->lpVtbl->GetConversationAsync(This,id,result) )
    ( (This)->lpVtbl->GetFolderAsync(This,id,result) )
    ( (This)->lpVtbl->GetMessageAsync(This,id,result) )
    ( (This)->lpVtbl->CreateMailboxAsync(This,accountName,accountAddress,result) )
    ( (This)->lpVtbl->CreateMailboxInAccountAsync(This,accountName,accountAddress,userDataAccountId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStore;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_IEmailStoreNotificationTriggerDetails[] = L"Windows.ApplicationModel.Email.IEmailStoreNotificationTriggerDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStoreNotificationTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStoreNotificationTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStoreNotificationTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStoreNotificationTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStoreNotificationTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStoreNotificationTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStoreNotificationTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStoreNotificationTriggerDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStoreNotificationTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStoreNotificationTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CIEmailStoreNotificationTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailAttachment[] = L"Windows.ApplicationModel.Email.EmailAttachment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailConversation[] = L"Windows.ApplicationModel.Email.EmailConversation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailConversationBatch[] = L"Windows.ApplicationModel.Email.EmailConversationBatch";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailConversationReader[] = L"Windows.ApplicationModel.Email.EmailConversationReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailFolder[] = L"Windows.ApplicationModel.Email.EmailFolder";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailIrmInfo[] = L"Windows.ApplicationModel.Email.EmailIrmInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailIrmTemplate[] = L"Windows.ApplicationModel.Email.EmailIrmTemplate";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailItemCounts[] = L"Windows.ApplicationModel.Email.EmailItemCounts";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailMailbox[] = L"Windows.ApplicationModel.Email.EmailMailbox";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxAction[] = L"Windows.ApplicationModel.Email.EmailMailboxAction";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxAutoReply[] = L"Windows.ApplicationModel.Email.EmailMailboxAutoReply";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxAutoReplySettings[] = L"Windows.ApplicationModel.Email.EmailMailboxAutoReplySettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxCapabilities[] = L"Windows.ApplicationModel.Email.EmailMailboxCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxChange[] = L"Windows.ApplicationModel.Email.EmailMailboxChange";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxChangeReader[] = L"Windows.ApplicationModel.Email.EmailMailboxChangeReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxChangeTracker[] = L"Windows.ApplicationModel.Email.EmailMailboxChangeTracker";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxChangedDeferral[] = L"Windows.ApplicationModel.Email.EmailMailboxChangedDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxChangedEventArgs[] = L"Windows.ApplicationModel.Email.EmailMailboxChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxCreateFolderResult[] = L"Windows.ApplicationModel.Email.EmailMailboxCreateFolderResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxPolicies[] = L"Windows.ApplicationModel.Email.EmailMailboxPolicies";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxSyncManager[] = L"Windows.ApplicationModel.Email.EmailMailboxSyncManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailManager[] = L"Windows.ApplicationModel.Email.EmailManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailManagerForUser[] = L"Windows.ApplicationModel.Email.EmailManagerForUser";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailMeetingInfo[] = L"Windows.ApplicationModel.Email.EmailMeetingInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailMessage[] = L"Windows.ApplicationModel.Email.EmailMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailMessageBatch[] = L"Windows.ApplicationModel.Email.EmailMessageBatch";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailMessageReader[] = L"Windows.ApplicationModel.Email.EmailMessageReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailQueryOptions[] = L"Windows.ApplicationModel.Email.EmailQueryOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailQueryTextSearch[] = L"Windows.ApplicationModel.Email.EmailQueryTextSearch";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailRecipient[] = L"Windows.ApplicationModel.Email.EmailRecipient";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailRecipientResolutionResult[] = L"Windows.ApplicationModel.Email.EmailRecipientResolutionResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailStore[] = L"Windows.ApplicationModel.Email.EmailStore";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_EmailStoreNotificationTriggerDetails[] = L"Windows.ApplicationModel.Email.EmailStoreNotificationTriggerDetails";
       
       
#pragma clang diagnostic pop
